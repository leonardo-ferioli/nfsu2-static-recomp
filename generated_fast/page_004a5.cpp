#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_430(u8* __restrict R,Cpu& c);
u32 body_433(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_445(u8* __restrict R,Cpu& c);
u32 body_451(u8* __restrict R,Cpu& c);
u32 body_453(u8* __restrict R,Cpu& c);
u32 body_481(u8* __restrict R,Cpu& c);
u32 body_490(u8* __restrict R,Cpu& c);
u32 body_4a6(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_500(u8* __restrict R,Cpu& c);
u32 body_504(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_510(u8* __restrict R,Cpu& c);
u32 body_512(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_538(u8* __restrict R,Cpu& c);
u32 body_544(u8* __restrict R,Cpu& c);
u32 body_551(u8* __restrict R,Cpu& c);
u32 body_55d(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_578(u8* __restrict R,Cpu& c);
u32 body_579(u8* __restrict R,Cpu& c);
u32 body_57c(u8* __restrict R,Cpu& c);
u32 body_57d(u8* __restrict R,Cpu& c);
u32 body_5f4(u8* __restrict R,Cpu& c);
u32 body_5fa(u8* __restrict R,Cpu& c);
u32 body_5ff(u8* __restrict R,Cpu& c);
u32 body_610(u8* __restrict R,Cpu& c);
u32 body_63a(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4a5,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4a5,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4a5(u8* __restrict R,Cpu& c);
u32 page_4a5(Cpu& c){return body_4a5(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4a5(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4a5000:goto L4a5000;
case 0x4a5003:c.instructions+=4;goto B4a5003;
case 0x4a5006:c.instructions+=3;goto B4a5006;
case 0x4a5008:c.instructions+=2;goto B4a5008;
case 0x4a500d:c.instructions+=1;goto B4a500d;
case 0x4a5012:goto L4a5012;
case 0x4a5015:c.instructions+=3;goto B4a5015;
case 0x4a5016:c.instructions+=2;goto B4a5016;
case 0x4a501b:c.instructions+=1;goto B4a501b;
case 0x4a5020:goto L4a5020;
case 0x4a5023:c.instructions+=3;goto B4a5023;
case 0x4a5024:c.instructions+=2;goto B4a5024;
case 0x4a5025:c.instructions+=1;goto B4a5025;
case 0x4a502a:goto L4a502a;
case 0x4a502d:c.instructions+=3;goto B4a502d;
case 0x4a502e:c.instructions+=2;goto B4a502e;
case 0x4a502f:c.instructions+=1;goto B4a502f;
case 0x4a5030:goto L4a5030;
case 0x4a5037:c.instructions+=3;goto B4a5037;
case 0x4a503a:c.instructions+=2;goto B4a503a;
case 0x4a503c:c.instructions+=1;goto B4a503c;
case 0x4a503e:goto L4a503e;
case 0x4a5040:c.instructions+=2;goto B4a5040;
case 0x4a5045:c.instructions+=1;goto B4a5045;
case 0x4a5047:goto L4a5047;
case 0x4a504a:c.instructions+=3;goto B4a504a;
case 0x4a504b:c.instructions+=2;goto B4a504b;
case 0x4a5050:c.instructions+=1;goto B4a5050;
case 0x4a5055:goto L4a5055;
case 0x4a5058:c.instructions+=2;goto B4a5058;
case 0x4a5059:c.instructions+=1;goto B4a5059;
case 0x4a505e:goto L4a505e;
case 0x4a5061:c.instructions+=2;goto B4a5061;
case 0x4a5063:c.instructions+=1;goto B4a5063;
case 0x4a5068:goto L4a5068;
case 0x4a506b:c.instructions+=1;goto B4a506b;
case 0x4a5070:goto L4a5070;
case 0x4a5073:c.instructions+=3;goto B4a5073;
case 0x4a5074:c.instructions+=2;goto B4a5074;
case 0x4a5079:c.instructions+=1;goto B4a5079;
case 0x4a507e:goto L4a507e;
case 0x4a5081:c.instructions+=3;goto B4a5081;
case 0x4a5082:c.instructions+=2;goto B4a5082;
case 0x4a5083:c.instructions+=1;goto B4a5083;
case 0x4a5088:goto L4a5088;
case 0x4a508b:c.instructions+=2;goto B4a508b;
case 0x4a508c:c.instructions+=1;goto B4a508c;
case 0x4a5090:goto L4a5090;
case 0x4a5093:c.instructions+=5;goto B4a5093;
case 0x4a5095:c.instructions+=4;goto B4a5095;
case 0x4a5096:c.instructions+=3;goto B4a5096;
case 0x4a5099:c.instructions+=2;goto B4a5099;
case 0x4a509b:c.instructions+=1;goto B4a509b;
case 0x4a509d:goto L4a509d;
case 0x4a50a2:c.instructions+=1;goto B4a50a2;
case 0x4a50a4:goto L4a50a4;
case 0x4a50a9:goto L4a50a9;
case 0x4a50ae:goto L4a50ae;
case 0x4a50b1:c.instructions+=3;goto B4a50b1;
case 0x4a50b2:c.instructions+=2;goto B4a50b2;
case 0x4a50b7:c.instructions+=1;goto B4a50b7;
case 0x4a50bc:goto L4a50bc;
case 0x4a50bf:c.instructions+=3;goto B4a50bf;
case 0x4a50c0:c.instructions+=2;goto B4a50c0;
case 0x4a50c1:c.instructions+=1;goto B4a50c1;
case 0x4a50c6:goto L4a50c6;
case 0x4a50cc:c.instructions+=3;goto B4a50cc;
case 0x4a50cf:c.instructions+=2;goto B4a50cf;
case 0x4a50d0:c.instructions+=1;goto B4a50d0;
case 0x4a50e0:goto L4a50e0;
case 0x4a50e1:c.instructions+=4;goto B4a50e1;
case 0x4a50e2:c.instructions+=3;goto B4a50e2;
case 0x4a50e4:c.instructions+=2;goto B4a50e4;
case 0x4a50ea:c.instructions+=1;goto B4a50ea;
case 0x4a50ef:goto L4a50ef;
case 0x4a50f1:c.instructions+=1;goto B4a50f1;
case 0x4a50f3:goto L4a50f3;
case 0x4a50f9:c.instructions+=2;goto B4a50f9;
case 0x4a50fc:c.instructions+=1;goto B4a50fc;
case 0x4a50fe:goto L4a50fe;
case 0x4a5100:c.instructions+=4;goto B4a5100;
case 0x4a5105:c.instructions+=3;goto B4a5105;
case 0x4a510a:c.instructions+=2;goto B4a510a;
case 0x4a510f:c.instructions+=1;goto B4a510f;
case 0x4a5114:goto L4a5114;
case 0x4a511a:c.instructions+=3;goto B4a511a;
case 0x4a511d:c.instructions+=2;goto B4a511d;
case 0x4a511f:c.instructions+=1;goto B4a511f;
case 0x4a5124:goto L4a5124;
case 0x4a5129:c.instructions+=2;goto B4a5129;
case 0x4a5130:c.instructions+=1;goto B4a5130;
case 0x4a5132:goto L4a5132;
case 0x4a5134:c.instructions+=2;goto B4a5134;
case 0x4a5136:c.instructions+=1;goto B4a5136;
case 0x4a513b:goto L4a513b;
case 0x4a5140:c.instructions+=2;goto B4a5140;
case 0x4a5147:c.instructions+=1;goto B4a5147;
case 0x4a5149:goto L4a5149;
case 0x4a514b:c.instructions+=4;goto B4a514b;
case 0x4a5150:c.instructions+=3;goto B4a5150;
case 0x4a5155:c.instructions+=2;goto B4a5155;
case 0x4a515a:c.instructions+=1;goto B4a515a;
case 0x4a515f:goto L4a515f;
case 0x4a5165:c.instructions+=3;goto B4a5165;
case 0x4a5168:c.instructions+=2;goto B4a5168;
case 0x4a516a:c.instructions+=1;goto B4a516a;
case 0x4a516f:goto L4a516f;
case 0x4a5175:c.instructions+=1;goto B4a5175;
case 0x4a517c:goto L4a517c;
case 0x4a5182:c.instructions+=5;goto B4a5182;
case 0x4a5184:c.instructions+=4;goto B4a5184;
case 0x4a518b:c.instructions+=3;goto B4a518b;
case 0x4a5191:c.instructions+=2;goto B4a5191;
case 0x4a5196:c.instructions+=1;goto B4a5196;
case 0x4a519b:goto L4a519b;
case 0x4a519d:c.instructions+=1;goto B4a519d;
case 0x4a519f:goto L4a519f;
case 0x4a51a5:c.instructions+=2;goto B4a51a5;
case 0x4a51a6:c.instructions+=1;goto B4a51a6;
case 0x4a51ab:goto L4a51ab;
case 0x4a51b0:c.instructions+=3;goto B4a51b0;
case 0x4a51b2:c.instructions+=2;goto B4a51b2;
case 0x4a51b4:c.instructions+=1;goto B4a51b4;
case 0x4a51b6:goto L4a51b6;
case 0x4a51c0:goto L4a51c0;
case 0x4a51c7:c.instructions+=1;goto B4a51c7;
case 0x4a51cc:goto L4a51cc;
case 0x4a51d1:c.instructions+=3;goto B4a51d1;
case 0x4a51d2:c.instructions+=2;goto B4a51d2;
case 0x4a51d4:c.instructions+=1;goto B4a51d4;
case 0x4a51d6:goto L4a51d6;
case 0x4a51dc:c.instructions+=3;goto B4a51dc;
case 0x4a51de:c.instructions+=2;goto B4a51de;
case 0x4a51e0:c.instructions+=1;goto B4a51e0;
case 0x4a51e5:goto L4a51e5;
case 0x4a51ea:c.instructions+=5;goto B4a51ea;
case 0x4a51ed:c.instructions+=4;goto B4a51ed;
case 0x4a51ef:c.instructions+=3;goto B4a51ef;
case 0x4a51f0:c.instructions+=2;goto B4a51f0;
case 0x4a51f1:c.instructions+=1;goto B4a51f1;
case 0x4a51f6:goto L4a51f6;
case 0x4a51f9:c.instructions+=3;goto B4a51f9;
case 0x4a51fa:c.instructions+=2;goto B4a51fa;
case 0x4a51fb:c.instructions+=1;goto B4a51fb;
case 0x4a5200:goto L4a5200;
case 0x4a5201:c.instructions+=5;goto B4a5201;
case 0x4a5203:c.instructions+=4;goto B4a5203;
case 0x4a5206:c.instructions+=3;goto B4a5206;
case 0x4a5208:c.instructions+=2;goto B4a5208;
case 0x4a520a:c.instructions+=1;goto B4a520a;
case 0x4a520c:goto L4a520c;
case 0x4a520f:c.instructions+=4;goto B4a520f;
case 0x4a5214:c.instructions+=3;goto B4a5214;
case 0x4a5219:c.instructions+=2;goto B4a5219;
case 0x4a521a:c.instructions+=1;goto B4a521a;
case 0x4a521f:goto L4a521f;
case 0x4a5222:c.instructions+=3;goto B4a5222;
case 0x4a5226:c.instructions+=2;goto B4a5226;
case 0x4a5227:c.instructions+=1;goto B4a5227;
case 0x4a5228:goto L4a5228;
case 0x4a522b:c.instructions+=4;goto B4a522b;
case 0x4a5230:c.instructions+=3;goto B4a5230;
case 0x4a5235:c.instructions+=2;goto B4a5235;
case 0x4a5236:c.instructions+=1;goto B4a5236;
case 0x4a523b:goto L4a523b;
case 0x4a523e:c.instructions+=3;goto B4a523e;
case 0x4a5242:c.instructions+=2;goto B4a5242;
case 0x4a5243:c.instructions+=1;goto B4a5243;
case 0x4a5250:goto L4a5250;
case 0x4a5251:c.instructions+=15;goto B4a5251;
case 0x4a5253:c.instructions+=14;goto B4a5253;
case 0x4a5255:c.instructions+=13;goto B4a5255;
case 0x4a525a:c.instructions+=12;goto B4a525a;
case 0x4a5260:c.instructions+=11;goto B4a5260;
case 0x4a5261:c.instructions+=10;goto B4a5261;
case 0x4a5268:c.instructions+=9;goto B4a5268;
case 0x4a5269:c.instructions+=8;goto B4a5269;
case 0x4a526a:c.instructions+=7;goto B4a526a;
case 0x4a526b:c.instructions+=6;goto B4a526b;
case 0x4a526c:c.instructions+=5;goto B4a526c;
case 0x4a526f:c.instructions+=4;goto B4a526f;
case 0x4a5271:c.instructions+=3;goto B4a5271;
case 0x4a5272:c.instructions+=2;goto B4a5272;
case 0x4a5275:c.instructions+=1;goto B4a5275;
case 0x4a527a:goto L4a527a;
case 0x4a527d:c.instructions+=5;goto B4a527d;
case 0x4a5283:c.instructions+=4;goto B4a5283;
case 0x4a5288:c.instructions+=3;goto B4a5288;
case 0x4a5289:c.instructions+=2;goto B4a5289;
case 0x4a5290:c.instructions+=1;goto B4a5290;
case 0x4a5295:goto L4a5295;
case 0x4a5296:c.instructions+=2;goto B4a5296;
case 0x4a5297:c.instructions+=1;goto B4a5297;
case 0x4a529c:goto L4a529c;
case 0x4a529f:c.instructions+=3;goto B4a529f;
case 0x4a52a2:c.instructions+=2;goto B4a52a2;
case 0x4a52a4:c.instructions+=1;goto B4a52a4;
case 0x4a52a9:goto L4a52a9;
case 0x4a52ac:c.instructions+=3;goto B4a52ac;
case 0x4a52b1:c.instructions+=2;goto B4a52b1;
case 0x4a52b2:c.instructions+=1;goto B4a52b2;
case 0x4a52b7:goto L4a52b7;
case 0x4a52ba:c.instructions+=9;goto B4a52ba;
case 0x4a52bd:c.instructions+=8;goto B4a52bd;
case 0x4a52be:c.instructions+=7;goto B4a52be;
case 0x4a52c0:c.instructions+=6;goto B4a52c0;
case 0x4a52c1:c.instructions+=5;goto B4a52c1;
case 0x4a52c2:c.instructions+=4;goto B4a52c2;
case 0x4a52c9:c.instructions+=3;goto B4a52c9;
case 0x4a52cb:c.instructions+=2;goto B4a52cb;
case 0x4a52cc:c.instructions+=1;goto B4a52cc;
case 0x4a52d0:goto L4a52d0;
case 0x4a52d1:c.instructions+=2;goto B4a52d1;
case 0x4a52d3:c.instructions+=1;goto B4a52d3;
case 0x4a52d8:goto L4a52d8;
case 0x4a52dd:c.instructions+=1;goto B4a52dd;
case 0x4a52df:goto L4a52df;
case 0x4a52e0:c.instructions+=1;goto B4a52e0;
case 0x4a52e5:goto L4a52e5;
case 0x4a52e8:goto L4a52e8;
case 0x4a52ea:c.instructions+=2;goto B4a52ea;
case 0x4a52eb:c.instructions+=1;goto B4a52eb;
case 0x4a52f0:goto L4a52f0;
case 0x4a52f6:c.instructions+=1;goto B4a52f6;
case 0x4a5300:goto L4a5300;
case 0x4a5306:c.instructions+=5;goto B4a5306;
case 0x4a5307:c.instructions+=4;goto B4a5307;
case 0x4a5308:c.instructions+=3;goto B4a5308;
case 0x4a5309:c.instructions+=2;goto B4a5309;
case 0x4a530b:c.instructions+=1;goto B4a530b;
case 0x4a5310:goto L4a5310;
case 0x4a5313:c.instructions+=5;goto B4a5313;
case 0x4a5316:c.instructions+=4;goto B4a5316;
case 0x4a5319:c.instructions+=3;goto B4a5319;
case 0x4a531b:c.instructions+=2;goto B4a531b;
case 0x4a5320:c.instructions+=1;goto B4a5320;
case 0x4a5325:goto L4a5325;
case 0x4a5328:c.instructions+=4;goto B4a5328;
case 0x4a5329:c.instructions+=3;goto B4a5329;
case 0x4a532e:c.instructions+=2;goto B4a532e;
case 0x4a532f:c.instructions+=1;goto B4a532f;
case 0x4a5334:goto L4a5334;
case 0x4a5337:c.instructions+=3;goto B4a5337;
case 0x4a533c:c.instructions+=2;goto B4a533c;
case 0x4a533d:c.instructions+=1;goto B4a533d;
case 0x4a5342:goto L4a5342;
case 0x4a5345:c.instructions+=3;goto B4a5345;
case 0x4a5347:c.instructions+=2;goto B4a5347;
case 0x4a534d:c.instructions+=1;goto B4a534d;
case 0x4a5352:goto L4a5352;
case 0x4a5353:c.instructions+=5;goto B4a5353;
case 0x4a5358:c.instructions+=4;goto B4a5358;
case 0x4a535c:c.instructions+=3;goto B4a535c;
case 0x4a535e:c.instructions+=2;goto B4a535e;
case 0x4a535f:c.instructions+=1;goto B4a535f;
case 0x4a5364:goto L4a5364;
case 0x4a5368:c.instructions+=2;goto B4a5368;
case 0x4a5369:c.instructions+=1;goto B4a5369;
case 0x4a536e:goto L4a536e;
case 0x4a5370:c.instructions+=4;goto B4a5370;
case 0x4a5372:c.instructions+=3;goto B4a5372;
case 0x4a5374:c.instructions+=2;goto B4a5374;
case 0x4a5375:c.instructions+=1;goto B4a5375;
case 0x4a537a:goto L4a537a;
case 0x4a537d:c.instructions+=2;goto B4a537d;
case 0x4a537f:c.instructions+=1;goto B4a537f;
case 0x4a5381:goto L4a5381;
case 0x4a5387:c.instructions+=3;goto B4a5387;
case 0x4a5388:c.instructions+=2;goto B4a5388;
case 0x4a5389:c.instructions+=1;goto B4a5389;
case 0x4a538e:goto L4a538e;
case 0x4a5391:goto L4a5391;
case 0x4a5394:c.instructions+=3;goto B4a5394;
case 0x4a5396:c.instructions+=2;goto B4a5396;
case 0x4a53a0:c.instructions+=1;goto B4a53a0;
case 0x4a53a5:goto L4a53a5;
case 0x4a53a6:c.instructions+=1;goto B4a53a6;
case 0x4a53ab:goto L4a53ab;
case 0x4a53ac:c.instructions+=4;goto B4a53ac;
case 0x4a53b1:c.instructions+=3;goto B4a53b1;
case 0x4a53b6:c.instructions+=2;goto B4a53b6;
case 0x4a53b7:c.instructions+=1;goto B4a53b7;
case 0x4a53bc:goto L4a53bc;
case 0x4a53c1:c.instructions+=1;goto B4a53c1;
case 0x4a53c6:goto L4a53c6;
case 0x4a53c9:c.instructions+=3;goto B4a53c9;
case 0x4a53cb:c.instructions+=2;goto B4a53cb;
case 0x4a53cd:c.instructions+=1;goto B4a53cd;
case 0x4a53d2:goto L4a53d2;
case 0x4a53d3:c.instructions+=2;goto B4a53d3;
case 0x4a53d8:c.instructions+=1;goto B4a53d8;
case 0x4a53dd:goto L4a53dd;
case 0x4a53de:c.instructions+=3;goto B4a53de;
case 0x4a53e3:c.instructions+=2;goto B4a53e3;
case 0x4a53e4:c.instructions+=1;goto B4a53e4;
case 0x4a53e9:goto L4a53e9;
case 0x4a53ea:c.instructions+=4;goto B4a53ea;
case 0x4a53ee:c.instructions+=3;goto B4a53ee;
case 0x4a53f3:c.instructions+=2;goto B4a53f3;
case 0x4a53f4:c.instructions+=1;goto B4a53f4;
case 0x4a53f9:goto L4a53f9;
case 0x4a53fa:c.instructions+=1;goto B4a53fa;
case 0x4a53ff:goto L4a53ff;
case 0x4a5402:c.instructions+=4;goto B4a5402;
case 0x4a5406:c.instructions+=3;goto B4a5406;
case 0x4a5407:c.instructions+=2;goto B4a5407;
case 0x4a540d:c.instructions+=1;goto B4a540d;
case 0x4a5412:goto L4a5412;
case 0x4a5418:c.instructions+=8;goto B4a5418;
case 0x4a541e:c.instructions+=7;goto B4a541e;
case 0x4a5424:c.instructions+=6;goto B4a5424;
case 0x4a5425:c.instructions+=5;goto B4a5425;
case 0x4a5426:c.instructions+=4;goto B4a5426;
case 0x4a5427:c.instructions+=3;goto B4a5427;
case 0x4a5428:c.instructions+=2;goto B4a5428;
case 0x4a542e:c.instructions+=1;goto B4a542e;
case 0x4a5433:goto L4a5433;
case 0x4a5437:c.instructions+=6;goto B4a5437;
case 0x4a543a:c.instructions+=5;goto B4a543a;
case 0x4a543b:c.instructions+=4;goto B4a543b;
case 0x4a5440:c.instructions+=3;goto B4a5440;
case 0x4a5445:c.instructions+=2;goto B4a5445;
case 0x4a5446:c.instructions+=1;goto B4a5446;
case 0x4a544b:goto L4a544b;
case 0x4a5451:c.instructions+=5;goto B4a5451;
case 0x4a5454:c.instructions+=4;goto B4a5454;
case 0x4a5457:c.instructions+=3;goto B4a5457;
case 0x4a5458:c.instructions+=2;goto B4a5458;
case 0x4a545d:c.instructions+=1;goto B4a545d;
case 0x4a5462:goto L4a5462;
case 0x4a5463:c.instructions+=4;goto B4a5463;
case 0x4a5468:c.instructions+=3;goto B4a5468;
case 0x4a546d:c.instructions+=2;goto B4a546d;
case 0x4a546e:c.instructions+=1;goto B4a546e;
case 0x4a5473:goto L4a5473;
case 0x4a5477:c.instructions+=6;goto B4a5477;
case 0x4a547a:c.instructions+=5;goto B4a547a;
case 0x4a547b:c.instructions+=4;goto B4a547b;
case 0x4a5480:c.instructions+=3;goto B4a5480;
case 0x4a5485:c.instructions+=2;goto B4a5485;
case 0x4a5486:c.instructions+=1;goto B4a5486;
case 0x4a548b:goto L4a548b;
case 0x4a548e:c.instructions+=3;goto B4a548e;
case 0x4a5491:c.instructions+=2;goto B4a5491;
case 0x4a5493:c.instructions+=1;goto B4a5493;
case 0x4a5498:goto L4a5498;
case 0x4a5499:c.instructions+=2;goto B4a5499;
case 0x4a549e:c.instructions+=1;goto B4a549e;
case 0x4a54a3:goto L4a54a3;
case 0x4a54a6:c.instructions+=4;goto B4a54a6;
case 0x4a54a7:c.instructions+=3;goto B4a54a7;
case 0x4a54ac:c.instructions+=2;goto B4a54ac;
case 0x4a54ad:c.instructions+=1;goto B4a54ad;
case 0x4a54b2:goto L4a54b2;
case 0x4a54b5:c.instructions+=2;goto B4a54b5;
case 0x4a54b6:c.instructions+=1;goto B4a54b6;
case 0x4a54bb:goto L4a54bb;
case 0x4a54be:c.instructions+=5;goto B4a54be;
case 0x4a54bf:c.instructions+=4;goto B4a54bf;
case 0x4a54c0:c.instructions+=3;goto B4a54c0;
case 0x4a54c1:c.instructions+=2;goto B4a54c1;
case 0x4a54c7:c.instructions+=1;goto B4a54c7;
case 0x4a54d0:goto L4a54d0;
case 0x4a54d1:c.instructions+=4;goto B4a54d1;
case 0x4a54d2:c.instructions+=3;goto B4a54d2;
case 0x4a54d4:c.instructions+=2;goto B4a54d4;
case 0x4a54d9:c.instructions+=1;goto B4a54d9;
case 0x4a54e0:goto L4a54e0;
case 0x4a54e3:c.instructions+=2;goto B4a54e3;
case 0x4a54e6:c.instructions+=1;goto B4a54e6;
case 0x4a54e8:goto L4a54e8;
case 0x4a54ea:c.instructions+=2;goto B4a54ea;
case 0x4a54eb:c.instructions+=1;goto B4a54eb;
case 0x4a54f0:goto L4a54f0;
case 0x4a54f3:c.instructions+=1;goto B4a54f3;
case 0x4a54f5:goto L4a54f5;
case 0x4a54f7:c.instructions+=3;goto B4a54f7;
case 0x4a54f8:c.instructions+=2;goto B4a54f8;
case 0x4a54f9:c.instructions+=1;goto B4a54f9;
case 0x4a54fe:goto L4a54fe;
case 0x4a5501:goto L4a5501;
case 0x4a5504:c.instructions+=2;goto B4a5504;
case 0x4a550a:c.instructions+=1;goto B4a550a;
case 0x4a550c:goto L4a550c;
case 0x4a550d:c.instructions+=2;goto B4a550d;
case 0x4a550e:c.instructions+=1;goto B4a550e;
case 0x4a5510:goto L4a5510;
case 0x4a5514:c.instructions+=5;goto B4a5514;
case 0x4a5516:c.instructions+=4;goto B4a5516;
case 0x4a551a:c.instructions+=3;goto B4a551a;
case 0x4a551b:c.instructions+=2;goto B4a551b;
case 0x4a551d:c.instructions+=1;goto B4a551d;
case 0x4a551f:goto L4a551f;
case 0x4a5523:c.instructions+=2;goto B4a5523;
case 0x4a5525:c.instructions+=1;goto B4a5525;
case 0x4a5527:goto L4a5527;
case 0x4a552a:c.instructions+=1;goto B4a552a;
case 0x4a552c:goto L4a552c;
case 0x4a5532:c.instructions+=1;goto B4a5532;
case 0x4a5534:goto L4a5534;
case 0x4a5537:c.instructions+=1;goto B4a5537;
case 0x4a5539:goto L4a5539;
case 0x4a553e:c.instructions+=2;goto B4a553e;
case 0x4a553f:c.instructions+=1;goto B4a553f;
case 0x4a5540:goto L4a5540;
case 0x4a5543:c.instructions+=1;goto B4a5543;
case 0x4a5545:goto L4a5545;
case 0x4a5548:c.instructions+=1;goto B4a5548;
case 0x4a554a:goto L4a554a;
case 0x4a554f:c.instructions+=1;goto B4a554f;
case 0x4a5551:goto L4a5551;
case 0x4a5554:c.instructions+=1;goto B4a5554;
case 0x4a5556:goto L4a5556;
case 0x4a5559:c.instructions+=1;goto B4a5559;
case 0x4a555b:goto L4a555b;
case 0x4a555f:c.instructions+=5;goto B4a555f;
case 0x4a5562:c.instructions+=4;goto B4a5562;
case 0x4a5564:c.instructions+=3;goto B4a5564;
case 0x4a5567:c.instructions+=2;goto B4a5567;
case 0x4a556a:c.instructions+=1;goto B4a556a;
case 0x4a556c:goto L4a556c;
case 0x4a556f:c.instructions+=6;goto B4a556f;
case 0x4a5571:c.instructions+=5;goto B4a5571;
case 0x4a5573:c.instructions+=4;goto B4a5573;
case 0x4a5576:c.instructions+=3;goto B4a5576;
case 0x4a557b:c.instructions+=2;goto B4a557b;
case 0x4a557c:c.instructions+=1;goto B4a557c;
case 0x4a557d:goto L4a557d;
case 0x4a5580:c.instructions+=1;goto B4a5580;
case 0x4a5582:goto L4a5582;
case 0x4a5585:c.instructions+=1;goto B4a5585;
case 0x4a5587:goto L4a5587;
case 0x4a558a:c.instructions+=7;goto B4a558a;
case 0x4a558d:c.instructions+=6;goto B4a558d;
case 0x4a5590:c.instructions+=5;goto B4a5590;
case 0x4a5592:c.instructions+=4;goto B4a5592;
case 0x4a5595:c.instructions+=3;goto B4a5595;
case 0x4a559a:c.instructions+=2;goto B4a559a;
case 0x4a559b:c.instructions+=1;goto B4a559b;
case 0x4a559c:goto L4a559c;
case 0x4a55a1:goto L4a55a1;
case 0x4a55a3:c.instructions+=3;goto B4a55a3;
case 0x4a55a9:c.instructions+=2;goto B4a55a9;
case 0x4a55ab:c.instructions+=1;goto B4a55ab;
case 0x4a55b1:goto L4a55b1;
case 0x4a55b3:c.instructions+=1;goto B4a55b3;
case 0x4a55b5:goto L4a55b5;
case 0x4a55b6:c.instructions+=3;goto B4a55b6;
case 0x4a55b9:c.instructions+=2;goto B4a55b9;
case 0x4a55bc:c.instructions+=1;goto B4a55bc;
case 0x4a55be:goto L4a55be;
case 0x4a55c0:c.instructions+=2;goto B4a55c0;
case 0x4a55c1:c.instructions+=1;goto B4a55c1;
case 0x4a55c2:goto L4a55c2;
case 0x4a55c5:c.instructions+=5;goto B4a55c5;
case 0x4a55c7:c.instructions+=4;goto B4a55c7;
case 0x4a55ca:c.instructions+=3;goto B4a55ca;
case 0x4a55cf:c.instructions+=2;goto B4a55cf;
case 0x4a55d0:c.instructions+=1;goto B4a55d0;
case 0x4a55e0:goto L4a55e0;
case 0x4a55e4:c.instructions+=10;goto B4a55e4;
case 0x4a55e8:c.instructions+=9;goto B4a55e8;
case 0x4a55e9:c.instructions+=8;goto B4a55e9;
case 0x4a55ea:c.instructions+=7;goto B4a55ea;
case 0x4a55ee:c.instructions+=6;goto B4a55ee;
case 0x4a55f0:c.instructions+=5;goto B4a55f0;
case 0x4a55f4:c.instructions+=4;goto B4a55f4;
case 0x4a55f5:c.instructions+=3;goto B4a55f5;
case 0x4a55f6:c.instructions+=2;goto B4a55f6;
case 0x4a55f7:c.instructions+=1;goto B4a55f7;
case 0x4a55fc:goto L4a55fc;
case 0x4a55ff:c.instructions+=2;goto B4a55ff;
case 0x4a5601:c.instructions+=1;goto B4a5601;
case 0x4a5603:goto L4a5603;
case 0x4a5606:c.instructions+=32;goto B4a5606;
case 0x4a5609:c.instructions+=31;goto B4a5609;
case 0x4a560c:c.instructions+=30;goto B4a560c;
case 0x4a560f:c.instructions+=29;goto B4a560f;
case 0x4a5612:c.instructions+=28;goto B4a5612;
case 0x4a5615:c.instructions+=27;goto B4a5615;
case 0x4a5618:c.instructions+=26;goto B4a5618;
case 0x4a561a:c.instructions+=25;goto B4a561a;
case 0x4a5620:c.instructions+=24;goto B4a5620;
case 0x4a5621:c.instructions+=23;goto B4a5621;
case 0x4a5625:c.instructions+=22;goto B4a5625;
case 0x4a5626:c.instructions+=21;goto B4a5626;
case 0x4a5629:c.instructions+=20;goto B4a5629;
case 0x4a562a:c.instructions+=19;goto B4a562a;
case 0x4a562d:c.instructions+=18;goto B4a562d;
case 0x4a562e:c.instructions+=17;goto B4a562e;
case 0x4a5631:c.instructions+=16;goto B4a5631;
case 0x4a5632:c.instructions+=15;goto B4a5632;
case 0x4a5635:c.instructions+=14;goto B4a5635;
case 0x4a5636:c.instructions+=13;goto B4a5636;
case 0x4a5639:c.instructions+=12;goto B4a5639;
case 0x4a563a:c.instructions+=11;goto B4a563a;
case 0x4a563d:c.instructions+=10;goto B4a563d;
case 0x4a563e:c.instructions+=9;goto B4a563e;
case 0x4a5641:c.instructions+=8;goto B4a5641;
case 0x4a5642:c.instructions+=7;goto B4a5642;
case 0x4a5645:c.instructions+=6;goto B4a5645;
case 0x4a5648:c.instructions+=5;goto B4a5648;
case 0x4a5649:c.instructions+=4;goto B4a5649;
case 0x4a564b:c.instructions+=3;goto B4a564b;
case 0x4a564c:c.instructions+=2;goto B4a564c;
case 0x4a564d:c.instructions+=1;goto B4a564d;
case 0x4a5652:goto L4a5652;
case 0x4a5653:c.instructions+=1;goto B4a5653;
case 0x4a5660:goto L4a5660;
case 0x4a5661:c.instructions+=8;goto B4a5661;
case 0x4a5662:c.instructions+=7;goto B4a5662;
case 0x4a5664:c.instructions+=6;goto B4a5664;
case 0x4a5667:c.instructions+=5;goto B4a5667;
case 0x4a5669:c.instructions+=4;goto B4a5669;
case 0x4a566f:c.instructions+=3;goto B4a566f;
case 0x4a5671:c.instructions+=2;goto B4a5671;
case 0x4a5674:c.instructions+=1;goto B4a5674;
case 0x4a5676:goto L4a5676;
case 0x4a5679:c.instructions+=4;goto B4a5679;
case 0x4a567f:c.instructions+=3;goto B4a567f;
case 0x4a5681:c.instructions+=2;goto B4a5681;
case 0x4a5684:c.instructions+=1;goto B4a5684;
case 0x4a5686:goto L4a5686;
case 0x4a5689:c.instructions+=4;goto B4a5689;
case 0x4a568f:c.instructions+=3;goto B4a568f;
case 0x4a5691:c.instructions+=2;goto B4a5691;
case 0x4a5694:c.instructions+=1;goto B4a5694;
case 0x4a5696:goto L4a5696;
case 0x4a5698:goto L4a5698;
case 0x4a569b:c.instructions+=4;goto B4a569b;
case 0x4a569e:c.instructions+=3;goto B4a569e;
case 0x4a56a0:c.instructions+=2;goto B4a56a0;
case 0x4a56a3:c.instructions+=1;goto B4a56a3;
case 0x4a56a5:goto L4a56a5;
case 0x4a56a8:c.instructions+=5;goto B4a56a8;
case 0x4a56aa:c.instructions+=4;goto B4a56aa;
case 0x4a56ab:c.instructions+=3;goto B4a56ab;
case 0x4a56ad:c.instructions+=2;goto B4a56ad;
case 0x4a56b0:c.instructions+=1;goto B4a56b0;
case 0x4a56b5:goto L4a56b5;
case 0x4a56b8:c.instructions+=4;goto B4a56b8;
case 0x4a56bb:c.instructions+=3;goto B4a56bb;
case 0x4a56bd:c.instructions+=2;goto B4a56bd;
case 0x4a56c0:c.instructions+=1;goto B4a56c0;
case 0x4a56c2:goto L4a56c2;
case 0x4a56c5:c.instructions+=5;goto B4a56c5;
case 0x4a56c7:c.instructions+=4;goto B4a56c7;
case 0x4a56c9:c.instructions+=3;goto B4a56c9;
case 0x4a56ca:c.instructions+=2;goto B4a56ca;
case 0x4a56cd:c.instructions+=1;goto B4a56cd;
case 0x4a56d2:goto L4a56d2;
case 0x4a56d5:c.instructions+=4;goto B4a56d5;
case 0x4a56d8:c.instructions+=3;goto B4a56d8;
case 0x4a56da:c.instructions+=2;goto B4a56da;
case 0x4a56dd:c.instructions+=1;goto B4a56dd;
case 0x4a56df:goto L4a56df;
case 0x4a56e2:c.instructions+=5;goto B4a56e2;
case 0x4a56e4:c.instructions+=4;goto B4a56e4;
case 0x4a56e7:c.instructions+=3;goto B4a56e7;
case 0x4a56e9:c.instructions+=2;goto B4a56e9;
case 0x4a56ea:c.instructions+=1;goto B4a56ea;
case 0x4a56ef:goto L4a56ef;
case 0x4a56f1:c.instructions+=3;goto B4a56f1;
case 0x4a56f4:c.instructions+=2;goto B4a56f4;
case 0x4a56f6:c.instructions+=1;goto B4a56f6;
case 0x4a56f8:goto L4a56f8;
case 0x4a56fa:c.instructions+=1;goto B4a56fa;
case 0x4a56fc:goto L4a56fc;
case 0x4a56fe:c.instructions+=1;goto B4a56fe;
case 0x4a5703:goto L4a5703;
case 0x4a5706:c.instructions+=2;goto B4a5706;
case 0x4a5709:c.instructions+=1;goto B4a5709;
case 0x4a570b:goto L4a570b;
case 0x4a570c:c.instructions+=1;goto B4a570c;
case 0x4a5711:goto L4a5711;
case 0x4a5714:c.instructions+=3;goto B4a5714;
case 0x4a5716:c.instructions+=2;goto B4a5716;
case 0x4a5718:c.instructions+=1;goto B4a5718;
case 0x4a571a:goto L4a571a;
case 0x4a5721:c.instructions+=6;goto B4a5721;
case 0x4a5728:c.instructions+=5;goto B4a5728;
case 0x4a572f:c.instructions+=4;goto B4a572f;
case 0x4a5736:c.instructions+=3;goto B4a5736;
case 0x4a5737:c.instructions+=2;goto B4a5737;
case 0x4a5738:c.instructions+=1;goto B4a5738;
case 0x4a5739:goto L4a5739;
case 0x4a573b:goto L4a573b;
case 0x4a573c:c.instructions+=2;goto B4a573c;
case 0x4a573d:c.instructions+=1;goto B4a573d;
case 0x4a5740:goto L4a5740;
case 0x4a5741:c.instructions+=4;goto B4a5741;
case 0x4a5743:c.instructions+=3;goto B4a5743;
case 0x4a5746:c.instructions+=2;goto B4a5746;
case 0x4a5748:c.instructions+=1;goto B4a5748;
case 0x4a574e:goto L4a574e;
case 0x4a5753:goto L4a5753;
case 0x4a5755:c.instructions+=1;goto B4a5755;
case 0x4a575b:goto L4a575b;
case 0x4a575f:c.instructions+=5;goto B4a575f;
case 0x4a5762:c.instructions+=4;goto B4a5762;
case 0x4a5766:c.instructions+=3;goto B4a5766;
case 0x4a5769:c.instructions+=2;goto B4a5769;
case 0x4a576c:c.instructions+=1;goto B4a576c;
case 0x4a5772:goto L4a5772;
case 0x4a5779:goto L4a5779;
case 0x4a577e:c.instructions+=7;goto B4a577e;
case 0x4a5780:c.instructions+=6;goto B4a5780;
case 0x4a5784:c.instructions+=5;goto B4a5784;
case 0x4a5788:c.instructions+=4;goto B4a5788;
case 0x4a578e:c.instructions+=3;goto B4a578e;
case 0x4a5791:c.instructions+=2;goto B4a5791;
case 0x4a5792:c.instructions+=1;goto B4a5792;
case 0x4a5795:goto L4a5795;
case 0x4a579a:c.instructions+=6;goto B4a579a;
case 0x4a579e:c.instructions+=5;goto B4a579e;
case 0x4a57a2:c.instructions+=4;goto B4a57a2;
case 0x4a57a8:c.instructions+=3;goto B4a57a8;
case 0x4a57ab:c.instructions+=2;goto B4a57ab;
case 0x4a57ac:c.instructions+=1;goto B4a57ac;
case 0x4a57af:goto L4a57af;
case 0x4a57b4:c.instructions+=8;goto B4a57b4;
case 0x4a57b8:c.instructions+=7;goto B4a57b8;
case 0x4a57bc:c.instructions+=6;goto B4a57bc;
case 0x4a57c2:c.instructions+=5;goto B4a57c2;
case 0x4a57c8:c.instructions+=4;goto B4a57c8;
case 0x4a57ca:c.instructions+=3;goto B4a57ca;
case 0x4a57cd:c.instructions+=2;goto B4a57cd;
case 0x4a57ce:c.instructions+=1;goto B4a57ce;
case 0x4a57d1:goto L4a57d1;
case 0x4a57d6:c.instructions+=6;goto B4a57d6;
case 0x4a57da:c.instructions+=5;goto B4a57da;
case 0x4a57de:c.instructions+=4;goto B4a57de;
case 0x4a57e4:c.instructions+=3;goto B4a57e4;
case 0x4a57e7:c.instructions+=2;goto B4a57e7;
case 0x4a57e8:c.instructions+=1;goto B4a57e8;
case 0x4a57eb:goto L4a57eb;
case 0x4a57f0:c.instructions+=7;goto B4a57f0;
case 0x4a57f2:c.instructions+=6;goto B4a57f2;
case 0x4a57f6:c.instructions+=5;goto B4a57f6;
case 0x4a57fa:c.instructions+=4;goto B4a57fa;
case 0x4a5800:c.instructions+=3;goto B4a5800;
case 0x4a5803:c.instructions+=2;goto B4a5803;
case 0x4a5804:c.instructions+=1;goto B4a5804;
case 0x4a5807:goto L4a5807;
case 0x4a580c:c.instructions+=8;goto B4a580c;
case 0x4a5810:c.instructions+=7;goto B4a5810;
case 0x4a5814:c.instructions+=6;goto B4a5814;
case 0x4a581a:c.instructions+=5;goto B4a581a;
case 0x4a5820:c.instructions+=4;goto B4a5820;
case 0x4a5822:c.instructions+=3;goto B4a5822;
case 0x4a5825:c.instructions+=2;goto B4a5825;
case 0x4a5826:c.instructions+=1;goto B4a5826;
case 0x4a5829:goto L4a5829;
case 0x4a582e:c.instructions+=2;goto B4a582e;
case 0x4a5830:c.instructions+=1;goto B4a5830;
case 0x4a5832:goto L4a5832;
case 0x4a5837:c.instructions+=7;goto B4a5837;
case 0x4a5839:c.instructions+=6;goto B4a5839;
case 0x4a583d:c.instructions+=5;goto B4a583d;
case 0x4a5841:c.instructions+=4;goto B4a5841;
case 0x4a5847:c.instructions+=3;goto B4a5847;
case 0x4a584a:c.instructions+=2;goto B4a584a;
case 0x4a584b:c.instructions+=1;goto B4a584b;
case 0x4a584e:goto L4a584e;
case 0x4a5853:c.instructions+=2;goto B4a5853;
case 0x4a5855:c.instructions+=1;goto B4a5855;
case 0x4a5857:goto L4a5857;
case 0x4a585c:c.instructions+=6;goto B4a585c;
case 0x4a5860:c.instructions+=5;goto B4a5860;
case 0x4a5864:c.instructions+=4;goto B4a5864;
case 0x4a586a:c.instructions+=3;goto B4a586a;
case 0x4a586d:c.instructions+=2;goto B4a586d;
case 0x4a586e:c.instructions+=1;goto B4a586e;
case 0x4a5871:goto L4a5871;
case 0x4a5876:c.instructions+=2;goto B4a5876;
case 0x4a5878:c.instructions+=1;goto B4a5878;
case 0x4a587a:goto L4a587a;
case 0x4a587f:c.instructions+=5;goto B4a587f;
case 0x4a5883:c.instructions+=4;goto B4a5883;
case 0x4a5887:c.instructions+=3;goto B4a5887;
case 0x4a588d:c.instructions+=2;goto B4a588d;
case 0x4a5893:c.instructions+=1;goto B4a5893;
case 0x4a5896:goto L4a5896;
case 0x4a5897:c.instructions+=1;goto B4a5897;
case 0x4a58c0:goto L4a58c0;
case 0x4a58c4:c.instructions+=12;goto B4a58c4;
case 0x4a58c5:c.instructions+=11;goto B4a58c5;
case 0x4a58c7:c.instructions+=10;goto B4a58c7;
case 0x4a58cb:c.instructions+=9;goto B4a58cb;
case 0x4a58cf:c.instructions+=8;goto B4a58cf;
case 0x4a58d2:c.instructions+=7;goto B4a58d2;
case 0x4a58d3:c.instructions+=6;goto B4a58d3;
case 0x4a58d7:c.instructions+=5;goto B4a58d7;
case 0x4a58d8:c.instructions+=4;goto B4a58d8;
case 0x4a58d9:c.instructions+=3;goto B4a58d9;
case 0x4a58dc:c.instructions+=2;goto B4a58dc;
case 0x4a58df:c.instructions+=1;goto B4a58df;
case 0x4a58e4:goto L4a58e4;
case 0x4a58e8:c.instructions+=8;goto B4a58e8;
case 0x4a58ec:c.instructions+=7;goto B4a58ec;
case 0x4a58ed:c.instructions+=6;goto B4a58ed;
case 0x4a58f1:c.instructions+=5;goto B4a58f1;
case 0x4a58f4:c.instructions+=4;goto B4a58f4;
case 0x4a58f7:c.instructions+=3;goto B4a58f7;
case 0x4a58f8:c.instructions+=2;goto B4a58f8;
case 0x4a58f9:c.instructions+=1;goto B4a58f9;
case 0x4a58fe:goto L4a58fe;
case 0x4a5902:c.instructions+=5;goto B4a5902;
case 0x4a5905:c.instructions+=4;goto B4a5905;
case 0x4a5908:c.instructions+=3;goto B4a5908;
case 0x4a590f:c.instructions+=2;goto B4a590f;
case 0x4a5910:c.instructions+=1;goto B4a5910;
case 0x4a5920:goto L4a5920;
case 0x4a5923:c.instructions+=13;goto B4a5923;
case 0x4a5927:c.instructions+=12;goto B4a5927;
case 0x4a5928:c.instructions+=11;goto B4a5928;
case 0x4a5929:c.instructions+=10;goto B4a5929;
case 0x4a592b:c.instructions+=9;goto B4a592b;
case 0x4a592e:c.instructions+=8;goto B4a592e;
case 0x4a5931:c.instructions+=7;goto B4a5931;
case 0x4a5935:c.instructions+=6;goto B4a5935;
case 0x4a5936:c.instructions+=5;goto B4a5936;
case 0x4a593a:c.instructions+=4;goto B4a593a;
case 0x4a593e:c.instructions+=3;goto B4a593e;
case 0x4a593f:c.instructions+=2;goto B4a593f;
case 0x4a5940:c.instructions+=1;goto B4a5940;
case 0x4a5945:goto L4a5945;
case 0x4a5949:c.instructions+=5;goto B4a5949;
case 0x4a594d:c.instructions+=4;goto B4a594d;
case 0x4a594e:c.instructions+=3;goto B4a594e;
case 0x4a594f:c.instructions+=2;goto B4a594f;
case 0x4a5950:c.instructions+=1;goto B4a5950;
case 0x4a5955:goto L4a5955;
case 0x4a5958:c.instructions+=8;goto B4a5958;
case 0x4a595b:c.instructions+=7;goto B4a595b;
case 0x4a595f:c.instructions+=6;goto B4a595f;
case 0x4a5960:c.instructions+=5;goto B4a5960;
case 0x4a5964:c.instructions+=4;goto B4a5964;
case 0x4a5965:c.instructions+=3;goto B4a5965;
case 0x4a5966:c.instructions+=2;goto B4a5966;
case 0x4a596a:c.instructions+=1;goto B4a596a;
case 0x4a596f:goto L4a596f;
case 0x4a5973:c.instructions+=5;goto B4a5973;
case 0x4a5977:c.instructions+=4;goto B4a5977;
case 0x4a5978:c.instructions+=3;goto B4a5978;
case 0x4a5979:c.instructions+=2;goto B4a5979;
case 0x4a597a:c.instructions+=1;goto B4a597a;
case 0x4a597f:goto L4a597f;
case 0x4a5982:c.instructions+=6;goto B4a5982;
case 0x4a5986:c.instructions+=5;goto B4a5986;
case 0x4a5987:c.instructions+=4;goto B4a5987;
case 0x4a598b:c.instructions+=3;goto B4a598b;
case 0x4a598c:c.instructions+=2;goto B4a598c;
case 0x4a598d:c.instructions+=1;goto B4a598d;
case 0x4a5992:goto L4a5992;
case 0x4a5996:c.instructions+=6;goto B4a5996;
case 0x4a5999:c.instructions+=5;goto B4a5999;
case 0x4a599a:c.instructions+=4;goto B4a599a;
case 0x4a599d:c.instructions+=3;goto B4a599d;
case 0x4a599e:c.instructions+=2;goto B4a599e;
case 0x4a59a1:c.instructions+=1;goto B4a59a1;
case 0x4a59b0:goto L4a59b0;
case 0x4a59b3:c.instructions+=6;goto B4a59b3;
case 0x4a59b4:c.instructions+=5;goto B4a59b4;
case 0x4a59b6:c.instructions+=4;goto B4a59b6;
case 0x4a59b9:c.instructions+=3;goto B4a59b9;
case 0x4a59ba:c.instructions+=2;goto B4a59ba;
case 0x4a59bb:c.instructions+=1;goto B4a59bb;
case 0x4a59c0:goto L4a59c0;
case 0x4a59c3:c.instructions+=3;goto B4a59c3;
case 0x4a59c6:c.instructions+=2;goto B4a59c6;
case 0x4a59c8:c.instructions+=1;goto B4a59c8;
case 0x4a59ca:goto L4a59ca;
case 0x4a59ce:c.instructions+=9;goto B4a59ce;
case 0x4a59d2:c.instructions+=8;goto B4a59d2;
case 0x4a59d5:c.instructions+=7;goto B4a59d5;
case 0x4a59d6:c.instructions+=6;goto B4a59d6;
case 0x4a59da:c.instructions+=5;goto B4a59da;
case 0x4a59db:c.instructions+=4;goto B4a59db;
case 0x4a59de:c.instructions+=3;goto B4a59de;
case 0x4a59df:c.instructions+=2;goto B4a59df;
case 0x4a59e3:c.instructions+=1;goto B4a59e3;
case 0x4a59e8:goto L4a59e8;
case 0x4a59ec:c.instructions+=5;goto B4a59ec;
case 0x4a59f0:c.instructions+=4;goto B4a59f0;
case 0x4a59f1:c.instructions+=3;goto B4a59f1;
case 0x4a59f2:c.instructions+=2;goto B4a59f2;
case 0x4a59f3:c.instructions+=1;goto B4a59f3;
case 0x4a59f8:goto L4a59f8;
case 0x4a59fb:goto L4a59fb;
case 0x4a59fc:c.instructions+=3;goto B4a59fc;
case 0x4a59fd:c.instructions+=2;goto B4a59fd;
case 0x4a5a00:c.instructions+=1;goto B4a5a00;
case 0x4a5a10:goto L4a5a10;
case 0x4a5a12:c.instructions+=14;goto B4a5a12;
case 0x4a5a17:c.instructions+=13;goto B4a5a17;
case 0x4a5a1d:c.instructions+=12;goto B4a5a1d;
case 0x4a5a1e:c.instructions+=11;goto B4a5a1e;
case 0x4a5a25:c.instructions+=10;goto B4a5a25;
case 0x4a5a26:c.instructions+=9;goto B4a5a26;
case 0x4a5a27:c.instructions+=8;goto B4a5a27;
case 0x4a5a28:c.instructions+=7;goto B4a5a28;
case 0x4a5a2a:c.instructions+=6;goto B4a5a2a;
case 0x4a5a2e:c.instructions+=5;goto B4a5a2e;
case 0x4a5a34:c.instructions+=4;goto B4a5a34;
case 0x4a5a36:c.instructions+=3;goto B4a5a36;
case 0x4a5a38:c.instructions+=2;goto B4a5a38;
case 0x4a5a40:c.instructions+=1;goto B4a5a40;
case 0x4a5a42:goto L4a5a42;
case 0x4a5a48:c.instructions+=3;goto B4a5a48;
case 0x4a5a49:c.instructions+=2;goto B4a5a49;
case 0x4a5a4e:c.instructions+=1;goto B4a5a4e;
case 0x4a5a53:goto L4a5a53;
case 0x4a5a59:c.instructions+=1;goto B4a5a59;
case 0x4a5a5b:goto L4a5a5b;
case 0x4a5a61:c.instructions+=3;goto B4a5a61;
case 0x4a5a62:c.instructions+=2;goto B4a5a62;
case 0x4a5a67:c.instructions+=1;goto B4a5a67;
case 0x4a5a6c:goto L4a5a6c;
case 0x4a5a72:c.instructions+=1;goto B4a5a72;
case 0x4a5a74:goto L4a5a74;
case 0x4a5a7a:c.instructions+=3;goto B4a5a7a;
case 0x4a5a7b:c.instructions+=2;goto B4a5a7b;
case 0x4a5a80:c.instructions+=1;goto B4a5a80;
case 0x4a5a85:goto L4a5a85;
case 0x4a5a8b:c.instructions+=8;goto B4a5a8b;
case 0x4a5a91:c.instructions+=7;goto B4a5a91;
case 0x4a5a97:c.instructions+=6;goto B4a5a97;
case 0x4a5aa1:c.instructions+=5;goto B4a5aa1;
case 0x4a5aa7:c.instructions+=4;goto B4a5aa7;
case 0x4a5aad:c.instructions+=3;goto B4a5aad;
case 0x4a5ab3:c.instructions+=2;goto B4a5ab3;
case 0x4a5ab8:c.instructions+=1;goto B4a5ab8;
case 0x4a5abd:goto L4a5abd;
case 0x4a5ac3:c.instructions+=2;goto B4a5ac3;
case 0x4a5ac8:c.instructions+=1;goto B4a5ac8;
case 0x4a5acd:goto L4a5acd;
case 0x4a5ad3:c.instructions+=2;goto B4a5ad3;
case 0x4a5ad8:c.instructions+=1;goto B4a5ad8;
case 0x4a5add:goto L4a5add;
case 0x4a5ae3:c.instructions+=2;goto B4a5ae3;
case 0x4a5ae7:c.instructions+=1;goto B4a5ae7;
case 0x4a5aec:goto L4a5aec;
case 0x4a5af2:c.instructions+=2;goto B4a5af2;
case 0x4a5afa:c.instructions+=1;goto B4a5afa;
case 0x4a5aff:goto L4a5aff;
case 0x4a5b03:c.instructions+=5;goto B4a5b03;
case 0x4a5b04:c.instructions+=4;goto B4a5b04;
case 0x4a5b05:c.instructions+=3;goto B4a5b05;
case 0x4a5b0c:c.instructions+=2;goto B4a5b0c;
case 0x4a5b0f:c.instructions+=1;goto B4a5b0f;
case 0x4a5b10:goto L4a5b10;
case 0x4a5b14:c.instructions+=3;goto B4a5b14;
case 0x4a5b15:c.instructions+=2;goto B4a5b15;
case 0x4a5b1a:c.instructions+=1;goto B4a5b1a;
case 0x4a5b1f:goto L4a5b1f;
case 0x4a5b20:goto L4a5b20;
case 0x4a5b23:c.instructions+=10;goto B4a5b23;
case 0x4a5b27:c.instructions+=9;goto B4a5b27;
case 0x4a5b2a:c.instructions+=8;goto B4a5b2a;
case 0x4a5b30:c.instructions+=7;goto B4a5b30;
case 0x4a5b36:c.instructions+=6;goto B4a5b36;
case 0x4a5b38:c.instructions+=5;goto B4a5b38;
case 0x4a5b3c:c.instructions+=4;goto B4a5b3c;
case 0x4a5b42:c.instructions+=3;goto B4a5b42;
case 0x4a5b43:c.instructions+=2;goto B4a5b43;
case 0x4a5b44:c.instructions+=1;goto B4a5b44;
case 0x4a5b49:goto L4a5b49;
case 0x4a5b4c:c.instructions+=2;goto B4a5b4c;
case 0x4a5b4f:c.instructions+=1;goto B4a5b4f;
case 0x4a5b51:goto L4a5b51;
case 0x4a5b54:c.instructions+=1;goto B4a5b54;
case 0x4a5b56:goto L4a5b56;
case 0x4a5b5b:c.instructions+=1;goto B4a5b5b;
case 0x4a5b5e:goto L4a5b5e;
case 0x4a5b60:c.instructions+=1;goto B4a5b60;
case 0x4a5b70:goto L4a5b70;
case 0x4a5b74:c.instructions+=21;goto B4a5b74;
case 0x4a5b78:c.instructions+=20;goto B4a5b78;
case 0x4a5b79:c.instructions+=19;goto B4a5b79;
case 0x4a5b7a:c.instructions+=18;goto B4a5b7a;
case 0x4a5b7e:c.instructions+=17;goto B4a5b7e;
case 0x4a5b80:c.instructions+=16;goto B4a5b80;
case 0x4a5b84:c.instructions+=15;goto B4a5b84;
case 0x4a5b85:c.instructions+=14;goto B4a5b85;
case 0x4a5b89:c.instructions+=13;goto B4a5b89;
case 0x4a5b8a:c.instructions+=12;goto B4a5b8a;
case 0x4a5b8e:c.instructions+=11;goto B4a5b8e;
case 0x4a5b8f:c.instructions+=10;goto B4a5b8f;
case 0x4a5b93:c.instructions+=9;goto B4a5b93;
case 0x4a5b94:c.instructions+=8;goto B4a5b94;
case 0x4a5b98:c.instructions+=7;goto B4a5b98;
case 0x4a5b99:c.instructions+=6;goto B4a5b99;
case 0x4a5b9d:c.instructions+=5;goto B4a5b9d;
case 0x4a5b9e:c.instructions+=4;goto B4a5b9e;
case 0x4a5b9f:c.instructions+=3;goto B4a5b9f;
case 0x4a5ba5:c.instructions+=2;goto B4a5ba5;
case 0x4a5ba6:c.instructions+=1;goto B4a5ba6;
case 0x4a5bab:goto L4a5bab;
case 0x4a5baf:c.instructions+=3;goto B4a5baf;
case 0x4a5bb5:c.instructions+=2;goto B4a5bb5;
case 0x4a5bb6:c.instructions+=1;goto B4a5bb6;
case 0x4a5bbb:goto L4a5bbb;
case 0x4a5bc1:c.instructions+=1;goto B4a5bc1;
case 0x4a5bc6:goto L4a5bc6;
case 0x4a5bc7:c.instructions+=1;goto B4a5bc7;
case 0x4a5bd0:goto L4a5bd0;
case 0x4a5bd5:c.instructions+=14;goto B4a5bd5;
case 0x4a5bd8:c.instructions+=13;goto B4a5bd8;
case 0x4a5bd9:c.instructions+=12;goto B4a5bd9;
case 0x4a5bda:c.instructions+=11;goto B4a5bda;
case 0x4a5bdc:c.instructions+=10;goto B4a5bdc;
case 0x4a5be1:c.instructions+=9;goto B4a5be1;
case 0x4a5be7:c.instructions+=8;goto B4a5be7;
case 0x4a5bed:c.instructions+=7;goto B4a5bed;
case 0x4a5bf1:c.instructions+=6;goto B4a5bf1;
case 0x4a5bf3:c.instructions+=5;goto B4a5bf3;
case 0x4a5bf4:c.instructions+=4;goto B4a5bf4;
case 0x4a5bf5:c.instructions+=3;goto B4a5bf5;
case 0x4a5bf6:c.instructions+=2;goto B4a5bf6;
case 0x4a5bf7:c.instructions+=1;goto B4a5bf7;
case 0x4a5bfc:goto L4a5bfc;
case 0x4a5bff:c.instructions+=2;goto B4a5bff;
case 0x4a5c01:c.instructions+=1;goto B4a5c01;
case 0x4a5c07:goto L4a5c07;
case 0x4a5c0a:c.instructions+=26;goto B4a5c0a;
case 0x4a5c0d:c.instructions+=25;goto B4a5c0d;
case 0x4a5c0e:c.instructions+=24;goto B4a5c0e;
case 0x4a5c12:c.instructions+=23;goto B4a5c12;
case 0x4a5c18:c.instructions+=22;goto B4a5c18;
case 0x4a5c19:c.instructions+=21;goto B4a5c19;
case 0x4a5c1c:c.instructions+=20;goto B4a5c1c;
case 0x4a5c20:c.instructions+=19;goto B4a5c20;
case 0x4a5c23:c.instructions+=18;goto B4a5c23;
case 0x4a5c24:c.instructions+=17;goto B4a5c24;
case 0x4a5c27:c.instructions+=16;goto B4a5c27;
case 0x4a5c28:c.instructions+=15;goto B4a5c28;
case 0x4a5c2b:c.instructions+=14;goto B4a5c2b;
case 0x4a5c2c:c.instructions+=13;goto B4a5c2c;
case 0x4a5c2f:c.instructions+=12;goto B4a5c2f;
case 0x4a5c30:c.instructions+=11;goto B4a5c30;
case 0x4a5c33:c.instructions+=10;goto B4a5c33;
case 0x4a5c34:c.instructions+=9;goto B4a5c34;
case 0x4a5c37:c.instructions+=8;goto B4a5c37;
case 0x4a5c38:c.instructions+=7;goto B4a5c38;
case 0x4a5c3b:c.instructions+=6;goto B4a5c3b;
case 0x4a5c3e:c.instructions+=5;goto B4a5c3e;
case 0x4a5c3f:c.instructions+=4;goto B4a5c3f;
case 0x4a5c45:c.instructions+=3;goto B4a5c45;
case 0x4a5c46:c.instructions+=2;goto B4a5c46;
case 0x4a5c47:c.instructions+=1;goto B4a5c47;
case 0x4a5c4c:goto L4a5c4c;
case 0x4a5c52:c.instructions+=11;goto B4a5c52;
case 0x4a5c58:c.instructions+=10;goto B4a5c58;
case 0x4a5c5e:c.instructions+=9;goto B4a5c5e;
case 0x4a5c64:c.instructions+=8;goto B4a5c64;
case 0x4a5c6a:c.instructions+=7;goto B4a5c6a;
case 0x4a5c70:c.instructions+=6;goto B4a5c70;
case 0x4a5c76:c.instructions+=5;goto B4a5c76;
case 0x4a5c7c:c.instructions+=4;goto B4a5c7c;
case 0x4a5c82:c.instructions+=3;goto B4a5c82;
case 0x4a5c84:c.instructions+=2;goto B4a5c84;
case 0x4a5c87:c.instructions+=1;goto B4a5c87;
case 0x4a5c89:goto L4a5c89;
case 0x4a5c90:goto L4a5c90;
case 0x4a5c96:c.instructions+=4;goto B4a5c96;
case 0x4a5c9c:c.instructions+=3;goto B4a5c9c;
case 0x4a5c9e:c.instructions+=2;goto B4a5c9e;
case 0x4a5ca1:c.instructions+=1;goto B4a5ca1;
case 0x4a5ca3:goto L4a5ca3;
case 0x4a5ca9:c.instructions+=3;goto B4a5ca9;
case 0x4a5cab:c.instructions+=2;goto B4a5cab;
case 0x4a5cae:c.instructions+=1;goto B4a5cae;
case 0x4a5cb0:goto L4a5cb0;
case 0x4a5cb6:c.instructions+=4;goto B4a5cb6;
case 0x4a5cbc:c.instructions+=3;goto B4a5cbc;
case 0x4a5cbe:c.instructions+=2;goto B4a5cbe;
case 0x4a5cc1:c.instructions+=1;goto B4a5cc1;
case 0x4a5cc3:goto L4a5cc3;
case 0x4a5cc7:c.instructions+=7;goto B4a5cc7;
case 0x4a5ccd:c.instructions+=6;goto B4a5ccd;
case 0x4a5ccf:c.instructions+=5;goto B4a5ccf;
case 0x4a5cd5:c.instructions+=4;goto B4a5cd5;
case 0x4a5cd9:c.instructions+=3;goto B4a5cd9;
case 0x4a5cdb:c.instructions+=2;goto B4a5cdb;
case 0x4a5cde:c.instructions+=1;goto B4a5cde;
case 0x4a5ce0:goto L4a5ce0;
case 0x4a5ce2:c.instructions+=5;goto B4a5ce2;
case 0x4a5ce6:c.instructions+=4;goto B4a5ce6;
case 0x4a5cec:c.instructions+=3;goto B4a5cec;
case 0x4a5cf0:c.instructions+=2;goto B4a5cf0;
case 0x4a5cf4:c.instructions+=1;goto B4a5cf4;
case 0x4a5cf6:goto L4a5cf6;
case 0x4a5cf8:c.instructions+=6;goto B4a5cf8;
case 0x4a5cfc:c.instructions+=5;goto B4a5cfc;
case 0x4a5d00:c.instructions+=4;goto B4a5d00;
case 0x4a5d06:c.instructions+=3;goto B4a5d06;
case 0x4a5d08:c.instructions+=2;goto B4a5d08;
case 0x4a5d0c:c.instructions+=1;goto B4a5d0c;
case 0x4a5d0e:goto L4a5d0e;
case 0x4a5d12:c.instructions+=4;goto B4a5d12;
case 0x4a5d16:c.instructions+=3;goto B4a5d16;
case 0x4a5d18:c.instructions+=2;goto B4a5d18;
case 0x4a5d1b:c.instructions+=1;goto B4a5d1b;
case 0x4a5d1d:goto L4a5d1d;
case 0x4a5d21:c.instructions+=3;goto B4a5d21;
case 0x4a5d27:c.instructions+=2;goto B4a5d27;
case 0x4a5d2d:c.instructions+=1;goto B4a5d2d;
case 0x4a5d2f:goto L4a5d2f;
case 0x4a5d33:c.instructions+=2;goto B4a5d33;
case 0x4a5d3a:c.instructions+=1;goto B4a5d3a;
case 0x4a5d40:goto L4a5d40;
case 0x4a5d46:c.instructions+=7;goto B4a5d46;
case 0x4a5d4c:c.instructions+=6;goto B4a5d4c;
case 0x4a5d52:c.instructions+=5;goto B4a5d52;
case 0x4a5d56:c.instructions+=4;goto B4a5d56;
case 0x4a5d58:c.instructions+=3;goto B4a5d58;
case 0x4a5d5a:c.instructions+=2;goto B4a5d5a;
case 0x4a5d5d:c.instructions+=1;goto B4a5d5d;
case 0x4a5d5f:goto L4a5d5f;
case 0x4a5d63:c.instructions+=7;goto B4a5d63;
case 0x4a5d65:c.instructions+=6;goto B4a5d65;
case 0x4a5d6b:c.instructions+=5;goto B4a5d6b;
case 0x4a5d6c:c.instructions+=4;goto B4a5d6c;
case 0x4a5d6d:c.instructions+=3;goto B4a5d6d;
case 0x4a5d6f:c.instructions+=2;goto B4a5d6f;
case 0x4a5d72:c.instructions+=1;goto B4a5d72;
case 0x4a5d75:goto L4a5d75;
case 0x4a5d79:c.instructions+=3;goto B4a5d79;
case 0x4a5d7b:c.instructions+=2;goto B4a5d7b;
case 0x4a5d7d:c.instructions+=1;goto B4a5d7d;
case 0x4a5d83:goto L4a5d83;
case 0x4a5d84:c.instructions+=3;goto B4a5d84;
case 0x4a5d85:c.instructions+=2;goto B4a5d85;
case 0x4a5d88:c.instructions+=1;goto B4a5d88;
case 0x4a5d90:goto L4a5d90;
case 0x4a5d91:c.instructions+=2;goto B4a5d91;
case 0x4a5d93:c.instructions+=1;goto B4a5d93;
case 0x4a5d98:goto L4a5d98;
case 0x4a5d9a:c.instructions+=1;goto B4a5d9a;
case 0x4a5da0:goto L4a5da0;
case 0x4a5da1:c.instructions+=2;goto B4a5da1;
case 0x4a5da6:c.instructions+=1;goto B4a5da6;
case 0x4a5dab:goto L4a5dab;
case 0x4a5dae:c.instructions+=3;goto B4a5dae;
case 0x4a5db0:c.instructions+=2;goto B4a5db0;
case 0x4a5db2:c.instructions+=1;goto B4a5db2;
case 0x4a5db4:goto L4a5db4;
case 0x4a5db9:c.instructions+=1;goto B4a5db9;
case 0x4a5dbe:goto L4a5dbe;
case 0x4a5dc1:c.instructions+=2;goto B4a5dc1;
case 0x4a5dc3:c.instructions+=1;goto B4a5dc3;
case 0x4a5dc5:goto L4a5dc5;
case 0x4a5dcb:c.instructions+=4;goto B4a5dcb;
case 0x4a5dd1:c.instructions+=3;goto B4a5dd1;
case 0x4a5dd3:c.instructions+=2;goto B4a5dd3;
case 0x4a5dd6:c.instructions+=1;goto B4a5dd6;
case 0x4a5dd8:goto L4a5dd8;
case 0x4a5dde:c.instructions+=1;goto B4a5dde;
case 0x4a5de0:goto L4a5de0;
case 0x4a5de6:c.instructions+=4;goto B4a5de6;
case 0x4a5dec:c.instructions+=3;goto B4a5dec;
case 0x4a5dee:c.instructions+=2;goto B4a5dee;
case 0x4a5df1:c.instructions+=1;goto B4a5df1;
case 0x4a5df3:goto L4a5df3;
case 0x4a5dfa:goto L4a5dfa;
case 0x4a5dff:c.instructions+=3;goto B4a5dff;
case 0x4a5e05:c.instructions+=2;goto B4a5e05;
case 0x4a5e0a:c.instructions+=1;goto B4a5e0a;
case 0x4a5e0c:goto L4a5e0c;
case 0x4a5e0e:goto L4a5e0e;
case 0x4a5e14:c.instructions+=1;goto B4a5e14;
case 0x4a5e16:goto L4a5e16;
case 0x4a5e1c:c.instructions+=8;goto B4a5e1c;
case 0x4a5e22:c.instructions+=7;goto B4a5e22;
case 0x4a5e28:c.instructions+=6;goto B4a5e28;
case 0x4a5e2e:c.instructions+=5;goto B4a5e2e;
case 0x4a5e34:c.instructions+=4;goto B4a5e34;
case 0x4a5e3a:c.instructions+=3;goto B4a5e3a;
case 0x4a5e40:c.instructions+=2;goto B4a5e40;
case 0x4a5e46:c.instructions+=1;goto B4a5e46;
case 0x4a5e4c:goto L4a5e4c;
case 0x4a5e52:c.instructions+=1;goto B4a5e52;
case 0x4a5e54:goto L4a5e54;
case 0x4a5e59:c.instructions+=1;goto B4a5e59;
case 0x4a5e5e:goto L4a5e5e;
case 0x4a5e61:c.instructions+=2;goto B4a5e61;
case 0x4a5e63:c.instructions+=1;goto B4a5e63;
case 0x4a5e65:goto L4a5e65;
case 0x4a5e6b:c.instructions+=1;goto B4a5e6b;
case 0x4a5e6d:goto L4a5e6d;
case 0x4a5e72:goto L4a5e72;
case 0x4a5e74:c.instructions+=1;goto B4a5e74;
case 0x4a5e76:goto L4a5e76;
case 0x4a5e80:c.instructions+=1;goto B4a5e80;
case 0x4a5e86:goto L4a5e86;
case 0x4a5e8c:c.instructions+=1;goto B4a5e8c;
case 0x4a5e8e:goto L4a5e8e;
case 0x4a5e93:goto L4a5e93;
case 0x4a5e95:c.instructions+=1;goto B4a5e95;
case 0x4a5e97:goto L4a5e97;
case 0x4a5ea1:c.instructions+=1;goto B4a5ea1;
case 0x4a5ea7:goto L4a5ea7;
case 0x4a5ead:c.instructions+=1;goto B4a5ead;
case 0x4a5eaf:goto L4a5eaf;
case 0x4a5eb4:goto L4a5eb4;
case 0x4a5eb6:c.instructions+=1;goto B4a5eb6;
case 0x4a5eb8:goto L4a5eb8;
case 0x4a5ec2:c.instructions+=2;goto B4a5ec2;
case 0x4a5ec8:c.instructions+=1;goto B4a5ec8;
case 0x4a5eca:goto L4a5eca;
case 0x4a5ed0:goto L4a5ed0;
case 0x4a5ed1:goto L4a5ed1;
case 0x4a5ed2:c.instructions+=1;goto B4a5ed2;
case 0x4a5ee0:goto L4a5ee0;
case 0x4a5ee5:c.instructions+=7;goto B4a5ee5;
case 0x4a5ee6:c.instructions+=6;goto B4a5ee6;
case 0x4a5eea:c.instructions+=5;goto B4a5eea;
case 0x4a5ef0:c.instructions+=4;goto B4a5ef0;
case 0x4a5ef2:c.instructions+=3;goto B4a5ef2;
case 0x4a5ef3:c.instructions+=2;goto B4a5ef3;
case 0x4a5ef5:c.instructions+=1;goto B4a5ef5;
case 0x4a5ef7:goto L4a5ef7;
case 0x4a5efc:c.instructions+=1;goto B4a5efc;
case 0x4a5f01:goto L4a5f01;
case 0x4a5f02:c.instructions+=2;goto B4a5f02;
case 0x4a5f03:c.instructions+=1;goto B4a5f03;
case 0x4a5f08:goto L4a5f08;
case 0x4a5f0b:c.instructions+=5;goto B4a5f0b;
case 0x4a5f0e:c.instructions+=4;goto B4a5f0e;
case 0x4a5f0f:c.instructions+=3;goto B4a5f0f;
case 0x4a5f14:c.instructions+=2;goto B4a5f14;
case 0x4a5f15:c.instructions+=1;goto B4a5f15;
case 0x4a5f1a:goto L4a5f1a;
case 0x4a5f1d:c.instructions+=2;goto B4a5f1d;
case 0x4a5f1e:c.instructions+=1;goto B4a5f1e;
case 0x4a5f23:goto L4a5f23;
case 0x4a5f26:goto L4a5f26;
case 0x4a5f27:c.instructions+=2;goto B4a5f27;
case 0x4a5f28:c.instructions+=1;goto B4a5f28;
case 0x4a5f30:goto L4a5f30;
case 0x4a5f34:c.instructions+=5;goto B4a5f34;
case 0x4a5f37:c.instructions+=4;goto B4a5f37;
case 0x4a5f3a:c.instructions+=3;goto B4a5f3a;
case 0x4a5f3b:c.instructions+=2;goto B4a5f3b;
case 0x4a5f3d:c.instructions+=1;goto B4a5f3d;
case 0x4a5f43:goto L4a5f43;
case 0x4a5f47:c.instructions+=10;goto B4a5f47;
case 0x4a5f49:c.instructions+=9;goto B4a5f49;
case 0x4a5f4e:c.instructions+=8;goto B4a5f4e;
case 0x4a5f54:c.instructions+=7;goto B4a5f54;
case 0x4a5f56:c.instructions+=6;goto B4a5f56;
case 0x4a5f57:c.instructions+=5;goto B4a5f57;
case 0x4a5f5c:c.instructions+=4;goto B4a5f5c;
case 0x4a5f60:c.instructions+=3;goto B4a5f60;
case 0x4a5f62:c.instructions+=2;goto B4a5f62;
case 0x4a5f63:c.instructions+=1;goto B4a5f63;
case 0x4a5f68:goto L4a5f68;
case 0x4a5f6c:c.instructions+=2;goto B4a5f6c;
case 0x4a5f6d:c.instructions+=1;goto B4a5f6d;
case 0x4a5f72:goto L4a5f72;
case 0x4a5f75:c.instructions+=5;goto B4a5f75;
case 0x4a5f78:c.instructions+=4;goto B4a5f78;
case 0x4a5f79:c.instructions+=3;goto B4a5f79;
case 0x4a5f7e:c.instructions+=2;goto B4a5f7e;
case 0x4a5f7f:c.instructions+=1;goto B4a5f7f;
case 0x4a5f84:goto L4a5f84;
case 0x4a5f87:c.instructions+=2;goto B4a5f87;
case 0x4a5f88:c.instructions+=1;goto B4a5f88;
case 0x4a5f8d:goto L4a5f8d;
case 0x4a5f90:c.instructions+=5;goto B4a5f90;
case 0x4a5f92:c.instructions+=4;goto B4a5f92;
case 0x4a5f97:c.instructions+=3;goto B4a5f97;
case 0x4a5f9c:c.instructions+=2;goto B4a5f9c;
case 0x4a5f9d:c.instructions+=1;goto B4a5f9d;
case 0x4a5fa2:goto L4a5fa2;
case 0x4a5fa5:c.instructions+=3;goto B4a5fa5;
case 0x4a5faa:c.instructions+=2;goto B4a5faa;
case 0x4a5fab:c.instructions+=1;goto B4a5fab;
case 0x4a5fb0:goto L4a5fb0;
case 0x4a5fb1:c.instructions+=1;goto B4a5fb1;
case 0x4a5fb6:goto L4a5fb6;
case 0x4a5fb9:c.instructions+=3;goto B4a5fb9;
case 0x4a5fbe:c.instructions+=2;goto B4a5fbe;
case 0x4a5fbf:c.instructions+=1;goto B4a5fbf;
case 0x4a5fc4:goto L4a5fc4;
case 0x4a5fc5:c.instructions+=1;goto B4a5fc5;
case 0x4a5fca:goto L4a5fca;
case 0x4a5fcd:c.instructions+=3;goto B4a5fcd;
case 0x4a5fce:c.instructions+=2;goto B4a5fce;
case 0x4a5fd1:c.instructions+=1;goto B4a5fd1;
case 0x4a5fd4:goto L4a5fd4;
case 0x4a5fd6:c.instructions+=1;goto B4a5fd6;
case 0x4a5fd8:goto L4a5fd8;
case 0x4a5fdb:c.instructions+=1;goto B4a5fdb;
case 0x4a5fdd:goto L4a5fdd;
case 0x4a5fe0:c.instructions+=3;goto B4a5fe0;
case 0x4a5fe5:c.instructions+=2;goto B4a5fe5;
case 0x4a5fe6:c.instructions+=1;goto B4a5fe6;
case 0x4a5feb:goto L4a5feb;
case 0x4a5fec:c.instructions+=1;goto B4a5fec;
case 0x4a5ff1:goto L4a5ff1;
case 0x4a5ff4:c.instructions+=3;goto B4a5ff4;
case 0x4a5ff9:c.instructions+=2;goto B4a5ff9;
case 0x4a5ffa:c.instructions+=1;goto B4a5ffa;
case 0x4a5fff:goto L4a5fff;
default:missing_instruction(c.pc);}
B4a5000:L4a5000:{c.instructions+=5;NFSU2_TR(0x4a5000);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4a5003:{NFSU2_TR(0x4a5003);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4a5006:{NFSU2_TR(0x4a5006);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5008:{NFSU2_TR(0x4a5008);
u8 U[4];
w4(U+0,u32(0x7905f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a500d:{NFSU2_TR(0x4a500d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a5012ull));
TAIL_STATIC(0x43db50u,43d);
}
B4a5012:L4a5012:{c.instructions+=4;NFSU2_TR(0x4a5012);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a5015:{NFSU2_TR(0x4a5015);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5016:{NFSU2_TR(0x4a5016);
u8 U[4];
w4(U+0,u32(0x7905ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a501b:{NFSU2_TR(0x4a501b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a5020ull));
TAIL_STATIC(0x43db50u,43d);
}
B4a5020:L4a5020:{c.instructions+=4;NFSU2_TR(0x4a5020);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a5023:{NFSU2_TR(0x4a5023);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5024:{NFSU2_TR(0x4a5024);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5025:{NFSU2_TR(0x4a5025);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a502aull));
TAIL_STATIC(0x537c60u,537);
}
B4a502a:L4a502a:{c.instructions+=4;NFSU2_TR(0x4a502a);
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
B4a502d:{NFSU2_TR(0x4a502d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a502e:{NFSU2_TR(0x4a502e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a502f:{NFSU2_TR(0x4a502f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a5030:L4a5030:{c.instructions+=4;NFSU2_TR(0x4a5030);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a5037:{NFSU2_TR(0x4a5037);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4a503a:{NFSU2_TR(0x4a503a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4a503c:{NFSU2_TR(0x4a503c);
if(r1(R+518)){{goto L4a5047;}}
}
B4a503e:L4a503e:{c.instructions+=3;NFSU2_TR(0x4a503e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5040:{NFSU2_TR(0x4a5040);
u8 U[4];
w4(U+0,u32(0x7905bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5045:{NFSU2_TR(0x4a5045);
{goto L4a5068;}
}
B4a5047:L4a5047:{c.instructions+=4;NFSU2_TR(0x4a5047);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a504a:{NFSU2_TR(0x4a504a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a504b:{NFSU2_TR(0x4a504b);
u8 U[4];
w4(U+0,u32(0x7905ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5050:{NFSU2_TR(0x4a5050);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a5055ull));
TAIL_STATIC(0x43db50u,43d);
}
B4a5055:L4a5055:{c.instructions+=3;NFSU2_TR(0x4a5055);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a5058:{NFSU2_TR(0x4a5058);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5059:{NFSU2_TR(0x4a5059);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a505eull));
TAIL_STATIC(0x55dda0u,55d);
}
B4a505e:L4a505e:{c.instructions+=3;NFSU2_TR(0x4a505e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a5061:{NFSU2_TR(0x4a5061);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5063:{NFSU2_TR(0x4a5063);
u8 U[4];
w4(U+0,u32(0x78f614ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5068:L4a5068:{c.instructions+=2;NFSU2_TR(0x4a5068);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4a506b:{NFSU2_TR(0x4a506b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a5070ull));
TAIL_STATIC(0x43db50u,43d);
}
B4a5070:L4a5070:{c.instructions+=4;NFSU2_TR(0x4a5070);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a5073:{NFSU2_TR(0x4a5073);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5074:{NFSU2_TR(0x4a5074);
u8 U[4];
w4(U+0,u32(0x7905ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5079:{NFSU2_TR(0x4a5079);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a507eull));
TAIL_STATIC(0x43db50u,43d);
}
B4a507e:L4a507e:{c.instructions+=4;NFSU2_TR(0x4a507e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a5081:{NFSU2_TR(0x4a5081);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5082:{NFSU2_TR(0x4a5082);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5083:{NFSU2_TR(0x4a5083);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a5088ull));
TAIL_STATIC(0x537c60u,537);
}
B4a5088:L4a5088:{c.instructions+=3;NFSU2_TR(0x4a5088);
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
B4a508b:{NFSU2_TR(0x4a508b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a508c:{NFSU2_TR(0x4a508c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a5090:L4a5090:{c.instructions+=6;NFSU2_TR(0x4a5090);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4a5093:{NFSU2_TR(0x4a5093);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4a5095:{NFSU2_TR(0x4a5095);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5096:{NFSU2_TR(0x4a5096);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4a5099:{NFSU2_TR(0x4a5099);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a509b:{NFSU2_TR(0x4a509b);
if(r1(R+518)){{goto L4a50a4;}}
}
B4a509d:L4a509d:{c.instructions+=2;NFSU2_TR(0x4a509d);
u8 U[4];
w4(U+0,u32(0x7905bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a50a2:{NFSU2_TR(0x4a50a2);
{goto L4a50a9;}
}
B4a50a4:L4a50a4:{c.instructions+=1;NFSU2_TR(0x4a50a4);
u8 U[4];
w4(U+0,u32(0x7905a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a50a9:L4a50a9:{c.instructions+=1;NFSU2_TR(0x4a50a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a50aeull));
TAIL_STATIC(0x43db50u,43d);
}
B4a50ae:L4a50ae:{c.instructions+=4;NFSU2_TR(0x4a50ae);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a50b1:{NFSU2_TR(0x4a50b1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a50b2:{NFSU2_TR(0x4a50b2);
u8 U[4];
w4(U+0,u32(0x790604ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a50b7:{NFSU2_TR(0x4a50b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a50bcull));
TAIL_STATIC(0x43db50u,43d);
}
B4a50bc:L4a50bc:{c.instructions+=4;NFSU2_TR(0x4a50bc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a50bf:{NFSU2_TR(0x4a50bf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a50c0:{NFSU2_TR(0x4a50c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a50c1:{NFSU2_TR(0x4a50c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a50c6ull));
TAIL_STATIC(0x537c60u,537);
}
B4a50c6:L4a50c6:{c.instructions+=4;NFSU2_TR(0x4a50c6);
__builtin_memmove((R+4),gp(0x8900b4),4);
}
B4a50cc:{NFSU2_TR(0x4a50cc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4a50cf:{NFSU2_TR(0x4a50cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a50d0:{NFSU2_TR(0x4a50d0);
TAIL_STATIC(0x5fafd0u,5fa);
}
B4a50e0:L4a50e0:{c.instructions+=5;NFSU2_TR(0x4a50e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a50e1:{NFSU2_TR(0x4a50e1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a50e2:{NFSU2_TR(0x4a50e2);
__builtin_memmove((R+28),(R+4),4);
}
B4a50e4:{NFSU2_TR(0x4a50e4);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B4a50ea:{NFSU2_TR(0x4a50ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a50efull));
TAIL_STATIC(0x430560u,430);
}
B4a50ef:L4a50ef:{c.instructions+=2;NFSU2_TR(0x4a50ef);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a50f1:{NFSU2_TR(0x4a50f1);
if(r1(R+518)){{goto L4a5149;}}
}
B4a50f3:L4a50f3:{c.instructions+=3;NFSU2_TR(0x4a50f3);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B4a50f9:{NFSU2_TR(0x4a50f9);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B4a50fc:{NFSU2_TR(0x4a50fc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a5132;}}
}
B4a50fe:L4a50fe:{c.instructions+=5;NFSU2_TR(0x4a50fe);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5100:{NFSU2_TR(0x4a5100);
u8 U[4];
w4(U+0,u32(0x78fc44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5105:{NFSU2_TR(0x4a5105);
u8 U[4];
w4(U+0,u32(0xa9723345ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a510a:{NFSU2_TR(0x4a510a);
u8 U[4];
w4(U+0,u32(0x79056cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a510f:{NFSU2_TR(0x4a510f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a5114ull));
TAIL_STATIC(0x537c00u,537);
}
B4a5114:L4a5114:{c.instructions+=4;NFSU2_TR(0x4a5114);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B4a511a:{NFSU2_TR(0x4a511a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4a511d:{NFSU2_TR(0x4a511d);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a511f:{NFSU2_TR(0x4a511f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a5124ull));
TAIL_STATIC(0x5f43d0u,5f4);
}
B4a5124:L4a5124:{c.instructions+=3;NFSU2_TR(0x4a5124);
__builtin_memmove((R+0),gp(0x8650b8),4);
}
B4a5129:{NFSU2_TR(0x4a5129);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a5130:{NFSU2_TR(0x4a5130);
{goto L4a517c;}
}
B4a5132:L4a5132:{c.instructions+=3;NFSU2_TR(0x4a5132);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5134:{NFSU2_TR(0x4a5134);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5136:{NFSU2_TR(0x4a5136);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a513bull));
TAIL_STATIC(0x5f41e0u,5f4);
}
B4a513b:L4a513b:{c.instructions+=3;NFSU2_TR(0x4a513b);
__builtin_memmove((R+0),gp(0x8650b8),4);
}
B4a5140:{NFSU2_TR(0x4a5140);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a5147:{NFSU2_TR(0x4a5147);
{goto L4a517c;}
}
B4a5149:L4a5149:{c.instructions+=5;NFSU2_TR(0x4a5149);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a514b:{NFSU2_TR(0x4a514b);
u8 U[4];
w4(U+0,u32(0x78fc44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5150:{NFSU2_TR(0x4a5150);
u8 U[4];
w4(U+0,u32(0xa9723345ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5155:{NFSU2_TR(0x4a5155);
u8 U[4];
w4(U+0,u32(0x79056cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a515a:{NFSU2_TR(0x4a515a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a515full));
TAIL_STATIC(0x537c00u,537);
}
B4a515f:L4a515f:{c.instructions+=4;NFSU2_TR(0x4a515f);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B4a5165:{NFSU2_TR(0x4a5165);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4a5168:{NFSU2_TR(0x4a5168);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a516a:{NFSU2_TR(0x4a516a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a516full));
TAIL_STATIC(0x5f43d0u,5f4);
}
B4a516f:L4a516f:{c.instructions+=2;NFSU2_TR(0x4a516f);
__builtin_memmove((R+4),gp(0x8650b8),4);
}
B4a5175:{NFSU2_TR(0x4a5175);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a517c:L4a517c:{c.instructions+=6;NFSU2_TR(0x4a517c);
__builtin_memmove((R+8),gp(0x8650b8),4);
}
B4a5182:{NFSU2_TR(0x4a5182);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5184:{NFSU2_TR(0x4a5184);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a518b:{NFSU2_TR(0x4a518b);
__builtin_memmove((R+4),gp(0x8650b8),4);
}
B4a5191:{NFSU2_TR(0x4a5191);
u8 U[4];
w4(U+0,u32(0x790618ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5196:{NFSU2_TR(0x4a5196);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a519bull));
TAIL_STATIC(0x578fd0u,578);
}
B4a519b:L4a519b:{c.instructions+=2;NFSU2_TR(0x4a519b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a519d:{NFSU2_TR(0x4a519d);
if(r1(R+518)){{goto L4a51ab;}}
}
B4a519f:L4a519f:{c.instructions+=3;NFSU2_TR(0x4a519f);
__builtin_memmove((R+4),gp(0x8650b8),4);
}
B4a51a5:{NFSU2_TR(0x4a51a5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a51a6:{NFSU2_TR(0x4a51a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a51abull));
TAIL_STATIC(0x579050u,579);
}
B4a51ab:L4a51ab:{c.instructions+=4;NFSU2_TR(0x4a51ab);
__builtin_memmove((R+0),gp(0x8900bc),4);
}
B4a51b0:{NFSU2_TR(0x4a51b0);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4a51b2:{NFSU2_TR(0x4a51b2);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a51b4:{NFSU2_TR(0x4a51b4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4a51d6;}}
}
B4a51b6:L4a51b6:{c.instructions+=1;NFSU2_TR(0x4a51b6);
{goto L4a51c0;}
}
B4a51c0:L4a51c0:{c.instructions+=2;NFSU2_TR(0x4a51c0);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8900b4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B4a51c7:{NFSU2_TR(0x4a51c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a51ccull));
TAIL_STATIC(0x5ffdd0u,5ff);
}
B4a51cc:L4a51cc:{c.instructions+=4;NFSU2_TR(0x4a51cc);
__builtin_memmove((R+0),gp(0x8900bc),4);
}
B4a51d1:{NFSU2_TR(0x4a51d1);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B4a51d2:{NFSU2_TR(0x4a51d2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4a51d4:{NFSU2_TR(0x4a51d4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a51c0u);}goto L4a51c0;}}
}
B4a51d6:L4a51d6:{c.instructions+=4;NFSU2_TR(0x4a51d6);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B4a51dc:{NFSU2_TR(0x4a51dc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a51de:{NFSU2_TR(0x4a51de);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a51e0:{NFSU2_TR(0x4a51e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a51e5ull));
TAIL_STATIC(0x4810f0u,481);
}
B4a51e5:L4a51e5:{c.instructions+=6;NFSU2_TR(0x4a51e5);
__builtin_memmove((R+0),gp(0x8363e4),4);
}
B4a51ea:{NFSU2_TR(0x4a51ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a51ed:{NFSU2_TR(0x4a51ed);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a51ef:{NFSU2_TR(0x4a51ef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a51f0:{NFSU2_TR(0x4a51f0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a51f1:{NFSU2_TR(0x4a51f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a51f6ull));
TAIL_STATIC(0x537980u,537);
}
B4a51f6:L4a51f6:{c.instructions+=4;NFSU2_TR(0x4a51f6);
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
B4a51f9:{NFSU2_TR(0x4a51f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a51fa:{NFSU2_TR(0x4a51fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a51fb:{NFSU2_TR(0x4a51fb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a5200:L4a5200:{c.instructions+=6;NFSU2_TR(0x4a5200);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5201:{NFSU2_TR(0x4a5201);
__builtin_memmove((R+24),(R+4),4);
}
B4a5203:{NFSU2_TR(0x4a5203);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4a5206:{NFSU2_TR(0x4a5206);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4a5208:{NFSU2_TR(0x4a5208);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a520a:{NFSU2_TR(0x4a520a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a5228;}}
}
B4a520c:L4a520c:{c.instructions+=5;NFSU2_TR(0x4a520c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a520f:{NFSU2_TR(0x4a520f);
u8 U[4];
w4(U+0,u32(0x79053cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5214:{NFSU2_TR(0x4a5214);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5219:{NFSU2_TR(0x4a5219);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a521a:{NFSU2_TR(0x4a521a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a521full));
TAIL_STATIC(0x537c00u,537);
}
B4a521f:L4a521f:{c.instructions+=4;NFSU2_TR(0x4a521f);
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
B4a5222:{NFSU2_TR(0x4a5222);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4a5226:{NFSU2_TR(0x4a5226);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a5227:{NFSU2_TR(0x4a5227);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a5228:L4a5228:{c.instructions+=5;NFSU2_TR(0x4a5228);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a522b:{NFSU2_TR(0x4a522b);
u8 U[4];
w4(U+0,u32(0x78f614ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5230:{NFSU2_TR(0x4a5230);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5235:{NFSU2_TR(0x4a5235);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5236:{NFSU2_TR(0x4a5236);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a523bull));
TAIL_STATIC(0x537c00u,537);
}
B4a523b:L4a523b:{c.instructions+=4;NFSU2_TR(0x4a523b);
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
B4a523e:{NFSU2_TR(0x4a523e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4a5242:{NFSU2_TR(0x4a5242);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a5243:{NFSU2_TR(0x4a5243);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a5250:L4a5250:{c.instructions+=16;NFSU2_TR(0x4a5250);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5251:{NFSU2_TR(0x4a5251);
__builtin_memmove((R+20),(R+16),4);
}
B4a5253:{NFSU2_TR(0x4a5253);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5255:{NFSU2_TR(0x4a5255);
u8 U[4];
w4(U+0,u32(0x776418ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a525a:{NFSU2_TR(0x4a525a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a5260:{NFSU2_TR(0x4a5260);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5261:{NFSU2_TR(0x4a5261);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a5268:{NFSU2_TR(0x4a5268);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5269:{NFSU2_TR(0x4a5269);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a526a:{NFSU2_TR(0x4a526a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a526b:{NFSU2_TR(0x4a526b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a526c:{NFSU2_TR(0x4a526c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4a526f:{NFSU2_TR(0x4a526f);
__builtin_memmove((R+24),(R+4),4);
}
B4a5271:{NFSU2_TR(0x4a5271);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5272:{NFSU2_TR(0x4a5272);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a5275:{NFSU2_TR(0x4a5275);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a527aull));
TAIL_STATIC(0x551de0u,551);
}
B4a527a:L4a527a:{c.instructions+=6;NFSU2_TR(0x4a527a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4a527d:{NFSU2_TR(0x4a527d);
u8 U[4];
w4(U+0,u32(0x790624ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4a5283:{NFSU2_TR(0x4a5283);
__builtin_memmove((R+0),gp(0x83a9d8),4);
}
B4a5288:{NFSU2_TR(0x4a5288);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5289:{NFSU2_TR(0x4a5289);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a5290:{NFSU2_TR(0x4a5290);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a5295ull));
TAIL_STATIC(0x50d2d0u,50d);
}
B4a5295:L4a5295:{c.instructions+=3;NFSU2_TR(0x4a5295);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5296:{NFSU2_TR(0x4a5296);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5297:{NFSU2_TR(0x4a5297);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a529cull));
TAIL_STATIC(0x537950u,537);
}
B4a529c:L4a529c:{c.instructions+=4;NFSU2_TR(0x4a529c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a529f:{NFSU2_TR(0x4a529f);
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
B4a52a2:{NFSU2_TR(0x4a52a2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a52a4:{NFSU2_TR(0x4a52a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a52a9ull));
TAIL_STATIC(0x504820u,504);
}
B4a52a9:L4a52a9:{c.instructions+=4;NFSU2_TR(0x4a52a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a52ac:{NFSU2_TR(0x4a52ac);
u8 U[4];
w4(U+0,u32(0xb26b6d43ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a52b1:{NFSU2_TR(0x4a52b1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a52b2:{NFSU2_TR(0x4a52b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a52b7ull));
TAIL_STATIC(0x52cea0u,52c);
}
B4a52b7:L4a52b7:{c.instructions+=10;NFSU2_TR(0x4a52b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a52ba:{NFSU2_TR(0x4a52ba);
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
B4a52bd:{NFSU2_TR(0x4a52bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a52be:{NFSU2_TR(0x4a52be);
__builtin_memmove((R+0),(R+24),4);
}
B4a52c0:{NFSU2_TR(0x4a52c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a52c1:{NFSU2_TR(0x4a52c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4a52c2:{NFSU2_TR(0x4a52c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a52c9:{NFSU2_TR(0x4a52c9);
__builtin_memmove((R+16),(R+20),4);
}
B4a52cb:{NFSU2_TR(0x4a52cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4a52cc:{NFSU2_TR(0x4a52cc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a52d0:L4a52d0:{c.instructions+=3;NFSU2_TR(0x4a52d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a52d1:{NFSU2_TR(0x4a52d1);
__builtin_memmove((R+24),(R+4),4);
}
B4a52d3:{NFSU2_TR(0x4a52d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a52d8ull));
{goto L4a52f0;}
}
B4a52d8:L4a52d8:{c.instructions+=2;NFSU2_TR(0x4a52d8);
u8 U[9];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
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
B4a52dd:{NFSU2_TR(0x4a52dd);
if(r1(R+518)){{goto L4a52e8;}}
}
B4a52df:L4a52df:{c.instructions+=2;NFSU2_TR(0x4a52df);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a52e0:{NFSU2_TR(0x4a52e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a52e5ull));
TAIL_STATIC(0x575630u,575);
}
B4a52e5:L4a52e5:{c.instructions+=1;NFSU2_TR(0x4a52e5);
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
B4a52e8:L4a52e8:{c.instructions+=3;NFSU2_TR(0x4a52e8);
__builtin_memmove((R+0),(R+24),4);
}
B4a52ea:{NFSU2_TR(0x4a52ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a52eb:{NFSU2_TR(0x4a52eb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a52f0:L4a52f0:{c.instructions+=2;NFSU2_TR(0x4a52f0);
u8 U[4];
w4(U+0,u32(0x790624ull));
s4(u32(r4(R+4)),r4(U+0));
}
B4a52f6:{NFSU2_TR(0x4a52f6);
TAIL_STATIC(0x510d40u,510);
}
B4a5300:L4a5300:{c.instructions+=6;NFSU2_TR(0x4a5300);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xc28ull))));
}
B4a5306:{NFSU2_TR(0x4a5306);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5307:{NFSU2_TR(0x4a5307);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5308:{NFSU2_TR(0x4a5308);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5309:{NFSU2_TR(0x4a5309);
__builtin_memmove((R+24),(R+4),4);
}
B4a530b:{NFSU2_TR(0x4a530b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a5310ull));
TAIL_STATIC(0x50da50u,50d);
}
B4a5310:L4a5310:{c.instructions+=6;NFSU2_TR(0x4a5310);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a5313:{NFSU2_TR(0x4a5313);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4a5316:{NFSU2_TR(0x4a5316);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4a5319:{NFSU2_TR(0x4a5319);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a531b:{NFSU2_TR(0x4a531b);
u8 U[4];
w4(U+0,u32(0x78f614ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5320:{NFSU2_TR(0x4a5320);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a5325ull));
TAIL_STATIC(0x43db50u,43d);
}
B4a5325:L4a5325:{c.instructions+=5;NFSU2_TR(0x4a5325);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a5328:{NFSU2_TR(0x4a5328);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5329:{NFSU2_TR(0x4a5329);
u8 U[4];
w4(U+0,u32(0xb04669e3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a532e:{NFSU2_TR(0x4a532e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a532f:{NFSU2_TR(0x4a532f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a5334ull));
TAIL_STATIC(0x537c60u,537);
}
B4a5334:L4a5334:{c.instructions+=4;NFSU2_TR(0x4a5334);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a5337:{NFSU2_TR(0x4a5337);
u8 U[4];
w4(U+0,u32(0xb04669e3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a533c:{NFSU2_TR(0x4a533c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a533d:{NFSU2_TR(0x4a533d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a5342ull));
TAIL_STATIC(0x537a60u,537);
}
B4a5342:L4a5342:{c.instructions+=4;NFSU2_TR(0x4a5342);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4a5345:{NFSU2_TR(0x4a5345);
__builtin_memmove((R+4),(R+28),4);
}
B4a5347:{NFSU2_TR(0x4a5347);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x210ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a534d:{NFSU2_TR(0x4a534d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a5352ull));
TAIL_STATIC(0x500180u,500);
}
B4a5352:L4a5352:{c.instructions+=6;NFSU2_TR(0x4a5352);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5353:{NFSU2_TR(0x4a5353);
u8 U[4];
w4(U+0,u32(0x78f604ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5358:{NFSU2_TR(0x4a5358);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4a535c:{NFSU2_TR(0x4a535c);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a535e:{NFSU2_TR(0x4a535e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a535f:{NFSU2_TR(0x4a535f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a5364ull));
TAIL_STATIC(0x50c960u,50c);
}
B4a5364:L4a5364:{c.instructions+=3;NFSU2_TR(0x4a5364);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4a5368:{NFSU2_TR(0x4a5368);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5369:{NFSU2_TR(0x4a5369);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a536eull));
TAIL_STATIC(0x505450u,505);
}
B4a536e:L4a536e:{c.instructions+=5;NFSU2_TR(0x4a536e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5370:{NFSU2_TR(0x4a5370);
__builtin_memmove((R+12),(R+0),4);
}
B4a5372:{NFSU2_TR(0x4a5372);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5374:{NFSU2_TR(0x4a5374);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5375:{NFSU2_TR(0x4a5375);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a537aull));
TAIL_STATIC(0x4901d0u,490);
}
B4a537a:L4a537a:{c.instructions+=3;NFSU2_TR(0x4a537a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B4a537d:{NFSU2_TR(0x4a537d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a537f:{NFSU2_TR(0x4a537f);
if(r1(R+518)){{goto L4a5391;}}
}
B4a5381:L4a5381:{c.instructions+=4;NFSU2_TR(0x4a5381);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x210ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a5387:{NFSU2_TR(0x4a5387);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5388:{NFSU2_TR(0x4a5388);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5389:{NFSU2_TR(0x4a5389);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a538eull));
TAIL_STATIC(0x50c990u,50c);
}
B4a538e:L4a538e:{c.instructions+=1;NFSU2_TR(0x4a538e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a5391:L4a5391:{c.instructions+=4;NFSU2_TR(0x4a5391);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4a5394:{NFSU2_TR(0x4a5394);
__builtin_memmove((R+4),(R+28),4);
}
B4a5396:{NFSU2_TR(0x4a5396);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
w4(U+4,u32(0x42f00000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a53a0:{NFSU2_TR(0x4a53a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a53a5ull));
TAIL_STATIC(0x5129f0u,512);
}
B4a53a5:L4a53a5:{c.instructions+=2;NFSU2_TR(0x4a53a5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a53a6:{NFSU2_TR(0x4a53a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a53abull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4a53ab:L4a53ab:{c.instructions+=5;NFSU2_TR(0x4a53ab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a53ac:{NFSU2_TR(0x4a53ac);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a53b1:{NFSU2_TR(0x4a53b1);
u8 U[4];
w4(U+0,u32(0xf13f76b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a53b6:{NFSU2_TR(0x4a53b6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a53b7:{NFSU2_TR(0x4a53b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a53bcull));
TAIL_STATIC(0x537b80u,537);
}
B4a53bc:L4a53bc:{c.instructions+=2;NFSU2_TR(0x4a53bc);
u8 U[4];
w4(U+0,u32(0x604ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a53c1:{NFSU2_TR(0x4a53c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a53c6ull));
TAIL_STATIC(0x575620u,575);
}
B4a53c6:L4a53c6:{c.instructions+=4;NFSU2_TR(0x4a53c6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4a53c9:{NFSU2_TR(0x4a53c9);
__builtin_memmove((R+4),(R+28),4);
}
B4a53cb:{NFSU2_TR(0x4a53cb);
__builtin_memmove((R+12),(R+0),4);
}
B4a53cd:{NFSU2_TR(0x4a53cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a53d2ull));
TAIL_STATIC(0x500180u,500);
}
B4a53d2:L4a53d2:{c.instructions+=3;NFSU2_TR(0x4a53d2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a53d3:{NFSU2_TR(0x4a53d3);
u8 U[4];
w4(U+0,u32(0x78f5c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a53d8:{NFSU2_TR(0x4a53d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a53ddull));
TAIL_STATIC(0x50b990u,50b);
}
B4a53dd:L4a53dd:{c.instructions+=4;NFSU2_TR(0x4a53dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a53de:{NFSU2_TR(0x4a53de);
u8 U[4];
w4(U+0,u32(0x604ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a53e3:{NFSU2_TR(0x4a53e3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a53e4:{NFSU2_TR(0x4a53e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a53e9ull));
TAIL_STATIC(0x4ffa50u,4ff);
}
B4a53e9:L4a53e9:{c.instructions+=5;NFSU2_TR(0x4a53e9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a53ea:{NFSU2_TR(0x4a53ea);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4a53ee:{NFSU2_TR(0x4a53ee);
u8 U[4];
w4(U+0,u32(0x604ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a53f3:{NFSU2_TR(0x4a53f3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a53f4:{NFSU2_TR(0x4a53f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a53f9ull));
TAIL_STATIC(0x512530u,512);
}
B4a53f9:L4a53f9:{c.instructions+=2;NFSU2_TR(0x4a53f9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a53fa:{NFSU2_TR(0x4a53fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a53ffull));
TAIL_STATIC(0x575630u,575);
}
B4a53ff:L4a53ff:{c.instructions+=5;NFSU2_TR(0x4a53ff);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B4a5402:{NFSU2_TR(0x4a5402);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4a5406:{NFSU2_TR(0x4a5406);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5407:{NFSU2_TR(0x4a5407);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4a540d:{NFSU2_TR(0x4a540d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a5412ull));
TAIL_STATIC(0x5446f0u,544);
}
B4a5412:L4a5412:{c.instructions+=9;NFSU2_TR(0x4a5412);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a5418:{NFSU2_TR(0x4a5418);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x194ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a541e:{NFSU2_TR(0x4a541e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x190ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a5424:{NFSU2_TR(0x4a5424);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4a5425:{NFSU2_TR(0x4a5425);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5426:{NFSU2_TR(0x4a5426);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5427:{NFSU2_TR(0x4a5427);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5428:{NFSU2_TR(0x4a5428);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4a542e:{NFSU2_TR(0x4a542e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a5433ull));
TAIL_STATIC(0x538080u,538);
}
B4a5433:L4a5433:{c.instructions+=7;NFSU2_TR(0x4a5433);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B4a5437:{NFSU2_TR(0x4a5437);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a543a:{NFSU2_TR(0x4a543a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a543b:{NFSU2_TR(0x4a543b);
u8 U[4];
w4(U+0,u32(0x7845d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5440:{NFSU2_TR(0x4a5440);
u8 U[4];
w4(U+0,u32(0xf25b6bbaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5445:{NFSU2_TR(0x4a5445);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5446:{NFSU2_TR(0x4a5446);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a544bull));
TAIL_STATIC(0x537b80u,537);
}
B4a544b:L4a544b:{c.instructions+=6;NFSU2_TR(0x4a544b);
__builtin_memmove((R+8),gp(0x862838),4);
}
B4a5451:{NFSU2_TR(0x4a5451);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4a5454:{NFSU2_TR(0x4a5454);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4a5457:{NFSU2_TR(0x4a5457);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5458:{NFSU2_TR(0x4a5458);
w4(R+4,u32(0x85ad40ull));
}
B4a545d:{NFSU2_TR(0x4a545d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a5462ull));
TAIL_STATIC(0x500a40u,500);
}
B4a5462:L4a5462:{c.instructions+=5;NFSU2_TR(0x4a5462);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5463:{NFSU2_TR(0x4a5463);
u8 U[4];
w4(U+0,u32(0x7845d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5468:{NFSU2_TR(0x4a5468);
u8 U[4];
w4(U+0,u32(0x7d8e1791ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a546d:{NFSU2_TR(0x4a546d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a546e:{NFSU2_TR(0x4a546e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a5473ull));
TAIL_STATIC(0x537b80u,537);
}
B4a5473:L4a5473:{c.instructions+=7;NFSU2_TR(0x4a5473);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B4a5477:{NFSU2_TR(0x4a5477);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a547a:{NFSU2_TR(0x4a547a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a547b:{NFSU2_TR(0x4a547b);
u8 U[4];
w4(U+0,u32(0x7845d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5480:{NFSU2_TR(0x4a5480);
u8 U[4];
w4(U+0,u32(0x195d8d22ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5485:{NFSU2_TR(0x4a5485);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5486:{NFSU2_TR(0x4a5486);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a548bull));
TAIL_STATIC(0x537b80u,537);
}
B4a548b:L4a548b:{c.instructions+=4;NFSU2_TR(0x4a548b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4a548e:{NFSU2_TR(0x4a548e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B4a5491:{NFSU2_TR(0x4a5491);
__builtin_memmove((R+4),(R+28),4);
}
B4a5493:{NFSU2_TR(0x4a5493);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a5498ull));
TAIL_STATIC(0x500180u,500);
}
B4a5498:L4a5498:{c.instructions+=3;NFSU2_TR(0x4a5498);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5499:{NFSU2_TR(0x4a5499);
u8 U[4];
w4(U+0,u32(0x78f5f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a549e:{NFSU2_TR(0x4a549e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a54a3ull));
TAIL_STATIC(0x50b990u,50b);
}
B4a54a3:L4a54a3:{c.instructions+=5;NFSU2_TR(0x4a54a3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a54a6:{NFSU2_TR(0x4a54a6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a54a7:{NFSU2_TR(0x4a54a7);
u8 U[4];
w4(U+0,u32(0xf13cef3full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a54ac:{NFSU2_TR(0x4a54ac);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a54ad:{NFSU2_TR(0x4a54ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a54b2ull));
TAIL_STATIC(0x537a10u,537);
}
B4a54b2:L4a54b2:{c.instructions+=3;NFSU2_TR(0x4a54b2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a54b5:{NFSU2_TR(0x4a54b5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a54b6:{NFSU2_TR(0x4a54b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a54bbull));
TAIL_STATIC(0x50c900u,50c);
}
B4a54bb:L4a54bb:{c.instructions+=6;NFSU2_TR(0x4a54bb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a54be:{NFSU2_TR(0x4a54be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a54bf:{NFSU2_TR(0x4a54bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a54c0:{NFSU2_TR(0x4a54c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4a54c1:{NFSU2_TR(0x4a54c1);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0xc28ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0xc28ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xc28ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a54c7:{NFSU2_TR(0x4a54c7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a54d0:L4a54d0:{c.instructions+=5;NFSU2_TR(0x4a54d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a54d1:{NFSU2_TR(0x4a54d1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a54d2:{NFSU2_TR(0x4a54d2);
__builtin_memmove((R+28),(R+4),4);
}
B4a54d4:{NFSU2_TR(0x4a54d4);
w4(R+24,u32(0x7f45d8ull));
}
B4a54d9:{NFSU2_TR(0x4a54d9);
__builtin_memmove((R+16),(R+16),4);
}
B4a54e0:L4a54e0:{c.instructions+=3;NFSU2_TR(0x4a54e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a54e3:{NFSU2_TR(0x4a54e3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfffffffeull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a54e6:{NFSU2_TR(0x4a54e6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a54f5;}}
}
B4a54e8:L4a54e8:{c.instructions+=3;NFSU2_TR(0x4a54e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4a54ea:{NFSU2_TR(0x4a54ea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a54eb:{NFSU2_TR(0x4a54eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a54f0ull));
TAIL_STATIC(0x57d590u,57d);
}
B4a54f0:L4a54f0:{c.instructions+=2;NFSU2_TR(0x4a54f0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a54f3:{NFSU2_TR(0x4a54f3);
{goto L4a5501;}
}
B4a54f5:L4a54f5:{c.instructions+=4;NFSU2_TR(0x4a54f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4a54f7:{NFSU2_TR(0x4a54f7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a54f8:{NFSU2_TR(0x4a54f8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a54f9:{NFSU2_TR(0x4a54f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a54feull));
TAIL_STATIC(0x57c330u,57c);
}
B4a54fe:L4a54fe:{c.instructions+=1;NFSU2_TR(0x4a54fe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a5501:L4a5501:{c.instructions+=3;NFSU2_TR(0x4a5501);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B4a5504:{NFSU2_TR(0x4a5504);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x7f4604ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x7f4604ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x7f4604ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a550a:{NFSU2_TR(0x4a550a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a54e0u);}goto L4a54e0;}}
}
B4a550c:L4a550c:{c.instructions+=3;NFSU2_TR(0x4a550c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a550d:{NFSU2_TR(0x4a550d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a550e:{NFSU2_TR(0x4a550e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a5510:L4a5510:{c.instructions+=6;NFSU2_TR(0x4a5510);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a5514:{NFSU2_TR(0x4a5514);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a5516:{NFSU2_TR(0x4a5516);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a551a:{NFSU2_TR(0x4a551a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a551b:{NFSU2_TR(0x4a551b);
__builtin_memmove((R+24),(R+4),4);
}
B4a551d:{NFSU2_TR(0x4a551d);
if(r1(R+518)){{goto L4a5540;}}
}
B4a551f:L4a551f:{c.instructions+=3;NFSU2_TR(0x4a551f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a5523:{NFSU2_TR(0x4a5523);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a5525:{NFSU2_TR(0x4a5525);
if(r1(R+518)){{goto L4a5540;}}
}
B4a5527:L4a5527:{c.instructions+=2;NFSU2_TR(0x4a5527);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B4a552a:{NFSU2_TR(0x4a552a);
if(r1(R+518)){{goto L4a5539;}}
}
B4a552c:L4a552c:{c.instructions+=2;NFSU2_TR(0x4a552c);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x9bull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x9bull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x9bull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a5532:{NFSU2_TR(0x4a5532);
if(r1(R+518)){{goto L4a5539;}}
}
B4a5534:L4a5534:{c.instructions+=2;NFSU2_TR(0x4a5534);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x44ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x44ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x44ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a5537:{NFSU2_TR(0x4a5537);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a5540;}}
}
B4a5539:L4a5539:{c.instructions+=3;NFSU2_TR(0x4a5539);
w4(R+0,u32(0x7f5d00ull));
}
B4a553e:{NFSU2_TR(0x4a553e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a553f:{NFSU2_TR(0x4a553f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a5540:L4a5540:{c.instructions+=2;NFSU2_TR(0x4a5540);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x22ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x22ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4a5543:{NFSU2_TR(0x4a5543);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4a5551;}}
}
B4a5545:L4a5545:{c.instructions+=2;NFSU2_TR(0x4a5545);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2eull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2eull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a5548:{NFSU2_TR(0x4a5548);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L4a5551;}}
}
B4a554a:L4a554a:{c.instructions+=2;NFSU2_TR(0x4a554a);
w4(R+24,u32(0x22ull));
}
B4a554f:{NFSU2_TR(0x4a554f);
{goto L4a55a1;}
}
B4a5551:L4a5551:{c.instructions+=2;NFSU2_TR(0x4a5551);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x40ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4a5554:{NFSU2_TR(0x4a5554);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4a55a1;}}
}
B4a5556:L4a5556:{c.instructions+=2;NFSU2_TR(0x4a5556);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x43ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x43ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a5559:{NFSU2_TR(0x4a5559);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L4a55a1;}}
}
B4a555b:L4a555b:{c.instructions+=6;NFSU2_TR(0x4a555b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a555f:{NFSU2_TR(0x4a555f);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4a5562:{NFSU2_TR(0x4a5562);
__builtin_memmove((R+8),(R+4),1);
}
B4a5564:{NFSU2_TR(0x4a5564);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0x1full))));
}
B4a5567:{NFSU2_TR(0x4a5567);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x14ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4a556a:{NFSU2_TR(0x4a556a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a557d;}}
}
B4a556c:L4a556c:{c.instructions+=7;NFSU2_TR(0x4a556c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x7ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B4a556f:{NFSU2_TR(0x4a556f);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4a5571:{NFSU2_TR(0x4a5571);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B4a5573:{NFSU2_TR(0x4a5573);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x3cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B4a5576:{NFSU2_TR(0x4a5576);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x7f5d40ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x7f5d40ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x7f5d40ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a557b:{NFSU2_TR(0x4a557b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a557c:{NFSU2_TR(0x4a557c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a557d:L4a557d:{c.instructions+=2;NFSU2_TR(0x4a557d);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x16ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x16ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B4a5580:{NFSU2_TR(0x4a5580);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4a559c;}}
}
B4a5582:L4a5582:{c.instructions+=2;NFSU2_TR(0x4a5582);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x1bull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x1bull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4a5585:{NFSU2_TR(0x4a5585);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L4a559c;}}
}
B4a5587:L4a5587:{c.instructions+=8;NFSU2_TR(0x4a5587);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x7ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B4a558a:{NFSU2_TR(0x4a558a);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B4a558d:{NFSU2_TR(0x4a558d);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x15ull))));
}
B4a5590:{NFSU2_TR(0x4a5590);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B4a5592:{NFSU2_TR(0x4a5592);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x3cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B4a5595:{NFSU2_TR(0x4a5595);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x7f5d40ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x7f5d40ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x7f5d40ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a559a:{NFSU2_TR(0x4a559a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a559b:{NFSU2_TR(0x4a559b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a559c:L4a559c:{c.instructions+=1;NFSU2_TR(0x4a559c);
w4(R+24,u32(0x40ull));
}
B4a55a1:L4a55a1:{c.instructions+=4;NFSU2_TR(0x4a55a1);
__builtin_memmove((R+4),(R+0),4);
}
B4a55a3:{NFSU2_TR(0x4a55a3);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0xb7cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4a55a9:{NFSU2_TR(0x4a55a9);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4a55ab:{NFSU2_TR(0x4a55ab);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x7f4610ull))));
}
B4a55b1:L4a55b1:{c.instructions+=2;NFSU2_TR(0x4a55b1);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+24))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B4a55b3:{NFSU2_TR(0x4a55b3);
if(r1(R+518)){{goto L4a55c2;}}
}
B4a55b5:L4a55b5:{c.instructions+=4;NFSU2_TR(0x4a55b5);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B4a55b6:{NFSU2_TR(0x4a55b6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x3cull))));
}
B4a55b9:{NFSU2_TR(0x4a55b9);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x31ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x31ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4a55bc:{NFSU2_TR(0x4a55bc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a55b1u);}goto L4a55b1;}}
}
B4a55be:L4a55be:{c.instructions+=3;NFSU2_TR(0x4a55be);
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
B4a55c0:{NFSU2_TR(0x4a55c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a55c1:{NFSU2_TR(0x4a55c1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a55c2:L4a55c2:{c.instructions+=6;NFSU2_TR(0x4a55c2);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x31ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B4a55c5:{NFSU2_TR(0x4a55c5);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B4a55c7:{NFSU2_TR(0x4a55c7);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x3cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B4a55ca:{NFSU2_TR(0x4a55ca);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x7f4608ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x7f4608ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x7f4608ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a55cf:{NFSU2_TR(0x4a55cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a55d0:{NFSU2_TR(0x4a55d0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a55e0:L4a55e0:{c.instructions+=11;NFSU2_TR(0x4a55e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a55e4:{NFSU2_TR(0x4a55e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a55e8:{NFSU2_TR(0x4a55e8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a55e9:{NFSU2_TR(0x4a55e9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a55ea:{NFSU2_TR(0x4a55ea);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a55ee:{NFSU2_TR(0x4a55ee);
__builtin_memmove((R+24),(R+4),4);
}
B4a55f0:{NFSU2_TR(0x4a55f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a55f4:{NFSU2_TR(0x4a55f4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a55f5:{NFSU2_TR(0x4a55f5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a55f6:{NFSU2_TR(0x4a55f6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a55f7:{NFSU2_TR(0x4a55f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a55fcull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a5510u);}goto L4a5510;}
}
B4a55fc:L4a55fc:{c.instructions+=3;NFSU2_TR(0x4a55fc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4a55ff:{NFSU2_TR(0x4a55ff);
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
B4a5601:{NFSU2_TR(0x4a5601);
if(r1(R+518)){{goto L4a5652;}}
}
B4a5603:L4a5603:{c.instructions+=33;NFSU2_TR(0x4a5603);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a5606:{NFSU2_TR(0x4a5606);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a5609:{NFSU2_TR(0x4a5609);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a560c:{NFSU2_TR(0x4a560c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a560f:{NFSU2_TR(0x4a560f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a5612:{NFSU2_TR(0x4a5612);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a5615:{NFSU2_TR(0x4a5615);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a5618:{NFSU2_TR(0x4a5618);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4a561a:{NFSU2_TR(0x4a561a);
__builtin_memmove((R+8),gp(0x8363fc),1);
}
B4a5620:{NFSU2_TR(0x4a5620);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5621:{NFSU2_TR(0x4a5621);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a5625:{NFSU2_TR(0x4a5625);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5626:{NFSU2_TR(0x4a5626);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a5629:{NFSU2_TR(0x4a5629);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a562a:{NFSU2_TR(0x4a562a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a562d:{NFSU2_TR(0x4a562d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a562e:{NFSU2_TR(0x4a562e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a5631:{NFSU2_TR(0x4a5631);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5632:{NFSU2_TR(0x4a5632);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a5635:{NFSU2_TR(0x4a5635);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5636:{NFSU2_TR(0x4a5636);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a5639:{NFSU2_TR(0x4a5639);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a563a:{NFSU2_TR(0x4a563a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a563d:{NFSU2_TR(0x4a563d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a563e:{NFSU2_TR(0x4a563e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a5641:{NFSU2_TR(0x4a5641);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5642:{NFSU2_TR(0x4a5642);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a5645:{NFSU2_TR(0x4a5645);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a5648:{NFSU2_TR(0x4a5648);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5649:{NFSU2_TR(0x4a5649);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4a564b:{NFSU2_TR(0x4a564b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a564c:{NFSU2_TR(0x4a564c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a564d:{NFSU2_TR(0x4a564d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a5652ull));
TAIL_STATIC(0x4532b0u,453);
}
B4a5652:L4a5652:{c.instructions+=2;NFSU2_TR(0x4a5652);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a5653:{NFSU2_TR(0x4a5653);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a5660:L4a5660:{c.instructions+=9;NFSU2_TR(0x4a5660);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5661:{NFSU2_TR(0x4a5661);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5662:{NFSU2_TR(0x4a5662);
__builtin_memmove((R+24),(R+4),4);
}
B4a5664:{NFSU2_TR(0x4a5664);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a5667:{NFSU2_TR(0x4a5667);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B4a5669:{NFSU2_TR(0x4a5669);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4a566f:{NFSU2_TR(0x4a566f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4a5671:{NFSU2_TR(0x4a5671);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4a5674:{NFSU2_TR(0x4a5674);
if(r1(R+514)){{goto L4a5696;}}
}
B4a5676:L4a5676:{c.instructions+=5;NFSU2_TR(0x4a5676);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a5679:{NFSU2_TR(0x4a5679);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4a567f:{NFSU2_TR(0x4a567f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4a5681:{NFSU2_TR(0x4a5681);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4a5684:{NFSU2_TR(0x4a5684);
if(r1(R+514)){{goto L4a5696;}}
}
B4a5686:L4a5686:{c.instructions+=5;NFSU2_TR(0x4a5686);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a5689:{NFSU2_TR(0x4a5689);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4a568f:{NFSU2_TR(0x4a568f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4a5691:{NFSU2_TR(0x4a5691);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4a5694:{NFSU2_TR(0x4a5694);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4a5698;}}
}
B4a5696:L4a5696:{c.instructions+=1;NFSU2_TR(0x4a5696);
w1(R+12,u8(0x1ull));
}
B4a5698:L4a5698:{c.instructions+=5;NFSU2_TR(0x4a5698);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a569b:{NFSU2_TR(0x4a569b);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4a569e:{NFSU2_TR(0x4a569e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4a56a0:{NFSU2_TR(0x4a56a0);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4a56a3:{NFSU2_TR(0x4a56a3);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4a56b5;}}
}
B4a56a5:L4a56a5:{c.instructions+=6;NFSU2_TR(0x4a56a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a56a8:{NFSU2_TR(0x4a56a8);
__builtin_memmove((R+4),(R+0),4);
}
B4a56aa:{NFSU2_TR(0x4a56aa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a56ab:{NFSU2_TR(0x4a56ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4a56ad:{NFSU2_TR(0x4a56ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a56b0:{NFSU2_TR(0x4a56b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a56b5ull));
TAIL_STATIC(0x4454a0u,445);
}
B4a56b5:L4a56b5:{c.instructions+=5;NFSU2_TR(0x4a56b5);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a56b8:{NFSU2_TR(0x4a56b8);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4a56bb:{NFSU2_TR(0x4a56bb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4a56bd:{NFSU2_TR(0x4a56bd);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4a56c0:{NFSU2_TR(0x4a56c0);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4a56d2;}}
}
B4a56c2:L4a56c2:{c.instructions+=6;NFSU2_TR(0x4a56c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a56c5:{NFSU2_TR(0x4a56c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4a56c7:{NFSU2_TR(0x4a56c7);
__builtin_memmove((R+0),(R+8),4);
}
B4a56c9:{NFSU2_TR(0x4a56c9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a56ca:{NFSU2_TR(0x4a56ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a56cd:{NFSU2_TR(0x4a56cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a56d2ull));
TAIL_STATIC(0x4454e0u,445);
}
B4a56d2:L4a56d2:{c.instructions+=5;NFSU2_TR(0x4a56d2);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a56d5:{NFSU2_TR(0x4a56d5);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4a56d8:{NFSU2_TR(0x4a56d8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4a56da:{NFSU2_TR(0x4a56da);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4a56dd:{NFSU2_TR(0x4a56dd);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4a56ef;}}
}
B4a56df:L4a56df:{c.instructions+=6;NFSU2_TR(0x4a56df);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a56e2:{NFSU2_TR(0x4a56e2);
__builtin_memmove((R+8),(R+4),4);
}
B4a56e4:{NFSU2_TR(0x4a56e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a56e7:{NFSU2_TR(0x4a56e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4a56e9:{NFSU2_TR(0x4a56e9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a56ea:{NFSU2_TR(0x4a56ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a56efull));
TAIL_STATIC(0x4454c0u,445);
}
B4a56ef:L4a56ef:{c.instructions+=4;NFSU2_TR(0x4a56ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4a56f1:{NFSU2_TR(0x4a56f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a56f4:{NFSU2_TR(0x4a56f4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a56f6:{NFSU2_TR(0x4a56f6);
if(r1(R+518)){{goto L4a5703;}}
}
B4a56f8:L4a56f8:{c.instructions+=2;NFSU2_TR(0x4a56f8);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4a56fa:{NFSU2_TR(0x4a56fa);
if(r1(R+518)){{goto L4a5703;}}
}
B4a56fc:L4a56fc:{c.instructions+=2;NFSU2_TR(0x4a56fc);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a56fe:{NFSU2_TR(0x4a56fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a5703ull));
TAIL_STATIC(0x453320u,453);
}
B4a5703:L4a5703:{c.instructions+=3;NFSU2_TR(0x4a5703);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a5706:{NFSU2_TR(0x4a5706);
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
B4a5709:{NFSU2_TR(0x4a5709);
if(r1(R+518)){{goto L4a5739;}}
}
B4a570b:L4a570b:{c.instructions+=2;NFSU2_TR(0x4a570b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a570c:{NFSU2_TR(0x4a570c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a5711ull));
TAIL_STATIC(0x571a60u,571);
}
B4a5711:L4a5711:{c.instructions+=4;NFSU2_TR(0x4a5711);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a5714:{NFSU2_TR(0x4a5714);
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
B4a5716:{NFSU2_TR(0x4a5716);
__builtin_memmove((R+0),(R+12),1);
}
B4a5718:{NFSU2_TR(0x4a5718);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a573b;}}
}
B4a571a:L4a571a:{c.instructions+=7;NFSU2_TR(0x4a571a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a5721:{NFSU2_TR(0x4a5721);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a5728:{NFSU2_TR(0x4a5728);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a572f:{NFSU2_TR(0x4a572f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a5736:{NFSU2_TR(0x4a5736);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a5737:{NFSU2_TR(0x4a5737);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4a5738:{NFSU2_TR(0x4a5738);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a5739:L4a5739:{c.instructions+=1;NFSU2_TR(0x4a5739);
__builtin_memmove((R+0),(R+12),1);
}
B4a573b:L4a573b:{c.instructions+=3;NFSU2_TR(0x4a573b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a573c:{NFSU2_TR(0x4a573c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4a573d:{NFSU2_TR(0x4a573d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a5740:L4a5740:{c.instructions+=5;NFSU2_TR(0x4a5740);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5741:{NFSU2_TR(0x4a5741);
__builtin_memmove((R+24),(R+4),4);
}
B4a5743:{NFSU2_TR(0x4a5743);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a5746:{NFSU2_TR(0x4a5746);
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
B4a5748:{NFSU2_TR(0x4a5748);
if(r1(R+518)){{goto L4a5896;}}
}
B4a574e:L4a574e:{c.instructions+=1;NFSU2_TR(0x4a574e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a5753ull));
TAIL_STATIC(0x510c30u,510);
}
B4a5753:L4a5753:{c.instructions+=2;NFSU2_TR(0x4a5753);
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
B4a5755:{NFSU2_TR(0x4a5755);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a5896;}}
}
B4a575b:L4a575b:{c.instructions+=6;NFSU2_TR(0x4a575b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a575f:{NFSU2_TR(0x4a575f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a5762:{NFSU2_TR(0x4a5762);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a5766:{NFSU2_TR(0x4a5766);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xffffffbeull))));
}
B4a5769:{NFSU2_TR(0x4a5769);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x8ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x8ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a576c:{NFSU2_TR(0x4a576c);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4a5896;}}
}
B4a5772:L4a5772:{c.instructions+=1;NFSU2_TR(0x4a5772);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4a589cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4a5779:L4a5779:{c.instructions+=8;NFSU2_TR(0x4a5779);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B4a577e:{NFSU2_TR(0x4a577e);
u8 U[6];
w1(R+512,u8((r4(R+4))!=(u32(0x0ull))));
w1(R+523,sborrow<u32>(u32(0x0ull),r4(R+4)));
w4(R+4,u32(0-u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a5780:{NFSU2_TR(0x4a5780);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a5784:{NFSU2_TR(0x4a5784);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4a5788:{NFSU2_TR(0x4a5788);
{u32 ea_=u32(u32(7882056u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a578e:{NFSU2_TR(0x4a578e);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a5791:{NFSU2_TR(0x4a5791);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a5792:{NFSU2_TR(0x4a5792);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a5795:L4a5795:{c.instructions+=7;NFSU2_TR(0x4a5795);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B4a579a:{NFSU2_TR(0x4a579a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a579e:{NFSU2_TR(0x4a579e);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4a57a2:{NFSU2_TR(0x4a57a2);
{u32 ea_=u32(u32(7882056u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a57a8:{NFSU2_TR(0x4a57a8);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a57ab:{NFSU2_TR(0x4a57ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a57ac:{NFSU2_TR(0x4a57ac);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a57af:L4a57af:{c.instructions+=9;NFSU2_TR(0x4a57af);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B4a57b4:{NFSU2_TR(0x4a57b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a57b8:{NFSU2_TR(0x4a57b8);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4a57bc:{NFSU2_TR(0x4a57bc);
{u32 ea_=u32(u32(7882048u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4a57c2:{NFSU2_TR(0x4a57c2);
{u32 ea_=u32(u32(7895792u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a57c8:{NFSU2_TR(0x4a57c8);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B4a57ca:{NFSU2_TR(0x4a57ca);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a57cd:{NFSU2_TR(0x4a57cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a57ce:{NFSU2_TR(0x4a57ce);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a57d1:L4a57d1:{c.instructions+=7;NFSU2_TR(0x4a57d1);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B4a57d6:{NFSU2_TR(0x4a57d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a57da:{NFSU2_TR(0x4a57da);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4a57de:{NFSU2_TR(0x4a57de);
{u32 ea_=u32(u32(7882056u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a57e4:{NFSU2_TR(0x4a57e4);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a57e7:{NFSU2_TR(0x4a57e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a57e8:{NFSU2_TR(0x4a57e8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a57eb:L4a57eb:{c.instructions+=8;NFSU2_TR(0x4a57eb);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B4a57f0:{NFSU2_TR(0x4a57f0);
u8 U[6];
w1(R+512,u8((r4(R+8))!=(u32(0x0ull))));
w1(R+523,sborrow<u32>(u32(0x0ull),r4(R+8)));
w4(R+8,u32(0-u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a57f2:{NFSU2_TR(0x4a57f2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a57f6:{NFSU2_TR(0x4a57f6);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4a57fa:{NFSU2_TR(0x4a57fa);
{u32 ea_=u32(u32(7882056u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a5800:{NFSU2_TR(0x4a5800);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a5803:{NFSU2_TR(0x4a5803);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a5804:{NFSU2_TR(0x4a5804);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a5807:L4a5807:{c.instructions+=9;NFSU2_TR(0x4a5807);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B4a580c:{NFSU2_TR(0x4a580c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a5810:{NFSU2_TR(0x4a5810);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4a5814:{NFSU2_TR(0x4a5814);
{u32 ea_=u32(u32(7882048u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4a581a:{NFSU2_TR(0x4a581a);
{u32 ea_=u32(u32(7895792u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a5820:{NFSU2_TR(0x4a5820);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B4a5822:{NFSU2_TR(0x4a5822);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a5825:{NFSU2_TR(0x4a5825);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a5826:{NFSU2_TR(0x4a5826);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a5829:L4a5829:{c.instructions+=3;NFSU2_TR(0x4a5829);
__builtin_memmove((R+0),gp(0x8363f4),1);
}
B4a582e:{NFSU2_TR(0x4a582e);
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
B4a5830:{NFSU2_TR(0x4a5830);
if(r1(R+518)){{goto L4a5896;}}
}
B4a5832:L4a5832:{c.instructions+=8;NFSU2_TR(0x4a5832);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B4a5837:{NFSU2_TR(0x4a5837);
u8 U[6];
w1(R+512,u8((r4(R+4))!=(u32(0x0ull))));
w1(R+523,sborrow<u32>(u32(0x0ull),r4(R+4)));
w4(R+4,u32(0-u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a5839:{NFSU2_TR(0x4a5839);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a583d:{NFSU2_TR(0x4a583d);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4a5841:{NFSU2_TR(0x4a5841);
{u32 ea_=u32(u32(7882056u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a5847:{NFSU2_TR(0x4a5847);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a584a:{NFSU2_TR(0x4a584a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a584b:{NFSU2_TR(0x4a584b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a584e:L4a584e:{c.instructions+=3;NFSU2_TR(0x4a584e);
__builtin_memmove((R+0),gp(0x8363f4),1);
}
B4a5853:{NFSU2_TR(0x4a5853);
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
B4a5855:{NFSU2_TR(0x4a5855);
if(r1(R+518)){{goto L4a5896;}}
}
B4a5857:L4a5857:{c.instructions+=7;NFSU2_TR(0x4a5857);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B4a585c:{NFSU2_TR(0x4a585c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a5860:{NFSU2_TR(0x4a5860);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4a5864:{NFSU2_TR(0x4a5864);
{u32 ea_=u32(u32(7882056u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a586a:{NFSU2_TR(0x4a586a);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a586d:{NFSU2_TR(0x4a586d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a586e:{NFSU2_TR(0x4a586e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a5871:L4a5871:{c.instructions+=3;NFSU2_TR(0x4a5871);
__builtin_memmove((R+0),gp(0x8363f4),1);
}
B4a5876:{NFSU2_TR(0x4a5876);
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
B4a5878:{NFSU2_TR(0x4a5878);
if(r1(R+518)){{goto L4a5896;}}
}
B4a587a:L4a587a:{c.instructions+=6;NFSU2_TR(0x4a587a);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B4a587f:{NFSU2_TR(0x4a587f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a5883:{NFSU2_TR(0x4a5883);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4a5887:{NFSU2_TR(0x4a5887);
{u32 ea_=u32(u32(7882048u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4a588d:{NFSU2_TR(0x4a588d);
{u32 ea_=u32(u32(7895792u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a5893:{NFSU2_TR(0x4a5893);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a5896:L4a5896:{c.instructions+=2;NFSU2_TR(0x4a5896);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a5897:{NFSU2_TR(0x4a5897);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a58c0:L4a58c0:{c.instructions+=13;NFSU2_TR(0x4a58c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a58c4:{NFSU2_TR(0x4a58c4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a58c5:{NFSU2_TR(0x4a58c5);
__builtin_memmove((R+24),(R+4),4);
}
B4a58c7:{NFSU2_TR(0x4a58c7);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a58cb:{NFSU2_TR(0x4a58cb);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4a58cf:{NFSU2_TR(0x4a58cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a58d2:{NFSU2_TR(0x4a58d2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a58d3:{NFSU2_TR(0x4a58d3);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4a58d7:{NFSU2_TR(0x4a58d7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a58d8:{NFSU2_TR(0x4a58d8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a58d9:{NFSU2_TR(0x4a58d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a58dc:{NFSU2_TR(0x4a58dc);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+24)),r1(U+0));
}
B4a58df:{NFSU2_TR(0x4a58df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a58e4ull));
TAIL_STATIC(0x51d730u,51d);
}
B4a58e4:L4a58e4:{c.instructions+=9;NFSU2_TR(0x4a58e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a58e8:{NFSU2_TR(0x4a58e8);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4a58ec:{NFSU2_TR(0x4a58ec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a58ed:{NFSU2_TR(0x4a58ed);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4a58f1:{NFSU2_TR(0x4a58f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a58f4:{NFSU2_TR(0x4a58f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a58f7:{NFSU2_TR(0x4a58f7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a58f8:{NFSU2_TR(0x4a58f8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a58f9:{NFSU2_TR(0x4a58f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a58feull));
TAIL_STATIC(0x51d070u,51d);
}
B4a58fe:L4a58fe:{c.instructions+=6;NFSU2_TR(0x4a58fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a5902:{NFSU2_TR(0x4a5902);
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
B4a5905:{NFSU2_TR(0x4a5905);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a5908:{NFSU2_TR(0x4a5908);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a590f:{NFSU2_TR(0x4a590f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a5910:{NFSU2_TR(0x4a5910);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a5920:L4a5920:{c.instructions+=14;NFSU2_TR(0x4a5920);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B4a5923:{NFSU2_TR(0x4a5923);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a5927:{NFSU2_TR(0x4a5927);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5928:{NFSU2_TR(0x4a5928);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5929:{NFSU2_TR(0x4a5929);
__builtin_memmove((R+24),(R+4),4);
}
B4a592b:{NFSU2_TR(0x4a592b);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a592e:{NFSU2_TR(0x4a592e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4a5931:{NFSU2_TR(0x4a5931);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4a5935:{NFSU2_TR(0x4a5935);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5936:{NFSU2_TR(0x4a5936);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4a593a:{NFSU2_TR(0x4a593a);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a593e:{NFSU2_TR(0x4a593e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a593f:{NFSU2_TR(0x4a593f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5940:{NFSU2_TR(0x4a5940);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a5945ull));
TAIL_STATIC(0x51d730u,51d);
}
B4a5945:L4a5945:{c.instructions+=6;NFSU2_TR(0x4a5945);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a5949:{NFSU2_TR(0x4a5949);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a594d:{NFSU2_TR(0x4a594d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a594e:{NFSU2_TR(0x4a594e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a594f:{NFSU2_TR(0x4a594f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5950:{NFSU2_TR(0x4a5950);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a5955ull));
TAIL_STATIC(0x50cb00u,50c);
}
B4a5955:L4a5955:{c.instructions+=9;NFSU2_TR(0x4a5955);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4a5958:{NFSU2_TR(0x4a5958);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a595b:{NFSU2_TR(0x4a595b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4a595f:{NFSU2_TR(0x4a595f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5960:{NFSU2_TR(0x4a5960);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4a5964:{NFSU2_TR(0x4a5964);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5965:{NFSU2_TR(0x4a5965);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5966:{NFSU2_TR(0x4a5966);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a596a:{NFSU2_TR(0x4a596a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a596full));
TAIL_STATIC(0x51d070u,51d);
}
B4a596f:L4a596f:{c.instructions+=6;NFSU2_TR(0x4a596f);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a5973:{NFSU2_TR(0x4a5973);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a5977:{NFSU2_TR(0x4a5977);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5978:{NFSU2_TR(0x4a5978);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5979:{NFSU2_TR(0x4a5979);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a597a:{NFSU2_TR(0x4a597a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a597full));
TAIL_STATIC(0x51d380u,51d);
}
B4a597f:L4a597f:{c.instructions+=7;NFSU2_TR(0x4a597f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a5982:{NFSU2_TR(0x4a5982);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4a5986:{NFSU2_TR(0x4a5986);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5987:{NFSU2_TR(0x4a5987);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4a598b:{NFSU2_TR(0x4a598b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a598c:{NFSU2_TR(0x4a598c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a598d:{NFSU2_TR(0x4a598d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a5992ull));
TAIL_STATIC(0x51d730u,51d);
}
B4a5992:L4a5992:{c.instructions+=7;NFSU2_TR(0x4a5992);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a5996:{NFSU2_TR(0x4a5996);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x3cull))));
}
B4a5999:{NFSU2_TR(0x4a5999);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a599a:{NFSU2_TR(0x4a599a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a599d:{NFSU2_TR(0x4a599d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a599e:{NFSU2_TR(0x4a599e);
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
B4a59a1:{NFSU2_TR(0x4a59a1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a59b0:L4a59b0:{c.instructions+=7;NFSU2_TR(0x4a59b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B4a59b3:{NFSU2_TR(0x4a59b3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a59b4:{NFSU2_TR(0x4a59b4);
__builtin_memmove((R+24),(R+4),4);
}
B4a59b6:{NFSU2_TR(0x4a59b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a59b9:{NFSU2_TR(0x4a59b9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a59ba:{NFSU2_TR(0x4a59ba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a59bb:{NFSU2_TR(0x4a59bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a59c0ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4a59c0:L4a59c0:{c.instructions+=4;NFSU2_TR(0x4a59c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4a59c3:{NFSU2_TR(0x4a59c3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a59c6:{NFSU2_TR(0x4a59c6);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a59c8:{NFSU2_TR(0x4a59c8);
if(r1(R+518)){{goto L4a59fb;}}
}
B4a59ca:L4a59ca:{c.instructions+=10;NFSU2_TR(0x4a59ca);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a59ce:{NFSU2_TR(0x4a59ce);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4a59d2:{NFSU2_TR(0x4a59d2);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a59d5:{NFSU2_TR(0x4a59d5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a59d6:{NFSU2_TR(0x4a59d6);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4a59da:{NFSU2_TR(0x4a59da);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a59db:{NFSU2_TR(0x4a59db);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a59de:{NFSU2_TR(0x4a59de);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a59df:{NFSU2_TR(0x4a59df);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a59e3:{NFSU2_TR(0x4a59e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a59e8ull));
TAIL_STATIC(0x51d620u,51d);
}
B4a59e8:L4a59e8:{c.instructions+=6;NFSU2_TR(0x4a59e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a59ec:{NFSU2_TR(0x4a59ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a59f0:{NFSU2_TR(0x4a59f0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a59f1:{NFSU2_TR(0x4a59f1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a59f2:{NFSU2_TR(0x4a59f2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a59f3:{NFSU2_TR(0x4a59f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a59f8ull));
TAIL_STATIC(0x51d4d0u,51d);
}
B4a59f8:L4a59f8:{c.instructions+=1;NFSU2_TR(0x4a59f8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4a59fb:L4a59fb:{c.instructions+=4;NFSU2_TR(0x4a59fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a59fc:{NFSU2_TR(0x4a59fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a59fd:{NFSU2_TR(0x4a59fd);
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
B4a5a00:{NFSU2_TR(0x4a5a00);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a5a10:L4a5a10:{c.instructions+=15;NFSU2_TR(0x4a5a10);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5a12:{NFSU2_TR(0x4a5a12);
u8 U[4];
w4(U+0,u32(0x772a43ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5a17:{NFSU2_TR(0x4a5a17);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a5a1d:{NFSU2_TR(0x4a5a1d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5a1e:{NFSU2_TR(0x4a5a1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a5a25:{NFSU2_TR(0x4a5a25);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5a26:{NFSU2_TR(0x4a5a26);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5a27:{NFSU2_TR(0x4a5a27);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5a28:{NFSU2_TR(0x4a5a28);
__builtin_memmove((R+24),(R+4),4);
}
B4a5a2a:{NFSU2_TR(0x4a5a2a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a5a2e:{NFSU2_TR(0x4a5a2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a5a34:{NFSU2_TR(0x4a5a34);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4a5a36:{NFSU2_TR(0x4a5a36);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a5a38:{NFSU2_TR(0x4a5a38);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a5a40:{NFSU2_TR(0x4a5a40);
if(r1(R+518)){{goto L4a5a53;}}
}
B4a5a42:L4a5a42:{c.instructions+=4;NFSU2_TR(0x4a5a42);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a5a48:{NFSU2_TR(0x4a5a48);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5a49:{NFSU2_TR(0x4a5a49);
w4(R+4,u32(0x8a3288ull));
}
B4a5a4e:{NFSU2_TR(0x4a5a4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a5a53ull));
TAIL_STATIC(0x63ae00u,63a);
}
B4a5a53:L4a5a53:{c.instructions+=2;NFSU2_TR(0x4a5a53);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4a5a59:{NFSU2_TR(0x4a5a59);
if(r1(R+518)){{goto L4a5a6c;}}
}
B4a5a5b:L4a5a5b:{c.instructions+=4;NFSU2_TR(0x4a5a5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a5a61:{NFSU2_TR(0x4a5a61);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5a62:{NFSU2_TR(0x4a5a62);
w4(R+4,u32(0x8a3288ull));
}
B4a5a67:{NFSU2_TR(0x4a5a67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a5a6cull));
TAIL_STATIC(0x63ae00u,63a);
}
B4a5a6c:L4a5a6c:{c.instructions+=2;NFSU2_TR(0x4a5a6c);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cccull))));
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
B4a5a72:{NFSU2_TR(0x4a5a72);
if(r1(R+518)){{goto L4a5a85;}}
}
B4a5a74:L4a5a74:{c.instructions+=4;NFSU2_TR(0x4a5a74);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a5a7a:{NFSU2_TR(0x4a5a7a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5a7b:{NFSU2_TR(0x4a5a7b);
w4(R+4,u32(0x8a3288ull));
}
B4a5a80:{NFSU2_TR(0x4a5a80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a5a85ull));
TAIL_STATIC(0x63ae00u,63a);
}
B4a5a85:L4a5a85:{c.instructions+=9;NFSU2_TR(0x4a5a85);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cd0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a5a8b:{NFSU2_TR(0x4a5a8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cd4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a5a91:{NFSU2_TR(0x4a5a91);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cccull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a5a97:{NFSU2_TR(0x4a5a97);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ce0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a5aa1:{NFSU2_TR(0x4a5aa1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2754ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4a5aa7:{NFSU2_TR(0x4a5aa7);
__builtin_memmove(gp(0x836408),(R+12),4);
}
B4a5aad:{NFSU2_TR(0x4a5aad);
__builtin_memmove(gp(0x83640c),(R+12),1);
}
B4a5ab3:{NFSU2_TR(0x4a5ab3);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x3ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4a5ab8:{NFSU2_TR(0x4a5ab8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a5abdull));
TAIL_STATIC(0x4022c0u,402);
}
B4a5abd:L4a5abd:{c.instructions+=3;NFSU2_TR(0x4a5abd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e64ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4a5ac3:{NFSU2_TR(0x4a5ac3);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4a5ac8:{NFSU2_TR(0x4a5ac8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a5acdull));
TAIL_STATIC(0x4022c0u,402);
}
B4a5acd:L4a5acd:{c.instructions+=3;NFSU2_TR(0x4a5acd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1574ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4a5ad3:{NFSU2_TR(0x4a5ad3);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4a5ad8:{NFSU2_TR(0x4a5ad8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a5addull));
TAIL_STATIC(0x4022c0u,402);
}
B4a5add:L4a5add:{c.instructions+=3;NFSU2_TR(0x4a5add);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc84ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4a5ae3:{NFSU2_TR(0x4a5ae3);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4a5ae7:{NFSU2_TR(0x4a5ae7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a5aecull));
TAIL_STATIC(0x4022c0u,402);
}
B4a5aec:L4a5aec:{c.instructions+=3;NFSU2_TR(0x4a5aec);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x394ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4a5af2:{NFSU2_TR(0x4a5af2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a5afa:{NFSU2_TR(0x4a5afa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a5affull));
TAIL_STATIC(0x4022c0u,402);
}
B4a5aff:L4a5aff:{c.instructions+=6;NFSU2_TR(0x4a5aff);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a5b03:{NFSU2_TR(0x4a5b03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a5b04:{NFSU2_TR(0x4a5b04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4a5b05:{NFSU2_TR(0x4a5b05);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a5b0c:{NFSU2_TR(0x4a5b0c);
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
B4a5b0f:{NFSU2_TR(0x4a5b0f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a5b10:L4a5b10:{c.instructions+=4;NFSU2_TR(0x4a5b10);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a5b14:{NFSU2_TR(0x4a5b14);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5b15:{NFSU2_TR(0x4a5b15);
w4(R+4,u32(0x8a3288ull));
}
B4a5b1a:{NFSU2_TR(0x4a5b1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a5b1full));
TAIL_STATIC(0x6106d0u,610);
}
B4a5b1f:L4a5b1f:{c.instructions+=1;NFSU2_TR(0x4a5b1f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a5b20:L4a5b20:{c.instructions+=11;NFSU2_TR(0x4a5b20);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a5b23:{NFSU2_TR(0x4a5b23);
u8 U[16];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B4a5b27:{NFSU2_TR(0x4a5b27);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a5b2a:{NFSU2_TR(0x4a5b2a);
__builtin_memmove((R+8),gp(0x8a1ccc),4);
}
B4a5b30:{NFSU2_TR(0x4a5b30);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B4a5b36:{NFSU2_TR(0x4a5b36);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B4a5b38:{NFSU2_TR(0x4a5b38);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a5b3c:{NFSU2_TR(0x4a5b3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a5b42:{NFSU2_TR(0x4a5b42);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5b43:{NFSU2_TR(0x4a5b43);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5b44:{NFSU2_TR(0x4a5b44);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a5b49ull));
TAIL_STATIC(0x433cd0u,433);
}
B4a5b49:L4a5b49:{c.instructions+=3;NFSU2_TR(0x4a5b49);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a5b4c:{NFSU2_TR(0x4a5b4c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a5b4f:{NFSU2_TR(0x4a5b4f);
if(r1(R+518)){{goto L4a5b5e;}}
}
B4a5b51:L4a5b51:{c.instructions+=2;NFSU2_TR(0x4a5b51);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B4a5b54:{NFSU2_TR(0x4a5b54);
if(r1(R+518)){{goto L4a5b5e;}}
}
B4a5b56:L4a5b56:{c.instructions+=2;NFSU2_TR(0x4a5b56);
w4(R+0,u32(0x1ull));
}
B4a5b5b:{NFSU2_TR(0x4a5b5b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a5b5e:L4a5b5e:{c.instructions+=2;NFSU2_TR(0x4a5b5e);
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
B4a5b60:{NFSU2_TR(0x4a5b60);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a5b70:L4a5b70:{c.instructions+=22;NFSU2_TR(0x4a5b70);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a5b74:{NFSU2_TR(0x4a5b74);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a5b78:{NFSU2_TR(0x4a5b78);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5b79:{NFSU2_TR(0x4a5b79);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5b7a:{NFSU2_TR(0x4a5b7a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a5b7e:{NFSU2_TR(0x4a5b7e);
__builtin_memmove((R+24),(R+4),4);
}
B4a5b80:{NFSU2_TR(0x4a5b80);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a5b84:{NFSU2_TR(0x4a5b84);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5b85:{NFSU2_TR(0x4a5b85);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a5b89:{NFSU2_TR(0x4a5b89);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5b8a:{NFSU2_TR(0x4a5b8a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a5b8e:{NFSU2_TR(0x4a5b8e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5b8f:{NFSU2_TR(0x4a5b8f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a5b93:{NFSU2_TR(0x4a5b93);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5b94:{NFSU2_TR(0x4a5b94);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a5b98:{NFSU2_TR(0x4a5b98);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5b99:{NFSU2_TR(0x4a5b99);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a5b9d:{NFSU2_TR(0x4a5b9d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5b9e:{NFSU2_TR(0x4a5b9e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5b9f:{NFSU2_TR(0x4a5b9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a5ba5:{NFSU2_TR(0x4a5ba5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5ba6:{NFSU2_TR(0x4a5ba6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a5babull));
TAIL_STATIC(0x4533b0u,453);
}
B4a5bab:L4a5bab:{c.instructions+=4;NFSU2_TR(0x4a5bab);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a5baf:{NFSU2_TR(0x4a5baf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a5bb5:{NFSU2_TR(0x4a5bb5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5bb6:{NFSU2_TR(0x4a5bb6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a5bbbull));
TAIL_STATIC(0x4455a0u,445);
}
B4a5bbb:L4a5bbb:{c.instructions+=2;NFSU2_TR(0x4a5bbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a5bc1:{NFSU2_TR(0x4a5bc1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a5bc6ull));
TAIL_STATIC(0x4455c0u,445);
}
B4a5bc6:L4a5bc6:{c.instructions+=2;NFSU2_TR(0x4a5bc6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a5bc7:{NFSU2_TR(0x4a5bc7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a5bd0:L4a5bd0:{c.instructions+=15;NFSU2_TR(0x4a5bd0);
__builtin_memmove((R+0),gp(0x8651ac),4);
}
B4a5bd5:{NFSU2_TR(0x4a5bd5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B4a5bd8:{NFSU2_TR(0x4a5bd8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5bd9:{NFSU2_TR(0x4a5bd9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5bda:{NFSU2_TR(0x4a5bda);
__builtin_memmove((R+24),(R+4),4);
}
B4a5bdc:{NFSU2_TR(0x4a5bdc);
__builtin_memmove(gp(0x837aa0),(R+0),4);
}
B4a5be1:{NFSU2_TR(0x4a5be1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a5be7:{NFSU2_TR(0x4a5be7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a5bed:{NFSU2_TR(0x4a5bed);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a5bf1:{NFSU2_TR(0x4a5bf1);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4a5bf3:{NFSU2_TR(0x4a5bf3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5bf4:{NFSU2_TR(0x4a5bf4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5bf5:{NFSU2_TR(0x4a5bf5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5bf6:{NFSU2_TR(0x4a5bf6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5bf7:{NFSU2_TR(0x4a5bf7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a5bfcull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a5510u);}goto L4a5510;}
}
B4a5bfc:L4a5bfc:{c.instructions+=3;NFSU2_TR(0x4a5bfc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4a5bff:{NFSU2_TR(0x4a5bff);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a5c01:{NFSU2_TR(0x4a5c01);
if(r1(R+518)){{goto L4a5d83;}}
}
B4a5c07:L4a5c07:{c.instructions+=27;NFSU2_TR(0x4a5c07);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a5c0a:{NFSU2_TR(0x4a5c0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a5c0d:{NFSU2_TR(0x4a5c0d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5c0e:{NFSU2_TR(0x4a5c0e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a5c12:{NFSU2_TR(0x4a5c12);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x274ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a5c18:{NFSU2_TR(0x4a5c18);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5c19:{NFSU2_TR(0x4a5c19);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a5c1c:{NFSU2_TR(0x4a5c1c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a5c20:{NFSU2_TR(0x4a5c20);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a5c23:{NFSU2_TR(0x4a5c23);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5c24:{NFSU2_TR(0x4a5c24);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a5c27:{NFSU2_TR(0x4a5c27);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5c28:{NFSU2_TR(0x4a5c28);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a5c2b:{NFSU2_TR(0x4a5c2b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5c2c:{NFSU2_TR(0x4a5c2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a5c2f:{NFSU2_TR(0x4a5c2f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5c30:{NFSU2_TR(0x4a5c30);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a5c33:{NFSU2_TR(0x4a5c33);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5c34:{NFSU2_TR(0x4a5c34);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a5c37:{NFSU2_TR(0x4a5c37);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5c38:{NFSU2_TR(0x4a5c38);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a5c3b:{NFSU2_TR(0x4a5c3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a5c3e:{NFSU2_TR(0x4a5c3e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5c3f:{NFSU2_TR(0x4a5c3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a5c45:{NFSU2_TR(0x4a5c45);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5c46:{NFSU2_TR(0x4a5c46);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5c47:{NFSU2_TR(0x4a5c47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a5c4cull));
TAIL_STATIC(0x451200u,451);
}
B4a5c4c:L4a5c4c:{c.instructions+=12;NFSU2_TR(0x4a5c4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a5c52:{NFSU2_TR(0x4a5c52);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a5c58:{NFSU2_TR(0x4a5c58);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x248ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a5c5e:{NFSU2_TR(0x4a5c5e);
{u32 ea_=u32(r4(R+4)+u32(332u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a5c64:{NFSU2_TR(0x4a5c64);
{u32 ea_=u32(r4(R+24)+u32(292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a5c6a:{NFSU2_TR(0x4a5c6a);
{u32 ea_=u32(r4(R+24)+u32(628u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a5c70:{NFSU2_TR(0x4a5c70);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x128ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a5c76:{NFSU2_TR(0x4a5c76);
{u32 ea_=u32(u32(7881996u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4a5c7c:{NFSU2_TR(0x4a5c7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a5c82:{NFSU2_TR(0x4a5c82);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4a5c84:{NFSU2_TR(0x4a5c84);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4a5c87:{NFSU2_TR(0x4a5c87);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a5ca3;}}
}
B4a5c89:L4a5c89:{c.instructions+=1;NFSU2_TR(0x4a5c89);
__builtin_memmove((R+16),(R+16),4);
}
B4a5c90:L4a5c90:{c.instructions+=5;NFSU2_TR(0x4a5c90);
{u32 ea_=u32(u32(7881996u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4a5c96:{NFSU2_TR(0x4a5c96);
{u32 ea_=u32(u32(7881996u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4a5c9c:{NFSU2_TR(0x4a5c9c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4a5c9e:{NFSU2_TR(0x4a5c9e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4a5ca1:{NFSU2_TR(0x4a5ca1);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a5c90u);}goto L4a5c90;}}
}
B4a5ca3:L4a5ca3:{c.instructions+=4;NFSU2_TR(0x4a5ca3);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4a5ca9:{NFSU2_TR(0x4a5ca9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4a5cab:{NFSU2_TR(0x4a5cab);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4a5cae:{NFSU2_TR(0x4a5cae);
if(r1(R+514)){{goto L4a5cc3;}}
}
B4a5cb0:L4a5cb0:{c.instructions+=5;NFSU2_TR(0x4a5cb0);
{u32 ea_=u32(u32(7881996u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a5cb6:{NFSU2_TR(0x4a5cb6);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4a5cbc:{NFSU2_TR(0x4a5cbc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4a5cbe:{NFSU2_TR(0x4a5cbe);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4a5cc1:{NFSU2_TR(0x4a5cc1);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a5cb0u);}goto L4a5cb0;}}
}
B4a5cc3:L4a5cc3:{c.instructions+=8;NFSU2_TR(0x4a5cc3);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a5cc7:{NFSU2_TR(0x4a5cc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x274ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a5ccd:{NFSU2_TR(0x4a5ccd);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B4a5ccf:{NFSU2_TR(0x4a5ccf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a5cd5:{NFSU2_TR(0x4a5cd5);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a5cd9:{NFSU2_TR(0x4a5cd9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4a5cdb:{NFSU2_TR(0x4a5cdb);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4a5cde:{NFSU2_TR(0x4a5cde);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a5cf6;}}
}
B4a5ce0:L4a5ce0:{c.instructions+=6;NFSU2_TR(0x4a5ce0);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B4a5ce2:{NFSU2_TR(0x4a5ce2);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a5ce6:{NFSU2_TR(0x4a5ce6);
{u32 ea_=u32(u32(7881996u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a5cec:{NFSU2_TR(0x4a5cec);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4a5cf0:{NFSU2_TR(0x4a5cf0);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a5cf4:{NFSU2_TR(0x4a5cf4);
{goto L4a5d0e;}
}
B4a5cf6:L4a5cf6:{c.instructions+=7;NFSU2_TR(0x4a5cf6);
__asm__ volatile(".byte 0xd8,0xe9":::"memory");
}
B4a5cf8:{NFSU2_TR(0x4a5cf8);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a5cfc:{NFSU2_TR(0x4a5cfc);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a5d00:{NFSU2_TR(0x4a5d00);
{u32 ea_=u32(u32(7881996u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a5d06:{NFSU2_TR(0x4a5d06);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B4a5d08:{NFSU2_TR(0x4a5d08);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a5d0c:{NFSU2_TR(0x4a5d0c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4a5d0e:L4a5d0e:{c.instructions+=5;NFSU2_TR(0x4a5d0e);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a5d12:{NFSU2_TR(0x4a5d12);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4a5d16:{NFSU2_TR(0x4a5d16);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4a5d18:{NFSU2_TR(0x4a5d18);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4a5d1b:{NFSU2_TR(0x4a5d1b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a5d2f;}}
}
B4a5d1d:L4a5d1d:{c.instructions+=4;NFSU2_TR(0x4a5d1d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a5d21:{NFSU2_TR(0x4a5d21);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x138ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4a5d27:{NFSU2_TR(0x4a5d27);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a5d2d:{NFSU2_TR(0x4a5d2d);
{goto L4a5d40;}
}
B4a5d2f:L4a5d2f:{c.instructions+=3;NFSU2_TR(0x4a5d2f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a5d33:{NFSU2_TR(0x4a5d33);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x138ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4a5d3a:{NFSU2_TR(0x4a5d3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a5d40:L4a5d40:{c.instructions+=8;NFSU2_TR(0x4a5d40);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a5d46:{NFSU2_TR(0x4a5d46);
{u32 ea_=u32(u32(8340900u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a5d4c:{NFSU2_TR(0x4a5d4c);
{u32 ea_=u32(r4(R+24)+u32(300u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4a5d52:{NFSU2_TR(0x4a5d52);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a5d56:{NFSU2_TR(0x4a5d56);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B4a5d58:{NFSU2_TR(0x4a5d58);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4a5d5a:{NFSU2_TR(0x4a5d5a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4a5d5d:{NFSU2_TR(0x4a5d5d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a5d75;}}
}
B4a5d5f:L4a5d5f:{c.instructions+=8;NFSU2_TR(0x4a5d5f);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a5d63:{NFSU2_TR(0x4a5d63);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B4a5d65:{NFSU2_TR(0x4a5d65);
{u32 ea_=u32(r4(R+24)+u32(304u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a5d6b:{NFSU2_TR(0x4a5d6b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a5d6c:{NFSU2_TR(0x4a5d6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4a5d6d:{NFSU2_TR(0x4a5d6d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4a5d6f:{NFSU2_TR(0x4a5d6f);
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
B4a5d72:{NFSU2_TR(0x4a5d72);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a5d75:L4a5d75:{c.instructions+=4;NFSU2_TR(0x4a5d75);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4a5d79:{NFSU2_TR(0x4a5d79);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B4a5d7b:{NFSU2_TR(0x4a5d7b);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B4a5d7d:{NFSU2_TR(0x4a5d7d);
{u32 ea_=u32(r4(R+24)+u32(304u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a5d83:L4a5d83:{c.instructions+=4;NFSU2_TR(0x4a5d83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a5d84:{NFSU2_TR(0x4a5d84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4a5d85:{NFSU2_TR(0x4a5d85);
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
B4a5d88:{NFSU2_TR(0x4a5d88);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a5d90:L4a5d90:{c.instructions+=3;NFSU2_TR(0x4a5d90);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5d91:{NFSU2_TR(0x4a5d91);
__builtin_memmove((R+24),(R+4),4);
}
B4a5d93:{NFSU2_TR(0x4a5d93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a5d98ull));
TAIL_STATIC(0x510c30u,510);
}
B4a5d98:L4a5d98:{c.instructions+=2;NFSU2_TR(0x4a5d98);
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
B4a5d9a:{NFSU2_TR(0x4a5d9a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a5ed1;}}
}
B4a5da0:L4a5da0:{c.instructions+=3;NFSU2_TR(0x4a5da0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5da1:{NFSU2_TR(0x4a5da1);
u8 U[4];
w4(U+0,u32(0x78fd7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5da6:{NFSU2_TR(0x4a5da6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a5dabull));
TAIL_STATIC(0x52cf60u,52c);
}
B4a5dab:L4a5dab:{c.instructions+=4;NFSU2_TR(0x4a5dab);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a5dae:{NFSU2_TR(0x4a5dae);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4a5db0:{NFSU2_TR(0x4a5db0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4a5db2:{NFSU2_TR(0x4a5db2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a5e0e;}}
}
B4a5db4:L4a5db4:{c.instructions+=2;NFSU2_TR(0x4a5db4);
u8 U[4];
w4(U+0,u32(0x790634ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5db9:{NFSU2_TR(0x4a5db9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a5dbeull));
TAIL_STATIC(0x52cf60u,52c);
}
B4a5dbe:L4a5dbe:{c.instructions+=3;NFSU2_TR(0x4a5dbe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a5dc1:{NFSU2_TR(0x4a5dc1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4a5dc3:{NFSU2_TR(0x4a5dc3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a5e0e;}}
}
B4a5dc5:L4a5dc5:{c.instructions+=5;NFSU2_TR(0x4a5dc5);
{u32 ea_=u32(u32(8872940u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4a5dcb:{NFSU2_TR(0x4a5dcb);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4a5dd1:{NFSU2_TR(0x4a5dd1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4a5dd3:{NFSU2_TR(0x4a5dd3);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4a5dd6:{NFSU2_TR(0x4a5dd6);
if(r1(R+514)){{goto L4a5de0;}}
}
B4a5dd8:L4a5dd8:{c.instructions+=2;NFSU2_TR(0x4a5dd8);
u8 U[2];
__builtin_memmove((U+0),gp(0x83640d),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4a5dde:{NFSU2_TR(0x4a5dde);
if(r1(R+518)){{goto L4a5e0c;}}
}
B4a5de0:L4a5de0:{c.instructions+=5;NFSU2_TR(0x4a5de0);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4a5de6:{NFSU2_TR(0x4a5de6);
__builtin_memmove(gp(0x83640d),(R+12),1);
}
B4a5dec:{NFSU2_TR(0x4a5dec);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4a5dee:{NFSU2_TR(0x4a5dee);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4a5df1:{NFSU2_TR(0x4a5df1);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4a5dfa;}}
}
B4a5df3:L4a5df3:{c.instructions+=1;NFSU2_TR(0x4a5df3);
s1(0x83640d,u8(0x1ull));
}
B4a5dfa:L4a5dfa:{c.instructions+=4;NFSU2_TR(0x4a5dfa);
__builtin_memmove((R+0),gp(0x8651ac),4);
}
B4a5dff:{NFSU2_TR(0x4a5dff);
__builtin_memmove(gp(0x8363fc),(R+12),1);
}
B4a5e05:{NFSU2_TR(0x4a5e05);
__builtin_memmove(gp(0x837aa0),(R+0),4);
}
B4a5e0a:{NFSU2_TR(0x4a5e0a);
{goto L4a5e0e;}
}
B4a5e0c:L4a5e0c:{c.instructions+=1;NFSU2_TR(0x4a5e0c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4a5e0e:L4a5e0e:{c.instructions+=2;NFSU2_TR(0x4a5e0e);
u8 U[2];
__builtin_memmove((U+0),gp(0x8763f7),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4a5e14:{NFSU2_TR(0x4a5e14);
if(r1(R+518)){{goto L4a5e4c;}}
}
B4a5e16:L4a5e16:{c.instructions+=9;NFSU2_TR(0x4a5e16);
{u32 ea_=u32(u32(8872932u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4a5e1c:{NFSU2_TR(0x4a5e1c);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a5e22:{NFSU2_TR(0x4a5e22);
{u32 ea_=u32(r4(R+24)+u32(584u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a5e28:{NFSU2_TR(0x4a5e28);
{u32 ea_=u32(u32(8872936u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4a5e2e:{NFSU2_TR(0x4a5e2e);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a5e34:{NFSU2_TR(0x4a5e34);
{u32 ea_=u32(r4(R+24)+u32(588u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a5e3a:{NFSU2_TR(0x4a5e3a);
__builtin_memmove((R+4),gp(0x8651ac),4);
}
B4a5e40:{NFSU2_TR(0x4a5e40);
__builtin_memmove(gp(0x8363fc),(R+12),1);
}
B4a5e46:{NFSU2_TR(0x4a5e46);
__builtin_memmove(gp(0x837aa0),(R+4),4);
}
B4a5e4c:L4a5e4c:{c.instructions+=2;NFSU2_TR(0x4a5e4c);
u8 U[2];
__builtin_memmove((U+0),gp(0x8763f9),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4a5e52:{NFSU2_TR(0x4a5e52);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a5e65;}}
}
B4a5e54:L4a5e54:{c.instructions+=2;NFSU2_TR(0x4a5e54);
u8 U[4];
w4(U+0,u32(0x78fd7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5e59:{NFSU2_TR(0x4a5e59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a5e5eull));
TAIL_STATIC(0x52cf60u,52c);
}
B4a5e5e:L4a5e5e:{c.instructions+=3;NFSU2_TR(0x4a5e5e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a5e61:{NFSU2_TR(0x4a5e61);
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
B4a5e63:{NFSU2_TR(0x4a5e63);
if(r1(R+518)){{goto L4a5ed0;}}
}
B4a5e65:L4a5e65:{c.instructions+=2;NFSU2_TR(0x4a5e65);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x240ull))));
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
B4a5e6b:{NFSU2_TR(0x4a5e6b);
if(r1(R+518)){{goto L4a5ed0;}}
}
B4a5e6d:L4a5e6d:{c.instructions+=1;NFSU2_TR(0x4a5e6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a5e72ull));
TAIL_STATIC(0x510c30u,510);
}
B4a5e72:L4a5e72:{c.instructions+=2;NFSU2_TR(0x4a5e72);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a5e74:{NFSU2_TR(0x4a5e74);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a5e86;}}
}
B4a5e76:L4a5e76:{c.instructions+=2;NFSU2_TR(0x4a5e76);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x270ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a5e80:{NFSU2_TR(0x4a5e80);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x248ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a5e86:L4a5e86:{c.instructions+=2;NFSU2_TR(0x4a5e86);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x240ull))));
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
B4a5e8c:{NFSU2_TR(0x4a5e8c);
if(r1(R+518)){{goto L4a5ed0;}}
}
B4a5e8e:L4a5e8e:{c.instructions+=1;NFSU2_TR(0x4a5e8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a5e93ull));
TAIL_STATIC(0x510c30u,510);
}
B4a5e93:L4a5e93:{c.instructions+=2;NFSU2_TR(0x4a5e93);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a5e95:{NFSU2_TR(0x4a5e95);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a5ea7;}}
}
B4a5e97:L4a5e97:{c.instructions+=2;NFSU2_TR(0x4a5e97);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x270ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a5ea1:{NFSU2_TR(0x4a5ea1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a5ea7:L4a5ea7:{c.instructions+=2;NFSU2_TR(0x4a5ea7);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x240ull))));
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
B4a5ead:{NFSU2_TR(0x4a5ead);
if(r1(R+518)){{goto L4a5ed0;}}
}
B4a5eaf:L4a5eaf:{c.instructions+=1;NFSU2_TR(0x4a5eaf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a5eb4ull));
TAIL_STATIC(0x510c30u,510);
}
B4a5eb4:L4a5eb4:{c.instructions+=2;NFSU2_TR(0x4a5eb4);
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
B4a5eb6:{NFSU2_TR(0x4a5eb6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a5ed0;}}
}
B4a5eb8:L4a5eb8:{c.instructions+=3;NFSU2_TR(0x4a5eb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x270ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a5ec2:{NFSU2_TR(0x4a5ec2);
u8 U[5];
__builtin_memmove((U+3),gp(0x8363f4),1);
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
B4a5ec8:{NFSU2_TR(0x4a5ec8);
if(r1(R+518)){{goto L4a5ed0;}}
}
B4a5eca:L4a5eca:{c.instructions+=1;NFSU2_TR(0x4a5eca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x250ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a5ed0:L4a5ed0:{c.instructions+=1;NFSU2_TR(0x4a5ed0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4a5ed1:L4a5ed1:{c.instructions+=2;NFSU2_TR(0x4a5ed1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a5ed2:{NFSU2_TR(0x4a5ed2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a5ee0:L4a5ee0:{c.instructions+=8;NFSU2_TR(0x4a5ee0);
__builtin_memmove((R+0),gp(0x8a1ccc),4);
}
B4a5ee5:{NFSU2_TR(0x4a5ee5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5ee6:{NFSU2_TR(0x4a5ee6);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4a5eea:{NFSU2_TR(0x4a5eea);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B4a5ef0:{NFSU2_TR(0x4a5ef0);
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),r4(R+0)));
w1(R+523,scarry<u32>(r4(R+24),r4(R+0)));
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a5ef2:{NFSU2_TR(0x4a5ef2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5ef3:{NFSU2_TR(0x4a5ef3);
__builtin_memmove((R+28),(R+4),4);
}
B4a5ef5:{NFSU2_TR(0x4a5ef5);
if(r1(R+518)){{goto L4a5f26;}}
}
B4a5ef7:L4a5ef7:{c.instructions+=2;NFSU2_TR(0x4a5ef7);
u8 U[4];
w4(U+0,u32(0x790650ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5efc:{NFSU2_TR(0x4a5efc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a5f01ull));
TAIL_STATIC(0x43db50u,43d);
}
B4a5f01:L4a5f01:{c.instructions+=3;NFSU2_TR(0x4a5f01);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5f02:{NFSU2_TR(0x4a5f02);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5f03:{NFSU2_TR(0x4a5f03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a5f08ull));
TAIL_STATIC(0x43db80u,43d);
}
B4a5f08:L4a5f08:{c.instructions+=6;NFSU2_TR(0x4a5f08);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a5f0b:{NFSU2_TR(0x4a5f0b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4a5f0e:{NFSU2_TR(0x4a5f0e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5f0f:{NFSU2_TR(0x4a5f0f);
u8 U[4];
w4(U+0,u32(0xf80dbcaeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5f14:{NFSU2_TR(0x4a5f14);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5f15:{NFSU2_TR(0x4a5f15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a5f1aull));
TAIL_STATIC(0x537a60u,537);
}
B4a5f1a:L4a5f1a:{c.instructions+=3;NFSU2_TR(0x4a5f1a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a5f1d:{NFSU2_TR(0x4a5f1d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5f1e:{NFSU2_TR(0x4a5f1e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a5f23ull));
TAIL_STATIC(0x50c990u,50c);
}
B4a5f23:L4a5f23:{c.instructions+=1;NFSU2_TR(0x4a5f23);
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
B4a5f26:L4a5f26:{c.instructions+=3;NFSU2_TR(0x4a5f26);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a5f27:{NFSU2_TR(0x4a5f27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a5f28:{NFSU2_TR(0x4a5f28);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a5f30:L4a5f30:{c.instructions+=6;NFSU2_TR(0x4a5f30);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a5f34:{NFSU2_TR(0x4a5f34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B4a5f37:{NFSU2_TR(0x4a5f37);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a5f3a:{NFSU2_TR(0x4a5f3a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5f3b:{NFSU2_TR(0x4a5f3b);
__builtin_memmove((R+24),(R+4),4);
}
B4a5f3d:{NFSU2_TR(0x4a5f3d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a5fd4;}}
}
B4a5f43:L4a5f43:{c.instructions+=11;NFSU2_TR(0x4a5f43);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a5f47:{NFSU2_TR(0x4a5f47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4a5f49:{NFSU2_TR(0x4a5f49);
__builtin_memmove((R+0),gp(0x8a1ccc),4);
}
B4a5f4e:{NFSU2_TR(0x4a5f4e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4a5f54:{NFSU2_TR(0x4a5f54);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B4a5f56:{NFSU2_TR(0x4a5f56);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5f57:{NFSU2_TR(0x4a5f57);
u8 U[4];
w4(U+0,u32(0x79066cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5f5c:{NFSU2_TR(0x4a5f5c);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4a5f60:{NFSU2_TR(0x4a5f60);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5f62:{NFSU2_TR(0x4a5f62);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5f63:{NFSU2_TR(0x4a5f63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a5f68ull));
TAIL_STATIC(0x50c960u,50c);
}
B4a5f68:L4a5f68:{c.instructions+=3;NFSU2_TR(0x4a5f68);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4a5f6c:{NFSU2_TR(0x4a5f6c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5f6d:{NFSU2_TR(0x4a5f6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a5f72ull));
TAIL_STATIC(0x505450u,505);
}
B4a5f72:L4a5f72:{c.instructions+=6;NFSU2_TR(0x4a5f72);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a5f75:{NFSU2_TR(0x4a5f75);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4a5f78:{NFSU2_TR(0x4a5f78);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5f79:{NFSU2_TR(0x4a5f79);
u8 U[4];
w4(U+0,u32(0x8c016d69ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5f7e:{NFSU2_TR(0x4a5f7e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5f7f:{NFSU2_TR(0x4a5f7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a5f84ull));
TAIL_STATIC(0x537a60u,537);
}
B4a5f84:L4a5f84:{c.instructions+=3;NFSU2_TR(0x4a5f84);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a5f87:{NFSU2_TR(0x4a5f87);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5f88:{NFSU2_TR(0x4a5f88);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a5f8dull));
TAIL_STATIC(0x50c990u,50c);
}
B4a5f8d:L4a5f8d:{c.instructions+=6;NFSU2_TR(0x4a5f8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a5f90:{NFSU2_TR(0x4a5f90);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5f92:{NFSU2_TR(0x4a5f92);
u8 U[4];
w4(U+0,u32(0x78f9d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5f97:{NFSU2_TR(0x4a5f97);
u8 U[4];
w4(U+0,u32(0x5d75c3b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5f9c:{NFSU2_TR(0x4a5f9c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5f9d:{NFSU2_TR(0x4a5f9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a5fa2ull));
TAIL_STATIC(0x537c00u,537);
}
B4a5fa2:L4a5fa2:{c.instructions+=4;NFSU2_TR(0x4a5fa2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a5fa5:{NFSU2_TR(0x4a5fa5);
u8 U[4];
w4(U+0,u32(0x5d75c3b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5faa:{NFSU2_TR(0x4a5faa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5fab:{NFSU2_TR(0x4a5fab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a5fb0ull));
TAIL_STATIC(0x5379c0u,537);
}
B4a5fb0:L4a5fb0:{c.instructions+=2;NFSU2_TR(0x4a5fb0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5fb1:{NFSU2_TR(0x4a5fb1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a5fb6ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4a5fb6:L4a5fb6:{c.instructions+=4;NFSU2_TR(0x4a5fb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4a5fb9:{NFSU2_TR(0x4a5fb9);
u8 U[4];
w4(U+0,u32(0xd719922full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5fbe:{NFSU2_TR(0x4a5fbe);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5fbf:{NFSU2_TR(0x4a5fbf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a5fc4ull));
TAIL_STATIC(0x5379c0u,537);
}
B4a5fc4:L4a5fc4:{c.instructions+=2;NFSU2_TR(0x4a5fc4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5fc5:{NFSU2_TR(0x4a5fc5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a5fcaull));
TAIL_STATIC(0x50ca00u,50c);
}
B4a5fca:L4a5fca:{c.instructions+=4;NFSU2_TR(0x4a5fca);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
}
B4a5fcd:{NFSU2_TR(0x4a5fcd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a5fce:{NFSU2_TR(0x4a5fce);
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
B4a5fd1:{NFSU2_TR(0x4a5fd1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a5fd4:L4a5fd4:{c.instructions+=2;NFSU2_TR(0x4a5fd4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a5fd6:{NFSU2_TR(0x4a5fd6);
if(r1(R+518)){{goto L4a5fdd;}}
}
B4a5fd8:L4a5fd8:{c.instructions+=2;NFSU2_TR(0x4a5fd8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a5fdb:{NFSU2_TR(0x4a5fdb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x4a601bu,4a6);}
}
B4a5fdd:L4a5fdd:{c.instructions+=4;NFSU2_TR(0x4a5fdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a5fe0:{NFSU2_TR(0x4a5fe0);
u8 U[4];
w4(U+0,u32(0xd719922full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5fe5:{NFSU2_TR(0x4a5fe5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5fe6:{NFSU2_TR(0x4a5fe6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a5febull));
TAIL_STATIC(0x5379c0u,537);
}
B4a5feb:L4a5feb:{c.instructions+=2;NFSU2_TR(0x4a5feb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5fec:{NFSU2_TR(0x4a5fec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a5ff1ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4a5ff1:L4a5ff1:{c.instructions+=4;NFSU2_TR(0x4a5ff1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a5ff4:{NFSU2_TR(0x4a5ff4);
u8 U[4];
w4(U+0,u32(0x5d75c3b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5ff9:{NFSU2_TR(0x4a5ff9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a5ffa:{NFSU2_TR(0x4a5ffa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a5fffull));
TAIL_STATIC(0x5379c0u,537);
}
B4a5fff:L4a5fff:{c.instructions+=1;NFSU2_TR(0x4a5fff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
TAIL_STATIC(0x4a6000u,4a6);
}
XIT:NFSU2_TR_EXIT(0x4a5,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
