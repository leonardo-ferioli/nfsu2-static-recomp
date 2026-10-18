#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_591(u8* __restrict R,Cpu& c);
u32 body_592(u8* __restrict R,Cpu& c);
u32 body_599(u8* __restrict R,Cpu& c);
u32 body_59b(u8* __restrict R,Cpu& c);
u32 body_59f(u8* __restrict R,Cpu& c);
u32 body_5a4(u8* __restrict R,Cpu& c);
u32 body_5a6(u8* __restrict R,Cpu& c);
u32 body_5eb(u8* __restrict R,Cpu& c);
u32 body_5ec(u8* __restrict R,Cpu& c);
u32 body_5ed(u8* __restrict R,Cpu& c);
u32 body_5ee(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5a5,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5a5,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5a5(u8* __restrict R,Cpu& c);
u32 page_5a5(Cpu& c){return body_5a5(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5a5(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5a5001:goto L5a5001;
case 0x5a5006:c.instructions+=2;goto B5a5006;
case 0x5a5008:c.instructions+=1;goto B5a5008;
case 0x5a500e:goto L5a500e;
case 0x5a5011:c.instructions+=1;goto B5a5011;
case 0x5a5017:goto L5a5017;
case 0x5a501a:c.instructions+=16;goto B5a501a;
case 0x5a501c:c.instructions+=15;goto B5a501c;
case 0x5a501f:c.instructions+=14;goto B5a501f;
case 0x5a5022:c.instructions+=13;goto B5a5022;
case 0x5a5028:c.instructions+=12;goto B5a5028;
case 0x5a502e:c.instructions+=11;goto B5a502e;
case 0x5a5034:c.instructions+=10;goto B5a5034;
case 0x5a503a:c.instructions+=9;goto B5a503a;
case 0x5a503d:c.instructions+=8;goto B5a503d;
case 0x5a5041:c.instructions+=7;goto B5a5041;
case 0x5a5043:c.instructions+=6;goto B5a5043;
case 0x5a5047:c.instructions+=5;goto B5a5047;
case 0x5a504d:c.instructions+=4;goto B5a504d;
case 0x5a5051:c.instructions+=3;goto B5a5051;
case 0x5a5053:c.instructions+=2;goto B5a5053;
case 0x5a5056:c.instructions+=1;goto B5a5056;
case 0x5a5058:goto L5a5058;
case 0x5a5060:c.instructions+=1;goto B5a5060;
case 0x5a5062:goto L5a5062;
case 0x5a5067:goto L5a5067;
case 0x5a506b:goto L5a506b;
case 0x5a506e:c.instructions+=1;goto B5a506e;
case 0x5a5073:goto L5a5073;
case 0x5a5079:c.instructions+=15;goto B5a5079;
case 0x5a507f:c.instructions+=14;goto B5a507f;
case 0x5a5080:c.instructions+=13;goto B5a5080;
case 0x5a5083:c.instructions+=12;goto B5a5083;
case 0x5a5087:c.instructions+=11;goto B5a5087;
case 0x5a5088:c.instructions+=10;goto B5a5088;
case 0x5a508c:c.instructions+=9;goto B5a508c;
case 0x5a508d:c.instructions+=8;goto B5a508d;
case 0x5a508e:c.instructions+=7;goto B5a508e;
case 0x5a5092:c.instructions+=6;goto B5a5092;
case 0x5a5093:c.instructions+=5;goto B5a5093;
case 0x5a5097:c.instructions+=4;goto B5a5097;
case 0x5a5098:c.instructions+=3;goto B5a5098;
case 0x5a5099:c.instructions+=2;goto B5a5099;
case 0x5a509a:c.instructions+=1;goto B5a509a;
case 0x5a509f:goto L5a509f;
case 0x5a50a3:c.instructions+=5;goto B5a50a3;
case 0x5a50a9:c.instructions+=4;goto B5a50a9;
case 0x5a50ac:c.instructions+=3;goto B5a50ac;
case 0x5a50b0:c.instructions+=2;goto B5a50b0;
case 0x5a50b6:c.instructions+=1;goto B5a50b6;
case 0x5a50ba:goto L5a50ba;
case 0x5a50bc:c.instructions+=8;goto B5a50bc;
case 0x5a50c2:c.instructions+=7;goto B5a50c2;
case 0x5a50c5:c.instructions+=6;goto B5a50c5;
case 0x5a50cc:c.instructions+=5;goto B5a50cc;
case 0x5a50d1:c.instructions+=4;goto B5a50d1;
case 0x5a50d3:c.instructions+=3;goto B5a50d3;
case 0x5a50d5:c.instructions+=2;goto B5a50d5;
case 0x5a50d7:c.instructions+=1;goto B5a50d7;
case 0x5a50d9:goto L5a50d9;
case 0x5a50db:c.instructions+=2;goto B5a50db;
case 0x5a50e5:c.instructions+=1;goto B5a50e5;
case 0x5a50e7:goto L5a50e7;
case 0x5a50e9:c.instructions+=1;goto B5a50e9;
case 0x5a50f3:goto L5a50f3;
case 0x5a50f6:c.instructions+=1;goto B5a50f6;
case 0x5a50fb:goto L5a50fb;
case 0x5a50fd:c.instructions+=1;goto B5a50fd;
case 0x5a50ff:goto L5a50ff;
case 0x5a5106:c.instructions+=3;goto B5a5106;
case 0x5a5108:c.instructions+=2;goto B5a5108;
case 0x5a510e:c.instructions+=1;goto B5a510e;
case 0x5a5114:goto L5a5114;
case 0x5a511a:c.instructions+=2;goto B5a511a;
case 0x5a511c:c.instructions+=1;goto B5a511c;
case 0x5a511e:goto L5a511e;
case 0x5a5120:c.instructions+=9;goto B5a5120;
case 0x5a5123:c.instructions+=8;goto B5a5123;
case 0x5a5126:c.instructions+=7;goto B5a5126;
case 0x5a5129:c.instructions+=6;goto B5a5129;
case 0x5a512b:c.instructions+=5;goto B5a512b;
case 0x5a5131:c.instructions+=4;goto B5a5131;
case 0x5a5137:c.instructions+=3;goto B5a5137;
case 0x5a5139:c.instructions+=2;goto B5a5139;
case 0x5a513c:c.instructions+=1;goto B5a513c;
case 0x5a513e:goto L5a513e;
case 0x5a5141:c.instructions+=1;goto B5a5141;
case 0x5a5143:goto L5a5143;
case 0x5a5145:c.instructions+=1;goto B5a5145;
case 0x5a5147:goto L5a5147;
case 0x5a5149:goto L5a5149;
case 0x5a514f:c.instructions+=4;goto B5a514f;
case 0x5a5155:c.instructions+=3;goto B5a5155;
case 0x5a5157:c.instructions+=2;goto B5a5157;
case 0x5a515a:c.instructions+=1;goto B5a515a;
case 0x5a515c:goto L5a515c;
case 0x5a515f:c.instructions+=1;goto B5a515f;
case 0x5a5161:goto L5a5161;
case 0x5a5164:c.instructions+=1;goto B5a5164;
case 0x5a5166:goto L5a5166;
case 0x5a5169:c.instructions+=5;goto B5a5169;
case 0x5a516f:c.instructions+=4;goto B5a516f;
case 0x5a5175:c.instructions+=3;goto B5a5175;
case 0x5a5177:c.instructions+=2;goto B5a5177;
case 0x5a517a:c.instructions+=1;goto B5a517a;
case 0x5a517c:goto L5a517c;
case 0x5a5182:c.instructions+=2;goto B5a5182;
case 0x5a5188:c.instructions+=1;goto B5a5188;
case 0x5a518e:goto L5a518e;
case 0x5a518f:c.instructions+=4;goto B5a518f;
case 0x5a5192:c.instructions+=3;goto B5a5192;
case 0x5a5195:c.instructions+=2;goto B5a5195;
case 0x5a5199:c.instructions+=1;goto B5a5199;
case 0x5a519f:goto L5a519f;
case 0x5a51a0:c.instructions+=5;goto B5a51a0;
case 0x5a51a1:c.instructions+=4;goto B5a51a1;
case 0x5a51a2:c.instructions+=3;goto B5a51a2;
case 0x5a51a3:c.instructions+=2;goto B5a51a3;
case 0x5a51a6:c.instructions+=1;goto B5a51a6;
case 0x5a51b0:goto L5a51b0;
case 0x5a51b1:c.instructions+=12;goto B5a51b1;
case 0x5a51b3:c.instructions+=11;goto B5a51b3;
case 0x5a51b6:c.instructions+=10;goto B5a51b6;
case 0x5a51b9:c.instructions+=9;goto B5a51b9;
case 0x5a51ba:c.instructions+=8;goto B5a51ba;
case 0x5a51bb:c.instructions+=7;goto B5a51bb;
case 0x5a51bd:c.instructions+=6;goto B5a51bd;
case 0x5a51c0:c.instructions+=5;goto B5a51c0;
case 0x5a51c3:c.instructions+=4;goto B5a51c3;
case 0x5a51c6:c.instructions+=3;goto B5a51c6;
case 0x5a51c8:c.instructions+=2;goto B5a51c8;
case 0x5a51c9:c.instructions+=1;goto B5a51c9;
case 0x5a51cf:goto L5a51cf;
case 0x5a51d2:c.instructions+=6;goto B5a51d2;
case 0x5a51d8:c.instructions+=5;goto B5a51d8;
case 0x5a51da:c.instructions+=4;goto B5a51da;
case 0x5a51e0:c.instructions+=3;goto B5a51e0;
case 0x5a51e2:c.instructions+=2;goto B5a51e2;
case 0x5a51e5:c.instructions+=1;goto B5a51e5;
case 0x5a51e7:goto L5a51e7;
case 0x5a51ed:c.instructions+=4;goto B5a51ed;
case 0x5a51f3:c.instructions+=3;goto B5a51f3;
case 0x5a51f5:c.instructions+=2;goto B5a51f5;
case 0x5a51f8:c.instructions+=1;goto B5a51f8;
case 0x5a51fa:goto L5a51fa;
case 0x5a51fc:c.instructions+=1;goto B5a51fc;
case 0x5a51fe:goto L5a51fe;
case 0x5a5204:c.instructions+=4;goto B5a5204;
case 0x5a520a:c.instructions+=3;goto B5a520a;
case 0x5a520c:c.instructions+=2;goto B5a520c;
case 0x5a520f:c.instructions+=1;goto B5a520f;
case 0x5a5211:goto L5a5211;
case 0x5a5217:c.instructions+=4;goto B5a5217;
case 0x5a521d:c.instructions+=3;goto B5a521d;
case 0x5a521f:c.instructions+=2;goto B5a521f;
case 0x5a5222:c.instructions+=1;goto B5a5222;
case 0x5a5224:goto L5a5224;
case 0x5a5226:c.instructions+=1;goto B5a5226;
case 0x5a5228:goto L5a5228;
case 0x5a522e:c.instructions+=4;goto B5a522e;
case 0x5a5234:c.instructions+=3;goto B5a5234;
case 0x5a5236:c.instructions+=2;goto B5a5236;
case 0x5a5239:c.instructions+=1;goto B5a5239;
case 0x5a523b:goto L5a523b;
case 0x5a5241:c.instructions+=4;goto B5a5241;
case 0x5a5247:c.instructions+=3;goto B5a5247;
case 0x5a5249:c.instructions+=2;goto B5a5249;
case 0x5a524c:c.instructions+=1;goto B5a524c;
case 0x5a524e:goto L5a524e;
case 0x5a5254:c.instructions+=4;goto B5a5254;
case 0x5a525a:c.instructions+=3;goto B5a525a;
case 0x5a525c:c.instructions+=2;goto B5a525c;
case 0x5a525f:c.instructions+=1;goto B5a525f;
case 0x5a5261:goto L5a5261;
case 0x5a5267:c.instructions+=4;goto B5a5267;
case 0x5a526d:c.instructions+=3;goto B5a526d;
case 0x5a526f:c.instructions+=2;goto B5a526f;
case 0x5a5272:c.instructions+=1;goto B5a5272;
case 0x5a5274:goto L5a5274;
case 0x5a5276:goto L5a5276;
case 0x5a5278:c.instructions+=9;goto B5a5278;
case 0x5a527b:c.instructions+=8;goto B5a527b;
case 0x5a5280:c.instructions+=7;goto B5a5280;
case 0x5a5285:c.instructions+=6;goto B5a5285;
case 0x5a5287:c.instructions+=5;goto B5a5287;
case 0x5a528f:c.instructions+=4;goto B5a528f;
case 0x5a5293:c.instructions+=3;goto B5a5293;
case 0x5a5298:c.instructions+=2;goto B5a5298;
case 0x5a529c:c.instructions+=1;goto B5a529c;
case 0x5a529e:goto L5a529e;
case 0x5a52a2:goto L5a52a2;
case 0x5a52a5:c.instructions+=11;goto B5a52a5;
case 0x5a52ac:c.instructions+=10;goto B5a52ac;
case 0x5a52ae:c.instructions+=9;goto B5a52ae;
case 0x5a52b1:c.instructions+=8;goto B5a52b1;
case 0x5a52b5:c.instructions+=7;goto B5a52b5;
case 0x5a52b9:c.instructions+=6;goto B5a52b9;
case 0x5a52be:c.instructions+=5;goto B5a52be;
case 0x5a52c0:c.instructions+=4;goto B5a52c0;
case 0x5a52c6:c.instructions+=3;goto B5a52c6;
case 0x5a52cc:c.instructions+=2;goto B5a52cc;
case 0x5a52ce:c.instructions+=1;goto B5a52ce;
case 0x5a52d0:goto L5a52d0;
case 0x5a52d6:c.instructions+=3;goto B5a52d6;
case 0x5a52d8:c.instructions+=2;goto B5a52d8;
case 0x5a52db:c.instructions+=1;goto B5a52db;
case 0x5a52dd:goto L5a52dd;
case 0x5a52df:c.instructions+=1;goto B5a52df;
case 0x5a52e5:goto L5a52e5;
case 0x5a52e8:c.instructions+=5;goto B5a52e8;
case 0x5a52eb:c.instructions+=4;goto B5a52eb;
case 0x5a52ee:c.instructions+=3;goto B5a52ee;
case 0x5a52f0:c.instructions+=2;goto B5a52f0;
case 0x5a52f3:c.instructions+=1;goto B5a52f3;
case 0x5a52f5:goto L5a52f5;
case 0x5a52fb:c.instructions+=7;goto B5a52fb;
case 0x5a5301:c.instructions+=6;goto B5a5301;
case 0x5a5303:c.instructions+=5;goto B5a5303;
case 0x5a5307:c.instructions+=4;goto B5a5307;
case 0x5a530b:c.instructions+=3;goto B5a530b;
case 0x5a530d:c.instructions+=2;goto B5a530d;
case 0x5a5310:c.instructions+=1;goto B5a5310;
case 0x5a5312:goto L5a5312;
case 0x5a5314:c.instructions+=1;goto B5a5314;
case 0x5a5318:goto L5a5318;
case 0x5a531a:c.instructions+=2;goto B5a531a;
case 0x5a5320:c.instructions+=1;goto B5a5320;
case 0x5a5322:goto L5a5322;
case 0x5a5324:c.instructions+=3;goto B5a5324;
case 0x5a5326:c.instructions+=2;goto B5a5326;
case 0x5a5329:c.instructions+=1;goto B5a5329;
case 0x5a532b:goto L5a532b;
case 0x5a532d:c.instructions+=8;goto B5a532d;
case 0x5a5333:c.instructions+=7;goto B5a5333;
case 0x5a5339:c.instructions+=6;goto B5a5339;
case 0x5a533b:c.instructions+=5;goto B5a533b;
case 0x5a5341:c.instructions+=4;goto B5a5341;
case 0x5a5343:c.instructions+=3;goto B5a5343;
case 0x5a5345:c.instructions+=2;goto B5a5345;
case 0x5a5348:c.instructions+=1;goto B5a5348;
case 0x5a534a:goto L5a534a;
case 0x5a534c:c.instructions+=1;goto B5a534c;
case 0x5a5352:goto L5a5352;
case 0x5a5354:c.instructions+=2;goto B5a5354;
case 0x5a535a:c.instructions+=1;goto B5a535a;
case 0x5a535c:goto L5a535c;
case 0x5a5362:c.instructions+=3;goto B5a5362;
case 0x5a5364:c.instructions+=2;goto B5a5364;
case 0x5a5367:c.instructions+=1;goto B5a5367;
case 0x5a5369:goto L5a5369;
case 0x5a536f:goto L5a536f;
case 0x5a5371:c.instructions+=1;goto B5a5371;
case 0x5a5373:goto L5a5373;
case 0x5a5376:c.instructions+=5;goto B5a5376;
case 0x5a5379:c.instructions+=4;goto B5a5379;
case 0x5a537f:c.instructions+=3;goto B5a537f;
case 0x5a5381:c.instructions+=2;goto B5a5381;
case 0x5a5384:c.instructions+=1;goto B5a5384;
case 0x5a5386:goto L5a5386;
case 0x5a538b:goto L5a538b;
case 0x5a538f:c.instructions+=5;goto B5a538f;
case 0x5a5390:c.instructions+=4;goto B5a5390;
case 0x5a5393:c.instructions+=3;goto B5a5393;
case 0x5a5399:c.instructions+=2;goto B5a5399;
case 0x5a539d:c.instructions+=1;goto B5a539d;
case 0x5a53a3:goto L5a53a3;
case 0x5a53a7:c.instructions+=2;goto B5a53a7;
case 0x5a53a9:c.instructions+=1;goto B5a53a9;
case 0x5a53af:goto L5a53af;
case 0x5a53b2:c.instructions+=4;goto B5a53b2;
case 0x5a53b4:c.instructions+=3;goto B5a53b4;
case 0x5a53b7:c.instructions+=2;goto B5a53b7;
case 0x5a53bd:c.instructions+=1;goto B5a53bd;
case 0x5a53c0:goto L5a53c0;
case 0x5a53c2:c.instructions+=4;goto B5a53c2;
case 0x5a53c8:c.instructions+=3;goto B5a53c8;
case 0x5a53ca:c.instructions+=2;goto B5a53ca;
case 0x5a53cd:c.instructions+=1;goto B5a53cd;
case 0x5a53cf:goto L5a53cf;
case 0x5a53d1:c.instructions+=5;goto B5a53d1;
case 0x5a53d4:c.instructions+=4;goto B5a53d4;
case 0x5a53da:c.instructions+=3;goto B5a53da;
case 0x5a53dc:c.instructions+=2;goto B5a53dc;
case 0x5a53df:c.instructions+=1;goto B5a53df;
case 0x5a53e5:goto L5a53e5;
case 0x5a53e6:c.instructions+=4;goto B5a53e6;
case 0x5a53e9:c.instructions+=3;goto B5a53e9;
case 0x5a53ec:c.instructions+=2;goto B5a53ec;
case 0x5a53ef:c.instructions+=1;goto B5a53ef;
case 0x5a53f1:goto L5a53f1;
case 0x5a53f6:c.instructions+=2;goto B5a53f6;
case 0x5a53fe:c.instructions+=1;goto B5a53fe;
case 0x5a5402:goto L5a5402;
case 0x5a5405:c.instructions+=5;goto B5a5405;
case 0x5a5408:c.instructions+=4;goto B5a5408;
case 0x5a540e:c.instructions+=3;goto B5a540e;
case 0x5a5410:c.instructions+=2;goto B5a5410;
case 0x5a5413:c.instructions+=1;goto B5a5413;
case 0x5a5419:goto L5a5419;
case 0x5a5420:c.instructions+=10;goto B5a5420;
case 0x5a5427:c.instructions+=9;goto B5a5427;
case 0x5a542a:c.instructions+=8;goto B5a542a;
case 0x5a542d:c.instructions+=7;goto B5a542d;
case 0x5a542e:c.instructions+=6;goto B5a542e;
case 0x5a5431:c.instructions+=5;goto B5a5431;
case 0x5a5432:c.instructions+=4;goto B5a5432;
case 0x5a5436:c.instructions+=3;goto B5a5436;
case 0x5a5437:c.instructions+=2;goto B5a5437;
case 0x5a543d:c.instructions+=1;goto B5a543d;
case 0x5a5442:goto L5a5442;
case 0x5a5445:c.instructions+=7;goto B5a5445;
case 0x5a5449:c.instructions+=6;goto B5a5449;
case 0x5a544a:c.instructions+=5;goto B5a544a;
case 0x5a5450:c.instructions+=4;goto B5a5450;
case 0x5a5451:c.instructions+=3;goto B5a5451;
case 0x5a5455:c.instructions+=2;goto B5a5455;
case 0x5a5456:c.instructions+=1;goto B5a5456;
case 0x5a545b:goto L5a545b;
case 0x5a545f:c.instructions+=23;goto B5a545f;
case 0x5a5465:c.instructions+=22;goto B5a5465;
case 0x5a5469:c.instructions+=21;goto B5a5469;
case 0x5a546f:c.instructions+=20;goto B5a546f;
case 0x5a5472:c.instructions+=19;goto B5a5472;
case 0x5a5476:c.instructions+=18;goto B5a5476;
case 0x5a547c:c.instructions+=17;goto B5a547c;
case 0x5a5480:c.instructions+=16;goto B5a5480;
case 0x5a5484:c.instructions+=15;goto B5a5484;
case 0x5a5486:c.instructions+=14;goto B5a5486;
case 0x5a548a:c.instructions+=13;goto B5a548a;
case 0x5a548e:c.instructions+=12;goto B5a548e;
case 0x5a5492:c.instructions+=11;goto B5a5492;
case 0x5a5494:c.instructions+=10;goto B5a5494;
case 0x5a5496:c.instructions+=9;goto B5a5496;
case 0x5a5499:c.instructions+=8;goto B5a5499;
case 0x5a549b:c.instructions+=7;goto B5a549b;
case 0x5a549d:c.instructions+=6;goto B5a549d;
case 0x5a54a0:c.instructions+=5;goto B5a54a0;
case 0x5a54a2:c.instructions+=4;goto B5a54a2;
case 0x5a54a8:c.instructions+=3;goto B5a54a8;
case 0x5a54aa:c.instructions+=2;goto B5a54aa;
case 0x5a54ad:c.instructions+=1;goto B5a54ad;
case 0x5a54af:goto L5a54af;
case 0x5a54b5:c.instructions+=7;goto B5a54b5;
case 0x5a54b8:c.instructions+=6;goto B5a54b8;
case 0x5a54be:c.instructions+=5;goto B5a54be;
case 0x5a54c1:c.instructions+=4;goto B5a54c1;
case 0x5a54c7:c.instructions+=3;goto B5a54c7;
case 0x5a54c9:c.instructions+=2;goto B5a54c9;
case 0x5a54cc:c.instructions+=1;goto B5a54cc;
case 0x5a54ce:goto L5a54ce;
case 0x5a54d1:c.instructions+=14;goto B5a54d1;
case 0x5a54d7:c.instructions+=13;goto B5a54d7;
case 0x5a54db:c.instructions+=12;goto B5a54db;
case 0x5a54dc:c.instructions+=11;goto B5a54dc;
case 0x5a54e0:c.instructions+=10;goto B5a54e0;
case 0x5a54e2:c.instructions+=9;goto B5a54e2;
case 0x5a54e3:c.instructions+=8;goto B5a54e3;
case 0x5a54e5:c.instructions+=7;goto B5a54e5;
case 0x5a54e9:c.instructions+=6;goto B5a54e9;
case 0x5a54eb:c.instructions+=5;goto B5a54eb;
case 0x5a54ee:c.instructions+=4;goto B5a54ee;
case 0x5a54f2:c.instructions+=3;goto B5a54f2;
case 0x5a54f5:c.instructions+=2;goto B5a54f5;
case 0x5a54f9:c.instructions+=1;goto B5a54f9;
case 0x5a54fe:goto L5a54fe;
case 0x5a5501:c.instructions+=4;goto B5a5501;
case 0x5a5505:c.instructions+=3;goto B5a5505;
case 0x5a550d:c.instructions+=2;goto B5a550d;
case 0x5a5511:c.instructions+=1;goto B5a5511;
case 0x5a5513:goto L5a5513;
case 0x5a5517:goto L5a5517;
case 0x5a5519:goto L5a5519;
case 0x5a551d:c.instructions+=6;goto B5a551d;
case 0x5a5520:c.instructions+=5;goto B5a5520;
case 0x5a5521:c.instructions+=4;goto B5a5521;
case 0x5a5527:c.instructions+=3;goto B5a5527;
case 0x5a552b:c.instructions+=2;goto B5a552b;
case 0x5a552f:c.instructions+=1;goto B5a552f;
case 0x5a5535:goto L5a5535;
case 0x5a5536:c.instructions+=5;goto B5a5536;
case 0x5a5537:c.instructions+=4;goto B5a5537;
case 0x5a5538:c.instructions+=3;goto B5a5538;
case 0x5a553a:c.instructions+=2;goto B5a553a;
case 0x5a553b:c.instructions+=1;goto B5a553b;
case 0x5a5540:goto L5a5540;
case 0x5a5541:c.instructions+=23;goto B5a5541;
case 0x5a5543:c.instructions+=22;goto B5a5543;
case 0x5a5546:c.instructions+=21;goto B5a5546;
case 0x5a5547:c.instructions+=20;goto B5a5547;
case 0x5a5549:c.instructions+=19;goto B5a5549;
case 0x5a554c:c.instructions+=18;goto B5a554c;
case 0x5a554f:c.instructions+=17;goto B5a554f;
case 0x5a5552:c.instructions+=16;goto B5a5552;
case 0x5a5555:c.instructions+=15;goto B5a5555;
case 0x5a5558:c.instructions+=14;goto B5a5558;
case 0x5a555a:c.instructions+=13;goto B5a555a;
case 0x5a555c:c.instructions+=12;goto B5a555c;
case 0x5a555f:c.instructions+=11;goto B5a555f;
case 0x5a5562:c.instructions+=10;goto B5a5562;
case 0x5a5564:c.instructions+=9;goto B5a5564;
case 0x5a5565:c.instructions+=8;goto B5a5565;
case 0x5a5568:c.instructions+=7;goto B5a5568;
case 0x5a556b:c.instructions+=6;goto B5a556b;
case 0x5a556e:c.instructions+=5;goto B5a556e;
case 0x5a5571:c.instructions+=4;goto B5a5571;
case 0x5a5572:c.instructions+=3;goto B5a5572;
case 0x5a5575:c.instructions+=2;goto B5a5575;
case 0x5a5576:c.instructions+=1;goto B5a5576;
case 0x5a557b:goto L5a557b;
case 0x5a557e:c.instructions+=5;goto B5a557e;
case 0x5a5581:c.instructions+=4;goto B5a5581;
case 0x5a5584:c.instructions+=3;goto B5a5584;
case 0x5a5589:c.instructions+=2;goto B5a5589;
case 0x5a558a:c.instructions+=1;goto B5a558a;
case 0x5a558f:goto L5a558f;
case 0x5a5592:c.instructions+=5;goto B5a5592;
case 0x5a5595:c.instructions+=4;goto B5a5595;
case 0x5a5596:c.instructions+=3;goto B5a5596;
case 0x5a559b:c.instructions+=2;goto B5a559b;
case 0x5a559c:c.instructions+=1;goto B5a559c;
case 0x5a55a1:goto L5a55a1;
case 0x5a55a4:c.instructions+=43;goto B5a55a4;
case 0x5a55aa:c.instructions+=42;goto B5a55aa;
case 0x5a55b0:c.instructions+=41;goto B5a55b0;
case 0x5a55b6:c.instructions+=40;goto B5a55b6;
case 0x5a55b9:c.instructions+=39;goto B5a55b9;
case 0x5a55be:c.instructions+=38;goto B5a55be;
case 0x5a55c0:c.instructions+=37;goto B5a55c0;
case 0x5a55c3:c.instructions+=36;goto B5a55c3;
case 0x5a55c6:c.instructions+=35;goto B5a55c6;
case 0x5a55c9:c.instructions+=34;goto B5a55c9;
case 0x5a55cc:c.instructions+=33;goto B5a55cc;
case 0x5a55cf:c.instructions+=32;goto B5a55cf;
case 0x5a55d1:c.instructions+=31;goto B5a55d1;
case 0x5a55d8:c.instructions+=30;goto B5a55d8;
case 0x5a55da:c.instructions+=29;goto B5a55da;
case 0x5a55dc:c.instructions+=28;goto B5a55dc;
case 0x5a55de:c.instructions+=27;goto B5a55de;
case 0x5a55e0:c.instructions+=26;goto B5a55e0;
case 0x5a55e2:c.instructions+=25;goto B5a55e2;
case 0x5a55e4:c.instructions+=24;goto B5a55e4;
case 0x5a55e6:c.instructions+=23;goto B5a55e6;
case 0x5a55e8:c.instructions+=22;goto B5a55e8;
case 0x5a55ea:c.instructions+=21;goto B5a55ea;
case 0x5a55ec:c.instructions+=20;goto B5a55ec;
case 0x5a55ee:c.instructions+=19;goto B5a55ee;
case 0x5a55f0:c.instructions+=18;goto B5a55f0;
case 0x5a55f6:c.instructions+=17;goto B5a55f6;
case 0x5a55f9:c.instructions+=16;goto B5a55f9;
case 0x5a55ff:c.instructions+=15;goto B5a55ff;
case 0x5a5602:c.instructions+=14;goto B5a5602;
case 0x5a5608:c.instructions+=13;goto B5a5608;
case 0x5a560d:c.instructions+=12;goto B5a560d;
case 0x5a560f:c.instructions+=11;goto B5a560f;
case 0x5a5611:c.instructions+=10;goto B5a5611;
case 0x5a5617:c.instructions+=9;goto B5a5617;
case 0x5a561a:c.instructions+=8;goto B5a561a;
case 0x5a561c:c.instructions+=7;goto B5a561c;
case 0x5a561f:c.instructions+=6;goto B5a561f;
case 0x5a5622:c.instructions+=5;goto B5a5622;
case 0x5a5625:c.instructions+=4;goto B5a5625;
case 0x5a5628:c.instructions+=3;goto B5a5628;
case 0x5a5629:c.instructions+=2;goto B5a5629;
case 0x5a562a:c.instructions+=1;goto B5a562a;
case 0x5a562f:goto L5a562f;
case 0x5a5632:c.instructions+=30;goto B5a5632;
case 0x5a5635:c.instructions+=29;goto B5a5635;
case 0x5a563c:c.instructions+=28;goto B5a563c;
case 0x5a563f:c.instructions+=27;goto B5a563f;
case 0x5a5642:c.instructions+=26;goto B5a5642;
case 0x5a5645:c.instructions+=25;goto B5a5645;
case 0x5a5648:c.instructions+=24;goto B5a5648;
case 0x5a564b:c.instructions+=23;goto B5a564b;
case 0x5a564d:c.instructions+=22;goto B5a564d;
case 0x5a5650:c.instructions+=21;goto B5a5650;
case 0x5a5653:c.instructions+=20;goto B5a5653;
case 0x5a5655:c.instructions+=19;goto B5a5655;
case 0x5a565b:c.instructions+=18;goto B5a565b;
case 0x5a565e:c.instructions+=17;goto B5a565e;
case 0x5a5665:c.instructions+=16;goto B5a5665;
case 0x5a5668:c.instructions+=15;goto B5a5668;
case 0x5a566f:c.instructions+=14;goto B5a566f;
case 0x5a5672:c.instructions+=13;goto B5a5672;
case 0x5a5675:c.instructions+=12;goto B5a5675;
case 0x5a5678:c.instructions+=11;goto B5a5678;
case 0x5a567e:c.instructions+=10;goto B5a567e;
case 0x5a5681:c.instructions+=9;goto B5a5681;
case 0x5a5684:c.instructions+=8;goto B5a5684;
case 0x5a568a:c.instructions+=7;goto B5a568a;
case 0x5a5690:c.instructions+=6;goto B5a5690;
case 0x5a5693:c.instructions+=5;goto B5a5693;
case 0x5a5696:c.instructions+=4;goto B5a5696;
case 0x5a569c:c.instructions+=3;goto B5a569c;
case 0x5a569e:c.instructions+=2;goto B5a569e;
case 0x5a56a1:c.instructions+=1;goto B5a56a1;
case 0x5a56a3:goto L5a56a3;
case 0x5a56a9:goto L5a56a9;
case 0x5a56ab:c.instructions+=4;goto B5a56ab;
case 0x5a56b1:c.instructions+=3;goto B5a56b1;
case 0x5a56b3:c.instructions+=2;goto B5a56b3;
case 0x5a56b6:c.instructions+=1;goto B5a56b6;
case 0x5a56b8:goto L5a56b8;
case 0x5a56ba:c.instructions+=2;goto B5a56ba;
case 0x5a56c0:c.instructions+=1;goto B5a56c0;
case 0x5a56c2:goto L5a56c2;
case 0x5a56c4:c.instructions+=9;goto B5a56c4;
case 0x5a56c6:c.instructions+=8;goto B5a56c6;
case 0x5a56c9:c.instructions+=7;goto B5a56c9;
case 0x5a56cb:c.instructions+=6;goto B5a56cb;
case 0x5a56ce:c.instructions+=5;goto B5a56ce;
case 0x5a56d0:c.instructions+=4;goto B5a56d0;
case 0x5a56d3:c.instructions+=3;goto B5a56d3;
case 0x5a56d5:c.instructions+=2;goto B5a56d5;
case 0x5a56d8:c.instructions+=1;goto B5a56d8;
case 0x5a56da:goto L5a56da;
case 0x5a56dc:c.instructions+=1;goto B5a56dc;
case 0x5a56df:goto L5a56df;
case 0x5a56e2:c.instructions+=4;goto B5a56e2;
case 0x5a56e4:c.instructions+=3;goto B5a56e4;
case 0x5a56e6:c.instructions+=2;goto B5a56e6;
case 0x5a56e9:c.instructions+=1;goto B5a56e9;
case 0x5a56eb:goto L5a56eb;
case 0x5a56ed:c.instructions+=1;goto B5a56ed;
case 0x5a56f0:goto L5a56f0;
case 0x5a56f6:c.instructions+=2;goto B5a56f6;
case 0x5a56f7:c.instructions+=1;goto B5a56f7;
case 0x5a56fc:goto L5a56fc;
case 0x5a56fe:c.instructions+=38;goto B5a56fe;
case 0x5a5703:c.instructions+=37;goto B5a5703;
case 0x5a5705:c.instructions+=36;goto B5a5705;
case 0x5a5707:c.instructions+=35;goto B5a5707;
case 0x5a570a:c.instructions+=34;goto B5a570a;
case 0x5a570c:c.instructions+=33;goto B5a570c;
case 0x5a570f:c.instructions+=32;goto B5a570f;
case 0x5a5711:c.instructions+=31;goto B5a5711;
case 0x5a5718:c.instructions+=30;goto B5a5718;
case 0x5a571d:c.instructions+=29;goto B5a571d;
case 0x5a571f:c.instructions+=28;goto B5a571f;
case 0x5a5722:c.instructions+=27;goto B5a5722;
case 0x5a5727:c.instructions+=26;goto B5a5727;
case 0x5a5729:c.instructions+=25;goto B5a5729;
case 0x5a572c:c.instructions+=24;goto B5a572c;
case 0x5a5731:c.instructions+=23;goto B5a5731;
case 0x5a5733:c.instructions+=22;goto B5a5733;
case 0x5a5736:c.instructions+=21;goto B5a5736;
case 0x5a573b:c.instructions+=20;goto B5a573b;
case 0x5a573d:c.instructions+=19;goto B5a573d;
case 0x5a5740:c.instructions+=18;goto B5a5740;
case 0x5a5745:c.instructions+=17;goto B5a5745;
case 0x5a5747:c.instructions+=16;goto B5a5747;
case 0x5a574a:c.instructions+=15;goto B5a574a;
case 0x5a574f:c.instructions+=14;goto B5a574f;
case 0x5a5751:c.instructions+=13;goto B5a5751;
case 0x5a5754:c.instructions+=12;goto B5a5754;
case 0x5a5759:c.instructions+=11;goto B5a5759;
case 0x5a575e:c.instructions+=10;goto B5a575e;
case 0x5a5760:c.instructions+=9;goto B5a5760;
case 0x5a5762:c.instructions+=8;goto B5a5762;
case 0x5a5767:c.instructions+=7;goto B5a5767;
case 0x5a5769:c.instructions+=6;goto B5a5769;
case 0x5a576b:c.instructions+=5;goto B5a576b;
case 0x5a576e:c.instructions+=4;goto B5a576e;
case 0x5a5771:c.instructions+=3;goto B5a5771;
case 0x5a5774:c.instructions+=2;goto B5a5774;
case 0x5a5777:c.instructions+=1;goto B5a5777;
case 0x5a5779:goto L5a5779;
case 0x5a577c:c.instructions+=2;goto B5a577c;
case 0x5a577f:c.instructions+=1;goto B5a577f;
case 0x5a5780:goto L5a5780;
case 0x5a5782:c.instructions+=17;goto B5a5782;
case 0x5a5785:c.instructions+=16;goto B5a5785;
case 0x5a5788:c.instructions+=15;goto B5a5788;
case 0x5a578a:c.instructions+=14;goto B5a578a;
case 0x5a578d:c.instructions+=13;goto B5a578d;
case 0x5a578f:c.instructions+=12;goto B5a578f;
case 0x5a5792:c.instructions+=11;goto B5a5792;
case 0x5a5795:c.instructions+=10;goto B5a5795;
case 0x5a5798:c.instructions+=9;goto B5a5798;
case 0x5a579a:c.instructions+=8;goto B5a579a;
case 0x5a579d:c.instructions+=7;goto B5a579d;
case 0x5a57a0:c.instructions+=6;goto B5a57a0;
case 0x5a57a3:c.instructions+=5;goto B5a57a3;
case 0x5a57a6:c.instructions+=4;goto B5a57a6;
case 0x5a57a9:c.instructions+=3;goto B5a57a9;
case 0x5a57ab:c.instructions+=2;goto B5a57ab;
case 0x5a57ae:c.instructions+=1;goto B5a57ae;
case 0x5a57b0:goto L5a57b0;
case 0x5a57b6:c.instructions+=1;goto B5a57b6;
case 0x5a57b8:goto L5a57b8;
case 0x5a57bb:c.instructions+=2;goto B5a57bb;
case 0x5a57be:c.instructions+=1;goto B5a57be;
case 0x5a57c1:goto L5a57c1;
case 0x5a57c4:c.instructions+=15;goto B5a57c4;
case 0x5a57c7:c.instructions+=14;goto B5a57c7;
case 0x5a57ca:c.instructions+=13;goto B5a57ca;
case 0x5a57cc:c.instructions+=12;goto B5a57cc;
case 0x5a57ce:c.instructions+=11;goto B5a57ce;
case 0x5a57d0:c.instructions+=10;goto B5a57d0;
case 0x5a57d3:c.instructions+=9;goto B5a57d3;
case 0x5a57d6:c.instructions+=8;goto B5a57d6;
case 0x5a57d9:c.instructions+=7;goto B5a57d9;
case 0x5a57db:c.instructions+=6;goto B5a57db;
case 0x5a57dd:c.instructions+=5;goto B5a57dd;
case 0x5a57e4:c.instructions+=4;goto B5a57e4;
case 0x5a57e6:c.instructions+=3;goto B5a57e6;
case 0x5a57ec:c.instructions+=2;goto B5a57ec;
case 0x5a57f3:c.instructions+=1;goto B5a57f3;
case 0x5a57f5:goto L5a57f5;
case 0x5a57f7:c.instructions+=1;goto B5a57f7;
case 0x5a57f9:goto L5a57f9;
case 0x5a57ff:c.instructions+=2;goto B5a57ff;
case 0x5a5800:c.instructions+=1;goto B5a5800;
case 0x5a5802:goto L5a5802;
case 0x5a5804:c.instructions+=1;goto B5a5804;
case 0x5a5806:goto L5a5806;
case 0x5a580c:c.instructions+=1;goto B5a580c;
case 0x5a580d:goto L5a580d;
case 0x5a5813:goto L5a5813;
case 0x5a5815:c.instructions+=10;goto B5a5815;
case 0x5a5818:c.instructions+=9;goto B5a5818;
case 0x5a581e:c.instructions+=8;goto B5a581e;
case 0x5a5821:c.instructions+=7;goto B5a5821;
case 0x5a5823:c.instructions+=6;goto B5a5823;
case 0x5a5826:c.instructions+=5;goto B5a5826;
case 0x5a5829:c.instructions+=4;goto B5a5829;
case 0x5a582b:c.instructions+=3;goto B5a582b;
case 0x5a582d:c.instructions+=2;goto B5a582d;
case 0x5a582f:c.instructions+=1;goto B5a582f;
case 0x5a5831:goto L5a5831;
case 0x5a5833:goto L5a5833;
case 0x5a5839:c.instructions+=3;goto B5a5839;
case 0x5a583b:c.instructions+=2;goto B5a583b;
case 0x5a583e:c.instructions+=1;goto B5a583e;
case 0x5a5840:goto L5a5840;
case 0x5a5843:c.instructions+=9;goto B5a5843;
case 0x5a5845:c.instructions+=8;goto B5a5845;
case 0x5a584c:c.instructions+=7;goto B5a584c;
case 0x5a5852:c.instructions+=6;goto B5a5852;
case 0x5a5855:c.instructions+=5;goto B5a5855;
case 0x5a585b:c.instructions+=4;goto B5a585b;
case 0x5a5862:c.instructions+=3;goto B5a5862;
case 0x5a5869:c.instructions+=2;goto B5a5869;
case 0x5a586b:c.instructions+=1;goto B5a586b;
case 0x5a586d:goto L5a586d;
case 0x5a586f:c.instructions+=12;goto B5a586f;
case 0x5a5875:c.instructions+=11;goto B5a5875;
case 0x5a5878:c.instructions+=10;goto B5a5878;
case 0x5a587a:c.instructions+=9;goto B5a587a;
case 0x5a587d:c.instructions+=8;goto B5a587d;
case 0x5a587f:c.instructions+=7;goto B5a587f;
case 0x5a5882:c.instructions+=6;goto B5a5882;
case 0x5a5888:c.instructions+=5;goto B5a5888;
case 0x5a588d:c.instructions+=4;goto B5a588d;
case 0x5a588f:c.instructions+=3;goto B5a588f;
case 0x5a5896:c.instructions+=2;goto B5a5896;
case 0x5a589d:c.instructions+=1;goto B5a589d;
case 0x5a589f:goto L5a589f;
case 0x5a58a1:c.instructions+=9;goto B5a58a1;
case 0x5a58a7:c.instructions+=8;goto B5a58a7;
case 0x5a58aa:c.instructions+=7;goto B5a58aa;
case 0x5a58ad:c.instructions+=6;goto B5a58ad;
case 0x5a58af:c.instructions+=5;goto B5a58af;
case 0x5a58b2:c.instructions+=4;goto B5a58b2;
case 0x5a58b4:c.instructions+=3;goto B5a58b4;
case 0x5a58ba:c.instructions+=2;goto B5a58ba;
case 0x5a58bc:c.instructions+=1;goto B5a58bc;
case 0x5a58be:goto L5a58be;
case 0x5a58c4:c.instructions+=1;goto B5a58c4;
case 0x5a58c6:goto L5a58c6;
case 0x5a58cc:goto L5a58cc;
case 0x5a58cf:c.instructions+=7;goto B5a58cf;
case 0x5a58d2:c.instructions+=6;goto B5a58d2;
case 0x5a58d4:c.instructions+=5;goto B5a58d4;
case 0x5a58d5:c.instructions+=4;goto B5a58d5;
case 0x5a58d8:c.instructions+=3;goto B5a58d8;
case 0x5a58db:c.instructions+=2;goto B5a58db;
case 0x5a58de:c.instructions+=1;goto B5a58de;
case 0x5a58e4:goto L5a58e4;
case 0x5a58e7:c.instructions+=3;goto B5a58e7;
case 0x5a58ed:c.instructions+=2;goto B5a58ed;
case 0x5a58ef:c.instructions+=1;goto B5a58ef;
case 0x5a58f1:goto L5a58f1;
case 0x5a58f7:c.instructions+=2;goto B5a58f7;
case 0x5a58fa:c.instructions+=1;goto B5a58fa;
case 0x5a58fc:goto L5a58fc;
case 0x5a5902:goto L5a5902;
case 0x5a5905:c.instructions+=20;goto B5a5905;
case 0x5a590b:c.instructions+=19;goto B5a590b;
case 0x5a590e:c.instructions+=18;goto B5a590e;
case 0x5a5911:c.instructions+=17;goto B5a5911;
case 0x5a5914:c.instructions+=16;goto B5a5914;
case 0x5a591a:c.instructions+=15;goto B5a591a;
case 0x5a591d:c.instructions+=14;goto B5a591d;
case 0x5a5920:c.instructions+=13;goto B5a5920;
case 0x5a5923:c.instructions+=12;goto B5a5923;
case 0x5a5925:c.instructions+=11;goto B5a5925;
case 0x5a5928:c.instructions+=10;goto B5a5928;
case 0x5a592b:c.instructions+=9;goto B5a592b;
case 0x5a5931:c.instructions+=8;goto B5a5931;
case 0x5a5934:c.instructions+=7;goto B5a5934;
case 0x5a5937:c.instructions+=6;goto B5a5937;
case 0x5a593a:c.instructions+=5;goto B5a593a;
case 0x5a5940:c.instructions+=4;goto B5a5940;
case 0x5a5943:c.instructions+=3;goto B5a5943;
case 0x5a5946:c.instructions+=2;goto B5a5946;
case 0x5a5948:c.instructions+=1;goto B5a5948;
case 0x5a594a:goto L5a594a;
case 0x5a594e:c.instructions+=1;goto B5a594e;
case 0x5a5950:goto L5a5950;
case 0x5a5952:c.instructions+=1;goto B5a5952;
case 0x5a5954:goto L5a5954;
case 0x5a5956:goto L5a5956;
case 0x5a5959:c.instructions+=7;goto B5a5959;
case 0x5a595c:c.instructions+=6;goto B5a595c;
case 0x5a595f:c.instructions+=5;goto B5a595f;
case 0x5a5962:c.instructions+=4;goto B5a5962;
case 0x5a5968:c.instructions+=3;goto B5a5968;
case 0x5a596e:c.instructions+=2;goto B5a596e;
case 0x5a5974:c.instructions+=1;goto B5a5974;
case 0x5a5979:goto L5a5979;
case 0x5a597b:c.instructions+=14;goto B5a597b;
case 0x5a597d:c.instructions+=13;goto B5a597d;
case 0x5a5980:c.instructions+=12;goto B5a5980;
case 0x5a5981:c.instructions+=11;goto B5a5981;
case 0x5a5984:c.instructions+=10;goto B5a5984;
case 0x5a598b:c.instructions+=9;goto B5a598b;
case 0x5a598e:c.instructions+=8;goto B5a598e;
case 0x5a5990:c.instructions+=7;goto B5a5990;
case 0x5a5993:c.instructions+=6;goto B5a5993;
case 0x5a5996:c.instructions+=5;goto B5a5996;
case 0x5a5999:c.instructions+=4;goto B5a5999;
case 0x5a599f:c.instructions+=3;goto B5a599f;
case 0x5a59a1:c.instructions+=2;goto B5a59a1;
case 0x5a59a4:c.instructions+=1;goto B5a59a4;
case 0x5a59a6:goto L5a59a6;
case 0x5a59ac:c.instructions+=4;goto B5a59ac;
case 0x5a59b2:c.instructions+=3;goto B5a59b2;
case 0x5a59b4:c.instructions+=2;goto B5a59b4;
case 0x5a59b7:c.instructions+=1;goto B5a59b7;
case 0x5a59b9:goto L5a59b9;
case 0x5a59bf:c.instructions+=1;goto B5a59bf;
case 0x5a59c1:goto L5a59c1;
case 0x5a59c4:c.instructions+=1;goto B5a59c4;
case 0x5a59ca:goto L5a59ca;
case 0x5a59cc:c.instructions+=7;goto B5a59cc;
case 0x5a59ce:c.instructions+=6;goto B5a59ce;
case 0x5a59d1:c.instructions+=5;goto B5a59d1;
case 0x5a59d4:c.instructions+=4;goto B5a59d4;
case 0x5a59d6:c.instructions+=3;goto B5a59d6;
case 0x5a59d8:c.instructions+=2;goto B5a59d8;
case 0x5a59db:c.instructions+=1;goto B5a59db;
case 0x5a59dd:goto L5a59dd;
case 0x5a59e3:c.instructions+=4;goto B5a59e3;
case 0x5a59e9:c.instructions+=3;goto B5a59e9;
case 0x5a59eb:c.instructions+=2;goto B5a59eb;
case 0x5a59ee:c.instructions+=1;goto B5a59ee;
case 0x5a59f0:goto L5a59f0;
case 0x5a59f6:c.instructions+=1;goto B5a59f6;
case 0x5a59f8:goto L5a59f8;
case 0x5a59fb:c.instructions+=1;goto B5a59fb;
case 0x5a5a01:goto L5a5a01;
case 0x5a5a04:c.instructions+=7;goto B5a5a04;
case 0x5a5a07:c.instructions+=6;goto B5a5a07;
case 0x5a5a09:c.instructions+=5;goto B5a5a09;
case 0x5a5a0c:c.instructions+=4;goto B5a5a0c;
case 0x5a5a0e:c.instructions+=3;goto B5a5a0e;
case 0x5a5a10:c.instructions+=2;goto B5a5a10;
case 0x5a5a13:c.instructions+=1;goto B5a5a13;
case 0x5a5a15:goto L5a5a15;
case 0x5a5a17:c.instructions+=1;goto B5a5a17;
case 0x5a5a1a:goto L5a5a1a;
case 0x5a5a20:c.instructions+=4;goto B5a5a20;
case 0x5a5a26:c.instructions+=3;goto B5a5a26;
case 0x5a5a28:c.instructions+=2;goto B5a5a28;
case 0x5a5a2b:c.instructions+=1;goto B5a5a2b;
case 0x5a5a2d:goto L5a5a2d;
case 0x5a5a33:c.instructions+=1;goto B5a5a33;
case 0x5a5a35:goto L5a5a35;
case 0x5a5a38:c.instructions+=1;goto B5a5a38;
case 0x5a5a3e:goto L5a5a3e;
case 0x5a5a44:c.instructions+=24;goto B5a5a44;
case 0x5a5a47:c.instructions+=23;goto B5a5a47;
case 0x5a5a49:c.instructions+=22;goto B5a5a49;
case 0x5a5a4f:c.instructions+=21;goto B5a5a4f;
case 0x5a5a51:c.instructions+=20;goto B5a5a51;
case 0x5a5a57:c.instructions+=19;goto B5a5a57;
case 0x5a5a5a:c.instructions+=18;goto B5a5a5a;
case 0x5a5a60:c.instructions+=17;goto B5a5a60;
case 0x5a5a63:c.instructions+=16;goto B5a5a63;
case 0x5a5a66:c.instructions+=15;goto B5a5a66;
case 0x5a5a69:c.instructions+=14;goto B5a5a69;
case 0x5a5a6b:c.instructions+=13;goto B5a5a6b;
case 0x5a5a71:c.instructions+=12;goto B5a5a71;
case 0x5a5a73:c.instructions+=11;goto B5a5a73;
case 0x5a5a76:c.instructions+=10;goto B5a5a76;
case 0x5a5a7c:c.instructions+=9;goto B5a5a7c;
case 0x5a5a7e:c.instructions+=8;goto B5a5a7e;
case 0x5a5a81:c.instructions+=7;goto B5a5a81;
case 0x5a5a87:c.instructions+=6;goto B5a5a87;
case 0x5a5a89:c.instructions+=5;goto B5a5a89;
case 0x5a5a8c:c.instructions+=4;goto B5a5a8c;
case 0x5a5a8f:c.instructions+=3;goto B5a5a8f;
case 0x5a5a91:c.instructions+=2;goto B5a5a91;
case 0x5a5a94:c.instructions+=1;goto B5a5a94;
case 0x5a5a96:goto L5a5a96;
case 0x5a5a98:c.instructions+=1;goto B5a5a98;
case 0x5a5a9b:goto L5a5a9b;
case 0x5a5a9e:c.instructions+=4;goto B5a5a9e;
case 0x5a5aa1:c.instructions+=3;goto B5a5aa1;
case 0x5a5aa3:c.instructions+=2;goto B5a5aa3;
case 0x5a5aa6:c.instructions+=1;goto B5a5aa6;
case 0x5a5aa8:goto L5a5aa8;
case 0x5a5aab:c.instructions+=1;goto B5a5aab;
case 0x5a5aad:goto L5a5aad;
case 0x5a5ab0:goto L5a5ab0;
case 0x5a5ab6:c.instructions+=12;goto B5a5ab6;
case 0x5a5abc:c.instructions+=11;goto B5a5abc;
case 0x5a5abe:c.instructions+=10;goto B5a5abe;
case 0x5a5ac0:c.instructions+=9;goto B5a5ac0;
case 0x5a5ac3:c.instructions+=8;goto B5a5ac3;
case 0x5a5ac5:c.instructions+=7;goto B5a5ac5;
case 0x5a5ac7:c.instructions+=6;goto B5a5ac7;
case 0x5a5ac9:c.instructions+=5;goto B5a5ac9;
case 0x5a5acc:c.instructions+=4;goto B5a5acc;
case 0x5a5ad2:c.instructions+=3;goto B5a5ad2;
case 0x5a5ad4:c.instructions+=2;goto B5a5ad4;
case 0x5a5ad7:c.instructions+=1;goto B5a5ad7;
case 0x5a5ad9:goto L5a5ad9;
case 0x5a5ae0:goto L5a5ae0;
case 0x5a5ae6:c.instructions+=3;goto B5a5ae6;
case 0x5a5ae8:c.instructions+=2;goto B5a5ae8;
case 0x5a5aeb:c.instructions+=1;goto B5a5aeb;
case 0x5a5aed:goto L5a5aed;
case 0x5a5aef:c.instructions+=1;goto B5a5aef;
case 0x5a5af5:goto L5a5af5;
case 0x5a5af8:c.instructions+=17;goto B5a5af8;
case 0x5a5afb:c.instructions+=16;goto B5a5afb;
case 0x5a5b01:c.instructions+=15;goto B5a5b01;
case 0x5a5b07:c.instructions+=14;goto B5a5b07;
case 0x5a5b0a:c.instructions+=13;goto B5a5b0a;
case 0x5a5b10:c.instructions+=12;goto B5a5b10;
case 0x5a5b13:c.instructions+=11;goto B5a5b13;
case 0x5a5b16:c.instructions+=10;goto B5a5b16;
case 0x5a5b19:c.instructions+=9;goto B5a5b19;
case 0x5a5b1f:c.instructions+=8;goto B5a5b1f;
case 0x5a5b22:c.instructions+=7;goto B5a5b22;
case 0x5a5b28:c.instructions+=6;goto B5a5b28;
case 0x5a5b2a:c.instructions+=5;goto B5a5b2a;
case 0x5a5b30:c.instructions+=4;goto B5a5b30;
case 0x5a5b36:c.instructions+=3;goto B5a5b36;
case 0x5a5b3c:c.instructions+=2;goto B5a5b3c;
case 0x5a5b3f:c.instructions+=1;goto B5a5b3f;
case 0x5a5b40:goto L5a5b40;
case 0x5a5b41:c.instructions+=2;goto B5a5b41;
case 0x5a5b43:c.instructions+=1;goto B5a5b43;
case 0x5a5b48:goto L5a5b48;
case 0x5a5b49:c.instructions+=2;goto B5a5b49;
case 0x5a5b4c:c.instructions+=1;goto B5a5b4c;
case 0x5a5b4e:goto L5a5b4e;
case 0x5a5b4f:c.instructions+=4;goto B5a5b4f;
case 0x5a5b50:c.instructions+=3;goto B5a5b50;
case 0x5a5b52:c.instructions+=2;goto B5a5b52;
case 0x5a5b53:c.instructions+=1;goto B5a5b53;
case 0x5a5b60:goto L5a5b60;
case 0x5a5b61:c.instructions+=9;goto B5a5b61;
case 0x5a5b63:c.instructions+=8;goto B5a5b63;
case 0x5a5b66:c.instructions+=7;goto B5a5b66;
case 0x5a5b69:c.instructions+=6;goto B5a5b69;
case 0x5a5b6a:c.instructions+=5;goto B5a5b6a;
case 0x5a5b6c:c.instructions+=4;goto B5a5b6c;
case 0x5a5b6f:c.instructions+=3;goto B5a5b6f;
case 0x5a5b72:c.instructions+=2;goto B5a5b72;
case 0x5a5b75:c.instructions+=1;goto B5a5b75;
case 0x5a5b7b:goto L5a5b7b;
case 0x5a5b7e:c.instructions+=1;goto B5a5b7e;
case 0x5a5b84:goto L5a5b84;
case 0x5a5b87:c.instructions+=19;goto B5a5b87;
case 0x5a5b8d:c.instructions+=18;goto B5a5b8d;
case 0x5a5b93:c.instructions+=17;goto B5a5b93;
case 0x5a5b96:c.instructions+=16;goto B5a5b96;
case 0x5a5b9c:c.instructions+=15;goto B5a5b9c;
case 0x5a5ba2:c.instructions+=14;goto B5a5ba2;
case 0x5a5ba4:c.instructions+=13;goto B5a5ba4;
case 0x5a5ba6:c.instructions+=12;goto B5a5ba6;
case 0x5a5ba8:c.instructions+=11;goto B5a5ba8;
case 0x5a5baa:c.instructions+=10;goto B5a5baa;
case 0x5a5bac:c.instructions+=9;goto B5a5bac;
case 0x5a5bae:c.instructions+=8;goto B5a5bae;
case 0x5a5bb0:c.instructions+=7;goto B5a5bb0;
case 0x5a5bb2:c.instructions+=6;goto B5a5bb2;
case 0x5a5bb4:c.instructions+=5;goto B5a5bb4;
case 0x5a5bb6:c.instructions+=4;goto B5a5bb6;
case 0x5a5bb8:c.instructions+=3;goto B5a5bb8;
case 0x5a5bba:c.instructions+=2;goto B5a5bba;
case 0x5a5bbe:c.instructions+=1;goto B5a5bbe;
case 0x5a5bc0:goto L5a5bc0;
case 0x5a5bc4:c.instructions+=4;goto B5a5bc4;
case 0x5a5bca:c.instructions+=3;goto B5a5bca;
case 0x5a5bcc:c.instructions+=2;goto B5a5bcc;
case 0x5a5bcf:c.instructions+=1;goto B5a5bcf;
case 0x5a5bd1:goto L5a5bd1;
case 0x5a5bd7:c.instructions+=5;goto B5a5bd7;
case 0x5a5bdb:c.instructions+=4;goto B5a5bdb;
case 0x5a5bdc:c.instructions+=3;goto B5a5bdc;
case 0x5a5be1:c.instructions+=2;goto B5a5be1;
case 0x5a5be5:c.instructions+=1;goto B5a5be5;
case 0x5a5bea:goto L5a5bea;
case 0x5a5bee:c.instructions+=9;goto B5a5bee;
case 0x5a5bf1:c.instructions+=8;goto B5a5bf1;
case 0x5a5bf2:c.instructions+=7;goto B5a5bf2;
case 0x5a5bf4:c.instructions+=6;goto B5a5bf4;
case 0x5a5bfa:c.instructions+=5;goto B5a5bfa;
case 0x5a5bfd:c.instructions+=4;goto B5a5bfd;
case 0x5a5bfe:c.instructions+=3;goto B5a5bfe;
case 0x5a5c02:c.instructions+=2;goto B5a5c02;
case 0x5a5c03:c.instructions+=1;goto B5a5c03;
case 0x5a5c08:goto L5a5c08;
case 0x5a5c0b:c.instructions+=4;goto B5a5c0b;
case 0x5a5c0f:c.instructions+=3;goto B5a5c0f;
case 0x5a5c10:c.instructions+=2;goto B5a5c10;
case 0x5a5c12:c.instructions+=1;goto B5a5c12;
case 0x5a5c17:goto L5a5c17;
case 0x5a5c18:c.instructions+=3;goto B5a5c18;
case 0x5a5c1a:c.instructions+=2;goto B5a5c1a;
case 0x5a5c1b:c.instructions+=1;goto B5a5c1b;
case 0x5a5c20:goto L5a5c20;
case 0x5a5c21:c.instructions+=26;goto B5a5c21;
case 0x5a5c23:c.instructions+=25;goto B5a5c23;
case 0x5a5c26:c.instructions+=24;goto B5a5c26;
case 0x5a5c29:c.instructions+=23;goto B5a5c29;
case 0x5a5c2e:c.instructions+=22;goto B5a5c2e;
case 0x5a5c34:c.instructions+=21;goto B5a5c34;
case 0x5a5c35:c.instructions+=20;goto B5a5c35;
case 0x5a5c36:c.instructions+=19;goto B5a5c36;
case 0x5a5c37:c.instructions+=18;goto B5a5c37;
case 0x5a5c39:c.instructions+=17;goto B5a5c39;
case 0x5a5c3f:c.instructions+=16;goto B5a5c3f;
case 0x5a5c43:c.instructions+=15;goto B5a5c43;
case 0x5a5c46:c.instructions+=14;goto B5a5c46;
case 0x5a5c4a:c.instructions+=13;goto B5a5c4a;
case 0x5a5c4e:c.instructions+=12;goto B5a5c4e;
case 0x5a5c54:c.instructions+=11;goto B5a5c54;
case 0x5a5c5a:c.instructions+=10;goto B5a5c5a;
case 0x5a5c60:c.instructions+=9;goto B5a5c60;
case 0x5a5c66:c.instructions+=8;goto B5a5c66;
case 0x5a5c68:c.instructions+=7;goto B5a5c68;
case 0x5a5c6e:c.instructions+=6;goto B5a5c6e;
case 0x5a5c74:c.instructions+=5;goto B5a5c74;
case 0x5a5c76:c.instructions+=4;goto B5a5c76;
case 0x5a5c7c:c.instructions+=3;goto B5a5c7c;
case 0x5a5c7e:c.instructions+=2;goto B5a5c7e;
case 0x5a5c81:c.instructions+=1;goto B5a5c81;
case 0x5a5c83:goto L5a5c83;
case 0x5a5c89:c.instructions+=6;goto B5a5c89;
case 0x5a5c8f:c.instructions+=5;goto B5a5c8f;
case 0x5a5c95:c.instructions+=4;goto B5a5c95;
case 0x5a5c99:c.instructions+=3;goto B5a5c99;
case 0x5a5c9b:c.instructions+=2;goto B5a5c9b;
case 0x5a5c9f:c.instructions+=1;goto B5a5c9f;
case 0x5a5ca3:goto L5a5ca3;
case 0x5a5ca9:c.instructions+=18;goto B5a5ca9;
case 0x5a5caf:c.instructions+=17;goto B5a5caf;
case 0x5a5cb5:c.instructions+=16;goto B5a5cb5;
case 0x5a5cbb:c.instructions+=15;goto B5a5cbb;
case 0x5a5cbc:c.instructions+=14;goto B5a5cbc;
case 0x5a5cc0:c.instructions+=13;goto B5a5cc0;
case 0x5a5cc4:c.instructions+=12;goto B5a5cc4;
case 0x5a5cc5:c.instructions+=11;goto B5a5cc5;
case 0x5a5ccb:c.instructions+=10;goto B5a5ccb;
case 0x5a5ccf:c.instructions+=9;goto B5a5ccf;
case 0x5a5cd2:c.instructions+=8;goto B5a5cd2;
case 0x5a5cd3:c.instructions+=7;goto B5a5cd3;
case 0x5a5cd7:c.instructions+=6;goto B5a5cd7;
case 0x5a5cdb:c.instructions+=5;goto B5a5cdb;
case 0x5a5cdc:c.instructions+=4;goto B5a5cdc;
case 0x5a5ce2:c.instructions+=3;goto B5a5ce2;
case 0x5a5ce5:c.instructions+=2;goto B5a5ce5;
case 0x5a5ce9:c.instructions+=1;goto B5a5ce9;
case 0x5a5cee:goto L5a5cee;
case 0x5a5cf4:c.instructions+=10;goto B5a5cf4;
case 0x5a5cf7:c.instructions+=9;goto B5a5cf7;
case 0x5a5cf9:c.instructions+=8;goto B5a5cf9;
case 0x5a5cff:c.instructions+=7;goto B5a5cff;
case 0x5a5d02:c.instructions+=6;goto B5a5d02;
case 0x5a5d03:c.instructions+=5;goto B5a5d03;
case 0x5a5d07:c.instructions+=4;goto B5a5d07;
case 0x5a5d08:c.instructions+=3;goto B5a5d08;
case 0x5a5d0c:c.instructions+=2;goto B5a5d0c;
case 0x5a5d0d:c.instructions+=1;goto B5a5d0d;
case 0x5a5d12:goto L5a5d12;
case 0x5a5d15:c.instructions+=9;goto B5a5d15;
case 0x5a5d1b:c.instructions+=8;goto B5a5d1b;
case 0x5a5d1e:c.instructions+=7;goto B5a5d1e;
case 0x5a5d24:c.instructions+=6;goto B5a5d24;
case 0x5a5d28:c.instructions+=5;goto B5a5d28;
case 0x5a5d2b:c.instructions+=4;goto B5a5d2b;
case 0x5a5d2c:c.instructions+=3;goto B5a5d2c;
case 0x5a5d2d:c.instructions+=2;goto B5a5d2d;
case 0x5a5d2e:c.instructions+=1;goto B5a5d2e;
case 0x5a5d33:goto L5a5d33;
case 0x5a5d38:c.instructions+=5;goto B5a5d38;
case 0x5a5d39:c.instructions+=4;goto B5a5d39;
case 0x5a5d3a:c.instructions+=3;goto B5a5d3a;
case 0x5a5d3b:c.instructions+=2;goto B5a5d3b;
case 0x5a5d3c:c.instructions+=1;goto B5a5d3c;
case 0x5a5d41:goto L5a5d41;
case 0x5a5d44:c.instructions+=13;goto B5a5d44;
case 0x5a5d47:c.instructions+=12;goto B5a5d47;
case 0x5a5d4d:c.instructions+=11;goto B5a5d4d;
case 0x5a5d50:c.instructions+=10;goto B5a5d50;
case 0x5a5d53:c.instructions+=9;goto B5a5d53;
case 0x5a5d55:c.instructions+=8;goto B5a5d55;
case 0x5a5d57:c.instructions+=7;goto B5a5d57;
case 0x5a5d5a:c.instructions+=6;goto B5a5d5a;
case 0x5a5d5d:c.instructions+=5;goto B5a5d5d;
case 0x5a5d60:c.instructions+=4;goto B5a5d60;
case 0x5a5d68:c.instructions+=3;goto B5a5d68;
case 0x5a5d6b:c.instructions+=2;goto B5a5d6b;
case 0x5a5d6e:c.instructions+=1;goto B5a5d6e;
case 0x5a5d72:goto L5a5d72;
case 0x5a5d76:c.instructions+=10;goto B5a5d76;
case 0x5a5d78:c.instructions+=9;goto B5a5d78;
case 0x5a5d7b:c.instructions+=8;goto B5a5d7b;
case 0x5a5d7e:c.instructions+=7;goto B5a5d7e;
case 0x5a5d81:c.instructions+=6;goto B5a5d81;
case 0x5a5d83:c.instructions+=5;goto B5a5d83;
case 0x5a5d89:c.instructions+=4;goto B5a5d89;
case 0x5a5d8f:c.instructions+=3;goto B5a5d8f;
case 0x5a5d91:c.instructions+=2;goto B5a5d91;
case 0x5a5d94:c.instructions+=1;goto B5a5d94;
case 0x5a5d96:goto L5a5d96;
case 0x5a5d99:c.instructions+=1;goto B5a5d99;
case 0x5a5d9b:goto L5a5d9b;
case 0x5a5d9d:c.instructions+=1;goto B5a5d9d;
case 0x5a5d9f:goto L5a5d9f;
case 0x5a5da1:goto L5a5da1;
case 0x5a5da7:c.instructions+=4;goto B5a5da7;
case 0x5a5dad:c.instructions+=3;goto B5a5dad;
case 0x5a5daf:c.instructions+=2;goto B5a5daf;
case 0x5a5db2:c.instructions+=1;goto B5a5db2;
case 0x5a5db4:goto L5a5db4;
case 0x5a5db7:c.instructions+=1;goto B5a5db7;
case 0x5a5db9:goto L5a5db9;
case 0x5a5dbc:c.instructions+=1;goto B5a5dbc;
case 0x5a5dbe:goto L5a5dbe;
case 0x5a5dc1:c.instructions+=15;goto B5a5dc1;
case 0x5a5dc4:c.instructions+=14;goto B5a5dc4;
case 0x5a5dc7:c.instructions+=13;goto B5a5dc7;
case 0x5a5dca:c.instructions+=12;goto B5a5dca;
case 0x5a5dcd:c.instructions+=11;goto B5a5dcd;
case 0x5a5dd0:c.instructions+=10;goto B5a5dd0;
case 0x5a5dd2:c.instructions+=9;goto B5a5dd2;
case 0x5a5dd4:c.instructions+=8;goto B5a5dd4;
case 0x5a5dd6:c.instructions+=7;goto B5a5dd6;
case 0x5a5dd8:c.instructions+=6;goto B5a5dd8;
case 0x5a5dda:c.instructions+=5;goto B5a5dda;
case 0x5a5ddc:c.instructions+=4;goto B5a5ddc;
case 0x5a5de2:c.instructions+=3;goto B5a5de2;
case 0x5a5de4:c.instructions+=2;goto B5a5de4;
case 0x5a5de7:c.instructions+=1;goto B5a5de7;
case 0x5a5de9:goto L5a5de9;
case 0x5a5deb:c.instructions+=1;goto B5a5deb;
case 0x5a5df1:goto L5a5df1;
case 0x5a5df4:c.instructions+=4;goto B5a5df4;
case 0x5a5df7:c.instructions+=3;goto B5a5df7;
case 0x5a5df9:c.instructions+=2;goto B5a5df9;
case 0x5a5dfc:c.instructions+=1;goto B5a5dfc;
case 0x5a5dfe:goto L5a5dfe;
case 0x5a5e02:c.instructions+=6;goto B5a5e02;
case 0x5a5e06:c.instructions+=5;goto B5a5e06;
case 0x5a5e09:c.instructions+=4;goto B5a5e09;
case 0x5a5e0a:c.instructions+=3;goto B5a5e0a;
case 0x5a5e0e:c.instructions+=2;goto B5a5e0e;
case 0x5a5e12:c.instructions+=1;goto B5a5e12;
case 0x5a5e18:goto L5a5e18;
case 0x5a5e19:c.instructions+=5;goto B5a5e19;
case 0x5a5e1a:c.instructions+=4;goto B5a5e1a;
case 0x5a5e1b:c.instructions+=3;goto B5a5e1b;
case 0x5a5e1d:c.instructions+=2;goto B5a5e1d;
case 0x5a5e1e:c.instructions+=1;goto B5a5e1e;
case 0x5a5e20:goto L5a5e20;
case 0x5a5e21:c.instructions+=14;goto B5a5e21;
case 0x5a5e23:c.instructions+=13;goto B5a5e23;
case 0x5a5e26:c.instructions+=12;goto B5a5e26;
case 0x5a5e29:c.instructions+=11;goto B5a5e29;
case 0x5a5e2a:c.instructions+=10;goto B5a5e2a;
case 0x5a5e2d:c.instructions+=9;goto B5a5e2d;
case 0x5a5e2e:c.instructions+=8;goto B5a5e2e;
case 0x5a5e31:c.instructions+=7;goto B5a5e31;
case 0x5a5e32:c.instructions+=6;goto B5a5e32;
case 0x5a5e35:c.instructions+=5;goto B5a5e35;
case 0x5a5e37:c.instructions+=4;goto B5a5e37;
case 0x5a5e38:c.instructions+=3;goto B5a5e38;
case 0x5a5e39:c.instructions+=2;goto B5a5e39;
case 0x5a5e3a:c.instructions+=1;goto B5a5e3a;
case 0x5a5e3f:goto L5a5e3f;
case 0x5a5e41:c.instructions+=4;goto B5a5e41;
case 0x5a5e43:c.instructions+=3;goto B5a5e43;
case 0x5a5e46:c.instructions+=2;goto B5a5e46;
case 0x5a5e48:c.instructions+=1;goto B5a5e48;
case 0x5a5e4e:goto L5a5e4e;
case 0x5a5e4f:c.instructions+=1;goto B5a5e4f;
case 0x5a5e55:goto L5a5e55;
case 0x5a5e56:c.instructions+=1;goto B5a5e56;
case 0x5a5e5c:goto L5a5e5c;
case 0x5a5e5f:c.instructions+=8;goto B5a5e5f;
case 0x5a5e61:c.instructions+=7;goto B5a5e61;
case 0x5a5e64:c.instructions+=6;goto B5a5e64;
case 0x5a5e67:c.instructions+=5;goto B5a5e67;
case 0x5a5e6a:c.instructions+=4;goto B5a5e6a;
case 0x5a5e70:c.instructions+=3;goto B5a5e70;
case 0x5a5e76:c.instructions+=2;goto B5a5e76;
case 0x5a5e7c:c.instructions+=1;goto B5a5e7c;
case 0x5a5e7e:goto L5a5e7e;
case 0x5a5e84:c.instructions+=1;goto B5a5e84;
case 0x5a5e86:goto L5a5e86;
case 0x5a5e89:c.instructions+=7;goto B5a5e89;
case 0x5a5e8c:c.instructions+=6;goto B5a5e8c;
case 0x5a5e8f:c.instructions+=5;goto B5a5e8f;
case 0x5a5e92:c.instructions+=4;goto B5a5e92;
case 0x5a5e95:c.instructions+=3;goto B5a5e95;
case 0x5a5e98:c.instructions+=2;goto B5a5e98;
case 0x5a5e9b:c.instructions+=1;goto B5a5e9b;
case 0x5a5e9e:goto L5a5e9e;
case 0x5a5ea1:c.instructions+=4;goto B5a5ea1;
case 0x5a5ea7:c.instructions+=3;goto B5a5ea7;
case 0x5a5ea9:c.instructions+=2;goto B5a5ea9;
case 0x5a5eac:c.instructions+=1;goto B5a5eac;
case 0x5a5eae:goto L5a5eae;
case 0x5a5eb1:c.instructions+=2;goto B5a5eb1;
case 0x5a5eb5:c.instructions+=1;goto B5a5eb5;
case 0x5a5eb7:goto L5a5eb7;
case 0x5a5eb9:c.instructions+=1;goto B5a5eb9;
case 0x5a5ebe:goto L5a5ebe;
case 0x5a5ec0:c.instructions+=1;goto B5a5ec0;
case 0x5a5ec2:goto L5a5ec2;
case 0x5a5ec5:c.instructions+=2;goto B5a5ec5;
case 0x5a5ec7:c.instructions+=1;goto B5a5ec7;
case 0x5a5ec9:goto L5a5ec9;
case 0x5a5ecc:goto L5a5ecc;
case 0x5a5ecf:c.instructions+=3;goto B5a5ecf;
case 0x5a5ed1:c.instructions+=2;goto B5a5ed1;
case 0x5a5ed3:c.instructions+=1;goto B5a5ed3;
case 0x5a5ed5:goto L5a5ed5;
case 0x5a5eda:c.instructions+=1;goto B5a5eda;
case 0x5a5edc:goto L5a5edc;
case 0x5a5ee2:c.instructions+=5;goto B5a5ee2;
case 0x5a5ee4:c.instructions+=4;goto B5a5ee4;
case 0x5a5ee8:c.instructions+=3;goto B5a5ee8;
case 0x5a5eeb:c.instructions+=2;goto B5a5eeb;
case 0x5a5eed:c.instructions+=1;goto B5a5eed;
case 0x5a5eef:goto L5a5eef;
case 0x5a5ef4:goto L5a5ef4;
case 0x5a5ef6:c.instructions+=2;goto B5a5ef6;
case 0x5a5ef9:c.instructions+=1;goto B5a5ef9;
case 0x5a5efb:goto L5a5efb;
case 0x5a5efd:c.instructions+=1;goto B5a5efd;
case 0x5a5eff:goto L5a5eff;
case 0x5a5f01:goto L5a5f01;
case 0x5a5f03:c.instructions+=1;goto B5a5f03;
case 0x5a5f05:goto L5a5f05;
case 0x5a5f09:c.instructions+=5;goto B5a5f09;
case 0x5a5f0f:c.instructions+=4;goto B5a5f0f;
case 0x5a5f15:c.instructions+=3;goto B5a5f15;
case 0x5a5f17:c.instructions+=2;goto B5a5f17;
case 0x5a5f1a:c.instructions+=1;goto B5a5f1a;
case 0x5a5f1c:goto L5a5f1c;
case 0x5a5f1e:c.instructions+=1;goto B5a5f1e;
case 0x5a5f20:goto L5a5f20;
case 0x5a5f22:c.instructions+=1;goto B5a5f22;
case 0x5a5f27:goto L5a5f27;
case 0x5a5f29:goto L5a5f29;
case 0x5a5f2f:c.instructions+=1;goto B5a5f2f;
case 0x5a5f31:goto L5a5f31;
case 0x5a5f34:c.instructions+=9;goto B5a5f34;
case 0x5a5f38:c.instructions+=8;goto B5a5f38;
case 0x5a5f3e:c.instructions+=7;goto B5a5f3e;
case 0x5a5f43:c.instructions+=6;goto B5a5f43;
case 0x5a5f44:c.instructions+=5;goto B5a5f44;
case 0x5a5f45:c.instructions+=4;goto B5a5f45;
case 0x5a5f46:c.instructions+=3;goto B5a5f46;
case 0x5a5f48:c.instructions+=2;goto B5a5f48;
case 0x5a5f49:c.instructions+=1;goto B5a5f49;
case 0x5a5f4a:goto L5a5f4a;
case 0x5a5f50:c.instructions+=26;goto B5a5f50;
case 0x5a5f53:c.instructions+=25;goto B5a5f53;
case 0x5a5f55:c.instructions+=24;goto B5a5f55;
case 0x5a5f58:c.instructions+=23;goto B5a5f58;
case 0x5a5f5b:c.instructions+=22;goto B5a5f5b;
case 0x5a5f61:c.instructions+=21;goto B5a5f61;
case 0x5a5f64:c.instructions+=20;goto B5a5f64;
case 0x5a5f6a:c.instructions+=19;goto B5a5f6a;
case 0x5a5f6e:c.instructions+=18;goto B5a5f6e;
case 0x5a5f72:c.instructions+=17;goto B5a5f72;
case 0x5a5f74:c.instructions+=16;goto B5a5f74;
case 0x5a5f77:c.instructions+=15;goto B5a5f77;
case 0x5a5f7a:c.instructions+=14;goto B5a5f7a;
case 0x5a5f7d:c.instructions+=13;goto B5a5f7d;
case 0x5a5f83:c.instructions+=12;goto B5a5f83;
case 0x5a5f89:c.instructions+=11;goto B5a5f89;
case 0x5a5f8f:c.instructions+=10;goto B5a5f8f;
case 0x5a5f95:c.instructions+=9;goto B5a5f95;
case 0x5a5f9b:c.instructions+=8;goto B5a5f9b;
case 0x5a5fa1:c.instructions+=7;goto B5a5fa1;
case 0x5a5fa5:c.instructions+=6;goto B5a5fa5;
case 0x5a5fa9:c.instructions+=5;goto B5a5fa9;
case 0x5a5fab:c.instructions+=4;goto B5a5fab;
case 0x5a5fb1:c.instructions+=3;goto B5a5fb1;
case 0x5a5fb7:c.instructions+=2;goto B5a5fb7;
case 0x5a5fbd:c.instructions+=1;goto B5a5fbd;
case 0x5a5fbf:goto L5a5fbf;
case 0x5a5fc2:c.instructions+=15;goto B5a5fc2;
case 0x5a5fc8:c.instructions+=14;goto B5a5fc8;
case 0x5a5fcb:c.instructions+=13;goto B5a5fcb;
case 0x5a5fce:c.instructions+=12;goto B5a5fce;
case 0x5a5fd1:c.instructions+=11;goto B5a5fd1;
case 0x5a5fd7:c.instructions+=10;goto B5a5fd7;
case 0x5a5fda:c.instructions+=9;goto B5a5fda;
case 0x5a5fdd:c.instructions+=8;goto B5a5fdd;
case 0x5a5fe0:c.instructions+=7;goto B5a5fe0;
case 0x5a5fe6:c.instructions+=6;goto B5a5fe6;
case 0x5a5fe9:c.instructions+=5;goto B5a5fe9;
case 0x5a5fec:c.instructions+=4;goto B5a5fec;
case 0x5a5fef:c.instructions+=3;goto B5a5fef;
case 0x5a5ff5:c.instructions+=2;goto B5a5ff5;
case 0x5a5ff8:c.instructions+=1;goto B5a5ff8;
case 0x5a5ffb:goto L5a5ffb;
default:missing_instruction(c.pc);}
B5a5001:L5a5001:{c.instructions+=3;NFSU2_TR(0x5a5001);
__builtin_memmove((R+0),gp(0x890110),4);
}
B5a5006:{NFSU2_TR(0x5a5006);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a5008:{NFSU2_TR(0x5a5008);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a50ba;}}
}
B5a500e:L5a500e:{c.instructions+=2;NFSU2_TR(0x5a500e);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5a5011:{NFSU2_TR(0x5a5011);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5a50ba;}}
}
B5a5017:L5a5017:{c.instructions+=17;NFSU2_TR(0x5a5017);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a501a:{NFSU2_TR(0x5a501a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a501c:{NFSU2_TR(0x5a501c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a501f:{NFSU2_TR(0x5a501f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a5022:{NFSU2_TR(0x5a5022);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3f0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a5028:{NFSU2_TR(0x5a5028);
{u32 ea_=u32(r4(R+4)+u32(1004u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a502e:{NFSU2_TR(0x5a502e);
{u32 ea_=u32(u32(8001572u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a5034:{NFSU2_TR(0x5a5034);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x424ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5a503a:{NFSU2_TR(0x5a503a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5a503d:{NFSU2_TR(0x5a503d);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a5041:{NFSU2_TR(0x5a5041);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5a5043:{NFSU2_TR(0x5a5043);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a5047:{NFSU2_TR(0x5a5047);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x17cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a504d:{NFSU2_TR(0x5a504d);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a5051:{NFSU2_TR(0x5a5051);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a5053:{NFSU2_TR(0x5a5053);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a5056:{NFSU2_TR(0x5a5056);
if(r1(R+514)){{goto L5a5062;}}
}
B5a5058:L5a5058:{c.instructions+=2;NFSU2_TR(0x5a5058);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a5060:{NFSU2_TR(0x5a5060);
{goto L5a506b;}
}
B5a5062:L5a5062:{c.instructions+=1;NFSU2_TR(0x5a5062);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a5067ull));
TAIL_STATIC(0x591d90u,591);
}
B5a5067:L5a5067:{c.instructions+=1;NFSU2_TR(0x5a5067);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a506b:L5a506b:{c.instructions+=2;NFSU2_TR(0x5a506b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a506e:{NFSU2_TR(0x5a506e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a5073ull));
TAIL_STATIC(0x5ec790u,5ec);
}
B5a5073:L5a5073:{c.instructions+=16;NFSU2_TR(0x5a5073);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x284ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a5079:{NFSU2_TR(0x5a5079);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x280ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a507f:{NFSU2_TR(0x5a507f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a5080:{NFSU2_TR(0x5a5080);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a5083:{NFSU2_TR(0x5a5083);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5a5087:{NFSU2_TR(0x5a5087);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a5088:{NFSU2_TR(0x5a5088);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a508c:{NFSU2_TR(0x5a508c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a508d:{NFSU2_TR(0x5a508d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a508e:{NFSU2_TR(0x5a508e);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a5092:{NFSU2_TR(0x5a5092);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a5093:{NFSU2_TR(0x5a5093);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a5097:{NFSU2_TR(0x5a5097);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a5098:{NFSU2_TR(0x5a5098);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a5099:{NFSU2_TR(0x5a5099);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a509a:{NFSU2_TR(0x5a509a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a509full));
TAIL_STATIC(0x5990c0u,599);
}
B5a509f:L5a509f:{c.instructions+=6;NFSU2_TR(0x5a509f);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5a50a3:{NFSU2_TR(0x5a50a3);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5a50a9:{NFSU2_TR(0x5a50a9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B5a50ac:{NFSU2_TR(0x5a50ac);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a50b0:{NFSU2_TR(0x5a50b0);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a50b6:{NFSU2_TR(0x5a50b6);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a50ba:L5a50ba:{c.instructions+=9;NFSU2_TR(0x5a50ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5a50bc:{NFSU2_TR(0x5a50bc);
{u32 ea_=u32(r4(R+4)+u32(384u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a50c2:{NFSU2_TR(0x5a50c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a50c5:{NFSU2_TR(0x5a50c5);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x95cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B5a50cc:{NFSU2_TR(0x5a50cc);
w4(R+8,u32(0x1ull));
}
B5a50d1:{NFSU2_TR(0x5a50d1);
__builtin_memmove((R+4),(R+20),4);
}
B5a50d3:{NFSU2_TR(0x5a50d3);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B5a50d5:{NFSU2_TR(0x5a50d5);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a50d7:{NFSU2_TR(0x5a50d7);
if(r1(R+518)){{goto L5a50e7;}}
}
B5a50d9:L5a50d9:{c.instructions+=3;NFSU2_TR(0x5a50d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5a50db:{NFSU2_TR(0x5a50db);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x174ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a50e5:{NFSU2_TR(0x5a50e5);
{goto L5a50f3;}
}
B5a50e7:L5a50e7:{c.instructions+=2;NFSU2_TR(0x5a50e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5a50e9:{NFSU2_TR(0x5a50e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x174ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a50f3:L5a50f3:{c.instructions+=2;NFSU2_TR(0x5a50f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a50f6:{NFSU2_TR(0x5a50f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a50fbull));
TAIL_STATIC(0x59fa30u,59f);
}
B5a50fb:L5a50fb:{c.instructions+=2;NFSU2_TR(0x5a50fb);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a50fd:{NFSU2_TR(0x5a50fd);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5a5114;}}
}
B5a50ff:L5a50ff:{c.instructions+=4;NFSU2_TR(0x5a50ff);
{u32 ea_=u32((r4(R+0)*4u)+u32(8001444u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a5106:{NFSU2_TR(0x5a5106);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5a5108:{NFSU2_TR(0x5a5108);
{u32 ea_=u32(r4(R+4)+u32(384u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a510e:{NFSU2_TR(0x5a510e);
{u32 ea_=u32(r4(R+4)+u32(384u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a5114:L5a5114:{c.instructions+=3;NFSU2_TR(0x5a5114);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5a511a:{NFSU2_TR(0x5a511a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a511c:{NFSU2_TR(0x5a511c);
if(r1(R+518)){{goto L5a518e;}}
}
B5a511e:L5a511e:{c.instructions+=10;NFSU2_TR(0x5a511e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5a5120:{NFSU2_TR(0x5a5120);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a5123:{NFSU2_TR(0x5a5123);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a5126:{NFSU2_TR(0x5a5126);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a5129:{NFSU2_TR(0x5a5129);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5a512b:{NFSU2_TR(0x5a512b);
{u32 ea_=u32(r4(R+28)+u32(448u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a5131:{NFSU2_TR(0x5a5131);
{u32 ea_=u32(u32(7882068u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a5137:{NFSU2_TR(0x5a5137);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a5139:{NFSU2_TR(0x5a5139);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a513c:{NFSU2_TR(0x5a513c);
if(r1(R+514)){{goto L5a5149;}}
}
B5a513e:L5a513e:{c.instructions+=2;NFSU2_TR(0x5a513e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5a5141:{NFSU2_TR(0x5a5141);
if(r1(R+518)){{goto L5a518e;}}
}
B5a5143:L5a5143:{c.instructions+=2;NFSU2_TR(0x5a5143);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a5145:{NFSU2_TR(0x5a5145);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a5166;}}
}
B5a5147:L5a5147:{c.instructions+=1;NFSU2_TR(0x5a5147);
{goto L5a518e;}
}
B5a5149:L5a5149:{c.instructions+=5;NFSU2_TR(0x5a5149);
{u32 ea_=u32(r4(R+28)+u32(448u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a514f:{NFSU2_TR(0x5a514f);
{u32 ea_=u32(u32(7885036u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a5155:{NFSU2_TR(0x5a5155);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a5157:{NFSU2_TR(0x5a5157);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a515a:{NFSU2_TR(0x5a515a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a518e;}}
}
B5a515c:L5a515c:{c.instructions+=2;NFSU2_TR(0x5a515c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5a515f:{NFSU2_TR(0x5a515f);
if(r1(R+518)){{goto L5a518e;}}
}
B5a5161:L5a5161:{c.instructions+=2;NFSU2_TR(0x5a5161);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5a5164:{NFSU2_TR(0x5a5164);
if(r1(R+518)){{goto L5a518e;}}
}
B5a5166:L5a5166:{c.instructions+=6;NFSU2_TR(0x5a5166);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a5169:{NFSU2_TR(0x5a5169);
{u32 ea_=u32(r4(R+4)+u32(524u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a516f:{NFSU2_TR(0x5a516f);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a5175:{NFSU2_TR(0x5a5175);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a5177:{NFSU2_TR(0x5a5177);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a517a:{NFSU2_TR(0x5a517a);
if(r1(R+514)){{goto L5a518e;}}
}
B5a517c:L5a517c:{c.instructions+=3;NFSU2_TR(0x5a517c);
{u32 ea_=u32(r4(R+8)+u32(384u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a5182:{NFSU2_TR(0x5a5182);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a5188:{NFSU2_TR(0x5a5188);
{u32 ea_=u32(r4(R+8)+u32(384u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a518e:L5a518e:{c.instructions+=5;NFSU2_TR(0x5a518e);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B5a518f:{NFSU2_TR(0x5a518f);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B5a5192:{NFSU2_TR(0x5a5192);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5a5195:{NFSU2_TR(0x5a5195);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a5199:{NFSU2_TR(0x5a5199);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x5a4e90u,5a4);}
}
B5a519f:L5a519f:{c.instructions+=6;NFSU2_TR(0x5a519f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a51a0:{NFSU2_TR(0x5a51a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a51a1:{NFSU2_TR(0x5a51a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5a51a2:{NFSU2_TR(0x5a51a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a51a3:{NFSU2_TR(0x5a51a3);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x24ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x24ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5a51a6:{NFSU2_TR(0x5a51a6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a51b0:L5a51b0:{c.instructions+=13;NFSU2_TR(0x5a51b0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a51b1:{NFSU2_TR(0x5a51b1);
__builtin_memmove((R+20),(R+16),4);
}
B5a51b3:{NFSU2_TR(0x5a51b3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5a51b6:{NFSU2_TR(0x5a51b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x64ull))));
}
B5a51b9:{NFSU2_TR(0x5a51b9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a51ba:{NFSU2_TR(0x5a51ba);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a51bb:{NFSU2_TR(0x5a51bb);
__builtin_memmove((R+24),(R+4),4);
}
B5a51bd:{NFSU2_TR(0x5a51bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a51c0:{NFSU2_TR(0x5a51c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a51c3:{NFSU2_TR(0x5a51c3);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5a51c6:{NFSU2_TR(0x5a51c6);
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
B5a51c8:{NFSU2_TR(0x5a51c8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a51c9:{NFSU2_TR(0x5a51c9);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5a5535;}}
}
B5a51cf:L5a51cf:{c.instructions+=7;NFSU2_TR(0x5a51cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a51d2:{NFSU2_TR(0x5a51d2);
{u32 ea_=u32(r4(R+8)+u32(496u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a51d8:{NFSU2_TR(0x5a51d8);
w1(R+4,u8(u32(r1(R+4))^u32(r1(R+4))));
}
B5a51da:{NFSU2_TR(0x5a51da);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a51e0:{NFSU2_TR(0x5a51e0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a51e2:{NFSU2_TR(0x5a51e2);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a51e5:{NFSU2_TR(0x5a51e5);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5a51fe;}}
}
B5a51e7:L5a51e7:{c.instructions+=5;NFSU2_TR(0x5a51e7);
{u32 ea_=u32(r4(R+8)+u32(492u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a51ed:{NFSU2_TR(0x5a51ed);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a51f3:{NFSU2_TR(0x5a51f3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a51f5:{NFSU2_TR(0x5a51f5);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a51f8:{NFSU2_TR(0x5a51f8);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5a51fe;}}
}
B5a51fa:L5a51fa:{c.instructions+=2;NFSU2_TR(0x5a51fa);
w1(R+4,u8(0xcull));
}
B5a51fc:{NFSU2_TR(0x5a51fc);
{goto L5a5276;}
}
B5a51fe:L5a51fe:{c.instructions+=5;NFSU2_TR(0x5a51fe);
{u32 ea_=u32(r4(R+8)+u32(500u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a5204:{NFSU2_TR(0x5a5204);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a520a:{NFSU2_TR(0x5a520a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a520c:{NFSU2_TR(0x5a520c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a520f:{NFSU2_TR(0x5a520f);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5a5228;}}
}
B5a5211:L5a5211:{c.instructions+=5;NFSU2_TR(0x5a5211);
{u32 ea_=u32(r4(R+8)+u32(504u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a5217:{NFSU2_TR(0x5a5217);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a521d:{NFSU2_TR(0x5a521d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a521f:{NFSU2_TR(0x5a521f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a5222:{NFSU2_TR(0x5a5222);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5a5228;}}
}
B5a5224:L5a5224:{c.instructions+=2;NFSU2_TR(0x5a5224);
w1(R+4,u8(0x3ull));
}
B5a5226:{NFSU2_TR(0x5a5226);
{goto L5a5276;}
}
B5a5228:L5a5228:{c.instructions+=5;NFSU2_TR(0x5a5228);
{u32 ea_=u32(r4(R+8)+u32(500u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a522e:{NFSU2_TR(0x5a522e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a5234:{NFSU2_TR(0x5a5234);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a5236:{NFSU2_TR(0x5a5236);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a5239:{NFSU2_TR(0x5a5239);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5a524e;}}
}
B5a523b:L5a523b:{c.instructions+=5;NFSU2_TR(0x5a523b);
{u32 ea_=u32(r4(R+8)+u32(496u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a5241:{NFSU2_TR(0x5a5241);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a5247:{NFSU2_TR(0x5a5247);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a5249:{NFSU2_TR(0x5a5249);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a524c:{NFSU2_TR(0x5a524c);
if(r1(R+514)){{goto L5a5274;}}
}
B5a524e:L5a524e:{c.instructions+=5;NFSU2_TR(0x5a524e);
{u32 ea_=u32(r4(R+8)+u32(504u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a5254:{NFSU2_TR(0x5a5254);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a525a:{NFSU2_TR(0x5a525a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a525c:{NFSU2_TR(0x5a525c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a525f:{NFSU2_TR(0x5a525f);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5a5276;}}
}
B5a5261:L5a5261:{c.instructions+=5;NFSU2_TR(0x5a5261);
{u32 ea_=u32(r4(R+8)+u32(492u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a5267:{NFSU2_TR(0x5a5267);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a526d:{NFSU2_TR(0x5a526d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a526f:{NFSU2_TR(0x5a526f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a5272:{NFSU2_TR(0x5a5272);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5a5276;}}
}
B5a5274:L5a5274:{c.instructions+=1;NFSU2_TR(0x5a5274);
w1(R+4,u8(0x20ull));
}
B5a5276:L5a5276:{c.instructions+=10;NFSU2_TR(0x5a5276);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a5278:{NFSU2_TR(0x5a5278);
w4(R+8,u32(s32(s8(r1(R+4)))));
}
B5a527b:{NFSU2_TR(0x5a527b);
w4(R+0,u32(0x188ull));
}
B5a5280:{NFSU2_TR(0x5a5280);
u8 U[6];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+5,u8(!(r1(R+518))));
__builtin_memmove((U+4),(U+5),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5a5285:{NFSU2_TR(0x5a5285);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B5a5287:{NFSU2_TR(0x5a5287);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a528f:{NFSU2_TR(0x5a528f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a5293:{NFSU2_TR(0x5a5293);
w4(R+12,u32(0x3b8ull));
}
B5a5298:{NFSU2_TR(0x5a5298);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a529c:{NFSU2_TR(0x5a529c);
{goto L5a52a2;}
}
B5a529e:L5a529e:{c.instructions+=1;NFSU2_TR(0x5a529e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a52a2:L5a52a2:{c.instructions+=12;NFSU2_TR(0x5a52a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a52a5:{NFSU2_TR(0x5a52a5);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffcbcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B5a52ac:{NFSU2_TR(0x5a52ac);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B5a52ae:{NFSU2_TR(0x5a52ae);
{u32 ea_=u32(r4(R+4)+r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a52b1:{NFSU2_TR(0x5a52b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a52b5:{NFSU2_TR(0x5a52b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a52b9:{NFSU2_TR(0x5a52b9);
w4(R+28,u32(0x1ull));
}
B5a52be:{NFSU2_TR(0x5a52be);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r1(U+0))));
}
B5a52c0:{NFSU2_TR(0x5a52c0);
{u32 ea_=u32(u32(8372380u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a52c6:{NFSU2_TR(0x5a52c6);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+8)),r4(U+0));
}
B5a52cc:{NFSU2_TR(0x5a52cc);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+0))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B5a52ce:{NFSU2_TR(0x5a52ce);
if(r1(R+518)){{goto L5a52e5;}}
}
B5a52d0:L5a52d0:{c.instructions+=4;NFSU2_TR(0x5a52d0);
{u32 ea_=u32(u32(8372364u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5a52d6:{NFSU2_TR(0x5a52d6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a52d8:{NFSU2_TR(0x5a52d8);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a52db:{NFSU2_TR(0x5a52db);
if(r1(R+518)){{goto L5a52e5;}}
}
B5a52dd:L5a52dd:{c.instructions+=2;NFSU2_TR(0x5a52dd);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a52df:{NFSU2_TR(0x5a52df);
{u32 ea_=u32(u32(8372364u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a52e5:L5a52e5:{c.instructions+=6;NFSU2_TR(0x5a52e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a52e8:{NFSU2_TR(0x5a52e8);
{u32 ea_=u32(r4(R+0)+r4(R+12));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5a52eb:{NFSU2_TR(0x5a52eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B5a52ee:{NFSU2_TR(0x5a52ee);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a52f0:{NFSU2_TR(0x5a52f0);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a52f3:{NFSU2_TR(0x5a52f3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a5322;}}
}
B5a52f5:L5a52f5:{c.instructions+=8;NFSU2_TR(0x5a52f5);
{u32 ea_=u32(u32(8374272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a52fb:{NFSU2_TR(0x5a52fb);
{u32 ea_=u32(u32(8372376u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a5301:{NFSU2_TR(0x5a5301);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a5303:{NFSU2_TR(0x5a5303);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a5307:{NFSU2_TR(0x5a5307);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5a530b:{NFSU2_TR(0x5a530b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a530d:{NFSU2_TR(0x5a530d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a5310:{NFSU2_TR(0x5a5310);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5a5318;}}
}
B5a5312:L5a5312:{c.instructions+=2;NFSU2_TR(0x5a5312);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a5314:{NFSU2_TR(0x5a5314);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a5318:L5a5318:{c.instructions+=3;NFSU2_TR(0x5a5318);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a531a:{NFSU2_TR(0x5a531a);
u8 U[4];
w4(U+0,u32(0x2ull));
s4(u32(r4(R+8)),r4(U+0));
}
B5a5320:{NFSU2_TR(0x5a5320);
{goto L5a536f;}
}
B5a5322:L5a5322:{c.instructions+=4;NFSU2_TR(0x5a5322);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5a5324:{NFSU2_TR(0x5a5324);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a5326:{NFSU2_TR(0x5a5326);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a5329:{NFSU2_TR(0x5a5329);
if(r1(R+514)){{goto L5a535c;}}
}
B5a532b:L5a532b:{c.instructions+=9;NFSU2_TR(0x5a532b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a532d:{NFSU2_TR(0x5a532d);
{u32 ea_=u32(u32(8374272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a5333:{NFSU2_TR(0x5a5333);
{u32 ea_=u32(u32(8372376u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a5339:{NFSU2_TR(0x5a5339);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5a533b:{NFSU2_TR(0x5a533b);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a5341:{NFSU2_TR(0x5a5341);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5a5343:{NFSU2_TR(0x5a5343);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a5345:{NFSU2_TR(0x5a5345);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a5348:{NFSU2_TR(0x5a5348);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a5352;}}
}
B5a534a:L5a534a:{c.instructions+=2;NFSU2_TR(0x5a534a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a534c:{NFSU2_TR(0x5a534c);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a5352:L5a5352:{c.instructions+=3;NFSU2_TR(0x5a5352);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a5354:{NFSU2_TR(0x5a5354);
u8 U[4];
w4(U+0,u32(0x3ull));
s4(u32(r4(R+8)),r4(U+0));
}
B5a535a:{NFSU2_TR(0x5a535a);
{goto L5a536f;}
}
B5a535c:L5a535c:{c.instructions+=4;NFSU2_TR(0x5a535c);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a5362:{NFSU2_TR(0x5a5362);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a5364:{NFSU2_TR(0x5a5364);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a5367:{NFSU2_TR(0x5a5367);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a536f;}}
}
B5a5369:L5a5369:{c.instructions+=1;NFSU2_TR(0x5a5369);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+8)),r4(U+0));
}
B5a536f:L5a536f:{c.instructions+=2;NFSU2_TR(0x5a536f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a5371:{NFSU2_TR(0x5a5371);
if(r1(R+518)){{goto L5a538b;}}
}
B5a5373:L5a5373:{c.instructions+=6;NFSU2_TR(0x5a5373);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a5376:{NFSU2_TR(0x5a5376);
{u32 ea_=u32(r4(R+4)+r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a5379:{NFSU2_TR(0x5a5379);
{u32 ea_=u32(u32(8372364u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a537f:{NFSU2_TR(0x5a537f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a5381:{NFSU2_TR(0x5a5381);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a5384:{NFSU2_TR(0x5a5384);
if(r1(R+514)){{goto L5a538b;}}
}
B5a5386:L5a5386:{c.instructions+=1;NFSU2_TR(0x5a5386);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5a538b:L5a538b:{c.instructions+=6;NFSU2_TR(0x5a538b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a538f:{NFSU2_TR(0x5a538f);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5a5390:{NFSU2_TR(0x5a5390);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B5a5393:{NFSU2_TR(0x5a5393);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3c8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3c8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5a5399:{NFSU2_TR(0x5a5399);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a539d:{NFSU2_TR(0x5a539d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a529eu);}goto L5a529e;}}
}
B5a53a3:L5a53a3:{c.instructions+=3;NFSU2_TR(0x5a53a3);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5a53a7:{NFSU2_TR(0x5a53a7);
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
B5a53a9:{NFSU2_TR(0x5a53a9);
if(r1(R+518)){{goto L5a5535;}}
}
B5a53af:L5a53af:{c.instructions+=5;NFSU2_TR(0x5a53af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a53b2:{NFSU2_TR(0x5a53b2);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5a53b4:{NFSU2_TR(0x5a53b4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a53b7:{NFSU2_TR(0x5a53b7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ecull))));
}
B5a53bd:{NFSU2_TR(0x5a53bd);
__builtin_memmove((R+4),(R+4),4);
}
B5a53c0:L5a53c0:{c.instructions+=5;NFSU2_TR(0x5a53c0);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a53c2:{NFSU2_TR(0x5a53c2);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a53c8:{NFSU2_TR(0x5a53c8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a53ca:{NFSU2_TR(0x5a53ca);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a53cd:{NFSU2_TR(0x5a53cd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a53e5;}}
}
B5a53cf:L5a53cf:{c.instructions+=6;NFSU2_TR(0x5a53cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5a53d1:{NFSU2_TR(0x5a53d1);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a53d4:{NFSU2_TR(0x5a53d4);
{u32 ea_=u32(u32(8372368u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a53da:{NFSU2_TR(0x5a53da);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a53dc:{NFSU2_TR(0x5a53dc);
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
B5a53df:{NFSU2_TR(0x5a53df);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5a5535;}}
}
B5a53e5:L5a53e5:{c.instructions+=5;NFSU2_TR(0x5a53e5);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5a53e6:{NFSU2_TR(0x5a53e6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B5a53e9:{NFSU2_TR(0x5a53e9);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B5a53ec:{NFSU2_TR(0x5a53ec);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5a53ef:{NFSU2_TR(0x5a53ef);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a53c0u);}goto L5a53c0;}}
}
B5a53f1:L5a53f1:{c.instructions+=3;NFSU2_TR(0x5a53f1);
w4(R+4,u32(0x1ecull));
}
B5a53f6:{NFSU2_TR(0x5a53f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a53fe:{NFSU2_TR(0x5a53fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a5402:L5a5402:{c.instructions+=6;NFSU2_TR(0x5a5402);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a5405:{NFSU2_TR(0x5a5405);
{u32 ea_=u32(r4(R+4)+r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a5408:{NFSU2_TR(0x5a5408);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a540e:{NFSU2_TR(0x5a540e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a5410:{NFSU2_TR(0x5a5410);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a5413:{NFSU2_TR(0x5a5413);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a5519;}}
}
B5a5419:L5a5419:{c.instructions+=11;NFSU2_TR(0x5a5419);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffe3cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B5a5420:{NFSU2_TR(0x5a5420);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffe4cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B5a5427:{NFSU2_TR(0x5a5427);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a542a:{NFSU2_TR(0x5a542a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
}
B5a542d:{NFSU2_TR(0x5a542d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a542e:{NFSU2_TR(0x5a542e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x30ull))));
}
B5a5431:{NFSU2_TR(0x5a5431);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a5432:{NFSU2_TR(0x5a5432);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5a5436:{NFSU2_TR(0x5a5436);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a5437:{NFSU2_TR(0x5a5437);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x150ull))));
}
B5a543d:{NFSU2_TR(0x5a543d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a5442ull));
TAIL_STATIC(0x43c9c0u,43c);
}
B5a5442:L5a5442:{c.instructions+=8;NFSU2_TR(0x5a5442);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5a5445:{NFSU2_TR(0x5a5445);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5a5449:{NFSU2_TR(0x5a5449);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a544a:{NFSU2_TR(0x5a544a);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5a5450:{NFSU2_TR(0x5a5450);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a5451:{NFSU2_TR(0x5a5451);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5a5455:{NFSU2_TR(0x5a5455);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a5456:{NFSU2_TR(0x5a5456);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a545bull));
TAIL_STATIC(0x43d1e0u,43d);
}
B5a545b:L5a545b:{c.instructions+=24;NFSU2_TR(0x5a545b);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a545f:{NFSU2_TR(0x5a545f);
{u32 ea_=u32(r4(R+12)+u32(160u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a5465:{NFSU2_TR(0x5a5465);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a5469:{NFSU2_TR(0x5a5469);
{u32 ea_=u32(r4(R+12)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a546f:{NFSU2_TR(0x5a546f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B5a5472:{NFSU2_TR(0x5a5472);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a5476:{NFSU2_TR(0x5a5476);
{u32 ea_=u32(r4(R+12)+u32(168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a547c:{NFSU2_TR(0x5a547c);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a5480:{NFSU2_TR(0x5a5480);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a5484:{NFSU2_TR(0x5a5484);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5a5486:{NFSU2_TR(0x5a5486);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a548a:{NFSU2_TR(0x5a548a);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a548e:{NFSU2_TR(0x5a548e);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a5492:{NFSU2_TR(0x5a5492);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a5494:{NFSU2_TR(0x5a5494);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5a5496:{NFSU2_TR(0x5a5496);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a5499:{NFSU2_TR(0x5a5499);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a549b:{NFSU2_TR(0x5a549b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5a549d:{NFSU2_TR(0x5a549d);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a54a0:{NFSU2_TR(0x5a54a0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a54a2:{NFSU2_TR(0x5a54a2);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5a54a8:{NFSU2_TR(0x5a54a8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a54aa:{NFSU2_TR(0x5a54aa);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a54ad:{NFSU2_TR(0x5a54ad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a5517;}}
}
B5a54af:L5a54af:{c.instructions+=8;NFSU2_TR(0x5a54af);
{u32 ea_=u32(u32(8372360u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a54b5:{NFSU2_TR(0x5a54b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a54b8:{NFSU2_TR(0x5a54b8);
{u32 ea_=u32(u32(8372372u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5a54be:{NFSU2_TR(0x5a54be);
{u32 ea_=u32(r4(R+4)+r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a54c1:{NFSU2_TR(0x5a54c1);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5a54c7:{NFSU2_TR(0x5a54c7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a54c9:{NFSU2_TR(0x5a54c9);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a54cc:{NFSU2_TR(0x5a54cc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a5513;}}
}
B5a54ce:L5a54ce:{c.instructions+=15;NFSU2_TR(0x5a54ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a54d1:{NFSU2_TR(0x5a54d1);
{u32 ea_=u32(r4(R+4)+u32(356u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a54d7:{NFSU2_TR(0x5a54d7);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5a54db:{NFSU2_TR(0x5a54db);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a54dc:{NFSU2_TR(0x5a54dc);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5a54e0:{NFSU2_TR(0x5a54e0);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5a54e2:{NFSU2_TR(0x5a54e2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a54e3:{NFSU2_TR(0x5a54e3);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a54e5:{NFSU2_TR(0x5a54e5);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a54e9:{NFSU2_TR(0x5a54e9);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5a54eb:{NFSU2_TR(0x5a54eb);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a54ee:{NFSU2_TR(0x5a54ee);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a54f2:{NFSU2_TR(0x5a54f2);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a54f5:{NFSU2_TR(0x5a54f5);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a54f9:{NFSU2_TR(0x5a54f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a54feull));
TAIL_STATIC(0x59bc60u,59b);
}
B5a54fe:L5a54fe:{c.instructions+=5;NFSU2_TR(0x5a54fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a5501:{NFSU2_TR(0x5a5501);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a5505:{NFSU2_TR(0x5a5505);
u8 U[13];
w4(U+0,u32(u32(u32(0x3c8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x1ull));
s1(u32(r4(U+8)),r1(U+12));
}
B5a550d:{NFSU2_TR(0x5a550d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a5511:{NFSU2_TR(0x5a5511);
{goto L5a5519;}
}
B5a5513:L5a5513:{c.instructions+=1;NFSU2_TR(0x5a5513);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a5517:L5a5517:{c.instructions+=1;NFSU2_TR(0x5a5517);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a5519:L5a5519:{c.instructions+=7;NFSU2_TR(0x5a5519);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5a551d:{NFSU2_TR(0x5a551d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B5a5520:{NFSU2_TR(0x5a5520);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5a5521:{NFSU2_TR(0x5a5521);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x1fcull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1fcull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1fcull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5a5527:{NFSU2_TR(0x5a5527);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a552b:{NFSU2_TR(0x5a552b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a552f:{NFSU2_TR(0x5a552f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a5402u);}goto L5a5402;}}
}
B5a5535:L5a5535:{c.instructions+=6;NFSU2_TR(0x5a5535);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a5536:{NFSU2_TR(0x5a5536);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a5537:{NFSU2_TR(0x5a5537);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a5538:{NFSU2_TR(0x5a5538);
__builtin_memmove((R+16),(R+20),4);
}
B5a553a:{NFSU2_TR(0x5a553a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5a553b:{NFSU2_TR(0x5a553b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a5540:L5a5540:{c.instructions+=24;NFSU2_TR(0x5a5540);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a5541:{NFSU2_TR(0x5a5541);
__builtin_memmove((R+20),(R+16),4);
}
B5a5543:{NFSU2_TR(0x5a5543);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B5a5546:{NFSU2_TR(0x5a5546);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a5547:{NFSU2_TR(0x5a5547);
__builtin_memmove((R+24),(R+4),4);
}
B5a5549:{NFSU2_TR(0x5a5549);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a554c:{NFSU2_TR(0x5a554c);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a554f:{NFSU2_TR(0x5a554f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a5552:{NFSU2_TR(0x5a5552);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a5555:{NFSU2_TR(0x5a5555);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
}
B5a5558:{NFSU2_TR(0x5a5558);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5a555a:{NFSU2_TR(0x5a555a);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5a555c:{NFSU2_TR(0x5a555c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x20ull))));
}
B5a555f:{NFSU2_TR(0x5a555f);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a5562:{NFSU2_TR(0x5a5562);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5a5564:{NFSU2_TR(0x5a5564);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a5565:{NFSU2_TR(0x5a5565);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a5568:{NFSU2_TR(0x5a5568);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a556b:{NFSU2_TR(0x5a556b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a556e:{NFSU2_TR(0x5a556e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x30ull))));
}
B5a5571:{NFSU2_TR(0x5a5571);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a5572:{NFSU2_TR(0x5a5572);
u8 U[6];
w1(R+512,carry<u32>(r4(R+8),u32(0x50ull)));
w1(R+523,scarry<u32>(r4(R+8),u32(0x50ull)));
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x50ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5a5575:{NFSU2_TR(0x5a5575);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a5576:{NFSU2_TR(0x5a5576);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a557bull));
TAIL_STATIC(0x4012b0u,401);
}
B5a557b:L5a557b:{c.instructions+=6;NFSU2_TR(0x5a557b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a557e:{NFSU2_TR(0x5a557e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a5581:{NFSU2_TR(0x5a5581);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5a5584:{NFSU2_TR(0x5a5584);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1f0ull))));
}
B5a5589:{NFSU2_TR(0x5a5589);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a558a:{NFSU2_TR(0x5a558a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a558full));
TAIL_STATIC(0x592400u,592);
}
B5a558f:L5a558f:{c.instructions+=6;NFSU2_TR(0x5a558f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a5592:{NFSU2_TR(0x5a5592);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5a5595:{NFSU2_TR(0x5a5595);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a5596:{NFSU2_TR(0x5a5596);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x90ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x90ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5a559b:{NFSU2_TR(0x5a559b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a559c:{NFSU2_TR(0x5a559c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a55a1ull));
TAIL_STATIC(0x4012b0u,401);
}
B5a55a1:L5a55a1:{c.instructions+=44;NFSU2_TR(0x5a55a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a55a4:{NFSU2_TR(0x5a55a4);
{u32 ea_=u32(r4(R+0)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a55aa:{NFSU2_TR(0x5a55aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a55b0:{NFSU2_TR(0x5a55b0);
{u32 ea_=u32(r4(R+0)+u32(168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a55b6:{NFSU2_TR(0x5a55b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a55b9:{NFSU2_TR(0x5a55b9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xa0ull))));
}
B5a55be:{NFSU2_TR(0x5a55be);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5a55c0:{NFSU2_TR(0x5a55c0);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a55c3:{NFSU2_TR(0x5a55c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a55c6:{NFSU2_TR(0x5a55c6);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a55c9:{NFSU2_TR(0x5a55c9);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a55cc:{NFSU2_TR(0x5a55cc);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a55cf:{NFSU2_TR(0x5a55cf);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a55d1:{NFSU2_TR(0x5a55d1);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x480ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5a55d8:{NFSU2_TR(0x5a55d8);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5a55da:{NFSU2_TR(0x5a55da);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5a55dc:{NFSU2_TR(0x5a55dc);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B5a55de:{NFSU2_TR(0x5a55de);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B5a55e0:{NFSU2_TR(0x5a55e0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a55e2:{NFSU2_TR(0x5a55e2);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5a55e4:{NFSU2_TR(0x5a55e4);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5a55e6:{NFSU2_TR(0x5a55e6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a55e8:{NFSU2_TR(0x5a55e8);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5a55ea:{NFSU2_TR(0x5a55ea);
__asm__ volatile(".byte 0xdd,0xdb":::"memory");
}
B5a55ec:{NFSU2_TR(0x5a55ec);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a55ee:{NFSU2_TR(0x5a55ee);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a55f0:{NFSU2_TR(0x5a55f0);
{u32 ea_=u32(r4(R+4)+u32(1008u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a55f6:{NFSU2_TR(0x5a55f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a55f9:{NFSU2_TR(0x5a55f9);
{u32 ea_=u32(r4(R+0)+u32(196u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a55ff:{NFSU2_TR(0x5a55ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a5602:{NFSU2_TR(0x5a5602);
{u32 ea_=u32(r4(R+0)+u32(200u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a5608:{NFSU2_TR(0x5a5608);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xc0ull))));
}
B5a560d:{NFSU2_TR(0x5a560d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5a560f:{NFSU2_TR(0x5a560f);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5a5611:{NFSU2_TR(0x5a5611);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xd0ull))));
}
B5a5617:{NFSU2_TR(0x5a5617);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a561a:{NFSU2_TR(0x5a561a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5a561c:{NFSU2_TR(0x5a561c);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a561f:{NFSU2_TR(0x5a561f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a5622:{NFSU2_TR(0x5a5622);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a5625:{NFSU2_TR(0x5a5625);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a5628:{NFSU2_TR(0x5a5628);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a5629:{NFSU2_TR(0x5a5629);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a562a:{NFSU2_TR(0x5a562a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a562full));
TAIL_STATIC(0x43c570u,43c);
}
B5a562f:L5a562f:{c.instructions+=31;NFSU2_TR(0x5a562f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a5632:{NFSU2_TR(0x5a5632);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5a5635:{NFSU2_TR(0x5a5635);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3ccull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5a563c:{NFSU2_TR(0x5a563c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a563f:{NFSU2_TR(0x5a563f);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a5642:{NFSU2_TR(0x5a5642);
{u32 ea_=u32(r4(R+0)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a5645:{NFSU2_TR(0x5a5645);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a5648:{NFSU2_TR(0x5a5648);
{u32 ea_=u32(r4(R+0)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a564b:{NFSU2_TR(0x5a564b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a564d:{NFSU2_TR(0x5a564d);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a5650:{NFSU2_TR(0x5a5650);
{u32 ea_=u32(r4(R+0)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a5653:{NFSU2_TR(0x5a5653);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a5655:{NFSU2_TR(0x5a5655);
{u32 ea_=u32(r4(R+0)+u32(1004u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a565b:{NFSU2_TR(0x5a565b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5a565e:{NFSU2_TR(0x5a565e);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3ceull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B5a5665:{NFSU2_TR(0x5a5665);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a5668:{NFSU2_TR(0x5a5668);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B5a566f:{NFSU2_TR(0x5a566f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a5672:{NFSU2_TR(0x5a5672);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5a5675:{NFSU2_TR(0x5a5675);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a5678:{NFSU2_TR(0x5a5678);
{u32 ea_=u32(u32(7881288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a567e:{NFSU2_TR(0x5a567e);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a5681:{NFSU2_TR(0x5a5681);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5a5684:{NFSU2_TR(0x5a5684);
{u32 ea_=u32(u32(7881288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a568a:{NFSU2_TR(0x5a568a);
{u32 ea_=u32(u32(8002088u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a5690:{NFSU2_TR(0x5a5690);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a5693:{NFSU2_TR(0x5a5693);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a5696:{NFSU2_TR(0x5a5696);
{u32 ea_=u32(u32(7882000u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5a569c:{NFSU2_TR(0x5a569c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a569e:{NFSU2_TR(0x5a569e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a56a1:{NFSU2_TR(0x5a56a1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a56a9;}}
}
B5a56a3:L5a56a3:{c.instructions+=1;NFSU2_TR(0x5a56a3);
{u32 ea_=u32(u32(7881996u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5a56a9:L5a56a9:{c.instructions+=5;NFSU2_TR(0x5a56a9);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5a56ab:{NFSU2_TR(0x5a56ab);
{u32 ea_=u32(u32(7882000u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a56b1:{NFSU2_TR(0x5a56b1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a56b3:{NFSU2_TR(0x5a56b3);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a56b6:{NFSU2_TR(0x5a56b6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a56c2;}}
}
B5a56b8:L5a56b8:{c.instructions+=3;NFSU2_TR(0x5a56b8);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B5a56ba:{NFSU2_TR(0x5a56ba);
{u32 ea_=u32(u32(7881996u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5a56c0:{NFSU2_TR(0x5a56c0);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B5a56c2:L5a56c2:{c.instructions+=10;NFSU2_TR(0x5a56c2);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5a56c4:{NFSU2_TR(0x5a56c4);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B5a56c6:{NFSU2_TR(0x5a56c6);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a56c9:{NFSU2_TR(0x5a56c9);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5a56cb:{NFSU2_TR(0x5a56cb);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a56ce:{NFSU2_TR(0x5a56ce);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a56d0:{NFSU2_TR(0x5a56d0);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5a56d3:{NFSU2_TR(0x5a56d3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a56d5:{NFSU2_TR(0x5a56d5);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a56d8:{NFSU2_TR(0x5a56d8);
if(r1(R+518)){{goto L5a56df;}}
}
B5a56da:L5a56da:{c.instructions+=2;NFSU2_TR(0x5a56da);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a56dc:{NFSU2_TR(0x5a56dc);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a56df:L5a56df:{c.instructions+=5;NFSU2_TR(0x5a56df);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a56e2:{NFSU2_TR(0x5a56e2);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5a56e4:{NFSU2_TR(0x5a56e4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a56e6:{NFSU2_TR(0x5a56e6);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a56e9:{NFSU2_TR(0x5a56e9);
if(r1(R+514)){{goto L5a56f0;}}
}
B5a56eb:L5a56eb:{c.instructions+=2;NFSU2_TR(0x5a56eb);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a56ed:{NFSU2_TR(0x5a56ed);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a56f0:L5a56f0:{c.instructions+=3;NFSU2_TR(0x5a56f0);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a56f6:{NFSU2_TR(0x5a56f6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a56f7:{NFSU2_TR(0x5a56f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a56fcull));
TAIL_STATIC(0x75bed4u,75b);
}
B5a56fc:L5a56fc:{c.instructions+=39;NFSU2_TR(0x5a56fc);
__builtin_memmove((R+4),(R+0),4);
}
B5a56fe:{NFSU2_TR(0x5a56fe);
w4(R+0,u32(0xb60b60b7ull));
}
B5a5703:{NFSU2_TR(0x5a5703);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B5a5705:{NFSU2_TR(0x5a5705);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B5a5707:{NFSU2_TR(0x5a5707);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B5a570a:{NFSU2_TR(0x5a570a);
__builtin_memmove((R+0),(R+8),4);
}
B5a570c:{NFSU2_TR(0x5a570c);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5a570f:{NFSU2_TR(0x5a570f);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B5a5711:{NFSU2_TR(0x5a5711);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3ceull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5a5718:{NFSU2_TR(0x5a5718);
w4(R+28,u32(0x2c8ull));
}
B5a571d:{NFSU2_TR(0x5a571d);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+24))));
}
B5a571f:{NFSU2_TR(0x5a571f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a5722:{NFSU2_TR(0x5a5722);
w4(R+28,u32(0x308ull));
}
B5a5727:{NFSU2_TR(0x5a5727);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+24))));
}
B5a5729:{NFSU2_TR(0x5a5729);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a572c:{NFSU2_TR(0x5a572c);
w4(R+28,u32(0x31cull));
}
B5a5731:{NFSU2_TR(0x5a5731);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+24))));
}
B5a5733:{NFSU2_TR(0x5a5733);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a5736:{NFSU2_TR(0x5a5736);
w4(R+28,u32(0x32cull));
}
B5a573b:{NFSU2_TR(0x5a573b);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+24))));
}
B5a573d:{NFSU2_TR(0x5a573d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a5740:{NFSU2_TR(0x5a5740);
w4(R+28,u32(0x35cull));
}
B5a5745:{NFSU2_TR(0x5a5745);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+24))));
}
B5a5747:{NFSU2_TR(0x5a5747);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a574a:{NFSU2_TR(0x5a574a);
w4(R+28,u32(0x2d8ull));
}
B5a574f:{NFSU2_TR(0x5a574f);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+24))));
}
B5a5751:{NFSU2_TR(0x5a5751);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a5754:{NFSU2_TR(0x5a5754);
w4(R+0,u32(0x2b8ull));
}
B5a5759:{NFSU2_TR(0x5a5759);
w4(R+12,u32(0x380ull));
}
B5a575e:{NFSU2_TR(0x5a575e);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B5a5760:{NFSU2_TR(0x5a5760);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+24))));
}
B5a5762:{NFSU2_TR(0x5a5762);
w4(R+28,u32(0x2e8ull));
}
B5a5767:{NFSU2_TR(0x5a5767);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5a5769:{NFSU2_TR(0x5a5769);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+24))));
}
B5a576b:{NFSU2_TR(0x5a576b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5a576e:{NFSU2_TR(0x5a576e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a5771:{NFSU2_TR(0x5a5771);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a5774:{NFSU2_TR(0x5a5774);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a5777:{NFSU2_TR(0x5a5777);
{goto L5a5780;}
}
B5a5779:L5a5779:{c.instructions+=3;NFSU2_TR(0x5a5779);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5a577c:{NFSU2_TR(0x5a577c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a577f:{NFSU2_TR(0x5a577f);
}
B5a5780:L5a5780:{c.instructions+=18;NFSU2_TR(0x5a5780);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5a5782:{NFSU2_TR(0x5a5782);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a5785:{NFSU2_TR(0x5a5785);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5a5788:{NFSU2_TR(0x5a5788);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B5a578a:{NFSU2_TR(0x5a578a);
{u32 ea_=u32(r4(R+28)+r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a578d:{NFSU2_TR(0x5a578d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5a578f:{NFSU2_TR(0x5a578f);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a5792:{NFSU2_TR(0x5a5792);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a5795:{NFSU2_TR(0x5a5795);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5a5798:{NFSU2_TR(0x5a5798);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B5a579a:{NFSU2_TR(0x5a579a);
{u32 ea_=u32(r4(R+28)+r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a579d:{NFSU2_TR(0x5a579d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5a57a0:{NFSU2_TR(0x5a57a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a57a3:{NFSU2_TR(0x5a57a3);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a57a6:{NFSU2_TR(0x5a57a6);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a57a9:{NFSU2_TR(0x5a57a9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a57ab:{NFSU2_TR(0x5a57ab);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a57ae:{NFSU2_TR(0x5a57ae);
if(r1(R+514)){{goto L5a57b8;}}
}
B5a57b0:L5a57b0:{c.instructions+=2;NFSU2_TR(0x5a57b0);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a57b6:{NFSU2_TR(0x5a57b6);
{goto L5a57c1;}
}
B5a57b8:L5a57b8:{c.instructions+=3;NFSU2_TR(0x5a57b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a57bb:{NFSU2_TR(0x5a57bb);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a57be:{NFSU2_TR(0x5a57be);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5a57c1:L5a57c1:{c.instructions+=16;NFSU2_TR(0x5a57c1);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a57c4:{NFSU2_TR(0x5a57c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a57c7:{NFSU2_TR(0x5a57c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5a57ca:{NFSU2_TR(0x5a57ca);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B5a57cc:{NFSU2_TR(0x5a57cc);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B5a57ce:{NFSU2_TR(0x5a57ce);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B5a57d0:{NFSU2_TR(0x5a57d0);
{u32 ea_=u32(r4(R+4)+r4(R+12));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5a57d3:{NFSU2_TR(0x5a57d3);
{u32 ea_=u32(r4(R+4)+r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a57d6:{NFSU2_TR(0x5a57d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5a57d9:{NFSU2_TR(0x5a57d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5a57db:{NFSU2_TR(0x5a57db);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a57dd:{NFSU2_TR(0x5a57dd);
u8 U[13];
w4(U+0,u32(u32(u32(0x350ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+12),(U+12),1);
}
B5a57e4:{NFSU2_TR(0x5a57e4);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a57e6:{NFSU2_TR(0x5a57e6);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x11cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5a57ec:{NFSU2_TR(0x5a57ec);
u8 U[13];
w4(U+0,u32(u32(u32(0x350ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),1);
s1(u32(r4(U+8)),r1(U+12));
}
B5a57f3:{NFSU2_TR(0x5a57f3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a5802;}}
}
B5a57f5:L5a57f5:{c.instructions+=2;NFSU2_TR(0x5a57f5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a57f7:{NFSU2_TR(0x5a57f7);
if(r1(R+518)){{goto L5a5813;}}
}
B5a57f9:L5a57f9:{c.instructions+=3;NFSU2_TR(0x5a57f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a57ff:{NFSU2_TR(0x5a57ff);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5a5800:{NFSU2_TR(0x5a5800);
{goto L5a580d;}
}
B5a5802:L5a5802:{c.instructions+=2;NFSU2_TR(0x5a5802);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a5804:{NFSU2_TR(0x5a5804);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a5813;}}
}
B5a5806:L5a5806:{c.instructions+=2;NFSU2_TR(0x5a5806);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a580c:{NFSU2_TR(0x5a580c);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B5a580d:L5a580d:{c.instructions+=1;NFSU2_TR(0x5a580d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3e4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a5813:L5a5813:{c.instructions+=11;NFSU2_TR(0x5a5813);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5a5815:{NFSU2_TR(0x5a5815);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5a5818:{NFSU2_TR(0x5a5818);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a581e:{NFSU2_TR(0x5a581e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5a5821:{NFSU2_TR(0x5a5821);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+4))));
}
B5a5823:{NFSU2_TR(0x5a5823);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B5a5826:{NFSU2_TR(0x5a5826);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5a5829:{NFSU2_TR(0x5a5829);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+4))));
}
B5a582b:{NFSU2_TR(0x5a582b);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+12))));
}
B5a582d:{NFSU2_TR(0x5a582d);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+4)));
w4(U+8,u32(u32(r4(R+0))-u32(r4(U+4))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5a582f:{NFSU2_TR(0x5a582f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5a5833;}}
}
B5a5831:L5a5831:{c.instructions+=1;NFSU2_TR(0x5a5831);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B5a5833:L5a5833:{c.instructions+=4;NFSU2_TR(0x5a5833);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5a5839:{NFSU2_TR(0x5a5839);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a583b:{NFSU2_TR(0x5a583b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5a583e:{NFSU2_TR(0x5a583e);
if(r1(R+518)){{goto L5a586d;}}
}
B5a5840:L5a5840:{c.instructions+=10;NFSU2_TR(0x5a5840);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a5843:{NFSU2_TR(0x5a5843);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B5a5845:{NFSU2_TR(0x5a5845);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
w4(U+8,u32(0x0ull));
s4(u32(r4(U+4)),r4(U+8));
}
B5a584c:{NFSU2_TR(0x5a584c);
{u32 ea_=u32(u32(8827796u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a5852:{NFSU2_TR(0x5a5852);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a5855:{NFSU2_TR(0x5a5855);
__builtin_memmove((R+28),gp(0x86b390),4);
}
B5a585b:{NFSU2_TR(0x5a585b);
{u32 ea_=u32((r4(R+8)*8u)+r4(R+0)+u32(888u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a5862:{NFSU2_TR(0x5a5862);
u8 U[12];
w4(U+0,u32(u32(u32(0x374ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5a5869:{NFSU2_TR(0x5a5869);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5a586b:{NFSU2_TR(0x5a586b);
{goto L5a589f;}
}
B5a586d:L5a586d:{c.instructions+=13;NFSU2_TR(0x5a586d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5a586f:{NFSU2_TR(0x5a586f);
{u32 ea_=u32(r4(R+0)+u32(368u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a5875:{NFSU2_TR(0x5a5875);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a5878:{NFSU2_TR(0x5a5878);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B5a587a:{NFSU2_TR(0x5a587a);
{u32 ea_=u32(r4(R+28)+r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a587d:{NFSU2_TR(0x5a587d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5a587f:{NFSU2_TR(0x5a587f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5a5882:{NFSU2_TR(0x5a5882);
{u32 ea_=u32(r4(R+0)+u32(260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a5888:{NFSU2_TR(0x5a5888);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x100ull))));
}
B5a588d:{NFSU2_TR(0x5a588d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5a588f:{NFSU2_TR(0x5a588f);
{u32 ea_=u32((r4(R+8)*8u)+r4(R+28)+u32(888u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a5896:{NFSU2_TR(0x5a5896);
u8 U[12];
w4(U+0,u32(u32(u32(0x374ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B5a589d:{NFSU2_TR(0x5a589d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B5a589f:L5a589f:{c.instructions+=10;NFSU2_TR(0x5a589f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5a58a1:{NFSU2_TR(0x5a58a1);
{u32 ea_=u32(r4(R+0)+u32(356u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a58a7:{NFSU2_TR(0x5a58a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a58aa:{NFSU2_TR(0x5a58aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5a58ad:{NFSU2_TR(0x5a58ad);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B5a58af:{NFSU2_TR(0x5a58af);
{u32 ea_=u32(r4(R+28)+r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a58b2:{NFSU2_TR(0x5a58b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5a58b4:{NFSU2_TR(0x5a58b4);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x11cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B5a58ba:{NFSU2_TR(0x5a58ba);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a58bc:{NFSU2_TR(0x5a58bc);
if(r1(R+518)){{goto L5a58c6;}}
}
B5a58be:L5a58be:{c.instructions+=2;NFSU2_TR(0x5a58be);
{u32 ea_=u32(r4(R+0)+u32(360u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a58c4:{NFSU2_TR(0x5a58c4);
{goto L5a58cc;}
}
B5a58c6:L5a58c6:{c.instructions+=1;NFSU2_TR(0x5a58c6);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a58cc:L5a58cc:{c.instructions+=8;NFSU2_TR(0x5a58cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a58cf:{NFSU2_TR(0x5a58cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5a58d2:{NFSU2_TR(0x5a58d2);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B5a58d4:{NFSU2_TR(0x5a58d4);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5a58d5:{NFSU2_TR(0x5a58d5);
{u32 ea_=u32(r4(R+28)+r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a58d8:{NFSU2_TR(0x5a58d8);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B5a58db:{NFSU2_TR(0x5a58db);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5a58de:{NFSU2_TR(0x5a58de);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a5779u);}goto L5a5779;}}
}
B5a58e4:L5a58e4:{c.instructions+=4;NFSU2_TR(0x5a58e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a58e7:{NFSU2_TR(0x5a58e7);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5a58ed:{NFSU2_TR(0x5a58ed);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a58ef:{NFSU2_TR(0x5a58ef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a58fc;}}
}
B5a58f1:L5a58f1:{c.instructions+=3;NFSU2_TR(0x5a58f1);
{u32 ea_=u32(r4(R+0)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a58f7:{NFSU2_TR(0x5a58f7);
{u32 ea_=u32(r4(R+0)+u32(120u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a58fa:{NFSU2_TR(0x5a58fa);
{goto L5a5902;}
}
B5a58fc:L5a58fc:{c.instructions+=1;NFSU2_TR(0x5a58fc);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a5902:L5a5902:{c.instructions+=21;NFSU2_TR(0x5a5902);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a5905:{NFSU2_TR(0x5a5905);
{u32 ea_=u32(r4(R+4)+u32(1016u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a590b:{NFSU2_TR(0x5a590b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a590e:{NFSU2_TR(0x5a590e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a5911:{NFSU2_TR(0x5a5911);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a5914:{NFSU2_TR(0x5a5914);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3f4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a591a:{NFSU2_TR(0x5a591a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a591d:{NFSU2_TR(0x5a591d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5a5920:{NFSU2_TR(0x5a5920);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a5923:{NFSU2_TR(0x5a5923);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5a5925:{NFSU2_TR(0x5a5925);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5a5928:{NFSU2_TR(0x5a5928);
__builtin_memmove((R+0),(R+518),1);
}
B5a592b:{NFSU2_TR(0x5a592b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x408ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a5931:{NFSU2_TR(0x5a5931);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a5934:{NFSU2_TR(0x5a5934);
{u32 ea_=u32(r4(R+8)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a5937:{NFSU2_TR(0x5a5937);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a593a:{NFSU2_TR(0x5a593a);
{u32 ea_=u32(r4(R+0)+u32(1036u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a5940:{NFSU2_TR(0x5a5940);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a5943:{NFSU2_TR(0x5a5943);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a5946:{NFSU2_TR(0x5a5946);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a5948:{NFSU2_TR(0x5a5948);
if(r1(R+518)){{goto L5a5954;}}
}
B5a594a:L5a594a:{c.instructions+=2;NFSU2_TR(0x5a594a);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x2ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5a594e:{NFSU2_TR(0x5a594e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5a5954;}}
}
B5a5950:L5a5950:{c.instructions+=2;NFSU2_TR(0x5a5950);
w1(R+12,u8(0x1ull));
}
B5a5952:{NFSU2_TR(0x5a5952);
{goto L5a5956;}
}
B5a5954:L5a5954:{c.instructions+=1;NFSU2_TR(0x5a5954);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B5a5956:L5a5956:{c.instructions+=8;NFSU2_TR(0x5a5956);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5a5959:{NFSU2_TR(0x5a5959);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a595c:{NFSU2_TR(0x5a595c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a595f:{NFSU2_TR(0x5a595f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a5962:{NFSU2_TR(0x5a5962);
{u32 ea_=u32(u32(8002856u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a5968:{NFSU2_TR(0x5a5968);
{u32 ea_=u32(r4(R+8)+u32(756u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a596e:{NFSU2_TR(0x5a596e);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a5974:{NFSU2_TR(0x5a5974);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a5979ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5a5979:L5a5979:{c.instructions+=15;NFSU2_TR(0x5a5979);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5a597b:{NFSU2_TR(0x5a597b);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a597d:{NFSU2_TR(0x5a597d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B5a5980:{NFSU2_TR(0x5a5980);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a5981:{NFSU2_TR(0x5a5981);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B5a5984:{NFSU2_TR(0x5a5984);
{u32 ea_=u32((r4(R+8)*4u)+u32(8002092u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a598b:{NFSU2_TR(0x5a598b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a598e:{NFSU2_TR(0x5a598e);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5a5990:{NFSU2_TR(0x5a5990);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5a5993:{NFSU2_TR(0x5a5993);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a5996:{NFSU2_TR(0x5a5996);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a5999:{NFSU2_TR(0x5a5999);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a599f:{NFSU2_TR(0x5a599f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a59a1:{NFSU2_TR(0x5a59a1);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a59a4:{NFSU2_TR(0x5a59a4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a5a1a;}}
}
B5a59a6:L5a59a6:{c.instructions+=5;NFSU2_TR(0x5a59a6);
{u32 ea_=u32(u32(8371928u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a59ac:{NFSU2_TR(0x5a59ac);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a59b2:{NFSU2_TR(0x5a59b2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a59b4:{NFSU2_TR(0x5a59b4);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a59b7:{NFSU2_TR(0x5a59b7);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5a59c1;}}
}
B5a59b9:L5a59b9:{c.instructions+=2;NFSU2_TR(0x5a59b9);
{u32 ea_=u32(u32(8371928u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a59bf:{NFSU2_TR(0x5a59bf);
{goto L5a59ca;}
}
B5a59c1:L5a59c1:{c.instructions+=2;NFSU2_TR(0x5a59c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a59c4:{NFSU2_TR(0x5a59c4);
{u32 ea_=u32(r4(R+4)+u32(1024u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a59ca:L5a59ca:{c.instructions+=8;NFSU2_TR(0x5a59ca);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5a59cc:{NFSU2_TR(0x5a59cc);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5a59ce:{NFSU2_TR(0x5a59ce);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5a59d1:{NFSU2_TR(0x5a59d1);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a59d4:{NFSU2_TR(0x5a59d4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a59d6:{NFSU2_TR(0x5a59d6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a59d8:{NFSU2_TR(0x5a59d8);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a59db:{NFSU2_TR(0x5a59db);
if(r1(R+514)){{goto L5a5a1a;}}
}
B5a59dd:L5a59dd:{c.instructions+=5;NFSU2_TR(0x5a59dd);
{u32 ea_=u32(u32(8371928u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a59e3:{NFSU2_TR(0x5a59e3);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a59e9:{NFSU2_TR(0x5a59e9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a59eb:{NFSU2_TR(0x5a59eb);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a59ee:{NFSU2_TR(0x5a59ee);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5a59f8;}}
}
B5a59f0:L5a59f0:{c.instructions+=2;NFSU2_TR(0x5a59f0);
{u32 ea_=u32(u32(8371928u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a59f6:{NFSU2_TR(0x5a59f6);
{goto L5a5a01;}
}
B5a59f8:L5a59f8:{c.instructions+=2;NFSU2_TR(0x5a59f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a59fb:{NFSU2_TR(0x5a59fb);
{u32 ea_=u32(r4(R+8)+u32(1024u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a5a01:L5a5a01:{c.instructions+=8;NFSU2_TR(0x5a5a01);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a5a04:{NFSU2_TR(0x5a5a04);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a5a07:{NFSU2_TR(0x5a5a07);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a5a09:{NFSU2_TR(0x5a5a09);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5a5a0c:{NFSU2_TR(0x5a5a0c);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5a5a0e:{NFSU2_TR(0x5a5a0e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a5a10:{NFSU2_TR(0x5a5a10);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a5a13:{NFSU2_TR(0x5a5a13);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5a5a1a;}}
}
B5a5a15:L5a5a15:{c.instructions+=2;NFSU2_TR(0x5a5a15);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a5a17:{NFSU2_TR(0x5a5a17);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a5a1a:L5a5a1a:{c.instructions+=5;NFSU2_TR(0x5a5a1a);
{u32 ea_=u32(u32(8371928u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a5a20:{NFSU2_TR(0x5a5a20);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a5a26:{NFSU2_TR(0x5a5a26);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a5a28:{NFSU2_TR(0x5a5a28);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a5a2b:{NFSU2_TR(0x5a5a2b);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5a5a35;}}
}
B5a5a2d:L5a5a2d:{c.instructions+=2;NFSU2_TR(0x5a5a2d);
{u32 ea_=u32(u32(8371928u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a5a33:{NFSU2_TR(0x5a5a33);
{goto L5a5a3e;}
}
B5a5a35:L5a5a35:{c.instructions+=2;NFSU2_TR(0x5a5a35);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a5a38:{NFSU2_TR(0x5a5a38);
{u32 ea_=u32(r4(R+0)+u32(1024u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a5a3e:L5a5a3e:{c.instructions+=25;NFSU2_TR(0x5a5a3e);
{u32 ea_=u32(u32(8003752u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a5a44:{NFSU2_TR(0x5a5a44);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a5a47:{NFSU2_TR(0x5a5a47);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5a5a49:{NFSU2_TR(0x5a5a49);
{u32 ea_=u32(u32(8003748u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a5a4f:{NFSU2_TR(0x5a5a4f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a5a51:{NFSU2_TR(0x5a5a51);
{u32 ea_=u32(r4(R+4)+u32(1024u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a5a57:{NFSU2_TR(0x5a5a57);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a5a5a:{NFSU2_TR(0x5a5a5a);
{u32 ea_=u32(r4(R+8)+u32(280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a5a60:{NFSU2_TR(0x5a5a60);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a5a63:{NFSU2_TR(0x5a5a63);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a5a66:{NFSU2_TR(0x5a5a66);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a5a69:{NFSU2_TR(0x5a5a69);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5a5a6b:{NFSU2_TR(0x5a5a6b);
{u32 ea_=u32(r4(R+0)+u32(280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a5a71:{NFSU2_TR(0x5a5a71);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5a5a73:{NFSU2_TR(0x5a5a73);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a5a76:{NFSU2_TR(0x5a5a76);
{u32 ea_=u32(r4(R+4)+u32(280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a5a7c:{NFSU2_TR(0x5a5a7c);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5a5a7e:{NFSU2_TR(0x5a5a7e);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a5a81:{NFSU2_TR(0x5a5a81);
{u32 ea_=u32(r4(R+8)+u32(280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a5a87:{NFSU2_TR(0x5a5a87);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5a5a89:{NFSU2_TR(0x5a5a89);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a5a8c:{NFSU2_TR(0x5a5a8c);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5a5a8f:{NFSU2_TR(0x5a5a8f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a5a91:{NFSU2_TR(0x5a5a91);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a5a94:{NFSU2_TR(0x5a5a94);
if(r1(R+518)){{goto L5a5a9b;}}
}
B5a5a96:L5a5a96:{c.instructions+=2;NFSU2_TR(0x5a5a96);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a5a98:{NFSU2_TR(0x5a5a98);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a5a9b:L5a5a9b:{c.instructions+=5;NFSU2_TR(0x5a5a9b);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a5a9e:{NFSU2_TR(0x5a5a9e);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a5aa1:{NFSU2_TR(0x5a5aa1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a5aa3:{NFSU2_TR(0x5a5aa3);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a5aa6:{NFSU2_TR(0x5a5aa6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a5aad;}}
}
B5a5aa8:L5a5aa8:{c.instructions+=2;NFSU2_TR(0x5a5aa8);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a5aab:{NFSU2_TR(0x5a5aab);
{goto L5a5ab0;}
}
B5a5aad:L5a5aad:{c.instructions+=1;NFSU2_TR(0x5a5aad);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a5ab0:L5a5ab0:{c.instructions+=13;NFSU2_TR(0x5a5ab0);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a5ab6:{NFSU2_TR(0x5a5ab6);
{u32 ea_=u32(u32(8002084u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5a5abc:{NFSU2_TR(0x5a5abc);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5a5abe:{NFSU2_TR(0x5a5abe);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5a5ac0:{NFSU2_TR(0x5a5ac0);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a5ac3:{NFSU2_TR(0x5a5ac3);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5a5ac5:{NFSU2_TR(0x5a5ac5);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B5a5ac7:{NFSU2_TR(0x5a5ac7);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a5ac9:{NFSU2_TR(0x5a5ac9);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a5acc:{NFSU2_TR(0x5a5acc);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a5ad2:{NFSU2_TR(0x5a5ad2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a5ad4:{NFSU2_TR(0x5a5ad4);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a5ad7:{NFSU2_TR(0x5a5ad7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a5ae0;}}
}
B5a5ad9:L5a5ad9:{c.instructions+=1;NFSU2_TR(0x5a5ad9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a5ae0:L5a5ae0:{c.instructions+=4;NFSU2_TR(0x5a5ae0);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5a5ae6:{NFSU2_TR(0x5a5ae6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a5ae8:{NFSU2_TR(0x5a5ae8);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a5aeb:{NFSU2_TR(0x5a5aeb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a5af5;}}
}
B5a5aed:L5a5aed:{c.instructions+=2;NFSU2_TR(0x5a5aed);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a5aef:{NFSU2_TR(0x5a5aef);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a5af5:L5a5af5:{c.instructions+=18;NFSU2_TR(0x5a5af5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a5af8:{NFSU2_TR(0x5a5af8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a5afb:{NFSU2_TR(0x5a5afb);
{u32 ea_=u32(r4(R+0)+u32(992u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a5b01:{NFSU2_TR(0x5a5b01);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3dcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a5b07:{NFSU2_TR(0x5a5b07);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a5b0a:{NFSU2_TR(0x5a5b0a);
{u32 ea_=u32(r4(R+8)+u32(368u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a5b10:{NFSU2_TR(0x5a5b10);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a5b13:{NFSU2_TR(0x5a5b13);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a5b16:{NFSU2_TR(0x5a5b16);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a5b19:{NFSU2_TR(0x5a5b19);
{u32 ea_=u32(r4(R+0)+u32(368u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a5b1f:{NFSU2_TR(0x5a5b1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a5b22:{NFSU2_TR(0x5a5b22);
{u32 ea_=u32(r4(R+4)+u32(368u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a5b28:{NFSU2_TR(0x5a5b28);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5a5b2a:{NFSU2_TR(0x5a5b2a);
{u32 ea_=u32(r4(R+8)+u32(368u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a5b30:{NFSU2_TR(0x5a5b30);
{u32 ea_=u32(u32(7884072u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a5b36:{NFSU2_TR(0x5a5b36);
{u32 ea_=u32(r4(R+0)+u32(984u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a5b3c:{NFSU2_TR(0x5a5b3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5a5b3f:{NFSU2_TR(0x5a5b3f);
}
B5a5b40:L5a5b40:{c.instructions+=3;NFSU2_TR(0x5a5b40);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a5b41:{NFSU2_TR(0x5a5b41);
__builtin_memmove((R+4),(R+24),4);
}
B5a5b43:{NFSU2_TR(0x5a5b43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a5b48ull));
TAIL_STATIC(0x5921b0u,592);
}
B5a5b48:L5a5b48:{c.instructions+=3;NFSU2_TR(0x5a5b48);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5a5b49:{NFSU2_TR(0x5a5b49);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B5a5b4c:{NFSU2_TR(0x5a5b4c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a5b40u);}goto L5a5b40;}}
}
B5a5b4e:L5a5b4e:{c.instructions+=5;NFSU2_TR(0x5a5b4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a5b4f:{NFSU2_TR(0x5a5b4f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a5b50:{NFSU2_TR(0x5a5b50);
__builtin_memmove((R+16),(R+20),4);
}
B5a5b52:{NFSU2_TR(0x5a5b52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5a5b53:{NFSU2_TR(0x5a5b53);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a5b60:L5a5b60:{c.instructions+=10;NFSU2_TR(0x5a5b60);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a5b61:{NFSU2_TR(0x5a5b61);
__builtin_memmove((R+20),(R+16),4);
}
B5a5b63:{NFSU2_TR(0x5a5b63);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5a5b66:{NFSU2_TR(0x5a5b66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B5a5b69:{NFSU2_TR(0x5a5b69);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a5b6a:{NFSU2_TR(0x5a5b6a);
__builtin_memmove((R+24),(R+4),4);
}
B5a5b6c:{NFSU2_TR(0x5a5b6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a5b6f:{NFSU2_TR(0x5a5b6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a5b72:{NFSU2_TR(0x5a5b72);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B5a5b75:{NFSU2_TR(0x5a5b75);
if(r1(R+518)){{goto L5a5c17;}}
}
B5a5b7b:L5a5b7b:{c.instructions+=2;NFSU2_TR(0x5a5b7b);
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
B5a5b7e:{NFSU2_TR(0x5a5b7e);
if(r1(R+518)){{goto L5a5c17;}}
}
B5a5b84:L5a5b84:{c.instructions+=20;NFSU2_TR(0x5a5b84);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a5b87:{NFSU2_TR(0x5a5b87);
{u32 ea_=u32(r4(R+4)+u32(200u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a5b8d:{NFSU2_TR(0x5a5b8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x424ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a5b93:{NFSU2_TR(0x5a5b93);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B5a5b96:{NFSU2_TR(0x5a5b96);
{u32 ea_=u32(r4(R+4)+u32(196u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a5b9c:{NFSU2_TR(0x5a5b9c);
{u32 ea_=u32(r4(R+4)+u32(192u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a5ba2:{NFSU2_TR(0x5a5ba2);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5a5ba4:{NFSU2_TR(0x5a5ba4);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5a5ba6:{NFSU2_TR(0x5a5ba6);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B5a5ba8:{NFSU2_TR(0x5a5ba8);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B5a5baa:{NFSU2_TR(0x5a5baa);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a5bac:{NFSU2_TR(0x5a5bac);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5a5bae:{NFSU2_TR(0x5a5bae);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5a5bb0:{NFSU2_TR(0x5a5bb0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a5bb2:{NFSU2_TR(0x5a5bb2);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5a5bb4:{NFSU2_TR(0x5a5bb4);
__asm__ volatile(".byte 0xdd,0xdb":::"memory");
}
B5a5bb6:{NFSU2_TR(0x5a5bb6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a5bb8:{NFSU2_TR(0x5a5bb8);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a5bba:{NFSU2_TR(0x5a5bba);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a5bbe:{NFSU2_TR(0x5a5bbe);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5a5c17;}}
}
B5a5bc0:L5a5bc0:{c.instructions+=5;NFSU2_TR(0x5a5bc0);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a5bc4:{NFSU2_TR(0x5a5bc4);
{u32 ea_=u32(u32(8002128u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a5bca:{NFSU2_TR(0x5a5bca);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a5bcc:{NFSU2_TR(0x5a5bcc);
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
B5a5bcf:{NFSU2_TR(0x5a5bcf);
if(r1(R+514)){{goto L5a5c17;}}
}
B5a5bd1:L5a5bd1:{c.instructions+=6;NFSU2_TR(0x5a5bd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x164ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a5bd7:{NFSU2_TR(0x5a5bd7);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a5bdb:{NFSU2_TR(0x5a5bdb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a5bdc:{NFSU2_TR(0x5a5bdc);
w4(R+4,u32(0x86b4a0ull));
}
B5a5be1:{NFSU2_TR(0x5a5be1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a5be5:{NFSU2_TR(0x5a5be5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a5beaull));
TAIL_STATIC(0x576790u,576);
}
B5a5bea:L5a5bea:{c.instructions+=10;NFSU2_TR(0x5a5bea);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a5bee:{NFSU2_TR(0x5a5bee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5a5bf1:{NFSU2_TR(0x5a5bf1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a5bf2:{NFSU2_TR(0x5a5bf2);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5a5bf4:{NFSU2_TR(0x5a5bf4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5a5bfa:{NFSU2_TR(0x5a5bfa);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a5bfd:{NFSU2_TR(0x5a5bfd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a5bfe:{NFSU2_TR(0x5a5bfe);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5a5c02:{NFSU2_TR(0x5a5c02);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a5c03:{NFSU2_TR(0x5a5c03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a5c08ull));
TAIL_STATIC(0x4011f0u,401);
}
B5a5c08:L5a5c08:{c.instructions+=5;NFSU2_TR(0x5a5c08);
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
B5a5c0b:{NFSU2_TR(0x5a5c0b);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5a5c0f:{NFSU2_TR(0x5a5c0f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a5c10:{NFSU2_TR(0x5a5c10);
__builtin_memmove((R+4),(R+24),4);
}
B5a5c12:{NFSU2_TR(0x5a5c12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a5c17ull));
TAIL_STATIC(0x59bc20u,59b);
}
B5a5c17:L5a5c17:{c.instructions+=4;NFSU2_TR(0x5a5c17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a5c18:{NFSU2_TR(0x5a5c18);
__builtin_memmove((R+16),(R+20),4);
}
B5a5c1a:{NFSU2_TR(0x5a5c1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5a5c1b:{NFSU2_TR(0x5a5c1b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a5c20:L5a5c20:{c.instructions+=27;NFSU2_TR(0x5a5c20);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a5c21:{NFSU2_TR(0x5a5c21);
__builtin_memmove((R+20),(R+16),4);
}
B5a5c23:{NFSU2_TR(0x5a5c23);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5a5c26:{NFSU2_TR(0x5a5c26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x34ull))));
}
B5a5c29:{NFSU2_TR(0x5a5c29);
__builtin_memmove((R+0),gp(0x86b390),4);
}
B5a5c2e:{NFSU2_TR(0x5a5c2e);
__builtin_memmove((R+8),gp(0x86b398),4);
}
B5a5c34:{NFSU2_TR(0x5a5c34);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a5c35:{NFSU2_TR(0x5a5c35);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a5c36:{NFSU2_TR(0x5a5c36);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a5c37:{NFSU2_TR(0x5a5c37);
__builtin_memmove((R+28),(R+4),4);
}
B5a5c39:{NFSU2_TR(0x5a5c39);
__builtin_memmove((R+4),gp(0x86b394),4);
}
B5a5c3f:{NFSU2_TR(0x5a5c3f);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a5c43:{NFSU2_TR(0x5a5c43);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a5c46:{NFSU2_TR(0x5a5c46);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a5c4a:{NFSU2_TR(0x5a5c4a);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a5c4e:{NFSU2_TR(0x5a5c4e);
{u32 ea_=u32(r4(R+4)+u32(312u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a5c54:{NFSU2_TR(0x5a5c54);
{u32 ea_=u32(r4(R+4)+u32(168u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a5c5a:{NFSU2_TR(0x5a5c5a);
{u32 ea_=u32(r4(R+4)+u32(308u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a5c60:{NFSU2_TR(0x5a5c60);
{u32 ea_=u32(r4(R+4)+u32(164u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a5c66:{NFSU2_TR(0x5a5c66);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a5c68:{NFSU2_TR(0x5a5c68);
{u32 ea_=u32(r4(R+4)+u32(304u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a5c6e:{NFSU2_TR(0x5a5c6e);
{u32 ea_=u32(r4(R+4)+u32(160u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a5c74:{NFSU2_TR(0x5a5c74);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a5c76:{NFSU2_TR(0x5a5c76);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a5c7c:{NFSU2_TR(0x5a5c7c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a5c7e:{NFSU2_TR(0x5a5c7e);
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
B5a5c81:{NFSU2_TR(0x5a5c81);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a5ca3;}}
}
B5a5c83:L5a5c83:{c.instructions+=7;NFSU2_TR(0x5a5c83);
{u32 ea_=u32(r4(R+4)+u32(308u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a5c89:{NFSU2_TR(0x5a5c89);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a5c8f:{NFSU2_TR(0x5a5c8f);
{u32 ea_=u32(r4(R+4)+u32(312u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a5c95:{NFSU2_TR(0x5a5c95);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a5c99:{NFSU2_TR(0x5a5c99);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5a5c9b:{NFSU2_TR(0x5a5c9b);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a5c9f:{NFSU2_TR(0x5a5c9f);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a5ca3:L5a5ca3:{c.instructions+=19;NFSU2_TR(0x5a5ca3);
{u32 ea_=u32(r4(R+28)+u32(144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a5ca9:{NFSU2_TR(0x5a5ca9);
__builtin_memmove((R+4),gp(0x7a1a54),4);
}
B5a5caf:{NFSU2_TR(0x5a5caf);
{u32 ea_=u32(r4(R+28)+u32(224u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5a5cb5:{NFSU2_TR(0x5a5cb5);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xe0ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a5cbb:{NFSU2_TR(0x5a5cbb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a5cbc:{NFSU2_TR(0x5a5cbc);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5a5cc0:{NFSU2_TR(0x5a5cc0);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a5cc4:{NFSU2_TR(0x5a5cc4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a5cc5:{NFSU2_TR(0x5a5cc5);
{u32 ea_=u32(r4(R+28)+u32(148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a5ccb:{NFSU2_TR(0x5a5ccb);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5a5ccf:{NFSU2_TR(0x5a5ccf);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5a5cd2:{NFSU2_TR(0x5a5cd2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a5cd3:{NFSU2_TR(0x5a5cd3);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5a5cd7:{NFSU2_TR(0x5a5cd7);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a5cdb:{NFSU2_TR(0x5a5cdb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a5cdc:{NFSU2_TR(0x5a5cdc);
{u32 ea_=u32(r4(R+28)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a5ce2:{NFSU2_TR(0x5a5ce2);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5a5ce5:{NFSU2_TR(0x5a5ce5);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a5ce9:{NFSU2_TR(0x5a5ce9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a5ceeull));
TAIL_STATIC(0x43d0c0u,43d);
}
B5a5cee:L5a5cee:{c.instructions+=11;NFSU2_TR(0x5a5cee);
{u32 ea_=u32(u32(8002136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a5cf4:{NFSU2_TR(0x5a5cf4);
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
B5a5cf7:{NFSU2_TR(0x5a5cf7);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5a5cf9:{NFSU2_TR(0x5a5cf9);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xf0ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a5cff:{NFSU2_TR(0x5a5cff);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a5d02:{NFSU2_TR(0x5a5d02);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a5d03:{NFSU2_TR(0x5a5d03);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5a5d07:{NFSU2_TR(0x5a5d07);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a5d08:{NFSU2_TR(0x5a5d08);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5a5d0c:{NFSU2_TR(0x5a5d0c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a5d0d:{NFSU2_TR(0x5a5d0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a5d12ull));
TAIL_STATIC(0x43d0c0u,43d);
}
B5a5d12:L5a5d12:{c.instructions+=10;NFSU2_TR(0x5a5d12);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a5d15:{NFSU2_TR(0x5a5d15);
{u32 ea_=u32(r4(R+4)+u32(360u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a5d1b:{NFSU2_TR(0x5a5d1b);
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
B5a5d1e:{NFSU2_TR(0x5a5d1e);
{u32 ea_=u32(u32(8374272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a5d24:{NFSU2_TR(0x5a5d24);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5a5d28:{NFSU2_TR(0x5a5d28);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a5d2b:{NFSU2_TR(0x5a5d2b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a5d2c:{NFSU2_TR(0x5a5d2c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a5d2d:{NFSU2_TR(0x5a5d2d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a5d2e:{NFSU2_TR(0x5a5d2e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a5d33ull));
TAIL_STATIC(0x43d0c0u,43d);
}
B5a5d33:L5a5d33:{c.instructions+=6;NFSU2_TR(0x5a5d33);
__builtin_memmove((R+0),gp(0x7fc800),4);
}
B5a5d38:{NFSU2_TR(0x5a5d38);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a5d39:{NFSU2_TR(0x5a5d39);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a5d3a:{NFSU2_TR(0x5a5d3a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a5d3b:{NFSU2_TR(0x5a5d3b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a5d3c:{NFSU2_TR(0x5a5d3c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a5d41ull));
TAIL_STATIC(0x43d0c0u,43d);
}
B5a5d41:L5a5d41:{c.instructions+=14;NFSU2_TR(0x5a5d41);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a5d44:{NFSU2_TR(0x5a5d44);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a5d47:{NFSU2_TR(0x5a5d47);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a5d4d:{NFSU2_TR(0x5a5d4d);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a5d50:{NFSU2_TR(0x5a5d50);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a5d53:{NFSU2_TR(0x5a5d53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5a5d55:{NFSU2_TR(0x5a5d55);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5a5d57:{NFSU2_TR(0x5a5d57);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a5d5a:{NFSU2_TR(0x5a5d5a);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a5d5d:{NFSU2_TR(0x5a5d5d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B5a5d60:{NFSU2_TR(0x5a5d60);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a5d68:{NFSU2_TR(0x5a5d68);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a5d6b:{NFSU2_TR(0x5a5d6b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5a5d6e:{NFSU2_TR(0x5a5d6e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a5d72:L5a5d72:{c.instructions+=11;NFSU2_TR(0x5a5d72);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a5d76:{NFSU2_TR(0x5a5d76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5a5d78:{NFSU2_TR(0x5a5d78);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a5d7b:{NFSU2_TR(0x5a5d7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a5d7e:{NFSU2_TR(0x5a5d7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a5d81:{NFSU2_TR(0x5a5d81);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5a5d83:{NFSU2_TR(0x5a5d83);
{u32 ea_=u32(r4(R+8)+u32(448u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a5d89:{NFSU2_TR(0x5a5d89);
{u32 ea_=u32(u32(7882068u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a5d8f:{NFSU2_TR(0x5a5d8f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a5d91:{NFSU2_TR(0x5a5d91);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a5d94:{NFSU2_TR(0x5a5d94);
if(r1(R+514)){{goto L5a5da1;}}
}
B5a5d96:L5a5d96:{c.instructions+=2;NFSU2_TR(0x5a5d96);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5a5d99:{NFSU2_TR(0x5a5d99);
if(r1(R+518)){{goto L5a5dfe;}}
}
B5a5d9b:L5a5d9b:{c.instructions+=2;NFSU2_TR(0x5a5d9b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a5d9d:{NFSU2_TR(0x5a5d9d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a5dbe;}}
}
B5a5d9f:L5a5d9f:{c.instructions+=1;NFSU2_TR(0x5a5d9f);
{goto L5a5dfe;}
}
B5a5da1:L5a5da1:{c.instructions+=5;NFSU2_TR(0x5a5da1);
{u32 ea_=u32(r4(R+8)+u32(448u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a5da7:{NFSU2_TR(0x5a5da7);
{u32 ea_=u32(u32(7885036u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a5dad:{NFSU2_TR(0x5a5dad);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a5daf:{NFSU2_TR(0x5a5daf);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a5db2:{NFSU2_TR(0x5a5db2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a5dfe;}}
}
B5a5db4:L5a5db4:{c.instructions+=2;NFSU2_TR(0x5a5db4);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5a5db7:{NFSU2_TR(0x5a5db7);
if(r1(R+518)){{goto L5a5dfe;}}
}
B5a5db9:L5a5db9:{c.instructions+=2;NFSU2_TR(0x5a5db9);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5a5dbc:{NFSU2_TR(0x5a5dbc);
if(r1(R+518)){{goto L5a5dfe;}}
}
B5a5dbe:L5a5dbe:{c.instructions+=16;NFSU2_TR(0x5a5dbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a5dc1:{NFSU2_TR(0x5a5dc1);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a5dc4:{NFSU2_TR(0x5a5dc4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
}
B5a5dc7:{NFSU2_TR(0x5a5dc7);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a5dca:{NFSU2_TR(0x5a5dca);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a5dcd:{NFSU2_TR(0x5a5dcd);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a5dd0:{NFSU2_TR(0x5a5dd0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a5dd2:{NFSU2_TR(0x5a5dd2);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a5dd4:{NFSU2_TR(0x5a5dd4);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a5dd6:{NFSU2_TR(0x5a5dd6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a5dd8:{NFSU2_TR(0x5a5dd8);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5a5dda:{NFSU2_TR(0x5a5dda);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5a5ddc:{NFSU2_TR(0x5a5ddc);
{u32 ea_=u32(u32(8003760u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B5a5de2:{NFSU2_TR(0x5a5de2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a5de4:{NFSU2_TR(0x5a5de4);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a5de7:{NFSU2_TR(0x5a5de7);
if(r1(R+514)){{goto L5a5df1;}}
}
B5a5de9:L5a5de9:{c.instructions+=2;NFSU2_TR(0x5a5de9);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a5deb:{NFSU2_TR(0x5a5deb);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a5df1:L5a5df1:{c.instructions+=5;NFSU2_TR(0x5a5df1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a5df4:{NFSU2_TR(0x5a5df4);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a5df7:{NFSU2_TR(0x5a5df7);
__asm__ volatile(".byte 0xd8,0xf9":::"memory");
}
B5a5df9:{NFSU2_TR(0x5a5df9);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a5dfc:{NFSU2_TR(0x5a5dfc);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a5dfe:L5a5dfe:{c.instructions+=7;NFSU2_TR(0x5a5dfe);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a5e02:{NFSU2_TR(0x5a5e02);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a5e06:{NFSU2_TR(0x5a5e06);
w1(R+512,carry<u32>(r4(R+4),u32(0x4ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B5a5e09:{NFSU2_TR(0x5a5e09);
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
B5a5e0a:{NFSU2_TR(0x5a5e0a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a5e0e:{NFSU2_TR(0x5a5e0e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a5e12:{NFSU2_TR(0x5a5e12);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a5d72u);}goto L5a5d72;}}
}
B5a5e18:L5a5e18:{c.instructions+=6;NFSU2_TR(0x5a5e18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a5e19:{NFSU2_TR(0x5a5e19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a5e1a:{NFSU2_TR(0x5a5e1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a5e1b:{NFSU2_TR(0x5a5e1b);
__builtin_memmove((R+16),(R+20),4);
}
B5a5e1d:{NFSU2_TR(0x5a5e1d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5a5e1e:{NFSU2_TR(0x5a5e1e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a5e20:L5a5e20:{c.instructions+=15;NFSU2_TR(0x5a5e20);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a5e21:{NFSU2_TR(0x5a5e21);
__builtin_memmove((R+20),(R+16),4);
}
B5a5e23:{NFSU2_TR(0x5a5e23);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5a5e26:{NFSU2_TR(0x5a5e26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B5a5e29:{NFSU2_TR(0x5a5e29);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a5e2a:{NFSU2_TR(0x5a5e2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5a5e2d:{NFSU2_TR(0x5a5e2d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a5e2e:{NFSU2_TR(0x5a5e2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5a5e31:{NFSU2_TR(0x5a5e31);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a5e32:{NFSU2_TR(0x5a5e32);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5a5e35:{NFSU2_TR(0x5a5e35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5a5e37:{NFSU2_TR(0x5a5e37);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a5e38:{NFSU2_TR(0x5a5e38);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a5e39:{NFSU2_TR(0x5a5e39);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a5e3a:{NFSU2_TR(0x5a5e3a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a5e3full));
TAIL_STATIC(0x5992b0u,599);
}
B5a5e3f:L5a5e3f:{c.instructions+=5;NFSU2_TR(0x5a5e3f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B5a5e41:{NFSU2_TR(0x5a5e41);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5a5e43:{NFSU2_TR(0x5a5e43);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5a5e46:{NFSU2_TR(0x5a5e46);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5a5e48:{NFSU2_TR(0x5a5e48);
if(r1(R+518)){TAIL_STATIC(0x5a6074u,5a6);}
}
B5a5e4e:L5a5e4e:{c.instructions+=2;NFSU2_TR(0x5a5e4e);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5a5e4f:{NFSU2_TR(0x5a5e4f);
if(r1(R+518)){{goto L5a5f4a;}}
}
B5a5e55:L5a5e55:{c.instructions+=2;NFSU2_TR(0x5a5e55);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5a5e56:{NFSU2_TR(0x5a5e56);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x5a60deu,5a6);}
}
B5a5e5c:L5a5e5c:{c.instructions+=9;NFSU2_TR(0x5a5e5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a5e5f:{NFSU2_TR(0x5a5e5f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5a5e61:{NFSU2_TR(0x5a5e61);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a5e64:{NFSU2_TR(0x5a5e64);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a5e67:{NFSU2_TR(0x5a5e67);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a5e6a:{NFSU2_TR(0x5a5e6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a5e70:{NFSU2_TR(0x5a5e70);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a5e76:{NFSU2_TR(0x5a5e76);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a5e7c:{NFSU2_TR(0x5a5e7c);
if(r1(R+518)){{goto L5a5e9e;}}
}
B5a5e7e:L5a5e7e:{c.instructions+=2;NFSU2_TR(0x5a5e7e);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x424ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+28)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5a5e84:{NFSU2_TR(0x5a5e84);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5a5e9e;}}
}
B5a5e86:L5a5e86:{c.instructions+=8;NFSU2_TR(0x5a5e86);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a5e89:{NFSU2_TR(0x5a5e89);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a5e8c:{NFSU2_TR(0x5a5e8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a5e8f:{NFSU2_TR(0x5a5e8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a5e92:{NFSU2_TR(0x5a5e92);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a5e95:{NFSU2_TR(0x5a5e95);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a5e98:{NFSU2_TR(0x5a5e98);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a5e9b:{NFSU2_TR(0x5a5e9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a5e9e:L5a5e9e:{c.instructions+=5;NFSU2_TR(0x5a5e9e);
{u32 ea_=u32(r4(R+24)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a5ea1:{NFSU2_TR(0x5a5ea1);
{u32 ea_=u32(u32(7881560u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a5ea7:{NFSU2_TR(0x5a5ea7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a5ea9:{NFSU2_TR(0x5a5ea9);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a5eac:{NFSU2_TR(0x5a5eac);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5a5ecc;}}
}
B5a5eae:L5a5eae:{c.instructions+=3;NFSU2_TR(0x5a5eae);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a5eb1:{NFSU2_TR(0x5a5eb1);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
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
B5a5eb5:{NFSU2_TR(0x5a5eb5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a5ec2;}}
}
B5a5eb7:L5a5eb7:{c.instructions+=2;NFSU2_TR(0x5a5eb7);
__builtin_memmove((R+4),(R+12),4);
}
B5a5eb9:{NFSU2_TR(0x5a5eb9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a5ebeull));
TAIL_STATIC(0x5ed1b0u,5ed);
}
B5a5ebe:L5a5ebe:{c.instructions+=2;NFSU2_TR(0x5a5ebe);
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
B5a5ec0:{NFSU2_TR(0x5a5ec0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a5ec9;}}
}
B5a5ec2:L5a5ec2:{c.instructions+=3;NFSU2_TR(0x5a5ec2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a5ec5:{NFSU2_TR(0x5a5ec5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5a5ec7:{NFSU2_TR(0x5a5ec7);
{goto L5a5f31;}
}
B5a5ec9:L5a5ec9:{c.instructions+=1;NFSU2_TR(0x5a5ec9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a5ecc:L5a5ecc:{c.instructions+=4;NFSU2_TR(0x5a5ecc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a5ecf:{NFSU2_TR(0x5a5ecf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5a5ed1:{NFSU2_TR(0x5a5ed1);
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
B5a5ed3:{NFSU2_TR(0x5a5ed3);
if(r1(R+518)){{goto L5a5f29;}}
}
B5a5ed5:L5a5ed5:{c.instructions+=2;NFSU2_TR(0x5a5ed5);
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
B5a5eda:{NFSU2_TR(0x5a5eda);
if(r1(R+518)){{goto L5a5f29;}}
}
B5a5edc:L5a5edc:{c.instructions+=6;NFSU2_TR(0x5a5edc);
__builtin_memmove((R+4),gp(0x86518c),4);
}
B5a5ee2:{NFSU2_TR(0x5a5ee2);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B5a5ee4:{NFSU2_TR(0x5a5ee4);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a5ee8:{NFSU2_TR(0x5a5ee8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a5eeb:{NFSU2_TR(0x5a5eeb);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5a5eed:{NFSU2_TR(0x5a5eed);
if(r1(R+518)){{goto L5a5eff;}}
}
B5a5eef:L5a5eef:{c.instructions+=1;NFSU2_TR(0x5a5eef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a5ef4ull));
TAIL_STATIC(0x5ee250u,5ee);
}
B5a5ef4:L5a5ef4:{c.instructions+=3;NFSU2_TR(0x5a5ef4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a5ef6:{NFSU2_TR(0x5a5ef6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a5ef9:{NFSU2_TR(0x5a5ef9);
if(r1(R+518)){{goto L5a5eff;}}
}
B5a5efb:L5a5efb:{c.instructions+=2;NFSU2_TR(0x5a5efb);
w1(R+4,u8(0x1ull));
}
B5a5efd:{NFSU2_TR(0x5a5efd);
{goto L5a5f01;}
}
B5a5eff:L5a5eff:{c.instructions+=1;NFSU2_TR(0x5a5eff);
w1(R+4,u8(u32(r1(R+4))^u32(r1(R+4))));
}
B5a5f01:L5a5f01:{c.instructions+=2;NFSU2_TR(0x5a5f01);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(R+8))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+6)));
w4(U+10,u32(u32(r4(R+8))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5a5f03:{NFSU2_TR(0x5a5f03);
if(r1(R+518)){{goto L5a5f31;}}
}
B5a5f05:L5a5f05:{c.instructions+=6;NFSU2_TR(0x5a5f05);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5a5f09:{NFSU2_TR(0x5a5f09);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a5f0f:{NFSU2_TR(0x5a5f0f);
{u32 ea_=u32(u32(8002168u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a5f15:{NFSU2_TR(0x5a5f15);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a5f17:{NFSU2_TR(0x5a5f17);
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
B5a5f1a:{NFSU2_TR(0x5a5f1a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a5f31;}}
}
B5a5f1c:L5a5f1c:{c.instructions+=2;NFSU2_TR(0x5a5f1c);
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
B5a5f1e:{NFSU2_TR(0x5a5f1e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a5f31;}}
}
B5a5f20:L5a5f20:{c.instructions+=2;NFSU2_TR(0x5a5f20);
__builtin_memmove((R+4),(R+12),4);
}
B5a5f22:{NFSU2_TR(0x5a5f22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a5f27ull));
TAIL_STATIC(0x5ebf60u,5eb);
}
B5a5f27:L5a5f27:{c.instructions+=1;NFSU2_TR(0x5a5f27);
{goto L5a5f31;}
}
B5a5f29:L5a5f29:{c.instructions+=2;NFSU2_TR(0x5a5f29);
__builtin_memmove((R+8),gp(0x86518c),4);
}
B5a5f2f:{NFSU2_TR(0x5a5f2f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5a5f31:L5a5f31:{c.instructions+=10;NFSU2_TR(0x5a5f31);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a5f34:{NFSU2_TR(0x5a5f34);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x19ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5a5f38:{NFSU2_TR(0x5a5f38);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a5f3e:{NFSU2_TR(0x5a5f3e);
w4(R+0,u32(0x1ull));
}
B5a5f43:{NFSU2_TR(0x5a5f43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a5f44:{NFSU2_TR(0x5a5f44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a5f45:{NFSU2_TR(0x5a5f45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a5f46:{NFSU2_TR(0x5a5f46);
__builtin_memmove((R+16),(R+20),4);
}
B5a5f48:{NFSU2_TR(0x5a5f48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5a5f49:{NFSU2_TR(0x5a5f49);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a5f4a:L5a5f4a:{c.instructions+=27;NFSU2_TR(0x5a5f4a);
{u32 ea_=u32(u32(8002140u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a5f50:{NFSU2_TR(0x5a5f50);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a5f53:{NFSU2_TR(0x5a5f53);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5a5f55:{NFSU2_TR(0x5a5f55);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a5f58:{NFSU2_TR(0x5a5f58);
{u32 ea_=u32(r4(R+24)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a5f5b:{NFSU2_TR(0x5a5f5b);
{u32 ea_=u32(u32(8002140u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a5f61:{NFSU2_TR(0x5a5f61);
{u32 ea_=u32(r4(R+24)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a5f64:{NFSU2_TR(0x5a5f64);
{u32 ea_=u32(u32(8002140u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a5f6a:{NFSU2_TR(0x5a5f6a);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a5f6e:{NFSU2_TR(0x5a5f6e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a5f72:{NFSU2_TR(0x5a5f72);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5a5f74:{NFSU2_TR(0x5a5f74);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a5f77:{NFSU2_TR(0x5a5f77);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a5f7a:{NFSU2_TR(0x5a5f7a);
{u32 ea_=u32(r4(R+24)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a5f7d:{NFSU2_TR(0x5a5f7d);
{u32 ea_=u32(u32(8002140u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a5f83:{NFSU2_TR(0x5a5f83);
{u32 ea_=u32(r4(R+24)+u32(128u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a5f89:{NFSU2_TR(0x5a5f89);
{u32 ea_=u32(r4(R+24)+u32(132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a5f8f:{NFSU2_TR(0x5a5f8f);
{u32 ea_=u32(u32(8002140u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a5f95:{NFSU2_TR(0x5a5f95);
{u32 ea_=u32(r4(R+24)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a5f9b:{NFSU2_TR(0x5a5f9b);
{u32 ea_=u32(u32(8002140u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a5fa1:{NFSU2_TR(0x5a5fa1);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a5fa5:{NFSU2_TR(0x5a5fa5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a5fa9:{NFSU2_TR(0x5a5fa9);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5a5fab:{NFSU2_TR(0x5a5fab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a5fb1:{NFSU2_TR(0x5a5fb1);
{u32 ea_=u32(r4(R+24)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a5fb7:{NFSU2_TR(0x5a5fb7);
{u32 ea_=u32(r4(R+24)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a5fbd:{NFSU2_TR(0x5a5fbd);
if(r1(R+518)){{goto L5a5ffb;}}
}
B5a5fbf:L5a5fbf:{c.instructions+=16;NFSU2_TR(0x5a5fbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a5fc2:{NFSU2_TR(0x5a5fc2);
{u32 ea_=u32(u32(8002140u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a5fc8:{NFSU2_TR(0x5a5fc8);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a5fcb:{NFSU2_TR(0x5a5fcb);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a5fce:{NFSU2_TR(0x5a5fce);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a5fd1:{NFSU2_TR(0x5a5fd1);
{u32 ea_=u32(u32(8002140u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a5fd7:{NFSU2_TR(0x5a5fd7);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a5fda:{NFSU2_TR(0x5a5fda);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a5fdd:{NFSU2_TR(0x5a5fdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a5fe0:{NFSU2_TR(0x5a5fe0);
{u32 ea_=u32(u32(8002140u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a5fe6:{NFSU2_TR(0x5a5fe6);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a5fe9:{NFSU2_TR(0x5a5fe9);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a5fec:{NFSU2_TR(0x5a5fec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a5fef:{NFSU2_TR(0x5a5fef);
{u32 ea_=u32(u32(8002140u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a5ff5:{NFSU2_TR(0x5a5ff5);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a5ff8:{NFSU2_TR(0x5a5ff8);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a5ffb:L5a5ffb:{c.instructions+=1;NFSU2_TR(0x5a5ffb);
{u32 ea_=u32(r4(R+24)+u32(168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
TAIL_STATIC(0x5a6001u,5a6);
}
XIT:NFSU2_TR_EXIT(0x5a5,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
