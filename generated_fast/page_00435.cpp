#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_40e(u8* __restrict R,Cpu& c);
u32 body_430(u8* __restrict R,Cpu& c);
u32 body_431(u8* __restrict R,Cpu& c);
u32 body_432(u8* __restrict R,Cpu& c);
u32 body_433(u8* __restrict R,Cpu& c);
u32 body_434(u8* __restrict R,Cpu& c);
u32 body_436(u8* __restrict R,Cpu& c);
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_479(u8* __restrict R,Cpu& c);
u32 body_484(u8* __restrict R,Cpu& c);
u32 body_48c(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_593(u8* __restrict R,Cpu& c);
u32 body_5e8(u8* __restrict R,Cpu& c);
u32 body_5e9(u8* __restrict R,Cpu& c);
u32 body_5eb(u8* __restrict R,Cpu& c);
u32 body_5f4(u8* __restrict R,Cpu& c);
u32 body_6e2(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x435,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x435,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_435(u8* __restrict R,Cpu& c);
u32 page_435(Cpu& c){return body_435(c.regs.data(),c);}
__attribute__((noinline)) u32 body_435(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x435000:goto L435000;
case 0x435001:c.instructions+=4;goto B435001;
case 0x435002:c.instructions+=3;goto B435002;
case 0x435004:c.instructions+=2;goto B435004;
case 0x435005:c.instructions+=1;goto B435005;
case 0x435010:goto L435010;
case 0x435012:c.instructions+=30;goto B435012;
case 0x435014:c.instructions+=29;goto B435014;
case 0x435017:c.instructions+=28;goto B435017;
case 0x43501a:c.instructions+=27;goto B43501a;
case 0x43501d:c.instructions+=26;goto B43501d;
case 0x435020:c.instructions+=25;goto B435020;
case 0x435023:c.instructions+=24;goto B435023;
case 0x435025:c.instructions+=23;goto B435025;
case 0x435028:c.instructions+=22;goto B435028;
case 0x43502b:c.instructions+=21;goto B43502b;
case 0x43502e:c.instructions+=20;goto B43502e;
case 0x435031:c.instructions+=19;goto B435031;
case 0x435036:c.instructions+=18;goto B435036;
case 0x435039:c.instructions+=17;goto B435039;
case 0x43503c:c.instructions+=16;goto B43503c;
case 0x43503f:c.instructions+=15;goto B43503f;
case 0x435042:c.instructions+=14;goto B435042;
case 0x435045:c.instructions+=13;goto B435045;
case 0x435048:c.instructions+=12;goto B435048;
case 0x43504b:c.instructions+=11;goto B43504b;
case 0x43504e:c.instructions+=10;goto B43504e;
case 0x435051:c.instructions+=9;goto B435051;
case 0x435054:c.instructions+=8;goto B435054;
case 0x435057:c.instructions+=7;goto B435057;
case 0x43505a:c.instructions+=6;goto B43505a;
case 0x43505d:c.instructions+=5;goto B43505d;
case 0x435060:c.instructions+=4;goto B435060;
case 0x435063:c.instructions+=3;goto B435063;
case 0x435066:c.instructions+=2;goto B435066;
case 0x435069:c.instructions+=1;goto B435069;
case 0x435070:goto L435070;
case 0x435071:c.instructions+=2;goto B435071;
case 0x435073:c.instructions+=1;goto B435073;
case 0x435078:goto L435078;
case 0x43507a:c.instructions+=24;goto B43507a;
case 0x43507d:c.instructions+=23;goto B43507d;
case 0x435080:c.instructions+=22;goto B435080;
case 0x435083:c.instructions+=21;goto B435083;
case 0x435086:c.instructions+=20;goto B435086;
case 0x43508b:c.instructions+=19;goto B43508b;
case 0x43508e:c.instructions+=18;goto B43508e;
case 0x435091:c.instructions+=17;goto B435091;
case 0x435094:c.instructions+=16;goto B435094;
case 0x435097:c.instructions+=15;goto B435097;
case 0x43509a:c.instructions+=14;goto B43509a;
case 0x43509d:c.instructions+=13;goto B43509d;
case 0x4350a0:c.instructions+=12;goto B4350a0;
case 0x4350a3:c.instructions+=11;goto B4350a3;
case 0x4350a6:c.instructions+=10;goto B4350a6;
case 0x4350a9:c.instructions+=9;goto B4350a9;
case 0x4350ac:c.instructions+=8;goto B4350ac;
case 0x4350af:c.instructions+=7;goto B4350af;
case 0x4350b2:c.instructions+=6;goto B4350b2;
case 0x4350b5:c.instructions+=5;goto B4350b5;
case 0x4350b8:c.instructions+=4;goto B4350b8;
case 0x4350bb:c.instructions+=3;goto B4350bb;
case 0x4350be:c.instructions+=2;goto B4350be;
case 0x4350bf:c.instructions+=1;goto B4350bf;
case 0x4350c0:goto L4350c0;
case 0x4350c3:c.instructions+=11;goto B4350c3;
case 0x4350c7:c.instructions+=10;goto B4350c7;
case 0x4350c8:c.instructions+=9;goto B4350c8;
case 0x4350cc:c.instructions+=8;goto B4350cc;
case 0x4350ce:c.instructions+=7;goto B4350ce;
case 0x4350cf:c.instructions+=6;goto B4350cf;
case 0x4350d3:c.instructions+=5;goto B4350d3;
case 0x4350d4:c.instructions+=4;goto B4350d4;
case 0x4350d5:c.instructions+=3;goto B4350d5;
case 0x4350dd:c.instructions+=2;goto B4350dd;
case 0x4350e5:c.instructions+=1;goto B4350e5;
case 0x4350ea:goto L4350ea;
case 0x4350ed:c.instructions+=2;goto B4350ed;
case 0x4350ef:c.instructions+=1;goto B4350ef;
case 0x4350f1:goto L4350f1;
case 0x4350f5:c.instructions+=4;goto B4350f5;
case 0x4350f9:c.instructions+=3;goto B4350f9;
case 0x4350fa:c.instructions+=2;goto B4350fa;
case 0x4350fb:c.instructions+=1;goto B4350fb;
case 0x435100:goto L435100;
case 0x435104:c.instructions+=6;goto B435104;
case 0x435107:c.instructions+=5;goto B435107;
case 0x43510b:c.instructions+=4;goto B43510b;
case 0x43510d:c.instructions+=3;goto B43510d;
case 0x43510e:c.instructions+=2;goto B43510e;
case 0x435110:c.instructions+=1;goto B435110;
case 0x435113:goto L435113;
case 0x435117:c.instructions+=4;goto B435117;
case 0x435119:c.instructions+=3;goto B435119;
case 0x43511e:c.instructions+=2;goto B43511e;
case 0x43511f:c.instructions+=1;goto B43511f;
case 0x435121:goto L435121;
case 0x435124:goto L435124;
case 0x435127:c.instructions+=3;goto B435127;
case 0x435128:c.instructions+=2;goto B435128;
case 0x43512b:c.instructions+=1;goto B43512b;
case 0x43512e:goto L43512e;
case 0x435130:c.instructions+=3;goto B435130;
case 0x435131:c.instructions+=2;goto B435131;
case 0x435134:c.instructions+=1;goto B435134;
case 0x435140:goto L435140;
case 0x435143:c.instructions+=30;goto B435143;
case 0x435144:c.instructions+=29;goto B435144;
case 0x435145:c.instructions+=28;goto B435145;
case 0x435147:c.instructions+=27;goto B435147;
case 0x43514a:c.instructions+=26;goto B43514a;
case 0x43514d:c.instructions+=25;goto B43514d;
case 0x435150:c.instructions+=24;goto B435150;
case 0x435151:c.instructions+=23;goto B435151;
case 0x435153:c.instructions+=22;goto B435153;
case 0x435155:c.instructions+=21;goto B435155;
case 0x435158:c.instructions+=20;goto B435158;
case 0x43515c:c.instructions+=19;goto B43515c;
case 0x435162:c.instructions+=18;goto B435162;
case 0x435166:c.instructions+=17;goto B435166;
case 0x43516a:c.instructions+=16;goto B43516a;
case 0x43516e:c.instructions+=15;goto B43516e;
case 0x435174:c.instructions+=14;goto B435174;
case 0x435177:c.instructions+=13;goto B435177;
case 0x43517b:c.instructions+=12;goto B43517b;
case 0x43517f:c.instructions+=11;goto B43517f;
case 0x435185:c.instructions+=10;goto B435185;
case 0x435188:c.instructions+=9;goto B435188;
case 0x43518c:c.instructions+=8;goto B43518c;
case 0x435192:c.instructions+=7;goto B435192;
case 0x435195:c.instructions+=6;goto B435195;
case 0x435199:c.instructions+=5;goto B435199;
case 0x43519d:c.instructions+=4;goto B43519d;
case 0x4351a3:c.instructions+=3;goto B4351a3;
case 0x4351a6:c.instructions+=2;goto B4351a6;
case 0x4351aa:c.instructions+=1;goto B4351aa;
case 0x4351ac:goto L4351ac;
case 0x4351af:c.instructions+=8;goto B4351af;
case 0x4351b2:c.instructions+=7;goto B4351b2;
case 0x4351b5:c.instructions+=6;goto B4351b5;
case 0x4351b8:c.instructions+=5;goto B4351b8;
case 0x4351bb:c.instructions+=4;goto B4351bb;
case 0x4351be:c.instructions+=3;goto B4351be;
case 0x4351c0:c.instructions+=2;goto B4351c0;
case 0x4351c4:c.instructions+=1;goto B4351c4;
case 0x4351c6:goto L4351c6;
case 0x4351c9:c.instructions+=1;goto B4351c9;
case 0x4351cd:goto L4351cd;
case 0x4351cf:c.instructions+=1;goto B4351cf;
case 0x4351d1:goto L4351d1;
case 0x4351d4:c.instructions+=4;goto B4351d4;
case 0x4351d7:c.instructions+=3;goto B4351d7;
case 0x4351da:c.instructions+=2;goto B4351da;
case 0x4351de:c.instructions+=1;goto B4351de;
case 0x4351e0:goto L4351e0;
case 0x4351e8:goto L4351e8;
case 0x4351ea:c.instructions+=1;goto B4351ea;
case 0x4351ec:goto L4351ec;
case 0x4351ef:c.instructions+=4;goto B4351ef;
case 0x4351f2:c.instructions+=3;goto B4351f2;
case 0x4351f5:c.instructions+=2;goto B4351f5;
case 0x4351f9:c.instructions+=1;goto B4351f9;
case 0x4351fb:goto L4351fb;
case 0x4351fe:c.instructions+=1;goto B4351fe;
case 0x435202:goto L435202;
case 0x435204:c.instructions+=8;goto B435204;
case 0x435206:c.instructions+=7;goto B435206;
case 0x435209:c.instructions+=6;goto B435209;
case 0x43520c:c.instructions+=5;goto B43520c;
case 0x43520f:c.instructions+=4;goto B43520f;
case 0x435212:c.instructions+=3;goto B435212;
case 0x435214:c.instructions+=2;goto B435214;
case 0x435218:c.instructions+=1;goto B435218;
case 0x43521a:goto L43521a;
case 0x43521c:c.instructions+=2;goto B43521c;
case 0x435221:c.instructions+=1;goto B435221;
case 0x435223:goto L435223;
case 0x435228:goto L435228;
case 0x43522a:c.instructions+=4;goto B43522a;
case 0x43522d:c.instructions+=3;goto B43522d;
case 0x435230:c.instructions+=2;goto B435230;
case 0x435232:c.instructions+=1;goto B435232;
case 0x435234:goto L435234;
case 0x435236:c.instructions+=1;goto B435236;
case 0x435238:goto L435238;
case 0x43523b:c.instructions+=2;goto B43523b;
case 0x43523d:c.instructions+=1;goto B43523d;
case 0x43523f:goto L43523f;
case 0x435241:c.instructions+=1;goto B435241;
case 0x435243:goto L435243;
case 0x435246:c.instructions+=1;goto B435246;
case 0x435248:goto L435248;
case 0x43524b:goto L43524b;
case 0x43524e:c.instructions+=2;goto B43524e;
case 0x435250:c.instructions+=1;goto B435250;
case 0x435252:goto L435252;
case 0x435256:c.instructions+=4;goto B435256;
case 0x43525a:c.instructions+=3;goto B43525a;
case 0x43525c:c.instructions+=2;goto B43525c;
case 0x43525f:c.instructions+=1;goto B43525f;
case 0x435261:goto L435261;
case 0x435264:c.instructions+=5;goto B435264;
case 0x435269:c.instructions+=4;goto B435269;
case 0x43526d:c.instructions+=3;goto B43526d;
case 0x43526f:c.instructions+=2;goto B43526f;
case 0x435272:c.instructions+=1;goto B435272;
case 0x435274:goto L435274;
case 0x435279:goto L435279;
case 0x43527c:c.instructions+=1;goto B43527c;
case 0x43527e:goto L43527e;
case 0x435282:c.instructions+=4;goto B435282;
case 0x435286:c.instructions+=3;goto B435286;
case 0x435288:c.instructions+=2;goto B435288;
case 0x43528b:c.instructions+=1;goto B43528b;
case 0x43528d:goto L43528d;
case 0x435290:c.instructions+=4;goto B435290;
case 0x435294:c.instructions+=3;goto B435294;
case 0x435296:c.instructions+=2;goto B435296;
case 0x435299:c.instructions+=1;goto B435299;
case 0x43529b:goto L43529b;
case 0x43529d:c.instructions+=1;goto B43529d;
case 0x43529f:goto L43529f;
case 0x4352a1:goto L4352a1;
case 0x4352a4:c.instructions+=4;goto B4352a4;
case 0x4352a7:c.instructions+=3;goto B4352a7;
case 0x4352aa:c.instructions+=2;goto B4352aa;
case 0x4352ae:c.instructions+=1;goto B4352ae;
case 0x4352b0:goto L4352b0;
case 0x4352b1:c.instructions+=6;goto B4352b1;
case 0x4352b3:c.instructions+=5;goto B4352b3;
case 0x4352b4:c.instructions+=4;goto B4352b4;
case 0x4352b6:c.instructions+=3;goto B4352b6;
case 0x4352b7:c.instructions+=2;goto B4352b7;
case 0x4352ba:c.instructions+=1;goto B4352ba;
case 0x4352bd:goto L4352bd;
case 0x4352c1:c.instructions+=2;goto B4352c1;
case 0x4352c3:c.instructions+=1;goto B4352c3;
case 0x4352c5:goto L4352c5;
case 0x4352c9:c.instructions+=6;goto B4352c9;
case 0x4352cd:c.instructions+=5;goto B4352cd;
case 0x4352d1:c.instructions+=4;goto B4352d1;
case 0x4352d5:c.instructions+=3;goto B4352d5;
case 0x4352d7:c.instructions+=2;goto B4352d7;
case 0x4352da:c.instructions+=1;goto B4352da;
case 0x4352dc:goto L4352dc;
case 0x4352e0:c.instructions+=5;goto B4352e0;
case 0x4352e2:c.instructions+=4;goto B4352e2;
case 0x4352e6:c.instructions+=3;goto B4352e6;
case 0x4352e7:c.instructions+=2;goto B4352e7;
case 0x4352e8:c.instructions+=1;goto B4352e8;
case 0x4352ed:goto L4352ed;
case 0x4352f1:c.instructions+=1;goto B4352f1;
case 0x4352f4:goto L4352f4;
case 0x4352fa:c.instructions+=11;goto B4352fa;
case 0x4352fc:c.instructions+=10;goto B4352fc;
case 0x435300:c.instructions+=9;goto B435300;
case 0x435301:c.instructions+=8;goto B435301;
case 0x435307:c.instructions+=7;goto B435307;
case 0x43530b:c.instructions+=6;goto B43530b;
case 0x43530e:c.instructions+=5;goto B43530e;
case 0x435311:c.instructions+=4;goto B435311;
case 0x435312:c.instructions+=3;goto B435312;
case 0x435313:c.instructions+=2;goto B435313;
case 0x435316:c.instructions+=1;goto B435316;
case 0x435319:goto L435319;
case 0x43531b:c.instructions+=2;goto B43531b;
case 0x43531d:c.instructions+=1;goto B43531d;
case 0x43531f:goto L43531f;
case 0x435323:c.instructions+=6;goto B435323;
case 0x435327:c.instructions+=5;goto B435327;
case 0x43532b:c.instructions+=4;goto B43532b;
case 0x43532f:c.instructions+=3;goto B43532f;
case 0x435331:c.instructions+=2;goto B435331;
case 0x435334:c.instructions+=1;goto B435334;
case 0x435336:goto L435336;
case 0x43533a:c.instructions+=5;goto B43533a;
case 0x43533c:c.instructions+=4;goto B43533c;
case 0x435340:c.instructions+=3;goto B435340;
case 0x435341:c.instructions+=2;goto B435341;
case 0x435342:c.instructions+=1;goto B435342;
case 0x435347:goto L435347;
case 0x43534b:c.instructions+=1;goto B43534b;
case 0x43534e:goto L43534e;
case 0x435354:c.instructions+=11;goto B435354;
case 0x435356:c.instructions+=10;goto B435356;
case 0x43535a:c.instructions+=9;goto B43535a;
case 0x43535b:c.instructions+=8;goto B43535b;
case 0x435361:c.instructions+=7;goto B435361;
case 0x435365:c.instructions+=6;goto B435365;
case 0x435368:c.instructions+=5;goto B435368;
case 0x43536b:c.instructions+=4;goto B43536b;
case 0x43536c:c.instructions+=3;goto B43536c;
case 0x43536d:c.instructions+=2;goto B43536d;
case 0x435370:c.instructions+=1;goto B435370;
case 0x435373:goto L435373;
case 0x435375:c.instructions+=1;goto B435375;
case 0x43537b:goto L43537b;
case 0x43537e:c.instructions+=2;goto B43537e;
case 0x435381:c.instructions+=1;goto B435381;
case 0x435383:goto L435383;
case 0x435387:c.instructions+=4;goto B435387;
case 0x43538b:c.instructions+=3;goto B43538b;
case 0x43538d:c.instructions+=2;goto B43538d;
case 0x435390:c.instructions+=1;goto B435390;
case 0x435396:goto L435396;
case 0x43539a:c.instructions+=1;goto B43539a;
case 0x43539c:goto L43539c;
case 0x4353a0:c.instructions+=8;goto B4353a0;
case 0x4353a2:c.instructions+=7;goto B4353a2;
case 0x4353a3:c.instructions+=6;goto B4353a3;
case 0x4353a6:c.instructions+=5;goto B4353a6;
case 0x4353a9:c.instructions+=4;goto B4353a9;
case 0x4353aa:c.instructions+=3;goto B4353aa;
case 0x4353ab:c.instructions+=2;goto B4353ab;
case 0x4353ae:c.instructions+=1;goto B4353ae;
case 0x4353b1:goto L4353b1;
case 0x4353b6:c.instructions+=9;goto B4353b6;
case 0x4353b8:c.instructions+=8;goto B4353b8;
case 0x4353bc:c.instructions+=7;goto B4353bc;
case 0x4353be:c.instructions+=6;goto B4353be;
case 0x4353bf:c.instructions+=5;goto B4353bf;
case 0x4353c2:c.instructions+=4;goto B4353c2;
case 0x4353c3:c.instructions+=3;goto B4353c3;
case 0x4353c4:c.instructions+=2;goto B4353c4;
case 0x4353c7:c.instructions+=1;goto B4353c7;
case 0x4353ca:goto L4353ca;
case 0x4353ce:c.instructions+=4;goto B4353ce;
case 0x4353d2:c.instructions+=3;goto B4353d2;
case 0x4353d4:c.instructions+=2;goto B4353d4;
case 0x4353d7:c.instructions+=1;goto B4353d7;
case 0x4353dd:goto L4353dd;
case 0x4353e1:c.instructions+=1;goto B4353e1;
case 0x4353e3:goto L4353e3;
case 0x4353e7:c.instructions+=8;goto B4353e7;
case 0x4353e9:c.instructions+=7;goto B4353e9;
case 0x4353ea:c.instructions+=6;goto B4353ea;
case 0x4353ed:c.instructions+=5;goto B4353ed;
case 0x4353f0:c.instructions+=4;goto B4353f0;
case 0x4353f1:c.instructions+=3;goto B4353f1;
case 0x4353f2:c.instructions+=2;goto B4353f2;
case 0x4353f5:c.instructions+=1;goto B4353f5;
case 0x4353f8:goto L4353f8;
case 0x4353fd:c.instructions+=9;goto B4353fd;
case 0x4353ff:c.instructions+=8;goto B4353ff;
case 0x435403:c.instructions+=7;goto B435403;
case 0x435405:c.instructions+=6;goto B435405;
case 0x435406:c.instructions+=5;goto B435406;
case 0x435409:c.instructions+=4;goto B435409;
case 0x43540a:c.instructions+=3;goto B43540a;
case 0x43540b:c.instructions+=2;goto B43540b;
case 0x43540e:c.instructions+=1;goto B43540e;
case 0x435411:goto L435411;
case 0x435413:c.instructions+=1;goto B435413;
case 0x435415:goto L435415;
case 0x435418:c.instructions+=2;goto B435418;
case 0x43541a:c.instructions+=1;goto B43541a;
case 0x43541c:goto L43541c;
case 0x43541d:c.instructions+=1;goto B43541d;
case 0x43541f:goto L43541f;
case 0x435423:c.instructions+=4;goto B435423;
case 0x435427:c.instructions+=3;goto B435427;
case 0x435429:c.instructions+=2;goto B435429;
case 0x43542c:c.instructions+=1;goto B43542c;
case 0x43542e:goto L43542e;
case 0x435432:c.instructions+=3;goto B435432;
case 0x435434:c.instructions+=2;goto B435434;
case 0x435436:c.instructions+=1;goto B435436;
case 0x435438:goto L435438;
case 0x43543f:goto L43543f;
case 0x435443:c.instructions+=9;goto B435443;
case 0x435445:c.instructions+=8;goto B435445;
case 0x435446:c.instructions+=7;goto B435446;
case 0x435449:c.instructions+=6;goto B435449;
case 0x43544c:c.instructions+=5;goto B43544c;
case 0x43544f:c.instructions+=4;goto B43544f;
case 0x435450:c.instructions+=3;goto B435450;
case 0x435451:c.instructions+=2;goto B435451;
case 0x435454:c.instructions+=1;goto B435454;
case 0x435457:goto L435457;
case 0x43545b:c.instructions+=4;goto B43545b;
case 0x43545f:c.instructions+=3;goto B43545f;
case 0x435461:c.instructions+=2;goto B435461;
case 0x435464:c.instructions+=1;goto B435464;
case 0x435466:goto L435466;
case 0x43546a:c.instructions+=1;goto B43546a;
case 0x43546c:goto L43546c;
case 0x435473:goto L435473;
case 0x435477:c.instructions+=2;goto B435477;
case 0x43547e:c.instructions+=1;goto B43547e;
case 0x435482:goto L435482;
case 0x435484:c.instructions+=6;goto B435484;
case 0x435487:c.instructions+=5;goto B435487;
case 0x435488:c.instructions+=4;goto B435488;
case 0x435489:c.instructions+=3;goto B435489;
case 0x43548a:c.instructions+=2;goto B43548a;
case 0x43548d:c.instructions+=1;goto B43548d;
case 0x435490:goto L435490;
case 0x435492:c.instructions+=4;goto B435492;
case 0x435494:c.instructions+=3;goto B435494;
case 0x435497:c.instructions+=2;goto B435497;
case 0x43549a:c.instructions+=1;goto B43549a;
case 0x4354a0:goto L4354a0;
case 0x4354a5:c.instructions+=4;goto B4354a5;
case 0x4354a7:c.instructions+=3;goto B4354a7;
case 0x4354a8:c.instructions+=2;goto B4354a8;
case 0x4354aa:c.instructions+=1;goto B4354aa;
case 0x4354ac:goto L4354ac;
case 0x4354b1:c.instructions+=2;goto B4354b1;
case 0x4354b3:c.instructions+=1;goto B4354b3;
case 0x4354b5:goto L4354b5;
case 0x4354b8:c.instructions+=4;goto B4354b8;
case 0x4354b9:c.instructions+=3;goto B4354b9;
case 0x4354bc:c.instructions+=2;goto B4354bc;
case 0x4354be:c.instructions+=1;goto B4354be;
case 0x4354c0:goto L4354c0;
case 0x4354c3:c.instructions+=2;goto B4354c3;
case 0x4354c5:c.instructions+=1;goto B4354c5;
case 0x4354c7:goto L4354c7;
case 0x4354ca:c.instructions+=1;goto B4354ca;
case 0x4354cc:goto L4354cc;
case 0x4354ce:goto L4354ce;
case 0x4354d0:c.instructions+=5;goto B4354d0;
case 0x4354d3:c.instructions+=4;goto B4354d3;
case 0x4354d6:c.instructions+=3;goto B4354d6;
case 0x4354d8:c.instructions+=2;goto B4354d8;
case 0x4354db:c.instructions+=1;goto B4354db;
case 0x4354dd:goto L4354dd;
case 0x4354df:c.instructions+=2;goto B4354df;
case 0x4354e1:c.instructions+=1;goto B4354e1;
case 0x4354e3:goto L4354e3;
case 0x4354e5:c.instructions+=1;goto B4354e5;
case 0x4354e7:goto L4354e7;
case 0x4354e8:goto L4354e8;
case 0x4354e9:c.instructions+=1;goto B4354e9;
case 0x4354f0:goto L4354f0;
case 0x4354f5:c.instructions+=2;goto B4354f5;
case 0x4354f7:c.instructions+=1;goto B4354f7;
case 0x4354f9:goto L4354f9;
case 0x4354fe:c.instructions+=2;goto B4354fe;
case 0x435500:c.instructions+=1;goto B435500;
case 0x435502:goto L435502;
case 0x435505:c.instructions+=3;goto B435505;
case 0x435507:c.instructions+=2;goto B435507;
case 0x43550a:c.instructions+=1;goto B43550a;
case 0x43550c:goto L43550c;
case 0x43550f:c.instructions+=1;goto B43550f;
case 0x435511:goto L435511;
case 0x435513:goto L435513;
case 0x435514:c.instructions+=1;goto B435514;
case 0x435518:goto L435518;
case 0x43551a:c.instructions+=1;goto B43551a;
case 0x43551c:goto L43551c;
case 0x43551f:c.instructions+=1;goto B43551f;
case 0x435521:goto L435521;
case 0x435523:goto L435523;
case 0x435525:c.instructions+=1;goto B435525;
case 0x435527:goto L435527;
case 0x43552a:c.instructions+=1;goto B43552a;
case 0x43552c:goto L43552c;
case 0x43552f:c.instructions+=2;goto B43552f;
case 0x435531:c.instructions+=1;goto B435531;
case 0x435533:goto L435533;
case 0x435536:c.instructions+=1;goto B435536;
case 0x435538:goto L435538;
case 0x43553a:c.instructions+=1;goto B43553a;
case 0x43553c:goto L43553c;
case 0x43553f:c.instructions+=7;goto B43553f;
case 0x435542:c.instructions+=6;goto B435542;
case 0x435544:c.instructions+=5;goto B435544;
case 0x435547:c.instructions+=4;goto B435547;
case 0x435549:c.instructions+=3;goto B435549;
case 0x43554a:c.instructions+=2;goto B43554a;
case 0x435552:c.instructions+=1;goto B435552;
case 0x435554:goto L435554;
case 0x435555:goto L435555;
case 0x435560:goto L435560;
case 0x435562:c.instructions+=2;goto B435562;
case 0x435568:c.instructions+=1;goto B435568;
case 0x435570:goto L435570;
case 0x435572:c.instructions+=2;goto B435572;
case 0x435578:c.instructions+=1;goto B435578;
case 0x435580:goto L435580;
case 0x435586:c.instructions+=1;goto B435586;
case 0x435590:goto L435590;
case 0x435592:c.instructions+=2;goto B435592;
case 0x435598:c.instructions+=1;goto B435598;
case 0x4355a0:goto L4355a0;
case 0x4355a2:c.instructions+=2;goto B4355a2;
case 0x4355a8:c.instructions+=1;goto B4355a8;
case 0x4355b0:goto L4355b0;
case 0x4355b1:c.instructions+=2;goto B4355b1;
case 0x4355b3:c.instructions+=1;goto B4355b3;
case 0x4355b8:goto L4355b8;
case 0x4355bd:c.instructions+=1;goto B4355bd;
case 0x4355bf:goto L4355bf;
case 0x4355c0:c.instructions+=1;goto B4355c0;
case 0x4355c5:goto L4355c5;
case 0x4355c8:goto L4355c8;
case 0x4355ca:c.instructions+=2;goto B4355ca;
case 0x4355cb:c.instructions+=1;goto B4355cb;
case 0x4355d0:goto L4355d0;
case 0x4355d4:c.instructions+=2;goto B4355d4;
case 0x4355da:c.instructions+=1;goto B4355da;
case 0x4355dc:goto L4355dc;
case 0x4355e0:c.instructions+=4;goto B4355e0;
case 0x4355e3:c.instructions+=3;goto B4355e3;
case 0x4355e6:c.instructions+=2;goto B4355e6;
case 0x4355e8:c.instructions+=1;goto B4355e8;
case 0x4355ea:goto L4355ea;
case 0x4355f0:goto L4355f0;
case 0x4355f3:c.instructions+=3;goto B4355f3;
case 0x4355f6:c.instructions+=2;goto B4355f6;
case 0x4355f8:c.instructions+=1;goto B4355f8;
case 0x4355fa:goto L4355fa;
case 0x435601:goto L435601;
case 0x435603:c.instructions+=2;goto B435603;
case 0x435605:c.instructions+=1;goto B435605;
case 0x435607:goto L435607;
case 0x43560a:goto L43560a;
case 0x435610:c.instructions+=1;goto B435610;
case 0x435612:goto L435612;
case 0x435613:c.instructions+=5;goto B435613;
case 0x435617:c.instructions+=4;goto B435617;
case 0x43561a:c.instructions+=3;goto B43561a;
case 0x43561d:c.instructions+=2;goto B43561d;
case 0x43561f:c.instructions+=1;goto B43561f;
case 0x435621:goto L435621;
case 0x435622:goto L435622;
case 0x435625:c.instructions+=3;goto B435625;
case 0x435628:c.instructions+=2;goto B435628;
case 0x43562a:c.instructions+=1;goto B43562a;
case 0x43562c:goto L43562c;
case 0x435630:c.instructions+=1;goto B435630;
case 0x435632:goto L435632;
case 0x435639:c.instructions+=1;goto B435639;
case 0x43563b:goto L43563b;
case 0x43563e:c.instructions+=4;goto B43563e;
case 0x435640:c.instructions+=3;goto B435640;
case 0x435642:c.instructions+=2;goto B435642;
case 0x435645:c.instructions+=1;goto B435645;
case 0x435648:goto L435648;
case 0x43564a:c.instructions+=2;goto B43564a;
case 0x43564c:c.instructions+=1;goto B43564c;
case 0x43564e:goto L43564e;
case 0x43564f:goto L43564f;
case 0x435650:goto L435650;
case 0x435660:goto L435660;
case 0x435661:c.instructions+=8;goto B435661;
case 0x435665:c.instructions+=7;goto B435665;
case 0x435667:c.instructions+=6;goto B435667;
case 0x435669:c.instructions+=5;goto B435669;
case 0x43566e:c.instructions+=4;goto B43566e;
case 0x435674:c.instructions+=3;goto B435674;
case 0x435676:c.instructions+=2;goto B435676;
case 0x435679:c.instructions+=1;goto B435679;
case 0x43567b:goto L43567b;
case 0x43567f:goto L43567f;
case 0x435683:c.instructions+=8;goto B435683;
case 0x435684:c.instructions+=7;goto B435684;
case 0x43568a:c.instructions+=6;goto B43568a;
case 0x43568b:c.instructions+=5;goto B43568b;
case 0x43568d:c.instructions+=4;goto B43568d;
case 0x435693:c.instructions+=3;goto B435693;
case 0x435695:c.instructions+=2;goto B435695;
case 0x435698:c.instructions+=1;goto B435698;
case 0x43569a:goto L43569a;
case 0x43569f:c.instructions+=1;goto B43569f;
case 0x4356a1:goto L4356a1;
case 0x4356a5:c.instructions+=5;goto B4356a5;
case 0x4356a7:c.instructions+=4;goto B4356a7;
case 0x4356ad:c.instructions+=3;goto B4356ad;
case 0x4356af:c.instructions+=2;goto B4356af;
case 0x4356b2:c.instructions+=1;goto B4356b2;
case 0x4356b4:goto L4356b4;
case 0x4356b6:c.instructions+=1;goto B4356b6;
case 0x4356b8:goto L4356b8;
case 0x4356bb:goto L4356bb;
case 0x4356bf:c.instructions+=4;goto B4356bf;
case 0x4356c2:c.instructions+=3;goto B4356c2;
case 0x4356c5:c.instructions+=2;goto B4356c5;
case 0x4356c7:c.instructions+=1;goto B4356c7;
case 0x4356c9:goto L4356c9;
case 0x4356ca:c.instructions+=2;goto B4356ca;
case 0x4356cb:c.instructions+=1;goto B4356cb;
case 0x4356d0:goto L4356d0;
case 0x4356d3:c.instructions+=3;goto B4356d3;
case 0x4356d6:c.instructions+=2;goto B4356d6;
case 0x4356d8:c.instructions+=1;goto B4356d8;
case 0x4356da:goto L4356da;
case 0x4356de:c.instructions+=1;goto B4356de;
case 0x4356e0:goto L4356e0;
case 0x4356e3:c.instructions+=2;goto B4356e3;
case 0x4356e6:c.instructions+=1;goto B4356e6;
case 0x4356e8:goto L4356e8;
case 0x4356eb:c.instructions+=3;goto B4356eb;
case 0x4356ee:c.instructions+=2;goto B4356ee;
case 0x4356f1:c.instructions+=1;goto B4356f1;
case 0x4356f3:goto L4356f3;
case 0x4356f6:c.instructions+=2;goto B4356f6;
case 0x4356f9:c.instructions+=1;goto B4356f9;
case 0x4356fb:goto L4356fb;
case 0x4356fe:c.instructions+=3;goto B4356fe;
case 0x435705:c.instructions+=2;goto B435705;
case 0x435709:c.instructions+=1;goto B435709;
case 0x43570c:goto L43570c;
case 0x43570e:c.instructions+=2;goto B43570e;
case 0x435710:c.instructions+=1;goto B435710;
case 0x435712:goto L435712;
case 0x435713:c.instructions+=1;goto B435713;
case 0x435714:goto L435714;
case 0x435715:c.instructions+=3;goto B435715;
case 0x435716:c.instructions+=2;goto B435716;
case 0x435717:c.instructions+=1;goto B435717;
case 0x435720:goto L435720;
case 0x435724:c.instructions+=2;goto B435724;
case 0x43572a:c.instructions+=1;goto B43572a;
case 0x43572c:goto L43572c;
case 0x435730:c.instructions+=7;goto B435730;
case 0x435733:c.instructions+=6;goto B435733;
case 0x435735:c.instructions+=5;goto B435735;
case 0x435739:c.instructions+=4;goto B435739;
case 0x43573a:c.instructions+=3;goto B43573a;
case 0x43573b:c.instructions+=2;goto B43573b;
case 0x43573c:c.instructions+=1;goto B43573c;
case 0x435741:goto L435741;
case 0x435744:goto L435744;
case 0x435750:goto L435750;
case 0x435751:c.instructions+=3;goto B435751;
case 0x435755:c.instructions+=2;goto B435755;
case 0x43575b:c.instructions+=1;goto B43575b;
case 0x435761:goto L435761;
case 0x435762:c.instructions+=10;goto B435762;
case 0x435763:c.instructions+=9;goto B435763;
case 0x435767:c.instructions+=8;goto B435767;
case 0x43576a:c.instructions+=7;goto B43576a;
case 0x43576b:c.instructions+=6;goto B43576b;
case 0x43576d:c.instructions+=5;goto B43576d;
case 0x435772:c.instructions+=4;goto B435772;
case 0x435778:c.instructions+=3;goto B435778;
case 0x43577a:c.instructions+=2;goto B43577a;
case 0x43577d:c.instructions+=1;goto B43577d;
case 0x43577f:goto L43577f;
case 0x435784:goto L435784;
case 0x435787:c.instructions+=6;goto B435787;
case 0x43578d:c.instructions+=5;goto B43578d;
case 0x43578f:c.instructions+=4;goto B43578f;
case 0x435795:c.instructions+=3;goto B435795;
case 0x435797:c.instructions+=2;goto B435797;
case 0x43579a:c.instructions+=1;goto B43579a;
case 0x43579c:goto L43579c;
case 0x4357a4:c.instructions+=1;goto B4357a4;
case 0x4357a6:goto L4357a6;
case 0x4357a9:c.instructions+=6;goto B4357a9;
case 0x4357b1:c.instructions+=5;goto B4357b1;
case 0x4357b3:c.instructions+=4;goto B4357b3;
case 0x4357b9:c.instructions+=3;goto B4357b9;
case 0x4357bb:c.instructions+=2;goto B4357bb;
case 0x4357be:c.instructions+=1;goto B4357be;
case 0x4357c0:goto L4357c0;
case 0x4357c8:goto L4357c8;
case 0x4357cc:c.instructions+=6;goto B4357cc;
case 0x4357cf:c.instructions+=5;goto B4357cf;
case 0x4357d2:c.instructions+=4;goto B4357d2;
case 0x4357d5:c.instructions+=3;goto B4357d5;
case 0x4357d7:c.instructions+=2;goto B4357d7;
case 0x4357db:c.instructions+=1;goto B4357db;
case 0x4357e1:goto L4357e1;
case 0x4357e2:goto L4357e2;
case 0x4357e5:c.instructions+=3;goto B4357e5;
case 0x4357e7:c.instructions+=2;goto B4357e7;
case 0x4357e9:c.instructions+=1;goto B4357e9;
case 0x4357ec:goto L4357ec;
case 0x4357ef:c.instructions+=1;goto B4357ef;
case 0x4357f1:goto L4357f1;
case 0x4357f4:c.instructions+=3;goto B4357f4;
case 0x4357f6:c.instructions+=2;goto B4357f6;
case 0x4357f8:c.instructions+=1;goto B4357f8;
case 0x4357fa:goto L4357fa;
case 0x4357fe:c.instructions+=2;goto B4357fe;
case 0x435800:c.instructions+=1;goto B435800;
case 0x435802:goto L435802;
case 0x435806:c.instructions+=2;goto B435806;
case 0x435809:c.instructions+=1;goto B435809;
case 0x43580b:goto L43580b;
case 0x43580e:c.instructions+=4;goto B43580e;
case 0x435811:c.instructions+=3;goto B435811;
case 0x435818:c.instructions+=2;goto B435818;
case 0x43581f:c.instructions+=1;goto B43581f;
case 0x435821:goto L435821;
case 0x435823:c.instructions+=1;goto B435823;
case 0x435825:goto L435825;
case 0x435828:c.instructions+=3;goto B435828;
case 0x43582f:c.instructions+=2;goto B43582f;
case 0x435832:c.instructions+=1;goto B435832;
case 0x435834:goto L435834;
case 0x435837:c.instructions+=3;goto B435837;
case 0x43583a:c.instructions+=2;goto B43583a;
case 0x43583d:c.instructions+=1;goto B43583d;
case 0x43583f:goto L43583f;
case 0x435842:c.instructions+=7;goto B435842;
case 0x435845:c.instructions+=6;goto B435845;
case 0x435849:c.instructions+=5;goto B435849;
case 0x43584f:c.instructions+=4;goto B43584f;
case 0x435856:c.instructions+=3;goto B435856;
case 0x435859:c.instructions+=2;goto B435859;
case 0x435860:c.instructions+=1;goto B435860;
case 0x435863:goto L435863;
case 0x435865:c.instructions+=2;goto B435865;
case 0x435867:c.instructions+=1;goto B435867;
case 0x43586d:goto L43586d;
case 0x43586e:goto L43586e;
case 0x43586f:c.instructions+=2;goto B43586f;
case 0x435870:c.instructions+=1;goto B435870;
case 0x435871:goto L435871;
case 0x435872:c.instructions+=1;goto B435872;
case 0x435880:goto L435880;
case 0x435884:c.instructions+=2;goto B435884;
case 0x43588a:c.instructions+=1;goto B43588a;
case 0x43588c:goto L43588c;
case 0x43588d:c.instructions+=5;goto B43588d;
case 0x435891:c.instructions+=4;goto B435891;
case 0x435894:c.instructions+=3;goto B435894;
case 0x435897:c.instructions+=2;goto B435897;
case 0x435899:c.instructions+=1;goto B435899;
case 0x43589b:goto L43589b;
case 0x43589c:c.instructions+=2;goto B43589c;
case 0x43589d:c.instructions+=1;goto B43589d;
case 0x4358a2:goto L4358a2;
case 0x4358a5:c.instructions+=3;goto B4358a5;
case 0x4358a8:c.instructions+=2;goto B4358a8;
case 0x4358aa:c.instructions+=1;goto B4358aa;
case 0x4358ac:goto L4358ac;
case 0x4358b2:c.instructions+=1;goto B4358b2;
case 0x4358b4:goto L4358b4;
case 0x4358bb:c.instructions+=3;goto B4358bb;
case 0x4358be:c.instructions+=2;goto B4358be;
case 0x4358c1:c.instructions+=1;goto B4358c1;
case 0x4358c4:goto L4358c4;
case 0x4358c7:c.instructions+=1;goto B4358c7;
case 0x4358ca:goto L4358ca;
case 0x4358cc:c.instructions+=2;goto B4358cc;
case 0x4358ce:c.instructions+=1;goto B4358ce;
case 0x4358d0:goto L4358d0;
case 0x4358d1:c.instructions+=1;goto B4358d1;
case 0x4358d2:goto L4358d2;
case 0x4358d3:goto L4358d3;
case 0x4358e0:goto L4358e0;
case 0x4358e1:c.instructions+=4;goto B4358e1;
case 0x4358e3:c.instructions+=3;goto B4358e3;
case 0x4358e5:c.instructions+=2;goto B4358e5;
case 0x4358e7:c.instructions+=1;goto B4358e7;
case 0x4358e9:goto L4358e9;
case 0x4358f0:goto L4358f0;
case 0x4358f2:c.instructions+=6;goto B4358f2;
case 0x4358f5:c.instructions+=5;goto B4358f5;
case 0x4358f7:c.instructions+=4;goto B4358f7;
case 0x4358fa:c.instructions+=3;goto B4358fa;
case 0x4358fd:c.instructions+=2;goto B4358fd;
case 0x4358ff:c.instructions+=1;goto B4358ff;
case 0x435901:goto L435901;
case 0x435903:c.instructions+=2;goto B435903;
case 0x435905:c.instructions+=1;goto B435905;
case 0x435907:goto L435907;
case 0x435909:c.instructions+=2;goto B435909;
case 0x43590b:c.instructions+=1;goto B43590b;
case 0x43590d:goto L43590d;
case 0x43590e:c.instructions+=1;goto B43590e;
case 0x435910:goto L435910;
case 0x435911:c.instructions+=4;goto B435911;
case 0x435913:c.instructions+=3;goto B435913;
case 0x435915:c.instructions+=2;goto B435915;
case 0x435917:c.instructions+=1;goto B435917;
case 0x435919:goto L435919;
case 0x435920:goto L435920;
case 0x435922:c.instructions+=7;goto B435922;
case 0x435925:c.instructions+=6;goto B435925;
case 0x435927:c.instructions+=5;goto B435927;
case 0x435928:c.instructions+=4;goto B435928;
case 0x43592b:c.instructions+=3;goto B43592b;
case 0x435930:c.instructions+=2;goto B435930;
case 0x435931:c.instructions+=1;goto B435931;
case 0x435936:goto L435936;
case 0x435938:c.instructions+=3;goto B435938;
case 0x43593b:c.instructions+=2;goto B43593b;
case 0x43593d:c.instructions+=1;goto B43593d;
case 0x43593f:goto L43593f;
case 0x435940:c.instructions+=1;goto B435940;
case 0x435950:goto L435950;
case 0x435953:c.instructions+=2;goto B435953;
case 0x435955:c.instructions+=1;goto B435955;
case 0x435957:goto L435957;
case 0x435958:c.instructions+=2;goto B435958;
case 0x43595d:c.instructions+=1;goto B43595d;
case 0x435962:goto L435962;
case 0x435964:c.instructions+=1;goto B435964;
case 0x435966:goto L435966;
case 0x435969:c.instructions+=5;goto B435969;
case 0x43596c:c.instructions+=4;goto B43596c;
case 0x43596e:c.instructions+=3;goto B43596e;
case 0x435970:c.instructions+=2;goto B435970;
case 0x435973:c.instructions+=1;goto B435973;
case 0x435975:goto L435975;
case 0x435977:c.instructions+=1;goto B435977;
case 0x435978:goto L435978;
case 0x43597a:c.instructions+=1;goto B43597a;
case 0x435980:goto L435980;
case 0x435981:c.instructions+=9;goto B435981;
case 0x435983:c.instructions+=8;goto B435983;
case 0x435986:c.instructions+=7;goto B435986;
case 0x435989:c.instructions+=6;goto B435989;
case 0x43598a:c.instructions+=5;goto B43598a;
case 0x43598c:c.instructions+=4;goto B43598c;
case 0x43598f:c.instructions+=3;goto B43598f;
case 0x435991:c.instructions+=2;goto B435991;
case 0x435992:c.instructions+=1;goto B435992;
case 0x435998:goto L435998;
case 0x43599b:c.instructions+=2;goto B43599b;
case 0x43599c:c.instructions+=1;goto B43599c;
case 0x4359a1:goto L4359a1;
case 0x4359a4:c.instructions+=2;goto B4359a4;
case 0x4359a6:c.instructions+=1;goto B4359a6;
case 0x4359ac:goto L4359ac;
case 0x4359af:c.instructions+=2;goto B4359af;
case 0x4359b1:c.instructions+=1;goto B4359b1;
case 0x4359b7:goto L4359b7;
case 0x4359ba:c.instructions+=2;goto B4359ba;
case 0x4359c1:c.instructions+=1;goto B4359c1;
case 0x4359c3:goto L4359c3;
case 0x4359c9:c.instructions+=4;goto B4359c9;
case 0x4359cf:c.instructions+=3;goto B4359cf;
case 0x4359d1:c.instructions+=2;goto B4359d1;
case 0x4359d4:c.instructions+=1;goto B4359d4;
case 0x4359d6:goto L4359d6;
case 0x4359db:c.instructions+=2;goto B4359db;
case 0x4359dd:c.instructions+=1;goto B4359dd;
case 0x4359df:goto L4359df;
case 0x4359e4:c.instructions+=2;goto B4359e4;
case 0x4359e6:c.instructions+=1;goto B4359e6;
case 0x4359e8:goto L4359e8;
case 0x4359eb:c.instructions+=2;goto B4359eb;
case 0x4359ed:c.instructions+=1;goto B4359ed;
case 0x4359ef:goto L4359ef;
case 0x4359f5:c.instructions+=4;goto B4359f5;
case 0x4359f6:c.instructions+=3;goto B4359f6;
case 0x4359fc:c.instructions+=2;goto B4359fc;
case 0x4359fd:c.instructions+=1;goto B4359fd;
case 0x435a02:goto L435a02;
case 0x435a05:c.instructions+=2;goto B435a05;
case 0x435a07:c.instructions+=1;goto B435a07;
case 0x435a09:goto L435a09;
case 0x435a0c:c.instructions+=1;goto B435a0c;
case 0x435a11:goto L435a11;
case 0x435a14:c.instructions+=7;goto B435a14;
case 0x435a17:c.instructions+=6;goto B435a17;
case 0x435a1a:c.instructions+=5;goto B435a1a;
case 0x435a1d:c.instructions+=4;goto B435a1d;
case 0x435a1e:c.instructions+=3;goto B435a1e;
case 0x435a22:c.instructions+=2;goto B435a22;
case 0x435a23:c.instructions+=1;goto B435a23;
case 0x435a28:goto L435a28;
case 0x435a2b:c.instructions+=6;goto B435a2b;
case 0x435a2e:c.instructions+=5;goto B435a2e;
case 0x435a31:c.instructions+=4;goto B435a31;
case 0x435a3b:c.instructions+=3;goto B435a3b;
case 0x435a3e:c.instructions+=2;goto B435a3e;
case 0x435a3f:c.instructions+=1;goto B435a3f;
case 0x435a44:goto L435a44;
case 0x435a45:c.instructions+=4;goto B435a45;
case 0x435a46:c.instructions+=3;goto B435a46;
case 0x435a48:c.instructions+=2;goto B435a48;
case 0x435a49:c.instructions+=1;goto B435a49;
case 0x435a4c:goto L435a4c;
case 0x435a4d:c.instructions+=6;goto B435a4d;
case 0x435a4e:c.instructions+=5;goto B435a4e;
case 0x435a4f:c.instructions+=4;goto B435a4f;
case 0x435a50:c.instructions+=3;goto B435a50;
case 0x435a54:c.instructions+=2;goto B435a54;
case 0x435a5a:c.instructions+=1;goto B435a5a;
case 0x435a5c:goto L435a5c;
case 0x435a62:c.instructions+=2;goto B435a62;
case 0x435a64:c.instructions+=1;goto B435a64;
case 0x435a66:goto L435a66;
case 0x435a6c:c.instructions+=2;goto B435a6c;
case 0x435a6e:c.instructions+=1;goto B435a6e;
case 0x435a70:goto L435a70;
case 0x435a73:c.instructions+=5;goto B435a73;
case 0x435a76:c.instructions+=4;goto B435a76;
case 0x435a78:c.instructions+=3;goto B435a78;
case 0x435a79:c.instructions+=2;goto B435a79;
case 0x435a7e:c.instructions+=1;goto B435a7e;
case 0x435a83:goto L435a83;
case 0x435a88:c.instructions+=1;goto B435a88;
case 0x435a89:goto L435a89;
case 0x435a8b:c.instructions+=1;goto B435a8b;
case 0x435a90:goto L435a90;
case 0x435a94:c.instructions+=2;goto B435a94;
case 0x435a9a:c.instructions+=1;goto B435a9a;
case 0x435a9c:goto L435a9c;
case 0x435aa2:c.instructions+=2;goto B435aa2;
case 0x435aa4:c.instructions+=1;goto B435aa4;
case 0x435aa6:goto L435aa6;
case 0x435aac:c.instructions+=2;goto B435aac;
case 0x435aae:c.instructions+=1;goto B435aae;
case 0x435ab0:goto L435ab0;
case 0x435ab3:c.instructions+=4;goto B435ab3;
case 0x435ab6:c.instructions+=3;goto B435ab6;
case 0x435ab7:c.instructions+=2;goto B435ab7;
case 0x435abc:c.instructions+=1;goto B435abc;
case 0x435ac1:goto L435ac1;
case 0x435ac6:c.instructions+=1;goto B435ac6;
case 0x435ac7:goto L435ac7;
case 0x435ac9:c.instructions+=1;goto B435ac9;
case 0x435ad0:goto L435ad0;
case 0x435ad2:c.instructions+=17;goto B435ad2;
case 0x435ad7:c.instructions+=16;goto B435ad7;
case 0x435add:c.instructions+=15;goto B435add;
case 0x435ade:c.instructions+=14;goto B435ade;
case 0x435ae5:c.instructions+=13;goto B435ae5;
case 0x435ae6:c.instructions+=12;goto B435ae6;
case 0x435ae7:c.instructions+=11;goto B435ae7;
case 0x435ae9:c.instructions+=10;goto B435ae9;
case 0x435aeb:c.instructions+=9;goto B435aeb;
case 0x435aee:c.instructions+=8;goto B435aee;
case 0x435af4:c.instructions+=7;goto B435af4;
case 0x435af7:c.instructions+=6;goto B435af7;
case 0x435afb:c.instructions+=5;goto B435afb;
case 0x435afd:c.instructions+=4;goto B435afd;
case 0x435b00:c.instructions+=3;goto B435b00;
case 0x435b05:c.instructions+=2;goto B435b05;
case 0x435b09:c.instructions+=1;goto B435b09;
case 0x435b0e:goto L435b0e;
case 0x435b12:c.instructions+=7;goto B435b12;
case 0x435b15:c.instructions+=6;goto B435b15;
case 0x435b18:c.instructions+=5;goto B435b18;
case 0x435b1a:c.instructions+=4;goto B435b1a;
case 0x435b1b:c.instructions+=3;goto B435b1b;
case 0x435b22:c.instructions+=2;goto B435b22;
case 0x435b25:c.instructions+=1;goto B435b25;
case 0x435b30:goto L435b30;
case 0x435b32:c.instructions+=11;goto B435b32;
case 0x435b37:c.instructions+=10;goto B435b37;
case 0x435b3d:c.instructions+=9;goto B435b3d;
case 0x435b3e:c.instructions+=8;goto B435b3e;
case 0x435b45:c.instructions+=7;goto B435b45;
case 0x435b46:c.instructions+=6;goto B435b46;
case 0x435b47:c.instructions+=5;goto B435b47;
case 0x435b49:c.instructions+=4;goto B435b49;
case 0x435b4d:c.instructions+=3;goto B435b4d;
case 0x435b53:c.instructions+=2;goto B435b53;
case 0x435b5b:c.instructions+=1;goto B435b5b;
case 0x435b60:goto L435b60;
case 0x435b63:c.instructions+=2;goto B435b63;
case 0x435b6b:c.instructions+=1;goto B435b6b;
case 0x435b70:goto L435b70;
case 0x435b74:c.instructions+=4;goto B435b74;
case 0x435b75:c.instructions+=3;goto B435b75;
case 0x435b7c:c.instructions+=2;goto B435b7c;
case 0x435b7f:c.instructions+=1;goto B435b7f;
case 0x435b80:goto L435b80;
case 0x435b82:c.instructions+=15;goto B435b82;
case 0x435b87:c.instructions+=14;goto B435b87;
case 0x435b8d:c.instructions+=13;goto B435b8d;
case 0x435b8e:c.instructions+=12;goto B435b8e;
case 0x435b95:c.instructions+=11;goto B435b95;
case 0x435b96:c.instructions+=10;goto B435b96;
case 0x435b97:c.instructions+=9;goto B435b97;
case 0x435b99:c.instructions+=8;goto B435b99;
case 0x435b9c:c.instructions+=7;goto B435b9c;
case 0x435ba2:c.instructions+=6;goto B435ba2;
case 0x435ba6:c.instructions+=5;goto B435ba6;
case 0x435ba8:c.instructions+=4;goto B435ba8;
case 0x435bab:c.instructions+=3;goto B435bab;
case 0x435bb0:c.instructions+=2;goto B435bb0;
case 0x435bb8:c.instructions+=1;goto B435bb8;
case 0x435bbd:goto L435bbd;
case 0x435bc1:c.instructions+=8;goto B435bc1;
case 0x435bc6:c.instructions+=7;goto B435bc6;
case 0x435bc9:c.instructions+=6;goto B435bc9;
case 0x435bd0:c.instructions+=5;goto B435bd0;
case 0x435bd2:c.instructions+=4;goto B435bd2;
case 0x435bd3:c.instructions+=3;goto B435bd3;
case 0x435bda:c.instructions+=2;goto B435bda;
case 0x435bdd:c.instructions+=1;goto B435bdd;
case 0x435be0:goto L435be0;
case 0x435be5:c.instructions+=2;goto B435be5;
case 0x435be7:c.instructions+=1;goto B435be7;
case 0x435be9:goto L435be9;
case 0x435beb:c.instructions+=1;goto B435beb;
case 0x435bee:goto L435bee;
case 0x435bef:c.instructions+=3;goto B435bef;
case 0x435bf3:c.instructions+=2;goto B435bf3;
case 0x435bf4:c.instructions+=1;goto B435bf4;
case 0x435bf9:goto L435bf9;
case 0x435bfc:c.instructions+=2;goto B435bfc;
case 0x435bfe:c.instructions+=1;goto B435bfe;
case 0x435c00:goto L435c00;
case 0x435c02:c.instructions+=2;goto B435c02;
case 0x435c03:c.instructions+=1;goto B435c03;
case 0x435c06:goto L435c06;
case 0x435c0b:c.instructions+=7;goto B435c0b;
case 0x435c0c:c.instructions+=6;goto B435c0c;
case 0x435c0d:c.instructions+=5;goto B435c0d;
case 0x435c0f:c.instructions+=4;goto B435c0f;
case 0x435c11:c.instructions+=3;goto B435c11;
case 0x435c13:c.instructions+=2;goto B435c13;
case 0x435c15:c.instructions+=1;goto B435c15;
case 0x435c17:goto L435c17;
case 0x435c1a:c.instructions+=2;goto B435c1a;
case 0x435c1b:c.instructions+=1;goto B435c1b;
case 0x435c20:goto L435c20;
case 0x435c22:c.instructions+=3;goto B435c22;
case 0x435c24:c.instructions+=2;goto B435c24;
case 0x435c27:c.instructions+=1;goto B435c27;
case 0x435c29:goto L435c29;
case 0x435c2a:c.instructions+=3;goto B435c2a;
case 0x435c2d:c.instructions+=2;goto B435c2d;
case 0x435c2f:c.instructions+=1;goto B435c2f;
case 0x435c31:goto L435c31;
case 0x435c33:goto L435c33;
case 0x435c35:c.instructions+=2;goto B435c35;
case 0x435c3b:c.instructions+=1;goto B435c3b;
case 0x435c41:goto L435c41;
case 0x435c42:goto L435c42;
case 0x435c44:c.instructions+=2;goto B435c44;
case 0x435c49:c.instructions+=1;goto B435c49;
case 0x435c4f:goto L435c4f;
case 0x435c54:goto L435c54;
case 0x435c56:c.instructions+=2;goto B435c56;
case 0x435c5c:c.instructions+=1;goto B435c5c;
case 0x435c5e:goto L435c5e;
case 0x435c62:c.instructions+=5;goto B435c62;
case 0x435c63:c.instructions+=4;goto B435c63;
case 0x435c64:c.instructions+=3;goto B435c64;
case 0x435c6e:c.instructions+=2;goto B435c6e;
case 0x435c6f:c.instructions+=1;goto B435c6f;
case 0x435c72:goto L435c72;
case 0x435c78:c.instructions+=1;goto B435c78;
case 0x435c7a:goto L435c7a;
case 0x435c7f:c.instructions+=1;goto B435c7f;
case 0x435c84:goto L435c84;
case 0x435c86:c.instructions+=5;goto B435c86;
case 0x435c8b:c.instructions+=4;goto B435c8b;
case 0x435c8c:c.instructions+=3;goto B435c8c;
case 0x435c91:c.instructions+=2;goto B435c91;
case 0x435c98:c.instructions+=1;goto B435c98;
case 0x435c9d:goto L435c9d;
case 0x435c9f:goto L435c9f;
case 0x435ca4:c.instructions+=3;goto B435ca4;
case 0x435ca5:c.instructions+=2;goto B435ca5;
case 0x435cac:c.instructions+=1;goto B435cac;
case 0x435cb1:goto L435cb1;
case 0x435cb4:goto L435cb4;
case 0x435cb6:c.instructions+=3;goto B435cb6;
case 0x435cb8:c.instructions+=2;goto B435cb8;
case 0x435cbd:c.instructions+=1;goto B435cbd;
case 0x435cbf:goto L435cbf;
case 0x435cc5:c.instructions+=2;goto B435cc5;
case 0x435cc7:c.instructions+=1;goto B435cc7;
case 0x435cc9:goto L435cc9;
case 0x435ccf:c.instructions+=1;goto B435ccf;
case 0x435cd1:goto L435cd1;
case 0x435cd5:c.instructions+=8;goto B435cd5;
case 0x435cdb:c.instructions+=7;goto B435cdb;
case 0x435cde:c.instructions+=6;goto B435cde;
case 0x435cdf:c.instructions+=5;goto B435cdf;
case 0x435ce4:c.instructions+=4;goto B435ce4;
case 0x435ce5:c.instructions+=3;goto B435ce5;
case 0x435ce6:c.instructions+=2;goto B435ce6;
case 0x435ce8:c.instructions+=1;goto B435ce8;
case 0x435ced:goto L435ced;
case 0x435cf2:c.instructions+=1;goto B435cf2;
case 0x435cf4:goto L435cf4;
case 0x435cfb:goto L435cfb;
case 0x435d02:c.instructions+=4;goto B435d02;
case 0x435d08:c.instructions+=3;goto B435d08;
case 0x435d0e:c.instructions+=2;goto B435d0e;
case 0x435d13:c.instructions+=1;goto B435d13;
case 0x435d18:goto L435d18;
case 0x435d1d:goto L435d1d;
case 0x435d21:c.instructions+=4;goto B435d21;
case 0x435d22:c.instructions+=3;goto B435d22;
case 0x435d23:c.instructions+=2;goto B435d23;
case 0x435d24:c.instructions+=1;goto B435d24;
case 0x435d30:goto L435d30;
case 0x435d35:c.instructions+=2;goto B435d35;
case 0x435d37:c.instructions+=1;goto B435d37;
case 0x435d39:goto L435d39;
case 0x435d3d:c.instructions+=2;goto B435d3d;
case 0x435d3e:c.instructions+=1;goto B435d3e;
case 0x435d43:goto L435d43;
case 0x435d46:c.instructions+=2;goto B435d46;
case 0x435d48:c.instructions+=1;goto B435d48;
case 0x435d4a:goto L435d4a;
case 0x435d51:c.instructions+=2;goto B435d51;
case 0x435d53:c.instructions+=1;goto B435d53;
case 0x435d56:goto L435d56;
case 0x435d58:c.instructions+=1;goto B435d58;
case 0x435d60:goto L435d60;
case 0x435d62:c.instructions+=10;goto B435d62;
case 0x435d67:c.instructions+=9;goto B435d67;
case 0x435d6d:c.instructions+=8;goto B435d6d;
case 0x435d6e:c.instructions+=7;goto B435d6e;
case 0x435d75:c.instructions+=6;goto B435d75;
case 0x435d76:c.instructions+=5;goto B435d76;
case 0x435d7b:c.instructions+=4;goto B435d7b;
case 0x435d7d:c.instructions+=3;goto B435d7d;
case 0x435d7e:c.instructions+=2;goto B435d7e;
case 0x435d80:c.instructions+=1;goto B435d80;
case 0x435d82:goto L435d82;
case 0x435d87:c.instructions+=2;goto B435d87;
case 0x435d89:c.instructions+=1;goto B435d89;
case 0x435d8b:goto L435d8b;
case 0x435d90:c.instructions+=2;goto B435d90;
case 0x435d92:c.instructions+=1;goto B435d92;
case 0x435d94:goto L435d94;
case 0x435d99:c.instructions+=2;goto B435d99;
case 0x435d9b:c.instructions+=1;goto B435d9b;
case 0x435d9d:goto L435d9d;
case 0x435d9f:c.instructions+=2;goto B435d9f;
case 0x435da4:c.instructions+=1;goto B435da4;
case 0x435da9:goto L435da9;
case 0x435dab:goto L435dab;
case 0x435dae:goto L435dae;
case 0x435db1:c.instructions+=2;goto B435db1;
case 0x435db3:c.instructions+=1;goto B435db3;
case 0x435db5:goto L435db5;
case 0x435db7:c.instructions+=1;goto B435db7;
case 0x435db9:goto L435db9;
case 0x435dbb:c.instructions+=1;goto B435dbb;
case 0x435dc0:goto L435dc0;
case 0x435dc3:c.instructions+=4;goto B435dc3;
case 0x435dc7:c.instructions+=3;goto B435dc7;
case 0x435dc9:c.instructions+=2;goto B435dc9;
case 0x435dd1:c.instructions+=1;goto B435dd1;
case 0x435dd3:goto L435dd3;
case 0x435dd5:c.instructions+=1;goto B435dd5;
case 0x435dda:goto L435dda;
case 0x435ddd:c.instructions+=5;goto B435ddd;
case 0x435dde:c.instructions+=4;goto B435dde;
case 0x435de2:c.instructions+=3;goto B435de2;
case 0x435de9:c.instructions+=2;goto B435de9;
case 0x435dec:c.instructions+=1;goto B435dec;
case 0x435ded:goto L435ded;
case 0x435def:c.instructions+=1;goto B435def;
case 0x435df2:goto L435df2;
case 0x435df6:c.instructions+=4;goto B435df6;
case 0x435df7:c.instructions+=3;goto B435df7;
case 0x435dfe:c.instructions+=2;goto B435dfe;
case 0x435e01:c.instructions+=1;goto B435e01;
case 0x435e10:goto L435e10;
case 0x435e11:c.instructions+=6;goto B435e11;
case 0x435e15:c.instructions+=5;goto B435e15;
case 0x435e17:c.instructions+=4;goto B435e17;
case 0x435e18:c.instructions+=3;goto B435e18;
case 0x435e19:c.instructions+=2;goto B435e19;
case 0x435e1b:c.instructions+=1;goto B435e1b;
case 0x435e1d:goto L435e1d;
case 0x435e20:goto L435e20;
case 0x435e22:c.instructions+=1;goto B435e22;
case 0x435e27:goto L435e27;
case 0x435e2a:c.instructions+=2;goto B435e2a;
case 0x435e2c:c.instructions+=1;goto B435e2c;
case 0x435e2e:goto L435e2e;
case 0x435e30:c.instructions+=5;goto B435e30;
case 0x435e34:c.instructions+=4;goto B435e34;
case 0x435e37:c.instructions+=3;goto B435e37;
case 0x435e3a:c.instructions+=2;goto B435e3a;
case 0x435e3d:c.instructions+=1;goto B435e3d;
case 0x435e3f:goto L435e3f;
case 0x435e41:goto L435e41;
case 0x435e44:c.instructions+=8;goto B435e44;
case 0x435e47:c.instructions+=7;goto B435e47;
case 0x435e49:c.instructions+=6;goto B435e49;
case 0x435e4c:c.instructions+=5;goto B435e4c;
case 0x435e4d:c.instructions+=4;goto B435e4d;
case 0x435e50:c.instructions+=3;goto B435e50;
case 0x435e52:c.instructions+=2;goto B435e52;
case 0x435e53:c.instructions+=1;goto B435e53;
case 0x435e60:goto L435e60;
case 0x435e61:c.instructions+=2;goto B435e61;
case 0x435e63:c.instructions+=1;goto B435e63;
case 0x435e68:goto L435e68;
case 0x435e6d:c.instructions+=1;goto B435e6d;
case 0x435e6f:goto L435e6f;
case 0x435e70:c.instructions+=1;goto B435e70;
case 0x435e75:goto L435e75;
case 0x435e78:goto L435e78;
case 0x435e7a:c.instructions+=2;goto B435e7a;
case 0x435e7b:c.instructions+=1;goto B435e7b;
case 0x435e80:goto L435e80;
case 0x435e81:c.instructions+=2;goto B435e81;
case 0x435e83:c.instructions+=1;goto B435e83;
case 0x435e88:goto L435e88;
case 0x435e8d:c.instructions+=1;goto B435e8d;
case 0x435e8f:goto L435e8f;
case 0x435e90:c.instructions+=1;goto B435e90;
case 0x435e95:goto L435e95;
case 0x435e98:goto L435e98;
case 0x435e9a:c.instructions+=2;goto B435e9a;
case 0x435e9b:c.instructions+=1;goto B435e9b;
case 0x435ea0:goto L435ea0;
case 0x435ea1:c.instructions+=5;goto B435ea1;
case 0x435ea2:c.instructions+=4;goto B435ea2;
case 0x435ea6:c.instructions+=3;goto B435ea6;
case 0x435ea7:c.instructions+=2;goto B435ea7;
case 0x435ea9:c.instructions+=1;goto B435ea9;
case 0x435eae:goto L435eae;
case 0x435eb0:c.instructions+=1;goto B435eb0;
case 0x435eb2:goto L435eb2;
case 0x435eb4:c.instructions+=1;goto B435eb4;
case 0x435eb9:goto L435eb9;
case 0x435ebc:c.instructions+=2;goto B435ebc;
case 0x435ebe:c.instructions+=1;goto B435ebe;
case 0x435ec0:goto L435ec0;
case 0x435ec4:c.instructions+=5;goto B435ec4;
case 0x435eca:c.instructions+=4;goto B435eca;
case 0x435ecd:c.instructions+=3;goto B435ecd;
case 0x435ed0:c.instructions+=2;goto B435ed0;
case 0x435ed3:c.instructions+=1;goto B435ed3;
case 0x435ed5:goto L435ed5;
case 0x435ed7:goto L435ed7;
case 0x435eda:c.instructions+=5;goto B435eda;
case 0x435edd:c.instructions+=4;goto B435edd;
case 0x435edf:c.instructions+=3;goto B435edf;
case 0x435ee2:c.instructions+=2;goto B435ee2;
case 0x435ee5:c.instructions+=1;goto B435ee5;
case 0x435ee7:goto L435ee7;
case 0x435ee8:c.instructions+=2;goto B435ee8;
case 0x435ee9:c.instructions+=1;goto B435ee9;
case 0x435ef0:goto L435ef0;
case 0x435ef1:c.instructions+=5;goto B435ef1;
case 0x435ef2:c.instructions+=4;goto B435ef2;
case 0x435ef6:c.instructions+=3;goto B435ef6;
case 0x435ef7:c.instructions+=2;goto B435ef7;
case 0x435ef9:c.instructions+=1;goto B435ef9;
case 0x435efe:goto L435efe;
case 0x435f00:c.instructions+=1;goto B435f00;
case 0x435f02:goto L435f02;
case 0x435f04:c.instructions+=1;goto B435f04;
case 0x435f09:goto L435f09;
case 0x435f0c:c.instructions+=2;goto B435f0c;
case 0x435f0e:c.instructions+=1;goto B435f0e;
case 0x435f10:goto L435f10;
case 0x435f15:c.instructions+=5;goto B435f15;
case 0x435f1b:c.instructions+=4;goto B435f1b;
case 0x435f1e:c.instructions+=3;goto B435f1e;
case 0x435f21:c.instructions+=2;goto B435f21;
case 0x435f24:c.instructions+=1;goto B435f24;
case 0x435f26:goto L435f26;
case 0x435f28:goto L435f28;
case 0x435f2b:c.instructions+=5;goto B435f2b;
case 0x435f2e:c.instructions+=4;goto B435f2e;
case 0x435f30:c.instructions+=3;goto B435f30;
case 0x435f33:c.instructions+=2;goto B435f33;
case 0x435f36:c.instructions+=1;goto B435f36;
case 0x435f38:goto L435f38;
case 0x435f39:c.instructions+=2;goto B435f39;
case 0x435f3a:c.instructions+=1;goto B435f3a;
case 0x435f40:goto L435f40;
case 0x435f42:c.instructions+=1;goto B435f42;
case 0x435f47:goto L435f47;
case 0x435f49:c.instructions+=1;goto B435f49;
case 0x435f4b:goto L435f4b;
case 0x435f4e:c.instructions+=4;goto B435f4e;
case 0x435f50:c.instructions+=3;goto B435f50;
case 0x435f53:c.instructions+=2;goto B435f53;
case 0x435f55:c.instructions+=1;goto B435f55;
case 0x435f57:goto L435f57;
case 0x435f58:c.instructions+=3;goto B435f58;
case 0x435f59:c.instructions+=2;goto B435f59;
case 0x435f5e:c.instructions+=1;goto B435f5e;
case 0x435f60:goto L435f60;
case 0x435f62:c.instructions+=2;goto B435f62;
case 0x435f64:c.instructions+=1;goto B435f64;
case 0x435f66:goto L435f66;
case 0x435f6c:c.instructions+=4;goto B435f6c;
case 0x435f70:c.instructions+=3;goto B435f70;
case 0x435f72:c.instructions+=2;goto B435f72;
case 0x435f74:c.instructions+=1;goto B435f74;
case 0x435f79:goto L435f79;
case 0x435f7f:c.instructions+=2;goto B435f7f;
case 0x435f81:c.instructions+=1;goto B435f81;
case 0x435f83:goto L435f83;
case 0x435f85:c.instructions+=2;goto B435f85;
case 0x435f87:c.instructions+=1;goto B435f87;
case 0x435f8c:goto L435f8c;
case 0x435f8f:c.instructions+=2;goto B435f8f;
case 0x435f91:c.instructions+=1;goto B435f91;
case 0x435f93:goto L435f93;
case 0x435f98:goto L435f98;
case 0x435f9b:c.instructions+=2;goto B435f9b;
case 0x435fa1:c.instructions+=1;goto B435fa1;
case 0x435fa3:goto L435fa3;
case 0x435fa8:c.instructions+=1;goto B435fa8;
case 0x435fad:goto L435fad;
case 0x435fb0:c.instructions+=2;goto B435fb0;
case 0x435fb1:c.instructions+=1;goto B435fb1;
case 0x435fb2:goto L435fb2;
case 0x435fc0:goto L435fc0;
case 0x435fc1:c.instructions+=7;goto B435fc1;
case 0x435fc2:c.instructions+=6;goto B435fc2;
case 0x435fc4:c.instructions+=5;goto B435fc4;
case 0x435fc7:c.instructions+=4;goto B435fc7;
case 0x435fca:c.instructions+=3;goto B435fca;
case 0x435fcb:c.instructions+=2;goto B435fcb;
case 0x435fcd:c.instructions+=1;goto B435fcd;
case 0x435fd2:goto L435fd2;
case 0x435fd4:c.instructions+=2;goto B435fd4;
case 0x435fd8:c.instructions+=1;goto B435fd8;
case 0x435fda:goto L435fda;
case 0x435fdb:c.instructions+=6;goto B435fdb;
case 0x435fdc:c.instructions+=5;goto B435fdc;
case 0x435fe0:c.instructions+=4;goto B435fe0;
case 0x435fe3:c.instructions+=3;goto B435fe3;
case 0x435fe6:c.instructions+=2;goto B435fe6;
case 0x435fe7:c.instructions+=1;goto B435fe7;
case 0x435fec:goto L435fec;
case 0x435ff2:c.instructions+=7;goto B435ff2;
case 0x435ff5:c.instructions+=6;goto B435ff5;
case 0x435ff7:c.instructions+=5;goto B435ff7;
case 0x435ff9:c.instructions+=4;goto B435ff9;
case 0x435ffa:c.instructions+=3;goto B435ffa;
case 0x435ffb:c.instructions+=2;goto B435ffb;
case 0x435ffd:c.instructions+=1;goto B435ffd;
default:missing_instruction(c.pc);}
B435000:L435000:{c.instructions+=5;NFSU2_TR(0x435000);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B435001:{NFSU2_TR(0x435001);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B435002:{NFSU2_TR(0x435002);
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
B435004:{NFSU2_TR(0x435004);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B435005:{NFSU2_TR(0x435005);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B435010:L435010:{c.instructions+=31;NFSU2_TR(0x435010);
__builtin_memmove((R+0),(R+4),4);
}
B435012:{NFSU2_TR(0x435012);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B435014:{NFSU2_TR(0x435014);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B435017:{NFSU2_TR(0x435017);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43501a:{NFSU2_TR(0x43501a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43501d:{NFSU2_TR(0x43501d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B435020:{NFSU2_TR(0x435020);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B435023:{NFSU2_TR(0x435023);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B435025:{NFSU2_TR(0x435025);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B435028:{NFSU2_TR(0x435028);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43502b:{NFSU2_TR(0x43502b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43502e:{NFSU2_TR(0x43502e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B435031:{NFSU2_TR(0x435031);
w4(R+8,u32(0x3f800000ull));
}
B435036:{NFSU2_TR(0x435036);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B435039:{NFSU2_TR(0x435039);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43503c:{NFSU2_TR(0x43503c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43503f:{NFSU2_TR(0x43503f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B435042:{NFSU2_TR(0x435042);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B435045:{NFSU2_TR(0x435045);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B435048:{NFSU2_TR(0x435048);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43504b:{NFSU2_TR(0x43504b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43504e:{NFSU2_TR(0x43504e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B435051:{NFSU2_TR(0x435051);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B435054:{NFSU2_TR(0x435054);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B435057:{NFSU2_TR(0x435057);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43505a:{NFSU2_TR(0x43505a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43505d:{NFSU2_TR(0x43505d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B435060:{NFSU2_TR(0x435060);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B435063:{NFSU2_TR(0x435063);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B435066:{NFSU2_TR(0x435066);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B435069:{NFSU2_TR(0x435069);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B435070:L435070:{c.instructions+=3;NFSU2_TR(0x435070);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435071:{NFSU2_TR(0x435071);
__builtin_memmove((R+24),(R+4),4);
}
B435073:{NFSU2_TR(0x435073);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x435078ull));
TAIL_STATIC(0x4315b0u,431);
}
B435078:L435078:{c.instructions+=25;NFSU2_TR(0x435078);
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
B43507a:{NFSU2_TR(0x43507a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43507d:{NFSU2_TR(0x43507d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B435080:{NFSU2_TR(0x435080);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B435083:{NFSU2_TR(0x435083);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B435086:{NFSU2_TR(0x435086);
w4(R+4,u32(0x3f800000ull));
}
B43508b:{NFSU2_TR(0x43508b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43508e:{NFSU2_TR(0x43508e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B435091:{NFSU2_TR(0x435091);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B435094:{NFSU2_TR(0x435094);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B435097:{NFSU2_TR(0x435097);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43509a:{NFSU2_TR(0x43509a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43509d:{NFSU2_TR(0x43509d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4350a0:{NFSU2_TR(0x4350a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4350a3:{NFSU2_TR(0x4350a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4350a6:{NFSU2_TR(0x4350a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4350a9:{NFSU2_TR(0x4350a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4350ac:{NFSU2_TR(0x4350ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4350af:{NFSU2_TR(0x4350af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4350b2:{NFSU2_TR(0x4350b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4350b5:{NFSU2_TR(0x4350b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4350b8:{NFSU2_TR(0x4350b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4350bb:{NFSU2_TR(0x4350bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4350be:{NFSU2_TR(0x4350be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4350bf:{NFSU2_TR(0x4350bf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4350c0:L4350c0:{c.instructions+=12;NFSU2_TR(0x4350c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B4350c3:{NFSU2_TR(0x4350c3);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4350c7:{NFSU2_TR(0x4350c7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4350c8:{NFSU2_TR(0x4350c8);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4350cc:{NFSU2_TR(0x4350cc);
__builtin_memmove((R+24),(R+4),4);
}
B4350ce:{NFSU2_TR(0x4350ce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4350cf:{NFSU2_TR(0x4350cf);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4350d3:{NFSU2_TR(0x4350d3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4350d4:{NFSU2_TR(0x4350d4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4350d5:{NFSU2_TR(0x4350d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4350dd:{NFSU2_TR(0x4350dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4350e5:{NFSU2_TR(0x4350e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4350eaull));
TAIL_STATIC(0x434850u,434);
}
B4350ea:L4350ea:{c.instructions+=3;NFSU2_TR(0x4350ea);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4350ed:{NFSU2_TR(0x4350ed);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4350ef:{NFSU2_TR(0x4350ef);
if(r1(R+518)){{goto L43512e;}}
}
B4350f1:L4350f1:{c.instructions+=5;NFSU2_TR(0x4350f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4350f5:{NFSU2_TR(0x4350f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4350f9:{NFSU2_TR(0x4350f9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4350fa:{NFSU2_TR(0x4350fa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4350fb:{NFSU2_TR(0x4350fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x435100ull));
TAIL_STATIC(0x6e2d40u,6e2);
}
B435100:L435100:{c.instructions+=7;NFSU2_TR(0x435100);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B435104:{NFSU2_TR(0x435104);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((R+4),(U+0),4);
}
B435107:{NFSU2_TR(0x435107);
u8 U[16];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B43510b:{NFSU2_TR(0x43510b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B43510d:{NFSU2_TR(0x43510d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43510e:{NFSU2_TR(0x43510e);
__builtin_memmove((R+4),(R+0),4);
}
B435110:{NFSU2_TR(0x435110);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x435113ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B435113:L435113:{c.instructions+=5;NFSU2_TR(0x435113);
u8 U[16];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B435117:{NFSU2_TR(0x435117);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B435119:{NFSU2_TR(0x435119);
w4(R+0,u32(0x1ull));
}
B43511e:{NFSU2_TR(0x43511e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43511f:{NFSU2_TR(0x43511f);
if(r1(R+518)){{goto L435124;}}
}
B435121:L435121:{c.instructions+=1;NFSU2_TR(0x435121);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B435124:L435124:{c.instructions+=4;NFSU2_TR(0x435124);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B435127:{NFSU2_TR(0x435127);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B435128:{NFSU2_TR(0x435128);
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
B43512b:{NFSU2_TR(0x43512b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43512e:L43512e:{c.instructions+=4;NFSU2_TR(0x43512e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B435130:{NFSU2_TR(0x435130);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B435131:{NFSU2_TR(0x435131);
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
B435134:{NFSU2_TR(0x435134);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B435140:L435140:{c.instructions+=31;NFSU2_TR(0x435140);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x2cull))));
}
B435143:{NFSU2_TR(0x435143);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435144:{NFSU2_TR(0x435144);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435145:{NFSU2_TR(0x435145);
__builtin_memmove((R+24),(R+4),4);
}
B435147:{NFSU2_TR(0x435147);
{u32 ea_=u32(r4(R+24)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43514a:{NFSU2_TR(0x43514a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43514d:{NFSU2_TR(0x43514d);
{u32 ea_=u32(r4(R+24)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B435150:{NFSU2_TR(0x435150);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435151:{NFSU2_TR(0x435151);
__builtin_memmove((R+4),(R+0),4);
}
B435153:{NFSU2_TR(0x435153);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B435155:{NFSU2_TR(0x435155);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x40ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B435158:{NFSU2_TR(0x435158);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43515c:{NFSU2_TR(0x43515c);
{u32 ea_=u32(u32(7887832u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B435162:{NFSU2_TR(0x435162);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B435166:{NFSU2_TR(0x435166);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43516a:{NFSU2_TR(0x43516a);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43516e:{NFSU2_TR(0x43516e);
{u32 ea_=u32(u32(7887832u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B435174:{NFSU2_TR(0x435174);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B435177:{NFSU2_TR(0x435177);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43517b:{NFSU2_TR(0x43517b);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43517f:{NFSU2_TR(0x43517f);
{u32 ea_=u32(u32(7887832u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B435185:{NFSU2_TR(0x435185);
{u32 ea_=u32(r4(R+24)+u32(104u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B435188:{NFSU2_TR(0x435188);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43518c:{NFSU2_TR(0x43518c);
{u32 ea_=u32(u32(7887832u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B435192:{NFSU2_TR(0x435192);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B435195:{NFSU2_TR(0x435195);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B435199:{NFSU2_TR(0x435199);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43519d:{NFSU2_TR(0x43519d);
{u32 ea_=u32(u32(7887832u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4351a3:{NFSU2_TR(0x4351a3);
{u32 ea_=u32(r4(R+24)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4351a6:{NFSU2_TR(0x4351a6);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4351aa:{NFSU2_TR(0x4351aa);
if(r1(R+518)){{goto L4351c6;}}
}
B4351ac:L4351ac:{c.instructions+=9;NFSU2_TR(0x4351ac);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4351af:{NFSU2_TR(0x4351af);
{u32 ea_=u32(r4(R+24)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4351b2:{NFSU2_TR(0x4351b2);
{u32 ea_=u32(r4(R+24)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4351b5:{NFSU2_TR(0x4351b5);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4351b8:{NFSU2_TR(0x4351b8);
{u32 ea_=u32(r4(R+24)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4351bb:{NFSU2_TR(0x4351bb);
{u32 ea_=u32(r4(R+24)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4351be:{NFSU2_TR(0x4351be);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B4351c0:{NFSU2_TR(0x4351c0);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4351c4:{NFSU2_TR(0x4351c4);
{goto L4351cd;}
}
B4351c6:L4351c6:{c.instructions+=2;NFSU2_TR(0x4351c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4351c9:{NFSU2_TR(0x4351c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4351cd:L4351cd:{c.instructions+=2;NFSU2_TR(0x4351cd);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4351cf:{NFSU2_TR(0x4351cf);
if(r1(R+518)){{goto L4351e0;}}
}
B4351d1:L4351d1:{c.instructions+=5;NFSU2_TR(0x4351d1);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4351d4:{NFSU2_TR(0x4351d4);
{u32 ea_=u32(r4(R+24)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4351d7:{NFSU2_TR(0x4351d7);
{u32 ea_=u32(r4(R+24)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4351da:{NFSU2_TR(0x4351da);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4351de:{NFSU2_TR(0x4351de);
{goto L4351e8;}
}
B4351e0:L4351e0:{c.instructions+=1;NFSU2_TR(0x4351e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4351e8:L4351e8:{c.instructions+=2;NFSU2_TR(0x4351e8);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4351ea:{NFSU2_TR(0x4351ea);
if(r1(R+518)){{goto L4351fb;}}
}
B4351ec:L4351ec:{c.instructions+=5;NFSU2_TR(0x4351ec);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4351ef:{NFSU2_TR(0x4351ef);
{u32 ea_=u32(r4(R+24)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4351f2:{NFSU2_TR(0x4351f2);
{u32 ea_=u32(r4(R+24)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4351f5:{NFSU2_TR(0x4351f5);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4351f9:{NFSU2_TR(0x4351f9);
{goto L435202;}
}
B4351fb:L4351fb:{c.instructions+=2;NFSU2_TR(0x4351fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4351fe:{NFSU2_TR(0x4351fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B435202:L435202:{c.instructions+=9;NFSU2_TR(0x435202);
__builtin_memmove((R+4),(R+0),4);
}
B435204:{NFSU2_TR(0x435204);
__builtin_memmove((R+8),(R+0),4);
}
B435206:{NFSU2_TR(0x435206);
u8 U[4];
w4(U+0,u32(u32(u32(0xbull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B435209:{NFSU2_TR(0x435209);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B43520c:{NFSU2_TR(0x43520c);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0x1ull))));
}
B43520f:{NFSU2_TR(0x43520f);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0x1ull))));
}
B435212:{NFSU2_TR(0x435212);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B435214:{NFSU2_TR(0x435214);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B435218:{NFSU2_TR(0x435218);
if(r1(R+518)){{goto L435223;}}
}
B43521a:L43521a:{c.instructions+=3;NFSU2_TR(0x43521a);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43521c:{NFSU2_TR(0x43521c);
u8 U[5];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B435221:{NFSU2_TR(0x435221);
if(r1(R+518)){{goto L435228;}}
}
B435223:L435223:{c.instructions+=1;NFSU2_TR(0x435223);
u8 U[5];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B435228:L435228:{c.instructions+=5;NFSU2_TR(0x435228);
__builtin_memmove((R+4),(R+0),4);
}
B43522a:{NFSU2_TR(0x43522a);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B43522d:{NFSU2_TR(0x43522d);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0x1ull))));
}
B435230:{NFSU2_TR(0x435230);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B435232:{NFSU2_TR(0x435232);
if(r1(R+518)){{goto L43523f;}}
}
B435234:L435234:{c.instructions+=2;NFSU2_TR(0x435234);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B435236:{NFSU2_TR(0x435236);
if(r1(R+518)){{goto L43524b;}}
}
B435238:L435238:{c.instructions+=3;NFSU2_TR(0x435238);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffffefull))));
}
B43523b:{NFSU2_TR(0x43523b);
w1(R+4,u8(u32(r1(R+4))^u32(r1(R+4))));
}
B43523d:{NFSU2_TR(0x43523d);
{goto L435248;}
}
B43523f:L43523f:{c.instructions+=2;NFSU2_TR(0x43523f);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B435241:{NFSU2_TR(0x435241);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43524b;}}
}
B435243:L435243:{c.instructions+=2;NFSU2_TR(0x435243);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x8ull))));
}
B435246:{NFSU2_TR(0x435246);
w1(R+8,u8(0x1ull));
}
B435248:L435248:{c.instructions+=1;NFSU2_TR(0x435248);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43524b:L43524b:{c.instructions+=3;NFSU2_TR(0x43524b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B43524e:{NFSU2_TR(0x43524e);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B435250:{NFSU2_TR(0x435250);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L435274;}}
}
B435252:L435252:{c.instructions+=5;NFSU2_TR(0x435252);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B435256:{NFSU2_TR(0x435256);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43525a:{NFSU2_TR(0x43525a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43525c:{NFSU2_TR(0x43525c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43525f:{NFSU2_TR(0x43525f);
if(r1(R+514)){{goto L435274;}}
}
B435261:L435261:{c.instructions+=6;NFSU2_TR(0x435261);
{u32 ea_=u32(r4(R+24)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B435264:{NFSU2_TR(0x435264);
u8 U[5];
w4(U+0,u32(u32(u32(0xeull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B435269:{NFSU2_TR(0x435269);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43526d:{NFSU2_TR(0x43526d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43526f:{NFSU2_TR(0x43526f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B435272:{NFSU2_TR(0x435272);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L435279;}}
}
B435274:L435274:{c.instructions+=1;NFSU2_TR(0x435274);
u8 U[5];
w4(U+0,u32(u32(u32(0xeull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B435279:L435279:{c.instructions+=2;NFSU2_TR(0x435279);
u8 U[1];
w1(U+0,u8(u32(r1(R+13))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43527c:{NFSU2_TR(0x43527c);
if(r1(R+518)){{goto L43529f;}}
}
B43527e:L43527e:{c.instructions+=5;NFSU2_TR(0x43527e);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B435282:{NFSU2_TR(0x435282);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B435286:{NFSU2_TR(0x435286);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B435288:{NFSU2_TR(0x435288);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43528b:{NFSU2_TR(0x43528b);
if(r1(R+514)){{goto L43529f;}}
}
B43528d:L43528d:{c.instructions+=5;NFSU2_TR(0x43528d);
{u32 ea_=u32(r4(R+24)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B435290:{NFSU2_TR(0x435290);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B435294:{NFSU2_TR(0x435294);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B435296:{NFSU2_TR(0x435296);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B435299:{NFSU2_TR(0x435299);
if(r1(R+514)){{goto L43529f;}}
}
B43529b:L43529b:{c.instructions+=2;NFSU2_TR(0x43529b);
w1(R+0,u8(0x1ull));
}
B43529d:{NFSU2_TR(0x43529d);
{goto L4352a1;}
}
B43529f:L43529f:{c.instructions+=1;NFSU2_TR(0x43529f);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B4352a1:L4352a1:{c.instructions+=5;NFSU2_TR(0x4352a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4352a4:{NFSU2_TR(0x4352a4);
{u32 ea_=u32(r4(R+24)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4352a7:{NFSU2_TR(0x4352a7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4352aa:{NFSU2_TR(0x4352aa);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4352ae:{NFSU2_TR(0x4352ae);
if(r1(R+518)){{goto L4352bd;}}
}
B4352b0:L4352b0:{c.instructions+=7;NFSU2_TR(0x4352b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4352b1:{NFSU2_TR(0x4352b1);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4352b3:{NFSU2_TR(0x4352b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4352b4:{NFSU2_TR(0x4352b4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4352b6:{NFSU2_TR(0x4352b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4352b7:{NFSU2_TR(0x4352b7);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x2cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x2cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4352ba:{NFSU2_TR(0x4352ba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4352bd:L4352bd:{c.instructions+=3;NFSU2_TR(0x4352bd);
u8 U[5];
w4(U+0,u32(u32(u32(0xeull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B4352c1:{NFSU2_TR(0x4352c1);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4352c3:{NFSU2_TR(0x4352c3);
if(r1(R+518)){{goto L435319;}}
}
B4352c5:L4352c5:{c.instructions+=7;NFSU2_TR(0x4352c5);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4352c9:{NFSU2_TR(0x4352c9);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4352cd:{NFSU2_TR(0x4352cd);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4352d1:{NFSU2_TR(0x4352d1);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4352d5:{NFSU2_TR(0x4352d5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4352d7:{NFSU2_TR(0x4352d7);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4352da:{NFSU2_TR(0x4352da);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4352f4;}}
}
B4352dc:L4352dc:{c.instructions+=6;NFSU2_TR(0x4352dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4352e0:{NFSU2_TR(0x4352e0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4352e2:{NFSU2_TR(0x4352e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4352e6:{NFSU2_TR(0x4352e6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4352e7:{NFSU2_TR(0x4352e7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4352e8:{NFSU2_TR(0x4352e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4352edull));
TAIL_STATIC(0x43c240u,43c);
}
B4352ed:L4352ed:{c.instructions+=2;NFSU2_TR(0x4352ed);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4352f1:{NFSU2_TR(0x4352f1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4352f4:L4352f4:{c.instructions+=12;NFSU2_TR(0x4352f4);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4352fa:{NFSU2_TR(0x4352fa);
__builtin_memmove((R+0),(R+28),4);
}
B4352fc:{NFSU2_TR(0x4352fc);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B435300:{NFSU2_TR(0x435300);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B435301:{NFSU2_TR(0x435301);
{u32 ea_=u32(u32(7887832u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B435307:{NFSU2_TR(0x435307);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43530b:{NFSU2_TR(0x43530b);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43530e:{NFSU2_TR(0x43530e);
{u32 ea_=u32(r4(R+24)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B435311:{NFSU2_TR(0x435311);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B435312:{NFSU2_TR(0x435312);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B435313:{NFSU2_TR(0x435313);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x2cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x2cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B435316:{NFSU2_TR(0x435316);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B435319:L435319:{c.instructions+=3;NFSU2_TR(0x435319);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B43531b:{NFSU2_TR(0x43531b);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B43531d:{NFSU2_TR(0x43531d);
if(r1(R+518)){{goto L435373;}}
}
B43531f:L43531f:{c.instructions+=7;NFSU2_TR(0x43531f);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B435323:{NFSU2_TR(0x435323);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B435327:{NFSU2_TR(0x435327);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B43532b:{NFSU2_TR(0x43532b);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43532f:{NFSU2_TR(0x43532f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B435331:{NFSU2_TR(0x435331);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B435334:{NFSU2_TR(0x435334);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43534e;}}
}
B435336:L435336:{c.instructions+=6;NFSU2_TR(0x435336);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43533a:{NFSU2_TR(0x43533a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B43533c:{NFSU2_TR(0x43533c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B435340:{NFSU2_TR(0x435340);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435341:{NFSU2_TR(0x435341);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435342:{NFSU2_TR(0x435342);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x435347ull));
TAIL_STATIC(0x43c240u,43c);
}
B435347:L435347:{c.instructions+=2;NFSU2_TR(0x435347);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B43534b:{NFSU2_TR(0x43534b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B43534e:L43534e:{c.instructions+=12;NFSU2_TR(0x43534e);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B435354:{NFSU2_TR(0x435354);
__builtin_memmove((R+0),(R+28),4);
}
B435356:{NFSU2_TR(0x435356);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B43535a:{NFSU2_TR(0x43535a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43535b:{NFSU2_TR(0x43535b);
{u32 ea_=u32(u32(7887832u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B435361:{NFSU2_TR(0x435361);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B435365:{NFSU2_TR(0x435365);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B435368:{NFSU2_TR(0x435368);
{u32 ea_=u32(r4(R+24)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43536b:{NFSU2_TR(0x43536b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43536c:{NFSU2_TR(0x43536c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43536d:{NFSU2_TR(0x43536d);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x2cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x2cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B435370:{NFSU2_TR(0x435370);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B435373:L435373:{c.instructions+=2;NFSU2_TR(0x435373);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+8))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B435375:{NFSU2_TR(0x435375);
if(r1(R+518)){{goto L435411;}}
}
B43537b:L43537b:{c.instructions+=3;NFSU2_TR(0x43537b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43537e:{NFSU2_TR(0x43537e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B435381:{NFSU2_TR(0x435381);
if(r1(R+518)){{goto L4353ca;}}
}
B435383:L435383:{c.instructions+=5;NFSU2_TR(0x435383);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B435387:{NFSU2_TR(0x435387);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B43538b:{NFSU2_TR(0x43538b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43538d:{NFSU2_TR(0x43538d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B435390:{NFSU2_TR(0x435390);
if(r1(R+514)){{goto L435482;}}
}
B435396:L435396:{c.instructions+=2;NFSU2_TR(0x435396);
u8 U[7];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B43539a:{NFSU2_TR(0x43539a);
if(r1(R+518)){{goto L4353b1;}}
}
B43539c:L43539c:{c.instructions+=9;NFSU2_TR(0x43539c);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4353a0:{NFSU2_TR(0x4353a0);
__builtin_memmove((R+0),(R+28),4);
}
B4353a2:{NFSU2_TR(0x4353a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4353a3:{NFSU2_TR(0x4353a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4353a6:{NFSU2_TR(0x4353a6);
{u32 ea_=u32(r4(R+24)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4353a9:{NFSU2_TR(0x4353a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4353aa:{NFSU2_TR(0x4353aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4353ab:{NFSU2_TR(0x4353ab);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x2cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x2cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4353ae:{NFSU2_TR(0x4353ae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4353b1:L4353b1:{c.instructions+=10;NFSU2_TR(0x4353b1);
w4(R+28,u32(0x1ull));
}
B4353b6:{NFSU2_TR(0x4353b6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4353b8:{NFSU2_TR(0x4353b8);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4353bc:{NFSU2_TR(0x4353bc);
__builtin_memmove((R+0),(R+28),4);
}
B4353be:{NFSU2_TR(0x4353be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4353bf:{NFSU2_TR(0x4353bf);
{u32 ea_=u32(r4(R+24)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4353c2:{NFSU2_TR(0x4353c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4353c3:{NFSU2_TR(0x4353c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4353c4:{NFSU2_TR(0x4353c4);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x2cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x2cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4353c7:{NFSU2_TR(0x4353c7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4353ca:L4353ca:{c.instructions+=5;NFSU2_TR(0x4353ca);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4353ce:{NFSU2_TR(0x4353ce);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4353d2:{NFSU2_TR(0x4353d2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4353d4:{NFSU2_TR(0x4353d4);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4353d7:{NFSU2_TR(0x4353d7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L435482;}}
}
B4353dd:L4353dd:{c.instructions+=2;NFSU2_TR(0x4353dd);
u8 U[7];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4353e1:{NFSU2_TR(0x4353e1);
if(r1(R+518)){{goto L4353f8;}}
}
B4353e3:L4353e3:{c.instructions+=9;NFSU2_TR(0x4353e3);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4353e7:{NFSU2_TR(0x4353e7);
__builtin_memmove((R+0),(R+28),4);
}
B4353e9:{NFSU2_TR(0x4353e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4353ea:{NFSU2_TR(0x4353ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4353ed:{NFSU2_TR(0x4353ed);
{u32 ea_=u32(r4(R+24)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4353f0:{NFSU2_TR(0x4353f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4353f1:{NFSU2_TR(0x4353f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4353f2:{NFSU2_TR(0x4353f2);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x2cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x2cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4353f5:{NFSU2_TR(0x4353f5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4353f8:L4353f8:{c.instructions+=10;NFSU2_TR(0x4353f8);
w4(R+28,u32(0x1ull));
}
B4353fd:{NFSU2_TR(0x4353fd);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4353ff:{NFSU2_TR(0x4353ff);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B435403:{NFSU2_TR(0x435403);
__builtin_memmove((R+0),(R+28),4);
}
B435405:{NFSU2_TR(0x435405);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B435406:{NFSU2_TR(0x435406);
{u32 ea_=u32(r4(R+24)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B435409:{NFSU2_TR(0x435409);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43540a:{NFSU2_TR(0x43540a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43540b:{NFSU2_TR(0x43540b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x2cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x2cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B43540e:{NFSU2_TR(0x43540e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B435411:L435411:{c.instructions+=2;NFSU2_TR(0x435411);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B435413:{NFSU2_TR(0x435413);
if(r1(R+518)){{goto L435482;}}
}
B435415:L435415:{c.instructions+=3;NFSU2_TR(0x435415);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B435418:{NFSU2_TR(0x435418);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B43541a:{NFSU2_TR(0x43541a);
if(r1(R+518)){{goto L435457;}}
}
B43541c:L43541c:{c.instructions+=2;NFSU2_TR(0x43541c);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B43541d:{NFSU2_TR(0x43541d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L435482;}}
}
B43541f:L43541f:{c.instructions+=5;NFSU2_TR(0x43541f);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B435423:{NFSU2_TR(0x435423);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B435427:{NFSU2_TR(0x435427);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B435429:{NFSU2_TR(0x435429);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43542c:{NFSU2_TR(0x43542c);
if(r1(R+514)){{goto L435482;}}
}
B43542e:L43542e:{c.instructions+=4;NFSU2_TR(0x43542e);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B435432:{NFSU2_TR(0x435432);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B435434:{NFSU2_TR(0x435434);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B435436:{NFSU2_TR(0x435436);
if(r1(R+518)){{goto L43543f;}}
}
B435438:L435438:{c.instructions+=1;NFSU2_TR(0x435438);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B43543f:L43543f:{c.instructions+=10;NFSU2_TR(0x43543f);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B435443:{NFSU2_TR(0x435443);
__builtin_memmove((R+0),(R+28),4);
}
B435445:{NFSU2_TR(0x435445);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B435446:{NFSU2_TR(0x435446);
{u32 ea_=u32(r4(R+24)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B435449:{NFSU2_TR(0x435449);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43544c:{NFSU2_TR(0x43544c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43544f:{NFSU2_TR(0x43544f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B435450:{NFSU2_TR(0x435450);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B435451:{NFSU2_TR(0x435451);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x2cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x2cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B435454:{NFSU2_TR(0x435454);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B435457:L435457:{c.instructions+=5;NFSU2_TR(0x435457);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B43545b:{NFSU2_TR(0x43545b);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B43545f:{NFSU2_TR(0x43545f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B435461:{NFSU2_TR(0x435461);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B435464:{NFSU2_TR(0x435464);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L435482;}}
}
B435466:L435466:{c.instructions+=2;NFSU2_TR(0x435466);
u8 U[7];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B43546a:{NFSU2_TR(0x43546a);
if(r1(R+518)){{goto L435473;}}
}
B43546c:L43546c:{c.instructions+=1;NFSU2_TR(0x43546c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B435473:L435473:{c.instructions+=3;NFSU2_TR(0x435473);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B435477:{NFSU2_TR(0x435477);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B43547e:{NFSU2_TR(0x43547e);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B435482:L435482:{c.instructions+=7;NFSU2_TR(0x435482);
__builtin_memmove((R+0),(R+28),4);
}
B435484:{NFSU2_TR(0x435484);
{u32 ea_=u32(r4(R+24)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B435487:{NFSU2_TR(0x435487);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B435488:{NFSU2_TR(0x435488);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B435489:{NFSU2_TR(0x435489);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43548a:{NFSU2_TR(0x43548a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x2cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x2cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B43548d:{NFSU2_TR(0x43548d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B435490:L435490:{c.instructions+=5;NFSU2_TR(0x435490);
__builtin_memmove((R+0),(R+4),4);
}
B435492:{NFSU2_TR(0x435492);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B435494:{NFSU2_TR(0x435494);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B435497:{NFSU2_TR(0x435497);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43549a:{NFSU2_TR(0x43549a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4354a0:L4354a0:{c.instructions+=5;NFSU2_TR(0x4354a0);
__builtin_memmove((R+0),gp(0x86501c),4);
}
B4354a5:{NFSU2_TR(0x4354a5);
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
B4354a7:{NFSU2_TR(0x4354a7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4354a8:{NFSU2_TR(0x4354a8);
__builtin_memmove((R+24),(R+4),4);
}
B4354aa:{NFSU2_TR(0x4354aa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4354e8;}}
}
B4354ac:L4354ac:{c.instructions+=3;NFSU2_TR(0x4354ac);
__builtin_memmove((R+0),gp(0x827adc),1);
}
B4354b1:{NFSU2_TR(0x4354b1);
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
B4354b3:{NFSU2_TR(0x4354b3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4354e8;}}
}
B4354b5:L4354b5:{c.instructions+=5;NFSU2_TR(0x4354b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4354b8:{NFSU2_TR(0x4354b8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4354b9:{NFSU2_TR(0x4354b9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4354bc:{NFSU2_TR(0x4354bc);
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
B4354be:{NFSU2_TR(0x4354be);
if(r1(R+518)){{goto L4354e7;}}
}
B4354c0:L4354c0:{c.instructions+=3;NFSU2_TR(0x4354c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4354c3:{NFSU2_TR(0x4354c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4354c5:{NFSU2_TR(0x4354c5);
if(r1(R+518)){{goto L4354cc;}}
}
B4354c7:L4354c7:{c.instructions+=2;NFSU2_TR(0x4354c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4354ca:{NFSU2_TR(0x4354ca);
{goto L4354ce;}
}
B4354cc:L4354cc:{c.instructions+=1;NFSU2_TR(0x4354cc);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4354ce:L4354ce:{c.instructions+=6;NFSU2_TR(0x4354ce);
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
B4354d0:{NFSU2_TR(0x4354d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4354d3:{NFSU2_TR(0x4354d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4354d6:{NFSU2_TR(0x4354d6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4354d8:{NFSU2_TR(0x4354d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4354db:{NFSU2_TR(0x4354db);
if(r1(R+518)){{goto L4354e3;}}
}
B4354dd:L4354dd:{c.instructions+=3;NFSU2_TR(0x4354dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4354df:{NFSU2_TR(0x4354df);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4354e1:{NFSU2_TR(0x4354e1);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4354e3ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B4354e3:L4354e3:{c.instructions+=2;NFSU2_TR(0x4354e3);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+28)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B4354e5:{NFSU2_TR(0x4354e5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4354c0u);}goto L4354c0;}}
}
B4354e7:L4354e7:{c.instructions+=1;NFSU2_TR(0x4354e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4354e8:L4354e8:{c.instructions+=2;NFSU2_TR(0x4354e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4354e9:{NFSU2_TR(0x4354e9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4354f0:L4354f0:{c.instructions+=3;NFSU2_TR(0x4354f0);
__builtin_memmove((R+0),gp(0x86501c),4);
}
B4354f5:{NFSU2_TR(0x4354f5);
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
B4354f7:{NFSU2_TR(0x4354f7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L435555;}}
}
B4354f9:L4354f9:{c.instructions+=3;NFSU2_TR(0x4354f9);
__builtin_memmove((R+0),gp(0x827adc),1);
}
B4354fe:{NFSU2_TR(0x4354fe);
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
B435500:{NFSU2_TR(0x435500);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L435555;}}
}
B435502:L435502:{c.instructions+=4;NFSU2_TR(0x435502);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B435505:{NFSU2_TR(0x435505);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B435507:{NFSU2_TR(0x435507);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((R+8),(U+0),4);
}
B43550a:{NFSU2_TR(0x43550a);
if(r1(R+518)){{goto L435511;}}
}
B43550c:L43550c:{c.instructions+=2;NFSU2_TR(0x43550c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B43550f:{NFSU2_TR(0x43550f);
{goto L435513;}
}
B435511:L435511:{c.instructions+=1;NFSU2_TR(0x435511);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B435513:L435513:{c.instructions+=2;NFSU2_TR(0x435513);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435514:{NFSU2_TR(0x435514);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B435518:L435518:{c.instructions+=2;NFSU2_TR(0x435518);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43551a:{NFSU2_TR(0x43551a);
if(r1(R+518)){{goto L435521;}}
}
B43551c:L43551c:{c.instructions+=2;NFSU2_TR(0x43551c);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B43551f:{NFSU2_TR(0x43551f);
{goto L435523;}
}
B435521:L435521:{c.instructions+=1;NFSU2_TR(0x435521);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B435523:L435523:{c.instructions+=2;NFSU2_TR(0x435523);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B435525:{NFSU2_TR(0x435525);
if(r1(R+518)){{goto L435554;}}
}
B435527:L435527:{c.instructions+=2;NFSU2_TR(0x435527);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+24))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+24)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B43552a:{NFSU2_TR(0x43552a);
if(r1(R+518)){{goto L43553c;}}
}
B43552c:L43552c:{c.instructions+=3;NFSU2_TR(0x43552c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43552f:{NFSU2_TR(0x43552f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B435531:{NFSU2_TR(0x435531);
if(r1(R+518)){{goto L435538;}}
}
B435533:L435533:{c.instructions+=2;NFSU2_TR(0x435533);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
}
B435536:{NFSU2_TR(0x435536);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x435518u);}goto L435518;}
}
B435538:L435538:{c.instructions+=2;NFSU2_TR(0x435538);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B43553a:{NFSU2_TR(0x43553a);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x435518u);}goto L435518;}
}
B43553c:L43553c:{c.instructions+=8;NFSU2_TR(0x43553c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43553f:{NFSU2_TR(0x43553f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B435542:{NFSU2_TR(0x435542);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B435544:{NFSU2_TR(0x435544);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B435547:{NFSU2_TR(0x435547);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B435549:{NFSU2_TR(0x435549);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43554a:{NFSU2_TR(0x43554a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B435552:{NFSU2_TR(0x435552);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B435554:L435554:{c.instructions+=1;NFSU2_TR(0x435554);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B435555:L435555:{c.instructions+=1;NFSU2_TR(0x435555);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B435560:L435560:{c.instructions+=3;NFSU2_TR(0x435560);
__builtin_memmove((R+0),(R+4),4);
}
B435562:{NFSU2_TR(0x435562);
u8 U[4];
w4(U+0,u32(0x7862f4ull));
s4(u32(r4(R+0)),r4(U+0));
}
B435568:{NFSU2_TR(0x435568);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B435570:L435570:{c.instructions+=3;NFSU2_TR(0x435570);
__builtin_memmove((R+0),(R+4),4);
}
B435572:{NFSU2_TR(0x435572);
u8 U[4];
w4(U+0,u32(0x7862fcull));
s4(u32(r4(R+0)),r4(U+0));
}
B435578:{NFSU2_TR(0x435578);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B435580:L435580:{c.instructions+=2;NFSU2_TR(0x435580);
u8 U[4];
w4(U+0,u32(0x785dc4ull));
s4(u32(r4(R+4)),r4(U+0));
}
B435586:{NFSU2_TR(0x435586);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B435590:L435590:{c.instructions+=3;NFSU2_TR(0x435590);
__builtin_memmove((R+0),(R+4),4);
}
B435592:{NFSU2_TR(0x435592);
u8 U[4];
w4(U+0,u32(0x786304ull));
s4(u32(r4(R+0)),r4(U+0));
}
B435598:{NFSU2_TR(0x435598);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4355a0:L4355a0:{c.instructions+=3;NFSU2_TR(0x4355a0);
__builtin_memmove((R+0),(R+4),4);
}
B4355a2:{NFSU2_TR(0x4355a2);
u8 U[4];
w4(U+0,u32(0x78630cull));
s4(u32(r4(R+0)),r4(U+0));
}
B4355a8:{NFSU2_TR(0x4355a8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4355b0:L4355b0:{c.instructions+=3;NFSU2_TR(0x4355b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4355b1:{NFSU2_TR(0x4355b1);
__builtin_memmove((R+24),(R+4),4);
}
B4355b3:{NFSU2_TR(0x4355b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4355b8ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x435580u);}goto L435580;}
}
B4355b8:L4355b8:{c.instructions+=2;NFSU2_TR(0x4355b8);
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
B4355bd:{NFSU2_TR(0x4355bd);
if(r1(R+518)){{goto L4355c8;}}
}
B4355bf:L4355bf:{c.instructions+=2;NFSU2_TR(0x4355bf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4355c0:{NFSU2_TR(0x4355c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4355c5ull));
TAIL_STATIC(0x575630u,575);
}
B4355c5:L4355c5:{c.instructions+=1;NFSU2_TR(0x4355c5);
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
B4355c8:L4355c8:{c.instructions+=3;NFSU2_TR(0x4355c8);
__builtin_memmove((R+0),(R+24),4);
}
B4355ca:{NFSU2_TR(0x4355ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4355cb:{NFSU2_TR(0x4355cb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4355d0:L4355d0:{c.instructions+=3;NFSU2_TR(0x4355d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4355d4:{NFSU2_TR(0x4355d4);
u8 U[8];
__builtin_memmove((U+0),gp(0x827d34),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4355da:{NFSU2_TR(0x4355da);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43560a;}}
}
B4355dc:L4355dc:{c.instructions+=5;NFSU2_TR(0x4355dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4355e0:{NFSU2_TR(0x4355e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4355e3:{NFSU2_TR(0x4355e3);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x14ull))));
}
B4355e6:{NFSU2_TR(0x4355e6);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B4355e8:{NFSU2_TR(0x4355e8);
if(r1(R+518)){{goto L435650;}}
}
B4355ea:L4355ea:{c.instructions+=1;NFSU2_TR(0x4355ea);
__builtin_memmove((R+12),(R+12),4);
}
B4355f0:L4355f0:{c.instructions+=4;NFSU2_TR(0x4355f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4355f3:{NFSU2_TR(0x4355f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4355f6:{NFSU2_TR(0x4355f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4355f8:{NFSU2_TR(0x4355f8);
if(r1(R+518)){{goto L435601;}}
}
B4355fa:L4355fa:{c.instructions+=1;NFSU2_TR(0x4355fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B435601:L435601:{c.instructions+=3;NFSU2_TR(0x435601);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B435603:{NFSU2_TR(0x435603);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B435605:{NFSU2_TR(0x435605);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4355f0u);}goto L4355f0;}}
}
B435607:L435607:{c.instructions+=1;NFSU2_TR(0x435607);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43560a:L43560a:{c.instructions+=2;NFSU2_TR(0x43560a);
u8 U[14];
__builtin_memmove((U+6),gp(0x827c5c),4);
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
B435610:{NFSU2_TR(0x435610);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L435650;}}
}
B435612:L435612:{c.instructions+=6;NFSU2_TR(0x435612);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435613:{NFSU2_TR(0x435613);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B435617:{NFSU2_TR(0x435617);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43561a:{NFSU2_TR(0x43561a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x14ull))));
}
B43561d:{NFSU2_TR(0x43561d);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B43561f:{NFSU2_TR(0x43561f);
if(r1(R+518)){{goto L43564f;}}
}
B435621:L435621:{c.instructions+=1;NFSU2_TR(0x435621);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435622:L435622:{c.instructions+=4;NFSU2_TR(0x435622);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B435625:{NFSU2_TR(0x435625);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B435628:{NFSU2_TR(0x435628);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43562a:{NFSU2_TR(0x43562a);
if(r1(R+518)){{goto L435648;}}
}
B43562c:L43562c:{c.instructions+=2;NFSU2_TR(0x43562c);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B435630:{NFSU2_TR(0x435630);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43563b;}}
}
B435632:L435632:{c.instructions+=2;NFSU2_TR(0x435632);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B435639:{NFSU2_TR(0x435639);
{goto L435648;}
}
B43563b:L43563b:{c.instructions+=5;NFSU2_TR(0x43563b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B43563e:{NFSU2_TR(0x43563e);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B435640:{NFSU2_TR(0x435640);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B435642:{NFSU2_TR(0x435642);
__builtin_memmove((R+8),(R+518),1);
}
B435645:{NFSU2_TR(0x435645);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B435648:L435648:{c.instructions+=3;NFSU2_TR(0x435648);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B43564a:{NFSU2_TR(0x43564a);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B43564c:{NFSU2_TR(0x43564c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x435622u);}goto L435622;}}
}
B43564e:L43564e:{c.instructions+=1;NFSU2_TR(0x43564e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43564f:L43564f:{c.instructions+=1;NFSU2_TR(0x43564f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B435650:L435650:{c.instructions+=1;NFSU2_TR(0x435650);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B435660:L435660:{c.instructions+=9;NFSU2_TR(0x435660);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435661:{NFSU2_TR(0x435661);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B435665:{NFSU2_TR(0x435665);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B435667:{NFSU2_TR(0x435667);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B435669:{NFSU2_TR(0x435669);
u8 U[5];
w4(U+0,u32(u32(u32(0x3ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B43566e:{NFSU2_TR(0x43566e);
{u32 ea_=u32(u32(7889632u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B435674:{NFSU2_TR(0x435674);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B435676:{NFSU2_TR(0x435676);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B435679:{NFSU2_TR(0x435679);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L43567f;}}
}
B43567b:L43567b:{c.instructions+=1;NFSU2_TR(0x43567b);
u8 U[5];
w4(U+0,u32(u32(u32(0x3ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B43567f:L43567f:{c.instructions+=9;NFSU2_TR(0x43567f);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B435683:{NFSU2_TR(0x435683);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435684:{NFSU2_TR(0x435684);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B43568a:{NFSU2_TR(0x43568a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43568b:{NFSU2_TR(0x43568b);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B43568d:{NFSU2_TR(0x43568d);
{u32 ea_=u32(u32(7889632u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B435693:{NFSU2_TR(0x435693);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B435695:{NFSU2_TR(0x435695);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B435698:{NFSU2_TR(0x435698);
if(r1(R+514)){{goto L4356a1;}}
}
B43569a:L43569a:{c.instructions+=2;NFSU2_TR(0x43569a);
w4(R+20,u32(0x1ull));
}
B43569f:{NFSU2_TR(0x43569f);
{goto L4356bb;}
}
B4356a1:L4356a1:{c.instructions+=6;NFSU2_TR(0x4356a1);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4356a5:{NFSU2_TR(0x4356a5);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B4356a7:{NFSU2_TR(0x4356a7);
{u32 ea_=u32(u32(7889632u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B4356ad:{NFSU2_TR(0x4356ad);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4356af:{NFSU2_TR(0x4356af);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4356b2:{NFSU2_TR(0x4356b2);
if(r1(R+514)){{goto L4356b8;}}
}
B4356b4:L4356b4:{c.instructions+=2;NFSU2_TR(0x4356b4);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4356b6:{NFSU2_TR(0x4356b6);
{goto L4356bb;}
}
B4356b8:L4356b8:{c.instructions+=1;NFSU2_TR(0x4356b8);
w4(R+20,u32(u32(r4(R+20))|u32(u32(0xffffffffull))));
}
B4356bb:L4356bb:{c.instructions+=5;NFSU2_TR(0x4356bb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4356bf:{NFSU2_TR(0x4356bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4356c2:{NFSU2_TR(0x4356c2);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x14ull))));
}
B4356c5:{NFSU2_TR(0x4356c5);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B4356c7:{NFSU2_TR(0x4356c7);
if(r1(R+518)){{goto L435714;}}
}
B4356c9:L4356c9:{c.instructions+=3;NFSU2_TR(0x4356c9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4356ca:{NFSU2_TR(0x4356ca);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4356cb:{NFSU2_TR(0x4356cb);
w4(R+28,u32(0x2ull));
}
B4356d0:L4356d0:{c.instructions+=4;NFSU2_TR(0x4356d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4356d3:{NFSU2_TR(0x4356d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4356d6:{NFSU2_TR(0x4356d6);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4356d8:{NFSU2_TR(0x4356d8);
if(r1(R+518)){{goto L43570c;}}
}
B4356da:L4356da:{c.instructions+=2;NFSU2_TR(0x4356da);
u8 U[7];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+8))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4356de:{NFSU2_TR(0x4356de);
if(r1(R+518)){{goto L4356fb;}}
}
B4356e0:L4356e0:{c.instructions+=3;NFSU2_TR(0x4356e0);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4356e3:{NFSU2_TR(0x4356e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4356e6:{NFSU2_TR(0x4356e6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4356f3;}}
}
B4356e8:L4356e8:{c.instructions+=4;NFSU2_TR(0x4356e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4356eb:{NFSU2_TR(0x4356eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4356ee:{NFSU2_TR(0x4356ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4356f1:{NFSU2_TR(0x4356f1);
{goto L43570c;}
}
B4356f3:L4356f3:{c.instructions+=3;NFSU2_TR(0x4356f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4356f6:{NFSU2_TR(0x4356f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4356f9:{NFSU2_TR(0x4356f9);
{goto L43570c;}
}
B4356fb:L4356fb:{c.instructions+=4;NFSU2_TR(0x4356fb);
{u32 ea_=u32(r4(R+0)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4356fe:{NFSU2_TR(0x4356fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B435705:{NFSU2_TR(0x435705);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B435709:{NFSU2_TR(0x435709);
{u32 ea_=u32(r4(R+0)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43570c:L43570c:{c.instructions+=3;NFSU2_TR(0x43570c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B43570e:{NFSU2_TR(0x43570e);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B435710:{NFSU2_TR(0x435710);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4356d0u);}goto L4356d0;}}
}
B435712:L435712:{c.instructions+=2;NFSU2_TR(0x435712);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B435713:{NFSU2_TR(0x435713);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B435714:L435714:{c.instructions+=4;NFSU2_TR(0x435714);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B435715:{NFSU2_TR(0x435715);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B435716:{NFSU2_TR(0x435716);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B435717:{NFSU2_TR(0x435717);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B435720:L435720:{c.instructions+=3;NFSU2_TR(0x435720);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B435724:{NFSU2_TR(0x435724);
u8 U[14];
__builtin_memmove((U+6),gp(0x827f40),4);
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
B43572a:{NFSU2_TR(0x43572a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L435744;}}
}
B43572c:L43572c:{c.instructions+=8;NFSU2_TR(0x43572c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B435730:{NFSU2_TR(0x435730);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B435733:{NFSU2_TR(0x435733);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B435735:{NFSU2_TR(0x435735);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B435739:{NFSU2_TR(0x435739);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43573a:{NFSU2_TR(0x43573a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43573b:{NFSU2_TR(0x43573b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43573c:{NFSU2_TR(0x43573c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x435741ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x435660u);}goto L435660;}
}
B435741:L435741:{c.instructions+=1;NFSU2_TR(0x435741);
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
B435744:L435744:{c.instructions+=1;NFSU2_TR(0x435744);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B435750:L435750:{c.instructions+=4;NFSU2_TR(0x435750);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435751:{NFSU2_TR(0x435751);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B435755:{NFSU2_TR(0x435755);
u8 U[14];
__builtin_memmove((U+6),gp(0x827c8c),4);
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
B43575b:{NFSU2_TR(0x43575b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L435871;}}
}
B435761:L435761:{c.instructions+=11;NFSU2_TR(0x435761);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435762:{NFSU2_TR(0x435762);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435763:{NFSU2_TR(0x435763);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B435767:{NFSU2_TR(0x435767);
{u32 ea_=u32(r4(R+20)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43576a:{NFSU2_TR(0x43576a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43576b:{NFSU2_TR(0x43576b);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B43576d:{NFSU2_TR(0x43576d);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B435772:{NFSU2_TR(0x435772);
{u32 ea_=u32(u32(7889632u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B435778:{NFSU2_TR(0x435778);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43577a:{NFSU2_TR(0x43577a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43577d:{NFSU2_TR(0x43577d);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L435784;}}
}
B43577f:L43577f:{c.instructions+=1;NFSU2_TR(0x43577f);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B435784:L435784:{c.instructions+=7;NFSU2_TR(0x435784);
{u32 ea_=u32(r4(R+20));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B435787:{NFSU2_TR(0x435787);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B43578d:{NFSU2_TR(0x43578d);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B43578f:{NFSU2_TR(0x43578f);
{u32 ea_=u32(u32(7889632u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B435795:{NFSU2_TR(0x435795);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B435797:{NFSU2_TR(0x435797);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43579a:{NFSU2_TR(0x43579a);
if(r1(R+514)){{goto L4357a6;}}
}
B43579c:L43579c:{c.instructions+=2;NFSU2_TR(0x43579c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4357a4:{NFSU2_TR(0x4357a4);
{goto L4357c8;}
}
B4357a6:L4357a6:{c.instructions+=7;NFSU2_TR(0x4357a6);
{u32 ea_=u32(r4(R+20));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4357a9:{NFSU2_TR(0x4357a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4357b1:{NFSU2_TR(0x4357b1);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B4357b3:{NFSU2_TR(0x4357b3);
{u32 ea_=u32(u32(7889632u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B4357b9:{NFSU2_TR(0x4357b9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4357bb:{NFSU2_TR(0x4357bb);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4357be:{NFSU2_TR(0x4357be);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4357c8;}}
}
B4357c0:L4357c0:{c.instructions+=1;NFSU2_TR(0x4357c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4357c8:L4357c8:{c.instructions+=7;NFSU2_TR(0x4357c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4357cc:{NFSU2_TR(0x4357cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4357cf:{NFSU2_TR(0x4357cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4357d2:{NFSU2_TR(0x4357d2);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x14ull))));
}
B4357d5:{NFSU2_TR(0x4357d5);
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
B4357d7:{NFSU2_TR(0x4357d7);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4357db:{NFSU2_TR(0x4357db);
if(r1(R+518)){{goto L43586e;}}
}
B4357e1:L4357e1:{c.instructions+=1;NFSU2_TR(0x4357e1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4357e2:L4357e2:{c.instructions+=4;NFSU2_TR(0x4357e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4357e5:{NFSU2_TR(0x4357e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4357e7:{NFSU2_TR(0x4357e7);
__builtin_memmove((R+4),(R+24),4);
}
B4357e9:{NFSU2_TR(0x4357e9);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4357ecull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4357ec:L4357ec:{c.instructions+=2;NFSU2_TR(0x4357ec);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4357ef:{NFSU2_TR(0x4357ef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L435863;}}
}
B4357f1:L4357f1:{c.instructions+=4;NFSU2_TR(0x4357f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4357f4:{NFSU2_TR(0x4357f4);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4357f6:{NFSU2_TR(0x4357f6);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4357f8:{NFSU2_TR(0x4357f8);
if(r1(R+518)){{goto L435863;}}
}
B4357fa:L4357fa:{c.instructions+=3;NFSU2_TR(0x4357fa);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4357fe:{NFSU2_TR(0x4357fe);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B435800:{NFSU2_TR(0x435800);
if(r1(R+518)){{goto L43583f;}}
}
B435802:L435802:{c.instructions+=3;NFSU2_TR(0x435802);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B435806:{NFSU2_TR(0x435806);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B435809:{NFSU2_TR(0x435809);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L435821;}}
}
B43580b:L43580b:{c.instructions+=5;NFSU2_TR(0x43580b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43580e:{NFSU2_TR(0x43580e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B435811:{NFSU2_TR(0x435811);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B435818:{NFSU2_TR(0x435818);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B43581f:{NFSU2_TR(0x43581f);
{goto L435863;}
}
B435821:L435821:{c.instructions+=2;NFSU2_TR(0x435821);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B435823:{NFSU2_TR(0x435823);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L435834;}}
}
B435825:L435825:{c.instructions+=4;NFSU2_TR(0x435825);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B435828:{NFSU2_TR(0x435828);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B43582f:{NFSU2_TR(0x43582f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B435832:{NFSU2_TR(0x435832);
{goto L435863;}
}
B435834:L435834:{c.instructions+=4;NFSU2_TR(0x435834);
{u32 ea_=u32(r4(R+0)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B435837:{NFSU2_TR(0x435837);
{u32 ea_=u32(r4(R+20));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43583a:{NFSU2_TR(0x43583a);
{u32 ea_=u32(r4(R+0)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43583d:{NFSU2_TR(0x43583d);
{goto L435863;}
}
B43583f:L43583f:{c.instructions+=8;NFSU2_TR(0x43583f);
{u32 ea_=u32(r4(R+0)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B435842:{NFSU2_TR(0x435842);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B435845:{NFSU2_TR(0x435845);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B435849:{NFSU2_TR(0x435849);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffe7full))));
}
B43584f:{NFSU2_TR(0x43584f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B435856:{NFSU2_TR(0x435856);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B435859:{NFSU2_TR(0x435859);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B435860:{NFSU2_TR(0x435860);
{u32 ea_=u32(r4(R+0)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B435863:L435863:{c.instructions+=3;NFSU2_TR(0x435863);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B435865:{NFSU2_TR(0x435865);
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
B435867:{NFSU2_TR(0x435867);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4357e2u);}goto L4357e2;}}
}
B43586d:L43586d:{c.instructions+=1;NFSU2_TR(0x43586d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43586e:L43586e:{c.instructions+=3;NFSU2_TR(0x43586e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43586f:{NFSU2_TR(0x43586f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B435870:{NFSU2_TR(0x435870);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B435871:L435871:{c.instructions+=2;NFSU2_TR(0x435871);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B435872:{NFSU2_TR(0x435872);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B435880:L435880:{c.instructions+=3;NFSU2_TR(0x435880);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B435884:{NFSU2_TR(0x435884);
u8 U[14];
__builtin_memmove((U+6),gp(0x827db0),4);
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
B43588a:{NFSU2_TR(0x43588a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4358d3;}}
}
B43588c:L43588c:{c.instructions+=6;NFSU2_TR(0x43588c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43588d:{NFSU2_TR(0x43588d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B435891:{NFSU2_TR(0x435891);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B435894:{NFSU2_TR(0x435894);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x14ull))));
}
B435897:{NFSU2_TR(0x435897);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B435899:{NFSU2_TR(0x435899);
if(r1(R+518)){{goto L4358d2;}}
}
B43589b:L43589b:{c.instructions+=3;NFSU2_TR(0x43589b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43589c:{NFSU2_TR(0x43589c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43589d:{NFSU2_TR(0x43589d);
w4(R+12,u32(0x1ull));
}
B4358a2:L4358a2:{c.instructions+=4;NFSU2_TR(0x4358a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4358a5:{NFSU2_TR(0x4358a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4358a8:{NFSU2_TR(0x4358a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4358aa:{NFSU2_TR(0x4358aa);
if(r1(R+518)){{goto L4358ca;}}
}
B4358ac:L4358ac:{c.instructions+=2;NFSU2_TR(0x4358ac);
u8 U[8];
__builtin_memmove((U+0),gp(0x89e7a4),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4358b2:{NFSU2_TR(0x4358b2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4358c4;}}
}
B4358b4:L4358b4:{c.instructions+=4;NFSU2_TR(0x4358b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x1000ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B4358bb:{NFSU2_TR(0x4358bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4358be:{NFSU2_TR(0x4358be);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4358c1:{NFSU2_TR(0x4358c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4358c4:L4358c4:{c.instructions+=2;NFSU2_TR(0x4358c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4358c7:{NFSU2_TR(0x4358c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4358ca:L4358ca:{c.instructions+=3;NFSU2_TR(0x4358ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4358cc:{NFSU2_TR(0x4358cc);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B4358ce:{NFSU2_TR(0x4358ce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4358a2u);}goto L4358a2;}}
}
B4358d0:L4358d0:{c.instructions+=2;NFSU2_TR(0x4358d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4358d1:{NFSU2_TR(0x4358d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4358d2:L4358d2:{c.instructions+=1;NFSU2_TR(0x4358d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4358d3:L4358d3:{c.instructions+=1;NFSU2_TR(0x4358d3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4358e0:L4358e0:{c.instructions+=5;NFSU2_TR(0x4358e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4358e1:{NFSU2_TR(0x4358e1);
__builtin_memmove((R+24),(R+4),4);
}
B4358e3:{NFSU2_TR(0x4358e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4358e5:{NFSU2_TR(0x4358e5);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B4358e7:{NFSU2_TR(0x4358e7);
if(r1(R+518)){{goto L43590d;}}
}
B4358e9:L4358e9:{c.instructions+=1;NFSU2_TR(0x4358e9);
__builtin_memmove((R+16),(R+16),4);
}
B4358f0:L4358f0:{c.instructions+=7;NFSU2_TR(0x4358f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4358f2:{NFSU2_TR(0x4358f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4358f5:{NFSU2_TR(0x4358f5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4358f7:{NFSU2_TR(0x4358f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4358fa:{NFSU2_TR(0x4358fa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4358fd:{NFSU2_TR(0x4358fd);
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
B4358ff:{NFSU2_TR(0x4358ff);
if(r1(R+518)){{goto L435907;}}
}
B435901:L435901:{c.instructions+=3;NFSU2_TR(0x435901);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B435903:{NFSU2_TR(0x435903);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435905:{NFSU2_TR(0x435905);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x435907ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B435907:L435907:{c.instructions+=3;NFSU2_TR(0x435907);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B435909:{NFSU2_TR(0x435909);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B43590b:{NFSU2_TR(0x43590b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4358f0u);}goto L4358f0;}}
}
B43590d:L43590d:{c.instructions+=2;NFSU2_TR(0x43590d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43590e:{NFSU2_TR(0x43590e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B435910:L435910:{c.instructions+=5;NFSU2_TR(0x435910);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435911:{NFSU2_TR(0x435911);
__builtin_memmove((R+24),(R+4),4);
}
B435913:{NFSU2_TR(0x435913);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B435915:{NFSU2_TR(0x435915);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B435917:{NFSU2_TR(0x435917);
if(r1(R+518)){{goto L43593f;}}
}
B435919:L435919:{c.instructions+=1;NFSU2_TR(0x435919);
__builtin_memmove((R+16),(R+16),4);
}
B435920:L435920:{c.instructions+=8;NFSU2_TR(0x435920);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B435922:{NFSU2_TR(0x435922);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B435925:{NFSU2_TR(0x435925);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B435927:{NFSU2_TR(0x435927);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435928:{NFSU2_TR(0x435928);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43592b:{NFSU2_TR(0x43592b);
__builtin_memmove((R+0),gp(0x827b5c),4);
}
B435930:{NFSU2_TR(0x435930);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435931:{NFSU2_TR(0x435931);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x435936ull));
TAIL_STATIC(0x43f920u,43f);
}
B435936:L435936:{c.instructions+=4;NFSU2_TR(0x435936);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B435938:{NFSU2_TR(0x435938);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B43593b:{NFSU2_TR(0x43593b);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B43593d:{NFSU2_TR(0x43593d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x435920u);}goto L435920;}}
}
B43593f:L43593f:{c.instructions+=2;NFSU2_TR(0x43593f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B435940:{NFSU2_TR(0x435940);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B435950:L435950:{c.instructions+=3;NFSU2_TR(0x435950);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B435953:{NFSU2_TR(0x435953);
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
B435955:{NFSU2_TR(0x435955);
if(r1(R+518)){{goto L435978;}}
}
B435957:L435957:{c.instructions+=3;NFSU2_TR(0x435957);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435958:{NFSU2_TR(0x435958);
w4(R+4,u32(0x827b88ull));
}
B43595d:{NFSU2_TR(0x43595d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x435962ull));
TAIL_STATIC(0x432490u,432);
}
B435962:L435962:{c.instructions+=2;NFSU2_TR(0x435962);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B435964:{NFSU2_TR(0x435964);
if(r1(R+518)){{goto L435975;}}
}
B435966:L435966:{c.instructions+=6;NFSU2_TR(0x435966);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B435969:{NFSU2_TR(0x435969);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43596c:{NFSU2_TR(0x43596c);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B43596e:{NFSU2_TR(0x43596e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B435970:{NFSU2_TR(0x435970);
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
B435973:{NFSU2_TR(0x435973);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L435978;}}
}
B435975:L435975:{c.instructions+=2;NFSU2_TR(0x435975);
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
B435977:{NFSU2_TR(0x435977);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B435978:L435978:{c.instructions+=2;NFSU2_TR(0x435978);
w1(R+0,u8(0x1ull));
}
B43597a:{NFSU2_TR(0x43597a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B435980:L435980:{c.instructions+=10;NFSU2_TR(0x435980);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435981:{NFSU2_TR(0x435981);
__builtin_memmove((R+20),(R+16),4);
}
B435983:{NFSU2_TR(0x435983);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B435986:{NFSU2_TR(0x435986);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x48ull))));
}
B435989:{NFSU2_TR(0x435989);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43598a:{NFSU2_TR(0x43598a);
__builtin_memmove((R+24),(R+4),4);
}
B43598c:{NFSU2_TR(0x43598c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43598f:{NFSU2_TR(0x43598f);
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
B435991:{NFSU2_TR(0x435991);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435992:{NFSU2_TR(0x435992);
if(r1(R+518)){{goto L435a44;}}
}
B435998:L435998:{c.instructions+=3;NFSU2_TR(0x435998);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43599b:{NFSU2_TR(0x43599b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43599c:{NFSU2_TR(0x43599c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4359a1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x435140u);}goto L435140;}
}
B4359a1:L4359a1:{c.instructions+=3;NFSU2_TR(0x4359a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4359a4:{NFSU2_TR(0x4359a4);
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
B4359a6:{NFSU2_TR(0x4359a6);
if(r1(R+518)){{goto L435a44;}}
}
B4359ac:L4359ac:{c.instructions+=3;NFSU2_TR(0x4359ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4359af:{NFSU2_TR(0x4359af);
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
B4359b1:{NFSU2_TR(0x4359b1);
if(r1(R+518)){{goto L435a44;}}
}
B4359b7:L4359b7:{c.instructions+=3;NFSU2_TR(0x4359b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4359ba:{NFSU2_TR(0x4359ba);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0x2000ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B4359c1:{NFSU2_TR(0x4359c1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L435a09;}}
}
B4359c3:L4359c3:{c.instructions+=5;NFSU2_TR(0x4359c3);
{u32 ea_=u32(u32(8552172u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4359c9:{NFSU2_TR(0x4359c9);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4359cf:{NFSU2_TR(0x4359cf);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4359d1:{NFSU2_TR(0x4359d1);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4359d4:{NFSU2_TR(0x4359d4);
if(r1(R+518)){{goto L435a09;}}
}
B4359d6:L4359d6:{c.instructions+=3;NFSU2_TR(0x4359d6);
__builtin_memmove((R+0),gp(0x827ec8),4);
}
B4359db:{NFSU2_TR(0x4359db);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4359dd:{NFSU2_TR(0x4359dd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L435a09;}}
}
B4359df:L4359df:{c.instructions+=3;NFSU2_TR(0x4359df);
__builtin_memmove((R+0),gp(0x827e98),4);
}
B4359e4:{NFSU2_TR(0x4359e4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4359e6:{NFSU2_TR(0x4359e6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L435a09;}}
}
B4359e8:L4359e8:{c.instructions+=3;NFSU2_TR(0x4359e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4359eb:{NFSU2_TR(0x4359eb);
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
B4359ed:{NFSU2_TR(0x4359ed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L435a44;}}
}
B4359ef:L4359ef:{c.instructions+=5;NFSU2_TR(0x4359ef);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x90ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4359f5:{NFSU2_TR(0x4359f5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4359f6:{NFSU2_TR(0x4359f6);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x80ull))));
}
B4359fc:{NFSU2_TR(0x4359fc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4359fd:{NFSU2_TR(0x4359fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x435a02ull));
TAIL_STATIC(0x48ce10u,48c);
}
B435a02:L435a02:{c.instructions+=3;NFSU2_TR(0x435a02);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B435a05:{NFSU2_TR(0x435a05);
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
B435a07:{NFSU2_TR(0x435a07);
if(r1(R+518)){{goto L435a44;}}
}
B435a09:L435a09:{c.instructions+=2;NFSU2_TR(0x435a09);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B435a0c:{NFSU2_TR(0x435a0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x435a11ull));
TAIL_STATIC(0x4316b0u,431);
}
B435a11:L435a11:{c.instructions+=8;NFSU2_TR(0x435a11);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B435a14:{NFSU2_TR(0x435a14);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B435a17:{NFSU2_TR(0x435a17);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B435a1a:{NFSU2_TR(0x435a1a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x50ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x50ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B435a1d:{NFSU2_TR(0x435a1d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435a1e:{NFSU2_TR(0x435a1e);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B435a22:{NFSU2_TR(0x435a22);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435a23:{NFSU2_TR(0x435a23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x435a28ull));
TAIL_STATIC(0x4012b0u,401);
}
B435a28:L435a28:{c.instructions+=7;NFSU2_TR(0x435a28);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B435a2b:{NFSU2_TR(0x435a2b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B435a2e:{NFSU2_TR(0x435a2e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+28),u32(0x40ull)));
w1(R+523,scarry<u32>(r4(R+28),u32(0x40ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B435a31:{NFSU2_TR(0x435a31);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xe8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B435a3b:{NFSU2_TR(0x435a3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B435a3e:{NFSU2_TR(0x435a3e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435a3f:{NFSU2_TR(0x435a3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x435a44ull));
TAIL_STATIC(0x40efe0u,40e);
}
B435a44:L435a44:{c.instructions+=5;NFSU2_TR(0x435a44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B435a45:{NFSU2_TR(0x435a45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B435a46:{NFSU2_TR(0x435a46);
__builtin_memmove((R+16),(R+20),4);
}
B435a48:{NFSU2_TR(0x435a48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B435a49:{NFSU2_TR(0x435a49);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B435a4c:L435a4c:{c.instructions+=7;NFSU2_TR(0x435a4c);
}
B435a4d:{NFSU2_TR(0x435a4d);
}
B435a4e:{NFSU2_TR(0x435a4e);
}
B435a4f:{NFSU2_TR(0x435a4f);
}
B435a50:{NFSU2_TR(0x435a50);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B435a54:{NFSU2_TR(0x435a54);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x37110ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B435a5a:{NFSU2_TR(0x435a5a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L435a89;}}
}
B435a5c:L435a5c:{c.instructions+=3;NFSU2_TR(0x435a5c);
__builtin_memmove((R+4),gp(0x827adc),1);
}
B435a62:{NFSU2_TR(0x435a62);
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
B435a64:{NFSU2_TR(0x435a64);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L435a83;}}
}
B435a66:L435a66:{c.instructions+=3;NFSU2_TR(0x435a66);
__builtin_memmove((R+4),gp(0x86501c),4);
}
B435a6c:{NFSU2_TR(0x435a6c);
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
B435a6e:{NFSU2_TR(0x435a6e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L435a83;}}
}
B435a70:L435a70:{c.instructions+=6;NFSU2_TR(0x435a70);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x17ull))));
}
B435a73:{NFSU2_TR(0x435a73);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffff0ull))));
}
B435a76:{NFSU2_TR(0x435a76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B435a78:{NFSU2_TR(0x435a78);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435a79:{NFSU2_TR(0x435a79);
w4(R+4,u32(0x827ef0ull));
}
B435a7e:{NFSU2_TR(0x435a7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x435a83ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4354f0u);}goto L4354f0;}
}
B435a83:L435a83:{c.instructions+=2;NFSU2_TR(0x435a83);
w4(R+0,u32(0x1ull));
}
B435a88:{NFSU2_TR(0x435a88);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B435a89:L435a89:{c.instructions+=2;NFSU2_TR(0x435a89);
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
B435a8b:{NFSU2_TR(0x435a8b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B435a90:L435a90:{c.instructions+=3;NFSU2_TR(0x435a90);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B435a94:{NFSU2_TR(0x435a94);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x37080ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B435a9a:{NFSU2_TR(0x435a9a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L435ac7;}}
}
B435a9c:L435a9c:{c.instructions+=3;NFSU2_TR(0x435a9c);
__builtin_memmove((R+4),gp(0x827adc),1);
}
B435aa2:{NFSU2_TR(0x435aa2);
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
B435aa4:{NFSU2_TR(0x435aa4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L435ac1;}}
}
B435aa6:L435aa6:{c.instructions+=3;NFSU2_TR(0x435aa6);
__builtin_memmove((R+4),gp(0x86501c),4);
}
B435aac:{NFSU2_TR(0x435aac);
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
B435aae:{NFSU2_TR(0x435aae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L435ac1;}}
}
B435ab0:L435ab0:{c.instructions+=5;NFSU2_TR(0x435ab0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x17ull))));
}
B435ab3:{NFSU2_TR(0x435ab3);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffff0ull))));
}
B435ab6:{NFSU2_TR(0x435ab6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435ab7:{NFSU2_TR(0x435ab7);
w4(R+4,u32(0x827c3cull));
}
B435abc:{NFSU2_TR(0x435abc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x435ac1ull));
TAIL_STATIC(0x479130u,479);
}
B435ac1:L435ac1:{c.instructions+=2;NFSU2_TR(0x435ac1);
w4(R+0,u32(0x1ull));
}
B435ac6:{NFSU2_TR(0x435ac6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B435ac7:L435ac7:{c.instructions+=2;NFSU2_TR(0x435ac7);
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
B435ac9:{NFSU2_TR(0x435ac9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B435ad0:L435ad0:{c.instructions+=18;NFSU2_TR(0x435ad0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435ad2:{NFSU2_TR(0x435ad2);
u8 U[4];
w4(U+0,u32(0x771cabull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435ad7:{NFSU2_TR(0x435ad7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B435add:{NFSU2_TR(0x435add);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435ade:{NFSU2_TR(0x435ade);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B435ae5:{NFSU2_TR(0x435ae5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435ae6:{NFSU2_TR(0x435ae6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435ae7:{NFSU2_TR(0x435ae7);
__builtin_memmove((R+24),(R+4),4);
}
B435ae9:{NFSU2_TR(0x435ae9);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B435aeb:{NFSU2_TR(0x435aeb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B435aee:{NFSU2_TR(0x435aee);
u8 U[4];
w4(U+0,u32(0x786314ull));
s4(u32(r4(R+24)),r4(U+0));
}
B435af4:{NFSU2_TR(0x435af4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B435af7:{NFSU2_TR(0x435af7);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B435afb:{NFSU2_TR(0x435afb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B435afd:{NFSU2_TR(0x435afd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B435b00:{NFSU2_TR(0x435b00);
u8 U[4];
w4(U+0,u32(0x7860b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435b05:{NFSU2_TR(0x435b05);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B435b09:{NFSU2_TR(0x435b09);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x435b0eull));
TAIL_STATIC(0x43db50u,43d);
}
B435b0e:L435b0e:{c.instructions+=8;NFSU2_TR(0x435b0e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B435b12:{NFSU2_TR(0x435b12);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B435b15:{NFSU2_TR(0x435b15);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B435b18:{NFSU2_TR(0x435b18);
__builtin_memmove((R+0),(R+24),4);
}
B435b1a:{NFSU2_TR(0x435b1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B435b1b:{NFSU2_TR(0x435b1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B435b22:{NFSU2_TR(0x435b22);
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
B435b25:{NFSU2_TR(0x435b25);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B435b30:L435b30:{c.instructions+=12;NFSU2_TR(0x435b30);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435b32:{NFSU2_TR(0x435b32);
u8 U[4];
w4(U+0,u32(0x771cabull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435b37:{NFSU2_TR(0x435b37);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B435b3d:{NFSU2_TR(0x435b3d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435b3e:{NFSU2_TR(0x435b3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B435b45:{NFSU2_TR(0x435b45);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435b46:{NFSU2_TR(0x435b46);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435b47:{NFSU2_TR(0x435b47);
__builtin_memmove((R+24),(R+4),4);
}
B435b49:{NFSU2_TR(0x435b49);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B435b4d:{NFSU2_TR(0x435b4d);
u8 U[4];
w4(U+0,u32(0x786314ull));
s4(u32(r4(R+24)),r4(U+0));
}
B435b53:{NFSU2_TR(0x435b53);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B435b5b:{NFSU2_TR(0x435b5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x435b60ull));
TAIL_STATIC(0x432130u,432);
}
B435b60:L435b60:{c.instructions+=3;NFSU2_TR(0x435b60);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B435b63:{NFSU2_TR(0x435b63);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B435b6b:{NFSU2_TR(0x435b6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x435b70ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4358e0u);}goto L4358e0;}
}
B435b70:L435b70:{c.instructions+=5;NFSU2_TR(0x435b70);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B435b74:{NFSU2_TR(0x435b74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B435b75:{NFSU2_TR(0x435b75);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B435b7c:{NFSU2_TR(0x435b7c);
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
B435b7f:{NFSU2_TR(0x435b7f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B435b80:L435b80:{c.instructions+=16;NFSU2_TR(0x435b80);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435b82:{NFSU2_TR(0x435b82);
u8 U[4];
w4(U+0,u32(0x771f8bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435b87:{NFSU2_TR(0x435b87);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B435b8d:{NFSU2_TR(0x435b8d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435b8e:{NFSU2_TR(0x435b8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B435b95:{NFSU2_TR(0x435b95);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435b96:{NFSU2_TR(0x435b96);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435b97:{NFSU2_TR(0x435b97);
__builtin_memmove((R+24),(R+4),4);
}
B435b99:{NFSU2_TR(0x435b99);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B435b9c:{NFSU2_TR(0x435b9c);
u8 U[4];
w4(U+0,u32(0x786328ull));
s4(u32(r4(R+24)),r4(U+0));
}
B435ba2:{NFSU2_TR(0x435ba2);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B435ba6:{NFSU2_TR(0x435ba6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B435ba8:{NFSU2_TR(0x435ba8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B435bab:{NFSU2_TR(0x435bab);
u8 U[4];
w4(U+0,u32(0x786318ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435bb0:{NFSU2_TR(0x435bb0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B435bb8:{NFSU2_TR(0x435bb8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x435bbdull));
TAIL_STATIC(0x43db50u,43d);
}
B435bbd:L435bbd:{c.instructions+=9;NFSU2_TR(0x435bbd);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B435bc1:{NFSU2_TR(0x435bc1);
__builtin_memmove(gp(0x827afc),(R+0),4);
}
B435bc6:{NFSU2_TR(0x435bc6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B435bc9:{NFSU2_TR(0x435bc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B435bd0:{NFSU2_TR(0x435bd0);
__builtin_memmove((R+0),(R+24),4);
}
B435bd2:{NFSU2_TR(0x435bd2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B435bd3:{NFSU2_TR(0x435bd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B435bda:{NFSU2_TR(0x435bda);
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
B435bdd:{NFSU2_TR(0x435bdd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B435be0:L435be0:{c.instructions+=3;NFSU2_TR(0x435be0);
__builtin_memmove((R+0),gp(0x827b00),1);
}
B435be5:{NFSU2_TR(0x435be5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B435be7:{NFSU2_TR(0x435be7);
if(r1(R+518)){{goto L435bee;}}
}
B435be9:L435be9:{c.instructions+=2;NFSU2_TR(0x435be9);
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
B435beb:{NFSU2_TR(0x435beb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B435bee:L435bee:{c.instructions+=4;NFSU2_TR(0x435bee);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435bef:{NFSU2_TR(0x435bef);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B435bf3:{NFSU2_TR(0x435bf3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435bf4:{NFSU2_TR(0x435bf4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x435bf9ull));
TAIL_STATIC(0x432570u,432);
}
B435bf9:L435bf9:{c.instructions+=3;NFSU2_TR(0x435bf9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B435bfc:{NFSU2_TR(0x435bfc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B435bfe:{NFSU2_TR(0x435bfe);
if(r1(R+518)){{goto L435c06;}}
}
B435c00:L435c00:{c.instructions+=3;NFSU2_TR(0x435c00);
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
B435c02:{NFSU2_TR(0x435c02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B435c03:{NFSU2_TR(0x435c03);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B435c06:L435c06:{c.instructions+=8;NFSU2_TR(0x435c06);
__builtin_memmove((R+0),gp(0x827ad8),4);
}
B435c0b:{NFSU2_TR(0x435c0b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435c0c:{NFSU2_TR(0x435c0c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435c0d:{NFSU2_TR(0x435c0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B435c0f:{NFSU2_TR(0x435c0f);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B435c11:{NFSU2_TR(0x435c11);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B435c13:{NFSU2_TR(0x435c13);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B435c15:{NFSU2_TR(0x435c15);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L435c42;}}
}
B435c17:L435c17:{c.instructions+=3;NFSU2_TR(0x435c17);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B435c1a:{NFSU2_TR(0x435c1a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435c1b:{NFSU2_TR(0x435c1b);
{goto L435c20;}
}
B435c20:L435c20:{c.instructions+=4;NFSU2_TR(0x435c20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B435c22:{NFSU2_TR(0x435c22);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B435c24:{NFSU2_TR(0x435c24);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B435c27:{NFSU2_TR(0x435c27);
if(r1(R+518)){{goto L435c33;}}
}
B435c29:L435c29:{c.instructions+=4;NFSU2_TR(0x435c29);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B435c2a:{NFSU2_TR(0x435c2a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B435c2d:{NFSU2_TR(0x435c2d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B435c2f:{NFSU2_TR(0x435c2f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x435c20u);}goto L435c20;}}
}
B435c31:L435c31:{c.instructions+=1;NFSU2_TR(0x435c31);
{goto L435c41;}
}
B435c33:L435c33:{c.instructions+=3;NFSU2_TR(0x435c33);
w1(R+12,u8(0x1ull));
}
B435c35:{NFSU2_TR(0x435c35);
__builtin_memmove(gp(0x827e1c),(R+4),4);
}
B435c3b:{NFSU2_TR(0x435c3b);
__builtin_memmove(gp(0x827e20),(R+28),4);
}
B435c41:L435c41:{c.instructions+=1;NFSU2_TR(0x435c41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B435c42:L435c42:{c.instructions+=3;NFSU2_TR(0x435c42);
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
B435c44:{NFSU2_TR(0x435c44);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B435c49:{NFSU2_TR(0x435c49);
if(r1(R+518)){{goto L435d1d;}}
}
B435c4f:L435c4f:{c.instructions+=1;NFSU2_TR(0x435c4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x435c54ull));
TAIL_STATIC(0x430700u,430);
}
B435c54:L435c54:{c.instructions+=3;NFSU2_TR(0x435c54);
__builtin_memmove((R+24),(R+0),4);
}
B435c56:{NFSU2_TR(0x435c56);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x186a00ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x186a00ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x186a00ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B435c5c:{NFSU2_TR(0x435c5c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L435c72;}}
}
B435c5e:L435c5e:{c.instructions+=6;NFSU2_TR(0x435c5e);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B435c62:{NFSU2_TR(0x435c62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B435c63:{NFSU2_TR(0x435c63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B435c64:{NFSU2_TR(0x435c64);
s4(0x827b0c,u32(0x0ull));
}
B435c6e:{NFSU2_TR(0x435c6e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B435c6f:{NFSU2_TR(0x435c6f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B435c72:L435c72:{c.instructions+=2;NFSU2_TR(0x435c72);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4e20ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4e20ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B435c78:{NFSU2_TR(0x435c78);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L435c9f;}}
}
B435c7a:L435c7a:{c.instructions+=2;NFSU2_TR(0x435c7a);
w4(R+4,u32(0x88eb00ull));
}
B435c7f:{NFSU2_TR(0x435c7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x435c84ull));
TAIL_STATIC(0x5e9650u,5e9);
}
B435c84:L435c84:{c.instructions+=6;NFSU2_TR(0x435c84);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435c86:{NFSU2_TR(0x435c86);
u8 U[4];
w4(U+0,u32(0x78632cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435c8b:{NFSU2_TR(0x435c8b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435c8c:{NFSU2_TR(0x435c8c);
w4(R+4,u32(0x88eb00ull));
}
B435c91:{NFSU2_TR(0x435c91);
s1(0x7ea109,u8(0x1ull));
}
B435c98:{NFSU2_TR(0x435c98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x435c9dull));
TAIL_STATIC(0x5e8670u,5e8);
}
B435c9d:L435c9d:{c.instructions+=1;NFSU2_TR(0x435c9d);
{goto L435cb4;}
}
B435c9f:L435c9f:{c.instructions+=4;NFSU2_TR(0x435c9f);
u8 U[4];
w4(U+0,u32(0x1000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435ca4:{NFSU2_TR(0x435ca4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435ca5:{NFSU2_TR(0x435ca5);
s1(0x7ea109,u8(0x0ull));
}
B435cac:{NFSU2_TR(0x435cac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x435cb1ull));
TAIL_STATIC(0x440820u,440);
}
B435cb1:L435cb1:{c.instructions+=1;NFSU2_TR(0x435cb1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B435cb4:L435cb4:{c.instructions+=4;NFSU2_TR(0x435cb4);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B435cb6:{NFSU2_TR(0x435cb6);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B435cb8:{NFSU2_TR(0x435cb8);
__builtin_memmove(gp(0x827b0c),(R+0),4);
}
B435cbd:{NFSU2_TR(0x435cbd);
if(r1(R+518)){{goto L435d1d;}}
}
B435cbf:L435cbf:{c.instructions+=3;NFSU2_TR(0x435cbf);
__builtin_memmove((R+4),gp(0x827c38),1);
}
B435cc5:{NFSU2_TR(0x435cc5);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B435cc7:{NFSU2_TR(0x435cc7);
if(r1(R+518)){{goto L435cf4;}}
}
B435cc9:L435cc9:{c.instructions+=2;NFSU2_TR(0x435cc9);
u8 U[8];
__builtin_memmove((U+0),gp(0x7faaa8),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B435ccf:{NFSU2_TR(0x435ccf);
if(r1(R+518)){{goto L435cfb;}}
}
B435cd1:L435cd1:{c.instructions+=9;NFSU2_TR(0x435cd1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B435cd5:{NFSU2_TR(0x435cd5);
__builtin_memmove((R+4),gp(0x82ba30),4);
}
B435cdb:{NFSU2_TR(0x435cdb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B435cde:{NFSU2_TR(0x435cde);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435cdf:{NFSU2_TR(0x435cdf);
u8 U[4];
w4(U+0,u32(0x4307b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435ce4:{NFSU2_TR(0x435ce4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435ce5:{NFSU2_TR(0x435ce5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435ce6:{NFSU2_TR(0x435ce6);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435ce8:{NFSU2_TR(0x435ce8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x435cedull));
TAIL_STATIC(0x484510u,484);
}
B435ced:L435ced:{c.instructions+=2;NFSU2_TR(0x435ced);
__builtin_memmove((R+0),gp(0x827b0c),4);
}
B435cf2:{NFSU2_TR(0x435cf2);
{goto L435cfb;}
}
B435cf4:L435cf4:{c.instructions+=1;NFSU2_TR(0x435cf4);
s1(0x827af9,u8(0x1ull));
}
B435cfb:L435cfb:{c.instructions+=5;NFSU2_TR(0x435cfb);
s1(0x827b00,u8(0x1ull));
}
B435d02:{NFSU2_TR(0x435d02);
__builtin_memmove(gp(0x827b04),(R+24),4);
}
B435d08:{NFSU2_TR(0x435d08);
__builtin_memmove(gp(0x827b08),(R+24),4);
}
B435d0e:{NFSU2_TR(0x435d0e);
__builtin_memmove(gp(0x827b10),(R+0),4);
}
B435d13:{NFSU2_TR(0x435d13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x435d18ull));
TAIL_STATIC(0x432400u,432);
}
B435d18:L435d18:{c.instructions+=1;NFSU2_TR(0x435d18);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B435d1d:L435d1d:{c.instructions+=5;NFSU2_TR(0x435d1d);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B435d21:{NFSU2_TR(0x435d21);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B435d22:{NFSU2_TR(0x435d22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B435d23:{NFSU2_TR(0x435d23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B435d24:{NFSU2_TR(0x435d24);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B435d30:L435d30:{c.instructions+=3;NFSU2_TR(0x435d30);
__builtin_memmove((R+0),gp(0x827b00),1);
}
B435d35:{NFSU2_TR(0x435d35);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B435d37:{NFSU2_TR(0x435d37);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L435d56;}}
}
B435d39:L435d39:{c.instructions+=3;NFSU2_TR(0x435d39);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B435d3d:{NFSU2_TR(0x435d3d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435d3e:{NFSU2_TR(0x435d3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x435d43ull));
TAIL_STATIC(0x432570u,432);
}
B435d43:L435d43:{c.instructions+=3;NFSU2_TR(0x435d43);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B435d46:{NFSU2_TR(0x435d46);
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
B435d48:{NFSU2_TR(0x435d48);
if(r1(R+518)){{goto L435d56;}}
}
B435d4a:L435d4a:{c.instructions+=3;NFSU2_TR(0x435d4a);
s1(0x827af9,u8(0x0ull));
}
B435d51:{NFSU2_TR(0x435d51);
w1(R+0,u8(0x1ull));
}
B435d53:{NFSU2_TR(0x435d53);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B435d56:L435d56:{c.instructions+=2;NFSU2_TR(0x435d56);
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
B435d58:{NFSU2_TR(0x435d58);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B435d60:L435d60:{c.instructions+=11;NFSU2_TR(0x435d60);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435d62:{NFSU2_TR(0x435d62);
u8 U[4];
w4(U+0,u32(0x771cd4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435d67:{NFSU2_TR(0x435d67);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B435d6d:{NFSU2_TR(0x435d6d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435d6e:{NFSU2_TR(0x435d6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B435d75:{NFSU2_TR(0x435d75);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435d76:{NFSU2_TR(0x435d76);
__builtin_memmove((R+0),gp(0x827adc),1);
}
B435d7b:{NFSU2_TR(0x435d7b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B435d7d:{NFSU2_TR(0x435d7d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435d7e:{NFSU2_TR(0x435d7e);
__builtin_memmove((R+24),(R+4),4);
}
B435d80:{NFSU2_TR(0x435d80);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L435df2;}}
}
B435d82:L435d82:{c.instructions+=3;NFSU2_TR(0x435d82);
__builtin_memmove((R+0),gp(0x86501c),4);
}
B435d87:{NFSU2_TR(0x435d87);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B435d89:{NFSU2_TR(0x435d89);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L435df2;}}
}
B435d8b:L435d8b:{c.instructions+=3;NFSU2_TR(0x435d8b);
__builtin_memmove((R+0),gp(0x86501c),4);
}
B435d90:{NFSU2_TR(0x435d90);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B435d92:{NFSU2_TR(0x435d92);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L435dab;}}
}
B435d94:L435d94:{c.instructions+=3;NFSU2_TR(0x435d94);
__builtin_memmove((R+0),gp(0x86501c),4);
}
B435d99:{NFSU2_TR(0x435d99);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B435d9b:{NFSU2_TR(0x435d9b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L435dab;}}
}
B435d9d:L435d9d:{c.instructions+=3;NFSU2_TR(0x435d9d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435d9f:{NFSU2_TR(0x435d9f);
w4(R+4,u32(0x827f28ull));
}
B435da4:{NFSU2_TR(0x435da4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x435da9ull));
TAIL_STATIC(0x43be80u,43b);
}
B435da9:L435da9:{c.instructions+=1;NFSU2_TR(0x435da9);
{goto L435dae;}
}
B435dab:L435dab:{c.instructions+=1;NFSU2_TR(0x435dab);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B435dae:L435dae:{c.instructions+=3;NFSU2_TR(0x435dae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B435db1:{NFSU2_TR(0x435db1);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B435db3:{NFSU2_TR(0x435db3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L435df2;}}
}
B435db5:L435db5:{c.instructions+=2;NFSU2_TR(0x435db5);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B435db7:{NFSU2_TR(0x435db7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L435df2;}}
}
B435db9:L435db9:{c.instructions+=2;NFSU2_TR(0x435db9);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435dbb:{NFSU2_TR(0x435dbb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x435dc0ull));
TAIL_STATIC(0x575620u,575);
}
B435dc0:L435dc0:{c.instructions+=5;NFSU2_TR(0x435dc0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B435dc3:{NFSU2_TR(0x435dc3);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B435dc7:{NFSU2_TR(0x435dc7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B435dc9:{NFSU2_TR(0x435dc9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B435dd1:{NFSU2_TR(0x435dd1);
if(r1(R+518)){{goto L435ded;}}
}
B435dd3:L435dd3:{c.instructions+=2;NFSU2_TR(0x435dd3);
__builtin_memmove((R+4),(R+0),4);
}
B435dd5:{NFSU2_TR(0x435dd5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x435ddaull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x435ad0u);}goto L435ad0;}
}
B435dda:L435dda:{c.instructions+=6;NFSU2_TR(0x435dda);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B435ddd:{NFSU2_TR(0x435ddd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B435dde:{NFSU2_TR(0x435dde);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B435de2:{NFSU2_TR(0x435de2);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B435de9:{NFSU2_TR(0x435de9);
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
B435dec:{NFSU2_TR(0x435dec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B435ded:L435ded:{c.instructions+=2;NFSU2_TR(0x435ded);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B435def:{NFSU2_TR(0x435def);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B435df2:L435df2:{c.instructions+=5;NFSU2_TR(0x435df2);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B435df6:{NFSU2_TR(0x435df6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B435df7:{NFSU2_TR(0x435df7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B435dfe:{NFSU2_TR(0x435dfe);
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
B435e01:{NFSU2_TR(0x435e01);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B435e10:L435e10:{c.instructions+=7;NFSU2_TR(0x435e10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435e11:{NFSU2_TR(0x435e11);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B435e15:{NFSU2_TR(0x435e15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B435e17:{NFSU2_TR(0x435e17);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B435e18:{NFSU2_TR(0x435e18);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435e19:{NFSU2_TR(0x435e19);
__builtin_memmove((R+28),(R+4),4);
}
B435e1b:{NFSU2_TR(0x435e1b);
if(r1(R+518)){{goto L435e20;}}
}
B435e1d:L435e1d:{c.instructions+=1;NFSU2_TR(0x435e1d);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x5ull))));
}
B435e20:L435e20:{c.instructions+=2;NFSU2_TR(0x435e20);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435e22:{NFSU2_TR(0x435e22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x435e27ull));
TAIL_STATIC(0x575620u,575);
}
B435e27:L435e27:{c.instructions+=3;NFSU2_TR(0x435e27);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B435e2a:{NFSU2_TR(0x435e2a);
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
B435e2c:{NFSU2_TR(0x435e2c);
if(r1(R+518)){{goto L435e3f;}}
}
B435e2e:L435e2e:{c.instructions+=6;NFSU2_TR(0x435e2e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B435e30:{NFSU2_TR(0x435e30);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B435e34:{NFSU2_TR(0x435e34);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B435e37:{NFSU2_TR(0x435e37);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B435e3a:{NFSU2_TR(0x435e3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B435e3d:{NFSU2_TR(0x435e3d);
{goto L435e41;}
}
B435e3f:L435e3f:{c.instructions+=1;NFSU2_TR(0x435e3f);
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
B435e41:L435e41:{c.instructions+=9;NFSU2_TR(0x435e41);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B435e44:{NFSU2_TR(0x435e44);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((R+4),(U+0),4);
}
B435e47:{NFSU2_TR(0x435e47);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B435e49:{NFSU2_TR(0x435e49);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B435e4c:{NFSU2_TR(0x435e4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B435e4d:{NFSU2_TR(0x435e4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B435e50:{NFSU2_TR(0x435e50);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B435e52:{NFSU2_TR(0x435e52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B435e53:{NFSU2_TR(0x435e53);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B435e60:L435e60:{c.instructions+=3;NFSU2_TR(0x435e60);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435e61:{NFSU2_TR(0x435e61);
__builtin_memmove((R+24),(R+4),4);
}
B435e63:{NFSU2_TR(0x435e63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x435e68ull));
TAIL_STATIC(0x432620u,432);
}
B435e68:L435e68:{c.instructions+=2;NFSU2_TR(0x435e68);
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
B435e6d:{NFSU2_TR(0x435e6d);
if(r1(R+518)){{goto L435e78;}}
}
B435e6f:L435e6f:{c.instructions+=2;NFSU2_TR(0x435e6f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435e70:{NFSU2_TR(0x435e70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x435e75ull));
TAIL_STATIC(0x575630u,575);
}
B435e75:L435e75:{c.instructions+=1;NFSU2_TR(0x435e75);
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
B435e78:L435e78:{c.instructions+=3;NFSU2_TR(0x435e78);
__builtin_memmove((R+0),(R+24),4);
}
B435e7a:{NFSU2_TR(0x435e7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B435e7b:{NFSU2_TR(0x435e7b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B435e80:L435e80:{c.instructions+=3;NFSU2_TR(0x435e80);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435e81:{NFSU2_TR(0x435e81);
__builtin_memmove((R+24),(R+4),4);
}
B435e83:{NFSU2_TR(0x435e83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x435e88ull));
TAIL_STATIC(0x432630u,432);
}
B435e88:L435e88:{c.instructions+=2;NFSU2_TR(0x435e88);
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
B435e8d:{NFSU2_TR(0x435e8d);
if(r1(R+518)){{goto L435e98;}}
}
B435e8f:L435e8f:{c.instructions+=2;NFSU2_TR(0x435e8f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435e90:{NFSU2_TR(0x435e90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x435e95ull));
TAIL_STATIC(0x575630u,575);
}
B435e95:L435e95:{c.instructions+=1;NFSU2_TR(0x435e95);
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
B435e98:L435e98:{c.instructions+=3;NFSU2_TR(0x435e98);
__builtin_memmove((R+0),(R+24),4);
}
B435e9a:{NFSU2_TR(0x435e9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B435e9b:{NFSU2_TR(0x435e9b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B435ea0:L435ea0:{c.instructions+=6;NFSU2_TR(0x435ea0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435ea1:{NFSU2_TR(0x435ea1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435ea2:{NFSU2_TR(0x435ea2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B435ea6:{NFSU2_TR(0x435ea6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435ea7:{NFSU2_TR(0x435ea7);
__builtin_memmove((R+24),(R+4),4);
}
B435ea9:{NFSU2_TR(0x435ea9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x435eaeull));
TAIL_STATIC(0x432670u,432);
}
B435eae:L435eae:{c.instructions+=2;NFSU2_TR(0x435eae);
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
B435eb0:{NFSU2_TR(0x435eb0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L435ee7;}}
}
B435eb2:L435eb2:{c.instructions+=2;NFSU2_TR(0x435eb2);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435eb4:{NFSU2_TR(0x435eb4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x435eb9ull));
TAIL_STATIC(0x575620u,575);
}
B435eb9:L435eb9:{c.instructions+=3;NFSU2_TR(0x435eb9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B435ebc:{NFSU2_TR(0x435ebc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B435ebe:{NFSU2_TR(0x435ebe);
if(r1(R+518)){{goto L435ed5;}}
}
B435ec0:L435ec0:{c.instructions+=6;NFSU2_TR(0x435ec0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B435ec4:{NFSU2_TR(0x435ec4);
u8 U[4];
w4(U+0,u32(0x7860c8ull));
s4(u32(r4(R+0)),r4(U+0));
}
B435eca:{NFSU2_TR(0x435eca);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B435ecd:{NFSU2_TR(0x435ecd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B435ed0:{NFSU2_TR(0x435ed0);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B435ed3:{NFSU2_TR(0x435ed3);
{goto L435ed7;}
}
B435ed5:L435ed5:{c.instructions+=1;NFSU2_TR(0x435ed5);
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
B435ed7:L435ed7:{c.instructions+=6;NFSU2_TR(0x435ed7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B435eda:{NFSU2_TR(0x435eda);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((R+4),(U+0),4);
}
B435edd:{NFSU2_TR(0x435edd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B435edf:{NFSU2_TR(0x435edf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B435ee2:{NFSU2_TR(0x435ee2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B435ee5:{NFSU2_TR(0x435ee5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B435ee7:L435ee7:{c.instructions+=3;NFSU2_TR(0x435ee7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B435ee8:{NFSU2_TR(0x435ee8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B435ee9:{NFSU2_TR(0x435ee9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B435ef0:L435ef0:{c.instructions+=6;NFSU2_TR(0x435ef0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435ef1:{NFSU2_TR(0x435ef1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435ef2:{NFSU2_TR(0x435ef2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B435ef6:{NFSU2_TR(0x435ef6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435ef7:{NFSU2_TR(0x435ef7);
__builtin_memmove((R+24),(R+4),4);
}
B435ef9:{NFSU2_TR(0x435ef9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x435efeull));
TAIL_STATIC(0x4326b0u,432);
}
B435efe:L435efe:{c.instructions+=2;NFSU2_TR(0x435efe);
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
B435f00:{NFSU2_TR(0x435f00);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L435f38;}}
}
B435f02:L435f02:{c.instructions+=2;NFSU2_TR(0x435f02);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435f04:{NFSU2_TR(0x435f04);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x435f09ull));
TAIL_STATIC(0x575620u,575);
}
B435f09:L435f09:{c.instructions+=3;NFSU2_TR(0x435f09);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B435f0c:{NFSU2_TR(0x435f0c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B435f0e:{NFSU2_TR(0x435f0e);
if(r1(R+518)){{goto L435f26;}}
}
B435f10:L435f10:{c.instructions+=6;NFSU2_TR(0x435f10);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B435f15:{NFSU2_TR(0x435f15);
u8 U[4];
w4(U+0,u32(0x7860ccull));
s4(u32(r4(R+0)),r4(U+0));
}
B435f1b:{NFSU2_TR(0x435f1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B435f1e:{NFSU2_TR(0x435f1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B435f21:{NFSU2_TR(0x435f21);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B435f24:{NFSU2_TR(0x435f24);
{goto L435f28;}
}
B435f26:L435f26:{c.instructions+=1;NFSU2_TR(0x435f26);
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
B435f28:L435f28:{c.instructions+=6;NFSU2_TR(0x435f28);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B435f2b:{NFSU2_TR(0x435f2b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B435f2e:{NFSU2_TR(0x435f2e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B435f30:{NFSU2_TR(0x435f30);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B435f33:{NFSU2_TR(0x435f33);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B435f36:{NFSU2_TR(0x435f36);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B435f38:L435f38:{c.instructions+=3;NFSU2_TR(0x435f38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B435f39:{NFSU2_TR(0x435f39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B435f3a:{NFSU2_TR(0x435f3a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B435f40:L435f40:{c.instructions+=2;NFSU2_TR(0x435f40);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435f42:{NFSU2_TR(0x435f42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x435f47ull));
TAIL_STATIC(0x4326b0u,432);
}
B435f47:L435f47:{c.instructions+=2;NFSU2_TR(0x435f47);
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
B435f49:{NFSU2_TR(0x435f49);
if(r1(R+518)){{goto L435fb2;}}
}
B435f4b:L435f4b:{c.instructions+=5;NFSU2_TR(0x435f4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B435f4e:{NFSU2_TR(0x435f4e);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B435f50:{NFSU2_TR(0x435f50);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B435f53:{NFSU2_TR(0x435f53);
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
B435f55:{NFSU2_TR(0x435f55);
if(r1(R+518)){{goto L435fb2;}}
}
B435f57:L435f57:{c.instructions+=4;NFSU2_TR(0x435f57);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435f58:{NFSU2_TR(0x435f58);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435f59:{NFSU2_TR(0x435f59);
w4(R+28,u32(0x827ba8ull));
}
B435f5e:{NFSU2_TR(0x435f5e);
__builtin_memmove((R+28),(R+28),4);
}
B435f60:L435f60:{c.instructions+=3;NFSU2_TR(0x435f60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B435f62:{NFSU2_TR(0x435f62);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B435f64:{NFSU2_TR(0x435f64);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L435f98;}}
}
B435f66:L435f66:{c.instructions+=5;NFSU2_TR(0x435f66);
__builtin_memmove((R+4),gp(0x890080),4);
}
B435f6c:{NFSU2_TR(0x435f6c);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B435f70:{NFSU2_TR(0x435f70);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435f72:{NFSU2_TR(0x435f72);
__builtin_memmove((R+4),(R+24),4);
}
B435f74:{NFSU2_TR(0x435f74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x435f79ull));
TAIL_STATIC(0x5eba30u,5eb);
}
B435f79:L435f79:{c.instructions+=3;NFSU2_TR(0x435f79);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B435f7f:{NFSU2_TR(0x435f7f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B435f81:{NFSU2_TR(0x435f81);
if(r1(R+518)){{goto L435f8c;}}
}
B435f83:L435f83:{c.instructions+=3;NFSU2_TR(0x435f83);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435f85:{NFSU2_TR(0x435f85);
__builtin_memmove((R+4),(R+24),4);
}
B435f87:{NFSU2_TR(0x435f87);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x435f8cull));
TAIL_STATIC(0x5f46a0u,5f4);
}
B435f8c:L435f8c:{c.instructions+=3;NFSU2_TR(0x435f8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B435f8f:{NFSU2_TR(0x435f8f);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B435f91:{NFSU2_TR(0x435f91);
if(r1(R+518)){{goto L435f98;}}
}
B435f93:L435f93:{c.instructions+=1;NFSU2_TR(0x435f93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x435f98ull));
TAIL_STATIC(0x5930f0u,593);
}
B435f98:L435f98:{c.instructions+=3;NFSU2_TR(0x435f98);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x14ull))));
}
B435f9b:{NFSU2_TR(0x435f9b);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x827c48ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x827c48ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x827c48ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B435fa1:{NFSU2_TR(0x435fa1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x435f60u);}goto L435f60;}}
}
B435fa3:L435fa3:{c.instructions+=2;NFSU2_TR(0x435fa3);
u8 U[4];
__builtin_memmove((U+0),(MODV+68),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435fa8:{NFSU2_TR(0x435fa8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x435fadull));
TAIL_STATIC(0x576cb0u,576);
}
B435fad:L435fad:{c.instructions+=3;NFSU2_TR(0x435fad);
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
B435fb0:{NFSU2_TR(0x435fb0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B435fb1:{NFSU2_TR(0x435fb1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B435fb2:L435fb2:{c.instructions+=1;NFSU2_TR(0x435fb2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B435fc0:L435fc0:{c.instructions+=8;NFSU2_TR(0x435fc0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435fc1:{NFSU2_TR(0x435fc1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435fc2:{NFSU2_TR(0x435fc2);
__builtin_memmove((R+20),(R+4),4);
}
B435fc4:{NFSU2_TR(0x435fc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B435fc7:{NFSU2_TR(0x435fc7);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x14ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x14ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B435fca:{NFSU2_TR(0x435fca);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435fcb:{NFSU2_TR(0x435fcb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B435fcd:{NFSU2_TR(0x435fcd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x435fd2ull));
TAIL_STATIC(0x502fd0u,502);
}
B435fd2:L435fd2:{c.instructions+=3;NFSU2_TR(0x435fd2);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B435fd4:{NFSU2_TR(0x435fd4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B435fd8:{NFSU2_TR(0x435fd8);
if(r1(R+518)){TAIL_STATIC(0x436028u,436);}
}
B435fda:L435fda:{c.instructions+=7;NFSU2_TR(0x435fda);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435fdb:{NFSU2_TR(0x435fdb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435fdc:{NFSU2_TR(0x435fdc);
__builtin_memmove((R+16),(R+16),4);
}
B435fe0:{NFSU2_TR(0x435fe0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B435fe3:{NFSU2_TR(0x435fe3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B435fe6:{NFSU2_TR(0x435fe6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435fe7:{NFSU2_TR(0x435fe7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x435fecull));
TAIL_STATIC(0x433020u,433);
}
B435fec:L435fec:{c.instructions+=8;NFSU2_TR(0x435fec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B435ff2:{NFSU2_TR(0x435ff2);
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
B435ff5:{NFSU2_TR(0x435ff5);
__builtin_memmove((R+24),(R+0),4);
}
B435ff7:{NFSU2_TR(0x435ff7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B435ff9:{NFSU2_TR(0x435ff9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435ffa:{NFSU2_TR(0x435ffa);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B435ffb:{NFSU2_TR(0x435ffb);
__builtin_memmove((R+4),(R+24),4);
}
B435ffd:{NFSU2_TR(0x435ffd);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x436000ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
XIT:NFSU2_TR_EXIT(0x435,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
