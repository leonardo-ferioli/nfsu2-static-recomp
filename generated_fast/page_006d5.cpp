#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_699(u8* __restrict R,Cpu& c);
u32 body_69a(u8* __restrict R,Cpu& c);
u32 body_69e(u8* __restrict R,Cpu& c);
u32 body_6d4(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6d5,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6d5,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6d5(u8* __restrict R,Cpu& c);
u32 page_6d5(Cpu& c){return body_6d5(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6d5(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6d5002:goto L6d5002;
case 0x6d5005:c.instructions+=6;goto B6d5005;
case 0x6d5008:c.instructions+=5;goto B6d5008;
case 0x6d500b:c.instructions+=4;goto B6d500b;
case 0x6d500e:c.instructions+=3;goto B6d500e;
case 0x6d5011:c.instructions+=2;goto B6d5011;
case 0x6d5014:c.instructions+=1;goto B6d5014;
case 0x6d5016:goto L6d5016;
case 0x6d5018:goto L6d5018;
case 0x6d5019:c.instructions+=3;goto B6d5019;
case 0x6d501c:c.instructions+=2;goto B6d501c;
case 0x6d501e:c.instructions+=1;goto B6d501e;
case 0x6d5023:goto L6d5023;
case 0x6d5026:goto L6d5026;
case 0x6d5029:c.instructions+=7;goto B6d5029;
case 0x6d502c:c.instructions+=6;goto B6d502c;
case 0x6d502f:c.instructions+=5;goto B6d502f;
case 0x6d5032:c.instructions+=4;goto B6d5032;
case 0x6d5035:c.instructions+=3;goto B6d5035;
case 0x6d5037:c.instructions+=2;goto B6d5037;
case 0x6d503a:c.instructions+=1;goto B6d503a;
case 0x6d503c:goto L6d503c;
case 0x6d503f:c.instructions+=9;goto B6d503f;
case 0x6d5042:c.instructions+=8;goto B6d5042;
case 0x6d5045:c.instructions+=7;goto B6d5045;
case 0x6d5048:c.instructions+=6;goto B6d5048;
case 0x6d504b:c.instructions+=5;goto B6d504b;
case 0x6d504e:c.instructions+=4;goto B6d504e;
case 0x6d504f:c.instructions+=3;goto B6d504f;
case 0x6d5052:c.instructions+=2;goto B6d5052;
case 0x6d5055:c.instructions+=1;goto B6d5055;
case 0x6d5057:goto L6d5057;
case 0x6d5059:c.instructions+=2;goto B6d5059;
case 0x6d505c:c.instructions+=1;goto B6d505c;
case 0x6d505e:goto L6d505e;
case 0x6d5061:c.instructions+=9;goto B6d5061;
case 0x6d5064:c.instructions+=8;goto B6d5064;
case 0x6d5067:c.instructions+=7;goto B6d5067;
case 0x6d506a:c.instructions+=6;goto B6d506a;
case 0x6d506d:c.instructions+=5;goto B6d506d;
case 0x6d5070:c.instructions+=4;goto B6d5070;
case 0x6d5071:c.instructions+=3;goto B6d5071;
case 0x6d5074:c.instructions+=2;goto B6d5074;
case 0x6d5077:c.instructions+=1;goto B6d5077;
case 0x6d5079:goto L6d5079;
case 0x6d507a:c.instructions+=2;goto B6d507a;
case 0x6d507d:c.instructions+=1;goto B6d507d;
case 0x6d507f:goto L6d507f;
case 0x6d5084:goto L6d5084;
case 0x6d5087:c.instructions+=3;goto B6d5087;
case 0x6d5089:c.instructions+=2;goto B6d5089;
case 0x6d508c:c.instructions+=1;goto B6d508c;
case 0x6d5091:goto L6d5091;
case 0x6d5094:c.instructions+=2;goto B6d5094;
case 0x6d5097:c.instructions+=1;goto B6d5097;
case 0x6d509c:goto L6d509c;
case 0x6d509d:c.instructions+=2;goto B6d509d;
case 0x6d509e:c.instructions+=1;goto B6d509e;
case 0x6d50a3:goto L6d50a3;
case 0x6d50a6:c.instructions+=4;goto B6d50a6;
case 0x6d50a7:c.instructions+=3;goto B6d50a7;
case 0x6d50aa:c.instructions+=2;goto B6d50aa;
case 0x6d50ab:c.instructions+=1;goto B6d50ab;
case 0x6d50b0:goto L6d50b0;
case 0x6d50b3:c.instructions+=3;goto B6d50b3;
case 0x6d50b6:c.instructions+=2;goto B6d50b6;
case 0x6d50b9:c.instructions+=1;goto B6d50b9;
case 0x6d50bb:goto L6d50bb;
case 0x6d50be:c.instructions+=1;goto B6d50be;
case 0x6d50c0:goto L6d50c0;
case 0x6d50c3:goto L6d50c3;
case 0x6d50c5:goto L6d50c5;
case 0x6d50c8:c.instructions+=1;goto B6d50c8;
case 0x6d50ca:goto L6d50ca;
case 0x6d50ce:c.instructions+=1;goto B6d50ce;
case 0x6d50d0:goto L6d50d0;
case 0x6d50d3:c.instructions+=2;goto B6d50d3;
case 0x6d50d6:c.instructions+=1;goto B6d50d6;
case 0x6d50d8:goto L6d50d8;
case 0x6d50db:c.instructions+=1;goto B6d50db;
case 0x6d50de:goto L6d50de;
case 0x6d50e1:c.instructions+=4;goto B6d50e1;
case 0x6d50e4:c.instructions+=3;goto B6d50e4;
case 0x6d50e7:c.instructions+=2;goto B6d50e7;
case 0x6d50ee:c.instructions+=1;goto B6d50ee;
case 0x6d50f3:goto L6d50f3;
case 0x6d50f5:c.instructions+=1;goto B6d50f5;
case 0x6d50f7:goto L6d50f7;
case 0x6d50fb:c.instructions+=1;goto B6d50fb;
case 0x6d50fd:goto L6d50fd;
case 0x6d5100:c.instructions+=5;goto B6d5100;
case 0x6d5103:c.instructions+=4;goto B6d5103;
case 0x6d5106:c.instructions+=3;goto B6d5106;
case 0x6d5109:c.instructions+=2;goto B6d5109;
case 0x6d510b:c.instructions+=1;goto B6d510b;
case 0x6d510e:goto L6d510e;
case 0x6d5110:goto L6d5110;
case 0x6d5112:c.instructions+=2;goto B6d5112;
case 0x6d5115:c.instructions+=1;goto B6d5115;
case 0x6d5117:goto L6d5117;
case 0x6d5119:goto L6d5119;
case 0x6d511b:c.instructions+=2;goto B6d511b;
case 0x6d511d:c.instructions+=1;goto B6d511d;
case 0x6d5122:goto L6d5122;
case 0x6d5124:c.instructions+=1;goto B6d5124;
case 0x6d5125:goto L6d5125;
case 0x6d5126:c.instructions+=4;goto B6d5126;
case 0x6d5127:c.instructions+=3;goto B6d5127;
case 0x6d5128:c.instructions+=2;goto B6d5128;
case 0x6d5129:c.instructions+=1;goto B6d5129;
case 0x6d512c:goto L6d512c;
case 0x6d512e:c.instructions+=8;goto B6d512e;
case 0x6d512f:c.instructions+=7;goto B6d512f;
case 0x6d5131:c.instructions+=6;goto B6d5131;
case 0x6d5132:c.instructions+=5;goto B6d5132;
case 0x6d5135:c.instructions+=4;goto B6d5135;
case 0x6d5136:c.instructions+=3;goto B6d5136;
case 0x6d5139:c.instructions+=2;goto B6d5139;
case 0x6d513a:c.instructions+=1;goto B6d513a;
case 0x6d513f:goto L6d513f;
case 0x6d5141:c.instructions+=2;goto B6d5141;
case 0x6d5144:c.instructions+=1;goto B6d5144;
case 0x6d5146:goto L6d5146;
case 0x6d5149:c.instructions+=8;goto B6d5149;
case 0x6d514c:c.instructions+=7;goto B6d514c;
case 0x6d514f:c.instructions+=6;goto B6d514f;
case 0x6d5152:c.instructions+=5;goto B6d5152;
case 0x6d5155:c.instructions+=4;goto B6d5155;
case 0x6d5158:c.instructions+=3;goto B6d5158;
case 0x6d5159:c.instructions+=2;goto B6d5159;
case 0x6d515c:c.instructions+=1;goto B6d515c;
case 0x6d515e:goto L6d515e;
case 0x6d515f:c.instructions+=4;goto B6d515f;
case 0x6d5162:c.instructions+=3;goto B6d5162;
case 0x6d5165:c.instructions+=2;goto B6d5165;
case 0x6d516a:c.instructions+=1;goto B6d516a;
case 0x6d516f:goto L6d516f;
case 0x6d5171:c.instructions+=2;goto B6d5171;
case 0x6d5174:c.instructions+=1;goto B6d5174;
case 0x6d5176:goto L6d5176;
case 0x6d5179:c.instructions+=3;goto B6d5179;
case 0x6d517c:c.instructions+=2;goto B6d517c;
case 0x6d517e:c.instructions+=1;goto B6d517e;
case 0x6d5183:goto L6d5183;
case 0x6d5185:c.instructions+=1;goto B6d5185;
case 0x6d5187:goto L6d5187;
case 0x6d5189:goto L6d5189;
case 0x6d518a:c.instructions+=2;goto B6d518a;
case 0x6d518d:c.instructions+=1;goto B6d518d;
case 0x6d518f:goto L6d518f;
case 0x6d5191:c.instructions+=1;goto B6d5191;
case 0x6d5192:goto L6d5192;
case 0x6d5193:c.instructions+=2;goto B6d5193;
case 0x6d5194:c.instructions+=1;goto B6d5194;
case 0x6d5195:goto L6d5195;
case 0x6d5197:c.instructions+=1;goto B6d5197;
case 0x6d5199:goto L6d5199;
case 0x6d519b:c.instructions+=24;goto B6d519b;
case 0x6d519c:c.instructions+=23;goto B6d519c;
case 0x6d519e:c.instructions+=22;goto B6d519e;
case 0x6d519f:c.instructions+=21;goto B6d519f;
case 0x6d51a0:c.instructions+=20;goto B6d51a0;
case 0x6d51a1:c.instructions+=19;goto B6d51a1;
case 0x6d51a3:c.instructions+=18;goto B6d51a3;
case 0x6d51a4:c.instructions+=17;goto B6d51a4;
case 0x6d51a6:c.instructions+=16;goto B6d51a6;
case 0x6d51a9:c.instructions+=15;goto B6d51a9;
case 0x6d51ac:c.instructions+=14;goto B6d51ac;
case 0x6d51af:c.instructions+=13;goto B6d51af;
case 0x6d51b2:c.instructions+=12;goto B6d51b2;
case 0x6d51b5:c.instructions+=11;goto B6d51b5;
case 0x6d51b8:c.instructions+=10;goto B6d51b8;
case 0x6d51bb:c.instructions+=9;goto B6d51bb;
case 0x6d51be:c.instructions+=8;goto B6d51be;
case 0x6d51c1:c.instructions+=7;goto B6d51c1;
case 0x6d51c4:c.instructions+=6;goto B6d51c4;
case 0x6d51c7:c.instructions+=5;goto B6d51c7;
case 0x6d51ca:c.instructions+=4;goto B6d51ca;
case 0x6d51cd:c.instructions+=3;goto B6d51cd;
case 0x6d51ce:c.instructions+=2;goto B6d51ce;
case 0x6d51d1:c.instructions+=1;goto B6d51d1;
case 0x6d51d6:goto L6d51d6;
case 0x6d51d9:c.instructions+=3;goto B6d51d9;
case 0x6d51dc:c.instructions+=2;goto B6d51dc;
case 0x6d51dd:c.instructions+=1;goto B6d51dd;
case 0x6d51e2:goto L6d51e2;
case 0x6d51e4:c.instructions+=3;goto B6d51e4;
case 0x6d51e5:c.instructions+=2;goto B6d51e5;
case 0x6d51e8:c.instructions+=1;goto B6d51e8;
case 0x6d51ee:goto L6d51ee;
case 0x6d51f1:c.instructions+=3;goto B6d51f1;
case 0x6d51f4:c.instructions+=2;goto B6d51f4;
case 0x6d51f5:c.instructions+=1;goto B6d51f5;
case 0x6d51fa:goto L6d51fa;
case 0x6d51fc:c.instructions+=3;goto B6d51fc;
case 0x6d51fd:c.instructions+=2;goto B6d51fd;
case 0x6d5200:c.instructions+=1;goto B6d5200;
case 0x6d5206:goto L6d5206;
case 0x6d5209:c.instructions+=5;goto B6d5209;
case 0x6d520c:c.instructions+=4;goto B6d520c;
case 0x6d520f:c.instructions+=3;goto B6d520f;
case 0x6d5211:c.instructions+=2;goto B6d5211;
case 0x6d5214:c.instructions+=1;goto B6d5214;
case 0x6d5216:goto L6d5216;
case 0x6d5218:goto L6d5218;
case 0x6d521a:c.instructions+=1;goto B6d521a;
case 0x6d521d:goto L6d521d;
case 0x6d521f:goto L6d521f;
case 0x6d5222:c.instructions+=5;goto B6d5222;
case 0x6d5225:c.instructions+=4;goto B6d5225;
case 0x6d5228:c.instructions+=3;goto B6d5228;
case 0x6d522a:c.instructions+=2;goto B6d522a;
case 0x6d522d:c.instructions+=1;goto B6d522d;
case 0x6d522f:goto L6d522f;
case 0x6d5231:goto L6d5231;
case 0x6d5233:c.instructions+=1;goto B6d5233;
case 0x6d5236:goto L6d5236;
case 0x6d5238:goto L6d5238;
case 0x6d523b:c.instructions+=2;goto B6d523b;
case 0x6d523e:c.instructions+=1;goto B6d523e;
case 0x6d5240:goto L6d5240;
case 0x6d5243:c.instructions+=5;goto B6d5243;
case 0x6d5246:c.instructions+=4;goto B6d5246;
case 0x6d5249:c.instructions+=3;goto B6d5249;
case 0x6d524c:c.instructions+=2;goto B6d524c;
case 0x6d5252:c.instructions+=1;goto B6d5252;
case 0x6d5254:goto L6d5254;
case 0x6d5257:c.instructions+=2;goto B6d5257;
case 0x6d525a:c.instructions+=1;goto B6d525a;
case 0x6d525c:goto L6d525c;
case 0x6d525f:c.instructions+=5;goto B6d525f;
case 0x6d5262:c.instructions+=4;goto B6d5262;
case 0x6d5265:c.instructions+=3;goto B6d5265;
case 0x6d5267:c.instructions+=2;goto B6d5267;
case 0x6d526a:c.instructions+=1;goto B6d526a;
case 0x6d526f:goto L6d526f;
case 0x6d5272:c.instructions+=3;goto B6d5272;
case 0x6d5275:c.instructions+=2;goto B6d5275;
case 0x6d5278:c.instructions+=1;goto B6d5278;
case 0x6d527a:goto L6d527a;
case 0x6d527d:c.instructions+=2;goto B6d527d;
case 0x6d5280:c.instructions+=1;goto B6d5280;
case 0x6d5282:goto L6d5282;
case 0x6d5285:c.instructions+=5;goto B6d5285;
case 0x6d5288:c.instructions+=4;goto B6d5288;
case 0x6d528b:c.instructions+=3;goto B6d528b;
case 0x6d528d:c.instructions+=2;goto B6d528d;
case 0x6d5290:c.instructions+=1;goto B6d5290;
case 0x6d5295:goto L6d5295;
case 0x6d5298:c.instructions+=3;goto B6d5298;
case 0x6d529b:c.instructions+=2;goto B6d529b;
case 0x6d529e:c.instructions+=1;goto B6d529e;
case 0x6d52a0:goto L6d52a0;
case 0x6d52a3:c.instructions+=3;goto B6d52a3;
case 0x6d52a6:c.instructions+=2;goto B6d52a6;
case 0x6d52a9:c.instructions+=1;goto B6d52a9;
case 0x6d52ab:goto L6d52ab;
case 0x6d52ae:c.instructions+=3;goto B6d52ae;
case 0x6d52b1:c.instructions+=2;goto B6d52b1;
case 0x6d52b2:c.instructions+=1;goto B6d52b2;
case 0x6d52b7:goto L6d52b7;
case 0x6d52b9:c.instructions+=3;goto B6d52b9;
case 0x6d52ba:c.instructions+=2;goto B6d52ba;
case 0x6d52bd:c.instructions+=1;goto B6d52bd;
case 0x6d52c3:goto L6d52c3;
case 0x6d52c6:c.instructions+=3;goto B6d52c6;
case 0x6d52c9:c.instructions+=2;goto B6d52c9;
case 0x6d52ca:c.instructions+=1;goto B6d52ca;
case 0x6d52cf:goto L6d52cf;
case 0x6d52d1:c.instructions+=3;goto B6d52d1;
case 0x6d52d2:c.instructions+=2;goto B6d52d2;
case 0x6d52d5:c.instructions+=1;goto B6d52d5;
case 0x6d52db:goto L6d52db;
case 0x6d52dd:c.instructions+=4;goto B6d52dd;
case 0x6d52df:c.instructions+=3;goto B6d52df;
case 0x6d52e1:c.instructions+=2;goto B6d52e1;
case 0x6d52e4:c.instructions+=1;goto B6d52e4;
case 0x6d52e6:goto L6d52e6;
case 0x6d52e9:c.instructions+=12;goto B6d52e9;
case 0x6d52eb:c.instructions+=11;goto B6d52eb;
case 0x6d52ee:c.instructions+=10;goto B6d52ee;
case 0x6d52f1:c.instructions+=9;goto B6d52f1;
case 0x6d52f4:c.instructions+=8;goto B6d52f4;
case 0x6d52f7:c.instructions+=7;goto B6d52f7;
case 0x6d52fa:c.instructions+=6;goto B6d52fa;
case 0x6d52fd:c.instructions+=5;goto B6d52fd;
case 0x6d5300:c.instructions+=4;goto B6d5300;
case 0x6d5303:c.instructions+=3;goto B6d5303;
case 0x6d5304:c.instructions+=2;goto B6d5304;
case 0x6d5307:c.instructions+=1;goto B6d5307;
case 0x6d5309:goto L6d5309;
case 0x6d530b:goto L6d530b;
case 0x6d530e:c.instructions+=3;goto B6d530e;
case 0x6d530f:c.instructions+=2;goto B6d530f;
case 0x6d5312:c.instructions+=1;goto B6d5312;
case 0x6d5317:goto L6d5317;
case 0x6d5319:c.instructions+=3;goto B6d5319;
case 0x6d531a:c.instructions+=2;goto B6d531a;
case 0x6d531d:c.instructions+=1;goto B6d531d;
case 0x6d5323:goto L6d5323;
case 0x6d5326:c.instructions+=1;goto B6d5326;
case 0x6d532b:goto L6d532b;
case 0x6d532d:c.instructions+=3;goto B6d532d;
case 0x6d532e:c.instructions+=2;goto B6d532e;
case 0x6d5331:c.instructions+=1;goto B6d5331;
case 0x6d5337:goto L6d5337;
case 0x6d533a:c.instructions+=1;goto B6d533a;
case 0x6d533f:goto L6d533f;
case 0x6d5341:c.instructions+=3;goto B6d5341;
case 0x6d5342:c.instructions+=2;goto B6d5342;
case 0x6d5345:c.instructions+=1;goto B6d5345;
case 0x6d534b:goto L6d534b;
case 0x6d534d:c.instructions+=3;goto B6d534d;
case 0x6d5350:c.instructions+=2;goto B6d5350;
case 0x6d5351:c.instructions+=1;goto B6d5351;
case 0x6d5356:goto L6d5356;
case 0x6d5358:c.instructions+=3;goto B6d5358;
case 0x6d5359:c.instructions+=2;goto B6d5359;
case 0x6d535c:c.instructions+=1;goto B6d535c;
case 0x6d5362:goto L6d5362;
case 0x6d5365:c.instructions+=5;goto B6d5365;
case 0x6d5368:c.instructions+=4;goto B6d5368;
case 0x6d536b:c.instructions+=3;goto B6d536b;
case 0x6d536d:c.instructions+=2;goto B6d536d;
case 0x6d5370:c.instructions+=1;goto B6d5370;
case 0x6d5372:goto L6d5372;
case 0x6d5374:goto L6d5374;
case 0x6d5376:c.instructions+=1;goto B6d5376;
case 0x6d5379:goto L6d5379;
case 0x6d537b:goto L6d537b;
case 0x6d537e:c.instructions+=5;goto B6d537e;
case 0x6d5381:c.instructions+=4;goto B6d5381;
case 0x6d5384:c.instructions+=3;goto B6d5384;
case 0x6d5386:c.instructions+=2;goto B6d5386;
case 0x6d5389:c.instructions+=1;goto B6d5389;
case 0x6d538b:goto L6d538b;
case 0x6d538d:goto L6d538d;
case 0x6d538f:c.instructions+=1;goto B6d538f;
case 0x6d5392:goto L6d5392;
case 0x6d5394:goto L6d5394;
case 0x6d5397:c.instructions+=2;goto B6d5397;
case 0x6d539a:c.instructions+=1;goto B6d539a;
case 0x6d539c:goto L6d539c;
case 0x6d539f:c.instructions+=5;goto B6d539f;
case 0x6d53a2:c.instructions+=4;goto B6d53a2;
case 0x6d53a5:c.instructions+=3;goto B6d53a5;
case 0x6d53a8:c.instructions+=2;goto B6d53a8;
case 0x6d53ae:c.instructions+=1;goto B6d53ae;
case 0x6d53b0:goto L6d53b0;
case 0x6d53b3:c.instructions+=2;goto B6d53b3;
case 0x6d53b6:c.instructions+=1;goto B6d53b6;
case 0x6d53b8:goto L6d53b8;
case 0x6d53bb:c.instructions+=5;goto B6d53bb;
case 0x6d53be:c.instructions+=4;goto B6d53be;
case 0x6d53c1:c.instructions+=3;goto B6d53c1;
case 0x6d53c3:c.instructions+=2;goto B6d53c3;
case 0x6d53c6:c.instructions+=1;goto B6d53c6;
case 0x6d53cb:goto L6d53cb;
case 0x6d53ce:c.instructions+=3;goto B6d53ce;
case 0x6d53d1:c.instructions+=2;goto B6d53d1;
case 0x6d53d4:c.instructions+=1;goto B6d53d4;
case 0x6d53d6:goto L6d53d6;
case 0x6d53d9:c.instructions+=2;goto B6d53d9;
case 0x6d53dc:c.instructions+=1;goto B6d53dc;
case 0x6d53de:goto L6d53de;
case 0x6d53e1:c.instructions+=5;goto B6d53e1;
case 0x6d53e4:c.instructions+=4;goto B6d53e4;
case 0x6d53e7:c.instructions+=3;goto B6d53e7;
case 0x6d53e9:c.instructions+=2;goto B6d53e9;
case 0x6d53ec:c.instructions+=1;goto B6d53ec;
case 0x6d53f1:goto L6d53f1;
case 0x6d53f4:c.instructions+=3;goto B6d53f4;
case 0x6d53f7:c.instructions+=2;goto B6d53f7;
case 0x6d53fa:c.instructions+=1;goto B6d53fa;
case 0x6d53fc:goto L6d53fc;
case 0x6d53ff:c.instructions+=3;goto B6d53ff;
case 0x6d5402:c.instructions+=2;goto B6d5402;
case 0x6d5405:c.instructions+=1;goto B6d5405;
case 0x6d5407:goto L6d5407;
case 0x6d540a:c.instructions+=2;goto B6d540a;
case 0x6d540d:c.instructions+=1;goto B6d540d;
case 0x6d540f:goto L6d540f;
case 0x6d5412:c.instructions+=11;goto B6d5412;
case 0x6d5415:c.instructions+=10;goto B6d5415;
case 0x6d5418:c.instructions+=9;goto B6d5418;
case 0x6d541b:c.instructions+=8;goto B6d541b;
case 0x6d541d:c.instructions+=7;goto B6d541d;
case 0x6d541e:c.instructions+=6;goto B6d541e;
case 0x6d5421:c.instructions+=5;goto B6d5421;
case 0x6d5424:c.instructions+=4;goto B6d5424;
case 0x6d5427:c.instructions+=3;goto B6d5427;
case 0x6d5428:c.instructions+=2;goto B6d5428;
case 0x6d542a:c.instructions+=1;goto B6d542a;
case 0x6d542f:goto L6d542f;
case 0x6d5432:c.instructions+=9;goto B6d5432;
case 0x6d5435:c.instructions+=8;goto B6d5435;
case 0x6d5437:c.instructions+=7;goto B6d5437;
case 0x6d5438:c.instructions+=6;goto B6d5438;
case 0x6d543b:c.instructions+=5;goto B6d543b;
case 0x6d543e:c.instructions+=4;goto B6d543e;
case 0x6d5441:c.instructions+=3;goto B6d5441;
case 0x6d5442:c.instructions+=2;goto B6d5442;
case 0x6d5444:c.instructions+=1;goto B6d5444;
case 0x6d5449:goto L6d5449;
case 0x6d544c:c.instructions+=3;goto B6d544c;
case 0x6d544f:c.instructions+=2;goto B6d544f;
case 0x6d5452:c.instructions+=1;goto B6d5452;
case 0x6d5454:goto L6d5454;
case 0x6d5457:c.instructions+=3;goto B6d5457;
case 0x6d545a:c.instructions+=2;goto B6d545a;
case 0x6d545b:c.instructions+=1;goto B6d545b;
case 0x6d5460:goto L6d5460;
case 0x6d5462:c.instructions+=3;goto B6d5462;
case 0x6d5463:c.instructions+=2;goto B6d5463;
case 0x6d5466:c.instructions+=1;goto B6d5466;
case 0x6d546c:goto L6d546c;
case 0x6d546f:c.instructions+=3;goto B6d546f;
case 0x6d5472:c.instructions+=2;goto B6d5472;
case 0x6d5473:c.instructions+=1;goto B6d5473;
case 0x6d5478:goto L6d5478;
case 0x6d547a:c.instructions+=3;goto B6d547a;
case 0x6d547b:c.instructions+=2;goto B6d547b;
case 0x6d547e:c.instructions+=1;goto B6d547e;
case 0x6d5484:goto L6d5484;
case 0x6d5487:c.instructions+=3;goto B6d5487;
case 0x6d548a:c.instructions+=2;goto B6d548a;
case 0x6d548b:c.instructions+=1;goto B6d548b;
case 0x6d5490:goto L6d5490;
case 0x6d5492:c.instructions+=3;goto B6d5492;
case 0x6d5493:c.instructions+=2;goto B6d5493;
case 0x6d5496:c.instructions+=1;goto B6d5496;
case 0x6d549c:goto L6d549c;
case 0x6d549f:c.instructions+=3;goto B6d549f;
case 0x6d54a2:c.instructions+=2;goto B6d54a2;
case 0x6d54a3:c.instructions+=1;goto B6d54a3;
case 0x6d54a8:goto L6d54a8;
case 0x6d54aa:c.instructions+=3;goto B6d54aa;
case 0x6d54ab:c.instructions+=2;goto B6d54ab;
case 0x6d54ae:c.instructions+=1;goto B6d54ae;
case 0x6d54b4:goto L6d54b4;
case 0x6d54b8:c.instructions+=1;goto B6d54b8;
case 0x6d54ba:goto L6d54ba;
case 0x6d54bd:c.instructions+=11;goto B6d54bd;
case 0x6d54c0:c.instructions+=10;goto B6d54c0;
case 0x6d54c2:c.instructions+=9;goto B6d54c2;
case 0x6d54c5:c.instructions+=8;goto B6d54c5;
case 0x6d54c8:c.instructions+=7;goto B6d54c8;
case 0x6d54cb:c.instructions+=6;goto B6d54cb;
case 0x6d54ce:c.instructions+=5;goto B6d54ce;
case 0x6d54d1:c.instructions+=4;goto B6d54d1;
case 0x6d54d4:c.instructions+=3;goto B6d54d4;
case 0x6d54d8:c.instructions+=2;goto B6d54d8;
case 0x6d54de:c.instructions+=1;goto B6d54de;
case 0x6d54e0:goto L6d54e0;
case 0x6d54e5:goto L6d54e5;
case 0x6d54e7:c.instructions+=1;goto B6d54e7;
case 0x6d54e9:goto L6d54e9;
case 0x6d54eb:c.instructions+=1;goto B6d54eb;
case 0x6d54ec:goto L6d54ec;
case 0x6d54ef:c.instructions+=4;goto B6d54ef;
case 0x6d54f0:c.instructions+=3;goto B6d54f0;
case 0x6d54f3:c.instructions+=2;goto B6d54f3;
case 0x6d54f6:c.instructions+=1;goto B6d54f6;
case 0x6d54f8:goto L6d54f8;
case 0x6d54fb:c.instructions+=5;goto B6d54fb;
case 0x6d54fe:c.instructions+=4;goto B6d54fe;
case 0x6d5500:c.instructions+=3;goto B6d5500;
case 0x6d5501:c.instructions+=2;goto B6d5501;
case 0x6d5504:c.instructions+=1;goto B6d5504;
case 0x6d5509:goto L6d5509;
case 0x6d550b:c.instructions+=3;goto B6d550b;
case 0x6d550c:c.instructions+=2;goto B6d550c;
case 0x6d550f:c.instructions+=1;goto B6d550f;
case 0x6d5511:goto L6d5511;
case 0x6d5514:c.instructions+=3;goto B6d5514;
case 0x6d5517:c.instructions+=2;goto B6d5517;
case 0x6d5518:c.instructions+=1;goto B6d5518;
case 0x6d551d:goto L6d551d;
case 0x6d551f:c.instructions+=3;goto B6d551f;
case 0x6d5520:c.instructions+=2;goto B6d5520;
case 0x6d5523:c.instructions+=1;goto B6d5523;
case 0x6d5525:goto L6d5525;
case 0x6d5528:c.instructions+=3;goto B6d5528;
case 0x6d552b:c.instructions+=2;goto B6d552b;
case 0x6d552c:c.instructions+=1;goto B6d552c;
case 0x6d5531:goto L6d5531;
case 0x6d5533:c.instructions+=3;goto B6d5533;
case 0x6d5534:c.instructions+=2;goto B6d5534;
case 0x6d5537:c.instructions+=1;goto B6d5537;
case 0x6d5539:goto L6d5539;
case 0x6d553c:c.instructions+=1;goto B6d553c;
case 0x6d553e:goto L6d553e;
case 0x6d5540:goto L6d5540;
case 0x6d5543:c.instructions+=1;goto B6d5543;
case 0x6d5545:goto L6d5545;
case 0x6d5547:c.instructions+=1;goto B6d5547;
case 0x6d554c:goto L6d554c;
case 0x6d554e:c.instructions+=1;goto B6d554e;
case 0x6d5550:goto L6d5550;
case 0x6d5555:goto L6d5555;
case 0x6d5557:c.instructions+=2;goto B6d5557;
case 0x6d555a:c.instructions+=1;goto B6d555a;
case 0x6d555c:goto L6d555c;
case 0x6d555f:c.instructions+=9;goto B6d555f;
case 0x6d5562:c.instructions+=8;goto B6d5562;
case 0x6d5565:c.instructions+=7;goto B6d5565;
case 0x6d5568:c.instructions+=6;goto B6d5568;
case 0x6d556b:c.instructions+=5;goto B6d556b;
case 0x6d556e:c.instructions+=4;goto B6d556e;
case 0x6d5571:c.instructions+=3;goto B6d5571;
case 0x6d5572:c.instructions+=2;goto B6d5572;
case 0x6d5575:c.instructions+=1;goto B6d5575;
case 0x6d5577:goto L6d5577;
case 0x6d5579:goto L6d5579;
case 0x6d557e:goto L6d557e;
case 0x6d5581:c.instructions+=1;goto B6d5581;
case 0x6d5586:goto L6d5586;
case 0x6d5589:c.instructions+=1;goto B6d5589;
case 0x6d558e:goto L6d558e;
case 0x6d5591:c.instructions+=1;goto B6d5591;
case 0x6d5596:goto L6d5596;
case 0x6d5599:c.instructions+=1;goto B6d5599;
case 0x6d559e:goto L6d559e;
case 0x6d55a1:c.instructions+=1;goto B6d55a1;
case 0x6d55a6:goto L6d55a6;
case 0x6d55a9:c.instructions+=1;goto B6d55a9;
case 0x6d55ae:goto L6d55ae;
case 0x6d55b1:c.instructions+=1;goto B6d55b1;
case 0x6d55b6:goto L6d55b6;
case 0x6d55b9:c.instructions+=1;goto B6d55b9;
case 0x6d55be:goto L6d55be;
case 0x6d55c1:c.instructions+=1;goto B6d55c1;
case 0x6d55c6:goto L6d55c6;
case 0x6d55c9:c.instructions+=1;goto B6d55c9;
case 0x6d55ce:goto L6d55ce;
case 0x6d55d1:c.instructions+=1;goto B6d55d1;
case 0x6d55d6:goto L6d55d6;
case 0x6d55d9:c.instructions+=1;goto B6d55d9;
case 0x6d55de:goto L6d55de;
case 0x6d55e1:c.instructions+=1;goto B6d55e1;
case 0x6d55e6:goto L6d55e6;
case 0x6d55e9:c.instructions+=1;goto B6d55e9;
case 0x6d55ee:goto L6d55ee;
case 0x6d55f1:c.instructions+=1;goto B6d55f1;
case 0x6d55f6:goto L6d55f6;
case 0x6d55f9:c.instructions+=1;goto B6d55f9;
case 0x6d55fb:goto L6d55fb;
case 0x6d55fc:c.instructions+=4;goto B6d55fc;
case 0x6d55fd:c.instructions+=3;goto B6d55fd;
case 0x6d55fe:c.instructions+=2;goto B6d55fe;
case 0x6d55ff:c.instructions+=1;goto B6d55ff;
default:missing_instruction(c.pc);}
B6d5002:L6d5002:{c.instructions+=7;NFSU2_TR(0x6d5002);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d5005:{NFSU2_TR(0x6d5005);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d5008:{NFSU2_TR(0x6d5008);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B6d500b:{NFSU2_TR(0x6d500b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d500e:{NFSU2_TR(0x6d500e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d5011:{NFSU2_TR(0x6d5011);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B6d5014:{NFSU2_TR(0x6d5014);
__builtin_memmove((R+4),(R+8),4);
}
B6d5016:L6d5016:{c.instructions+=1;NFSU2_TR(0x6d5016);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6d5018;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d5016u);}goto L6d5016;}
}
B6d5018:L6d5018:{c.instructions+=4;NFSU2_TR(0x6d5018);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d5019:{NFSU2_TR(0x6d5019);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d501c:{NFSU2_TR(0x6d501c);
__builtin_memmove((R+4),(R+12),4);
}
B6d501e:{NFSU2_TR(0x6d501e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d5023ull));
TAIL_STATIC(0x6d4b37u,6d4);
}
B6d5023:L6d5023:{c.instructions+=1;NFSU2_TR(0x6d5023);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d5026:L6d5026:{c.instructions+=8;NFSU2_TR(0x6d5026);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d5029:{NFSU2_TR(0x6d5029);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d502c:{NFSU2_TR(0x6d502c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d502f:{NFSU2_TR(0x6d502f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6d5032:{NFSU2_TR(0x6d5032);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6d5035:{NFSU2_TR(0x6d5035);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6d5037:{NFSU2_TR(0x6d5037);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d503a:{NFSU2_TR(0x6d503a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d5057;}}
}
B6d503c:L6d503c:{c.instructions+=10;NFSU2_TR(0x6d503c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d503f:{NFSU2_TR(0x6d503f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d5042:{NFSU2_TR(0x6d5042);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6d5045:{NFSU2_TR(0x6d5045);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d5048:{NFSU2_TR(0x6d5048);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6d504b:{NFSU2_TR(0x6d504b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d504e:{NFSU2_TR(0x6d504e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6d504f:{NFSU2_TR(0x6d504f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d5052:{NFSU2_TR(0x6d5052);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6d5055:{NFSU2_TR(0x6d5055);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d503cu);}goto L6d503c;}}
}
B6d5057:L6d5057:{c.instructions+=3;NFSU2_TR(0x6d5057);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6d5059:{NFSU2_TR(0x6d5059);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d505c:{NFSU2_TR(0x6d505c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d5079;}}
}
B6d505e:L6d505e:{c.instructions+=10;NFSU2_TR(0x6d505e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d5061:{NFSU2_TR(0x6d5061);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d5064:{NFSU2_TR(0x6d5064);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6d5067:{NFSU2_TR(0x6d5067);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d506a:{NFSU2_TR(0x6d506a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6d506d:{NFSU2_TR(0x6d506d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d5070:{NFSU2_TR(0x6d5070);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6d5071:{NFSU2_TR(0x6d5071);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d5074:{NFSU2_TR(0x6d5074);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6d5077:{NFSU2_TR(0x6d5077);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d505eu);}goto L6d505e;}}
}
B6d5079:L6d5079:{c.instructions+=3;NFSU2_TR(0x6d5079);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6d507a:{NFSU2_TR(0x6d507a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6d507d:{NFSU2_TR(0x6d507d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d5026u);}goto L6d5026;}}
}
B6d507f:L6d507f:{c.instructions+=1;NFSU2_TR(0x6d507f);
TAIL_STATIC(0x6d4dadu,6d4);
}
B6d5084:L6d5084:{c.instructions+=4;NFSU2_TR(0x6d5084);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d5087:{NFSU2_TR(0x6d5087);
__builtin_memmove((R+4),(R+12),4);
}
B6d5089:{NFSU2_TR(0x6d5089);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d508c:{NFSU2_TR(0x6d508c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d5091ull));
TAIL_STATIC(0x6d4aa6u,6d4);
}
B6d5091:L6d5091:{c.instructions+=3;NFSU2_TR(0x6d5091);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d5094:{NFSU2_TR(0x6d5094);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d5097:{NFSU2_TR(0x6d5097);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d509cull));
TAIL_STATIC(0x6d4aa6u,6d4);
}
B6d509c:L6d509c:{c.instructions+=3;NFSU2_TR(0x6d509c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d509d:{NFSU2_TR(0x6d509d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d509e:{NFSU2_TR(0x6d509e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d50a3ull));
TAIL_STATIC(0x6d4aa6u,6d4);
}
B6d50a3:L6d50a3:{c.instructions+=5;NFSU2_TR(0x6d50a3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6d50a6:{NFSU2_TR(0x6d50a6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d50a7:{NFSU2_TR(0x6d50a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6d50aa:{NFSU2_TR(0x6d50aa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d50ab:{NFSU2_TR(0x6d50ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d50b0ull));
TAIL_STATIC(0x6d4b7du,6d4);
}
B6d50b0:L6d50b0:{c.instructions+=4;NFSU2_TR(0x6d50b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d50b3:{NFSU2_TR(0x6d50b3);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d50b6:{NFSU2_TR(0x6d50b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d50b9:{NFSU2_TR(0x6d50b9);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6d50c3;}}
}
B6d50bb:L6d50bb:{c.instructions+=2;NFSU2_TR(0x6d50bb);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d50be:{NFSU2_TR(0x6d50be);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d50f3;}}
}
B6d50c0:L6d50c0:{c.instructions+=1;NFSU2_TR(0x6d50c0);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d50c3:L6d50c3:{c.instructions+=1;NFSU2_TR(0x6d50c3);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6d50ca;}}
}
B6d50c5:L6d50c5:{c.instructions+=2;NFSU2_TR(0x6d50c5);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6d50c8:{NFSU2_TR(0x6d50c8);
if(r1(R+512)){{goto L6d50f3;}}
}
B6d50ca:L6d50ca:{c.instructions+=2;NFSU2_TR(0x6d50ca);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x0ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B6d50ce:{NFSU2_TR(0x6d50ce);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6d50d8;}}
}
B6d50d0:L6d50d0:{c.instructions+=3;NFSU2_TR(0x6d50d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d50d3:{NFSU2_TR(0x6d50d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B6d50d6:{NFSU2_TR(0x6d50d6);
{goto L6d50de;}
}
B6d50d8:L6d50d8:{c.instructions+=2;NFSU2_TR(0x6d50d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d50db:{NFSU2_TR(0x6d50db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B6d50de:L6d50de:{c.instructions+=5;NFSU2_TR(0x6d50de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d50e1:{NFSU2_TR(0x6d50e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d50e4:{NFSU2_TR(0x6d50e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d50e7:{NFSU2_TR(0x6d50e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6d50ee:{NFSU2_TR(0x6d50ee);
TAIL_STATIC(0x6d4d0cu,6d4);
}
B6d50f3:L6d50f3:{c.instructions+=2;NFSU2_TR(0x6d50f3);
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
B6d50f5:{NFSU2_TR(0x6d50f5);
{goto L6d5125;}
}
B6d50f7:L6d50f7:{c.instructions+=2;NFSU2_TR(0x6d50f7);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d50fb:{NFSU2_TR(0x6d50fb);
if(r1(R+518)){{goto L6d5122;}}
}
B6d50fd:L6d50fd:{c.instructions+=6;NFSU2_TR(0x6d50fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d5100:{NFSU2_TR(0x6d5100);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d5103:{NFSU2_TR(0x6d5103);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d5106:{NFSU2_TR(0x6d5106);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6d5109:{NFSU2_TR(0x6d5109);
__builtin_memmove((R+0),(R+4),4);
}
B6d510b:{NFSU2_TR(0x6d510b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6d510e:L6d510e:{c.instructions+=1;NFSU2_TR(0x6d510e);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6d5110;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d510eu);}goto L6d510e;}
}
B6d5110:L6d5110:{c.instructions+=3;NFSU2_TR(0x6d5110);
__builtin_memmove((R+4),(R+0),4);
}
B6d5112:{NFSU2_TR(0x6d5112);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6d5115:{NFSU2_TR(0x6d5115);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d5117:L6d5117:{c.instructions+=1;NFSU2_TR(0x6d5117);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6d5119;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d5117u);}goto L6d5117;}
}
B6d5119:L6d5119:{c.instructions+=3;NFSU2_TR(0x6d5119);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d511b:{NFSU2_TR(0x6d511b);
__builtin_memmove((R+4),(R+12),4);
}
B6d511d:{NFSU2_TR(0x6d511d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d5122ull));
TAIL_STATIC(0x6d4b7du,6d4);
}
B6d5122:L6d5122:{c.instructions+=2;NFSU2_TR(0x6d5122);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6d5124:{NFSU2_TR(0x6d5124);
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
B6d5125:L6d5125:{c.instructions+=5;NFSU2_TR(0x6d5125);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d5126:{NFSU2_TR(0x6d5126);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d5127:{NFSU2_TR(0x6d5127);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6d5128:{NFSU2_TR(0x6d5128);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6d5129:{NFSU2_TR(0x6d5129);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d512c:L6d512c:{c.instructions+=9;NFSU2_TR(0x6d512c);
__builtin_memmove((R+28),(R+28),4);
}
B6d512e:{NFSU2_TR(0x6d512e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d512f:{NFSU2_TR(0x6d512f);
__builtin_memmove((R+24),(R+4),4);
}
B6d5131:{NFSU2_TR(0x6d5131);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d5132:{NFSU2_TR(0x6d5132);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6d5135:{NFSU2_TR(0x6d5135);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d5136:{NFSU2_TR(0x6d5136);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6d5139:{NFSU2_TR(0x6d5139);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d513a:{NFSU2_TR(0x6d513a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d513full));
TAIL_STATIC(0x6d4b7du,6d4);
}
B6d513f:L6d513f:{c.instructions+=3;NFSU2_TR(0x6d513f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6d5141:{NFSU2_TR(0x6d5141);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d5144:{NFSU2_TR(0x6d5144);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d515e;}}
}
B6d5146:L6d5146:{c.instructions+=9;NFSU2_TR(0x6d5146);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d5149:{NFSU2_TR(0x6d5149);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6d514c:{NFSU2_TR(0x6d514c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d514f:{NFSU2_TR(0x6d514f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6d5152:{NFSU2_TR(0x6d5152);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d5155:{NFSU2_TR(0x6d5155);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6d5158:{NFSU2_TR(0x6d5158);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6d5159:{NFSU2_TR(0x6d5159);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6d515c:{NFSU2_TR(0x6d515c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d5146u);}goto L6d5146;}}
}
B6d515e:L6d515e:{c.instructions+=5;NFSU2_TR(0x6d515e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d515f:{NFSU2_TR(0x6d515f);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d5162:{NFSU2_TR(0x6d5162);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d5165:{NFSU2_TR(0x6d5165);
u8 U[4];
w4(U+0,u32(0x6d4af0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d516a:{NFSU2_TR(0x6d516a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d516full));
TAIL_STATIC(0x69a41du,69a);
}
B6d516f:L6d516f:{c.instructions+=3;NFSU2_TR(0x6d516f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6d5171:{NFSU2_TR(0x6d5171);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d5174:{NFSU2_TR(0x6d5174);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d518f;}}
}
B6d5176:L6d5176:{c.instructions+=4;NFSU2_TR(0x6d5176);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d5179:{NFSU2_TR(0x6d5179);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6d517c:{NFSU2_TR(0x6d517c);
__builtin_memmove((R+4),(R+24),4);
}
B6d517e:{NFSU2_TR(0x6d517e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d5183ull));
TAIL_STATIC(0x6d4c9au,6d4);
}
B6d5183:L6d5183:{c.instructions+=2;NFSU2_TR(0x6d5183);
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
B6d5185:{NFSU2_TR(0x6d5185);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d5192;}}
}
B6d5187:L6d5187:{c.instructions+=1;NFSU2_TR(0x6d5187);
if(r1(R+518)){{goto L6d5195;}}
}
B6d5189:L6d5189:{c.instructions+=3;NFSU2_TR(0x6d5189);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6d518a:{NFSU2_TR(0x6d518a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6d518d:{NFSU2_TR(0x6d518d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d5176u);}goto L6d5176;}}
}
B6d518f:L6d518f:{c.instructions+=2;NFSU2_TR(0x6d518f);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6d5191:{NFSU2_TR(0x6d5191);
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
B6d5192:L6d5192:{c.instructions+=3;NFSU2_TR(0x6d5192);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d5193:{NFSU2_TR(0x6d5193);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d5194:{NFSU2_TR(0x6d5194);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d5195:L6d5195:{c.instructions+=2;NFSU2_TR(0x6d5195);
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
B6d5197:{NFSU2_TR(0x6d5197);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d5192u);}goto L6d5192;}
}
B6d5199:L6d5199:{c.instructions+=25;NFSU2_TR(0x6d5199);
__builtin_memmove((R+28),(R+28),4);
}
B6d519b:{NFSU2_TR(0x6d519b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d519c:{NFSU2_TR(0x6d519c);
__builtin_memmove((R+20),(R+16),4);
}
B6d519e:{NFSU2_TR(0x6d519e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d519f:{NFSU2_TR(0x6d519f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d51a0:{NFSU2_TR(0x6d51a0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d51a1:{NFSU2_TR(0x6d51a1);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6d51a3:{NFSU2_TR(0x6d51a3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d51a4:{NFSU2_TR(0x6d51a4);
__builtin_memmove((R+24),(R+4),4);
}
B6d51a6:{NFSU2_TR(0x6d51a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d51a9:{NFSU2_TR(0x6d51a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d51ac:{NFSU2_TR(0x6d51ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d51af:{NFSU2_TR(0x6d51af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d51b2:{NFSU2_TR(0x6d51b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d51b5:{NFSU2_TR(0x6d51b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d51b8:{NFSU2_TR(0x6d51b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d51bb:{NFSU2_TR(0x6d51bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d51be:{NFSU2_TR(0x6d51be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d51c1:{NFSU2_TR(0x6d51c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d51c4:{NFSU2_TR(0x6d51c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d51c7:{NFSU2_TR(0x6d51c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d51ca:{NFSU2_TR(0x6d51ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d51cd:{NFSU2_TR(0x6d51cd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d51ce:{NFSU2_TR(0x6d51ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d51d1:{NFSU2_TR(0x6d51d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d51d6ull));
TAIL_STATIC(0x69e219u,69e);
}
B6d51d6:L6d51d6:{c.instructions+=4;NFSU2_TR(0x6d51d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d51d9:{NFSU2_TR(0x6d51d9);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6d51dc:{NFSU2_TR(0x6d51dc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d51dd:{NFSU2_TR(0x6d51dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d51e2ull));
TAIL_STATIC(0x575620u,575);
}
B6d51e2:L6d51e2:{c.instructions+=4;NFSU2_TR(0x6d51e2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d51e4:{NFSU2_TR(0x6d51e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d51e5:{NFSU2_TR(0x6d51e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d51e8:{NFSU2_TR(0x6d51e8);
if(r1(R+518)){{goto L6d5579;}}
}
B6d51ee:L6d51ee:{c.instructions+=4;NFSU2_TR(0x6d51ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d51f1:{NFSU2_TR(0x6d51f1);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6d51f4:{NFSU2_TR(0x6d51f4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d51f5:{NFSU2_TR(0x6d51f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d51faull));
TAIL_STATIC(0x575620u,575);
}
B6d51fa:L6d51fa:{c.instructions+=4;NFSU2_TR(0x6d51fa);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d51fc:{NFSU2_TR(0x6d51fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d51fd:{NFSU2_TR(0x6d51fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d5200:{NFSU2_TR(0x6d5200);
if(r1(R+518)){{goto L6d5579;}}
}
B6d5206:L6d5206:{c.instructions+=6;NFSU2_TR(0x6d5206);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d5209:{NFSU2_TR(0x6d5209);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d520c:{NFSU2_TR(0x6d520c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6d520f:{NFSU2_TR(0x6d520f);
__builtin_memmove((R+8),(R+4),4);
}
B6d5211:{NFSU2_TR(0x6d5211);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6d5214:{NFSU2_TR(0x6d5214);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6d5216:L6d5216:{c.instructions+=1;NFSU2_TR(0x6d5216);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6d5218;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d5216u);}goto L6d5216;}
}
B6d5218:L6d5218:{c.instructions+=2;NFSU2_TR(0x6d5218);
__builtin_memmove((R+4),(R+8),4);
}
B6d521a:{NFSU2_TR(0x6d521a);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6d521d:L6d521d:{c.instructions+=1;NFSU2_TR(0x6d521d);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L6d521f;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d521du);}goto L6d521d;}
}
B6d521f:L6d521f:{c.instructions+=6;NFSU2_TR(0x6d521f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d5222:{NFSU2_TR(0x6d5222);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d5225:{NFSU2_TR(0x6d5225);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6d5228:{NFSU2_TR(0x6d5228);
__builtin_memmove((R+8),(R+4),4);
}
B6d522a:{NFSU2_TR(0x6d522a);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6d522d:{NFSU2_TR(0x6d522d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6d522f:L6d522f:{c.instructions+=1;NFSU2_TR(0x6d522f);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6d5231;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d522fu);}goto L6d522f;}
}
B6d5231:L6d5231:{c.instructions+=2;NFSU2_TR(0x6d5231);
__builtin_memmove((R+4),(R+8),4);
}
B6d5233:{NFSU2_TR(0x6d5233);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6d5236:L6d5236:{c.instructions+=1;NFSU2_TR(0x6d5236);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L6d5238;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d5236u);}goto L6d5236;}
}
B6d5238:L6d5238:{c.instructions+=3;NFSU2_TR(0x6d5238);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d523b:{NFSU2_TR(0x6d523b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d523e:{NFSU2_TR(0x6d523e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d52ab;}}
}
B6d5240:L6d5240:{c.instructions+=6;NFSU2_TR(0x6d5240);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d5243:{NFSU2_TR(0x6d5243);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d5246:{NFSU2_TR(0x6d5246);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d5249:{NFSU2_TR(0x6d5249);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6d524c:{NFSU2_TR(0x6d524c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+6,u16(u32(r2(U+4))&u32(u16(0xfff0ull))));
w1(R+518,u8((r2(U+6))==(u16(0x0ull))));
}
B6d5252:{NFSU2_TR(0x6d5252);
if(r1(R+518)){{goto L6d52a0;}}
}
B6d5254:L6d5254:{c.instructions+=3;NFSU2_TR(0x6d5254);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d5257:{NFSU2_TR(0x6d5257);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d525a:{NFSU2_TR(0x6d525a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d527a;}}
}
B6d525c:L6d525c:{c.instructions+=6;NFSU2_TR(0x6d525c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d525f:{NFSU2_TR(0x6d525f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d5262:{NFSU2_TR(0x6d5262);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6d5265:{NFSU2_TR(0x6d5265);
__builtin_memmove((R+4),(R+24),4);
}
B6d5267:{NFSU2_TR(0x6d5267);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d526a:{NFSU2_TR(0x6d526a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d526full));
TAIL_STATIC(0x6d4a3du,6d4);
}
B6d526f:L6d526f:{c.instructions+=4;NFSU2_TR(0x6d526f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d5272:{NFSU2_TR(0x6d5272);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d5275:{NFSU2_TR(0x6d5275);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6d5278:{NFSU2_TR(0x6d5278);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d525cu);}goto L6d525c;}}
}
B6d527a:L6d527a:{c.instructions+=3;NFSU2_TR(0x6d527a);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d527d:{NFSU2_TR(0x6d527d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d5280:{NFSU2_TR(0x6d5280);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d52a0;}}
}
B6d5282:L6d5282:{c.instructions+=6;NFSU2_TR(0x6d5282);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d5285:{NFSU2_TR(0x6d5285);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d5288:{NFSU2_TR(0x6d5288);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6d528b:{NFSU2_TR(0x6d528b);
__builtin_memmove((R+4),(R+24),4);
}
B6d528d:{NFSU2_TR(0x6d528d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d5290:{NFSU2_TR(0x6d5290);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d5295ull));
TAIL_STATIC(0x6d49c8u,6d4);
}
B6d5295:L6d5295:{c.instructions+=4;NFSU2_TR(0x6d5295);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d5298:{NFSU2_TR(0x6d5298);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d529b:{NFSU2_TR(0x6d529b);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6d529e:{NFSU2_TR(0x6d529e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d5282u);}goto L6d5282;}}
}
B6d52a0:L6d52a0:{c.instructions+=4;NFSU2_TR(0x6d52a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d52a3:{NFSU2_TR(0x6d52a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d52a6:{NFSU2_TR(0x6d52a6);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6d52a9:{NFSU2_TR(0x6d52a9);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d5240u);}goto L6d5240;}}
}
B6d52ab:L6d52ab:{c.instructions+=4;NFSU2_TR(0x6d52ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d52ae:{NFSU2_TR(0x6d52ae);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6d52b1:{NFSU2_TR(0x6d52b1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d52b2:{NFSU2_TR(0x6d52b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d52b7ull));
TAIL_STATIC(0x575620u,575);
}
B6d52b7:L6d52b7:{c.instructions+=4;NFSU2_TR(0x6d52b7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d52b9:{NFSU2_TR(0x6d52b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d52ba:{NFSU2_TR(0x6d52ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d52bd:{NFSU2_TR(0x6d52bd);
if(r1(R+518)){{goto L6d5579;}}
}
B6d52c3:L6d52c3:{c.instructions+=4;NFSU2_TR(0x6d52c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d52c6:{NFSU2_TR(0x6d52c6);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6d52c9:{NFSU2_TR(0x6d52c9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d52ca:{NFSU2_TR(0x6d52ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d52cfull));
TAIL_STATIC(0x575620u,575);
}
B6d52cf:L6d52cf:{c.instructions+=4;NFSU2_TR(0x6d52cf);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d52d1:{NFSU2_TR(0x6d52d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d52d2:{NFSU2_TR(0x6d52d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d52d5:{NFSU2_TR(0x6d52d5);
if(r1(R+518)){{goto L6d5579;}}
}
B6d52db:L6d52db:{c.instructions+=5;NFSU2_TR(0x6d52db);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6d52dd:{NFSU2_TR(0x6d52dd);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6d52df:{NFSU2_TR(0x6d52df);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6d52e1:{NFSU2_TR(0x6d52e1);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d52e4:{NFSU2_TR(0x6d52e4);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d530b;}}
}
B6d52e6:L6d52e6:{c.instructions+=13;NFSU2_TR(0x6d52e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d52e9:{NFSU2_TR(0x6d52e9);
__builtin_memmove((R+0),(R+8),4);
}
B6d52eb:{NFSU2_TR(0x6d52eb);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6d52ee:{NFSU2_TR(0x6d52ee);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6d52f1:{NFSU2_TR(0x6d52f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d52f4:{NFSU2_TR(0x6d52f4);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+8))));
}
B6d52f7:{NFSU2_TR(0x6d52f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d52fa:{NFSU2_TR(0x6d52fa);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6d52fd:{NFSU2_TR(0x6d52fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d5300:{NFSU2_TR(0x6d5300);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+8))));
}
B6d5303:{NFSU2_TR(0x6d5303);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6d5304:{NFSU2_TR(0x6d5304);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6d5307:{NFSU2_TR(0x6d5307);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d52e6u);}goto L6d52e6;}}
}
B6d5309:L6d5309:{c.instructions+=1;NFSU2_TR(0x6d5309);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6d530b:L6d530b:{c.instructions+=4;NFSU2_TR(0x6d530b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6d530e:{NFSU2_TR(0x6d530e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d530f:{NFSU2_TR(0x6d530f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d5312:{NFSU2_TR(0x6d5312);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d5317ull));
TAIL_STATIC(0x575620u,575);
}
B6d5317:L6d5317:{c.instructions+=4;NFSU2_TR(0x6d5317);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d5319:{NFSU2_TR(0x6d5319);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d531a:{NFSU2_TR(0x6d531a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d531d:{NFSU2_TR(0x6d531d);
if(r1(R+518)){{goto L6d5579;}}
}
B6d5323:L6d5323:{c.instructions+=2;NFSU2_TR(0x6d5323);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d5326:{NFSU2_TR(0x6d5326);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d532bull));
TAIL_STATIC(0x575620u,575);
}
B6d532b:L6d532b:{c.instructions+=4;NFSU2_TR(0x6d532b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d532d:{NFSU2_TR(0x6d532d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d532e:{NFSU2_TR(0x6d532e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d5331:{NFSU2_TR(0x6d5331);
if(r1(R+518)){{goto L6d5579;}}
}
B6d5337:L6d5337:{c.instructions+=2;NFSU2_TR(0x6d5337);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d533a:{NFSU2_TR(0x6d533a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d533full));
TAIL_STATIC(0x575620u,575);
}
B6d533f:L6d533f:{c.instructions+=4;NFSU2_TR(0x6d533f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d5341:{NFSU2_TR(0x6d5341);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d5342:{NFSU2_TR(0x6d5342);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d5345:{NFSU2_TR(0x6d5345);
if(r1(R+518)){{goto L6d5579;}}
}
B6d534b:L6d534b:{c.instructions+=4;NFSU2_TR(0x6d534b);
__builtin_memmove((R+0),(R+28),4);
}
B6d534d:{NFSU2_TR(0x6d534d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6d5350:{NFSU2_TR(0x6d5350);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d5351:{NFSU2_TR(0x6d5351);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d5356ull));
TAIL_STATIC(0x575620u,575);
}
B6d5356:L6d5356:{c.instructions+=4;NFSU2_TR(0x6d5356);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d5358:{NFSU2_TR(0x6d5358);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d5359:{NFSU2_TR(0x6d5359);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d535c:{NFSU2_TR(0x6d535c);
if(r1(R+518)){{goto L6d5579;}}
}
B6d5362:L6d5362:{c.instructions+=6;NFSU2_TR(0x6d5362);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d5365:{NFSU2_TR(0x6d5365);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d5368:{NFSU2_TR(0x6d5368);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6d536b:{NFSU2_TR(0x6d536b);
__builtin_memmove((R+8),(R+4),4);
}
B6d536d:{NFSU2_TR(0x6d536d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6d5370:{NFSU2_TR(0x6d5370);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6d5372:L6d5372:{c.instructions+=1;NFSU2_TR(0x6d5372);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6d5374;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d5372u);}goto L6d5372;}
}
B6d5374:L6d5374:{c.instructions+=2;NFSU2_TR(0x6d5374);
__builtin_memmove((R+4),(R+8),4);
}
B6d5376:{NFSU2_TR(0x6d5376);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6d5379:L6d5379:{c.instructions+=1;NFSU2_TR(0x6d5379);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L6d537b;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d5379u);}goto L6d5379;}
}
B6d537b:L6d537b:{c.instructions+=6;NFSU2_TR(0x6d537b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d537e:{NFSU2_TR(0x6d537e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d5381:{NFSU2_TR(0x6d5381);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6d5384:{NFSU2_TR(0x6d5384);
__builtin_memmove((R+8),(R+4),4);
}
B6d5386:{NFSU2_TR(0x6d5386);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6d5389:{NFSU2_TR(0x6d5389);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6d538b:L6d538b:{c.instructions+=1;NFSU2_TR(0x6d538b);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6d538d;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d538bu);}goto L6d538b;}
}
B6d538d:L6d538d:{c.instructions+=2;NFSU2_TR(0x6d538d);
__builtin_memmove((R+4),(R+8),4);
}
B6d538f:{NFSU2_TR(0x6d538f);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6d5392:L6d5392:{c.instructions+=1;NFSU2_TR(0x6d5392);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L6d5394;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d5392u);}goto L6d5392;}
}
B6d5394:L6d5394:{c.instructions+=3;NFSU2_TR(0x6d5394);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d5397:{NFSU2_TR(0x6d5397);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d539a:{NFSU2_TR(0x6d539a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d5407;}}
}
B6d539c:L6d539c:{c.instructions+=6;NFSU2_TR(0x6d539c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d539f:{NFSU2_TR(0x6d539f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d53a2:{NFSU2_TR(0x6d53a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d53a5:{NFSU2_TR(0x6d53a5);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6d53a8:{NFSU2_TR(0x6d53a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+6,u16(u32(r2(U+4))&u32(u16(0xfff0ull))));
w1(R+518,u8((r2(U+6))==(u16(0x0ull))));
}
B6d53ae:{NFSU2_TR(0x6d53ae);
if(r1(R+518)){{goto L6d53fc;}}
}
B6d53b0:L6d53b0:{c.instructions+=3;NFSU2_TR(0x6d53b0);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d53b3:{NFSU2_TR(0x6d53b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d53b6:{NFSU2_TR(0x6d53b6);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d53d6;}}
}
B6d53b8:L6d53b8:{c.instructions+=6;NFSU2_TR(0x6d53b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d53bb:{NFSU2_TR(0x6d53bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d53be:{NFSU2_TR(0x6d53be);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6d53c1:{NFSU2_TR(0x6d53c1);
__builtin_memmove((R+4),(R+24),4);
}
B6d53c3:{NFSU2_TR(0x6d53c3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d53c6:{NFSU2_TR(0x6d53c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d53cbull));
TAIL_STATIC(0x6d49c8u,6d4);
}
B6d53cb:L6d53cb:{c.instructions+=4;NFSU2_TR(0x6d53cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d53ce:{NFSU2_TR(0x6d53ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d53d1:{NFSU2_TR(0x6d53d1);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6d53d4:{NFSU2_TR(0x6d53d4);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d53b8u);}goto L6d53b8;}}
}
B6d53d6:L6d53d6:{c.instructions+=3;NFSU2_TR(0x6d53d6);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d53d9:{NFSU2_TR(0x6d53d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d53dc:{NFSU2_TR(0x6d53dc);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d53fc;}}
}
B6d53de:L6d53de:{c.instructions+=6;NFSU2_TR(0x6d53de);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d53e1:{NFSU2_TR(0x6d53e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d53e4:{NFSU2_TR(0x6d53e4);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6d53e7:{NFSU2_TR(0x6d53e7);
__builtin_memmove((R+4),(R+24),4);
}
B6d53e9:{NFSU2_TR(0x6d53e9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d53ec:{NFSU2_TR(0x6d53ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d53f1ull));
TAIL_STATIC(0x6d4a3du,6d4);
}
B6d53f1:L6d53f1:{c.instructions+=4;NFSU2_TR(0x6d53f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d53f4:{NFSU2_TR(0x6d53f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d53f7:{NFSU2_TR(0x6d53f7);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6d53fa:{NFSU2_TR(0x6d53fa);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d53deu);}goto L6d53de;}}
}
B6d53fc:L6d53fc:{c.instructions+=4;NFSU2_TR(0x6d53fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d53ff:{NFSU2_TR(0x6d53ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d5402:{NFSU2_TR(0x6d5402);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6d5405:{NFSU2_TR(0x6d5405);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d539cu);}goto L6d539c;}}
}
B6d5407:L6d5407:{c.instructions+=3;NFSU2_TR(0x6d5407);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d540a:{NFSU2_TR(0x6d540a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d540d:{NFSU2_TR(0x6d540d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d5454;}}
}
B6d540f:L6d540f:{c.instructions+=12;NFSU2_TR(0x6d540f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d5412:{NFSU2_TR(0x6d5412);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d5415:{NFSU2_TR(0x6d5415);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d5418:{NFSU2_TR(0x6d5418);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6d541b:{NFSU2_TR(0x6d541b);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B6d541d:{NFSU2_TR(0x6d541d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d541e:{NFSU2_TR(0x6d541e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d5421:{NFSU2_TR(0x6d5421);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6d5424:{NFSU2_TR(0x6d5424);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6d5427:{NFSU2_TR(0x6d5427);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d5428:{NFSU2_TR(0x6d5428);
__builtin_memmove((R+4),(R+24),4);
}
B6d542a:{NFSU2_TR(0x6d542a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d542full));
TAIL_STATIC(0x6d4b37u,6d4);
}
B6d542f:L6d542f:{c.instructions+=10;NFSU2_TR(0x6d542f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d5432:{NFSU2_TR(0x6d5432);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d5435:{NFSU2_TR(0x6d5435);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B6d5437:{NFSU2_TR(0x6d5437);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d5438:{NFSU2_TR(0x6d5438);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d543b:{NFSU2_TR(0x6d543b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6d543e:{NFSU2_TR(0x6d543e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6d5441:{NFSU2_TR(0x6d5441);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d5442:{NFSU2_TR(0x6d5442);
__builtin_memmove((R+4),(R+24),4);
}
B6d5444:{NFSU2_TR(0x6d5444);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d5449ull));
TAIL_STATIC(0x6d4b37u,6d4);
}
B6d5449:L6d5449:{c.instructions+=4;NFSU2_TR(0x6d5449);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d544c:{NFSU2_TR(0x6d544c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d544f:{NFSU2_TR(0x6d544f);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6d5452:{NFSU2_TR(0x6d5452);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d540fu);}goto L6d540f;}}
}
B6d5454:L6d5454:{c.instructions+=4;NFSU2_TR(0x6d5454);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d5457:{NFSU2_TR(0x6d5457);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6d545a:{NFSU2_TR(0x6d545a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d545b:{NFSU2_TR(0x6d545b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d5460ull));
TAIL_STATIC(0x575620u,575);
}
B6d5460:L6d5460:{c.instructions+=4;NFSU2_TR(0x6d5460);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d5462:{NFSU2_TR(0x6d5462);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d5463:{NFSU2_TR(0x6d5463);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d5466:{NFSU2_TR(0x6d5466);
if(r1(R+518)){{goto L6d5579;}}
}
B6d546c:L6d546c:{c.instructions+=4;NFSU2_TR(0x6d546c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d546f:{NFSU2_TR(0x6d546f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6d5472:{NFSU2_TR(0x6d5472);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d5473:{NFSU2_TR(0x6d5473);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d5478ull));
TAIL_STATIC(0x575620u,575);
}
B6d5478:L6d5478:{c.instructions+=4;NFSU2_TR(0x6d5478);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d547a:{NFSU2_TR(0x6d547a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d547b:{NFSU2_TR(0x6d547b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d547e:{NFSU2_TR(0x6d547e);
if(r1(R+518)){{goto L6d5579;}}
}
B6d5484:L6d5484:{c.instructions+=4;NFSU2_TR(0x6d5484);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d5487:{NFSU2_TR(0x6d5487);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6d548a:{NFSU2_TR(0x6d548a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d548b:{NFSU2_TR(0x6d548b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d5490ull));
TAIL_STATIC(0x575620u,575);
}
B6d5490:L6d5490:{c.instructions+=4;NFSU2_TR(0x6d5490);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d5492:{NFSU2_TR(0x6d5492);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d5493:{NFSU2_TR(0x6d5493);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d5496:{NFSU2_TR(0x6d5496);
if(r1(R+518)){{goto L6d5579;}}
}
B6d549c:L6d549c:{c.instructions+=4;NFSU2_TR(0x6d549c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d549f:{NFSU2_TR(0x6d549f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6d54a2:{NFSU2_TR(0x6d54a2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d54a3:{NFSU2_TR(0x6d54a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d54a8ull));
TAIL_STATIC(0x575620u,575);
}
B6d54a8:L6d54a8:{c.instructions+=4;NFSU2_TR(0x6d54a8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d54aa:{NFSU2_TR(0x6d54aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d54ab:{NFSU2_TR(0x6d54ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d54ae:{NFSU2_TR(0x6d54ae);
if(r1(R+518)){{goto L6d5579;}}
}
B6d54b4:L6d54b4:{c.instructions+=2;NFSU2_TR(0x6d54b4);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d54b8:{NFSU2_TR(0x6d54b8);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d54f8;}}
}
B6d54ba:L6d54ba:{c.instructions+=12;NFSU2_TR(0x6d54ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d54bd:{NFSU2_TR(0x6d54bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d54c0:{NFSU2_TR(0x6d54c0);
__builtin_memmove((R+28),(R+12),4);
}
B6d54c2:{NFSU2_TR(0x6d54c2);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6d54c5:{NFSU2_TR(0x6d54c5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6d54c8:{NFSU2_TR(0x6d54c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d54cb:{NFSU2_TR(0x6d54cb);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6d54ce:{NFSU2_TR(0x6d54ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d54d1:{NFSU2_TR(0x6d54d1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6d54d4:{NFSU2_TR(0x6d54d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d54d8:{NFSU2_TR(0x6d54d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+6,u16(u32(r2(U+4))&u32(u16(0xfff0ull))));
w1(R+518,u8((r2(U+6))==(u16(0x0ull))));
}
B6d54de:{NFSU2_TR(0x6d54de);
if(r1(R+518)){{goto L6d54e9;}}
}
B6d54e0:L6d54e0:{c.instructions+=1;NFSU2_TR(0x6d54e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d54e5ull));
TAIL_STATIC(0x699107u,699);
}
B6d54e5:L6d54e5:{c.instructions+=2;NFSU2_TR(0x6d54e5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d54e7:{NFSU2_TR(0x6d54e7);
if(r1(R+518)){{goto L6d54ec;}}
}
B6d54e9:L6d54e9:{c.instructions+=2;NFSU2_TR(0x6d54e9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6d54eb:{NFSU2_TR(0x6d54eb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6d54ec:L6d54ec:{c.instructions+=5;NFSU2_TR(0x6d54ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d54ef:{NFSU2_TR(0x6d54ef);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6d54f0:{NFSU2_TR(0x6d54f0);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6d54f3:{NFSU2_TR(0x6d54f3);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B6d54f6:{NFSU2_TR(0x6d54f6);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d54bau);}goto L6d54ba;}}
}
B6d54f8:L6d54f8:{c.instructions+=6;NFSU2_TR(0x6d54f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d54fb:{NFSU2_TR(0x6d54fb);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6d54fe:{NFSU2_TR(0x6d54fe);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6d5500:{NFSU2_TR(0x6d5500);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d5501:{NFSU2_TR(0x6d5501);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d5504:{NFSU2_TR(0x6d5504);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d5509ull));
TAIL_STATIC(0x575620u,575);
}
B6d5509:L6d5509:{c.instructions+=4;NFSU2_TR(0x6d5509);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d550b:{NFSU2_TR(0x6d550b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d550c:{NFSU2_TR(0x6d550c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d550f:{NFSU2_TR(0x6d550f);
if(r1(R+518)){{goto L6d5579;}}
}
B6d5511:L6d5511:{c.instructions+=4;NFSU2_TR(0x6d5511);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d5514:{NFSU2_TR(0x6d5514);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6d5517:{NFSU2_TR(0x6d5517);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d5518:{NFSU2_TR(0x6d5518);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d551dull));
TAIL_STATIC(0x575620u,575);
}
B6d551d:L6d551d:{c.instructions+=4;NFSU2_TR(0x6d551d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d551f:{NFSU2_TR(0x6d551f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d5520:{NFSU2_TR(0x6d5520);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d5523:{NFSU2_TR(0x6d5523);
if(r1(R+518)){{goto L6d5579;}}
}
B6d5525:L6d5525:{c.instructions+=4;NFSU2_TR(0x6d5525);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d5528:{NFSU2_TR(0x6d5528);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6d552b:{NFSU2_TR(0x6d552b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d552c:{NFSU2_TR(0x6d552c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d5531ull));
TAIL_STATIC(0x575620u,575);
}
B6d5531:L6d5531:{c.instructions+=4;NFSU2_TR(0x6d5531);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d5533:{NFSU2_TR(0x6d5533);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d5534:{NFSU2_TR(0x6d5534);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d5537:{NFSU2_TR(0x6d5537);
if(r1(R+518)){{goto L6d5579;}}
}
B6d5539:L6d5539:{c.instructions+=2;NFSU2_TR(0x6d5539);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d553c:{NFSU2_TR(0x6d553c);
if(r1(R+518)){{goto L6d557e;}}
}
B6d553e:L6d553e:{c.instructions+=1;NFSU2_TR(0x6d553e);
{goto L6d5545;}
}
B6d5540:L6d5540:{c.instructions+=2;NFSU2_TR(0x6d5540);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d5543:{NFSU2_TR(0x6d5543);
if(r1(R+518)){{goto L6d5555;}}
}
B6d5545:L6d5545:{c.instructions+=2;NFSU2_TR(0x6d5545);
__builtin_memmove((R+4),(R+24),4);
}
B6d5547:{NFSU2_TR(0x6d5547);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d554cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d512cu);}goto L6d512c;}
}
B6d554c:L6d554c:{c.instructions+=2;NFSU2_TR(0x6d554c);
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
B6d554e:{NFSU2_TR(0x6d554e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d5540u);}goto L6d5540;}}
}
B6d5550:L6d5550:{c.instructions+=1;NFSU2_TR(0x6d5550);
{goto L6d55fb;}
}
B6d5555:L6d5555:{c.instructions+=3;NFSU2_TR(0x6d5555);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6d5557:{NFSU2_TR(0x6d5557);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d555a:{NFSU2_TR(0x6d555a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d557e;}}
}
B6d555c:L6d555c:{c.instructions+=10;NFSU2_TR(0x6d555c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d555f:{NFSU2_TR(0x6d555f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6d5562:{NFSU2_TR(0x6d5562);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d5565:{NFSU2_TR(0x6d5565);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d5568:{NFSU2_TR(0x6d5568);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d556b:{NFSU2_TR(0x6d556b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6d556e:{NFSU2_TR(0x6d556e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6d5571:{NFSU2_TR(0x6d5571);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6d5572:{NFSU2_TR(0x6d5572);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6d5575:{NFSU2_TR(0x6d5575);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d555cu);}goto L6d555c;}}
}
B6d5577:L6d5577:{c.instructions+=1;NFSU2_TR(0x6d5577);
{goto L6d557e;}
}
B6d5579:L6d5579:{c.instructions+=1;NFSU2_TR(0x6d5579);
w4(R+28,u32(0x8007000eull));
}
B6d557e:L6d557e:{c.instructions+=2;NFSU2_TR(0x6d557e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d5581:{NFSU2_TR(0x6d5581);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d5586ull));
TAIL_STATIC(0x575630u,575);
}
B6d5586:L6d5586:{c.instructions+=2;NFSU2_TR(0x6d5586);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d5589:{NFSU2_TR(0x6d5589);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d558eull));
TAIL_STATIC(0x575630u,575);
}
B6d558e:L6d558e:{c.instructions+=2;NFSU2_TR(0x6d558e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d5591:{NFSU2_TR(0x6d5591);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d5596ull));
TAIL_STATIC(0x575630u,575);
}
B6d5596:L6d5596:{c.instructions+=2;NFSU2_TR(0x6d5596);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d5599:{NFSU2_TR(0x6d5599);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d559eull));
TAIL_STATIC(0x575630u,575);
}
B6d559e:L6d559e:{c.instructions+=2;NFSU2_TR(0x6d559e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d55a1:{NFSU2_TR(0x6d55a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d55a6ull));
TAIL_STATIC(0x575630u,575);
}
B6d55a6:L6d55a6:{c.instructions+=2;NFSU2_TR(0x6d55a6);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d55a9:{NFSU2_TR(0x6d55a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d55aeull));
TAIL_STATIC(0x575630u,575);
}
B6d55ae:L6d55ae:{c.instructions+=2;NFSU2_TR(0x6d55ae);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d55b1:{NFSU2_TR(0x6d55b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d55b6ull));
TAIL_STATIC(0x575630u,575);
}
B6d55b6:L6d55b6:{c.instructions+=2;NFSU2_TR(0x6d55b6);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d55b9:{NFSU2_TR(0x6d55b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d55beull));
TAIL_STATIC(0x575630u,575);
}
B6d55be:L6d55be:{c.instructions+=2;NFSU2_TR(0x6d55be);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d55c1:{NFSU2_TR(0x6d55c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d55c6ull));
TAIL_STATIC(0x575630u,575);
}
B6d55c6:L6d55c6:{c.instructions+=2;NFSU2_TR(0x6d55c6);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d55c9:{NFSU2_TR(0x6d55c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d55ceull));
TAIL_STATIC(0x575630u,575);
}
B6d55ce:L6d55ce:{c.instructions+=2;NFSU2_TR(0x6d55ce);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d55d1:{NFSU2_TR(0x6d55d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d55d6ull));
TAIL_STATIC(0x575630u,575);
}
B6d55d6:L6d55d6:{c.instructions+=2;NFSU2_TR(0x6d55d6);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d55d9:{NFSU2_TR(0x6d55d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d55deull));
TAIL_STATIC(0x575630u,575);
}
B6d55de:L6d55de:{c.instructions+=2;NFSU2_TR(0x6d55de);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d55e1:{NFSU2_TR(0x6d55e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d55e6ull));
TAIL_STATIC(0x575630u,575);
}
B6d55e6:L6d55e6:{c.instructions+=2;NFSU2_TR(0x6d55e6);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d55e9:{NFSU2_TR(0x6d55e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d55eeull));
TAIL_STATIC(0x575630u,575);
}
B6d55ee:L6d55ee:{c.instructions+=2;NFSU2_TR(0x6d55ee);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d55f1:{NFSU2_TR(0x6d55f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d55f6ull));
TAIL_STATIC(0x575630u,575);
}
B6d55f6:L6d55f6:{c.instructions+=2;NFSU2_TR(0x6d55f6);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x3cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x3cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x3cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6d55f9:{NFSU2_TR(0x6d55f9);
__builtin_memmove((R+0),(R+28),4);
}
B6d55fb:L6d55fb:{c.instructions+=5;NFSU2_TR(0x6d55fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d55fc:{NFSU2_TR(0x6d55fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d55fd:{NFSU2_TR(0x6d55fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6d55fe:{NFSU2_TR(0x6d55fe);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6d55ff:{NFSU2_TR(0x6d55ff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
XIT:NFSU2_TR_EXIT(0x6d5,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
