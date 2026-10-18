#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_4f6(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_5b5(u8* __restrict R,Cpu& c);
u32 body_5ed(u8* __restrict R,Cpu& c);
u32 body_60f(u8* __restrict R,Cpu& c);
u32 body_610(u8* __restrict R,Cpu& c);
u32 body_61b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4f5,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4f5,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4f5(u8* __restrict R,Cpu& c);
u32 page_4f5(Cpu& c){return body_4f5(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4f5(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4f5000:goto L4f5000;
case 0x4f5003:c.instructions+=3;goto B4f5003;
case 0x4f5005:c.instructions+=2;goto B4f5005;
case 0x4f500a:c.instructions+=1;goto B4f500a;
case 0x4f500f:goto L4f500f;
case 0x4f5012:c.instructions+=3;goto B4f5012;
case 0x4f5013:c.instructions+=2;goto B4f5013;
case 0x4f5014:c.instructions+=1;goto B4f5014;
case 0x4f5019:goto L4f5019;
case 0x4f501b:c.instructions+=3;goto B4f501b;
case 0x4f501e:c.instructions+=2;goto B4f501e;
case 0x4f5020:c.instructions+=1;goto B4f5020;
case 0x4f5022:goto L4f5022;
case 0x4f5027:goto L4f5027;
case 0x4f5029:c.instructions+=1;goto B4f5029;
case 0x4f502b:goto L4f502b;
case 0x4f502e:c.instructions+=1;goto B4f502e;
case 0x4f5030:goto L4f5030;
case 0x4f5032:goto L4f5032;
case 0x4f5035:c.instructions+=4;goto B4f5035;
case 0x4f5037:c.instructions+=3;goto B4f5037;
case 0x4f503a:c.instructions+=2;goto B4f503a;
case 0x4f503d:c.instructions+=1;goto B4f503d;
case 0x4f503f:goto L4f503f;
case 0x4f5043:c.instructions+=10;goto B4f5043;
case 0x4f5046:c.instructions+=9;goto B4f5046;
case 0x4f5049:c.instructions+=8;goto B4f5049;
case 0x4f504c:c.instructions+=7;goto B4f504c;
case 0x4f504d:c.instructions+=6;goto B4f504d;
case 0x4f504f:c.instructions+=5;goto B4f504f;
case 0x4f5050:c.instructions+=4;goto B4f5050;
case 0x4f5051:c.instructions+=3;goto B4f5051;
case 0x4f5058:c.instructions+=2;goto B4f5058;
case 0x4f505b:c.instructions+=1;goto B4f505b;
case 0x4f5060:goto L4f5060;
case 0x4f5062:c.instructions+=22;goto B4f5062;
case 0x4f5067:c.instructions+=21;goto B4f5067;
case 0x4f506d:c.instructions+=20;goto B4f506d;
case 0x4f506e:c.instructions+=19;goto B4f506e;
case 0x4f5075:c.instructions+=18;goto B4f5075;
case 0x4f5076:c.instructions+=17;goto B4f5076;
case 0x4f507a:c.instructions+=16;goto B4f507a;
case 0x4f507b:c.instructions+=15;goto B4f507b;
case 0x4f507c:c.instructions+=14;goto B4f507c;
case 0x4f507e:c.instructions+=13;goto B4f507e;
case 0x4f5080:c.instructions+=12;goto B4f5080;
case 0x4f5081:c.instructions+=11;goto B4f5081;
case 0x4f5085:c.instructions+=10;goto B4f5085;
case 0x4f5087:c.instructions+=9;goto B4f5087;
case 0x4f508a:c.instructions+=8;goto B4f508a;
case 0x4f508d:c.instructions+=7;goto B4f508d;
case 0x4f5090:c.instructions+=6;goto B4f5090;
case 0x4f5097:c.instructions+=5;goto B4f5097;
case 0x4f509a:c.instructions+=4;goto B4f509a;
case 0x4f509d:c.instructions+=3;goto B4f509d;
case 0x4f50a2:c.instructions+=2;goto B4f50a2;
case 0x4f50a6:c.instructions+=1;goto B4f50a6;
case 0x4f50ab:goto L4f50ab;
case 0x4f50ae:c.instructions+=3;goto B4f50ae;
case 0x4f50af:c.instructions+=2;goto B4f50af;
case 0x4f50b0:c.instructions+=1;goto B4f50b0;
case 0x4f50b5:goto L4f50b5;
case 0x4f50b7:c.instructions+=3;goto B4f50b7;
case 0x4f50ba:c.instructions+=2;goto B4f50ba;
case 0x4f50bc:c.instructions+=1;goto B4f50bc;
case 0x4f50be:goto L4f50be;
case 0x4f50c3:goto L4f50c3;
case 0x4f50c5:c.instructions+=1;goto B4f50c5;
case 0x4f50c7:goto L4f50c7;
case 0x4f50ca:c.instructions+=1;goto B4f50ca;
case 0x4f50cc:goto L4f50cc;
case 0x4f50ce:goto L4f50ce;
case 0x4f50d1:c.instructions+=4;goto B4f50d1;
case 0x4f50d3:c.instructions+=3;goto B4f50d3;
case 0x4f50d6:c.instructions+=2;goto B4f50d6;
case 0x4f50d9:c.instructions+=1;goto B4f50d9;
case 0x4f50db:goto L4f50db;
case 0x4f50df:c.instructions+=8;goto B4f50df;
case 0x4f50e2:c.instructions+=7;goto B4f50e2;
case 0x4f50e3:c.instructions+=6;goto B4f50e3;
case 0x4f50e5:c.instructions+=5;goto B4f50e5;
case 0x4f50e6:c.instructions+=4;goto B4f50e6;
case 0x4f50e7:c.instructions+=3;goto B4f50e7;
case 0x4f50ee:c.instructions+=2;goto B4f50ee;
case 0x4f50f1:c.instructions+=1;goto B4f50f1;
case 0x4f5100:goto L4f5100;
case 0x4f5102:c.instructions+=24;goto B4f5102;
case 0x4f5107:c.instructions+=23;goto B4f5107;
case 0x4f510d:c.instructions+=22;goto B4f510d;
case 0x4f510e:c.instructions+=21;goto B4f510e;
case 0x4f5115:c.instructions+=20;goto B4f5115;
case 0x4f5118:c.instructions+=19;goto B4f5118;
case 0x4f511c:c.instructions+=18;goto B4f511c;
case 0x4f511d:c.instructions+=17;goto B4f511d;
case 0x4f511e:c.instructions+=16;goto B4f511e;
case 0x4f5120:c.instructions+=15;goto B4f5120;
case 0x4f5122:c.instructions+=14;goto B4f5122;
case 0x4f5123:c.instructions+=13;goto B4f5123;
case 0x4f5127:c.instructions+=12;goto B4f5127;
case 0x4f5129:c.instructions+=11;goto B4f5129;
case 0x4f512c:c.instructions+=10;goto B4f512c;
case 0x4f512f:c.instructions+=9;goto B4f512f;
case 0x4f5136:c.instructions+=8;goto B4f5136;
case 0x4f5139:c.instructions+=7;goto B4f5139;
case 0x4f513c:c.instructions+=6;goto B4f513c;
case 0x4f513f:c.instructions+=5;goto B4f513f;
case 0x4f5142:c.instructions+=4;goto B4f5142;
case 0x4f5147:c.instructions+=3;goto B4f5147;
case 0x4f514b:c.instructions+=2;goto B4f514b;
case 0x4f514e:c.instructions+=1;goto B4f514e;
case 0x4f5153:goto L4f5153;
case 0x4f5156:c.instructions+=3;goto B4f5156;
case 0x4f5157:c.instructions+=2;goto B4f5157;
case 0x4f5158:c.instructions+=1;goto B4f5158;
case 0x4f515d:goto L4f515d;
case 0x4f515f:c.instructions+=3;goto B4f515f;
case 0x4f5162:c.instructions+=2;goto B4f5162;
case 0x4f5164:c.instructions+=1;goto B4f5164;
case 0x4f5166:goto L4f5166;
case 0x4f516b:goto L4f516b;
case 0x4f516d:c.instructions+=1;goto B4f516d;
case 0x4f516f:goto L4f516f;
case 0x4f5172:c.instructions+=1;goto B4f5172;
case 0x4f5174:goto L4f5174;
case 0x4f5176:goto L4f5176;
case 0x4f5179:c.instructions+=4;goto B4f5179;
case 0x4f517b:c.instructions+=3;goto B4f517b;
case 0x4f517e:c.instructions+=2;goto B4f517e;
case 0x4f5181:c.instructions+=1;goto B4f5181;
case 0x4f5183:goto L4f5183;
case 0x4f5188:c.instructions+=2;goto B4f5188;
case 0x4f518e:c.instructions+=1;goto B4f518e;
case 0x4f5193:goto L4f5193;
case 0x4f5196:c.instructions+=3;goto B4f5196;
case 0x4f5197:c.instructions+=2;goto B4f5197;
case 0x4f5198:c.instructions+=1;goto B4f5198;
case 0x4f519d:goto L4f519d;
case 0x4f519f:c.instructions+=3;goto B4f519f;
case 0x4f51a2:c.instructions+=2;goto B4f51a2;
case 0x4f51a4:c.instructions+=1;goto B4f51a4;
case 0x4f51a6:goto L4f51a6;
case 0x4f51ab:goto L4f51ab;
case 0x4f51ad:c.instructions+=1;goto B4f51ad;
case 0x4f51af:goto L4f51af;
case 0x4f51b2:c.instructions+=1;goto B4f51b2;
case 0x4f51b4:goto L4f51b4;
case 0x4f51b6:goto L4f51b6;
case 0x4f51b9:c.instructions+=4;goto B4f51b9;
case 0x4f51bb:c.instructions+=3;goto B4f51bb;
case 0x4f51be:c.instructions+=2;goto B4f51be;
case 0x4f51c1:c.instructions+=1;goto B4f51c1;
case 0x4f51c3:goto L4f51c3;
case 0x4f51c8:c.instructions+=2;goto B4f51c8;
case 0x4f51ce:c.instructions+=1;goto B4f51ce;
case 0x4f51d3:goto L4f51d3;
case 0x4f51d4:c.instructions+=3;goto B4f51d4;
case 0x4f51d7:c.instructions+=2;goto B4f51d7;
case 0x4f51d8:c.instructions+=1;goto B4f51d8;
case 0x4f51dd:goto L4f51dd;
case 0x4f51df:c.instructions+=3;goto B4f51df;
case 0x4f51e2:c.instructions+=2;goto B4f51e2;
case 0x4f51e4:c.instructions+=1;goto B4f51e4;
case 0x4f51e6:goto L4f51e6;
case 0x4f51eb:goto L4f51eb;
case 0x4f51ed:c.instructions+=1;goto B4f51ed;
case 0x4f51ef:goto L4f51ef;
case 0x4f51f2:c.instructions+=1;goto B4f51f2;
case 0x4f51f4:goto L4f51f4;
case 0x4f51f6:goto L4f51f6;
case 0x4f51f9:c.instructions+=4;goto B4f51f9;
case 0x4f51fb:c.instructions+=3;goto B4f51fb;
case 0x4f51fe:c.instructions+=2;goto B4f51fe;
case 0x4f5201:c.instructions+=1;goto B4f5201;
case 0x4f5203:goto L4f5203;
case 0x4f5208:c.instructions+=2;goto B4f5208;
case 0x4f520e:c.instructions+=1;goto B4f520e;
case 0x4f5213:goto L4f5213;
case 0x4f5216:c.instructions+=3;goto B4f5216;
case 0x4f5217:c.instructions+=2;goto B4f5217;
case 0x4f5218:c.instructions+=1;goto B4f5218;
case 0x4f521d:goto L4f521d;
case 0x4f521f:c.instructions+=3;goto B4f521f;
case 0x4f5222:c.instructions+=2;goto B4f5222;
case 0x4f5224:c.instructions+=1;goto B4f5224;
case 0x4f5226:goto L4f5226;
case 0x4f522b:goto L4f522b;
case 0x4f522d:c.instructions+=1;goto B4f522d;
case 0x4f522f:goto L4f522f;
case 0x4f5232:c.instructions+=1;goto B4f5232;
case 0x4f5234:goto L4f5234;
case 0x4f5236:goto L4f5236;
case 0x4f5239:c.instructions+=4;goto B4f5239;
case 0x4f523b:c.instructions+=3;goto B4f523b;
case 0x4f523e:c.instructions+=2;goto B4f523e;
case 0x4f5241:c.instructions+=1;goto B4f5241;
case 0x4f5243:goto L4f5243;
case 0x4f5248:c.instructions+=2;goto B4f5248;
case 0x4f524b:c.instructions+=1;goto B4f524b;
case 0x4f5250:goto L4f5250;
case 0x4f5253:c.instructions+=3;goto B4f5253;
case 0x4f5254:c.instructions+=2;goto B4f5254;
case 0x4f5255:c.instructions+=1;goto B4f5255;
case 0x4f525a:goto L4f525a;
case 0x4f525c:c.instructions+=3;goto B4f525c;
case 0x4f525f:c.instructions+=2;goto B4f525f;
case 0x4f5261:c.instructions+=1;goto B4f5261;
case 0x4f5263:goto L4f5263;
case 0x4f5268:goto L4f5268;
case 0x4f526a:c.instructions+=1;goto B4f526a;
case 0x4f526c:goto L4f526c;
case 0x4f526f:c.instructions+=1;goto B4f526f;
case 0x4f5271:goto L4f5271;
case 0x4f5273:goto L4f5273;
case 0x4f5276:c.instructions+=4;goto B4f5276;
case 0x4f5278:c.instructions+=3;goto B4f5278;
case 0x4f527b:c.instructions+=2;goto B4f527b;
case 0x4f527e:c.instructions+=1;goto B4f527e;
case 0x4f5280:goto L4f5280;
case 0x4f5285:c.instructions+=2;goto B4f5285;
case 0x4f5288:c.instructions+=1;goto B4f5288;
case 0x4f528d:goto L4f528d;
case 0x4f528e:c.instructions+=3;goto B4f528e;
case 0x4f5291:c.instructions+=2;goto B4f5291;
case 0x4f5292:c.instructions+=1;goto B4f5292;
case 0x4f5297:goto L4f5297;
case 0x4f5299:c.instructions+=3;goto B4f5299;
case 0x4f529c:c.instructions+=2;goto B4f529c;
case 0x4f529e:c.instructions+=1;goto B4f529e;
case 0x4f52a0:goto L4f52a0;
case 0x4f52a5:goto L4f52a5;
case 0x4f52a7:c.instructions+=1;goto B4f52a7;
case 0x4f52a9:goto L4f52a9;
case 0x4f52ac:c.instructions+=1;goto B4f52ac;
case 0x4f52ae:goto L4f52ae;
case 0x4f52b0:goto L4f52b0;
case 0x4f52b3:c.instructions+=4;goto B4f52b3;
case 0x4f52b5:c.instructions+=3;goto B4f52b5;
case 0x4f52b8:c.instructions+=2;goto B4f52b8;
case 0x4f52bb:c.instructions+=1;goto B4f52bb;
case 0x4f52bd:goto L4f52bd;
case 0x4f52c2:c.instructions+=2;goto B4f52c2;
case 0x4f52c5:c.instructions+=1;goto B4f52c5;
case 0x4f52ca:goto L4f52ca;
case 0x4f52cd:c.instructions+=3;goto B4f52cd;
case 0x4f52ce:c.instructions+=2;goto B4f52ce;
case 0x4f52cf:c.instructions+=1;goto B4f52cf;
case 0x4f52d4:goto L4f52d4;
case 0x4f52d6:c.instructions+=3;goto B4f52d6;
case 0x4f52d9:c.instructions+=2;goto B4f52d9;
case 0x4f52db:c.instructions+=1;goto B4f52db;
case 0x4f52dd:goto L4f52dd;
case 0x4f52e2:goto L4f52e2;
case 0x4f52e4:c.instructions+=1;goto B4f52e4;
case 0x4f52e6:goto L4f52e6;
case 0x4f52e9:c.instructions+=1;goto B4f52e9;
case 0x4f52eb:goto L4f52eb;
case 0x4f52ed:goto L4f52ed;
case 0x4f52f0:c.instructions+=4;goto B4f52f0;
case 0x4f52f2:c.instructions+=3;goto B4f52f2;
case 0x4f52f5:c.instructions+=2;goto B4f52f5;
case 0x4f52f8:c.instructions+=1;goto B4f52f8;
case 0x4f52fa:goto L4f52fa;
case 0x4f52ff:c.instructions+=2;goto B4f52ff;
case 0x4f5302:c.instructions+=1;goto B4f5302;
case 0x4f5307:goto L4f5307;
case 0x4f530a:c.instructions+=3;goto B4f530a;
case 0x4f530b:c.instructions+=2;goto B4f530b;
case 0x4f530c:c.instructions+=1;goto B4f530c;
case 0x4f5311:goto L4f5311;
case 0x4f5313:c.instructions+=3;goto B4f5313;
case 0x4f5316:c.instructions+=2;goto B4f5316;
case 0x4f5318:c.instructions+=1;goto B4f5318;
case 0x4f531a:goto L4f531a;
case 0x4f531f:goto L4f531f;
case 0x4f5321:c.instructions+=1;goto B4f5321;
case 0x4f5323:goto L4f5323;
case 0x4f5326:c.instructions+=1;goto B4f5326;
case 0x4f5328:goto L4f5328;
case 0x4f532a:goto L4f532a;
case 0x4f532d:c.instructions+=4;goto B4f532d;
case 0x4f532f:c.instructions+=3;goto B4f532f;
case 0x4f5332:c.instructions+=2;goto B4f5332;
case 0x4f5335:c.instructions+=1;goto B4f5335;
case 0x4f5337:goto L4f5337;
case 0x4f533c:c.instructions+=2;goto B4f533c;
case 0x4f533f:c.instructions+=1;goto B4f533f;
case 0x4f5344:goto L4f5344;
case 0x4f5345:c.instructions+=3;goto B4f5345;
case 0x4f5348:c.instructions+=2;goto B4f5348;
case 0x4f5349:c.instructions+=1;goto B4f5349;
case 0x4f534e:goto L4f534e;
case 0x4f5350:c.instructions+=3;goto B4f5350;
case 0x4f5353:c.instructions+=2;goto B4f5353;
case 0x4f5355:c.instructions+=1;goto B4f5355;
case 0x4f5357:goto L4f5357;
case 0x4f535c:goto L4f535c;
case 0x4f535e:c.instructions+=1;goto B4f535e;
case 0x4f5360:goto L4f5360;
case 0x4f5363:c.instructions+=1;goto B4f5363;
case 0x4f5365:goto L4f5365;
case 0x4f5367:goto L4f5367;
case 0x4f536a:c.instructions+=4;goto B4f536a;
case 0x4f536c:c.instructions+=3;goto B4f536c;
case 0x4f536f:c.instructions+=2;goto B4f536f;
case 0x4f5372:c.instructions+=1;goto B4f5372;
case 0x4f5374:goto L4f5374;
case 0x4f5379:c.instructions+=2;goto B4f5379;
case 0x4f537c:c.instructions+=1;goto B4f537c;
case 0x4f5381:goto L4f5381;
case 0x4f5384:c.instructions+=3;goto B4f5384;
case 0x4f5385:c.instructions+=2;goto B4f5385;
case 0x4f5386:c.instructions+=1;goto B4f5386;
case 0x4f538b:goto L4f538b;
case 0x4f538d:c.instructions+=3;goto B4f538d;
case 0x4f5390:c.instructions+=2;goto B4f5390;
case 0x4f5392:c.instructions+=1;goto B4f5392;
case 0x4f5394:goto L4f5394;
case 0x4f5399:goto L4f5399;
case 0x4f539b:c.instructions+=1;goto B4f539b;
case 0x4f539d:goto L4f539d;
case 0x4f53a0:c.instructions+=1;goto B4f53a0;
case 0x4f53a2:goto L4f53a2;
case 0x4f53a4:goto L4f53a4;
case 0x4f53a7:c.instructions+=4;goto B4f53a7;
case 0x4f53a9:c.instructions+=3;goto B4f53a9;
case 0x4f53ac:c.instructions+=2;goto B4f53ac;
case 0x4f53af:c.instructions+=1;goto B4f53af;
case 0x4f53b1:goto L4f53b1;
case 0x4f53b6:c.instructions+=2;goto B4f53b6;
case 0x4f53b9:c.instructions+=1;goto B4f53b9;
case 0x4f53be:goto L4f53be;
case 0x4f53c1:c.instructions+=3;goto B4f53c1;
case 0x4f53c2:c.instructions+=2;goto B4f53c2;
case 0x4f53c3:c.instructions+=1;goto B4f53c3;
case 0x4f53c8:goto L4f53c8;
case 0x4f53ca:c.instructions+=3;goto B4f53ca;
case 0x4f53cd:c.instructions+=2;goto B4f53cd;
case 0x4f53cf:c.instructions+=1;goto B4f53cf;
case 0x4f53d1:goto L4f53d1;
case 0x4f53d6:goto L4f53d6;
case 0x4f53d8:c.instructions+=1;goto B4f53d8;
case 0x4f53da:goto L4f53da;
case 0x4f53dd:c.instructions+=1;goto B4f53dd;
case 0x4f53df:goto L4f53df;
case 0x4f53e1:goto L4f53e1;
case 0x4f53e4:c.instructions+=4;goto B4f53e4;
case 0x4f53e6:c.instructions+=3;goto B4f53e6;
case 0x4f53e9:c.instructions+=2;goto B4f53e9;
case 0x4f53ec:c.instructions+=1;goto B4f53ec;
case 0x4f53ee:goto L4f53ee;
case 0x4f53f3:c.instructions+=2;goto B4f53f3;
case 0x4f53f6:c.instructions+=1;goto B4f53f6;
case 0x4f53fb:goto L4f53fb;
case 0x4f53fc:c.instructions+=3;goto B4f53fc;
case 0x4f53ff:c.instructions+=2;goto B4f53ff;
case 0x4f5400:c.instructions+=1;goto B4f5400;
case 0x4f5405:goto L4f5405;
case 0x4f5407:c.instructions+=3;goto B4f5407;
case 0x4f540a:c.instructions+=2;goto B4f540a;
case 0x4f540c:c.instructions+=1;goto B4f540c;
case 0x4f540e:goto L4f540e;
case 0x4f5413:goto L4f5413;
case 0x4f5415:c.instructions+=1;goto B4f5415;
case 0x4f5417:goto L4f5417;
case 0x4f541a:c.instructions+=1;goto B4f541a;
case 0x4f541c:goto L4f541c;
case 0x4f541e:goto L4f541e;
case 0x4f5421:c.instructions+=4;goto B4f5421;
case 0x4f5423:c.instructions+=3;goto B4f5423;
case 0x4f5426:c.instructions+=2;goto B4f5426;
case 0x4f5429:c.instructions+=1;goto B4f5429;
case 0x4f542b:goto L4f542b;
case 0x4f5430:c.instructions+=2;goto B4f5430;
case 0x4f5433:c.instructions+=1;goto B4f5433;
case 0x4f5438:goto L4f5438;
case 0x4f543b:c.instructions+=3;goto B4f543b;
case 0x4f543c:c.instructions+=2;goto B4f543c;
case 0x4f543d:c.instructions+=1;goto B4f543d;
case 0x4f5442:goto L4f5442;
case 0x4f5444:c.instructions+=3;goto B4f5444;
case 0x4f5447:c.instructions+=2;goto B4f5447;
case 0x4f5449:c.instructions+=1;goto B4f5449;
case 0x4f544b:goto L4f544b;
case 0x4f5450:goto L4f5450;
case 0x4f5452:c.instructions+=1;goto B4f5452;
case 0x4f5454:goto L4f5454;
case 0x4f5457:c.instructions+=1;goto B4f5457;
case 0x4f5459:goto L4f5459;
case 0x4f545b:goto L4f545b;
case 0x4f545e:c.instructions+=4;goto B4f545e;
case 0x4f5460:c.instructions+=3;goto B4f5460;
case 0x4f5463:c.instructions+=2;goto B4f5463;
case 0x4f5466:c.instructions+=1;goto B4f5466;
case 0x4f5468:goto L4f5468;
case 0x4f546d:c.instructions+=2;goto B4f546d;
case 0x4f5470:c.instructions+=1;goto B4f5470;
case 0x4f5475:goto L4f5475;
case 0x4f5478:c.instructions+=3;goto B4f5478;
case 0x4f5479:c.instructions+=2;goto B4f5479;
case 0x4f547a:c.instructions+=1;goto B4f547a;
case 0x4f547f:goto L4f547f;
case 0x4f5481:c.instructions+=3;goto B4f5481;
case 0x4f5484:c.instructions+=2;goto B4f5484;
case 0x4f5486:c.instructions+=1;goto B4f5486;
case 0x4f5488:goto L4f5488;
case 0x4f548d:goto L4f548d;
case 0x4f548f:c.instructions+=1;goto B4f548f;
case 0x4f5491:goto L4f5491;
case 0x4f5494:c.instructions+=1;goto B4f5494;
case 0x4f5496:goto L4f5496;
case 0x4f5498:goto L4f5498;
case 0x4f549b:c.instructions+=4;goto B4f549b;
case 0x4f549d:c.instructions+=3;goto B4f549d;
case 0x4f54a0:c.instructions+=2;goto B4f54a0;
case 0x4f54a3:c.instructions+=1;goto B4f54a3;
case 0x4f54a5:goto L4f54a5;
case 0x4f54aa:c.instructions+=2;goto B4f54aa;
case 0x4f54ad:c.instructions+=1;goto B4f54ad;
case 0x4f54b2:goto L4f54b2;
case 0x4f54b3:c.instructions+=3;goto B4f54b3;
case 0x4f54b6:c.instructions+=2;goto B4f54b6;
case 0x4f54b7:c.instructions+=1;goto B4f54b7;
case 0x4f54bc:goto L4f54bc;
case 0x4f54be:c.instructions+=3;goto B4f54be;
case 0x4f54c1:c.instructions+=2;goto B4f54c1;
case 0x4f54c3:c.instructions+=1;goto B4f54c3;
case 0x4f54c5:goto L4f54c5;
case 0x4f54ca:goto L4f54ca;
case 0x4f54cc:c.instructions+=1;goto B4f54cc;
case 0x4f54ce:goto L4f54ce;
case 0x4f54d1:c.instructions+=1;goto B4f54d1;
case 0x4f54d3:goto L4f54d3;
case 0x4f54d5:goto L4f54d5;
case 0x4f54d8:c.instructions+=4;goto B4f54d8;
case 0x4f54da:c.instructions+=3;goto B4f54da;
case 0x4f54dd:c.instructions+=2;goto B4f54dd;
case 0x4f54e0:c.instructions+=1;goto B4f54e0;
case 0x4f54e2:goto L4f54e2;
case 0x4f54e7:c.instructions+=2;goto B4f54e7;
case 0x4f54ed:c.instructions+=1;goto B4f54ed;
case 0x4f54f2:goto L4f54f2;
case 0x4f54f5:c.instructions+=3;goto B4f54f5;
case 0x4f54f6:c.instructions+=2;goto B4f54f6;
case 0x4f54f7:c.instructions+=1;goto B4f54f7;
case 0x4f54fc:goto L4f54fc;
case 0x4f54fe:c.instructions+=3;goto B4f54fe;
case 0x4f5501:c.instructions+=2;goto B4f5501;
case 0x4f5503:c.instructions+=1;goto B4f5503;
case 0x4f5505:goto L4f5505;
case 0x4f550a:goto L4f550a;
case 0x4f550c:c.instructions+=1;goto B4f550c;
case 0x4f550e:goto L4f550e;
case 0x4f5511:c.instructions+=1;goto B4f5511;
case 0x4f5513:goto L4f5513;
case 0x4f5515:goto L4f5515;
case 0x4f5518:c.instructions+=4;goto B4f5518;
case 0x4f551a:c.instructions+=3;goto B4f551a;
case 0x4f551d:c.instructions+=2;goto B4f551d;
case 0x4f5520:c.instructions+=1;goto B4f5520;
case 0x4f5522:goto L4f5522;
case 0x4f5529:c.instructions+=2;goto B4f5529;
case 0x4f552a:c.instructions+=1;goto B4f552a;
case 0x4f5530:goto L4f5530;
case 0x4f5532:c.instructions+=1;goto B4f5532;
case 0x4f5535:goto L4f5535;
case 0x4f5538:c.instructions+=6;goto B4f5538;
case 0x4f5539:c.instructions+=5;goto B4f5539;
case 0x4f553e:c.instructions+=4;goto B4f553e;
case 0x4f5542:c.instructions+=3;goto B4f5542;
case 0x4f5544:c.instructions+=2;goto B4f5544;
case 0x4f5545:c.instructions+=1;goto B4f5545;
case 0x4f554a:goto L4f554a;
case 0x4f554e:c.instructions+=2;goto B4f554e;
case 0x4f554f:c.instructions+=1;goto B4f554f;
case 0x4f5554:goto L4f5554;
case 0x4f5557:c.instructions+=3;goto B4f5557;
case 0x4f5558:c.instructions+=2;goto B4f5558;
case 0x4f5559:c.instructions+=1;goto B4f5559;
case 0x4f555e:goto L4f555e;
case 0x4f5560:c.instructions+=3;goto B4f5560;
case 0x4f5563:c.instructions+=2;goto B4f5563;
case 0x4f5565:c.instructions+=1;goto B4f5565;
case 0x4f5567:goto L4f5567;
case 0x4f556c:goto L4f556c;
case 0x4f556e:c.instructions+=1;goto B4f556e;
case 0x4f5570:goto L4f5570;
case 0x4f5573:c.instructions+=1;goto B4f5573;
case 0x4f5575:goto L4f5575;
case 0x4f5577:goto L4f5577;
case 0x4f557a:c.instructions+=4;goto B4f557a;
case 0x4f557c:c.instructions+=3;goto B4f557c;
case 0x4f557f:c.instructions+=2;goto B4f557f;
case 0x4f5582:c.instructions+=1;goto B4f5582;
case 0x4f5584:goto L4f5584;
case 0x4f5586:c.instructions+=4;goto B4f5586;
case 0x4f5588:c.instructions+=3;goto B4f5588;
case 0x4f558b:c.instructions+=2;goto B4f558b;
case 0x4f558e:c.instructions+=1;goto B4f558e;
case 0x4f5590:goto L4f5590;
case 0x4f5595:c.instructions+=1;goto B4f5595;
case 0x4f559a:goto L4f559a;
case 0x4f559d:c.instructions+=3;goto B4f559d;
case 0x4f559e:c.instructions+=2;goto B4f559e;
case 0x4f559f:c.instructions+=1;goto B4f559f;
case 0x4f55a4:goto L4f55a4;
case 0x4f55a6:c.instructions+=3;goto B4f55a6;
case 0x4f55a9:c.instructions+=2;goto B4f55a9;
case 0x4f55ab:c.instructions+=1;goto B4f55ab;
case 0x4f55ad:goto L4f55ad;
case 0x4f55b2:goto L4f55b2;
case 0x4f55b4:c.instructions+=1;goto B4f55b4;
case 0x4f55b6:goto L4f55b6;
case 0x4f55b9:c.instructions+=1;goto B4f55b9;
case 0x4f55bb:goto L4f55bb;
case 0x4f55bd:goto L4f55bd;
case 0x4f55c0:c.instructions+=4;goto B4f55c0;
case 0x4f55c2:c.instructions+=3;goto B4f55c2;
case 0x4f55c5:c.instructions+=2;goto B4f55c5;
case 0x4f55c8:c.instructions+=1;goto B4f55c8;
case 0x4f55ca:goto L4f55ca;
case 0x4f55cf:c.instructions+=2;goto B4f55cf;
case 0x4f55d2:c.instructions+=1;goto B4f55d2;
case 0x4f55d7:goto L4f55d7;
case 0x4f55d8:c.instructions+=3;goto B4f55d8;
case 0x4f55db:c.instructions+=2;goto B4f55db;
case 0x4f55dc:c.instructions+=1;goto B4f55dc;
case 0x4f55e1:goto L4f55e1;
case 0x4f55e3:c.instructions+=3;goto B4f55e3;
case 0x4f55e6:c.instructions+=2;goto B4f55e6;
case 0x4f55e8:c.instructions+=1;goto B4f55e8;
case 0x4f55ea:goto L4f55ea;
case 0x4f55ef:goto L4f55ef;
case 0x4f55f1:c.instructions+=1;goto B4f55f1;
case 0x4f55f3:goto L4f55f3;
case 0x4f55f6:c.instructions+=1;goto B4f55f6;
case 0x4f55f8:goto L4f55f8;
case 0x4f55fa:goto L4f55fa;
case 0x4f55fd:c.instructions+=4;goto B4f55fd;
case 0x4f55ff:c.instructions+=3;goto B4f55ff;
case 0x4f5602:c.instructions+=2;goto B4f5602;
case 0x4f5605:c.instructions+=1;goto B4f5605;
case 0x4f5607:goto L4f5607;
case 0x4f560a:c.instructions+=1;goto B4f560a;
case 0x4f560c:goto L4f560c;
case 0x4f5611:c.instructions+=1;goto B4f5611;
case 0x4f5616:goto L4f5616;
case 0x4f5619:c.instructions+=3;goto B4f5619;
case 0x4f561a:c.instructions+=2;goto B4f561a;
case 0x4f561b:c.instructions+=1;goto B4f561b;
case 0x4f5620:goto L4f5620;
case 0x4f5622:c.instructions+=3;goto B4f5622;
case 0x4f5625:c.instructions+=2;goto B4f5625;
case 0x4f5627:c.instructions+=1;goto B4f5627;
case 0x4f5629:goto L4f5629;
case 0x4f562e:goto L4f562e;
case 0x4f5630:c.instructions+=1;goto B4f5630;
case 0x4f5632:goto L4f5632;
case 0x4f5635:c.instructions+=1;goto B4f5635;
case 0x4f5637:goto L4f5637;
case 0x4f5639:goto L4f5639;
case 0x4f563c:c.instructions+=4;goto B4f563c;
case 0x4f563e:c.instructions+=3;goto B4f563e;
case 0x4f5641:c.instructions+=2;goto B4f5641;
case 0x4f5644:c.instructions+=1;goto B4f5644;
case 0x4f5646:goto L4f5646;
case 0x4f564b:c.instructions+=2;goto B4f564b;
case 0x4f564e:c.instructions+=1;goto B4f564e;
case 0x4f5653:goto L4f5653;
case 0x4f5656:c.instructions+=3;goto B4f5656;
case 0x4f5657:c.instructions+=2;goto B4f5657;
case 0x4f5658:c.instructions+=1;goto B4f5658;
case 0x4f565d:goto L4f565d;
case 0x4f565f:c.instructions+=3;goto B4f565f;
case 0x4f5662:c.instructions+=2;goto B4f5662;
case 0x4f5664:c.instructions+=1;goto B4f5664;
case 0x4f5666:goto L4f5666;
case 0x4f566b:goto L4f566b;
case 0x4f566d:c.instructions+=1;goto B4f566d;
case 0x4f566f:goto L4f566f;
case 0x4f5672:c.instructions+=1;goto B4f5672;
case 0x4f5674:goto L4f5674;
case 0x4f5676:goto L4f5676;
case 0x4f5679:c.instructions+=4;goto B4f5679;
case 0x4f567b:c.instructions+=3;goto B4f567b;
case 0x4f567e:c.instructions+=2;goto B4f567e;
case 0x4f5681:c.instructions+=1;goto B4f5681;
case 0x4f5683:goto L4f5683;
case 0x4f5686:goto L4f5686;
case 0x4f568a:c.instructions+=4;goto B4f568a;
case 0x4f568b:c.instructions+=3;goto B4f568b;
case 0x4f5690:c.instructions+=2;goto B4f5690;
case 0x4f5697:c.instructions+=1;goto B4f5697;
case 0x4f569c:goto L4f569c;
case 0x4f569e:c.instructions+=2;goto B4f569e;
case 0x4f56a0:c.instructions+=1;goto B4f56a0;
case 0x4f56a6:goto L4f56a6;
case 0x4f56a9:c.instructions+=3;goto B4f56a9;
case 0x4f56ab:c.instructions+=2;goto B4f56ab;
case 0x4f56af:c.instructions+=1;goto B4f56af;
case 0x4f56b5:goto L4f56b5;
case 0x4f56b7:c.instructions+=2;goto B4f56b7;
case 0x4f56ba:c.instructions+=1;goto B4f56ba;
case 0x4f56bf:goto L4f56bf;
case 0x4f56c1:c.instructions+=1;goto B4f56c1;
case 0x4f56c7:goto L4f56c7;
case 0x4f56cd:c.instructions+=3;goto B4f56cd;
case 0x4f56cf:c.instructions+=2;goto B4f56cf;
case 0x4f56d3:c.instructions+=1;goto B4f56d3;
case 0x4f56d9:goto L4f56d9;
case 0x4f56e0:c.instructions+=5;goto B4f56e0;
case 0x4f56e4:c.instructions+=4;goto B4f56e4;
case 0x4f56e6:c.instructions+=3;goto B4f56e6;
case 0x4f56eb:c.instructions+=2;goto B4f56eb;
case 0x4f56ef:c.instructions+=1;goto B4f56ef;
case 0x4f56f4:goto L4f56f4;
case 0x4f56f6:c.instructions+=3;goto B4f56f6;
case 0x4f56f8:c.instructions+=2;goto B4f56f8;
case 0x4f56fa:c.instructions+=1;goto B4f56fa;
case 0x4f56fc:goto L4f56fc;
case 0x4f56fd:c.instructions+=2;goto B4f56fd;
case 0x4f5702:c.instructions+=1;goto B4f5702;
case 0x4f5707:goto L4f5707;
case 0x4f570a:c.instructions+=3;goto B4f570a;
case 0x4f570b:c.instructions+=2;goto B4f570b;
case 0x4f570d:c.instructions+=1;goto B4f570d;
case 0x4f5712:goto L4f5712;
case 0x4f5716:c.instructions+=7;goto B4f5716;
case 0x4f5717:c.instructions+=6;goto B4f5717;
case 0x4f571b:c.instructions+=5;goto B4f571b;
case 0x4f571c:c.instructions+=4;goto B4f571c;
case 0x4f571d:c.instructions+=3;goto B4f571d;
case 0x4f571e:c.instructions+=2;goto B4f571e;
case 0x4f571f:c.instructions+=1;goto B4f571f;
case 0x4f5724:goto L4f5724;
case 0x4f5728:c.instructions+=3;goto B4f5728;
case 0x4f572b:c.instructions+=2;goto B4f572b;
case 0x4f572d:c.instructions+=1;goto B4f572d;
case 0x4f572f:goto L4f572f;
case 0x4f5732:c.instructions+=3;goto B4f5732;
case 0x4f5733:c.instructions+=2;goto B4f5733;
case 0x4f5734:c.instructions+=1;goto B4f5734;
case 0x4f5739:goto L4f5739;
case 0x4f573c:c.instructions+=1;goto B4f573c;
case 0x4f573e:goto L4f573e;
case 0x4f5745:goto L4f5745;
case 0x4f5749:c.instructions+=2;goto B4f5749;
case 0x4f574b:c.instructions+=1;goto B4f574b;
case 0x4f574d:goto L4f574d;
case 0x4f574e:c.instructions+=3;goto B4f574e;
case 0x4f5754:c.instructions+=2;goto B4f5754;
case 0x4f5755:c.instructions+=1;goto B4f5755;
case 0x4f575a:goto L4f575a;
case 0x4f575d:goto L4f575d;
case 0x4f5761:c.instructions+=2;goto B4f5761;
case 0x4f5763:c.instructions+=1;goto B4f5763;
case 0x4f5765:goto L4f5765;
case 0x4f5768:c.instructions+=3;goto B4f5768;
case 0x4f5769:c.instructions+=2;goto B4f5769;
case 0x4f576a:c.instructions+=1;goto B4f576a;
case 0x4f576f:goto L4f576f;
case 0x4f5772:goto L4f5772;
case 0x4f5776:c.instructions+=2;goto B4f5776;
case 0x4f5778:c.instructions+=1;goto B4f5778;
case 0x4f577a:goto L4f577a;
case 0x4f5780:c.instructions+=3;goto B4f5780;
case 0x4f5781:c.instructions+=2;goto B4f5781;
case 0x4f5782:c.instructions+=1;goto B4f5782;
case 0x4f5787:goto L4f5787;
case 0x4f578a:goto L4f578a;
case 0x4f578e:c.instructions+=2;goto B4f578e;
case 0x4f5790:c.instructions+=1;goto B4f5790;
case 0x4f5792:goto L4f5792;
case 0x4f5793:c.instructions+=3;goto B4f5793;
case 0x4f5799:c.instructions+=2;goto B4f5799;
case 0x4f579a:c.instructions+=1;goto B4f579a;
case 0x4f579f:goto L4f579f;
case 0x4f57a2:goto L4f57a2;
case 0x4f57a6:c.instructions+=2;goto B4f57a6;
case 0x4f57a8:c.instructions+=1;goto B4f57a8;
case 0x4f57aa:goto L4f57aa;
case 0x4f57b0:c.instructions+=3;goto B4f57b0;
case 0x4f57b1:c.instructions+=2;goto B4f57b1;
case 0x4f57b2:c.instructions+=1;goto B4f57b2;
case 0x4f57b7:goto L4f57b7;
case 0x4f57ba:goto L4f57ba;
case 0x4f57be:c.instructions+=4;goto B4f57be;
case 0x4f57c1:c.instructions+=3;goto B4f57c1;
case 0x4f57c2:c.instructions+=2;goto B4f57c2;
case 0x4f57c3:c.instructions+=1;goto B4f57c3;
case 0x4f57c8:goto L4f57c8;
case 0x4f57cc:c.instructions+=4;goto B4f57cc;
case 0x4f57cf:c.instructions+=3;goto B4f57cf;
case 0x4f57d4:c.instructions+=2;goto B4f57d4;
case 0x4f57d6:c.instructions+=1;goto B4f57d6;
case 0x4f57db:goto L4f57db;
case 0x4f57dd:c.instructions+=2;goto B4f57dd;
case 0x4f57df:c.instructions+=1;goto B4f57df;
case 0x4f57e1:goto L4f57e1;
case 0x4f57e3:c.instructions+=2;goto B4f57e3;
case 0x4f57e8:c.instructions+=1;goto B4f57e8;
case 0x4f57ed:goto L4f57ed;
case 0x4f57f0:c.instructions+=3;goto B4f57f0;
case 0x4f57f1:c.instructions+=2;goto B4f57f1;
case 0x4f57f3:c.instructions+=1;goto B4f57f3;
case 0x4f57f8:goto L4f57f8;
case 0x4f57fa:c.instructions+=3;goto B4f57fa;
case 0x4f57ff:c.instructions+=2;goto B4f57ff;
case 0x4f5805:c.instructions+=1;goto B4f5805;
case 0x4f580a:goto L4f580a;
case 0x4f580d:c.instructions+=3;goto B4f580d;
case 0x4f580e:c.instructions+=2;goto B4f580e;
case 0x4f5810:c.instructions+=1;goto B4f5810;
case 0x4f5815:goto L4f5815;
case 0x4f5817:c.instructions+=3;goto B4f5817;
case 0x4f581c:c.instructions+=2;goto B4f581c;
case 0x4f5822:c.instructions+=1;goto B4f5822;
case 0x4f5827:goto L4f5827;
case 0x4f582a:c.instructions+=3;goto B4f582a;
case 0x4f582b:c.instructions+=2;goto B4f582b;
case 0x4f582d:c.instructions+=1;goto B4f582d;
case 0x4f5832:goto L4f5832;
case 0x4f583c:c.instructions+=1;goto B4f583c;
case 0x4f583e:goto L4f583e;
case 0x4f5843:c.instructions+=3;goto B4f5843;
case 0x4f5849:c.instructions+=2;goto B4f5849;
case 0x4f584f:c.instructions+=1;goto B4f584f;
case 0x4f5855:goto L4f5855;
case 0x4f585a:c.instructions+=3;goto B4f585a;
case 0x4f585c:c.instructions+=2;goto B4f585c;
case 0x4f5862:c.instructions+=1;goto B4f5862;
case 0x4f5867:goto L4f5867;
case 0x4f5869:c.instructions+=2;goto B4f5869;
case 0x4f586b:c.instructions+=1;goto B4f586b;
case 0x4f586d:goto L4f586d;
case 0x4f586f:c.instructions+=2;goto B4f586f;
case 0x4f5874:c.instructions+=1;goto B4f5874;
case 0x4f5879:goto L4f5879;
case 0x4f587c:c.instructions+=3;goto B4f587c;
case 0x4f587d:c.instructions+=2;goto B4f587d;
case 0x4f587f:c.instructions+=1;goto B4f587f;
case 0x4f5884:goto L4f5884;
case 0x4f5886:c.instructions+=4;goto B4f5886;
case 0x4f588b:c.instructions+=3;goto B4f588b;
case 0x4f5891:c.instructions+=2;goto B4f5891;
case 0x4f5897:c.instructions+=1;goto B4f5897;
case 0x4f589c:goto L4f589c;
case 0x4f589f:c.instructions+=3;goto B4f589f;
case 0x4f58a0:c.instructions+=2;goto B4f58a0;
case 0x4f58a2:c.instructions+=1;goto B4f58a2;
case 0x4f58a7:goto L4f58a7;
case 0x4f58a9:c.instructions+=3;goto B4f58a9;
case 0x4f58ae:c.instructions+=2;goto B4f58ae;
case 0x4f58b0:c.instructions+=1;goto B4f58b0;
case 0x4f58b5:goto L4f58b5;
case 0x4f58b8:c.instructions+=3;goto B4f58b8;
case 0x4f58b9:c.instructions+=2;goto B4f58b9;
case 0x4f58bb:c.instructions+=1;goto B4f58bb;
case 0x4f58c0:goto L4f58c0;
case 0x4f58ca:c.instructions+=1;goto B4f58ca;
case 0x4f58cc:goto L4f58cc;
case 0x4f58d1:c.instructions+=4;goto B4f58d1;
case 0x4f58d7:c.instructions+=3;goto B4f58d7;
case 0x4f58dd:c.instructions+=2;goto B4f58dd;
case 0x4f58df:c.instructions+=1;goto B4f58df;
case 0x4f58e5:goto L4f58e5;
case 0x4f58e9:c.instructions+=3;goto B4f58e9;
case 0x4f58ee:c.instructions+=2;goto B4f58ee;
case 0x4f58f4:c.instructions+=1;goto B4f58f4;
case 0x4f58f9:goto L4f58f9;
case 0x4f58fb:c.instructions+=2;goto B4f58fb;
case 0x4f58fd:c.instructions+=1;goto B4f58fd;
case 0x4f58ff:goto L4f58ff;
case 0x4f5901:c.instructions+=2;goto B4f5901;
case 0x4f5906:c.instructions+=1;goto B4f5906;
case 0x4f590b:goto L4f590b;
case 0x4f590e:c.instructions+=3;goto B4f590e;
case 0x4f590f:c.instructions+=2;goto B4f590f;
case 0x4f5911:c.instructions+=1;goto B4f5911;
case 0x4f5916:goto L4f5916;
case 0x4f5918:c.instructions+=4;goto B4f5918;
case 0x4f591d:c.instructions+=3;goto B4f591d;
case 0x4f5923:c.instructions+=2;goto B4f5923;
case 0x4f5929:c.instructions+=1;goto B4f5929;
case 0x4f592e:goto L4f592e;
case 0x4f5931:c.instructions+=3;goto B4f5931;
case 0x4f5932:c.instructions+=2;goto B4f5932;
case 0x4f5934:c.instructions+=1;goto B4f5934;
case 0x4f5939:goto L4f5939;
case 0x4f593b:c.instructions+=3;goto B4f593b;
case 0x4f5940:c.instructions+=2;goto B4f5940;
case 0x4f5942:c.instructions+=1;goto B4f5942;
case 0x4f5947:goto L4f5947;
case 0x4f594a:c.instructions+=3;goto B4f594a;
case 0x4f594b:c.instructions+=2;goto B4f594b;
case 0x4f594d:c.instructions+=1;goto B4f594d;
case 0x4f5952:goto L4f5952;
case 0x4f595c:c.instructions+=1;goto B4f595c;
case 0x4f595e:goto L4f595e;
case 0x4f5963:c.instructions+=4;goto B4f5963;
case 0x4f5969:c.instructions+=3;goto B4f5969;
case 0x4f596f:c.instructions+=2;goto B4f596f;
case 0x4f5971:c.instructions+=1;goto B4f5971;
case 0x4f5977:goto L4f5977;
case 0x4f597a:c.instructions+=4;goto B4f597a;
case 0x4f597b:c.instructions+=3;goto B4f597b;
case 0x4f597c:c.instructions+=2;goto B4f597c;
case 0x4f5982:c.instructions+=1;goto B4f5982;
case 0x4f5987:goto L4f5987;
case 0x4f598d:c.instructions+=4;goto B4f598d;
case 0x4f5993:c.instructions+=3;goto B4f5993;
case 0x4f5994:c.instructions+=2;goto B4f5994;
case 0x4f5995:c.instructions+=1;goto B4f5995;
case 0x4f599a:goto L4f599a;
case 0x4f599d:c.instructions+=3;goto B4f599d;
case 0x4f599e:c.instructions+=2;goto B4f599e;
case 0x4f599f:c.instructions+=1;goto B4f599f;
case 0x4f59a4:goto L4f59a4;
case 0x4f59aa:c.instructions+=3;goto B4f59aa;
case 0x4f59ab:c.instructions+=2;goto B4f59ab;
case 0x4f59ac:c.instructions+=1;goto B4f59ac;
case 0x4f59b1:goto L4f59b1;
case 0x4f59b7:c.instructions+=3;goto B4f59b7;
case 0x4f59b8:c.instructions+=2;goto B4f59b8;
case 0x4f59b9:c.instructions+=1;goto B4f59b9;
case 0x4f59be:goto L4f59be;
case 0x4f59c4:c.instructions+=3;goto B4f59c4;
case 0x4f59c5:c.instructions+=2;goto B4f59c5;
case 0x4f59c6:c.instructions+=1;goto B4f59c6;
case 0x4f59cb:goto L4f59cb;
case 0x4f59cf:c.instructions+=1;goto B4f59cf;
case 0x4f59d2:goto L4f59d2;
case 0x4f59d4:c.instructions+=5;goto B4f59d4;
case 0x4f59d5:c.instructions+=4;goto B4f59d5;
case 0x4f59d8:c.instructions+=3;goto B4f59d8;
case 0x4f59db:c.instructions+=2;goto B4f59db;
case 0x4f59df:c.instructions+=1;goto B4f59df;
case 0x4f59e4:goto L4f59e4;
case 0x4f59e7:c.instructions+=3;goto B4f59e7;
case 0x4f59ea:c.instructions+=2;goto B4f59ea;
case 0x4f59eb:c.instructions+=1;goto B4f59eb;
case 0x4f59ed:goto L4f59ed;
case 0x4f59f4:goto L4f59f4;
case 0x4f59fa:c.instructions+=1;goto B4f59fa;
case 0x4f59fc:goto L4f59fc;
case 0x4f5a02:c.instructions+=1;goto B4f5a02;
case 0x4f5a04:goto L4f5a04;
case 0x4f5a0a:c.instructions+=1;goto B4f5a0a;
case 0x4f5a0c:goto L4f5a0c;
case 0x4f5a12:c.instructions+=1;goto B4f5a12;
case 0x4f5a14:goto L4f5a14;
case 0x4f5a18:goto L4f5a18;
case 0x4f5a1b:c.instructions+=12;goto B4f5a1b;
case 0x4f5a1f:c.instructions+=11;goto B4f5a1f;
case 0x4f5a21:c.instructions+=10;goto B4f5a21;
case 0x4f5a22:c.instructions+=9;goto B4f5a22;
case 0x4f5a24:c.instructions+=8;goto B4f5a24;
case 0x4f5a2a:c.instructions+=7;goto B4f5a2a;
case 0x4f5a30:c.instructions+=6;goto B4f5a30;
case 0x4f5a31:c.instructions+=5;goto B4f5a31;
case 0x4f5a32:c.instructions+=4;goto B4f5a32;
case 0x4f5a34:c.instructions+=3;goto B4f5a34;
case 0x4f5a3b:c.instructions+=2;goto B4f5a3b;
case 0x4f5a3e:c.instructions+=1;goto B4f5a3e;
case 0x4f5a70:goto L4f5a70;
case 0x4f5a72:c.instructions+=22;goto B4f5a72;
case 0x4f5a77:c.instructions+=21;goto B4f5a77;
case 0x4f5a7d:c.instructions+=20;goto B4f5a7d;
case 0x4f5a7e:c.instructions+=19;goto B4f5a7e;
case 0x4f5a85:c.instructions+=18;goto B4f5a85;
case 0x4f5a86:c.instructions+=17;goto B4f5a86;
case 0x4f5a8a:c.instructions+=16;goto B4f5a8a;
case 0x4f5a8b:c.instructions+=15;goto B4f5a8b;
case 0x4f5a8c:c.instructions+=14;goto B4f5a8c;
case 0x4f5a8e:c.instructions+=13;goto B4f5a8e;
case 0x4f5a90:c.instructions+=12;goto B4f5a90;
case 0x4f5a91:c.instructions+=11;goto B4f5a91;
case 0x4f5a95:c.instructions+=10;goto B4f5a95;
case 0x4f5a97:c.instructions+=9;goto B4f5a97;
case 0x4f5a9a:c.instructions+=8;goto B4f5a9a;
case 0x4f5a9d:c.instructions+=7;goto B4f5a9d;
case 0x4f5aa4:c.instructions+=6;goto B4f5aa4;
case 0x4f5aa7:c.instructions+=5;goto B4f5aa7;
case 0x4f5aaa:c.instructions+=4;goto B4f5aaa;
case 0x4f5aad:c.instructions+=3;goto B4f5aad;
case 0x4f5ab2:c.instructions+=2;goto B4f5ab2;
case 0x4f5ab6:c.instructions+=1;goto B4f5ab6;
case 0x4f5abb:goto L4f5abb;
case 0x4f5abe:c.instructions+=3;goto B4f5abe;
case 0x4f5abf:c.instructions+=2;goto B4f5abf;
case 0x4f5ac0:c.instructions+=1;goto B4f5ac0;
case 0x4f5ac5:goto L4f5ac5;
case 0x4f5ac7:c.instructions+=3;goto B4f5ac7;
case 0x4f5aca:c.instructions+=2;goto B4f5aca;
case 0x4f5acc:c.instructions+=1;goto B4f5acc;
case 0x4f5ace:goto L4f5ace;
case 0x4f5ad3:goto L4f5ad3;
case 0x4f5ad5:c.instructions+=1;goto B4f5ad5;
case 0x4f5ad7:goto L4f5ad7;
case 0x4f5ada:c.instructions+=1;goto B4f5ada;
case 0x4f5adc:goto L4f5adc;
case 0x4f5ade:goto L4f5ade;
case 0x4f5ae1:c.instructions+=4;goto B4f5ae1;
case 0x4f5ae3:c.instructions+=3;goto B4f5ae3;
case 0x4f5ae6:c.instructions+=2;goto B4f5ae6;
case 0x4f5ae9:c.instructions+=1;goto B4f5ae9;
case 0x4f5aeb:goto L4f5aeb;
case 0x4f5af0:c.instructions+=2;goto B4f5af0;
case 0x4f5af3:c.instructions+=1;goto B4f5af3;
case 0x4f5af8:goto L4f5af8;
case 0x4f5afb:c.instructions+=3;goto B4f5afb;
case 0x4f5afc:c.instructions+=2;goto B4f5afc;
case 0x4f5afd:c.instructions+=1;goto B4f5afd;
case 0x4f5b02:goto L4f5b02;
case 0x4f5b04:c.instructions+=3;goto B4f5b04;
case 0x4f5b07:c.instructions+=2;goto B4f5b07;
case 0x4f5b09:c.instructions+=1;goto B4f5b09;
case 0x4f5b0b:goto L4f5b0b;
case 0x4f5b10:goto L4f5b10;
case 0x4f5b12:c.instructions+=1;goto B4f5b12;
case 0x4f5b14:goto L4f5b14;
case 0x4f5b17:c.instructions+=1;goto B4f5b17;
case 0x4f5b19:goto L4f5b19;
case 0x4f5b1b:goto L4f5b1b;
case 0x4f5b1e:c.instructions+=4;goto B4f5b1e;
case 0x4f5b20:c.instructions+=3;goto B4f5b20;
case 0x4f5b23:c.instructions+=2;goto B4f5b23;
case 0x4f5b26:c.instructions+=1;goto B4f5b26;
case 0x4f5b28:goto L4f5b28;
case 0x4f5b2d:c.instructions+=2;goto B4f5b2d;
case 0x4f5b30:c.instructions+=1;goto B4f5b30;
case 0x4f5b35:goto L4f5b35;
case 0x4f5b36:c.instructions+=3;goto B4f5b36;
case 0x4f5b39:c.instructions+=2;goto B4f5b39;
case 0x4f5b3a:c.instructions+=1;goto B4f5b3a;
case 0x4f5b3f:goto L4f5b3f;
case 0x4f5b41:c.instructions+=3;goto B4f5b41;
case 0x4f5b44:c.instructions+=2;goto B4f5b44;
case 0x4f5b46:c.instructions+=1;goto B4f5b46;
case 0x4f5b48:goto L4f5b48;
case 0x4f5b4d:goto L4f5b4d;
case 0x4f5b4f:c.instructions+=1;goto B4f5b4f;
case 0x4f5b51:goto L4f5b51;
case 0x4f5b54:c.instructions+=1;goto B4f5b54;
case 0x4f5b56:goto L4f5b56;
case 0x4f5b58:goto L4f5b58;
case 0x4f5b5b:c.instructions+=4;goto B4f5b5b;
case 0x4f5b5d:c.instructions+=3;goto B4f5b5d;
case 0x4f5b60:c.instructions+=2;goto B4f5b60;
case 0x4f5b63:c.instructions+=1;goto B4f5b63;
case 0x4f5b65:goto L4f5b65;
case 0x4f5b6a:c.instructions+=2;goto B4f5b6a;
case 0x4f5b6d:c.instructions+=1;goto B4f5b6d;
case 0x4f5b72:goto L4f5b72;
case 0x4f5b75:c.instructions+=3;goto B4f5b75;
case 0x4f5b76:c.instructions+=2;goto B4f5b76;
case 0x4f5b77:c.instructions+=1;goto B4f5b77;
case 0x4f5b7c:goto L4f5b7c;
case 0x4f5b7e:c.instructions+=3;goto B4f5b7e;
case 0x4f5b81:c.instructions+=2;goto B4f5b81;
case 0x4f5b83:c.instructions+=1;goto B4f5b83;
case 0x4f5b85:goto L4f5b85;
case 0x4f5b8a:goto L4f5b8a;
case 0x4f5b8c:c.instructions+=1;goto B4f5b8c;
case 0x4f5b8e:goto L4f5b8e;
case 0x4f5b91:c.instructions+=1;goto B4f5b91;
case 0x4f5b93:goto L4f5b93;
case 0x4f5b95:goto L4f5b95;
case 0x4f5b98:c.instructions+=4;goto B4f5b98;
case 0x4f5b9a:c.instructions+=3;goto B4f5b9a;
case 0x4f5b9d:c.instructions+=2;goto B4f5b9d;
case 0x4f5ba0:c.instructions+=1;goto B4f5ba0;
case 0x4f5ba2:goto L4f5ba2;
case 0x4f5ba7:c.instructions+=2;goto B4f5ba7;
case 0x4f5baa:c.instructions+=1;goto B4f5baa;
case 0x4f5baf:goto L4f5baf;
case 0x4f5bb2:c.instructions+=3;goto B4f5bb2;
case 0x4f5bb3:c.instructions+=2;goto B4f5bb3;
case 0x4f5bb4:c.instructions+=1;goto B4f5bb4;
case 0x4f5bb9:goto L4f5bb9;
case 0x4f5bbb:c.instructions+=3;goto B4f5bbb;
case 0x4f5bbe:c.instructions+=2;goto B4f5bbe;
case 0x4f5bc0:c.instructions+=1;goto B4f5bc0;
case 0x4f5bc2:goto L4f5bc2;
case 0x4f5bc7:goto L4f5bc7;
case 0x4f5bc9:c.instructions+=1;goto B4f5bc9;
case 0x4f5bcb:goto L4f5bcb;
case 0x4f5bce:c.instructions+=1;goto B4f5bce;
case 0x4f5bd0:goto L4f5bd0;
case 0x4f5bd2:goto L4f5bd2;
case 0x4f5bd5:c.instructions+=4;goto B4f5bd5;
case 0x4f5bd7:c.instructions+=3;goto B4f5bd7;
case 0x4f5bda:c.instructions+=2;goto B4f5bda;
case 0x4f5bdd:c.instructions+=1;goto B4f5bdd;
case 0x4f5bdf:goto L4f5bdf;
case 0x4f5be4:c.instructions+=2;goto B4f5be4;
case 0x4f5be7:c.instructions+=1;goto B4f5be7;
case 0x4f5bec:goto L4f5bec;
case 0x4f5bed:c.instructions+=3;goto B4f5bed;
case 0x4f5bf0:c.instructions+=2;goto B4f5bf0;
case 0x4f5bf1:c.instructions+=1;goto B4f5bf1;
case 0x4f5bf6:goto L4f5bf6;
case 0x4f5bf8:c.instructions+=3;goto B4f5bf8;
case 0x4f5bfb:c.instructions+=2;goto B4f5bfb;
case 0x4f5bfd:c.instructions+=1;goto B4f5bfd;
case 0x4f5bff:goto L4f5bff;
case 0x4f5c04:goto L4f5c04;
case 0x4f5c06:c.instructions+=1;goto B4f5c06;
case 0x4f5c08:goto L4f5c08;
case 0x4f5c0b:c.instructions+=1;goto B4f5c0b;
case 0x4f5c0d:goto L4f5c0d;
case 0x4f5c0f:goto L4f5c0f;
case 0x4f5c12:c.instructions+=4;goto B4f5c12;
case 0x4f5c14:c.instructions+=3;goto B4f5c14;
case 0x4f5c17:c.instructions+=2;goto B4f5c17;
case 0x4f5c1a:c.instructions+=1;goto B4f5c1a;
case 0x4f5c1c:goto L4f5c1c;
case 0x4f5c20:c.instructions+=8;goto B4f5c20;
case 0x4f5c23:c.instructions+=7;goto B4f5c23;
case 0x4f5c24:c.instructions+=6;goto B4f5c24;
case 0x4f5c26:c.instructions+=5;goto B4f5c26;
case 0x4f5c27:c.instructions+=4;goto B4f5c27;
case 0x4f5c28:c.instructions+=3;goto B4f5c28;
case 0x4f5c2f:c.instructions+=2;goto B4f5c2f;
case 0x4f5c32:c.instructions+=1;goto B4f5c32;
case 0x4f5c40:goto L4f5c40;
case 0x4f5c42:c.instructions+=25;goto B4f5c42;
case 0x4f5c47:c.instructions+=24;goto B4f5c47;
case 0x4f5c4d:c.instructions+=23;goto B4f5c4d;
case 0x4f5c4e:c.instructions+=22;goto B4f5c4e;
case 0x4f5c55:c.instructions+=21;goto B4f5c55;
case 0x4f5c58:c.instructions+=20;goto B4f5c58;
case 0x4f5c5c:c.instructions+=19;goto B4f5c5c;
case 0x4f5c5d:c.instructions+=18;goto B4f5c5d;
case 0x4f5c5e:c.instructions+=17;goto B4f5c5e;
case 0x4f5c60:c.instructions+=16;goto B4f5c60;
case 0x4f5c62:c.instructions+=15;goto B4f5c62;
case 0x4f5c63:c.instructions+=14;goto B4f5c63;
case 0x4f5c67:c.instructions+=13;goto B4f5c67;
case 0x4f5c69:c.instructions+=12;goto B4f5c69;
case 0x4f5c6c:c.instructions+=11;goto B4f5c6c;
case 0x4f5c6f:c.instructions+=10;goto B4f5c6f;
case 0x4f5c76:c.instructions+=9;goto B4f5c76;
case 0x4f5c79:c.instructions+=8;goto B4f5c79;
case 0x4f5c7c:c.instructions+=7;goto B4f5c7c;
case 0x4f5c7f:c.instructions+=6;goto B4f5c7f;
case 0x4f5c82:c.instructions+=5;goto B4f5c82;
case 0x4f5c85:c.instructions+=4;goto B4f5c85;
case 0x4f5c8a:c.instructions+=3;goto B4f5c8a;
case 0x4f5c8e:c.instructions+=2;goto B4f5c8e;
case 0x4f5c91:c.instructions+=1;goto B4f5c91;
case 0x4f5c96:goto L4f5c96;
case 0x4f5c99:c.instructions+=3;goto B4f5c99;
case 0x4f5c9a:c.instructions+=2;goto B4f5c9a;
case 0x4f5c9b:c.instructions+=1;goto B4f5c9b;
case 0x4f5ca0:goto L4f5ca0;
case 0x4f5ca2:c.instructions+=3;goto B4f5ca2;
case 0x4f5ca5:c.instructions+=2;goto B4f5ca5;
case 0x4f5ca7:c.instructions+=1;goto B4f5ca7;
case 0x4f5ca9:goto L4f5ca9;
case 0x4f5cae:goto L4f5cae;
case 0x4f5cb0:c.instructions+=1;goto B4f5cb0;
case 0x4f5cb2:goto L4f5cb2;
case 0x4f5cb5:c.instructions+=1;goto B4f5cb5;
case 0x4f5cb7:goto L4f5cb7;
case 0x4f5cb9:goto L4f5cb9;
case 0x4f5cbc:c.instructions+=4;goto B4f5cbc;
case 0x4f5cbe:c.instructions+=3;goto B4f5cbe;
case 0x4f5cc1:c.instructions+=2;goto B4f5cc1;
case 0x4f5cc4:c.instructions+=1;goto B4f5cc4;
case 0x4f5cc6:goto L4f5cc6;
case 0x4f5ccb:c.instructions+=2;goto B4f5ccb;
case 0x4f5cce:c.instructions+=1;goto B4f5cce;
case 0x4f5cd3:goto L4f5cd3;
case 0x4f5cd6:c.instructions+=3;goto B4f5cd6;
case 0x4f5cd7:c.instructions+=2;goto B4f5cd7;
case 0x4f5cd8:c.instructions+=1;goto B4f5cd8;
case 0x4f5cdd:goto L4f5cdd;
case 0x4f5cdf:c.instructions+=3;goto B4f5cdf;
case 0x4f5ce2:c.instructions+=2;goto B4f5ce2;
case 0x4f5ce4:c.instructions+=1;goto B4f5ce4;
case 0x4f5ce6:goto L4f5ce6;
case 0x4f5ceb:goto L4f5ceb;
case 0x4f5ced:c.instructions+=1;goto B4f5ced;
case 0x4f5cef:goto L4f5cef;
case 0x4f5cf2:c.instructions+=1;goto B4f5cf2;
case 0x4f5cf4:goto L4f5cf4;
case 0x4f5cf6:goto L4f5cf6;
case 0x4f5cf9:c.instructions+=4;goto B4f5cf9;
case 0x4f5cfb:c.instructions+=3;goto B4f5cfb;
case 0x4f5cfe:c.instructions+=2;goto B4f5cfe;
case 0x4f5d01:c.instructions+=1;goto B4f5d01;
case 0x4f5d03:goto L4f5d03;
case 0x4f5d08:c.instructions+=2;goto B4f5d08;
case 0x4f5d0b:c.instructions+=1;goto B4f5d0b;
case 0x4f5d10:goto L4f5d10;
case 0x4f5d11:c.instructions+=3;goto B4f5d11;
case 0x4f5d14:c.instructions+=2;goto B4f5d14;
case 0x4f5d15:c.instructions+=1;goto B4f5d15;
case 0x4f5d1a:goto L4f5d1a;
case 0x4f5d1c:c.instructions+=3;goto B4f5d1c;
case 0x4f5d1f:c.instructions+=2;goto B4f5d1f;
case 0x4f5d21:c.instructions+=1;goto B4f5d21;
case 0x4f5d23:goto L4f5d23;
case 0x4f5d28:goto L4f5d28;
case 0x4f5d2a:c.instructions+=1;goto B4f5d2a;
case 0x4f5d2c:goto L4f5d2c;
case 0x4f5d2f:c.instructions+=1;goto B4f5d2f;
case 0x4f5d31:goto L4f5d31;
case 0x4f5d33:goto L4f5d33;
case 0x4f5d36:c.instructions+=4;goto B4f5d36;
case 0x4f5d38:c.instructions+=3;goto B4f5d38;
case 0x4f5d3b:c.instructions+=2;goto B4f5d3b;
case 0x4f5d3e:c.instructions+=1;goto B4f5d3e;
case 0x4f5d40:goto L4f5d40;
case 0x4f5d45:c.instructions+=2;goto B4f5d45;
case 0x4f5d48:c.instructions+=1;goto B4f5d48;
case 0x4f5d4d:goto L4f5d4d;
case 0x4f5d50:c.instructions+=3;goto B4f5d50;
case 0x4f5d51:c.instructions+=2;goto B4f5d51;
case 0x4f5d52:c.instructions+=1;goto B4f5d52;
case 0x4f5d57:goto L4f5d57;
case 0x4f5d59:c.instructions+=3;goto B4f5d59;
case 0x4f5d5c:c.instructions+=2;goto B4f5d5c;
case 0x4f5d5e:c.instructions+=1;goto B4f5d5e;
case 0x4f5d60:goto L4f5d60;
case 0x4f5d65:goto L4f5d65;
case 0x4f5d67:c.instructions+=1;goto B4f5d67;
case 0x4f5d69:goto L4f5d69;
case 0x4f5d6c:c.instructions+=1;goto B4f5d6c;
case 0x4f5d6e:goto L4f5d6e;
case 0x4f5d70:goto L4f5d70;
case 0x4f5d73:c.instructions+=4;goto B4f5d73;
case 0x4f5d75:c.instructions+=3;goto B4f5d75;
case 0x4f5d78:c.instructions+=2;goto B4f5d78;
case 0x4f5d7b:c.instructions+=1;goto B4f5d7b;
case 0x4f5d7d:goto L4f5d7d;
case 0x4f5d82:c.instructions+=2;goto B4f5d82;
case 0x4f5d85:c.instructions+=1;goto B4f5d85;
case 0x4f5d8a:goto L4f5d8a;
case 0x4f5d8d:c.instructions+=3;goto B4f5d8d;
case 0x4f5d8e:c.instructions+=2;goto B4f5d8e;
case 0x4f5d8f:c.instructions+=1;goto B4f5d8f;
case 0x4f5d94:goto L4f5d94;
case 0x4f5d96:c.instructions+=3;goto B4f5d96;
case 0x4f5d99:c.instructions+=2;goto B4f5d99;
case 0x4f5d9b:c.instructions+=1;goto B4f5d9b;
case 0x4f5d9d:goto L4f5d9d;
case 0x4f5da2:goto L4f5da2;
case 0x4f5da4:c.instructions+=1;goto B4f5da4;
case 0x4f5da6:goto L4f5da6;
case 0x4f5da9:c.instructions+=1;goto B4f5da9;
case 0x4f5dab:goto L4f5dab;
case 0x4f5dad:goto L4f5dad;
case 0x4f5db0:c.instructions+=4;goto B4f5db0;
case 0x4f5db2:c.instructions+=3;goto B4f5db2;
case 0x4f5db5:c.instructions+=2;goto B4f5db5;
case 0x4f5db8:c.instructions+=1;goto B4f5db8;
case 0x4f5dba:goto L4f5dba;
case 0x4f5dbf:c.instructions+=2;goto B4f5dbf;
case 0x4f5dc2:c.instructions+=1;goto B4f5dc2;
case 0x4f5dc7:goto L4f5dc7;
case 0x4f5dc8:c.instructions+=3;goto B4f5dc8;
case 0x4f5dcb:c.instructions+=2;goto B4f5dcb;
case 0x4f5dcc:c.instructions+=1;goto B4f5dcc;
case 0x4f5dd1:goto L4f5dd1;
case 0x4f5dd3:c.instructions+=3;goto B4f5dd3;
case 0x4f5dd6:c.instructions+=2;goto B4f5dd6;
case 0x4f5dd8:c.instructions+=1;goto B4f5dd8;
case 0x4f5dda:goto L4f5dda;
case 0x4f5ddf:goto L4f5ddf;
case 0x4f5de1:c.instructions+=1;goto B4f5de1;
case 0x4f5de3:goto L4f5de3;
case 0x4f5de6:c.instructions+=1;goto B4f5de6;
case 0x4f5de8:goto L4f5de8;
case 0x4f5dea:goto L4f5dea;
case 0x4f5ded:c.instructions+=4;goto B4f5ded;
case 0x4f5def:c.instructions+=3;goto B4f5def;
case 0x4f5df2:c.instructions+=2;goto B4f5df2;
case 0x4f5df5:c.instructions+=1;goto B4f5df5;
case 0x4f5df7:goto L4f5df7;
case 0x4f5dfc:c.instructions+=2;goto B4f5dfc;
case 0x4f5dff:c.instructions+=1;goto B4f5dff;
case 0x4f5e04:goto L4f5e04;
case 0x4f5e07:c.instructions+=3;goto B4f5e07;
case 0x4f5e08:c.instructions+=2;goto B4f5e08;
case 0x4f5e09:c.instructions+=1;goto B4f5e09;
case 0x4f5e0e:goto L4f5e0e;
case 0x4f5e10:c.instructions+=3;goto B4f5e10;
case 0x4f5e13:c.instructions+=2;goto B4f5e13;
case 0x4f5e15:c.instructions+=1;goto B4f5e15;
case 0x4f5e17:goto L4f5e17;
case 0x4f5e1c:goto L4f5e1c;
case 0x4f5e1e:c.instructions+=1;goto B4f5e1e;
case 0x4f5e20:goto L4f5e20;
case 0x4f5e23:c.instructions+=1;goto B4f5e23;
case 0x4f5e25:goto L4f5e25;
case 0x4f5e27:goto L4f5e27;
case 0x4f5e2a:c.instructions+=4;goto B4f5e2a;
case 0x4f5e2c:c.instructions+=3;goto B4f5e2c;
case 0x4f5e2f:c.instructions+=2;goto B4f5e2f;
case 0x4f5e32:c.instructions+=1;goto B4f5e32;
case 0x4f5e34:goto L4f5e34;
case 0x4f5e37:c.instructions+=3;goto B4f5e37;
case 0x4f5e38:c.instructions+=2;goto B4f5e38;
case 0x4f5e3b:c.instructions+=1;goto B4f5e3b;
case 0x4f5e40:goto L4f5e40;
case 0x4f5e43:c.instructions+=2;goto B4f5e43;
case 0x4f5e44:c.instructions+=1;goto B4f5e44;
case 0x4f5e49:goto L4f5e49;
case 0x4f5e4e:c.instructions+=1;goto B4f5e4e;
case 0x4f5e53:goto L4f5e53;
case 0x4f5e56:c.instructions+=3;goto B4f5e56;
case 0x4f5e57:c.instructions+=2;goto B4f5e57;
case 0x4f5e58:c.instructions+=1;goto B4f5e58;
case 0x4f5e5d:goto L4f5e5d;
case 0x4f5e5f:c.instructions+=3;goto B4f5e5f;
case 0x4f5e62:c.instructions+=2;goto B4f5e62;
case 0x4f5e64:c.instructions+=1;goto B4f5e64;
case 0x4f5e66:goto L4f5e66;
case 0x4f5e6b:goto L4f5e6b;
case 0x4f5e6d:c.instructions+=1;goto B4f5e6d;
case 0x4f5e6f:goto L4f5e6f;
case 0x4f5e72:c.instructions+=1;goto B4f5e72;
case 0x4f5e74:goto L4f5e74;
case 0x4f5e76:goto L4f5e76;
case 0x4f5e79:c.instructions+=4;goto B4f5e79;
case 0x4f5e7b:c.instructions+=3;goto B4f5e7b;
case 0x4f5e7e:c.instructions+=2;goto B4f5e7e;
case 0x4f5e81:c.instructions+=1;goto B4f5e81;
case 0x4f5e83:goto L4f5e83;
case 0x4f5e88:c.instructions+=1;goto B4f5e88;
case 0x4f5e8d:goto L4f5e8d;
case 0x4f5e8f:c.instructions+=1;goto B4f5e8f;
case 0x4f5e95:goto L4f5e95;
case 0x4f5e9a:c.instructions+=1;goto B4f5e9a;
case 0x4f5e9f:goto L4f5e9f;
case 0x4f5ea2:c.instructions+=3;goto B4f5ea2;
case 0x4f5ea3:c.instructions+=2;goto B4f5ea3;
case 0x4f5ea4:c.instructions+=1;goto B4f5ea4;
case 0x4f5ea9:goto L4f5ea9;
case 0x4f5eab:c.instructions+=3;goto B4f5eab;
case 0x4f5eae:c.instructions+=2;goto B4f5eae;
case 0x4f5eb0:c.instructions+=1;goto B4f5eb0;
case 0x4f5eb2:goto L4f5eb2;
case 0x4f5eb7:goto L4f5eb7;
case 0x4f5eb9:c.instructions+=1;goto B4f5eb9;
case 0x4f5ebb:goto L4f5ebb;
case 0x4f5ebe:c.instructions+=1;goto B4f5ebe;
case 0x4f5ec0:goto L4f5ec0;
case 0x4f5ec2:goto L4f5ec2;
case 0x4f5ec5:c.instructions+=4;goto B4f5ec5;
case 0x4f5ec7:c.instructions+=3;goto B4f5ec7;
case 0x4f5eca:c.instructions+=2;goto B4f5eca;
case 0x4f5ecd:c.instructions+=1;goto B4f5ecd;
case 0x4f5ecf:goto L4f5ecf;
case 0x4f5ed4:c.instructions+=1;goto B4f5ed4;
case 0x4f5ed9:goto L4f5ed9;
case 0x4f5eda:c.instructions+=3;goto B4f5eda;
case 0x4f5edd:c.instructions+=2;goto B4f5edd;
case 0x4f5ede:c.instructions+=1;goto B4f5ede;
case 0x4f5ee3:goto L4f5ee3;
case 0x4f5ee5:c.instructions+=3;goto B4f5ee5;
case 0x4f5ee8:c.instructions+=2;goto B4f5ee8;
case 0x4f5eea:c.instructions+=1;goto B4f5eea;
case 0x4f5eec:goto L4f5eec;
case 0x4f5ef1:goto L4f5ef1;
case 0x4f5ef3:c.instructions+=1;goto B4f5ef3;
case 0x4f5ef5:goto L4f5ef5;
case 0x4f5ef8:c.instructions+=1;goto B4f5ef8;
case 0x4f5efa:goto L4f5efa;
case 0x4f5efc:goto L4f5efc;
case 0x4f5eff:c.instructions+=4;goto B4f5eff;
case 0x4f5f01:c.instructions+=3;goto B4f5f01;
case 0x4f5f04:c.instructions+=2;goto B4f5f04;
case 0x4f5f07:c.instructions+=1;goto B4f5f07;
case 0x4f5f09:goto L4f5f09;
case 0x4f5f0e:c.instructions+=1;goto B4f5f0e;
case 0x4f5f13:goto L4f5f13;
case 0x4f5f16:c.instructions+=3;goto B4f5f16;
case 0x4f5f17:c.instructions+=2;goto B4f5f17;
case 0x4f5f18:c.instructions+=1;goto B4f5f18;
case 0x4f5f1d:goto L4f5f1d;
case 0x4f5f1f:c.instructions+=3;goto B4f5f1f;
case 0x4f5f22:c.instructions+=2;goto B4f5f22;
case 0x4f5f24:c.instructions+=1;goto B4f5f24;
case 0x4f5f26:goto L4f5f26;
case 0x4f5f2b:goto L4f5f2b;
case 0x4f5f2d:c.instructions+=1;goto B4f5f2d;
case 0x4f5f2f:goto L4f5f2f;
case 0x4f5f32:c.instructions+=1;goto B4f5f32;
case 0x4f5f34:goto L4f5f34;
case 0x4f5f36:goto L4f5f36;
case 0x4f5f39:c.instructions+=4;goto B4f5f39;
case 0x4f5f3b:c.instructions+=3;goto B4f5f3b;
case 0x4f5f3e:c.instructions+=2;goto B4f5f3e;
case 0x4f5f41:c.instructions+=1;goto B4f5f41;
case 0x4f5f43:goto L4f5f43;
case 0x4f5f46:goto L4f5f46;
case 0x4f5f48:c.instructions+=3;goto B4f5f48;
case 0x4f5f4b:c.instructions+=2;goto B4f5f4b;
case 0x4f5f4c:c.instructions+=1;goto B4f5f4c;
case 0x4f5f50:goto L4f5f50;
case 0x4f5f53:c.instructions+=6;goto B4f5f53;
case 0x4f5f54:c.instructions+=5;goto B4f5f54;
case 0x4f5f59:c.instructions+=4;goto B4f5f59;
case 0x4f5f5d:c.instructions+=3;goto B4f5f5d;
case 0x4f5f5f:c.instructions+=2;goto B4f5f5f;
case 0x4f5f60:c.instructions+=1;goto B4f5f60;
case 0x4f5f65:goto L4f5f65;
case 0x4f5f69:c.instructions+=2;goto B4f5f69;
case 0x4f5f6a:c.instructions+=1;goto B4f5f6a;
case 0x4f5f6f:goto L4f5f6f;
case 0x4f5f72:c.instructions+=3;goto B4f5f72;
case 0x4f5f73:c.instructions+=2;goto B4f5f73;
case 0x4f5f74:c.instructions+=1;goto B4f5f74;
case 0x4f5f79:goto L4f5f79;
case 0x4f5f7b:c.instructions+=3;goto B4f5f7b;
case 0x4f5f7e:c.instructions+=2;goto B4f5f7e;
case 0x4f5f80:c.instructions+=1;goto B4f5f80;
case 0x4f5f82:goto L4f5f82;
case 0x4f5f87:goto L4f5f87;
case 0x4f5f89:c.instructions+=1;goto B4f5f89;
case 0x4f5f8b:goto L4f5f8b;
case 0x4f5f8e:c.instructions+=1;goto B4f5f8e;
case 0x4f5f90:goto L4f5f90;
case 0x4f5f92:goto L4f5f92;
case 0x4f5f95:c.instructions+=4;goto B4f5f95;
case 0x4f5f97:c.instructions+=3;goto B4f5f97;
case 0x4f5f9a:c.instructions+=2;goto B4f5f9a;
case 0x4f5f9d:c.instructions+=1;goto B4f5f9d;
case 0x4f5f9f:goto L4f5f9f;
case 0x4f5fa1:c.instructions+=4;goto B4f5fa1;
case 0x4f5fa3:c.instructions+=3;goto B4f5fa3;
case 0x4f5fa6:c.instructions+=2;goto B4f5fa6;
case 0x4f5fa9:c.instructions+=1;goto B4f5fa9;
case 0x4f5fab:goto L4f5fab;
case 0x4f5fb0:c.instructions+=4;goto B4f5fb0;
case 0x4f5fb2:c.instructions+=3;goto B4f5fb2;
case 0x4f5fb4:c.instructions+=2;goto B4f5fb4;
case 0x4f5fb5:c.instructions+=1;goto B4f5fb5;
case 0x4f5fb7:goto L4f5fb7;
case 0x4f5fbd:c.instructions+=1;goto B4f5fbd;
case 0x4f5fbf:goto L4f5fbf;
case 0x4f5fc4:c.instructions+=1;goto B4f5fc4;
case 0x4f5fc9:goto L4f5fc9;
case 0x4f5fcc:c.instructions+=3;goto B4f5fcc;
case 0x4f5fcd:c.instructions+=2;goto B4f5fcd;
case 0x4f5fce:c.instructions+=1;goto B4f5fce;
case 0x4f5fd3:goto L4f5fd3;
case 0x4f5fd5:c.instructions+=3;goto B4f5fd5;
case 0x4f5fd8:c.instructions+=2;goto B4f5fd8;
case 0x4f5fda:c.instructions+=1;goto B4f5fda;
case 0x4f5fdc:goto L4f5fdc;
case 0x4f5fe1:goto L4f5fe1;
case 0x4f5fe3:c.instructions+=1;goto B4f5fe3;
case 0x4f5fe5:goto L4f5fe5;
case 0x4f5fe8:c.instructions+=1;goto B4f5fe8;
case 0x4f5fea:goto L4f5fea;
case 0x4f5fec:goto L4f5fec;
case 0x4f5fef:c.instructions+=4;goto B4f5fef;
case 0x4f5ff1:c.instructions+=3;goto B4f5ff1;
case 0x4f5ff4:c.instructions+=2;goto B4f5ff4;
case 0x4f5ff7:c.instructions+=1;goto B4f5ff7;
case 0x4f5ff9:goto L4f5ff9;
case 0x4f5ffd:c.instructions+=1;goto B4f5ffd;
default:missing_instruction(c.pc);}
B4f5000:L4f5000:{c.instructions+=4;NFSU2_TR(0x4f5000);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5003:{NFSU2_TR(0x4f5003);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f5005:{NFSU2_TR(0x4f5005);
u8 U[4];
w4(U+0,u32(0x7984d8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f500a:{NFSU2_TR(0x4f500a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f500full));
TAIL_STATIC(0x505450u,505);
}
B4f500f:L4f500f:{c.instructions+=4;NFSU2_TR(0x4f500f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f5012:{NFSU2_TR(0x4f5012);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5013:{NFSU2_TR(0x4f5013);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5014:{NFSU2_TR(0x4f5014);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5019ull));
TAIL_STATIC(0x537a60u,537);
}
B4f5019:L4f5019:{c.instructions+=4;NFSU2_TR(0x4f5019);
__builtin_memmove((R+28),(R+0),4);
}
B4f501b:{NFSU2_TR(0x4f501b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f501e:{NFSU2_TR(0x4f501e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f5020:{NFSU2_TR(0x4f5020);
if(r1(R+518)){{goto L4f503f;}}
}
B4f5022:L4f5022:{c.instructions+=1;NFSU2_TR(0x4f5022);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5027ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f5027:L4f5027:{c.instructions+=2;NFSU2_TR(0x4f5027);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f5029:{NFSU2_TR(0x4f5029);
if(r1(R+518)){{goto L4f5030;}}
}
B4f502b:L4f502b:{c.instructions+=2;NFSU2_TR(0x4f502b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f502e:{NFSU2_TR(0x4f502e);
{goto L4f5032;}
}
B4f5030:L4f5030:{c.instructions+=1;NFSU2_TR(0x4f5030);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f5032:L4f5032:{c.instructions+=5;NFSU2_TR(0x4f5032);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f5035:{NFSU2_TR(0x4f5035);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f5037:{NFSU2_TR(0x4f5037);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f503a:{NFSU2_TR(0x4f503a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f503d:{NFSU2_TR(0x4f503d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f503f:L4f503f:{c.instructions+=11;NFSU2_TR(0x4f503f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f5043:{NFSU2_TR(0x4f5043);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5046:{NFSU2_TR(0x4f5046);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f5049:{NFSU2_TR(0x4f5049);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2dull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f504c:{NFSU2_TR(0x4f504c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f504d:{NFSU2_TR(0x4f504d);
__builtin_memmove((R+0),(R+24),4);
}
B4f504f:{NFSU2_TR(0x4f504f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f5050:{NFSU2_TR(0x4f5050);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f5051:{NFSU2_TR(0x4f5051);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5058:{NFSU2_TR(0x4f5058);
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
B4f505b:{NFSU2_TR(0x4f505b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f5060:L4f5060:{c.instructions+=23;NFSU2_TR(0x4f5060);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5062:{NFSU2_TR(0x4f5062);
u8 U[4];
w4(U+0,u32(0x776918ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5067:{NFSU2_TR(0x4f5067);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f506d:{NFSU2_TR(0x4f506d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f506e:{NFSU2_TR(0x4f506e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5075:{NFSU2_TR(0x4f5075);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5076:{NFSU2_TR(0x4f5076);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f507a:{NFSU2_TR(0x4f507a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f507b:{NFSU2_TR(0x4f507b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f507c:{NFSU2_TR(0x4f507c);
__builtin_memmove((R+24),(R+4),4);
}
B4f507e:{NFSU2_TR(0x4f507e);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4f5080:{NFSU2_TR(0x4f5080);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5081:{NFSU2_TR(0x4f5081);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5085:{NFSU2_TR(0x4f5085);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+24)),r4(U+0));
}
B4f5087:{NFSU2_TR(0x4f5087);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f508a:{NFSU2_TR(0x4f508a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f508d:{NFSU2_TR(0x4f508d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5090:{NFSU2_TR(0x4f5090);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w4(U+4,u32(0x80ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f5097:{NFSU2_TR(0x4f5097);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f509a:{NFSU2_TR(0x4f509a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f509d:{NFSU2_TR(0x4f509d);
u8 U[4];
w4(U+0,u32(0x798504ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f50a2:{NFSU2_TR(0x4f50a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f50a6:{NFSU2_TR(0x4f50a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f50abull));
TAIL_STATIC(0x505450u,505);
}
B4f50ab:L4f50ab:{c.instructions+=4;NFSU2_TR(0x4f50ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f50ae:{NFSU2_TR(0x4f50ae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f50af:{NFSU2_TR(0x4f50af);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f50b0:{NFSU2_TR(0x4f50b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f50b5ull));
TAIL_STATIC(0x537a10u,537);
}
B4f50b5:L4f50b5:{c.instructions+=4;NFSU2_TR(0x4f50b5);
__builtin_memmove((R+28),(R+0),4);
}
B4f50b7:{NFSU2_TR(0x4f50b7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f50ba:{NFSU2_TR(0x4f50ba);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f50bc:{NFSU2_TR(0x4f50bc);
if(r1(R+518)){{goto L4f50db;}}
}
B4f50be:L4f50be:{c.instructions+=1;NFSU2_TR(0x4f50be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f50c3ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f50c3:L4f50c3:{c.instructions+=2;NFSU2_TR(0x4f50c3);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f50c5:{NFSU2_TR(0x4f50c5);
if(r1(R+518)){{goto L4f50cc;}}
}
B4f50c7:L4f50c7:{c.instructions+=2;NFSU2_TR(0x4f50c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f50ca:{NFSU2_TR(0x4f50ca);
{goto L4f50ce;}
}
B4f50cc:L4f50cc:{c.instructions+=1;NFSU2_TR(0x4f50cc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f50ce:L4f50ce:{c.instructions+=5;NFSU2_TR(0x4f50ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f50d1:{NFSU2_TR(0x4f50d1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f50d3:{NFSU2_TR(0x4f50d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f50d6:{NFSU2_TR(0x4f50d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f50d9:{NFSU2_TR(0x4f50d9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f50db:L4f50db:{c.instructions+=9;NFSU2_TR(0x4f50db);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f50df:{NFSU2_TR(0x4f50df);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f50e2:{NFSU2_TR(0x4f50e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f50e3:{NFSU2_TR(0x4f50e3);
__builtin_memmove((R+0),(R+24),4);
}
B4f50e5:{NFSU2_TR(0x4f50e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f50e6:{NFSU2_TR(0x4f50e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f50e7:{NFSU2_TR(0x4f50e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f50ee:{NFSU2_TR(0x4f50ee);
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
B4f50f1:{NFSU2_TR(0x4f50f1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f5100:L4f5100:{c.instructions+=25;NFSU2_TR(0x4f5100);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5102:{NFSU2_TR(0x4f5102);
u8 U[4];
w4(U+0,u32(0x7768f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5107:{NFSU2_TR(0x4f5107);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f510d:{NFSU2_TR(0x4f510d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f510e:{NFSU2_TR(0x4f510e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5115:{NFSU2_TR(0x4f5115);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x28ull))));
}
B4f5118:{NFSU2_TR(0x4f5118);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f511c:{NFSU2_TR(0x4f511c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f511d:{NFSU2_TR(0x4f511d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f511e:{NFSU2_TR(0x4f511e);
__builtin_memmove((R+24),(R+4),4);
}
B4f5120:{NFSU2_TR(0x4f5120);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4f5122:{NFSU2_TR(0x4f5122);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5123:{NFSU2_TR(0x4f5123);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5127:{NFSU2_TR(0x4f5127);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+24)),r4(U+0));
}
B4f5129:{NFSU2_TR(0x4f5129);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f512c:{NFSU2_TR(0x4f512c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f512f:{NFSU2_TR(0x4f512f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x10000060ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f5136:{NFSU2_TR(0x4f5136);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5139:{NFSU2_TR(0x4f5139);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f513c:{NFSU2_TR(0x4f513c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f513f:{NFSU2_TR(0x4f513f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5142:{NFSU2_TR(0x4f5142);
u8 U[4];
w4(U+0,u32(0x798670ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5147:{NFSU2_TR(0x4f5147);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f514b:{NFSU2_TR(0x4f514b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f514e:{NFSU2_TR(0x4f514e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5153ull));
TAIL_STATIC(0x505450u,505);
}
B4f5153:L4f5153:{c.instructions+=4;NFSU2_TR(0x4f5153);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f5156:{NFSU2_TR(0x4f5156);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5157:{NFSU2_TR(0x4f5157);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5158:{NFSU2_TR(0x4f5158);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f515dull));
TAIL_STATIC(0x537a60u,537);
}
B4f515d:L4f515d:{c.instructions+=4;NFSU2_TR(0x4f515d);
__builtin_memmove((R+28),(R+0),4);
}
B4f515f:{NFSU2_TR(0x4f515f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f5162:{NFSU2_TR(0x4f5162);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f5164:{NFSU2_TR(0x4f5164);
if(r1(R+518)){{goto L4f5183;}}
}
B4f5166:L4f5166:{c.instructions+=1;NFSU2_TR(0x4f5166);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f516bull));
TAIL_STATIC(0x440ec0u,440);
}
B4f516b:L4f516b:{c.instructions+=2;NFSU2_TR(0x4f516b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f516d:{NFSU2_TR(0x4f516d);
if(r1(R+518)){{goto L4f5174;}}
}
B4f516f:L4f516f:{c.instructions+=2;NFSU2_TR(0x4f516f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5172:{NFSU2_TR(0x4f5172);
{goto L4f5176;}
}
B4f5174:L4f5174:{c.instructions+=1;NFSU2_TR(0x4f5174);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f5176:L4f5176:{c.instructions+=5;NFSU2_TR(0x4f5176);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f5179:{NFSU2_TR(0x4f5179);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f517b:{NFSU2_TR(0x4f517b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f517e:{NFSU2_TR(0x4f517e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5181:{NFSU2_TR(0x4f5181);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f5183:L4f5183:{c.instructions+=3;NFSU2_TR(0x4f5183);
u8 U[4];
w4(U+0,u32(0x79865cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5188:{NFSU2_TR(0x4f5188);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f518e:{NFSU2_TR(0x4f518e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5193ull));
TAIL_STATIC(0x505450u,505);
}
B4f5193:L4f5193:{c.instructions+=4;NFSU2_TR(0x4f5193);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f5196:{NFSU2_TR(0x4f5196);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5197:{NFSU2_TR(0x4f5197);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5198:{NFSU2_TR(0x4f5198);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f519dull));
TAIL_STATIC(0x537a60u,537);
}
B4f519d:L4f519d:{c.instructions+=4;NFSU2_TR(0x4f519d);
__builtin_memmove((R+28),(R+0),4);
}
B4f519f:{NFSU2_TR(0x4f519f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f51a2:{NFSU2_TR(0x4f51a2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f51a4:{NFSU2_TR(0x4f51a4);
if(r1(R+518)){{goto L4f51c3;}}
}
B4f51a6:L4f51a6:{c.instructions+=1;NFSU2_TR(0x4f51a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f51abull));
TAIL_STATIC(0x440ec0u,440);
}
B4f51ab:L4f51ab:{c.instructions+=2;NFSU2_TR(0x4f51ab);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f51ad:{NFSU2_TR(0x4f51ad);
if(r1(R+518)){{goto L4f51b4;}}
}
B4f51af:L4f51af:{c.instructions+=2;NFSU2_TR(0x4f51af);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f51b2:{NFSU2_TR(0x4f51b2);
{goto L4f51b6;}
}
B4f51b4:L4f51b4:{c.instructions+=1;NFSU2_TR(0x4f51b4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f51b6:L4f51b6:{c.instructions+=5;NFSU2_TR(0x4f51b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f51b9:{NFSU2_TR(0x4f51b9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f51bb:{NFSU2_TR(0x4f51bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f51be:{NFSU2_TR(0x4f51be);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f51c1:{NFSU2_TR(0x4f51c1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f51c3:L4f51c3:{c.instructions+=3;NFSU2_TR(0x4f51c3);
u8 U[4];
w4(U+0,u32(0x798648ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f51c8:{NFSU2_TR(0x4f51c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f51ce:{NFSU2_TR(0x4f51ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f51d3ull));
TAIL_STATIC(0x505450u,505);
}
B4f51d3:L4f51d3:{c.instructions+=4;NFSU2_TR(0x4f51d3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f51d4:{NFSU2_TR(0x4f51d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f51d7:{NFSU2_TR(0x4f51d7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f51d8:{NFSU2_TR(0x4f51d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f51ddull));
TAIL_STATIC(0x537a60u,537);
}
B4f51dd:L4f51dd:{c.instructions+=4;NFSU2_TR(0x4f51dd);
__builtin_memmove((R+28),(R+0),4);
}
B4f51df:{NFSU2_TR(0x4f51df);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f51e2:{NFSU2_TR(0x4f51e2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f51e4:{NFSU2_TR(0x4f51e4);
if(r1(R+518)){{goto L4f5203;}}
}
B4f51e6:L4f51e6:{c.instructions+=1;NFSU2_TR(0x4f51e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f51ebull));
TAIL_STATIC(0x440ec0u,440);
}
B4f51eb:L4f51eb:{c.instructions+=2;NFSU2_TR(0x4f51eb);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f51ed:{NFSU2_TR(0x4f51ed);
if(r1(R+518)){{goto L4f51f4;}}
}
B4f51ef:L4f51ef:{c.instructions+=2;NFSU2_TR(0x4f51ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f51f2:{NFSU2_TR(0x4f51f2);
{goto L4f51f6;}
}
B4f51f4:L4f51f4:{c.instructions+=1;NFSU2_TR(0x4f51f4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f51f6:L4f51f6:{c.instructions+=5;NFSU2_TR(0x4f51f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f51f9:{NFSU2_TR(0x4f51f9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f51fb:{NFSU2_TR(0x4f51fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f51fe:{NFSU2_TR(0x4f51fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5201:{NFSU2_TR(0x4f5201);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f5203:L4f5203:{c.instructions+=3;NFSU2_TR(0x4f5203);
u8 U[4];
w4(U+0,u32(0x798638ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5208:{NFSU2_TR(0x4f5208);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f520e:{NFSU2_TR(0x4f520e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5213ull));
TAIL_STATIC(0x505450u,505);
}
B4f5213:L4f5213:{c.instructions+=4;NFSU2_TR(0x4f5213);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f5216:{NFSU2_TR(0x4f5216);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5217:{NFSU2_TR(0x4f5217);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5218:{NFSU2_TR(0x4f5218);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f521dull));
TAIL_STATIC(0x537a60u,537);
}
B4f521d:L4f521d:{c.instructions+=4;NFSU2_TR(0x4f521d);
__builtin_memmove((R+28),(R+0),4);
}
B4f521f:{NFSU2_TR(0x4f521f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f5222:{NFSU2_TR(0x4f5222);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f5224:{NFSU2_TR(0x4f5224);
if(r1(R+518)){{goto L4f5243;}}
}
B4f5226:L4f5226:{c.instructions+=1;NFSU2_TR(0x4f5226);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f522bull));
TAIL_STATIC(0x440ec0u,440);
}
B4f522b:L4f522b:{c.instructions+=2;NFSU2_TR(0x4f522b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f522d:{NFSU2_TR(0x4f522d);
if(r1(R+518)){{goto L4f5234;}}
}
B4f522f:L4f522f:{c.instructions+=2;NFSU2_TR(0x4f522f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5232:{NFSU2_TR(0x4f5232);
{goto L4f5236;}
}
B4f5234:L4f5234:{c.instructions+=1;NFSU2_TR(0x4f5234);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f5236:L4f5236:{c.instructions+=5;NFSU2_TR(0x4f5236);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f5239:{NFSU2_TR(0x4f5239);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f523b:{NFSU2_TR(0x4f523b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f523e:{NFSU2_TR(0x4f523e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5241:{NFSU2_TR(0x4f5241);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f5243:L4f5243:{c.instructions+=3;NFSU2_TR(0x4f5243);
u8 U[4];
w4(U+0,u32(0x798620ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5248:{NFSU2_TR(0x4f5248);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f524b:{NFSU2_TR(0x4f524b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5250ull));
TAIL_STATIC(0x505450u,505);
}
B4f5250:L4f5250:{c.instructions+=4;NFSU2_TR(0x4f5250);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f5253:{NFSU2_TR(0x4f5253);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5254:{NFSU2_TR(0x4f5254);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5255:{NFSU2_TR(0x4f5255);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f525aull));
TAIL_STATIC(0x537a60u,537);
}
B4f525a:L4f525a:{c.instructions+=4;NFSU2_TR(0x4f525a);
__builtin_memmove((R+28),(R+0),4);
}
B4f525c:{NFSU2_TR(0x4f525c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f525f:{NFSU2_TR(0x4f525f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f5261:{NFSU2_TR(0x4f5261);
if(r1(R+518)){{goto L4f5280;}}
}
B4f5263:L4f5263:{c.instructions+=1;NFSU2_TR(0x4f5263);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5268ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f5268:L4f5268:{c.instructions+=2;NFSU2_TR(0x4f5268);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f526a:{NFSU2_TR(0x4f526a);
if(r1(R+518)){{goto L4f5271;}}
}
B4f526c:L4f526c:{c.instructions+=2;NFSU2_TR(0x4f526c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f526f:{NFSU2_TR(0x4f526f);
{goto L4f5273;}
}
B4f5271:L4f5271:{c.instructions+=1;NFSU2_TR(0x4f5271);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f5273:L4f5273:{c.instructions+=5;NFSU2_TR(0x4f5273);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f5276:{NFSU2_TR(0x4f5276);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f5278:{NFSU2_TR(0x4f5278);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f527b:{NFSU2_TR(0x4f527b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f527e:{NFSU2_TR(0x4f527e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f5280:L4f5280:{c.instructions+=3;NFSU2_TR(0x4f5280);
u8 U[4];
w4(U+0,u32(0x798610ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5285:{NFSU2_TR(0x4f5285);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5288:{NFSU2_TR(0x4f5288);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f528dull));
TAIL_STATIC(0x505450u,505);
}
B4f528d:L4f528d:{c.instructions+=4;NFSU2_TR(0x4f528d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f528e:{NFSU2_TR(0x4f528e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f5291:{NFSU2_TR(0x4f5291);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5292:{NFSU2_TR(0x4f5292);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5297ull));
TAIL_STATIC(0x537a10u,537);
}
B4f5297:L4f5297:{c.instructions+=4;NFSU2_TR(0x4f5297);
__builtin_memmove((R+28),(R+0),4);
}
B4f5299:{NFSU2_TR(0x4f5299);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f529c:{NFSU2_TR(0x4f529c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f529e:{NFSU2_TR(0x4f529e);
if(r1(R+518)){{goto L4f52bd;}}
}
B4f52a0:L4f52a0:{c.instructions+=1;NFSU2_TR(0x4f52a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f52a5ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f52a5:L4f52a5:{c.instructions+=2;NFSU2_TR(0x4f52a5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f52a7:{NFSU2_TR(0x4f52a7);
if(r1(R+518)){{goto L4f52ae;}}
}
B4f52a9:L4f52a9:{c.instructions+=2;NFSU2_TR(0x4f52a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f52ac:{NFSU2_TR(0x4f52ac);
{goto L4f52b0;}
}
B4f52ae:L4f52ae:{c.instructions+=1;NFSU2_TR(0x4f52ae);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f52b0:L4f52b0:{c.instructions+=5;NFSU2_TR(0x4f52b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f52b3:{NFSU2_TR(0x4f52b3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f52b5:{NFSU2_TR(0x4f52b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f52b8:{NFSU2_TR(0x4f52b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f52bb:{NFSU2_TR(0x4f52bb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f52bd:L4f52bd:{c.instructions+=3;NFSU2_TR(0x4f52bd);
u8 U[4];
w4(U+0,u32(0x7985fcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f52c2:{NFSU2_TR(0x4f52c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f52c5:{NFSU2_TR(0x4f52c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f52caull));
TAIL_STATIC(0x505450u,505);
}
B4f52ca:L4f52ca:{c.instructions+=4;NFSU2_TR(0x4f52ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f52cd:{NFSU2_TR(0x4f52cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f52ce:{NFSU2_TR(0x4f52ce);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f52cf:{NFSU2_TR(0x4f52cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f52d4ull));
TAIL_STATIC(0x537a10u,537);
}
B4f52d4:L4f52d4:{c.instructions+=4;NFSU2_TR(0x4f52d4);
__builtin_memmove((R+28),(R+0),4);
}
B4f52d6:{NFSU2_TR(0x4f52d6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f52d9:{NFSU2_TR(0x4f52d9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f52db:{NFSU2_TR(0x4f52db);
if(r1(R+518)){{goto L4f52fa;}}
}
B4f52dd:L4f52dd:{c.instructions+=1;NFSU2_TR(0x4f52dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f52e2ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f52e2:L4f52e2:{c.instructions+=2;NFSU2_TR(0x4f52e2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f52e4:{NFSU2_TR(0x4f52e4);
if(r1(R+518)){{goto L4f52eb;}}
}
B4f52e6:L4f52e6:{c.instructions+=2;NFSU2_TR(0x4f52e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f52e9:{NFSU2_TR(0x4f52e9);
{goto L4f52ed;}
}
B4f52eb:L4f52eb:{c.instructions+=1;NFSU2_TR(0x4f52eb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f52ed:L4f52ed:{c.instructions+=5;NFSU2_TR(0x4f52ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f52f0:{NFSU2_TR(0x4f52f0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f52f2:{NFSU2_TR(0x4f52f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f52f5:{NFSU2_TR(0x4f52f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f52f8:{NFSU2_TR(0x4f52f8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f52fa:L4f52fa:{c.instructions+=3;NFSU2_TR(0x4f52fa);
u8 U[4];
w4(U+0,u32(0x7985e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f52ff:{NFSU2_TR(0x4f52ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5302:{NFSU2_TR(0x4f5302);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5307ull));
TAIL_STATIC(0x505450u,505);
}
B4f5307:L4f5307:{c.instructions+=4;NFSU2_TR(0x4f5307);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f530a:{NFSU2_TR(0x4f530a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f530b:{NFSU2_TR(0x4f530b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f530c:{NFSU2_TR(0x4f530c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5311ull));
TAIL_STATIC(0x537a60u,537);
}
B4f5311:L4f5311:{c.instructions+=4;NFSU2_TR(0x4f5311);
__builtin_memmove((R+28),(R+0),4);
}
B4f5313:{NFSU2_TR(0x4f5313);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f5316:{NFSU2_TR(0x4f5316);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f5318:{NFSU2_TR(0x4f5318);
if(r1(R+518)){{goto L4f5337;}}
}
B4f531a:L4f531a:{c.instructions+=1;NFSU2_TR(0x4f531a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f531full));
TAIL_STATIC(0x440ec0u,440);
}
B4f531f:L4f531f:{c.instructions+=2;NFSU2_TR(0x4f531f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f5321:{NFSU2_TR(0x4f5321);
if(r1(R+518)){{goto L4f5328;}}
}
B4f5323:L4f5323:{c.instructions+=2;NFSU2_TR(0x4f5323);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5326:{NFSU2_TR(0x4f5326);
{goto L4f532a;}
}
B4f5328:L4f5328:{c.instructions+=1;NFSU2_TR(0x4f5328);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f532a:L4f532a:{c.instructions+=5;NFSU2_TR(0x4f532a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f532d:{NFSU2_TR(0x4f532d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f532f:{NFSU2_TR(0x4f532f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5332:{NFSU2_TR(0x4f5332);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5335:{NFSU2_TR(0x4f5335);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f5337:L4f5337:{c.instructions+=3;NFSU2_TR(0x4f5337);
u8 U[4];
w4(U+0,u32(0x7985d8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f533c:{NFSU2_TR(0x4f533c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f533f:{NFSU2_TR(0x4f533f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5344ull));
TAIL_STATIC(0x505450u,505);
}
B4f5344:L4f5344:{c.instructions+=4;NFSU2_TR(0x4f5344);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5345:{NFSU2_TR(0x4f5345);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f5348:{NFSU2_TR(0x4f5348);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5349:{NFSU2_TR(0x4f5349);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f534eull));
TAIL_STATIC(0x537a10u,537);
}
B4f534e:L4f534e:{c.instructions+=4;NFSU2_TR(0x4f534e);
__builtin_memmove((R+28),(R+0),4);
}
B4f5350:{NFSU2_TR(0x4f5350);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f5353:{NFSU2_TR(0x4f5353);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f5355:{NFSU2_TR(0x4f5355);
if(r1(R+518)){{goto L4f5374;}}
}
B4f5357:L4f5357:{c.instructions+=1;NFSU2_TR(0x4f5357);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f535cull));
TAIL_STATIC(0x440ec0u,440);
}
B4f535c:L4f535c:{c.instructions+=2;NFSU2_TR(0x4f535c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f535e:{NFSU2_TR(0x4f535e);
if(r1(R+518)){{goto L4f5365;}}
}
B4f5360:L4f5360:{c.instructions+=2;NFSU2_TR(0x4f5360);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5363:{NFSU2_TR(0x4f5363);
{goto L4f5367;}
}
B4f5365:L4f5365:{c.instructions+=1;NFSU2_TR(0x4f5365);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f5367:L4f5367:{c.instructions+=5;NFSU2_TR(0x4f5367);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f536a:{NFSU2_TR(0x4f536a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f536c:{NFSU2_TR(0x4f536c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f536f:{NFSU2_TR(0x4f536f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5372:{NFSU2_TR(0x4f5372);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f5374:L4f5374:{c.instructions+=3;NFSU2_TR(0x4f5374);
u8 U[4];
w4(U+0,u32(0x7985ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5379:{NFSU2_TR(0x4f5379);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f537c:{NFSU2_TR(0x4f537c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5381ull));
TAIL_STATIC(0x505450u,505);
}
B4f5381:L4f5381:{c.instructions+=4;NFSU2_TR(0x4f5381);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f5384:{NFSU2_TR(0x4f5384);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5385:{NFSU2_TR(0x4f5385);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5386:{NFSU2_TR(0x4f5386);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f538bull));
TAIL_STATIC(0x537a60u,537);
}
B4f538b:L4f538b:{c.instructions+=4;NFSU2_TR(0x4f538b);
__builtin_memmove((R+28),(R+0),4);
}
B4f538d:{NFSU2_TR(0x4f538d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f5390:{NFSU2_TR(0x4f5390);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f5392:{NFSU2_TR(0x4f5392);
if(r1(R+518)){{goto L4f53b1;}}
}
B4f5394:L4f5394:{c.instructions+=1;NFSU2_TR(0x4f5394);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5399ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f5399:L4f5399:{c.instructions+=2;NFSU2_TR(0x4f5399);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f539b:{NFSU2_TR(0x4f539b);
if(r1(R+518)){{goto L4f53a2;}}
}
B4f539d:L4f539d:{c.instructions+=2;NFSU2_TR(0x4f539d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f53a0:{NFSU2_TR(0x4f53a0);
{goto L4f53a4;}
}
B4f53a2:L4f53a2:{c.instructions+=1;NFSU2_TR(0x4f53a2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f53a4:L4f53a4:{c.instructions+=5;NFSU2_TR(0x4f53a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f53a7:{NFSU2_TR(0x4f53a7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f53a9:{NFSU2_TR(0x4f53a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f53ac:{NFSU2_TR(0x4f53ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f53af:{NFSU2_TR(0x4f53af);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f53b1:L4f53b1:{c.instructions+=3;NFSU2_TR(0x4f53b1);
u8 U[4];
w4(U+0,u32(0x7985c4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f53b6:{NFSU2_TR(0x4f53b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f53b9:{NFSU2_TR(0x4f53b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f53beull));
TAIL_STATIC(0x505450u,505);
}
B4f53be:L4f53be:{c.instructions+=4;NFSU2_TR(0x4f53be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f53c1:{NFSU2_TR(0x4f53c1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f53c2:{NFSU2_TR(0x4f53c2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f53c3:{NFSU2_TR(0x4f53c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f53c8ull));
TAIL_STATIC(0x537a60u,537);
}
B4f53c8:L4f53c8:{c.instructions+=4;NFSU2_TR(0x4f53c8);
__builtin_memmove((R+28),(R+0),4);
}
B4f53ca:{NFSU2_TR(0x4f53ca);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f53cd:{NFSU2_TR(0x4f53cd);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f53cf:{NFSU2_TR(0x4f53cf);
if(r1(R+518)){{goto L4f53ee;}}
}
B4f53d1:L4f53d1:{c.instructions+=1;NFSU2_TR(0x4f53d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f53d6ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f53d6:L4f53d6:{c.instructions+=2;NFSU2_TR(0x4f53d6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f53d8:{NFSU2_TR(0x4f53d8);
if(r1(R+518)){{goto L4f53df;}}
}
B4f53da:L4f53da:{c.instructions+=2;NFSU2_TR(0x4f53da);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f53dd:{NFSU2_TR(0x4f53dd);
{goto L4f53e1;}
}
B4f53df:L4f53df:{c.instructions+=1;NFSU2_TR(0x4f53df);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f53e1:L4f53e1:{c.instructions+=5;NFSU2_TR(0x4f53e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f53e4:{NFSU2_TR(0x4f53e4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f53e6:{NFSU2_TR(0x4f53e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f53e9:{NFSU2_TR(0x4f53e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f53ec:{NFSU2_TR(0x4f53ec);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f53ee:L4f53ee:{c.instructions+=3;NFSU2_TR(0x4f53ee);
u8 U[4];
w4(U+0,u32(0x7985b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f53f3:{NFSU2_TR(0x4f53f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f53f6:{NFSU2_TR(0x4f53f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f53fbull));
TAIL_STATIC(0x505450u,505);
}
B4f53fb:L4f53fb:{c.instructions+=4;NFSU2_TR(0x4f53fb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f53fc:{NFSU2_TR(0x4f53fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f53ff:{NFSU2_TR(0x4f53ff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5400:{NFSU2_TR(0x4f5400);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5405ull));
TAIL_STATIC(0x537a10u,537);
}
B4f5405:L4f5405:{c.instructions+=4;NFSU2_TR(0x4f5405);
__builtin_memmove((R+28),(R+0),4);
}
B4f5407:{NFSU2_TR(0x4f5407);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f540a:{NFSU2_TR(0x4f540a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f540c:{NFSU2_TR(0x4f540c);
if(r1(R+518)){{goto L4f542b;}}
}
B4f540e:L4f540e:{c.instructions+=1;NFSU2_TR(0x4f540e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5413ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f5413:L4f5413:{c.instructions+=2;NFSU2_TR(0x4f5413);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f5415:{NFSU2_TR(0x4f5415);
if(r1(R+518)){{goto L4f541c;}}
}
B4f5417:L4f5417:{c.instructions+=2;NFSU2_TR(0x4f5417);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f541a:{NFSU2_TR(0x4f541a);
{goto L4f541e;}
}
B4f541c:L4f541c:{c.instructions+=1;NFSU2_TR(0x4f541c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f541e:L4f541e:{c.instructions+=5;NFSU2_TR(0x4f541e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f5421:{NFSU2_TR(0x4f5421);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f5423:{NFSU2_TR(0x4f5423);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5426:{NFSU2_TR(0x4f5426);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5429:{NFSU2_TR(0x4f5429);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f542b:L4f542b:{c.instructions+=3;NFSU2_TR(0x4f542b);
u8 U[4];
w4(U+0,u32(0x7985a8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5430:{NFSU2_TR(0x4f5430);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5433:{NFSU2_TR(0x4f5433);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5438ull));
TAIL_STATIC(0x505450u,505);
}
B4f5438:L4f5438:{c.instructions+=4;NFSU2_TR(0x4f5438);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f543b:{NFSU2_TR(0x4f543b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f543c:{NFSU2_TR(0x4f543c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f543d:{NFSU2_TR(0x4f543d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5442ull));
TAIL_STATIC(0x537a10u,537);
}
B4f5442:L4f5442:{c.instructions+=4;NFSU2_TR(0x4f5442);
__builtin_memmove((R+28),(R+0),4);
}
B4f5444:{NFSU2_TR(0x4f5444);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f5447:{NFSU2_TR(0x4f5447);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f5449:{NFSU2_TR(0x4f5449);
if(r1(R+518)){{goto L4f5468;}}
}
B4f544b:L4f544b:{c.instructions+=1;NFSU2_TR(0x4f544b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5450ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f5450:L4f5450:{c.instructions+=2;NFSU2_TR(0x4f5450);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f5452:{NFSU2_TR(0x4f5452);
if(r1(R+518)){{goto L4f5459;}}
}
B4f5454:L4f5454:{c.instructions+=2;NFSU2_TR(0x4f5454);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5457:{NFSU2_TR(0x4f5457);
{goto L4f545b;}
}
B4f5459:L4f5459:{c.instructions+=1;NFSU2_TR(0x4f5459);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f545b:L4f545b:{c.instructions+=5;NFSU2_TR(0x4f545b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f545e:{NFSU2_TR(0x4f545e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f5460:{NFSU2_TR(0x4f5460);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5463:{NFSU2_TR(0x4f5463);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5466:{NFSU2_TR(0x4f5466);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f5468:L4f5468:{c.instructions+=3;NFSU2_TR(0x4f5468);
u8 U[4];
w4(U+0,u32(0x7985a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f546d:{NFSU2_TR(0x4f546d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5470:{NFSU2_TR(0x4f5470);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5475ull));
TAIL_STATIC(0x505450u,505);
}
B4f5475:L4f5475:{c.instructions+=4;NFSU2_TR(0x4f5475);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f5478:{NFSU2_TR(0x4f5478);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5479:{NFSU2_TR(0x4f5479);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f547a:{NFSU2_TR(0x4f547a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f547full));
TAIL_STATIC(0x537a60u,537);
}
B4f547f:L4f547f:{c.instructions+=4;NFSU2_TR(0x4f547f);
__builtin_memmove((R+28),(R+0),4);
}
B4f5481:{NFSU2_TR(0x4f5481);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f5484:{NFSU2_TR(0x4f5484);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f5486:{NFSU2_TR(0x4f5486);
if(r1(R+518)){{goto L4f54a5;}}
}
B4f5488:L4f5488:{c.instructions+=1;NFSU2_TR(0x4f5488);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f548dull));
TAIL_STATIC(0x440ec0u,440);
}
B4f548d:L4f548d:{c.instructions+=2;NFSU2_TR(0x4f548d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f548f:{NFSU2_TR(0x4f548f);
if(r1(R+518)){{goto L4f5496;}}
}
B4f5491:L4f5491:{c.instructions+=2;NFSU2_TR(0x4f5491);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5494:{NFSU2_TR(0x4f5494);
{goto L4f5498;}
}
B4f5496:L4f5496:{c.instructions+=1;NFSU2_TR(0x4f5496);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f5498:L4f5498:{c.instructions+=5;NFSU2_TR(0x4f5498);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f549b:{NFSU2_TR(0x4f549b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f549d:{NFSU2_TR(0x4f549d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f54a0:{NFSU2_TR(0x4f54a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f54a3:{NFSU2_TR(0x4f54a3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f54a5:L4f54a5:{c.instructions+=3;NFSU2_TR(0x4f54a5);
u8 U[4];
w4(U+0,u32(0x798594ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f54aa:{NFSU2_TR(0x4f54aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f54ad:{NFSU2_TR(0x4f54ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f54b2ull));
TAIL_STATIC(0x505450u,505);
}
B4f54b2:L4f54b2:{c.instructions+=4;NFSU2_TR(0x4f54b2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f54b3:{NFSU2_TR(0x4f54b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f54b6:{NFSU2_TR(0x4f54b6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f54b7:{NFSU2_TR(0x4f54b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f54bcull));
TAIL_STATIC(0x537a60u,537);
}
B4f54bc:L4f54bc:{c.instructions+=4;NFSU2_TR(0x4f54bc);
__builtin_memmove((R+28),(R+0),4);
}
B4f54be:{NFSU2_TR(0x4f54be);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f54c1:{NFSU2_TR(0x4f54c1);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f54c3:{NFSU2_TR(0x4f54c3);
if(r1(R+518)){{goto L4f54e2;}}
}
B4f54c5:L4f54c5:{c.instructions+=1;NFSU2_TR(0x4f54c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f54caull));
TAIL_STATIC(0x440ec0u,440);
}
B4f54ca:L4f54ca:{c.instructions+=2;NFSU2_TR(0x4f54ca);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f54cc:{NFSU2_TR(0x4f54cc);
if(r1(R+518)){{goto L4f54d3;}}
}
B4f54ce:L4f54ce:{c.instructions+=2;NFSU2_TR(0x4f54ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f54d1:{NFSU2_TR(0x4f54d1);
{goto L4f54d5;}
}
B4f54d3:L4f54d3:{c.instructions+=1;NFSU2_TR(0x4f54d3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f54d5:L4f54d5:{c.instructions+=5;NFSU2_TR(0x4f54d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f54d8:{NFSU2_TR(0x4f54d8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f54da:{NFSU2_TR(0x4f54da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f54dd:{NFSU2_TR(0x4f54dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f54e0:{NFSU2_TR(0x4f54e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f54e2:L4f54e2:{c.instructions+=3;NFSU2_TR(0x4f54e2);
u8 U[4];
w4(U+0,u32(0x79857cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f54e7:{NFSU2_TR(0x4f54e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f54ed:{NFSU2_TR(0x4f54ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f54f2ull));
TAIL_STATIC(0x505450u,505);
}
B4f54f2:L4f54f2:{c.instructions+=4;NFSU2_TR(0x4f54f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f54f5:{NFSU2_TR(0x4f54f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f54f6:{NFSU2_TR(0x4f54f6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f54f7:{NFSU2_TR(0x4f54f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f54fcull));
TAIL_STATIC(0x537a60u,537);
}
B4f54fc:L4f54fc:{c.instructions+=4;NFSU2_TR(0x4f54fc);
__builtin_memmove((R+28),(R+0),4);
}
B4f54fe:{NFSU2_TR(0x4f54fe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f5501:{NFSU2_TR(0x4f5501);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f5503:{NFSU2_TR(0x4f5503);
if(r1(R+518)){{goto L4f5522;}}
}
B4f5505:L4f5505:{c.instructions+=1;NFSU2_TR(0x4f5505);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f550aull));
TAIL_STATIC(0x440ec0u,440);
}
B4f550a:L4f550a:{c.instructions+=2;NFSU2_TR(0x4f550a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f550c:{NFSU2_TR(0x4f550c);
if(r1(R+518)){{goto L4f5513;}}
}
B4f550e:L4f550e:{c.instructions+=2;NFSU2_TR(0x4f550e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5511:{NFSU2_TR(0x4f5511);
{goto L4f5515;}
}
B4f5513:L4f5513:{c.instructions+=1;NFSU2_TR(0x4f5513);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f5515:L4f5515:{c.instructions+=5;NFSU2_TR(0x4f5515);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f5518:{NFSU2_TR(0x4f5518);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f551a:{NFSU2_TR(0x4f551a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f551d:{NFSU2_TR(0x4f551d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5520:{NFSU2_TR(0x4f5520);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f5522:L4f5522:{c.instructions+=3;NFSU2_TR(0x4f5522);
u8 U[8];
__builtin_memmove((U+0),gp(0x89e7c0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f5529:{NFSU2_TR(0x4f5529);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f552a:{NFSU2_TR(0x4f552a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4f560c;}}
}
B4f5530:L4f5530:{c.instructions+=2;NFSU2_TR(0x4f5530);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f5532:{NFSU2_TR(0x4f5532);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f5535:L4f5535:{c.instructions+=7;NFSU2_TR(0x4f5535);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4f5538:{NFSU2_TR(0x4f5538);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5539:{NFSU2_TR(0x4f5539);
u8 U[4];
w4(U+0,u32(0x798574ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f553e:{NFSU2_TR(0x4f553e);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4f5542:{NFSU2_TR(0x4f5542);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5544:{NFSU2_TR(0x4f5544);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5545:{NFSU2_TR(0x4f5545);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f554aull));
TAIL_STATIC(0x50c960u,50c);
}
B4f554a:L4f554a:{c.instructions+=3;NFSU2_TR(0x4f554a);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4f554e:{NFSU2_TR(0x4f554e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f554f:{NFSU2_TR(0x4f554f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5554ull));
TAIL_STATIC(0x505450u,505);
}
B4f5554:L4f5554:{c.instructions+=4;NFSU2_TR(0x4f5554);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f5557:{NFSU2_TR(0x4f5557);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5558:{NFSU2_TR(0x4f5558);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5559:{NFSU2_TR(0x4f5559);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f555eull));
TAIL_STATIC(0x537a60u,537);
}
B4f555e:L4f555e:{c.instructions+=4;NFSU2_TR(0x4f555e);
__builtin_memmove((R+28),(R+0),4);
}
B4f5560:{NFSU2_TR(0x4f5560);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B4f5563:{NFSU2_TR(0x4f5563);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f5565:{NFSU2_TR(0x4f5565);
if(r1(R+518)){{goto L4f5584;}}
}
B4f5567:L4f5567:{c.instructions+=1;NFSU2_TR(0x4f5567);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f556cull));
TAIL_STATIC(0x440ec0u,440);
}
B4f556c:L4f556c:{c.instructions+=2;NFSU2_TR(0x4f556c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f556e:{NFSU2_TR(0x4f556e);
if(r1(R+518)){{goto L4f5575;}}
}
B4f5570:L4f5570:{c.instructions+=2;NFSU2_TR(0x4f5570);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5573:{NFSU2_TR(0x4f5573);
{goto L4f5577;}
}
B4f5575:L4f5575:{c.instructions+=1;NFSU2_TR(0x4f5575);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f5577:L4f5577:{c.instructions+=5;NFSU2_TR(0x4f5577);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f557a:{NFSU2_TR(0x4f557a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f557c:{NFSU2_TR(0x4f557c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f557f:{NFSU2_TR(0x4f557f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5582:{NFSU2_TR(0x4f5582);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f5584:L4f5584:{c.instructions+=5;NFSU2_TR(0x4f5584);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+12)),r4(U+0));
}
B4f5586:{NFSU2_TR(0x4f5586);
__builtin_memmove((R+0),(R+20),4);
}
B4f5588:{NFSU2_TR(0x4f5588);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B4f558b:{NFSU2_TR(0x4f558b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4f558e:{NFSU2_TR(0x4f558e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4f5535u);}goto L4f5535;}}
}
B4f5590:L4f5590:{c.instructions+=2;NFSU2_TR(0x4f5590);
u8 U[4];
w4(U+0,u32(0x798560ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5595:{NFSU2_TR(0x4f5595);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f559aull));
TAIL_STATIC(0x505450u,505);
}
B4f559a:L4f559a:{c.instructions+=4;NFSU2_TR(0x4f559a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f559d:{NFSU2_TR(0x4f559d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f559e:{NFSU2_TR(0x4f559e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f559f:{NFSU2_TR(0x4f559f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f55a4ull));
TAIL_STATIC(0x537a60u,537);
}
B4f55a4:L4f55a4:{c.instructions+=4;NFSU2_TR(0x4f55a4);
__builtin_memmove((R+28),(R+0),4);
}
B4f55a6:{NFSU2_TR(0x4f55a6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f55a9:{NFSU2_TR(0x4f55a9);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f55ab:{NFSU2_TR(0x4f55ab);
if(r1(R+518)){{goto L4f55ca;}}
}
B4f55ad:L4f55ad:{c.instructions+=1;NFSU2_TR(0x4f55ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f55b2ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f55b2:L4f55b2:{c.instructions+=2;NFSU2_TR(0x4f55b2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f55b4:{NFSU2_TR(0x4f55b4);
if(r1(R+518)){{goto L4f55bb;}}
}
B4f55b6:L4f55b6:{c.instructions+=2;NFSU2_TR(0x4f55b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f55b9:{NFSU2_TR(0x4f55b9);
{goto L4f55bd;}
}
B4f55bb:L4f55bb:{c.instructions+=1;NFSU2_TR(0x4f55bb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f55bd:L4f55bd:{c.instructions+=5;NFSU2_TR(0x4f55bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f55c0:{NFSU2_TR(0x4f55c0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f55c2:{NFSU2_TR(0x4f55c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f55c5:{NFSU2_TR(0x4f55c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f55c8:{NFSU2_TR(0x4f55c8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f55ca:L4f55ca:{c.instructions+=3;NFSU2_TR(0x4f55ca);
u8 U[4];
w4(U+0,u32(0x798550ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f55cf:{NFSU2_TR(0x4f55cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f55d2:{NFSU2_TR(0x4f55d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f55d7ull));
TAIL_STATIC(0x505450u,505);
}
B4f55d7:L4f55d7:{c.instructions+=4;NFSU2_TR(0x4f55d7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f55d8:{NFSU2_TR(0x4f55d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f55db:{NFSU2_TR(0x4f55db);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f55dc:{NFSU2_TR(0x4f55dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f55e1ull));
TAIL_STATIC(0x537a60u,537);
}
B4f55e1:L4f55e1:{c.instructions+=4;NFSU2_TR(0x4f55e1);
__builtin_memmove((R+28),(R+0),4);
}
B4f55e3:{NFSU2_TR(0x4f55e3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f55e6:{NFSU2_TR(0x4f55e6);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f55e8:{NFSU2_TR(0x4f55e8);
if(r1(R+518)){{goto L4f5607;}}
}
B4f55ea:L4f55ea:{c.instructions+=1;NFSU2_TR(0x4f55ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f55efull));
TAIL_STATIC(0x440ec0u,440);
}
B4f55ef:L4f55ef:{c.instructions+=2;NFSU2_TR(0x4f55ef);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f55f1:{NFSU2_TR(0x4f55f1);
if(r1(R+518)){{goto L4f55f8;}}
}
B4f55f3:L4f55f3:{c.instructions+=2;NFSU2_TR(0x4f55f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f55f6:{NFSU2_TR(0x4f55f6);
{goto L4f55fa;}
}
B4f55f8:L4f55f8:{c.instructions+=1;NFSU2_TR(0x4f55f8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f55fa:L4f55fa:{c.instructions+=5;NFSU2_TR(0x4f55fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f55fd:{NFSU2_TR(0x4f55fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f55ff:{NFSU2_TR(0x4f55ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5602:{NFSU2_TR(0x4f5602);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5605:{NFSU2_TR(0x4f5605);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f5607:L4f5607:{c.instructions+=2;NFSU2_TR(0x4f5607);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f560a:{NFSU2_TR(0x4f560a);
{goto L4f5686;}
}
B4f560c:L4f560c:{c.instructions+=2;NFSU2_TR(0x4f560c);
u8 U[4];
w4(U+0,u32(0x798594ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5611:{NFSU2_TR(0x4f5611);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5616ull));
TAIL_STATIC(0x505450u,505);
}
B4f5616:L4f5616:{c.instructions+=4;NFSU2_TR(0x4f5616);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f5619:{NFSU2_TR(0x4f5619);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f561a:{NFSU2_TR(0x4f561a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f561b:{NFSU2_TR(0x4f561b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5620ull));
TAIL_STATIC(0x537a60u,537);
}
B4f5620:L4f5620:{c.instructions+=4;NFSU2_TR(0x4f5620);
__builtin_memmove((R+28),(R+0),4);
}
B4f5622:{NFSU2_TR(0x4f5622);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f5625:{NFSU2_TR(0x4f5625);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f5627:{NFSU2_TR(0x4f5627);
if(r1(R+518)){{goto L4f5646;}}
}
B4f5629:L4f5629:{c.instructions+=1;NFSU2_TR(0x4f5629);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f562eull));
TAIL_STATIC(0x440ec0u,440);
}
B4f562e:L4f562e:{c.instructions+=2;NFSU2_TR(0x4f562e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f5630:{NFSU2_TR(0x4f5630);
if(r1(R+518)){{goto L4f5637;}}
}
B4f5632:L4f5632:{c.instructions+=2;NFSU2_TR(0x4f5632);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5635:{NFSU2_TR(0x4f5635);
{goto L4f5639;}
}
B4f5637:L4f5637:{c.instructions+=1;NFSU2_TR(0x4f5637);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f5639:L4f5639:{c.instructions+=5;NFSU2_TR(0x4f5639);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f563c:{NFSU2_TR(0x4f563c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f563e:{NFSU2_TR(0x4f563e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5641:{NFSU2_TR(0x4f5641);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5644:{NFSU2_TR(0x4f5644);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f5646:L4f5646:{c.instructions+=3;NFSU2_TR(0x4f5646);
u8 U[4];
w4(U+0,u32(0x798544ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f564b:{NFSU2_TR(0x4f564b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f564e:{NFSU2_TR(0x4f564e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5653ull));
TAIL_STATIC(0x505450u,505);
}
B4f5653:L4f5653:{c.instructions+=4;NFSU2_TR(0x4f5653);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f5656:{NFSU2_TR(0x4f5656);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5657:{NFSU2_TR(0x4f5657);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5658:{NFSU2_TR(0x4f5658);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f565dull));
TAIL_STATIC(0x537a60u,537);
}
B4f565d:L4f565d:{c.instructions+=4;NFSU2_TR(0x4f565d);
__builtin_memmove((R+28),(R+0),4);
}
B4f565f:{NFSU2_TR(0x4f565f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f5662:{NFSU2_TR(0x4f5662);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f5664:{NFSU2_TR(0x4f5664);
if(r1(R+518)){{goto L4f5683;}}
}
B4f5666:L4f5666:{c.instructions+=1;NFSU2_TR(0x4f5666);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f566bull));
TAIL_STATIC(0x440ec0u,440);
}
B4f566b:L4f566b:{c.instructions+=2;NFSU2_TR(0x4f566b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f566d:{NFSU2_TR(0x4f566d);
if(r1(R+518)){{goto L4f5674;}}
}
B4f566f:L4f566f:{c.instructions+=2;NFSU2_TR(0x4f566f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5672:{NFSU2_TR(0x4f5672);
{goto L4f5676;}
}
B4f5674:L4f5674:{c.instructions+=1;NFSU2_TR(0x4f5674);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f5676:L4f5676:{c.instructions+=5;NFSU2_TR(0x4f5676);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f5679:{NFSU2_TR(0x4f5679);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f567b:{NFSU2_TR(0x4f567b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f567e:{NFSU2_TR(0x4f567e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5681:{NFSU2_TR(0x4f5681);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f5683:L4f5683:{c.instructions+=1;NFSU2_TR(0x4f5683);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5686:L4f5686:{c.instructions+=5;NFSU2_TR(0x4f5686);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f568a:{NFSU2_TR(0x4f568a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f568b:{NFSU2_TR(0x4f568b);
w4(R+4,u32(0x89e7a0ull));
}
B4f5690:{NFSU2_TR(0x4f5690);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f5697:{NFSU2_TR(0x4f5697);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f569cull));
TAIL_STATIC(0x5ed960u,5ed);
}
B4f569c:L4f569c:{c.instructions+=3;NFSU2_TR(0x4f569c);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4f569e:{NFSU2_TR(0x4f569e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f56a0:{NFSU2_TR(0x4f56a0);
if(r1(R+518)){{goto L4f59d2;}}
}
B4f56a6:L4f56a6:{c.instructions+=4;NFSU2_TR(0x4f56a6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B4f56a9:{NFSU2_TR(0x4f56a9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f56ab:{NFSU2_TR(0x4f56ab);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f56af:{NFSU2_TR(0x4f56af);
if(r1(R+518)){{goto L4f59d2;}}
}
B4f56b5:L4f56b5:{c.instructions+=3;NFSU2_TR(0x4f56b5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f56b7:{NFSU2_TR(0x4f56b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4f56ba:{NFSU2_TR(0x4f56ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f56bfull));
TAIL_STATIC(0x5b5350u,5b5);
}
B4f56bf:L4f56bf:{c.instructions+=2;NFSU2_TR(0x4f56bf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f56c1:{NFSU2_TR(0x4f56c1);
if(r1(R+518)){{goto L4f59d2;}}
}
B4f56c7:L4f56c7:{c.instructions+=4;NFSU2_TR(0x4f56c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1f0ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f56cd:{NFSU2_TR(0x4f56cd);
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
B4f56cf:{NFSU2_TR(0x4f56cf);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f56d3:{NFSU2_TR(0x4f56d3);
if(r1(R+518)){{goto L4f59d2;}}
}
B4f56d9:L4f56d9:{c.instructions+=6;NFSU2_TR(0x4f56d9);
w4(R+8,u32(m1(0x83aa1a)));
}
B4f56e0:{NFSU2_TR(0x4f56e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f56e4:{NFSU2_TR(0x4f56e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+20),(U+0),4);
}
B4f56e6:{NFSU2_TR(0x4f56e6);
u8 U[4];
w4(U+0,u32(0xa3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f56eb:{NFSU2_TR(0x4f56eb);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f56ef:{NFSU2_TR(0x4f56ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f56f4ull));
TAIL_STATIC(0x6102f0u,610);
}
B4f56f4:L4f56f4:{c.instructions+=4;NFSU2_TR(0x4f56f4);
__builtin_memmove((R+28),(R+0),4);
}
B4f56f6:{NFSU2_TR(0x4f56f6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f56f8:{NFSU2_TR(0x4f56f8);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f56fa:{NFSU2_TR(0x4f56fa);
if(r1(R+518)){{goto L4f5712;}}
}
B4f56fc:L4f56fc:{c.instructions+=3;NFSU2_TR(0x4f56fc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f56fd:{NFSU2_TR(0x4f56fd);
u8 U[4];
w4(U+0,u32(0x798538ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5702:{NFSU2_TR(0x4f5702);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5707ull));
TAIL_STATIC(0x43db50u,43d);
}
B4f5707:L4f5707:{c.instructions+=4;NFSU2_TR(0x4f5707);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f570a:{NFSU2_TR(0x4f570a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f570b:{NFSU2_TR(0x4f570b);
__builtin_memmove((R+4),(R+28),4);
}
B4f570d:{NFSU2_TR(0x4f570d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5712ull));
TAIL_STATIC(0x61b500u,61b);
}
B4f5712:L4f5712:{c.instructions+=8;NFSU2_TR(0x4f5712);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f5716:{NFSU2_TR(0x4f5716);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5717:{NFSU2_TR(0x4f5717);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4f571b:{NFSU2_TR(0x4f571b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f571c:{NFSU2_TR(0x4f571c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f571d:{NFSU2_TR(0x4f571d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f571e:{NFSU2_TR(0x4f571e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f571f:{NFSU2_TR(0x4f571f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5724ull));
TAIL_STATIC(0x5ed9b0u,5ed);
}
B4f5724:L4f5724:{c.instructions+=4;NFSU2_TR(0x4f5724);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f5728:{NFSU2_TR(0x4f5728);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4f572b:{NFSU2_TR(0x4f572b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f572d:{NFSU2_TR(0x4f572d);
if(r1(R+518)){{goto L4f573e;}}
}
B4f572f:L4f572f:{c.instructions+=4;NFSU2_TR(0x4f572f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f5732:{NFSU2_TR(0x4f5732);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5733:{NFSU2_TR(0x4f5733);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5734:{NFSU2_TR(0x4f5734);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5739ull));
TAIL_STATIC(0x50c990u,50c);
}
B4f5739:L4f5739:{c.instructions+=2;NFSU2_TR(0x4f5739);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4f573c:{NFSU2_TR(0x4f573c);
{goto L4f5745;}
}
B4f573e:L4f573e:{c.instructions+=1;NFSU2_TR(0x4f573e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f5745:L4f5745:{c.instructions+=3;NFSU2_TR(0x4f5745);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f5749:{NFSU2_TR(0x4f5749);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f574b:{NFSU2_TR(0x4f574b);
if(r1(R+518)){{goto L4f575d;}}
}
B4f574d:L4f574d:{c.instructions+=4;NFSU2_TR(0x4f574d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f574e:{NFSU2_TR(0x4f574e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f5754:{NFSU2_TR(0x4f5754);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5755:{NFSU2_TR(0x4f5755);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f575aull));
TAIL_STATIC(0x50c990u,50c);
}
B4f575a:L4f575a:{c.instructions+=1;NFSU2_TR(0x4f575a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4f575d:L4f575d:{c.instructions+=3;NFSU2_TR(0x4f575d);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f5761:{NFSU2_TR(0x4f5761);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f5763:{NFSU2_TR(0x4f5763);
if(r1(R+518)){{goto L4f5772;}}
}
B4f5765:L4f5765:{c.instructions+=4;NFSU2_TR(0x4f5765);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f5768:{NFSU2_TR(0x4f5768);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5769:{NFSU2_TR(0x4f5769);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f576a:{NFSU2_TR(0x4f576a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f576full));
TAIL_STATIC(0x50c990u,50c);
}
B4f576f:L4f576f:{c.instructions+=1;NFSU2_TR(0x4f576f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4f5772:L4f5772:{c.instructions+=3;NFSU2_TR(0x4f5772);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f5776:{NFSU2_TR(0x4f5776);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f5778:{NFSU2_TR(0x4f5778);
if(r1(R+518)){{goto L4f578a;}}
}
B4f577a:L4f577a:{c.instructions+=4;NFSU2_TR(0x4f577a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f5780:{NFSU2_TR(0x4f5780);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5781:{NFSU2_TR(0x4f5781);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5782:{NFSU2_TR(0x4f5782);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5787ull));
TAIL_STATIC(0x50c990u,50c);
}
B4f5787:L4f5787:{c.instructions+=1;NFSU2_TR(0x4f5787);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4f578a:L4f578a:{c.instructions+=3;NFSU2_TR(0x4f578a);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f578e:{NFSU2_TR(0x4f578e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f5790:{NFSU2_TR(0x4f5790);
if(r1(R+518)){{goto L4f57a2;}}
}
B4f5792:L4f5792:{c.instructions+=4;NFSU2_TR(0x4f5792);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5793:{NFSU2_TR(0x4f5793);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f5799:{NFSU2_TR(0x4f5799);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f579a:{NFSU2_TR(0x4f579a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f579full));
TAIL_STATIC(0x50c990u,50c);
}
B4f579f:L4f579f:{c.instructions+=1;NFSU2_TR(0x4f579f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4f57a2:L4f57a2:{c.instructions+=3;NFSU2_TR(0x4f57a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f57a6:{NFSU2_TR(0x4f57a6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f57a8:{NFSU2_TR(0x4f57a8);
if(r1(R+518)){{goto L4f57ba;}}
}
B4f57aa:L4f57aa:{c.instructions+=4;NFSU2_TR(0x4f57aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f57b0:{NFSU2_TR(0x4f57b0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f57b1:{NFSU2_TR(0x4f57b1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f57b2:{NFSU2_TR(0x4f57b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f57b7ull));
TAIL_STATIC(0x50c990u,50c);
}
B4f57b7:L4f57b7:{c.instructions+=1;NFSU2_TR(0x4f57b7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4f57ba:L4f57ba:{c.instructions+=5;NFSU2_TR(0x4f57ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f57be:{NFSU2_TR(0x4f57be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f57c1:{NFSU2_TR(0x4f57c1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f57c2:{NFSU2_TR(0x4f57c2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f57c3:{NFSU2_TR(0x4f57c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f57c8ull));
TAIL_STATIC(0x50c990u,50c);
}
B4f57c8:L4f57c8:{c.instructions+=5;NFSU2_TR(0x4f57c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4f57cc:{NFSU2_TR(0x4f57cc);
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
B4f57cf:{NFSU2_TR(0x4f57cf);
u8 U[4];
w4(U+0,u32(0xa4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f57d4:{NFSU2_TR(0x4f57d4);
__builtin_memmove((R+4),(R+12),4);
}
B4f57d6:{NFSU2_TR(0x4f57d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f57dbull));
TAIL_STATIC(0x6102f0u,610);
}
B4f57db:L4f57db:{c.instructions+=3;NFSU2_TR(0x4f57db);
__builtin_memmove((R+28),(R+0),4);
}
B4f57dd:{NFSU2_TR(0x4f57dd);
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
B4f57df:{NFSU2_TR(0x4f57df);
if(r1(R+518)){{goto L4f583e;}}
}
B4f57e1:L4f57e1:{c.instructions+=3;NFSU2_TR(0x4f57e1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f57e3:{NFSU2_TR(0x4f57e3);
u8 U[4];
w4(U+0,u32(0x798534ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f57e8:{NFSU2_TR(0x4f57e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f57edull));
TAIL_STATIC(0x43db50u,43d);
}
B4f57ed:L4f57ed:{c.instructions+=4;NFSU2_TR(0x4f57ed);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f57f0:{NFSU2_TR(0x4f57f0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f57f1:{NFSU2_TR(0x4f57f1);
__builtin_memmove((R+4),(R+28),4);
}
B4f57f3:{NFSU2_TR(0x4f57f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f57f8ull));
TAIL_STATIC(0x61b500u,61b);
}
B4f57f8:L4f57f8:{c.instructions+=4;NFSU2_TR(0x4f57f8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f57fa:{NFSU2_TR(0x4f57fa);
u8 U[4];
w4(U+0,u32(0x79852cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f57ff:{NFSU2_TR(0x4f57ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5805:{NFSU2_TR(0x4f5805);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f580aull));
TAIL_STATIC(0x43db50u,43d);
}
B4f580a:L4f580a:{c.instructions+=4;NFSU2_TR(0x4f580a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f580d:{NFSU2_TR(0x4f580d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f580e:{NFSU2_TR(0x4f580e);
__builtin_memmove((R+4),(R+28),4);
}
B4f5810:{NFSU2_TR(0x4f5810);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5815ull));
TAIL_STATIC(0x61b500u,61b);
}
B4f5815:L4f5815:{c.instructions+=4;NFSU2_TR(0x4f5815);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5817:{NFSU2_TR(0x4f5817);
u8 U[4];
w4(U+0,u32(0x798524ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f581c:{NFSU2_TR(0x4f581c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5822:{NFSU2_TR(0x4f5822);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5827ull));
TAIL_STATIC(0x43db50u,43d);
}
B4f5827:L4f5827:{c.instructions+=4;NFSU2_TR(0x4f5827);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f582a:{NFSU2_TR(0x4f582a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f582b:{NFSU2_TR(0x4f582b);
__builtin_memmove((R+4),(R+28),4);
}
B4f582d:{NFSU2_TR(0x4f582d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5832ull));
TAIL_STATIC(0x61b500u,61b);
}
B4f5832:L4f5832:{c.instructions+=2;NFSU2_TR(0x4f5832);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
w4(U+4,u32(0xffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f583c:{NFSU2_TR(0x4f583c);
{goto L4f5855;}
}
B4f583e:L4f583e:{c.instructions+=4;NFSU2_TR(0x4f583e);
w4(R+0,u32(0xffull));
}
B4f5843:{NFSU2_TR(0x4f5843);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5849:{NFSU2_TR(0x4f5849);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f584f:{NFSU2_TR(0x4f584f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5855:L4f5855:{c.instructions+=4;NFSU2_TR(0x4f5855);
u8 U[4];
w4(U+0,u32(0xa5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f585a:{NFSU2_TR(0x4f585a);
__builtin_memmove((R+4),(R+12),4);
}
B4f585c:{NFSU2_TR(0x4f585c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5862:{NFSU2_TR(0x4f5862);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5867ull));
TAIL_STATIC(0x6102f0u,610);
}
B4f5867:L4f5867:{c.instructions+=3;NFSU2_TR(0x4f5867);
__builtin_memmove((R+28),(R+0),4);
}
B4f5869:{NFSU2_TR(0x4f5869);
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
B4f586b:{NFSU2_TR(0x4f586b);
if(r1(R+518)){{goto L4f58cc;}}
}
B4f586d:L4f586d:{c.instructions+=3;NFSU2_TR(0x4f586d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f586f:{NFSU2_TR(0x4f586f);
u8 U[4];
w4(U+0,u32(0x798534ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5874:{NFSU2_TR(0x4f5874);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5879ull));
TAIL_STATIC(0x43db50u,43d);
}
B4f5879:L4f5879:{c.instructions+=4;NFSU2_TR(0x4f5879);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f587c:{NFSU2_TR(0x4f587c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f587d:{NFSU2_TR(0x4f587d);
__builtin_memmove((R+4),(R+28),4);
}
B4f587f:{NFSU2_TR(0x4f587f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5884ull));
TAIL_STATIC(0x61b500u,61b);
}
B4f5884:L4f5884:{c.instructions+=5;NFSU2_TR(0x4f5884);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5886:{NFSU2_TR(0x4f5886);
u8 U[4];
w4(U+0,u32(0x79852cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f588b:{NFSU2_TR(0x4f588b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5891:{NFSU2_TR(0x4f5891);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f5897:{NFSU2_TR(0x4f5897);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f589cull));
TAIL_STATIC(0x43db50u,43d);
}
B4f589c:L4f589c:{c.instructions+=4;NFSU2_TR(0x4f589c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f589f:{NFSU2_TR(0x4f589f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f58a0:{NFSU2_TR(0x4f58a0);
__builtin_memmove((R+4),(R+28),4);
}
B4f58a2:{NFSU2_TR(0x4f58a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f58a7ull));
TAIL_STATIC(0x61b500u,61b);
}
B4f58a7:L4f58a7:{c.instructions+=4;NFSU2_TR(0x4f58a7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f58a9:{NFSU2_TR(0x4f58a9);
u8 U[4];
w4(U+0,u32(0x798524ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f58ae:{NFSU2_TR(0x4f58ae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B4f58b0:{NFSU2_TR(0x4f58b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f58b5ull));
TAIL_STATIC(0x43db50u,43d);
}
B4f58b5:L4f58b5:{c.instructions+=4;NFSU2_TR(0x4f58b5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f58b8:{NFSU2_TR(0x4f58b8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f58b9:{NFSU2_TR(0x4f58b9);
__builtin_memmove((R+4),(R+28),4);
}
B4f58bb:{NFSU2_TR(0x4f58bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f58c0ull));
TAIL_STATIC(0x61b500u,61b);
}
B4f58c0:L4f58c0:{c.instructions+=2;NFSU2_TR(0x4f58c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
w4(U+4,u32(0xffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f58ca:{NFSU2_TR(0x4f58ca);
{goto L4f58e5;}
}
B4f58cc:L4f58cc:{c.instructions+=5;NFSU2_TR(0x4f58cc);
w4(R+0,u32(0xffull));
}
B4f58d1:{NFSU2_TR(0x4f58d1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f58d7:{NFSU2_TR(0x4f58d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f58dd:{NFSU2_TR(0x4f58dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B4f58df:{NFSU2_TR(0x4f58df);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f58e5:L4f58e5:{c.instructions+=4;NFSU2_TR(0x4f58e5);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f58e9:{NFSU2_TR(0x4f58e9);
u8 U[4];
w4(U+0,u32(0xa6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f58ee:{NFSU2_TR(0x4f58ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f58f4:{NFSU2_TR(0x4f58f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f58f9ull));
TAIL_STATIC(0x6102f0u,610);
}
B4f58f9:L4f58f9:{c.instructions+=3;NFSU2_TR(0x4f58f9);
__builtin_memmove((R+20),(R+0),4);
}
B4f58fb:{NFSU2_TR(0x4f58fb);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f58fd:{NFSU2_TR(0x4f58fd);
if(r1(R+518)){{goto L4f595e;}}
}
B4f58ff:L4f58ff:{c.instructions+=3;NFSU2_TR(0x4f58ff);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5901:{NFSU2_TR(0x4f5901);
u8 U[4];
w4(U+0,u32(0x798534ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5906:{NFSU2_TR(0x4f5906);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f590bull));
TAIL_STATIC(0x43db50u,43d);
}
B4f590b:L4f590b:{c.instructions+=4;NFSU2_TR(0x4f590b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f590e:{NFSU2_TR(0x4f590e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f590f:{NFSU2_TR(0x4f590f);
__builtin_memmove((R+4),(R+20),4);
}
B4f5911:{NFSU2_TR(0x4f5911);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5916ull));
TAIL_STATIC(0x61b500u,61b);
}
B4f5916:L4f5916:{c.instructions+=5;NFSU2_TR(0x4f5916);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5918:{NFSU2_TR(0x4f5918);
u8 U[4];
w4(U+0,u32(0x79852cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f591d:{NFSU2_TR(0x4f591d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5923:{NFSU2_TR(0x4f5923);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f5929:{NFSU2_TR(0x4f5929);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f592eull));
TAIL_STATIC(0x43db50u,43d);
}
B4f592e:L4f592e:{c.instructions+=4;NFSU2_TR(0x4f592e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f5931:{NFSU2_TR(0x4f5931);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5932:{NFSU2_TR(0x4f5932);
__builtin_memmove((R+4),(R+20),4);
}
B4f5934:{NFSU2_TR(0x4f5934);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5939ull));
TAIL_STATIC(0x61b500u,61b);
}
B4f5939:L4f5939:{c.instructions+=4;NFSU2_TR(0x4f5939);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f593b:{NFSU2_TR(0x4f593b);
u8 U[4];
w4(U+0,u32(0x798524ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5940:{NFSU2_TR(0x4f5940);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B4f5942:{NFSU2_TR(0x4f5942);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5947ull));
TAIL_STATIC(0x43db50u,43d);
}
B4f5947:L4f5947:{c.instructions+=4;NFSU2_TR(0x4f5947);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f594a:{NFSU2_TR(0x4f594a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f594b:{NFSU2_TR(0x4f594b);
__builtin_memmove((R+4),(R+20),4);
}
B4f594d:{NFSU2_TR(0x4f594d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5952ull));
TAIL_STATIC(0x61b500u,61b);
}
B4f5952:L4f5952:{c.instructions+=2;NFSU2_TR(0x4f5952);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
w4(U+4,u32(0xffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f595c:{NFSU2_TR(0x4f595c);
{goto L4f5977;}
}
B4f595e:L4f595e:{c.instructions+=5;NFSU2_TR(0x4f595e);
w4(R+0,u32(0xffull));
}
B4f5963:{NFSU2_TR(0x4f5963);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f5969:{NFSU2_TR(0x4f5969);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f596f:{NFSU2_TR(0x4f596f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B4f5971:{NFSU2_TR(0x4f5971);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5977:L4f5977:{c.instructions+=5;NFSU2_TR(0x4f5977);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f597a:{NFSU2_TR(0x4f597a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f597b:{NFSU2_TR(0x4f597b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f597c:{NFSU2_TR(0x4f597c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5982:{NFSU2_TR(0x4f5982);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5987ull));
TAIL_STATIC(0x51d860u,51d);
}
B4f5987:L4f5987:{c.instructions+=5;NFSU2_TR(0x4f5987);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f598d:{NFSU2_TR(0x4f598d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4f5993:{NFSU2_TR(0x4f5993);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5994:{NFSU2_TR(0x4f5994);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5995:{NFSU2_TR(0x4f5995);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f599aull));
TAIL_STATIC(0x51d860u,51d);
}
B4f599a:L4f599a:{c.instructions+=4;NFSU2_TR(0x4f599a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f599d:{NFSU2_TR(0x4f599d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f599e:{NFSU2_TR(0x4f599e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f599f:{NFSU2_TR(0x4f599f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f59a4ull));
TAIL_STATIC(0x51d860u,51d);
}
B4f59a4:L4f59a4:{c.instructions+=4;NFSU2_TR(0x4f59a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f59aa:{NFSU2_TR(0x4f59aa);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f59ab:{NFSU2_TR(0x4f59ab);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f59ac:{NFSU2_TR(0x4f59ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f59b1ull));
TAIL_STATIC(0x51d860u,51d);
}
B4f59b1:L4f59b1:{c.instructions+=4;NFSU2_TR(0x4f59b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f59b7:{NFSU2_TR(0x4f59b7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f59b8:{NFSU2_TR(0x4f59b8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f59b9:{NFSU2_TR(0x4f59b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f59beull));
TAIL_STATIC(0x51d860u,51d);
}
B4f59be:L4f59be:{c.instructions+=4;NFSU2_TR(0x4f59be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f59c4:{NFSU2_TR(0x4f59c4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f59c5:{NFSU2_TR(0x4f59c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f59c6:{NFSU2_TR(0x4f59c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f59cbull));
TAIL_STATIC(0x51d860u,51d);
}
B4f59cb:L4f59cb:{c.instructions+=2;NFSU2_TR(0x4f59cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4f59cf:{NFSU2_TR(0x4f59cf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
}
B4f59d2:L4f59d2:{c.instructions+=6;NFSU2_TR(0x4f59d2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f59d4:{NFSU2_TR(0x4f59d4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f59d5:{NFSU2_TR(0x4f59d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f59d8:{NFSU2_TR(0x4f59d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f59db:{NFSU2_TR(0x4f59db);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f59df:{NFSU2_TR(0x4f59df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f59e4ull));
TAIL_STATIC(0x60fe10u,60f);
}
B4f59e4:L4f59e4:{c.instructions+=4;NFSU2_TR(0x4f59e4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f59e7:{NFSU2_TR(0x4f59e7);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x7ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x7ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x7ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f59ea:{NFSU2_TR(0x4f59ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4f59eb:{NFSU2_TR(0x4f59eb);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4f5a14;}}
}
B4f59ed:L4f59ed:{c.instructions+=1;NFSU2_TR(0x4f59ed);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4f5a44ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4f59f4:L4f59f4:{c.instructions+=2;NFSU2_TR(0x4f59f4);
{u32 ea_=u32(u32(7963936u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4f59fa:{NFSU2_TR(0x4f59fa);
{goto L4f5a18;}
}
B4f59fc:L4f59fc:{c.instructions+=2;NFSU2_TR(0x4f59fc);
{u32 ea_=u32(u32(7963932u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4f5a02:{NFSU2_TR(0x4f5a02);
{goto L4f5a18;}
}
B4f5a04:L4f5a04:{c.instructions+=2;NFSU2_TR(0x4f5a04);
{u32 ea_=u32(u32(7963928u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4f5a0a:{NFSU2_TR(0x4f5a0a);
{goto L4f5a18;}
}
B4f5a0c:L4f5a0c:{c.instructions+=2;NFSU2_TR(0x4f5a0c);
{u32 ea_=u32(u32(7963924u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4f5a12:{NFSU2_TR(0x4f5a12);
{goto L4f5a18;}
}
B4f5a14:L4f5a14:{c.instructions+=1;NFSU2_TR(0x4f5a14);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4f5a18:L4f5a18:{c.instructions+=13;NFSU2_TR(0x4f5a18);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4f5a1b:{NFSU2_TR(0x4f5a1b);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f5a1f:{NFSU2_TR(0x4f5a1f);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B4f5a21:{NFSU2_TR(0x4f5a21);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f5a22:{NFSU2_TR(0x4f5a22);
__builtin_memmove((R+0),(R+24),4);
}
B4f5a24:{NFSU2_TR(0x4f5a24);
{u32 ea_=u32(u32(7963920u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4f5a2a:{NFSU2_TR(0x4f5a2a);
{u32 ea_=u32(r4(R+24)+u32(196u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4f5a30:{NFSU2_TR(0x4f5a30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f5a31:{NFSU2_TR(0x4f5a31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f5a32:{NFSU2_TR(0x4f5a32);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4f5a34:{NFSU2_TR(0x4f5a34);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5a3b:{NFSU2_TR(0x4f5a3b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x34ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x34ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x34ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f5a3e:{NFSU2_TR(0x4f5a3e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f5a70:L4f5a70:{c.instructions+=23;NFSU2_TR(0x4f5a70);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5a72:{NFSU2_TR(0x4f5a72);
u8 U[4];
w4(U+0,u32(0x776918ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5a77:{NFSU2_TR(0x4f5a77);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f5a7d:{NFSU2_TR(0x4f5a7d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5a7e:{NFSU2_TR(0x4f5a7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5a85:{NFSU2_TR(0x4f5a85);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5a86:{NFSU2_TR(0x4f5a86);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f5a8a:{NFSU2_TR(0x4f5a8a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5a8b:{NFSU2_TR(0x4f5a8b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5a8c:{NFSU2_TR(0x4f5a8c);
__builtin_memmove((R+24),(R+4),4);
}
B4f5a8e:{NFSU2_TR(0x4f5a8e);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4f5a90:{NFSU2_TR(0x4f5a90);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5a91:{NFSU2_TR(0x4f5a91);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5a95:{NFSU2_TR(0x4f5a95);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+24)),r4(U+0));
}
B4f5a97:{NFSU2_TR(0x4f5a97);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5a9a:{NFSU2_TR(0x4f5a9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5a9d:{NFSU2_TR(0x4f5a9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x10000060ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f5aa4:{NFSU2_TR(0x4f5aa4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5aa7:{NFSU2_TR(0x4f5aa7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5aaa:{NFSU2_TR(0x4f5aaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5aad:{NFSU2_TR(0x4f5aad);
u8 U[4];
w4(U+0,u32(0x79865cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5ab2:{NFSU2_TR(0x4f5ab2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5ab6:{NFSU2_TR(0x4f5ab6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5abbull));
TAIL_STATIC(0x505450u,505);
}
B4f5abb:L4f5abb:{c.instructions+=4;NFSU2_TR(0x4f5abb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f5abe:{NFSU2_TR(0x4f5abe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5abf:{NFSU2_TR(0x4f5abf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5ac0:{NFSU2_TR(0x4f5ac0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5ac5ull));
TAIL_STATIC(0x537a60u,537);
}
B4f5ac5:L4f5ac5:{c.instructions+=4;NFSU2_TR(0x4f5ac5);
__builtin_memmove((R+28),(R+0),4);
}
B4f5ac7:{NFSU2_TR(0x4f5ac7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f5aca:{NFSU2_TR(0x4f5aca);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f5acc:{NFSU2_TR(0x4f5acc);
if(r1(R+518)){{goto L4f5aeb;}}
}
B4f5ace:L4f5ace:{c.instructions+=1;NFSU2_TR(0x4f5ace);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5ad3ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f5ad3:L4f5ad3:{c.instructions+=2;NFSU2_TR(0x4f5ad3);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f5ad5:{NFSU2_TR(0x4f5ad5);
if(r1(R+518)){{goto L4f5adc;}}
}
B4f5ad7:L4f5ad7:{c.instructions+=2;NFSU2_TR(0x4f5ad7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5ada:{NFSU2_TR(0x4f5ada);
{goto L4f5ade;}
}
B4f5adc:L4f5adc:{c.instructions+=1;NFSU2_TR(0x4f5adc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f5ade:L4f5ade:{c.instructions+=5;NFSU2_TR(0x4f5ade);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f5ae1:{NFSU2_TR(0x4f5ae1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f5ae3:{NFSU2_TR(0x4f5ae3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5ae6:{NFSU2_TR(0x4f5ae6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5ae9:{NFSU2_TR(0x4f5ae9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f5aeb:L4f5aeb:{c.instructions+=3;NFSU2_TR(0x4f5aeb);
u8 U[4];
w4(U+0,u32(0x798670ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5af0:{NFSU2_TR(0x4f5af0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5af3:{NFSU2_TR(0x4f5af3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5af8ull));
TAIL_STATIC(0x505450u,505);
}
B4f5af8:L4f5af8:{c.instructions+=4;NFSU2_TR(0x4f5af8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f5afb:{NFSU2_TR(0x4f5afb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5afc:{NFSU2_TR(0x4f5afc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5afd:{NFSU2_TR(0x4f5afd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5b02ull));
TAIL_STATIC(0x537a60u,537);
}
B4f5b02:L4f5b02:{c.instructions+=4;NFSU2_TR(0x4f5b02);
__builtin_memmove((R+28),(R+0),4);
}
B4f5b04:{NFSU2_TR(0x4f5b04);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f5b07:{NFSU2_TR(0x4f5b07);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f5b09:{NFSU2_TR(0x4f5b09);
if(r1(R+518)){{goto L4f5b28;}}
}
B4f5b0b:L4f5b0b:{c.instructions+=1;NFSU2_TR(0x4f5b0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5b10ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f5b10:L4f5b10:{c.instructions+=2;NFSU2_TR(0x4f5b10);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f5b12:{NFSU2_TR(0x4f5b12);
if(r1(R+518)){{goto L4f5b19;}}
}
B4f5b14:L4f5b14:{c.instructions+=2;NFSU2_TR(0x4f5b14);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5b17:{NFSU2_TR(0x4f5b17);
{goto L4f5b1b;}
}
B4f5b19:L4f5b19:{c.instructions+=1;NFSU2_TR(0x4f5b19);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f5b1b:L4f5b1b:{c.instructions+=5;NFSU2_TR(0x4f5b1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f5b1e:{NFSU2_TR(0x4f5b1e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f5b20:{NFSU2_TR(0x4f5b20);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5b23:{NFSU2_TR(0x4f5b23);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5b26:{NFSU2_TR(0x4f5b26);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f5b28:L4f5b28:{c.instructions+=3;NFSU2_TR(0x4f5b28);
u8 U[4];
w4(U+0,u32(0x798648ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5b2d:{NFSU2_TR(0x4f5b2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5b30:{NFSU2_TR(0x4f5b30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5b35ull));
TAIL_STATIC(0x505450u,505);
}
B4f5b35:L4f5b35:{c.instructions+=4;NFSU2_TR(0x4f5b35);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5b36:{NFSU2_TR(0x4f5b36);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f5b39:{NFSU2_TR(0x4f5b39);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5b3a:{NFSU2_TR(0x4f5b3a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5b3full));
TAIL_STATIC(0x537a60u,537);
}
B4f5b3f:L4f5b3f:{c.instructions+=4;NFSU2_TR(0x4f5b3f);
__builtin_memmove((R+28),(R+0),4);
}
B4f5b41:{NFSU2_TR(0x4f5b41);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f5b44:{NFSU2_TR(0x4f5b44);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f5b46:{NFSU2_TR(0x4f5b46);
if(r1(R+518)){{goto L4f5b65;}}
}
B4f5b48:L4f5b48:{c.instructions+=1;NFSU2_TR(0x4f5b48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5b4dull));
TAIL_STATIC(0x440ec0u,440);
}
B4f5b4d:L4f5b4d:{c.instructions+=2;NFSU2_TR(0x4f5b4d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f5b4f:{NFSU2_TR(0x4f5b4f);
if(r1(R+518)){{goto L4f5b56;}}
}
B4f5b51:L4f5b51:{c.instructions+=2;NFSU2_TR(0x4f5b51);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5b54:{NFSU2_TR(0x4f5b54);
{goto L4f5b58;}
}
B4f5b56:L4f5b56:{c.instructions+=1;NFSU2_TR(0x4f5b56);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f5b58:L4f5b58:{c.instructions+=5;NFSU2_TR(0x4f5b58);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f5b5b:{NFSU2_TR(0x4f5b5b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f5b5d:{NFSU2_TR(0x4f5b5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5b60:{NFSU2_TR(0x4f5b60);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5b63:{NFSU2_TR(0x4f5b63);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f5b65:L4f5b65:{c.instructions+=3;NFSU2_TR(0x4f5b65);
u8 U[4];
w4(U+0,u32(0x7986a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5b6a:{NFSU2_TR(0x4f5b6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5b6d:{NFSU2_TR(0x4f5b6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5b72ull));
TAIL_STATIC(0x505450u,505);
}
B4f5b72:L4f5b72:{c.instructions+=4;NFSU2_TR(0x4f5b72);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f5b75:{NFSU2_TR(0x4f5b75);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5b76:{NFSU2_TR(0x4f5b76);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5b77:{NFSU2_TR(0x4f5b77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5b7cull));
TAIL_STATIC(0x537a60u,537);
}
B4f5b7c:L4f5b7c:{c.instructions+=4;NFSU2_TR(0x4f5b7c);
__builtin_memmove((R+28),(R+0),4);
}
B4f5b7e:{NFSU2_TR(0x4f5b7e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f5b81:{NFSU2_TR(0x4f5b81);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f5b83:{NFSU2_TR(0x4f5b83);
if(r1(R+518)){{goto L4f5ba2;}}
}
B4f5b85:L4f5b85:{c.instructions+=1;NFSU2_TR(0x4f5b85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5b8aull));
TAIL_STATIC(0x440ec0u,440);
}
B4f5b8a:L4f5b8a:{c.instructions+=2;NFSU2_TR(0x4f5b8a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f5b8c:{NFSU2_TR(0x4f5b8c);
if(r1(R+518)){{goto L4f5b93;}}
}
B4f5b8e:L4f5b8e:{c.instructions+=2;NFSU2_TR(0x4f5b8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5b91:{NFSU2_TR(0x4f5b91);
{goto L4f5b95;}
}
B4f5b93:L4f5b93:{c.instructions+=1;NFSU2_TR(0x4f5b93);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f5b95:L4f5b95:{c.instructions+=5;NFSU2_TR(0x4f5b95);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f5b98:{NFSU2_TR(0x4f5b98);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f5b9a:{NFSU2_TR(0x4f5b9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5b9d:{NFSU2_TR(0x4f5b9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5ba0:{NFSU2_TR(0x4f5ba0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f5ba2:L4f5ba2:{c.instructions+=3;NFSU2_TR(0x4f5ba2);
u8 U[4];
w4(U+0,u32(0x798688ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5ba7:{NFSU2_TR(0x4f5ba7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5baa:{NFSU2_TR(0x4f5baa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5bafull));
TAIL_STATIC(0x505450u,505);
}
B4f5baf:L4f5baf:{c.instructions+=4;NFSU2_TR(0x4f5baf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f5bb2:{NFSU2_TR(0x4f5bb2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5bb3:{NFSU2_TR(0x4f5bb3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5bb4:{NFSU2_TR(0x4f5bb4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5bb9ull));
TAIL_STATIC(0x537a60u,537);
}
B4f5bb9:L4f5bb9:{c.instructions+=4;NFSU2_TR(0x4f5bb9);
__builtin_memmove((R+28),(R+0),4);
}
B4f5bbb:{NFSU2_TR(0x4f5bbb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f5bbe:{NFSU2_TR(0x4f5bbe);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f5bc0:{NFSU2_TR(0x4f5bc0);
if(r1(R+518)){{goto L4f5bdf;}}
}
B4f5bc2:L4f5bc2:{c.instructions+=1;NFSU2_TR(0x4f5bc2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5bc7ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f5bc7:L4f5bc7:{c.instructions+=2;NFSU2_TR(0x4f5bc7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f5bc9:{NFSU2_TR(0x4f5bc9);
if(r1(R+518)){{goto L4f5bd0;}}
}
B4f5bcb:L4f5bcb:{c.instructions+=2;NFSU2_TR(0x4f5bcb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5bce:{NFSU2_TR(0x4f5bce);
{goto L4f5bd2;}
}
B4f5bd0:L4f5bd0:{c.instructions+=1;NFSU2_TR(0x4f5bd0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f5bd2:L4f5bd2:{c.instructions+=5;NFSU2_TR(0x4f5bd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f5bd5:{NFSU2_TR(0x4f5bd5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f5bd7:{NFSU2_TR(0x4f5bd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5bda:{NFSU2_TR(0x4f5bda);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5bdd:{NFSU2_TR(0x4f5bdd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f5bdf:L4f5bdf:{c.instructions+=3;NFSU2_TR(0x4f5bdf);
u8 U[4];
w4(U+0,u32(0x79857cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5be4:{NFSU2_TR(0x4f5be4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5be7:{NFSU2_TR(0x4f5be7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5becull));
TAIL_STATIC(0x505450u,505);
}
B4f5bec:L4f5bec:{c.instructions+=4;NFSU2_TR(0x4f5bec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5bed:{NFSU2_TR(0x4f5bed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f5bf0:{NFSU2_TR(0x4f5bf0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5bf1:{NFSU2_TR(0x4f5bf1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5bf6ull));
TAIL_STATIC(0x537a60u,537);
}
B4f5bf6:L4f5bf6:{c.instructions+=4;NFSU2_TR(0x4f5bf6);
__builtin_memmove((R+28),(R+0),4);
}
B4f5bf8:{NFSU2_TR(0x4f5bf8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f5bfb:{NFSU2_TR(0x4f5bfb);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f5bfd:{NFSU2_TR(0x4f5bfd);
if(r1(R+518)){{goto L4f5c1c;}}
}
B4f5bff:L4f5bff:{c.instructions+=1;NFSU2_TR(0x4f5bff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5c04ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f5c04:L4f5c04:{c.instructions+=2;NFSU2_TR(0x4f5c04);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f5c06:{NFSU2_TR(0x4f5c06);
if(r1(R+518)){{goto L4f5c0d;}}
}
B4f5c08:L4f5c08:{c.instructions+=2;NFSU2_TR(0x4f5c08);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5c0b:{NFSU2_TR(0x4f5c0b);
{goto L4f5c0f;}
}
B4f5c0d:L4f5c0d:{c.instructions+=1;NFSU2_TR(0x4f5c0d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f5c0f:L4f5c0f:{c.instructions+=5;NFSU2_TR(0x4f5c0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f5c12:{NFSU2_TR(0x4f5c12);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f5c14:{NFSU2_TR(0x4f5c14);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5c17:{NFSU2_TR(0x4f5c17);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5c1a:{NFSU2_TR(0x4f5c1a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f5c1c:L4f5c1c:{c.instructions+=9;NFSU2_TR(0x4f5c1c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f5c20:{NFSU2_TR(0x4f5c20);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5c23:{NFSU2_TR(0x4f5c23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f5c24:{NFSU2_TR(0x4f5c24);
__builtin_memmove((R+0),(R+24),4);
}
B4f5c26:{NFSU2_TR(0x4f5c26);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f5c27:{NFSU2_TR(0x4f5c27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f5c28:{NFSU2_TR(0x4f5c28);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5c2f:{NFSU2_TR(0x4f5c2f);
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
B4f5c32:{NFSU2_TR(0x4f5c32);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f5c40:L4f5c40:{c.instructions+=26;NFSU2_TR(0x4f5c40);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5c42:{NFSU2_TR(0x4f5c42);
u8 U[4];
w4(U+0,u32(0x7768f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5c47:{NFSU2_TR(0x4f5c47);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f5c4d:{NFSU2_TR(0x4f5c4d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5c4e:{NFSU2_TR(0x4f5c4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5c55:{NFSU2_TR(0x4f5c55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B4f5c58:{NFSU2_TR(0x4f5c58);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f5c5c:{NFSU2_TR(0x4f5c5c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5c5d:{NFSU2_TR(0x4f5c5d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5c5e:{NFSU2_TR(0x4f5c5e);
__builtin_memmove((R+24),(R+4),4);
}
B4f5c60:{NFSU2_TR(0x4f5c60);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4f5c62:{NFSU2_TR(0x4f5c62);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5c63:{NFSU2_TR(0x4f5c63);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5c67:{NFSU2_TR(0x4f5c67);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+24)),r4(U+0));
}
B4f5c69:{NFSU2_TR(0x4f5c69);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5c6c:{NFSU2_TR(0x4f5c6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5c6f:{NFSU2_TR(0x4f5c6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x508ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f5c76:{NFSU2_TR(0x4f5c76);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5c79:{NFSU2_TR(0x4f5c79);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5c7c:{NFSU2_TR(0x4f5c7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5c7f:{NFSU2_TR(0x4f5c7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5c82:{NFSU2_TR(0x4f5c82);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5c85:{NFSU2_TR(0x4f5c85);
u8 U[4];
w4(U+0,u32(0x795440ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5c8a:{NFSU2_TR(0x4f5c8a);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5c8e:{NFSU2_TR(0x4f5c8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5c91:{NFSU2_TR(0x4f5c91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5c96ull));
TAIL_STATIC(0x505450u,505);
}
B4f5c96:L4f5c96:{c.instructions+=4;NFSU2_TR(0x4f5c96);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f5c99:{NFSU2_TR(0x4f5c99);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5c9a:{NFSU2_TR(0x4f5c9a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5c9b:{NFSU2_TR(0x4f5c9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5ca0ull));
TAIL_STATIC(0x537a10u,537);
}
B4f5ca0:L4f5ca0:{c.instructions+=4;NFSU2_TR(0x4f5ca0);
__builtin_memmove((R+28),(R+0),4);
}
B4f5ca2:{NFSU2_TR(0x4f5ca2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f5ca5:{NFSU2_TR(0x4f5ca5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f5ca7:{NFSU2_TR(0x4f5ca7);
if(r1(R+518)){{goto L4f5cc6;}}
}
B4f5ca9:L4f5ca9:{c.instructions+=1;NFSU2_TR(0x4f5ca9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5caeull));
TAIL_STATIC(0x440ec0u,440);
}
B4f5cae:L4f5cae:{c.instructions+=2;NFSU2_TR(0x4f5cae);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f5cb0:{NFSU2_TR(0x4f5cb0);
if(r1(R+518)){{goto L4f5cb7;}}
}
B4f5cb2:L4f5cb2:{c.instructions+=2;NFSU2_TR(0x4f5cb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5cb5:{NFSU2_TR(0x4f5cb5);
{goto L4f5cb9;}
}
B4f5cb7:L4f5cb7:{c.instructions+=1;NFSU2_TR(0x4f5cb7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f5cb9:L4f5cb9:{c.instructions+=5;NFSU2_TR(0x4f5cb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f5cbc:{NFSU2_TR(0x4f5cbc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f5cbe:{NFSU2_TR(0x4f5cbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5cc1:{NFSU2_TR(0x4f5cc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5cc4:{NFSU2_TR(0x4f5cc4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f5cc6:L4f5cc6:{c.instructions+=3;NFSU2_TR(0x4f5cc6);
u8 U[4];
w4(U+0,u32(0x795434ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5ccb:{NFSU2_TR(0x4f5ccb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5cce:{NFSU2_TR(0x4f5cce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5cd3ull));
TAIL_STATIC(0x505450u,505);
}
B4f5cd3:L4f5cd3:{c.instructions+=4;NFSU2_TR(0x4f5cd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f5cd6:{NFSU2_TR(0x4f5cd6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5cd7:{NFSU2_TR(0x4f5cd7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5cd8:{NFSU2_TR(0x4f5cd8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5cddull));
TAIL_STATIC(0x537a10u,537);
}
B4f5cdd:L4f5cdd:{c.instructions+=4;NFSU2_TR(0x4f5cdd);
__builtin_memmove((R+28),(R+0),4);
}
B4f5cdf:{NFSU2_TR(0x4f5cdf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f5ce2:{NFSU2_TR(0x4f5ce2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f5ce4:{NFSU2_TR(0x4f5ce4);
if(r1(R+518)){{goto L4f5d03;}}
}
B4f5ce6:L4f5ce6:{c.instructions+=1;NFSU2_TR(0x4f5ce6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5cebull));
TAIL_STATIC(0x440ec0u,440);
}
B4f5ceb:L4f5ceb:{c.instructions+=2;NFSU2_TR(0x4f5ceb);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f5ced:{NFSU2_TR(0x4f5ced);
if(r1(R+518)){{goto L4f5cf4;}}
}
B4f5cef:L4f5cef:{c.instructions+=2;NFSU2_TR(0x4f5cef);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5cf2:{NFSU2_TR(0x4f5cf2);
{goto L4f5cf6;}
}
B4f5cf4:L4f5cf4:{c.instructions+=1;NFSU2_TR(0x4f5cf4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f5cf6:L4f5cf6:{c.instructions+=5;NFSU2_TR(0x4f5cf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f5cf9:{NFSU2_TR(0x4f5cf9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f5cfb:{NFSU2_TR(0x4f5cfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5cfe:{NFSU2_TR(0x4f5cfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5d01:{NFSU2_TR(0x4f5d01);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f5d03:L4f5d03:{c.instructions+=3;NFSU2_TR(0x4f5d03);
u8 U[4];
w4(U+0,u32(0x798740ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5d08:{NFSU2_TR(0x4f5d08);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5d0b:{NFSU2_TR(0x4f5d0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5d10ull));
TAIL_STATIC(0x505450u,505);
}
B4f5d10:L4f5d10:{c.instructions+=4;NFSU2_TR(0x4f5d10);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5d11:{NFSU2_TR(0x4f5d11);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f5d14:{NFSU2_TR(0x4f5d14);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5d15:{NFSU2_TR(0x4f5d15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5d1aull));
TAIL_STATIC(0x537a10u,537);
}
B4f5d1a:L4f5d1a:{c.instructions+=4;NFSU2_TR(0x4f5d1a);
__builtin_memmove((R+28),(R+0),4);
}
B4f5d1c:{NFSU2_TR(0x4f5d1c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f5d1f:{NFSU2_TR(0x4f5d1f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f5d21:{NFSU2_TR(0x4f5d21);
if(r1(R+518)){{goto L4f5d40;}}
}
B4f5d23:L4f5d23:{c.instructions+=1;NFSU2_TR(0x4f5d23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5d28ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f5d28:L4f5d28:{c.instructions+=2;NFSU2_TR(0x4f5d28);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f5d2a:{NFSU2_TR(0x4f5d2a);
if(r1(R+518)){{goto L4f5d31;}}
}
B4f5d2c:L4f5d2c:{c.instructions+=2;NFSU2_TR(0x4f5d2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5d2f:{NFSU2_TR(0x4f5d2f);
{goto L4f5d33;}
}
B4f5d31:L4f5d31:{c.instructions+=1;NFSU2_TR(0x4f5d31);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f5d33:L4f5d33:{c.instructions+=5;NFSU2_TR(0x4f5d33);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f5d36:{NFSU2_TR(0x4f5d36);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f5d38:{NFSU2_TR(0x4f5d38);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5d3b:{NFSU2_TR(0x4f5d3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5d3e:{NFSU2_TR(0x4f5d3e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f5d40:L4f5d40:{c.instructions+=3;NFSU2_TR(0x4f5d40);
u8 U[4];
w4(U+0,u32(0x7909b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5d45:{NFSU2_TR(0x4f5d45);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5d48:{NFSU2_TR(0x4f5d48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5d4dull));
TAIL_STATIC(0x505450u,505);
}
B4f5d4d:L4f5d4d:{c.instructions+=4;NFSU2_TR(0x4f5d4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f5d50:{NFSU2_TR(0x4f5d50);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5d51:{NFSU2_TR(0x4f5d51);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5d52:{NFSU2_TR(0x4f5d52);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5d57ull));
TAIL_STATIC(0x537a10u,537);
}
B4f5d57:L4f5d57:{c.instructions+=4;NFSU2_TR(0x4f5d57);
__builtin_memmove((R+28),(R+0),4);
}
B4f5d59:{NFSU2_TR(0x4f5d59);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f5d5c:{NFSU2_TR(0x4f5d5c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f5d5e:{NFSU2_TR(0x4f5d5e);
if(r1(R+518)){{goto L4f5d7d;}}
}
B4f5d60:L4f5d60:{c.instructions+=1;NFSU2_TR(0x4f5d60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5d65ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f5d65:L4f5d65:{c.instructions+=2;NFSU2_TR(0x4f5d65);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f5d67:{NFSU2_TR(0x4f5d67);
if(r1(R+518)){{goto L4f5d6e;}}
}
B4f5d69:L4f5d69:{c.instructions+=2;NFSU2_TR(0x4f5d69);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5d6c:{NFSU2_TR(0x4f5d6c);
{goto L4f5d70;}
}
B4f5d6e:L4f5d6e:{c.instructions+=1;NFSU2_TR(0x4f5d6e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f5d70:L4f5d70:{c.instructions+=5;NFSU2_TR(0x4f5d70);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f5d73:{NFSU2_TR(0x4f5d73);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f5d75:{NFSU2_TR(0x4f5d75);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5d78:{NFSU2_TR(0x4f5d78);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5d7b:{NFSU2_TR(0x4f5d7b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f5d7d:L4f5d7d:{c.instructions+=3;NFSU2_TR(0x4f5d7d);
u8 U[4];
w4(U+0,u32(0x798738ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5d82:{NFSU2_TR(0x4f5d82);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5d85:{NFSU2_TR(0x4f5d85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5d8aull));
TAIL_STATIC(0x505450u,505);
}
B4f5d8a:L4f5d8a:{c.instructions+=4;NFSU2_TR(0x4f5d8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f5d8d:{NFSU2_TR(0x4f5d8d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5d8e:{NFSU2_TR(0x4f5d8e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5d8f:{NFSU2_TR(0x4f5d8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5d94ull));
TAIL_STATIC(0x537a10u,537);
}
B4f5d94:L4f5d94:{c.instructions+=4;NFSU2_TR(0x4f5d94);
__builtin_memmove((R+28),(R+0),4);
}
B4f5d96:{NFSU2_TR(0x4f5d96);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f5d99:{NFSU2_TR(0x4f5d99);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f5d9b:{NFSU2_TR(0x4f5d9b);
if(r1(R+518)){{goto L4f5dba;}}
}
B4f5d9d:L4f5d9d:{c.instructions+=1;NFSU2_TR(0x4f5d9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5da2ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f5da2:L4f5da2:{c.instructions+=2;NFSU2_TR(0x4f5da2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f5da4:{NFSU2_TR(0x4f5da4);
if(r1(R+518)){{goto L4f5dab;}}
}
B4f5da6:L4f5da6:{c.instructions+=2;NFSU2_TR(0x4f5da6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5da9:{NFSU2_TR(0x4f5da9);
{goto L4f5dad;}
}
B4f5dab:L4f5dab:{c.instructions+=1;NFSU2_TR(0x4f5dab);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f5dad:L4f5dad:{c.instructions+=5;NFSU2_TR(0x4f5dad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f5db0:{NFSU2_TR(0x4f5db0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f5db2:{NFSU2_TR(0x4f5db2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5db5:{NFSU2_TR(0x4f5db5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5db8:{NFSU2_TR(0x4f5db8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f5dba:L4f5dba:{c.instructions+=3;NFSU2_TR(0x4f5dba);
u8 U[4];
w4(U+0,u32(0x798728ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5dbf:{NFSU2_TR(0x4f5dbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5dc2:{NFSU2_TR(0x4f5dc2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5dc7ull));
TAIL_STATIC(0x505450u,505);
}
B4f5dc7:L4f5dc7:{c.instructions+=4;NFSU2_TR(0x4f5dc7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5dc8:{NFSU2_TR(0x4f5dc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f5dcb:{NFSU2_TR(0x4f5dcb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5dcc:{NFSU2_TR(0x4f5dcc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5dd1ull));
TAIL_STATIC(0x537a10u,537);
}
B4f5dd1:L4f5dd1:{c.instructions+=4;NFSU2_TR(0x4f5dd1);
__builtin_memmove((R+28),(R+0),4);
}
B4f5dd3:{NFSU2_TR(0x4f5dd3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f5dd6:{NFSU2_TR(0x4f5dd6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f5dd8:{NFSU2_TR(0x4f5dd8);
if(r1(R+518)){{goto L4f5df7;}}
}
B4f5dda:L4f5dda:{c.instructions+=1;NFSU2_TR(0x4f5dda);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5ddfull));
TAIL_STATIC(0x440ec0u,440);
}
B4f5ddf:L4f5ddf:{c.instructions+=2;NFSU2_TR(0x4f5ddf);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f5de1:{NFSU2_TR(0x4f5de1);
if(r1(R+518)){{goto L4f5de8;}}
}
B4f5de3:L4f5de3:{c.instructions+=2;NFSU2_TR(0x4f5de3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5de6:{NFSU2_TR(0x4f5de6);
{goto L4f5dea;}
}
B4f5de8:L4f5de8:{c.instructions+=1;NFSU2_TR(0x4f5de8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f5dea:L4f5dea:{c.instructions+=5;NFSU2_TR(0x4f5dea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f5ded:{NFSU2_TR(0x4f5ded);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f5def:{NFSU2_TR(0x4f5def);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5df2:{NFSU2_TR(0x4f5df2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5df5:{NFSU2_TR(0x4f5df5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f5df7:L4f5df7:{c.instructions+=3;NFSU2_TR(0x4f5df7);
u8 U[4];
w4(U+0,u32(0x798718ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5dfc:{NFSU2_TR(0x4f5dfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5dff:{NFSU2_TR(0x4f5dff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5e04ull));
TAIL_STATIC(0x505450u,505);
}
B4f5e04:L4f5e04:{c.instructions+=4;NFSU2_TR(0x4f5e04);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f5e07:{NFSU2_TR(0x4f5e07);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5e08:{NFSU2_TR(0x4f5e08);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5e09:{NFSU2_TR(0x4f5e09);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5e0eull));
TAIL_STATIC(0x537a10u,537);
}
B4f5e0e:L4f5e0e:{c.instructions+=4;NFSU2_TR(0x4f5e0e);
__builtin_memmove((R+28),(R+0),4);
}
B4f5e10:{NFSU2_TR(0x4f5e10);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f5e13:{NFSU2_TR(0x4f5e13);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f5e15:{NFSU2_TR(0x4f5e15);
if(r1(R+518)){{goto L4f5e34;}}
}
B4f5e17:L4f5e17:{c.instructions+=1;NFSU2_TR(0x4f5e17);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5e1cull));
TAIL_STATIC(0x440ec0u,440);
}
B4f5e1c:L4f5e1c:{c.instructions+=2;NFSU2_TR(0x4f5e1c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f5e1e:{NFSU2_TR(0x4f5e1e);
if(r1(R+518)){{goto L4f5e25;}}
}
B4f5e20:L4f5e20:{c.instructions+=2;NFSU2_TR(0x4f5e20);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5e23:{NFSU2_TR(0x4f5e23);
{goto L4f5e27;}
}
B4f5e25:L4f5e25:{c.instructions+=1;NFSU2_TR(0x4f5e25);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f5e27:L4f5e27:{c.instructions+=5;NFSU2_TR(0x4f5e27);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f5e2a:{NFSU2_TR(0x4f5e2a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f5e2c:{NFSU2_TR(0x4f5e2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5e2f:{NFSU2_TR(0x4f5e2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5e32:{NFSU2_TR(0x4f5e32);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f5e34:L4f5e34:{c.instructions+=4;NFSU2_TR(0x4f5e34);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f5e37:{NFSU2_TR(0x4f5e37);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5e38:{NFSU2_TR(0x4f5e38);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5e3b:{NFSU2_TR(0x4f5e3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5e40ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4f5e40:L4f5e40:{c.instructions+=3;NFSU2_TR(0x4f5e40);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f5e43:{NFSU2_TR(0x4f5e43);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5e44:{NFSU2_TR(0x4f5e44);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5e49ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4f5e49:L4f5e49:{c.instructions+=2;NFSU2_TR(0x4f5e49);
u8 U[4];
w4(U+0,u32(0x7909c4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5e4e:{NFSU2_TR(0x4f5e4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5e53ull));
TAIL_STATIC(0x505450u,505);
}
B4f5e53:L4f5e53:{c.instructions+=4;NFSU2_TR(0x4f5e53);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f5e56:{NFSU2_TR(0x4f5e56);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5e57:{NFSU2_TR(0x4f5e57);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5e58:{NFSU2_TR(0x4f5e58);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5e5dull));
TAIL_STATIC(0x5379c0u,537);
}
B4f5e5d:L4f5e5d:{c.instructions+=4;NFSU2_TR(0x4f5e5d);
__builtin_memmove((R+28),(R+0),4);
}
B4f5e5f:{NFSU2_TR(0x4f5e5f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4f5e62:{NFSU2_TR(0x4f5e62);
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
B4f5e64:{NFSU2_TR(0x4f5e64);
if(r1(R+518)){{goto L4f5e83;}}
}
B4f5e66:L4f5e66:{c.instructions+=1;NFSU2_TR(0x4f5e66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5e6bull));
TAIL_STATIC(0x440ec0u,440);
}
B4f5e6b:L4f5e6b:{c.instructions+=2;NFSU2_TR(0x4f5e6b);
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
B4f5e6d:{NFSU2_TR(0x4f5e6d);
if(r1(R+518)){{goto L4f5e74;}}
}
B4f5e6f:L4f5e6f:{c.instructions+=2;NFSU2_TR(0x4f5e6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5e72:{NFSU2_TR(0x4f5e72);
{goto L4f5e76;}
}
B4f5e74:L4f5e74:{c.instructions+=1;NFSU2_TR(0x4f5e74);
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
B4f5e76:L4f5e76:{c.instructions+=5;NFSU2_TR(0x4f5e76);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f5e79:{NFSU2_TR(0x4f5e79);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f5e7b:{NFSU2_TR(0x4f5e7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5e7e:{NFSU2_TR(0x4f5e7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5e81:{NFSU2_TR(0x4f5e81);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f5e83:L4f5e83:{c.instructions+=2;NFSU2_TR(0x4f5e83);
w4(R+4,u32(0x83aab4ull));
}
B4f5e88:{NFSU2_TR(0x4f5e88);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5e8dull));
TAIL_STATIC(0x502780u,502);
}
B4f5e8d:L4f5e8d:{c.instructions+=2;NFSU2_TR(0x4f5e8d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f5e8f:{NFSU2_TR(0x4f5e8f);
if(r1(R+518)){{goto L4f5f46;}}
}
B4f5e95:L4f5e95:{c.instructions+=2;NFSU2_TR(0x4f5e95);
u8 U[4];
w4(U+0,u32(0x798704ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5e9a:{NFSU2_TR(0x4f5e9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5e9full));
TAIL_STATIC(0x505450u,505);
}
B4f5e9f:L4f5e9f:{c.instructions+=4;NFSU2_TR(0x4f5e9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f5ea2:{NFSU2_TR(0x4f5ea2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5ea3:{NFSU2_TR(0x4f5ea3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5ea4:{NFSU2_TR(0x4f5ea4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5ea9ull));
TAIL_STATIC(0x537a60u,537);
}
B4f5ea9:L4f5ea9:{c.instructions+=4;NFSU2_TR(0x4f5ea9);
__builtin_memmove((R+28),(R+0),4);
}
B4f5eab:{NFSU2_TR(0x4f5eab);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f5eae:{NFSU2_TR(0x4f5eae);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f5eb0:{NFSU2_TR(0x4f5eb0);
if(r1(R+518)){{goto L4f5ecf;}}
}
B4f5eb2:L4f5eb2:{c.instructions+=1;NFSU2_TR(0x4f5eb2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5eb7ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f5eb7:L4f5eb7:{c.instructions+=2;NFSU2_TR(0x4f5eb7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f5eb9:{NFSU2_TR(0x4f5eb9);
if(r1(R+518)){{goto L4f5ec0;}}
}
B4f5ebb:L4f5ebb:{c.instructions+=2;NFSU2_TR(0x4f5ebb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5ebe:{NFSU2_TR(0x4f5ebe);
{goto L4f5ec2;}
}
B4f5ec0:L4f5ec0:{c.instructions+=1;NFSU2_TR(0x4f5ec0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f5ec2:L4f5ec2:{c.instructions+=5;NFSU2_TR(0x4f5ec2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f5ec5:{NFSU2_TR(0x4f5ec5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f5ec7:{NFSU2_TR(0x4f5ec7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5eca:{NFSU2_TR(0x4f5eca);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5ecd:{NFSU2_TR(0x4f5ecd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f5ecf:L4f5ecf:{c.instructions+=2;NFSU2_TR(0x4f5ecf);
u8 U[4];
w4(U+0,u32(0x7986f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5ed4:{NFSU2_TR(0x4f5ed4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5ed9ull));
TAIL_STATIC(0x505450u,505);
}
B4f5ed9:L4f5ed9:{c.instructions+=4;NFSU2_TR(0x4f5ed9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5eda:{NFSU2_TR(0x4f5eda);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f5edd:{NFSU2_TR(0x4f5edd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5ede:{NFSU2_TR(0x4f5ede);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5ee3ull));
TAIL_STATIC(0x5379c0u,537);
}
B4f5ee3:L4f5ee3:{c.instructions+=4;NFSU2_TR(0x4f5ee3);
__builtin_memmove((R+28),(R+0),4);
}
B4f5ee5:{NFSU2_TR(0x4f5ee5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f5ee8:{NFSU2_TR(0x4f5ee8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f5eea:{NFSU2_TR(0x4f5eea);
if(r1(R+518)){{goto L4f5f09;}}
}
B4f5eec:L4f5eec:{c.instructions+=1;NFSU2_TR(0x4f5eec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5ef1ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f5ef1:L4f5ef1:{c.instructions+=2;NFSU2_TR(0x4f5ef1);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f5ef3:{NFSU2_TR(0x4f5ef3);
if(r1(R+518)){{goto L4f5efa;}}
}
B4f5ef5:L4f5ef5:{c.instructions+=2;NFSU2_TR(0x4f5ef5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5ef8:{NFSU2_TR(0x4f5ef8);
{goto L4f5efc;}
}
B4f5efa:L4f5efa:{c.instructions+=1;NFSU2_TR(0x4f5efa);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f5efc:L4f5efc:{c.instructions+=5;NFSU2_TR(0x4f5efc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f5eff:{NFSU2_TR(0x4f5eff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f5f01:{NFSU2_TR(0x4f5f01);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5f04:{NFSU2_TR(0x4f5f04);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5f07:{NFSU2_TR(0x4f5f07);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f5f09:L4f5f09:{c.instructions+=2;NFSU2_TR(0x4f5f09);
u8 U[4];
w4(U+0,u32(0x7986e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5f0e:{NFSU2_TR(0x4f5f0e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5f13ull));
TAIL_STATIC(0x505450u,505);
}
B4f5f13:L4f5f13:{c.instructions+=4;NFSU2_TR(0x4f5f13);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f5f16:{NFSU2_TR(0x4f5f16);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5f17:{NFSU2_TR(0x4f5f17);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5f18:{NFSU2_TR(0x4f5f18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5f1dull));
TAIL_STATIC(0x537a10u,537);
}
B4f5f1d:L4f5f1d:{c.instructions+=4;NFSU2_TR(0x4f5f1d);
__builtin_memmove((R+28),(R+0),4);
}
B4f5f1f:{NFSU2_TR(0x4f5f1f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f5f22:{NFSU2_TR(0x4f5f22);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f5f24:{NFSU2_TR(0x4f5f24);
if(r1(R+518)){{goto L4f5f43;}}
}
B4f5f26:L4f5f26:{c.instructions+=1;NFSU2_TR(0x4f5f26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5f2bull));
TAIL_STATIC(0x440ec0u,440);
}
B4f5f2b:L4f5f2b:{c.instructions+=2;NFSU2_TR(0x4f5f2b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f5f2d:{NFSU2_TR(0x4f5f2d);
if(r1(R+518)){{goto L4f5f34;}}
}
B4f5f2f:L4f5f2f:{c.instructions+=2;NFSU2_TR(0x4f5f2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5f32:{NFSU2_TR(0x4f5f32);
{goto L4f5f36;}
}
B4f5f34:L4f5f34:{c.instructions+=1;NFSU2_TR(0x4f5f34);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f5f36:L4f5f36:{c.instructions+=5;NFSU2_TR(0x4f5f36);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f5f39:{NFSU2_TR(0x4f5f39);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f5f3b:{NFSU2_TR(0x4f5f3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5f3e:{NFSU2_TR(0x4f5f3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5f41:{NFSU2_TR(0x4f5f41);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f5f43:L4f5f43:{c.instructions+=1;NFSU2_TR(0x4f5f43);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5f46:L4f5f46:{c.instructions+=4;NFSU2_TR(0x4f5f46);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f5f48:{NFSU2_TR(0x4f5f48);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f5f4b:{NFSU2_TR(0x4f5f4b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5f4c:{NFSU2_TR(0x4f5f4c);
__builtin_memmove((R+16),(R+16),4);
}
B4f5f50:L4f5f50:{c.instructions+=7;NFSU2_TR(0x4f5f50);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4f5f53:{NFSU2_TR(0x4f5f53);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5f54:{NFSU2_TR(0x4f5f54);
u8 U[4];
w4(U+0,u32(0x7986c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5f59:{NFSU2_TR(0x4f5f59);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4f5f5d:{NFSU2_TR(0x4f5f5d);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5f5f:{NFSU2_TR(0x4f5f5f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5f60:{NFSU2_TR(0x4f5f60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5f65ull));
TAIL_STATIC(0x50c960u,50c);
}
B4f5f65:L4f5f65:{c.instructions+=3;NFSU2_TR(0x4f5f65);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4f5f69:{NFSU2_TR(0x4f5f69);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5f6a:{NFSU2_TR(0x4f5f6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5f6full));
TAIL_STATIC(0x505450u,505);
}
B4f5f6f:L4f5f6f:{c.instructions+=4;NFSU2_TR(0x4f5f6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f5f72:{NFSU2_TR(0x4f5f72);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5f73:{NFSU2_TR(0x4f5f73);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5f74:{NFSU2_TR(0x4f5f74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5f79ull));
TAIL_STATIC(0x537a60u,537);
}
B4f5f79:L4f5f79:{c.instructions+=4;NFSU2_TR(0x4f5f79);
__builtin_memmove((R+28),(R+0),4);
}
B4f5f7b:{NFSU2_TR(0x4f5f7b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B4f5f7e:{NFSU2_TR(0x4f5f7e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f5f80:{NFSU2_TR(0x4f5f80);
if(r1(R+518)){{goto L4f5f9f;}}
}
B4f5f82:L4f5f82:{c.instructions+=1;NFSU2_TR(0x4f5f82);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5f87ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f5f87:L4f5f87:{c.instructions+=2;NFSU2_TR(0x4f5f87);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f5f89:{NFSU2_TR(0x4f5f89);
if(r1(R+518)){{goto L4f5f90;}}
}
B4f5f8b:L4f5f8b:{c.instructions+=2;NFSU2_TR(0x4f5f8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5f8e:{NFSU2_TR(0x4f5f8e);
{goto L4f5f92;}
}
B4f5f90:L4f5f90:{c.instructions+=1;NFSU2_TR(0x4f5f90);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f5f92:L4f5f92:{c.instructions+=5;NFSU2_TR(0x4f5f92);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f5f95:{NFSU2_TR(0x4f5f95);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f5f97:{NFSU2_TR(0x4f5f97);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5f9a:{NFSU2_TR(0x4f5f9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5f9d:{NFSU2_TR(0x4f5f9d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f5f9f:L4f5f9f:{c.instructions+=5;NFSU2_TR(0x4f5f9f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+12)),r4(U+0));
}
B4f5fa1:{NFSU2_TR(0x4f5fa1);
__builtin_memmove((R+0),(R+20),4);
}
B4f5fa3:{NFSU2_TR(0x4f5fa3);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B4f5fa6:{NFSU2_TR(0x4f5fa6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4f5fa9:{NFSU2_TR(0x4f5fa9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4f5f50u);}goto L4f5f50;}}
}
B4f5fab:L4f5fab:{c.instructions+=5;NFSU2_TR(0x4f5fab);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B4f5fb0:{NFSU2_TR(0x4f5fb0);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4f5fb2:{NFSU2_TR(0x4f5fb2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4f5fb4:{NFSU2_TR(0x4f5fb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4f5fb5:{NFSU2_TR(0x4f5fb5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f5ff9;}}
}
B4f5fb7:L4f5fb7:{c.instructions+=2;NFSU2_TR(0x4f5fb7);
u8 U[8];
__builtin_memmove((U+0),gp(0x890104),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f5fbd:{NFSU2_TR(0x4f5fbd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f5ff9;}}
}
B4f5fbf:L4f5fbf:{c.instructions+=2;NFSU2_TR(0x4f5fbf);
u8 U[4];
w4(U+0,u32(0x7986b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5fc4:{NFSU2_TR(0x4f5fc4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5fc9ull));
TAIL_STATIC(0x505450u,505);
}
B4f5fc9:L4f5fc9:{c.instructions+=4;NFSU2_TR(0x4f5fc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f5fcc:{NFSU2_TR(0x4f5fcc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5fcd:{NFSU2_TR(0x4f5fcd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f5fce:{NFSU2_TR(0x4f5fce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5fd3ull));
TAIL_STATIC(0x5379c0u,537);
}
B4f5fd3:L4f5fd3:{c.instructions+=4;NFSU2_TR(0x4f5fd3);
__builtin_memmove((R+28),(R+0),4);
}
B4f5fd5:{NFSU2_TR(0x4f5fd5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f5fd8:{NFSU2_TR(0x4f5fd8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f5fda:{NFSU2_TR(0x4f5fda);
if(r1(R+518)){{goto L4f5ff9;}}
}
B4f5fdc:L4f5fdc:{c.instructions+=1;NFSU2_TR(0x4f5fdc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f5fe1ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f5fe1:L4f5fe1:{c.instructions+=2;NFSU2_TR(0x4f5fe1);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f5fe3:{NFSU2_TR(0x4f5fe3);
if(r1(R+518)){{goto L4f5fea;}}
}
B4f5fe5:L4f5fe5:{c.instructions+=2;NFSU2_TR(0x4f5fe5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5fe8:{NFSU2_TR(0x4f5fe8);
{goto L4f5fec;}
}
B4f5fea:L4f5fea:{c.instructions+=1;NFSU2_TR(0x4f5fea);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f5fec:L4f5fec:{c.instructions+=5;NFSU2_TR(0x4f5fec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f5fef:{NFSU2_TR(0x4f5fef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f5ff1:{NFSU2_TR(0x4f5ff1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5ff4:{NFSU2_TR(0x4f5ff4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f5ff7:{NFSU2_TR(0x4f5ff7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f5ff9:L4f5ff9:{c.instructions+=2;NFSU2_TR(0x4f5ff9);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f5ffd:{NFSU2_TR(0x4f5ffd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
TAIL_STATIC(0x4f6000u,4f6);
}
XIT:NFSU2_TR_EXIT(0x4f5,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
