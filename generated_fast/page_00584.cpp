#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_516(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_55d(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_581(u8* __restrict R,Cpu& c);
u32 body_583(u8* __restrict R,Cpu& c);
u32 body_585(u8* __restrict R,Cpu& c);
u32 body_6d7(u8* __restrict R,Cpu& c);
u32 body_73d(u8* __restrict R,Cpu& c);
u32 body_73e(u8* __restrict R,Cpu& c);
u32 body_73f(u8* __restrict R,Cpu& c);
u32 body_740(u8* __restrict R,Cpu& c);
u32 body_741(u8* __restrict R,Cpu& c);
u32 body_742(u8* __restrict R,Cpu& c);
u32 body_743(u8* __restrict R,Cpu& c);
u32 body_745(u8* __restrict R,Cpu& c);
u32 body_747(u8* __restrict R,Cpu& c);
u32 body_757(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x584,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x584,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_584(u8* __restrict R,Cpu& c);
u32 page_584(Cpu& c){return body_584(c.regs.data(),c);}
__attribute__((noinline)) u32 body_584(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x584000:goto L584000;
case 0x584004:c.instructions+=4;goto B584004;
case 0x584006:c.instructions+=3;goto B584006;
case 0x584007:c.instructions+=2;goto B584007;
case 0x584009:c.instructions+=1;goto B584009;
case 0x58400e:goto L58400e;
case 0x58400f:c.instructions+=2;goto B58400f;
case 0x584011:c.instructions+=1;goto B584011;
case 0x584013:goto L584013;
case 0x584014:c.instructions+=4;goto B584014;
case 0x584015:c.instructions+=3;goto B584015;
case 0x584016:c.instructions+=2;goto B584016;
case 0x584017:c.instructions+=1;goto B584017;
case 0x584020:goto L584020;
case 0x584021:c.instructions+=10;goto B584021;
case 0x584022:c.instructions+=9;goto B584022;
case 0x584023:c.instructions+=8;goto B584023;
case 0x584024:c.instructions+=7;goto B584024;
case 0x584026:c.instructions+=6;goto B584026;
case 0x58402a:c.instructions+=5;goto B58402a;
case 0x58402c:c.instructions+=4;goto B58402c;
case 0x58402d:c.instructions+=3;goto B58402d;
case 0x58402f:c.instructions+=2;goto B58402f;
case 0x584033:c.instructions+=1;goto B584033;
case 0x584038:goto L584038;
case 0x58403d:c.instructions+=2;goto B58403d;
case 0x58403f:c.instructions+=1;goto B58403f;
case 0x584041:goto L584041;
case 0x584042:c.instructions+=1;goto B584042;
case 0x584046:goto L584046;
case 0x584048:c.instructions+=5;goto B584048;
case 0x58404c:c.instructions+=4;goto B58404c;
case 0x58404d:c.instructions+=3;goto B58404d;
case 0x58404f:c.instructions+=2;goto B58404f;
case 0x584057:c.instructions+=1;goto B584057;
case 0x58405c:goto L58405c;
case 0x584060:c.instructions+=4;goto B584060;
case 0x584063:c.instructions+=3;goto B584063;
case 0x584064:c.instructions+=2;goto B584064;
case 0x584066:c.instructions+=1;goto B584066;
case 0x584068:goto L584068;
case 0x584069:goto L584069;
case 0x58406b:c.instructions+=5;goto B58406b;
case 0x58406c:c.instructions+=4;goto B58406c;
case 0x58406d:c.instructions+=3;goto B58406d;
case 0x58406e:c.instructions+=2;goto B58406e;
case 0x58406f:c.instructions+=1;goto B58406f;
case 0x584080:goto L584080;
case 0x584081:c.instructions+=5;goto B584081;
case 0x584082:c.instructions+=4;goto B584082;
case 0x584086:c.instructions+=3;goto B584086;
case 0x584087:c.instructions+=2;goto B584087;
case 0x584089:c.instructions+=1;goto B584089;
case 0x58408e:goto L58408e;
case 0x584091:c.instructions+=4;goto B584091;
case 0x584092:c.instructions+=3;goto B584092;
case 0x584093:c.instructions+=2;goto B584093;
case 0x584095:c.instructions+=1;goto B584095;
case 0x58409a:goto L58409a;
case 0x58409b:c.instructions+=2;goto B58409b;
case 0x58409c:c.instructions+=1;goto B58409c;
case 0x5840a0:goto L5840a0;
case 0x5840a4:c.instructions+=5;goto B5840a4;
case 0x5840a5:c.instructions+=4;goto B5840a5;
case 0x5840a9:c.instructions+=3;goto B5840a9;
case 0x5840aa:c.instructions+=2;goto B5840aa;
case 0x5840ab:c.instructions+=1;goto B5840ab;
case 0x5840b0:goto L5840b0;
case 0x5840b4:c.instructions+=2;goto B5840b4;
case 0x5840b5:c.instructions+=1;goto B5840b5;
case 0x5840c0:goto L5840c0;
case 0x5840c1:c.instructions+=7;goto B5840c1;
case 0x5840c5:c.instructions+=6;goto B5840c5;
case 0x5840c6:c.instructions+=5;goto B5840c6;
case 0x5840c8:c.instructions+=4;goto B5840c8;
case 0x5840ca:c.instructions+=3;goto B5840ca;
case 0x5840cb:c.instructions+=2;goto B5840cb;
case 0x5840cd:c.instructions+=1;goto B5840cd;
case 0x5840cf:goto L5840cf;
case 0x5840d0:c.instructions+=1;goto B5840d0;
case 0x5840d4:goto L5840d4;
case 0x5840d8:c.instructions+=4;goto B5840d8;
case 0x5840da:c.instructions+=3;goto B5840da;
case 0x5840db:c.instructions+=2;goto B5840db;
case 0x5840dd:c.instructions+=1;goto B5840dd;
case 0x5840e2:goto L5840e2;
case 0x5840e3:c.instructions+=2;goto B5840e3;
case 0x5840e5:c.instructions+=1;goto B5840e5;
case 0x5840e7:goto L5840e7;
case 0x5840e8:goto L5840e8;
case 0x5840e9:c.instructions+=3;goto B5840e9;
case 0x5840ea:c.instructions+=2;goto B5840ea;
case 0x5840eb:c.instructions+=1;goto B5840eb;
case 0x5840f0:goto L5840f0;
case 0x5840f1:c.instructions+=7;goto B5840f1;
case 0x5840f2:c.instructions+=6;goto B5840f2;
case 0x5840f3:c.instructions+=5;goto B5840f3;
case 0x5840f7:c.instructions+=4;goto B5840f7;
case 0x5840f9:c.instructions+=3;goto B5840f9;
case 0x5840fb:c.instructions+=2;goto B5840fb;
case 0x5840fd:c.instructions+=1;goto B5840fd;
case 0x5840ff:goto L5840ff;
case 0x584100:c.instructions+=1;goto B584100;
case 0x584104:goto L584104;
case 0x584106:c.instructions+=5;goto B584106;
case 0x58410a:c.instructions+=4;goto B58410a;
case 0x58410b:c.instructions+=3;goto B58410b;
case 0x58410d:c.instructions+=2;goto B58410d;
case 0x584115:c.instructions+=1;goto B584115;
case 0x58411a:goto L58411a;
case 0x58411e:c.instructions+=4;goto B58411e;
case 0x584121:c.instructions+=3;goto B584121;
case 0x584122:c.instructions+=2;goto B584122;
case 0x584124:c.instructions+=1;goto B584124;
case 0x584126:goto L584126;
case 0x584127:goto L584127;
case 0x584129:c.instructions+=4;goto B584129;
case 0x58412a:c.instructions+=3;goto B58412a;
case 0x58412b:c.instructions+=2;goto B58412b;
case 0x58412c:c.instructions+=1;goto B58412c;
case 0x584130:goto L584130;
case 0x584134:c.instructions+=3;goto B584134;
case 0x584136:c.instructions+=2;goto B584136;
case 0x584137:c.instructions+=1;goto B584137;
case 0x58413c:goto L58413c;
case 0x584140:goto L584140;
case 0x584143:c.instructions+=2;goto B584143;
case 0x584145:c.instructions+=1;goto B584145;
case 0x584147:goto L584147;
case 0x584148:c.instructions+=1;goto B584148;
case 0x58414d:goto L58414d;
case 0x58414e:goto L58414e;
case 0x584150:goto L584150;
case 0x584154:c.instructions+=5;goto B584154;
case 0x584157:c.instructions+=4;goto B584157;
case 0x584158:c.instructions+=3;goto B584158;
case 0x584159:c.instructions+=2;goto B584159;
case 0x58415a:c.instructions+=1;goto B58415a;
case 0x58415c:goto L58415c;
case 0x58415f:c.instructions+=1;goto B58415f;
case 0x584161:goto L584161;
case 0x584165:c.instructions+=2;goto B584165;
case 0x584167:c.instructions+=1;goto B584167;
case 0x584169:goto L584169;
case 0x58416d:c.instructions+=4;goto B58416d;
case 0x584171:c.instructions+=3;goto B584171;
case 0x584173:c.instructions+=2;goto B584173;
case 0x584175:c.instructions+=1;goto B584175;
case 0x584177:goto L584177;
case 0x58417a:c.instructions+=1;goto B58417a;
case 0x58417c:goto L58417c;
case 0x58417f:c.instructions+=1;goto B58417f;
case 0x584181:goto L584181;
case 0x584183:c.instructions+=2;goto B584183;
case 0x584185:c.instructions+=1;goto B584185;
case 0x584187:goto L584187;
case 0x584189:c.instructions+=2;goto B584189;
case 0x58418b:c.instructions+=1;goto B58418b;
case 0x584190:goto L584190;
case 0x584193:c.instructions+=2;goto B584193;
case 0x584195:c.instructions+=1;goto B584195;
case 0x584197:goto L584197;
case 0x58419a:c.instructions+=6;goto B58419a;
case 0x58419d:c.instructions+=5;goto B58419d;
case 0x5841a0:c.instructions+=4;goto B5841a0;
case 0x5841a2:c.instructions+=3;goto B5841a2;
case 0x5841a5:c.instructions+=2;goto B5841a5;
case 0x5841a8:c.instructions+=1;goto B5841a8;
case 0x5841aa:goto L5841aa;
case 0x5841ab:c.instructions+=4;goto B5841ab;
case 0x5841ac:c.instructions+=3;goto B5841ac;
case 0x5841ae:c.instructions+=2;goto B5841ae;
case 0x5841af:c.instructions+=1;goto B5841af;
case 0x5841b2:goto L5841b2;
case 0x5841b3:c.instructions+=4;goto B5841b3;
case 0x5841b4:c.instructions+=3;goto B5841b4;
case 0x5841b7:c.instructions+=2;goto B5841b7;
case 0x5841b8:c.instructions+=1;goto B5841b8;
case 0x5841c0:goto L5841c0;
case 0x5841c1:c.instructions+=3;goto B5841c1;
case 0x5841c5:c.instructions+=2;goto B5841c5;
case 0x5841c7:c.instructions+=1;goto B5841c7;
case 0x5841c9:goto L5841c9;
case 0x5841cc:c.instructions+=2;goto B5841cc;
case 0x5841cd:c.instructions+=1;goto B5841cd;
case 0x5841d0:goto L5841d0;
case 0x5841d3:c.instructions+=6;goto B5841d3;
case 0x5841d4:c.instructions+=5;goto B5841d4;
case 0x5841d8:c.instructions+=4;goto B5841d8;
case 0x5841d9:c.instructions+=3;goto B5841d9;
case 0x5841dc:c.instructions+=2;goto B5841dc;
case 0x5841de:c.instructions+=1;goto B5841de;
case 0x5841e0:goto L5841e0;
case 0x5841e3:c.instructions+=1;goto B5841e3;
case 0x5841e5:goto L5841e5;
case 0x5841e8:c.instructions+=1;goto B5841e8;
case 0x5841ea:goto L5841ea;
case 0x5841ec:c.instructions+=2;goto B5841ec;
case 0x5841ee:c.instructions+=1;goto B5841ee;
case 0x5841f0:goto L5841f0;
case 0x5841f2:c.instructions+=2;goto B5841f2;
case 0x5841f4:c.instructions+=1;goto B5841f4;
case 0x5841f9:goto L5841f9;
case 0x5841fc:c.instructions+=2;goto B5841fc;
case 0x5841fe:c.instructions+=1;goto B5841fe;
case 0x584200:goto L584200;
case 0x584203:c.instructions+=6;goto B584203;
case 0x584206:c.instructions+=5;goto B584206;
case 0x584209:c.instructions+=4;goto B584209;
case 0x58420b:c.instructions+=3;goto B58420b;
case 0x58420e:c.instructions+=2;goto B58420e;
case 0x584211:c.instructions+=1;goto B584211;
case 0x584213:goto L584213;
case 0x584214:c.instructions+=4;goto B584214;
case 0x584215:c.instructions+=3;goto B584215;
case 0x584217:c.instructions+=2;goto B584217;
case 0x584218:c.instructions+=1;goto B584218;
case 0x58421b:goto L58421b;
case 0x58421c:c.instructions+=4;goto B58421c;
case 0x58421d:c.instructions+=3;goto B58421d;
case 0x584220:c.instructions+=2;goto B584220;
case 0x584221:c.instructions+=1;goto B584221;
case 0x584230:goto L584230;
case 0x584233:c.instructions+=3;goto B584233;
case 0x584236:c.instructions+=2;goto B584236;
case 0x584238:c.instructions+=1;goto B584238;
case 0x58423a:goto L58423a;
case 0x58423e:c.instructions+=2;goto B58423e;
case 0x58423f:c.instructions+=1;goto B58423f;
case 0x584243:goto L584243;
case 0x584246:c.instructions+=1;goto B584246;
case 0x584248:goto L584248;
case 0x58424b:c.instructions+=1;goto B58424b;
case 0x58424d:goto L58424d;
case 0x58424f:c.instructions+=2;goto B58424f;
case 0x584251:c.instructions+=1;goto B584251;
case 0x584253:goto L584253;
case 0x584254:c.instructions+=1;goto B584254;
case 0x584257:goto L584257;
case 0x584259:c.instructions+=5;goto B584259;
case 0x58425c:c.instructions+=4;goto B58425c;
case 0x58425e:c.instructions+=3;goto B58425e;
case 0x58425f:c.instructions+=2;goto B58425f;
case 0x584262:c.instructions+=1;goto B584262;
case 0x584267:goto L584267;
case 0x58426a:c.instructions+=1;goto B58426a;
case 0x58426b:goto L58426b;
case 0x584270:goto L584270;
case 0x584271:c.instructions+=6;goto B584271;
case 0x584273:c.instructions+=5;goto B584273;
case 0x584277:c.instructions+=4;goto B584277;
case 0x584279:c.instructions+=3;goto B584279;
case 0x58427c:c.instructions+=2;goto B58427c;
case 0x58427d:c.instructions+=1;goto B58427d;
case 0x58427f:goto L58427f;
case 0x584281:c.instructions+=1;goto B584281;
case 0x584287:goto L584287;
case 0x58428a:c.instructions+=2;goto B58428a;
case 0x58428d:c.instructions+=1;goto B58428d;
case 0x58428f:goto L58428f;
case 0x584290:c.instructions+=3;goto B584290;
case 0x584293:c.instructions+=2;goto B584293;
case 0x584294:c.instructions+=1;goto B584294;
case 0x584299:goto L584299;
case 0x58429c:goto L58429c;
case 0x58429f:c.instructions+=2;goto B58429f;
case 0x5842a1:c.instructions+=1;goto B5842a1;
case 0x5842a3:goto L5842a3;
case 0x5842a5:c.instructions+=1;goto B5842a5;
case 0x5842aa:goto L5842aa;
case 0x5842ab:c.instructions+=1;goto B5842ab;
case 0x5842b0:goto L5842b0;
case 0x5842b3:goto L5842b3;
case 0x5842b4:c.instructions+=3;goto B5842b4;
case 0x5842bb:c.instructions+=2;goto B5842bb;
case 0x5842bc:c.instructions+=1;goto B5842bc;
case 0x5842bf:goto L5842bf;
case 0x5842c1:c.instructions+=4;goto B5842c1;
case 0x5842c2:c.instructions+=3;goto B5842c2;
case 0x5842c6:c.instructions+=2;goto B5842c6;
case 0x5842c7:c.instructions+=1;goto B5842c7;
case 0x5842c9:goto L5842c9;
case 0x5842cc:c.instructions+=1;goto B5842cc;
case 0x5842ce:goto L5842ce;
case 0x5842d1:c.instructions+=2;goto B5842d1;
case 0x5842d4:c.instructions+=1;goto B5842d4;
case 0x5842d6:goto L5842d6;
case 0x5842d9:c.instructions+=3;goto B5842d9;
case 0x5842da:c.instructions+=2;goto B5842da;
case 0x5842db:c.instructions+=1;goto B5842db;
case 0x5842e0:goto L5842e0;
case 0x5842e3:goto L5842e3;
case 0x5842e6:c.instructions+=2;goto B5842e6;
case 0x5842e8:c.instructions+=1;goto B5842e8;
case 0x5842ea:goto L5842ea;
case 0x5842ec:c.instructions+=1;goto B5842ec;
case 0x5842f1:goto L5842f1;
case 0x5842f2:c.instructions+=1;goto B5842f2;
case 0x5842f7:goto L5842f7;
case 0x5842fa:goto L5842fa;
case 0x5842fc:c.instructions+=2;goto B5842fc;
case 0x584303:c.instructions+=1;goto B584303;
case 0x584305:goto L584305;
case 0x584308:c.instructions+=3;goto B584308;
case 0x58430b:c.instructions+=2;goto B58430b;
case 0x58430d:c.instructions+=1;goto B58430d;
case 0x58430f:goto L58430f;
case 0x584310:goto L584310;
case 0x584314:c.instructions+=2;goto B584314;
case 0x584317:c.instructions+=1;goto B584317;
case 0x584319:goto L584319;
case 0x58431c:c.instructions+=5;goto B58431c;
case 0x58431e:c.instructions+=4;goto B58431e;
case 0x584320:c.instructions+=3;goto B584320;
case 0x584322:c.instructions+=2;goto B584322;
case 0x584325:c.instructions+=1;goto B584325;
case 0x58432a:goto L58432a;
case 0x58432b:c.instructions+=1;goto B58432b;
case 0x584330:goto L584330;
case 0x584333:c.instructions+=3;goto B584333;
case 0x584335:c.instructions+=2;goto B584335;
case 0x584337:c.instructions+=1;goto B584337;
case 0x584339:goto L584339;
case 0x58433b:c.instructions+=2;goto B58433b;
case 0x58433d:c.instructions+=1;goto B58433d;
case 0x58433f:goto L58433f;
case 0x584340:c.instructions+=1;goto B584340;
case 0x584341:goto L584341;
case 0x584342:c.instructions+=2;goto B584342;
case 0x584343:c.instructions+=1;goto B584343;
case 0x584350:goto L584350;
case 0x584351:c.instructions+=4;goto B584351;
case 0x584353:c.instructions+=3;goto B584353;
case 0x584356:c.instructions+=2;goto B584356;
case 0x584358:c.instructions+=1;goto B584358;
case 0x58435a:goto L58435a;
case 0x58435d:c.instructions+=2;goto B58435d;
case 0x58435f:c.instructions+=1;goto B58435f;
case 0x584361:goto L584361;
case 0x584364:c.instructions+=4;goto B584364;
case 0x584368:c.instructions+=3;goto B584368;
case 0x584369:c.instructions+=2;goto B584369;
case 0x58436a:c.instructions+=1;goto B58436a;
case 0x58436c:goto L58436c;
case 0x58436f:goto L58436f;
case 0x584370:c.instructions+=3;goto B584370;
case 0x584373:c.instructions+=2;goto B584373;
case 0x584375:c.instructions+=1;goto B584375;
case 0x584377:goto L584377;
case 0x584379:c.instructions+=1;goto B584379;
case 0x58437e:goto L58437e;
case 0x58437f:c.instructions+=1;goto B58437f;
case 0x584384:goto L584384;
case 0x584387:goto L584387;
case 0x58438e:c.instructions+=1;goto B58438e;
case 0x58438f:goto L58438f;
case 0x584390:c.instructions+=1;goto B584390;
case 0x5843a0:goto L5843a0;
case 0x5843a1:c.instructions+=10;goto B5843a1;
case 0x5843a5:c.instructions+=9;goto B5843a5;
case 0x5843a6:c.instructions+=8;goto B5843a6;
case 0x5843aa:c.instructions+=7;goto B5843aa;
case 0x5843ab:c.instructions+=6;goto B5843ab;
case 0x5843ac:c.instructions+=5;goto B5843ac;
case 0x5843b0:c.instructions+=4;goto B5843b0;
case 0x5843b3:c.instructions+=3;goto B5843b3;
case 0x5843b6:c.instructions+=2;goto B5843b6;
case 0x5843b8:c.instructions+=1;goto B5843b8;
case 0x5843ba:goto L5843ba;
case 0x5843c0:goto L5843c0;
case 0x5843c3:c.instructions+=4;goto B5843c3;
case 0x5843c4:c.instructions+=3;goto B5843c4;
case 0x5843c5:c.instructions+=2;goto B5843c5;
case 0x5843c6:c.instructions+=1;goto B5843c6;
case 0x5843c9:goto L5843c9;
case 0x5843cb:c.instructions+=3;goto B5843cb;
case 0x5843ce:c.instructions+=2;goto B5843ce;
case 0x5843d0:c.instructions+=1;goto B5843d0;
case 0x5843d2:goto L5843d2;
case 0x5843d3:c.instructions+=2;goto B5843d3;
case 0x5843d4:c.instructions+=1;goto B5843d4;
case 0x5843d9:goto L5843d9;
case 0x5843dc:c.instructions+=5;goto B5843dc;
case 0x5843dd:c.instructions+=4;goto B5843dd;
case 0x5843de:c.instructions+=3;goto B5843de;
case 0x5843df:c.instructions+=2;goto B5843df;
case 0x5843e0:c.instructions+=1;goto B5843e0;
case 0x5843f0:goto L5843f0;
case 0x5843f1:c.instructions+=10;goto B5843f1;
case 0x5843f5:c.instructions+=9;goto B5843f5;
case 0x5843f6:c.instructions+=8;goto B5843f6;
case 0x5843fa:c.instructions+=7;goto B5843fa;
case 0x5843fb:c.instructions+=6;goto B5843fb;
case 0x5843fc:c.instructions+=5;goto B5843fc;
case 0x584400:c.instructions+=4;goto B584400;
case 0x584403:c.instructions+=3;goto B584403;
case 0x584406:c.instructions+=2;goto B584406;
case 0x584408:c.instructions+=1;goto B584408;
case 0x58440a:goto L58440a;
case 0x584410:goto L584410;
case 0x584413:c.instructions+=4;goto B584413;
case 0x584414:c.instructions+=3;goto B584414;
case 0x584415:c.instructions+=2;goto B584415;
case 0x584416:c.instructions+=1;goto B584416;
case 0x584419:goto L584419;
case 0x58441b:c.instructions+=3;goto B58441b;
case 0x58441e:c.instructions+=2;goto B58441e;
case 0x584420:c.instructions+=1;goto B584420;
case 0x584422:goto L584422;
case 0x584423:c.instructions+=2;goto B584423;
case 0x584424:c.instructions+=1;goto B584424;
case 0x584429:goto L584429;
case 0x58442c:c.instructions+=5;goto B58442c;
case 0x58442d:c.instructions+=4;goto B58442d;
case 0x58442e:c.instructions+=3;goto B58442e;
case 0x58442f:c.instructions+=2;goto B58442f;
case 0x584430:c.instructions+=1;goto B584430;
case 0x584440:goto L584440;
case 0x584443:c.instructions+=8;goto B584443;
case 0x584444:c.instructions+=7;goto B584444;
case 0x584448:c.instructions+=6;goto B584448;
case 0x584449:c.instructions+=5;goto B584449;
case 0x58444d:c.instructions+=4;goto B58444d;
case 0x584450:c.instructions+=3;goto B584450;
case 0x584452:c.instructions+=2;goto B584452;
case 0x584453:c.instructions+=1;goto B584453;
case 0x584459:goto L584459;
case 0x58445a:c.instructions+=3;goto B58445a;
case 0x58445c:c.instructions+=2;goto B58445c;
case 0x58445f:c.instructions+=1;goto B58445f;
case 0x584460:goto L584460;
case 0x584463:c.instructions+=8;goto B584463;
case 0x584465:c.instructions+=7;goto B584465;
case 0x584466:c.instructions+=6;goto B584466;
case 0x58446b:c.instructions+=5;goto B58446b;
case 0x58446d:c.instructions+=4;goto B58446d;
case 0x58446e:c.instructions+=3;goto B58446e;
case 0x584473:c.instructions+=2;goto B584473;
case 0x584474:c.instructions+=1;goto B584474;
case 0x584479:goto L584479;
case 0x58447c:c.instructions+=2;goto B58447c;
case 0x58447d:c.instructions+=1;goto B58447d;
case 0x584482:goto L584482;
case 0x584485:c.instructions+=2;goto B584485;
case 0x584488:c.instructions+=1;goto B584488;
case 0x58448a:goto L58448a;
case 0x58448b:c.instructions+=3;goto B58448b;
case 0x58448e:c.instructions+=2;goto B58448e;
case 0x584491:c.instructions+=1;goto B584491;
case 0x584493:goto L584493;
case 0x584496:c.instructions+=4;goto B584496;
case 0x58449b:c.instructions+=3;goto B58449b;
case 0x58449d:c.instructions+=2;goto B58449d;
case 0x5844a2:c.instructions+=1;goto B5844a2;
case 0x5844a6:goto L5844a6;
case 0x5844a8:goto L5844a8;
case 0x5844ad:c.instructions+=8;goto B5844ad;
case 0x5844af:c.instructions+=7;goto B5844af;
case 0x5844b3:c.instructions+=6;goto B5844b3;
case 0x5844b4:c.instructions+=5;goto B5844b4;
case 0x5844b6:c.instructions+=4;goto B5844b6;
case 0x5844bb:c.instructions+=3;goto B5844bb;
case 0x5844bc:c.instructions+=2;goto B5844bc;
case 0x5844bd:c.instructions+=1;goto B5844bd;
case 0x5844c2:goto L5844c2;
case 0x5844c5:c.instructions+=2;goto B5844c5;
case 0x5844c6:c.instructions+=1;goto B5844c6;
case 0x5844cb:goto L5844cb;
case 0x5844cf:c.instructions+=2;goto B5844cf;
case 0x5844d0:c.instructions+=1;goto B5844d0;
case 0x5844d5:goto L5844d5;
case 0x5844d8:c.instructions+=2;goto B5844d8;
case 0x5844de:c.instructions+=1;goto B5844de;
case 0x5844df:goto L5844df;
case 0x5844e2:c.instructions+=2;goto B5844e2;
case 0x5844e4:c.instructions+=1;goto B5844e4;
case 0x5844e6:goto L5844e6;
case 0x5844e9:c.instructions+=2;goto B5844e9;
case 0x5844eb:c.instructions+=1;goto B5844eb;
case 0x5844ed:goto L5844ed;
case 0x5844f0:c.instructions+=3;goto B5844f0;
case 0x5844f1:c.instructions+=2;goto B5844f1;
case 0x5844f2:c.instructions+=1;goto B5844f2;
case 0x5844f4:goto L5844f4;
case 0x5844f7:goto L5844f7;
case 0x5844fa:c.instructions+=2;goto B5844fa;
case 0x5844fc:c.instructions+=1;goto B5844fc;
case 0x5844fe:goto L5844fe;
case 0x584500:c.instructions+=1;goto B584500;
case 0x584505:goto L584505;
case 0x584506:c.instructions+=1;goto B584506;
case 0x58450b:goto L58450b;
case 0x58450e:goto L58450e;
case 0x584515:goto L584515;
case 0x584516:c.instructions+=4;goto B584516;
case 0x584517:c.instructions+=3;goto B584517;
case 0x584518:c.instructions+=2;goto B584518;
case 0x58451b:c.instructions+=1;goto B58451b;
case 0x584520:goto L584520;
case 0x584521:c.instructions+=5;goto B584521;
case 0x584525:c.instructions+=4;goto B584525;
case 0x584528:c.instructions+=3;goto B584528;
case 0x58452a:c.instructions+=2;goto B58452a;
case 0x58452b:c.instructions+=1;goto B58452b;
case 0x58452d:goto L58452d;
case 0x584530:c.instructions+=6;goto B584530;
case 0x584535:c.instructions+=5;goto B584535;
case 0x584537:c.instructions+=4;goto B584537;
case 0x58453c:c.instructions+=3;goto B58453c;
case 0x584541:c.instructions+=2;goto B584541;
case 0x584542:c.instructions+=1;goto B584542;
case 0x584547:goto L584547;
case 0x58454a:c.instructions+=2;goto B58454a;
case 0x58454b:c.instructions+=1;goto B58454b;
case 0x584550:goto L584550;
case 0x584553:c.instructions+=1;goto B584553;
case 0x584555:goto L584555;
case 0x58455c:goto L58455c;
case 0x584560:c.instructions+=3;goto B584560;
case 0x584563:c.instructions+=2;goto B584563;
case 0x584565:c.instructions+=1;goto B584565;
case 0x584567:goto L584567;
case 0x58456a:c.instructions+=2;goto B58456a;
case 0x58456c:c.instructions+=1;goto B58456c;
case 0x58456e:goto L58456e;
case 0x584571:c.instructions+=3;goto B584571;
case 0x584572:c.instructions+=2;goto B584572;
case 0x584573:c.instructions+=1;goto B584573;
case 0x584575:goto L584575;
case 0x584578:goto L584578;
case 0x58457b:c.instructions+=2;goto B58457b;
case 0x58457d:c.instructions+=1;goto B58457d;
case 0x58457f:goto L58457f;
case 0x584581:c.instructions+=1;goto B584581;
case 0x584586:goto L584586;
case 0x584587:c.instructions+=1;goto B584587;
case 0x58458c:goto L58458c;
case 0x58458f:goto L58458f;
case 0x584596:goto L584596;
case 0x584597:c.instructions+=2;goto B584597;
case 0x584598:c.instructions+=1;goto B584598;
case 0x5845a0:goto L5845a0;
case 0x5845a4:c.instructions+=8;goto B5845a4;
case 0x5845a5:c.instructions+=7;goto B5845a5;
case 0x5845a6:c.instructions+=6;goto B5845a6;
case 0x5845aa:c.instructions+=5;goto B5845aa;
case 0x5845b1:c.instructions+=4;goto B5845b1;
case 0x5845b4:c.instructions+=3;goto B5845b4;
case 0x5845b6:c.instructions+=2;goto B5845b6;
case 0x5845b8:c.instructions+=1;goto B5845b8;
case 0x5845ba:goto L5845ba;
case 0x5845c0:goto L5845c0;
case 0x5845c6:c.instructions+=4;goto B5845c6;
case 0x5845cc:c.instructions+=3;goto B5845cc;
case 0x5845d2:c.instructions+=2;goto B5845d2;
case 0x5845d7:c.instructions+=1;goto B5845d7;
case 0x5845e0:goto L5845e0;
case 0x5845e2:c.instructions+=3;goto B5845e2;
case 0x5845e5:c.instructions+=2;goto B5845e5;
case 0x5845ea:c.instructions+=1;goto B5845ea;
case 0x5845ec:goto L5845ec;
case 0x5845f2:c.instructions+=3;goto B5845f2;
case 0x5845f5:c.instructions+=2;goto B5845f5;
case 0x5845f7:c.instructions+=1;goto B5845f7;
case 0x5845f9:goto L5845f9;
case 0x5845fc:c.instructions+=2;goto B5845fc;
case 0x5845fe:c.instructions+=1;goto B5845fe;
case 0x584600:goto L584600;
case 0x584603:c.instructions+=3;goto B584603;
case 0x584604:c.instructions+=2;goto B584604;
case 0x584605:c.instructions+=1;goto B584605;
case 0x584607:goto L584607;
case 0x58460a:goto L58460a;
case 0x58460b:c.instructions+=3;goto B58460b;
case 0x58460e:c.instructions+=2;goto B58460e;
case 0x584610:c.instructions+=1;goto B584610;
case 0x584612:goto L584612;
case 0x584614:c.instructions+=1;goto B584614;
case 0x584619:goto L584619;
case 0x58461a:c.instructions+=1;goto B58461a;
case 0x58461f:goto L58461f;
case 0x584622:goto L584622;
case 0x584625:c.instructions+=1;goto B584625;
case 0x584626:goto L584626;
case 0x584627:c.instructions+=2;goto B584627;
case 0x584628:c.instructions+=1;goto B584628;
case 0x584630:goto L584630;
case 0x584631:c.instructions+=4;goto B584631;
case 0x584635:c.instructions+=3;goto B584635;
case 0x584638:c.instructions+=2;goto B584638;
case 0x58463a:c.instructions+=1;goto B58463a;
case 0x58463c:goto L58463c;
case 0x58463f:c.instructions+=2;goto B58463f;
case 0x584641:c.instructions+=1;goto B584641;
case 0x584643:goto L584643;
case 0x584646:c.instructions+=4;goto B584646;
case 0x58464a:c.instructions+=3;goto B58464a;
case 0x58464b:c.instructions+=2;goto B58464b;
case 0x58464c:c.instructions+=1;goto B58464c;
case 0x58464e:goto L58464e;
case 0x584651:goto L584651;
case 0x584652:c.instructions+=3;goto B584652;
case 0x584655:c.instructions+=2;goto B584655;
case 0x584657:c.instructions+=1;goto B584657;
case 0x584659:goto L584659;
case 0x58465b:c.instructions+=1;goto B58465b;
case 0x584660:goto L584660;
case 0x584661:c.instructions+=1;goto B584661;
case 0x584666:goto L584666;
case 0x584669:goto L584669;
case 0x584670:c.instructions+=1;goto B584670;
case 0x584671:goto L584671;
case 0x584672:c.instructions+=1;goto B584672;
case 0x584680:goto L584680;
case 0x584684:c.instructions+=22;goto B584684;
case 0x584685:c.instructions+=21;goto B584685;
case 0x584687:c.instructions+=20;goto B584687;
case 0x58468b:c.instructions+=19;goto B58468b;
case 0x58468e:c.instructions+=18;goto B58468e;
case 0x584692:c.instructions+=17;goto B584692;
case 0x584695:c.instructions+=16;goto B584695;
case 0x584699:c.instructions+=15;goto B584699;
case 0x58469c:c.instructions+=14;goto B58469c;
case 0x5846a1:c.instructions+=13;goto B5846a1;
case 0x5846a3:c.instructions+=12;goto B5846a3;
case 0x5846a6:c.instructions+=11;goto B5846a6;
case 0x5846aa:c.instructions+=10;goto B5846aa;
case 0x5846ab:c.instructions+=9;goto B5846ab;
case 0x5846ad:c.instructions+=8;goto B5846ad;
case 0x5846b0:c.instructions+=7;goto B5846b0;
case 0x5846b1:c.instructions+=6;goto B5846b1;
case 0x5846b4:c.instructions+=5;goto B5846b4;
case 0x5846bb:c.instructions+=4;goto B5846bb;
case 0x5846c0:c.instructions+=3;goto B5846c0;
case 0x5846c3:c.instructions+=2;goto B5846c3;
case 0x5846c8:c.instructions+=1;goto B5846c8;
case 0x5846ca:goto L5846ca;
case 0x5846cd:goto L5846cd;
case 0x5846d1:c.instructions+=1;goto B5846d1;
case 0x5846d3:goto L5846d3;
case 0x5846d8:c.instructions+=2;goto B5846d8;
case 0x5846da:c.instructions+=1;goto B5846da;
case 0x5846dc:goto L5846dc;
case 0x5846df:c.instructions+=1;goto B5846df;
case 0x5846e4:goto L5846e4;
case 0x5846e7:c.instructions+=1;goto B5846e7;
case 0x5846e9:goto L5846e9;
case 0x5846ef:c.instructions+=1;goto B5846ef;
case 0x5846f1:goto L5846f1;
case 0x5846f7:goto L5846f7;
case 0x5846fb:c.instructions+=2;goto B5846fb;
case 0x5846fd:c.instructions+=1;goto B5846fd;
case 0x5846ff:goto L5846ff;
case 0x584701:c.instructions+=1;goto B584701;
case 0x584703:goto L584703;
case 0x584704:c.instructions+=1;goto B584704;
case 0x584709:goto L584709;
case 0x58470a:c.instructions+=3;goto B58470a;
case 0x58470c:c.instructions+=2;goto B58470c;
case 0x58470d:c.instructions+=1;goto B58470d;
case 0x584712:goto L584712;
case 0x584713:c.instructions+=3;goto B584713;
case 0x584714:c.instructions+=2;goto B584714;
case 0x584717:c.instructions+=1;goto B584717;
case 0x58471c:goto L58471c;
case 0x58471f:goto L58471f;
case 0x584720:c.instructions+=3;goto B584720;
case 0x584722:c.instructions+=2;goto B584722;
case 0x584723:c.instructions+=1;goto B584723;
case 0x584730:goto L584730;
case 0x584731:c.instructions+=6;goto B584731;
case 0x584733:c.instructions+=5;goto B584733;
case 0x584736:c.instructions+=4;goto B584736;
case 0x584737:c.instructions+=3;goto B584737;
case 0x584739:c.instructions+=2;goto B584739;
case 0x58473b:c.instructions+=1;goto B58473b;
case 0x58473d:goto L58473d;
case 0x58473f:c.instructions+=2;goto B58473f;
case 0x584741:c.instructions+=1;goto B584741;
case 0x584743:goto L584743;
case 0x584744:c.instructions+=2;goto B584744;
case 0x584749:c.instructions+=1;goto B584749;
case 0x58474e:goto L58474e;
case 0x584751:c.instructions+=2;goto B584751;
case 0x584752:c.instructions+=1;goto B584752;
case 0x584757:goto L584757;
case 0x58475a:c.instructions+=1;goto B58475a;
case 0x58475d:goto L58475d;
case 0x584760:c.instructions+=7;goto B584760;
case 0x584762:c.instructions+=6;goto B584762;
case 0x584765:c.instructions+=5;goto B584765;
case 0x58476c:c.instructions+=4;goto B58476c;
case 0x58476f:c.instructions+=3;goto B58476f;
case 0x584772:c.instructions+=2;goto B584772;
case 0x584774:c.instructions+=1;goto B584774;
case 0x584776:goto L584776;
case 0x584777:c.instructions+=1;goto B584777;
case 0x58477c:goto L58477c;
case 0x58477f:c.instructions+=1;goto B58477f;
case 0x584782:goto L584782;
case 0x584785:c.instructions+=2;goto B584785;
case 0x584787:c.instructions+=1;goto B584787;
case 0x584789:goto L584789;
case 0x58478a:c.instructions+=1;goto B58478a;
case 0x58478f:goto L58478f;
case 0x584792:c.instructions+=1;goto B584792;
case 0x584795:goto L584795;
case 0x584796:c.instructions+=2;goto B584796;
case 0x584797:c.instructions+=1;goto B584797;
case 0x5847a0:goto L5847a0;
case 0x5847a1:c.instructions+=5;goto B5847a1;
case 0x5847a4:c.instructions+=4;goto B5847a4;
case 0x5847a5:c.instructions+=3;goto B5847a5;
case 0x5847a8:c.instructions+=2;goto B5847a8;
case 0x5847aa:c.instructions+=1;goto B5847aa;
case 0x5847ac:goto L5847ac;
case 0x5847ad:c.instructions+=3;goto B5847ad;
case 0x5847b1:c.instructions+=2;goto B5847b1;
case 0x5847b2:c.instructions+=1;goto B5847b2;
case 0x5847b6:goto L5847b6;
case 0x5847b9:c.instructions+=1;goto B5847b9;
case 0x5847bb:goto L5847bb;
case 0x5847be:c.instructions+=3;goto B5847be;
case 0x5847bf:c.instructions+=2;goto B5847bf;
case 0x5847c0:c.instructions+=1;goto B5847c0;
case 0x5847c5:goto L5847c5;
case 0x5847c8:c.instructions+=2;goto B5847c8;
case 0x5847ca:c.instructions+=1;goto B5847ca;
case 0x5847cc:goto L5847cc;
case 0x5847ce:c.instructions+=2;goto B5847ce;
case 0x5847d0:c.instructions+=1;goto B5847d0;
case 0x5847d2:goto L5847d2;
case 0x5847d3:c.instructions+=1;goto B5847d3;
case 0x5847d4:goto L5847d4;
case 0x5847d6:c.instructions+=7;goto B5847d6;
case 0x5847d8:c.instructions+=6;goto B5847d8;
case 0x5847db:c.instructions+=5;goto B5847db;
case 0x5847dc:c.instructions+=4;goto B5847dc;
case 0x5847dd:c.instructions+=3;goto B5847dd;
case 0x5847df:c.instructions+=2;goto B5847df;
case 0x5847e0:c.instructions+=1;goto B5847e0;
case 0x5847f0:goto L5847f0;
case 0x5847f3:c.instructions+=4;goto B5847f3;
case 0x5847f6:c.instructions+=3;goto B5847f6;
case 0x5847f8:c.instructions+=2;goto B5847f8;
case 0x5847fa:c.instructions+=1;goto B5847fa;
case 0x5847fc:goto L5847fc;
case 0x5847fd:c.instructions+=1;goto B5847fd;
case 0x584801:goto L584801;
case 0x584803:c.instructions+=1;goto B584803;
case 0x584805:goto L584805;
case 0x584807:c.instructions+=3;goto B584807;
case 0x584808:c.instructions+=2;goto B584808;
case 0x58480a:c.instructions+=1;goto B58480a;
case 0x58480c:goto L58480c;
case 0x58480d:goto L58480d;
case 0x58480f:c.instructions+=5;goto B58480f;
case 0x584811:c.instructions+=4;goto B584811;
case 0x584814:c.instructions+=3;goto B584814;
case 0x584815:c.instructions+=2;goto B584815;
case 0x584817:c.instructions+=1;goto B584817;
case 0x584820:goto L584820;
case 0x584821:c.instructions+=5;goto B584821;
case 0x584824:c.instructions+=4;goto B584824;
case 0x584825:c.instructions+=3;goto B584825;
case 0x584828:c.instructions+=2;goto B584828;
case 0x58482a:c.instructions+=1;goto B58482a;
case 0x58482c:goto L58482c;
case 0x58482d:c.instructions+=1;goto B58482d;
case 0x584831:goto L584831;
case 0x584834:c.instructions+=3;goto B584834;
case 0x584835:c.instructions+=2;goto B584835;
case 0x584836:c.instructions+=1;goto B584836;
case 0x58483b:goto L58483b;
case 0x58483e:c.instructions+=2;goto B58483e;
case 0x584840:c.instructions+=1;goto B584840;
case 0x584842:goto L584842;
case 0x584844:c.instructions+=2;goto B584844;
case 0x584846:c.instructions+=1;goto B584846;
case 0x584848:goto L584848;
case 0x584849:goto L584849;
case 0x58484b:c.instructions+=7;goto B58484b;
case 0x58484d:c.instructions+=6;goto B58484d;
case 0x584850:c.instructions+=5;goto B584850;
case 0x584851:c.instructions+=4;goto B584851;
case 0x584852:c.instructions+=3;goto B584852;
case 0x584854:c.instructions+=2;goto B584854;
case 0x584855:c.instructions+=1;goto B584855;
case 0x584860:goto L584860;
case 0x584861:c.instructions+=16;goto B584861;
case 0x584863:c.instructions+=15;goto B584863;
case 0x584866:c.instructions+=14;goto B584866;
case 0x58486c:c.instructions+=13;goto B58486c;
case 0x58486d:c.instructions+=12;goto B58486d;
case 0x584870:c.instructions+=11;goto B584870;
case 0x584871:c.instructions+=10;goto B584871;
case 0x584873:c.instructions+=9;goto B584873;
case 0x584875:c.instructions+=8;goto B584875;
case 0x584878:c.instructions+=7;goto B584878;
case 0x58487b:c.instructions+=6;goto B58487b;
case 0x58487d:c.instructions+=5;goto B58487d;
case 0x584880:c.instructions+=4;goto B584880;
case 0x584883:c.instructions+=3;goto B584883;
case 0x584885:c.instructions+=2;goto B584885;
case 0x584886:c.instructions+=1;goto B584886;
case 0x584888:goto L584888;
case 0x58488a:c.instructions+=4;goto B58488a;
case 0x58488b:c.instructions+=3;goto B58488b;
case 0x58488e:c.instructions+=2;goto B58488e;
case 0x58488f:c.instructions+=1;goto B58488f;
case 0x584894:goto L584894;
case 0x584897:c.instructions+=1;goto B584897;
case 0x584899:goto L584899;
case 0x58489d:goto L58489d;
case 0x5848a3:c.instructions+=5;goto B5848a3;
case 0x5848a9:c.instructions+=4;goto B5848a9;
case 0x5848ac:c.instructions+=3;goto B5848ac;
case 0x5848b2:c.instructions+=2;goto B5848b2;
case 0x5848b8:c.instructions+=1;goto B5848b8;
case 0x5848bd:goto L5848bd;
case 0x5848c0:c.instructions+=5;goto B5848c0;
case 0x5848c2:c.instructions+=4;goto B5848c2;
case 0x5848c4:c.instructions+=3;goto B5848c4;
case 0x5848c9:c.instructions+=2;goto B5848c9;
case 0x5848ce:c.instructions+=1;goto B5848ce;
case 0x5848d2:goto L5848d2;
case 0x5848d4:goto L5848d4;
case 0x5848d6:c.instructions+=7;goto B5848d6;
case 0x5848d7:c.instructions+=6;goto B5848d7;
case 0x5848dc:c.instructions+=5;goto B5848dc;
case 0x5848dd:c.instructions+=4;goto B5848dd;
case 0x5848e1:c.instructions+=3;goto B5848e1;
case 0x5848e6:c.instructions+=2;goto B5848e6;
case 0x5848e7:c.instructions+=1;goto B5848e7;
case 0x5848ec:goto L5848ec;
case 0x5848ef:c.instructions+=6;goto B5848ef;
case 0x5848f0:c.instructions+=5;goto B5848f0;
case 0x5848f5:c.instructions+=4;goto B5848f5;
case 0x5848f9:c.instructions+=3;goto B5848f9;
case 0x5848fe:c.instructions+=2;goto B5848fe;
case 0x5848ff:c.instructions+=1;goto B5848ff;
case 0x584904:goto L584904;
case 0x58490a:c.instructions+=6;goto B58490a;
case 0x58490b:c.instructions+=5;goto B58490b;
case 0x584910:c.instructions+=4;goto B584910;
case 0x584914:c.instructions+=3;goto B584914;
case 0x584919:c.instructions+=2;goto B584919;
case 0x58491a:c.instructions+=1;goto B58491a;
case 0x58491f:goto L58491f;
case 0x584925:c.instructions+=9;goto B584925;
case 0x584927:c.instructions+=8;goto B584927;
case 0x584929:c.instructions+=7;goto B584929;
case 0x58492c:c.instructions+=6;goto B58492c;
case 0x584930:c.instructions+=5;goto B584930;
case 0x584931:c.instructions+=4;goto B584931;
case 0x584936:c.instructions+=3;goto B584936;
case 0x58493b:c.instructions+=2;goto B58493b;
case 0x58493c:c.instructions+=1;goto B58493c;
case 0x584941:goto L584941;
case 0x584948:c.instructions+=7;goto B584948;
case 0x58494b:c.instructions+=6;goto B58494b;
case 0x58494c:c.instructions+=5;goto B58494c;
case 0x584951:c.instructions+=4;goto B584951;
case 0x584955:c.instructions+=3;goto B584955;
case 0x58495a:c.instructions+=2;goto B58495a;
case 0x58495b:c.instructions+=1;goto B58495b;
case 0x584960:goto L584960;
case 0x584966:c.instructions+=9;goto B584966;
case 0x584968:c.instructions+=8;goto B584968;
case 0x58496a:c.instructions+=7;goto B58496a;
case 0x58496d:c.instructions+=6;goto B58496d;
case 0x584971:c.instructions+=5;goto B584971;
case 0x584972:c.instructions+=4;goto B584972;
case 0x584977:c.instructions+=3;goto B584977;
case 0x58497c:c.instructions+=2;goto B58497c;
case 0x58497d:c.instructions+=1;goto B58497d;
case 0x584982:goto L584982;
case 0x584989:c.instructions+=6;goto B584989;
case 0x58498a:c.instructions+=5;goto B58498a;
case 0x58498f:c.instructions+=4;goto B58498f;
case 0x584993:c.instructions+=3;goto B584993;
case 0x584998:c.instructions+=2;goto B584998;
case 0x584999:c.instructions+=1;goto B584999;
case 0x58499e:goto L58499e;
case 0x5849a5:c.instructions+=6;goto B5849a5;
case 0x5849a6:c.instructions+=5;goto B5849a6;
case 0x5849ab:c.instructions+=4;goto B5849ab;
case 0x5849af:c.instructions+=3;goto B5849af;
case 0x5849b4:c.instructions+=2;goto B5849b4;
case 0x5849b5:c.instructions+=1;goto B5849b5;
case 0x5849ba:goto L5849ba;
case 0x5849c1:c.instructions+=7;goto B5849c1;
case 0x5849c4:c.instructions+=6;goto B5849c4;
case 0x5849c5:c.instructions+=5;goto B5849c5;
case 0x5849ca:c.instructions+=4;goto B5849ca;
case 0x5849ce:c.instructions+=3;goto B5849ce;
case 0x5849d3:c.instructions+=2;goto B5849d3;
case 0x5849d4:c.instructions+=1;goto B5849d4;
case 0x5849d9:goto L5849d9;
case 0x5849de:c.instructions+=5;goto B5849de;
case 0x5849e3:c.instructions+=4;goto B5849e3;
case 0x5849e7:c.instructions+=3;goto B5849e7;
case 0x5849ec:c.instructions+=2;goto B5849ec;
case 0x5849ed:c.instructions+=1;goto B5849ed;
case 0x5849f2:goto L5849f2;
case 0x5849f8:c.instructions+=6;goto B5849f8;
case 0x5849f9:c.instructions+=5;goto B5849f9;
case 0x5849fe:c.instructions+=4;goto B5849fe;
case 0x584a02:c.instructions+=3;goto B584a02;
case 0x584a07:c.instructions+=2;goto B584a07;
case 0x584a08:c.instructions+=1;goto B584a08;
case 0x584a0d:goto L584a0d;
case 0x584a13:c.instructions+=6;goto B584a13;
case 0x584a14:c.instructions+=5;goto B584a14;
case 0x584a19:c.instructions+=4;goto B584a19;
case 0x584a1d:c.instructions+=3;goto B584a1d;
case 0x584a22:c.instructions+=2;goto B584a22;
case 0x584a23:c.instructions+=1;goto B584a23;
case 0x584a28:goto L584a28;
case 0x584a2f:c.instructions+=4;goto B584a2f;
case 0x584a32:c.instructions+=3;goto B584a32;
case 0x584a34:c.instructions+=2;goto B584a34;
case 0x584a35:c.instructions+=1;goto B584a35;
case 0x584a3a:goto L584a3a;
case 0x584a3b:c.instructions+=5;goto B584a3b;
case 0x584a40:c.instructions+=4;goto B584a40;
case 0x584a44:c.instructions+=3;goto B584a44;
case 0x584a49:c.instructions+=2;goto B584a49;
case 0x584a4a:c.instructions+=1;goto B584a4a;
case 0x584a4f:goto L584a4f;
case 0x584a55:c.instructions+=6;goto B584a55;
case 0x584a56:c.instructions+=5;goto B584a56;
case 0x584a5b:c.instructions+=4;goto B584a5b;
case 0x584a5f:c.instructions+=3;goto B584a5f;
case 0x584a64:c.instructions+=2;goto B584a64;
case 0x584a65:c.instructions+=1;goto B584a65;
case 0x584a6a:goto L584a6a;
case 0x584a6e:c.instructions+=2;goto B584a6e;
case 0x584a6f:c.instructions+=1;goto B584a6f;
case 0x584a74:goto L584a74;
case 0x584a75:c.instructions+=2;goto B584a75;
case 0x584a76:c.instructions+=1;goto B584a76;
case 0x584a7b:goto L584a7b;
case 0x584a7f:c.instructions+=4;goto B584a7f;
case 0x584a80:c.instructions+=3;goto B584a80;
case 0x584a81:c.instructions+=2;goto B584a81;
case 0x584a84:c.instructions+=1;goto B584a84;
case 0x584a89:goto L584a89;
case 0x584a8c:c.instructions+=7;goto B584a8c;
case 0x584a8d:c.instructions+=6;goto B584a8d;
case 0x584a8f:c.instructions+=5;goto B584a8f;
case 0x584a90:c.instructions+=4;goto B584a90;
case 0x584a91:c.instructions+=3;goto B584a91;
case 0x584a93:c.instructions+=2;goto B584a93;
case 0x584a94:c.instructions+=1;goto B584a94;
case 0x584aa0:goto L584aa0;
case 0x584aa1:c.instructions+=9;goto B584aa1;
case 0x584aa2:c.instructions+=8;goto B584aa2;
case 0x584aa6:c.instructions+=7;goto B584aa6;
case 0x584aa8:c.instructions+=6;goto B584aa8;
case 0x584aaa:c.instructions+=5;goto B584aaa;
case 0x584aaf:c.instructions+=4;goto B584aaf;
case 0x584ab6:c.instructions+=3;goto B584ab6;
case 0x584ab7:c.instructions+=2;goto B584ab7;
case 0x584abe:c.instructions+=1;goto B584abe;
case 0x584ac3:goto L584ac3;
case 0x584ac6:c.instructions+=2;goto B584ac6;
case 0x584ac7:c.instructions+=1;goto B584ac7;
case 0x584acc:goto L584acc;
case 0x584acf:c.instructions+=4;goto B584acf;
case 0x584ad3:c.instructions+=3;goto B584ad3;
case 0x584ad6:c.instructions+=2;goto B584ad6;
case 0x584ad8:c.instructions+=1;goto B584ad8;
case 0x584ada:goto L584ada;
case 0x584adc:c.instructions+=4;goto B584adc;
case 0x584add:c.instructions+=3;goto B584add;
case 0x584ae0:c.instructions+=2;goto B584ae0;
case 0x584ae1:c.instructions+=1;goto B584ae1;
case 0x584ae6:goto L584ae6;
case 0x584ae9:c.instructions+=1;goto B584ae9;
case 0x584aeb:goto L584aeb;
case 0x584aef:goto L584aef;
case 0x584af5:c.instructions+=5;goto B584af5;
case 0x584afb:c.instructions+=4;goto B584afb;
case 0x584aff:c.instructions+=3;goto B584aff;
case 0x584b05:c.instructions+=2;goto B584b05;
case 0x584b0b:c.instructions+=1;goto B584b0b;
case 0x584b10:goto L584b10;
case 0x584b11:c.instructions+=2;goto B584b11;
case 0x584b14:c.instructions+=1;goto B584b14;
case 0x584b19:goto L584b19;
case 0x584b1a:c.instructions+=2;goto B584b1a;
case 0x584b1b:c.instructions+=1;goto B584b1b;
case 0x584b20:goto L584b20;
case 0x584b21:c.instructions+=3;goto B584b21;
case 0x584b22:c.instructions+=2;goto B584b22;
case 0x584b25:c.instructions+=1;goto B584b25;
case 0x584b2a:goto L584b2a;
case 0x584b2d:c.instructions+=4;goto B584b2d;
case 0x584b2e:c.instructions+=3;goto B584b2e;
case 0x584b30:c.instructions+=2;goto B584b30;
case 0x584b31:c.instructions+=1;goto B584b31;
case 0x584b40:goto L584b40;
case 0x584b43:c.instructions+=2;goto B584b43;
case 0x584b45:c.instructions+=1;goto B584b45;
case 0x584b47:goto L584b47;
case 0x584b48:c.instructions+=1;goto B584b48;
case 0x584b4d:goto L584b4d;
case 0x584b4e:goto L584b4e;
case 0x584b50:goto L584b50;
case 0x584b51:c.instructions+=2;goto B584b51;
case 0x584b53:c.instructions+=1;goto B584b53;
case 0x584b58:goto L584b58;
case 0x584b5a:c.instructions+=1;goto B584b5a;
case 0x584b5c:goto L584b5c;
case 0x584b60:goto L584b60;
case 0x584b63:c.instructions+=1;goto B584b63;
case 0x584b65:goto L584b65;
case 0x584b67:c.instructions+=2;goto B584b67;
case 0x584b69:c.instructions+=1;goto B584b69;
case 0x584b6b:goto L584b6b;
case 0x584b6d:c.instructions+=2;goto B584b6d;
case 0x584b6e:c.instructions+=1;goto B584b6e;
case 0x584b71:goto L584b71;
case 0x584b73:c.instructions+=2;goto B584b73;
case 0x584b74:c.instructions+=1;goto B584b74;
case 0x584b80:goto L584b80;
case 0x584b81:c.instructions+=4;goto B584b81;
case 0x584b82:c.instructions+=3;goto B584b82;
case 0x584b84:c.instructions+=2;goto B584b84;
case 0x584b85:c.instructions+=1;goto B584b85;
case 0x584b8a:goto L584b8a;
case 0x584b8c:c.instructions+=2;goto B584b8c;
case 0x584b8e:c.instructions+=1;goto B584b8e;
case 0x584b90:goto L584b90;
case 0x584b94:goto L584b94;
case 0x584b97:c.instructions+=3;goto B584b97;
case 0x584b98:c.instructions+=2;goto B584b98;
case 0x584b99:c.instructions+=1;goto B584b99;
case 0x584b9e:goto L584b9e;
case 0x584ba1:c.instructions+=2;goto B584ba1;
case 0x584ba3:c.instructions+=1;goto B584ba3;
case 0x584ba5:goto L584ba5;
case 0x584ba7:c.instructions+=2;goto B584ba7;
case 0x584ba9:c.instructions+=1;goto B584ba9;
case 0x584bab:goto L584bab;
case 0x584bac:c.instructions+=4;goto B584bac;
case 0x584bad:c.instructions+=3;goto B584bad;
case 0x584baf:c.instructions+=2;goto B584baf;
case 0x584bb0:c.instructions+=1;goto B584bb0;
case 0x584bb3:goto L584bb3;
case 0x584bb4:c.instructions+=4;goto B584bb4;
case 0x584bb6:c.instructions+=3;goto B584bb6;
case 0x584bb7:c.instructions+=2;goto B584bb7;
case 0x584bb8:c.instructions+=1;goto B584bb8;
case 0x584bc0:goto L584bc0;
case 0x584bc4:c.instructions+=5;goto B584bc4;
case 0x584bc5:c.instructions+=4;goto B584bc5;
case 0x584bc9:c.instructions+=3;goto B584bc9;
case 0x584bca:c.instructions+=2;goto B584bca;
case 0x584bcc:c.instructions+=1;goto B584bcc;
case 0x584bd1:goto L584bd1;
case 0x584bd3:c.instructions+=1;goto B584bd3;
case 0x584bd5:goto L584bd5;
case 0x584bd9:c.instructions+=4;goto B584bd9;
case 0x584bdc:c.instructions+=3;goto B584bdc;
case 0x584bdf:c.instructions+=2;goto B584bdf;
case 0x584be1:c.instructions+=1;goto B584be1;
case 0x584be3:goto L584be3;
case 0x584be5:c.instructions+=2;goto B584be5;
case 0x584be6:c.instructions+=1;goto B584be6;
case 0x584beb:goto L584beb;
case 0x584bee:c.instructions+=2;goto B584bee;
case 0x584bef:c.instructions+=1;goto B584bef;
case 0x584bf4:goto L584bf4;
case 0x584bf7:c.instructions+=3;goto B584bf7;
case 0x584bfa:c.instructions+=2;goto B584bfa;
case 0x584bfc:c.instructions+=1;goto B584bfc;
case 0x584bfe:goto L584bfe;
case 0x584c01:c.instructions+=5;goto B584c01;
case 0x584c02:c.instructions+=4;goto B584c02;
case 0x584c06:c.instructions+=3;goto B584c06;
case 0x584c0e:c.instructions+=2;goto B584c0e;
case 0x584c16:c.instructions+=1;goto B584c16;
case 0x584c18:goto L584c18;
case 0x584c19:c.instructions+=1;goto B584c19;
case 0x584c20:goto L584c20;
case 0x584c23:c.instructions+=5;goto B584c23;
case 0x584c24:c.instructions+=4;goto B584c24;
case 0x584c26:c.instructions+=3;goto B584c26;
case 0x584c2c:c.instructions+=2;goto B584c2c;
case 0x584c2e:c.instructions+=1;goto B584c2e;
case 0x584c34:goto L584c34;
case 0x584c35:c.instructions+=4;goto B584c35;
case 0x584c37:c.instructions+=3;goto B584c37;
case 0x584c38:c.instructions+=2;goto B584c38;
case 0x584c39:c.instructions+=1;goto B584c39;
case 0x584c3e:goto L584c3e;
case 0x584c3f:c.instructions+=2;goto B584c3f;
case 0x584c41:c.instructions+=1;goto B584c41;
case 0x584c46:goto L584c46;
case 0x584c47:c.instructions+=2;goto B584c47;
case 0x584c49:c.instructions+=1;goto B584c49;
case 0x584c4e:goto L584c4e;
case 0x584c4f:c.instructions+=2;goto B584c4f;
case 0x584c51:c.instructions+=1;goto B584c51;
case 0x584c56:goto L584c56;
case 0x584c57:c.instructions+=2;goto B584c57;
case 0x584c5c:c.instructions+=1;goto B584c5c;
case 0x584c61:goto L584c61;
case 0x584c67:c.instructions+=3;goto B584c67;
case 0x584c6a:c.instructions+=2;goto B584c6a;
case 0x584c6c:c.instructions+=1;goto B584c6c;
case 0x584c6e:goto L584c6e;
case 0x584c6f:c.instructions+=1;goto B584c6f;
case 0x584c74:goto L584c74;
case 0x584c77:c.instructions+=2;goto B584c77;
case 0x584c7b:c.instructions+=1;goto B584c7b;
case 0x584c7d:goto L584c7d;
case 0x584c81:goto L584c81;
case 0x584c85:c.instructions+=2;goto B584c85;
case 0x584c89:c.instructions+=1;goto B584c89;
case 0x584c8b:goto L584c8b;
case 0x584c8c:c.instructions+=2;goto B584c8c;
case 0x584c8d:c.instructions+=1;goto B584c8d;
case 0x584c90:goto L584c90;
case 0x584c96:c.instructions+=3;goto B584c96;
case 0x584c97:c.instructions+=2;goto B584c97;
case 0x584c98:c.instructions+=1;goto B584c98;
case 0x584c9d:goto L584c9d;
case 0x584c9f:c.instructions+=3;goto B584c9f;
case 0x584ca2:c.instructions+=2;goto B584ca2;
case 0x584ca4:c.instructions+=1;goto B584ca4;
case 0x584ca6:goto L584ca6;
case 0x584ca7:c.instructions+=1;goto B584ca7;
case 0x584cac:goto L584cac;
case 0x584caf:c.instructions+=2;goto B584caf;
case 0x584cb1:c.instructions+=1;goto B584cb1;
case 0x584cb3:goto L584cb3;
case 0x584cb8:c.instructions+=1;goto B584cb8;
case 0x584cba:goto L584cba;
case 0x584cbb:c.instructions+=1;goto B584cbb;
case 0x584cc0:goto L584cc0;
case 0x584cc1:c.instructions+=2;goto B584cc1;
case 0x584cc2:c.instructions+=1;goto B584cc2;
case 0x584cc7:goto L584cc7;
case 0x584ccb:c.instructions+=4;goto B584ccb;
case 0x584cce:c.instructions+=3;goto B584cce;
case 0x584ccf:c.instructions+=2;goto B584ccf;
case 0x584cd3:c.instructions+=1;goto B584cd3;
case 0x584cd6:goto L584cd6;
case 0x584cda:c.instructions+=3;goto B584cda;
case 0x584cdb:c.instructions+=2;goto B584cdb;
case 0x584cdd:c.instructions+=1;goto B584cdd;
case 0x584cdf:goto L584cdf;
case 0x584ce0:c.instructions+=2;goto B584ce0;
case 0x584ce2:c.instructions+=1;goto B584ce2;
case 0x584ce3:goto L584ce3;
case 0x584ce9:c.instructions+=2;goto B584ce9;
case 0x584cea:c.instructions+=1;goto B584cea;
case 0x584cef:goto L584cef;
case 0x584cf5:c.instructions+=4;goto B584cf5;
case 0x584cf6:c.instructions+=3;goto B584cf6;
case 0x584cf7:c.instructions+=2;goto B584cf7;
case 0x584cf8:c.instructions+=1;goto B584cf8;
case 0x584cfd:goto L584cfd;
case 0x584d03:c.instructions+=4;goto B584d03;
case 0x584d04:c.instructions+=3;goto B584d04;
case 0x584d05:c.instructions+=2;goto B584d05;
case 0x584d06:c.instructions+=1;goto B584d06;
case 0x584d0b:goto L584d0b;
case 0x584d11:c.instructions+=4;goto B584d11;
case 0x584d12:c.instructions+=3;goto B584d12;
case 0x584d13:c.instructions+=2;goto B584d13;
case 0x584d14:c.instructions+=1;goto B584d14;
case 0x584d19:goto L584d19;
case 0x584d1f:c.instructions+=4;goto B584d1f;
case 0x584d20:c.instructions+=3;goto B584d20;
case 0x584d21:c.instructions+=2;goto B584d21;
case 0x584d22:c.instructions+=1;goto B584d22;
case 0x584d27:goto L584d27;
case 0x584d2e:c.instructions+=5;goto B584d2e;
case 0x584d34:c.instructions+=4;goto B584d34;
case 0x584d3a:c.instructions+=3;goto B584d3a;
case 0x584d3d:c.instructions+=2;goto B584d3d;
case 0x584d3f:c.instructions+=1;goto B584d3f;
case 0x584d41:goto L584d41;
case 0x584d42:c.instructions+=2;goto B584d42;
case 0x584d43:c.instructions+=1;goto B584d43;
case 0x584d48:goto L584d48;
case 0x584d4e:c.instructions+=2;goto B584d4e;
case 0x584d4f:c.instructions+=1;goto B584d4f;
case 0x584d54:goto L584d54;
case 0x584d57:goto L584d57;
case 0x584d5d:c.instructions+=3;goto B584d5d;
case 0x584d5e:c.instructions+=2;goto B584d5e;
case 0x584d64:c.instructions+=1;goto B584d64;
case 0x584d69:goto L584d69;
case 0x584d6c:c.instructions+=2;goto B584d6c;
case 0x584d73:c.instructions+=1;goto B584d73;
case 0x584d74:goto L584d74;
case 0x584d75:c.instructions+=2;goto B584d75;
case 0x584d78:c.instructions+=1;goto B584d78;
case 0x584d80:goto L584d80;
case 0x584d81:c.instructions+=8;goto B584d81;
case 0x584d82:c.instructions+=7;goto B584d82;
case 0x584d83:c.instructions+=6;goto B584d83;
case 0x584d85:c.instructions+=5;goto B584d85;
case 0x584d8b:c.instructions+=4;goto B584d8b;
case 0x584d8d:c.instructions+=3;goto B584d8d;
case 0x584d8f:c.instructions+=2;goto B584d8f;
case 0x584d95:c.instructions+=1;goto B584d95;
case 0x584d9b:goto L584d9b;
case 0x584d9c:c.instructions+=4;goto B584d9c;
case 0x584da2:c.instructions+=3;goto B584da2;
case 0x584da3:c.instructions+=2;goto B584da3;
case 0x584da9:c.instructions+=1;goto B584da9;
case 0x584dae:goto L584dae;
case 0x584daf:c.instructions+=2;goto B584daf;
case 0x584db1:c.instructions+=1;goto B584db1;
case 0x584db6:goto L584db6;
case 0x584db7:c.instructions+=2;goto B584db7;
case 0x584db9:c.instructions+=1;goto B584db9;
case 0x584dbe:goto L584dbe;
case 0x584dbf:c.instructions+=2;goto B584dbf;
case 0x584dc1:c.instructions+=1;goto B584dc1;
case 0x584dc6:goto L584dc6;
case 0x584dc7:c.instructions+=2;goto B584dc7;
case 0x584dcc:c.instructions+=1;goto B584dcc;
case 0x584dd1:goto L584dd1;
case 0x584dd7:c.instructions+=3;goto B584dd7;
case 0x584dda:c.instructions+=2;goto B584dda;
case 0x584ddc:c.instructions+=1;goto B584ddc;
case 0x584dde:goto L584dde;
case 0x584ddf:c.instructions+=1;goto B584ddf;
case 0x584de4:goto L584de4;
case 0x584de7:c.instructions+=2;goto B584de7;
case 0x584deb:c.instructions+=1;goto B584deb;
case 0x584ded:goto L584ded;
case 0x584df1:goto L584df1;
case 0x584df5:c.instructions+=5;goto B584df5;
case 0x584df6:c.instructions+=4;goto B584df6;
case 0x584df8:c.instructions+=3;goto B584df8;
case 0x584dfa:c.instructions+=2;goto B584dfa;
case 0x584dfb:c.instructions+=1;goto B584dfb;
case 0x584dfd:goto L584dfd;
case 0x584e00:goto L584e00;
case 0x584e06:c.instructions+=3;goto B584e06;
case 0x584e07:c.instructions+=2;goto B584e07;
case 0x584e08:c.instructions+=1;goto B584e08;
case 0x584e0d:goto L584e0d;
case 0x584e0f:c.instructions+=3;goto B584e0f;
case 0x584e12:c.instructions+=2;goto B584e12;
case 0x584e14:c.instructions+=1;goto B584e14;
case 0x584e16:goto L584e16;
case 0x584e17:c.instructions+=1;goto B584e17;
case 0x584e1c:goto L584e1c;
case 0x584e1f:c.instructions+=2;goto B584e1f;
case 0x584e24:c.instructions+=1;goto B584e24;
case 0x584e26:goto L584e26;
case 0x584e27:c.instructions+=4;goto B584e27;
case 0x584e28:c.instructions+=3;goto B584e28;
case 0x584e2a:c.instructions+=2;goto B584e2a;
case 0x584e2b:c.instructions+=1;goto B584e2b;
case 0x584e30:goto L584e30;
case 0x584e36:c.instructions+=4;goto B584e36;
case 0x584e39:c.instructions+=3;goto B584e39;
case 0x584e3a:c.instructions+=2;goto B584e3a;
case 0x584e3b:c.instructions+=1;goto B584e3b;
case 0x584e40:goto L584e40;
case 0x584e43:goto L584e43;
case 0x584e47:c.instructions+=3;goto B584e47;
case 0x584e48:c.instructions+=2;goto B584e48;
case 0x584e4a:c.instructions+=1;goto B584e4a;
case 0x584e4c:goto L584e4c;
case 0x584e52:c.instructions+=2;goto B584e52;
case 0x584e54:c.instructions+=1;goto B584e54;
case 0x584e56:goto L584e56;
case 0x584e57:c.instructions+=2;goto B584e57;
case 0x584e5d:c.instructions+=1;goto B584e5d;
case 0x584e62:goto L584e62;
case 0x584e65:goto L584e65;
case 0x584e6b:c.instructions+=4;goto B584e6b;
case 0x584e6c:c.instructions+=3;goto B584e6c;
case 0x584e6d:c.instructions+=2;goto B584e6d;
case 0x584e6e:c.instructions+=1;goto B584e6e;
case 0x584e73:goto L584e73;
case 0x584e79:c.instructions+=4;goto B584e79;
case 0x584e7a:c.instructions+=3;goto B584e7a;
case 0x584e7b:c.instructions+=2;goto B584e7b;
case 0x584e7c:c.instructions+=1;goto B584e7c;
case 0x584e81:goto L584e81;
case 0x584e87:c.instructions+=4;goto B584e87;
case 0x584e88:c.instructions+=3;goto B584e88;
case 0x584e89:c.instructions+=2;goto B584e89;
case 0x584e8a:c.instructions+=1;goto B584e8a;
case 0x584e8f:goto L584e8f;
case 0x584e95:c.instructions+=2;goto B584e95;
case 0x584e96:c.instructions+=1;goto B584e96;
case 0x584e9b:goto L584e9b;
case 0x584ea1:c.instructions+=2;goto B584ea1;
case 0x584ea2:c.instructions+=1;goto B584ea2;
case 0x584ea7:goto L584ea7;
case 0x584ead:c.instructions+=9;goto B584ead;
case 0x584eb3:c.instructions+=8;goto B584eb3;
case 0x584eb9:c.instructions+=7;goto B584eb9;
case 0x584ebf:c.instructions+=6;goto B584ebf;
case 0x584ec5:c.instructions+=5;goto B584ec5;
case 0x584ecb:c.instructions+=4;goto B584ecb;
case 0x584ed1:c.instructions+=3;goto B584ed1;
case 0x584ed4:c.instructions+=2;goto B584ed4;
case 0x584ed6:c.instructions+=1;goto B584ed6;
case 0x584ed8:goto L584ed8;
case 0x584ed9:c.instructions+=2;goto B584ed9;
case 0x584eda:c.instructions+=1;goto B584eda;
case 0x584edf:goto L584edf;
case 0x584ee5:c.instructions+=2;goto B584ee5;
case 0x584ee6:c.instructions+=1;goto B584ee6;
case 0x584eeb:goto L584eeb;
case 0x584eee:goto L584eee;
case 0x584ef3:c.instructions+=3;goto B584ef3;
case 0x584ef5:c.instructions+=2;goto B584ef5;
case 0x584ef8:c.instructions+=1;goto B584ef8;
case 0x584efe:goto L584efe;
case 0x584f00:goto L584f00;
case 0x584f01:c.instructions+=1;goto B584f01;
case 0x584f02:goto L584f02;
case 0x584f03:c.instructions+=3;goto B584f03;
case 0x584f04:c.instructions+=2;goto B584f04;
case 0x584f05:c.instructions+=1;goto B584f05;
case 0x584f10:goto L584f10;
case 0x584f16:c.instructions+=2;goto B584f16;
case 0x584f18:c.instructions+=1;goto B584f18;
case 0x584f1a:goto L584f1a;
case 0x584f24:c.instructions+=3;goto B584f24;
case 0x584f2a:c.instructions+=2;goto B584f2a;
case 0x584f2b:c.instructions+=1;goto B584f2b;
case 0x584f30:goto L584f30;
case 0x584f33:c.instructions+=1;goto B584f33;
case 0x584f3d:goto L584f3d;
case 0x584f40:goto L584f40;
case 0x584f43:c.instructions+=8;goto B584f43;
case 0x584f44:c.instructions+=7;goto B584f44;
case 0x584f45:c.instructions+=6;goto B584f45;
case 0x584f47:c.instructions+=5;goto B584f47;
case 0x584f4d:c.instructions+=4;goto B584f4d;
case 0x584f4e:c.instructions+=3;goto B584f4e;
case 0x584f50:c.instructions+=2;goto B584f50;
case 0x584f52:c.instructions+=1;goto B584f52;
case 0x584f54:goto L584f54;
case 0x584f55:c.instructions+=1;goto B584f55;
case 0x584f5a:goto L584f5a;
case 0x584f5d:c.instructions+=2;goto B584f5d;
case 0x584f61:c.instructions+=1;goto B584f61;
case 0x584f63:goto L584f63;
case 0x584f67:goto L584f67;
case 0x584f6b:c.instructions+=4;goto B584f6b;
case 0x584f6d:c.instructions+=3;goto B584f6d;
case 0x584f6f:c.instructions+=2;goto B584f6f;
case 0x584f73:c.instructions+=1;goto B584f73;
case 0x584f79:goto L584f79;
case 0x584f7a:c.instructions+=1;goto B584f7a;
case 0x584f80:goto L584f80;
case 0x584f86:c.instructions+=3;goto B584f86;
case 0x584f87:c.instructions+=2;goto B584f87;
case 0x584f88:c.instructions+=1;goto B584f88;
case 0x584f8d:goto L584f8d;
case 0x584f8f:c.instructions+=3;goto B584f8f;
case 0x584f92:c.instructions+=2;goto B584f92;
case 0x584f94:c.instructions+=1;goto B584f94;
case 0x584f96:goto L584f96;
case 0x584f97:c.instructions+=1;goto B584f97;
case 0x584f9c:goto L584f9c;
case 0x584f9f:c.instructions+=2;goto B584f9f;
case 0x584fa1:c.instructions+=1;goto B584fa1;
case 0x584fa3:goto L584fa3;
case 0x584fa4:c.instructions+=1;goto B584fa4;
case 0x584fa9:goto L584fa9;
case 0x584fac:c.instructions+=2;goto B584fac;
case 0x584fae:c.instructions+=1;goto B584fae;
case 0x584fb0:goto L584fb0;
case 0x584fb1:c.instructions+=1;goto B584fb1;
case 0x584fb6:goto L584fb6;
case 0x584fb9:c.instructions+=2;goto B584fb9;
case 0x584fbb:c.instructions+=1;goto B584fbb;
case 0x584fbd:goto L584fbd;
case 0x584fbf:c.instructions+=3;goto B584fbf;
case 0x584fc0:c.instructions+=2;goto B584fc0;
case 0x584fc2:c.instructions+=1;goto B584fc2;
case 0x584fc7:goto L584fc7;
case 0x584fcd:c.instructions+=4;goto B584fcd;
case 0x584fd0:c.instructions+=3;goto B584fd0;
case 0x584fd1:c.instructions+=2;goto B584fd1;
case 0x584fd2:c.instructions+=1;goto B584fd2;
case 0x584fd7:goto L584fd7;
case 0x584fda:goto L584fda;
case 0x584fde:c.instructions+=3;goto B584fde;
case 0x584fdf:c.instructions+=2;goto B584fdf;
case 0x584fe1:c.instructions+=1;goto B584fe1;
case 0x584fe3:goto L584fe3;
case 0x584fe5:c.instructions+=3;goto B584fe5;
case 0x584fe9:c.instructions+=2;goto B584fe9;
case 0x584fea:c.instructions+=1;goto B584fea;
case 0x584fec:goto L584fec;
case 0x584ff1:c.instructions+=1;goto B584ff1;
case 0x584ff6:goto L584ff6;
case 0x584ff9:c.instructions+=2;goto B584ff9;
case 0x584ffb:c.instructions+=1;goto B584ffb;
case 0x584ffd:goto L584ffd;
case 0x584fff:c.instructions+=1;goto B584fff;
default:missing_instruction(c.pc);}
B584000:L584000:{c.instructions+=5;NFSU2_TR(0x584000);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+4,u32(r1(U+8)));
}
B584004:{NFSU2_TR(0x584004);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584006:{NFSU2_TR(0x584006);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584007:{NFSU2_TR(0x584007);
__builtin_memmove((R+4),(R+28),4);
}
B584009:{NFSU2_TR(0x584009);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58400eull));
TAIL_STATIC(0x581d00u,581);
}
B58400e:L58400e:{c.instructions+=3;NFSU2_TR(0x58400e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B58400f:{NFSU2_TR(0x58400f);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B584011:{NFSU2_TR(0x584011);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x584000u);}goto L584000;}}
}
B584013:L584013:{c.instructions+=5;NFSU2_TR(0x584013);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B584014:{NFSU2_TR(0x584014);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B584015:{NFSU2_TR(0x584015);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B584016:{NFSU2_TR(0x584016);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B584017:{NFSU2_TR(0x584017);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B584020:L584020:{c.instructions+=11;NFSU2_TR(0x584020);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584021:{NFSU2_TR(0x584021);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584022:{NFSU2_TR(0x584022);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584023:{NFSU2_TR(0x584023);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584024:{NFSU2_TR(0x584024);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584026:{NFSU2_TR(0x584026);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B58402a:{NFSU2_TR(0x58402a);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B58402c:{NFSU2_TR(0x58402c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58402d:{NFSU2_TR(0x58402d);
__builtin_memmove((R+12),(R+4),4);
}
B58402f:{NFSU2_TR(0x58402f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B584033:{NFSU2_TR(0x584033);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584038ull));
TAIL_STATIC(0x581d90u,581);
}
B584038:L584038:{c.instructions+=3;NFSU2_TR(0x584038);
u8 U[6];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B58403d:{NFSU2_TR(0x58403d);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B58403f:{NFSU2_TR(0x58403f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L584069;}}
}
B584041:L584041:{c.instructions+=2;NFSU2_TR(0x584041);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584042:{NFSU2_TR(0x584042);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B584046:L584046:{c.instructions+=6;NFSU2_TR(0x584046);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584048:{NFSU2_TR(0x584048);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58404c:{NFSU2_TR(0x58404c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58404d:{NFSU2_TR(0x58404d);
__builtin_memmove((R+4),(R+12),4);
}
B58404f:{NFSU2_TR(0x58404f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B584057:{NFSU2_TR(0x584057);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58405cull));
TAIL_STATIC(0x581d90u,581);
}
B58405c:L58405c:{c.instructions+=5;NFSU2_TR(0x58405c);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B584060:{NFSU2_TR(0x584060);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B584063:{NFSU2_TR(0x584063);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B584064:{NFSU2_TR(0x584064);
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
B584066:{NFSU2_TR(0x584066);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x584046u);}goto L584046;}}
}
B584068:L584068:{c.instructions+=1;NFSU2_TR(0x584068);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B584069:L584069:{c.instructions+=6;NFSU2_TR(0x584069);
__builtin_memmove((R+0),(R+28),4);
}
B58406b:{NFSU2_TR(0x58406b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58406c:{NFSU2_TR(0x58406c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58406d:{NFSU2_TR(0x58406d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58406e:{NFSU2_TR(0x58406e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B58406f:{NFSU2_TR(0x58406f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B584080:L584080:{c.instructions+=6;NFSU2_TR(0x584080);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584081:{NFSU2_TR(0x584081);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584082:{NFSU2_TR(0x584082);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B584086:{NFSU2_TR(0x584086);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584087:{NFSU2_TR(0x584087);
__builtin_memmove((R+24),(R+4),4);
}
B584089:{NFSU2_TR(0x584089);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58408eull));
TAIL_STATIC(0x43dbb0u,43d);
}
B58408e:L58408e:{c.instructions+=5;NFSU2_TR(0x58408e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B584091:{NFSU2_TR(0x584091);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584092:{NFSU2_TR(0x584092);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584093:{NFSU2_TR(0x584093);
__builtin_memmove((R+4),(R+24),4);
}
B584095:{NFSU2_TR(0x584095);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58409aull));
TAIL_STATIC(0x583fe0u,583);
}
B58409a:L58409a:{c.instructions+=3;NFSU2_TR(0x58409a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58409b:{NFSU2_TR(0x58409b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58409c:{NFSU2_TR(0x58409c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5840a0:L5840a0:{c.instructions+=6;NFSU2_TR(0x5840a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5840a4:{NFSU2_TR(0x5840a4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5840a5:{NFSU2_TR(0x5840a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5840a9:{NFSU2_TR(0x5840a9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5840aa:{NFSU2_TR(0x5840aa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5840ab:{NFSU2_TR(0x5840ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5840b0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x584020u);}goto L584020;}
}
B5840b0:L5840b0:{c.instructions+=3;NFSU2_TR(0x5840b0);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
w1(U+8,u8(0x0ull));
s1(u32(r4(U+4)),r1(U+8));
}
B5840b4:{NFSU2_TR(0x5840b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5840b5:{NFSU2_TR(0x5840b5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5840c0:L5840c0:{c.instructions+=8;NFSU2_TR(0x5840c0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5840c1:{NFSU2_TR(0x5840c1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5840c5:{NFSU2_TR(0x5840c5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5840c6:{NFSU2_TR(0x5840c6);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5840c8:{NFSU2_TR(0x5840c8);
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
B5840ca:{NFSU2_TR(0x5840ca);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5840cb:{NFSU2_TR(0x5840cb);
__builtin_memmove((R+28),(R+4),4);
}
B5840cd:{NFSU2_TR(0x5840cd);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5840e8;}}
}
B5840cf:L5840cf:{c.instructions+=2;NFSU2_TR(0x5840cf);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5840d0:{NFSU2_TR(0x5840d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5840d4:L5840d4:{c.instructions+=5;NFSU2_TR(0x5840d4);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(r1(U+8)));
}
B5840d8:{NFSU2_TR(0x5840d8);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5840da:{NFSU2_TR(0x5840da);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5840db:{NFSU2_TR(0x5840db);
__builtin_memmove((R+4),(R+28),4);
}
B5840dd:{NFSU2_TR(0x5840dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5840e2ull));
TAIL_STATIC(0x581d00u,581);
}
B5840e2:L5840e2:{c.instructions+=3;NFSU2_TR(0x5840e2);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5840e3:{NFSU2_TR(0x5840e3);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B5840e5:{NFSU2_TR(0x5840e5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5840d4u);}goto L5840d4;}}
}
B5840e7:L5840e7:{c.instructions+=1;NFSU2_TR(0x5840e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5840e8:L5840e8:{c.instructions+=4;NFSU2_TR(0x5840e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5840e9:{NFSU2_TR(0x5840e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5840ea:{NFSU2_TR(0x5840ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5840eb:{NFSU2_TR(0x5840eb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5840f0:L5840f0:{c.instructions+=8;NFSU2_TR(0x5840f0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5840f1:{NFSU2_TR(0x5840f1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5840f2:{NFSU2_TR(0x5840f2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5840f3:{NFSU2_TR(0x5840f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5840f7:{NFSU2_TR(0x5840f7);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5840f9:{NFSU2_TR(0x5840f9);
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
B5840fb:{NFSU2_TR(0x5840fb);
__builtin_memmove((R+12),(R+4),4);
}
B5840fd:{NFSU2_TR(0x5840fd);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L584127;}}
}
B5840ff:L5840ff:{c.instructions+=2;NFSU2_TR(0x5840ff);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584100:{NFSU2_TR(0x584100);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B584104:L584104:{c.instructions+=6;NFSU2_TR(0x584104);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584106:{NFSU2_TR(0x584106);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B58410a:{NFSU2_TR(0x58410a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58410b:{NFSU2_TR(0x58410b);
__builtin_memmove((R+4),(R+12),4);
}
B58410d:{NFSU2_TR(0x58410d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B584115:{NFSU2_TR(0x584115);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58411aull));
TAIL_STATIC(0x581d90u,581);
}
B58411a:L58411a:{c.instructions+=5;NFSU2_TR(0x58411a);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B58411e:{NFSU2_TR(0x58411e);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B584121:{NFSU2_TR(0x584121);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B584122:{NFSU2_TR(0x584122);
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
B584124:{NFSU2_TR(0x584124);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x584104u);}goto L584104;}}
}
B584126:L584126:{c.instructions+=1;NFSU2_TR(0x584126);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B584127:L584127:{c.instructions+=5;NFSU2_TR(0x584127);
__builtin_memmove((R+0),(R+28),4);
}
B584129:{NFSU2_TR(0x584129);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58412a:{NFSU2_TR(0x58412a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58412b:{NFSU2_TR(0x58412b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58412c:{NFSU2_TR(0x58412c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B584130:L584130:{c.instructions+=4;NFSU2_TR(0x584130);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B584134:{NFSU2_TR(0x584134);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584136:{NFSU2_TR(0x584136);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584137:{NFSU2_TR(0x584137);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58413cull));
TAIL_STATIC(0x581d00u,581);
}
B58413c:L58413c:{c.instructions+=1;NFSU2_TR(0x58413c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B584140:L584140:{c.instructions+=3;NFSU2_TR(0x584140);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B584143:{NFSU2_TR(0x584143);
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
B584145:{NFSU2_TR(0x584145);
if(r1(R+518)){{goto L58414e;}}
}
B584147:L584147:{c.instructions+=2;NFSU2_TR(0x584147);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584148:{NFSU2_TR(0x584148);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58414dull));
TAIL_STATIC(0x575630u,575);
}
B58414d:L58414d:{c.instructions+=1;NFSU2_TR(0x58414d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B58414e:L58414e:{c.instructions+=1;NFSU2_TR(0x58414e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B584150:L584150:{c.instructions+=6;NFSU2_TR(0x584150);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B584154:{NFSU2_TR(0x584154);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xffffffffull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B584157:{NFSU2_TR(0x584157);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584158:{NFSU2_TR(0x584158);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584159:{NFSU2_TR(0x584159);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58415a:{NFSU2_TR(0x58415a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5841b2;}}
}
B58415c:L58415c:{c.instructions+=2;NFSU2_TR(0x58415c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B58415f:{NFSU2_TR(0x58415f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5841b2;}}
}
B584161:L584161:{c.instructions+=3;NFSU2_TR(0x584161);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B584165:{NFSU2_TR(0x584165);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B584167:{NFSU2_TR(0x584167);
if(r1(R+518)){{goto L5841b2;}}
}
B584169:L584169:{c.instructions+=5;NFSU2_TR(0x584169);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B58416d:{NFSU2_TR(0x58416d);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B584171:{NFSU2_TR(0x584171);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B584173:{NFSU2_TR(0x584173);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B584175:{NFSU2_TR(0x584175);
if(r1(R+518)){{goto L584187;}}
}
B584177:L584177:{c.instructions+=2;NFSU2_TR(0x584177);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B58417a:{NFSU2_TR(0x58417a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L584181;}}
}
B58417c:L58417c:{c.instructions+=2;NFSU2_TR(0x58417c);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B58417f:{NFSU2_TR(0x58417f);
if(r1(R+518)){{goto L5841aa;}}
}
B584181:L584181:{c.instructions+=3;NFSU2_TR(0x584181);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B584183:{NFSU2_TR(0x584183);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B584185:{NFSU2_TR(0x584185);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x584177u);}goto L584177;}}
}
B584187:L584187:{c.instructions+=3;NFSU2_TR(0x584187);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584189:{NFSU2_TR(0x584189);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58418b:{NFSU2_TR(0x58418b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584190ull));
TAIL_STATIC(0x6d7110u,6d7);
}
B584190:L584190:{c.instructions+=3;NFSU2_TR(0x584190);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B584193:{NFSU2_TR(0x584193);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B584195:{NFSU2_TR(0x584195);
if(r1(R+518)){{goto L5841b2;}}
}
B584197:L584197:{c.instructions+=7;NFSU2_TR(0x584197);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58419a:{NFSU2_TR(0x58419a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58419d:{NFSU2_TR(0x58419d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5841a0:{NFSU2_TR(0x5841a0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5841a2:{NFSU2_TR(0x5841a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5841a5:{NFSU2_TR(0x5841a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5841a8:{NFSU2_TR(0x5841a8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5841aa:L5841aa:{c.instructions+=5;NFSU2_TR(0x5841aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5841ab:{NFSU2_TR(0x5841ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5841ac:{NFSU2_TR(0x5841ac);
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
B5841ae:{NFSU2_TR(0x5841ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5841af:{NFSU2_TR(0x5841af);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5841b2:L5841b2:{c.instructions+=5;NFSU2_TR(0x5841b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5841b3:{NFSU2_TR(0x5841b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5841b4:{NFSU2_TR(0x5841b4);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5841b7:{NFSU2_TR(0x5841b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5841b8:{NFSU2_TR(0x5841b8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5841c0:L5841c0:{c.instructions+=4;NFSU2_TR(0x5841c0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5841c1:{NFSU2_TR(0x5841c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5841c5:{NFSU2_TR(0x5841c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5841c7:{NFSU2_TR(0x5841c7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5841d0;}}
}
B5841c9:L5841c9:{c.instructions+=3;NFSU2_TR(0x5841c9);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5841cc:{NFSU2_TR(0x5841cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5841cd:{NFSU2_TR(0x5841cd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5841d0:L5841d0:{c.instructions+=7;NFSU2_TR(0x5841d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5841d3:{NFSU2_TR(0x5841d3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5841d4:{NFSU2_TR(0x5841d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5841d8:{NFSU2_TR(0x5841d8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5841d9:{NFSU2_TR(0x5841d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5841dc:{NFSU2_TR(0x5841dc);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5841de:{NFSU2_TR(0x5841de);
if(r1(R+518)){{goto L5841f0;}}
}
B5841e0:L5841e0:{c.instructions+=2;NFSU2_TR(0x5841e0);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5841e3:{NFSU2_TR(0x5841e3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5841ea;}}
}
B5841e5:L5841e5:{c.instructions+=2;NFSU2_TR(0x5841e5);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5841e8:{NFSU2_TR(0x5841e8);
if(r1(R+518)){{goto L584213;}}
}
B5841ea:L5841ea:{c.instructions+=3;NFSU2_TR(0x5841ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5841ec:{NFSU2_TR(0x5841ec);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5841ee:{NFSU2_TR(0x5841ee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5841e0u);}goto L5841e0;}}
}
B5841f0:L5841f0:{c.instructions+=3;NFSU2_TR(0x5841f0);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5841f2:{NFSU2_TR(0x5841f2);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5841f4:{NFSU2_TR(0x5841f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5841f9ull));
TAIL_STATIC(0x6d7110u,6d7);
}
B5841f9:L5841f9:{c.instructions+=3;NFSU2_TR(0x5841f9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5841fc:{NFSU2_TR(0x5841fc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5841fe:{NFSU2_TR(0x5841fe);
if(r1(R+518)){{goto L58421b;}}
}
B584200:L584200:{c.instructions+=7;NFSU2_TR(0x584200);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B584203:{NFSU2_TR(0x584203);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B584206:{NFSU2_TR(0x584206);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B584209:{NFSU2_TR(0x584209);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B58420b:{NFSU2_TR(0x58420b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58420e:{NFSU2_TR(0x58420e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B584211:{NFSU2_TR(0x584211);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B584213:L584213:{c.instructions+=5;NFSU2_TR(0x584213);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B584214:{NFSU2_TR(0x584214);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B584215:{NFSU2_TR(0x584215);
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
B584217:{NFSU2_TR(0x584217);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B584218:{NFSU2_TR(0x584218);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58421b:L58421b:{c.instructions+=5;NFSU2_TR(0x58421b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58421c:{NFSU2_TR(0x58421c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58421d:{NFSU2_TR(0x58421d);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B584220:{NFSU2_TR(0x584220);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B584221:{NFSU2_TR(0x584221);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B584230:L584230:{c.instructions+=4;NFSU2_TR(0x584230);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B584233:{NFSU2_TR(0x584233);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x34ull))));
}
B584236:{NFSU2_TR(0x584236);
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
B584238:{NFSU2_TR(0x584238);
if(r1(R+518)){{goto L58426b;}}
}
B58423a:L58423a:{c.instructions+=3;NFSU2_TR(0x58423a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58423e:{NFSU2_TR(0x58423e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58423f:{NFSU2_TR(0x58423f);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B584243:L584243:{c.instructions+=2;NFSU2_TR(0x584243);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B584246:{NFSU2_TR(0x584246);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58424d;}}
}
B584248:L584248:{c.instructions+=2;NFSU2_TR(0x584248);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B58424b:{NFSU2_TR(0x58424b);
if(r1(R+518)){{goto L584257;}}
}
B58424d:L58424d:{c.instructions+=3;NFSU2_TR(0x58424d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B58424f:{NFSU2_TR(0x58424f);
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
B584251:{NFSU2_TR(0x584251);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x584243u);}goto L584243;}}
}
B584253:L584253:{c.instructions+=2;NFSU2_TR(0x584253);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B584254:{NFSU2_TR(0x584254);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B584257:L584257:{c.instructions+=6;NFSU2_TR(0x584257);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B584259:{NFSU2_TR(0x584259);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58425c:{NFSU2_TR(0x58425c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B58425e:{NFSU2_TR(0x58425e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58425f:{NFSU2_TR(0x58425f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B584262:{NFSU2_TR(0x584262);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584267ull));
TAIL_STATIC(0x575630u,575);
}
B584267:L584267:{c.instructions+=2;NFSU2_TR(0x584267);
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
B58426a:{NFSU2_TR(0x58426a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58426b:L58426b:{c.instructions+=1;NFSU2_TR(0x58426b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B584270:L584270:{c.instructions+=7;NFSU2_TR(0x584270);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584271:{NFSU2_TR(0x584271);
__builtin_memmove((R+24),(R+4),4);
}
B584273:{NFSU2_TR(0x584273);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B584277:{NFSU2_TR(0x584277);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B584279:{NFSU2_TR(0x584279);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58427c:{NFSU2_TR(0x58427c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58427d:{NFSU2_TR(0x58427d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5842bf;}}
}
B58427f:L58427f:{c.instructions+=2;NFSU2_TR(0x58427f);
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
B584281:{NFSU2_TR(0x584281);
if(r1(R+518)){{goto L584341;}}
}
B584287:L584287:{c.instructions+=3;NFSU2_TR(0x584287);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58428a:{NFSU2_TR(0x58428a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58428d:{NFSU2_TR(0x58428d);
if(r1(R+518)){{goto L58429c;}}
}
B58428f:L58428f:{c.instructions+=4;NFSU2_TR(0x58428f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584290:{NFSU2_TR(0x584290);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B584293:{NFSU2_TR(0x584293);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584294:{NFSU2_TR(0x584294);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584299ull));
TAIL_STATIC(0x7451f0u,745);
}
B584299:L584299:{c.instructions+=1;NFSU2_TR(0x584299);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58429c:L58429c:{c.instructions+=3;NFSU2_TR(0x58429c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B58429f:{NFSU2_TR(0x58429f);
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
B5842a1:{NFSU2_TR(0x5842a1);
if(r1(R+518)){{goto L5842b3;}}
}
B5842a3:L5842a3:{c.instructions+=2;NFSU2_TR(0x5842a3);
__builtin_memmove((R+4),(R+28),4);
}
B5842a5:{NFSU2_TR(0x5842a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5842aaull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x584140u);}goto L584140;}
}
B5842aa:L5842aa:{c.instructions+=2;NFSU2_TR(0x5842aa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5842ab:{NFSU2_TR(0x5842ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5842b0ull));
TAIL_STATIC(0x575630u,575);
}
B5842b0:L5842b0:{c.instructions+=1;NFSU2_TR(0x5842b0);
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
B5842b3:L5842b3:{c.instructions+=4;NFSU2_TR(0x5842b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5842b4:{NFSU2_TR(0x5842b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5842bb:{NFSU2_TR(0x5842bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5842bc:{NFSU2_TR(0x5842bc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5842bf:L5842bf:{c.instructions+=5;NFSU2_TR(0x5842bf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5842c1:{NFSU2_TR(0x5842c1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5842c2:{NFSU2_TR(0x5842c2);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B5842c6:{NFSU2_TR(0x5842c6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5842c7:{NFSU2_TR(0x5842c7);
if(r1(R+518)){{goto L584305;}}
}
B5842c9:L5842c9:{c.instructions+=2;NFSU2_TR(0x5842c9);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5842cc:{NFSU2_TR(0x5842cc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L584305;}}
}
B5842ce:L5842ce:{c.instructions+=3;NFSU2_TR(0x5842ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5842d1:{NFSU2_TR(0x5842d1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5842d4:{NFSU2_TR(0x5842d4);
if(r1(R+518)){{goto L5842e3;}}
}
B5842d6:L5842d6:{c.instructions+=4;NFSU2_TR(0x5842d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5842d9:{NFSU2_TR(0x5842d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5842da:{NFSU2_TR(0x5842da);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5842db:{NFSU2_TR(0x5842db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5842e0ull));
TAIL_STATIC(0x7451f0u,745);
}
B5842e0:L5842e0:{c.instructions+=1;NFSU2_TR(0x5842e0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5842e3:L5842e3:{c.instructions+=3;NFSU2_TR(0x5842e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5842e6:{NFSU2_TR(0x5842e6);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5842e8:{NFSU2_TR(0x5842e8);
if(r1(R+518)){{goto L5842fa;}}
}
B5842ea:L5842ea:{c.instructions+=2;NFSU2_TR(0x5842ea);
__builtin_memmove((R+4),(R+28),4);
}
B5842ec:{NFSU2_TR(0x5842ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5842f1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x584140u);}goto L584140;}
}
B5842f1:L5842f1:{c.instructions+=2;NFSU2_TR(0x5842f1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5842f2:{NFSU2_TR(0x5842f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5842f7ull));
TAIL_STATIC(0x575630u,575);
}
B5842f7:L5842f7:{c.instructions+=1;NFSU2_TR(0x5842f7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5842fa:L5842fa:{c.instructions+=3;NFSU2_TR(0x5842fa);
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
B5842fc:{NFSU2_TR(0x5842fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B584303:{NFSU2_TR(0x584303);
if(r1(R+518)){{goto L58433f;}}
}
B584305:L584305:{c.instructions+=4;NFSU2_TR(0x584305);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((R+20),(U+0),4);
}
B584308:{NFSU2_TR(0x584308);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+24),(U+0),4);
}
B58430b:{NFSU2_TR(0x58430b);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B58430d:{NFSU2_TR(0x58430d);
if(r1(R+518)){{goto L58433f;}}
}
B58430f:L58430f:{c.instructions+=1;NFSU2_TR(0x58430f);
}
B584310:L584310:{c.instructions+=3;NFSU2_TR(0x584310);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B584314:{NFSU2_TR(0x584314);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B584317:{NFSU2_TR(0x584317);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L584339;}}
}
B584319:L584319:{c.instructions+=6;NFSU2_TR(0x584319);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B58431c:{NFSU2_TR(0x58431c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B58431e:{NFSU2_TR(0x58431e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B584320:{NFSU2_TR(0x584320);
__builtin_memmove((R+4),(R+24),4);
}
B584322:{NFSU2_TR(0x584322);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B584325:{NFSU2_TR(0x584325);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58432aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x584140u);}goto L584140;}
}
B58432a:L58432a:{c.instructions+=2;NFSU2_TR(0x58432a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58432b:{NFSU2_TR(0x58432b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584330ull));
TAIL_STATIC(0x575630u,575);
}
B584330:L584330:{c.instructions+=4;NFSU2_TR(0x584330);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B584333:{NFSU2_TR(0x584333);
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
B584335:{NFSU2_TR(0x584335);
__builtin_memmove((R+24),(R+28),4);
}
B584337:{NFSU2_TR(0x584337);
if(r1(R+518)){{goto L58433f;}}
}
B584339:L584339:{c.instructions+=3;NFSU2_TR(0x584339);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B58433b:{NFSU2_TR(0x58433b);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B58433d:{NFSU2_TR(0x58433d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x584310u);}goto L584310;}}
}
B58433f:L58433f:{c.instructions+=2;NFSU2_TR(0x58433f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B584340:{NFSU2_TR(0x584340);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B584341:L584341:{c.instructions+=3;NFSU2_TR(0x584341);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B584342:{NFSU2_TR(0x584342);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B584343:{NFSU2_TR(0x584343);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B584350:L584350:{c.instructions+=5;NFSU2_TR(0x584350);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584351:{NFSU2_TR(0x584351);
__builtin_memmove((R+28),(R+4),4);
}
B584353:{NFSU2_TR(0x584353);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B584356:{NFSU2_TR(0x584356);
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
B584358:{NFSU2_TR(0x584358);
if(r1(R+518)){{goto L58438f;}}
}
B58435a:L58435a:{c.instructions+=3;NFSU2_TR(0x58435a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58435d:{NFSU2_TR(0x58435d);
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
B58435f:{NFSU2_TR(0x58435f);
if(r1(R+518)){{goto L58436f;}}
}
B584361:L584361:{c.instructions+=5;NFSU2_TR(0x584361);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B584364:{NFSU2_TR(0x584364);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B584368:{NFSU2_TR(0x584368);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584369:{NFSU2_TR(0x584369);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58436a:{NFSU2_TR(0x58436a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58436cull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B58436c:L58436c:{c.instructions+=1;NFSU2_TR(0x58436c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58436f:L58436f:{c.instructions+=4;NFSU2_TR(0x58436f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584370:{NFSU2_TR(0x584370);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B584373:{NFSU2_TR(0x584373);
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
B584375:{NFSU2_TR(0x584375);
if(r1(R+518)){{goto L584387;}}
}
B584377:L584377:{c.instructions+=2;NFSU2_TR(0x584377);
__builtin_memmove((R+4),(R+24),4);
}
B584379:{NFSU2_TR(0x584379);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58437eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x584140u);}goto L584140;}
}
B58437e:L58437e:{c.instructions+=2;NFSU2_TR(0x58437e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58437f:{NFSU2_TR(0x58437f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584384ull));
TAIL_STATIC(0x575630u,575);
}
B584384:L584384:{c.instructions+=1;NFSU2_TR(0x584384);
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
B584387:L584387:{c.instructions+=2;NFSU2_TR(0x584387);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B58438e:{NFSU2_TR(0x58438e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58438f:L58438f:{c.instructions+=2;NFSU2_TR(0x58438f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B584390:{NFSU2_TR(0x584390);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5843a0:L5843a0:{c.instructions+=11;NFSU2_TR(0x5843a0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5843a1:{NFSU2_TR(0x5843a1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5843a5:{NFSU2_TR(0x5843a5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5843a6:{NFSU2_TR(0x5843a6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5843aa:{NFSU2_TR(0x5843aa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5843ab:{NFSU2_TR(0x5843ab);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5843ac:{NFSU2_TR(0x5843ac);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5843b0:{NFSU2_TR(0x5843b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5843b3:{NFSU2_TR(0x5843b3);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B5843b6:{NFSU2_TR(0x5843b6);
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
B5843b8:{NFSU2_TR(0x5843b8);
if(r1(R+518)){{goto L5843d2;}}
}
B5843ba:L5843ba:{c.instructions+=1;NFSU2_TR(0x5843ba);
__builtin_memmove((R+12),(R+12),4);
}
B5843c0:L5843c0:{c.instructions+=5;NFSU2_TR(0x5843c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5843c3:{NFSU2_TR(0x5843c3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5843c4:{NFSU2_TR(0x5843c4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5843c5:{NFSU2_TR(0x5843c5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5843c6:{NFSU2_TR(0x5843c6);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5843c9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5843c9:L5843c9:{c.instructions+=4;NFSU2_TR(0x5843c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5843cb:{NFSU2_TR(0x5843cb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5843ce:{NFSU2_TR(0x5843ce);
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
B5843d0:{NFSU2_TR(0x5843d0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5843c0u);}goto L5843c0;}}
}
B5843d2:L5843d2:{c.instructions+=3;NFSU2_TR(0x5843d2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5843d3:{NFSU2_TR(0x5843d3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5843d4:{NFSU2_TR(0x5843d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5843d9ull));
TAIL_STATIC(0x757900u,757);
}
B5843d9:L5843d9:{c.instructions+=6;NFSU2_TR(0x5843d9);
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
B5843dc:{NFSU2_TR(0x5843dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5843dd:{NFSU2_TR(0x5843dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5843de:{NFSU2_TR(0x5843de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5843df:{NFSU2_TR(0x5843df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5843e0:{NFSU2_TR(0x5843e0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5843f0:L5843f0:{c.instructions+=11;NFSU2_TR(0x5843f0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5843f1:{NFSU2_TR(0x5843f1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5843f5:{NFSU2_TR(0x5843f5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5843f6:{NFSU2_TR(0x5843f6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5843fa:{NFSU2_TR(0x5843fa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5843fb:{NFSU2_TR(0x5843fb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5843fc:{NFSU2_TR(0x5843fc);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B584400:{NFSU2_TR(0x584400);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B584403:{NFSU2_TR(0x584403);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x24ull))));
}
B584406:{NFSU2_TR(0x584406);
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
B584408:{NFSU2_TR(0x584408);
if(r1(R+518)){{goto L584422;}}
}
B58440a:L58440a:{c.instructions+=1;NFSU2_TR(0x58440a);
__builtin_memmove((R+12),(R+12),4);
}
B584410:L584410:{c.instructions+=5;NFSU2_TR(0x584410);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B584413:{NFSU2_TR(0x584413);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584414:{NFSU2_TR(0x584414);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584415:{NFSU2_TR(0x584415);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584416:{NFSU2_TR(0x584416);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584419ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B584419:L584419:{c.instructions+=4;NFSU2_TR(0x584419);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B58441b:{NFSU2_TR(0x58441b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B58441e:{NFSU2_TR(0x58441e);
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
B584420:{NFSU2_TR(0x584420);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x584410u);}goto L584410;}}
}
B584422:L584422:{c.instructions+=3;NFSU2_TR(0x584422);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584423:{NFSU2_TR(0x584423);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584424:{NFSU2_TR(0x584424);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584429ull));
TAIL_STATIC(0x757900u,757);
}
B584429:L584429:{c.instructions+=6;NFSU2_TR(0x584429);
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
B58442c:{NFSU2_TR(0x58442c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58442d:{NFSU2_TR(0x58442d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58442e:{NFSU2_TR(0x58442e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58442f:{NFSU2_TR(0x58442f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B584430:{NFSU2_TR(0x584430);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B584440:L584440:{c.instructions+=9;NFSU2_TR(0x584440);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B584443:{NFSU2_TR(0x584443);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584444:{NFSU2_TR(0x584444);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B584448:{NFSU2_TR(0x584448);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584449:{NFSU2_TR(0x584449);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B58444d:{NFSU2_TR(0x58444d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B584450:{NFSU2_TR(0x584450);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B584452:{NFSU2_TR(0x584452);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584453:{NFSU2_TR(0x584453);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5844df;}}
}
B584459:L584459:{c.instructions+=4;NFSU2_TR(0x584459);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58445a:{NFSU2_TR(0x58445a);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B58445c:{NFSU2_TR(0x58445c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58445f:{NFSU2_TR(0x58445f);
}
B584460:L584460:{c.instructions+=9;NFSU2_TR(0x584460);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B584463:{NFSU2_TR(0x584463);
u8 U[4];
w4(U+0,u32(0x2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584465:{NFSU2_TR(0x584465);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584466:{NFSU2_TR(0x584466);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58446b:{NFSU2_TR(0x58446b);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58446d:{NFSU2_TR(0x58446d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58446e:{NFSU2_TR(0x58446e);
u8 U[4];
w4(U+0,u32(0x7a12f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584473:{NFSU2_TR(0x584473);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584474:{NFSU2_TR(0x584474);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584479ull));
TAIL_STATIC(0x7414a0u,741);
}
B584479:L584479:{c.instructions+=3;NFSU2_TR(0x584479);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58447c:{NFSU2_TR(0x58447c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58447d:{NFSU2_TR(0x58447d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584482ull));
TAIL_STATIC(0x7421d0u,742);
}
B584482:L584482:{c.instructions+=3;NFSU2_TR(0x584482);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B584485:{NFSU2_TR(0x584485);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B584488:{NFSU2_TR(0x584488);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L584493;}}
}
B58448a:L58448a:{c.instructions+=4;NFSU2_TR(0x58448a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B58448b:{NFSU2_TR(0x58448b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B58448e:{NFSU2_TR(0x58448e);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B584491:{NFSU2_TR(0x584491);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x584460u);}goto L584460;}}
}
B584493:L584493:{c.instructions+=5;NFSU2_TR(0x584493);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B584496:{NFSU2_TR(0x584496);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B58449b:{NFSU2_TR(0x58449b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B58449d:{NFSU2_TR(0x58449d);
w4(R+4,u32(0x7ull));
}
B5844a2:{NFSU2_TR(0x5844a2);
u8 U[4];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B5844a6:L5844a6:{c.instructions+=1;NFSU2_TR(0x5844a6);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5844a8;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5844a6u);}goto L5844a6;}
}
B5844a8:L5844a8:{c.instructions+=9;NFSU2_TR(0x5844a8);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5844ad:{NFSU2_TR(0x5844ad);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5844af:{NFSU2_TR(0x5844af);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5844b3:{NFSU2_TR(0x5844b3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5844b4:{NFSU2_TR(0x5844b4);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B5844b6:{NFSU2_TR(0x5844b6);
u8 U[4];
w4(U+0,u32(0x7a12ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5844bb:{NFSU2_TR(0x5844bb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5844bc:{NFSU2_TR(0x5844bc);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B5844bd:{NFSU2_TR(0x5844bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5844c2ull));
TAIL_STATIC(0x7414a0u,741);
}
B5844c2:L5844c2:{c.instructions+=3;NFSU2_TR(0x5844c2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5844c5:{NFSU2_TR(0x5844c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5844c6:{NFSU2_TR(0x5844c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5844cbull));
TAIL_STATIC(0x742360u,742);
}
B5844cb:L5844cb:{c.instructions+=3;NFSU2_TR(0x5844cb);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5844cf:{NFSU2_TR(0x5844cf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5844d0:{NFSU2_TR(0x5844d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5844d5ull));
TAIL_STATIC(0x743190u,743);
}
B5844d5:L5844d5:{c.instructions+=3;NFSU2_TR(0x5844d5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B5844d8:{NFSU2_TR(0x5844d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5844de:{NFSU2_TR(0x5844de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5844df:L5844df:{c.instructions+=3;NFSU2_TR(0x5844df);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5844e2:{NFSU2_TR(0x5844e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5844e4:{NFSU2_TR(0x5844e4);
if(r1(R+518)){{goto L584515;}}
}
B5844e6:L5844e6:{c.instructions+=3;NFSU2_TR(0x5844e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5844e9:{NFSU2_TR(0x5844e9);
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
B5844eb:{NFSU2_TR(0x5844eb);
if(r1(R+518)){{goto L5844f7;}}
}
B5844ed:L5844ed:{c.instructions+=4;NFSU2_TR(0x5844ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5844f0:{NFSU2_TR(0x5844f0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5844f1:{NFSU2_TR(0x5844f1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5844f2:{NFSU2_TR(0x5844f2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5844f4ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5844f4:L5844f4:{c.instructions+=1;NFSU2_TR(0x5844f4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5844f7:L5844f7:{c.instructions+=3;NFSU2_TR(0x5844f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5844fa:{NFSU2_TR(0x5844fa);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5844fc:{NFSU2_TR(0x5844fc);
if(r1(R+518)){{goto L58450e;}}
}
B5844fe:L5844fe:{c.instructions+=2;NFSU2_TR(0x5844fe);
__builtin_memmove((R+4),(R+24),4);
}
B584500:{NFSU2_TR(0x584500);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584505ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x584140u);}goto L584140;}
}
B584505:L584505:{c.instructions+=2;NFSU2_TR(0x584505);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584506:{NFSU2_TR(0x584506);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58450bull));
TAIL_STATIC(0x575630u,575);
}
B58450b:L58450b:{c.instructions+=1;NFSU2_TR(0x58450b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B58450e:L58450e:{c.instructions+=1;NFSU2_TR(0x58450e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B584515:L584515:{c.instructions+=5;NFSU2_TR(0x584515);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B584516:{NFSU2_TR(0x584516);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B584517:{NFSU2_TR(0x584517);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B584518:{NFSU2_TR(0x584518);
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
B58451b:{NFSU2_TR(0x58451b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B584520:L584520:{c.instructions+=6;NFSU2_TR(0x584520);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584521:{NFSU2_TR(0x584521);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B584525:{NFSU2_TR(0x584525);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B584528:{NFSU2_TR(0x584528);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58452a:{NFSU2_TR(0x58452a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58452b:{NFSU2_TR(0x58452b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L584555;}}
}
B58452d:L58452d:{c.instructions+=7;NFSU2_TR(0x58452d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B584530:{NFSU2_TR(0x584530);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584535:{NFSU2_TR(0x584535);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584537:{NFSU2_TR(0x584537);
u8 U[4];
w4(U+0,u32(0x86679cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58453c:{NFSU2_TR(0x58453c);
u8 U[4];
w4(U+0,u32(0x7a1300ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584541:{NFSU2_TR(0x584541);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584542:{NFSU2_TR(0x584542);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584547ull));
TAIL_STATIC(0x7414a0u,741);
}
B584547:L584547:{c.instructions+=3;NFSU2_TR(0x584547);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58454a:{NFSU2_TR(0x58454a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58454b:{NFSU2_TR(0x58454b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584550ull));
TAIL_STATIC(0x742360u,742);
}
B584550:L584550:{c.instructions+=2;NFSU2_TR(0x584550);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B584553:{NFSU2_TR(0x584553);
{goto L58455c;}
}
B584555:L584555:{c.instructions+=1;NFSU2_TR(0x584555);
s1(0x86679c,u8(0x0ull));
}
B58455c:L58455c:{c.instructions+=4;NFSU2_TR(0x58455c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B584560:{NFSU2_TR(0x584560);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B584563:{NFSU2_TR(0x584563);
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
B584565:{NFSU2_TR(0x584565);
if(r1(R+518)){{goto L584596;}}
}
B584567:L584567:{c.instructions+=3;NFSU2_TR(0x584567);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58456a:{NFSU2_TR(0x58456a);
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
B58456c:{NFSU2_TR(0x58456c);
if(r1(R+518)){{goto L584578;}}
}
B58456e:L58456e:{c.instructions+=4;NFSU2_TR(0x58456e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B584571:{NFSU2_TR(0x584571);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584572:{NFSU2_TR(0x584572);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584573:{NFSU2_TR(0x584573);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584575ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B584575:L584575:{c.instructions+=1;NFSU2_TR(0x584575);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B584578:L584578:{c.instructions+=3;NFSU2_TR(0x584578);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B58457b:{NFSU2_TR(0x58457b);
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
B58457d:{NFSU2_TR(0x58457d);
if(r1(R+518)){{goto L58458f;}}
}
B58457f:L58457f:{c.instructions+=2;NFSU2_TR(0x58457f);
__builtin_memmove((R+4),(R+24),4);
}
B584581:{NFSU2_TR(0x584581);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584586ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x584140u);}goto L584140;}
}
B584586:L584586:{c.instructions+=2;NFSU2_TR(0x584586);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584587:{NFSU2_TR(0x584587);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58458cull));
TAIL_STATIC(0x575630u,575);
}
B58458c:L58458c:{c.instructions+=1;NFSU2_TR(0x58458c);
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
B58458f:L58458f:{c.instructions+=1;NFSU2_TR(0x58458f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B584596:L584596:{c.instructions+=3;NFSU2_TR(0x584596);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B584597:{NFSU2_TR(0x584597);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B584598:{NFSU2_TR(0x584598);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5845a0:L5845a0:{c.instructions+=9;NFSU2_TR(0x5845a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5845a4:{NFSU2_TR(0x5845a4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5845a5:{NFSU2_TR(0x5845a5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5845a6:{NFSU2_TR(0x5845a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5845aa:{NFSU2_TR(0x5845aa);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xa1ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5845b1:{NFSU2_TR(0x5845b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5845b4:{NFSU2_TR(0x5845b4);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5845b6:{NFSU2_TR(0x5845b6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5845b8:{NFSU2_TR(0x5845b8);
if(r1(R+518)){{goto L5845c0;}}
}
B5845ba:L5845ba:{c.instructions+=1;NFSU2_TR(0x5845ba);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xa1ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5845c0:L5845c0:{c.instructions+=5;NFSU2_TR(0x5845c0);
__builtin_memmove(gp(0x869888),(R+12),1);
}
B5845c6:{NFSU2_TR(0x5845c6);
__builtin_memmove(gp(0x8698c8),(R+12),4);
}
B5845cc:{NFSU2_TR(0x5845cc);
__builtin_memmove(gp(0x8698cc),(R+12),1);
}
B5845d2:{NFSU2_TR(0x5845d2);
w4(R+0,u32(0x8698dcull));
}
B5845d7:{NFSU2_TR(0x5845d7);
{goto L5845e0;}
}
B5845e0:L5845e0:{c.instructions+=4;NFSU2_TR(0x5845e0);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+0)),r1(U+0));
}
B5845e2:{NFSU2_TR(0x5845e2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B5845e5:{NFSU2_TR(0x5845e5);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x86993cull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x86993cull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5845ea:{NFSU2_TR(0x5845ea);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5845e0u);}goto L5845e0;}}
}
B5845ec:L5845ec:{c.instructions+=4;NFSU2_TR(0x5845ec);
__builtin_memmove(gp(0x86993c),(R+12),1);
}
B5845f2:{NFSU2_TR(0x5845f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5845f5:{NFSU2_TR(0x5845f5);
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
B5845f7:{NFSU2_TR(0x5845f7);
if(r1(R+518)){{goto L584626;}}
}
B5845f9:L5845f9:{c.instructions+=3;NFSU2_TR(0x5845f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5845fc:{NFSU2_TR(0x5845fc);
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
B5845fe:{NFSU2_TR(0x5845fe);
if(r1(R+518)){{goto L58460a;}}
}
B584600:L584600:{c.instructions+=4;NFSU2_TR(0x584600);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B584603:{NFSU2_TR(0x584603);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584604:{NFSU2_TR(0x584604);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584605:{NFSU2_TR(0x584605);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584607ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B584607:L584607:{c.instructions+=1;NFSU2_TR(0x584607);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58460a:L58460a:{c.instructions+=4;NFSU2_TR(0x58460a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58460b:{NFSU2_TR(0x58460b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B58460e:{NFSU2_TR(0x58460e);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B584610:{NFSU2_TR(0x584610);
if(r1(R+518)){{goto L584622;}}
}
B584612:L584612:{c.instructions+=2;NFSU2_TR(0x584612);
__builtin_memmove((R+4),(R+24),4);
}
B584614:{NFSU2_TR(0x584614);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584619ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x584140u);}goto L584140;}
}
B584619:L584619:{c.instructions+=2;NFSU2_TR(0x584619);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58461a:{NFSU2_TR(0x58461a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58461full));
TAIL_STATIC(0x575630u,575);
}
B58461f:L58461f:{c.instructions+=1;NFSU2_TR(0x58461f);
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
B584622:L584622:{c.instructions+=2;NFSU2_TR(0x584622);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B584625:{NFSU2_TR(0x584625);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B584626:L584626:{c.instructions+=3;NFSU2_TR(0x584626);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B584627:{NFSU2_TR(0x584627);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B584628:{NFSU2_TR(0x584628);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B584630:L584630:{c.instructions+=5;NFSU2_TR(0x584630);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584631:{NFSU2_TR(0x584631);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B584635:{NFSU2_TR(0x584635);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B584638:{NFSU2_TR(0x584638);
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
B58463a:{NFSU2_TR(0x58463a);
if(r1(R+518)){{goto L584671;}}
}
B58463c:L58463c:{c.instructions+=3;NFSU2_TR(0x58463c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58463f:{NFSU2_TR(0x58463f);
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
B584641:{NFSU2_TR(0x584641);
if(r1(R+518)){{goto L584651;}}
}
B584643:L584643:{c.instructions+=5;NFSU2_TR(0x584643);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B584646:{NFSU2_TR(0x584646);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58464a:{NFSU2_TR(0x58464a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58464b:{NFSU2_TR(0x58464b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58464c:{NFSU2_TR(0x58464c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58464eull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B58464e:L58464e:{c.instructions+=1;NFSU2_TR(0x58464e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B584651:L584651:{c.instructions+=4;NFSU2_TR(0x584651);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584652:{NFSU2_TR(0x584652);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B584655:{NFSU2_TR(0x584655);
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
B584657:{NFSU2_TR(0x584657);
if(r1(R+518)){{goto L584669;}}
}
B584659:L584659:{c.instructions+=2;NFSU2_TR(0x584659);
__builtin_memmove((R+4),(R+24),4);
}
B58465b:{NFSU2_TR(0x58465b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584660ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x584140u);}goto L584140;}
}
B584660:L584660:{c.instructions+=2;NFSU2_TR(0x584660);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584661:{NFSU2_TR(0x584661);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584666ull));
TAIL_STATIC(0x575630u,575);
}
B584666:L584666:{c.instructions+=1;NFSU2_TR(0x584666);
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
B584669:L584669:{c.instructions+=2;NFSU2_TR(0x584669);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B584670:{NFSU2_TR(0x584670);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B584671:L584671:{c.instructions+=2;NFSU2_TR(0x584671);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B584672:{NFSU2_TR(0x584672);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B584680:L584680:{c.instructions+=23;NFSU2_TR(0x584680);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B584684:{NFSU2_TR(0x584684);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584685:{NFSU2_TR(0x584685);
__builtin_memmove((R+24),(R+4),4);
}
B584687:{NFSU2_TR(0x584687);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58468b:{NFSU2_TR(0x58468b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58468e:{NFSU2_TR(0x58468e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B584692:{NFSU2_TR(0x584692);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B584695:{NFSU2_TR(0x584695);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B584699:{NFSU2_TR(0x584699);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58469c:{NFSU2_TR(0x58469c);
__builtin_memmove((R+0),gp(0x86a328),4);
}
B5846a1:{NFSU2_TR(0x5846a1);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5846a3:{NFSU2_TR(0x5846a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5846a6:{NFSU2_TR(0x5846a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5846aa:{NFSU2_TR(0x5846aa);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5846ab:{NFSU2_TR(0x5846ab);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5846ad:{NFSU2_TR(0x5846ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5846b0:{NFSU2_TR(0x5846b0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5846b1:{NFSU2_TR(0x5846b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5846b4:{NFSU2_TR(0x5846b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5846bb:{NFSU2_TR(0x5846bb);
__builtin_memmove(gp(0x86a328),(R+0),4);
}
B5846c0:{NFSU2_TR(0x5846c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5846c3:{NFSU2_TR(0x5846c3);
w4(R+4,u32(0x1ull));
}
B5846c8:{NFSU2_TR(0x5846c8);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5846cd;}}
}
B5846ca:L5846ca:{c.instructions+=1;NFSU2_TR(0x5846ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5846cd:L5846cd:{c.instructions+=2;NFSU2_TR(0x5846cd);
u8 U[7];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+4))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5846d1:{NFSU2_TR(0x5846d1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5846e9;}}
}
B5846d3:L5846d3:{c.instructions+=3;NFSU2_TR(0x5846d3);
__builtin_memmove((R+0),gp(0x86a324),4);
}
B5846d8:{NFSU2_TR(0x5846d8);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5846da:{NFSU2_TR(0x5846da);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5846e4;}}
}
B5846dc:L5846dc:{c.instructions+=2;NFSU2_TR(0x5846dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5846df:{NFSU2_TR(0x5846df);
__builtin_memmove(gp(0x86a324),(R+0),4);
}
B5846e4:L5846e4:{c.instructions+=2;NFSU2_TR(0x5846e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5846e7:{NFSU2_TR(0x5846e7);
{goto L5846f7;}
}
B5846e9:L5846e9:{c.instructions+=2;NFSU2_TR(0x5846e9);
u8 U[8];
__builtin_memmove((U+0),gp(0x86a324),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+8))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5846ef:{NFSU2_TR(0x5846ef);
if(r1(R+518)){{goto L5846f7;}}
}
B5846f1:L5846f1:{c.instructions+=1;NFSU2_TR(0x5846f1);
__builtin_memmove(gp(0x86a324),(R+8),4);
}
B5846f7:L5846f7:{c.instructions+=3;NFSU2_TR(0x5846f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5846fb:{NFSU2_TR(0x5846fb);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B5846fd:{NFSU2_TR(0x5846fd);
if(r1(R+518)){{goto L58471f;}}
}
B5846ff:L5846ff:{c.instructions+=2;NFSU2_TR(0x5846ff);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((U+4),(U+0),1);
w1(R+512,u8((r1(U+4))<(r1(R+8))));
w1(R+523,sborrow<u8>(r1(U+4),r1(R+8)));
w1(U+5,u8(u32(r1(U+4))-u32(r1(R+8))));
w1(R+519,u8(s8(r1(U+5))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+5))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B584701:{NFSU2_TR(0x584701);
if(r1(R+518)){{goto L58471f;}}
}
B584703:L584703:{c.instructions+=2;NFSU2_TR(0x584703);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584704:{NFSU2_TR(0x584704);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584709ull));
TAIL_STATIC(0x43dbb0u,43d);
}
B584709:L584709:{c.instructions+=4;NFSU2_TR(0x584709);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B58470a:{NFSU2_TR(0x58470a);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58470c:{NFSU2_TR(0x58470c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58470d:{NFSU2_TR(0x58470d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584712ull));
TAIL_STATIC(0x6d7110u,6d7);
}
B584712:L584712:{c.instructions+=4;NFSU2_TR(0x584712);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584713:{NFSU2_TR(0x584713);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584714:{NFSU2_TR(0x584714);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B584717:{NFSU2_TR(0x584717);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58471cull));
TAIL_STATIC(0x43dbd0u,43d);
}
B58471c:L58471c:{c.instructions+=1;NFSU2_TR(0x58471c);
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
B58471f:L58471f:{c.instructions+=4;NFSU2_TR(0x58471f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B584720:{NFSU2_TR(0x584720);
__builtin_memmove((R+0),(R+24),4);
}
B584722:{NFSU2_TR(0x584722);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B584723:{NFSU2_TR(0x584723);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B584730:L584730:{c.instructions+=7;NFSU2_TR(0x584730);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584731:{NFSU2_TR(0x584731);
__builtin_memmove((R+24),(R+4),4);
}
B584733:{NFSU2_TR(0x584733);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B584736:{NFSU2_TR(0x584736);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584737:{NFSU2_TR(0x584737);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B584739:{NFSU2_TR(0x584739);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58473b:{NFSU2_TR(0x58473b);
if(r1(R+518)){{goto L58475d;}}
}
B58473d:L58473d:{c.instructions+=3;NFSU2_TR(0x58473d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B58473f:{NFSU2_TR(0x58473f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B584741:{NFSU2_TR(0x584741);
if(r1(R+518)){{goto L58474e;}}
}
B584743:L584743:{c.instructions+=3;NFSU2_TR(0x584743);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584744:{NFSU2_TR(0x584744);
u8 U[4];
w4(U+0,u32(0x5823f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584749:{NFSU2_TR(0x584749);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58474eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x584230u);}goto L584230;}
}
B58474e:L58474e:{c.instructions+=3;NFSU2_TR(0x58474e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B584751:{NFSU2_TR(0x584751);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584752:{NFSU2_TR(0x584752);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584757ull));
TAIL_STATIC(0x747630u,747);
}
B584757:L584757:{c.instructions+=2;NFSU2_TR(0x584757);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B58475a:{NFSU2_TR(0x58475a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58475d:L58475d:{c.instructions+=8;NFSU2_TR(0x58475d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B584760:{NFSU2_TR(0x584760);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B584762:{NFSU2_TR(0x584762);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B584765:{NFSU2_TR(0x584765);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B58476c:{NFSU2_TR(0x58476c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58476f:{NFSU2_TR(0x58476f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B584772:{NFSU2_TR(0x584772);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+24)),r4(U+0));
}
B584774:{NFSU2_TR(0x584774);
if(r1(R+518)){{goto L584782;}}
}
B584776:L584776:{c.instructions+=2;NFSU2_TR(0x584776);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584777:{NFSU2_TR(0x584777);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58477cull));
TAIL_STATIC(0x575630u,575);
}
B58477c:L58477c:{c.instructions+=2;NFSU2_TR(0x58477c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B58477f:{NFSU2_TR(0x58477f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B584782:L584782:{c.instructions+=3;NFSU2_TR(0x584782);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B584785:{NFSU2_TR(0x584785);
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
B584787:{NFSU2_TR(0x584787);
if(r1(R+518)){{goto L584795;}}
}
B584789:L584789:{c.instructions+=2;NFSU2_TR(0x584789);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58478a:{NFSU2_TR(0x58478a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58478full));
TAIL_STATIC(0x575630u,575);
}
B58478f:L58478f:{c.instructions+=2;NFSU2_TR(0x58478f);
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
B584792:{NFSU2_TR(0x584792);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B584795:L584795:{c.instructions+=3;NFSU2_TR(0x584795);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B584796:{NFSU2_TR(0x584796);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B584797:{NFSU2_TR(0x584797);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5847a0:L5847a0:{c.instructions+=6;NFSU2_TR(0x5847a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5847a1:{NFSU2_TR(0x5847a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5847a4:{NFSU2_TR(0x5847a4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5847a5:{NFSU2_TR(0x5847a5);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5847a8:{NFSU2_TR(0x5847a8);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5847aa:{NFSU2_TR(0x5847aa);
if(r1(R+518)){{goto L5847d4;}}
}
B5847ac:L5847ac:{c.instructions+=4;NFSU2_TR(0x5847ac);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5847ad:{NFSU2_TR(0x5847ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5847b1:{NFSU2_TR(0x5847b1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5847b2:{NFSU2_TR(0x5847b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5847b6:L5847b6:{c.instructions+=2;NFSU2_TR(0x5847b6);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5847b9:{NFSU2_TR(0x5847b9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5847cc;}}
}
B5847bb:L5847bb:{c.instructions+=4;NFSU2_TR(0x5847bb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B5847be:{NFSU2_TR(0x5847be);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5847bf:{NFSU2_TR(0x5847bf);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5847c0:{NFSU2_TR(0x5847c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5847c5ull));
TAIL_STATIC(0x43dc30u,43d);
}
B5847c5:L5847c5:{c.instructions+=3;NFSU2_TR(0x5847c5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5847c8:{NFSU2_TR(0x5847c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5847ca:{NFSU2_TR(0x5847ca);
if(r1(R+518)){{goto L5847d2;}}
}
B5847cc:L5847cc:{c.instructions+=3;NFSU2_TR(0x5847cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5847ce:{NFSU2_TR(0x5847ce);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5847d0:{NFSU2_TR(0x5847d0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5847b6u);}goto L5847b6;}}
}
B5847d2:L5847d2:{c.instructions+=2;NFSU2_TR(0x5847d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5847d3:{NFSU2_TR(0x5847d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5847d4:L5847d4:{c.instructions+=8;NFSU2_TR(0x5847d4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5847d6:{NFSU2_TR(0x5847d6);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5847d8:{NFSU2_TR(0x5847d8);
__builtin_memmove((R+0),(R+518),1);
}
B5847db:{NFSU2_TR(0x5847db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5847dc:{NFSU2_TR(0x5847dc);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B5847dd:{NFSU2_TR(0x5847dd);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5847df:{NFSU2_TR(0x5847df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5847e0:{NFSU2_TR(0x5847e0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5847f0:L5847f0:{c.instructions+=5;NFSU2_TR(0x5847f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5847f3:{NFSU2_TR(0x5847f3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B5847f6:{NFSU2_TR(0x5847f6);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5847f8:{NFSU2_TR(0x5847f8);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5847fa:{NFSU2_TR(0x5847fa);
if(r1(R+518)){{goto L58480d;}}
}
B5847fc:L5847fc:{c.instructions+=2;NFSU2_TR(0x5847fc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5847fd:{NFSU2_TR(0x5847fd);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B584801:L584801:{c.instructions+=2;NFSU2_TR(0x584801);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B584803:{NFSU2_TR(0x584803);
if(r1(R+518)){{goto L58480c;}}
}
B584805:L584805:{c.instructions+=4;NFSU2_TR(0x584805);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B584807:{NFSU2_TR(0x584807);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B584808:{NFSU2_TR(0x584808);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58480a:{NFSU2_TR(0x58480a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x584801u);}goto L584801;}}
}
B58480c:L58480c:{c.instructions+=1;NFSU2_TR(0x58480c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58480d:L58480d:{c.instructions+=6;NFSU2_TR(0x58480d);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B58480f:{NFSU2_TR(0x58480f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B584811:{NFSU2_TR(0x584811);
__builtin_memmove((R+8),(R+518),1);
}
B584814:{NFSU2_TR(0x584814);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B584815:{NFSU2_TR(0x584815);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B584817:{NFSU2_TR(0x584817);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B584820:L584820:{c.instructions+=6;NFSU2_TR(0x584820);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584821:{NFSU2_TR(0x584821);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B584824:{NFSU2_TR(0x584824);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584825:{NFSU2_TR(0x584825);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B584828:{NFSU2_TR(0x584828);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58482a:{NFSU2_TR(0x58482a);
if(r1(R+518)){{goto L584849;}}
}
B58482c:L58482c:{c.instructions+=2;NFSU2_TR(0x58482c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58482d:{NFSU2_TR(0x58482d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B584831:L584831:{c.instructions+=4;NFSU2_TR(0x584831);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B584834:{NFSU2_TR(0x584834);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584835:{NFSU2_TR(0x584835);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584836:{NFSU2_TR(0x584836);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58483bull));
TAIL_STATIC(0x43dc30u,43d);
}
B58483b:L58483b:{c.instructions+=3;NFSU2_TR(0x58483b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58483e:{NFSU2_TR(0x58483e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B584840:{NFSU2_TR(0x584840);
if(r1(R+518)){{goto L584848;}}
}
B584842:L584842:{c.instructions+=3;NFSU2_TR(0x584842);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B584844:{NFSU2_TR(0x584844);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B584846:{NFSU2_TR(0x584846);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x584831u);}goto L584831;}}
}
B584848:L584848:{c.instructions+=1;NFSU2_TR(0x584848);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B584849:L584849:{c.instructions+=8;NFSU2_TR(0x584849);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B58484b:{NFSU2_TR(0x58484b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58484d:{NFSU2_TR(0x58484d);
__builtin_memmove((R+0),(R+518),1);
}
B584850:{NFSU2_TR(0x584850);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B584851:{NFSU2_TR(0x584851);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B584852:{NFSU2_TR(0x584852);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B584854:{NFSU2_TR(0x584854);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B584855:{NFSU2_TR(0x584855);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B584860:L584860:{c.instructions+=17;NFSU2_TR(0x584860);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584861:{NFSU2_TR(0x584861);
__builtin_memmove((R+20),(R+16),4);
}
B584863:{NFSU2_TR(0x584863);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B584866:{NFSU2_TR(0x584866);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x404ull))));
}
B58486c:{NFSU2_TR(0x58486c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58486d:{NFSU2_TR(0x58486d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B584870:{NFSU2_TR(0x584870);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584871:{NFSU2_TR(0x584871);
__builtin_memmove((R+24),(R+4),4);
}
B584873:{NFSU2_TR(0x584873);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B584875:{NFSU2_TR(0x584875);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B584878:{NFSU2_TR(0x584878);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58487b:{NFSU2_TR(0x58487b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B58487d:{NFSU2_TR(0x58487d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B584880:{NFSU2_TR(0x584880);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B584883:{NFSU2_TR(0x584883);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B584885:{NFSU2_TR(0x584885);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584886:{NFSU2_TR(0x584886);
if(r1(R+518)){{goto L584899;}}
}
B584888:L584888:{c.instructions+=5;NFSU2_TR(0x584888);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58488a:{NFSU2_TR(0x58488a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58488b:{NFSU2_TR(0x58488b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B58488e:{NFSU2_TR(0x58488e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58488f:{NFSU2_TR(0x58488f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584894ull));
TAIL_STATIC(0x43dc00u,43d);
}
B584894:L584894:{c.instructions+=2;NFSU2_TR(0x584894);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B584897:{NFSU2_TR(0x584897);
{goto L58489d;}
}
B584899:L584899:{c.instructions+=1;NFSU2_TR(0x584899);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B58489d:L58489d:{c.instructions+=6;NFSU2_TR(0x58489d);
{u32 ea_=u32(u32(8802732u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5848a3:{NFSU2_TR(0x5848a3);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5848a9:{NFSU2_TR(0x5848a9);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5848ac:{NFSU2_TR(0x5848ac);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5848b2:{NFSU2_TR(0x5848b2);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5848b8:{NFSU2_TR(0x5848b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5848bdull));
TAIL_STATIC(0x75bed4u,75b);
}
B5848bd:L5848bd:{c.instructions+=6;NFSU2_TR(0x5848bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5848c0:{NFSU2_TR(0x5848c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5848c2:{NFSU2_TR(0x5848c2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5848c4:{NFSU2_TR(0x5848c4);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5848c9:{NFSU2_TR(0x5848c9);
w4(R+4,u32(0xffull));
}
B5848ce:{NFSU2_TR(0x5848ce);
u8 U[4];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B5848d2:L5848d2:{c.instructions+=1;NFSU2_TR(0x5848d2);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5848d4;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5848d2u);}goto L5848d2;}
}
B5848d4:L5848d4:{c.instructions+=8;NFSU2_TR(0x5848d4);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B5848d6:{NFSU2_TR(0x5848d6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5848d7:{NFSU2_TR(0x5848d7);
u8 U[4];
w4(U+0,u32(0x7a1308ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5848dc:{NFSU2_TR(0x5848dc);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B5848dd:{NFSU2_TR(0x5848dd);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5848e1:{NFSU2_TR(0x5848e1);
u8 U[4];
w4(U+0,u32(0x400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5848e6:{NFSU2_TR(0x5848e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5848e7:{NFSU2_TR(0x5848e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5848ecull));
TAIL_STATIC(0x741690u,741);
}
B5848ec:L5848ec:{c.instructions+=7;NFSU2_TR(0x5848ec);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B5848ef:{NFSU2_TR(0x5848ef);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5848f0:{NFSU2_TR(0x5848f0);
u8 U[4];
w4(U+0,u32(0x79d53cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5848f5:{NFSU2_TR(0x5848f5);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5848f9:{NFSU2_TR(0x5848f9);
u8 U[4];
w4(U+0,u32(0x400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5848fe:{NFSU2_TR(0x5848fe);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5848ff:{NFSU2_TR(0x5848ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584904ull));
TAIL_STATIC(0x741a50u,741);
}
B584904:L584904:{c.instructions+=7;NFSU2_TR(0x584904);
__builtin_memmove((R+8),gp(0x850088),4);
}
B58490a:{NFSU2_TR(0x58490a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58490b:{NFSU2_TR(0x58490b);
u8 U[4];
w4(U+0,u32(0x7903d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584910:{NFSU2_TR(0x584910);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B584914:{NFSU2_TR(0x584914);
u8 U[4];
w4(U+0,u32(0x400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584919:{NFSU2_TR(0x584919);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58491a:{NFSU2_TR(0x58491a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58491full));
TAIL_STATIC(0x741690u,741);
}
B58491f:L58491f:{c.instructions+=10;NFSU2_TR(0x58491f);
__builtin_memmove((R+12),gp(0x850098),1);
}
B584925:{NFSU2_TR(0x584925);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B584927:{NFSU2_TR(0x584927);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B584929:{NFSU2_TR(0x584929);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B58492c:{NFSU2_TR(0x58492c);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B584930:{NFSU2_TR(0x584930);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584931:{NFSU2_TR(0x584931);
u8 U[4];
w4(U+0,u32(0x7903ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584936:{NFSU2_TR(0x584936);
u8 U[4];
w4(U+0,u32(0x400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58493b:{NFSU2_TR(0x58493b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58493c:{NFSU2_TR(0x58493c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584941ull));
TAIL_STATIC(0x741690u,741);
}
B584941:L584941:{c.instructions+=8;NFSU2_TR(0x584941);
w4(R+0,u32(m1(0x850080)));
}
B584948:{NFSU2_TR(0x584948);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B58494b:{NFSU2_TR(0x58494b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58494c:{NFSU2_TR(0x58494c);
u8 U[4];
w4(U+0,u32(0x7903c4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584951:{NFSU2_TR(0x584951);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B584955:{NFSU2_TR(0x584955);
u8 U[4];
w4(U+0,u32(0x400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58495a:{NFSU2_TR(0x58495a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58495b:{NFSU2_TR(0x58495b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584960ull));
TAIL_STATIC(0x741690u,741);
}
B584960:L584960:{c.instructions+=10;NFSU2_TR(0x584960);
__builtin_memmove((R+12),gp(0x85009a),1);
}
B584966:{NFSU2_TR(0x584966);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B584968:{NFSU2_TR(0x584968);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B58496a:{NFSU2_TR(0x58496a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B58496d:{NFSU2_TR(0x58496d);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B584971:{NFSU2_TR(0x584971);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584972:{NFSU2_TR(0x584972);
u8 U[4];
w4(U+0,u32(0x7903bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584977:{NFSU2_TR(0x584977);
u8 U[4];
w4(U+0,u32(0x400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58497c:{NFSU2_TR(0x58497c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58497d:{NFSU2_TR(0x58497d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584982ull));
TAIL_STATIC(0x741690u,741);
}
B584982:L584982:{c.instructions+=7;NFSU2_TR(0x584982);
w4(R+4,u32(m1(0x85008c)));
}
B584989:{NFSU2_TR(0x584989);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58498a:{NFSU2_TR(0x58498a);
u8 U[4];
w4(U+0,u32(0x7903b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58498f:{NFSU2_TR(0x58498f);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B584993:{NFSU2_TR(0x584993);
u8 U[4];
w4(U+0,u32(0x400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584998:{NFSU2_TR(0x584998);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584999:{NFSU2_TR(0x584999);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58499eull));
TAIL_STATIC(0x741690u,741);
}
B58499e:L58499e:{c.instructions+=7;NFSU2_TR(0x58499e);
w4(R+0,u32(m1(0x850099)));
}
B5849a5:{NFSU2_TR(0x5849a5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5849a6:{NFSU2_TR(0x5849a6);
u8 U[4];
w4(U+0,u32(0x7903acull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5849ab:{NFSU2_TR(0x5849ab);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5849af:{NFSU2_TR(0x5849af);
u8 U[4];
w4(U+0,u32(0x400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5849b4:{NFSU2_TR(0x5849b4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5849b5:{NFSU2_TR(0x5849b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5849baull));
TAIL_STATIC(0x741690u,741);
}
B5849ba:L5849ba:{c.instructions+=8;NFSU2_TR(0x5849ba);
w4(R+8,u32(m2(0x8500ba)));
}
B5849c1:{NFSU2_TR(0x5849c1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B5849c4:{NFSU2_TR(0x5849c4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5849c5:{NFSU2_TR(0x5849c5);
u8 U[4];
w4(U+0,u32(0x790394ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5849ca:{NFSU2_TR(0x5849ca);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5849ce:{NFSU2_TR(0x5849ce);
u8 U[4];
w4(U+0,u32(0x400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5849d3:{NFSU2_TR(0x5849d3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5849d4:{NFSU2_TR(0x5849d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5849d9ull));
TAIL_STATIC(0x741690u,741);
}
B5849d9:L5849d9:{c.instructions+=6;NFSU2_TR(0x5849d9);
u8 U[4];
w4(U+0,u32(0x85009cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5849de:{NFSU2_TR(0x5849de);
u8 U[4];
w4(U+0,u32(0x790380ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5849e3:{NFSU2_TR(0x5849e3);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5849e7:{NFSU2_TR(0x5849e7);
u8 U[4];
w4(U+0,u32(0x400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5849ec:{NFSU2_TR(0x5849ec);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5849ed:{NFSU2_TR(0x5849ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5849f2ull));
TAIL_STATIC(0x741a50u,741);
}
B5849f2:L5849f2:{c.instructions+=7;NFSU2_TR(0x5849f2);
__builtin_memmove((R+8),gp(0x850090),4);
}
B5849f8:{NFSU2_TR(0x5849f8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5849f9:{NFSU2_TR(0x5849f9);
u8 U[4];
w4(U+0,u32(0x790378ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5849fe:{NFSU2_TR(0x5849fe);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B584a02:{NFSU2_TR(0x584a02);
u8 U[4];
w4(U+0,u32(0x400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584a07:{NFSU2_TR(0x584a07);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584a08:{NFSU2_TR(0x584a08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584a0dull));
TAIL_STATIC(0x741690u,741);
}
B584a0d:L584a0d:{c.instructions+=7;NFSU2_TR(0x584a0d);
__builtin_memmove((R+4),gp(0x850094),4);
}
B584a13:{NFSU2_TR(0x584a13);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584a14:{NFSU2_TR(0x584a14);
u8 U[4];
w4(U+0,u32(0x790370ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584a19:{NFSU2_TR(0x584a19);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B584a1d:{NFSU2_TR(0x584a1d);
u8 U[4];
w4(U+0,u32(0x400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584a22:{NFSU2_TR(0x584a22);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584a23:{NFSU2_TR(0x584a23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584a28ull));
TAIL_STATIC(0x741690u,741);
}
B584a28:L584a28:{c.instructions+=5;NFSU2_TR(0x584a28);
w4(R+0,u32(m2(0x8500b8)));
}
B584a2f:{NFSU2_TR(0x584a2f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B584a32:{NFSU2_TR(0x584a32);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584a34:{NFSU2_TR(0x584a34);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584a35:{NFSU2_TR(0x584a35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584a3aull));
TAIL_STATIC(0x516280u,516);
}
B584a3a:L584a3a:{c.instructions+=6;NFSU2_TR(0x584a3a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584a3b:{NFSU2_TR(0x584a3b);
u8 U[4];
w4(U+0,u32(0x7903a4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584a40:{NFSU2_TR(0x584a40);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B584a44:{NFSU2_TR(0x584a44);
u8 U[4];
w4(U+0,u32(0x400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584a49:{NFSU2_TR(0x584a49);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584a4a:{NFSU2_TR(0x584a4a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584a4full));
TAIL_STATIC(0x741690u,741);
}
B584a4f:L584a4f:{c.instructions+=7;NFSU2_TR(0x584a4f);
__builtin_memmove((R+8),gp(0x8500bc),4);
}
B584a55:{NFSU2_TR(0x584a55);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584a56:{NFSU2_TR(0x584a56);
u8 U[4];
w4(U+0,u32(0x79039cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584a5b:{NFSU2_TR(0x584a5b);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B584a5f:{NFSU2_TR(0x584a5f);
u8 U[4];
w4(U+0,u32(0x400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584a64:{NFSU2_TR(0x584a64);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584a65:{NFSU2_TR(0x584a65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584a6aull));
TAIL_STATIC(0x741690u,741);
}
B584a6a:L584a6a:{c.instructions+=3;NFSU2_TR(0x584a6a);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B584a6e:{NFSU2_TR(0x584a6e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584a6f:{NFSU2_TR(0x584a6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584a74ull));
TAIL_STATIC(0x43dbb0u,43d);
}
B584a74:L584a74:{c.instructions+=3;NFSU2_TR(0x584a74);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B584a75:{NFSU2_TR(0x584a75);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584a76:{NFSU2_TR(0x584a76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584a7bull));
TAIL_STATIC(0x575620u,575);
}
B584a7b:L584a7b:{c.instructions+=5;NFSU2_TR(0x584a7b);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B584a7f:{NFSU2_TR(0x584a7f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584a80:{NFSU2_TR(0x584a80);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584a81:{NFSU2_TR(0x584a81);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B584a84:{NFSU2_TR(0x584a84);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584a89ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B584a89:L584a89:{c.instructions+=8;NFSU2_TR(0x584a89);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x38ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x38ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x38ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B584a8c:{NFSU2_TR(0x584a8c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B584a8d:{NFSU2_TR(0x584a8d);
__builtin_memmove((R+0),(R+24),4);
}
B584a8f:{NFSU2_TR(0x584a8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B584a90:{NFSU2_TR(0x584a90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B584a91:{NFSU2_TR(0x584a91);
__builtin_memmove((R+16),(R+20),4);
}
B584a93:{NFSU2_TR(0x584a93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B584a94:{NFSU2_TR(0x584a94);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B584aa0:L584aa0:{c.instructions+=10;NFSU2_TR(0x584aa0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584aa1:{NFSU2_TR(0x584aa1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584aa2:{NFSU2_TR(0x584aa2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B584aa6:{NFSU2_TR(0x584aa6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584aa8:{NFSU2_TR(0x584aa8);
__builtin_memmove((R+24),(R+4),4);
}
B584aaa:{NFSU2_TR(0x584aaa);
u8 U[4];
w4(U+0,u32(0x7a1308ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584aaf:{NFSU2_TR(0x584aaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B584ab6:{NFSU2_TR(0x584ab6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584ab7:{NFSU2_TR(0x584ab7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B584abe:{NFSU2_TR(0x584abe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584ac3ull));
TAIL_STATIC(0x7414a0u,741);
}
B584ac3:L584ac3:{c.instructions+=3;NFSU2_TR(0x584ac3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B584ac6:{NFSU2_TR(0x584ac6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584ac7:{NFSU2_TR(0x584ac7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584accull));
TAIL_STATIC(0x7420b0u,742);
}
B584acc:L584acc:{c.instructions+=5;NFSU2_TR(0x584acc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B584acf:{NFSU2_TR(0x584acf);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B584ad3:{NFSU2_TR(0x584ad3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B584ad6:{NFSU2_TR(0x584ad6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B584ad8:{NFSU2_TR(0x584ad8);
if(r1(R+518)){{goto L584aeb;}}
}
B584ada:L584ada:{c.instructions+=5;NFSU2_TR(0x584ada);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584adc:{NFSU2_TR(0x584adc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584add:{NFSU2_TR(0x584add);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B584ae0:{NFSU2_TR(0x584ae0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584ae1:{NFSU2_TR(0x584ae1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584ae6ull));
TAIL_STATIC(0x43dc00u,43d);
}
B584ae6:L584ae6:{c.instructions+=2;NFSU2_TR(0x584ae6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B584ae9:{NFSU2_TR(0x584ae9);
{goto L584aef;}
}
B584aeb:L584aeb:{c.instructions+=1;NFSU2_TR(0x584aeb);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B584aef:L584aef:{c.instructions+=6;NFSU2_TR(0x584aef);
{u32 ea_=u32(u32(8802732u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B584af5:{NFSU2_TR(0x584af5);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B584afb:{NFSU2_TR(0x584afb);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B584aff:{NFSU2_TR(0x584aff);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B584b05:{NFSU2_TR(0x584b05);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B584b0b:{NFSU2_TR(0x584b0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584b10ull));
TAIL_STATIC(0x75bed4u,75b);
}
B584b10:L584b10:{c.instructions+=3;NFSU2_TR(0x584b10);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584b11:{NFSU2_TR(0x584b11);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B584b14:{NFSU2_TR(0x584b14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584b19ull));
TAIL_STATIC(0x43dbb0u,43d);
}
B584b19:L584b19:{c.instructions+=3;NFSU2_TR(0x584b19);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B584b1a:{NFSU2_TR(0x584b1a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584b1b:{NFSU2_TR(0x584b1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584b20ull));
TAIL_STATIC(0x575620u,575);
}
B584b20:L584b20:{c.instructions+=4;NFSU2_TR(0x584b20);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584b21:{NFSU2_TR(0x584b21);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584b22:{NFSU2_TR(0x584b22);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B584b25:{NFSU2_TR(0x584b25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584b2aull));
TAIL_STATIC(0x43dbd0u,43d);
}
B584b2a:L584b2a:{c.instructions+=5;NFSU2_TR(0x584b2a);
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
B584b2d:{NFSU2_TR(0x584b2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B584b2e:{NFSU2_TR(0x584b2e);
__builtin_memmove((R+0),(R+24),4);
}
B584b30:{NFSU2_TR(0x584b30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B584b31:{NFSU2_TR(0x584b31);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B584b40:L584b40:{c.instructions+=3;NFSU2_TR(0x584b40);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B584b43:{NFSU2_TR(0x584b43);
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
B584b45:{NFSU2_TR(0x584b45);
if(r1(R+518)){{goto L584b4e;}}
}
B584b47:L584b47:{c.instructions+=2;NFSU2_TR(0x584b47);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584b48:{NFSU2_TR(0x584b48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584b4dull));
TAIL_STATIC(0x575630u,575);
}
B584b4d:L584b4d:{c.instructions+=1;NFSU2_TR(0x584b4d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B584b4e:L584b4e:{c.instructions+=1;NFSU2_TR(0x584b4e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B584b50:L584b50:{c.instructions+=3;NFSU2_TR(0x584b50);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584b51:{NFSU2_TR(0x584b51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B584b53:{NFSU2_TR(0x584b53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584b58ull));
TAIL_STATIC(0x502fd0u,502);
}
B584b58:L584b58:{c.instructions+=2;NFSU2_TR(0x584b58);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B584b5a:{NFSU2_TR(0x584b5a);
if(r1(R+518)){{goto L584b6b;}}
}
B584b5c:L584b5c:{c.instructions+=1;NFSU2_TR(0x584b5c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B584b60:L584b60:{c.instructions+=2;NFSU2_TR(0x584b60);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+4)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B584b63:{NFSU2_TR(0x584b63);
if(r1(R+518)){{goto L584b71;}}
}
B584b65:L584b65:{c.instructions+=3;NFSU2_TR(0x584b65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B584b67:{NFSU2_TR(0x584b67);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B584b69:{NFSU2_TR(0x584b69);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x584b60u);}goto L584b60;}}
}
B584b6b:L584b6b:{c.instructions+=3;NFSU2_TR(0x584b6b);
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
B584b6d:{NFSU2_TR(0x584b6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B584b6e:{NFSU2_TR(0x584b6e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B584b71:L584b71:{c.instructions+=3;NFSU2_TR(0x584b71);
__builtin_memmove((R+0),(R+24),4);
}
B584b73:{NFSU2_TR(0x584b73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B584b74:{NFSU2_TR(0x584b74);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B584b80:L584b80:{c.instructions+=5;NFSU2_TR(0x584b80);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584b81:{NFSU2_TR(0x584b81);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584b82:{NFSU2_TR(0x584b82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B584b84:{NFSU2_TR(0x584b84);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584b85:{NFSU2_TR(0x584b85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584b8aull));
TAIL_STATIC(0x502fd0u,502);
}
B584b8a:L584b8a:{c.instructions+=3;NFSU2_TR(0x584b8a);
__builtin_memmove((R+28),(R+0),4);
}
B584b8c:{NFSU2_TR(0x584b8c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B584b8e:{NFSU2_TR(0x584b8e);
if(r1(R+518)){{goto L584bab;}}
}
B584b90:L584b90:{c.instructions+=1;NFSU2_TR(0x584b90);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B584b94:L584b94:{c.instructions+=4;NFSU2_TR(0x584b94);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xeull))));
__builtin_memmove((R+0),(U+0),4);
}
B584b97:{NFSU2_TR(0x584b97);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584b98:{NFSU2_TR(0x584b98);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584b99:{NFSU2_TR(0x584b99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584b9eull));
TAIL_STATIC(0x43dc30u,43d);
}
B584b9e:L584b9e:{c.instructions+=3;NFSU2_TR(0x584b9e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B584ba1:{NFSU2_TR(0x584ba1);
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
B584ba3:{NFSU2_TR(0x584ba3);
if(r1(R+518)){{goto L584bb3;}}
}
B584ba5:L584ba5:{c.instructions+=3;NFSU2_TR(0x584ba5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B584ba7:{NFSU2_TR(0x584ba7);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B584ba9:{NFSU2_TR(0x584ba9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x584b94u);}goto L584b94;}}
}
B584bab:L584bab:{c.instructions+=5;NFSU2_TR(0x584bab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B584bac:{NFSU2_TR(0x584bac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B584bad:{NFSU2_TR(0x584bad);
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
B584baf:{NFSU2_TR(0x584baf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B584bb0:{NFSU2_TR(0x584bb0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B584bb3:L584bb3:{c.instructions+=5;NFSU2_TR(0x584bb3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B584bb4:{NFSU2_TR(0x584bb4);
__builtin_memmove((R+0),(R+24),4);
}
B584bb6:{NFSU2_TR(0x584bb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B584bb7:{NFSU2_TR(0x584bb7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B584bb8:{NFSU2_TR(0x584bb8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B584bc0:L584bc0:{c.instructions+=6;NFSU2_TR(0x584bc0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B584bc4:{NFSU2_TR(0x584bc4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584bc5:{NFSU2_TR(0x584bc5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B584bc9:{NFSU2_TR(0x584bc9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584bca:{NFSU2_TR(0x584bca);
__builtin_memmove((R+4),(R+24),4);
}
B584bcc:{NFSU2_TR(0x584bcc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584bd1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x584b80u);}goto L584b80;}
}
B584bd1:L584bd1:{c.instructions+=2;NFSU2_TR(0x584bd1);
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
B584bd3:{NFSU2_TR(0x584bd3);
if(r1(R+518)){{goto L584c18;}}
}
B584bd5:L584bd5:{c.instructions+=5;NFSU2_TR(0x584bd5);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B584bd9:{NFSU2_TR(0x584bd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B584bdc:{NFSU2_TR(0x584bdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B584bdf:{NFSU2_TR(0x584bdf);
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
B584be1:{NFSU2_TR(0x584be1);
if(r1(R+518)){{goto L584c18;}}
}
B584be3:L584be3:{c.instructions+=3;NFSU2_TR(0x584be3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584be5:{NFSU2_TR(0x584be5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584be6:{NFSU2_TR(0x584be6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584bebull));
TAIL_STATIC(0x73d970u,73d);
}
B584beb:L584beb:{c.instructions+=3;NFSU2_TR(0x584beb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B584bee:{NFSU2_TR(0x584bee);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584bef:{NFSU2_TR(0x584bef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584bf4ull));
TAIL_STATIC(0x73d9b0u,73d);
}
B584bf4:L584bf4:{c.instructions+=4;NFSU2_TR(0x584bf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B584bf7:{NFSU2_TR(0x584bf7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B584bfa:{NFSU2_TR(0x584bfa);
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
B584bfc:{NFSU2_TR(0x584bfc);
if(r1(R+518)){{goto L584c18;}}
}
B584bfe:L584bfe:{c.instructions+=6;NFSU2_TR(0x584bfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B584c01:{NFSU2_TR(0x584c01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B584c02:{NFSU2_TR(0x584c02);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B584c06:{NFSU2_TR(0x584c06);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B584c0e:{NFSU2_TR(0x584c0e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B584c16:{NFSU2_TR(0x584c16);
{u32 t_=u32(r4(R+0));TAIL_DYNAMIC(t_);}
}
B584c18:L584c18:{c.instructions+=2;NFSU2_TR(0x584c18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B584c19:{NFSU2_TR(0x584c19);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B584c20:L584c20:{c.instructions+=6;NFSU2_TR(0x584c20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B584c23:{NFSU2_TR(0x584c23);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584c24:{NFSU2_TR(0x584c24);
__builtin_memmove((R+24),(R+4),4);
}
B584c26:{NFSU2_TR(0x584c26);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5b1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B584c2c:{NFSU2_TR(0x584c2c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B584c2e:{NFSU2_TR(0x584c2e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L584d74;}}
}
B584c34:L584c34:{c.instructions+=5;NFSU2_TR(0x584c34);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584c35:{NFSU2_TR(0x584c35);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B584c37:{NFSU2_TR(0x584c37);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584c38:{NFSU2_TR(0x584c38);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584c39:{NFSU2_TR(0x584c39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584c3eull));
TAIL_STATIC(0x50cee0u,50c);
}
B584c3e:L584c3e:{c.instructions+=3;NFSU2_TR(0x584c3e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584c3f:{NFSU2_TR(0x584c3f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584c41:{NFSU2_TR(0x584c41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584c46ull));
TAIL_STATIC(0x50cee0u,50c);
}
B584c46:L584c46:{c.instructions+=3;NFSU2_TR(0x584c46);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584c47:{NFSU2_TR(0x584c47);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584c49:{NFSU2_TR(0x584c49);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584c4eull));
TAIL_STATIC(0x50cee0u,50c);
}
B584c4e:L584c4e:{c.instructions+=3;NFSU2_TR(0x584c4e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584c4f:{NFSU2_TR(0x584c4f);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584c51:{NFSU2_TR(0x584c51);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584c56ull));
TAIL_STATIC(0x50cee0u,50c);
}
B584c56:L584c56:{c.instructions+=3;NFSU2_TR(0x584c56);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584c57:{NFSU2_TR(0x584c57);
u8 U[4];
w4(U+0,u32(0x9757a0c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584c5c:{NFSU2_TR(0x584c5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584c61ull));
TAIL_STATIC(0x55dde0u,55d);
}
B584c61:L584c61:{c.instructions+=4;NFSU2_TR(0x584c61);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B584c67:{NFSU2_TR(0x584c67);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
}
B584c6a:{NFSU2_TR(0x584c6a);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B584c6c:{NFSU2_TR(0x584c6c);
if(r1(R+518)){{goto L584c7d;}}
}
B584c6e:L584c6e:{c.instructions+=2;NFSU2_TR(0x584c6e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584c6f:{NFSU2_TR(0x584c6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584c74ull));
TAIL_STATIC(0x73ef30u,73e);
}
B584c74:L584c74:{c.instructions+=3;NFSU2_TR(0x584c74);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B584c77:{NFSU2_TR(0x584c77);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B584c7b:{NFSU2_TR(0x584c7b);
{goto L584c81;}
}
B584c7d:L584c7d:{c.instructions+=1;NFSU2_TR(0x584c7d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B584c81:L584c81:{c.instructions+=3;NFSU2_TR(0x584c81);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+20)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B584c85:{NFSU2_TR(0x584c85);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B584c89:{NFSU2_TR(0x584c89);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L584ce3;}}
}
B584c8b:L584c8b:{c.instructions+=3;NFSU2_TR(0x584c8b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584c8c:{NFSU2_TR(0x584c8c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584c8d:{NFSU2_TR(0x584c8d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x55ull))));
__builtin_memmove((R+12),(U+0),4);
}
B584c90:L584c90:{c.instructions+=4;NFSU2_TR(0x584c90);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B584c96:{NFSU2_TR(0x584c96);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584c97:{NFSU2_TR(0x584c97);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584c98:{NFSU2_TR(0x584c98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584c9dull));
TAIL_STATIC(0x73eee0u,73e);
}
B584c9d:L584c9d:{c.instructions+=4;NFSU2_TR(0x584c9d);
__builtin_memmove((R+28),(R+0),4);
}
B584c9f:{NFSU2_TR(0x584c9f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B584ca2:{NFSU2_TR(0x584ca2);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B584ca4:{NFSU2_TR(0x584ca4);
if(r1(R+518)){{goto L584cd6;}}
}
B584ca6:L584ca6:{c.instructions+=2;NFSU2_TR(0x584ca6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584ca7:{NFSU2_TR(0x584ca7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584cacull));
TAIL_STATIC(0x73f940u,73f);
}
B584cac:L584cac:{c.instructions+=3;NFSU2_TR(0x584cac);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B584caf:{NFSU2_TR(0x584caf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B584cb1:{NFSU2_TR(0x584cb1);
if(r1(R+518)){{goto L584cd6;}}
}
B584cb3:L584cb3:{c.instructions+=2;NFSU2_TR(0x584cb3);
u8 U[22];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
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
B584cb8:{NFSU2_TR(0x584cb8);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L584cd6;}}
}
B584cba:L584cba:{c.instructions+=2;NFSU2_TR(0x584cba);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584cbb:{NFSU2_TR(0x584cbb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584cc0ull));
TAIL_STATIC(0x73ead0u,73e);
}
B584cc0:L584cc0:{c.instructions+=3;NFSU2_TR(0x584cc0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584cc1:{NFSU2_TR(0x584cc1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584cc2:{NFSU2_TR(0x584cc2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584cc7ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B584cc7:L584cc7:{c.instructions+=5;NFSU2_TR(0x584cc7);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B584ccb:{NFSU2_TR(0x584ccb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B584cce:{NFSU2_TR(0x584cce);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B584ccf:{NFSU2_TR(0x584ccf);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B584cd3:{NFSU2_TR(0x584cd3);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B584cd6:L584cd6:{c.instructions+=4;NFSU2_TR(0x584cd6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B584cda:{NFSU2_TR(0x584cda);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B584cdb:{NFSU2_TR(0x584cdb);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B584cdd:{NFSU2_TR(0x584cdd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x584c90u);}goto L584c90;}}
}
B584cdf:L584cdf:{c.instructions+=3;NFSU2_TR(0x584cdf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B584ce0:{NFSU2_TR(0x584ce0);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B584ce2:{NFSU2_TR(0x584ce2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B584ce3:L584ce3:{c.instructions+=3;NFSU2_TR(0x584ce3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B584ce9:{NFSU2_TR(0x584ce9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584cea:{NFSU2_TR(0x584cea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584cefull));
TAIL_STATIC(0x73ea00u,73e);
}
B584cef:L584cef:{c.instructions+=5;NFSU2_TR(0x584cef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B584cf5:{NFSU2_TR(0x584cf5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584cf6:{NFSU2_TR(0x584cf6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584cf7:{NFSU2_TR(0x584cf7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584cf8:{NFSU2_TR(0x584cf8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584cfdull));
TAIL_STATIC(0x73ea70u,73e);
}
B584cfd:L584cfd:{c.instructions+=5;NFSU2_TR(0x584cfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B584d03:{NFSU2_TR(0x584d03);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584d04:{NFSU2_TR(0x584d04);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584d05:{NFSU2_TR(0x584d05);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584d06:{NFSU2_TR(0x584d06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584d0bull));
TAIL_STATIC(0x73e9e0u,73e);
}
B584d0b:L584d0b:{c.instructions+=5;NFSU2_TR(0x584d0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B584d11:{NFSU2_TR(0x584d11);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584d12:{NFSU2_TR(0x584d12);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584d13:{NFSU2_TR(0x584d13);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584d14:{NFSU2_TR(0x584d14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584d19ull));
TAIL_STATIC(0x73eaa0u,73e);
}
B584d19:L584d19:{c.instructions+=5;NFSU2_TR(0x584d19);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B584d1f:{NFSU2_TR(0x584d1f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584d20:{NFSU2_TR(0x584d20);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584d21:{NFSU2_TR(0x584d21);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584d22:{NFSU2_TR(0x584d22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584d27ull));
TAIL_STATIC(0x73ea40u,73e);
}
B584d27:L584d27:{c.instructions+=6;NFSU2_TR(0x584d27);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5a4ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B584d2e:{NFSU2_TR(0x584d2e);
__builtin_memmove(gp(0x836378),(R+20),4);
}
B584d34:{NFSU2_TR(0x584d34);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B584d3a:{NFSU2_TR(0x584d3a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x34ull))));
}
B584d3d:{NFSU2_TR(0x584d3d);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B584d3f:{NFSU2_TR(0x584d3f);
if(r1(R+518)){{goto L584d57;}}
}
B584d41:L584d41:{c.instructions+=3;NFSU2_TR(0x584d41);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584d42:{NFSU2_TR(0x584d42);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584d43:{NFSU2_TR(0x584d43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584d48ull));
TAIL_STATIC(0x73e380u,73e);
}
B584d48:L584d48:{c.instructions+=3;NFSU2_TR(0x584d48);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B584d4e:{NFSU2_TR(0x584d4e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584d4f:{NFSU2_TR(0x584d4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584d54ull));
TAIL_STATIC(0x73e2c0u,73e);
}
B584d54:L584d54:{c.instructions+=1;NFSU2_TR(0x584d54);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B584d57:L584d57:{c.instructions+=4;NFSU2_TR(0x584d57);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B584d5d:{NFSU2_TR(0x584d5d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584d5e:{NFSU2_TR(0x584d5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B584d64:{NFSU2_TR(0x584d64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584d69ull));
TAIL_STATIC(0x73f810u,73f);
}
B584d69:L584d69:{c.instructions+=3;NFSU2_TR(0x584d69);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B584d6c:{NFSU2_TR(0x584d6c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5b1ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B584d73:{NFSU2_TR(0x584d73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B584d74:L584d74:{c.instructions+=3;NFSU2_TR(0x584d74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B584d75:{NFSU2_TR(0x584d75);
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
B584d78:{NFSU2_TR(0x584d78);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B584d80:L584d80:{c.instructions+=9;NFSU2_TR(0x584d80);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584d81:{NFSU2_TR(0x584d81);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584d82:{NFSU2_TR(0x584d82);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584d83:{NFSU2_TR(0x584d83);
__builtin_memmove((R+24),(R+4),4);
}
B584d85:{NFSU2_TR(0x584d85);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B584d8b:{NFSU2_TR(0x584d8b);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B584d8d:{NFSU2_TR(0x584d8d);
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
B584d8f:{NFSU2_TR(0x584d8f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5b1ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B584d95:{NFSU2_TR(0x584d95);
if(r1(R+518)){{goto L584f02;}}
}
B584d9b:L584d9b:{c.instructions+=5;NFSU2_TR(0x584d9b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584d9c:{NFSU2_TR(0x584d9c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5a4ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B584da2:{NFSU2_TR(0x584da2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584da3:{NFSU2_TR(0x584da3);
__builtin_memmove(gp(0x836378),(R+12),4);
}
B584da9:{NFSU2_TR(0x584da9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584daeull));
TAIL_STATIC(0x50cee0u,50c);
}
B584dae:L584dae:{c.instructions+=3;NFSU2_TR(0x584dae);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584daf:{NFSU2_TR(0x584daf);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584db1:{NFSU2_TR(0x584db1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584db6ull));
TAIL_STATIC(0x50cee0u,50c);
}
B584db6:L584db6:{c.instructions+=3;NFSU2_TR(0x584db6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584db7:{NFSU2_TR(0x584db7);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584db9:{NFSU2_TR(0x584db9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584dbeull));
TAIL_STATIC(0x50cee0u,50c);
}
B584dbe:L584dbe:{c.instructions+=3;NFSU2_TR(0x584dbe);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584dbf:{NFSU2_TR(0x584dbf);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584dc1:{NFSU2_TR(0x584dc1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584dc6ull));
TAIL_STATIC(0x50cee0u,50c);
}
B584dc6:L584dc6:{c.instructions+=3;NFSU2_TR(0x584dc6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584dc7:{NFSU2_TR(0x584dc7);
u8 U[4];
w4(U+0,u32(0x9757a0c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584dcc:{NFSU2_TR(0x584dcc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584dd1ull));
TAIL_STATIC(0x55dde0u,55d);
}
B584dd1:L584dd1:{c.instructions+=4;NFSU2_TR(0x584dd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B584dd7:{NFSU2_TR(0x584dd7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
}
B584dda:{NFSU2_TR(0x584dda);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B584ddc:{NFSU2_TR(0x584ddc);
if(r1(R+518)){{goto L584ded;}}
}
B584dde:L584dde:{c.instructions+=2;NFSU2_TR(0x584dde);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584ddf:{NFSU2_TR(0x584ddf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584de4ull));
TAIL_STATIC(0x73ef30u,73e);
}
B584de4:L584de4:{c.instructions+=3;NFSU2_TR(0x584de4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B584de7:{NFSU2_TR(0x584de7);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B584deb:{NFSU2_TR(0x584deb);
{goto L584df1;}
}
B584ded:L584ded:{c.instructions+=1;NFSU2_TR(0x584ded);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B584df1:L584df1:{c.instructions+=6;NFSU2_TR(0x584df1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B584df5:{NFSU2_TR(0x584df5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584df6:{NFSU2_TR(0x584df6);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B584df8:{NFSU2_TR(0x584df8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B584dfa:{NFSU2_TR(0x584dfa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584dfb:{NFSU2_TR(0x584dfb);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L584e4c;}}
}
B584dfd:L584dfd:{c.instructions+=1;NFSU2_TR(0x584dfd);
__builtin_memmove((R+4),(R+4),4);
}
B584e00:L584e00:{c.instructions+=4;NFSU2_TR(0x584e00);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B584e06:{NFSU2_TR(0x584e06);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584e07:{NFSU2_TR(0x584e07);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584e08:{NFSU2_TR(0x584e08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584e0dull));
TAIL_STATIC(0x73eee0u,73e);
}
B584e0d:L584e0d:{c.instructions+=4;NFSU2_TR(0x584e0d);
__builtin_memmove((R+28),(R+0),4);
}
B584e0f:{NFSU2_TR(0x584e0f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B584e12:{NFSU2_TR(0x584e12);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B584e14:{NFSU2_TR(0x584e14);
if(r1(R+518)){{goto L584e43;}}
}
B584e16:L584e16:{c.instructions+=2;NFSU2_TR(0x584e16);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584e17:{NFSU2_TR(0x584e17);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584e1cull));
TAIL_STATIC(0x73f1f0u,73f);
}
B584e1c:L584e1c:{c.instructions+=3;NFSU2_TR(0x584e1c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B584e1f:{NFSU2_TR(0x584e1f);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+0))&u32(u32(0x400000ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B584e24:{NFSU2_TR(0x584e24);
if(r1(R+518)){{goto L584e43;}}
}
B584e26:L584e26:{c.instructions+=5;NFSU2_TR(0x584e26);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584e27:{NFSU2_TR(0x584e27);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584e28:{NFSU2_TR(0x584e28);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584e2a:{NFSU2_TR(0x584e2a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584e2b:{NFSU2_TR(0x584e2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584e30ull));
TAIL_STATIC(0x73ead0u,73e);
}
B584e30:L584e30:{c.instructions+=5;NFSU2_TR(0x584e30);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B584e36:{NFSU2_TR(0x584e36);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B584e39:{NFSU2_TR(0x584e39);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584e3a:{NFSU2_TR(0x584e3a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584e3b:{NFSU2_TR(0x584e3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584e40ull));
TAIL_STATIC(0x73fb50u,73f);
}
B584e40:L584e40:{c.instructions+=1;NFSU2_TR(0x584e40);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B584e43:L584e43:{c.instructions+=4;NFSU2_TR(0x584e43);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B584e47:{NFSU2_TR(0x584e47);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B584e48:{NFSU2_TR(0x584e48);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B584e4a:{NFSU2_TR(0x584e4a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x584e00u);}goto L584e00;}}
}
B584e4c:L584e4c:{c.instructions+=3;NFSU2_TR(0x584e4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B584e52:{NFSU2_TR(0x584e52);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B584e54:{NFSU2_TR(0x584e54);
if(r1(R+518)){{goto L584e65;}}
}
B584e56:L584e56:{c.instructions+=3;NFSU2_TR(0x584e56);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584e57:{NFSU2_TR(0x584e57);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B584e5d:{NFSU2_TR(0x584e5d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584e62ull));
TAIL_STATIC(0x73ea00u,73e);
}
B584e62:L584e62:{c.instructions+=1;NFSU2_TR(0x584e62);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B584e65:L584e65:{c.instructions+=5;NFSU2_TR(0x584e65);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B584e6b:{NFSU2_TR(0x584e6b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584e6c:{NFSU2_TR(0x584e6c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584e6d:{NFSU2_TR(0x584e6d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584e6e:{NFSU2_TR(0x584e6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584e73ull));
TAIL_STATIC(0x73ea70u,73e);
}
B584e73:L584e73:{c.instructions+=5;NFSU2_TR(0x584e73);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B584e79:{NFSU2_TR(0x584e79);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584e7a:{NFSU2_TR(0x584e7a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584e7b:{NFSU2_TR(0x584e7b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584e7c:{NFSU2_TR(0x584e7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584e81ull));
TAIL_STATIC(0x73e9e0u,73e);
}
B584e81:L584e81:{c.instructions+=5;NFSU2_TR(0x584e81);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B584e87:{NFSU2_TR(0x584e87);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584e88:{NFSU2_TR(0x584e88);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584e89:{NFSU2_TR(0x584e89);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584e8a:{NFSU2_TR(0x584e8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584e8full));
TAIL_STATIC(0x73eaa0u,73e);
}
B584e8f:L584e8f:{c.instructions+=3;NFSU2_TR(0x584e8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B584e95:{NFSU2_TR(0x584e95);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584e96:{NFSU2_TR(0x584e96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584e9bull));
TAIL_STATIC(0x73f7a0u,73f);
}
B584e9b:L584e9b:{c.instructions+=3;NFSU2_TR(0x584e9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B584ea1:{NFSU2_TR(0x584ea1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584ea2:{NFSU2_TR(0x584ea2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584ea7ull));
TAIL_STATIC(0x73f7d0u,73f);
}
B584ea7:L584ea7:{c.instructions+=10;NFSU2_TR(0x584ea7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B584ead:{NFSU2_TR(0x584ead);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B584eb3:{NFSU2_TR(0x584eb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x104ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B584eb9:{NFSU2_TR(0x584eb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B584ebf:{NFSU2_TR(0x584ebf);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5a4ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B584ec5:{NFSU2_TR(0x584ec5);
__builtin_memmove(gp(0x836378),(R+12),4);
}
B584ecb:{NFSU2_TR(0x584ecb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B584ed1:{NFSU2_TR(0x584ed1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2cull))));
}
B584ed4:{NFSU2_TR(0x584ed4);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B584ed6:{NFSU2_TR(0x584ed6);
if(r1(R+518)){{goto L584eee;}}
}
B584ed8:L584ed8:{c.instructions+=3;NFSU2_TR(0x584ed8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584ed9:{NFSU2_TR(0x584ed9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584eda:{NFSU2_TR(0x584eda);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584edfull));
TAIL_STATIC(0x73e380u,73e);
}
B584edf:L584edf:{c.instructions+=3;NFSU2_TR(0x584edf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B584ee5:{NFSU2_TR(0x584ee5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584ee6:{NFSU2_TR(0x584ee6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584eebull));
TAIL_STATIC(0x73e2c0u,73e);
}
B584eeb:L584eeb:{c.instructions+=1;NFSU2_TR(0x584eeb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B584eee:L584eee:{c.instructions+=4;NFSU2_TR(0x584eee);
w4(R+4,u32(0x28ull));
}
B584ef3:{NFSU2_TR(0x584ef3);
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
B584ef5:{NFSU2_TR(0x584ef5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x55ull))));
__builtin_memmove((R+28),(U+0),4);
}
B584ef8:{NFSU2_TR(0x584ef8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B584efe:L584efe:{c.instructions+=1;NFSU2_TR(0x584efe);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L584f00;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x584efeu);}goto L584efe;}
}
B584f00:L584f00:{c.instructions+=2;NFSU2_TR(0x584f00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B584f01:{NFSU2_TR(0x584f01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B584f02:L584f02:{c.instructions+=4;NFSU2_TR(0x584f02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B584f03:{NFSU2_TR(0x584f03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B584f04:{NFSU2_TR(0x584f04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B584f05:{NFSU2_TR(0x584f05);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B584f10:L584f10:{c.instructions+=3;NFSU2_TR(0x584f10);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B584f16:{NFSU2_TR(0x584f16);
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
B584f18:{NFSU2_TR(0x584f18);
if(r1(R+518)){{goto L584f3d;}}
}
B584f1a:L584f1a:{c.instructions+=4;NFSU2_TR(0x584f1a);
s4(0x7fbe54,u32(0x5832e0ull));
}
B584f24:{NFSU2_TR(0x584f24);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B584f2a:{NFSU2_TR(0x584f2a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584f2b:{NFSU2_TR(0x584f2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584f30ull));
TAIL_STATIC(0x740600u,740);
}
B584f30:L584f30:{c.instructions+=2;NFSU2_TR(0x584f30);
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
B584f33:{NFSU2_TR(0x584f33);
s4(0x7fbe54,u32(0x5832d0ull));
}
B584f3d:L584f3d:{c.instructions+=1;NFSU2_TR(0x584f3d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B584f40:L584f40:{c.instructions+=9;NFSU2_TR(0x584f40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B584f43:{NFSU2_TR(0x584f43);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584f44:{NFSU2_TR(0x584f44);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584f45:{NFSU2_TR(0x584f45);
__builtin_memmove((R+20),(R+4),4);
}
B584f47:{NFSU2_TR(0x584f47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B584f4d:{NFSU2_TR(0x584f4d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584f4e:{NFSU2_TR(0x584f4e);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B584f50:{NFSU2_TR(0x584f50);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B584f52:{NFSU2_TR(0x584f52);
if(r1(R+518)){{goto L584f63;}}
}
B584f54:L584f54:{c.instructions+=2;NFSU2_TR(0x584f54);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584f55:{NFSU2_TR(0x584f55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584f5aull));
TAIL_STATIC(0x73ef30u,73e);
}
B584f5a:L584f5a:{c.instructions+=3;NFSU2_TR(0x584f5a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B584f5d:{NFSU2_TR(0x584f5d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B584f61:{NFSU2_TR(0x584f61);
{goto L584f67;}
}
B584f63:L584f63:{c.instructions+=1;NFSU2_TR(0x584f63);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B584f67:L584f67:{c.instructions+=5;NFSU2_TR(0x584f67);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B584f6b:{NFSU2_TR(0x584f6b);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B584f6d:{NFSU2_TR(0x584f6d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B584f6f:{NFSU2_TR(0x584f6f);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B584f73:{NFSU2_TR(0x584f73);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x585007u,585);}
}
B584f79:L584f79:{c.instructions+=2;NFSU2_TR(0x584f79);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584f7a:{NFSU2_TR(0x584f7a);
__builtin_memmove((R+12),(R+12),4);
}
B584f80:L584f80:{c.instructions+=4;NFSU2_TR(0x584f80);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B584f86:{NFSU2_TR(0x584f86);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584f87:{NFSU2_TR(0x584f87);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584f88:{NFSU2_TR(0x584f88);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584f8dull));
TAIL_STATIC(0x73eee0u,73e);
}
B584f8d:L584f8d:{c.instructions+=4;NFSU2_TR(0x584f8d);
__builtin_memmove((R+24),(R+0),4);
}
B584f8f:{NFSU2_TR(0x584f8f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B584f92:{NFSU2_TR(0x584f92);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B584f94:{NFSU2_TR(0x584f94);
if(r1(R+518)){{goto L584fda;}}
}
B584f96:L584f96:{c.instructions+=2;NFSU2_TR(0x584f96);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584f97:{NFSU2_TR(0x584f97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584f9cull));
TAIL_STATIC(0x73eb70u,73e);
}
B584f9c:L584f9c:{c.instructions+=3;NFSU2_TR(0x584f9c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B584f9f:{NFSU2_TR(0x584f9f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B584fa1:{NFSU2_TR(0x584fa1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L584fda;}}
}
B584fa3:L584fa3:{c.instructions+=2;NFSU2_TR(0x584fa3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584fa4:{NFSU2_TR(0x584fa4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584fa9ull));
TAIL_STATIC(0x73eb00u,73e);
}
B584fa9:L584fa9:{c.instructions+=3;NFSU2_TR(0x584fa9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B584fac:{NFSU2_TR(0x584fac);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B584fae:{NFSU2_TR(0x584fae);
if(r1(R+518)){{goto L584fda;}}
}
B584fb0:L584fb0:{c.instructions+=2;NFSU2_TR(0x584fb0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584fb1:{NFSU2_TR(0x584fb1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584fb6ull));
TAIL_STATIC(0x73eae0u,73e);
}
B584fb6:L584fb6:{c.instructions+=3;NFSU2_TR(0x584fb6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B584fb9:{NFSU2_TR(0x584fb9);
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
B584fbb:{NFSU2_TR(0x584fbb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L584fda;}}
}
B584fbd:L584fbd:{c.instructions+=4;NFSU2_TR(0x584fbd);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584fbf:{NFSU2_TR(0x584fbf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584fc0:{NFSU2_TR(0x584fc0);
w1(R+12,u8(0x1ull));
}
B584fc2:{NFSU2_TR(0x584fc2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584fc7ull));
TAIL_STATIC(0x73ead0u,73e);
}
B584fc7:L584fc7:{c.instructions+=5;NFSU2_TR(0x584fc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B584fcd:{NFSU2_TR(0x584fcd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B584fd0:{NFSU2_TR(0x584fd0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584fd1:{NFSU2_TR(0x584fd1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584fd2:{NFSU2_TR(0x584fd2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584fd7ull));
TAIL_STATIC(0x740790u,740);
}
B584fd7:L584fd7:{c.instructions+=1;NFSU2_TR(0x584fd7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B584fda:L584fda:{c.instructions+=4;NFSU2_TR(0x584fda);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B584fde:{NFSU2_TR(0x584fde);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B584fdf:{NFSU2_TR(0x584fdf);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B584fe1:{NFSU2_TR(0x584fe1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x584f80u);}goto L584f80;}}
}
B584fe3:L584fe3:{c.instructions+=4;NFSU2_TR(0x584fe3);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B584fe5:{NFSU2_TR(0x584fe5);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B584fe9:{NFSU2_TR(0x584fe9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B584fea:{NFSU2_TR(0x584fea);
if(r1(R+518)){TAIL_STATIC(0x585007u,585);}
}
B584fec:L584fec:{c.instructions+=2;NFSU2_TR(0x584fec);
u8 U[4];
w4(U+0,u32(0x7902a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584ff1:{NFSU2_TR(0x584ff1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x584ff6ull));
TAIL_STATIC(0x52cef0u,52c);
}
B584ff6:L584ff6:{c.instructions+=3;NFSU2_TR(0x584ff6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B584ff9:{NFSU2_TR(0x584ff9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B584ffb:{NFSU2_TR(0x584ffb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x585007u,585);}
}
B584ffd:L584ffd:{c.instructions+=2;NFSU2_TR(0x584ffd);
u8 U[4];
w4(U+0,u32(0x56ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B584fff:{NFSU2_TR(0x584fff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x585004ull));
TAIL_STATIC(0x50d180u,50d);
}
XIT:NFSU2_TR_EXIT(0x584,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
