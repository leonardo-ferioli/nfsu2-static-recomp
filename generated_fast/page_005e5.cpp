#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_40c(u8* __restrict R,Cpu& c);
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_48b(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_5d4(u8* __restrict R,Cpu& c);
u32 body_5d5(u8* __restrict R,Cpu& c);
u32 body_5d6(u8* __restrict R,Cpu& c);
u32 body_5d8(u8* __restrict R,Cpu& c);
u32 body_5d9(u8* __restrict R,Cpu& c);
u32 body_5da(u8* __restrict R,Cpu& c);
u32 body_5df(u8* __restrict R,Cpu& c);
u32 body_5e0(u8* __restrict R,Cpu& c);
u32 body_5e3(u8* __restrict R,Cpu& c);
u32 body_5e4(u8* __restrict R,Cpu& c);
u32 body_5e6(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5e5,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5e5,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5e5(u8* __restrict R,Cpu& c);
u32 page_5e5(Cpu& c){return body_5e5(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5e5(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5e5005:goto L5e5005;
case 0x5e5006:c.instructions+=5;goto B5e5006;
case 0x5e5007:c.instructions+=4;goto B5e5007;
case 0x5e5008:c.instructions+=3;goto B5e5008;
case 0x5e500c:c.instructions+=2;goto B5e500c;
case 0x5e500d:c.instructions+=1;goto B5e500d;
case 0x5e5012:goto L5e5012;
case 0x5e5015:c.instructions+=4;goto B5e5015;
case 0x5e5019:c.instructions+=3;goto B5e5019;
case 0x5e501a:c.instructions+=2;goto B5e501a;
case 0x5e501f:c.instructions+=1;goto B5e501f;
case 0x5e5024:goto L5e5024;
case 0x5e5026:c.instructions+=1;goto B5e5026;
case 0x5e5028:goto L5e5028;
case 0x5e502a:c.instructions+=2;goto B5e502a;
case 0x5e502d:c.instructions+=1;goto B5e502d;
case 0x5e5030:goto L5e5030;
case 0x5e5032:c.instructions+=2;goto B5e5032;
case 0x5e5034:c.instructions+=1;goto B5e5034;
case 0x5e5036:goto L5e5036;
case 0x5e503a:c.instructions+=2;goto B5e503a;
case 0x5e503c:c.instructions+=1;goto B5e503c;
case 0x5e503e:goto L5e503e;
case 0x5e503f:c.instructions+=3;goto B5e503f;
case 0x5e5042:c.instructions+=2;goto B5e5042;
case 0x5e5045:c.instructions+=1;goto B5e5045;
case 0x5e5047:goto L5e5047;
case 0x5e5049:goto L5e5049;
case 0x5e504d:c.instructions+=2;goto B5e504d;
case 0x5e5051:c.instructions+=1;goto B5e5051;
case 0x5e5056:goto L5e5056;
case 0x5e5057:c.instructions+=4;goto B5e5057;
case 0x5e5059:c.instructions+=3;goto B5e5059;
case 0x5e505a:c.instructions+=2;goto B5e505a;
case 0x5e505f:c.instructions+=1;goto B5e505f;
case 0x5e5064:goto L5e5064;
case 0x5e5066:c.instructions+=2;goto B5e5066;
case 0x5e5068:c.instructions+=1;goto B5e5068;
case 0x5e506e:goto L5e506e;
case 0x5e5072:c.instructions+=2;goto B5e5072;
case 0x5e5074:c.instructions+=1;goto B5e5074;
case 0x5e5076:goto L5e5076;
case 0x5e507b:c.instructions+=4;goto B5e507b;
case 0x5e507f:c.instructions+=3;goto B5e507f;
case 0x5e5080:c.instructions+=2;goto B5e5080;
case 0x5e5081:c.instructions+=1;goto B5e5081;
case 0x5e5086:goto L5e5086;
case 0x5e5089:c.instructions+=2;goto B5e5089;
case 0x5e508b:c.instructions+=1;goto B5e508b;
case 0x5e508d:goto L5e508d;
case 0x5e5091:c.instructions+=4;goto B5e5091;
case 0x5e5094:c.instructions+=3;goto B5e5094;
case 0x5e5096:c.instructions+=2;goto B5e5096;
case 0x5e5098:c.instructions+=1;goto B5e5098;
case 0x5e509a:goto L5e509a;
case 0x5e50a0:goto L5e50a0;
case 0x5e50a3:c.instructions+=8;goto B5e50a3;
case 0x5e50a7:c.instructions+=7;goto B5e50a7;
case 0x5e50a8:c.instructions+=6;goto B5e50a8;
case 0x5e50aa:c.instructions+=5;goto B5e50aa;
case 0x5e50ab:c.instructions+=4;goto B5e50ab;
case 0x5e50ae:c.instructions+=3;goto B5e50ae;
case 0x5e50af:c.instructions+=2;goto B5e50af;
case 0x5e50b0:c.instructions+=1;goto B5e50b0;
case 0x5e50b5:goto L5e50b5;
case 0x5e50b8:c.instructions+=2;goto B5e50b8;
case 0x5e50ba:c.instructions+=1;goto B5e50ba;
case 0x5e50bc:goto L5e50bc;
case 0x5e50c1:c.instructions+=1;goto B5e50c1;
case 0x5e50c9:goto L5e50c9;
case 0x5e50cc:c.instructions+=4;goto B5e50cc;
case 0x5e50cd:c.instructions+=3;goto B5e50cd;
case 0x5e50d0:c.instructions+=2;goto B5e50d0;
case 0x5e50d2:c.instructions+=1;goto B5e50d2;
case 0x5e50d4:goto L5e50d4;
case 0x5e50d8:c.instructions+=2;goto B5e50d8;
case 0x5e50da:c.instructions+=1;goto B5e50da;
case 0x5e50dc:goto L5e50dc;
case 0x5e50dd:c.instructions+=2;goto B5e50dd;
case 0x5e50e2:c.instructions+=1;goto B5e50e2;
case 0x5e50e7:goto L5e50e7;
case 0x5e50e9:c.instructions+=1;goto B5e50e9;
case 0x5e50eb:goto L5e50eb;
case 0x5e50ef:c.instructions+=6;goto B5e50ef;
case 0x5e50f0:c.instructions+=5;goto B5e50f0;
case 0x5e50f1:c.instructions+=4;goto B5e50f1;
case 0x5e50f2:c.instructions+=3;goto B5e50f2;
case 0x5e50f3:c.instructions+=2;goto B5e50f3;
case 0x5e50f6:c.instructions+=1;goto B5e50f6;
case 0x5e50f9:goto L5e50f9;
case 0x5e50fe:c.instructions+=6;goto B5e50fe;
case 0x5e50ff:c.instructions+=5;goto B5e50ff;
case 0x5e5100:c.instructions+=4;goto B5e5100;
case 0x5e5101:c.instructions+=3;goto B5e5101;
case 0x5e5102:c.instructions+=2;goto B5e5102;
case 0x5e5105:c.instructions+=1;goto B5e5105;
case 0x5e5110:goto L5e5110;
case 0x5e5111:c.instructions+=10;goto B5e5111;
case 0x5e5113:c.instructions+=9;goto B5e5113;
case 0x5e5116:c.instructions+=8;goto B5e5116;
case 0x5e511c:c.instructions+=7;goto B5e511c;
case 0x5e511d:c.instructions+=6;goto B5e511d;
case 0x5e511e:c.instructions+=5;goto B5e511e;
case 0x5e511f:c.instructions+=4;goto B5e511f;
case 0x5e5121:c.instructions+=3;goto B5e5121;
case 0x5e5122:c.instructions+=2;goto B5e5122;
case 0x5e5126:c.instructions+=1;goto B5e5126;
case 0x5e512b:goto L5e512b;
case 0x5e5130:c.instructions+=6;goto B5e5130;
case 0x5e5132:c.instructions+=5;goto B5e5132;
case 0x5e5139:c.instructions+=4;goto B5e5139;
case 0x5e5140:c.instructions+=3;goto B5e5140;
case 0x5e5147:c.instructions+=2;goto B5e5147;
case 0x5e514c:c.instructions+=1;goto B5e514c;
case 0x5e514e:goto L5e514e;
case 0x5e5155:c.instructions+=1;goto B5e5155;
case 0x5e5157:goto L5e5157;
case 0x5e5159:goto L5e5159;
case 0x5e515e:c.instructions+=2;goto B5e515e;
case 0x5e5163:c.instructions+=1;goto B5e5163;
case 0x5e5165:goto L5e5165;
case 0x5e5168:c.instructions+=1;goto B5e5168;
case 0x5e516a:goto L5e516a;
case 0x5e516c:c.instructions+=2;goto B5e516c;
case 0x5e5171:c.instructions+=1;goto B5e5171;
case 0x5e5173:goto L5e5173;
case 0x5e5175:goto L5e5175;
case 0x5e5178:c.instructions+=2;goto B5e5178;
case 0x5e517a:c.instructions+=1;goto B5e517a;
case 0x5e517c:goto L5e517c;
case 0x5e517e:c.instructions+=3;goto B5e517e;
case 0x5e5180:c.instructions+=2;goto B5e5180;
case 0x5e5183:c.instructions+=1;goto B5e5183;
case 0x5e5187:goto L5e5187;
case 0x5e5189:goto L5e5189;
case 0x5e518b:goto L5e518b;
case 0x5e518e:goto L5e518e;
case 0x5e5191:goto L5e5191;
case 0x5e5196:c.instructions+=2;goto B5e5196;
case 0x5e5198:c.instructions+=1;goto B5e5198;
case 0x5e519a:goto L5e519a;
case 0x5e519f:c.instructions+=2;goto B5e519f;
case 0x5e51a1:c.instructions+=1;goto B5e51a1;
case 0x5e51a3:goto L5e51a3;
case 0x5e51a8:c.instructions+=1;goto B5e51a8;
case 0x5e51a9:goto L5e51a9;
case 0x5e51b0:c.instructions+=2;goto B5e51b0;
case 0x5e51b3:c.instructions+=1;goto B5e51b3;
case 0x5e51b5:goto L5e51b5;
case 0x5e51ba:c.instructions+=1;goto B5e51ba;
case 0x5e51bb:goto L5e51bb;
case 0x5e51c2:c.instructions+=2;goto B5e51c2;
case 0x5e51c5:c.instructions+=1;goto B5e51c5;
case 0x5e51c7:goto L5e51c7;
case 0x5e51cc:c.instructions+=1;goto B5e51cc;
case 0x5e51cd:goto L5e51cd;
case 0x5e51d4:c.instructions+=2;goto B5e51d4;
case 0x5e51d7:c.instructions+=1;goto B5e51d7;
case 0x5e51d9:goto L5e51d9;
case 0x5e51de:c.instructions+=1;goto B5e51de;
case 0x5e51df:goto L5e51df;
case 0x5e51e6:c.instructions+=2;goto B5e51e6;
case 0x5e51e9:c.instructions+=1;goto B5e51e9;
case 0x5e51eb:goto L5e51eb;
case 0x5e51f0:c.instructions+=1;goto B5e51f0;
case 0x5e51f1:goto L5e51f1;
case 0x5e51f3:c.instructions+=5;goto B5e51f3;
case 0x5e51f4:c.instructions+=4;goto B5e51f4;
case 0x5e51f8:c.instructions+=3;goto B5e51f8;
case 0x5e51f9:c.instructions+=2;goto B5e51f9;
case 0x5e51fb:c.instructions+=1;goto B5e51fb;
case 0x5e5200:goto L5e5200;
case 0x5e5202:c.instructions+=5;goto B5e5202;
case 0x5e5203:c.instructions+=4;goto B5e5203;
case 0x5e5207:c.instructions+=3;goto B5e5207;
case 0x5e5208:c.instructions+=2;goto B5e5208;
case 0x5e520a:c.instructions+=1;goto B5e520a;
case 0x5e520f:goto L5e520f;
case 0x5e5211:c.instructions+=4;goto B5e5211;
case 0x5e5213:c.instructions+=3;goto B5e5213;
case 0x5e5219:c.instructions+=2;goto B5e5219;
case 0x5e521d:c.instructions+=1;goto B5e521d;
case 0x5e5220:goto L5e5220;
case 0x5e5223:c.instructions+=2;goto B5e5223;
case 0x5e5226:c.instructions+=1;goto B5e5226;
case 0x5e522c:goto L5e522c;
case 0x5e5232:c.instructions+=2;goto B5e5232;
case 0x5e5238:c.instructions+=1;goto B5e5238;
case 0x5e523a:goto L5e523a;
case 0x5e5240:goto L5e5240;
case 0x5e5244:c.instructions+=3;goto B5e5244;
case 0x5e5246:c.instructions+=2;goto B5e5246;
case 0x5e5248:c.instructions+=1;goto B5e5248;
case 0x5e524a:goto L5e524a;
case 0x5e524d:c.instructions+=1;goto B5e524d;
case 0x5e5250:goto L5e5250;
case 0x5e5253:c.instructions+=1;goto B5e5253;
case 0x5e5259:goto L5e5259;
case 0x5e525a:c.instructions+=3;goto B5e525a;
case 0x5e525d:c.instructions+=2;goto B5e525d;
case 0x5e525f:c.instructions+=1;goto B5e525f;
case 0x5e5261:goto L5e5261;
case 0x5e5263:c.instructions+=2;goto B5e5263;
case 0x5e5269:c.instructions+=1;goto B5e5269;
case 0x5e526b:goto L5e526b;
case 0x5e5271:c.instructions+=2;goto B5e5271;
case 0x5e5277:c.instructions+=1;goto B5e5277;
case 0x5e5279:goto L5e5279;
case 0x5e527d:c.instructions+=1;goto B5e527d;
case 0x5e5280:goto L5e5280;
case 0x5e5284:c.instructions+=1;goto B5e5284;
case 0x5e5286:goto L5e5286;
case 0x5e5288:c.instructions+=2;goto B5e5288;
case 0x5e528e:c.instructions+=1;goto B5e528e;
case 0x5e5290:goto L5e5290;
case 0x5e5292:goto L5e5292;
case 0x5e5295:c.instructions+=2;goto B5e5295;
case 0x5e5297:c.instructions+=1;goto B5e5297;
case 0x5e5299:goto L5e5299;
case 0x5e529c:c.instructions+=3;goto B5e529c;
case 0x5e529e:c.instructions+=2;goto B5e529e;
case 0x5e52a0:c.instructions+=1;goto B5e52a0;
case 0x5e52a4:goto L5e52a4;
case 0x5e52a6:goto L5e52a6;
case 0x5e52a8:goto L5e52a8;
case 0x5e52ab:goto L5e52ab;
case 0x5e52ad:goto L5e52ad;
case 0x5e52b1:c.instructions+=5;goto B5e52b1;
case 0x5e52b2:c.instructions+=4;goto B5e52b2;
case 0x5e52b3:c.instructions+=3;goto B5e52b3;
case 0x5e52b7:c.instructions+=2;goto B5e52b7;
case 0x5e52b8:c.instructions+=1;goto B5e52b8;
case 0x5e52bd:goto L5e52bd;
case 0x5e52bf:goto L5e52bf;
case 0x5e52c3:c.instructions+=5;goto B5e52c3;
case 0x5e52c4:c.instructions+=4;goto B5e52c4;
case 0x5e52c7:c.instructions+=3;goto B5e52c7;
case 0x5e52ca:c.instructions+=2;goto B5e52ca;
case 0x5e52ce:c.instructions+=1;goto B5e52ce;
case 0x5e52d4:goto L5e52d4;
case 0x5e52d5:c.instructions+=6;goto B5e52d5;
case 0x5e52d6:c.instructions+=5;goto B5e52d6;
case 0x5e52d7:c.instructions+=4;goto B5e52d7;
case 0x5e52d8:c.instructions+=3;goto B5e52d8;
case 0x5e52da:c.instructions+=2;goto B5e52da;
case 0x5e52db:c.instructions+=1;goto B5e52db;
case 0x5e52dc:goto L5e52dc;
case 0x5e52e1:c.instructions+=5;goto B5e52e1;
case 0x5e52e5:c.instructions+=4;goto B5e52e5;
case 0x5e52e6:c.instructions+=3;goto B5e52e6;
case 0x5e52e7:c.instructions+=2;goto B5e52e7;
case 0x5e52ec:c.instructions+=1;goto B5e52ec;
case 0x5e52f1:goto L5e52f1;
case 0x5e5300:goto L5e5300;
case 0x5e5301:c.instructions+=9;goto B5e5301;
case 0x5e5302:c.instructions+=8;goto B5e5302;
case 0x5e5303:c.instructions+=7;goto B5e5303;
case 0x5e5307:c.instructions+=6;goto B5e5307;
case 0x5e5308:c.instructions+=5;goto B5e5308;
case 0x5e530a:c.instructions+=4;goto B5e530a;
case 0x5e530b:c.instructions+=3;goto B5e530b;
case 0x5e5310:c.instructions+=2;goto B5e5310;
case 0x5e5312:c.instructions+=1;goto B5e5312;
case 0x5e5318:goto L5e5318;
case 0x5e531b:c.instructions+=3;goto B5e531b;
case 0x5e531e:c.instructions+=2;goto B5e531e;
case 0x5e5320:c.instructions+=1;goto B5e5320;
case 0x5e5322:goto L5e5322;
case 0x5e5325:c.instructions+=3;goto B5e5325;
case 0x5e5326:c.instructions+=2;goto B5e5326;
case 0x5e5328:c.instructions+=1;goto B5e5328;
case 0x5e532d:goto L5e532d;
case 0x5e5331:c.instructions+=2;goto B5e5331;
case 0x5e5333:c.instructions+=1;goto B5e5333;
case 0x5e5335:goto L5e5335;
case 0x5e5336:c.instructions+=2;goto B5e5336;
case 0x5e5338:c.instructions+=1;goto B5e5338;
case 0x5e533a:goto L5e533a;
case 0x5e533d:c.instructions+=2;goto B5e533d;
case 0x5e5341:c.instructions+=1;goto B5e5341;
case 0x5e5343:goto L5e5343;
case 0x5e5349:c.instructions+=1;goto B5e5349;
case 0x5e534b:goto L5e534b;
case 0x5e5351:goto L5e5351;
case 0x5e5353:c.instructions+=3;goto B5e5353;
case 0x5e5357:c.instructions+=2;goto B5e5357;
case 0x5e535a:c.instructions+=1;goto B5e535a;
case 0x5e535c:goto L5e535c;
case 0x5e535f:c.instructions+=1;goto B5e535f;
case 0x5e5361:goto L5e5361;
case 0x5e5363:goto L5e5363;
case 0x5e5366:c.instructions+=1;goto B5e5366;
case 0x5e5368:goto L5e5368;
case 0x5e536d:goto L5e536d;
case 0x5e5372:c.instructions+=4;goto B5e5372;
case 0x5e5373:c.instructions+=3;goto B5e5373;
case 0x5e5376:c.instructions+=2;goto B5e5376;
case 0x5e5379:c.instructions+=1;goto B5e5379;
case 0x5e537b:goto L5e537b;
case 0x5e5381:c.instructions+=8;goto B5e5381;
case 0x5e5385:c.instructions+=7;goto B5e5385;
case 0x5e5386:c.instructions+=6;goto B5e5386;
case 0x5e5387:c.instructions+=5;goto B5e5387;
case 0x5e5388:c.instructions+=4;goto B5e5388;
case 0x5e538a:c.instructions+=3;goto B5e538a;
case 0x5e538b:c.instructions+=2;goto B5e538b;
case 0x5e538c:c.instructions+=1;goto B5e538c;
case 0x5e5390:goto L5e5390;
case 0x5e5391:c.instructions+=3;goto B5e5391;
case 0x5e5397:c.instructions+=2;goto B5e5397;
case 0x5e539c:c.instructions+=1;goto B5e539c;
case 0x5e53a1:goto L5e53a1;
case 0x5e53a3:c.instructions+=1;goto B5e53a3;
case 0x5e53a5:goto L5e53a5;
case 0x5e53a9:c.instructions+=1;goto B5e53a9;
case 0x5e53b0:goto L5e53b0;
case 0x5e53b3:c.instructions+=1;goto B5e53b3;
case 0x5e53b5:goto L5e53b5;
case 0x5e53b7:c.instructions+=2;goto B5e53b7;
case 0x5e53b9:c.instructions+=1;goto B5e53b9;
case 0x5e53bb:goto L5e53bb;
case 0x5e53bc:c.instructions+=1;goto B5e53bc;
case 0x5e53bd:goto L5e53bd;
case 0x5e53c0:c.instructions+=1;goto B5e53c0;
case 0x5e53c2:goto L5e53c2;
case 0x5e53c4:c.instructions+=7;goto B5e53c4;
case 0x5e53c7:c.instructions+=6;goto B5e53c7;
case 0x5e53c9:c.instructions+=5;goto B5e53c9;
case 0x5e53cc:c.instructions+=4;goto B5e53cc;
case 0x5e53d1:c.instructions+=3;goto B5e53d1;
case 0x5e53d2:c.instructions+=2;goto B5e53d2;
case 0x5e53d3:c.instructions+=1;goto B5e53d3;
case 0x5e53d8:goto L5e53d8;
case 0x5e53dd:c.instructions+=3;goto B5e53dd;
case 0x5e53e0:c.instructions+=2;goto B5e53e0;
case 0x5e53e1:c.instructions+=1;goto B5e53e1;
case 0x5e53e6:goto L5e53e6;
case 0x5e53e7:c.instructions+=1;goto B5e53e7;
case 0x5e53f0:goto L5e53f0;
case 0x5e53f4:c.instructions+=2;goto B5e53f4;
case 0x5e53fa:c.instructions+=1;goto B5e53fa;
case 0x5e53fc:goto L5e53fc;
case 0x5e53fe:c.instructions+=7;goto B5e53fe;
case 0x5e5401:c.instructions+=6;goto B5e5401;
case 0x5e5403:c.instructions+=5;goto B5e5403;
case 0x5e5404:c.instructions+=4;goto B5e5404;
case 0x5e5407:c.instructions+=3;goto B5e5407;
case 0x5e540c:c.instructions+=2;goto B5e540c;
case 0x5e540d:c.instructions+=1;goto B5e540d;
case 0x5e5412:goto L5e5412;
case 0x5e5417:c.instructions+=3;goto B5e5417;
case 0x5e541a:c.instructions+=2;goto B5e541a;
case 0x5e541b:c.instructions+=1;goto B5e541b;
case 0x5e5420:goto L5e5420;
case 0x5e5430:goto L5e5430;
case 0x5e5431:c.instructions+=27;goto B5e5431;
case 0x5e5433:c.instructions+=26;goto B5e5433;
case 0x5e5436:c.instructions+=25;goto B5e5436;
case 0x5e5438:c.instructions+=24;goto B5e5438;
case 0x5e543d:c.instructions+=23;goto B5e543d;
case 0x5e5443:c.instructions+=22;goto B5e5443;
case 0x5e5444:c.instructions+=21;goto B5e5444;
case 0x5e544b:c.instructions+=20;goto B5e544b;
case 0x5e544e:c.instructions+=19;goto B5e544e;
case 0x5e544f:c.instructions+=18;goto B5e544f;
case 0x5e5450:c.instructions+=17;goto B5e5450;
case 0x5e5451:c.instructions+=16;goto B5e5451;
case 0x5e5455:c.instructions+=15;goto B5e5455;
case 0x5e5459:c.instructions+=14;goto B5e5459;
case 0x5e545a:c.instructions+=13;goto B5e545a;
case 0x5e545e:c.instructions+=12;goto B5e545e;
case 0x5e5462:c.instructions+=11;goto B5e5462;
case 0x5e5466:c.instructions+=10;goto B5e5466;
case 0x5e546a:c.instructions+=9;goto B5e546a;
case 0x5e5472:c.instructions+=8;goto B5e5472;
case 0x5e5476:c.instructions+=7;goto B5e5476;
case 0x5e547a:c.instructions+=6;goto B5e547a;
case 0x5e5480:c.instructions+=5;goto B5e5480;
case 0x5e5484:c.instructions+=4;goto B5e5484;
case 0x5e5489:c.instructions+=3;goto B5e5489;
case 0x5e548e:c.instructions+=2;goto B5e548e;
case 0x5e5494:c.instructions+=1;goto B5e5494;
case 0x5e5499:goto L5e5499;
case 0x5e549b:c.instructions+=2;goto B5e549b;
case 0x5e549f:c.instructions+=1;goto B5e549f;
case 0x5e54a5:goto L5e54a5;
case 0x5e54aa:c.instructions+=1;goto B5e54aa;
case 0x5e54af:goto L5e54af;
case 0x5e54b1:c.instructions+=1;goto B5e54b1;
case 0x5e54b5:goto L5e54b5;
case 0x5e54b7:c.instructions+=6;goto B5e54b7;
case 0x5e54bd:c.instructions+=5;goto B5e54bd;
case 0x5e54bf:c.instructions+=4;goto B5e54bf;
case 0x5e54c2:c.instructions+=3;goto B5e54c2;
case 0x5e54c6:c.instructions+=2;goto B5e54c6;
case 0x5e54cc:c.instructions+=1;goto B5e54cc;
case 0x5e54ce:goto L5e54ce;
case 0x5e54d0:goto L5e54d0;
case 0x5e54d3:c.instructions+=1;goto B5e54d3;
case 0x5e54d5:goto L5e54d5;
case 0x5e54da:goto L5e54da;
case 0x5e54db:c.instructions+=2;goto B5e54db;
case 0x5e54dd:c.instructions+=1;goto B5e54dd;
case 0x5e54e0:goto L5e54e0;
case 0x5e54e5:goto L5e54e5;
case 0x5e54e6:c.instructions+=2;goto B5e54e6;
case 0x5e54e7:c.instructions+=1;goto B5e54e7;
case 0x5e54ec:goto L5e54ec;
case 0x5e54ef:c.instructions+=3;goto B5e54ef;
case 0x5e54f3:c.instructions+=2;goto B5e54f3;
case 0x5e54f6:c.instructions+=1;goto B5e54f6;
case 0x5e54f9:goto L5e54f9;
case 0x5e54fb:c.instructions+=2;goto B5e54fb;
case 0x5e54fd:c.instructions+=1;goto B5e54fd;
case 0x5e54ff:goto L5e54ff;
case 0x5e5509:c.instructions+=7;goto B5e5509;
case 0x5e550b:c.instructions+=6;goto B5e550b;
case 0x5e550e:c.instructions+=5;goto B5e550e;
case 0x5e5510:c.instructions+=4;goto B5e5510;
case 0x5e5513:c.instructions+=3;goto B5e5513;
case 0x5e5516:c.instructions+=2;goto B5e5516;
case 0x5e5518:c.instructions+=1;goto B5e5518;
case 0x5e551a:goto L5e551a;
case 0x5e5520:c.instructions+=3;goto B5e5520;
case 0x5e5521:c.instructions+=2;goto B5e5521;
case 0x5e5522:c.instructions+=1;goto B5e5522;
case 0x5e5527:goto L5e5527;
case 0x5e552a:c.instructions+=1;goto B5e552a;
case 0x5e552c:goto L5e552c;
case 0x5e5530:c.instructions+=5;goto B5e5530;
case 0x5e5532:c.instructions+=4;goto B5e5532;
case 0x5e5536:c.instructions+=3;goto B5e5536;
case 0x5e553a:c.instructions+=2;goto B5e553a;
case 0x5e553d:c.instructions+=1;goto B5e553d;
case 0x5e553f:goto L5e553f;
case 0x5e5543:c.instructions+=2;goto B5e5543;
case 0x5e5547:c.instructions+=1;goto B5e5547;
case 0x5e554d:goto L5e554d;
case 0x5e5551:c.instructions+=3;goto B5e5551;
case 0x5e5555:c.instructions+=2;goto B5e5555;
case 0x5e5557:c.instructions+=1;goto B5e5557;
case 0x5e5559:goto L5e5559;
case 0x5e5560:goto L5e5560;
case 0x5e5562:c.instructions+=14;goto B5e5562;
case 0x5e5565:c.instructions+=13;goto B5e5565;
case 0x5e5567:c.instructions+=12;goto B5e5567;
case 0x5e556a:c.instructions+=11;goto B5e556a;
case 0x5e556d:c.instructions+=10;goto B5e556d;
case 0x5e5573:c.instructions+=9;goto B5e5573;
case 0x5e5575:c.instructions+=8;goto B5e5575;
case 0x5e5577:c.instructions+=7;goto B5e5577;
case 0x5e557c:c.instructions+=6;goto B5e557c;
case 0x5e557e:c.instructions+=5;goto B5e557e;
case 0x5e5584:c.instructions+=4;goto B5e5584;
case 0x5e5588:c.instructions+=3;goto B5e5588;
case 0x5e558c:c.instructions+=2;goto B5e558c;
case 0x5e558e:c.instructions+=1;goto B5e558e;
case 0x5e5590:goto L5e5590;
case 0x5e5594:c.instructions+=3;goto B5e5594;
case 0x5e5598:c.instructions+=2;goto B5e5598;
case 0x5e559a:c.instructions+=1;goto B5e559a;
case 0x5e559c:goto L5e559c;
case 0x5e55a0:goto L5e55a0;
case 0x5e55a3:c.instructions+=14;goto B5e55a3;
case 0x5e55a6:c.instructions+=13;goto B5e55a6;
case 0x5e55a9:c.instructions+=12;goto B5e55a9;
case 0x5e55ab:c.instructions+=11;goto B5e55ab;
case 0x5e55ae:c.instructions+=10;goto B5e55ae;
case 0x5e55b4:c.instructions+=9;goto B5e55b4;
case 0x5e55b6:c.instructions+=8;goto B5e55b6;
case 0x5e55b8:c.instructions+=7;goto B5e55b8;
case 0x5e55bd:c.instructions+=6;goto B5e55bd;
case 0x5e55c3:c.instructions+=5;goto B5e55c3;
case 0x5e55c5:c.instructions+=4;goto B5e55c5;
case 0x5e55c9:c.instructions+=3;goto B5e55c9;
case 0x5e55cd:c.instructions+=2;goto B5e55cd;
case 0x5e55cf:c.instructions+=1;goto B5e55cf;
case 0x5e55d1:goto L5e55d1;
case 0x5e55d5:goto L5e55d5;
case 0x5e55d9:c.instructions+=4;goto B5e55d9;
case 0x5e55db:c.instructions+=3;goto B5e55db;
case 0x5e55e5:c.instructions+=2;goto B5e55e5;
case 0x5e55ea:c.instructions+=1;goto B5e55ea;
case 0x5e55ec:goto L5e55ec;
case 0x5e55f0:goto L5e55f0;
case 0x5e55f2:c.instructions+=8;goto B5e55f2;
case 0x5e55f4:c.instructions+=7;goto B5e55f4;
case 0x5e55f7:c.instructions+=6;goto B5e55f7;
case 0x5e55f9:c.instructions+=5;goto B5e55f9;
case 0x5e55fc:c.instructions+=4;goto B5e55fc;
case 0x5e5602:c.instructions+=3;goto B5e5602;
case 0x5e5603:c.instructions+=2;goto B5e5603;
case 0x5e5604:c.instructions+=1;goto B5e5604;
case 0x5e5609:goto L5e5609;
case 0x5e560d:c.instructions+=4;goto B5e560d;
case 0x5e5611:c.instructions+=3;goto B5e5611;
case 0x5e5614:c.instructions+=2;goto B5e5614;
case 0x5e5616:c.instructions+=1;goto B5e5616;
case 0x5e5618:goto L5e5618;
case 0x5e561c:goto L5e561c;
case 0x5e5620:c.instructions+=3;goto B5e5620;
case 0x5e5622:c.instructions+=2;goto B5e5622;
case 0x5e562a:c.instructions+=1;goto B5e562a;
case 0x5e562c:goto L5e562c;
case 0x5e5630:goto L5e5630;
case 0x5e5633:c.instructions+=8;goto B5e5633;
case 0x5e5635:c.instructions+=7;goto B5e5635;
case 0x5e5638:c.instructions+=6;goto B5e5638;
case 0x5e563b:c.instructions+=5;goto B5e563b;
case 0x5e563e:c.instructions+=4;goto B5e563e;
case 0x5e5644:c.instructions+=3;goto B5e5644;
case 0x5e5645:c.instructions+=2;goto B5e5645;
case 0x5e5646:c.instructions+=1;goto B5e5646;
case 0x5e564b:goto L5e564b;
case 0x5e564f:c.instructions+=4;goto B5e564f;
case 0x5e5653:c.instructions+=3;goto B5e5653;
case 0x5e5656:c.instructions+=2;goto B5e5656;
case 0x5e5658:c.instructions+=1;goto B5e5658;
case 0x5e565a:goto L5e565a;
case 0x5e565e:c.instructions+=8;goto B5e565e;
case 0x5e565f:c.instructions+=7;goto B5e565f;
case 0x5e5666:c.instructions+=6;goto B5e5666;
case 0x5e5667:c.instructions+=5;goto B5e5667;
case 0x5e5668:c.instructions+=4;goto B5e5668;
case 0x5e5669:c.instructions+=3;goto B5e5669;
case 0x5e566b:c.instructions+=2;goto B5e566b;
case 0x5e566c:c.instructions+=1;goto B5e566c;
case 0x5e5670:goto L5e5670;
case 0x5e5672:c.instructions+=12;goto B5e5672;
case 0x5e5677:c.instructions+=11;goto B5e5677;
case 0x5e567d:c.instructions+=10;goto B5e567d;
case 0x5e567e:c.instructions+=9;goto B5e567e;
case 0x5e5685:c.instructions+=8;goto B5e5685;
case 0x5e5686:c.instructions+=7;goto B5e5686;
case 0x5e5687:c.instructions+=6;goto B5e5687;
case 0x5e5689:c.instructions+=5;goto B5e5689;
case 0x5e568a:c.instructions+=4;goto B5e568a;
case 0x5e568f:c.instructions+=3;goto B5e568f;
case 0x5e5691:c.instructions+=2;goto B5e5691;
case 0x5e5693:c.instructions+=1;goto B5e5693;
case 0x5e5698:goto L5e5698;
case 0x5e569a:c.instructions+=3;goto B5e569a;
case 0x5e569f:c.instructions+=2;goto B5e569f;
case 0x5e56a9:c.instructions+=1;goto B5e56a9;
case 0x5e56ae:goto L5e56ae;
case 0x5e56b1:c.instructions+=4;goto B5e56b1;
case 0x5e56b5:c.instructions+=3;goto B5e56b5;
case 0x5e56b7:c.instructions+=2;goto B5e56b7;
case 0x5e56bb:c.instructions+=1;goto B5e56bb;
case 0x5e56bd:goto L5e56bd;
case 0x5e56c2:c.instructions+=7;goto B5e56c2;
case 0x5e56c7:c.instructions+=6;goto B5e56c7;
case 0x5e56c9:c.instructions+=5;goto B5e56c9;
case 0x5e56cc:c.instructions+=4;goto B5e56cc;
case 0x5e56ce:c.instructions+=3;goto B5e56ce;
case 0x5e56cf:c.instructions+=2;goto B5e56cf;
case 0x5e56d5:c.instructions+=1;goto B5e56d5;
case 0x5e56da:goto L5e56da;
case 0x5e56df:c.instructions+=3;goto B5e56df;
case 0x5e56e7:c.instructions+=2;goto B5e56e7;
case 0x5e56ed:c.instructions+=1;goto B5e56ed;
case 0x5e56f2:goto L5e56f2;
case 0x5e56f7:c.instructions+=2;goto B5e56f7;
case 0x5e56f9:c.instructions+=1;goto B5e56f9;
case 0x5e56fe:goto L5e56fe;
case 0x5e5701:c.instructions+=4;goto B5e5701;
case 0x5e5702:c.instructions+=3;goto B5e5702;
case 0x5e5705:c.instructions+=2;goto B5e5705;
case 0x5e5706:c.instructions+=1;goto B5e5706;
case 0x5e570b:goto L5e570b;
case 0x5e5711:c.instructions+=3;goto B5e5711;
case 0x5e5716:c.instructions+=2;goto B5e5716;
case 0x5e5719:c.instructions+=1;goto B5e5719;
case 0x5e571e:goto L5e571e;
case 0x5e5723:c.instructions+=2;goto B5e5723;
case 0x5e5725:c.instructions+=1;goto B5e5725;
case 0x5e572a:goto L5e572a;
case 0x5e572d:c.instructions+=4;goto B5e572d;
case 0x5e572e:c.instructions+=3;goto B5e572e;
case 0x5e5731:c.instructions+=2;goto B5e5731;
case 0x5e5732:c.instructions+=1;goto B5e5732;
case 0x5e5737:goto L5e5737;
case 0x5e573b:c.instructions+=5;goto B5e573b;
case 0x5e573e:c.instructions+=4;goto B5e573e;
case 0x5e573f:c.instructions+=3;goto B5e573f;
case 0x5e5746:c.instructions+=2;goto B5e5746;
case 0x5e5749:c.instructions+=1;goto B5e5749;
case 0x5e5750:goto L5e5750;
case 0x5e5755:c.instructions+=2;goto B5e5755;
case 0x5e5757:c.instructions+=1;goto B5e5757;
case 0x5e5759:goto L5e5759;
case 0x5e575c:c.instructions+=7;goto B5e575c;
case 0x5e575d:c.instructions+=6;goto B5e575d;
case 0x5e5760:c.instructions+=5;goto B5e5760;
case 0x5e5765:c.instructions+=4;goto B5e5765;
case 0x5e5766:c.instructions+=3;goto B5e5766;
case 0x5e5768:c.instructions+=2;goto B5e5768;
case 0x5e5769:c.instructions+=1;goto B5e5769;
case 0x5e576e:goto L5e576e;
case 0x5e576f:c.instructions+=1;goto B5e576f;
case 0x5e5774:goto L5e5774;
case 0x5e5777:c.instructions+=1;goto B5e5777;
case 0x5e5778:goto L5e5778;
case 0x5e5782:c.instructions+=2;goto B5e5782;
case 0x5e578c:c.instructions+=1;goto B5e578c;
case 0x5e5791:goto L5e5791;
case 0x5e5797:c.instructions+=2;goto B5e5797;
case 0x5e5798:c.instructions+=1;goto B5e5798;
case 0x5e579d:goto L5e579d;
case 0x5e57a0:c.instructions+=2;goto B5e57a0;
case 0x5e57aa:c.instructions+=1;goto B5e57aa;
case 0x5e57b0:goto L5e57b0;
case 0x5e57b6:c.instructions+=2;goto B5e57b6;
case 0x5e57b8:c.instructions+=1;goto B5e57b8;
case 0x5e57ba:goto L5e57ba;
case 0x5e57bb:c.instructions+=2;goto B5e57bb;
case 0x5e57bd:c.instructions+=1;goto B5e57bd;
case 0x5e57c2:goto L5e57c2;
case 0x5e57c3:c.instructions+=1;goto B5e57c3;
case 0x5e57c8:goto L5e57c8;
case 0x5e57cb:c.instructions+=2;goto B5e57cb;
case 0x5e57d5:c.instructions+=1;goto B5e57d5;
case 0x5e57d6:goto L5e57d6;
case 0x5e57e0:goto L5e57e0;
case 0x5e57e1:c.instructions+=5;goto B5e57e1;
case 0x5e57e2:c.instructions+=4;goto B5e57e2;
case 0x5e57e4:c.instructions+=3;goto B5e57e4;
case 0x5e57e6:c.instructions+=2;goto B5e57e6;
case 0x5e57e8:c.instructions+=1;goto B5e57e8;
case 0x5e57ea:goto L5e57ea;
case 0x5e57f0:goto L5e57f0;
case 0x5e57f3:c.instructions+=5;goto B5e57f3;
case 0x5e57f5:c.instructions+=4;goto B5e57f5;
case 0x5e57f7:c.instructions+=3;goto B5e57f7;
case 0x5e57fa:c.instructions+=2;goto B5e57fa;
case 0x5e57fc:c.instructions+=1;goto B5e57fc;
case 0x5e5801:goto L5e5801;
case 0x5e5806:c.instructions+=3;goto B5e5806;
case 0x5e5807:c.instructions+=2;goto B5e5807;
case 0x5e5808:c.instructions+=1;goto B5e5808;
case 0x5e580d:goto L5e580d;
case 0x5e580f:c.instructions+=3;goto B5e580f;
case 0x5e5812:c.instructions+=2;goto B5e5812;
case 0x5e5814:c.instructions+=1;goto B5e5814;
case 0x5e5816:goto L5e5816;
case 0x5e5817:c.instructions+=2;goto B5e5817;
case 0x5e5818:c.instructions+=1;goto B5e5818;
case 0x5e5820:goto L5e5820;
case 0x5e5822:c.instructions+=28;goto B5e5822;
case 0x5e5827:c.instructions+=27;goto B5e5827;
case 0x5e582d:c.instructions+=26;goto B5e582d;
case 0x5e582e:c.instructions+=25;goto B5e582e;
case 0x5e5835:c.instructions+=24;goto B5e5835;
case 0x5e5836:c.instructions+=23;goto B5e5836;
case 0x5e5837:c.instructions+=22;goto B5e5837;
case 0x5e5839:c.instructions+=21;goto B5e5839;
case 0x5e583c:c.instructions+=20;goto B5e583c;
case 0x5e5840:c.instructions+=19;goto B5e5840;
case 0x5e5842:c.instructions+=18;goto B5e5842;
case 0x5e5845:c.instructions+=17;goto B5e5845;
case 0x5e5849:c.instructions+=16;goto B5e5849;
case 0x5e584c:c.instructions+=15;goto B5e584c;
case 0x5e584e:c.instructions+=14;goto B5e584e;
case 0x5e5851:c.instructions+=13;goto B5e5851;
case 0x5e5855:c.instructions+=12;goto B5e5855;
case 0x5e5856:c.instructions+=11;goto B5e5856;
case 0x5e5858:c.instructions+=10;goto B5e5858;
case 0x5e585b:c.instructions+=9;goto B5e585b;
case 0x5e585e:c.instructions+=8;goto B5e585e;
case 0x5e5861:c.instructions+=7;goto B5e5861;
case 0x5e5862:c.instructions+=6;goto B5e5862;
case 0x5e5865:c.instructions+=5;goto B5e5865;
case 0x5e5868:c.instructions+=4;goto B5e5868;
case 0x5e5869:c.instructions+=3;goto B5e5869;
case 0x5e5871:c.instructions+=2;goto B5e5871;
case 0x5e5874:c.instructions+=1;goto B5e5874;
case 0x5e5879:goto L5e5879;
case 0x5e587d:c.instructions+=6;goto B5e587d;
case 0x5e5880:c.instructions+=5;goto B5e5880;
case 0x5e5882:c.instructions+=4;goto B5e5882;
case 0x5e5883:c.instructions+=3;goto B5e5883;
case 0x5e588a:c.instructions+=2;goto B5e588a;
case 0x5e588d:c.instructions+=1;goto B5e588d;
case 0x5e5890:goto L5e5890;
case 0x5e5891:c.instructions+=2;goto B5e5891;
case 0x5e5893:c.instructions+=1;goto B5e5893;
case 0x5e5898:goto L5e5898;
case 0x5e589b:c.instructions+=2;goto B5e589b;
case 0x5e589d:c.instructions+=1;goto B5e589d;
case 0x5e589f:goto L5e589f;
case 0x5e58a2:c.instructions+=8;goto B5e58a2;
case 0x5e58a3:c.instructions+=7;goto B5e58a3;
case 0x5e58a6:c.instructions+=6;goto B5e58a6;
case 0x5e58a7:c.instructions+=5;goto B5e58a7;
case 0x5e58aa:c.instructions+=4;goto B5e58aa;
case 0x5e58ad:c.instructions+=3;goto B5e58ad;
case 0x5e58af:c.instructions+=2;goto B5e58af;
case 0x5e58b2:c.instructions+=1;goto B5e58b2;
case 0x5e58b4:goto L5e58b4;
case 0x5e58ba:c.instructions+=3;goto B5e58ba;
case 0x5e58bc:c.instructions+=2;goto B5e58bc;
case 0x5e58be:c.instructions+=1;goto B5e58be;
case 0x5e58c0:goto L5e58c0;
case 0x5e58c6:c.instructions+=3;goto B5e58c6;
case 0x5e58c8:c.instructions+=2;goto B5e58c8;
case 0x5e58c9:c.instructions+=1;goto B5e58c9;
case 0x5e58d0:goto L5e58d0;
case 0x5e58d2:c.instructions+=6;goto B5e58d2;
case 0x5e58d5:c.instructions+=5;goto B5e58d5;
case 0x5e58db:c.instructions+=4;goto B5e58db;
case 0x5e58dc:c.instructions+=3;goto B5e58dc;
case 0x5e58df:c.instructions+=2;goto B5e58df;
case 0x5e58e1:c.instructions+=1;goto B5e58e1;
case 0x5e58e3:goto L5e58e3;
case 0x5e58e4:goto L5e58e4;
case 0x5e58e7:c.instructions+=4;goto B5e58e7;
case 0x5e58e8:c.instructions+=3;goto B5e58e8;
case 0x5e58e9:c.instructions+=2;goto B5e58e9;
case 0x5e58ea:c.instructions+=1;goto B5e58ea;
case 0x5e58ef:goto L5e58ef;
case 0x5e58f5:c.instructions+=4;goto B5e58f5;
case 0x5e58f7:c.instructions+=3;goto B5e58f7;
case 0x5e58f9:c.instructions+=2;goto B5e58f9;
case 0x5e58fb:c.instructions+=1;goto B5e58fb;
case 0x5e58fd:goto L5e58fd;
case 0x5e5903:goto L5e5903;
case 0x5e5905:c.instructions+=6;goto B5e5905;
case 0x5e5908:c.instructions+=5;goto B5e5908;
case 0x5e590e:c.instructions+=4;goto B5e590e;
case 0x5e590f:c.instructions+=3;goto B5e590f;
case 0x5e5912:c.instructions+=2;goto B5e5912;
case 0x5e5914:c.instructions+=1;goto B5e5914;
case 0x5e5916:goto L5e5916;
case 0x5e5917:c.instructions+=1;goto B5e5917;
case 0x5e5918:goto L5e5918;
case 0x5e5919:c.instructions+=1;goto B5e5919;
case 0x5e5920:goto L5e5920;
case 0x5e5921:c.instructions+=11;goto B5e5921;
case 0x5e5923:c.instructions+=10;goto B5e5923;
case 0x5e5926:c.instructions+=9;goto B5e5926;
case 0x5e5927:c.instructions+=8;goto B5e5927;
case 0x5e5928:c.instructions+=7;goto B5e5928;
case 0x5e5929:c.instructions+=6;goto B5e5929;
case 0x5e592a:c.instructions+=5;goto B5e592a;
case 0x5e592c:c.instructions+=4;goto B5e592c;
case 0x5e592f:c.instructions+=3;goto B5e592f;
case 0x5e5931:c.instructions+=2;goto B5e5931;
case 0x5e5939:c.instructions+=1;goto B5e5939;
case 0x5e593f:goto L5e593f;
case 0x5e5940:goto L5e5940;
case 0x5e5943:c.instructions+=2;goto B5e5943;
case 0x5e5945:c.instructions+=1;goto B5e5945;
case 0x5e594b:goto L5e594b;
case 0x5e5950:c.instructions+=1;goto B5e5950;
case 0x5e5952:goto L5e5952;
case 0x5e5955:c.instructions+=6;goto B5e5955;
case 0x5e5957:c.instructions+=5;goto B5e5957;
case 0x5e5959:c.instructions+=4;goto B5e5959;
case 0x5e595a:c.instructions+=3;goto B5e595a;
case 0x5e595d:c.instructions+=2;goto B5e595d;
case 0x5e595e:c.instructions+=1;goto B5e595e;
case 0x5e5963:goto L5e5963;
case 0x5e5969:c.instructions+=3;goto B5e5969;
case 0x5e596b:c.instructions+=2;goto B5e596b;
case 0x5e596e:c.instructions+=1;goto B5e596e;
case 0x5e5970:goto L5e5970;
case 0x5e5972:c.instructions+=6;goto B5e5972;
case 0x5e5974:c.instructions+=5;goto B5e5974;
case 0x5e597a:c.instructions+=4;goto B5e597a;
case 0x5e597c:c.instructions+=3;goto B5e597c;
case 0x5e597e:c.instructions+=2;goto B5e597e;
case 0x5e5981:c.instructions+=1;goto B5e5981;
case 0x5e5983:goto L5e5983;
case 0x5e5985:c.instructions+=20;goto B5e5985;
case 0x5e5988:c.instructions+=19;goto B5e5988;
case 0x5e598b:c.instructions+=18;goto B5e598b;
case 0x5e598e:c.instructions+=17;goto B5e598e;
case 0x5e5991:c.instructions+=16;goto B5e5991;
case 0x5e5994:c.instructions+=15;goto B5e5994;
case 0x5e5996:c.instructions+=14;goto B5e5996;
case 0x5e5998:c.instructions+=13;goto B5e5998;
case 0x5e599a:c.instructions+=12;goto B5e599a;
case 0x5e599c:c.instructions+=11;goto B5e599c;
case 0x5e599e:c.instructions+=10;goto B5e599e;
case 0x5e59a0:c.instructions+=9;goto B5e59a0;
case 0x5e59a2:c.instructions+=8;goto B5e59a2;
case 0x5e59a4:c.instructions+=7;goto B5e59a4;
case 0x5e59aa:c.instructions+=6;goto B5e59aa;
case 0x5e59ac:c.instructions+=5;goto B5e59ac;
case 0x5e59ae:c.instructions+=4;goto B5e59ae;
case 0x5e59b0:c.instructions+=3;goto B5e59b0;
case 0x5e59b3:c.instructions+=2;goto B5e59b3;
case 0x5e59b5:c.instructions+=1;goto B5e59b5;
case 0x5e59b7:goto L5e59b7;
case 0x5e59b9:goto L5e59b9;
case 0x5e59bb:goto L5e59bb;
case 0x5e59bf:c.instructions+=5;goto B5e59bf;
case 0x5e59c2:c.instructions+=4;goto B5e59c2;
case 0x5e59c3:c.instructions+=3;goto B5e59c3;
case 0x5e59c5:c.instructions+=2;goto B5e59c5;
case 0x5e59c9:c.instructions+=1;goto B5e59c9;
case 0x5e59cf:goto L5e59cf;
case 0x5e59d0:c.instructions+=6;goto B5e59d0;
case 0x5e59d2:c.instructions+=5;goto B5e59d2;
case 0x5e59d3:c.instructions+=4;goto B5e59d3;
case 0x5e59d4:c.instructions+=3;goto B5e59d4;
case 0x5e59d6:c.instructions+=2;goto B5e59d6;
case 0x5e59d7:c.instructions+=1;goto B5e59d7;
case 0x5e59e0:goto L5e59e0;
case 0x5e59e1:c.instructions+=11;goto B5e59e1;
case 0x5e59e3:c.instructions+=10;goto B5e59e3;
case 0x5e59e6:c.instructions+=9;goto B5e59e6;
case 0x5e59e7:c.instructions+=8;goto B5e59e7;
case 0x5e59e8:c.instructions+=7;goto B5e59e8;
case 0x5e59e9:c.instructions+=6;goto B5e59e9;
case 0x5e59ea:c.instructions+=5;goto B5e59ea;
case 0x5e59ec:c.instructions+=4;goto B5e59ec;
case 0x5e59ef:c.instructions+=3;goto B5e59ef;
case 0x5e59f1:c.instructions+=2;goto B5e59f1;
case 0x5e59f9:c.instructions+=1;goto B5e59f9;
case 0x5e59ff:goto L5e59ff;
case 0x5e5a00:goto L5e5a00;
case 0x5e5a03:c.instructions+=2;goto B5e5a03;
case 0x5e5a05:c.instructions+=1;goto B5e5a05;
case 0x5e5a0b:goto L5e5a0b;
case 0x5e5a10:c.instructions+=1;goto B5e5a10;
case 0x5e5a12:goto L5e5a12;
case 0x5e5a15:c.instructions+=6;goto B5e5a15;
case 0x5e5a17:c.instructions+=5;goto B5e5a17;
case 0x5e5a19:c.instructions+=4;goto B5e5a19;
case 0x5e5a1a:c.instructions+=3;goto B5e5a1a;
case 0x5e5a1d:c.instructions+=2;goto B5e5a1d;
case 0x5e5a1e:c.instructions+=1;goto B5e5a1e;
case 0x5e5a23:goto L5e5a23;
case 0x5e5a29:c.instructions+=3;goto B5e5a29;
case 0x5e5a2b:c.instructions+=2;goto B5e5a2b;
case 0x5e5a2e:c.instructions+=1;goto B5e5a2e;
case 0x5e5a30:goto L5e5a30;
case 0x5e5a32:c.instructions+=6;goto B5e5a32;
case 0x5e5a34:c.instructions+=5;goto B5e5a34;
case 0x5e5a3a:c.instructions+=4;goto B5e5a3a;
case 0x5e5a3c:c.instructions+=3;goto B5e5a3c;
case 0x5e5a3e:c.instructions+=2;goto B5e5a3e;
case 0x5e5a41:c.instructions+=1;goto B5e5a41;
case 0x5e5a43:goto L5e5a43;
case 0x5e5a45:c.instructions+=20;goto B5e5a45;
case 0x5e5a48:c.instructions+=19;goto B5e5a48;
case 0x5e5a4b:c.instructions+=18;goto B5e5a4b;
case 0x5e5a4e:c.instructions+=17;goto B5e5a4e;
case 0x5e5a51:c.instructions+=16;goto B5e5a51;
case 0x5e5a54:c.instructions+=15;goto B5e5a54;
case 0x5e5a56:c.instructions+=14;goto B5e5a56;
case 0x5e5a58:c.instructions+=13;goto B5e5a58;
case 0x5e5a5a:c.instructions+=12;goto B5e5a5a;
case 0x5e5a5c:c.instructions+=11;goto B5e5a5c;
case 0x5e5a5e:c.instructions+=10;goto B5e5a5e;
case 0x5e5a60:c.instructions+=9;goto B5e5a60;
case 0x5e5a62:c.instructions+=8;goto B5e5a62;
case 0x5e5a64:c.instructions+=7;goto B5e5a64;
case 0x5e5a6a:c.instructions+=6;goto B5e5a6a;
case 0x5e5a6c:c.instructions+=5;goto B5e5a6c;
case 0x5e5a6e:c.instructions+=4;goto B5e5a6e;
case 0x5e5a70:c.instructions+=3;goto B5e5a70;
case 0x5e5a73:c.instructions+=2;goto B5e5a73;
case 0x5e5a75:c.instructions+=1;goto B5e5a75;
case 0x5e5a77:goto L5e5a77;
case 0x5e5a79:goto L5e5a79;
case 0x5e5a7b:goto L5e5a7b;
case 0x5e5a7f:c.instructions+=5;goto B5e5a7f;
case 0x5e5a82:c.instructions+=4;goto B5e5a82;
case 0x5e5a83:c.instructions+=3;goto B5e5a83;
case 0x5e5a85:c.instructions+=2;goto B5e5a85;
case 0x5e5a89:c.instructions+=1;goto B5e5a89;
case 0x5e5a8f:goto L5e5a8f;
case 0x5e5a90:c.instructions+=6;goto B5e5a90;
case 0x5e5a92:c.instructions+=5;goto B5e5a92;
case 0x5e5a93:c.instructions+=4;goto B5e5a93;
case 0x5e5a94:c.instructions+=3;goto B5e5a94;
case 0x5e5a96:c.instructions+=2;goto B5e5a96;
case 0x5e5a97:c.instructions+=1;goto B5e5a97;
case 0x5e5aa0:goto L5e5aa0;
case 0x5e5aa3:c.instructions+=10;goto B5e5aa3;
case 0x5e5aa4:c.instructions+=9;goto B5e5aa4;
case 0x5e5aa5:c.instructions+=8;goto B5e5aa5;
case 0x5e5aa9:c.instructions+=7;goto B5e5aa9;
case 0x5e5aaa:c.instructions+=6;goto B5e5aaa;
case 0x5e5aad:c.instructions+=5;goto B5e5aad;
case 0x5e5aae:c.instructions+=4;goto B5e5aae;
case 0x5e5ab2:c.instructions+=3;goto B5e5ab2;
case 0x5e5ab5:c.instructions+=2;goto B5e5ab5;
case 0x5e5abd:c.instructions+=1;goto B5e5abd;
case 0x5e5ac0:goto L5e5ac0;
case 0x5e5ac2:c.instructions+=2;goto B5e5ac2;
case 0x5e5ac5:c.instructions+=1;goto B5e5ac5;
case 0x5e5ac7:goto L5e5ac7;
case 0x5e5ac8:c.instructions+=2;goto B5e5ac8;
case 0x5e5aca:c.instructions+=1;goto B5e5aca;
case 0x5e5acf:goto L5e5acf;
case 0x5e5ad0:c.instructions+=3;goto B5e5ad0;
case 0x5e5ad2:c.instructions+=2;goto B5e5ad2;
case 0x5e5ad5:c.instructions+=1;goto B5e5ad5;
case 0x5e5ada:goto L5e5ada;
case 0x5e5add:c.instructions+=5;goto B5e5add;
case 0x5e5ae0:c.instructions+=4;goto B5e5ae0;
case 0x5e5ae1:c.instructions+=3;goto B5e5ae1;
case 0x5e5ae4:c.instructions+=2;goto B5e5ae4;
case 0x5e5ae6:c.instructions+=1;goto B5e5ae6;
case 0x5e5ae8:goto L5e5ae8;
case 0x5e5aec:c.instructions+=7;goto B5e5aec;
case 0x5e5af0:c.instructions+=6;goto B5e5af0;
case 0x5e5af6:c.instructions+=5;goto B5e5af6;
case 0x5e5af9:c.instructions+=4;goto B5e5af9;
case 0x5e5afa:c.instructions+=3;goto B5e5afa;
case 0x5e5afe:c.instructions+=2;goto B5e5afe;
case 0x5e5b02:c.instructions+=1;goto B5e5b02;
case 0x5e5b04:goto L5e5b04;
case 0x5e5b05:c.instructions+=5;goto B5e5b05;
case 0x5e5b06:c.instructions+=4;goto B5e5b06;
case 0x5e5b07:c.instructions+=3;goto B5e5b07;
case 0x5e5b08:c.instructions+=2;goto B5e5b08;
case 0x5e5b0b:c.instructions+=1;goto B5e5b0b;
case 0x5e5b10:goto L5e5b10;
case 0x5e5b12:c.instructions+=12;goto B5e5b12;
case 0x5e5b17:c.instructions+=11;goto B5e5b17;
case 0x5e5b1d:c.instructions+=10;goto B5e5b1d;
case 0x5e5b1e:c.instructions+=9;goto B5e5b1e;
case 0x5e5b25:c.instructions+=8;goto B5e5b25;
case 0x5e5b26:c.instructions+=7;goto B5e5b26;
case 0x5e5b27:c.instructions+=6;goto B5e5b27;
case 0x5e5b29:c.instructions+=5;goto B5e5b29;
case 0x5e5b2a:c.instructions+=4;goto B5e5b2a;
case 0x5e5b2e:c.instructions+=3;goto B5e5b2e;
case 0x5e5b30:c.instructions+=2;goto B5e5b30;
case 0x5e5b38:c.instructions+=1;goto B5e5b38;
case 0x5e5b3d:goto L5e5b3d;
case 0x5e5b40:c.instructions+=4;goto B5e5b40;
case 0x5e5b43:c.instructions+=3;goto B5e5b43;
case 0x5e5b45:c.instructions+=2;goto B5e5b45;
case 0x5e5b4a:c.instructions+=1;goto B5e5b4a;
case 0x5e5b4c:goto L5e5b4c;
case 0x5e5b50:goto L5e5b50;
case 0x5e5b52:c.instructions+=5;goto B5e5b52;
case 0x5e5b55:c.instructions+=4;goto B5e5b55;
case 0x5e5b57:c.instructions+=3;goto B5e5b57;
case 0x5e5b58:c.instructions+=2;goto B5e5b58;
case 0x5e5b5b:c.instructions+=1;goto B5e5b5b;
case 0x5e5b60:goto L5e5b60;
case 0x5e5b62:c.instructions+=3;goto B5e5b62;
case 0x5e5b65:c.instructions+=2;goto B5e5b65;
case 0x5e5b67:c.instructions+=1;goto B5e5b67;
case 0x5e5b69:goto L5e5b69;
case 0x5e5b6b:c.instructions+=3;goto B5e5b6b;
case 0x5e5b6d:c.instructions+=2;goto B5e5b6d;
case 0x5e5b75:c.instructions+=1;goto B5e5b75;
case 0x5e5b77:goto L5e5b77;
case 0x5e5b79:c.instructions+=5;goto B5e5b79;
case 0x5e5b7c:c.instructions+=4;goto B5e5b7c;
case 0x5e5b7e:c.instructions+=3;goto B5e5b7e;
case 0x5e5b7f:c.instructions+=2;goto B5e5b7f;
case 0x5e5b82:c.instructions+=1;goto B5e5b82;
case 0x5e5b87:goto L5e5b87;
case 0x5e5b89:c.instructions+=3;goto B5e5b89;
case 0x5e5b8c:c.instructions+=2;goto B5e5b8c;
case 0x5e5b8e:c.instructions+=1;goto B5e5b8e;
case 0x5e5b90:goto L5e5b90;
case 0x5e5b94:c.instructions+=5;goto B5e5b94;
case 0x5e5b95:c.instructions+=4;goto B5e5b95;
case 0x5e5b96:c.instructions+=3;goto B5e5b96;
case 0x5e5b9d:c.instructions+=2;goto B5e5b9d;
case 0x5e5ba0:c.instructions+=1;goto B5e5ba0;
case 0x5e5bb0:goto L5e5bb0;
case 0x5e5bb6:c.instructions+=6;goto B5e5bb6;
case 0x5e5bb7:c.instructions+=5;goto B5e5bb7;
case 0x5e5bb8:c.instructions+=4;goto B5e5bb8;
case 0x5e5bb9:c.instructions+=3;goto B5e5bb9;
case 0x5e5bba:c.instructions+=2;goto B5e5bba;
case 0x5e5bbc:c.instructions+=1;goto B5e5bbc;
case 0x5e5bc1:goto L5e5bc1;
case 0x5e5bc8:c.instructions+=4;goto B5e5bc8;
case 0x5e5bcb:c.instructions+=3;goto B5e5bcb;
case 0x5e5bcd:c.instructions+=2;goto B5e5bcd;
case 0x5e5bd2:c.instructions+=1;goto B5e5bd2;
case 0x5e5bd4:goto L5e5bd4;
case 0x5e5bd6:goto L5e5bd6;
case 0x5e5bdc:c.instructions+=23;goto B5e5bdc;
case 0x5e5be3:c.instructions+=22;goto B5e5be3;
case 0x5e5bea:c.instructions+=21;goto B5e5bea;
case 0x5e5bed:c.instructions+=20;goto B5e5bed;
case 0x5e5bef:c.instructions+=19;goto B5e5bef;
case 0x5e5bf2:c.instructions+=18;goto B5e5bf2;
case 0x5e5bf5:c.instructions+=17;goto B5e5bf5;
case 0x5e5bf8:c.instructions+=16;goto B5e5bf8;
case 0x5e5bff:c.instructions+=15;goto B5e5bff;
case 0x5e5c02:c.instructions+=14;goto B5e5c02;
case 0x5e5c06:c.instructions+=13;goto B5e5c06;
case 0x5e5c0a:c.instructions+=12;goto B5e5c0a;
case 0x5e5c0d:c.instructions+=11;goto B5e5c0d;
case 0x5e5c11:c.instructions+=10;goto B5e5c11;
case 0x5e5c15:c.instructions+=9;goto B5e5c15;
case 0x5e5c1a:c.instructions+=8;goto B5e5c1a;
case 0x5e5c22:c.instructions+=7;goto B5e5c22;
case 0x5e5c25:c.instructions+=6;goto B5e5c25;
case 0x5e5c2b:c.instructions+=5;goto B5e5c2b;
case 0x5e5c2e:c.instructions+=4;goto B5e5c2e;
case 0x5e5c32:c.instructions+=3;goto B5e5c32;
case 0x5e5c35:c.instructions+=2;goto B5e5c35;
case 0x5e5c37:c.instructions+=1;goto B5e5c37;
case 0x5e5c3d:goto L5e5c3d;
case 0x5e5c40:c.instructions+=2;goto B5e5c40;
case 0x5e5c44:c.instructions+=1;goto B5e5c44;
case 0x5e5c46:goto L5e5c46;
case 0x5e5c4a:c.instructions+=1;goto B5e5c4a;
case 0x5e5c50:goto L5e5c50;
case 0x5e5c53:c.instructions+=4;goto B5e5c53;
case 0x5e5c57:c.instructions+=3;goto B5e5c57;
case 0x5e5c5e:c.instructions+=2;goto B5e5c5e;
case 0x5e5c60:c.instructions+=1;goto B5e5c60;
case 0x5e5c62:goto L5e5c62;
case 0x5e5c66:c.instructions+=3;goto B5e5c66;
case 0x5e5c69:c.instructions+=2;goto B5e5c69;
case 0x5e5c6c:c.instructions+=1;goto B5e5c6c;
case 0x5e5c70:goto L5e5c70;
case 0x5e5c75:c.instructions+=4;goto B5e5c75;
case 0x5e5c77:c.instructions+=3;goto B5e5c77;
case 0x5e5c78:c.instructions+=2;goto B5e5c78;
case 0x5e5c7a:c.instructions+=1;goto B5e5c7a;
case 0x5e5c7f:goto L5e5c7f;
case 0x5e5c83:c.instructions+=7;goto B5e5c83;
case 0x5e5c86:c.instructions+=6;goto B5e5c86;
case 0x5e5c8c:c.instructions+=5;goto B5e5c8c;
case 0x5e5c90:c.instructions+=4;goto B5e5c90;
case 0x5e5c94:c.instructions+=3;goto B5e5c94;
case 0x5e5c96:c.instructions+=2;goto B5e5c96;
case 0x5e5c98:c.instructions+=1;goto B5e5c98;
case 0x5e5c9e:goto L5e5c9e;
case 0x5e5ca2:c.instructions+=12;goto B5e5ca2;
case 0x5e5ca4:c.instructions+=11;goto B5e5ca4;
case 0x5e5ca8:c.instructions+=10;goto B5e5ca8;
case 0x5e5caa:c.instructions+=9;goto B5e5caa;
case 0x5e5cab:c.instructions+=8;goto B5e5cab;
case 0x5e5caf:c.instructions+=7;goto B5e5caf;
case 0x5e5cb0:c.instructions+=6;goto B5e5cb0;
case 0x5e5cb4:c.instructions+=5;goto B5e5cb4;
case 0x5e5cb7:c.instructions+=4;goto B5e5cb7;
case 0x5e5cbc:c.instructions+=3;goto B5e5cbc;
case 0x5e5cbf:c.instructions+=2;goto B5e5cbf;
case 0x5e5cc3:c.instructions+=1;goto B5e5cc3;
case 0x5e5cc8:goto L5e5cc8;
case 0x5e5ccc:c.instructions+=14;goto B5e5ccc;
case 0x5e5ccf:c.instructions+=13;goto B5e5ccf;
case 0x5e5cd1:c.instructions+=12;goto B5e5cd1;
case 0x5e5cd3:c.instructions+=11;goto B5e5cd3;
case 0x5e5cd8:c.instructions+=10;goto B5e5cd8;
case 0x5e5cda:c.instructions+=9;goto B5e5cda;
case 0x5e5cde:c.instructions+=8;goto B5e5cde;
case 0x5e5ce1:c.instructions+=7;goto B5e5ce1;
case 0x5e5ce3:c.instructions+=6;goto B5e5ce3;
case 0x5e5ce6:c.instructions+=5;goto B5e5ce6;
case 0x5e5ce9:c.instructions+=4;goto B5e5ce9;
case 0x5e5ceb:c.instructions+=3;goto B5e5ceb;
case 0x5e5cec:c.instructions+=2;goto B5e5cec;
case 0x5e5cee:c.instructions+=1;goto B5e5cee;
case 0x5e5cf0:goto L5e5cf0;
case 0x5e5cf3:c.instructions+=10;goto B5e5cf3;
case 0x5e5cf7:c.instructions+=9;goto B5e5cf7;
case 0x5e5cf9:c.instructions+=8;goto B5e5cf9;
case 0x5e5cfa:c.instructions+=7;goto B5e5cfa;
case 0x5e5cfe:c.instructions+=6;goto B5e5cfe;
case 0x5e5cff:c.instructions+=5;goto B5e5cff;
case 0x5e5d03:c.instructions+=4;goto B5e5d03;
case 0x5e5d06:c.instructions+=3;goto B5e5d06;
case 0x5e5d09:c.instructions+=2;goto B5e5d09;
case 0x5e5d0d:c.instructions+=1;goto B5e5d0d;
case 0x5e5d12:goto L5e5d12;
case 0x5e5d16:c.instructions+=2;goto B5e5d16;
case 0x5e5d1a:c.instructions+=1;goto B5e5d1a;
case 0x5e5d1c:goto L5e5d1c;
case 0x5e5d1e:c.instructions+=10;goto B5e5d1e;
case 0x5e5d22:c.instructions+=9;goto B5e5d22;
case 0x5e5d25:c.instructions+=8;goto B5e5d25;
case 0x5e5d26:c.instructions+=7;goto B5e5d26;
case 0x5e5d2a:c.instructions+=6;goto B5e5d2a;
case 0x5e5d2b:c.instructions+=5;goto B5e5d2b;
case 0x5e5d2f:c.instructions+=4;goto B5e5d2f;
case 0x5e5d32:c.instructions+=3;goto B5e5d32;
case 0x5e5d35:c.instructions+=2;goto B5e5d35;
case 0x5e5d39:c.instructions+=1;goto B5e5d39;
case 0x5e5d3e:goto L5e5d3e;
case 0x5e5d42:c.instructions+=1;goto B5e5d42;
case 0x5e5d46:goto L5e5d46;
case 0x5e5d4a:c.instructions+=11;goto B5e5d4a;
case 0x5e5d4d:c.instructions+=10;goto B5e5d4d;
case 0x5e5d4f:c.instructions+=9;goto B5e5d4f;
case 0x5e5d53:c.instructions+=8;goto B5e5d53;
case 0x5e5d55:c.instructions+=7;goto B5e5d55;
case 0x5e5d57:c.instructions+=6;goto B5e5d57;
case 0x5e5d5d:c.instructions+=5;goto B5e5d5d;
case 0x5e5d5f:c.instructions+=4;goto B5e5d5f;
case 0x5e5d61:c.instructions+=3;goto B5e5d61;
case 0x5e5d64:c.instructions+=2;goto B5e5d64;
case 0x5e5d66:c.instructions+=1;goto B5e5d66;
case 0x5e5d68:goto L5e5d68;
case 0x5e5d70:c.instructions+=1;goto B5e5d70;
case 0x5e5d72:goto L5e5d72;
case 0x5e5d7a:c.instructions+=1;goto B5e5d7a;
case 0x5e5d7c:goto L5e5d7c;
case 0x5e5d82:c.instructions+=2;goto B5e5d82;
case 0x5e5d8a:c.instructions+=1;goto B5e5d8a;
case 0x5e5d8e:goto L5e5d8e;
case 0x5e5d92:c.instructions+=5;goto B5e5d92;
case 0x5e5d97:c.instructions+=4;goto B5e5d97;
case 0x5e5d99:c.instructions+=3;goto B5e5d99;
case 0x5e5d9a:c.instructions+=2;goto B5e5d9a;
case 0x5e5d9c:c.instructions+=1;goto B5e5d9c;
case 0x5e5da1:goto L5e5da1;
case 0x5e5da3:c.instructions+=3;goto B5e5da3;
case 0x5e5da5:c.instructions+=2;goto B5e5da5;
case 0x5e5daa:c.instructions+=1;goto B5e5daa;
case 0x5e5dae:goto L5e5dae;
case 0x5e5db0:goto L5e5db0;
case 0x5e5db4:c.instructions+=16;goto B5e5db4;
case 0x5e5db7:c.instructions+=15;goto B5e5db7;
case 0x5e5dbd:c.instructions+=14;goto B5e5dbd;
case 0x5e5dc0:c.instructions+=13;goto B5e5dc0;
case 0x5e5dc2:c.instructions+=12;goto B5e5dc2;
case 0x5e5dc6:c.instructions+=11;goto B5e5dc6;
case 0x5e5dc8:c.instructions+=10;goto B5e5dc8;
case 0x5e5dc9:c.instructions+=9;goto B5e5dc9;
case 0x5e5dcd:c.instructions+=8;goto B5e5dcd;
case 0x5e5dce:c.instructions+=7;goto B5e5dce;
case 0x5e5dd2:c.instructions+=6;goto B5e5dd2;
case 0x5e5dd6:c.instructions+=5;goto B5e5dd6;
case 0x5e5dd7:c.instructions+=4;goto B5e5dd7;
case 0x5e5dd9:c.instructions+=3;goto B5e5dd9;
case 0x5e5de1:c.instructions+=2;goto B5e5de1;
case 0x5e5de9:c.instructions+=1;goto B5e5de9;
case 0x5e5dee:goto L5e5dee;
case 0x5e5df0:c.instructions+=1;goto B5e5df0;
case 0x5e5df6:goto L5e5df6;
case 0x5e5dfa:c.instructions+=3;goto B5e5dfa;
case 0x5e5dfc:c.instructions+=2;goto B5e5dfc;
case 0x5e5dfe:c.instructions+=1;goto B5e5dfe;
case 0x5e5e04:goto L5e5e04;
case 0x5e5e0a:c.instructions+=3;goto B5e5e0a;
case 0x5e5e0e:c.instructions+=2;goto B5e5e0e;
case 0x5e5e15:c.instructions+=1;goto B5e5e15;
case 0x5e5e17:goto L5e5e17;
case 0x5e5e1e:c.instructions+=3;goto B5e5e1e;
case 0x5e5e21:c.instructions+=2;goto B5e5e21;
case 0x5e5e23:c.instructions+=1;goto B5e5e23;
case 0x5e5e25:goto L5e5e25;
case 0x5e5e28:c.instructions+=2;goto B5e5e28;
case 0x5e5e2f:c.instructions+=1;goto B5e5e2f;
case 0x5e5e31:goto L5e5e31;
case 0x5e5e37:c.instructions+=3;goto B5e5e37;
case 0x5e5e39:c.instructions+=2;goto B5e5e39;
case 0x5e5e3b:c.instructions+=1;goto B5e5e3b;
case 0x5e5e3d:goto L5e5e3d;
case 0x5e5e40:goto L5e5e40;
case 0x5e5e43:c.instructions+=2;goto B5e5e43;
case 0x5e5e4a:c.instructions+=1;goto B5e5e4a;
case 0x5e5e50:goto L5e5e50;
case 0x5e5e56:c.instructions+=3;goto B5e5e56;
case 0x5e5e57:c.instructions+=2;goto B5e5e57;
case 0x5e5e59:c.instructions+=1;goto B5e5e59;
case 0x5e5e5b:goto L5e5e5b;
case 0x5e5e61:c.instructions+=5;goto B5e5e61;
case 0x5e5e68:c.instructions+=4;goto B5e5e68;
case 0x5e5e70:c.instructions+=3;goto B5e5e70;
case 0x5e5e76:c.instructions+=2;goto B5e5e76;
case 0x5e5e7d:c.instructions+=1;goto B5e5e7d;
case 0x5e5e83:goto L5e5e83;
case 0x5e5e87:c.instructions+=3;goto B5e5e87;
case 0x5e5e88:c.instructions+=2;goto B5e5e88;
case 0x5e5e8a:c.instructions+=1;goto B5e5e8a;
case 0x5e5e90:goto L5e5e90;
case 0x5e5e97:c.instructions+=11;goto B5e5e97;
case 0x5e5e9b:c.instructions+=10;goto B5e5e9b;
case 0x5e5e9f:c.instructions+=9;goto B5e5e9f;
case 0x5e5ea3:c.instructions+=8;goto B5e5ea3;
case 0x5e5ea6:c.instructions+=7;goto B5e5ea6;
case 0x5e5ea7:c.instructions+=6;goto B5e5ea7;
case 0x5e5eaa:c.instructions+=5;goto B5e5eaa;
case 0x5e5eac:c.instructions+=4;goto B5e5eac;
case 0x5e5eb0:c.instructions+=3;goto B5e5eb0;
case 0x5e5eb7:c.instructions+=2;goto B5e5eb7;
case 0x5e5ebb:c.instructions+=1;goto B5e5ebb;
case 0x5e5ec1:goto L5e5ec1;
case 0x5e5ec7:c.instructions+=12;goto B5e5ec7;
case 0x5e5eca:c.instructions+=11;goto B5e5eca;
case 0x5e5ecd:c.instructions+=10;goto B5e5ecd;
case 0x5e5ed4:c.instructions+=9;goto B5e5ed4;
case 0x5e5ed7:c.instructions+=8;goto B5e5ed7;
case 0x5e5ed9:c.instructions+=7;goto B5e5ed9;
case 0x5e5edc:c.instructions+=6;goto B5e5edc;
case 0x5e5ee1:c.instructions+=5;goto B5e5ee1;
case 0x5e5ee3:c.instructions+=4;goto B5e5ee3;
case 0x5e5ee4:c.instructions+=3;goto B5e5ee4;
case 0x5e5ee5:c.instructions+=2;goto B5e5ee5;
case 0x5e5ee7:c.instructions+=1;goto B5e5ee7;
case 0x5e5eec:goto L5e5eec;
case 0x5e5eef:c.instructions+=11;goto B5e5eef;
case 0x5e5ef2:c.instructions+=10;goto B5e5ef2;
case 0x5e5ef5:c.instructions+=9;goto B5e5ef5;
case 0x5e5efc:c.instructions+=8;goto B5e5efc;
case 0x5e5eff:c.instructions+=7;goto B5e5eff;
case 0x5e5f01:c.instructions+=6;goto B5e5f01;
case 0x5e5f05:c.instructions+=5;goto B5e5f05;
case 0x5e5f0b:c.instructions+=4;goto B5e5f0b;
case 0x5e5f0e:c.instructions+=3;goto B5e5f0e;
case 0x5e5f11:c.instructions+=2;goto B5e5f11;
case 0x5e5f13:c.instructions+=1;goto B5e5f13;
case 0x5e5f19:goto L5e5f19;
case 0x5e5f1c:c.instructions+=2;goto B5e5f1c;
case 0x5e5f20:c.instructions+=1;goto B5e5f20;
case 0x5e5f26:goto L5e5f26;
case 0x5e5f2b:c.instructions+=9;goto B5e5f2b;
case 0x5e5f2e:c.instructions+=8;goto B5e5f2e;
case 0x5e5f30:c.instructions+=7;goto B5e5f30;
case 0x5e5f34:c.instructions+=6;goto B5e5f34;
case 0x5e5f38:c.instructions+=5;goto B5e5f38;
case 0x5e5f3a:c.instructions+=4;goto B5e5f3a;
case 0x5e5f3c:c.instructions+=3;goto B5e5f3c;
case 0x5e5f3e:c.instructions+=2;goto B5e5f3e;
case 0x5e5f42:c.instructions+=1;goto B5e5f42;
case 0x5e5f48:goto L5e5f48;
case 0x5e5f4a:c.instructions+=2;goto B5e5f4a;
case 0x5e5f4e:c.instructions+=1;goto B5e5f4e;
case 0x5e5f50:goto L5e5f50;
case 0x5e5f51:c.instructions+=6;goto B5e5f51;
case 0x5e5f52:c.instructions+=5;goto B5e5f52;
case 0x5e5f53:c.instructions+=4;goto B5e5f53;
case 0x5e5f55:c.instructions+=3;goto B5e5f55;
case 0x5e5f56:c.instructions+=2;goto B5e5f56;
case 0x5e5f5c:c.instructions+=1;goto B5e5f5c;
case 0x5e5f5f:goto L5e5f5f;
case 0x5e5f63:goto L5e5f63;
case 0x5e5f66:c.instructions+=12;goto B5e5f66;
case 0x5e5f68:c.instructions+=11;goto B5e5f68;
case 0x5e5f6f:c.instructions+=10;goto B5e5f6f;
case 0x5e5f72:c.instructions+=9;goto B5e5f72;
case 0x5e5f74:c.instructions+=8;goto B5e5f74;
case 0x5e5f7c:c.instructions+=7;goto B5e5f7c;
case 0x5e5f80:c.instructions+=6;goto B5e5f80;
case 0x5e5f82:c.instructions+=5;goto B5e5f82;
case 0x5e5f86:c.instructions+=4;goto B5e5f86;
case 0x5e5f8a:c.instructions+=3;goto B5e5f8a;
case 0x5e5f90:c.instructions+=2;goto B5e5f90;
case 0x5e5f94:c.instructions+=1;goto B5e5f94;
case 0x5e5f9a:goto L5e5f9a;
case 0x5e5f9e:c.instructions+=9;goto B5e5f9e;
case 0x5e5fa0:c.instructions+=8;goto B5e5fa0;
case 0x5e5fa2:c.instructions+=7;goto B5e5fa2;
case 0x5e5fa5:c.instructions+=6;goto B5e5fa5;
case 0x5e5fa8:c.instructions+=5;goto B5e5fa8;
case 0x5e5fac:c.instructions+=4;goto B5e5fac;
case 0x5e5fb0:c.instructions+=3;goto B5e5fb0;
case 0x5e5fb3:c.instructions+=2;goto B5e5fb3;
case 0x5e5fb5:c.instructions+=1;goto B5e5fb5;
case 0x5e5fbb:goto L5e5fbb;
case 0x5e5fc1:c.instructions+=2;goto B5e5fc1;
case 0x5e5fc3:c.instructions+=1;goto B5e5fc3;
case 0x5e5fc9:goto L5e5fc9;
case 0x5e5fcb:c.instructions+=2;goto B5e5fcb;
case 0x5e5fd0:c.instructions+=1;goto B5e5fd0;
case 0x5e5fd4:goto L5e5fd4;
case 0x5e5fd6:goto L5e5fd6;
case 0x5e5fd9:c.instructions+=8;goto B5e5fd9;
case 0x5e5fdd:c.instructions+=7;goto B5e5fdd;
case 0x5e5fe1:c.instructions+=6;goto B5e5fe1;
case 0x5e5fe5:c.instructions+=5;goto B5e5fe5;
case 0x5e5fec:c.instructions+=4;goto B5e5fec;
case 0x5e5fed:c.instructions+=3;goto B5e5fed;
case 0x5e5ff4:c.instructions+=2;goto B5e5ff4;
case 0x5e5ffc:c.instructions+=1;goto B5e5ffc;
default:missing_instruction(c.pc);}
B5e5005:L5e5005:{c.instructions+=6;NFSU2_TR(0x5e5005);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5006:{NFSU2_TR(0x5e5006);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5007:{NFSU2_TR(0x5e5007);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5008:{NFSU2_TR(0x5e5008);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5e500c:{NFSU2_TR(0x5e500c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e500d:{NFSU2_TR(0x5e500d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e5012ull));
TAIL_STATIC(0x43d090u,43d);
}
B5e5012:L5e5012:{c.instructions+=5;NFSU2_TR(0x5e5012);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5e5015:{NFSU2_TR(0x5e5015);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5e5019:{NFSU2_TR(0x5e5019);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e501a:{NFSU2_TR(0x5e501a);
w4(R+4,u32(0x883e70ull));
}
B5e501f:{NFSU2_TR(0x5e501f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e5024ull));
TAIL_STATIC(0x5e00d0u,5e0);
}
B5e5024:L5e5024:{c.instructions+=2;NFSU2_TR(0x5e5024);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e5026:{NFSU2_TR(0x5e5026);
if(r1(R+518)){{goto L5e5056;}}
}
B5e5028:L5e5028:{c.instructions+=3;NFSU2_TR(0x5e5028);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5e502a:{NFSU2_TR(0x5e502a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5e502d:{NFSU2_TR(0x5e502d);
__builtin_memmove((R+4),(R+4),4);
}
B5e5030:L5e5030:{c.instructions+=3;NFSU2_TR(0x5e5030);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5e5032:{NFSU2_TR(0x5e5032);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e5034:{NFSU2_TR(0x5e5034);
if(r1(R+518)){{goto L5e5056;}}
}
B5e5036:L5e5036:{c.instructions+=3;NFSU2_TR(0x5e5036);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(s32(s16(r2(U+4)))));
}
B5e503a:{NFSU2_TR(0x5e503a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e503c:{NFSU2_TR(0x5e503c);
if(r1(R+518)){{goto L5e5049;}}
}
B5e503e:L5e503e:{c.instructions+=4;NFSU2_TR(0x5e503e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5e503f:{NFSU2_TR(0x5e503f);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B5e5042:{NFSU2_TR(0x5e5042);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e5045:{NFSU2_TR(0x5e5045);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e5030u);}goto L5e5030;}}
}
B5e5047:L5e5047:{c.instructions+=1;NFSU2_TR(0x5e5047);
{goto L5e5056;}
}
B5e5049:L5e5049:{c.instructions+=3;NFSU2_TR(0x5e5049);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B5e504d:{NFSU2_TR(0x5e504d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e5051:{NFSU2_TR(0x5e5051);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5e5056:L5e5056:{c.instructions+=5;NFSU2_TR(0x5e5056);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5057:{NFSU2_TR(0x5e5057);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5059:{NFSU2_TR(0x5e5059);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e505a:{NFSU2_TR(0x5e505a);
w4(R+4,u32(0x88f298ull));
}
B5e505f:{NFSU2_TR(0x5e505f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e5064ull));
TAIL_STATIC(0x5d9bf0u,5d9);
}
B5e5064:L5e5064:{c.instructions+=3;NFSU2_TR(0x5e5064);
__builtin_memmove((R+24),(R+0),4);
}
B5e5066:{NFSU2_TR(0x5e5066);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e5068:{NFSU2_TR(0x5e5068);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x5e4fa3u,5e4);}
}
B5e506e:L5e506e:{c.instructions+=3;NFSU2_TR(0x5e506e);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5e5072:{NFSU2_TR(0x5e5072);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e5074:{NFSU2_TR(0x5e5074);
if(r1(R+518)){{goto L5e50dc;}}
}
B5e5076:L5e5076:{c.instructions+=5;NFSU2_TR(0x5e5076);
u8 U[4];
w4(U+0,u32(0x3a83126full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e507b:{NFSU2_TR(0x5e507b);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5e507f:{NFSU2_TR(0x5e507f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5080:{NFSU2_TR(0x5e5080);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5081:{NFSU2_TR(0x5e5081);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e5086ull));
TAIL_STATIC(0x43d150u,43d);
}
B5e5086:L5e5086:{c.instructions+=3;NFSU2_TR(0x5e5086);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5e5089:{NFSU2_TR(0x5e5089);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e508b:{NFSU2_TR(0x5e508b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e50d4;}}
}
B5e508d:L5e508d:{c.instructions+=5;NFSU2_TR(0x5e508d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5e5091:{NFSU2_TR(0x5e5091);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e5094:{NFSU2_TR(0x5e5094);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5e5096:{NFSU2_TR(0x5e5096);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e5098:{NFSU2_TR(0x5e5098);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5e50d4;}}
}
B5e509a:L5e509a:{c.instructions+=1;NFSU2_TR(0x5e509a);
__builtin_memmove((R+12),(R+12),4);
}
B5e50a0:L5e50a0:{c.instructions+=9;NFSU2_TR(0x5e50a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e50a3:{NFSU2_TR(0x5e50a3);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5e50a7:{NFSU2_TR(0x5e50a7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e50a8:{NFSU2_TR(0x5e50a8);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B5e50aa:{NFSU2_TR(0x5e50aa);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e50ab:{NFSU2_TR(0x5e50ab);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5e50ae:{NFSU2_TR(0x5e50ae);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e50af:{NFSU2_TR(0x5e50af);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e50b0:{NFSU2_TR(0x5e50b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e50b5ull));
TAIL_STATIC(0x5d4d50u,5d4);
}
B5e50b5:L5e50b5:{c.instructions+=3;NFSU2_TR(0x5e50b5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5e50b8:{NFSU2_TR(0x5e50b8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e50ba:{NFSU2_TR(0x5e50ba);
if(r1(R+518)){{goto L5e50c9;}}
}
B5e50bc:L5e50bc:{c.instructions+=2;NFSU2_TR(0x5e50bc);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5e50c1:{NFSU2_TR(0x5e50c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e50c9:L5e50c9:{c.instructions+=5;NFSU2_TR(0x5e50c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e50cc:{NFSU2_TR(0x5e50cc);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5e50cd:{NFSU2_TR(0x5e50cd);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B5e50d0:{NFSU2_TR(0x5e50d0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e50d2:{NFSU2_TR(0x5e50d2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e50a0u);}goto L5e50a0;}}
}
B5e50d4:L5e50d4:{c.instructions+=3;NFSU2_TR(0x5e50d4);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5e50d8:{NFSU2_TR(0x5e50d8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e50da:{NFSU2_TR(0x5e50da);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e50f9;}}
}
B5e50dc:L5e50dc:{c.instructions+=3;NFSU2_TR(0x5e50dc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e50dd:{NFSU2_TR(0x5e50dd);
w4(R+4,u32(0x883e70ull));
}
B5e50e2:{NFSU2_TR(0x5e50e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e50e7ull));
TAIL_STATIC(0x5e00d0u,5e0);
}
B5e50e7:L5e50e7:{c.instructions+=2;NFSU2_TR(0x5e50e7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e50e9:{NFSU2_TR(0x5e50e9);
if(r1(R+518)){{goto L5e50f9;}}
}
B5e50eb:L5e50eb:{c.instructions+=7;NFSU2_TR(0x5e50eb);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5e50ef:{NFSU2_TR(0x5e50ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e50f0:{NFSU2_TR(0x5e50f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e50f1:{NFSU2_TR(0x5e50f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e50f2:{NFSU2_TR(0x5e50f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e50f3:{NFSU2_TR(0x5e50f3);
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
B5e50f6:{NFSU2_TR(0x5e50f6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e50f9:L5e50f9:{c.instructions+=7;NFSU2_TR(0x5e50f9);
u8 U[6];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B5e50fe:{NFSU2_TR(0x5e50fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e50ff:{NFSU2_TR(0x5e50ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e5100:{NFSU2_TR(0x5e5100);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e5101:{NFSU2_TR(0x5e5101);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e5102:{NFSU2_TR(0x5e5102);
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
B5e5105:{NFSU2_TR(0x5e5105);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e5110:L5e5110:{c.instructions+=11;NFSU2_TR(0x5e5110);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5111:{NFSU2_TR(0x5e5111);
__builtin_memmove((R+20),(R+16),4);
}
B5e5113:{NFSU2_TR(0x5e5113);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B5e5116:{NFSU2_TR(0x5e5116);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x308ull))));
}
B5e511c:{NFSU2_TR(0x5e511c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e511d:{NFSU2_TR(0x5e511d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e511e:{NFSU2_TR(0x5e511e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e511f:{NFSU2_TR(0x5e511f);
__builtin_memmove((R+12),(R+4),4);
}
B5e5121:{NFSU2_TR(0x5e5121);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5122:{NFSU2_TR(0x5e5122);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e5126:{NFSU2_TR(0x5e5126);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e512bull));
TAIL_STATIC(0x5d60a0u,5d6);
}
B5e512b:L5e512b:{c.instructions+=7;NFSU2_TR(0x5e512b);
__builtin_memmove((R+0),gp(0x883dac),4);
}
B5e5130:{NFSU2_TR(0x5e5130);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e5132:{NFSU2_TR(0x5e5132);
u8 U[6];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w2(U+4,u16(0x9c4ull));
s2(u32(r4(U+0)),r2(U+4));
}
B5e5139:{NFSU2_TR(0x5e5139);
u8 U[6];
w4(U+0,u32(u32(u32(0x1aull))+u32(r4(R+16))));
w2(U+4,u16(0x960ull));
s2(u32(r4(U+0)),r2(U+4));
}
B5e5140:{NFSU2_TR(0x5e5140);
u8 U[6];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w2(U+4,u16(0xa28ull));
s2(u32(r4(U+0)),r2(U+4));
}
B5e5147:{NFSU2_TR(0x5e5147);
w4(R+24,u32(0x3ull));
}
B5e514c:{NFSU2_TR(0x5e514c);
if(r1(R+518)){{goto L5e5157;}}
}
B5e514e:L5e514e:{c.instructions+=2;NFSU2_TR(0x5e514e);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B5e5155:{NFSU2_TR(0x5e5155);
{goto L5e5159;}
}
B5e5157:L5e5157:{c.instructions+=1;NFSU2_TR(0x5e5157);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5e5159:L5e5159:{c.instructions+=3;NFSU2_TR(0x5e5159);
__builtin_memmove((R+0),gp(0x883e98),4);
}
B5e515e:{NFSU2_TR(0x5e515e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x883e98ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e5163:{NFSU2_TR(0x5e5163);
if(r1(R+518)){{goto L5e5191;}}
}
B5e5165:L5e5165:{c.instructions+=2;NFSU2_TR(0x5e5165);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5e5168:{NFSU2_TR(0x5e5168);
if(r1(R+518)){{goto L5e5175;}}
}
B5e516a:L5e516a:{c.instructions+=3;NFSU2_TR(0x5e516a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5e516c:{NFSU2_TR(0x5e516c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x883e98ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e5171:{NFSU2_TR(0x5e5171);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e5165u);}goto L5e5165;}}
}
B5e5173:L5e5173:{c.instructions+=1;NFSU2_TR(0x5e5173);
{goto L5e5191;}
}
B5e5175:L5e5175:{c.instructions+=3;NFSU2_TR(0x5e5175);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e5178:{NFSU2_TR(0x5e5178);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e517a:{NFSU2_TR(0x5e517a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5e5191;}}
}
B5e517c:L5e517c:{c.instructions+=4;NFSU2_TR(0x5e517c);
__builtin_memmove((R+4),(R+8),4);
}
B5e517e:{NFSU2_TR(0x5e517e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(u32(0x1ull))));
w1(R+512,u8((r4(U+0))!=(u32(0x0ull))));
w4(R+4,shr<u32>(r4(R+4),u64(u32(0x1ull))));
}
B5e5180:{NFSU2_TR(0x5e5180);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e5183:{NFSU2_TR(0x5e5183);
u8 U[4];
w4(U+0,u32(u32(u32(0x1eull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B5e5187:L5e5187:{c.instructions+=1;NFSU2_TR(0x5e5187);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5e5189;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e5187u);}goto L5e5187;}
}
B5e5189:L5e5189:{c.instructions+=1;NFSU2_TR(0x5e5189);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))+u32(r4(R+4))));
w4(R+4,u32(u32(r4(U+4))+u32(r4(U+0))));
}
B5e518b:L5e518b:{c.instructions+=1;NFSU2_TR(0x5e518b);
u8 U[37];
w1(U+36,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+36)){{goto L5e518e;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+18),(R+28),4);
w4(U+22,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+26,u32(r1(R+522)));
w4(U+30,u32(u32(u32(0x4ull))*u32(r4(U+26))));
w4(R+28,u32(u32(r4(U+22))-u32(r4(U+30))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),2);
__builtin_memmove((U+34),(U+16),2);
s2(u32(r4(U+18)),r2(U+34));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e518bu);}goto L5e518b;}
}
B5e518e:L5e518e:{c.instructions+=1;NFSU2_TR(0x5e518e);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e5191:L5e5191:{c.instructions+=3;NFSU2_TR(0x5e5191);
__builtin_memmove((R+0),gp(0x883de0),4);
}
B5e5196:{NFSU2_TR(0x5e5196);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e5198:{NFSU2_TR(0x5e5198);
if(r1(R+518)){{goto L5e51a9;}}
}
B5e519a:L5e519a:{c.instructions+=3;NFSU2_TR(0x5e519a);
__builtin_memmove((R+0),gp(0x883de4),4);
}
B5e519f:{NFSU2_TR(0x5e519f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e51a1:{NFSU2_TR(0x5e51a1);
if(r1(R+518)){{goto L5e51a9;}}
}
B5e51a3:L5e51a3:{c.instructions+=2;NFSU2_TR(0x5e51a3);
u8 U[14];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),2);
s2(u32(r4(U+8)),r2(U+12));
}
B5e51a8:{NFSU2_TR(0x5e51a8);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5e51a9:L5e51a9:{c.instructions+=3;NFSU2_TR(0x5e51a9);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B5e51b0:{NFSU2_TR(0x5e51b0);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))&u32(r2(R+0))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B5e51b3:{NFSU2_TR(0x5e51b3);
if(r1(R+518)){{goto L5e51bb;}}
}
B5e51b5:L5e51b5:{c.instructions+=2;NFSU2_TR(0x5e51b5);
u8 U[14];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),2);
s2(u32(r4(U+8)),r2(U+12));
}
B5e51ba:{NFSU2_TR(0x5e51ba);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5e51bb:L5e51bb:{c.instructions+=3;NFSU2_TR(0x5e51bb);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6aeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B5e51c2:{NFSU2_TR(0x5e51c2);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))&u32(r2(R+0))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B5e51c5:{NFSU2_TR(0x5e51c5);
if(r1(R+518)){{goto L5e51cd;}}
}
B5e51c7:L5e51c7:{c.instructions+=2;NFSU2_TR(0x5e51c7);
u8 U[14];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),2);
s2(u32(r4(U+8)),r2(U+12));
}
B5e51cc:{NFSU2_TR(0x5e51cc);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5e51cd:L5e51cd:{c.instructions+=3;NFSU2_TR(0x5e51cd);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B5e51d4:{NFSU2_TR(0x5e51d4);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))&u32(r2(R+0))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B5e51d7:{NFSU2_TR(0x5e51d7);
if(r1(R+518)){{goto L5e51df;}}
}
B5e51d9:L5e51d9:{c.instructions+=2;NFSU2_TR(0x5e51d9);
u8 U[14];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),2);
s2(u32(r4(U+8)),r2(U+12));
}
B5e51de:{NFSU2_TR(0x5e51de);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5e51df:L5e51df:{c.instructions+=3;NFSU2_TR(0x5e51df);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6b2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B5e51e6:{NFSU2_TR(0x5e51e6);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))&u32(r2(R+0))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B5e51e9:{NFSU2_TR(0x5e51e9);
if(r1(R+518)){{goto L5e51f1;}}
}
B5e51eb:L5e51eb:{c.instructions+=2;NFSU2_TR(0x5e51eb);
u8 U[14];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),2);
s2(u32(r4(U+8)),r2(U+12));
}
B5e51f0:{NFSU2_TR(0x5e51f0);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5e51f1:L5e51f1:{c.instructions+=6;NFSU2_TR(0x5e51f1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e51f3:{NFSU2_TR(0x5e51f3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e51f4:{NFSU2_TR(0x5e51f4);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5e51f8:{NFSU2_TR(0x5e51f8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e51f9:{NFSU2_TR(0x5e51f9);
__builtin_memmove((R+4),(R+12),4);
}
B5e51fb:{NFSU2_TR(0x5e51fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e5200ull));
TAIL_STATIC(0x5dacb0u,5da);
}
B5e5200:L5e5200:{c.instructions+=6;NFSU2_TR(0x5e5200);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5202:{NFSU2_TR(0x5e5202);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5203:{NFSU2_TR(0x5e5203);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5e5207:{NFSU2_TR(0x5e5207);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5208:{NFSU2_TR(0x5e5208);
__builtin_memmove((R+4),(R+12),4);
}
B5e520a:{NFSU2_TR(0x5e520a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e520full));
TAIL_STATIC(0x5dacb0u,5da);
}
B5e520f:L5e520f:{c.instructions+=5;NFSU2_TR(0x5e520f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5e5211:{NFSU2_TR(0x5e5211);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5e5213:{NFSU2_TR(0x5e5213);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0xc6ull))));
}
B5e5219:{NFSU2_TR(0x5e5219);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e521d:{NFSU2_TR(0x5e521d);
__builtin_memmove((R+4),(R+4),4);
}
B5e5220:L5e5220:{c.instructions+=3;NFSU2_TR(0x5e5220);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+12))),2);
__builtin_memmove((R+12),(U+0),2);
}
B5e5223:{NFSU2_TR(0x5e5223);
u8 U[2];
w1(R+523,u8(0x0ull));
w2(U+0,u16(u32(r2(R+12))&u32(r2(R+12))));
w1(R+519,u8(s16(r2(U+0))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B5e5226:{NFSU2_TR(0x5e5226);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5e52bf;}}
}
B5e522c:L5e522c:{c.instructions+=3;NFSU2_TR(0x5e522c);
__builtin_memmove((R+28),gp(0x883e90),4);
}
B5e5232:{NFSU2_TR(0x5e5232);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x883e90ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e5238:{NFSU2_TR(0x5e5238);
if(r1(R+518)){{goto L5e526b;}}
}
B5e523a:L5e523a:{c.instructions+=1;NFSU2_TR(0x5e523a);
__builtin_memmove((R+12),(R+12),4);
}
B5e5240:L5e5240:{c.instructions+=4;NFSU2_TR(0x5e5240);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B5e5244:{NFSU2_TR(0x5e5244);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5e5246:{NFSU2_TR(0x5e5246);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e5248:{NFSU2_TR(0x5e5248);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5e5261;}}
}
B5e524a:L5e524a:{c.instructions+=2;NFSU2_TR(0x5e524a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1aull))));
__builtin_memmove((R+8),(U+0),4);
}
B5e524d:{NFSU2_TR(0x5e524d);
__builtin_memmove((R+4),(R+4),4);
}
B5e5250:L5e5250:{c.instructions+=2;NFSU2_TR(0x5e5250);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(r2(R+12))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B5e5253:{NFSU2_TR(0x5e5253);
if(r1(R+518)){{goto L5e52dc;}}
}
B5e5259:L5e5259:{c.instructions+=4;NFSU2_TR(0x5e5259);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5e525a:{NFSU2_TR(0x5e525a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2ull))));
}
B5e525d:{NFSU2_TR(0x5e525d);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e525f:{NFSU2_TR(0x5e525f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e5250u);}goto L5e5250;}}
}
B5e5261:L5e5261:{c.instructions+=3;NFSU2_TR(0x5e5261);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5e5263:{NFSU2_TR(0x5e5263);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x883e90ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e5269:{NFSU2_TR(0x5e5269);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e5240u);}goto L5e5240;}}
}
B5e526b:L5e526b:{c.instructions+=3;NFSU2_TR(0x5e526b);
__builtin_memmove((R+4),gp(0x883e80),4);
}
B5e5271:{NFSU2_TR(0x5e5271);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x883e80ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e5277:{NFSU2_TR(0x5e5277);
if(r1(R+518)){{goto L5e5290;}}
}
B5e5279:L5e5279:{c.instructions+=2;NFSU2_TR(0x5e5279);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e527d:{NFSU2_TR(0x5e527d);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
__builtin_memmove((R+8),(U+0),2);
}
B5e5280:L5e5280:{c.instructions+=2;NFSU2_TR(0x5e5280);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+8))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B5e5284:{NFSU2_TR(0x5e5284);
if(r1(R+518)){{goto L5e5292;}}
}
B5e5286:L5e5286:{c.instructions+=3;NFSU2_TR(0x5e5286);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5e5288:{NFSU2_TR(0x5e5288);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x883e80ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e528e:{NFSU2_TR(0x5e528e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e5280u);}goto L5e5280;}}
}
B5e5290:L5e5290:{c.instructions+=1;NFSU2_TR(0x5e5290);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5e5292:L5e5292:{c.instructions+=3;NFSU2_TR(0x5e5292);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e5295:{NFSU2_TR(0x5e5295);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e5297:{NFSU2_TR(0x5e5297);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5e52ad;}}
}
B5e5299:L5e5299:{c.instructions+=4;NFSU2_TR(0x5e5299);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e529c:{NFSU2_TR(0x5e529c);
__builtin_memmove((R+4),(R+8),4);
}
B5e529e:{NFSU2_TR(0x5e529e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(u32(0x1ull))));
w1(R+512,u8((r4(U+0))!=(u32(0x0ull))));
w4(R+4,shr<u32>(r4(R+4),u64(u32(0x1ull))));
}
B5e52a0:{NFSU2_TR(0x5e52a0);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B5e52a4:L5e52a4:{c.instructions+=1;NFSU2_TR(0x5e52a4);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5e52a6;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e52a4u);}goto L5e52a4;}
}
B5e52a6:L5e52a6:{c.instructions+=1;NFSU2_TR(0x5e52a6);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))+u32(r4(R+4))));
w4(R+4,u32(u32(r4(U+4))+u32(r4(U+0))));
}
B5e52a8:L5e52a8:{c.instructions+=1;NFSU2_TR(0x5e52a8);
u8 U[37];
w1(U+36,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+36)){{goto L5e52ab;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+18),(R+28),4);
w4(U+22,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+26,u32(r1(R+522)));
w4(U+30,u32(u32(u32(0x4ull))*u32(r4(U+26))));
w4(R+28,u32(u32(r4(U+22))-u32(r4(U+30))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),2);
__builtin_memmove((U+34),(U+16),2);
s2(u32(r4(U+18)),r2(U+34));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e52a8u);}goto L5e52a8;}
}
B5e52ab:L5e52ab:{c.instructions+=1;NFSU2_TR(0x5e52ab);
__builtin_memmove((R+0),(R+8),4);
}
B5e52ad:L5e52ad:{c.instructions+=6;NFSU2_TR(0x5e52ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e52b1:{NFSU2_TR(0x5e52b1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e52b2:{NFSU2_TR(0x5e52b2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e52b3:{NFSU2_TR(0x5e52b3);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5e52b7:{NFSU2_TR(0x5e52b7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e52b8:{NFSU2_TR(0x5e52b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e52bdull));
TAIL_STATIC(0x5dacb0u,5da);
}
B5e52bd:L5e52bd:{c.instructions+=1;NFSU2_TR(0x5e52bd);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5e52bf:L5e52bf:{c.instructions+=6;NFSU2_TR(0x5e52bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5e52c3:{NFSU2_TR(0x5e52c3);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B5e52c4:{NFSU2_TR(0x5e52c4);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x5cull))));
}
B5e52c7:{NFSU2_TR(0x5e52c7);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B5e52ca:{NFSU2_TR(0x5e52ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e52ce:{NFSU2_TR(0x5e52ce);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e5220u);}goto L5e5220;}}
}
B5e52d4:L5e52d4:{c.instructions+=7;NFSU2_TR(0x5e52d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e52d5:{NFSU2_TR(0x5e52d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e52d6:{NFSU2_TR(0x5e52d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e52d7:{NFSU2_TR(0x5e52d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e52d8:{NFSU2_TR(0x5e52d8);
__builtin_memmove((R+16),(R+20),4);
}
B5e52da:{NFSU2_TR(0x5e52da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e52db:{NFSU2_TR(0x5e52db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e52dc:L5e52dc:{c.instructions+=6;NFSU2_TR(0x5e52dc);
u8 U[4];
w4(U+0,u32(0x180ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e52e1:{NFSU2_TR(0x5e52e1);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5e52e5:{NFSU2_TR(0x5e52e5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e52e6:{NFSU2_TR(0x5e52e6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e52e7:{NFSU2_TR(0x5e52e7);
w4(R+4,u32(0x883e70ull));
}
B5e52ec:{NFSU2_TR(0x5e52ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e52f1ull));
TAIL_STATIC(0x5dff50u,5df);
}
B5e52f1:L5e52f1:{c.instructions+=1;NFSU2_TR(0x5e52f1);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e52adu);}goto L5e52ad;}
}
B5e5300:L5e5300:{c.instructions+=10;NFSU2_TR(0x5e5300);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5301:{NFSU2_TR(0x5e5301);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5302:{NFSU2_TR(0x5e5302);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5303:{NFSU2_TR(0x5e5303);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5e5307:{NFSU2_TR(0x5e5307);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5308:{NFSU2_TR(0x5e5308);
__builtin_memmove((R+12),(R+4),4);
}
B5e530a:{NFSU2_TR(0x5e530a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e530b:{NFSU2_TR(0x5e530b);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5e5310:{NFSU2_TR(0x5e5310);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5e5312:{NFSU2_TR(0x5e5312);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xccull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e5318:L5e5318:{c.instructions+=4;NFSU2_TR(0x5e5318);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5e531b:{NFSU2_TR(0x5e531b);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B5e531e:{NFSU2_TR(0x5e531e);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e5320:{NFSU2_TR(0x5e5320);
if(r1(R+518)){{goto L5e532d;}}
}
B5e5322:L5e5322:{c.instructions+=4;NFSU2_TR(0x5e5322);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5e5325:{NFSU2_TR(0x5e5325);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5326:{NFSU2_TR(0x5e5326);
__builtin_memmove((R+4),(R+12),4);
}
B5e5328:{NFSU2_TR(0x5e5328);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e532dull));
TAIL_STATIC(0x5e4f20u,5e4);
}
B5e532d:L5e532d:{c.instructions+=3;NFSU2_TR(0x5e532d);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(R+0))-u32(r2(U+6))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B5e5331:{NFSU2_TR(0x5e5331);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5e5333:{NFSU2_TR(0x5e5333);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e533a;}}
}
B5e5335:L5e5335:{c.instructions+=3;NFSU2_TR(0x5e5335);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5e5336:{NFSU2_TR(0x5e5336);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5e5338:{NFSU2_TR(0x5e5338);
{goto L5e5351;}
}
B5e533a:L5e533a:{c.instructions+=3;NFSU2_TR(0x5e533a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e533d:{NFSU2_TR(0x5e533d);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5e5341:{NFSU2_TR(0x5e5341);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e534b;}}
}
B5e5343:L5e5343:{c.instructions+=2;NFSU2_TR(0x5e5343);
u8 U[4];
w4(U+0,u32(0x3e8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5e5349:{NFSU2_TR(0x5e5349);
{goto L5e5351;}
}
B5e534b:L5e534b:{c.instructions+=1;NFSU2_TR(0x5e534b);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5e5351:L5e5351:{c.instructions+=4;NFSU2_TR(0x5e5351);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5e5353:{NFSU2_TR(0x5e5353);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B5e5357:{NFSU2_TR(0x5e5357);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(R+0))-u32(r2(U+0))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B5e535a:{NFSU2_TR(0x5e535a);
if(r1(R+518)){{goto L5e536d;}}
}
B5e535c:L5e535c:{c.instructions+=2;NFSU2_TR(0x5e535c);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x0ull)));
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
}
B5e535f:{NFSU2_TR(0x5e535f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5e5363;}}
}
B5e5361:L5e5361:{c.instructions+=1;NFSU2_TR(0x5e5361);
__builtin_memmove((R+0),(R+4),4);
}
B5e5363:L5e5363:{c.instructions+=2;NFSU2_TR(0x5e5363);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(R+0))-u32(r2(U+0))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B5e5366:{NFSU2_TR(0x5e5366);
if(r1(R+518)){{goto L5e536d;}}
}
B5e5368:L5e5368:{c.instructions+=1;NFSU2_TR(0x5e5368);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5e536d:L5e536d:{c.instructions+=5;NFSU2_TR(0x5e536d);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),2);
s2(u32(r4(U+4)),r2(U+8));
}
B5e5372:{NFSU2_TR(0x5e5372);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5e5373:{NFSU2_TR(0x5e5373);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x5cull))));
}
B5e5376:{NFSU2_TR(0x5e5376);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e5379:{NFSU2_TR(0x5e5379);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e5318u);}goto L5e5318;}}
}
B5e537b:L5e537b:{c.instructions+=9;NFSU2_TR(0x5e537b);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x288ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5e5381:{NFSU2_TR(0x5e5381);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5e5385:{NFSU2_TR(0x5e5385);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e5386:{NFSU2_TR(0x5e5386);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e5387:{NFSU2_TR(0x5e5387);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e5388:{NFSU2_TR(0x5e5388);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+0,u8(u32(r1(R+0))|u32(r1(R+4))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5e538a:{NFSU2_TR(0x5e538a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e538b:{NFSU2_TR(0x5e538b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5e538c:{NFSU2_TR(0x5e538c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e5390:L5e5390:{c.instructions+=4;NFSU2_TR(0x5e5390);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5391:{NFSU2_TR(0x5e5391);
__builtin_memmove((R+24),gp(0x88e9c4),4);
}
B5e5397:{NFSU2_TR(0x5e5397);
w4(R+4,u32(0x88e9c4ull));
}
B5e539c:{NFSU2_TR(0x5e539c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e53a1ull));
TAIL_STATIC(0x502fd0u,502);
}
B5e53a1:L5e53a1:{c.instructions+=2;NFSU2_TR(0x5e53a1);
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
B5e53a3:{NFSU2_TR(0x5e53a3);
if(r1(R+518)){{goto L5e53e6;}}
}
B5e53a5:L5e53a5:{c.instructions+=2;NFSU2_TR(0x5e53a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e53a9:{NFSU2_TR(0x5e53a9);
__builtin_memmove((R+16),(R+16),4);
}
B5e53b0:L5e53b0:{c.instructions+=2;NFSU2_TR(0x5e53b0);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5e53b3:{NFSU2_TR(0x5e53b3);
if(r1(R+518)){{goto L5e53bd;}}
}
B5e53b5:L5e53b5:{c.instructions+=3;NFSU2_TR(0x5e53b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5e53b7:{NFSU2_TR(0x5e53b7);
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
B5e53b9:{NFSU2_TR(0x5e53b9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e53b0u);}goto L5e53b0;}}
}
B5e53bb:L5e53bb:{c.instructions+=2;NFSU2_TR(0x5e53bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e53bc:{NFSU2_TR(0x5e53bc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e53bd:L5e53bd:{c.instructions+=2;NFSU2_TR(0x5e53bd);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
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
B5e53c0:{NFSU2_TR(0x5e53c0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e53e6;}}
}
B5e53c2:L5e53c2:{c.instructions+=8;NFSU2_TR(0x5e53c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5e53c4:{NFSU2_TR(0x5e53c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e53c7:{NFSU2_TR(0x5e53c7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5e53c9:{NFSU2_TR(0x5e53c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e53cc:{NFSU2_TR(0x5e53cc);
__builtin_memmove((R+0),gp(0x883e3c),4);
}
B5e53d1:{NFSU2_TR(0x5e53d1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e53d2:{NFSU2_TR(0x5e53d2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e53d3:{NFSU2_TR(0x5e53d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e53d8ull));
TAIL_STATIC(0x43f920u,43f);
}
B5e53d8:L5e53d8:{c.instructions+=4;NFSU2_TR(0x5e53d8);
__builtin_memmove((R+0),gp(0x876dcc),4);
}
B5e53dd:{NFSU2_TR(0x5e53dd);
w1(R+512,carry<u32>(r4(R+16),u32(0x8ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5e53e0:{NFSU2_TR(0x5e53e0);
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
B5e53e1:{NFSU2_TR(0x5e53e1);
__builtin_memmove(gp(0x876dcc),(R+0),4);
}
B5e53e6:L5e53e6:{c.instructions+=2;NFSU2_TR(0x5e53e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e53e7:{NFSU2_TR(0x5e53e7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e53f0:L5e53f0:{c.instructions+=3;NFSU2_TR(0x5e53f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e53f4:{NFSU2_TR(0x5e53f4);
u8 U[14];
__builtin_memmove((U+6),gp(0x883e40),4);
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
B5e53fa:{NFSU2_TR(0x5e53fa);
if(r1(R+518)){{goto L5e5420;}}
}
B5e53fc:L5e53fc:{c.instructions+=8;NFSU2_TR(0x5e53fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5e53fe:{NFSU2_TR(0x5e53fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e5401:{NFSU2_TR(0x5e5401);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5e5403:{NFSU2_TR(0x5e5403);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5404:{NFSU2_TR(0x5e5404);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e5407:{NFSU2_TR(0x5e5407);
__builtin_memmove((R+0),gp(0x883e38),4);
}
B5e540c:{NFSU2_TR(0x5e540c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e540d:{NFSU2_TR(0x5e540d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e5412ull));
TAIL_STATIC(0x43f920u,43f);
}
B5e5412:L5e5412:{c.instructions+=4;NFSU2_TR(0x5e5412);
__builtin_memmove((R+0),gp(0x876dc8),4);
}
B5e5417:{NFSU2_TR(0x5e5417);
w1(R+512,carry<u32>(r4(R+16),u32(0x8ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5e541a:{NFSU2_TR(0x5e541a);
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
B5e541b:{NFSU2_TR(0x5e541b);
__builtin_memmove(gp(0x876dc8),(R+0),4);
}
B5e5420:L5e5420:{c.instructions+=1;NFSU2_TR(0x5e5420);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e5430:L5e5430:{c.instructions+=28;NFSU2_TR(0x5e5430);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5431:{NFSU2_TR(0x5e5431);
__builtin_memmove((R+20),(R+16),4);
}
B5e5433:{NFSU2_TR(0x5e5433);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B5e5436:{NFSU2_TR(0x5e5436);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5438:{NFSU2_TR(0x5e5438);
u8 U[4];
w4(U+0,u32(0x779530ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e543d:{NFSU2_TR(0x5e543d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e5443:{NFSU2_TR(0x5e5443);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5444:{NFSU2_TR(0x5e5444);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e544b:{NFSU2_TR(0x5e544b);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x24ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x24ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5e544e:{NFSU2_TR(0x5e544e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e544f:{NFSU2_TR(0x5e544f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5450:{NFSU2_TR(0x5e5450);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5451:{NFSU2_TR(0x5e5451);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+20),(U+0),4);
}
B5e5455:{NFSU2_TR(0x5e5455);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5e5459:{NFSU2_TR(0x5e5459);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e545a:{NFSU2_TR(0x5e545a);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e545e:{NFSU2_TR(0x5e545e);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e5462:{NFSU2_TR(0x5e5462);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B5e5466:{NFSU2_TR(0x5e5466);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5e546a:{NFSU2_TR(0x5e546a);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e5472:{NFSU2_TR(0x5e5472);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e5476:{NFSU2_TR(0x5e5476);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e547a:{NFSU2_TR(0x5e547a);
__builtin_memmove((R+24),gp(0x88f208),4);
}
B5e5480:{NFSU2_TR(0x5e5480);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5e5484:{NFSU2_TR(0x5e5484);
w4(R+4,u32(0x88f208ull));
}
B5e5489:{NFSU2_TR(0x5e5489);
u8 U[5];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5e548e:{NFSU2_TR(0x5e548e);
__builtin_memmove(gp(0x800ecc),(R+8),4);
}
B5e5494:{NFSU2_TR(0x5e5494);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e5499ull));
TAIL_STATIC(0x502fd0u,502);
}
B5e5499:L5e5499:{c.instructions+=3;NFSU2_TR(0x5e5499);
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
B5e549b:{NFSU2_TR(0x5e549b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e549f:{NFSU2_TR(0x5e549f);
if(r1(R+518)){{goto L5e55d5;}}
}
B5e54a5:L5e54a5:{c.instructions+=2;NFSU2_TR(0x5e54a5);
w4(R+4,u32(0x88e9c4ull));
}
B5e54aa:{NFSU2_TR(0x5e54aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e54afull));
TAIL_STATIC(0x502fd0u,502);
}
B5e54af:L5e54af:{c.instructions+=2;NFSU2_TR(0x5e54af);
__builtin_memmove((R+20),(R+0),4);
}
B5e54b1:{NFSU2_TR(0x5e54b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e54b5:L5e54b5:{c.instructions+=7;NFSU2_TR(0x5e54b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5e54b7:{NFSU2_TR(0x5e54b7);
__builtin_memmove((R+28),gp(0x88e9c4),4);
}
B5e54bd:{NFSU2_TR(0x5e54bd);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e54bf:{NFSU2_TR(0x5e54bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5e54c2:{NFSU2_TR(0x5e54c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e54c6:{NFSU2_TR(0x5e54c6);
__builtin_memmove(gp(0x883e40),(R+24),4);
}
B5e54cc:{NFSU2_TR(0x5e54cc);
if(r1(R+518)){{goto L5e54ff;}}
}
B5e54ce:L5e54ce:{c.instructions+=1;NFSU2_TR(0x5e54ce);
__builtin_memmove((R+28),(R+28),4);
}
B5e54d0:L5e54d0:{c.instructions+=2;NFSU2_TR(0x5e54d0);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5e54d3:{NFSU2_TR(0x5e54d3);
if(r1(R+518)){{goto L5e54f9;}}
}
B5e54d5:L5e54d5:{c.instructions+=1;NFSU2_TR(0x5e54d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e54daull));
TAIL_STATIC(0x43bdf0u,43b);
}
B5e54da:L5e54da:{c.instructions+=3;NFSU2_TR(0x5e54da);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e54db:{NFSU2_TR(0x5e54db);
__builtin_memmove((R+20),(R+0),4);
}
B5e54dd:{NFSU2_TR(0x5e54dd);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e54e0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5e54e0:L5e54e0:{c.instructions+=1;NFSU2_TR(0x5e54e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e54e5ull));
TAIL_STATIC(0x43bdf0u,43b);
}
B5e54e5:L5e54e5:{c.instructions+=3;NFSU2_TR(0x5e54e5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e54e6:{NFSU2_TR(0x5e54e6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e54e7:{NFSU2_TR(0x5e54e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e54ecull));
TAIL_STATIC(0x43be20u,43b);
}
B5e54ec:L5e54ec:{c.instructions+=4;NFSU2_TR(0x5e54ec);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5e54ef:{NFSU2_TR(0x5e54ef);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5e54f3:{NFSU2_TR(0x5e54f3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5e54f6:{NFSU2_TR(0x5e54f6);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e54f9:L5e54f9:{c.instructions+=3;NFSU2_TR(0x5e54f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5e54fb:{NFSU2_TR(0x5e54fb);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e54fd:{NFSU2_TR(0x5e54fd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e54d0u);}goto L5e54d0;}}
}
B5e54ff:L5e54ff:{c.instructions+=8;NFSU2_TR(0x5e54ff);
s4(0x883e40,u32(0x0ull));
}
B5e5509:{NFSU2_TR(0x5e5509);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5e550b:{NFSU2_TR(0x5e550b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e550e:{NFSU2_TR(0x5e550e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5e5510:{NFSU2_TR(0x5e5510);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e5513:{NFSU2_TR(0x5e5513);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e5516:{NFSU2_TR(0x5e5516);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e5518:{NFSU2_TR(0x5e5518);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e552c;}}
}
B5e551a:L5e551a:{c.instructions+=4;NFSU2_TR(0x5e551a);
__builtin_memmove((R+4),gp(0x883e38),4);
}
B5e5520:{NFSU2_TR(0x5e5520);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5521:{NFSU2_TR(0x5e5521);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5522:{NFSU2_TR(0x5e5522);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e5527ull));
TAIL_STATIC(0x43f920u,43f);
}
B5e5527:L5e5527:{c.instructions+=2;NFSU2_TR(0x5e5527);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5e552a:{NFSU2_TR(0x5e552a);
{goto L5e553f;}
}
B5e552c:L5e552c:{c.instructions+=6;NFSU2_TR(0x5e552c);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e5530:{NFSU2_TR(0x5e5530);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5e5532:{NFSU2_TR(0x5e5532);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e5536:{NFSU2_TR(0x5e5536);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5e553a:{NFSU2_TR(0x5e553a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e553d:{NFSU2_TR(0x5e553d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5e553f:L5e553f:{c.instructions+=3;NFSU2_TR(0x5e553f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5e5543:{NFSU2_TR(0x5e5543);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5e5547:{NFSU2_TR(0x5e5547);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e54b5u);}goto L5e54b5;}}
}
B5e554d:L5e554d:{c.instructions+=4;NFSU2_TR(0x5e554d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5e5551:{NFSU2_TR(0x5e5551);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5e5555:{NFSU2_TR(0x5e5555);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e5557:{NFSU2_TR(0x5e5557);
if(r1(R+518)){{goto L5e5590;}}
}
B5e5559:L5e5559:{c.instructions+=1;NFSU2_TR(0x5e5559);
__builtin_memmove((R+16),(R+16),4);
}
B5e5560:L5e5560:{c.instructions+=15;NFSU2_TR(0x5e5560);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5e5562:{NFSU2_TR(0x5e5562);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5e5565:{NFSU2_TR(0x5e5565);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5e5567:{NFSU2_TR(0x5e5567);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5e556a:{NFSU2_TR(0x5e556a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e556d:{NFSU2_TR(0x5e556d);
__builtin_memmove((R+4),gp(0x88f20c),4);
}
B5e5573:{NFSU2_TR(0x5e5573);
__builtin_memmove((R+0),(R+28),4);
}
B5e5575:{NFSU2_TR(0x5e5575);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5e5577:{NFSU2_TR(0x5e5577);
__builtin_memmove(gp(0x88f20c),(R+0),4);
}
B5e557c:{NFSU2_TR(0x5e557c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5e557e:{NFSU2_TR(0x5e557e);
u8 U[4];
w4(U+0,u32(0x88f208ull));
s4(u32(r4(R+0)),r4(U+0));
}
B5e5584:{NFSU2_TR(0x5e5584);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5e5588:{NFSU2_TR(0x5e5588);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5e558c:{NFSU2_TR(0x5e558c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e558e:{NFSU2_TR(0x5e558e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e5560u);}goto L5e5560;}}
}
B5e5590:L5e5590:{c.instructions+=4;NFSU2_TR(0x5e5590);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5e5594:{NFSU2_TR(0x5e5594);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5e5598:{NFSU2_TR(0x5e5598);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e559a:{NFSU2_TR(0x5e559a);
if(r1(R+518)){{goto L5e55d5;}}
}
B5e559c:L5e559c:{c.instructions+=1;NFSU2_TR(0x5e559c);
__builtin_memmove((R+16),(R+16),4);
}
B5e55a0:L5e55a0:{c.instructions+=15;NFSU2_TR(0x5e55a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5e55a3:{NFSU2_TR(0x5e55a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5e55a6:{NFSU2_TR(0x5e55a6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5e55a9:{NFSU2_TR(0x5e55a9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5e55ab:{NFSU2_TR(0x5e55ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e55ae:{NFSU2_TR(0x5e55ae);
__builtin_memmove((R+4),gp(0x88f20c),4);
}
B5e55b4:{NFSU2_TR(0x5e55b4);
__builtin_memmove((R+0),(R+20),4);
}
B5e55b6:{NFSU2_TR(0x5e55b6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5e55b8:{NFSU2_TR(0x5e55b8);
__builtin_memmove(gp(0x88f20c),(R+0),4);
}
B5e55bd:{NFSU2_TR(0x5e55bd);
u8 U[4];
w4(U+0,u32(0x88f208ull));
s4(u32(r4(R+0)),r4(U+0));
}
B5e55c3:{NFSU2_TR(0x5e55c3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5e55c5:{NFSU2_TR(0x5e55c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5e55c9:{NFSU2_TR(0x5e55c9);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5e55cd:{NFSU2_TR(0x5e55cd);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e55cf:{NFSU2_TR(0x5e55cf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e55a0u);}goto L5e55a0;}}
}
B5e55d1:L5e55d1:{c.instructions+=1;NFSU2_TR(0x5e55d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5e55d5:L5e55d5:{c.instructions+=5;NFSU2_TR(0x5e55d5);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5e55d9:{NFSU2_TR(0x5e55d9);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e55db:{NFSU2_TR(0x5e55db);
s4(0x800ecc,u32(0x88f208ull));
}
B5e55e5:{NFSU2_TR(0x5e55e5);
u8 U[5];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5e55ea:{NFSU2_TR(0x5e55ea);
if(r1(R+518)){{goto L5e561c;}}
}
B5e55ec:L5e55ec:{c.instructions+=1;NFSU2_TR(0x5e55ec);
__builtin_memmove((R+16),(R+16),4);
}
B5e55f0:L5e55f0:{c.instructions+=9;NFSU2_TR(0x5e55f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5e55f2:{NFSU2_TR(0x5e55f2);
__builtin_memmove((R+4),(R+28),4);
}
B5e55f4:{NFSU2_TR(0x5e55f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5e55f7:{NFSU2_TR(0x5e55f7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B5e55f9:{NFSU2_TR(0x5e55f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e55fc:{NFSU2_TR(0x5e55fc);
__builtin_memmove((R+8),gp(0x883e38),4);
}
B5e5602:{NFSU2_TR(0x5e5602);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5603:{NFSU2_TR(0x5e5603);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5604:{NFSU2_TR(0x5e5604);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e5609ull));
TAIL_STATIC(0x43f920u,43f);
}
B5e5609:L5e5609:{c.instructions+=5;NFSU2_TR(0x5e5609);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5e560d:{NFSU2_TR(0x5e560d);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5e5611:{NFSU2_TR(0x5e5611);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5e5614:{NFSU2_TR(0x5e5614);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e5616:{NFSU2_TR(0x5e5616);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e55f0u);}goto L5e55f0;}}
}
B5e5618:L5e5618:{c.instructions+=1;NFSU2_TR(0x5e5618);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5e561c:L5e561c:{c.instructions+=4;NFSU2_TR(0x5e561c);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5e5620:{NFSU2_TR(0x5e5620);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B5e5622:{NFSU2_TR(0x5e5622);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e562a:{NFSU2_TR(0x5e562a);
if(r1(R+518)){{goto L5e565a;}}
}
B5e562c:L5e562c:{c.instructions+=1;NFSU2_TR(0x5e562c);
__builtin_memmove((R+16),(R+16),4);
}
B5e5630:L5e5630:{c.instructions+=9;NFSU2_TR(0x5e5630);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5e5633:{NFSU2_TR(0x5e5633);
__builtin_memmove((R+4),(R+20),4);
}
B5e5635:{NFSU2_TR(0x5e5635);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5e5638:{NFSU2_TR(0x5e5638);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+20)),r4(U+0));
}
B5e563b:{NFSU2_TR(0x5e563b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e563e:{NFSU2_TR(0x5e563e);
__builtin_memmove((R+8),gp(0x883e38),4);
}
B5e5644:{NFSU2_TR(0x5e5644);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5645:{NFSU2_TR(0x5e5645);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5646:{NFSU2_TR(0x5e5646);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e564bull));
TAIL_STATIC(0x43f920u,43f);
}
B5e564b:L5e564b:{c.instructions+=5;NFSU2_TR(0x5e564b);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5e564f:{NFSU2_TR(0x5e564f);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5e5653:{NFSU2_TR(0x5e5653);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5e5656:{NFSU2_TR(0x5e5656);
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
B5e5658:{NFSU2_TR(0x5e5658);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e5630u);}goto L5e5630;}}
}
B5e565a:L5e565a:{c.instructions+=9;NFSU2_TR(0x5e565a);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e565e:{NFSU2_TR(0x5e565e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e565f:{NFSU2_TR(0x5e565f);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e5666:{NFSU2_TR(0x5e5666);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e5667:{NFSU2_TR(0x5e5667);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e5668:{NFSU2_TR(0x5e5668);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e5669:{NFSU2_TR(0x5e5669);
__builtin_memmove((R+16),(R+20),4);
}
B5e566b:{NFSU2_TR(0x5e566b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e566c:{NFSU2_TR(0x5e566c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e5670:L5e5670:{c.instructions+=13;NFSU2_TR(0x5e5670);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5672:{NFSU2_TR(0x5e5672);
u8 U[4];
w4(U+0,u32(0x779554ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5677:{NFSU2_TR(0x5e5677);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e567d:{NFSU2_TR(0x5e567d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e567e:{NFSU2_TR(0x5e567e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e5685:{NFSU2_TR(0x5e5685);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5686:{NFSU2_TR(0x5e5686);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5687:{NFSU2_TR(0x5e5687);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5e5689:{NFSU2_TR(0x5e5689);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e568a:{NFSU2_TR(0x5e568a);
u8 U[4];
w4(U+0,u32(0x7a5324ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e568f:{NFSU2_TR(0x5e568f);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5691:{NFSU2_TR(0x5e5691);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5693:{NFSU2_TR(0x5e5693);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e5698ull));
TAIL_STATIC(0x440df0u,440);
}
B5e5698:L5e5698:{c.instructions+=4;NFSU2_TR(0x5e5698);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e569a:{NFSU2_TR(0x5e569a);
__builtin_memmove(gp(0x883e58),(R+0),4);
}
B5e569f:{NFSU2_TR(0x5e569f);
s4(0x883e54,u32(0x2ull));
}
B5e56a9:{NFSU2_TR(0x5e56a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e56aeull));
TAIL_STATIC(0x575620u,575);
}
B5e56ae:L5e56ae:{c.instructions+=5;NFSU2_TR(0x5e56ae);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B5e56b1:{NFSU2_TR(0x5e56b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e56b5:{NFSU2_TR(0x5e56b5);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e56b7:{NFSU2_TR(0x5e56b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e56bb:{NFSU2_TR(0x5e56bb);
if(r1(R+518)){{goto L5e56da;}}
}
B5e56bd:L5e56bd:{c.instructions+=8;NFSU2_TR(0x5e56bd);
u8 U[4];
w4(U+0,u32(0x5e0570ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e56c2:{NFSU2_TR(0x5e56c2);
u8 U[4];
w4(U+0,u32(0x5e0560ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e56c7:{NFSU2_TR(0x5e56c7);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e56c9:{NFSU2_TR(0x5e56c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e56cc:{NFSU2_TR(0x5e56cc);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e56ce:{NFSU2_TR(0x5e56ce);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e56cf:{NFSU2_TR(0x5e56cf);
u8 U[4];
w4(U+0,u32(0x2ull));
s4(u32(r4(R+0)),r4(U+0));
}
B5e56d5:{NFSU2_TR(0x5e56d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e56daull));
TAIL_STATIC(0x75c461u,75c);
}
B5e56da:L5e56da:{c.instructions+=4;NFSU2_TR(0x5e56da);
u8 U[4];
w4(U+0,u32(0x7a5318ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e56df:{NFSU2_TR(0x5e56df);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e56e7:{NFSU2_TR(0x5e56e7);
__builtin_memmove(gp(0x883e50),(R+24),4);
}
B5e56ed:{NFSU2_TR(0x5e56ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e56f2ull));
TAIL_STATIC(0x43db50u,43d);
}
B5e56f2:L5e56f2:{c.instructions+=3;NFSU2_TR(0x5e56f2);
u8 U[4];
w4(U+0,u32(0x7a5318ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e56f7:{NFSU2_TR(0x5e56f7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5e56f9:{NFSU2_TR(0x5e56f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e56feull));
TAIL_STATIC(0x43db50u,43d);
}
B5e56fe:L5e56fe:{c.instructions+=5;NFSU2_TR(0x5e56fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e5701:{NFSU2_TR(0x5e5701);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5702:{NFSU2_TR(0x5e5702);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B5e5705:{NFSU2_TR(0x5e5705);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5706:{NFSU2_TR(0x5e5706);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e570bull));
TAIL_STATIC(0x48b8b0u,48b);
}
B5e570b:L5e570b:{c.instructions+=4;NFSU2_TR(0x5e570b);
__builtin_memmove((R+24),gp(0x883e50),4);
}
B5e5711:{NFSU2_TR(0x5e5711);
u8 U[4];
w4(U+0,u32(0x7a530cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5716:{NFSU2_TR(0x5e5716);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B5e5719:{NFSU2_TR(0x5e5719);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e571eull));
TAIL_STATIC(0x43db50u,43d);
}
B5e571e:L5e571e:{c.instructions+=3;NFSU2_TR(0x5e571e);
u8 U[4];
w4(U+0,u32(0x7a530cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5723:{NFSU2_TR(0x5e5723);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5e5725:{NFSU2_TR(0x5e5725);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e572aull));
TAIL_STATIC(0x43db50u,43d);
}
B5e572a:L5e572a:{c.instructions+=5;NFSU2_TR(0x5e572a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e572d:{NFSU2_TR(0x5e572d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e572e:{NFSU2_TR(0x5e572e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B5e5731:{NFSU2_TR(0x5e5731);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5732:{NFSU2_TR(0x5e5732);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e5737ull));
TAIL_STATIC(0x48b8b0u,48b);
}
B5e5737:L5e5737:{c.instructions+=6;NFSU2_TR(0x5e5737);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e573b:{NFSU2_TR(0x5e573b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B5e573e:{NFSU2_TR(0x5e573e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e573f:{NFSU2_TR(0x5e573f);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e5746:{NFSU2_TR(0x5e5746);
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
B5e5749:{NFSU2_TR(0x5e5749);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e5750:L5e5750:{c.instructions+=3;NFSU2_TR(0x5e5750);
__builtin_memmove((R+0),gp(0x883e50),4);
}
B5e5755:{NFSU2_TR(0x5e5755);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e5757:{NFSU2_TR(0x5e5757);
if(r1(R+518)){{goto L5e5778;}}
}
B5e5759:L5e5759:{c.instructions+=8;NFSU2_TR(0x5e5759);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e575c:{NFSU2_TR(0x5e575c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e575d:{NFSU2_TR(0x5e575d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e5760:{NFSU2_TR(0x5e5760);
u8 U[4];
w4(U+0,u32(0x5e0570ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5765:{NFSU2_TR(0x5e5765);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5766:{NFSU2_TR(0x5e5766);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5768:{NFSU2_TR(0x5e5768);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5769:{NFSU2_TR(0x5e5769);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e576eull));
TAIL_STATIC(0x75c401u,75c);
}
B5e576e:L5e576e:{c.instructions+=2;NFSU2_TR(0x5e576e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e576f:{NFSU2_TR(0x5e576f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e5774ull));
TAIL_STATIC(0x575630u,575);
}
B5e5774:L5e5774:{c.instructions+=2;NFSU2_TR(0x5e5774);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5e5777:{NFSU2_TR(0x5e5777);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e5778:L5e5778:{c.instructions+=3;NFSU2_TR(0x5e5778);
s4(0x883e50,u32(0x0ull));
}
B5e5782:{NFSU2_TR(0x5e5782);
s4(0x883e54,u32(0x0ull));
}
B5e578c:{NFSU2_TR(0x5e578c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e5791ull));
TAIL_STATIC(0x5e0580u,5e0);
}
B5e5791:L5e5791:{c.instructions+=3;NFSU2_TR(0x5e5791);
__builtin_memmove((R+8),gp(0x883e58),4);
}
B5e5797:{NFSU2_TR(0x5e5797);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5798:{NFSU2_TR(0x5e5798);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e579dull));
TAIL_STATIC(0x440e40u,440);
}
B5e579d:L5e579d:{c.instructions+=3;NFSU2_TR(0x5e579d);
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
B5e57a0:{NFSU2_TR(0x5e57a0);
s4(0x883e58,u32(0x0ull));
}
B5e57aa:{NFSU2_TR(0x5e57aa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e57b0:L5e57b0:{c.instructions+=3;NFSU2_TR(0x5e57b0);
__builtin_memmove((R+4),gp(0x883e68),4);
}
B5e57b6:{NFSU2_TR(0x5e57b6);
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
B5e57b8:{NFSU2_TR(0x5e57b8);
if(r1(R+518)){{goto L5e57d6;}}
}
B5e57ba:L5e57ba:{c.instructions+=3;NFSU2_TR(0x5e57ba);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e57bb:{NFSU2_TR(0x5e57bb);
__builtin_memmove((R+24),(R+4),4);
}
B5e57bd:{NFSU2_TR(0x5e57bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e57c2ull));
TAIL_STATIC(0x5e0710u,5e0);
}
B5e57c2:L5e57c2:{c.instructions+=2;NFSU2_TR(0x5e57c2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e57c3:{NFSU2_TR(0x5e57c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e57c8ull));
TAIL_STATIC(0x575630u,575);
}
B5e57c8:L5e57c8:{c.instructions+=3;NFSU2_TR(0x5e57c8);
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
B5e57cb:{NFSU2_TR(0x5e57cb);
s4(0x883e68,u32(0x0ull));
}
B5e57d5:{NFSU2_TR(0x5e57d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e57d6:L5e57d6:{c.instructions+=1;NFSU2_TR(0x5e57d6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e57e0:L5e57e0:{c.instructions+=6;NFSU2_TR(0x5e57e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e57e1:{NFSU2_TR(0x5e57e1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e57e2:{NFSU2_TR(0x5e57e2);
__builtin_memmove((R+28),(R+4),4);
}
B5e57e4:{NFSU2_TR(0x5e57e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5e57e6:{NFSU2_TR(0x5e57e6);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B5e57e8:{NFSU2_TR(0x5e57e8);
if(r1(R+518)){{goto L5e5816;}}
}
B5e57ea:L5e57ea:{c.instructions+=1;NFSU2_TR(0x5e57ea);
__builtin_memmove((R+12),(R+12),4);
}
B5e57f0:L5e57f0:{c.instructions+=6;NFSU2_TR(0x5e57f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e57f3:{NFSU2_TR(0x5e57f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5e57f5:{NFSU2_TR(0x5e57f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5e57f7:{NFSU2_TR(0x5e57f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e57fa:{NFSU2_TR(0x5e57fa);
__builtin_memmove((R+4),(R+24),4);
}
B5e57fc:{NFSU2_TR(0x5e57fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e5801ull));
TAIL_STATIC(0x5e0920u,5e0);
}
B5e5801:L5e5801:{c.instructions+=4;NFSU2_TR(0x5e5801);
__builtin_memmove((R+0),gp(0x883d74),4);
}
B5e5806:{NFSU2_TR(0x5e5806);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5807:{NFSU2_TR(0x5e5807);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5808:{NFSU2_TR(0x5e5808);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e580dull));
TAIL_STATIC(0x43f920u,43f);
}
B5e580d:L5e580d:{c.instructions+=4;NFSU2_TR(0x5e580d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5e580f:{NFSU2_TR(0x5e580f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5e5812:{NFSU2_TR(0x5e5812);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B5e5814:{NFSU2_TR(0x5e5814);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e57f0u);}goto L5e57f0;}}
}
B5e5816:L5e5816:{c.instructions+=3;NFSU2_TR(0x5e5816);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e5817:{NFSU2_TR(0x5e5817);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e5818:{NFSU2_TR(0x5e5818);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e5820:L5e5820:{c.instructions+=29;NFSU2_TR(0x5e5820);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5822:{NFSU2_TR(0x5e5822);
u8 U[4];
w4(U+0,u32(0x77956bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5827:{NFSU2_TR(0x5e5827);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e582d:{NFSU2_TR(0x5e582d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e582e:{NFSU2_TR(0x5e582e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e5835:{NFSU2_TR(0x5e5835);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5836:{NFSU2_TR(0x5e5836);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5837:{NFSU2_TR(0x5e5837);
__builtin_memmove((R+24),(R+4),4);
}
B5e5839:{NFSU2_TR(0x5e5839);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5e583c:{NFSU2_TR(0x5e583c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e5840:{NFSU2_TR(0x5e5840);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5e5842:{NFSU2_TR(0x5e5842);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e5845:{NFSU2_TR(0x5e5845);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e5849:{NFSU2_TR(0x5e5849);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e584c:{NFSU2_TR(0x5e584c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5e584e:{NFSU2_TR(0x5e584e);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e5851:{NFSU2_TR(0x5e5851);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e5855:{NFSU2_TR(0x5e5855);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5856:{NFSU2_TR(0x5e5856);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5e5858:{NFSU2_TR(0x5e5858);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e585b:{NFSU2_TR(0x5e585b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e585e:{NFSU2_TR(0x5e585e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5e5861:{NFSU2_TR(0x5e5861);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5862:{NFSU2_TR(0x5e5862);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e5865:{NFSU2_TR(0x5e5865);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5e5868:{NFSU2_TR(0x5e5868);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5869:{NFSU2_TR(0x5e5869);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e5871:{NFSU2_TR(0x5e5871);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e5874:{NFSU2_TR(0x5e5874);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e5879ull));
TAIL_STATIC(0x43d540u,43d);
}
B5e5879:L5e5879:{c.instructions+=7;NFSU2_TR(0x5e5879);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e587d:{NFSU2_TR(0x5e587d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5e5880:{NFSU2_TR(0x5e5880);
__builtin_memmove((R+0),(R+24),4);
}
B5e5882:{NFSU2_TR(0x5e5882);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e5883:{NFSU2_TR(0x5e5883);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e588a:{NFSU2_TR(0x5e588a);
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
B5e588d:{NFSU2_TR(0x5e588d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e5890:L5e5890:{c.instructions+=3;NFSU2_TR(0x5e5890);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5891:{NFSU2_TR(0x5e5891);
__builtin_memmove((R+24),(R+4),4);
}
B5e5893:{NFSU2_TR(0x5e5893);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e5898ull));
TAIL_STATIC(0x5d80a0u,5d8);
}
B5e5898:L5e5898:{c.instructions+=3;NFSU2_TR(0x5e5898);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e589b:{NFSU2_TR(0x5e589b);
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
B5e589d:{NFSU2_TR(0x5e589d);
if(r1(R+518)){{goto L5e5918;}}
}
B5e589f:L5e589f:{c.instructions+=9;NFSU2_TR(0x5e589f);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e58a2:{NFSU2_TR(0x5e58a2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e58a3:{NFSU2_TR(0x5e58a3);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5e58a6:{NFSU2_TR(0x5e58a6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e58a7:{NFSU2_TR(0x5e58a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e58aa:{NFSU2_TR(0x5e58aa);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e58ad:{NFSU2_TR(0x5e58ad);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e58af:{NFSU2_TR(0x5e58af);
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
B5e58b2:{NFSU2_TR(0x5e58b2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e5916;}}
}
B5e58b4:L5e58b4:{c.instructions+=4;NFSU2_TR(0x5e58b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2f0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e58ba:{NFSU2_TR(0x5e58ba);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5e58bc:{NFSU2_TR(0x5e58bc);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e58be:{NFSU2_TR(0x5e58be);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5e58e4;}}
}
B5e58c0:L5e58c0:{c.instructions+=4;NFSU2_TR(0x5e58c0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2f4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5e58c6:{NFSU2_TR(0x5e58c6);
w1(R+8,u8(0x1ull));
}
B5e58c8:{NFSU2_TR(0x5e58c8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e58c9:{NFSU2_TR(0x5e58c9);
__builtin_memmove((R+16),(R+16),4);
}
B5e58d0:L5e58d0:{c.instructions+=7;NFSU2_TR(0x5e58d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+12),(U+0),4);
}
B5e58d2:{NFSU2_TR(0x5e58d2);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5e58d5:{NFSU2_TR(0x5e58d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2f0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5e58db:{NFSU2_TR(0x5e58db);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5e58dc:{NFSU2_TR(0x5e58dc);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B5e58df:{NFSU2_TR(0x5e58df);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e58e1:{NFSU2_TR(0x5e58e1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e58d0u);}goto L5e58d0;}}
}
B5e58e3:L5e58e3:{c.instructions+=1;NFSU2_TR(0x5e58e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e58e4:L5e58e4:{c.instructions+=5;NFSU2_TR(0x5e58e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e58e7:{NFSU2_TR(0x5e58e7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e58e8:{NFSU2_TR(0x5e58e8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e58e9:{NFSU2_TR(0x5e58e9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e58ea:{NFSU2_TR(0x5e58ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e58efull));
TAIL_STATIC(0x5e0d30u,5e0);
}
B5e58ef:L5e58ef:{c.instructions+=5;NFSU2_TR(0x5e58ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2f0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e58f5:{NFSU2_TR(0x5e58f5);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5e58f7:{NFSU2_TR(0x5e58f7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5e58f9:{NFSU2_TR(0x5e58f9);
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
B5e58fb:{NFSU2_TR(0x5e58fb);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5e5916;}}
}
B5e58fd:L5e58fd:{c.instructions+=1;NFSU2_TR(0x5e58fd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2f4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5e5903:L5e5903:{c.instructions+=7;NFSU2_TR(0x5e5903);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5e5905:{NFSU2_TR(0x5e5905);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5e5908:{NFSU2_TR(0x5e5908);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2f0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5e590e:{NFSU2_TR(0x5e590e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5e590f:{NFSU2_TR(0x5e590f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B5e5912:{NFSU2_TR(0x5e5912);
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
B5e5914:{NFSU2_TR(0x5e5914);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e5903u);}goto L5e5903;}}
}
B5e5916:L5e5916:{c.instructions+=2;NFSU2_TR(0x5e5916);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e5917:{NFSU2_TR(0x5e5917);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e5918:L5e5918:{c.instructions+=2;NFSU2_TR(0x5e5918);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e5919:{NFSU2_TR(0x5e5919);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e5920:L5e5920:{c.instructions+=12;NFSU2_TR(0x5e5920);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5921:{NFSU2_TR(0x5e5921);
__builtin_memmove((R+20),(R+16),4);
}
B5e5923:{NFSU2_TR(0x5e5923);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5e5926:{NFSU2_TR(0x5e5926);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5927:{NFSU2_TR(0x5e5927);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5928:{NFSU2_TR(0x5e5928);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5929:{NFSU2_TR(0x5e5929);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e592a:{NFSU2_TR(0x5e592a);
__builtin_memmove((R+28),(R+4),4);
}
B5e592c:{NFSU2_TR(0x5e592c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5e592f:{NFSU2_TR(0x5e592f);
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
B5e5931:{NFSU2_TR(0x5e5931);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e5939:{NFSU2_TR(0x5e5939);
if(r1(R+518)){{goto L5e59cf;}}
}
B5e593f:L5e593f:{c.instructions+=1;NFSU2_TR(0x5e593f);
}
B5e5940:L5e5940:{c.instructions+=3;NFSU2_TR(0x5e5940);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e5943:{NFSU2_TR(0x5e5943);
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
B5e5945:{NFSU2_TR(0x5e5945);
if(r1(R+518)){{goto L5e59cf;}}
}
B5e594b:L5e594b:{c.instructions+=2;NFSU2_TR(0x5e594b);
u8 U[22];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xaull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xaull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5e5950:{NFSU2_TR(0x5e5950);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5e59cf;}}
}
B5e5952:L5e5952:{c.instructions+=7;NFSU2_TR(0x5e5952);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e5955:{NFSU2_TR(0x5e5955);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5e5957:{NFSU2_TR(0x5e5957);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5e5959:{NFSU2_TR(0x5e5959);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e595a:{NFSU2_TR(0x5e595a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e595d:{NFSU2_TR(0x5e595d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e595e:{NFSU2_TR(0x5e595e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e5963ull));
TAIL_STATIC(0x40cbc0u,40c);
}
B5e5963:L5e5963:{c.instructions+=4;NFSU2_TR(0x5e5963);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5e5969:{NFSU2_TR(0x5e5969);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e596b:{NFSU2_TR(0x5e596b);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5e596e:{NFSU2_TR(0x5e596e);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5e59b9;}}
}
B5e5970:L5e5970:{c.instructions+=7;NFSU2_TR(0x5e5970);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5e5972:{NFSU2_TR(0x5e5972);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5e5974:{NFSU2_TR(0x5e5974);
{u32 ea_=u32(u32(8875300u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5e597a:{NFSU2_TR(0x5e597a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e597c:{NFSU2_TR(0x5e597c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5e597e:{NFSU2_TR(0x5e597e);
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
B5e5981:{NFSU2_TR(0x5e5981);
if(r1(R+518)){{goto L5e59cf;}}
}
B5e5983:L5e5983:{c.instructions+=21;NFSU2_TR(0x5e5983);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e5985:{NFSU2_TR(0x5e5985);
{u32 ea_=u32(r4(R+28)+u32(48u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5e5988:{NFSU2_TR(0x5e5988);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e598b:{NFSU2_TR(0x5e598b);
{u32 ea_=u32(r4(R+28)+u32(52u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5e598e:{NFSU2_TR(0x5e598e);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e5991:{NFSU2_TR(0x5e5991);
{u32 ea_=u32(r4(R+28)+u32(56u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5e5994:{NFSU2_TR(0x5e5994);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5e5996:{NFSU2_TR(0x5e5996);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5e5998:{NFSU2_TR(0x5e5998);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5e599a:{NFSU2_TR(0x5e599a);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5e599c:{NFSU2_TR(0x5e599c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5e599e:{NFSU2_TR(0x5e599e);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5e59a0:{NFSU2_TR(0x5e59a0);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5e59a2:{NFSU2_TR(0x5e59a2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5e59a4:{NFSU2_TR(0x5e59a4);
{u32 ea_=u32(u32(8875300u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5e59aa:{NFSU2_TR(0x5e59aa);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5e59ac:{NFSU2_TR(0x5e59ac);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e59ae:{NFSU2_TR(0x5e59ae);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5e59b0:{NFSU2_TR(0x5e59b0);
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
B5e59b3:{NFSU2_TR(0x5e59b3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5e59b5:{NFSU2_TR(0x5e59b5);
if(r1(R+518)){{goto L5e59cf;}}
}
B5e59b7:L5e59b7:{c.instructions+=1;NFSU2_TR(0x5e59b7);
{goto L5e59bb;}
}
B5e59b9:L5e59b9:{c.instructions+=1;NFSU2_TR(0x5e59b9);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5e59bb:L5e59bb:{c.instructions+=6;NFSU2_TR(0x5e59bb);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e59bf:{NFSU2_TR(0x5e59bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5e59c2:{NFSU2_TR(0x5e59c2);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5e59c3:{NFSU2_TR(0x5e59c3);
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
B5e59c5:{NFSU2_TR(0x5e59c5);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e59c9:{NFSU2_TR(0x5e59c9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e5940u);}goto L5e5940;}}
}
B5e59cf:L5e59cf:{c.instructions+=7;NFSU2_TR(0x5e59cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e59d0:{NFSU2_TR(0x5e59d0);
__builtin_memmove((R+0),(R+24),4);
}
B5e59d2:{NFSU2_TR(0x5e59d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e59d3:{NFSU2_TR(0x5e59d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e59d4:{NFSU2_TR(0x5e59d4);
__builtin_memmove((R+16),(R+20),4);
}
B5e59d6:{NFSU2_TR(0x5e59d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e59d7:{NFSU2_TR(0x5e59d7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e59e0:L5e59e0:{c.instructions+=12;NFSU2_TR(0x5e59e0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e59e1:{NFSU2_TR(0x5e59e1);
__builtin_memmove((R+20),(R+16),4);
}
B5e59e3:{NFSU2_TR(0x5e59e3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5e59e6:{NFSU2_TR(0x5e59e6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e59e7:{NFSU2_TR(0x5e59e7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e59e8:{NFSU2_TR(0x5e59e8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e59e9:{NFSU2_TR(0x5e59e9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e59ea:{NFSU2_TR(0x5e59ea);
__builtin_memmove((R+28),(R+4),4);
}
B5e59ec:{NFSU2_TR(0x5e59ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5e59ef:{NFSU2_TR(0x5e59ef);
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
B5e59f1:{NFSU2_TR(0x5e59f1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e59f9:{NFSU2_TR(0x5e59f9);
if(r1(R+518)){{goto L5e5a8f;}}
}
B5e59ff:L5e59ff:{c.instructions+=1;NFSU2_TR(0x5e59ff);
}
B5e5a00:L5e5a00:{c.instructions+=3;NFSU2_TR(0x5e5a00);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e5a03:{NFSU2_TR(0x5e5a03);
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
B5e5a05:{NFSU2_TR(0x5e5a05);
if(r1(R+518)){{goto L5e5a8f;}}
}
B5e5a0b:L5e5a0b:{c.instructions+=2;NFSU2_TR(0x5e5a0b);
u8 U[22];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xaull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xaull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5e5a10:{NFSU2_TR(0x5e5a10);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5e5a8f;}}
}
B5e5a12:L5e5a12:{c.instructions+=7;NFSU2_TR(0x5e5a12);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e5a15:{NFSU2_TR(0x5e5a15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5e5a17:{NFSU2_TR(0x5e5a17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5e5a19:{NFSU2_TR(0x5e5a19);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5a1a:{NFSU2_TR(0x5e5a1a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e5a1d:{NFSU2_TR(0x5e5a1d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5a1e:{NFSU2_TR(0x5e5a1e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e5a23ull));
TAIL_STATIC(0x40cbc0u,40c);
}
B5e5a23:L5e5a23:{c.instructions+=4;NFSU2_TR(0x5e5a23);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5e5a29:{NFSU2_TR(0x5e5a29);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e5a2b:{NFSU2_TR(0x5e5a2b);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e5a2e:{NFSU2_TR(0x5e5a2e);
if(r1(R+518)){{goto L5e5a79;}}
}
B5e5a30:L5e5a30:{c.instructions+=7;NFSU2_TR(0x5e5a30);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5e5a32:{NFSU2_TR(0x5e5a32);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5e5a34:{NFSU2_TR(0x5e5a34);
{u32 ea_=u32(u32(8875300u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5e5a3a:{NFSU2_TR(0x5e5a3a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e5a3c:{NFSU2_TR(0x5e5a3c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5e5a3e:{NFSU2_TR(0x5e5a3e);
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
B5e5a41:{NFSU2_TR(0x5e5a41);
if(r1(R+518)){{goto L5e5a8f;}}
}
B5e5a43:L5e5a43:{c.instructions+=21;NFSU2_TR(0x5e5a43);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e5a45:{NFSU2_TR(0x5e5a45);
{u32 ea_=u32(r4(R+28)+u32(48u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5e5a48:{NFSU2_TR(0x5e5a48);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e5a4b:{NFSU2_TR(0x5e5a4b);
{u32 ea_=u32(r4(R+28)+u32(52u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5e5a4e:{NFSU2_TR(0x5e5a4e);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e5a51:{NFSU2_TR(0x5e5a51);
{u32 ea_=u32(r4(R+28)+u32(56u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5e5a54:{NFSU2_TR(0x5e5a54);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5e5a56:{NFSU2_TR(0x5e5a56);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5e5a58:{NFSU2_TR(0x5e5a58);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5e5a5a:{NFSU2_TR(0x5e5a5a);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5e5a5c:{NFSU2_TR(0x5e5a5c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5e5a5e:{NFSU2_TR(0x5e5a5e);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5e5a60:{NFSU2_TR(0x5e5a60);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5e5a62:{NFSU2_TR(0x5e5a62);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5e5a64:{NFSU2_TR(0x5e5a64);
{u32 ea_=u32(u32(8875300u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5e5a6a:{NFSU2_TR(0x5e5a6a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5e5a6c:{NFSU2_TR(0x5e5a6c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e5a6e:{NFSU2_TR(0x5e5a6e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5e5a70:{NFSU2_TR(0x5e5a70);
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
B5e5a73:{NFSU2_TR(0x5e5a73);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5e5a75:{NFSU2_TR(0x5e5a75);
if(r1(R+518)){{goto L5e5a8f;}}
}
B5e5a77:L5e5a77:{c.instructions+=1;NFSU2_TR(0x5e5a77);
{goto L5e5a7b;}
}
B5e5a79:L5e5a79:{c.instructions+=1;NFSU2_TR(0x5e5a79);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5e5a7b:L5e5a7b:{c.instructions+=6;NFSU2_TR(0x5e5a7b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e5a7f:{NFSU2_TR(0x5e5a7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5e5a82:{NFSU2_TR(0x5e5a82);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5e5a83:{NFSU2_TR(0x5e5a83);
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
B5e5a85:{NFSU2_TR(0x5e5a85);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e5a89:{NFSU2_TR(0x5e5a89);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e5a00u);}goto L5e5a00;}}
}
B5e5a8f:L5e5a8f:{c.instructions+=7;NFSU2_TR(0x5e5a8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e5a90:{NFSU2_TR(0x5e5a90);
__builtin_memmove((R+0),(R+24),4);
}
B5e5a92:{NFSU2_TR(0x5e5a92);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e5a93:{NFSU2_TR(0x5e5a93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e5a94:{NFSU2_TR(0x5e5a94);
__builtin_memmove((R+16),(R+20),4);
}
B5e5a96:{NFSU2_TR(0x5e5a96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e5a97:{NFSU2_TR(0x5e5a97);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e5aa0:L5e5aa0:{c.instructions+=11;NFSU2_TR(0x5e5aa0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B5e5aa3:{NFSU2_TR(0x5e5aa3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5aa4:{NFSU2_TR(0x5e5aa4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5aa5:{NFSU2_TR(0x5e5aa5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5e5aa9:{NFSU2_TR(0x5e5aa9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5aaa:{NFSU2_TR(0x5e5aaa);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e5aad:{NFSU2_TR(0x5e5aad);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5aae:{NFSU2_TR(0x5e5aae);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e5ab2:{NFSU2_TR(0x5e5ab2);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e5ab5:{NFSU2_TR(0x5e5ab5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e5abd:{NFSU2_TR(0x5e5abd);
__builtin_memmove((R+4),(R+4),4);
}
B5e5ac0:L5e5ac0:{c.instructions+=3;NFSU2_TR(0x5e5ac0);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5e5ac2:{NFSU2_TR(0x5e5ac2);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+12))),2);
__builtin_memmove((U+2),(U+0),2);
w1(R+523,sborrow<u16>(r2(U+2),r2(R+28)));
w2(U+4,u16(u32(r2(U+2))-u32(r2(R+28))));
w1(R+519,u8(s16(r2(U+4))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B5e5ac5:{NFSU2_TR(0x5e5ac5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5e5ae8;}}
}
B5e5ac7:L5e5ac7:{c.instructions+=3;NFSU2_TR(0x5e5ac7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5ac8:{NFSU2_TR(0x5e5ac8);
__builtin_memmove((R+4),(R+24),4);
}
B5e5aca:{NFSU2_TR(0x5e5aca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e5acfull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e5920u);}goto L5e5920;}
}
B5e5acf:L5e5acf:{c.instructions+=4;NFSU2_TR(0x5e5acf);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5ad0:{NFSU2_TR(0x5e5ad0);
__builtin_memmove((R+4),(R+24),4);
}
B5e5ad2:{NFSU2_TR(0x5e5ad2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e5ad5:{NFSU2_TR(0x5e5ad5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e5adaull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e59e0u);}goto L5e59e0;}
}
B5e5ada:L5e5ada:{c.instructions+=6;NFSU2_TR(0x5e5ada);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e5add:{NFSU2_TR(0x5e5add);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+12))),2);
w4(R+0,u32(s32(s16(r2(U+0)))));
}
B5e5ae0:{NFSU2_TR(0x5e5ae0);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5e5ae1:{NFSU2_TR(0x5e5ae1);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x40ull))));
}
B5e5ae4:{NFSU2_TR(0x5e5ae4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e5ae6:{NFSU2_TR(0x5e5ae6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e5ac7u);}goto L5e5ac7;}}
}
B5e5ae8:L5e5ae8:{c.instructions+=8;NFSU2_TR(0x5e5ae8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5e5aec:{NFSU2_TR(0x5e5aec);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e5af0:{NFSU2_TR(0x5e5af0);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
}
B5e5af6:{NFSU2_TR(0x5e5af6);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x2ull))));
}
B5e5af9:{NFSU2_TR(0x5e5af9);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5e5afa:{NFSU2_TR(0x5e5afa);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e5afe:{NFSU2_TR(0x5e5afe);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e5b02:{NFSU2_TR(0x5e5b02);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e5ac0u);}goto L5e5ac0;}}
}
B5e5b04:L5e5b04:{c.instructions+=6;NFSU2_TR(0x5e5b04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e5b05:{NFSU2_TR(0x5e5b05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e5b06:{NFSU2_TR(0x5e5b06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e5b07:{NFSU2_TR(0x5e5b07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e5b08:{NFSU2_TR(0x5e5b08);
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
B5e5b0b:{NFSU2_TR(0x5e5b0b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e5b10:L5e5b10:{c.instructions+=13;NFSU2_TR(0x5e5b10);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5b12:{NFSU2_TR(0x5e5b12);
u8 U[4];
w4(U+0,u32(0x779593ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5b17:{NFSU2_TR(0x5e5b17);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e5b1d:{NFSU2_TR(0x5e5b1d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5b1e:{NFSU2_TR(0x5e5b1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e5b25:{NFSU2_TR(0x5e5b25);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5b26:{NFSU2_TR(0x5e5b26);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5b27:{NFSU2_TR(0x5e5b27);
__builtin_memmove((R+24),(R+4),4);
}
B5e5b29:{NFSU2_TR(0x5e5b29);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5b2a:{NFSU2_TR(0x5e5b2a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e5b2e:{NFSU2_TR(0x5e5b2e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5b30:{NFSU2_TR(0x5e5b30);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e5b38:{NFSU2_TR(0x5e5b38);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e5b3dull));
TAIL_STATIC(0x5e3ff0u,5e3);
}
B5e5b3d:L5e5b3d:{c.instructions+=5;NFSU2_TR(0x5e5b3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e5b40:{NFSU2_TR(0x5e5b40);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e5b43:{NFSU2_TR(0x5e5b43);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e5b45:{NFSU2_TR(0x5e5b45);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5e5b4a:{NFSU2_TR(0x5e5b4a);
if(r1(R+518)){{goto L5e5b69;}}
}
B5e5b4c:L5e5b4c:{c.instructions+=1;NFSU2_TR(0x5e5b4c);
__builtin_memmove((R+16),(R+16),4);
}
B5e5b50:L5e5b50:{c.instructions+=6;NFSU2_TR(0x5e5b50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5e5b52:{NFSU2_TR(0x5e5b52);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e5b55:{NFSU2_TR(0x5e5b55);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5e5b57:{NFSU2_TR(0x5e5b57);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5b58:{NFSU2_TR(0x5e5b58);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e5b5b:{NFSU2_TR(0x5e5b5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e5b60ull));
TAIL_STATIC(0x575630u,575);
}
B5e5b60:L5e5b60:{c.instructions+=4;NFSU2_TR(0x5e5b60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5e5b62:{NFSU2_TR(0x5e5b62);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5e5b65:{NFSU2_TR(0x5e5b65);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e5b67:{NFSU2_TR(0x5e5b67);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e5b50u);}goto L5e5b50;}}
}
B5e5b69:L5e5b69:{c.instructions+=4;NFSU2_TR(0x5e5b69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5e5b6b:{NFSU2_TR(0x5e5b6b);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e5b6d:{NFSU2_TR(0x5e5b6d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e5b75:{NFSU2_TR(0x5e5b75);
if(r1(R+518)){{goto L5e5b90;}}
}
B5e5b77:L5e5b77:{c.instructions+=6;NFSU2_TR(0x5e5b77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5e5b79:{NFSU2_TR(0x5e5b79);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e5b7c:{NFSU2_TR(0x5e5b7c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5e5b7e:{NFSU2_TR(0x5e5b7e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5b7f:{NFSU2_TR(0x5e5b7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e5b82:{NFSU2_TR(0x5e5b82);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e5b87ull));
TAIL_STATIC(0x575630u,575);
}
B5e5b87:L5e5b87:{c.instructions+=4;NFSU2_TR(0x5e5b87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5e5b89:{NFSU2_TR(0x5e5b89);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5e5b8c:{NFSU2_TR(0x5e5b8c);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e5b8e:{NFSU2_TR(0x5e5b8e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e5b77u);}goto L5e5b77;}}
}
B5e5b90:L5e5b90:{c.instructions+=6;NFSU2_TR(0x5e5b90);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e5b94:{NFSU2_TR(0x5e5b94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e5b95:{NFSU2_TR(0x5e5b95);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e5b96:{NFSU2_TR(0x5e5b96);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e5b9d:{NFSU2_TR(0x5e5b9d);
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
B5e5ba0:{NFSU2_TR(0x5e5ba0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e5bb0:L5e5bb0:{c.instructions+=7;NFSU2_TR(0x5e5bb0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xf0ull))));
}
B5e5bb6:{NFSU2_TR(0x5e5bb6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5bb7:{NFSU2_TR(0x5e5bb7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5bb8:{NFSU2_TR(0x5e5bb8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5bb9:{NFSU2_TR(0x5e5bb9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5bba:{NFSU2_TR(0x5e5bba);
__builtin_memmove((R+20),(R+4),4);
}
B5e5bbc:{NFSU2_TR(0x5e5bbc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e5bc1ull));
TAIL_STATIC(0x5d9a00u,5d9);
}
B5e5bc1:L5e5bc1:{c.instructions+=5;NFSU2_TR(0x5e5bc1);
u8 U[8];
w4(U+0,u32(u32(u32(0x104ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5e5bc8:{NFSU2_TR(0x5e5bc8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e5bcb:{NFSU2_TR(0x5e5bcb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5e5bcd:{NFSU2_TR(0x5e5bcd);
w4(R+4,u32(0x107ull));
}
B5e5bd2:{NFSU2_TR(0x5e5bd2);
__builtin_memmove((R+28),(R+24),4);
}
B5e5bd4:L5e5bd4:{c.instructions+=1;NFSU2_TR(0x5e5bd4);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5e5bd6;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e5bd4u);}goto L5e5bd4;}
}
B5e5bd6:L5e5bd6:{c.instructions+=24;NFSU2_TR(0x5e5bd6);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5e5bdc:{NFSU2_TR(0x5e5bdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e5be3:{NFSU2_TR(0x5e5be3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x43000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e5bea:{NFSU2_TR(0x5e5bea);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5e5bed:{NFSU2_TR(0x5e5bed);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e5bef:{NFSU2_TR(0x5e5bef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B5e5bf2:{NFSU2_TR(0x5e5bf2);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5e5bf5:{NFSU2_TR(0x5e5bf5);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+12))),2);
w4(R+4,u32(r2(U+0)));
}
B5e5bf8:{NFSU2_TR(0x5e5bf8);
u8 U[5];
w4(U+0,u32(u32(u32(0x108ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5e5bff:{NFSU2_TR(0x5e5bff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e5c02:{NFSU2_TR(0x5e5c02);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B5e5c06:{NFSU2_TR(0x5e5c06);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e5c0a:{NFSU2_TR(0x5e5c0a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x25ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5e5c0d:{NFSU2_TR(0x5e5c0d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x26ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5e5c11:{NFSU2_TR(0x5e5c11);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5e5c15:{NFSU2_TR(0x5e5c15);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5e5c1a:{NFSU2_TR(0x5e5c1a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e5c22:{NFSU2_TR(0x5e5c22);
{u32 ea_=u32(r4(R+20)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e5c25:{NFSU2_TR(0x5e5c25);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x198ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e5c2b:{NFSU2_TR(0x5e5c2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e5c2e:{NFSU2_TR(0x5e5c2e);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B5e5c32:{NFSU2_TR(0x5e5c32);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((R+8),(U+0),4);
}
B5e5c35:{NFSU2_TR(0x5e5c35);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e5c37:{NFSU2_TR(0x5e5c37);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5e5ec1;}}
}
B5e5c3d:L5e5c3d:{c.instructions+=3;NFSU2_TR(0x5e5c3d);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5e5c40:{NFSU2_TR(0x5e5c40);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e5c44:{NFSU2_TR(0x5e5c44);
{goto L5e5c50;}
}
B5e5c46:L5e5c46:{c.instructions+=2;NFSU2_TR(0x5e5c46);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e5c4a:{NFSU2_TR(0x5e5c4a);
__builtin_memmove((R+12),(R+12),4);
}
B5e5c50:L5e5c50:{c.instructions+=5;NFSU2_TR(0x5e5c50);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e5c53:{NFSU2_TR(0x5e5c53);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e5c57:{NFSU2_TR(0x5e5c57);
u8 U[5];
w4(U+0,u32(u32(u32(0x108ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5e5c5e:{NFSU2_TR(0x5e5c5e);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e5c60:{NFSU2_TR(0x5e5c60);
if(r1(R+518)){{goto L5e5c70;}}
}
B5e5c62:L5e5c62:{c.instructions+=4;NFSU2_TR(0x5e5c62);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B5e5c66:{NFSU2_TR(0x5e5c66);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B5e5c69:{NFSU2_TR(0x5e5c69);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5e5c6c:{NFSU2_TR(0x5e5c6c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e5c70:L5e5c70:{c.instructions+=5;NFSU2_TR(0x5e5c70);
u8 U[4];
w4(U+0,u32(0xbf800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5c75:{NFSU2_TR(0x5e5c75);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5c77:{NFSU2_TR(0x5e5c77);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5c78:{NFSU2_TR(0x5e5c78);
__builtin_memmove((R+4),(R+20),4);
}
B5e5c7a:{NFSU2_TR(0x5e5c7a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e5c7full));
TAIL_STATIC(0x5d57a0u,5d5);
}
B5e5c7f:L5e5c7f:{c.instructions+=8;NFSU2_TR(0x5e5c7f);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(r2(U+4)));
}
B5e5c83:{NFSU2_TR(0x5e5c83);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e5c86:{NFSU2_TR(0x5e5c86);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(u32(0xdcull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B5e5c8c:{NFSU2_TR(0x5e5c8c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e5c90:{NFSU2_TR(0x5e5c90);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5e5c94:{NFSU2_TR(0x5e5c94);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+4))));
}
B5e5c96:{NFSU2_TR(0x5e5c96);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e5c98:{NFSU2_TR(0x5e5c98);
if(r1(R+518)){{goto L5e5d7c;}}
}
B5e5c9e:L5e5c9e:{c.instructions+=13;NFSU2_TR(0x5e5c9e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e5ca2:{NFSU2_TR(0x5e5ca2);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e5ca4:{NFSU2_TR(0x5e5ca4);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5e5ca8:{NFSU2_TR(0x5e5ca8);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5e5caa:{NFSU2_TR(0x5e5caa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5cab:{NFSU2_TR(0x5e5cab);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5e5caf:{NFSU2_TR(0x5e5caf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5cb0:{NFSU2_TR(0x5e5cb0);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e5cb4:{NFSU2_TR(0x5e5cb4);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e5cb7:{NFSU2_TR(0x5e5cb7);
u8 U[5];
w4(U+0,u32(u32(u32(0x1bull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5e5cbc:{NFSU2_TR(0x5e5cbc);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5e5cbf:{NFSU2_TR(0x5e5cbf);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e5cc3:{NFSU2_TR(0x5e5cc3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e5cc8ull));
TAIL_STATIC(0x43ce50u,43c);
}
B5e5cc8:L5e5cc8:{c.instructions+=15;NFSU2_TR(0x5e5cc8);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5e5ccc:{NFSU2_TR(0x5e5ccc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e5ccf:{NFSU2_TR(0x5e5ccf);
__builtin_memmove((R+4),(R+28),4);
}
B5e5cd1:{NFSU2_TR(0x5e5cd1);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B5e5cd3:{NFSU2_TR(0x5e5cd3);
w4(R+0,u32(0x2aaaaaabull));
}
B5e5cd8:{NFSU2_TR(0x5e5cd8);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B5e5cda:{NFSU2_TR(0x5e5cda);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B5e5cde:{NFSU2_TR(0x5e5cde);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B5e5ce1:{NFSU2_TR(0x5e5ce1);
__builtin_memmove((R+0),(R+8),4);
}
B5e5ce3:{NFSU2_TR(0x5e5ce3);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5e5ce6:{NFSU2_TR(0x5e5ce6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5e5ce9:{NFSU2_TR(0x5e5ce9);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B5e5ceb:{NFSU2_TR(0x5e5ceb);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B5e5cec:{NFSU2_TR(0x5e5cec);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e5cee:{NFSU2_TR(0x5e5cee);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5e5d1c;}}
}
B5e5cf0:L5e5cf0:{c.instructions+=11;NFSU2_TR(0x5e5cf0);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e5cf3:{NFSU2_TR(0x5e5cf3);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5e5cf7:{NFSU2_TR(0x5e5cf7);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5e5cf9:{NFSU2_TR(0x5e5cf9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5cfa:{NFSU2_TR(0x5e5cfa);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5e5cfe:{NFSU2_TR(0x5e5cfe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5cff:{NFSU2_TR(0x5e5cff);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e5d03:{NFSU2_TR(0x5e5d03);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e5d06:{NFSU2_TR(0x5e5d06);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5e5d09:{NFSU2_TR(0x5e5d09);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e5d0d:{NFSU2_TR(0x5e5d0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e5d12ull));
TAIL_STATIC(0x43ce50u,43c);
}
B5e5d12:L5e5d12:{c.instructions+=3;NFSU2_TR(0x5e5d12);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e5d16:{NFSU2_TR(0x5e5d16);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e5d1a:{NFSU2_TR(0x5e5d1a);
{goto L5e5d46;}
}
B5e5d1c:L5e5d1c:{c.instructions+=11;NFSU2_TR(0x5e5d1c);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e5d1e:{NFSU2_TR(0x5e5d1e);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5e5d22:{NFSU2_TR(0x5e5d22);
{u32 ea_=u32(r4(R+28)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5e5d25:{NFSU2_TR(0x5e5d25);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5d26:{NFSU2_TR(0x5e5d26);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5e5d2a:{NFSU2_TR(0x5e5d2a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5d2b:{NFSU2_TR(0x5e5d2b);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e5d2f:{NFSU2_TR(0x5e5d2f);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e5d32:{NFSU2_TR(0x5e5d32);
{u32 ea_=u32(r4(R+28)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5e5d35:{NFSU2_TR(0x5e5d35);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e5d39:{NFSU2_TR(0x5e5d39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e5d3eull));
TAIL_STATIC(0x43ce50u,43c);
}
B5e5d3e:L5e5d3e:{c.instructions+=2;NFSU2_TR(0x5e5d3e);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e5d42:{NFSU2_TR(0x5e5d42);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e5d46:L5e5d46:{c.instructions+=12;NFSU2_TR(0x5e5d46);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e5d4a:{NFSU2_TR(0x5e5d4a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5e5d4d:{NFSU2_TR(0x5e5d4d);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5e5d4f:{NFSU2_TR(0x5e5d4f);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e5d53:{NFSU2_TR(0x5e5d53);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5e5d55:{NFSU2_TR(0x5e5d55);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5e5d57:{NFSU2_TR(0x5e5d57);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5e5d5d:{NFSU2_TR(0x5e5d5d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e5d5f:{NFSU2_TR(0x5e5d5f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5e5d61:{NFSU2_TR(0x5e5d61);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e5d64:{NFSU2_TR(0x5e5d64);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5e5d66:{NFSU2_TR(0x5e5d66);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e5d72;}}
}
B5e5d68:L5e5d68:{c.instructions+=2;NFSU2_TR(0x5e5d68);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e5d70:{NFSU2_TR(0x5e5d70);
{goto L5e5d8e;}
}
B5e5d72:L5e5d72:{c.instructions+=2;NFSU2_TR(0x5e5d72);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e5d7a:{NFSU2_TR(0x5e5d7a);
{goto L5e5d8e;}
}
B5e5d7c:L5e5d7c:{c.instructions+=3;NFSU2_TR(0x5e5d7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x198ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e5d82:{NFSU2_TR(0x5e5d82);
u8 U[13];
w4(U+0,u32(u32(u32(0x39bull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+4,u32(r1(U+12)));
}
B5e5d8a:{NFSU2_TR(0x5e5d8a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e5d8e:L5e5d8e:{c.instructions+=6;NFSU2_TR(0x5e5d8e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e5d92:{NFSU2_TR(0x5e5d92);
u8 U[4];
w4(U+0,u32(0xbf800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5d97:{NFSU2_TR(0x5e5d97);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5d99:{NFSU2_TR(0x5e5d99);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5d9a:{NFSU2_TR(0x5e5d9a);
__builtin_memmove((R+4),(R+20),4);
}
B5e5d9c:{NFSU2_TR(0x5e5d9c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e5da1ull));
TAIL_STATIC(0x5d57a0u,5d5);
}
B5e5da1:L5e5da1:{c.instructions+=4;NFSU2_TR(0x5e5da1);
__builtin_memmove((R+8),(R+0),4);
}
B5e5da3:{NFSU2_TR(0x5e5da3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5e5da5:{NFSU2_TR(0x5e5da5);
w4(R+4,u32(0x1cull));
}
B5e5daa:{NFSU2_TR(0x5e5daa);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B5e5dae:L5e5dae:{c.instructions+=1;NFSU2_TR(0x5e5dae);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5e5db0;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e5daeu);}goto L5e5dae;}
}
B5e5db0:L5e5db0:{c.instructions+=17;NFSU2_TR(0x5e5db0);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B5e5db4:{NFSU2_TR(0x5e5db4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e5db7:{NFSU2_TR(0x5e5db7);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0xdcull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5e5dbd:{NFSU2_TR(0x5e5dbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e5dc0:{NFSU2_TR(0x5e5dc0);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B5e5dc2:{NFSU2_TR(0x5e5dc2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e5dc6:{NFSU2_TR(0x5e5dc6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5dc8:{NFSU2_TR(0x5e5dc8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5dc9:{NFSU2_TR(0x5e5dc9);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e5dcd:{NFSU2_TR(0x5e5dcd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5dce:{NFSU2_TR(0x5e5dce);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5e5dd2:{NFSU2_TR(0x5e5dd2);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e5dd6:{NFSU2_TR(0x5e5dd6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5dd7:{NFSU2_TR(0x5e5dd7);
__builtin_memmove((R+4),(R+20),4);
}
B5e5dd9:{NFSU2_TR(0x5e5dd9);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
w4(U+4,u32(0x4b18967full));
s4(u32(r4(U+0)),r4(U+4));
}
B5e5de1:{NFSU2_TR(0x5e5de1);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
w4(U+4,u32(0xaull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e5de9:{NFSU2_TR(0x5e5de9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e5deeull));
TAIL_STATIC(0x5d53d0u,5d5);
}
B5e5dee:L5e5dee:{c.instructions+=2;NFSU2_TR(0x5e5dee);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e5df0:{NFSU2_TR(0x5e5df0);
if(r1(R+518)){{goto L5e5f50;}}
}
B5e5df6:L5e5df6:{c.instructions+=4;NFSU2_TR(0x5e5df6);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e5dfa:{NFSU2_TR(0x5e5dfa);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5e5dfc:{NFSU2_TR(0x5e5dfc);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e5dfe:{NFSU2_TR(0x5e5dfe);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5e5e90;}}
}
B5e5e04:L5e5e04:{c.instructions+=4;NFSU2_TR(0x5e5e04);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x198ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e5e0a:{NFSU2_TR(0x5e5e0a);
u8 U[16];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B5e5e0e:{NFSU2_TR(0x5e5e0e);
u8 U[24];
w4(U+0,u32(u32(u32(0x198ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(R+4))-u32(r4(U+16))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B5e5e15:{NFSU2_TR(0x5e5e15);
if(r1(R+518)){{goto L5e5e83;}}
}
B5e5e17:L5e5e17:{c.instructions+=4;NFSU2_TR(0x5e5e17);
u8 U[8];
w4(U+0,u32(u32(u32(0x104ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e5e1e:{NFSU2_TR(0x5e5e1e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5e5e21:{NFSU2_TR(0x5e5e21);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e5e23:{NFSU2_TR(0x5e5e23);
if(r1(R+518)){{goto L5e5e31;}}
}
B5e5e25:L5e5e25:{c.instructions+=3;NFSU2_TR(0x5e5e25);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e5e28:{NFSU2_TR(0x5e5e28);
u8 U[24];
w4(U+0,u32(u32(u32(0x19cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(R+4))-u32(r4(U+16))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B5e5e2f:{NFSU2_TR(0x5e5e2f);
if(r1(R+518)){{goto L5e5e83;}}
}
B5e5e31:L5e5e31:{c.instructions+=4;NFSU2_TR(0x5e5e31);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e5e37:{NFSU2_TR(0x5e5e37);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5e5e39:{NFSU2_TR(0x5e5e39);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e5e3b:{NFSU2_TR(0x5e5e3b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5e5e5b;}}
}
B5e5e3d:L5e5e3d:{c.instructions+=1;NFSU2_TR(0x5e5e3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e5e40:L5e5e40:{c.instructions+=3;NFSU2_TR(0x5e5e40);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B5e5e43:{NFSU2_TR(0x5e5e43);
u8 U[24];
w4(U+0,u32(u32(u32(0x19cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(R+4))-u32(r4(U+16))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B5e5e4a:{NFSU2_TR(0x5e5e4a);
if(r1(R+518)){{goto L5e5f50;}}
}
B5e5e50:L5e5e50:{c.instructions+=4;NFSU2_TR(0x5e5e50);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5e5e56:{NFSU2_TR(0x5e5e56);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5e5e57:{NFSU2_TR(0x5e5e57);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e5e59:{NFSU2_TR(0x5e5e59);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e5e40u);}goto L5e5e40;}}
}
B5e5e5b:L5e5e5b:{c.instructions+=6;NFSU2_TR(0x5e5e5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x198ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e5e61:{NFSU2_TR(0x5e5e61);
u8 U[16];
w4(U+0,u32(u32(u32(0x19cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5e5e68:{NFSU2_TR(0x5e5e68);
u8 U[13];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(r1(U+12)));
}
B5e5e70:{NFSU2_TR(0x5e5e70);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x198ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e5e76:{NFSU2_TR(0x5e5e76);
u8 U[13];
w4(U+0,u32(u32(u32(0x39cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),1);
s1(u32(r4(U+8)),r1(U+12));
}
B5e5e7d:{NFSU2_TR(0x5e5e7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x198ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B5e5e83:L5e5e83:{c.instructions+=4;NFSU2_TR(0x5e5e83);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e5e87:{NFSU2_TR(0x5e5e87);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5e5e88:{NFSU2_TR(0x5e5e88);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e5e8a:{NFSU2_TR(0x5e5e8a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e5e04u);}goto L5e5e04;}}
}
B5e5e90:L5e5e90:{c.instructions+=12;NFSU2_TR(0x5e5e90);
u8 U[8];
w4(U+0,u32(u32(u32(0x104ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e5e97:{NFSU2_TR(0x5e5e97);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B5e5e9b:{NFSU2_TR(0x5e5e9b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e5e9f:{NFSU2_TR(0x5e5e9f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5e5ea3:{NFSU2_TR(0x5e5ea3);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x8ull))));
}
B5e5ea6:{NFSU2_TR(0x5e5ea6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5e5ea7:{NFSU2_TR(0x5e5ea7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((R+8),(U+0),4);
}
B5e5eaa:{NFSU2_TR(0x5e5eaa);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e5eac:{NFSU2_TR(0x5e5eac);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e5eb0:{NFSU2_TR(0x5e5eb0);
u8 U[8];
w4(U+0,u32(u32(u32(0x104ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5e5eb7:{NFSU2_TR(0x5e5eb7);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e5ebb:{NFSU2_TR(0x5e5ebb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e5c46u);}goto L5e5c46;}}
}
B5e5ec1:L5e5ec1:{c.instructions+=13;NFSU2_TR(0x5e5ec1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x198ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e5ec7:{NFSU2_TR(0x5e5ec7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B5e5eca:{NFSU2_TR(0x5e5eca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e5ecd:{NFSU2_TR(0x5e5ecd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e5ed4:{NFSU2_TR(0x5e5ed4);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5e5ed7:{NFSU2_TR(0x5e5ed7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e5ed9:{NFSU2_TR(0x5e5ed9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B5e5edc:{NFSU2_TR(0x5e5edc);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5ee1:{NFSU2_TR(0x5e5ee1);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5e5ee3:{NFSU2_TR(0x5e5ee3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5ee4:{NFSU2_TR(0x5e5ee4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5ee5:{NFSU2_TR(0x5e5ee5);
__builtin_memmove((R+4),(R+20),4);
}
B5e5ee7:{NFSU2_TR(0x5e5ee7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e5eecull));
TAIL_STATIC(0x5e48b0u,5e4);
}
B5e5eec:L5e5eec:{c.instructions+=12;NFSU2_TR(0x5e5eec);
{u32 ea_=u32(r4(R+20)+u32(56u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5e5eef:{NFSU2_TR(0x5e5eef);
{u32 ea_=u32(r4(R+20)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e5ef2:{NFSU2_TR(0x5e5ef2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e5ef5:{NFSU2_TR(0x5e5ef5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x44ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e5efc:{NFSU2_TR(0x5e5efc);
{u32 ea_=u32(r4(R+20)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e5eff:{NFSU2_TR(0x5e5eff);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5e5f01:{NFSU2_TR(0x5e5f01);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x26ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5e5f05:{NFSU2_TR(0x5e5f05);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5e5f0b:{NFSU2_TR(0x5e5f0b);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e5f0e:{NFSU2_TR(0x5e5f0e);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5e5f11:{NFSU2_TR(0x5e5f11);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e5f13:{NFSU2_TR(0x5e5f13);
if(r1(R+518)){TAIL_STATIC(0x5e614eu,5e6);}
}
B5e5f19:L5e5f19:{c.instructions+=3;NFSU2_TR(0x5e5f19);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+28)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5e5f1c:{NFSU2_TR(0x5e5f1c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e5f20:{NFSU2_TR(0x5e5f20);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x5e614eu,5e6);}
}
B5e5f26:L5e5f26:{c.instructions+=10;NFSU2_TR(0x5e5f26);
w4(R+4,u32(0xffffffe4ull));
}
B5e5f2b:{NFSU2_TR(0x5e5f2b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x34ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5e5f2e:{NFSU2_TR(0x5e5f2e);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+20))));
}
B5e5f30:{NFSU2_TR(0x5e5f30);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e5f34:{NFSU2_TR(0x5e5f34);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e5f38:{NFSU2_TR(0x5e5f38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5e5f3a:{NFSU2_TR(0x5e5f3a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5e5f3c:{NFSU2_TR(0x5e5f3c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e5f3e:{NFSU2_TR(0x5e5f3e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e5f42:{NFSU2_TR(0x5e5f42);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x5e6133u,5e6);}
}
B5e5f48:L5e5f48:{c.instructions+=3;NFSU2_TR(0x5e5f48);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B5e5f4a:{NFSU2_TR(0x5e5f4a);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e5f4e:{NFSU2_TR(0x5e5f4e);
{goto L5e5f63;}
}
B5e5f50:L5e5f50:{c.instructions+=7;NFSU2_TR(0x5e5f50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e5f51:{NFSU2_TR(0x5e5f51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e5f52:{NFSU2_TR(0x5e5f52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e5f53:{NFSU2_TR(0x5e5f53);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B5e5f55:{NFSU2_TR(0x5e5f55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e5f56:{NFSU2_TR(0x5e5f56);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0xf0ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0xf0ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xf0ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5e5f5c:{NFSU2_TR(0x5e5f5c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e5f5f:L5e5f5f:{c.instructions+=1;NFSU2_TR(0x5e5f5f);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e5f63:L5e5f63:{c.instructions+=13;NFSU2_TR(0x5e5f63);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B5e5f66:{NFSU2_TR(0x5e5f66);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B5e5f68:{NFSU2_TR(0x5e5f68);
u8 U[16];
w4(U+0,u32(u32(u32(0x19cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B5e5f6f:{NFSU2_TR(0x5e5f6f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B5e5f72:{NFSU2_TR(0x5e5f72);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B5e5f74:{NFSU2_TR(0x5e5f74);
u8 U[13];
w4(U+0,u32(u32(u32(0x39cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(r1(U+12)));
}
B5e5f7c:{NFSU2_TR(0x5e5f7c);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e5f80:{NFSU2_TR(0x5e5f80);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5e5f82:{NFSU2_TR(0x5e5f82);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e5f86:{NFSU2_TR(0x5e5f86);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e5f8a:{NFSU2_TR(0x5e5f8a);
__builtin_memmove((R+12),(R+12),4);
}
B5e5f90:{NFSU2_TR(0x5e5f90);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x10ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B5e5f94:{NFSU2_TR(0x5e5f94);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x5e611cu,5e6);}
}
B5e5f9a:L5e5f9a:{c.instructions+=10;NFSU2_TR(0x5e5f9a);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e5f9e:{NFSU2_TR(0x5e5f9e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5e5fa0:{NFSU2_TR(0x5e5fa0);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e5fa2:{NFSU2_TR(0x5e5fa2);
__builtin_memmove((R+0),(R+518),1);
}
B5e5fa5:{NFSU2_TR(0x5e5fa5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B5e5fa8:{NFSU2_TR(0x5e5fa8);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e5fac:{NFSU2_TR(0x5e5fac);
u8 U[12];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B5e5fb0:{NFSU2_TR(0x5e5fb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e5fb3:{NFSU2_TR(0x5e5fb3);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e5fb5:{NFSU2_TR(0x5e5fb5);
if(r1(R+518)){TAIL_STATIC(0x5e610eu,5e6);}
}
B5e5fbb:L5e5fbb:{c.instructions+=3;NFSU2_TR(0x5e5fbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e5fc1:{NFSU2_TR(0x5e5fc1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e5fc3:{NFSU2_TR(0x5e5fc3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x5e610eu,5e6);}
}
B5e5fc9:L5e5fc9:{c.instructions+=3;NFSU2_TR(0x5e5fc9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5e5fcb:{NFSU2_TR(0x5e5fcb);
w4(R+4,u32(0x1cull));
}
B5e5fd0:{NFSU2_TR(0x5e5fd0);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B5e5fd4:L5e5fd4:{c.instructions+=1;NFSU2_TR(0x5e5fd4);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5e5fd6;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e5fd4u);}goto L5e5fd4;}
}
B5e5fd6:L5e5fd6:{c.instructions+=9;NFSU2_TR(0x5e5fd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e5fd9:{NFSU2_TR(0x5e5fd9);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e5fdd:{NFSU2_TR(0x5e5fdd);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B5e5fe1:{NFSU2_TR(0x5e5fe1);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e5fe5:{NFSU2_TR(0x5e5fe5);
u8 U[12];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5e5fec:{NFSU2_TR(0x5e5fec);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e5fed:{NFSU2_TR(0x5e5fed);
u8 U[4];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5e5ff4:{NFSU2_TR(0x5e5ff4);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
w4(U+4,u32(0x4b18967full));
s4(u32(r4(U+0)),r4(U+4));
}
B5e5ffc:{NFSU2_TR(0x5e5ffc);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
w4(U+4,u32(0xfull));
s4(u32(r4(U+0)),r4(U+4));
TAIL_STATIC(0x5e6004u,5e6);
}
XIT:NFSU2_TR_EXIT(0x5e5,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
