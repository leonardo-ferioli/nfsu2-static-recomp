#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_6db(u8* __restrict R,Cpu& c);
u32 body_6e2(u8* __restrict R,Cpu& c);
u32 body_6e3(u8* __restrict R,Cpu& c);
u32 body_6e4(u8* __restrict R,Cpu& c);
u32 body_6e6(u8* __restrict R,Cpu& c);
u32 body_6ef(u8* __restrict R,Cpu& c);
u32 body_6f0(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6e5,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6e5,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6e5(u8* __restrict R,Cpu& c);
u32 page_6e5(Cpu& c){return body_6e5(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6e5(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6e5000:goto L6e5000;
case 0x6e5001:c.instructions+=4;goto B6e5001;
case 0x6e5003:c.instructions+=3;goto B6e5003;
case 0x6e5004:c.instructions+=2;goto B6e5004;
case 0x6e5007:c.instructions+=1;goto B6e5007;
case 0x6e500a:goto L6e500a;
case 0x6e500d:c.instructions+=2;goto B6e500d;
case 0x6e5010:c.instructions+=1;goto B6e5010;
case 0x6e5012:goto L6e5012;
case 0x6e5014:c.instructions+=1;goto B6e5014;
case 0x6e5016:goto L6e5016;
case 0x6e5017:goto L6e5017;
case 0x6e501b:c.instructions+=2;goto B6e501b;
case 0x6e501d:c.instructions+=1;goto B6e501d;
case 0x6e501f:goto L6e501f;
case 0x6e5022:c.instructions+=2;goto B6e5022;
case 0x6e5024:c.instructions+=1;goto B6e5024;
case 0x6e5026:goto L6e5026;
case 0x6e502a:c.instructions+=1;goto B6e502a;
case 0x6e5030:goto L6e5030;
case 0x6e5033:c.instructions+=2;goto B6e5033;
case 0x6e5035:c.instructions+=1;goto B6e5035;
case 0x6e5037:goto L6e5037;
case 0x6e5038:c.instructions+=3;goto B6e5038;
case 0x6e503b:c.instructions+=2;goto B6e503b;
case 0x6e503d:c.instructions+=1;goto B6e503d;
case 0x6e503f:goto L6e503f;
case 0x6e5040:c.instructions+=4;goto B6e5040;
case 0x6e5041:c.instructions+=3;goto B6e5041;
case 0x6e5042:c.instructions+=2;goto B6e5042;
case 0x6e5045:c.instructions+=1;goto B6e5045;
case 0x6e5048:goto L6e5048;
case 0x6e504a:c.instructions+=1;goto B6e504a;
case 0x6e504c:goto L6e504c;
case 0x6e5050:goto L6e5050;
case 0x6e5054:c.instructions+=2;goto B6e5054;
case 0x6e5056:c.instructions+=1;goto B6e5056;
case 0x6e5058:goto L6e5058;
case 0x6e5059:c.instructions+=2;goto B6e5059;
case 0x6e505b:c.instructions+=1;goto B6e505b;
case 0x6e505d:goto L6e505d;
case 0x6e505e:c.instructions+=4;goto B6e505e;
case 0x6e505f:c.instructions+=3;goto B6e505f;
case 0x6e5060:c.instructions+=2;goto B6e5060;
case 0x6e5063:c.instructions+=1;goto B6e5063;
case 0x6e5070:goto L6e5070;
case 0x6e5074:c.instructions+=8;goto B6e5074;
case 0x6e5077:c.instructions+=7;goto B6e5077;
case 0x6e5078:c.instructions+=6;goto B6e5078;
case 0x6e5079:c.instructions+=5;goto B6e5079;
case 0x6e507a:c.instructions+=4;goto B6e507a;
case 0x6e507c:c.instructions+=3;goto B6e507c;
case 0x6e507f:c.instructions+=2;goto B6e507f;
case 0x6e5080:c.instructions+=1;goto B6e5080;
case 0x6e5082:goto L6e5082;
case 0x6e5089:c.instructions+=1;goto B6e5089;
case 0x6e508c:goto L6e508c;
case 0x6e508f:c.instructions+=11;goto B6e508f;
case 0x6e5093:c.instructions+=10;goto B6e5093;
case 0x6e5096:c.instructions+=9;goto B6e5096;
case 0x6e509a:c.instructions+=8;goto B6e509a;
case 0x6e509d:c.instructions+=7;goto B6e509d;
case 0x6e50a0:c.instructions+=6;goto B6e50a0;
case 0x6e50a3:c.instructions+=5;goto B6e50a3;
case 0x6e50a5:c.instructions+=4;goto B6e50a5;
case 0x6e50a9:c.instructions+=3;goto B6e50a9;
case 0x6e50ac:c.instructions+=2;goto B6e50ac;
case 0x6e50b0:c.instructions+=1;goto B6e50b0;
case 0x6e50b2:goto L6e50b2;
case 0x6e50b5:c.instructions+=1;goto B6e50b5;
case 0x6e50b7:goto L6e50b7;
case 0x6e50ba:c.instructions+=5;goto B6e50ba;
case 0x6e50c0:c.instructions+=4;goto B6e50c0;
case 0x6e50c2:c.instructions+=3;goto B6e50c2;
case 0x6e50c6:c.instructions+=2;goto B6e50c6;
case 0x6e50c7:c.instructions+=1;goto B6e50c7;
case 0x6e50ca:goto L6e50ca;
case 0x6e50cc:c.instructions+=3;goto B6e50cc;
case 0x6e50ce:c.instructions+=2;goto B6e50ce;
case 0x6e50d1:c.instructions+=1;goto B6e50d1;
case 0x6e50d3:goto L6e50d3;
case 0x6e50d7:c.instructions+=12;goto B6e50d7;
case 0x6e50dc:c.instructions+=11;goto B6e50dc;
case 0x6e50de:c.instructions+=10;goto B6e50de;
case 0x6e50e1:c.instructions+=9;goto B6e50e1;
case 0x6e50e4:c.instructions+=8;goto B6e50e4;
case 0x6e50e6:c.instructions+=7;goto B6e50e6;
case 0x6e50e9:c.instructions+=6;goto B6e50e9;
case 0x6e50ee:c.instructions+=5;goto B6e50ee;
case 0x6e50f0:c.instructions+=4;goto B6e50f0;
case 0x6e50f4:c.instructions+=3;goto B6e50f4;
case 0x6e50f7:c.instructions+=2;goto B6e50f7;
case 0x6e50fa:c.instructions+=1;goto B6e50fa;
case 0x6e50fc:goto L6e50fc;
case 0x6e50ff:c.instructions+=3;goto B6e50ff;
case 0x6e5102:c.instructions+=2;goto B6e5102;
case 0x6e5106:c.instructions+=1;goto B6e5106;
case 0x6e5109:goto L6e5109;
case 0x6e510a:c.instructions+=2;goto B6e510a;
case 0x6e510c:c.instructions+=1;goto B6e510c;
case 0x6e510e:goto L6e510e;
case 0x6e5112:goto L6e5112;
case 0x6e5116:c.instructions+=3;goto B6e5116;
case 0x6e5117:c.instructions+=2;goto B6e5117;
case 0x6e5119:c.instructions+=1;goto B6e5119;
case 0x6e511e:goto L6e511e;
case 0x6e5121:c.instructions+=14;goto B6e5121;
case 0x6e5124:c.instructions+=13;goto B6e5124;
case 0x6e5125:c.instructions+=12;goto B6e5125;
case 0x6e5128:c.instructions+=11;goto B6e5128;
case 0x6e5129:c.instructions+=10;goto B6e5129;
case 0x6e512b:c.instructions+=9;goto B6e512b;
case 0x6e512e:c.instructions+=8;goto B6e512e;
case 0x6e512f:c.instructions+=7;goto B6e512f;
case 0x6e5130:c.instructions+=6;goto B6e5130;
case 0x6e5133:c.instructions+=5;goto B6e5133;
case 0x6e5136:c.instructions+=4;goto B6e5136;
case 0x6e5137:c.instructions+=3;goto B6e5137;
case 0x6e5138:c.instructions+=2;goto B6e5138;
case 0x6e513a:c.instructions+=1;goto B6e513a;
case 0x6e513f:goto L6e513f;
case 0x6e5141:c.instructions+=2;goto B6e5141;
case 0x6e5144:c.instructions+=1;goto B6e5144;
case 0x6e5146:goto L6e5146;
case 0x6e5148:c.instructions+=1;goto B6e5148;
case 0x6e514a:goto L6e514a;
case 0x6e514f:goto L6e514f;
case 0x6e5153:c.instructions+=6;goto B6e5153;
case 0x6e5157:c.instructions+=5;goto B6e5157;
case 0x6e515b:c.instructions+=4;goto B6e515b;
case 0x6e515f:c.instructions+=3;goto B6e515f;
case 0x6e5161:c.instructions+=2;goto B6e5161;
case 0x6e5164:c.instructions+=1;goto B6e5164;
case 0x6e516a:goto L6e516a;
case 0x6e516e:c.instructions+=3;goto B6e516e;
case 0x6e5171:c.instructions+=2;goto B6e5171;
case 0x6e5173:c.instructions+=1;goto B6e5173;
case 0x6e5175:goto L6e5175;
case 0x6e517a:c.instructions+=6;goto B6e517a;
case 0x6e517e:c.instructions+=5;goto B6e517e;
case 0x6e5182:c.instructions+=4;goto B6e5182;
case 0x6e5186:c.instructions+=3;goto B6e5186;
case 0x6e5188:c.instructions+=2;goto B6e5188;
case 0x6e518b:c.instructions+=1;goto B6e518b;
case 0x6e518d:goto L6e518d;
case 0x6e518f:c.instructions+=1;goto B6e518f;
case 0x6e5191:goto L6e5191;
case 0x6e5195:c.instructions+=4;goto B6e5195;
case 0x6e519b:c.instructions+=3;goto B6e519b;
case 0x6e519d:c.instructions+=2;goto B6e519d;
case 0x6e51a0:c.instructions+=1;goto B6e51a0;
case 0x6e51a2:goto L6e51a2;
case 0x6e51a5:c.instructions+=22;goto B6e51a5;
case 0x6e51a9:c.instructions+=21;goto B6e51a9;
case 0x6e51ad:c.instructions+=20;goto B6e51ad;
case 0x6e51ae:c.instructions+=19;goto B6e51ae;
case 0x6e51b3:c.instructions+=18;goto B6e51b3;
case 0x6e51b5:c.instructions+=17;goto B6e51b5;
case 0x6e51b9:c.instructions+=16;goto B6e51b9;
case 0x6e51bc:c.instructions+=15;goto B6e51bc;
case 0x6e51bd:c.instructions+=14;goto B6e51bd;
case 0x6e51c1:c.instructions+=13;goto B6e51c1;
case 0x6e51c5:c.instructions+=12;goto B6e51c5;
case 0x6e51c6:c.instructions+=11;goto B6e51c6;
case 0x6e51c9:c.instructions+=10;goto B6e51c9;
case 0x6e51cc:c.instructions+=9;goto B6e51cc;
case 0x6e51cf:c.instructions+=8;goto B6e51cf;
case 0x6e51d0:c.instructions+=7;goto B6e51d0;
case 0x6e51d2:c.instructions+=6;goto B6e51d2;
case 0x6e51d3:c.instructions+=5;goto B6e51d3;
case 0x6e51d4:c.instructions+=4;goto B6e51d4;
case 0x6e51d8:c.instructions+=3;goto B6e51d8;
case 0x6e51d9:c.instructions+=2;goto B6e51d9;
case 0x6e51da:c.instructions+=1;goto B6e51da;
case 0x6e51df:goto L6e51df;
case 0x6e51e0:c.instructions+=6;goto B6e51e0;
case 0x6e51e1:c.instructions+=5;goto B6e51e1;
case 0x6e51e2:c.instructions+=4;goto B6e51e2;
case 0x6e51e4:c.instructions+=3;goto B6e51e4;
case 0x6e51e5:c.instructions+=2;goto B6e51e5;
case 0x6e51e8:c.instructions+=1;goto B6e51e8;
case 0x6e51eb:goto L6e51eb;
case 0x6e51ee:c.instructions+=3;goto B6e51ee;
case 0x6e51f0:c.instructions+=2;goto B6e51f0;
case 0x6e51f2:c.instructions+=1;goto B6e51f2;
case 0x6e51f4:goto L6e51f4;
case 0x6e51f8:c.instructions+=1;goto B6e51f8;
case 0x6e5200:goto L6e5200;
case 0x6e5203:c.instructions+=9;goto B6e5203;
case 0x6e5207:c.instructions+=8;goto B6e5207;
case 0x6e520b:c.instructions+=7;goto B6e520b;
case 0x6e520e:c.instructions+=6;goto B6e520e;
case 0x6e5211:c.instructions+=5;goto B6e5211;
case 0x6e5214:c.instructions+=4;goto B6e5214;
case 0x6e5217:c.instructions+=3;goto B6e5217;
case 0x6e5218:c.instructions+=2;goto B6e5218;
case 0x6e521a:c.instructions+=1;goto B6e521a;
case 0x6e521c:goto L6e521c;
case 0x6e521d:c.instructions+=6;goto B6e521d;
case 0x6e521e:c.instructions+=5;goto B6e521e;
case 0x6e521f:c.instructions+=4;goto B6e521f;
case 0x6e5221:c.instructions+=3;goto B6e5221;
case 0x6e5222:c.instructions+=2;goto B6e5222;
case 0x6e5225:c.instructions+=1;goto B6e5225;
case 0x6e5230:goto L6e5230;
case 0x6e5234:c.instructions+=8;goto B6e5234;
case 0x6e5237:c.instructions+=7;goto B6e5237;
case 0x6e5238:c.instructions+=6;goto B6e5238;
case 0x6e5239:c.instructions+=5;goto B6e5239;
case 0x6e523a:c.instructions+=4;goto B6e523a;
case 0x6e523c:c.instructions+=3;goto B6e523c;
case 0x6e523f:c.instructions+=2;goto B6e523f;
case 0x6e5240:c.instructions+=1;goto B6e5240;
case 0x6e5242:goto L6e5242;
case 0x6e5249:c.instructions+=1;goto B6e5249;
case 0x6e524c:goto L6e524c;
case 0x6e524f:c.instructions+=10;goto B6e524f;
case 0x6e5253:c.instructions+=9;goto B6e5253;
case 0x6e5256:c.instructions+=8;goto B6e5256;
case 0x6e5258:c.instructions+=7;goto B6e5258;
case 0x6e525b:c.instructions+=6;goto B6e525b;
case 0x6e525f:c.instructions+=5;goto B6e525f;
case 0x6e5262:c.instructions+=4;goto B6e5262;
case 0x6e5266:c.instructions+=3;goto B6e5266;
case 0x6e5269:c.instructions+=2;goto B6e5269;
case 0x6e526d:c.instructions+=1;goto B6e526d;
case 0x6e526f:goto L6e526f;
case 0x6e5272:c.instructions+=1;goto B6e5272;
case 0x6e5274:goto L6e5274;
case 0x6e527a:c.instructions+=5;goto B6e527a;
case 0x6e527c:c.instructions+=4;goto B6e527c;
case 0x6e527f:c.instructions+=3;goto B6e527f;
case 0x6e5282:c.instructions+=2;goto B6e5282;
case 0x6e5283:c.instructions+=1;goto B6e5283;
case 0x6e5286:goto L6e5286;
case 0x6e5288:c.instructions+=3;goto B6e5288;
case 0x6e528a:c.instructions+=2;goto B6e528a;
case 0x6e528d:c.instructions+=1;goto B6e528d;
case 0x6e528f:goto L6e528f;
case 0x6e5290:c.instructions+=2;goto B6e5290;
case 0x6e5293:c.instructions+=1;goto B6e5293;
case 0x6e5294:goto L6e5294;
case 0x6e5299:c.instructions+=12;goto B6e5299;
case 0x6e529e:c.instructions+=11;goto B6e529e;
case 0x6e52a0:c.instructions+=10;goto B6e52a0;
case 0x6e52a3:c.instructions+=9;goto B6e52a3;
case 0x6e52a6:c.instructions+=8;goto B6e52a6;
case 0x6e52a8:c.instructions+=7;goto B6e52a8;
case 0x6e52ab:c.instructions+=6;goto B6e52ab;
case 0x6e52b0:c.instructions+=5;goto B6e52b0;
case 0x6e52b2:c.instructions+=4;goto B6e52b2;
case 0x6e52b6:c.instructions+=3;goto B6e52b6;
case 0x6e52b9:c.instructions+=2;goto B6e52b9;
case 0x6e52bc:c.instructions+=1;goto B6e52bc;
case 0x6e52be:goto L6e52be;
case 0x6e52c1:c.instructions+=3;goto B6e52c1;
case 0x6e52c4:c.instructions+=2;goto B6e52c4;
case 0x6e52c8:c.instructions+=1;goto B6e52c8;
case 0x6e52cb:goto L6e52cb;
case 0x6e52cc:c.instructions+=2;goto B6e52cc;
case 0x6e52cd:c.instructions+=1;goto B6e52cd;
case 0x6e52cf:goto L6e52cf;
case 0x6e52d3:goto L6e52d3;
case 0x6e52d7:c.instructions+=3;goto B6e52d7;
case 0x6e52d8:c.instructions+=2;goto B6e52d8;
case 0x6e52da:c.instructions+=1;goto B6e52da;
case 0x6e52df:goto L6e52df;
case 0x6e52e2:c.instructions+=14;goto B6e52e2;
case 0x6e52e5:c.instructions+=13;goto B6e52e5;
case 0x6e52e6:c.instructions+=12;goto B6e52e6;
case 0x6e52e9:c.instructions+=11;goto B6e52e9;
case 0x6e52ea:c.instructions+=10;goto B6e52ea;
case 0x6e52ec:c.instructions+=9;goto B6e52ec;
case 0x6e52ef:c.instructions+=8;goto B6e52ef;
case 0x6e52f0:c.instructions+=7;goto B6e52f0;
case 0x6e52f1:c.instructions+=6;goto B6e52f1;
case 0x6e52f4:c.instructions+=5;goto B6e52f4;
case 0x6e52f7:c.instructions+=4;goto B6e52f7;
case 0x6e52f8:c.instructions+=3;goto B6e52f8;
case 0x6e52f9:c.instructions+=2;goto B6e52f9;
case 0x6e52fb:c.instructions+=1;goto B6e52fb;
case 0x6e5300:goto L6e5300;
case 0x6e5302:c.instructions+=2;goto B6e5302;
case 0x6e5305:c.instructions+=1;goto B6e5305;
case 0x6e5307:goto L6e5307;
case 0x6e5309:c.instructions+=1;goto B6e5309;
case 0x6e530b:goto L6e530b;
case 0x6e5310:goto L6e5310;
case 0x6e5314:c.instructions+=6;goto B6e5314;
case 0x6e5318:c.instructions+=5;goto B6e5318;
case 0x6e531c:c.instructions+=4;goto B6e531c;
case 0x6e5320:c.instructions+=3;goto B6e5320;
case 0x6e5322:c.instructions+=2;goto B6e5322;
case 0x6e5325:c.instructions+=1;goto B6e5325;
case 0x6e532b:goto L6e532b;
case 0x6e532f:c.instructions+=3;goto B6e532f;
case 0x6e5332:c.instructions+=2;goto B6e5332;
case 0x6e5334:c.instructions+=1;goto B6e5334;
case 0x6e5336:goto L6e5336;
case 0x6e533b:c.instructions+=6;goto B6e533b;
case 0x6e533f:c.instructions+=5;goto B6e533f;
case 0x6e5343:c.instructions+=4;goto B6e5343;
case 0x6e5347:c.instructions+=3;goto B6e5347;
case 0x6e5349:c.instructions+=2;goto B6e5349;
case 0x6e534c:c.instructions+=1;goto B6e534c;
case 0x6e5352:goto L6e5352;
case 0x6e5354:c.instructions+=1;goto B6e5354;
case 0x6e5356:goto L6e5356;
case 0x6e535a:c.instructions+=4;goto B6e535a;
case 0x6e5360:c.instructions+=3;goto B6e5360;
case 0x6e5362:c.instructions+=2;goto B6e5362;
case 0x6e5365:c.instructions+=1;goto B6e5365;
case 0x6e536b:goto L6e536b;
case 0x6e536f:c.instructions+=10;goto B6e536f;
case 0x6e5373:c.instructions+=9;goto B6e5373;
case 0x6e5377:c.instructions+=8;goto B6e5377;
case 0x6e5379:c.instructions+=7;goto B6e5379;
case 0x6e537d:c.instructions+=6;goto B6e537d;
case 0x6e5380:c.instructions+=5;goto B6e5380;
case 0x6e5382:c.instructions+=4;goto B6e5382;
case 0x6e5384:c.instructions+=3;goto B6e5384;
case 0x6e5388:c.instructions+=2;goto B6e5388;
case 0x6e538c:c.instructions+=1;goto B6e538c;
case 0x6e5392:goto L6e5392;
case 0x6e5395:c.instructions+=16;goto B6e5395;
case 0x6e5399:c.instructions+=15;goto B6e5399;
case 0x6e539d:c.instructions+=14;goto B6e539d;
case 0x6e539e:c.instructions+=13;goto B6e539e;
case 0x6e53a1:c.instructions+=12;goto B6e53a1;
case 0x6e53a3:c.instructions+=11;goto B6e53a3;
case 0x6e53a6:c.instructions+=10;goto B6e53a6;
case 0x6e53a8:c.instructions+=9;goto B6e53a8;
case 0x6e53a9:c.instructions+=8;goto B6e53a9;
case 0x6e53ac:c.instructions+=7;goto B6e53ac;
case 0x6e53ad:c.instructions+=6;goto B6e53ad;
case 0x6e53b1:c.instructions+=5;goto B6e53b1;
case 0x6e53b2:c.instructions+=4;goto B6e53b2;
case 0x6e53b4:c.instructions+=3;goto B6e53b4;
case 0x6e53b7:c.instructions+=2;goto B6e53b7;
case 0x6e53b8:c.instructions+=1;goto B6e53b8;
case 0x6e53bd:goto L6e53bd;
case 0x6e53c0:c.instructions+=14;goto B6e53c0;
case 0x6e53c4:c.instructions+=13;goto B6e53c4;
case 0x6e53c9:c.instructions+=12;goto B6e53c9;
case 0x6e53cd:c.instructions+=11;goto B6e53cd;
case 0x6e53d0:c.instructions+=10;goto B6e53d0;
case 0x6e53d1:c.instructions+=9;goto B6e53d1;
case 0x6e53d4:c.instructions+=8;goto B6e53d4;
case 0x6e53d8:c.instructions+=7;goto B6e53d8;
case 0x6e53db:c.instructions+=6;goto B6e53db;
case 0x6e53dc:c.instructions+=5;goto B6e53dc;
case 0x6e53de:c.instructions+=4;goto B6e53de;
case 0x6e53e2:c.instructions+=3;goto B6e53e2;
case 0x6e53e3:c.instructions+=2;goto B6e53e3;
case 0x6e53e4:c.instructions+=1;goto B6e53e4;
case 0x6e53e9:goto L6e53e9;
case 0x6e53ec:c.instructions+=4;goto B6e53ec;
case 0x6e53ef:c.instructions+=3;goto B6e53ef;
case 0x6e53f0:c.instructions+=2;goto B6e53f0;
case 0x6e53f2:c.instructions+=1;goto B6e53f2;
case 0x6e53f4:goto L6e53f4;
case 0x6e53f5:c.instructions+=6;goto B6e53f5;
case 0x6e53f6:c.instructions+=5;goto B6e53f6;
case 0x6e53f7:c.instructions+=4;goto B6e53f7;
case 0x6e53f9:c.instructions+=3;goto B6e53f9;
case 0x6e53fa:c.instructions+=2;goto B6e53fa;
case 0x6e53fd:c.instructions+=1;goto B6e53fd;
case 0x6e5400:goto L6e5400;
case 0x6e5403:c.instructions+=3;goto B6e5403;
case 0x6e5405:c.instructions+=2;goto B6e5405;
case 0x6e5407:c.instructions+=1;goto B6e5407;
case 0x6e5409:goto L6e5409;
case 0x6e540d:c.instructions+=1;goto B6e540d;
case 0x6e5410:goto L6e5410;
case 0x6e5413:c.instructions+=19;goto B6e5413;
case 0x6e5417:c.instructions+=18;goto B6e5417;
case 0x6e541a:c.instructions+=17;goto B6e541a;
case 0x6e541c:c.instructions+=16;goto B6e541c;
case 0x6e5421:c.instructions+=15;goto B6e5421;
case 0x6e5424:c.instructions+=14;goto B6e5424;
case 0x6e5426:c.instructions+=13;goto B6e5426;
case 0x6e5428:c.instructions+=12;goto B6e5428;
case 0x6e542b:c.instructions+=11;goto B6e542b;
case 0x6e542d:c.instructions+=10;goto B6e542d;
case 0x6e5430:c.instructions+=9;goto B6e5430;
case 0x6e5433:c.instructions+=8;goto B6e5433;
case 0x6e5436:c.instructions+=7;goto B6e5436;
case 0x6e5439:c.instructions+=6;goto B6e5439;
case 0x6e543c:c.instructions+=5;goto B6e543c;
case 0x6e543f:c.instructions+=4;goto B6e543f;
case 0x6e5442:c.instructions+=3;goto B6e5442;
case 0x6e5443:c.instructions+=2;goto B6e5443;
case 0x6e5445:c.instructions+=1;goto B6e5445;
case 0x6e5447:goto L6e5447;
case 0x6e5448:c.instructions+=6;goto B6e5448;
case 0x6e5449:c.instructions+=5;goto B6e5449;
case 0x6e544a:c.instructions+=4;goto B6e544a;
case 0x6e544c:c.instructions+=3;goto B6e544c;
case 0x6e544d:c.instructions+=2;goto B6e544d;
case 0x6e5450:c.instructions+=1;goto B6e5450;
case 0x6e5460:goto L6e5460;
case 0x6e5464:c.instructions+=4;goto B6e5464;
case 0x6e5466:c.instructions+=3;goto B6e5466;
case 0x6e5467:c.instructions+=2;goto B6e5467;
case 0x6e5469:c.instructions+=1;goto B6e5469;
case 0x6e546f:goto L6e546f;
case 0x6e5472:c.instructions+=2;goto B6e5472;
case 0x6e5474:c.instructions+=1;goto B6e5474;
case 0x6e5476:goto L6e5476;
case 0x6e547d:c.instructions+=1;goto B6e547d;
case 0x6e5484:goto L6e5484;
case 0x6e5488:c.instructions+=5;goto B6e5488;
case 0x6e5489:c.instructions+=4;goto B6e5489;
case 0x6e548a:c.instructions+=3;goto B6e548a;
case 0x6e548b:c.instructions+=2;goto B6e548b;
case 0x6e548c:c.instructions+=1;goto B6e548c;
case 0x6e5491:goto L6e5491;
case 0x6e5493:c.instructions+=8;goto B6e5493;
case 0x6e5496:c.instructions+=7;goto B6e5496;
case 0x6e5499:c.instructions+=6;goto B6e5499;
case 0x6e549d:c.instructions+=5;goto B6e549d;
case 0x6e54a0:c.instructions+=4;goto B6e54a0;
case 0x6e54a2:c.instructions+=3;goto B6e54a2;
case 0x6e54a6:c.instructions+=2;goto B6e54a6;
case 0x6e54a8:c.instructions+=1;goto B6e54a8;
case 0x6e54aa:goto L6e54aa;
case 0x6e54ad:c.instructions+=1;goto B6e54ad;
case 0x6e54af:goto L6e54af;
case 0x6e54b1:c.instructions+=1;goto B6e54b1;
case 0x6e54b3:goto L6e54b3;
case 0x6e54b5:goto L6e54b5;
case 0x6e54b8:c.instructions+=9;goto B6e54b8;
case 0x6e54bb:c.instructions+=8;goto B6e54bb;
case 0x6e54bc:c.instructions+=7;goto B6e54bc;
case 0x6e54bd:c.instructions+=6;goto B6e54bd;
case 0x6e54c0:c.instructions+=5;goto B6e54c0;
case 0x6e54c1:c.instructions+=4;goto B6e54c1;
case 0x6e54c2:c.instructions+=3;goto B6e54c2;
case 0x6e54c3:c.instructions+=2;goto B6e54c3;
case 0x6e54c5:c.instructions+=1;goto B6e54c5;
case 0x6e54ca:goto L6e54ca;
case 0x6e54cd:c.instructions+=11;goto B6e54cd;
case 0x6e54d1:c.instructions+=10;goto B6e54d1;
case 0x6e54d4:c.instructions+=9;goto B6e54d4;
case 0x6e54d7:c.instructions+=8;goto B6e54d7;
case 0x6e54da:c.instructions+=7;goto B6e54da;
case 0x6e54de:c.instructions+=6;goto B6e54de;
case 0x6e54e1:c.instructions+=5;goto B6e54e1;
case 0x6e54e5:c.instructions+=4;goto B6e54e5;
case 0x6e54e9:c.instructions+=3;goto B6e54e9;
case 0x6e54eb:c.instructions+=2;goto B6e54eb;
case 0x6e54ee:c.instructions+=1;goto B6e54ee;
case 0x6e54f0:goto L6e54f0;
case 0x6e54f4:c.instructions+=3;goto B6e54f4;
case 0x6e54f7:c.instructions+=2;goto B6e54f7;
case 0x6e54f9:c.instructions+=1;goto B6e54f9;
case 0x6e54fb:goto L6e54fb;
case 0x6e54ff:c.instructions+=15;goto B6e54ff;
case 0x6e5503:c.instructions+=14;goto B6e5503;
case 0x6e5507:c.instructions+=13;goto B6e5507;
case 0x6e5508:c.instructions+=12;goto B6e5508;
case 0x6e550b:c.instructions+=11;goto B6e550b;
case 0x6e550c:c.instructions+=10;goto B6e550c;
case 0x6e550e:c.instructions+=9;goto B6e550e;
case 0x6e550f:c.instructions+=8;goto B6e550f;
case 0x6e5512:c.instructions+=7;goto B6e5512;
case 0x6e5513:c.instructions+=6;goto B6e5513;
case 0x6e5514:c.instructions+=5;goto B6e5514;
case 0x6e5517:c.instructions+=4;goto B6e5517;
case 0x6e5518:c.instructions+=3;goto B6e5518;
case 0x6e5519:c.instructions+=2;goto B6e5519;
case 0x6e551b:c.instructions+=1;goto B6e551b;
case 0x6e5520:goto L6e5520;
case 0x6e5521:c.instructions+=5;goto B6e5521;
case 0x6e5522:c.instructions+=4;goto B6e5522;
case 0x6e5523:c.instructions+=3;goto B6e5523;
case 0x6e5525:c.instructions+=2;goto B6e5525;
case 0x6e5526:c.instructions+=1;goto B6e5526;
case 0x6e5529:goto L6e5529;
case 0x6e552c:c.instructions+=3;goto B6e552c;
case 0x6e552e:c.instructions+=2;goto B6e552e;
case 0x6e5530:c.instructions+=1;goto B6e5530;
case 0x6e5532:goto L6e5532;
case 0x6e5536:goto L6e5536;
case 0x6e5539:c.instructions+=6;goto B6e5539;
case 0x6e553d:c.instructions+=5;goto B6e553d;
case 0x6e5540:c.instructions+=4;goto B6e5540;
case 0x6e5541:c.instructions+=3;goto B6e5541;
case 0x6e5543:c.instructions+=2;goto B6e5543;
case 0x6e5546:c.instructions+=1;goto B6e5546;
case 0x6e5548:goto L6e5548;
case 0x6e5549:c.instructions+=5;goto B6e5549;
case 0x6e554a:c.instructions+=4;goto B6e554a;
case 0x6e554b:c.instructions+=3;goto B6e554b;
case 0x6e554d:c.instructions+=2;goto B6e554d;
case 0x6e554e:c.instructions+=1;goto B6e554e;
case 0x6e5551:goto L6e5551;
case 0x6e5555:c.instructions+=6;goto B6e5555;
case 0x6e5559:c.instructions+=5;goto B6e5559;
case 0x6e555a:c.instructions+=4;goto B6e555a;
case 0x6e555b:c.instructions+=3;goto B6e555b;
case 0x6e555c:c.instructions+=2;goto B6e555c;
case 0x6e555e:c.instructions+=1;goto B6e555e;
case 0x6e5563:goto L6e5563;
case 0x6e5564:c.instructions+=1;goto B6e5564;
case 0x6e5570:goto L6e5570;
case 0x6e5574:c.instructions+=5;goto B6e5574;
case 0x6e5577:c.instructions+=4;goto B6e5577;
case 0x6e5579:c.instructions+=3;goto B6e5579;
case 0x6e557a:c.instructions+=2;goto B6e557a;
case 0x6e557c:c.instructions+=1;goto B6e557c;
case 0x6e5582:goto L6e5582;
case 0x6e5585:c.instructions+=2;goto B6e5585;
case 0x6e5587:c.instructions+=1;goto B6e5587;
case 0x6e5589:goto L6e5589;
case 0x6e5590:c.instructions+=1;goto B6e5590;
case 0x6e5597:goto L6e5597;
case 0x6e559a:c.instructions+=13;goto B6e559a;
case 0x6e559e:c.instructions+=12;goto B6e559e;
case 0x6e559f:c.instructions+=11;goto B6e559f;
case 0x6e55a0:c.instructions+=10;goto B6e55a0;
case 0x6e55a3:c.instructions+=9;goto B6e55a3;
case 0x6e55a7:c.instructions+=8;goto B6e55a7;
case 0x6e55aa:c.instructions+=7;goto B6e55aa;
case 0x6e55ae:c.instructions+=6;goto B6e55ae;
case 0x6e55b2:c.instructions+=5;goto B6e55b2;
case 0x6e55b3:c.instructions+=4;goto B6e55b3;
case 0x6e55b4:c.instructions+=3;goto B6e55b4;
case 0x6e55b8:c.instructions+=2;goto B6e55b8;
case 0x6e55bd:c.instructions+=1;goto B6e55bd;
case 0x6e55c2:goto L6e55c2;
case 0x6e55c4:c.instructions+=8;goto B6e55c4;
case 0x6e55c7:c.instructions+=7;goto B6e55c7;
case 0x6e55ca:c.instructions+=6;goto B6e55ca;
case 0x6e55ce:c.instructions+=5;goto B6e55ce;
case 0x6e55d1:c.instructions+=4;goto B6e55d1;
case 0x6e55d3:c.instructions+=3;goto B6e55d3;
case 0x6e55d7:c.instructions+=2;goto B6e55d7;
case 0x6e55d9:c.instructions+=1;goto B6e55d9;
case 0x6e55db:goto L6e55db;
case 0x6e55de:c.instructions+=1;goto B6e55de;
case 0x6e55e0:goto L6e55e0;
case 0x6e55e2:c.instructions+=1;goto B6e55e2;
case 0x6e55e4:goto L6e55e4;
case 0x6e55e6:goto L6e55e6;
case 0x6e55e9:c.instructions+=9;goto B6e55e9;
case 0x6e55ec:c.instructions+=8;goto B6e55ec;
case 0x6e55ed:c.instructions+=7;goto B6e55ed;
case 0x6e55ee:c.instructions+=6;goto B6e55ee;
case 0x6e55f1:c.instructions+=5;goto B6e55f1;
case 0x6e55f2:c.instructions+=4;goto B6e55f2;
case 0x6e55f3:c.instructions+=3;goto B6e55f3;
case 0x6e55f4:c.instructions+=2;goto B6e55f4;
case 0x6e55f6:c.instructions+=1;goto B6e55f6;
case 0x6e55fb:goto L6e55fb;
case 0x6e55fe:c.instructions+=7;goto B6e55fe;
case 0x6e5602:c.instructions+=6;goto B6e5602;
case 0x6e5606:c.instructions+=5;goto B6e5606;
case 0x6e560a:c.instructions+=4;goto B6e560a;
case 0x6e560e:c.instructions+=3;goto B6e560e;
case 0x6e5610:c.instructions+=2;goto B6e5610;
case 0x6e5613:c.instructions+=1;goto B6e5613;
case 0x6e5615:goto L6e5615;
case 0x6e5619:c.instructions+=3;goto B6e5619;
case 0x6e561c:c.instructions+=2;goto B6e561c;
case 0x6e561e:c.instructions+=1;goto B6e561e;
case 0x6e5620:goto L6e5620;
case 0x6e5624:c.instructions+=17;goto B6e5624;
case 0x6e5628:c.instructions+=16;goto B6e5628;
case 0x6e562c:c.instructions+=15;goto B6e562c;
case 0x6e562d:c.instructions+=14;goto B6e562d;
case 0x6e5631:c.instructions+=13;goto B6e5631;
case 0x6e5634:c.instructions+=12;goto B6e5634;
case 0x6e5635:c.instructions+=11;goto B6e5635;
case 0x6e5638:c.instructions+=10;goto B6e5638;
case 0x6e563a:c.instructions+=9;goto B6e563a;
case 0x6e563b:c.instructions+=8;goto B6e563b;
case 0x6e5640:c.instructions+=7;goto B6e5640;
case 0x6e5641:c.instructions+=6;goto B6e5641;
case 0x6e5642:c.instructions+=5;goto B6e5642;
case 0x6e5643:c.instructions+=4;goto B6e5643;
case 0x6e5644:c.instructions+=3;goto B6e5644;
case 0x6e5646:c.instructions+=2;goto B6e5646;
case 0x6e5648:c.instructions+=1;goto B6e5648;
case 0x6e564d:goto L6e564d;
case 0x6e564e:c.instructions+=6;goto B6e564e;
case 0x6e564f:c.instructions+=5;goto B6e564f;
case 0x6e5650:c.instructions+=4;goto B6e5650;
case 0x6e5652:c.instructions+=3;goto B6e5652;
case 0x6e5653:c.instructions+=2;goto B6e5653;
case 0x6e5656:c.instructions+=1;goto B6e5656;
case 0x6e5659:goto L6e5659;
case 0x6e565e:c.instructions+=3;goto B6e565e;
case 0x6e5660:c.instructions+=2;goto B6e5660;
case 0x6e5662:c.instructions+=1;goto B6e5662;
case 0x6e5664:goto L6e5664;
case 0x6e5668:c.instructions+=1;goto B6e5668;
case 0x6e5670:goto L6e5670;
case 0x6e5673:c.instructions+=16;goto B6e5673;
case 0x6e5676:c.instructions+=15;goto B6e5676;
case 0x6e567a:c.instructions+=14;goto B6e567a;
case 0x6e567d:c.instructions+=13;goto B6e567d;
case 0x6e5681:c.instructions+=12;goto B6e5681;
case 0x6e5683:c.instructions+=11;goto B6e5683;
case 0x6e5685:c.instructions+=10;goto B6e5685;
case 0x6e5688:c.instructions+=9;goto B6e5688;
case 0x6e568b:c.instructions+=8;goto B6e568b;
case 0x6e568e:c.instructions+=7;goto B6e568e;
case 0x6e5691:c.instructions+=6;goto B6e5691;
case 0x6e5694:c.instructions+=5;goto B6e5694;
case 0x6e5697:c.instructions+=4;goto B6e5697;
case 0x6e569a:c.instructions+=3;goto B6e569a;
case 0x6e569c:c.instructions+=2;goto B6e569c;
case 0x6e569f:c.instructions+=1;goto B6e569f;
case 0x6e56a1:goto L6e56a1;
case 0x6e56a2:c.instructions+=6;goto B6e56a2;
case 0x6e56a3:c.instructions+=5;goto B6e56a3;
case 0x6e56a4:c.instructions+=4;goto B6e56a4;
case 0x6e56a6:c.instructions+=3;goto B6e56a6;
case 0x6e56a7:c.instructions+=2;goto B6e56a7;
case 0x6e56aa:c.instructions+=1;goto B6e56aa;
case 0x6e56ad:goto L6e56ad;
case 0x6e56b1:c.instructions+=6;goto B6e56b1;
case 0x6e56b2:c.instructions+=5;goto B6e56b2;
case 0x6e56b6:c.instructions+=4;goto B6e56b6;
case 0x6e56b7:c.instructions+=3;goto B6e56b7;
case 0x6e56b8:c.instructions+=2;goto B6e56b8;
case 0x6e56ba:c.instructions+=1;goto B6e56ba;
case 0x6e56bf:goto L6e56bf;
case 0x6e56c0:c.instructions+=2;goto B6e56c0;
case 0x6e56c3:c.instructions+=1;goto B6e56c3;
case 0x6e56d0:goto L6e56d0;
case 0x6e56d4:c.instructions+=5;goto B6e56d4;
case 0x6e56d7:c.instructions+=4;goto B6e56d7;
case 0x6e56d9:c.instructions+=3;goto B6e56d9;
case 0x6e56da:c.instructions+=2;goto B6e56da;
case 0x6e56dc:c.instructions+=1;goto B6e56dc;
case 0x6e56e2:goto L6e56e2;
case 0x6e56e5:c.instructions+=2;goto B6e56e5;
case 0x6e56e7:c.instructions+=1;goto B6e56e7;
case 0x6e56e9:goto L6e56e9;
case 0x6e56f0:c.instructions+=1;goto B6e56f0;
case 0x6e56f7:goto L6e56f7;
case 0x6e56fb:c.instructions+=6;goto B6e56fb;
case 0x6e56fc:c.instructions+=5;goto B6e56fc;
case 0x6e56fd:c.instructions+=4;goto B6e56fd;
case 0x6e56fe:c.instructions+=3;goto B6e56fe;
case 0x6e56ff:c.instructions+=2;goto B6e56ff;
case 0x6e5701:c.instructions+=1;goto B6e5701;
case 0x6e5706:goto L6e5706;
case 0x6e5709:c.instructions+=12;goto B6e5709;
case 0x6e570c:c.instructions+=11;goto B6e570c;
case 0x6e570f:c.instructions+=10;goto B6e570f;
case 0x6e5711:c.instructions+=9;goto B6e5711;
case 0x6e5714:c.instructions+=8;goto B6e5714;
case 0x6e5715:c.instructions+=7;goto B6e5715;
case 0x6e5716:c.instructions+=6;goto B6e5716;
case 0x6e5719:c.instructions+=5;goto B6e5719;
case 0x6e571a:c.instructions+=4;goto B6e571a;
case 0x6e571b:c.instructions+=3;goto B6e571b;
case 0x6e571c:c.instructions+=2;goto B6e571c;
case 0x6e571e:c.instructions+=1;goto B6e571e;
case 0x6e5723:goto L6e5723;
case 0x6e5725:c.instructions+=9;goto B6e5725;
case 0x6e5728:c.instructions+=8;goto B6e5728;
case 0x6e572b:c.instructions+=7;goto B6e572b;
case 0x6e572f:c.instructions+=6;goto B6e572f;
case 0x6e5732:c.instructions+=5;goto B6e5732;
case 0x6e5736:c.instructions+=4;goto B6e5736;
case 0x6e5739:c.instructions+=3;goto B6e5739;
case 0x6e573c:c.instructions+=2;goto B6e573c;
case 0x6e573f:c.instructions+=1;goto B6e573f;
case 0x6e5741:goto L6e5741;
case 0x6e5745:c.instructions+=1;goto B6e5745;
case 0x6e5747:goto L6e5747;
case 0x6e574c:c.instructions+=1;goto B6e574c;
case 0x6e5750:goto L6e5750;
case 0x6e5754:c.instructions+=5;goto B6e5754;
case 0x6e5758:c.instructions+=4;goto B6e5758;
case 0x6e575c:c.instructions+=3;goto B6e575c;
case 0x6e575e:c.instructions+=2;goto B6e575e;
case 0x6e5761:c.instructions+=1;goto B6e5761;
case 0x6e5767:goto L6e5767;
case 0x6e576b:c.instructions+=3;goto B6e576b;
case 0x6e576c:c.instructions+=2;goto B6e576c;
case 0x6e576e:c.instructions+=1;goto B6e576e;
case 0x6e5770:goto L6e5770;
case 0x6e5774:c.instructions+=7;goto B6e5774;
case 0x6e5779:c.instructions+=6;goto B6e5779;
case 0x6e577d:c.instructions+=5;goto B6e577d;
case 0x6e5781:c.instructions+=4;goto B6e5781;
case 0x6e5785:c.instructions+=3;goto B6e5785;
case 0x6e5787:c.instructions+=2;goto B6e5787;
case 0x6e578a:c.instructions+=1;goto B6e578a;
case 0x6e578c:goto L6e578c;
case 0x6e578e:c.instructions+=1;goto B6e578e;
case 0x6e5790:goto L6e5790;
case 0x6e5794:c.instructions+=4;goto B6e5794;
case 0x6e579a:c.instructions+=3;goto B6e579a;
case 0x6e579c:c.instructions+=2;goto B6e579c;
case 0x6e579f:c.instructions+=1;goto B6e579f;
case 0x6e57a1:goto L6e57a1;
case 0x6e57a5:c.instructions+=21;goto B6e57a5;
case 0x6e57a9:c.instructions+=20;goto B6e57a9;
case 0x6e57ad:c.instructions+=19;goto B6e57ad;
case 0x6e57b1:c.instructions+=18;goto B6e57b1;
case 0x6e57b3:c.instructions+=17;goto B6e57b3;
case 0x6e57b7:c.instructions+=16;goto B6e57b7;
case 0x6e57bb:c.instructions+=15;goto B6e57bb;
case 0x6e57be:c.instructions+=14;goto B6e57be;
case 0x6e57c2:c.instructions+=13;goto B6e57c2;
case 0x6e57c3:c.instructions+=12;goto B6e57c3;
case 0x6e57c6:c.instructions+=11;goto B6e57c6;
case 0x6e57c7:c.instructions+=10;goto B6e57c7;
case 0x6e57c9:c.instructions+=9;goto B6e57c9;
case 0x6e57ca:c.instructions+=8;goto B6e57ca;
case 0x6e57cb:c.instructions+=7;goto B6e57cb;
case 0x6e57ce:c.instructions+=6;goto B6e57ce;
case 0x6e57cf:c.instructions+=5;goto B6e57cf;
case 0x6e57d2:c.instructions+=4;goto B6e57d2;
case 0x6e57d3:c.instructions+=3;goto B6e57d3;
case 0x6e57d4:c.instructions+=2;goto B6e57d4;
case 0x6e57d6:c.instructions+=1;goto B6e57d6;
case 0x6e57db:goto L6e57db;
case 0x6e57dc:c.instructions+=6;goto B6e57dc;
case 0x6e57dd:c.instructions+=5;goto B6e57dd;
case 0x6e57de:c.instructions+=4;goto B6e57de;
case 0x6e57e0:c.instructions+=3;goto B6e57e0;
case 0x6e57e1:c.instructions+=2;goto B6e57e1;
case 0x6e57e4:c.instructions+=1;goto B6e57e4;
case 0x6e57e7:goto L6e57e7;
case 0x6e57ea:c.instructions+=3;goto B6e57ea;
case 0x6e57ec:c.instructions+=2;goto B6e57ec;
case 0x6e57ee:c.instructions+=1;goto B6e57ee;
case 0x6e57f0:goto L6e57f0;
case 0x6e57f4:goto L6e57f4;
case 0x6e57f7:c.instructions+=6;goto B6e57f7;
case 0x6e57fb:c.instructions+=5;goto B6e57fb;
case 0x6e57fe:c.instructions+=4;goto B6e57fe;
case 0x6e57ff:c.instructions+=3;goto B6e57ff;
case 0x6e5801:c.instructions+=2;goto B6e5801;
case 0x6e5804:c.instructions+=1;goto B6e5804;
case 0x6e5806:goto L6e5806;
case 0x6e5807:c.instructions+=6;goto B6e5807;
case 0x6e5808:c.instructions+=5;goto B6e5808;
case 0x6e5809:c.instructions+=4;goto B6e5809;
case 0x6e580b:c.instructions+=3;goto B6e580b;
case 0x6e580c:c.instructions+=2;goto B6e580c;
case 0x6e580f:c.instructions+=1;goto B6e580f;
case 0x6e5812:goto L6e5812;
case 0x6e5816:c.instructions+=6;goto B6e5816;
case 0x6e5817:c.instructions+=5;goto B6e5817;
case 0x6e581b:c.instructions+=4;goto B6e581b;
case 0x6e581c:c.instructions+=3;goto B6e581c;
case 0x6e581d:c.instructions+=2;goto B6e581d;
case 0x6e581f:c.instructions+=1;goto B6e581f;
case 0x6e5824:goto L6e5824;
case 0x6e5825:c.instructions+=2;goto B6e5825;
case 0x6e5828:c.instructions+=1;goto B6e5828;
case 0x6e5830:goto L6e5830;
case 0x6e5834:c.instructions+=5;goto B6e5834;
case 0x6e5837:c.instructions+=4;goto B6e5837;
case 0x6e5839:c.instructions+=3;goto B6e5839;
case 0x6e583a:c.instructions+=2;goto B6e583a;
case 0x6e583c:c.instructions+=1;goto B6e583c;
case 0x6e5842:goto L6e5842;
case 0x6e5845:c.instructions+=2;goto B6e5845;
case 0x6e5847:c.instructions+=1;goto B6e5847;
case 0x6e5849:goto L6e5849;
case 0x6e5850:c.instructions+=1;goto B6e5850;
case 0x6e5857:goto L6e5857;
case 0x6e585a:c.instructions+=15;goto B6e585a;
case 0x6e585e:c.instructions+=14;goto B6e585e;
case 0x6e5862:c.instructions+=13;goto B6e5862;
case 0x6e5863:c.instructions+=12;goto B6e5863;
case 0x6e5864:c.instructions+=11;goto B6e5864;
case 0x6e5868:c.instructions+=10;goto B6e5868;
case 0x6e586b:c.instructions+=9;goto B6e586b;
case 0x6e586e:c.instructions+=8;goto B6e586e;
case 0x6e586f:c.instructions+=7;goto B6e586f;
case 0x6e5872:c.instructions+=6;goto B6e5872;
case 0x6e5876:c.instructions+=5;goto B6e5876;
case 0x6e5879:c.instructions+=4;goto B6e5879;
case 0x6e587a:c.instructions+=3;goto B6e587a;
case 0x6e587c:c.instructions+=2;goto B6e587c;
case 0x6e5880:c.instructions+=1;goto B6e5880;
case 0x6e5885:goto L6e5885;
case 0x6e5888:c.instructions+=12;goto B6e5888;
case 0x6e588a:c.instructions+=11;goto B6e588a;
case 0x6e588d:c.instructions+=10;goto B6e588d;
case 0x6e5890:c.instructions+=9;goto B6e5890;
case 0x6e5893:c.instructions+=8;goto B6e5893;
case 0x6e5894:c.instructions+=7;goto B6e5894;
case 0x6e5895:c.instructions+=6;goto B6e5895;
case 0x6e5898:c.instructions+=5;goto B6e5898;
case 0x6e5899:c.instructions+=4;goto B6e5899;
case 0x6e589a:c.instructions+=3;goto B6e589a;
case 0x6e589b:c.instructions+=2;goto B6e589b;
case 0x6e589d:c.instructions+=1;goto B6e589d;
case 0x6e58a2:goto L6e58a2;
case 0x6e58a4:c.instructions+=2;goto B6e58a4;
case 0x6e58a7:c.instructions+=1;goto B6e58a7;
case 0x6e58a9:goto L6e58a9;
case 0x6e58ab:c.instructions+=1;goto B6e58ab;
case 0x6e58ad:goto L6e58ad;
case 0x6e58b2:goto L6e58b2;
case 0x6e58b6:c.instructions+=6;goto B6e58b6;
case 0x6e58ba:c.instructions+=5;goto B6e58ba;
case 0x6e58be:c.instructions+=4;goto B6e58be;
case 0x6e58c2:c.instructions+=3;goto B6e58c2;
case 0x6e58c4:c.instructions+=2;goto B6e58c4;
case 0x6e58c7:c.instructions+=1;goto B6e58c7;
case 0x6e58cd:goto L6e58cd;
case 0x6e58d1:c.instructions+=3;goto B6e58d1;
case 0x6e58d4:c.instructions+=2;goto B6e58d4;
case 0x6e58d6:c.instructions+=1;goto B6e58d6;
case 0x6e58d8:goto L6e58d8;
case 0x6e58dd:c.instructions+=6;goto B6e58dd;
case 0x6e58e1:c.instructions+=5;goto B6e58e1;
case 0x6e58e5:c.instructions+=4;goto B6e58e5;
case 0x6e58e9:c.instructions+=3;goto B6e58e9;
case 0x6e58eb:c.instructions+=2;goto B6e58eb;
case 0x6e58ee:c.instructions+=1;goto B6e58ee;
case 0x6e58f4:goto L6e58f4;
case 0x6e58f6:c.instructions+=1;goto B6e58f6;
case 0x6e58f8:goto L6e58f8;
case 0x6e58fc:c.instructions+=4;goto B6e58fc;
case 0x6e5902:c.instructions+=3;goto B6e5902;
case 0x6e5904:c.instructions+=2;goto B6e5904;
case 0x6e5907:c.instructions+=1;goto B6e5907;
case 0x6e590d:goto L6e590d;
case 0x6e5911:c.instructions+=11;goto B6e5911;
case 0x6e5915:c.instructions+=10;goto B6e5915;
case 0x6e5919:c.instructions+=9;goto B6e5919;
case 0x6e591b:c.instructions+=8;goto B6e591b;
case 0x6e591f:c.instructions+=7;goto B6e591f;
case 0x6e5922:c.instructions+=6;goto B6e5922;
case 0x6e5926:c.instructions+=5;goto B6e5926;
case 0x6e5928:c.instructions+=4;goto B6e5928;
case 0x6e592a:c.instructions+=3;goto B6e592a;
case 0x6e592e:c.instructions+=2;goto B6e592e;
case 0x6e5932:c.instructions+=1;goto B6e5932;
case 0x6e5938:goto L6e5938;
case 0x6e593c:c.instructions+=1;goto B6e593c;
case 0x6e5940:goto L6e5940;
case 0x6e5943:c.instructions+=12;goto B6e5943;
case 0x6e5947:c.instructions+=11;goto B6e5947;
case 0x6e5948:c.instructions+=10;goto B6e5948;
case 0x6e594c:c.instructions+=9;goto B6e594c;
case 0x6e5953:c.instructions+=8;goto B6e5953;
case 0x6e5955:c.instructions+=7;goto B6e5955;
case 0x6e5956:c.instructions+=6;goto B6e5956;
case 0x6e5959:c.instructions+=5;goto B6e5959;
case 0x6e595a:c.instructions+=4;goto B6e595a;
case 0x6e595b:c.instructions+=3;goto B6e595b;
case 0x6e595d:c.instructions+=2;goto B6e595d;
case 0x6e595e:c.instructions+=1;goto B6e595e;
case 0x6e5963:goto L6e5963;
case 0x6e5967:c.instructions+=12;goto B6e5967;
case 0x6e596a:c.instructions+=11;goto B6e596a;
case 0x6e596e:c.instructions+=10;goto B6e596e;
case 0x6e5971:c.instructions+=9;goto B6e5971;
case 0x6e5974:c.instructions+=8;goto B6e5974;
case 0x6e5975:c.instructions+=7;goto B6e5975;
case 0x6e5979:c.instructions+=6;goto B6e5979;
case 0x6e597d:c.instructions+=5;goto B6e597d;
case 0x6e597e:c.instructions+=4;goto B6e597e;
case 0x6e5980:c.instructions+=3;goto B6e5980;
case 0x6e5981:c.instructions+=2;goto B6e5981;
case 0x6e5982:c.instructions+=1;goto B6e5982;
case 0x6e5987:goto L6e5987;
case 0x6e598b:c.instructions+=7;goto B6e598b;
case 0x6e598f:c.instructions+=6;goto B6e598f;
case 0x6e5992:c.instructions+=5;goto B6e5992;
case 0x6e5995:c.instructions+=4;goto B6e5995;
case 0x6e5998:c.instructions+=3;goto B6e5998;
case 0x6e599a:c.instructions+=2;goto B6e599a;
case 0x6e599e:c.instructions+=1;goto B6e599e;
case 0x6e59a0:goto L6e59a0;
case 0x6e59a1:c.instructions+=6;goto B6e59a1;
case 0x6e59a2:c.instructions+=5;goto B6e59a2;
case 0x6e59a3:c.instructions+=4;goto B6e59a3;
case 0x6e59a5:c.instructions+=3;goto B6e59a5;
case 0x6e59a6:c.instructions+=2;goto B6e59a6;
case 0x6e59a9:c.instructions+=1;goto B6e59a9;
case 0x6e59ac:goto L6e59ac;
case 0x6e59af:c.instructions+=3;goto B6e59af;
case 0x6e59b1:c.instructions+=2;goto B6e59b1;
case 0x6e59b3:c.instructions+=1;goto B6e59b3;
case 0x6e59b5:goto L6e59b5;
case 0x6e59b9:c.instructions+=1;goto B6e59b9;
case 0x6e59c0:goto L6e59c0;
case 0x6e59c3:c.instructions+=16;goto B6e59c3;
case 0x6e59c6:c.instructions+=15;goto B6e59c6;
case 0x6e59ca:c.instructions+=14;goto B6e59ca;
case 0x6e59cd:c.instructions+=13;goto B6e59cd;
case 0x6e59d1:c.instructions+=12;goto B6e59d1;
case 0x6e59d3:c.instructions+=11;goto B6e59d3;
case 0x6e59d5:c.instructions+=10;goto B6e59d5;
case 0x6e59d8:c.instructions+=9;goto B6e59d8;
case 0x6e59db:c.instructions+=8;goto B6e59db;
case 0x6e59de:c.instructions+=7;goto B6e59de;
case 0x6e59e1:c.instructions+=6;goto B6e59e1;
case 0x6e59e4:c.instructions+=5;goto B6e59e4;
case 0x6e59e7:c.instructions+=4;goto B6e59e7;
case 0x6e59ea:c.instructions+=3;goto B6e59ea;
case 0x6e59ec:c.instructions+=2;goto B6e59ec;
case 0x6e59ef:c.instructions+=1;goto B6e59ef;
case 0x6e59f1:goto L6e59f1;
case 0x6e59f2:c.instructions+=6;goto B6e59f2;
case 0x6e59f3:c.instructions+=5;goto B6e59f3;
case 0x6e59f4:c.instructions+=4;goto B6e59f4;
case 0x6e59f6:c.instructions+=3;goto B6e59f6;
case 0x6e59f7:c.instructions+=2;goto B6e59f7;
case 0x6e59fa:c.instructions+=1;goto B6e59fa;
case 0x6e59fd:goto L6e59fd;
case 0x6e5a01:c.instructions+=6;goto B6e5a01;
case 0x6e5a05:c.instructions+=5;goto B6e5a05;
case 0x6e5a06:c.instructions+=4;goto B6e5a06;
case 0x6e5a07:c.instructions+=3;goto B6e5a07;
case 0x6e5a08:c.instructions+=2;goto B6e5a08;
case 0x6e5a0a:c.instructions+=1;goto B6e5a0a;
case 0x6e5a0f:goto L6e5a0f;
case 0x6e5a10:c.instructions+=2;goto B6e5a10;
case 0x6e5a13:c.instructions+=1;goto B6e5a13;
case 0x6e5a20:goto L6e5a20;
case 0x6e5a24:c.instructions+=18;goto B6e5a24;
case 0x6e5a28:c.instructions+=17;goto B6e5a28;
case 0x6e5a2a:c.instructions+=16;goto B6e5a2a;
case 0x6e5a2e:c.instructions+=15;goto B6e5a2e;
case 0x6e5a30:c.instructions+=14;goto B6e5a30;
case 0x6e5a34:c.instructions+=13;goto B6e5a34;
case 0x6e5a36:c.instructions+=12;goto B6e5a36;
case 0x6e5a38:c.instructions+=11;goto B6e5a38;
case 0x6e5a3b:c.instructions+=10;goto B6e5a3b;
case 0x6e5a3e:c.instructions+=9;goto B6e5a3e;
case 0x6e5a42:c.instructions+=8;goto B6e5a42;
case 0x6e5a45:c.instructions+=7;goto B6e5a45;
case 0x6e5a48:c.instructions+=6;goto B6e5a48;
case 0x6e5a4b:c.instructions+=5;goto B6e5a4b;
case 0x6e5a4e:c.instructions+=4;goto B6e5a4e;
case 0x6e5a52:c.instructions+=3;goto B6e5a52;
case 0x6e5a55:c.instructions+=2;goto B6e5a55;
case 0x6e5a58:c.instructions+=1;goto B6e5a58;
case 0x6e5a60:goto L6e5a60;
case 0x6e5a64:c.instructions+=6;goto B6e5a64;
case 0x6e5a66:c.instructions+=5;goto B6e5a66;
case 0x6e5a67:c.instructions+=4;goto B6e5a67;
case 0x6e5a68:c.instructions+=3;goto B6e5a68;
case 0x6e5a69:c.instructions+=2;goto B6e5a69;
case 0x6e5a6a:c.instructions+=1;goto B6e5a6a;
case 0x6e5a6c:goto L6e5a6c;
case 0x6e5a70:c.instructions+=2;goto B6e5a70;
case 0x6e5a72:c.instructions+=1;goto B6e5a72;
case 0x6e5a78:goto L6e5a78;
case 0x6e5a7c:c.instructions+=2;goto B6e5a7c;
case 0x6e5a80:c.instructions+=1;goto B6e5a80;
case 0x6e5a84:goto L6e5a84;
case 0x6e5a88:c.instructions+=8;goto B6e5a88;
case 0x6e5a8b:c.instructions+=7;goto B6e5a8b;
case 0x6e5a8c:c.instructions+=6;goto B6e5a8c;
case 0x6e5a8f:c.instructions+=5;goto B6e5a8f;
case 0x6e5a90:c.instructions+=4;goto B6e5a90;
case 0x6e5a93:c.instructions+=3;goto B6e5a93;
case 0x6e5a94:c.instructions+=2;goto B6e5a94;
case 0x6e5a95:c.instructions+=1;goto B6e5a95;
case 0x6e5a9a:goto L6e5a9a;
case 0x6e5a9d:c.instructions+=23;goto B6e5a9d;
case 0x6e5aa0:c.instructions+=22;goto B6e5aa0;
case 0x6e5aa3:c.instructions+=21;goto B6e5aa3;
case 0x6e5aa6:c.instructions+=20;goto B6e5aa6;
case 0x6e5aa9:c.instructions+=19;goto B6e5aa9;
case 0x6e5aad:c.instructions+=18;goto B6e5aad;
case 0x6e5ab0:c.instructions+=17;goto B6e5ab0;
case 0x6e5ab3:c.instructions+=16;goto B6e5ab3;
case 0x6e5ab5:c.instructions+=15;goto B6e5ab5;
case 0x6e5ab8:c.instructions+=14;goto B6e5ab8;
case 0x6e5abb:c.instructions+=13;goto B6e5abb;
case 0x6e5abc:c.instructions+=12;goto B6e5abc;
case 0x6e5abf:c.instructions+=11;goto B6e5abf;
case 0x6e5ac2:c.instructions+=10;goto B6e5ac2;
case 0x6e5ac5:c.instructions+=9;goto B6e5ac5;
case 0x6e5ac9:c.instructions+=8;goto B6e5ac9;
case 0x6e5acc:c.instructions+=7;goto B6e5acc;
case 0x6e5acf:c.instructions+=6;goto B6e5acf;
case 0x6e5ad2:c.instructions+=5;goto B6e5ad2;
case 0x6e5ad5:c.instructions+=4;goto B6e5ad5;
case 0x6e5ad9:c.instructions+=3;goto B6e5ad9;
case 0x6e5adc:c.instructions+=2;goto B6e5adc;
case 0x6e5adf:c.instructions+=1;goto B6e5adf;
case 0x6e5ae1:goto L6e5ae1;
case 0x6e5ae2:c.instructions+=4;goto B6e5ae2;
case 0x6e5ae3:c.instructions+=3;goto B6e5ae3;
case 0x6e5ae4:c.instructions+=2;goto B6e5ae4;
case 0x6e5ae5:c.instructions+=1;goto B6e5ae5;
case 0x6e5ae6:goto L6e5ae6;
case 0x6e5aea:c.instructions+=3;goto B6e5aea;
case 0x6e5aec:c.instructions+=2;goto B6e5aec;
case 0x6e5aee:c.instructions+=1;goto B6e5aee;
case 0x6e5af4:goto L6e5af4;
case 0x6e5af8:c.instructions+=2;goto B6e5af8;
case 0x6e5afc:c.instructions+=1;goto B6e5afc;
case 0x6e5b00:goto L6e5b00;
case 0x6e5b02:c.instructions+=11;goto B6e5b02;
case 0x6e5b05:c.instructions+=10;goto B6e5b05;
case 0x6e5b0a:c.instructions+=9;goto B6e5b0a;
case 0x6e5b0c:c.instructions+=8;goto B6e5b0c;
case 0x6e5b10:c.instructions+=7;goto B6e5b10;
case 0x6e5b12:c.instructions+=6;goto B6e5b12;
case 0x6e5b15:c.instructions+=5;goto B6e5b15;
case 0x6e5b18:c.instructions+=4;goto B6e5b18;
case 0x6e5b1b:c.instructions+=3;goto B6e5b1b;
case 0x6e5b1e:c.instructions+=2;goto B6e5b1e;
case 0x6e5b21:c.instructions+=1;goto B6e5b21;
case 0x6e5b23:goto L6e5b23;
case 0x6e5b27:c.instructions+=5;goto B6e5b27;
case 0x6e5b28:c.instructions+=4;goto B6e5b28;
case 0x6e5b29:c.instructions+=3;goto B6e5b29;
case 0x6e5b2a:c.instructions+=2;goto B6e5b2a;
case 0x6e5b2b:c.instructions+=1;goto B6e5b2b;
case 0x6e5b30:goto L6e5b30;
case 0x6e5b33:c.instructions+=22;goto B6e5b33;
case 0x6e5b36:c.instructions+=21;goto B6e5b36;
case 0x6e5b39:c.instructions+=20;goto B6e5b39;
case 0x6e5b3c:c.instructions+=19;goto B6e5b3c;
case 0x6e5b3f:c.instructions+=18;goto B6e5b3f;
case 0x6e5b43:c.instructions+=17;goto B6e5b43;
case 0x6e5b46:c.instructions+=16;goto B6e5b46;
case 0x6e5b49:c.instructions+=15;goto B6e5b49;
case 0x6e5b4b:c.instructions+=14;goto B6e5b4b;
case 0x6e5b4e:c.instructions+=13;goto B6e5b4e;
case 0x6e5b51:c.instructions+=12;goto B6e5b51;
case 0x6e5b54:c.instructions+=11;goto B6e5b54;
case 0x6e5b57:c.instructions+=10;goto B6e5b57;
case 0x6e5b5a:c.instructions+=9;goto B6e5b5a;
case 0x6e5b5e:c.instructions+=8;goto B6e5b5e;
case 0x6e5b61:c.instructions+=7;goto B6e5b61;
case 0x6e5b64:c.instructions+=6;goto B6e5b64;
case 0x6e5b67:c.instructions+=5;goto B6e5b67;
case 0x6e5b6a:c.instructions+=4;goto B6e5b6a;
case 0x6e5b6e:c.instructions+=3;goto B6e5b6e;
case 0x6e5b71:c.instructions+=2;goto B6e5b71;
case 0x6e5b74:c.instructions+=1;goto B6e5b74;
case 0x6e5b76:goto L6e5b76;
case 0x6e5b79:c.instructions+=2;goto B6e5b79;
case 0x6e5b7c:c.instructions+=1;goto B6e5b7c;
case 0x6e5b7f:goto L6e5b7f;
case 0x6e5b83:c.instructions+=3;goto B6e5b83;
case 0x6e5b84:c.instructions+=2;goto B6e5b84;
case 0x6e5b86:c.instructions+=1;goto B6e5b86;
case 0x6e5b8c:goto L6e5b8c;
case 0x6e5b8d:c.instructions+=4;goto B6e5b8d;
case 0x6e5b8e:c.instructions+=3;goto B6e5b8e;
case 0x6e5b8f:c.instructions+=2;goto B6e5b8f;
case 0x6e5b90:c.instructions+=1;goto B6e5b90;
case 0x6e5ba0:goto L6e5ba0;
case 0x6e5ba1:c.instructions+=13;goto B6e5ba1;
case 0x6e5ba3:c.instructions+=12;goto B6e5ba3;
case 0x6e5ba6:c.instructions+=11;goto B6e5ba6;
case 0x6e5ba9:c.instructions+=10;goto B6e5ba9;
case 0x6e5bac:c.instructions+=9;goto B6e5bac;
case 0x6e5bad:c.instructions+=8;goto B6e5bad;
case 0x6e5bae:c.instructions+=7;goto B6e5bae;
case 0x6e5bb0:c.instructions+=6;goto B6e5bb0;
case 0x6e5bb3:c.instructions+=5;goto B6e5bb3;
case 0x6e5bb4:c.instructions+=4;goto B6e5bb4;
case 0x6e5bb7:c.instructions+=3;goto B6e5bb7;
case 0x6e5bb9:c.instructions+=2;goto B6e5bb9;
case 0x6e5bbc:c.instructions+=1;goto B6e5bbc;
case 0x6e5bbe:goto L6e5bbe;
case 0x6e5bc1:c.instructions+=9;goto B6e5bc1;
case 0x6e5bc4:c.instructions+=8;goto B6e5bc4;
case 0x6e5bc7:c.instructions+=7;goto B6e5bc7;
case 0x6e5bc9:c.instructions+=6;goto B6e5bc9;
case 0x6e5bca:c.instructions+=5;goto B6e5bca;
case 0x6e5bcd:c.instructions+=4;goto B6e5bcd;
case 0x6e5bce:c.instructions+=3;goto B6e5bce;
case 0x6e5bcf:c.instructions+=2;goto B6e5bcf;
case 0x6e5bd2:c.instructions+=1;goto B6e5bd2;
case 0x6e5bd5:goto L6e5bd5;
case 0x6e5bd7:c.instructions+=1;goto B6e5bd7;
case 0x6e5bdd:goto L6e5bdd;
case 0x6e5bdf:c.instructions+=6;goto B6e5bdf;
case 0x6e5be0:c.instructions+=5;goto B6e5be0;
case 0x6e5be1:c.instructions+=4;goto B6e5be1;
case 0x6e5be2:c.instructions+=3;goto B6e5be2;
case 0x6e5be4:c.instructions+=2;goto B6e5be4;
case 0x6e5be5:c.instructions+=1;goto B6e5be5;
case 0x6e5be8:goto L6e5be8;
case 0x6e5beb:c.instructions+=4;goto B6e5beb;
case 0x6e5bee:c.instructions+=3;goto B6e5bee;
case 0x6e5bf0:c.instructions+=2;goto B6e5bf0;
case 0x6e5bf3:c.instructions+=1;goto B6e5bf3;
case 0x6e5bf9:goto L6e5bf9;
case 0x6e5bfc:c.instructions+=9;goto B6e5bfc;
case 0x6e5bff:c.instructions+=8;goto B6e5bff;
case 0x6e5c02:c.instructions+=7;goto B6e5c02;
case 0x6e5c05:c.instructions+=6;goto B6e5c05;
case 0x6e5c07:c.instructions+=5;goto B6e5c07;
case 0x6e5c08:c.instructions+=4;goto B6e5c08;
case 0x6e5c09:c.instructions+=3;goto B6e5c09;
case 0x6e5c0a:c.instructions+=2;goto B6e5c0a;
case 0x6e5c0d:c.instructions+=1;goto B6e5c0d;
case 0x6e5c10:goto L6e5c10;
case 0x6e5c12:c.instructions+=1;goto B6e5c12;
case 0x6e5c14:goto L6e5c14;
case 0x6e5c17:c.instructions+=2;goto B6e5c17;
case 0x6e5c19:c.instructions+=1;goto B6e5c19;
case 0x6e5c1f:goto L6e5c1f;
case 0x6e5c21:c.instructions+=1;goto B6e5c21;
case 0x6e5c23:goto L6e5c23;
case 0x6e5c24:c.instructions+=2;goto B6e5c24;
case 0x6e5c26:c.instructions+=1;goto B6e5c26;
case 0x6e5c2b:goto L6e5c2b;
case 0x6e5c2d:c.instructions+=1;goto B6e5c2d;
case 0x6e5c33:goto L6e5c33;
case 0x6e5c36:c.instructions+=25;goto B6e5c36;
case 0x6e5c39:c.instructions+=24;goto B6e5c39;
case 0x6e5c3c:c.instructions+=23;goto B6e5c3c;
case 0x6e5c40:c.instructions+=22;goto B6e5c40;
case 0x6e5c44:c.instructions+=21;goto B6e5c44;
case 0x6e5c46:c.instructions+=20;goto B6e5c46;
case 0x6e5c49:c.instructions+=19;goto B6e5c49;
case 0x6e5c4a:c.instructions+=18;goto B6e5c4a;
case 0x6e5c4d:c.instructions+=17;goto B6e5c4d;
case 0x6e5c4e:c.instructions+=16;goto B6e5c4e;
case 0x6e5c51:c.instructions+=15;goto B6e5c51;
case 0x6e5c52:c.instructions+=14;goto B6e5c52;
case 0x6e5c55:c.instructions+=13;goto B6e5c55;
case 0x6e5c56:c.instructions+=12;goto B6e5c56;
case 0x6e5c59:c.instructions+=11;goto B6e5c59;
case 0x6e5c5a:c.instructions+=10;goto B6e5c5a;
case 0x6e5c5d:c.instructions+=9;goto B6e5c5d;
case 0x6e5c5e:c.instructions+=8;goto B6e5c5e;
case 0x6e5c61:c.instructions+=7;goto B6e5c61;
case 0x6e5c62:c.instructions+=6;goto B6e5c62;
case 0x6e5c64:c.instructions+=5;goto B6e5c64;
case 0x6e5c65:c.instructions+=4;goto B6e5c65;
case 0x6e5c66:c.instructions+=3;goto B6e5c66;
case 0x6e5c67:c.instructions+=2;goto B6e5c67;
case 0x6e5c6b:c.instructions+=1;goto B6e5c6b;
case 0x6e5c70:goto L6e5c70;
case 0x6e5c73:c.instructions+=3;goto B6e5c73;
case 0x6e5c74:c.instructions+=2;goto B6e5c74;
case 0x6e5c78:c.instructions+=1;goto B6e5c78;
case 0x6e5c7d:goto L6e5c7d;
case 0x6e5c81:c.instructions+=5;goto B6e5c81;
case 0x6e5c82:c.instructions+=4;goto B6e5c82;
case 0x6e5c86:c.instructions+=3;goto B6e5c86;
case 0x6e5c87:c.instructions+=2;goto B6e5c87;
case 0x6e5c8b:c.instructions+=1;goto B6e5c8b;
case 0x6e5c90:goto L6e5c90;
case 0x6e5c94:c.instructions+=20;goto B6e5c94;
case 0x6e5c97:c.instructions+=19;goto B6e5c97;
case 0x6e5c9b:c.instructions+=18;goto B6e5c9b;
case 0x6e5c9e:c.instructions+=17;goto B6e5c9e;
case 0x6e5ca2:c.instructions+=16;goto B6e5ca2;
case 0x6e5ca5:c.instructions+=15;goto B6e5ca5;
case 0x6e5ca9:c.instructions+=14;goto B6e5ca9;
case 0x6e5cac:c.instructions+=13;goto B6e5cac;
case 0x6e5cb0:c.instructions+=12;goto B6e5cb0;
case 0x6e5cb3:c.instructions+=11;goto B6e5cb3;
case 0x6e5cb7:c.instructions+=10;goto B6e5cb7;
case 0x6e5cba:c.instructions+=9;goto B6e5cba;
case 0x6e5cbe:c.instructions+=8;goto B6e5cbe;
case 0x6e5cc1:c.instructions+=7;goto B6e5cc1;
case 0x6e5cc3:c.instructions+=6;goto B6e5cc3;
case 0x6e5cc4:c.instructions+=5;goto B6e5cc4;
case 0x6e5cc5:c.instructions+=4;goto B6e5cc5;
case 0x6e5cc6:c.instructions+=3;goto B6e5cc6;
case 0x6e5cc8:c.instructions+=2;goto B6e5cc8;
case 0x6e5cc9:c.instructions+=1;goto B6e5cc9;
case 0x6e5ccc:goto L6e5ccc;
case 0x6e5ccf:c.instructions+=6;goto B6e5ccf;
case 0x6e5cd2:c.instructions+=5;goto B6e5cd2;
case 0x6e5cd4:c.instructions+=4;goto B6e5cd4;
case 0x6e5cd7:c.instructions+=3;goto B6e5cd7;
case 0x6e5cda:c.instructions+=2;goto B6e5cda;
case 0x6e5cde:c.instructions+=1;goto B6e5cde;
case 0x6e5ce0:goto L6e5ce0;
case 0x6e5ce3:c.instructions+=4;goto B6e5ce3;
case 0x6e5ce4:c.instructions+=3;goto B6e5ce4;
case 0x6e5ce5:c.instructions+=2;goto B6e5ce5;
case 0x6e5ce8:c.instructions+=1;goto B6e5ce8;
case 0x6e5ced:goto L6e5ced;
case 0x6e5cf0:c.instructions+=2;goto B6e5cf0;
case 0x6e5cf2:c.instructions+=1;goto B6e5cf2;
case 0x6e5cf4:goto L6e5cf4;
case 0x6e5cf7:c.instructions+=4;goto B6e5cf7;
case 0x6e5cfa:c.instructions+=3;goto B6e5cfa;
case 0x6e5cfb:c.instructions+=2;goto B6e5cfb;
case 0x6e5cfc:c.instructions+=1;goto B6e5cfc;
case 0x6e5d01:goto L6e5d01;
case 0x6e5d04:c.instructions+=9;goto B6e5d04;
case 0x6e5d07:c.instructions+=8;goto B6e5d07;
case 0x6e5d0a:c.instructions+=7;goto B6e5d0a;
case 0x6e5d0d:c.instructions+=6;goto B6e5d0d;
case 0x6e5d0f:c.instructions+=5;goto B6e5d0f;
case 0x6e5d10:c.instructions+=4;goto B6e5d10;
case 0x6e5d11:c.instructions+=3;goto B6e5d11;
case 0x6e5d12:c.instructions+=2;goto B6e5d12;
case 0x6e5d15:c.instructions+=1;goto B6e5d15;
case 0x6e5d18:goto L6e5d18;
case 0x6e5d1a:c.instructions+=1;goto B6e5d1a;
case 0x6e5d20:goto L6e5d20;
case 0x6e5d23:c.instructions+=9;goto B6e5d23;
case 0x6e5d26:c.instructions+=8;goto B6e5d26;
case 0x6e5d29:c.instructions+=7;goto B6e5d29;
case 0x6e5d2c:c.instructions+=6;goto B6e5d2c;
case 0x6e5d2e:c.instructions+=5;goto B6e5d2e;
case 0x6e5d2f:c.instructions+=4;goto B6e5d2f;
case 0x6e5d30:c.instructions+=3;goto B6e5d30;
case 0x6e5d31:c.instructions+=2;goto B6e5d31;
case 0x6e5d34:c.instructions+=1;goto B6e5d34;
case 0x6e5d37:goto L6e5d37;
case 0x6e5d39:c.instructions+=1;goto B6e5d39;
case 0x6e5d3f:goto L6e5d3f;
case 0x6e5d41:c.instructions+=2;goto B6e5d41;
case 0x6e5d44:c.instructions+=1;goto B6e5d44;
case 0x6e5d4a:goto L6e5d4a;
case 0x6e5d4c:c.instructions+=2;goto B6e5d4c;
case 0x6e5d4f:c.instructions+=1;goto B6e5d4f;
case 0x6e5d55:goto L6e5d55;
case 0x6e5d58:c.instructions+=3;goto B6e5d58;
case 0x6e5d59:c.instructions+=2;goto B6e5d59;
case 0x6e5d5d:c.instructions+=1;goto B6e5d5d;
case 0x6e5d63:goto L6e5d63;
case 0x6e5d66:c.instructions+=3;goto B6e5d66;
case 0x6e5d69:c.instructions+=2;goto B6e5d69;
case 0x6e5d6c:c.instructions+=1;goto B6e5d6c;
case 0x6e5d70:goto L6e5d70;
case 0x6e5d73:c.instructions+=2;goto B6e5d73;
case 0x6e5d75:c.instructions+=1;goto B6e5d75;
case 0x6e5d7b:goto L6e5d7b;
case 0x6e5d7e:c.instructions+=25;goto B6e5d7e;
case 0x6e5d81:c.instructions+=24;goto B6e5d81;
case 0x6e5d84:c.instructions+=23;goto B6e5d84;
case 0x6e5d88:c.instructions+=22;goto B6e5d88;
case 0x6e5d8c:c.instructions+=21;goto B6e5d8c;
case 0x6e5d8e:c.instructions+=20;goto B6e5d8e;
case 0x6e5d91:c.instructions+=19;goto B6e5d91;
case 0x6e5d92:c.instructions+=18;goto B6e5d92;
case 0x6e5d95:c.instructions+=17;goto B6e5d95;
case 0x6e5d96:c.instructions+=16;goto B6e5d96;
case 0x6e5d99:c.instructions+=15;goto B6e5d99;
case 0x6e5d9a:c.instructions+=14;goto B6e5d9a;
case 0x6e5d9d:c.instructions+=13;goto B6e5d9d;
case 0x6e5d9e:c.instructions+=12;goto B6e5d9e;
case 0x6e5da1:c.instructions+=11;goto B6e5da1;
case 0x6e5da2:c.instructions+=10;goto B6e5da2;
case 0x6e5da5:c.instructions+=9;goto B6e5da5;
case 0x6e5da6:c.instructions+=8;goto B6e5da6;
case 0x6e5da9:c.instructions+=7;goto B6e5da9;
case 0x6e5daa:c.instructions+=6;goto B6e5daa;
case 0x6e5dac:c.instructions+=5;goto B6e5dac;
case 0x6e5dad:c.instructions+=4;goto B6e5dad;
case 0x6e5dae:c.instructions+=3;goto B6e5dae;
case 0x6e5daf:c.instructions+=2;goto B6e5daf;
case 0x6e5db3:c.instructions+=1;goto B6e5db3;
case 0x6e5db8:goto L6e5db8;
case 0x6e5dbb:c.instructions+=3;goto B6e5dbb;
case 0x6e5dbc:c.instructions+=2;goto B6e5dbc;
case 0x6e5dc0:c.instructions+=1;goto B6e5dc0;
case 0x6e5dc5:goto L6e5dc5;
case 0x6e5dc9:c.instructions+=5;goto B6e5dc9;
case 0x6e5dca:c.instructions+=4;goto B6e5dca;
case 0x6e5dce:c.instructions+=3;goto B6e5dce;
case 0x6e5dcf:c.instructions+=2;goto B6e5dcf;
case 0x6e5dd3:c.instructions+=1;goto B6e5dd3;
case 0x6e5dd8:goto L6e5dd8;
case 0x6e5ddc:c.instructions+=27;goto B6e5ddc;
case 0x6e5ddf:c.instructions+=26;goto B6e5ddf;
case 0x6e5de3:c.instructions+=25;goto B6e5de3;
case 0x6e5de6:c.instructions+=24;goto B6e5de6;
case 0x6e5dea:c.instructions+=23;goto B6e5dea;
case 0x6e5ded:c.instructions+=22;goto B6e5ded;
case 0x6e5df1:c.instructions+=21;goto B6e5df1;
case 0x6e5df4:c.instructions+=20;goto B6e5df4;
case 0x6e5df8:c.instructions+=19;goto B6e5df8;
case 0x6e5dfb:c.instructions+=18;goto B6e5dfb;
case 0x6e5dff:c.instructions+=17;goto B6e5dff;
case 0x6e5e02:c.instructions+=16;goto B6e5e02;
case 0x6e5e06:c.instructions+=15;goto B6e5e06;
case 0x6e5e09:c.instructions+=14;goto B6e5e09;
case 0x6e5e0c:c.instructions+=13;goto B6e5e0c;
case 0x6e5e0f:c.instructions+=12;goto B6e5e0f;
case 0x6e5e16:c.instructions+=11;goto B6e5e16;
case 0x6e5e19:c.instructions+=10;goto B6e5e19;
case 0x6e5e1c:c.instructions+=9;goto B6e5e1c;
case 0x6e5e1d:c.instructions+=8;goto B6e5e1d;
case 0x6e5e20:c.instructions+=7;goto B6e5e20;
case 0x6e5e22:c.instructions+=6;goto B6e5e22;
case 0x6e5e23:c.instructions+=5;goto B6e5e23;
case 0x6e5e25:c.instructions+=4;goto B6e5e25;
case 0x6e5e29:c.instructions+=3;goto B6e5e29;
case 0x6e5e2a:c.instructions+=2;goto B6e5e2a;
case 0x6e5e2b:c.instructions+=1;goto B6e5e2b;
case 0x6e5e30:goto L6e5e30;
case 0x6e5e34:c.instructions+=1;goto B6e5e34;
case 0x6e5e37:goto L6e5e37;
case 0x6e5e3a:c.instructions+=11;goto B6e5e3a;
case 0x6e5e3d:c.instructions+=10;goto B6e5e3d;
case 0x6e5e40:c.instructions+=9;goto B6e5e40;
case 0x6e5e43:c.instructions+=8;goto B6e5e43;
case 0x6e5e44:c.instructions+=7;goto B6e5e44;
case 0x6e5e48:c.instructions+=6;goto B6e5e48;
case 0x6e5e4a:c.instructions+=5;goto B6e5e4a;
case 0x6e5e4b:c.instructions+=4;goto B6e5e4b;
case 0x6e5e4d:c.instructions+=3;goto B6e5e4d;
case 0x6e5e4e:c.instructions+=2;goto B6e5e4e;
case 0x6e5e4f:c.instructions+=1;goto B6e5e4f;
case 0x6e5e54:goto L6e5e54;
case 0x6e5e57:c.instructions+=5;goto B6e5e57;
case 0x6e5e58:c.instructions+=4;goto B6e5e58;
case 0x6e5e5b:c.instructions+=3;goto B6e5e5b;
case 0x6e5e5d:c.instructions+=2;goto B6e5e5d;
case 0x6e5e61:c.instructions+=1;goto B6e5e61;
case 0x6e5e67:goto L6e5e67;
case 0x6e5e69:c.instructions+=6;goto B6e5e69;
case 0x6e5e6a:c.instructions+=5;goto B6e5e6a;
case 0x6e5e6b:c.instructions+=4;goto B6e5e6b;
case 0x6e5e6c:c.instructions+=3;goto B6e5e6c;
case 0x6e5e6e:c.instructions+=2;goto B6e5e6e;
case 0x6e5e6f:c.instructions+=1;goto B6e5e6f;
case 0x6e5e72:goto L6e5e72;
case 0x6e5e75:c.instructions+=2;goto B6e5e75;
case 0x6e5e76:c.instructions+=1;goto B6e5e76;
case 0x6e5e78:goto L6e5e78;
case 0x6e5e7b:c.instructions+=3;goto B6e5e7b;
case 0x6e5e7e:c.instructions+=2;goto B6e5e7e;
case 0x6e5e81:c.instructions+=1;goto B6e5e81;
case 0x6e5e84:goto L6e5e84;
case 0x6e5e87:c.instructions+=11;goto B6e5e87;
case 0x6e5e8a:c.instructions+=10;goto B6e5e8a;
case 0x6e5e8d:c.instructions+=9;goto B6e5e8d;
case 0x6e5e90:c.instructions+=8;goto B6e5e90;
case 0x6e5e91:c.instructions+=7;goto B6e5e91;
case 0x6e5e95:c.instructions+=6;goto B6e5e95;
case 0x6e5e97:c.instructions+=5;goto B6e5e97;
case 0x6e5e98:c.instructions+=4;goto B6e5e98;
case 0x6e5e9a:c.instructions+=3;goto B6e5e9a;
case 0x6e5e9b:c.instructions+=2;goto B6e5e9b;
case 0x6e5e9c:c.instructions+=1;goto B6e5e9c;
case 0x6e5ea1:goto L6e5ea1;
case 0x6e5ea4:c.instructions+=3;goto B6e5ea4;
case 0x6e5ea7:c.instructions+=2;goto B6e5ea7;
case 0x6e5ea8:c.instructions+=1;goto B6e5ea8;
case 0x6e5eaa:goto L6e5eaa;
case 0x6e5ead:c.instructions+=11;goto B6e5ead;
case 0x6e5eb0:c.instructions+=10;goto B6e5eb0;
case 0x6e5eb3:c.instructions+=9;goto B6e5eb3;
case 0x6e5eb6:c.instructions+=8;goto B6e5eb6;
case 0x6e5eb7:c.instructions+=7;goto B6e5eb7;
case 0x6e5ebb:c.instructions+=6;goto B6e5ebb;
case 0x6e5ebe:c.instructions+=5;goto B6e5ebe;
case 0x6e5ebf:c.instructions+=4;goto B6e5ebf;
case 0x6e5ec2:c.instructions+=3;goto B6e5ec2;
case 0x6e5ec3:c.instructions+=2;goto B6e5ec3;
case 0x6e5ec4:c.instructions+=1;goto B6e5ec4;
case 0x6e5ec9:goto L6e5ec9;
case 0x6e5ecc:c.instructions+=7;goto B6e5ecc;
case 0x6e5ece:c.instructions+=6;goto B6e5ece;
case 0x6e5ecf:c.instructions+=5;goto B6e5ecf;
case 0x6e5ed0:c.instructions+=4;goto B6e5ed0;
case 0x6e5ed1:c.instructions+=3;goto B6e5ed1;
case 0x6e5ed3:c.instructions+=2;goto B6e5ed3;
case 0x6e5ed4:c.instructions+=1;goto B6e5ed4;
case 0x6e5ed7:goto L6e5ed7;
case 0x6e5ed9:c.instructions+=1;goto B6e5ed9;
case 0x6e5edf:goto L6e5edf;
case 0x6e5ee2:c.instructions+=3;goto B6e5ee2;
case 0x6e5ee5:c.instructions+=2;goto B6e5ee5;
case 0x6e5ee6:c.instructions+=1;goto B6e5ee6;
case 0x6e5eec:goto L6e5eec;
case 0x6e5eef:c.instructions+=13;goto B6e5eef;
case 0x6e5ef2:c.instructions+=12;goto B6e5ef2;
case 0x6e5ef5:c.instructions+=11;goto B6e5ef5;
case 0x6e5ef9:c.instructions+=10;goto B6e5ef9;
case 0x6e5f00:c.instructions+=9;goto B6e5f00;
case 0x6e5f02:c.instructions+=8;goto B6e5f02;
case 0x6e5f05:c.instructions+=7;goto B6e5f05;
case 0x6e5f0a:c.instructions+=6;goto B6e5f0a;
case 0x6e5f0c:c.instructions+=5;goto B6e5f0c;
case 0x6e5f0f:c.instructions+=4;goto B6e5f0f;
case 0x6e5f11:c.instructions+=3;goto B6e5f11;
case 0x6e5f14:c.instructions+=2;goto B6e5f14;
case 0x6e5f17:c.instructions+=1;goto B6e5f17;
case 0x6e5f1d:goto L6e5f1d;
case 0x6e5f20:c.instructions+=2;goto B6e5f20;
case 0x6e5f22:c.instructions+=1;goto B6e5f22;
case 0x6e5f28:goto L6e5f28;
case 0x6e5f2b:c.instructions+=25;goto B6e5f2b;
case 0x6e5f2e:c.instructions+=24;goto B6e5f2e;
case 0x6e5f31:c.instructions+=23;goto B6e5f31;
case 0x6e5f35:c.instructions+=22;goto B6e5f35;
case 0x6e5f39:c.instructions+=21;goto B6e5f39;
case 0x6e5f3b:c.instructions+=20;goto B6e5f3b;
case 0x6e5f3e:c.instructions+=19;goto B6e5f3e;
case 0x6e5f3f:c.instructions+=18;goto B6e5f3f;
case 0x6e5f42:c.instructions+=17;goto B6e5f42;
case 0x6e5f43:c.instructions+=16;goto B6e5f43;
case 0x6e5f46:c.instructions+=15;goto B6e5f46;
case 0x6e5f47:c.instructions+=14;goto B6e5f47;
case 0x6e5f4a:c.instructions+=13;goto B6e5f4a;
case 0x6e5f4b:c.instructions+=12;goto B6e5f4b;
case 0x6e5f4e:c.instructions+=11;goto B6e5f4e;
case 0x6e5f4f:c.instructions+=10;goto B6e5f4f;
case 0x6e5f52:c.instructions+=9;goto B6e5f52;
case 0x6e5f53:c.instructions+=8;goto B6e5f53;
case 0x6e5f56:c.instructions+=7;goto B6e5f56;
case 0x6e5f57:c.instructions+=6;goto B6e5f57;
case 0x6e5f59:c.instructions+=5;goto B6e5f59;
case 0x6e5f5a:c.instructions+=4;goto B6e5f5a;
case 0x6e5f5b:c.instructions+=3;goto B6e5f5b;
case 0x6e5f5c:c.instructions+=2;goto B6e5f5c;
case 0x6e5f60:c.instructions+=1;goto B6e5f60;
case 0x6e5f65:goto L6e5f65;
case 0x6e5f68:c.instructions+=3;goto B6e5f68;
case 0x6e5f69:c.instructions+=2;goto B6e5f69;
case 0x6e5f6d:c.instructions+=1;goto B6e5f6d;
case 0x6e5f72:goto L6e5f72;
case 0x6e5f76:c.instructions+=5;goto B6e5f76;
case 0x6e5f77:c.instructions+=4;goto B6e5f77;
case 0x6e5f7b:c.instructions+=3;goto B6e5f7b;
case 0x6e5f7c:c.instructions+=2;goto B6e5f7c;
case 0x6e5f80:c.instructions+=1;goto B6e5f80;
case 0x6e5f85:goto L6e5f85;
case 0x6e5f89:c.instructions+=27;goto B6e5f89;
case 0x6e5f8c:c.instructions+=26;goto B6e5f8c;
case 0x6e5f90:c.instructions+=25;goto B6e5f90;
case 0x6e5f93:c.instructions+=24;goto B6e5f93;
case 0x6e5f97:c.instructions+=23;goto B6e5f97;
case 0x6e5f9a:c.instructions+=22;goto B6e5f9a;
case 0x6e5f9e:c.instructions+=21;goto B6e5f9e;
case 0x6e5fa1:c.instructions+=20;goto B6e5fa1;
case 0x6e5fa5:c.instructions+=19;goto B6e5fa5;
case 0x6e5fa8:c.instructions+=18;goto B6e5fa8;
case 0x6e5fac:c.instructions+=17;goto B6e5fac;
case 0x6e5faf:c.instructions+=16;goto B6e5faf;
case 0x6e5fb2:c.instructions+=15;goto B6e5fb2;
case 0x6e5fb6:c.instructions+=14;goto B6e5fb6;
case 0x6e5fb9:c.instructions+=13;goto B6e5fb9;
case 0x6e5fbc:c.instructions+=12;goto B6e5fbc;
case 0x6e5fc3:c.instructions+=11;goto B6e5fc3;
case 0x6e5fc6:c.instructions+=10;goto B6e5fc6;
case 0x6e5fc9:c.instructions+=9;goto B6e5fc9;
case 0x6e5fca:c.instructions+=8;goto B6e5fca;
case 0x6e5fcd:c.instructions+=7;goto B6e5fcd;
case 0x6e5fcf:c.instructions+=6;goto B6e5fcf;
case 0x6e5fd0:c.instructions+=5;goto B6e5fd0;
case 0x6e5fd2:c.instructions+=4;goto B6e5fd2;
case 0x6e5fd6:c.instructions+=3;goto B6e5fd6;
case 0x6e5fd7:c.instructions+=2;goto B6e5fd7;
case 0x6e5fd8:c.instructions+=1;goto B6e5fd8;
case 0x6e5fdd:goto L6e5fdd;
case 0x6e5fe1:c.instructions+=1;goto B6e5fe1;
case 0x6e5fe4:goto L6e5fe4;
case 0x6e5fe7:c.instructions+=11;goto B6e5fe7;
case 0x6e5fea:c.instructions+=10;goto B6e5fea;
case 0x6e5fed:c.instructions+=9;goto B6e5fed;
case 0x6e5ff0:c.instructions+=8;goto B6e5ff0;
case 0x6e5ff1:c.instructions+=7;goto B6e5ff1;
case 0x6e5ff5:c.instructions+=6;goto B6e5ff5;
case 0x6e5ff7:c.instructions+=5;goto B6e5ff7;
case 0x6e5ff8:c.instructions+=4;goto B6e5ff8;
case 0x6e5ffa:c.instructions+=3;goto B6e5ffa;
case 0x6e5ffb:c.instructions+=2;goto B6e5ffb;
case 0x6e5ffc:c.instructions+=1;goto B6e5ffc;
default:missing_instruction(c.pc);}
B6e5000:L6e5000:{c.instructions+=5;NFSU2_TR(0x6e5000);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e5001:{NFSU2_TR(0x6e5001);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6e5003:{NFSU2_TR(0x6e5003);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e5004:{NFSU2_TR(0x6e5004);
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
B6e5007:{NFSU2_TR(0x6e5007);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e500a:L6e500a:{c.instructions+=3;NFSU2_TR(0x6e500a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e500d:{NFSU2_TR(0x6e500d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e5010:{NFSU2_TR(0x6e5010);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6e5016;}}
}
B6e5012:L6e5012:{c.instructions+=2;NFSU2_TR(0x6e5012);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6e5014:{NFSU2_TR(0x6e5014);
{goto L6e5017;}
}
B6e5016:L6e5016:{c.instructions+=1;NFSU2_TR(0x6e5016);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6e5017:L6e5017:{c.instructions+=3;NFSU2_TR(0x6e5017);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+8,u32(r2(U+8)));
}
B6e501b:{NFSU2_TR(0x6e501b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6e501d:{NFSU2_TR(0x6e501d);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6e5048;}}
}
B6e501f:L6e501f:{c.instructions+=3;NFSU2_TR(0x6e501f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffeull))));
__builtin_memmove((R+8),(U+0),4);
}
B6e5022:{NFSU2_TR(0x6e5022);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e5024:{NFSU2_TR(0x6e5024);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6e505d;}}
}
B6e5026:L6e5026:{c.instructions+=2;NFSU2_TR(0x6e5026);
u8 U[12];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B6e502a:{NFSU2_TR(0x6e502a);
__builtin_memmove((R+12),(R+12),4);
}
B6e5030:L6e5030:{c.instructions+=3;NFSU2_TR(0x6e5030);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+24,u32(r2(U+0)));
}
B6e5033:{NFSU2_TR(0x6e5033);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6e5035:{NFSU2_TR(0x6e5035);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6e505d;}}
}
B6e5037:L6e5037:{c.instructions+=4;NFSU2_TR(0x6e5037);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6e5038:{NFSU2_TR(0x6e5038);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B6e503b:{NFSU2_TR(0x6e503b);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e503d:{NFSU2_TR(0x6e503d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e5030u);}goto L6e5030;}}
}
B6e503f:L6e503f:{c.instructions+=5;NFSU2_TR(0x6e503f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e5040:{NFSU2_TR(0x6e5040);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6e5041:{NFSU2_TR(0x6e5041);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e5042:{NFSU2_TR(0x6e5042);
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
B6e5045:{NFSU2_TR(0x6e5045);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e5048:L6e5048:{c.instructions+=2;NFSU2_TR(0x6e5048);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e504a:{NFSU2_TR(0x6e504a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e505d;}}
}
B6e504c:L6e504c:{c.instructions+=1;NFSU2_TR(0x6e504c);
__builtin_memmove((R+16),(R+16),4);
}
B6e5050:L6e5050:{c.instructions+=3;NFSU2_TR(0x6e5050);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+8,u32(r2(U+8)));
}
B6e5054:{NFSU2_TR(0x6e5054);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6e5056:{NFSU2_TR(0x6e5056);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e505d;}}
}
B6e5058:L6e5058:{c.instructions+=3;NFSU2_TR(0x6e5058);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6e5059:{NFSU2_TR(0x6e5059);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e505b:{NFSU2_TR(0x6e505b);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e5050u);}goto L6e5050;}}
}
B6e505d:L6e505d:{c.instructions+=5;NFSU2_TR(0x6e505d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e505e:{NFSU2_TR(0x6e505e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6e505f:{NFSU2_TR(0x6e505f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e5060:{NFSU2_TR(0x6e5060);
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
B6e5063:{NFSU2_TR(0x6e5063);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e5070:L6e5070:{c.instructions+=9;NFSU2_TR(0x6e5070);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e5074:{NFSU2_TR(0x6e5074);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B6e5077:{NFSU2_TR(0x6e5077);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5078:{NFSU2_TR(0x6e5078);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5079:{NFSU2_TR(0x6e5079);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e507a:{NFSU2_TR(0x6e507a);
__builtin_memmove((R+24),(R+4),4);
}
B6e507c:{NFSU2_TR(0x6e507c);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6e507f:{NFSU2_TR(0x6e507f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5080:{NFSU2_TR(0x6e5080);
if(r1(R+518)){{goto L6e508c;}}
}
B6e5082:L6e5082:{c.instructions+=2;NFSU2_TR(0x6e5082);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e5089:{NFSU2_TR(0x6e5089);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e508c:L6e508c:{c.instructions+=12;NFSU2_TR(0x6e508c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e508f:{NFSU2_TR(0x6e508f);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6e5093:{NFSU2_TR(0x6e5093);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e5096:{NFSU2_TR(0x6e5096);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e509a:{NFSU2_TR(0x6e509a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e509d:{NFSU2_TR(0x6e509d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xeull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e50a0:{NFSU2_TR(0x6e50a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e50a3:{NFSU2_TR(0x6e50a3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e50a5:{NFSU2_TR(0x6e50a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e50a9:{NFSU2_TR(0x6e50a9);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
__builtin_memmove((R+4),(U+0),2);
}
B6e50ac:{NFSU2_TR(0x6e50ac);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e50b0:{NFSU2_TR(0x6e50b0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e5112;}}
}
B6e50b2:L6e50b2:{c.instructions+=2;NFSU2_TR(0x6e50b2);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w2(U+4,u16(u32(r2(R+4))&u32(r2(R+4))));
w1(R+519,u8(s16(r2(U+4))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+4))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B6e50b5:{NFSU2_TR(0x6e50b5);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6e5112;}}
}
B6e50b7:L6e50b7:{c.instructions+=6;NFSU2_TR(0x6e50b7);
w4(R+20,u32(r2(R+4)));
}
B6e50ba:{NFSU2_TR(0x6e50ba);
__builtin_memmove((R+4),gp(0x8ab294),4);
}
B6e50c0:{NFSU2_TR(0x6e50c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e50c2:{NFSU2_TR(0x6e50c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6e50c6:{NFSU2_TR(0x6e50c6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e50c7:{NFSU2_TR(0x6e50c7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e50caull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e50ca:L6e50ca:{c.instructions+=4;NFSU2_TR(0x6e50ca);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6e50cc:{NFSU2_TR(0x6e50cc);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e50ce:{NFSU2_TR(0x6e50ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e50d1:{NFSU2_TR(0x6e50d1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e510e;}}
}
B6e50d3:L6e50d3:{c.instructions+=13;NFSU2_TR(0x6e50d3);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+4,u32(r2(U+8)));
}
B6e50d7:{NFSU2_TR(0x6e50d7);
w4(R+0,u32(0xaaaaaaabull));
}
B6e50dc:{NFSU2_TR(0x6e50dc);
u8 U[24];
w8(U+0,u64(r4(R+0)));
w8(U+8,u64(r4(R+4)));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B6e50de:{NFSU2_TR(0x6e50de);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B6e50e1:{NFSU2_TR(0x6e50e1);
w4(R+0,u32(r1(R+8)));
}
B6e50e4:{NFSU2_TR(0x6e50e4);
__builtin_memmove((R+4),(R+0),4);
}
B6e50e6:{NFSU2_TR(0x6e50e6);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6e50e9:{NFSU2_TR(0x6e50e9);
w4(R+8,u32(0x1ull));
}
B6e50ee:{NFSU2_TR(0x6e50ee);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B6e50f0:{NFSU2_TR(0x6e50f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e50f4:{NFSU2_TR(0x6e50f4);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B6e50f7:{NFSU2_TR(0x6e50f7);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6e50fa:{NFSU2_TR(0x6e50fa);
if(r1(R+518)){{goto L6e5109;}}
}
B6e50fc:L6e50fc:{c.instructions+=4;NFSU2_TR(0x6e50fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e50ff:{NFSU2_TR(0x6e50ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e5102:{NFSU2_TR(0x6e5102);
u8 U[10];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),2);
s2(u32(r4(U+4)),r2(U+8));
}
B6e5106:{NFSU2_TR(0x6e5106);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6e5109:L6e5109:{c.instructions+=3;NFSU2_TR(0x6e5109);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6e510a:{NFSU2_TR(0x6e510a);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e510c:{NFSU2_TR(0x6e510c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e50d3u);}goto L6e50d3;}}
}
B6e510e:L6e510e:{c.instructions+=1;NFSU2_TR(0x6e510e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e5112:L6e5112:{c.instructions+=4;NFSU2_TR(0x6e5112);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e5116:{NFSU2_TR(0x6e5116);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5117:{NFSU2_TR(0x6e5117);
__builtin_memmove((R+4),(R+24),4);
}
B6e5119:{NFSU2_TR(0x6e5119);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e511eull));
TAIL_STATIC(0x6e4f90u,6e4);
}
B6e511e:L6e511e:{c.instructions+=15;NFSU2_TR(0x6e511e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e5121:{NFSU2_TR(0x6e5121);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e5124:{NFSU2_TR(0x6e5124);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5125:{NFSU2_TR(0x6e5125);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e5128:{NFSU2_TR(0x6e5128);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5129:{NFSU2_TR(0x6e5129);
__builtin_memmove((R+28),(R+0),4);
}
B6e512b:{NFSU2_TR(0x6e512b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e512e:{NFSU2_TR(0x6e512e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e512f:{NFSU2_TR(0x6e512f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5130:{NFSU2_TR(0x6e5130);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e5133:{NFSU2_TR(0x6e5133);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e5136:{NFSU2_TR(0x6e5136);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5137:{NFSU2_TR(0x6e5137);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5138:{NFSU2_TR(0x6e5138);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e513a:{NFSU2_TR(0x6e513a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e513full));
TAIL_STATIC(0x6f03c0u,6f0);
}
B6e513f:L6e513f:{c.instructions+=3;NFSU2_TR(0x6e513f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e5141:{NFSU2_TR(0x6e5141);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e5144:{NFSU2_TR(0x6e5144);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e514a;}}
}
B6e5146:L6e5146:{c.instructions+=2;NFSU2_TR(0x6e5146);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6e5148:{NFSU2_TR(0x6e5148);
{goto L6e514f;}
}
B6e514a:L6e514a:{c.instructions+=1;NFSU2_TR(0x6e514a);
u8 U[14];
w4(U+0,u32(u32(u32(0xfffffffeull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+4,u32(r2(U+12)));
}
B6e514f:L6e514f:{c.instructions+=7;NFSU2_TR(0x6e514f);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e5153:{NFSU2_TR(0x6e5153);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e5157:{NFSU2_TR(0x6e5157);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B6e515b:{NFSU2_TR(0x6e515b);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e515f:{NFSU2_TR(0x6e515f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e5161:{NFSU2_TR(0x6e5161);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6e5164:{NFSU2_TR(0x6e5164);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6e51eb;}}
}
B6e516a:L6e516a:{c.instructions+=4;NFSU2_TR(0x6e516a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e516e:{NFSU2_TR(0x6e516e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((R+8),(U+0),4);
}
B6e5171:{NFSU2_TR(0x6e5171);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6e5173:{NFSU2_TR(0x6e5173);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e518d;}}
}
B6e5175:L6e5175:{c.instructions+=7;NFSU2_TR(0x6e5175);
u8 U[14];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+0,u32(r2(U+12)));
}
B6e517a:{NFSU2_TR(0x6e517a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e517e:{NFSU2_TR(0x6e517e);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e5182:{NFSU2_TR(0x6e5182);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e5186:{NFSU2_TR(0x6e5186);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e5188:{NFSU2_TR(0x6e5188);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6e518b:{NFSU2_TR(0x6e518b);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6e51eb;}}
}
B6e518d:L6e518d:{c.instructions+=2;NFSU2_TR(0x6e518d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e518f:{NFSU2_TR(0x6e518f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e51a2;}}
}
B6e5191:L6e5191:{c.instructions+=5;NFSU2_TR(0x6e5191);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e5195:{NFSU2_TR(0x6e5195);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e519b:{NFSU2_TR(0x6e519b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e519d:{NFSU2_TR(0x6e519d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6e51a0:{NFSU2_TR(0x6e51a0);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6e51eb;}}
}
B6e51a2:L6e51a2:{c.instructions+=23;NFSU2_TR(0x6e51a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e51a5:{NFSU2_TR(0x6e51a5);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e51a9:{NFSU2_TR(0x6e51a9);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e51ad:{NFSU2_TR(0x6e51ad);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e51ae:{NFSU2_TR(0x6e51ae);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+8,u32(r2(U+8)));
}
B6e51b3:{NFSU2_TR(0x6e51b3);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B6e51b5:{NFSU2_TR(0x6e51b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e51b9:{NFSU2_TR(0x6e51b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e51bc:{NFSU2_TR(0x6e51bc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e51bd:{NFSU2_TR(0x6e51bd);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xda,0x30"::"a"(ea_):"memory");}
}
B6e51c1:{NFSU2_TR(0x6e51c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e51c5:{NFSU2_TR(0x6e51c5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e51c6:{NFSU2_TR(0x6e51c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e51c9:{NFSU2_TR(0x6e51c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6e51cc:{NFSU2_TR(0x6e51cc);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e51cf:{NFSU2_TR(0x6e51cf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e51d0:{NFSU2_TR(0x6e51d0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e51d2:{NFSU2_TR(0x6e51d2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e51d3:{NFSU2_TR(0x6e51d3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e51d4:{NFSU2_TR(0x6e51d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e51d8:{NFSU2_TR(0x6e51d8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e51d9:{NFSU2_TR(0x6e51d9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e51da:{NFSU2_TR(0x6e51da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e51dfull));
TAIL_STATIC(0x6f0770u,6f0);
}
B6e51df:L6e51df:{c.instructions+=7;NFSU2_TR(0x6e51df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e51e0:{NFSU2_TR(0x6e51e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e51e1:{NFSU2_TR(0x6e51e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e51e2:{NFSU2_TR(0x6e51e2);
w1(R+0,u8(0x1ull));
}
B6e51e4:{NFSU2_TR(0x6e51e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e51e5:{NFSU2_TR(0x6e51e5);
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
B6e51e8:{NFSU2_TR(0x6e51e8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e51eb:L6e51eb:{c.instructions+=4;NFSU2_TR(0x6e51eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e51ee:{NFSU2_TR(0x6e51ee);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6e51f0:{NFSU2_TR(0x6e51f0);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e51f2:{NFSU2_TR(0x6e51f2);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e521c;}}
}
B6e51f4:L6e51f4:{c.instructions+=2;NFSU2_TR(0x6e51f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e51f8:{NFSU2_TR(0x6e51f8);
{goto L6e5200;}
}
B6e5200:L6e5200:{c.instructions+=10;NFSU2_TR(0x6e5200);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e5203:{NFSU2_TR(0x6e5203);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+4,u32(r2(U+8)));
}
B6e5207:{NFSU2_TR(0x6e5207);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+20,u32(r2(U+8)));
}
B6e520b:{NFSU2_TR(0x6e520b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e520e:{NFSU2_TR(0x6e520e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6e5211:{NFSU2_TR(0x6e5211);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6e5214:{NFSU2_TR(0x6e5214);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e5217:{NFSU2_TR(0x6e5217);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6e5218:{NFSU2_TR(0x6e5218);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e521a:{NFSU2_TR(0x6e521a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e5200u);}goto L6e5200;}}
}
B6e521c:L6e521c:{c.instructions+=7;NFSU2_TR(0x6e521c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e521d:{NFSU2_TR(0x6e521d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e521e:{NFSU2_TR(0x6e521e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e521f:{NFSU2_TR(0x6e521f);
w1(R+0,u8(0x1ull));
}
B6e5221:{NFSU2_TR(0x6e5221);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e5222:{NFSU2_TR(0x6e5222);
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
B6e5225:{NFSU2_TR(0x6e5225);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e5230:L6e5230:{c.instructions+=9;NFSU2_TR(0x6e5230);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e5234:{NFSU2_TR(0x6e5234);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B6e5237:{NFSU2_TR(0x6e5237);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5238:{NFSU2_TR(0x6e5238);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5239:{NFSU2_TR(0x6e5239);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e523a:{NFSU2_TR(0x6e523a);
__builtin_memmove((R+24),(R+4),4);
}
B6e523c:{NFSU2_TR(0x6e523c);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6e523f:{NFSU2_TR(0x6e523f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5240:{NFSU2_TR(0x6e5240);
if(r1(R+518)){{goto L6e524c;}}
}
B6e5242:L6e5242:{c.instructions+=2;NFSU2_TR(0x6e5242);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e5249:{NFSU2_TR(0x6e5249);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e524c:L6e524c:{c.instructions+=11;NFSU2_TR(0x6e524c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e524f:{NFSU2_TR(0x6e524f);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6e5253:{NFSU2_TR(0x6e5253);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e5256:{NFSU2_TR(0x6e5256);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e5258:{NFSU2_TR(0x6e5258);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e525b:{NFSU2_TR(0x6e525b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e525f:{NFSU2_TR(0x6e525f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e5262:{NFSU2_TR(0x6e5262);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e5266:{NFSU2_TR(0x6e5266);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
__builtin_memmove((R+0),(U+0),2);
}
B6e5269:{NFSU2_TR(0x6e5269);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e526d:{NFSU2_TR(0x6e526d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e52d3;}}
}
B6e526f:L6e526f:{c.instructions+=2;NFSU2_TR(0x6e526f);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w2(U+4,u16(u32(r2(R+0))&u32(r2(R+0))));
w1(R+519,u8(s16(r2(U+4))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+4))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B6e5272:{NFSU2_TR(0x6e5272);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6e52d3;}}
}
B6e5274:L6e5274:{c.instructions+=6;NFSU2_TR(0x6e5274);
__builtin_memmove((R+4),gp(0x8ab294),4);
}
B6e527a:{NFSU2_TR(0x6e527a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e527c:{NFSU2_TR(0x6e527c);
w4(R+28,u32(r2(R+0)));
}
B6e527f:{NFSU2_TR(0x6e527f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6e5282:{NFSU2_TR(0x6e5282);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5283:{NFSU2_TR(0x6e5283);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e5286ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e5286:L6e5286:{c.instructions+=4;NFSU2_TR(0x6e5286);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6e5288:{NFSU2_TR(0x6e5288);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e528a:{NFSU2_TR(0x6e528a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e528d:{NFSU2_TR(0x6e528d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e52cf;}}
}
B6e528f:L6e528f:{c.instructions+=3;NFSU2_TR(0x6e528f);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B6e5290:{NFSU2_TR(0x6e5290);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B6e5293:{NFSU2_TR(0x6e5293);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6e5294:L6e5294:{c.instructions+=13;NFSU2_TR(0x6e5294);
u8 U[14];
w4(U+0,u32(u32(u32(0xeull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+4,u32(r2(U+12)));
}
B6e5299:{NFSU2_TR(0x6e5299);
w4(R+0,u32(0xaaaaaaabull));
}
B6e529e:{NFSU2_TR(0x6e529e);
u8 U[24];
w8(U+0,u64(r4(R+0)));
w8(U+8,u64(r4(R+4)));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B6e52a0:{NFSU2_TR(0x6e52a0);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B6e52a3:{NFSU2_TR(0x6e52a3);
w4(R+0,u32(r1(R+8)));
}
B6e52a6:{NFSU2_TR(0x6e52a6);
__builtin_memmove((R+4),(R+0),4);
}
B6e52a8:{NFSU2_TR(0x6e52a8);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6e52ab:{NFSU2_TR(0x6e52ab);
w4(R+8,u32(0x1ull));
}
B6e52b0:{NFSU2_TR(0x6e52b0);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B6e52b2:{NFSU2_TR(0x6e52b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e52b6:{NFSU2_TR(0x6e52b6);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B6e52b9:{NFSU2_TR(0x6e52b9);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6e52bc:{NFSU2_TR(0x6e52bc);
if(r1(R+518)){{goto L6e52cb;}}
}
B6e52be:L6e52be:{c.instructions+=4;NFSU2_TR(0x6e52be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e52c1:{NFSU2_TR(0x6e52c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e52c4:{NFSU2_TR(0x6e52c4);
u8 U[10];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),2);
s2(u32(r4(U+4)),r2(U+8));
}
B6e52c8:{NFSU2_TR(0x6e52c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6e52cb:L6e52cb:{c.instructions+=3;NFSU2_TR(0x6e52cb);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6e52cc:{NFSU2_TR(0x6e52cc);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B6e52cd:{NFSU2_TR(0x6e52cd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e5294u);}goto L6e5294;}}
}
B6e52cf:L6e52cf:{c.instructions+=1;NFSU2_TR(0x6e52cf);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e52d3:L6e52d3:{c.instructions+=4;NFSU2_TR(0x6e52d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e52d7:{NFSU2_TR(0x6e52d7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e52d8:{NFSU2_TR(0x6e52d8);
__builtin_memmove((R+4),(R+24),4);
}
B6e52da:{NFSU2_TR(0x6e52da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e52dfull));
TAIL_STATIC(0x6e4f90u,6e4);
}
B6e52df:L6e52df:{c.instructions+=15;NFSU2_TR(0x6e52df);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e52e2:{NFSU2_TR(0x6e52e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e52e5:{NFSU2_TR(0x6e52e5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e52e6:{NFSU2_TR(0x6e52e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e52e9:{NFSU2_TR(0x6e52e9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e52ea:{NFSU2_TR(0x6e52ea);
__builtin_memmove((R+12),(R+0),4);
}
B6e52ec:{NFSU2_TR(0x6e52ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e52ef:{NFSU2_TR(0x6e52ef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e52f0:{NFSU2_TR(0x6e52f0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e52f1:{NFSU2_TR(0x6e52f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e52f4:{NFSU2_TR(0x6e52f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e52f7:{NFSU2_TR(0x6e52f7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e52f8:{NFSU2_TR(0x6e52f8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e52f9:{NFSU2_TR(0x6e52f9);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e52fb:{NFSU2_TR(0x6e52fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e5300ull));
TAIL_STATIC(0x6f03c0u,6f0);
}
B6e5300:L6e5300:{c.instructions+=3;NFSU2_TR(0x6e5300);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e5302:{NFSU2_TR(0x6e5302);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e5305:{NFSU2_TR(0x6e5305);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e530b;}}
}
B6e5307:L6e5307:{c.instructions+=2;NFSU2_TR(0x6e5307);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6e5309:{NFSU2_TR(0x6e5309);
{goto L6e5310;}
}
B6e530b:L6e530b:{c.instructions+=1;NFSU2_TR(0x6e530b);
u8 U[14];
w4(U+0,u32(u32(u32(0xfffffffeull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+4,u32(r2(U+12)));
}
B6e5310:L6e5310:{c.instructions+=7;NFSU2_TR(0x6e5310);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e5314:{NFSU2_TR(0x6e5314);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e5318:{NFSU2_TR(0x6e5318);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B6e531c:{NFSU2_TR(0x6e531c);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e5320:{NFSU2_TR(0x6e5320);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e5322:{NFSU2_TR(0x6e5322);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6e5325:{NFSU2_TR(0x6e5325);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6e5400;}}
}
B6e532b:L6e532b:{c.instructions+=4;NFSU2_TR(0x6e532b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e532f:{NFSU2_TR(0x6e532f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((R+8),(U+0),4);
}
B6e5332:{NFSU2_TR(0x6e5332);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6e5334:{NFSU2_TR(0x6e5334);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e5352;}}
}
B6e5336:L6e5336:{c.instructions+=7;NFSU2_TR(0x6e5336);
u8 U[14];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+0,u32(r2(U+12)));
}
B6e533b:{NFSU2_TR(0x6e533b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e533f:{NFSU2_TR(0x6e533f);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e5343:{NFSU2_TR(0x6e5343);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e5347:{NFSU2_TR(0x6e5347);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e5349:{NFSU2_TR(0x6e5349);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6e534c:{NFSU2_TR(0x6e534c);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6e5400;}}
}
B6e5352:L6e5352:{c.instructions+=2;NFSU2_TR(0x6e5352);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e5354:{NFSU2_TR(0x6e5354);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e536b;}}
}
B6e5356:L6e5356:{c.instructions+=5;NFSU2_TR(0x6e5356);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e535a:{NFSU2_TR(0x6e535a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e5360:{NFSU2_TR(0x6e5360);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e5362:{NFSU2_TR(0x6e5362);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6e5365:{NFSU2_TR(0x6e5365);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6e5400;}}
}
B6e536b:L6e536b:{c.instructions+=11;NFSU2_TR(0x6e536b);
u8 U[10];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+8,u32(r2(U+8)));
}
B6e536f:{NFSU2_TR(0x6e536f);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e5373:{NFSU2_TR(0x6e5373);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e5377:{NFSU2_TR(0x6e5377);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B6e5379:{NFSU2_TR(0x6e5379);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e537d:{NFSU2_TR(0x6e537d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e5380:{NFSU2_TR(0x6e5380);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6e5382:{NFSU2_TR(0x6e5382);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e5384:{NFSU2_TR(0x6e5384);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xda,0x30"::"a"(ea_):"memory");}
}
B6e5388:{NFSU2_TR(0x6e5388);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e538c:{NFSU2_TR(0x6e538c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e5447;}}
}
B6e5392:L6e5392:{c.instructions+=17;NFSU2_TR(0x6e5392);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e5395:{NFSU2_TR(0x6e5395);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+0,u32(r2(U+8)));
}
B6e5399:{NFSU2_TR(0x6e5399);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6e539d:{NFSU2_TR(0x6e539d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e539e:{NFSU2_TR(0x6e539e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e53a1:{NFSU2_TR(0x6e53a1);
__builtin_memmove((R+8),(R+0),4);
}
B6e53a3:{NFSU2_TR(0x6e53a3);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6e53a6:{NFSU2_TR(0x6e53a6);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B6e53a8:{NFSU2_TR(0x6e53a8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e53a9:{NFSU2_TR(0x6e53a9);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6e53ac:{NFSU2_TR(0x6e53ac);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e53ad:{NFSU2_TR(0x6e53ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e53b1:{NFSU2_TR(0x6e53b1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e53b2:{NFSU2_TR(0x6e53b2);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e53b4:{NFSU2_TR(0x6e53b4);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6e53b7:{NFSU2_TR(0x6e53b7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e53b8:{NFSU2_TR(0x6e53b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e53bdull));
TAIL_STATIC(0x6efa20u,6ef);
}
B6e53bd:L6e53bd:{c.instructions+=15;NFSU2_TR(0x6e53bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e53c0:{NFSU2_TR(0x6e53c0);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+0,u32(r2(U+8)));
}
B6e53c4:{NFSU2_TR(0x6e53c4);
u8 U[14];
w4(U+0,u32(u32(u32(0xeull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+8,u32(r2(U+12)));
}
B6e53c9:{NFSU2_TR(0x6e53c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e53cd:{NFSU2_TR(0x6e53cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6e53d0:{NFSU2_TR(0x6e53d0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e53d1:{NFSU2_TR(0x6e53d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e53d4:{NFSU2_TR(0x6e53d4);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6e53d8:{NFSU2_TR(0x6e53d8);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6e53db:{NFSU2_TR(0x6e53db);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e53dc:{NFSU2_TR(0x6e53dc);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B6e53de:{NFSU2_TR(0x6e53de);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e53e2:{NFSU2_TR(0x6e53e2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e53e3:{NFSU2_TR(0x6e53e3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e53e4:{NFSU2_TR(0x6e53e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e53e9ull));
TAIL_STATIC(0x6e4450u,6e4);
}
B6e53e9:L6e53e9:{c.instructions+=5;NFSU2_TR(0x6e53e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e53ec:{NFSU2_TR(0x6e53ec);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6e53ef:{NFSU2_TR(0x6e53ef);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6e53f0:{NFSU2_TR(0x6e53f0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e53f2:{NFSU2_TR(0x6e53f2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e5392u);}goto L6e5392;}}
}
B6e53f4:L6e53f4:{c.instructions+=7;NFSU2_TR(0x6e53f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e53f5:{NFSU2_TR(0x6e53f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e53f6:{NFSU2_TR(0x6e53f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e53f7:{NFSU2_TR(0x6e53f7);
w1(R+0,u8(0x1ull));
}
B6e53f9:{NFSU2_TR(0x6e53f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e53fa:{NFSU2_TR(0x6e53fa);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x1cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x1cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e53fd:{NFSU2_TR(0x6e53fd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e5400:L6e5400:{c.instructions+=4;NFSU2_TR(0x6e5400);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e5403:{NFSU2_TR(0x6e5403);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6e5405:{NFSU2_TR(0x6e5405);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e5407:{NFSU2_TR(0x6e5407);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e5447;}}
}
B6e5409:L6e5409:{c.instructions+=2;NFSU2_TR(0x6e5409);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e540d:{NFSU2_TR(0x6e540d);
__builtin_memmove((R+4),(R+4),4);
}
B6e5410:L6e5410:{c.instructions+=20;NFSU2_TR(0x6e5410);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e5413:{NFSU2_TR(0x6e5413);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+4,u32(r2(U+8)));
}
B6e5417:{NFSU2_TR(0x6e5417);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e541a:{NFSU2_TR(0x6e541a);
__builtin_memmove((R+28),(R+4),4);
}
B6e541c:{NFSU2_TR(0x6e541c);
u8 U[14];
w4(U+0,u32(u32(u32(0xeull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+4,u32(r2(U+12)));
}
B6e5421:{NFSU2_TR(0x6e5421);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6e5424:{NFSU2_TR(0x6e5424);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+12))));
}
B6e5426:{NFSU2_TR(0x6e5426);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6e5428:{NFSU2_TR(0x6e5428);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6e542b:{NFSU2_TR(0x6e542b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6e542d:{NFSU2_TR(0x6e542d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e5430:{NFSU2_TR(0x6e5430);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e5433:{NFSU2_TR(0x6e5433);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e5436:{NFSU2_TR(0x6e5436);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e5439:{NFSU2_TR(0x6e5439);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e543c:{NFSU2_TR(0x6e543c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e543f:{NFSU2_TR(0x6e543f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e5442:{NFSU2_TR(0x6e5442);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6e5443:{NFSU2_TR(0x6e5443);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e5445:{NFSU2_TR(0x6e5445);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e5410u);}goto L6e5410;}}
}
B6e5447:L6e5447:{c.instructions+=7;NFSU2_TR(0x6e5447);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e5448:{NFSU2_TR(0x6e5448);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e5449:{NFSU2_TR(0x6e5449);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e544a:{NFSU2_TR(0x6e544a);
w1(R+0,u8(0x1ull));
}
B6e544c:{NFSU2_TR(0x6e544c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e544d:{NFSU2_TR(0x6e544d);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x1cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x1cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e5450:{NFSU2_TR(0x6e5450);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e5460:L6e5460:{c.instructions+=5;NFSU2_TR(0x6e5460);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e5464:{NFSU2_TR(0x6e5464);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e5466:{NFSU2_TR(0x6e5466);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5467:{NFSU2_TR(0x6e5467);
__builtin_memmove((R+24),(R+4),4);
}
B6e5469:{NFSU2_TR(0x6e5469);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e5551;}}
}
B6e546f:L6e546f:{c.instructions+=3;NFSU2_TR(0x6e546f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e5472:{NFSU2_TR(0x6e5472);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e5474:{NFSU2_TR(0x6e5474);
if(r1(R+518)){{goto L6e5484;}}
}
B6e5476:L6e5476:{c.instructions+=2;NFSU2_TR(0x6e5476);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e547d:{NFSU2_TR(0x6e547d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e5484:L6e5484:{c.instructions+=6;NFSU2_TR(0x6e5484);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e5488:{NFSU2_TR(0x6e5488);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5489:{NFSU2_TR(0x6e5489);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e548a:{NFSU2_TR(0x6e548a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e548b:{NFSU2_TR(0x6e548b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e548c:{NFSU2_TR(0x6e548c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e5491ull));
TAIL_STATIC(0x6e4900u,6e4);
}
B6e5491:L6e5491:{c.instructions+=9;NFSU2_TR(0x6e5491);
__builtin_memmove((R+12),(R+0),4);
}
B6e5493:{NFSU2_TR(0x6e5493);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e5496:{NFSU2_TR(0x6e5496);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e5499:{NFSU2_TR(0x6e5499);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6e549d:{NFSU2_TR(0x6e549d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6e54a0:{NFSU2_TR(0x6e54a0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e54a2:{NFSU2_TR(0x6e54a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e54a6:{NFSU2_TR(0x6e54a6);
__builtin_memmove((R+28),(R+12),4);
}
B6e54a8:{NFSU2_TR(0x6e54a8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6e54af;}}
}
B6e54aa:L6e54aa:{c.instructions+=2;NFSU2_TR(0x6e54aa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e54ad:{NFSU2_TR(0x6e54ad);
{goto L6e54b5;}
}
B6e54af:L6e54af:{c.instructions+=2;NFSU2_TR(0x6e54af);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6e54b1:{NFSU2_TR(0x6e54b1);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6e54b5;}}
}
B6e54b3:L6e54b3:{c.instructions+=1;NFSU2_TR(0x6e54b3);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6e54b5:L6e54b5:{c.instructions+=10;NFSU2_TR(0x6e54b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e54b8:{NFSU2_TR(0x6e54b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e54bb:{NFSU2_TR(0x6e54bb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e54bc:{NFSU2_TR(0x6e54bc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e54bd:{NFSU2_TR(0x6e54bd);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+0,u32(r2(U+0)));
}
B6e54c0:{NFSU2_TR(0x6e54c0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e54c1:{NFSU2_TR(0x6e54c1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e54c2:{NFSU2_TR(0x6e54c2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e54c3:{NFSU2_TR(0x6e54c3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e54c5:{NFSU2_TR(0x6e54c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e54caull));
TAIL_STATIC(0x6efa20u,6ef);
}
B6e54ca:L6e54ca:{c.instructions+=12;NFSU2_TR(0x6e54ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e54cd:{NFSU2_TR(0x6e54cd);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e54d1:{NFSU2_TR(0x6e54d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e54d4:{NFSU2_TR(0x6e54d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e54d7:{NFSU2_TR(0x6e54d7);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
__builtin_memmove((R+20),(U+0),2);
}
B6e54da:{NFSU2_TR(0x6e54da);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e54de:{NFSU2_TR(0x6e54de);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xaull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e54e1:{NFSU2_TR(0x6e54e1);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e54e5:{NFSU2_TR(0x6e54e5);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e54e9:{NFSU2_TR(0x6e54e9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e54eb:{NFSU2_TR(0x6e54eb);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6e54ee:{NFSU2_TR(0x6e54ee);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6e5529;}}
}
B6e54f0:L6e54f0:{c.instructions+=4;NFSU2_TR(0x6e54f0);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6e54f4:{NFSU2_TR(0x6e54f4);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6e54f7:{NFSU2_TR(0x6e54f7);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e54f9:{NFSU2_TR(0x6e54f9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6e5529;}}
}
B6e54fb:L6e54fb:{c.instructions+=16;NFSU2_TR(0x6e54fb);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e54ff:{NFSU2_TR(0x6e54ff);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e5503:{NFSU2_TR(0x6e5503);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e5507:{NFSU2_TR(0x6e5507);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5508:{NFSU2_TR(0x6e5508);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e550b:{NFSU2_TR(0x6e550b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e550c:{NFSU2_TR(0x6e550c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e550e:{NFSU2_TR(0x6e550e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e550f:{NFSU2_TR(0x6e550f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e5512:{NFSU2_TR(0x6e5512);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5513:{NFSU2_TR(0x6e5513);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5514:{NFSU2_TR(0x6e5514);
w4(R+0,u32(r2(R+20)));
}
B6e5517:{NFSU2_TR(0x6e5517);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5518:{NFSU2_TR(0x6e5518);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5519:{NFSU2_TR(0x6e5519);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e551b:{NFSU2_TR(0x6e551b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e5520ull));
TAIL_STATIC(0x6efe40u,6ef);
}
B6e5520:L6e5520:{c.instructions+=6;NFSU2_TR(0x6e5520);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e5521:{NFSU2_TR(0x6e5521);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e5522:{NFSU2_TR(0x6e5522);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e5523:{NFSU2_TR(0x6e5523);
w1(R+0,u8(0x1ull));
}
B6e5525:{NFSU2_TR(0x6e5525);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e5526:{NFSU2_TR(0x6e5526);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e5529:L6e5529:{c.instructions+=4;NFSU2_TR(0x6e5529);
w4(R+4,u32(r2(R+20)));
}
B6e552c:{NFSU2_TR(0x6e552c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6e552e:{NFSU2_TR(0x6e552e);
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
B6e5530:{NFSU2_TR(0x6e5530);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e5548;}}
}
B6e5532:L6e5532:{c.instructions+=1;NFSU2_TR(0x6e5532);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e5536:L6e5536:{c.instructions+=7;NFSU2_TR(0x6e5536);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e5539:{NFSU2_TR(0x6e5539);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+20,u32(r2(U+8)));
}
B6e553d:{NFSU2_TR(0x6e553d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6e5540:{NFSU2_TR(0x6e5540);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6e5541:{NFSU2_TR(0x6e5541);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B6e5543:{NFSU2_TR(0x6e5543);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6e5546:{NFSU2_TR(0x6e5546);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e5536u);}goto L6e5536;}}
}
B6e5548:L6e5548:{c.instructions+=6;NFSU2_TR(0x6e5548);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e5549:{NFSU2_TR(0x6e5549);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e554a:{NFSU2_TR(0x6e554a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e554b:{NFSU2_TR(0x6e554b);
w1(R+0,u8(0x1ull));
}
B6e554d:{NFSU2_TR(0x6e554d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e554e:{NFSU2_TR(0x6e554e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e5551:L6e5551:{c.instructions+=7;NFSU2_TR(0x6e5551);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e5555:{NFSU2_TR(0x6e5555);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e5559:{NFSU2_TR(0x6e5559);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e555a:{NFSU2_TR(0x6e555a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e555b:{NFSU2_TR(0x6e555b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e555c:{NFSU2_TR(0x6e555c);
__builtin_memmove((R+4),(R+24),4);
}
B6e555e:{NFSU2_TR(0x6e555e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e5563ull));
TAIL_STATIC(0x6e4a70u,6e4);
}
B6e5563:L6e5563:{c.instructions+=2;NFSU2_TR(0x6e5563);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e5564:{NFSU2_TR(0x6e5564);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e5570:L6e5570:{c.instructions+=6;NFSU2_TR(0x6e5570);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e5574:{NFSU2_TR(0x6e5574);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B6e5577:{NFSU2_TR(0x6e5577);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e5579:{NFSU2_TR(0x6e5579);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e557a:{NFSU2_TR(0x6e557a);
__builtin_memmove((R+24),(R+4),4);
}
B6e557c:{NFSU2_TR(0x6e557c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e56ad;}}
}
B6e5582:L6e5582:{c.instructions+=3;NFSU2_TR(0x6e5582);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e5585:{NFSU2_TR(0x6e5585);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e5587:{NFSU2_TR(0x6e5587);
if(r1(R+518)){{goto L6e5597;}}
}
B6e5589:L6e5589:{c.instructions+=2;NFSU2_TR(0x6e5589);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e5590:{NFSU2_TR(0x6e5590);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e5597:L6e5597:{c.instructions+=14;NFSU2_TR(0x6e5597);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e559a:{NFSU2_TR(0x6e559a);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6e559e:{NFSU2_TR(0x6e559e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e559f:{NFSU2_TR(0x6e559f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e55a0:{NFSU2_TR(0x6e55a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e55a3:{NFSU2_TR(0x6e55a3);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+20))),2);
__builtin_memmove((R+8),(U+0),2);
}
B6e55a7:{NFSU2_TR(0x6e55a7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
}
B6e55aa:{NFSU2_TR(0x6e55aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e55ae:{NFSU2_TR(0x6e55ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e55b2:{NFSU2_TR(0x6e55b2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e55b3:{NFSU2_TR(0x6e55b3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e55b4:{NFSU2_TR(0x6e55b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e55b8:{NFSU2_TR(0x6e55b8);
u8 U[6];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B6e55bd:{NFSU2_TR(0x6e55bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e55c2ull));
TAIL_STATIC(0x6e4900u,6e4);
}
B6e55c2:L6e55c2:{c.instructions+=9;NFSU2_TR(0x6e55c2);
__builtin_memmove((R+28),(R+0),4);
}
B6e55c4:{NFSU2_TR(0x6e55c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e55c7:{NFSU2_TR(0x6e55c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e55ca:{NFSU2_TR(0x6e55ca);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6e55ce:{NFSU2_TR(0x6e55ce);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6e55d1:{NFSU2_TR(0x6e55d1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e55d3:{NFSU2_TR(0x6e55d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e55d7:{NFSU2_TR(0x6e55d7);
__builtin_memmove((R+12),(R+28),4);
}
B6e55d9:{NFSU2_TR(0x6e55d9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6e55e0;}}
}
B6e55db:L6e55db:{c.instructions+=2;NFSU2_TR(0x6e55db);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e55de:{NFSU2_TR(0x6e55de);
{goto L6e55e6;}
}
B6e55e0:L6e55e0:{c.instructions+=2;NFSU2_TR(0x6e55e0);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6e55e2:{NFSU2_TR(0x6e55e2);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6e55e6;}}
}
B6e55e4:L6e55e4:{c.instructions+=1;NFSU2_TR(0x6e55e4);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6e55e6:L6e55e6:{c.instructions+=10;NFSU2_TR(0x6e55e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e55e9:{NFSU2_TR(0x6e55e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e55ec:{NFSU2_TR(0x6e55ec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e55ed:{NFSU2_TR(0x6e55ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e55ee:{NFSU2_TR(0x6e55ee);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+0,u32(r2(U+0)));
}
B6e55f1:{NFSU2_TR(0x6e55f1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e55f2:{NFSU2_TR(0x6e55f2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e55f3:{NFSU2_TR(0x6e55f3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e55f4:{NFSU2_TR(0x6e55f4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e55f6:{NFSU2_TR(0x6e55f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e55fbull));
TAIL_STATIC(0x6efa20u,6ef);
}
B6e55fb:L6e55fb:{c.instructions+=8;NFSU2_TR(0x6e55fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e55fe:{NFSU2_TR(0x6e55fe);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e5602:{NFSU2_TR(0x6e5602);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e5606:{NFSU2_TR(0x6e5606);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e560a:{NFSU2_TR(0x6e560a);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e560e:{NFSU2_TR(0x6e560e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e5610:{NFSU2_TR(0x6e5610);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6e5613:{NFSU2_TR(0x6e5613);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6e5659;}}
}
B6e5615:L6e5615:{c.instructions+=4;NFSU2_TR(0x6e5615);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e5619:{NFSU2_TR(0x6e5619);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6e561c:{NFSU2_TR(0x6e561c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e561e:{NFSU2_TR(0x6e561e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6e5659;}}
}
B6e5620:L6e5620:{c.instructions+=18;NFSU2_TR(0x6e5620);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e5624:{NFSU2_TR(0x6e5624);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e5628:{NFSU2_TR(0x6e5628);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e562c:{NFSU2_TR(0x6e562c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e562d:{NFSU2_TR(0x6e562d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e5631:{NFSU2_TR(0x6e5631);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e5634:{NFSU2_TR(0x6e5634);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5635:{NFSU2_TR(0x6e5635);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e5638:{NFSU2_TR(0x6e5638);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e563a:{NFSU2_TR(0x6e563a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e563b:{NFSU2_TR(0x6e563b);
u8 U[6];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6e5640:{NFSU2_TR(0x6e5640);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5641:{NFSU2_TR(0x6e5641);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5642:{NFSU2_TR(0x6e5642);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5643:{NFSU2_TR(0x6e5643);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5644:{NFSU2_TR(0x6e5644);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5646:{NFSU2_TR(0x6e5646);
__builtin_memmove((R+4),(R+20),4);
}
B6e5648:{NFSU2_TR(0x6e5648);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e564dull));
TAIL_STATIC(0x6efe40u,6ef);
}
B6e564d:L6e564d:{c.instructions+=7;NFSU2_TR(0x6e564d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e564e:{NFSU2_TR(0x6e564e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e564f:{NFSU2_TR(0x6e564f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e5650:{NFSU2_TR(0x6e5650);
w1(R+0,u8(0x1ull));
}
B6e5652:{NFSU2_TR(0x6e5652);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e5653:{NFSU2_TR(0x6e5653);
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
B6e5656:{NFSU2_TR(0x6e5656);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e5659:L6e5659:{c.instructions+=4;NFSU2_TR(0x6e5659);
u8 U[6];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6e565e:{NFSU2_TR(0x6e565e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6e5660:{NFSU2_TR(0x6e5660);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e5662:{NFSU2_TR(0x6e5662);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e56a1;}}
}
B6e5664:L6e5664:{c.instructions+=2;NFSU2_TR(0x6e5664);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e5668:{NFSU2_TR(0x6e5668);
{goto L6e5670;}
}
B6e5670:L6e5670:{c.instructions+=17;NFSU2_TR(0x6e5670);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+12,u32(r2(U+0)));
}
B6e5673:{NFSU2_TR(0x6e5673);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e5676:{NFSU2_TR(0x6e5676);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e567a:{NFSU2_TR(0x6e567a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B6e567d:{NFSU2_TR(0x6e567d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B6e5681:{NFSU2_TR(0x6e5681);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+20),(U+0),4);
}
B6e5683:{NFSU2_TR(0x6e5683);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+12)),r4(U+0));
}
B6e5685:{NFSU2_TR(0x6e5685);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e5688:{NFSU2_TR(0x6e5688);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e568b:{NFSU2_TR(0x6e568b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e568e:{NFSU2_TR(0x6e568e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e5691:{NFSU2_TR(0x6e5691);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e5694:{NFSU2_TR(0x6e5694);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6e5697:{NFSU2_TR(0x6e5697);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B6e569a:{NFSU2_TR(0x6e569a);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e569c:{NFSU2_TR(0x6e569c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e569f:{NFSU2_TR(0x6e569f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e5670u);}goto L6e5670;}}
}
B6e56a1:L6e56a1:{c.instructions+=7;NFSU2_TR(0x6e56a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e56a2:{NFSU2_TR(0x6e56a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e56a3:{NFSU2_TR(0x6e56a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e56a4:{NFSU2_TR(0x6e56a4);
w1(R+0,u8(0x1ull));
}
B6e56a6:{NFSU2_TR(0x6e56a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e56a7:{NFSU2_TR(0x6e56a7);
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
B6e56aa:{NFSU2_TR(0x6e56aa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e56ad:L6e56ad:{c.instructions+=7;NFSU2_TR(0x6e56ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e56b1:{NFSU2_TR(0x6e56b1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e56b2:{NFSU2_TR(0x6e56b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e56b6:{NFSU2_TR(0x6e56b6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e56b7:{NFSU2_TR(0x6e56b7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e56b8:{NFSU2_TR(0x6e56b8);
__builtin_memmove((R+4),(R+24),4);
}
B6e56ba:{NFSU2_TR(0x6e56ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e56bfull));
TAIL_STATIC(0x6e4d90u,6e4);
}
B6e56bf:L6e56bf:{c.instructions+=3;NFSU2_TR(0x6e56bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e56c0:{NFSU2_TR(0x6e56c0);
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
B6e56c3:{NFSU2_TR(0x6e56c3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e56d0:L6e56d0:{c.instructions+=6;NFSU2_TR(0x6e56d0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e56d4:{NFSU2_TR(0x6e56d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B6e56d7:{NFSU2_TR(0x6e56d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e56d9:{NFSU2_TR(0x6e56d9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e56da:{NFSU2_TR(0x6e56da);
__builtin_memmove((R+24),(R+4),4);
}
B6e56dc:{NFSU2_TR(0x6e56dc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e5812;}}
}
B6e56e2:L6e56e2:{c.instructions+=3;NFSU2_TR(0x6e56e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e56e5:{NFSU2_TR(0x6e56e5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e56e7:{NFSU2_TR(0x6e56e7);
if(r1(R+518)){{goto L6e56f7;}}
}
B6e56e9:L6e56e9:{c.instructions+=2;NFSU2_TR(0x6e56e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e56f0:{NFSU2_TR(0x6e56f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e56f7:L6e56f7:{c.instructions+=7;NFSU2_TR(0x6e56f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e56fb:{NFSU2_TR(0x6e56fb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e56fc:{NFSU2_TR(0x6e56fc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e56fd:{NFSU2_TR(0x6e56fd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e56fe:{NFSU2_TR(0x6e56fe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e56ff:{NFSU2_TR(0x6e56ff);
__builtin_memmove((R+4),(R+24),4);
}
B6e5701:{NFSU2_TR(0x6e5701);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e5706ull));
TAIL_STATIC(0x6e4f90u,6e4);
}
B6e5706:L6e5706:{c.instructions+=13;NFSU2_TR(0x6e5706);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e5709:{NFSU2_TR(0x6e5709);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e570c:{NFSU2_TR(0x6e570c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e570f:{NFSU2_TR(0x6e570f);
__builtin_memmove((R+28),(R+0),4);
}
B6e5711:{NFSU2_TR(0x6e5711);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e5714:{NFSU2_TR(0x6e5714);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5715:{NFSU2_TR(0x6e5715);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5716:{NFSU2_TR(0x6e5716);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+0,u32(r2(U+0)));
}
B6e5719:{NFSU2_TR(0x6e5719);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e571a:{NFSU2_TR(0x6e571a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e571b:{NFSU2_TR(0x6e571b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e571c:{NFSU2_TR(0x6e571c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e571e:{NFSU2_TR(0x6e571e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e5723ull));
TAIL_STATIC(0x6efa20u,6ef);
}
B6e5723:L6e5723:{c.instructions+=10;NFSU2_TR(0x6e5723);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e5725:{NFSU2_TR(0x6e5725);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e5728:{NFSU2_TR(0x6e5728);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e572b:{NFSU2_TR(0x6e572b);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6e572f:{NFSU2_TR(0x6e572f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e5732:{NFSU2_TR(0x6e5732);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e5736:{NFSU2_TR(0x6e5736);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e5739:{NFSU2_TR(0x6e5739);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
__builtin_memmove((R+20),(U+0),2);
}
B6e573c:{NFSU2_TR(0x6e573c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xeull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e573f:{NFSU2_TR(0x6e573f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e5747;}}
}
B6e5741:L6e5741:{c.instructions+=2;NFSU2_TR(0x6e5741);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e5745:{NFSU2_TR(0x6e5745);
{goto L6e5750;}
}
B6e5747:L6e5747:{c.instructions+=2;NFSU2_TR(0x6e5747);
u8 U[14];
w4(U+0,u32(u32(u32(0xfffffffeull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+0,u32(r2(U+12)));
}
B6e574c:{NFSU2_TR(0x6e574c);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e5750:L6e5750:{c.instructions+=6;NFSU2_TR(0x6e5750);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e5754:{NFSU2_TR(0x6e5754);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B6e5758:{NFSU2_TR(0x6e5758);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e575c:{NFSU2_TR(0x6e575c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e575e:{NFSU2_TR(0x6e575e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6e5761:{NFSU2_TR(0x6e5761);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6e57e7;}}
}
B6e5767:L6e5767:{c.instructions+=4;NFSU2_TR(0x6e5767);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e576b:{NFSU2_TR(0x6e576b);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6e576c:{NFSU2_TR(0x6e576c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6e576e:{NFSU2_TR(0x6e576e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e578c;}}
}
B6e5770:L6e5770:{c.instructions+=8;NFSU2_TR(0x6e5770);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e5774:{NFSU2_TR(0x6e5774);
u8 U[14];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+0,u32(r2(U+12)));
}
B6e5779:{NFSU2_TR(0x6e5779);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e577d:{NFSU2_TR(0x6e577d);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e5781:{NFSU2_TR(0x6e5781);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e5785:{NFSU2_TR(0x6e5785);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e5787:{NFSU2_TR(0x6e5787);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6e578a:{NFSU2_TR(0x6e578a);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6e57e7;}}
}
B6e578c:L6e578c:{c.instructions+=2;NFSU2_TR(0x6e578c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e578e:{NFSU2_TR(0x6e578e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e57a1;}}
}
B6e5790:L6e5790:{c.instructions+=5;NFSU2_TR(0x6e5790);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e5794:{NFSU2_TR(0x6e5794);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e579a:{NFSU2_TR(0x6e579a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e579c:{NFSU2_TR(0x6e579c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6e579f:{NFSU2_TR(0x6e579f);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6e57e7;}}
}
B6e57a1:L6e57a1:{c.instructions+=22;NFSU2_TR(0x6e57a1);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+8,u32(r2(U+8)));
}
B6e57a5:{NFSU2_TR(0x6e57a5);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e57a9:{NFSU2_TR(0x6e57a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e57ad:{NFSU2_TR(0x6e57ad);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e57b1:{NFSU2_TR(0x6e57b1);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B6e57b3:{NFSU2_TR(0x6e57b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e57b7:{NFSU2_TR(0x6e57b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e57bb:{NFSU2_TR(0x6e57bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e57be:{NFSU2_TR(0x6e57be);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xda,0x30"::"a"(ea_):"memory");}
}
B6e57c2:{NFSU2_TR(0x6e57c2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e57c3:{NFSU2_TR(0x6e57c3);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e57c6:{NFSU2_TR(0x6e57c6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e57c7:{NFSU2_TR(0x6e57c7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e57c9:{NFSU2_TR(0x6e57c9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e57ca:{NFSU2_TR(0x6e57ca);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e57cb:{NFSU2_TR(0x6e57cb);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6e57ce:{NFSU2_TR(0x6e57ce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e57cf:{NFSU2_TR(0x6e57cf);
w4(R+8,u32(r2(R+20)));
}
B6e57d2:{NFSU2_TR(0x6e57d2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e57d3:{NFSU2_TR(0x6e57d3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e57d4:{NFSU2_TR(0x6e57d4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e57d6:{NFSU2_TR(0x6e57d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e57dbull));
TAIL_STATIC(0x6efe40u,6ef);
}
B6e57db:L6e57db:{c.instructions+=7;NFSU2_TR(0x6e57db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e57dc:{NFSU2_TR(0x6e57dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e57dd:{NFSU2_TR(0x6e57dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e57de:{NFSU2_TR(0x6e57de);
w1(R+0,u8(0x1ull));
}
B6e57e0:{NFSU2_TR(0x6e57e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e57e1:{NFSU2_TR(0x6e57e1);
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
B6e57e4:{NFSU2_TR(0x6e57e4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e57e7:L6e57e7:{c.instructions+=4;NFSU2_TR(0x6e57e7);
w4(R+4,u32(r2(R+20)));
}
B6e57ea:{NFSU2_TR(0x6e57ea);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6e57ec:{NFSU2_TR(0x6e57ec);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e57ee:{NFSU2_TR(0x6e57ee);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e5806;}}
}
B6e57f0:L6e57f0:{c.instructions+=1;NFSU2_TR(0x6e57f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e57f4:L6e57f4:{c.instructions+=7;NFSU2_TR(0x6e57f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e57f7:{NFSU2_TR(0x6e57f7);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+20,u32(r2(U+8)));
}
B6e57fb:{NFSU2_TR(0x6e57fb);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6e57fe:{NFSU2_TR(0x6e57fe);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6e57ff:{NFSU2_TR(0x6e57ff);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e5801:{NFSU2_TR(0x6e5801);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6e5804:{NFSU2_TR(0x6e5804);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e57f4u);}goto L6e57f4;}}
}
B6e5806:L6e5806:{c.instructions+=7;NFSU2_TR(0x6e5806);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e5807:{NFSU2_TR(0x6e5807);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e5808:{NFSU2_TR(0x6e5808);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e5809:{NFSU2_TR(0x6e5809);
w1(R+0,u8(0x1ull));
}
B6e580b:{NFSU2_TR(0x6e580b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e580c:{NFSU2_TR(0x6e580c);
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
B6e580f:{NFSU2_TR(0x6e580f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e5812:L6e5812:{c.instructions+=7;NFSU2_TR(0x6e5812);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e5816:{NFSU2_TR(0x6e5816);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5817:{NFSU2_TR(0x6e5817);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e581b:{NFSU2_TR(0x6e581b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e581c:{NFSU2_TR(0x6e581c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e581d:{NFSU2_TR(0x6e581d);
__builtin_memmove((R+4),(R+24),4);
}
B6e581f:{NFSU2_TR(0x6e581f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e5824ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e5070u);}goto L6e5070;}
}
B6e5824:L6e5824:{c.instructions+=3;NFSU2_TR(0x6e5824);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e5825:{NFSU2_TR(0x6e5825);
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
B6e5828:{NFSU2_TR(0x6e5828);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e5830:L6e5830:{c.instructions+=6;NFSU2_TR(0x6e5830);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e5834:{NFSU2_TR(0x6e5834);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B6e5837:{NFSU2_TR(0x6e5837);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e5839:{NFSU2_TR(0x6e5839);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e583a:{NFSU2_TR(0x6e583a);
__builtin_memmove((R+24),(R+4),4);
}
B6e583c:{NFSU2_TR(0x6e583c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e59fd;}}
}
B6e5842:L6e5842:{c.instructions+=3;NFSU2_TR(0x6e5842);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e5845:{NFSU2_TR(0x6e5845);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e5847:{NFSU2_TR(0x6e5847);
if(r1(R+518)){{goto L6e5857;}}
}
B6e5849:L6e5849:{c.instructions+=2;NFSU2_TR(0x6e5849);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e5850:{NFSU2_TR(0x6e5850);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e5857:L6e5857:{c.instructions+=16;NFSU2_TR(0x6e5857);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e585a:{NFSU2_TR(0x6e585a);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6e585e:{NFSU2_TR(0x6e585e);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e5862:{NFSU2_TR(0x6e5862);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5863:{NFSU2_TR(0x6e5863);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5864:{NFSU2_TR(0x6e5864);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e5868:{NFSU2_TR(0x6e5868);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e586b:{NFSU2_TR(0x6e586b);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
__builtin_memmove((R+20),(U+0),2);
}
B6e586e:{NFSU2_TR(0x6e586e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e586f:{NFSU2_TR(0x6e586f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e5872:{NFSU2_TR(0x6e5872);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e5876:{NFSU2_TR(0x6e5876);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xeull))));
}
B6e5879:{NFSU2_TR(0x6e5879);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e587a:{NFSU2_TR(0x6e587a);
__builtin_memmove((R+4),(R+24),4);
}
B6e587c:{NFSU2_TR(0x6e587c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e5880:{NFSU2_TR(0x6e5880);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e5885ull));
TAIL_STATIC(0x6e4f90u,6e4);
}
B6e5885:L6e5885:{c.instructions+=13;NFSU2_TR(0x6e5885);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e5888:{NFSU2_TR(0x6e5888);
__builtin_memmove((R+12),(R+0),4);
}
B6e588a:{NFSU2_TR(0x6e588a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e588d:{NFSU2_TR(0x6e588d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e5890:{NFSU2_TR(0x6e5890);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e5893:{NFSU2_TR(0x6e5893);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5894:{NFSU2_TR(0x6e5894);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5895:{NFSU2_TR(0x6e5895);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+0,u32(r2(U+0)));
}
B6e5898:{NFSU2_TR(0x6e5898);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5899:{NFSU2_TR(0x6e5899);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e589a:{NFSU2_TR(0x6e589a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e589b:{NFSU2_TR(0x6e589b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e589d:{NFSU2_TR(0x6e589d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e58a2ull));
TAIL_STATIC(0x6efa20u,6ef);
}
B6e58a2:L6e58a2:{c.instructions+=3;NFSU2_TR(0x6e58a2);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e58a4:{NFSU2_TR(0x6e58a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e58a7:{NFSU2_TR(0x6e58a7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e58ad;}}
}
B6e58a9:L6e58a9:{c.instructions+=2;NFSU2_TR(0x6e58a9);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6e58ab:{NFSU2_TR(0x6e58ab);
{goto L6e58b2;}
}
B6e58ad:L6e58ad:{c.instructions+=1;NFSU2_TR(0x6e58ad);
u8 U[14];
w4(U+0,u32(u32(u32(0xfffffffeull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+4,u32(r2(U+12)));
}
B6e58b2:L6e58b2:{c.instructions+=7;NFSU2_TR(0x6e58b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e58b6:{NFSU2_TR(0x6e58b6);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e58ba:{NFSU2_TR(0x6e58ba);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B6e58be:{NFSU2_TR(0x6e58be);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e58c2:{NFSU2_TR(0x6e58c2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e58c4:{NFSU2_TR(0x6e58c4);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6e58c7:{NFSU2_TR(0x6e58c7);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6e59ac;}}
}
B6e58cd:L6e58cd:{c.instructions+=4;NFSU2_TR(0x6e58cd);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e58d1:{NFSU2_TR(0x6e58d1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((R+8),(U+0),4);
}
B6e58d4:{NFSU2_TR(0x6e58d4);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6e58d6:{NFSU2_TR(0x6e58d6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e58f4;}}
}
B6e58d8:L6e58d8:{c.instructions+=7;NFSU2_TR(0x6e58d8);
u8 U[14];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+0,u32(r2(U+12)));
}
B6e58dd:{NFSU2_TR(0x6e58dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e58e1:{NFSU2_TR(0x6e58e1);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e58e5:{NFSU2_TR(0x6e58e5);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e58e9:{NFSU2_TR(0x6e58e9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e58eb:{NFSU2_TR(0x6e58eb);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6e58ee:{NFSU2_TR(0x6e58ee);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6e59ac;}}
}
B6e58f4:L6e58f4:{c.instructions+=2;NFSU2_TR(0x6e58f4);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e58f6:{NFSU2_TR(0x6e58f6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e590d;}}
}
B6e58f8:L6e58f8:{c.instructions+=5;NFSU2_TR(0x6e58f8);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e58fc:{NFSU2_TR(0x6e58fc);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e5902:{NFSU2_TR(0x6e5902);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e5904:{NFSU2_TR(0x6e5904);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6e5907:{NFSU2_TR(0x6e5907);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6e59ac;}}
}
B6e590d:L6e590d:{c.instructions+=12;NFSU2_TR(0x6e590d);
u8 U[10];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+8,u32(r2(U+8)));
}
B6e5911:{NFSU2_TR(0x6e5911);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e5915:{NFSU2_TR(0x6e5915);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e5919:{NFSU2_TR(0x6e5919);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B6e591b:{NFSU2_TR(0x6e591b);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e591f:{NFSU2_TR(0x6e591f);
w4(R+0,u32(r2(R+20)));
}
B6e5922:{NFSU2_TR(0x6e5922);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xda,0x30"::"a"(ea_):"memory");}
}
B6e5926:{NFSU2_TR(0x6e5926);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6e5928:{NFSU2_TR(0x6e5928);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e592a:{NFSU2_TR(0x6e592a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e592e:{NFSU2_TR(0x6e592e);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e5932:{NFSU2_TR(0x6e5932);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e59f1;}}
}
B6e5938:L6e5938:{c.instructions+=2;NFSU2_TR(0x6e5938);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e593c:{NFSU2_TR(0x6e593c);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e5940:L6e5940:{c.instructions+=13;NFSU2_TR(0x6e5940);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e5943:{NFSU2_TR(0x6e5943);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6e5947:{NFSU2_TR(0x6e5947);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5948:{NFSU2_TR(0x6e5948);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e594c:{NFSU2_TR(0x6e594c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((R+20),(U+4),4);
}
B6e5953:{NFSU2_TR(0x6e5953);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+20))));
}
B6e5955:{NFSU2_TR(0x6e5955);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5956:{NFSU2_TR(0x6e5956);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6e5959:{NFSU2_TR(0x6e5959);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e595a:{NFSU2_TR(0x6e595a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e595b:{NFSU2_TR(0x6e595b);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e595d:{NFSU2_TR(0x6e595d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e595e:{NFSU2_TR(0x6e595e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e5963ull));
TAIL_STATIC(0x6efa20u,6ef);
}
B6e5963:L6e5963:{c.instructions+=13;NFSU2_TR(0x6e5963);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e5967:{NFSU2_TR(0x6e5967);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+4,u32(r2(U+0)));
}
B6e596a:{NFSU2_TR(0x6e596a);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e596e:{NFSU2_TR(0x6e596e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6e5971:{NFSU2_TR(0x6e5971);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e5974:{NFSU2_TR(0x6e5974);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5975:{NFSU2_TR(0x6e5975);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e5979:{NFSU2_TR(0x6e5979);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6e597d:{NFSU2_TR(0x6e597d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e597e:{NFSU2_TR(0x6e597e);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+20))));
}
B6e5980:{NFSU2_TR(0x6e5980);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5981:{NFSU2_TR(0x6e5981);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5982:{NFSU2_TR(0x6e5982);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e5987ull));
TAIL_STATIC(0x6e4450u,6e4);
}
B6e5987:L6e5987:{c.instructions+=8;NFSU2_TR(0x6e5987);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e598b:{NFSU2_TR(0x6e598b);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e598f:{NFSU2_TR(0x6e598f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B6e5992:{NFSU2_TR(0x6e5992);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B6e5995:{NFSU2_TR(0x6e5995);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6e5998:{NFSU2_TR(0x6e5998);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e599a:{NFSU2_TR(0x6e599a);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e599e:{NFSU2_TR(0x6e599e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e5940u);}goto L6e5940;}}
}
B6e59a0:L6e59a0:{c.instructions+=7;NFSU2_TR(0x6e59a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e59a1:{NFSU2_TR(0x6e59a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e59a2:{NFSU2_TR(0x6e59a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e59a3:{NFSU2_TR(0x6e59a3);
w1(R+0,u8(0x1ull));
}
B6e59a5:{NFSU2_TR(0x6e59a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e59a6:{NFSU2_TR(0x6e59a6);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x1cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x1cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e59a9:{NFSU2_TR(0x6e59a9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e59ac:L6e59ac:{c.instructions+=4;NFSU2_TR(0x6e59ac);
w4(R+8,u32(r2(R+20)));
}
B6e59af:{NFSU2_TR(0x6e59af);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6e59b1:{NFSU2_TR(0x6e59b1);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e59b3:{NFSU2_TR(0x6e59b3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e59f1;}}
}
B6e59b5:L6e59b5:{c.instructions+=2;NFSU2_TR(0x6e59b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e59b9:{NFSU2_TR(0x6e59b9);
__builtin_memmove((R+16),(R+16),4);
}
B6e59c0:L6e59c0:{c.instructions+=17;NFSU2_TR(0x6e59c0);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+12,u32(r2(U+0)));
}
B6e59c3:{NFSU2_TR(0x6e59c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e59c6:{NFSU2_TR(0x6e59c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e59ca:{NFSU2_TR(0x6e59ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B6e59cd:{NFSU2_TR(0x6e59cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B6e59d1:{NFSU2_TR(0x6e59d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+20),(U+0),4);
}
B6e59d3:{NFSU2_TR(0x6e59d3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+12)),r4(U+0));
}
B6e59d5:{NFSU2_TR(0x6e59d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e59d8:{NFSU2_TR(0x6e59d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e59db:{NFSU2_TR(0x6e59db);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e59de:{NFSU2_TR(0x6e59de);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e59e1:{NFSU2_TR(0x6e59e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e59e4:{NFSU2_TR(0x6e59e4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6e59e7:{NFSU2_TR(0x6e59e7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B6e59ea:{NFSU2_TR(0x6e59ea);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e59ec:{NFSU2_TR(0x6e59ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e59ef:{NFSU2_TR(0x6e59ef);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e59c0u);}goto L6e59c0;}}
}
B6e59f1:L6e59f1:{c.instructions+=7;NFSU2_TR(0x6e59f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e59f2:{NFSU2_TR(0x6e59f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e59f3:{NFSU2_TR(0x6e59f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e59f4:{NFSU2_TR(0x6e59f4);
w1(R+0,u8(0x1ull));
}
B6e59f6:{NFSU2_TR(0x6e59f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e59f7:{NFSU2_TR(0x6e59f7);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x1cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x1cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e59fa:{NFSU2_TR(0x6e59fa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e59fd:L6e59fd:{c.instructions+=7;NFSU2_TR(0x6e59fd);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e5a01:{NFSU2_TR(0x6e5a01);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e5a05:{NFSU2_TR(0x6e5a05);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5a06:{NFSU2_TR(0x6e5a06);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5a07:{NFSU2_TR(0x6e5a07);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5a08:{NFSU2_TR(0x6e5a08);
__builtin_memmove((R+4),(R+24),4);
}
B6e5a0a:{NFSU2_TR(0x6e5a0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e5a0full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e5230u);}goto L6e5230;}
}
B6e5a0f:L6e5a0f:{c.instructions+=3;NFSU2_TR(0x6e5a0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e5a10:{NFSU2_TR(0x6e5a10);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x1cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x1cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e5a13:{NFSU2_TR(0x6e5a13);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e5a20:L6e5a20:{c.instructions+=19;NFSU2_TR(0x6e5a20);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e5a24:{NFSU2_TR(0x6e5a24);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e5a28:{NFSU2_TR(0x6e5a28);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e5a2a:{NFSU2_TR(0x6e5a2a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e5a2e:{NFSU2_TR(0x6e5a2e);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e5a30:{NFSU2_TR(0x6e5a30);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e5a34:{NFSU2_TR(0x6e5a34);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e5a36:{NFSU2_TR(0x6e5a36);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e5a38:{NFSU2_TR(0x6e5a38);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e5a3b:{NFSU2_TR(0x6e5a3b);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e5a3e:{NFSU2_TR(0x6e5a3e);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e5a42:{NFSU2_TR(0x6e5a42);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e5a45:{NFSU2_TR(0x6e5a45);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e5a48:{NFSU2_TR(0x6e5a48);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e5a4b:{NFSU2_TR(0x6e5a4b);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e5a4e:{NFSU2_TR(0x6e5a4e);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e5a52:{NFSU2_TR(0x6e5a52);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e5a55:{NFSU2_TR(0x6e5a55);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e5a58:{NFSU2_TR(0x6e5a58);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e5a60:L6e5a60:{c.instructions+=7;NFSU2_TR(0x6e5a60);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e5a64:{NFSU2_TR(0x6e5a64);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e5a66:{NFSU2_TR(0x6e5a66);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5a67:{NFSU2_TR(0x6e5a67);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5a68:{NFSU2_TR(0x6e5a68);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5a69:{NFSU2_TR(0x6e5a69);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5a6a:{NFSU2_TR(0x6e5a6a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e5ae6;}}
}
B6e5a6c:L6e5a6c:{c.instructions+=3;NFSU2_TR(0x6e5a6c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e5a70:{NFSU2_TR(0x6e5a70);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e5a72:{NFSU2_TR(0x6e5a72);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e5b8c;}}
}
B6e5a78:L6e5a78:{c.instructions+=3;NFSU2_TR(0x6e5a78);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e5a7c:{NFSU2_TR(0x6e5a7c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e5a80:{NFSU2_TR(0x6e5a80);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e5a84:L6e5a84:{c.instructions+=9;NFSU2_TR(0x6e5a84);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e5a88:{NFSU2_TR(0x6e5a88);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B6e5a8b:{NFSU2_TR(0x6e5a8b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5a8c:{NFSU2_TR(0x6e5a8c);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B6e5a8f:{NFSU2_TR(0x6e5a8f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5a90:{NFSU2_TR(0x6e5a90);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B6e5a93:{NFSU2_TR(0x6e5a93);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5a94:{NFSU2_TR(0x6e5a94);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5a95:{NFSU2_TR(0x6e5a95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e5a9aull));
TAIL_STATIC(0x6e4450u,6e4);
}
B6e5a9a:L6e5a9a:{c.instructions+=24;NFSU2_TR(0x6e5a9a);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e5a9d:{NFSU2_TR(0x6e5a9d);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e5aa0:{NFSU2_TR(0x6e5aa0);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B6e5aa3:{NFSU2_TR(0x6e5aa3);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B6e5aa6:{NFSU2_TR(0x6e5aa6);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B6e5aa9:{NFSU2_TR(0x6e5aa9);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e5aad:{NFSU2_TR(0x6e5aad);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6e5ab0:{NFSU2_TR(0x6e5ab0);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B6e5ab3:{NFSU2_TR(0x6e5ab3);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e5ab5:{NFSU2_TR(0x6e5ab5);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B6e5ab8:{NFSU2_TR(0x6e5ab8);
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B6e5abb:{NFSU2_TR(0x6e5abb);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+20),u32(0x1ull)));
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+20))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e5abc:{NFSU2_TR(0x6e5abc);
{u32 ea_=u32(r4(R+28)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e5abf:{NFSU2_TR(0x6e5abf);
{u32 ea_=u32(r4(R+12)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e5ac2:{NFSU2_TR(0x6e5ac2);
{u32 ea_=u32(r4(R+24)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e5ac5:{NFSU2_TR(0x6e5ac5);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e5ac9:{NFSU2_TR(0x6e5ac9);
{u32 ea_=u32(r4(R+24)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e5acc:{NFSU2_TR(0x6e5acc);
{u32 ea_=u32(r4(R+28)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e5acf:{NFSU2_TR(0x6e5acf);
{u32 ea_=u32(r4(R+12)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e5ad2:{NFSU2_TR(0x6e5ad2);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e5ad5:{NFSU2_TR(0x6e5ad5);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e5ad9:{NFSU2_TR(0x6e5ad9);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e5adc:{NFSU2_TR(0x6e5adc);
{u32 ea_=u32(r4(R+28)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e5adf:{NFSU2_TR(0x6e5adf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e5a84u);}goto L6e5a84;}}
}
B6e5ae1:L6e5ae1:{c.instructions+=5;NFSU2_TR(0x6e5ae1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e5ae2:{NFSU2_TR(0x6e5ae2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e5ae3:{NFSU2_TR(0x6e5ae3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e5ae4:{NFSU2_TR(0x6e5ae4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e5ae5:{NFSU2_TR(0x6e5ae5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e5ae6:L6e5ae6:{c.instructions+=4;NFSU2_TR(0x6e5ae6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e5aea:{NFSU2_TR(0x6e5aea);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B6e5aec:{NFSU2_TR(0x6e5aec);
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
B6e5aee:{NFSU2_TR(0x6e5aee);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e5b8c;}}
}
B6e5af4:L6e5af4:{c.instructions+=3;NFSU2_TR(0x6e5af4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e5af8:{NFSU2_TR(0x6e5af8);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e5afc:{NFSU2_TR(0x6e5afc);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e5b00:L6e5b00:{c.instructions+=12;NFSU2_TR(0x6e5b00);
__builtin_memmove((R+4),(R+20),4);
}
B6e5b02:{NFSU2_TR(0x6e5b02);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6e5b05:{NFSU2_TR(0x6e5b05);
w4(R+8,u32(0x1ull));
}
B6e5b0a:{NFSU2_TR(0x6e5b0a);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B6e5b0c:{NFSU2_TR(0x6e5b0c);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e5b10:{NFSU2_TR(0x6e5b10);
__builtin_memmove((R+0),(R+20),4);
}
B6e5b12:{NFSU2_TR(0x6e5b12);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B6e5b15:{NFSU2_TR(0x6e5b15);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B6e5b18:{NFSU2_TR(0x6e5b18);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B6e5b1b:{NFSU2_TR(0x6e5b1b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B6e5b1e:{NFSU2_TR(0x6e5b1e);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6e5b21:{NFSU2_TR(0x6e5b21);
if(r1(R+518)){{goto L6e5b76;}}
}
B6e5b23:L6e5b23:{c.instructions+=6;NFSU2_TR(0x6e5b23);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e5b27:{NFSU2_TR(0x6e5b27);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5b28:{NFSU2_TR(0x6e5b28);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5b29:{NFSU2_TR(0x6e5b29);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5b2a:{NFSU2_TR(0x6e5b2a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5b2b:{NFSU2_TR(0x6e5b2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e5b30ull));
TAIL_STATIC(0x6e4450u,6e4);
}
B6e5b30:L6e5b30:{c.instructions+=23;NFSU2_TR(0x6e5b30);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e5b33:{NFSU2_TR(0x6e5b33);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e5b36:{NFSU2_TR(0x6e5b36);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B6e5b39:{NFSU2_TR(0x6e5b39);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B6e5b3c:{NFSU2_TR(0x6e5b3c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B6e5b3f:{NFSU2_TR(0x6e5b3f);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e5b43:{NFSU2_TR(0x6e5b43);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6e5b46:{NFSU2_TR(0x6e5b46);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B6e5b49:{NFSU2_TR(0x6e5b49);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e5b4b:{NFSU2_TR(0x6e5b4b);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B6e5b4e:{NFSU2_TR(0x6e5b4e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B6e5b51:{NFSU2_TR(0x6e5b51);
{u32 ea_=u32(r4(R+28)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e5b54:{NFSU2_TR(0x6e5b54);
{u32 ea_=u32(r4(R+12)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e5b57:{NFSU2_TR(0x6e5b57);
{u32 ea_=u32(r4(R+24)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e5b5a:{NFSU2_TR(0x6e5b5a);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e5b5e:{NFSU2_TR(0x6e5b5e);
{u32 ea_=u32(r4(R+24)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e5b61:{NFSU2_TR(0x6e5b61);
{u32 ea_=u32(r4(R+28)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e5b64:{NFSU2_TR(0x6e5b64);
{u32 ea_=u32(r4(R+12)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e5b67:{NFSU2_TR(0x6e5b67);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e5b6a:{NFSU2_TR(0x6e5b6a);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e5b6e:{NFSU2_TR(0x6e5b6e);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e5b71:{NFSU2_TR(0x6e5b71);
{u32 ea_=u32(r4(R+28)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e5b74:{NFSU2_TR(0x6e5b74);
{goto L6e5b7f;}
}
B6e5b76:L6e5b76:{c.instructions+=3;NFSU2_TR(0x6e5b76);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x20ull))));
}
B6e5b79:{NFSU2_TR(0x6e5b79);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x20ull))));
}
B6e5b7c:{NFSU2_TR(0x6e5b7c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x20ull))));
}
B6e5b7f:L6e5b7f:{c.instructions+=4;NFSU2_TR(0x6e5b7f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e5b83:{NFSU2_TR(0x6e5b83);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B6e5b84:{NFSU2_TR(0x6e5b84);
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
B6e5b86:{NFSU2_TR(0x6e5b86);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e5b00u);}goto L6e5b00;}}
}
B6e5b8c:L6e5b8c:{c.instructions+=5;NFSU2_TR(0x6e5b8c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e5b8d:{NFSU2_TR(0x6e5b8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e5b8e:{NFSU2_TR(0x6e5b8e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e5b8f:{NFSU2_TR(0x6e5b8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e5b90:{NFSU2_TR(0x6e5b90);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e5ba0:L6e5ba0:{c.instructions+=14;NFSU2_TR(0x6e5ba0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5ba1:{NFSU2_TR(0x6e5ba1);
__builtin_memmove((R+20),(R+16),4);
}
B6e5ba3:{NFSU2_TR(0x6e5ba3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B6e5ba6:{NFSU2_TR(0x6e5ba6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x74ull))));
}
B6e5ba9:{NFSU2_TR(0x6e5ba9);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e5bac:{NFSU2_TR(0x6e5bac);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5bad:{NFSU2_TR(0x6e5bad);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5bae:{NFSU2_TR(0x6e5bae);
__builtin_memmove((R+24),(R+4),4);
}
B6e5bb0:{NFSU2_TR(0x6e5bb0);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e5bb3:{NFSU2_TR(0x6e5bb3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5bb4:{NFSU2_TR(0x6e5bb4);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e5bb7:{NFSU2_TR(0x6e5bb7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e5bb9:{NFSU2_TR(0x6e5bb9);
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
B6e5bbc:{NFSU2_TR(0x6e5bbc);
if(r1(R+514)){{goto L6e5be8;}}
}
B6e5bbe:L6e5bbe:{c.instructions+=10;NFSU2_TR(0x6e5bbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e5bc1:{NFSU2_TR(0x6e5bc1);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e5bc4:{NFSU2_TR(0x6e5bc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e5bc7:{NFSU2_TR(0x6e5bc7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6e5bc9:{NFSU2_TR(0x6e5bc9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5bca:{NFSU2_TR(0x6e5bca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e5bcd:{NFSU2_TR(0x6e5bcd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5bce:{NFSU2_TR(0x6e5bce);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5bcf:{NFSU2_TR(0x6e5bcf);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e5bd2:{NFSU2_TR(0x6e5bd2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e5bd5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e5bd5:L6e5bd5:{c.instructions+=2;NFSU2_TR(0x6e5bd5);
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
B6e5bd7:{NFSU2_TR(0x6e5bd7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6e609cu,6e6);}
}
B6e5bdd:L6e5bdd:{c.instructions+=7;NFSU2_TR(0x6e5bdd);
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
B6e5bdf:{NFSU2_TR(0x6e5bdf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e5be0:{NFSU2_TR(0x6e5be0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e5be1:{NFSU2_TR(0x6e5be1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e5be2:{NFSU2_TR(0x6e5be2);
__builtin_memmove((R+16),(R+20),4);
}
B6e5be4:{NFSU2_TR(0x6e5be4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e5be5:{NFSU2_TR(0x6e5be5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e5be8:L6e5be8:{c.instructions+=5;NFSU2_TR(0x6e5be8);
{u32 ea_=u32(r4(R+24)+u32(120u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e5beb:{NFSU2_TR(0x6e5beb);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e5bee:{NFSU2_TR(0x6e5bee);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e5bf0:{NFSU2_TR(0x6e5bf0);
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
B6e5bf3:{NFSU2_TR(0x6e5bf3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e5ccc;}}
}
B6e5bf9:L6e5bf9:{c.instructions+=10;NFSU2_TR(0x6e5bf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e5bfc:{NFSU2_TR(0x6e5bfc);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e5bff:{NFSU2_TR(0x6e5bff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e5c02:{NFSU2_TR(0x6e5c02);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e5c05:{NFSU2_TR(0x6e5c05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6e5c07:{NFSU2_TR(0x6e5c07);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5c08:{NFSU2_TR(0x6e5c08);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5c09:{NFSU2_TR(0x6e5c09);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5c0a:{NFSU2_TR(0x6e5c0a);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e5c0d:{NFSU2_TR(0x6e5c0d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e5c10ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e5c10:L6e5c10:{c.instructions+=2;NFSU2_TR(0x6e5c10);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6e5c12:{NFSU2_TR(0x6e5c12);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e5bddu);}goto L6e5bdd;}}
}
B6e5c14:L6e5c14:{c.instructions+=3;NFSU2_TR(0x6e5c14);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e5c17:{NFSU2_TR(0x6e5c17);
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
B6e5c19:{NFSU2_TR(0x6e5c19);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6e609cu,6e6);}
}
B6e5c1f:L6e5c1f:{c.instructions+=2;NFSU2_TR(0x6e5c1f);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e5c21:{NFSU2_TR(0x6e5c21);
if(r1(R+518)){{goto L6e5c33;}}
}
B6e5c23:L6e5c23:{c.instructions+=3;NFSU2_TR(0x6e5c23);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5c24:{NFSU2_TR(0x6e5c24);
__builtin_memmove((R+4),(R+12),4);
}
B6e5c26:{NFSU2_TR(0x6e5c26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e5c2bull));
TAIL_STATIC(0x6e2e80u,6e2);
}
B6e5c2b:L6e5c2b:{c.instructions+=2;NFSU2_TR(0x6e5c2b);
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
B6e5c2d:{NFSU2_TR(0x6e5c2d);
if(r1(R+518)){TAIL_STATIC(0x6e609cu,6e6);}
}
B6e5c33:L6e5c33:{c.instructions+=26;NFSU2_TR(0x6e5c33);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e5c36:{NFSU2_TR(0x6e5c36);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B6e5c39:{NFSU2_TR(0x6e5c39);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6e5c3c:{NFSU2_TR(0x6e5c3c);
u8 U[16];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6e5c40:{NFSU2_TR(0x6e5c40);
u8 U[16];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6e5c44:{NFSU2_TR(0x6e5c44);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B6e5c46:{NFSU2_TR(0x6e5c46);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e5c49:{NFSU2_TR(0x6e5c49);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5c4a:{NFSU2_TR(0x6e5c4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e5c4d:{NFSU2_TR(0x6e5c4d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5c4e:{NFSU2_TR(0x6e5c4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e5c51:{NFSU2_TR(0x6e5c51);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5c52:{NFSU2_TR(0x6e5c52);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e5c55:{NFSU2_TR(0x6e5c55);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5c56:{NFSU2_TR(0x6e5c56);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e5c59:{NFSU2_TR(0x6e5c59);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5c5a:{NFSU2_TR(0x6e5c5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e5c5d:{NFSU2_TR(0x6e5c5d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5c5e:{NFSU2_TR(0x6e5c5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e5c61:{NFSU2_TR(0x6e5c61);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5c62:{NFSU2_TR(0x6e5c62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6e5c64:{NFSU2_TR(0x6e5c64);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5c65:{NFSU2_TR(0x6e5c65);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5c66:{NFSU2_TR(0x6e5c66);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5c67:{NFSU2_TR(0x6e5c67);
u8 U[4];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6e5c6b:{NFSU2_TR(0x6e5c6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e5c70ull));
TAIL_STATIC(0x6e2d60u,6e2);
}
B6e5c70:L6e5c70:{c.instructions+=4;NFSU2_TR(0x6e5c70);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x30ull))));
}
B6e5c73:{NFSU2_TR(0x6e5c73);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5c74:{NFSU2_TR(0x6e5c74);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6e5c78:{NFSU2_TR(0x6e5c78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e5c7dull));
TAIL_STATIC(0x6db7f0u,6db);
}
B6e5c7d:L6e5c7d:{c.instructions+=6;NFSU2_TR(0x6e5c7d);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6e5c81:{NFSU2_TR(0x6e5c81);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5c82:{NFSU2_TR(0x6e5c82);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6e5c86:{NFSU2_TR(0x6e5c86);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5c87:{NFSU2_TR(0x6e5c87);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6e5c8b:{NFSU2_TR(0x6e5c8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e5c90ull));
TAIL_STATIC(0x6db9c0u,6db);
}
B6e5c90:L6e5c90:{c.instructions+=21;NFSU2_TR(0x6e5c90);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e5c94:{NFSU2_TR(0x6e5c94);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e5c97:{NFSU2_TR(0x6e5c97);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e5c9b:{NFSU2_TR(0x6e5c9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e5c9e:{NFSU2_TR(0x6e5c9e);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e5ca2:{NFSU2_TR(0x6e5ca2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e5ca5:{NFSU2_TR(0x6e5ca5);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e5ca9:{NFSU2_TR(0x6e5ca9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e5cac:{NFSU2_TR(0x6e5cac);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e5cb0:{NFSU2_TR(0x6e5cb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e5cb3:{NFSU2_TR(0x6e5cb3);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e5cb7:{NFSU2_TR(0x6e5cb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e5cba:{NFSU2_TR(0x6e5cba);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e5cbe:{NFSU2_TR(0x6e5cbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e5cc1:{NFSU2_TR(0x6e5cc1);
w1(R+0,u8(0x1ull));
}
B6e5cc3:{NFSU2_TR(0x6e5cc3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e5cc4:{NFSU2_TR(0x6e5cc4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e5cc5:{NFSU2_TR(0x6e5cc5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e5cc6:{NFSU2_TR(0x6e5cc6);
__builtin_memmove((R+16),(R+20),4);
}
B6e5cc8:{NFSU2_TR(0x6e5cc8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e5cc9:{NFSU2_TR(0x6e5cc9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e5ccc:L6e5ccc:{c.instructions+=7;NFSU2_TR(0x6e5ccc);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e5ccf:{NFSU2_TR(0x6e5ccf);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6e5cd2:{NFSU2_TR(0x6e5cd2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6e5cd4:{NFSU2_TR(0x6e5cd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e5cd7:{NFSU2_TR(0x6e5cd7);
{u32 ea_=u32(r4(R+24)+u32(116u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B6e5cda:{NFSU2_TR(0x6e5cda);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e5cde:{NFSU2_TR(0x6e5cde);
if(r1(R+518)){{goto L6e5ced;}}
}
B6e5ce0:L6e5ce0:{c.instructions+=5;NFSU2_TR(0x6e5ce0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e5ce3:{NFSU2_TR(0x6e5ce3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5ce4:{NFSU2_TR(0x6e5ce4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5ce5:{NFSU2_TR(0x6e5ce5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e5ce8:{NFSU2_TR(0x6e5ce8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e5cedull));
TAIL_STATIC(0x6e3c70u,6e3);
}
B6e5ced:L6e5ced:{c.instructions+=3;NFSU2_TR(0x6e5ced);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6e5cf0:{NFSU2_TR(0x6e5cf0);
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
B6e5cf2:{NFSU2_TR(0x6e5cf2);
if(r1(R+518)){{goto L6e5d01;}}
}
B6e5cf4:L6e5cf4:{c.instructions+=5;NFSU2_TR(0x6e5cf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e5cf7:{NFSU2_TR(0x6e5cf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e5cfa:{NFSU2_TR(0x6e5cfa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5cfb:{NFSU2_TR(0x6e5cfb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5cfc:{NFSU2_TR(0x6e5cfc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e5d01ull));
TAIL_STATIC(0x6e3c70u,6e3);
}
B6e5d01:L6e5d01:{c.instructions+=10;NFSU2_TR(0x6e5d01);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e5d04:{NFSU2_TR(0x6e5d04);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e5d07:{NFSU2_TR(0x6e5d07);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e5d0a:{NFSU2_TR(0x6e5d0a);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e5d0d:{NFSU2_TR(0x6e5d0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6e5d0f:{NFSU2_TR(0x6e5d0f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5d10:{NFSU2_TR(0x6e5d10);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5d11:{NFSU2_TR(0x6e5d11);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5d12:{NFSU2_TR(0x6e5d12);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e5d15:{NFSU2_TR(0x6e5d15);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e5d18ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e5d18:L6e5d18:{c.instructions+=2;NFSU2_TR(0x6e5d18);
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
B6e5d1a:{NFSU2_TR(0x6e5d1a);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e5bddu);}goto L6e5bdd;}}
}
B6e5d20:L6e5d20:{c.instructions+=10;NFSU2_TR(0x6e5d20);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e5d23:{NFSU2_TR(0x6e5d23);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e5d26:{NFSU2_TR(0x6e5d26);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e5d29:{NFSU2_TR(0x6e5d29);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e5d2c:{NFSU2_TR(0x6e5d2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6e5d2e:{NFSU2_TR(0x6e5d2e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5d2f:{NFSU2_TR(0x6e5d2f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5d30:{NFSU2_TR(0x6e5d30);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5d31:{NFSU2_TR(0x6e5d31);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e5d34:{NFSU2_TR(0x6e5d34);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e5d37ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e5d37:L6e5d37:{c.instructions+=2;NFSU2_TR(0x6e5d37);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6e5d39:{NFSU2_TR(0x6e5d39);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e5bddu);}goto L6e5bdd;}}
}
B6e5d3f:L6e5d3f:{c.instructions+=3;NFSU2_TR(0x6e5d3f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e5d41:{NFSU2_TR(0x6e5d41);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e5d44:{NFSU2_TR(0x6e5d44);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e5ed7;}}
}
B6e5d4a:L6e5d4a:{c.instructions+=3;NFSU2_TR(0x6e5d4a);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6e5d4c:{NFSU2_TR(0x6e5d4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e5d4f:{NFSU2_TR(0x6e5d4f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6e5e72;}}
}
B6e5d55:L6e5d55:{c.instructions+=4;NFSU2_TR(0x6e5d55);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e5d58:{NFSU2_TR(0x6e5d58);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+28),u32(0x1ull)));
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e5d59:{NFSU2_TR(0x6e5d59);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e5d5d:{NFSU2_TR(0x6e5d5d);
if(r1(R+519)){TAIL_STATIC(0x6e609cu,6e6);}
}
B6e5d63:L6e5d63:{c.instructions+=4;NFSU2_TR(0x6e5d63);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B6e5d66:{NFSU2_TR(0x6e5d66);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B6e5d69:{NFSU2_TR(0x6e5d69);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B6e5d6c:{NFSU2_TR(0x6e5d6c);
__builtin_memmove((R+16),(R+16),4);
}
B6e5d70:L6e5d70:{c.instructions+=3;NFSU2_TR(0x6e5d70);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e5d73:{NFSU2_TR(0x6e5d73);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6e5d75:{NFSU2_TR(0x6e5d75);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e5e37;}}
}
B6e5d7b:L6e5d7b:{c.instructions+=26;NFSU2_TR(0x6e5d7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B6e5d7e:{NFSU2_TR(0x6e5d7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e5d81:{NFSU2_TR(0x6e5d81);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6e5d84:{NFSU2_TR(0x6e5d84);
u8 U[16];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6e5d88:{NFSU2_TR(0x6e5d88);
u8 U[16];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B6e5d8c:{NFSU2_TR(0x6e5d8c);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B6e5d8e:{NFSU2_TR(0x6e5d8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e5d91:{NFSU2_TR(0x6e5d91);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5d92:{NFSU2_TR(0x6e5d92);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e5d95:{NFSU2_TR(0x6e5d95);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5d96:{NFSU2_TR(0x6e5d96);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e5d99:{NFSU2_TR(0x6e5d99);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5d9a:{NFSU2_TR(0x6e5d9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e5d9d:{NFSU2_TR(0x6e5d9d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5d9e:{NFSU2_TR(0x6e5d9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e5da1:{NFSU2_TR(0x6e5da1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5da2:{NFSU2_TR(0x6e5da2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e5da5:{NFSU2_TR(0x6e5da5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5da6:{NFSU2_TR(0x6e5da6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e5da9:{NFSU2_TR(0x6e5da9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5daa:{NFSU2_TR(0x6e5daa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6e5dac:{NFSU2_TR(0x6e5dac);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5dad:{NFSU2_TR(0x6e5dad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5dae:{NFSU2_TR(0x6e5dae);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5daf:{NFSU2_TR(0x6e5daf);
u8 U[4];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6e5db3:{NFSU2_TR(0x6e5db3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e5db8ull));
TAIL_STATIC(0x6e2d60u,6e2);
}
B6e5db8:L6e5db8:{c.instructions+=4;NFSU2_TR(0x6e5db8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6e5dbb:{NFSU2_TR(0x6e5dbb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5dbc:{NFSU2_TR(0x6e5dbc);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6e5dc0:{NFSU2_TR(0x6e5dc0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e5dc5ull));
TAIL_STATIC(0x6db7f0u,6db);
}
B6e5dc5:L6e5dc5:{c.instructions+=6;NFSU2_TR(0x6e5dc5);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6e5dc9:{NFSU2_TR(0x6e5dc9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5dca:{NFSU2_TR(0x6e5dca);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6e5dce:{NFSU2_TR(0x6e5dce);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5dcf:{NFSU2_TR(0x6e5dcf);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6e5dd3:{NFSU2_TR(0x6e5dd3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e5dd8ull));
TAIL_STATIC(0x6db9c0u,6db);
}
B6e5dd8:L6e5dd8:{c.instructions+=28;NFSU2_TR(0x6e5dd8);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e5ddc:{NFSU2_TR(0x6e5ddc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e5ddf:{NFSU2_TR(0x6e5ddf);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e5de3:{NFSU2_TR(0x6e5de3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e5de6:{NFSU2_TR(0x6e5de6);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e5dea:{NFSU2_TR(0x6e5dea);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e5ded:{NFSU2_TR(0x6e5ded);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e5df1:{NFSU2_TR(0x6e5df1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e5df4:{NFSU2_TR(0x6e5df4);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e5df8:{NFSU2_TR(0x6e5df8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e5dfb:{NFSU2_TR(0x6e5dfb);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e5dff:{NFSU2_TR(0x6e5dff);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e5e02:{NFSU2_TR(0x6e5e02);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e5e06:{NFSU2_TR(0x6e5e06);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e5e09:{NFSU2_TR(0x6e5e09);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e5e0c:{NFSU2_TR(0x6e5e0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e5e0f:{NFSU2_TR(0x6e5e0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x20ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6e5e16:{NFSU2_TR(0x6e5e16);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6e5e19:{NFSU2_TR(0x6e5e19);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e5e1c:{NFSU2_TR(0x6e5e1c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5e1d:{NFSU2_TR(0x6e5e1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e5e20:{NFSU2_TR(0x6e5e20);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B6e5e22:{NFSU2_TR(0x6e5e22);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5e23:{NFSU2_TR(0x6e5e23);
u8 U[6];
w1(R+512,carry<u32>(r4(R+8),r4(R+0)));
w1(R+523,scarry<u32>(r4(R+8),r4(R+0)));
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e5e25:{NFSU2_TR(0x6e5e25);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e5e29:{NFSU2_TR(0x6e5e29);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5e2a:{NFSU2_TR(0x6e5e2a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5e2b:{NFSU2_TR(0x6e5e2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e5e30ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e5a20u);}goto L6e5a20;}
}
B6e5e30:L6e5e30:{c.instructions+=2;NFSU2_TR(0x6e5e30);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e5e34:{NFSU2_TR(0x6e5e34);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6e5e37:L6e5e37:{c.instructions+=12;NFSU2_TR(0x6e5e37);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e5e3a:{NFSU2_TR(0x6e5e3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e5e3d:{NFSU2_TR(0x6e5e3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6e5e40:{NFSU2_TR(0x6e5e40);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e5e43:{NFSU2_TR(0x6e5e43);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5e44:{NFSU2_TR(0x6e5e44);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e5e48:{NFSU2_TR(0x6e5e48);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B6e5e4a:{NFSU2_TR(0x6e5e4a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5e4b:{NFSU2_TR(0x6e5e4b);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
}
B6e5e4d:{NFSU2_TR(0x6e5e4d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5e4e:{NFSU2_TR(0x6e5e4e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5e4f:{NFSU2_TR(0x6e5e4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e5e54ull));
TAIL_STATIC(0x6e4450u,6e4);
}
B6e5e54:L6e5e54:{c.instructions+=6;NFSU2_TR(0x6e5e54);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6e5e57:{NFSU2_TR(0x6e5e57);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B6e5e58:{NFSU2_TR(0x6e5e58);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x30ull))));
}
B6e5e5b:{NFSU2_TR(0x6e5e5b);
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
B6e5e5d:{NFSU2_TR(0x6e5e5d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e5e61:{NFSU2_TR(0x6e5e61);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e5d70u);}goto L6e5d70;}}
}
B6e5e67:L6e5e67:{c.instructions+=7;NFSU2_TR(0x6e5e67);
w1(R+0,u8(0x1ull));
}
B6e5e69:{NFSU2_TR(0x6e5e69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e5e6a:{NFSU2_TR(0x6e5e6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e5e6b:{NFSU2_TR(0x6e5e6b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e5e6c:{NFSU2_TR(0x6e5e6c);
__builtin_memmove((R+16),(R+20),4);
}
B6e5e6e:{NFSU2_TR(0x6e5e6e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e5e6f:{NFSU2_TR(0x6e5e6f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e5e72:L6e5e72:{c.instructions+=3;NFSU2_TR(0x6e5e72);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e5e75:{NFSU2_TR(0x6e5e75);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
}
B6e5e76:{NFSU2_TR(0x6e5e76);
if(r1(R+519)){{goto L6e5eaa;}}
}
B6e5e78:L6e5e78:{c.instructions+=4;NFSU2_TR(0x6e5e78);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B6e5e7b:{NFSU2_TR(0x6e5e7b);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6e5e7e:{NFSU2_TR(0x6e5e7e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B6e5e81:{NFSU2_TR(0x6e5e81);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e5e84:L6e5e84:{c.instructions+=12;NFSU2_TR(0x6e5e84);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e5e87:{NFSU2_TR(0x6e5e87);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e5e8a:{NFSU2_TR(0x6e5e8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6e5e8d:{NFSU2_TR(0x6e5e8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e5e90:{NFSU2_TR(0x6e5e90);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5e91:{NFSU2_TR(0x6e5e91);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e5e95:{NFSU2_TR(0x6e5e95);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B6e5e97:{NFSU2_TR(0x6e5e97);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5e98:{NFSU2_TR(0x6e5e98);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B6e5e9a:{NFSU2_TR(0x6e5e9a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5e9b:{NFSU2_TR(0x6e5e9b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5e9c:{NFSU2_TR(0x6e5e9c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e5ea1ull));
TAIL_STATIC(0x6e4450u,6e4);
}
B6e5ea1:L6e5ea1:{c.instructions+=4;NFSU2_TR(0x6e5ea1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6e5ea4:{NFSU2_TR(0x6e5ea4);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x30ull))));
}
B6e5ea7:{NFSU2_TR(0x6e5ea7);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B6e5ea8:{NFSU2_TR(0x6e5ea8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e5e84u);}goto L6e5e84;}}
}
B6e5eaa:L6e5eaa:{c.instructions+=12;NFSU2_TR(0x6e5eaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e5ead:{NFSU2_TR(0x6e5ead);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e5eb0:{NFSU2_TR(0x6e5eb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e5eb3:{NFSU2_TR(0x6e5eb3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
}
B6e5eb6:{NFSU2_TR(0x6e5eb6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5eb7:{NFSU2_TR(0x6e5eb7);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e5ebb:{NFSU2_TR(0x6e5ebb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x20ull))));
}
B6e5ebe:{NFSU2_TR(0x6e5ebe);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5ebf:{NFSU2_TR(0x6e5ebf);
u8 U[6];
w1(R+512,carry<u32>(r4(R+8),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+8),u32(0x20ull)));
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e5ec2:{NFSU2_TR(0x6e5ec2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5ec3:{NFSU2_TR(0x6e5ec3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5ec4:{NFSU2_TR(0x6e5ec4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e5ec9ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e5a20u);}goto L6e5a20;}
}
B6e5ec9:L6e5ec9:{c.instructions+=8;NFSU2_TR(0x6e5ec9);
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
B6e5ecc:{NFSU2_TR(0x6e5ecc);
w1(R+0,u8(0x1ull));
}
B6e5ece:{NFSU2_TR(0x6e5ece);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e5ecf:{NFSU2_TR(0x6e5ecf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e5ed0:{NFSU2_TR(0x6e5ed0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e5ed1:{NFSU2_TR(0x6e5ed1);
__builtin_memmove((R+16),(R+20),4);
}
B6e5ed3:{NFSU2_TR(0x6e5ed3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e5ed4:{NFSU2_TR(0x6e5ed4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e5ed7:L6e5ed7:{c.instructions+=2;NFSU2_TR(0x6e5ed7);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6e5ed9:{NFSU2_TR(0x6e5ed9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6e601fu,6e6);}
}
B6e5edf:L6e5edf:{c.instructions+=4;NFSU2_TR(0x6e5edf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e5ee2:{NFSU2_TR(0x6e5ee2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e5ee5:{NFSU2_TR(0x6e5ee5);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+12),u32(0x1ull)));
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e5ee6:{NFSU2_TR(0x6e5ee6);
if(r1(R+519)){TAIL_STATIC(0x6e609cu,6e6);}
}
B6e5eec:L6e5eec:{c.instructions+=14;NFSU2_TR(0x6e5eec);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B6e5eef:{NFSU2_TR(0x6e5eef);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6e5ef2:{NFSU2_TR(0x6e5ef2);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B6e5ef5:{NFSU2_TR(0x6e5ef5);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e5ef9:{NFSU2_TR(0x6e5ef9);
__builtin_memmove((R+16),(R+16),4);
}
B6e5f00:{NFSU2_TR(0x6e5f00);
__builtin_memmove((R+4),(R+12),4);
}
B6e5f02:{NFSU2_TR(0x6e5f02);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6e5f05:{NFSU2_TR(0x6e5f05);
w4(R+8,u32(0x1ull));
}
B6e5f0a:{NFSU2_TR(0x6e5f0a);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B6e5f0c:{NFSU2_TR(0x6e5f0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e5f0f:{NFSU2_TR(0x6e5f0f);
__builtin_memmove((R+0),(R+12),4);
}
B6e5f11:{NFSU2_TR(0x6e5f11);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B6e5f14:{NFSU2_TR(0x6e5f14);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6e5f17:{NFSU2_TR(0x6e5f17);
if(r1(R+518)){TAIL_STATIC(0x6e6004u,6e6);}
}
B6e5f1d:L6e5f1d:{c.instructions+=3;NFSU2_TR(0x6e5f1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e5f20:{NFSU2_TR(0x6e5f20);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6e5f22:{NFSU2_TR(0x6e5f22);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e5fe4;}}
}
B6e5f28:L6e5f28:{c.instructions+=26;NFSU2_TR(0x6e5f28);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e5f2b:{NFSU2_TR(0x6e5f2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B6e5f2e:{NFSU2_TR(0x6e5f2e);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6e5f31:{NFSU2_TR(0x6e5f31);
u8 U[16];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B6e5f35:{NFSU2_TR(0x6e5f35);
u8 U[16];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6e5f39:{NFSU2_TR(0x6e5f39);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B6e5f3b:{NFSU2_TR(0x6e5f3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e5f3e:{NFSU2_TR(0x6e5f3e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5f3f:{NFSU2_TR(0x6e5f3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e5f42:{NFSU2_TR(0x6e5f42);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5f43:{NFSU2_TR(0x6e5f43);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e5f46:{NFSU2_TR(0x6e5f46);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5f47:{NFSU2_TR(0x6e5f47);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e5f4a:{NFSU2_TR(0x6e5f4a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5f4b:{NFSU2_TR(0x6e5f4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e5f4e:{NFSU2_TR(0x6e5f4e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5f4f:{NFSU2_TR(0x6e5f4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e5f52:{NFSU2_TR(0x6e5f52);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5f53:{NFSU2_TR(0x6e5f53);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e5f56:{NFSU2_TR(0x6e5f56);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5f57:{NFSU2_TR(0x6e5f57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e5f59:{NFSU2_TR(0x6e5f59);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5f5a:{NFSU2_TR(0x6e5f5a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5f5b:{NFSU2_TR(0x6e5f5b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5f5c:{NFSU2_TR(0x6e5f5c);
u8 U[4];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6e5f60:{NFSU2_TR(0x6e5f60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e5f65ull));
TAIL_STATIC(0x6e2d60u,6e2);
}
B6e5f65:L6e5f65:{c.instructions+=4;NFSU2_TR(0x6e5f65);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6e5f68:{NFSU2_TR(0x6e5f68);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5f69:{NFSU2_TR(0x6e5f69);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6e5f6d:{NFSU2_TR(0x6e5f6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e5f72ull));
TAIL_STATIC(0x6db7f0u,6db);
}
B6e5f72:L6e5f72:{c.instructions+=6;NFSU2_TR(0x6e5f72);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6e5f76:{NFSU2_TR(0x6e5f76);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5f77:{NFSU2_TR(0x6e5f77);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6e5f7b:{NFSU2_TR(0x6e5f7b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5f7c:{NFSU2_TR(0x6e5f7c);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6e5f80:{NFSU2_TR(0x6e5f80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e5f85ull));
TAIL_STATIC(0x6db9c0u,6db);
}
B6e5f85:L6e5f85:{c.instructions+=28;NFSU2_TR(0x6e5f85);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e5f89:{NFSU2_TR(0x6e5f89);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e5f8c:{NFSU2_TR(0x6e5f8c);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e5f90:{NFSU2_TR(0x6e5f90);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e5f93:{NFSU2_TR(0x6e5f93);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e5f97:{NFSU2_TR(0x6e5f97);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e5f9a:{NFSU2_TR(0x6e5f9a);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e5f9e:{NFSU2_TR(0x6e5f9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e5fa1:{NFSU2_TR(0x6e5fa1);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e5fa5:{NFSU2_TR(0x6e5fa5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e5fa8:{NFSU2_TR(0x6e5fa8);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e5fac:{NFSU2_TR(0x6e5fac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e5faf:{NFSU2_TR(0x6e5faf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e5fb2:{NFSU2_TR(0x6e5fb2);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e5fb6:{NFSU2_TR(0x6e5fb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e5fb9:{NFSU2_TR(0x6e5fb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e5fbc:{NFSU2_TR(0x6e5fbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x20ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6e5fc3:{NFSU2_TR(0x6e5fc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6e5fc6:{NFSU2_TR(0x6e5fc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e5fc9:{NFSU2_TR(0x6e5fc9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5fca:{NFSU2_TR(0x6e5fca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e5fcd:{NFSU2_TR(0x6e5fcd);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B6e5fcf:{NFSU2_TR(0x6e5fcf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5fd0:{NFSU2_TR(0x6e5fd0);
u8 U[6];
w1(R+512,carry<u32>(r4(R+8),r4(R+0)));
w1(R+523,scarry<u32>(r4(R+8),r4(R+0)));
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e5fd2:{NFSU2_TR(0x6e5fd2);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e5fd6:{NFSU2_TR(0x6e5fd6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5fd7:{NFSU2_TR(0x6e5fd7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5fd8:{NFSU2_TR(0x6e5fd8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e5fddull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e5a20u);}goto L6e5a20;}
}
B6e5fdd:L6e5fdd:{c.instructions+=2;NFSU2_TR(0x6e5fdd);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e5fe1:{NFSU2_TR(0x6e5fe1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6e5fe4:L6e5fe4:{c.instructions+=12;NFSU2_TR(0x6e5fe4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e5fe7:{NFSU2_TR(0x6e5fe7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e5fea:{NFSU2_TR(0x6e5fea);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6e5fed:{NFSU2_TR(0x6e5fed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e5ff0:{NFSU2_TR(0x6e5ff0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5ff1:{NFSU2_TR(0x6e5ff1);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e5ff5:{NFSU2_TR(0x6e5ff5);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B6e5ff7:{NFSU2_TR(0x6e5ff7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5ff8:{NFSU2_TR(0x6e5ff8);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B6e5ffa:{NFSU2_TR(0x6e5ffa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5ffb:{NFSU2_TR(0x6e5ffb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e5ffc:{NFSU2_TR(0x6e5ffc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e6001ull));
TAIL_STATIC(0x6e4450u,6e4);
}
XIT:NFSU2_TR_EXIT(0x6e5,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
