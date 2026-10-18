#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_426(u8* __restrict R,Cpu& c);
u32 body_42f(u8* __restrict R,Cpu& c);
u32 body_435(u8* __restrict R,Cpu& c);
u32 body_43a(u8* __restrict R,Cpu& c);
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_4ec(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_56d(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_577(u8* __restrict R,Cpu& c);
u32 body_581(u8* __restrict R,Cpu& c);
u32 body_589(u8* __restrict R,Cpu& c);
u32 body_58c(u8* __restrict R,Cpu& c);
u32 body_5eb(u8* __restrict R,Cpu& c);
u32 body_5ed(u8* __restrict R,Cpu& c);
u32 body_5ee(u8* __restrict R,Cpu& c);
u32 body_5ef(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_5f6(u8* __restrict R,Cpu& c);
u32 body_5f8(u8* __restrict R,Cpu& c);
u32 body_5f9(u8* __restrict R,Cpu& c);
u32 body_5fa(u8* __restrict R,Cpu& c);
u32 body_5fc(u8* __restrict R,Cpu& c);
u32 body_5fe(u8* __restrict R,Cpu& c);
u32 body_605(u8* __restrict R,Cpu& c);
u32 body_606(u8* __restrict R,Cpu& c);
u32 body_607(u8* __restrict R,Cpu& c);
u32 body_608(u8* __restrict R,Cpu& c);
u32 body_60a(u8* __restrict R,Cpu& c);
u32 body_614(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x609,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x609,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_609(u8* __restrict R,Cpu& c);
u32 page_609(Cpu& c){return body_609(c.regs.data(),c);}
__attribute__((noinline)) u32 body_609(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x609005:goto L609005;
case 0x60900a:c.instructions+=2;goto B60900a;
case 0x60900c:c.instructions+=1;goto B60900c;
case 0x609012:goto L609012;
case 0x609017:c.instructions+=2;goto B609017;
case 0x609019:c.instructions+=1;goto B609019;
case 0x60901f:goto L60901f;
case 0x609025:c.instructions+=2;goto B609025;
case 0x60902b:c.instructions+=1;goto B60902b;
case 0x609031:goto L609031;
case 0x609033:c.instructions+=2;goto B609033;
case 0x609035:c.instructions+=1;goto B609035;
case 0x60903a:goto L60903a;
case 0x609040:c.instructions+=3;goto B609040;
case 0x609046:c.instructions+=2;goto B609046;
case 0x609048:c.instructions+=1;goto B609048;
case 0x60904a:goto L60904a;
case 0x60904f:c.instructions+=2;goto B60904f;
case 0x609051:c.instructions+=1;goto B609051;
case 0x609057:goto L609057;
case 0x60905d:c.instructions+=1;goto B60905d;
case 0x609062:goto L609062;
case 0x609065:c.instructions+=3;goto B609065;
case 0x609067:c.instructions+=2;goto B609067;
case 0x609069:c.instructions+=1;goto B609069;
case 0x60906b:goto L60906b;
case 0x609070:c.instructions+=2;goto B609070;
case 0x609072:c.instructions+=1;goto B609072;
case 0x609074:goto L609074;
case 0x609079:c.instructions+=2;goto B609079;
case 0x60907b:c.instructions+=1;goto B60907b;
case 0x60907d:goto L60907d;
case 0x60907f:c.instructions+=1;goto B60907f;
case 0x609081:goto L609081;
case 0x609086:c.instructions+=2;goto B609086;
case 0x609088:c.instructions+=1;goto B609088;
case 0x60908a:goto L60908a;
case 0x60908f:c.instructions+=2;goto B60908f;
case 0x609091:c.instructions+=1;goto B609091;
case 0x609093:goto L609093;
case 0x609095:c.instructions+=2;goto B609095;
case 0x609097:c.instructions+=1;goto B609097;
case 0x609099:goto L609099;
case 0x60909f:c.instructions+=2;goto B60909f;
case 0x6090a1:c.instructions+=1;goto B6090a1;
case 0x6090a3:goto L6090a3;
case 0x6090a7:c.instructions+=3;goto B6090a7;
case 0x6090ab:c.instructions+=2;goto B6090ab;
case 0x6090ac:c.instructions+=1;goto B6090ac;
case 0x6090b1:goto L6090b1;
case 0x6090b3:c.instructions+=4;goto B6090b3;
case 0x6090b5:c.instructions+=3;goto B6090b5;
case 0x6090b6:c.instructions+=2;goto B6090b6;
case 0x6090bc:c.instructions+=1;goto B6090bc;
case 0x6090c1:goto L6090c1;
case 0x6090c5:c.instructions+=1;goto B6090c5;
case 0x6090c8:goto L6090c8;
case 0x6090cc:c.instructions+=3;goto B6090cc;
case 0x6090d0:c.instructions+=2;goto B6090d0;
case 0x6090d1:c.instructions+=1;goto B6090d1;
case 0x6090d6:goto L6090d6;
case 0x6090d9:c.instructions+=2;goto B6090d9;
case 0x6090db:c.instructions+=1;goto B6090db;
case 0x6090dd:goto L6090dd;
case 0x6090e0:c.instructions+=1;goto B6090e0;
case 0x6090e3:goto L6090e3;
case 0x6090e4:c.instructions+=5;goto B6090e4;
case 0x6090e5:c.instructions+=4;goto B6090e5;
case 0x6090e6:c.instructions+=3;goto B6090e6;
case 0x6090e7:c.instructions+=2;goto B6090e7;
case 0x6090ea:c.instructions+=1;goto B6090ea;
case 0x6090f0:goto L6090f0;
case 0x6090f1:c.instructions+=5;goto B6090f1;
case 0x6090f2:c.instructions+=4;goto B6090f2;
case 0x6090f4:c.instructions+=3;goto B6090f4;
case 0x6090f7:c.instructions+=2;goto B6090f7;
case 0x6090fa:c.instructions+=1;goto B6090fa;
case 0x6090fc:goto L6090fc;
case 0x6090ff:c.instructions+=1;goto B6090ff;
case 0x609101:goto L609101;
case 0x609103:c.instructions+=1;goto B609103;
case 0x609105:goto L609105;
case 0x609108:c.instructions+=1;goto B609108;
case 0x60910a:goto L60910a;
case 0x60910e:c.instructions+=2;goto B60910e;
case 0x60910f:c.instructions+=1;goto B60910f;
case 0x609114:goto L609114;
case 0x60911a:c.instructions+=2;goto B60911a;
case 0x60911c:c.instructions+=1;goto B60911c;
case 0x609122:goto L609122;
case 0x609128:c.instructions+=2;goto B609128;
case 0x60912a:c.instructions+=1;goto B60912a;
case 0x609130:goto L609130;
case 0x609131:c.instructions+=4;goto B609131;
case 0x609132:c.instructions+=3;goto B609132;
case 0x609136:c.instructions+=2;goto B609136;
case 0x609137:c.instructions+=1;goto B609137;
case 0x60913c:goto L60913c;
case 0x60913e:c.instructions+=1;goto B60913e;
case 0x609144:goto L609144;
case 0x609147:c.instructions+=2;goto B609147;
case 0x609149:c.instructions+=1;goto B609149;
case 0x60914b:goto L60914b;
case 0x609150:c.instructions+=1;goto B609150;
case 0x609152:goto L609152;
case 0x609157:c.instructions+=2;goto B609157;
case 0x609159:c.instructions+=1;goto B609159;
case 0x60915b:goto L60915b;
case 0x60915c:c.instructions+=2;goto B60915c;
case 0x609161:c.instructions+=1;goto B609161;
case 0x609166:goto L609166;
case 0x60916c:c.instructions+=9;goto B60916c;
case 0x60916e:c.instructions+=8;goto B60916e;
case 0x609171:c.instructions+=7;goto B609171;
case 0x609173:c.instructions+=6;goto B609173;
case 0x609176:c.instructions+=5;goto B609176;
case 0x60917a:c.instructions+=4;goto B60917a;
case 0x60917d:c.instructions+=3;goto B60917d;
case 0x60917f:c.instructions+=2;goto B60917f;
case 0x609181:c.instructions+=1;goto B609181;
case 0x609183:goto L609183;
case 0x609189:c.instructions+=1;goto B609189;
case 0x609190:goto L609190;
case 0x609192:c.instructions+=1;goto B609192;
case 0x609194:goto L609194;
case 0x609195:c.instructions+=3;goto B609195;
case 0x609198:c.instructions+=2;goto B609198;
case 0x60919a:c.instructions+=1;goto B60919a;
case 0x60919c:goto L60919c;
case 0x60919e:c.instructions+=1;goto B60919e;
case 0x6091a3:goto L6091a3;
case 0x6091a4:c.instructions+=4;goto B6091a4;
case 0x6091a5:c.instructions+=3;goto B6091a5;
case 0x6091a6:c.instructions+=2;goto B6091a6;
case 0x6091a7:c.instructions+=1;goto B6091a7;
case 0x6091aa:goto L6091aa;
case 0x6091ae:c.instructions+=8;goto B6091ae;
case 0x6091b2:c.instructions+=7;goto B6091b2;
case 0x6091b3:c.instructions+=6;goto B6091b3;
case 0x6091b7:c.instructions+=5;goto B6091b7;
case 0x6091b8:c.instructions+=4;goto B6091b8;
case 0x6091b9:c.instructions+=3;goto B6091b9;
case 0x6091ba:c.instructions+=2;goto B6091ba;
case 0x6091bc:c.instructions+=1;goto B6091bc;
case 0x6091c1:goto L6091c1;
case 0x6091c3:c.instructions+=1;goto B6091c3;
case 0x6091c8:goto L6091c8;
case 0x6091c9:c.instructions+=1;goto B6091c9;
case 0x6091ca:goto L6091ca;
case 0x6091cb:c.instructions+=2;goto B6091cb;
case 0x6091cc:c.instructions+=1;goto B6091cc;
case 0x6091d0:goto L6091d0;
case 0x6091d1:c.instructions+=10;goto B6091d1;
case 0x6091d2:c.instructions+=9;goto B6091d2;
case 0x6091d3:c.instructions+=8;goto B6091d3;
case 0x6091d5:c.instructions+=7;goto B6091d5;
case 0x6091df:c.instructions+=6;goto B6091df;
case 0x6091e9:c.instructions+=5;goto B6091e9;
case 0x6091ef:c.instructions+=4;goto B6091ef;
case 0x6091f0:c.instructions+=3;goto B6091f0;
case 0x6091f6:c.instructions+=2;goto B6091f6;
case 0x6091f8:c.instructions+=1;goto B6091f8;
case 0x6091fe:goto L6091fe;
case 0x609200:c.instructions+=1;goto B609200;
case 0x609205:goto L609205;
case 0x609207:c.instructions+=1;goto B609207;
case 0x60920d:goto L60920d;
case 0x609210:c.instructions+=1;goto B609210;
case 0x609216:goto L609216;
case 0x609219:c.instructions+=2;goto B609219;
case 0x60921b:c.instructions+=1;goto B60921b;
case 0x60921d:goto L60921d;
case 0x609222:c.instructions+=1;goto B609222;
case 0x609224:goto L609224;
case 0x609229:c.instructions+=7;goto B609229;
case 0x60922c:c.instructions+=6;goto B60922c;
case 0x60922f:c.instructions+=5;goto B60922f;
case 0x609233:c.instructions+=4;goto B609233;
case 0x609237:c.instructions+=3;goto B609237;
case 0x60923d:c.instructions+=2;goto B60923d;
case 0x60923f:c.instructions+=1;goto B60923f;
case 0x609245:goto L609245;
case 0x609247:c.instructions+=1;goto B609247;
case 0x60924c:goto L60924c;
case 0x60924e:c.instructions+=1;goto B60924e;
case 0x609254:goto L609254;
case 0x609259:c.instructions+=1;goto B609259;
case 0x60925e:goto L60925e;
case 0x609260:c.instructions+=1;goto B609260;
case 0x609266:goto L609266;
case 0x60926c:c.instructions+=2;goto B60926c;
case 0x60926e:c.instructions+=1;goto B60926e;
case 0x609270:goto L609270;
case 0x609272:c.instructions+=1;goto B609272;
case 0x609277:goto L609277;
case 0x60927a:c.instructions+=4;goto B60927a;
case 0x609280:c.instructions+=3;goto B609280;
case 0x609282:c.instructions+=2;goto B609282;
case 0x609285:c.instructions+=1;goto B609285;
case 0x609287:goto L609287;
case 0x60928a:c.instructions+=5;goto B60928a;
case 0x609290:c.instructions+=4;goto B609290;
case 0x609296:c.instructions+=3;goto B609296;
case 0x609298:c.instructions+=2;goto B609298;
case 0x60929b:c.instructions+=1;goto B60929b;
case 0x60929d:goto L60929d;
case 0x6092a7:c.instructions+=1;goto B6092a7;
case 0x6092a9:goto L6092a9;
case 0x6092af:c.instructions+=3;goto B6092af;
case 0x6092b0:c.instructions+=2;goto B6092b0;
case 0x6092b6:c.instructions+=1;goto B6092b6;
case 0x6092bb:goto L6092bb;
case 0x6092bd:goto L6092bd;
case 0x6092c7:goto L6092c7;
case 0x6092cd:c.instructions+=2;goto B6092cd;
case 0x6092cf:c.instructions+=1;goto B6092cf;
case 0x6092d1:goto L6092d1;
case 0x6092d6:c.instructions+=1;goto B6092d6;
case 0x6092db:goto L6092db;
case 0x6092dd:c.instructions+=1;goto B6092dd;
case 0x6092df:goto L6092df;
case 0x6092e3:c.instructions+=3;goto B6092e3;
case 0x6092e4:c.instructions+=2;goto B6092e4;
case 0x6092ea:c.instructions+=1;goto B6092ea;
case 0x6092ef:goto L6092ef;
case 0x6092f1:c.instructions+=1;goto B6092f1;
case 0x6092f3:goto L6092f3;
case 0x6092f4:c.instructions+=2;goto B6092f4;
case 0x6092fa:c.instructions+=1;goto B6092fa;
case 0x6092ff:goto L6092ff;
case 0x609301:c.instructions+=1;goto B609301;
case 0x609303:goto L609303;
case 0x609305:c.instructions+=2;goto B609305;
case 0x609307:c.instructions+=1;goto B609307;
case 0x60930c:goto L60930c;
case 0x609312:c.instructions+=3;goto B609312;
case 0x609314:c.instructions+=2;goto B609314;
case 0x609316:c.instructions+=1;goto B609316;
case 0x60931b:goto L60931b;
case 0x60931c:c.instructions+=3;goto B60931c;
case 0x60931f:c.instructions+=2;goto B60931f;
case 0x609320:c.instructions+=1;goto B609320;
case 0x609325:goto L609325;
case 0x609327:goto L609327;
case 0x609331:goto L609331;
case 0x609333:c.instructions+=1;goto B609333;
case 0x609338:goto L609338;
case 0x60933b:c.instructions+=2;goto B60933b;
case 0x60933d:c.instructions+=1;goto B60933d;
case 0x60933f:goto L60933f;
case 0x609345:c.instructions+=4;goto B609345;
case 0x609347:c.instructions+=3;goto B609347;
case 0x60934c:c.instructions+=2;goto B60934c;
case 0x60934d:c.instructions+=1;goto B60934d;
case 0x609352:goto L609352;
case 0x609355:goto L609355;
case 0x609356:c.instructions+=4;goto B609356;
case 0x609357:c.instructions+=3;goto B609357;
case 0x609358:c.instructions+=2;goto B609358;
case 0x609359:c.instructions+=1;goto B609359;
case 0x609360:goto L609360;
case 0x609363:c.instructions+=9;goto B609363;
case 0x609368:c.instructions+=8;goto B609368;
case 0x60936a:c.instructions+=7;goto B60936a;
case 0x60936b:c.instructions+=6;goto B60936b;
case 0x60936c:c.instructions+=5;goto B60936c;
case 0x60936e:c.instructions+=4;goto B60936e;
case 0x60936f:c.instructions+=3;goto B60936f;
case 0x609373:c.instructions+=2;goto B609373;
case 0x60937d:c.instructions+=1;goto B60937d;
case 0x60937f:goto L60937f;
case 0x609384:c.instructions+=1;goto B609384;
case 0x609389:goto L609389;
case 0x60938b:c.instructions+=4;goto B60938b;
case 0x60938e:c.instructions+=3;goto B60938e;
case 0x60938f:c.instructions+=2;goto B60938f;
case 0x609394:c.instructions+=1;goto B609394;
case 0x609396:goto L609396;
case 0x609399:c.instructions+=1;goto B609399;
case 0x60939b:goto L60939b;
case 0x60939e:c.instructions+=1;goto B60939e;
case 0x6093a4:goto L6093a4;
case 0x6093a8:c.instructions+=2;goto B6093a8;
case 0x6093aa:c.instructions+=1;goto B6093aa;
case 0x6093ac:goto L6093ac;
case 0x6093af:c.instructions+=2;goto B6093af;
case 0x6093b1:c.instructions+=1;goto B6093b1;
case 0x6093b3:goto L6093b3;
case 0x6093b5:c.instructions+=2;goto B6093b5;
case 0x6093b6:c.instructions+=1;goto B6093b6;
case 0x6093bb:goto L6093bb;
case 0x6093be:c.instructions+=1;goto B6093be;
case 0x6093c0:goto L6093c0;
case 0x6093c2:c.instructions+=2;goto B6093c2;
case 0x6093c4:c.instructions+=1;goto B6093c4;
case 0x6093c6:goto L6093c6;
case 0x6093c9:c.instructions+=1;goto B6093c9;
case 0x6093cb:goto L6093cb;
case 0x6093cd:c.instructions+=2;goto B6093cd;
case 0x6093d0:c.instructions+=1;goto B6093d0;
case 0x6093d2:goto L6093d2;
case 0x6093d4:c.instructions+=1;goto B6093d4;
case 0x6093d6:goto L6093d6;
case 0x6093d8:c.instructions+=1;goto B6093d8;
case 0x6093da:goto L6093da;
case 0x6093dd:c.instructions+=1;goto B6093dd;
case 0x6093df:goto L6093df;
case 0x6093e2:c.instructions+=1;goto B6093e2;
case 0x6093e4:goto L6093e4;
case 0x6093ea:c.instructions+=1;goto B6093ea;
case 0x6093ec:goto L6093ec;
case 0x6093ef:c.instructions+=1;goto B6093ef;
case 0x6093f1:goto L6093f1;
case 0x6093f3:c.instructions+=2;goto B6093f3;
case 0x6093f5:c.instructions+=1;goto B6093f5;
case 0x6093fa:goto L6093fa;
case 0x6093fd:c.instructions+=2;goto B6093fd;
case 0x6093fe:c.instructions+=1;goto B6093fe;
case 0x609400:goto L609400;
case 0x609403:c.instructions+=1;goto B609403;
case 0x609405:goto L609405;
case 0x609407:c.instructions+=2;goto B609407;
case 0x609409:c.instructions+=1;goto B609409;
case 0x60940b:goto L60940b;
case 0x60940d:c.instructions+=2;goto B60940d;
case 0x609410:c.instructions+=1;goto B609410;
case 0x609412:goto L609412;
case 0x609414:c.instructions+=1;goto B609414;
case 0x609416:goto L609416;
case 0x609418:c.instructions+=1;goto B609418;
case 0x60941a:goto L60941a;
case 0x60941d:c.instructions+=1;goto B60941d;
case 0x60941f:goto L60941f;
case 0x609424:c.instructions+=1;goto B609424;
case 0x609426:goto L609426;
case 0x609428:goto L609428;
case 0x60942b:goto L60942b;
case 0x60942e:c.instructions+=2;goto B60942e;
case 0x60942f:c.instructions+=1;goto B60942f;
case 0x609431:goto L609431;
case 0x609436:c.instructions+=2;goto B609436;
case 0x609438:c.instructions+=1;goto B609438;
case 0x60943e:goto L60943e;
case 0x609444:c.instructions+=8;goto B609444;
case 0x609448:c.instructions+=7;goto B609448;
case 0x60944a:c.instructions+=6;goto B60944a;
case 0x60944d:c.instructions+=5;goto B60944d;
case 0x609453:c.instructions+=4;goto B609453;
case 0x609456:c.instructions+=3;goto B609456;
case 0x60945a:c.instructions+=2;goto B60945a;
case 0x60945e:c.instructions+=1;goto B60945e;
case 0x609462:goto L609462;
case 0x609466:c.instructions+=3;goto B609466;
case 0x609468:c.instructions+=2;goto B609468;
case 0x60946a:c.instructions+=1;goto B60946a;
case 0x609470:goto L609470;
case 0x609474:c.instructions+=2;goto B609474;
case 0x609477:c.instructions+=1;goto B609477;
case 0x60947d:goto L60947d;
case 0x609482:c.instructions+=2;goto B609482;
case 0x609484:c.instructions+=1;goto B609484;
case 0x60948a:goto L60948a;
case 0x60948f:c.instructions+=2;goto B60948f;
case 0x609491:c.instructions+=1;goto B609491;
case 0x609497:goto L609497;
case 0x609499:c.instructions+=2;goto B609499;
case 0x60949b:c.instructions+=1;goto B60949b;
case 0x6094a0:goto L6094a0;
case 0x6094a2:c.instructions+=1;goto B6094a2;
case 0x6094a8:goto L6094a8;
case 0x6094ad:c.instructions+=1;goto B6094ad;
case 0x6094b0:goto L6094b0;
case 0x6094b4:c.instructions+=1;goto B6094b4;
case 0x6094b6:goto L6094b6;
case 0x6094b8:c.instructions+=2;goto B6094b8;
case 0x6094ba:c.instructions+=1;goto B6094ba;
case 0x6094bc:goto L6094bc;
case 0x6094be:goto L6094be;
case 0x6094c0:c.instructions+=1;goto B6094c0;
case 0x6094c2:goto L6094c2;
case 0x6094c5:c.instructions+=2;goto B6094c5;
case 0x6094c7:c.instructions+=1;goto B6094c7;
case 0x6094c9:goto L6094c9;
case 0x6094ce:c.instructions+=1;goto B6094ce;
case 0x6094d0:goto L6094d0;
case 0x6094d6:c.instructions+=7;goto B6094d6;
case 0x6094dc:c.instructions+=6;goto B6094dc;
case 0x6094e0:c.instructions+=5;goto B6094e0;
case 0x6094e2:c.instructions+=4;goto B6094e2;
case 0x6094e8:c.instructions+=3;goto B6094e8;
case 0x6094ea:c.instructions+=2;goto B6094ea;
case 0x6094ed:c.instructions+=1;goto B6094ed;
case 0x6094ef:goto L6094ef;
case 0x6094f3:c.instructions+=4;goto B6094f3;
case 0x6094f4:c.instructions+=3;goto B6094f4;
case 0x6094f7:c.instructions+=2;goto B6094f7;
case 0x6094fb:c.instructions+=1;goto B6094fb;
case 0x6094fd:goto L6094fd;
case 0x609500:c.instructions+=1;goto B609500;
case 0x609502:goto L609502;
case 0x609508:goto L609508;
case 0x60950a:c.instructions+=1;goto B60950a;
case 0x60950c:goto L60950c;
case 0x609510:c.instructions+=3;goto B609510;
case 0x609514:c.instructions+=2;goto B609514;
case 0x609517:c.instructions+=1;goto B609517;
case 0x609519:goto L609519;
case 0x60951f:goto L60951f;
case 0x609522:c.instructions+=1;goto B609522;
case 0x609524:goto L609524;
case 0x609526:goto L609526;
case 0x60952a:c.instructions+=5;goto B60952a;
case 0x60952b:c.instructions+=4;goto B60952b;
case 0x60952e:c.instructions+=3;goto B60952e;
case 0x609531:c.instructions+=2;goto B609531;
case 0x609535:c.instructions+=1;goto B609535;
case 0x60953b:goto L60953b;
case 0x609540:c.instructions+=1;goto B609540;
case 0x609542:goto L609542;
case 0x609546:c.instructions+=3;goto B609546;
case 0x609549:c.instructions+=2;goto B609549;
case 0x60954c:c.instructions+=1;goto B60954c;
case 0x60954e:goto L60954e;
case 0x609554:goto L609554;
case 0x609558:c.instructions+=2;goto B609558;
case 0x60955a:c.instructions+=1;goto B60955a;
case 0x60955f:goto L60955f;
case 0x609561:c.instructions+=1;goto B609561;
case 0x609566:goto L609566;
case 0x609568:c.instructions+=3;goto B609568;
case 0x60956c:c.instructions+=2;goto B60956c;
case 0x60956f:c.instructions+=1;goto B60956f;
case 0x609574:goto L609574;
case 0x609576:goto L609576;
case 0x60957c:c.instructions+=1;goto B60957c;
case 0x609581:goto L609581;
case 0x609587:c.instructions+=1;goto B609587;
case 0x60958c:goto L60958c;
case 0x609592:c.instructions+=1;goto B609592;
case 0x609597:goto L609597;
case 0x60959d:c.instructions+=1;goto B60959d;
case 0x6095a2:goto L6095a2;
case 0x6095a8:c.instructions+=1;goto B6095a8;
case 0x6095ad:goto L6095ad;
case 0x6095b3:c.instructions+=1;goto B6095b3;
case 0x6095b8:goto L6095b8;
case 0x6095be:c.instructions+=1;goto B6095be;
case 0x6095c3:goto L6095c3;
case 0x6095c9:c.instructions+=1;goto B6095c9;
case 0x6095ce:goto L6095ce;
case 0x6095d5:c.instructions+=1;goto B6095d5;
case 0x6095db:goto L6095db;
case 0x6095e1:c.instructions+=4;goto B6095e1;
case 0x6095e4:c.instructions+=3;goto B6095e4;
case 0x6095e6:c.instructions+=2;goto B6095e6;
case 0x6095e8:c.instructions+=1;goto B6095e8;
case 0x6095ea:goto L6095ea;
case 0x6095ef:c.instructions+=1;goto B6095ef;
case 0x6095f0:goto L6095f0;
case 0x6095f3:c.instructions+=7;goto B6095f3;
case 0x6095f5:c.instructions+=6;goto B6095f5;
case 0x6095f9:c.instructions+=5;goto B6095f9;
case 0x6095fd:c.instructions+=4;goto B6095fd;
case 0x609603:c.instructions+=3;goto B609603;
case 0x609609:c.instructions+=2;goto B609609;
case 0x60960d:c.instructions+=1;goto B60960d;
case 0x60960f:goto L60960f;
case 0x609615:c.instructions+=1;goto B609615;
case 0x60961b:goto L60961b;
case 0x60961e:c.instructions+=4;goto B60961e;
case 0x60961f:c.instructions+=3;goto B60961f;
case 0x609622:c.instructions+=2;goto B609622;
case 0x609624:c.instructions+=1;goto B609624;
case 0x609626:goto L609626;
case 0x60962b:c.instructions+=1;goto B60962b;
case 0x609630:goto L609630;
case 0x609632:c.instructions+=1;goto B609632;
case 0x609634:goto L609634;
case 0x609636:c.instructions+=3;goto B609636;
case 0x609639:c.instructions+=2;goto B609639;
case 0x60963e:c.instructions+=1;goto B60963e;
case 0x609640:goto L609640;
case 0x609642:c.instructions+=2;goto B609642;
case 0x609644:c.instructions+=1;goto B609644;
case 0x609646:goto L609646;
case 0x609649:c.instructions+=1;goto B609649;
case 0x60964b:goto L60964b;
case 0x60964d:c.instructions+=2;goto B60964d;
case 0x609650:c.instructions+=1;goto B609650;
case 0x609652:goto L609652;
case 0x609655:c.instructions+=1;goto B609655;
case 0x609657:goto L609657;
case 0x609659:c.instructions+=1;goto B609659;
case 0x60965b:goto L60965b;
case 0x60965e:c.instructions+=1;goto B60965e;
case 0x609660:goto L609660;
case 0x609661:goto L609661;
case 0x609664:c.instructions+=2;goto B609664;
case 0x609665:c.instructions+=1;goto B609665;
case 0x609667:goto L609667;
case 0x609669:c.instructions+=1;goto B609669;
case 0x60966b:goto L60966b;
case 0x609670:c.instructions+=1;goto B609670;
case 0x609672:goto L609672;
case 0x609674:goto L609674;
case 0x60967a:goto L60967a;
case 0x60967e:c.instructions+=3;goto B60967e;
case 0x609680:c.instructions+=2;goto B609680;
case 0x609681:c.instructions+=1;goto B609681;
case 0x609683:goto L609683;
case 0x609686:c.instructions+=1;goto B609686;
case 0x609688:goto L609688;
case 0x609689:c.instructions+=5;goto B609689;
case 0x60968a:c.instructions+=4;goto B60968a;
case 0x609690:c.instructions+=3;goto B609690;
case 0x609691:c.instructions+=2;goto B609691;
case 0x609694:c.instructions+=1;goto B609694;
case 0x609697:goto L609697;
case 0x60969a:c.instructions+=1;goto B60969a;
case 0x60969c:goto L60969c;
case 0x60969e:c.instructions+=2;goto B60969e;
case 0x6096a1:c.instructions+=1;goto B6096a1;
case 0x6096a6:goto L6096a6;
case 0x6096a8:c.instructions+=2;goto B6096a8;
case 0x6096aa:c.instructions+=1;goto B6096aa;
case 0x6096ac:goto L6096ac;
case 0x6096af:c.instructions+=1;goto B6096af;
case 0x6096b1:goto L6096b1;
case 0x6096b3:c.instructions+=2;goto B6096b3;
case 0x6096b6:c.instructions+=1;goto B6096b6;
case 0x6096b8:goto L6096b8;
case 0x6096bb:c.instructions+=1;goto B6096bb;
case 0x6096bd:goto L6096bd;
case 0x6096bf:c.instructions+=1;goto B6096bf;
case 0x6096c1:goto L6096c1;
case 0x6096c4:c.instructions+=1;goto B6096c4;
case 0x6096c6:goto L6096c6;
case 0x6096c7:goto L6096c7;
case 0x6096ca:c.instructions+=2;goto B6096ca;
case 0x6096cb:c.instructions+=1;goto B6096cb;
case 0x6096cd:goto L6096cd;
case 0x6096cf:c.instructions+=1;goto B6096cf;
case 0x6096d1:goto L6096d1;
case 0x6096d4:c.instructions+=2;goto B6096d4;
case 0x6096d6:c.instructions+=1;goto B6096d6;
case 0x6096d8:goto L6096d8;
case 0x6096da:c.instructions+=2;goto B6096da;
case 0x6096dd:c.instructions+=1;goto B6096dd;
case 0x6096df:goto L6096df;
case 0x6096e2:c.instructions+=1;goto B6096e2;
case 0x6096e4:goto L6096e4;
case 0x6096e6:c.instructions+=1;goto B6096e6;
case 0x6096e8:goto L6096e8;
case 0x6096eb:c.instructions+=1;goto B6096eb;
case 0x6096ed:goto L6096ed;
case 0x6096f4:goto L6096f4;
case 0x6096fa:c.instructions+=2;goto B6096fa;
case 0x6096fc:c.instructions+=1;goto B6096fc;
case 0x6096fe:goto L6096fe;
case 0x609704:c.instructions+=3;goto B609704;
case 0x609705:c.instructions+=2;goto B609705;
case 0x609707:c.instructions+=1;goto B609707;
case 0x60970c:goto L60970c;
case 0x60970f:c.instructions+=2;goto B60970f;
case 0x609711:c.instructions+=1;goto B609711;
case 0x609716:goto L609716;
case 0x609719:c.instructions+=1;goto B609719;
case 0x60971b:goto L60971b;
case 0x609721:goto L609721;
case 0x609726:goto L609726;
case 0x609727:c.instructions+=4;goto B609727;
case 0x609728:c.instructions+=3;goto B609728;
case 0x609729:c.instructions+=2;goto B609729;
case 0x60972c:c.instructions+=1;goto B60972c;
case 0x60972f:goto L60972f;
case 0x609731:c.instructions+=2;goto B609731;
case 0x609733:c.instructions+=1;goto B609733;
case 0x609738:goto L609738;
case 0x609739:c.instructions+=4;goto B609739;
case 0x60973a:c.instructions+=3;goto B60973a;
case 0x60973b:c.instructions+=2;goto B60973b;
case 0x60973e:c.instructions+=1;goto B60973e;
case 0x609750:goto L609750;
case 0x609755:c.instructions+=4;goto B609755;
case 0x609757:c.instructions+=3;goto B609757;
case 0x609758:c.instructions+=2;goto B609758;
case 0x60975a:c.instructions+=1;goto B60975a;
case 0x60975c:goto L60975c;
case 0x60975d:c.instructions+=3;goto B60975d;
case 0x60975e:c.instructions+=2;goto B60975e;
case 0x609765:c.instructions+=1;goto B609765;
case 0x60976a:goto L60976a;
case 0x60976d:c.instructions+=1;goto B60976d;
case 0x609772:goto L609772;
case 0x609774:c.instructions+=2;goto B609774;
case 0x609776:c.instructions+=1;goto B609776;
case 0x609778:goto L609778;
case 0x60977a:c.instructions+=2;goto B60977a;
case 0x60977c:c.instructions+=1;goto B60977c;
case 0x609781:goto L609781;
case 0x609784:c.instructions+=2;goto B609784;
case 0x609785:c.instructions+=1;goto B609785;
case 0x609787:goto L609787;
case 0x609788:c.instructions+=2;goto B609788;
case 0x609789:c.instructions+=1;goto B609789;
case 0x60978b:goto L60978b;
case 0x609790:goto L609790;
case 0x609796:c.instructions+=3;goto B609796;
case 0x609798:c.instructions+=2;goto B609798;
case 0x60979f:c.instructions+=1;goto B60979f;
case 0x6097a1:goto L6097a1;
case 0x6097a6:c.instructions+=2;goto B6097a6;
case 0x6097ab:c.instructions+=1;goto B6097ab;
case 0x6097ad:goto L6097ad;
case 0x6097b0:c.instructions+=1;goto B6097b0;
case 0x6097b2:goto L6097b2;
case 0x6097b9:c.instructions+=1;goto B6097b9;
case 0x6097bb:goto L6097bb;
case 0x6097c5:goto L6097c5;
case 0x6097c6:c.instructions+=1;goto B6097c6;
case 0x6097d0:goto L6097d0;
case 0x6097d3:c.instructions+=8;goto B6097d3;
case 0x6097d4:c.instructions+=7;goto B6097d4;
case 0x6097d5:c.instructions+=6;goto B6097d5;
case 0x6097d6:c.instructions+=5;goto B6097d6;
case 0x6097d8:c.instructions+=4;goto B6097d8;
case 0x6097d9:c.instructions+=3;goto B6097d9;
case 0x6097de:c.instructions+=2;goto B6097de;
case 0x6097e2:c.instructions+=1;goto B6097e2;
case 0x6097e7:goto L6097e7;
case 0x6097e9:c.instructions+=3;goto B6097e9;
case 0x6097ef:c.instructions+=2;goto B6097ef;
case 0x6097f6:c.instructions+=1;goto B6097f6;
case 0x6097f8:goto L6097f8;
case 0x6097fe:c.instructions+=1;goto B6097fe;
case 0x609803:goto L609803;
case 0x609809:c.instructions+=1;goto B609809;
case 0x60980e:goto L60980e;
case 0x609815:c.instructions+=9;goto B609815;
case 0x60981a:c.instructions+=8;goto B60981a;
case 0x609820:c.instructions+=7;goto B609820;
case 0x609822:c.instructions+=6;goto B609822;
case 0x609825:c.instructions+=5;goto B609825;
case 0x60982b:c.instructions+=4;goto B60982b;
case 0x609831:c.instructions+=3;goto B609831;
case 0x609837:c.instructions+=2;goto B609837;
case 0x60983d:c.instructions+=1;goto B60983d;
case 0x609842:goto L609842;
case 0x609845:c.instructions+=4;goto B609845;
case 0x609847:c.instructions+=3;goto B609847;
case 0x60984a:c.instructions+=2;goto B60984a;
case 0x60984b:c.instructions+=1;goto B60984b;
case 0x60984d:goto L60984d;
case 0x609853:goto L609853;
case 0x609856:c.instructions+=3;goto B609856;
case 0x609858:c.instructions+=2;goto B609858;
case 0x60985d:c.instructions+=1;goto B60985d;
case 0x609860:goto L609860;
case 0x609862:c.instructions+=2;goto B609862;
case 0x609864:c.instructions+=1;goto B609864;
case 0x609866:goto L609866;
case 0x609868:c.instructions+=2;goto B609868;
case 0x60986b:c.instructions+=1;goto B60986b;
case 0x60986d:goto L60986d;
case 0x609870:c.instructions+=1;goto B609870;
case 0x609872:goto L609872;
case 0x609874:c.instructions+=1;goto B609874;
case 0x609876:goto L609876;
case 0x609879:c.instructions+=1;goto B609879;
case 0x60987b:goto L60987b;
case 0x60987e:c.instructions+=1;goto B60987e;
case 0x609880:goto L609880;
case 0x609886:c.instructions+=4;goto B609886;
case 0x60988c:c.instructions+=3;goto B60988c;
case 0x609892:c.instructions+=2;goto B609892;
case 0x609898:c.instructions+=1;goto B609898;
case 0x60989d:goto L60989d;
case 0x6098a3:c.instructions+=5;goto B6098a3;
case 0x6098a5:c.instructions+=4;goto B6098a5;
case 0x6098ab:c.instructions+=3;goto B6098ab;
case 0x6098b1:c.instructions+=2;goto B6098b1;
case 0x6098b7:c.instructions+=1;goto B6098b7;
case 0x6098bc:goto L6098bc;
case 0x6098c2:c.instructions+=1;goto B6098c2;
case 0x6098cc:goto L6098cc;
case 0x6098cf:c.instructions+=2;goto B6098cf;
case 0x6098d0:c.instructions+=1;goto B6098d0;
case 0x6098d2:goto L6098d2;
case 0x6098d8:c.instructions+=1;goto B6098d8;
case 0x6098e0:goto L6098e0;
case 0x6098e2:c.instructions+=2;goto B6098e2;
case 0x6098e4:c.instructions+=1;goto B6098e4;
case 0x6098e6:goto L6098e6;
case 0x6098eb:c.instructions+=3;goto B6098eb;
case 0x6098ed:c.instructions+=2;goto B6098ed;
case 0x6098ef:c.instructions+=1;goto B6098ef;
case 0x6098f1:goto L6098f1;
case 0x6098f3:c.instructions+=1;goto B6098f3;
case 0x6098f5:goto L6098f5;
case 0x6098f8:c.instructions+=2;goto B6098f8;
case 0x6098fa:c.instructions+=1;goto B6098fa;
case 0x6098ff:goto L6098ff;
case 0x609901:c.instructions+=1;goto B609901;
case 0x609903:goto L609903;
case 0x609908:goto L609908;
case 0x60990c:c.instructions+=1;goto B60990c;
case 0x60990e:goto L60990e;
case 0x609910:c.instructions+=2;goto B609910;
case 0x609912:c.instructions+=1;goto B609912;
case 0x609914:goto L609914;
case 0x609916:goto L609916;
case 0x609918:c.instructions+=2;goto B609918;
case 0x60991b:c.instructions+=1;goto B60991b;
case 0x60991d:goto L60991d;
case 0x609920:c.instructions+=1;goto B609920;
case 0x609922:goto L609922;
case 0x609924:c.instructions+=1;goto B609924;
case 0x609926:goto L609926;
case 0x609929:c.instructions+=1;goto B609929;
case 0x60992b:goto L60992b;
case 0x60992e:c.instructions+=2;goto B60992e;
case 0x609932:c.instructions+=1;goto B609932;
case 0x609934:goto L609934;
case 0x60993a:c.instructions+=2;goto B60993a;
case 0x60993c:c.instructions+=1;goto B60993c;
case 0x60993e:goto L60993e;
case 0x609940:c.instructions+=1;goto B609940;
case 0x609945:goto L609945;
case 0x609948:c.instructions+=3;goto B609948;
case 0x60994d:c.instructions+=2;goto B60994d;
case 0x609953:c.instructions+=1;goto B609953;
case 0x609959:goto L609959;
case 0x60995d:c.instructions+=4;goto B60995d;
case 0x609960:c.instructions+=3;goto B609960;
case 0x609961:c.instructions+=2;goto B609961;
case 0x609965:c.instructions+=1;goto B609965;
case 0x60996b:goto L60996b;
case 0x60996f:c.instructions+=2;goto B60996f;
case 0x609972:c.instructions+=1;goto B609972;
case 0x609974:goto L609974;
case 0x60997a:c.instructions+=1;goto B60997a;
case 0x609980:goto L609980;
case 0x609981:c.instructions+=5;goto B609981;
case 0x609982:c.instructions+=4;goto B609982;
case 0x609984:c.instructions+=3;goto B609984;
case 0x609985:c.instructions+=2;goto B609985;
case 0x609986:c.instructions+=1;goto B609986;
case 0x609988:goto L609988;
case 0x60998d:c.instructions+=2;goto B60998d;
case 0x60998f:c.instructions+=1;goto B60998f;
case 0x609991:goto L609991;
case 0x609996:c.instructions+=1;goto B609996;
case 0x60999b:goto L60999b;
case 0x6099a1:c.instructions+=2;goto B6099a1;
case 0x6099a3:c.instructions+=1;goto B6099a3;
case 0x6099a8:goto L6099a8;
case 0x6099ae:c.instructions+=4;goto B6099ae;
case 0x6099b0:c.instructions+=3;goto B6099b0;
case 0x6099b5:c.instructions+=2;goto B6099b5;
case 0x6099b6:c.instructions+=1;goto B6099b6;
case 0x6099bb:goto L6099bb;
case 0x6099be:c.instructions+=1;goto B6099be;
case 0x6099c0:goto L6099c0;
case 0x6099c4:c.instructions+=6;goto B6099c4;
case 0x6099c5:c.instructions+=5;goto B6099c5;
case 0x6099c7:c.instructions+=4;goto B6099c7;
case 0x6099c8:c.instructions+=3;goto B6099c8;
case 0x6099cc:c.instructions+=2;goto B6099cc;
case 0x6099ce:c.instructions+=1;goto B6099ce;
case 0x6099d4:goto L6099d4;
case 0x6099da:c.instructions+=5;goto B6099da;
case 0x6099db:c.instructions+=4;goto B6099db;
case 0x6099e1:c.instructions+=3;goto B6099e1;
case 0x6099e7:c.instructions+=2;goto B6099e7;
case 0x6099ed:c.instructions+=1;goto B6099ed;
case 0x6099f2:goto L6099f2;
case 0x6099f8:c.instructions+=2;goto B6099f8;
case 0x6099fb:c.instructions+=1;goto B6099fb;
case 0x6099fd:goto L6099fd;
case 0x609a00:c.instructions+=1;goto B609a00;
case 0x609a02:goto L609a02;
case 0x609a08:goto L609a08;
case 0x609a0c:c.instructions+=3;goto B609a0c;
case 0x609a0d:c.instructions+=2;goto B609a0d;
case 0x609a12:c.instructions+=1;goto B609a12;
case 0x609a17:goto L609a17;
case 0x609a1a:c.instructions+=2;goto B609a1a;
case 0x609a1c:c.instructions+=1;goto B609a1c;
case 0x609a22:goto L609a22;
case 0x609a25:c.instructions+=2;goto B609a25;
case 0x609a2a:c.instructions+=1;goto B609a2a;
case 0x609a30:goto L609a30;
case 0x609a32:c.instructions+=2;goto B609a32;
case 0x609a34:c.instructions+=1;goto B609a34;
case 0x609a36:goto L609a36;
case 0x609a38:c.instructions+=1;goto B609a38;
case 0x609a3a:goto L609a3a;
case 0x609a3d:c.instructions+=1;goto B609a3d;
case 0x609a3f:goto L609a3f;
case 0x609a45:goto L609a45;
case 0x609a47:c.instructions+=4;goto B609a47;
case 0x609a4b:c.instructions+=3;goto B609a4b;
case 0x609a4c:c.instructions+=2;goto B609a4c;
case 0x609a51:c.instructions+=1;goto B609a51;
case 0x609a56:goto L609a56;
case 0x609a59:c.instructions+=2;goto B609a59;
case 0x609a5a:c.instructions+=1;goto B609a5a;
case 0x609a5c:goto L609a5c;
case 0x609a5d:c.instructions+=3;goto B609a5d;
case 0x609a5e:c.instructions+=2;goto B609a5e;
case 0x609a5f:c.instructions+=1;goto B609a5f;
case 0x609a62:goto L609a62;
case 0x609a67:c.instructions+=2;goto B609a67;
case 0x609a69:c.instructions+=1;goto B609a69;
case 0x609a6b:goto L609a6b;
case 0x609a6c:c.instructions+=1;goto B609a6c;
case 0x609a71:goto L609a71;
case 0x609a73:c.instructions+=5;goto B609a73;
case 0x609a76:c.instructions+=4;goto B609a76;
case 0x609a79:c.instructions+=3;goto B609a79;
case 0x609a7b:c.instructions+=2;goto B609a7b;
case 0x609a7d:c.instructions+=1;goto B609a7d;
case 0x609a7f:goto L609a7f;
case 0x609a81:c.instructions+=1;goto B609a81;
case 0x609a83:goto L609a83;
case 0x609a87:c.instructions+=5;goto B609a87;
case 0x609a89:c.instructions+=4;goto B609a89;
case 0x609a8b:c.instructions+=3;goto B609a8b;
case 0x609a8e:c.instructions+=2;goto B609a8e;
case 0x609a92:c.instructions+=1;goto B609a92;
case 0x609a93:goto L609a93;
case 0x609a98:goto L609a98;
case 0x609a9b:c.instructions+=2;goto B609a9b;
case 0x609a9d:c.instructions+=1;goto B609a9d;
case 0x609aa3:goto L609aa3;
case 0x609aa6:c.instructions+=2;goto B609aa6;
case 0x609aab:c.instructions+=1;goto B609aab;
case 0x609ab0:goto L609ab0;
case 0x609ab2:c.instructions+=2;goto B609ab2;
case 0x609ab4:c.instructions+=1;goto B609ab4;
case 0x609ab6:goto L609ab6;
case 0x609ab8:c.instructions+=1;goto B609ab8;
case 0x609aba:goto L609aba;
case 0x609abc:c.instructions+=2;goto B609abc;
case 0x609abe:c.instructions+=1;goto B609abe;
case 0x609ac3:goto L609ac3;
case 0x609ac6:c.instructions+=2;goto B609ac6;
case 0x609ac7:c.instructions+=1;goto B609ac7;
case 0x609ac9:goto L609ac9;
case 0x609aca:c.instructions+=3;goto B609aca;
case 0x609acb:c.instructions+=2;goto B609acb;
case 0x609acc:c.instructions+=1;goto B609acc;
case 0x609acf:goto L609acf;
case 0x609ad3:c.instructions+=7;goto B609ad3;
case 0x609ad5:c.instructions+=6;goto B609ad5;
case 0x609ad7:c.instructions+=5;goto B609ad7;
case 0x609ada:c.instructions+=4;goto B609ada;
case 0x609ade:c.instructions+=3;goto B609ade;
case 0x609adf:c.instructions+=2;goto B609adf;
case 0x609ae1:c.instructions+=1;goto B609ae1;
case 0x609ae6:goto L609ae6;
case 0x609ae9:c.instructions+=2;goto B609ae9;
case 0x609aeb:c.instructions+=1;goto B609aeb;
case 0x609af1:goto L609af1;
case 0x609af4:c.instructions+=2;goto B609af4;
case 0x609af6:c.instructions+=1;goto B609af6;
case 0x609af8:goto L609af8;
case 0x609afa:c.instructions+=1;goto B609afa;
case 0x609afc:goto L609afc;
case 0x609aff:c.instructions+=1;goto B609aff;
case 0x609b01:goto L609b01;
case 0x609b07:goto L609b07;
case 0x609b0a:c.instructions+=2;goto B609b0a;
case 0x609b0c:c.instructions+=1;goto B609b0c;
case 0x609b0e:goto L609b0e;
case 0x609b10:c.instructions+=1;goto B609b10;
case 0x609b12:goto L609b12;
case 0x609b15:c.instructions+=1;goto B609b15;
case 0x609b17:goto L609b17;
case 0x609b1d:goto L609b1d;
case 0x609b20:c.instructions+=2;goto B609b20;
case 0x609b22:c.instructions+=1;goto B609b22;
case 0x609b24:goto L609b24;
case 0x609b26:c.instructions+=1;goto B609b26;
case 0x609b28:goto L609b28;
case 0x609b2b:c.instructions+=1;goto B609b2b;
case 0x609b2d:goto L609b2d;
case 0x609b33:goto L609b33;
case 0x609b36:c.instructions+=2;goto B609b36;
case 0x609b38:c.instructions+=1;goto B609b38;
case 0x609b3a:goto L609b3a;
case 0x609b3c:c.instructions+=1;goto B609b3c;
case 0x609b3e:goto L609b3e;
case 0x609b41:c.instructions+=1;goto B609b41;
case 0x609b43:goto L609b43;
case 0x609b49:goto L609b49;
case 0x609b4c:c.instructions+=2;goto B609b4c;
case 0x609b4e:c.instructions+=1;goto B609b4e;
case 0x609b50:goto L609b50;
case 0x609b52:c.instructions+=1;goto B609b52;
case 0x609b54:goto L609b54;
case 0x609b57:c.instructions+=1;goto B609b57;
case 0x609b59:goto L609b59;
case 0x609b5f:goto L609b5f;
case 0x609b62:c.instructions+=2;goto B609b62;
case 0x609b64:c.instructions+=1;goto B609b64;
case 0x609b66:goto L609b66;
case 0x609b68:c.instructions+=1;goto B609b68;
case 0x609b6a:goto L609b6a;
case 0x609b6d:c.instructions+=1;goto B609b6d;
case 0x609b6f:goto L609b6f;
case 0x609b75:goto L609b75;
case 0x609b76:goto L609b76;
case 0x609b77:c.instructions+=2;goto B609b77;
case 0x609b78:c.instructions+=1;goto B609b78;
case 0x609b80:goto L609b80;
case 0x609b81:c.instructions+=10;goto B609b81;
case 0x609b82:c.instructions+=9;goto B609b82;
case 0x609b83:c.instructions+=8;goto B609b83;
case 0x609b87:c.instructions+=7;goto B609b87;
case 0x609b89:c.instructions+=6;goto B609b89;
case 0x609b8d:c.instructions+=5;goto B609b8d;
case 0x609b8f:c.instructions+=4;goto B609b8f;
case 0x609b90:c.instructions+=3;goto B609b90;
case 0x609b92:c.instructions+=2;goto B609b92;
case 0x609b9a:c.instructions+=1;goto B609b9a;
case 0x609b9f:goto L609b9f;
case 0x609ba4:c.instructions+=3;goto B609ba4;
case 0x609ba8:c.instructions+=2;goto B609ba8;
case 0x609baa:c.instructions+=1;goto B609baa;
case 0x609bac:goto L609bac;
case 0x609bad:c.instructions+=2;goto B609bad;
case 0x609baf:c.instructions+=1;goto B609baf;
case 0x609bb4:goto L609bb4;
case 0x609bb5:c.instructions+=3;goto B609bb5;
case 0x609bb6:c.instructions+=2;goto B609bb6;
case 0x609bb7:c.instructions+=1;goto B609bb7;
case 0x609bc0:goto L609bc0;
case 0x609bc2:c.instructions+=10;goto B609bc2;
case 0x609bc7:c.instructions+=9;goto B609bc7;
case 0x609bcd:c.instructions+=8;goto B609bcd;
case 0x609bce:c.instructions+=7;goto B609bce;
case 0x609bd5:c.instructions+=6;goto B609bd5;
case 0x609bd6:c.instructions+=5;goto B609bd6;
case 0x609bd7:c.instructions+=4;goto B609bd7;
case 0x609bd9:c.instructions+=3;goto B609bd9;
case 0x609bdd:c.instructions+=2;goto B609bdd;
case 0x609be5:c.instructions+=1;goto B609be5;
case 0x609bea:goto L609bea;
case 0x609bed:c.instructions+=2;goto B609bed;
case 0x609bf5:c.instructions+=1;goto B609bf5;
case 0x609bfa:goto L609bfa;
case 0x609bfe:c.instructions+=4;goto B609bfe;
case 0x609bff:c.instructions+=3;goto B609bff;
case 0x609c06:c.instructions+=2;goto B609c06;
case 0x609c09:c.instructions+=1;goto B609c09;
case 0x609c10:goto L609c10;
case 0x609c11:c.instructions+=2;goto B609c11;
case 0x609c13:c.instructions+=1;goto B609c13;
case 0x609c18:goto L609c18;
case 0x609c1d:c.instructions+=1;goto B609c1d;
case 0x609c1f:goto L609c1f;
case 0x609c20:c.instructions+=1;goto B609c20;
case 0x609c25:goto L609c25;
case 0x609c28:goto L609c28;
case 0x609c2a:c.instructions+=2;goto B609c2a;
case 0x609c2b:c.instructions+=1;goto B609c2b;
case 0x609c30:goto L609c30;
case 0x609c31:c.instructions+=2;goto B609c31;
case 0x609c33:c.instructions+=1;goto B609c33;
case 0x609c38:goto L609c38;
case 0x609c3d:c.instructions+=1;goto B609c3d;
case 0x609c3f:goto L609c3f;
case 0x609c40:c.instructions+=1;goto B609c40;
case 0x609c45:goto L609c45;
case 0x609c48:goto L609c48;
case 0x609c4a:c.instructions+=2;goto B609c4a;
case 0x609c4b:c.instructions+=1;goto B609c4b;
case 0x609c50:goto L609c50;
case 0x609c51:c.instructions+=5;goto B609c51;
case 0x609c52:c.instructions+=4;goto B609c52;
case 0x609c53:c.instructions+=3;goto B609c53;
case 0x609c55:c.instructions+=2;goto B609c55;
case 0x609c57:c.instructions+=1;goto B609c57;
case 0x609c5c:goto L609c5c;
case 0x609c5e:c.instructions+=2;goto B609c5e;
case 0x609c60:c.instructions+=1;goto B609c60;
case 0x609c62:goto L609c62;
case 0x609c64:c.instructions+=1;goto B609c64;
case 0x609c69:goto L609c69;
case 0x609c6b:c.instructions+=2;goto B609c6b;
case 0x609c6d:c.instructions+=1;goto B609c6d;
case 0x609c6f:goto L609c6f;
case 0x609c71:c.instructions+=2;goto B609c71;
case 0x609c73:c.instructions+=1;goto B609c73;
case 0x609c75:goto L609c75;
case 0x609c78:c.instructions+=5;goto B609c78;
case 0x609c7a:c.instructions+=4;goto B609c7a;
case 0x609c7c:c.instructions+=3;goto B609c7c;
case 0x609c7f:c.instructions+=2;goto B609c7f;
case 0x609c81:c.instructions+=1;goto B609c81;
case 0x609c86:goto L609c86;
case 0x609c87:c.instructions+=1;goto B609c87;
case 0x609c8c:goto L609c8c;
case 0x609c8e:c.instructions+=3;goto B609c8e;
case 0x609c91:c.instructions+=2;goto B609c91;
case 0x609c93:c.instructions+=1;goto B609c93;
case 0x609c95:goto L609c95;
case 0x609c96:c.instructions+=3;goto B609c96;
case 0x609c97:c.instructions+=2;goto B609c97;
case 0x609c98:c.instructions+=1;goto B609c98;
case 0x609ca0:goto L609ca0;
case 0x609ca1:c.instructions+=5;goto B609ca1;
case 0x609ca2:c.instructions+=4;goto B609ca2;
case 0x609ca4:c.instructions+=3;goto B609ca4;
case 0x609ca6:c.instructions+=2;goto B609ca6;
case 0x609ca8:c.instructions+=1;goto B609ca8;
case 0x609caa:goto L609caa;
case 0x609cb0:goto L609cb0;
case 0x609cb3:c.instructions+=5;goto B609cb3;
case 0x609cb5:c.instructions+=4;goto B609cb5;
case 0x609cb7:c.instructions+=3;goto B609cb7;
case 0x609cba:c.instructions+=2;goto B609cba;
case 0x609cbc:c.instructions+=1;goto B609cbc;
case 0x609cc1:goto L609cc1;
case 0x609cc2:c.instructions+=1;goto B609cc2;
case 0x609cc7:goto L609cc7;
case 0x609cc9:c.instructions+=3;goto B609cc9;
case 0x609ccc:c.instructions+=2;goto B609ccc;
case 0x609cce:c.instructions+=1;goto B609cce;
case 0x609cd0:goto L609cd0;
case 0x609cd1:c.instructions+=2;goto B609cd1;
case 0x609cd2:c.instructions+=1;goto B609cd2;
case 0x609ce0:goto L609ce0;
case 0x609ce1:c.instructions+=7;goto B609ce1;
case 0x609ce3:c.instructions+=6;goto B609ce3;
case 0x609ce6:c.instructions+=5;goto B609ce6;
case 0x609ce7:c.instructions+=4;goto B609ce7;
case 0x609ce8:c.instructions+=3;goto B609ce8;
case 0x609ce9:c.instructions+=2;goto B609ce9;
case 0x609ceb:c.instructions+=1;goto B609ceb;
case 0x609cf0:goto L609cf0;
case 0x609cfa:c.instructions+=1;goto B609cfa;
case 0x609cff:goto L609cff;
case 0x609d04:goto L609d04;
case 0x609d07:c.instructions+=3;goto B609d07;
case 0x609d09:c.instructions+=2;goto B609d09;
case 0x609d0b:c.instructions+=1;goto B609d0b;
case 0x609d0d:goto L609d0d;
case 0x609d10:goto L609d10;
case 0x609d12:c.instructions+=1;goto B609d12;
case 0x609d17:goto L609d17;
case 0x609d1a:c.instructions+=4;goto B609d1a;
case 0x609d1b:c.instructions+=3;goto B609d1b;
case 0x609d1e:c.instructions+=2;goto B609d1e;
case 0x609d20:c.instructions+=1;goto B609d20;
case 0x609d22:goto L609d22;
case 0x609d27:c.instructions+=1;goto B609d27;
case 0x609d2c:goto L609d2c;
case 0x609d31:goto L609d31;
case 0x609d34:c.instructions+=4;goto B609d34;
case 0x609d36:c.instructions+=3;goto B609d36;
case 0x609d39:c.instructions+=2;goto B609d39;
case 0x609d3c:c.instructions+=1;goto B609d3c;
case 0x609d42:goto L609d42;
case 0x609d49:c.instructions+=2;goto B609d49;
case 0x609d4f:c.instructions+=1;goto B609d4f;
case 0x609d55:goto L609d55;
case 0x609d5b:c.instructions+=49;goto B609d5b;
case 0x609d5e:c.instructions+=48;goto B609d5e;
case 0x609d61:c.instructions+=47;goto B609d61;
case 0x609d64:c.instructions+=46;goto B609d64;
case 0x609d67:c.instructions+=45;goto B609d67;
case 0x609d69:c.instructions+=44;goto B609d69;
case 0x609d6c:c.instructions+=43;goto B609d6c;
case 0x609d6f:c.instructions+=42;goto B609d6f;
case 0x609d72:c.instructions+=41;goto B609d72;
case 0x609d75:c.instructions+=40;goto B609d75;
case 0x609d7b:c.instructions+=39;goto B609d7b;
case 0x609d81:c.instructions+=38;goto B609d81;
case 0x609d84:c.instructions+=37;goto B609d84;
case 0x609d87:c.instructions+=36;goto B609d87;
case 0x609d8a:c.instructions+=35;goto B609d8a;
case 0x609d8d:c.instructions+=34;goto B609d8d;
case 0x609d90:c.instructions+=33;goto B609d90;
case 0x609d92:c.instructions+=32;goto B609d92;
case 0x609d95:c.instructions+=31;goto B609d95;
case 0x609d98:c.instructions+=30;goto B609d98;
case 0x609d9e:c.instructions+=29;goto B609d9e;
case 0x609da4:c.instructions+=28;goto B609da4;
case 0x609da7:c.instructions+=27;goto B609da7;
case 0x609daa:c.instructions+=26;goto B609daa;
case 0x609dad:c.instructions+=25;goto B609dad;
case 0x609db0:c.instructions+=24;goto B609db0;
case 0x609db3:c.instructions+=23;goto B609db3;
case 0x609db5:c.instructions+=22;goto B609db5;
case 0x609db8:c.instructions+=21;goto B609db8;
case 0x609dbb:c.instructions+=20;goto B609dbb;
case 0x609dc1:c.instructions+=19;goto B609dc1;
case 0x609dc7:c.instructions+=18;goto B609dc7;
case 0x609dca:c.instructions+=17;goto B609dca;
case 0x609dcd:c.instructions+=16;goto B609dcd;
case 0x609dd0:c.instructions+=15;goto B609dd0;
case 0x609dd3:c.instructions+=14;goto B609dd3;
case 0x609dd6:c.instructions+=13;goto B609dd6;
case 0x609dd9:c.instructions+=12;goto B609dd9;
case 0x609ddb:c.instructions+=11;goto B609ddb;
case 0x609dde:c.instructions+=10;goto B609dde;
case 0x609de1:c.instructions+=9;goto B609de1;
case 0x609de4:c.instructions+=8;goto B609de4;
case 0x609de7:c.instructions+=7;goto B609de7;
case 0x609ded:c.instructions+=6;goto B609ded;
case 0x609df0:c.instructions+=5;goto B609df0;
case 0x609df3:c.instructions+=4;goto B609df3;
case 0x609df6:c.instructions+=3;goto B609df6;
case 0x609df8:c.instructions+=2;goto B609df8;
case 0x609dfb:c.instructions+=1;goto B609dfb;
case 0x609e01:goto L609e01;
case 0x609e03:c.instructions+=1;goto B609e03;
case 0x609e05:goto L609e05;
case 0x609e07:c.instructions+=7;goto B609e07;
case 0x609e0a:c.instructions+=6;goto B609e0a;
case 0x609e11:c.instructions+=5;goto B609e11;
case 0x609e13:c.instructions+=4;goto B609e13;
case 0x609e15:c.instructions+=3;goto B609e15;
case 0x609e1c:c.instructions+=2;goto B609e1c;
case 0x609e1f:c.instructions+=1;goto B609e1f;
case 0x609e20:goto L609e20;
case 0x609e26:c.instructions+=15;goto B609e26;
case 0x609e29:c.instructions+=14;goto B609e29;
case 0x609e2c:c.instructions+=13;goto B609e2c;
case 0x609e2f:c.instructions+=12;goto B609e2f;
case 0x609e32:c.instructions+=11;goto B609e32;
case 0x609e34:c.instructions+=10;goto B609e34;
case 0x609e37:c.instructions+=9;goto B609e37;
case 0x609e3a:c.instructions+=8;goto B609e3a;
case 0x609e3d:c.instructions+=7;goto B609e3d;
case 0x609e40:c.instructions+=6;goto B609e40;
case 0x609e46:c.instructions+=5;goto B609e46;
case 0x609e49:c.instructions+=4;goto B609e49;
case 0x609e4c:c.instructions+=3;goto B609e4c;
case 0x609e4d:c.instructions+=2;goto B609e4d;
case 0x609e50:c.instructions+=1;goto B609e50;
case 0x609e52:goto L609e52;
case 0x609e55:c.instructions+=1;goto B609e55;
case 0x609e57:goto L609e57;
case 0x609e59:c.instructions+=6;goto B609e59;
case 0x609e5c:c.instructions+=5;goto B609e5c;
case 0x609e61:c.instructions+=4;goto B609e61;
case 0x609e68:c.instructions+=3;goto B609e68;
case 0x609e6a:c.instructions+=2;goto B609e6a;
case 0x609e71:c.instructions+=1;goto B609e71;
case 0x609e76:goto L609e76;
case 0x609e79:c.instructions+=7;goto B609e79;
case 0x609e7c:c.instructions+=6;goto B609e7c;
case 0x609e7e:c.instructions+=5;goto B609e7e;
case 0x609e80:c.instructions+=4;goto B609e80;
case 0x609e83:c.instructions+=3;goto B609e83;
case 0x609e86:c.instructions+=2;goto B609e86;
case 0x609e87:c.instructions+=1;goto B609e87;
case 0x609e89:goto L609e89;
case 0x609e8e:c.instructions+=2;goto B609e8e;
case 0x609e90:c.instructions+=1;goto B609e90;
case 0x609e92:goto L609e92;
case 0x609e99:c.instructions+=1;goto B609e99;
case 0x609e9b:goto L609e9b;
case 0x609ea1:c.instructions+=3;goto B609ea1;
case 0x609ea4:c.instructions+=2;goto B609ea4;
case 0x609ea7:c.instructions+=1;goto B609ea7;
case 0x609ea9:goto L609ea9;
case 0x609eac:c.instructions+=1;goto B609eac;
case 0x609eae:goto L609eae;
case 0x609eb8:c.instructions+=1;goto B609eb8;
case 0x609eba:goto L609eba;
case 0x609ebd:c.instructions+=1;goto B609ebd;
case 0x609ebf:goto L609ebf;
case 0x609ec9:goto L609ec9;
case 0x609ecf:c.instructions+=2;goto B609ecf;
case 0x609ed1:c.instructions+=1;goto B609ed1;
case 0x609ed3:goto L609ed3;
case 0x609ed6:c.instructions+=2;goto B609ed6;
case 0x609ed7:c.instructions+=1;goto B609ed7;
case 0x609edc:goto L609edc;
case 0x609ee1:goto L609ee1;
case 0x609ee4:c.instructions+=5;goto B609ee4;
case 0x609ee7:c.instructions+=4;goto B609ee7;
case 0x609ee9:c.instructions+=3;goto B609ee9;
case 0x609eeb:c.instructions+=2;goto B609eeb;
case 0x609eed:c.instructions+=1;goto B609eed;
case 0x609eef:goto L609eef;
case 0x609ef0:goto L609ef0;
case 0x609ef2:c.instructions+=3;goto B609ef2;
case 0x609ef6:c.instructions+=2;goto B609ef6;
case 0x609ef8:c.instructions+=1;goto B609ef8;
case 0x609efd:goto L609efd;
case 0x609f03:c.instructions+=6;goto B609f03;
case 0x609f06:c.instructions+=5;goto B609f06;
case 0x609f09:c.instructions+=4;goto B609f09;
case 0x609f0b:c.instructions+=3;goto B609f0b;
case 0x609f0c:c.instructions+=2;goto B609f0c;
case 0x609f0e:c.instructions+=1;goto B609f0e;
case 0x609f11:goto L609f11;
case 0x609f14:c.instructions+=5;goto B609f14;
case 0x609f17:c.instructions+=4;goto B609f17;
case 0x609f18:c.instructions+=3;goto B609f18;
case 0x609f1a:c.instructions+=2;goto B609f1a;
case 0x609f1c:c.instructions+=1;goto B609f1c;
case 0x609f1e:goto L609f1e;
case 0x609f21:c.instructions+=5;goto B609f21;
case 0x609f24:c.instructions+=4;goto B609f24;
case 0x609f26:c.instructions+=3;goto B609f26;
case 0x609f28:c.instructions+=2;goto B609f28;
case 0x609f2a:c.instructions+=1;goto B609f2a;
case 0x609f2c:goto L609f2c;
case 0x609f30:goto L609f30;
case 0x609f32:c.instructions+=3;goto B609f32;
case 0x609f36:c.instructions+=2;goto B609f36;
case 0x609f38:c.instructions+=1;goto B609f38;
case 0x609f3d:goto L609f3d;
case 0x609f43:c.instructions+=6;goto B609f43;
case 0x609f46:c.instructions+=5;goto B609f46;
case 0x609f49:c.instructions+=4;goto B609f49;
case 0x609f4b:c.instructions+=3;goto B609f4b;
case 0x609f4c:c.instructions+=2;goto B609f4c;
case 0x609f4e:c.instructions+=1;goto B609f4e;
case 0x609f51:goto L609f51;
case 0x609f54:c.instructions+=5;goto B609f54;
case 0x609f57:c.instructions+=4;goto B609f57;
case 0x609f58:c.instructions+=3;goto B609f58;
case 0x609f5a:c.instructions+=2;goto B609f5a;
case 0x609f5c:c.instructions+=1;goto B609f5c;
case 0x609f5e:goto L609f5e;
case 0x609f61:c.instructions+=3;goto B609f61;
case 0x609f63:c.instructions+=2;goto B609f63;
case 0x609f65:c.instructions+=1;goto B609f65;
case 0x609f67:goto L609f67;
case 0x609f6a:c.instructions+=2;goto B609f6a;
case 0x609f6d:c.instructions+=1;goto B609f6d;
case 0x609f70:goto L609f70;
case 0x609f73:c.instructions+=3;goto B609f73;
case 0x609f75:c.instructions+=2;goto B609f75;
case 0x609f77:c.instructions+=1;goto B609f77;
case 0x609f7c:goto L609f7c;
case 0x609f82:c.instructions+=6;goto B609f82;
case 0x609f85:c.instructions+=5;goto B609f85;
case 0x609f88:c.instructions+=4;goto B609f88;
case 0x609f8a:c.instructions+=3;goto B609f8a;
case 0x609f8b:c.instructions+=2;goto B609f8b;
case 0x609f8d:c.instructions+=1;goto B609f8d;
case 0x609f90:goto L609f90;
case 0x609f93:c.instructions+=6;goto B609f93;
case 0x609f96:c.instructions+=5;goto B609f96;
case 0x609f97:c.instructions+=4;goto B609f97;
case 0x609f9a:c.instructions+=3;goto B609f9a;
case 0x609f9c:c.instructions+=2;goto B609f9c;
case 0x609f9f:c.instructions+=1;goto B609f9f;
case 0x609fa1:goto L609fa1;
case 0x609fa6:goto L609fa6;
case 0x609fa9:c.instructions+=3;goto B609fa9;
case 0x609fab:c.instructions+=2;goto B609fab;
case 0x609fb2:c.instructions+=1;goto B609fb2;
case 0x609fb4:goto L609fb4;
case 0x609fb7:goto L609fb7;
case 0x609fb9:c.instructions+=5;goto B609fb9;
case 0x609fbc:c.instructions+=4;goto B609fbc;
case 0x609fbf:c.instructions+=3;goto B609fbf;
case 0x609fc1:c.instructions+=2;goto B609fc1;
case 0x609fc2:c.instructions+=1;goto B609fc2;
case 0x609fc5:goto L609fc5;
case 0x609fcb:c.instructions+=2;goto B609fcb;
case 0x609fcd:c.instructions+=1;goto B609fcd;
case 0x609fcf:goto L609fcf;
case 0x609fd0:c.instructions+=1;goto B609fd0;
case 0x609fd6:goto L609fd6;
case 0x609fd9:c.instructions+=6;goto B609fd9;
case 0x609fdc:c.instructions+=5;goto B609fdc;
case 0x609fdd:c.instructions+=4;goto B609fdd;
case 0x609fe0:c.instructions+=3;goto B609fe0;
case 0x609fe2:c.instructions+=2;goto B609fe2;
case 0x609fe5:c.instructions+=1;goto B609fe5;
case 0x609fe7:goto L609fe7;
case 0x609fea:c.instructions+=3;goto B609fea;
case 0x609fec:c.instructions+=2;goto B609fec;
case 0x609fee:c.instructions+=1;goto B609fee;
case 0x609ff0:goto L609ff0;
case 0x609ff3:c.instructions+=2;goto B609ff3;
case 0x609ff5:c.instructions+=1;goto B609ff5;
case 0x609ffa:goto L609ffa;
case 0x609ffd:c.instructions+=2;goto B609ffd;
case 0x609ffe:c.instructions+=1;goto B609ffe;
default:missing_instruction(c.pc);}
B609005:L609005:{c.instructions+=3;NFSU2_TR(0x609005);
__builtin_memmove((R+0),gp(0x890108),4);
}
B60900a:{NFSU2_TR(0x60900a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60900c:{NFSU2_TR(0x60900c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6090e3;}}
}
B609012:L609012:{c.instructions+=3;NFSU2_TR(0x609012);
__builtin_memmove((R+0),gp(0x89e7b4),4);
}
B609017:{NFSU2_TR(0x609017);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B609019:{NFSU2_TR(0x609019);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6090e3;}}
}
B60901f:L60901f:{c.instructions+=3;NFSU2_TR(0x60901f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B609025:{NFSU2_TR(0x609025);
u8 U[8];
__builtin_memmove((U+0),gp(0x89e7bc),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B60902b:{NFSU2_TR(0x60902b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6090e3;}}
}
B609031:L609031:{c.instructions+=3;NFSU2_TR(0x609031);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B609033:{NFSU2_TR(0x609033);
__builtin_memmove((R+4),(R+28),4);
}
B609035:{NFSU2_TR(0x609035);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60903aull));
TAIL_STATIC(0x5f9010u,5f9);
}
B60903a:L60903a:{c.instructions+=4;NFSU2_TR(0x60903a);
__builtin_memmove((R+20),gp(0x890118),4);
}
B609040:{NFSU2_TR(0x609040);
__builtin_memmove((R+12),gp(0x89e7d9),1);
}
B609046:{NFSU2_TR(0x609046);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B609048:{NFSU2_TR(0x609048);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L609057;}}
}
B60904a:L60904a:{c.instructions+=3;NFSU2_TR(0x60904a);
__builtin_memmove((R+0),gp(0x890104),4);
}
B60904f:{NFSU2_TR(0x60904f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B609051:{NFSU2_TR(0x609051);
if(r1(R+518)){{goto L6090e3;}}
}
B609057:L609057:{c.instructions+=2;NFSU2_TR(0x609057);
{u32 ea_=u32(r4(R+28)+u32(576u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60905d:{NFSU2_TR(0x60905d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x609062ull));
TAIL_STATIC(0x75bed4u,75b);
}
B609062:L609062:{c.instructions+=4;NFSU2_TR(0x609062);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B609065:{NFSU2_TR(0x609065);
__builtin_memmove((R+24),(R+0),4);
}
B609067:{NFSU2_TR(0x609067);
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
B609069:{NFSU2_TR(0x609069);
if(r1(R+518)){{goto L6090c8;}}
}
B60906b:L60906b:{c.instructions+=3;NFSU2_TR(0x60906b);
__builtin_memmove((R+0),gp(0x89e7e3),1);
}
B609070:{NFSU2_TR(0x609070);
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
B609072:{NFSU2_TR(0x609072);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6090c1;}}
}
B609074:L609074:{c.instructions+=3;NFSU2_TR(0x609074);
__builtin_memmove((R+0),gp(0x89010c),4);
}
B609079:{NFSU2_TR(0x609079);
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
B60907b:{NFSU2_TR(0x60907b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6090c1;}}
}
B60907d:L60907d:{c.instructions+=2;NFSU2_TR(0x60907d);
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
B60907f:{NFSU2_TR(0x60907f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6090c1;}}
}
B609081:L609081:{c.instructions+=3;NFSU2_TR(0x609081);
__builtin_memmove((R+0),gp(0x890104),4);
}
B609086:{NFSU2_TR(0x609086);
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
B609088:{NFSU2_TR(0x609088);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6090c1;}}
}
B60908a:L60908a:{c.instructions+=3;NFSU2_TR(0x60908a);
__builtin_memmove((R+0),gp(0x89e7e7),1);
}
B60908f:{NFSU2_TR(0x60908f);
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
B609091:{NFSU2_TR(0x609091);
if(r1(R+518)){{goto L6090c1;}}
}
B609093:L609093:{c.instructions+=3;NFSU2_TR(0x609093);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B609095:{NFSU2_TR(0x609095);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B609097:{NFSU2_TR(0x609097);
if(r1(R+518)){{goto L6090b1;}}
}
B609099:L609099:{c.instructions+=3;NFSU2_TR(0x609099);
__builtin_memmove((R+4),gp(0x890080),4);
}
B60909f:{NFSU2_TR(0x60909f);
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
B6090a1:{NFSU2_TR(0x6090a1);
if(r1(R+518)){{goto L6090b1;}}
}
B6090a3:L6090a3:{c.instructions+=4;NFSU2_TR(0x6090a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6090a7:{NFSU2_TR(0x6090a7);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B6090ab:{NFSU2_TR(0x6090ab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6090ac:{NFSU2_TR(0x6090ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6090b1ull));
TAIL_STATIC(0x5f0e30u,5f0);
}
B6090b1:L6090b1:{c.instructions+=5;NFSU2_TR(0x6090b1);
__builtin_memmove((R+4),(R+24),4);
}
B6090b3:{NFSU2_TR(0x6090b3);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+28))));
}
B6090b5:{NFSU2_TR(0x6090b5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6090b6:{NFSU2_TR(0x6090b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x918ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6090bc:{NFSU2_TR(0x6090bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6090c1ull));
TAIL_STATIC(0x5ef870u,5ef);
}
B6090c1:L6090c1:{c.instructions+=2;NFSU2_TR(0x6090c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6090c5:{NFSU2_TR(0x6090c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6090c8:L6090c8:{c.instructions+=4;NFSU2_TR(0x6090c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6090cc:{NFSU2_TR(0x6090cc);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B6090d0:{NFSU2_TR(0x6090d0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6090d1:{NFSU2_TR(0x6090d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6090d6ull));
TAIL_STATIC(0x56dd50u,56d);
}
B6090d6:L6090d6:{c.instructions+=3;NFSU2_TR(0x6090d6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6090d9:{NFSU2_TR(0x6090d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6090db:{NFSU2_TR(0x6090db);
if(r1(R+518)){{goto L6090e3;}}
}
B6090dd:L6090dd:{c.instructions+=2;NFSU2_TR(0x6090dd);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6090e0:{NFSU2_TR(0x6090e0);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6090e3:L6090e3:{c.instructions+=6;NFSU2_TR(0x6090e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6090e4:{NFSU2_TR(0x6090e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6090e5:{NFSU2_TR(0x6090e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6090e6:{NFSU2_TR(0x6090e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6090e7:{NFSU2_TR(0x6090e7);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x28ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x28ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6090ea:{NFSU2_TR(0x6090ea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6090f0:L6090f0:{c.instructions+=6;NFSU2_TR(0x6090f0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6090f1:{NFSU2_TR(0x6090f1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6090f2:{NFSU2_TR(0x6090f2);
__builtin_memmove((R+20),(R+4),4);
}
B6090f4:{NFSU2_TR(0x6090f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6090f7:{NFSU2_TR(0x6090f7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6090fa:{NFSU2_TR(0x6090fa);
if(r1(R+518)){{goto L609114;}}
}
B6090fc:L6090fc:{c.instructions+=2;NFSU2_TR(0x6090fc);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6090ff:{NFSU2_TR(0x6090ff);
if(r1(R+518)){{goto L609114;}}
}
B609101:L609101:{c.instructions+=2;NFSU2_TR(0x609101);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B609103:{NFSU2_TR(0x609103);
if(r1(R+518)){{goto L609114;}}
}
B609105:L609105:{c.instructions+=2;NFSU2_TR(0x609105);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B609108:{NFSU2_TR(0x609108);
if(r1(R+518)){{goto L609114;}}
}
B60910a:L60910a:{c.instructions+=3;NFSU2_TR(0x60910a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60910e:{NFSU2_TR(0x60910e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60910f:{NFSU2_TR(0x60910f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x609114ull));
TAIL_STATIC(0x5efa30u,5ef);
}
B609114:L609114:{c.instructions+=3;NFSU2_TR(0x609114);
__builtin_memmove((R+12),gp(0x890118),4);
}
B60911a:{NFSU2_TR(0x60911a);
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
B60911c:{NFSU2_TR(0x60911c);
if(r1(R+518)){{goto L6091ca;}}
}
B609122:L609122:{c.instructions+=3;NFSU2_TR(0x609122);
__builtin_memmove((R+4),gp(0x890080),4);
}
B609128:{NFSU2_TR(0x609128);
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
B60912a:{NFSU2_TR(0x60912a);
if(r1(R+518)){{goto L6091ca;}}
}
B609130:L609130:{c.instructions+=5;NFSU2_TR(0x609130);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B609131:{NFSU2_TR(0x609131);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B609132:{NFSU2_TR(0x609132);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(s32(s8(r1(U+4)))));
}
B609136:{NFSU2_TR(0x609136);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B609137:{NFSU2_TR(0x609137);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60913cull));
TAIL_STATIC(0x5f0e30u,5f0);
}
B60913c:L60913c:{c.instructions+=2;NFSU2_TR(0x60913c);
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
B60913e:{NFSU2_TR(0x60913e);
if(r1(R+518)){{goto L6091c8;}}
}
B609144:L609144:{c.instructions+=3;NFSU2_TR(0x609144);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B609147:{NFSU2_TR(0x609147);
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
B609149:{NFSU2_TR(0x609149);
if(r1(R+518)){{goto L6091c8;}}
}
B60914b:L60914b:{c.instructions+=2;NFSU2_TR(0x60914b);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B609150:{NFSU2_TR(0x609150);
if(r1(R+518)){{goto L60915b;}}
}
B609152:L609152:{c.instructions+=3;NFSU2_TR(0x609152);
__builtin_memmove((R+0),gp(0x89e7b0),4);
}
B609157:{NFSU2_TR(0x609157);
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
B609159:{NFSU2_TR(0x609159);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6091c8;}}
}
B60915b:L60915b:{c.instructions+=3;NFSU2_TR(0x60915b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60915c:{NFSU2_TR(0x60915c);
w4(R+4,u32(0x89e7a0ull));
}
B609161:{NFSU2_TR(0x609161);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x609166ull));
TAIL_STATIC(0x5ed920u,5ed);
}
B609166:L609166:{c.instructions+=10;NFSU2_TR(0x609166);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B60916c:{NFSU2_TR(0x60916c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B60916e:{NFSU2_TR(0x60916e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B609171:{NFSU2_TR(0x609171);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B609173:{NFSU2_TR(0x609173);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B609176:{NFSU2_TR(0x609176);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B60917a:{NFSU2_TR(0x60917a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60917d:{NFSU2_TR(0x60917d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B60917f:{NFSU2_TR(0x60917f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B609181:{NFSU2_TR(0x609181);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6091c1;}}
}
B609183:L609183:{c.instructions+=2;NFSU2_TR(0x609183);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xbd0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B609189:{NFSU2_TR(0x609189);
__builtin_memmove((R+16),(R+16),4);
}
B609190:L609190:{c.instructions+=2;NFSU2_TR(0x609190);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+24))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B609192:{NFSU2_TR(0x609192);
if(r1(R+518)){{goto L6091aa;}}
}
B609194:L609194:{c.instructions+=4;NFSU2_TR(0x609194);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B609195:{NFSU2_TR(0x609195);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B609198:{NFSU2_TR(0x609198);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B60919a:{NFSU2_TR(0x60919a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x609190u);}goto L609190;}}
}
B60919c:L60919c:{c.instructions+=2;NFSU2_TR(0x60919c);
__builtin_memmove((R+4),(R+20),4);
}
B60919e:{NFSU2_TR(0x60919e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6091a3ull));
TAIL_STATIC(0x5fe120u,5fe);
}
B6091a3:L6091a3:{c.instructions+=5;NFSU2_TR(0x6091a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6091a4:{NFSU2_TR(0x6091a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6091a5:{NFSU2_TR(0x6091a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6091a6:{NFSU2_TR(0x6091a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6091a7:{NFSU2_TR(0x6091a7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6091aa:L6091aa:{c.instructions+=9;NFSU2_TR(0x6091aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6091ae:{NFSU2_TR(0x6091ae);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B6091b2:{NFSU2_TR(0x6091b2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6091b3:{NFSU2_TR(0x6091b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6091b7:{NFSU2_TR(0x6091b7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6091b8:{NFSU2_TR(0x6091b8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6091b9:{NFSU2_TR(0x6091b9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6091ba:{NFSU2_TR(0x6091ba);
__builtin_memmove((R+4),(R+12),4);
}
B6091bc:{NFSU2_TR(0x6091bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6091c1ull));
TAIL_STATIC(0x606cb0u,606);
}
B6091c1:L6091c1:{c.instructions+=2;NFSU2_TR(0x6091c1);
__builtin_memmove((R+4),(R+20),4);
}
B6091c3:{NFSU2_TR(0x6091c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6091c8ull));
TAIL_STATIC(0x5fe120u,5fe);
}
B6091c8:L6091c8:{c.instructions+=2;NFSU2_TR(0x6091c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6091c9:{NFSU2_TR(0x6091c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6091ca:L6091ca:{c.instructions+=3;NFSU2_TR(0x6091ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6091cb:{NFSU2_TR(0x6091cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6091cc:{NFSU2_TR(0x6091cc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6091d0:L6091d0:{c.instructions+=11;NFSU2_TR(0x6091d0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6091d1:{NFSU2_TR(0x6091d1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6091d2:{NFSU2_TR(0x6091d2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6091d3:{NFSU2_TR(0x6091d3);
__builtin_memmove((R+24),(R+4),4);
}
B6091d5:{NFSU2_TR(0x6091d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x280ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6091df:{NFSU2_TR(0x6091df);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x284ull))));
w4(U+4,u32(0xbf800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6091e9:{NFSU2_TR(0x6091e9);
__builtin_memmove((R+20),gp(0x8900ac),4);
}
B6091ef:{NFSU2_TR(0x6091ef);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6091f0:{NFSU2_TR(0x6091f0);
__builtin_memmove((R+28),gp(0x890118),4);
}
B6091f6:{NFSU2_TR(0x6091f6);
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
B6091f8:{NFSU2_TR(0x6091f8);
if(r1(R+518)){{goto L609355;}}
}
B6091fe:L6091fe:{c.instructions+=2;NFSU2_TR(0x6091fe);
__builtin_memmove((R+4),(R+28),4);
}
B609200:{NFSU2_TR(0x609200);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x609205ull));
TAIL_STATIC(0x5f85b0u,5f8);
}
B609205:L609205:{c.instructions+=2;NFSU2_TR(0x609205);
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
B609207:{NFSU2_TR(0x609207);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L609355;}}
}
B60920d:L60920d:{c.instructions+=2;NFSU2_TR(0x60920d);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x4ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B609210:{NFSU2_TR(0x609210);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L609355;}}
}
B609216:L609216:{c.instructions+=3;NFSU2_TR(0x609216);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B609219:{NFSU2_TR(0x609219);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60921b:{NFSU2_TR(0x60921b);
if(r1(R+518)){{goto L609245;}}
}
B60921d:L60921d:{c.instructions+=2;NFSU2_TR(0x60921d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B609222:{NFSU2_TR(0x609222);
if(r1(R+518)){{goto L609245;}}
}
B609224:L609224:{c.instructions+=8;NFSU2_TR(0x609224);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B609229:{NFSU2_TR(0x609229);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60922c:{NFSU2_TR(0x60922c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B60922f:{NFSU2_TR(0x60922f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B609233:{NFSU2_TR(0x609233);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B609237:{NFSU2_TR(0x609237);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60923d:{NFSU2_TR(0x60923d);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B60923f:{NFSU2_TR(0x60923f);
{u32 ea_=u32(r4(R+24)+u32(644u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B609245:L609245:{c.instructions+=2;NFSU2_TR(0x609245);
__builtin_memmove((R+4),(R+24),4);
}
B609247:{NFSU2_TR(0x609247);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60924cull));
TAIL_STATIC(0x5efa00u,5ef);
}
B60924c:L60924c:{c.instructions+=2;NFSU2_TR(0x60924c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60924e:{NFSU2_TR(0x60924e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L609331;}}
}
B609254:L609254:{c.instructions+=2;NFSU2_TR(0x609254);
w4(R+4,u32(0x89cf48ull));
}
B609259:{NFSU2_TR(0x609259);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60925eull));
TAIL_STATIC(0x5efe70u,5ef);
}
B60925e:L60925e:{c.instructions+=2;NFSU2_TR(0x60925e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B609260:{NFSU2_TR(0x609260);
if(r1(R+518)){{goto L609331;}}
}
B609266:L609266:{c.instructions+=3;NFSU2_TR(0x609266);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x248ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B60926c:{NFSU2_TR(0x60926c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60926e:{NFSU2_TR(0x60926e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6092bd;}}
}
B609270:L609270:{c.instructions+=2;NFSU2_TR(0x609270);
__builtin_memmove((R+4),(R+24),4);
}
B609272:{NFSU2_TR(0x609272);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x609277ull));
TAIL_STATIC(0x5fe0f0u,5fe);
}
B609277:L609277:{c.instructions+=5;NFSU2_TR(0x609277);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60927a:{NFSU2_TR(0x60927a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B609280:{NFSU2_TR(0x609280);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B609282:{NFSU2_TR(0x609282);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B609285:{NFSU2_TR(0x609285);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6092bd;}}
}
B609287:L609287:{c.instructions+=6;NFSU2_TR(0x609287);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60928a:{NFSU2_TR(0x60928a);
{u32 ea_=u32(r4(R+4)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B609290:{NFSU2_TR(0x609290);
{u32 ea_=u32(u32(8017684u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B609296:{NFSU2_TR(0x609296);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B609298:{NFSU2_TR(0x609298);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B60929b:{NFSU2_TR(0x60929b);
if(r1(R+514)){{goto L6092a9;}}
}
B60929d:L60929d:{c.instructions+=2;NFSU2_TR(0x60929d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x280ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6092a7:{NFSU2_TR(0x6092a7);
{goto L6092c7;}
}
B6092a9:L6092a9:{c.instructions+=4;NFSU2_TR(0x6092a9);
__builtin_memmove((R+8),gp(0x7a571c),4);
}
B6092af:{NFSU2_TR(0x6092af);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6092b0:{NFSU2_TR(0x6092b0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x274ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6092b6:{NFSU2_TR(0x6092b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6092bbull));
TAIL_STATIC(0x401840u,401);
}
B6092bb:L6092bb:{c.instructions+=1;NFSU2_TR(0x6092bb);
{goto L6092c7;}
}
B6092bd:L6092bd:{c.instructions+=1;NFSU2_TR(0x6092bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x280ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6092c7:L6092c7:{c.instructions+=3;NFSU2_TR(0x6092c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x280ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6092cd:{NFSU2_TR(0x6092cd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6092cf:{NFSU2_TR(0x6092cf);
if(r1(R+518)){{goto L609327;}}
}
B6092d1:L6092d1:{c.instructions+=2;NFSU2_TR(0x6092d1);
w4(R+4,u32(0x89cf48ull));
}
B6092d6:{NFSU2_TR(0x6092d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6092dbull));
TAIL_STATIC(0x5efe70u,5ef);
}
B6092db:L6092db:{c.instructions+=2;NFSU2_TR(0x6092db);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6092dd:{NFSU2_TR(0x6092dd);
if(r1(R+518)){{goto L609327;}}
}
B6092df:L6092df:{c.instructions+=4;NFSU2_TR(0x6092df);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6092e3:{NFSU2_TR(0x6092e3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6092e4:{NFSU2_TR(0x6092e4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x274ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6092ea:{NFSU2_TR(0x6092ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6092efull));
TAIL_STATIC(0x577310u,577);
}
B6092ef:L6092ef:{c.instructions+=2;NFSU2_TR(0x6092ef);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6092f1:{NFSU2_TR(0x6092f1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L609327;}}
}
B6092f3:L6092f3:{c.instructions+=3;NFSU2_TR(0x6092f3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6092f4:{NFSU2_TR(0x6092f4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x278ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6092fa:{NFSU2_TR(0x6092fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6092ffull));
TAIL_STATIC(0x577310u,577);
}
B6092ff:L6092ff:{c.instructions+=2;NFSU2_TR(0x6092ff);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B609301:{NFSU2_TR(0x609301);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L609331;}}
}
B609303:L609303:{c.instructions+=3;NFSU2_TR(0x609303);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B609305:{NFSU2_TR(0x609305);
__builtin_memmove((R+4),(R+24),4);
}
B609307:{NFSU2_TR(0x609307);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60930cull));
TAIL_STATIC(0x5f9010u,5f9);
}
B60930c:L60930c:{c.instructions+=4;NFSU2_TR(0x60930c);
__builtin_memmove((R+4),gp(0x890118),4);
}
B609312:{NFSU2_TR(0x609312);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B609314:{NFSU2_TR(0x609314);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B609316:{NFSU2_TR(0x609316);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60931bull));
TAIL_STATIC(0x5eefb0u,5ee);
}
B60931b:L60931b:{c.instructions+=4;NFSU2_TR(0x60931b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60931c:{NFSU2_TR(0x60931c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60931f:{NFSU2_TR(0x60931f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B609320:{NFSU2_TR(0x609320);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x609325ull));
TAIL_STATIC(0x608d70u,608);
}
B609325:L609325:{c.instructions+=1;NFSU2_TR(0x609325);
{goto L609331;}
}
B609327:L609327:{c.instructions+=1;NFSU2_TR(0x609327);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x280ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B609331:L609331:{c.instructions+=2;NFSU2_TR(0x609331);
__builtin_memmove((R+4),(R+24),4);
}
B609333:{NFSU2_TR(0x609333);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x609338ull));
TAIL_STATIC(0x5fe0f0u,5fe);
}
B609338:L609338:{c.instructions+=3;NFSU2_TR(0x609338);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B60933b:{NFSU2_TR(0x60933b);
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
B60933d:{NFSU2_TR(0x60933d);
if(r1(R+518)){{goto L609355;}}
}
B60933f:L60933f:{c.instructions+=5;NFSU2_TR(0x60933f);
__builtin_memmove((R+4),gp(0x8a1ccc),4);
}
B609345:{NFSU2_TR(0x609345);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B609347:{NFSU2_TR(0x609347);
u8 U[4];
w4(U+0,u32(0x189e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60934c:{NFSU2_TR(0x60934c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60934d:{NFSU2_TR(0x60934d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x609352ull));
TAIL_STATIC(0x43bcd0u,43b);
}
B609352:L609352:{c.instructions+=1;NFSU2_TR(0x609352);
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
B609355:L609355:{c.instructions+=5;NFSU2_TR(0x609355);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B609356:{NFSU2_TR(0x609356);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B609357:{NFSU2_TR(0x609357);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B609358:{NFSU2_TR(0x609358);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B609359:{NFSU2_TR(0x609359);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B609360:L609360:{c.instructions+=10;NFSU2_TR(0x609360);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B609363:{NFSU2_TR(0x609363);
__builtin_memmove((R+0),gp(0x890080),4);
}
B609368:{NFSU2_TR(0x609368);
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
B60936a:{NFSU2_TR(0x60936a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60936b:{NFSU2_TR(0x60936b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60936c:{NFSU2_TR(0x60936c);
__builtin_memmove((R+12),(R+4),4);
}
B60936e:{NFSU2_TR(0x60936e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60936f:{NFSU2_TR(0x60936f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B609373:{NFSU2_TR(0x609373);
s4(0x7fb714,u32(0x40400000ull));
}
B60937d:{NFSU2_TR(0x60937d);
if(r1(R+518)){{goto L609389;}}
}
B60937f:L60937f:{c.instructions+=2;NFSU2_TR(0x60937f);
w4(R+4,u32(0x827b88ull));
}
B609384:{NFSU2_TR(0x609384);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x609389ull));
TAIL_STATIC(0x4022c0u,402);
}
B609389:L609389:{c.instructions+=5;NFSU2_TR(0x609389);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B60938b:{NFSU2_TR(0x60938b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60938e:{NFSU2_TR(0x60938e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60938f:{NFSU2_TR(0x60938f);
w4(R+20,u32(0x6ull));
}
B609394:{NFSU2_TR(0x609394);
if(r1(R+518)){{goto L6093a4;}}
}
B609396:L609396:{c.instructions+=2;NFSU2_TR(0x609396);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B609399:{NFSU2_TR(0x609399);
if(r1(R+518)){{goto L6093a4;}}
}
B60939b:L60939b:{c.instructions+=2;NFSU2_TR(0x60939b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60939e:{NFSU2_TR(0x60939e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60967a;}}
}
B6093a4:L6093a4:{c.instructions+=3;NFSU2_TR(0x6093a4);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6093a8:{NFSU2_TR(0x6093a8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6093aa:{NFSU2_TR(0x6093aa);
if(r1(R+518)){{goto L609400;}}
}
B6093ac:L6093ac:{c.instructions+=3;NFSU2_TR(0x6093ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6093af:{NFSU2_TR(0x6093af);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6093b1:{NFSU2_TR(0x6093b1);
if(r1(R+518)){{goto L6093bb;}}
}
B6093b3:L6093b3:{c.instructions+=3;NFSU2_TR(0x6093b3);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6093b5:{NFSU2_TR(0x6093b5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6093b6:{NFSU2_TR(0x6093b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6093bbull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6090f0u);}goto L6090f0;}
}
B6093bb:L6093bb:{c.instructions+=2;NFSU2_TR(0x6093bb);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6093be:{NFSU2_TR(0x6093be);
__builtin_memmove((R+28),(R+20),4);
}
B6093c0:L6093c0:{c.instructions+=3;NFSU2_TR(0x6093c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6093c2:{NFSU2_TR(0x6093c2);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6093c4:{NFSU2_TR(0x6093c4);
if(r1(R+518)){{goto L6093fa;}}
}
B6093c6:L6093c6:{c.instructions+=2;NFSU2_TR(0x6093c6);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6093c9:{NFSU2_TR(0x6093c9);
if(r1(R+518)){{goto L6093fa;}}
}
B6093cb:L6093cb:{c.instructions+=3;NFSU2_TR(0x6093cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6093cd:{NFSU2_TR(0x6093cd);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6093d0:{NFSU2_TR(0x6093d0);
if(r1(R+518)){{goto L6093fa;}}
}
B6093d2:L6093d2:{c.instructions+=2;NFSU2_TR(0x6093d2);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6093d4:{NFSU2_TR(0x6093d4);
if(r1(R+518)){{goto L6093fa;}}
}
B6093d6:L6093d6:{c.instructions+=2;NFSU2_TR(0x6093d6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6093d8:{NFSU2_TR(0x6093d8);
if(r1(R+518)){{goto L6093fa;}}
}
B6093da:L6093da:{c.instructions+=2;NFSU2_TR(0x6093da);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6093dd:{NFSU2_TR(0x6093dd);
if(r1(R+518)){{goto L6093fa;}}
}
B6093df:L6093df:{c.instructions+=2;NFSU2_TR(0x6093df);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6093e2:{NFSU2_TR(0x6093e2);
if(r1(R+518)){{goto L6093fa;}}
}
B6093e4:L6093e4:{c.instructions+=2;NFSU2_TR(0x6093e4);
u8 U[8];
__builtin_memmove((U+0),gp(0x89cf48),4);
w1(R+523,sborrow<u32>(r4(U+0),r4(R+20)));
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6093ea:{NFSU2_TR(0x6093ea);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6093f1;}}
}
B6093ec:L6093ec:{c.instructions+=2;NFSU2_TR(0x6093ec);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6093ef:{NFSU2_TR(0x6093ef);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6093fa;}}
}
B6093f1:L6093f1:{c.instructions+=3;NFSU2_TR(0x6093f1);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6093f3:{NFSU2_TR(0x6093f3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6093f5:{NFSU2_TR(0x6093f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6093faull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6090f0u);}goto L6090f0;}
}
B6093fa:L6093fa:{c.instructions+=3;NFSU2_TR(0x6093fa);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B6093fd:{NFSU2_TR(0x6093fd);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B6093fe:{NFSU2_TR(0x6093fe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6093c0u);}goto L6093c0;}}
}
B609400:L609400:{c.instructions+=2;NFSU2_TR(0x609400);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B609403:{NFSU2_TR(0x609403);
__builtin_memmove((R+24),(R+20),4);
}
B609405:L609405:{c.instructions+=3;NFSU2_TR(0x609405);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B609407:{NFSU2_TR(0x609407);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B609409:{NFSU2_TR(0x609409);
if(r1(R+518)){{goto L60942b;}}
}
B60940b:L60940b:{c.instructions+=3;NFSU2_TR(0x60940b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B60940d:{NFSU2_TR(0x60940d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B609410:{NFSU2_TR(0x609410);
if(r1(R+518)){{goto L609426;}}
}
B609412:L609412:{c.instructions+=2;NFSU2_TR(0x609412);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B609414:{NFSU2_TR(0x609414);
if(r1(R+518)){{goto L609426;}}
}
B609416:L609416:{c.instructions+=2;NFSU2_TR(0x609416);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B609418:{NFSU2_TR(0x609418);
if(r1(R+518)){{goto L609426;}}
}
B60941a:L60941a:{c.instructions+=2;NFSU2_TR(0x60941a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60941d:{NFSU2_TR(0x60941d);
if(r1(R+518)){{goto L609426;}}
}
B60941f:L60941f:{c.instructions+=2;NFSU2_TR(0x60941f);
w4(R+0,u32(0x1ull));
}
B609424:{NFSU2_TR(0x609424);
{goto L609428;}
}
B609426:L609426:{c.instructions+=1;NFSU2_TR(0x609426);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B609428:L609428:{c.instructions+=1;NFSU2_TR(0x609428);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x11ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B60942b:L60942b:{c.instructions+=3;NFSU2_TR(0x60942b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B60942e:{NFSU2_TR(0x60942e);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B60942f:{NFSU2_TR(0x60942f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x609405u);}goto L609405;}}
}
B609431:L609431:{c.instructions+=3;NFSU2_TR(0x609431);
__builtin_memmove((R+0),gp(0x86676c),4);
}
B609436:{NFSU2_TR(0x609436);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B609438:{NFSU2_TR(0x609438);
if(r1(R+518)){{goto L609554;}}
}
B60943e:L60943e:{c.instructions+=9;NFSU2_TR(0x60943e);
{u32 ea_=u32(u32(8802700u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B609444:{NFSU2_TR(0x609444);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B609448:{NFSU2_TR(0x609448);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B60944a:{NFSU2_TR(0x60944a);
w4(R+20,u32(u32(r4(R+20))|u32(u32(0xffffffffull))));
}
B60944d:{NFSU2_TR(0x60944d);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B609453:{NFSU2_TR(0x609453);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B609456:{NFSU2_TR(0x609456);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60945a:{NFSU2_TR(0x60945a);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60945e:{NFSU2_TR(0x60945e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B609462:L609462:{c.instructions+=4;NFSU2_TR(0x609462);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B609466:{NFSU2_TR(0x609466);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B609468:{NFSU2_TR(0x609468);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60946a:{NFSU2_TR(0x60946a);
if(r1(R+518)){{goto L609526;}}
}
B609470:L609470:{c.instructions+=3;NFSU2_TR(0x609470);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B609474:{NFSU2_TR(0x609474);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B609477:{NFSU2_TR(0x609477);
if(r1(R+518)){{goto L609526;}}
}
B60947d:L60947d:{c.instructions+=3;NFSU2_TR(0x60947d);
__builtin_memmove((R+0),gp(0x890118),4);
}
B609482:{NFSU2_TR(0x609482);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B609484:{NFSU2_TR(0x609484);
if(r1(R+518)){{goto L609526;}}
}
B60948a:L60948a:{c.instructions+=3;NFSU2_TR(0x60948a);
__builtin_memmove((R+0),gp(0x890080),4);
}
B60948f:{NFSU2_TR(0x60948f);
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
B609491:{NFSU2_TR(0x609491);
if(r1(R+518)){{goto L609526;}}
}
B609497:L609497:{c.instructions+=3;NFSU2_TR(0x609497);
__builtin_memmove((R+4),(R+0),4);
}
B609499:{NFSU2_TR(0x609499);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B60949b:{NFSU2_TR(0x60949b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6094a0ull));
TAIL_STATIC(0x502fd0u,502);
}
B6094a0:L6094a0:{c.instructions+=2;NFSU2_TR(0x6094a0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6094a2:{NFSU2_TR(0x6094a2);
if(r1(R+518)){{goto L609526;}}
}
B6094a8:L6094a8:{c.instructions+=2;NFSU2_TR(0x6094a8);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w2(R+4,u16(s16(s8(r1(U+4)))));
}
B6094ad:{NFSU2_TR(0x6094ad);
__builtin_memmove((R+4),(R+4),4);
}
B6094b0:L6094b0:{c.instructions+=2;NFSU2_TR(0x6094b0);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+4))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B6094b4:{NFSU2_TR(0x6094b4);
if(r1(R+518)){{goto L6094be;}}
}
B6094b6:L6094b6:{c.instructions+=3;NFSU2_TR(0x6094b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6094b8:{NFSU2_TR(0x6094b8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6094ba:{NFSU2_TR(0x6094ba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6094b0u);}goto L6094b0;}}
}
B6094bc:L6094bc:{c.instructions+=1;NFSU2_TR(0x6094bc);
{goto L609526;}
}
B6094be:L6094be:{c.instructions+=2;NFSU2_TR(0x6094be);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6094c0:{NFSU2_TR(0x6094c0);
if(r1(R+518)){{goto L609526;}}
}
B6094c2:L6094c2:{c.instructions+=3;NFSU2_TR(0x6094c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6094c5:{NFSU2_TR(0x6094c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6094c7:{NFSU2_TR(0x6094c7);
if(r1(R+518)){{goto L609526;}}
}
B6094c9:L6094c9:{c.instructions+=2;NFSU2_TR(0x6094c9);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0xcull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B6094ce:{NFSU2_TR(0x6094ce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L609526;}}
}
B6094d0:L6094d0:{c.instructions+=8;NFSU2_TR(0x6094d0);
{u32 ea_=u32(r4(R+28)+u32(636u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6094d6:{NFSU2_TR(0x6094d6);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6094dc:{NFSU2_TR(0x6094dc);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6094e0:{NFSU2_TR(0x6094e0);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B6094e2:{NFSU2_TR(0x6094e2);
{u32 ea_=u32(u32(7894412u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6094e8:{NFSU2_TR(0x6094e8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6094ea:{NFSU2_TR(0x6094ea);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6094ed:{NFSU2_TR(0x6094ed);
if(r1(R+514)){{goto L609526;}}
}
B6094ef:L6094ef:{c.instructions+=5;NFSU2_TR(0x6094ef);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6094f3:{NFSU2_TR(0x6094f3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6094f4:{NFSU2_TR(0x6094f4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6094f7:{NFSU2_TR(0x6094f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6094fb:{NFSU2_TR(0x6094fb);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L609524;}}
}
B6094fd:L6094fd:{c.instructions+=2;NFSU2_TR(0x6094fd);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B609500:{NFSU2_TR(0x609500);
if(r1(R+518)){{goto L609508;}}
}
B609502:L609502:{c.instructions+=1;NFSU2_TR(0x609502);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+28)),r4(U+0));
}
B609508:L609508:{c.instructions+=2;NFSU2_TR(0x609508);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B60950a:{NFSU2_TR(0x60950a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L609526;}}
}
B60950c:L60950c:{c.instructions+=4;NFSU2_TR(0x60950c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B609510:{NFSU2_TR(0x609510);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B609514:{NFSU2_TR(0x609514);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B609517:{NFSU2_TR(0x609517);
if(r1(R+518)){{goto L60951f;}}
}
B609519:L609519:{c.instructions+=1;NFSU2_TR(0x609519);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B60951f:L60951f:{c.instructions+=2;NFSU2_TR(0x60951f);
w4(R+20,u32(u32(r4(R+20))|u32(u32(0xffffffffull))));
}
B609522:{NFSU2_TR(0x609522);
{goto L609526;}
}
B609524:L609524:{c.instructions+=1;NFSU2_TR(0x609524);
__builtin_memmove((R+20),(R+12),4);
}
B609526:L609526:{c.instructions+=6;NFSU2_TR(0x609526);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60952a:{NFSU2_TR(0x60952a);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B60952b:{NFSU2_TR(0x60952b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B60952e:{NFSU2_TR(0x60952e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B609531:{NFSU2_TR(0x609531);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B609535:{NFSU2_TR(0x609535);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x609462u);}goto L609462;}}
}
B60953b:L60953b:{c.instructions+=2;NFSU2_TR(0x60953b);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x1ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B609540:{NFSU2_TR(0x609540);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L609554;}}
}
B609542:L609542:{c.instructions+=4;NFSU2_TR(0x609542);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B609546:{NFSU2_TR(0x609546);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B609549:{NFSU2_TR(0x609549);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B60954c:{NFSU2_TR(0x60954c);
if(r1(R+518)){{goto L609554;}}
}
B60954e:L60954e:{c.instructions+=1;NFSU2_TR(0x60954e);
u8 U[4];
w4(U+0,u32(0x4ull));
s4(u32(r4(R+0)),r4(U+0));
}
B609554:L609554:{c.instructions+=3;NFSU2_TR(0x609554);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B609558:{NFSU2_TR(0x609558);
__builtin_memmove((R+4),(R+12),4);
}
B60955a:{NFSU2_TR(0x60955a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60955full));
TAIL_STATIC(0x5fe670u,5fe);
}
B60955f:L60955f:{c.instructions+=2;NFSU2_TR(0x60955f);
__builtin_memmove((R+4),(R+12),4);
}
B609561:{NFSU2_TR(0x609561);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x609566ull));
TAIL_STATIC(0x5fe8d0u,5fe);
}
B609566:L609566:{c.instructions+=4;NFSU2_TR(0x609566);
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
B609568:{NFSU2_TR(0x609568);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B60956c:{NFSU2_TR(0x60956c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((R+28),(U+0),4);
}
B60956f:{NFSU2_TR(0x60956f);
w4(R+4,u32(0x8ull));
}
B609574:L609574:{c.instructions+=1;NFSU2_TR(0x609574);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L609576;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x609574u);}goto L609574;}
}
B609576:L609576:{c.instructions+=2;NFSU2_TR(0x609576);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8bcull))));
__builtin_memmove((R+4),(U+0),4);
}
B60957c:{NFSU2_TR(0x60957c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x609581ull));
TAIL_STATIC(0x4022c0u,402);
}
B609581:L609581:{c.instructions+=2;NFSU2_TR(0x609581);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa08ull))));
__builtin_memmove((R+4),(U+0),4);
}
B609587:{NFSU2_TR(0x609587);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60958cull));
TAIL_STATIC(0x4022c0u,402);
}
B60958c:L60958c:{c.instructions+=2;NFSU2_TR(0x60958c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb54ull))));
__builtin_memmove((R+4),(U+0),4);
}
B609592:{NFSU2_TR(0x609592);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x609597ull));
TAIL_STATIC(0x4022c0u,402);
}
B609597:L609597:{c.instructions+=2;NFSU2_TR(0x609597);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xca0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B60959d:{NFSU2_TR(0x60959d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6095a2ull));
TAIL_STATIC(0x4022c0u,402);
}
B6095a2:L6095a2:{c.instructions+=2;NFSU2_TR(0x6095a2);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xf38ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6095a8:{NFSU2_TR(0x6095a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6095adull));
TAIL_STATIC(0x4022c0u,402);
}
B6095ad:L6095ad:{c.instructions+=2;NFSU2_TR(0x6095ad);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1084ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6095b3:{NFSU2_TR(0x6095b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6095b8ull));
TAIL_STATIC(0x4022c0u,402);
}
B6095b8:L6095b8:{c.instructions+=2;NFSU2_TR(0x6095b8);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xdecull))));
__builtin_memmove((R+4),(U+0),4);
}
B6095be:{NFSU2_TR(0x6095be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6095c3ull));
TAIL_STATIC(0x4022c0u,402);
}
B6095c3:L6095c3:{c.instructions+=2;NFSU2_TR(0x6095c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x11d0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6095c9:{NFSU2_TR(0x6095c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6095ceull));
TAIL_STATIC(0x4022c0u,402);
}
B6095ce:L6095ce:{c.instructions+=2;NFSU2_TR(0x6095ce);
u8 U[8];
__builtin_memmove((U+0),gp(0x850088),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6095d5:{NFSU2_TR(0x6095d5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60967a;}}
}
B6095db:L6095db:{c.instructions+=5;NFSU2_TR(0x6095db);
__builtin_memmove((R+24),gp(0x890118),4);
}
B6095e1:{NFSU2_TR(0x6095e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6095e4:{NFSU2_TR(0x6095e4);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B6095e6:{NFSU2_TR(0x6095e6);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6095e8:{NFSU2_TR(0x6095e8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L609626;}}
}
B6095ea:L6095ea:{c.instructions+=2;NFSU2_TR(0x6095ea);
w4(R+28,u32(0xbd0ull));
}
B6095ef:{NFSU2_TR(0x6095ef);
}
B6095f0:L6095f0:{c.instructions+=8;NFSU2_TR(0x6095f0);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6095f3:{NFSU2_TR(0x6095f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6095f5:{NFSU2_TR(0x6095f5);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B6095f9:{NFSU2_TR(0x6095f9);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B6095fd:{NFSU2_TR(0x6095fd);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7a547bull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B609603:{NFSU2_TR(0x609603);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x83abc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))+u32(r1(R+8))));
s1(u32(r4(U+0)),r1(U+4));
}
B609609:{NFSU2_TR(0x609609);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B60960d:{NFSU2_TR(0x60960d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60961b;}}
}
B60960f:L60960f:{c.instructions+=2;NFSU2_TR(0x60960f);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B609615:{NFSU2_TR(0x609615);
__builtin_memmove((R+24),gp(0x890118),4);
}
B60961b:L60961b:{c.instructions+=5;NFSU2_TR(0x60961b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60961e:{NFSU2_TR(0x60961e);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B60961f:{NFSU2_TR(0x60961f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B609622:{NFSU2_TR(0x609622);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B609624:{NFSU2_TR(0x609624);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6095f0u);}goto L6095f0;}}
}
B609626:L609626:{c.instructions+=2;NFSU2_TR(0x609626);
w4(R+4,u32(0x83aab4ull));
}
B60962b:{NFSU2_TR(0x60962b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x609630ull));
TAIL_STATIC(0x5027b0u,502);
}
B609630:L609630:{c.instructions+=2;NFSU2_TR(0x609630);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B609632:{NFSU2_TR(0x609632);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L609672;}}
}
B609634:L609634:{c.instructions+=4;NFSU2_TR(0x609634);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B609636:{NFSU2_TR(0x609636);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B609639:{NFSU2_TR(0x609639);
w4(R+8,u32(0x6ull));
}
B60963e:{NFSU2_TR(0x60963e);
__builtin_memmove((R+28),(R+28),4);
}
B609640:L609640:{c.instructions+=3;NFSU2_TR(0x609640);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B609642:{NFSU2_TR(0x609642);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B609644:{NFSU2_TR(0x609644);
if(r1(R+518)){{goto L609661;}}
}
B609646:L609646:{c.instructions+=2;NFSU2_TR(0x609646);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B609649:{NFSU2_TR(0x609649);
if(r1(R+518)){{goto L609661;}}
}
B60964b:L60964b:{c.instructions+=3;NFSU2_TR(0x60964b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B60964d:{NFSU2_TR(0x60964d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B609650:{NFSU2_TR(0x609650);
if(r1(R+518)){{goto L609661;}}
}
B609652:L609652:{c.instructions+=2;NFSU2_TR(0x609652);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B609655:{NFSU2_TR(0x609655);
if(r1(R+518)){{goto L609661;}}
}
B609657:L609657:{c.instructions+=2;NFSU2_TR(0x609657);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B609659:{NFSU2_TR(0x609659);
if(r1(R+518)){{goto L609661;}}
}
B60965b:L60965b:{c.instructions+=2;NFSU2_TR(0x60965b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60965e:{NFSU2_TR(0x60965e);
if(r1(R+518)){{goto L609661;}}
}
B609660:L609660:{c.instructions+=1;NFSU2_TR(0x609660);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B609661:L609661:{c.instructions+=3;NFSU2_TR(0x609661);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B609664:{NFSU2_TR(0x609664);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B609665:{NFSU2_TR(0x609665);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x609640u);}goto L609640;}}
}
B609667:L609667:{c.instructions+=2;NFSU2_TR(0x609667);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B609669:{NFSU2_TR(0x609669);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L609672;}}
}
B60966b:L60966b:{c.instructions+=2;NFSU2_TR(0x60966b);
w4(R+0,u32(0x1ull));
}
B609670:{NFSU2_TR(0x609670);
{goto L609674;}
}
B609672:L609672:{c.instructions+=1;NFSU2_TR(0x609672);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B609674:L609674:{c.instructions+=1;NFSU2_TR(0x609674);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x11aull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B60967a:L60967a:{c.instructions+=4;NFSU2_TR(0x60967a);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B60967e:{NFSU2_TR(0x60967e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B609680:{NFSU2_TR(0x609680);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B609681:{NFSU2_TR(0x609681);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L609697;}}
}
B609683:L609683:{c.instructions+=2;NFSU2_TR(0x609683);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B609686:{NFSU2_TR(0x609686);
if(r1(R+518)){{goto L609697;}}
}
B609688:L609688:{c.instructions+=6;NFSU2_TR(0x609688);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B609689:{NFSU2_TR(0x609689);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60968a:{NFSU2_TR(0x60968a);
u8 U[4];
w4(U+0,u32(0x6ull));
s4(u32(r4(R+12)),r4(U+0));
}
B609690:{NFSU2_TR(0x609690);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B609691:{NFSU2_TR(0x609691);
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
B609694:{NFSU2_TR(0x609694);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B609697:L609697:{c.instructions+=2;NFSU2_TR(0x609697);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B60969a:{NFSU2_TR(0x60969a);
if(r1(R+518)){{goto L6096f4;}}
}
B60969c:L60969c:{c.instructions+=3;NFSU2_TR(0x60969c);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B60969e:{NFSU2_TR(0x60969e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6096a1:{NFSU2_TR(0x6096a1);
w4(R+8,u32(0x6ull));
}
B6096a6:L6096a6:{c.instructions+=3;NFSU2_TR(0x6096a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6096a8:{NFSU2_TR(0x6096a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6096aa:{NFSU2_TR(0x6096aa);
if(r1(R+518)){{goto L6096c7;}}
}
B6096ac:L6096ac:{c.instructions+=2;NFSU2_TR(0x6096ac);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6096af:{NFSU2_TR(0x6096af);
if(r1(R+518)){{goto L6096c7;}}
}
B6096b1:L6096b1:{c.instructions+=3;NFSU2_TR(0x6096b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6096b3:{NFSU2_TR(0x6096b3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6096b6:{NFSU2_TR(0x6096b6);
if(r1(R+518)){{goto L6096c7;}}
}
B6096b8:L6096b8:{c.instructions+=2;NFSU2_TR(0x6096b8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6096bb:{NFSU2_TR(0x6096bb);
if(r1(R+518)){{goto L6096c7;}}
}
B6096bd:L6096bd:{c.instructions+=2;NFSU2_TR(0x6096bd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6096bf:{NFSU2_TR(0x6096bf);
if(r1(R+518)){{goto L6096c7;}}
}
B6096c1:L6096c1:{c.instructions+=2;NFSU2_TR(0x6096c1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6096c4:{NFSU2_TR(0x6096c4);
if(r1(R+518)){{goto L6096c7;}}
}
B6096c6:L6096c6:{c.instructions+=1;NFSU2_TR(0x6096c6);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6096c7:L6096c7:{c.instructions+=3;NFSU2_TR(0x6096c7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6096ca:{NFSU2_TR(0x6096ca);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B6096cb:{NFSU2_TR(0x6096cb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6096a6u);}goto L6096a6;}}
}
B6096cd:L6096cd:{c.instructions+=2;NFSU2_TR(0x6096cd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6096cf:{NFSU2_TR(0x6096cf);
if(r1(R+518)){{goto L6096ed;}}
}
B6096d1:L6096d1:{c.instructions+=3;NFSU2_TR(0x6096d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6096d4:{NFSU2_TR(0x6096d4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6096d6:{NFSU2_TR(0x6096d6);
if(r1(R+518)){{goto L6096ed;}}
}
B6096d8:L6096d8:{c.instructions+=3;NFSU2_TR(0x6096d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6096da:{NFSU2_TR(0x6096da);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6096dd:{NFSU2_TR(0x6096dd);
if(r1(R+518)){{goto L6096ed;}}
}
B6096df:L6096df:{c.instructions+=2;NFSU2_TR(0x6096df);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6096e2:{NFSU2_TR(0x6096e2);
if(r1(R+518)){{goto L6096ed;}}
}
B6096e4:L6096e4:{c.instructions+=2;NFSU2_TR(0x6096e4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6096e6:{NFSU2_TR(0x6096e6);
if(r1(R+518)){{goto L6096ed;}}
}
B6096e8:L6096e8:{c.instructions+=2;NFSU2_TR(0x6096e8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6096eb:{NFSU2_TR(0x6096eb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6096f4;}}
}
B6096ed:L6096ed:{c.instructions+=1;NFSU2_TR(0x6096ed);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x11aull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6096f4:L6096f4:{c.instructions+=3;NFSU2_TR(0x6096f4);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x11aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6096fa:{NFSU2_TR(0x6096fa);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6096fc:{NFSU2_TR(0x6096fc);
if(r1(R+518)){{goto L60972f;}}
}
B6096fe:L6096fe:{c.instructions+=4;NFSU2_TR(0x6096fe);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B609704:{NFSU2_TR(0x609704);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B609705:{NFSU2_TR(0x609705);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B609707:{NFSU2_TR(0x609707);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60970cull));
TAIL_STATIC(0x43c140u,43c);
}
B60970c:L60970c:{c.instructions+=3;NFSU2_TR(0x60970c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B60970f:{NFSU2_TR(0x60970f);
__builtin_memmove((R+4),(R+12),4);
}
B609711:{NFSU2_TR(0x609711);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x609716ull));
TAIL_STATIC(0x5fe380u,5fe);
}
B609716:L609716:{c.instructions+=2;NFSU2_TR(0x609716);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B609719:{NFSU2_TR(0x609719);
if(r1(R+518)){{goto L609721;}}
}
B60971b:L60971b:{c.instructions+=1;NFSU2_TR(0x60971b);
u8 U[4];
w4(U+0,u32(0x3ull));
s4(u32(r4(R+12)),r4(U+0));
}
B609721:L609721:{c.instructions+=1;NFSU2_TR(0x609721);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x609726ull));
TAIL_STATIC(0x58c290u,58c);
}
B609726:L609726:{c.instructions+=5;NFSU2_TR(0x609726);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B609727:{NFSU2_TR(0x609727);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B609728:{NFSU2_TR(0x609728);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B609729:{NFSU2_TR(0x609729);
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
B60972c:{NFSU2_TR(0x60972c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60972f:L60972f:{c.instructions+=3;NFSU2_TR(0x60972f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B609731:{NFSU2_TR(0x609731);
__builtin_memmove((R+4),(R+12),4);
}
B609733:{NFSU2_TR(0x609733);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x609738ull));
TAIL_STATIC(0x5fe2b0u,5fe);
}
B609738:L609738:{c.instructions+=5;NFSU2_TR(0x609738);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B609739:{NFSU2_TR(0x609739);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60973a:{NFSU2_TR(0x60973a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B60973b:{NFSU2_TR(0x60973b);
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
B60973e:{NFSU2_TR(0x60973e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B609750:L609750:{c.instructions+=5;NFSU2_TR(0x609750);
__builtin_memmove((R+0),gp(0x86676c),4);
}
B609755:{NFSU2_TR(0x609755);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B609757:{NFSU2_TR(0x609757);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B609758:{NFSU2_TR(0x609758);
__builtin_memmove((R+20),(R+4),4);
}
B60975a:{NFSU2_TR(0x60975a);
if(r1(R+518)){{goto L60978b;}}
}
B60975c:L60975c:{c.instructions+=4;NFSU2_TR(0x60975c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60975d:{NFSU2_TR(0x60975d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60975e:{NFSU2_TR(0x60975e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x11aull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B609765:{NFSU2_TR(0x609765);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60976aull));
TAIL_STATIC(0x58c320u,58c);
}
B60976a:L60976a:{c.instructions+=2;NFSU2_TR(0x60976a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60976d:{NFSU2_TR(0x60976d);
w4(R+28,u32(0x6ull));
}
B609772:L609772:{c.instructions+=3;NFSU2_TR(0x609772);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B609774:{NFSU2_TR(0x609774);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B609776:{NFSU2_TR(0x609776);
if(r1(R+518)){{goto L609781;}}
}
B609778:L609778:{c.instructions+=3;NFSU2_TR(0x609778);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60977a:{NFSU2_TR(0x60977a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60977c:{NFSU2_TR(0x60977c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x609781ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6090f0u);}goto L6090f0;}
}
B609781:L609781:{c.instructions+=3;NFSU2_TR(0x609781);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B609784:{NFSU2_TR(0x609784);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B609785:{NFSU2_TR(0x609785);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x609772u);}goto L609772;}}
}
B609787:L609787:{c.instructions+=3;NFSU2_TR(0x609787);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B609788:{NFSU2_TR(0x609788);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B609789:{NFSU2_TR(0x609789);
{goto L609790;}
}
B60978b:L60978b:{c.instructions+=1;NFSU2_TR(0x60978b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x609790ull));
TAIL_STATIC(0x5890c0u,589);
}
B609790:L609790:{c.instructions+=4;NFSU2_TR(0x609790);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B609796:{NFSU2_TR(0x609796);
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
B609798:{NFSU2_TR(0x609798);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x11bull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B60979f:{NFSU2_TR(0x60979f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6097c5;}}
}
B6097a1:L6097a1:{c.instructions+=3;NFSU2_TR(0x6097a1);
__builtin_memmove((R+0),gp(0x850078),4);
}
B6097a6:{NFSU2_TR(0x6097a6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6097ab:{NFSU2_TR(0x6097ab);
if(r1(R+518)){{goto L6097b2;}}
}
B6097ad:L6097ad:{c.instructions+=2;NFSU2_TR(0x6097ad);
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
B6097b0:{NFSU2_TR(0x6097b0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6097c5;}}
}
B6097b2:L6097b2:{c.instructions+=2;NFSU2_TR(0x6097b2);
u8 U[14];
__builtin_memmove((U+6),gp(0x850088),4);
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
B6097b9:{NFSU2_TR(0x6097b9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6097c5;}}
}
B6097bb:L6097bb:{c.instructions+=1;NFSU2_TR(0x6097bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xc8ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6097c5:L6097c5:{c.instructions+=2;NFSU2_TR(0x6097c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6097c6:{NFSU2_TR(0x6097c6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6097d0:L6097d0:{c.instructions+=9;NFSU2_TR(0x6097d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B6097d3:{NFSU2_TR(0x6097d3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6097d4:{NFSU2_TR(0x6097d4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6097d5:{NFSU2_TR(0x6097d5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6097d6:{NFSU2_TR(0x6097d6);
__builtin_memmove((R+12),(R+4),4);
}
B6097d8:{NFSU2_TR(0x6097d8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6097d9:{NFSU2_TR(0x6097d9);
w4(R+4,u32(0x827b88ull));
}
B6097de:{NFSU2_TR(0x6097de);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6097e2:{NFSU2_TR(0x6097e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6097e7ull));
TAIL_STATIC(0x43ab20u,43a);
}
B6097e7:L6097e7:{c.instructions+=4;NFSU2_TR(0x6097e7);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6097e9:{NFSU2_TR(0x6097e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6097ef:{NFSU2_TR(0x6097ef);
u8 U[8];
__builtin_memmove((U+0),gp(0x850088),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6097f6:{NFSU2_TR(0x6097f6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L609853;}}
}
B6097f8:L6097f8:{c.instructions+=2;NFSU2_TR(0x6097f8);
__builtin_memmove((R+4),gp(0x890118),4);
}
B6097fe:{NFSU2_TR(0x6097fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x609803ull));
TAIL_STATIC(0x5f8490u,5f8);
}
B609803:L609803:{c.instructions+=2;NFSU2_TR(0x609803);
__builtin_memmove((R+4),gp(0x890118),4);
}
B609809:{NFSU2_TR(0x609809);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60980eull));
TAIL_STATIC(0x607180u,607);
}
B60980e:L60980e:{c.instructions+=10;NFSU2_TR(0x60980e);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x118ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B609815:{NFSU2_TR(0x609815);
__builtin_memmove((R+0),gp(0x890118),4);
}
B60981a:{NFSU2_TR(0x60981a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xbd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B609820:{NFSU2_TR(0x609820);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B609822:{NFSU2_TR(0x609822);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B609825:{NFSU2_TR(0x609825);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B60982b:{NFSU2_TR(0x60982b);
__builtin_memmove((R+4),gp(0x86518c),4);
}
B609831:{NFSU2_TR(0x609831);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xdcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B609837:{NFSU2_TR(0x609837);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xf8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B60983d:{NFSU2_TR(0x60983d);
w4(R+4,u32(0x6ull));
}
B609842:L609842:{c.instructions+=5;NFSU2_TR(0x609842);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B609845:{NFSU2_TR(0x609845);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B609847:{NFSU2_TR(0x609847);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B60984a:{NFSU2_TR(0x60984a);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B60984b:{NFSU2_TR(0x60984b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x609842u);}goto L609842;}}
}
B60984d:L60984d:{c.instructions+=1;NFSU2_TR(0x60984d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x110ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B609853:L609853:{c.instructions+=4;NFSU2_TR(0x609853);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x8ull))));
}
B609856:{NFSU2_TR(0x609856);
__builtin_memmove((R+28),(R+12),4);
}
B609858:{NFSU2_TR(0x609858);
w4(R+20,u32(0x6ull));
}
B60985d:{NFSU2_TR(0x60985d);
__builtin_memmove((R+4),(R+4),4);
}
B609860:L609860:{c.instructions+=3;NFSU2_TR(0x609860);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B609862:{NFSU2_TR(0x609862);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B609864:{NFSU2_TR(0x609864);
if(r1(R+518)){{goto L6098cc;}}
}
B609866:L609866:{c.instructions+=3;NFSU2_TR(0x609866);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B609868:{NFSU2_TR(0x609868);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60986b:{NFSU2_TR(0x60986b);
if(r1(R+518)){{goto L6098cc;}}
}
B60986d:L60986d:{c.instructions+=2;NFSU2_TR(0x60986d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B609870:{NFSU2_TR(0x609870);
if(r1(R+518)){{goto L6098cc;}}
}
B609872:L609872:{c.instructions+=2;NFSU2_TR(0x609872);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B609874:{NFSU2_TR(0x609874);
if(r1(R+518)){{goto L6098cc;}}
}
B609876:L609876:{c.instructions+=2;NFSU2_TR(0x609876);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B609879:{NFSU2_TR(0x609879);
if(r1(R+518)){{goto L6098cc;}}
}
B60987b:L60987b:{c.instructions+=2;NFSU2_TR(0x60987b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60987e:{NFSU2_TR(0x60987e);
if(r1(R+518)){{goto L6098cc;}}
}
B609880:L609880:{c.instructions+=5;NFSU2_TR(0x609880);
{u32 ea_=u32(u32(8017696u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B609886:{NFSU2_TR(0x609886);
u8 U[4];
w4(U+0,u32(0x2ull));
s4(u32(r4(R+24)),r4(U+0));
}
B60988c:{NFSU2_TR(0x60988c);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B609892:{NFSU2_TR(0x609892);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B609898:{NFSU2_TR(0x609898);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60989dull));
TAIL_STATIC(0x75bed4u,75b);
}
B60989d:L60989d:{c.instructions+=6;NFSU2_TR(0x60989d);
{u32 ea_=u32(u32(8017692u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6098a3:{NFSU2_TR(0x6098a3);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B6098a5:{NFSU2_TR(0x6098a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x278ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6098ab:{NFSU2_TR(0x6098ab);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6098b1:{NFSU2_TR(0x6098b1);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6098b7:{NFSU2_TR(0x6098b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6098bcull));
TAIL_STATIC(0x75bed4u,75b);
}
B6098bc:L6098bc:{c.instructions+=2;NFSU2_TR(0x6098bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x274ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6098c2:{NFSU2_TR(0x6098c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x280ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6098cc:L6098cc:{c.instructions+=3;NFSU2_TR(0x6098cc);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B6098cf:{NFSU2_TR(0x6098cf);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
}
B6098d0:{NFSU2_TR(0x6098d0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x609860u);}goto L609860;}}
}
B6098d2:L6098d2:{c.instructions+=2;NFSU2_TR(0x6098d2);
__builtin_memmove((R+20),gp(0x890080),4);
}
B6098d8:{NFSU2_TR(0x6098d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6098e0:L6098e0:{c.instructions+=3;NFSU2_TR(0x6098e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6098e2:{NFSU2_TR(0x6098e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6098e4:{NFSU2_TR(0x6098e4);
if(r1(R+518)){{goto L609959;}}
}
B6098e6:L6098e6:{c.instructions+=4;NFSU2_TR(0x6098e6);
__builtin_memmove((R+0),gp(0x890118),4);
}
B6098eb:{NFSU2_TR(0x6098eb);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6098ed:{NFSU2_TR(0x6098ed);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6098ef:{NFSU2_TR(0x6098ef);
if(r1(R+518)){{goto L609916;}}
}
B6098f1:L6098f1:{c.instructions+=2;NFSU2_TR(0x6098f1);
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
B6098f3:{NFSU2_TR(0x6098f3);
if(r1(R+518)){{goto L609916;}}
}
B6098f5:L6098f5:{c.instructions+=3;NFSU2_TR(0x6098f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6098f8:{NFSU2_TR(0x6098f8);
__builtin_memmove((R+4),(R+20),4);
}
B6098fa:{NFSU2_TR(0x6098fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6098ffull));
TAIL_STATIC(0x502fd0u,502);
}
B6098ff:L6098ff:{c.instructions+=2;NFSU2_TR(0x6098ff);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B609901:{NFSU2_TR(0x609901);
if(r1(R+518)){{goto L609914;}}
}
B609903:L609903:{c.instructions+=1;NFSU2_TR(0x609903);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w2(R+4,u16(s16(s8(r1(U+4)))));
}
B609908:L609908:{c.instructions+=2;NFSU2_TR(0x609908);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+4))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B60990c:{NFSU2_TR(0x60990c);
if(r1(R+518)){{goto L609916;}}
}
B60990e:L60990e:{c.instructions+=3;NFSU2_TR(0x60990e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B609910:{NFSU2_TR(0x609910);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B609912:{NFSU2_TR(0x609912);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x609908u);}goto L609908;}}
}
B609914:L609914:{c.instructions+=1;NFSU2_TR(0x609914);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B609916:L609916:{c.instructions+=3;NFSU2_TR(0x609916);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B609918:{NFSU2_TR(0x609918);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60991b:{NFSU2_TR(0x60991b);
if(r1(R+518)){{goto L609959;}}
}
B60991d:L60991d:{c.instructions+=2;NFSU2_TR(0x60991d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B609920:{NFSU2_TR(0x609920);
if(r1(R+518)){{goto L609959;}}
}
B609922:L609922:{c.instructions+=2;NFSU2_TR(0x609922);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B609924:{NFSU2_TR(0x609924);
if(r1(R+518)){{goto L609959;}}
}
B609926:L609926:{c.instructions+=2;NFSU2_TR(0x609926);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B609929:{NFSU2_TR(0x609929);
if(r1(R+518)){{goto L609959;}}
}
B60992b:L60992b:{c.instructions+=3;NFSU2_TR(0x60992b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60992e:{NFSU2_TR(0x60992e);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B609932:{NFSU2_TR(0x609932);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60993e;}}
}
B609934:L609934:{c.instructions+=3;NFSU2_TR(0x609934);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B60993a:{NFSU2_TR(0x60993a);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60993c:{NFSU2_TR(0x60993c);
if(r1(R+518)){{goto L609945;}}
}
B60993e:L60993e:{c.instructions+=2;NFSU2_TR(0x60993e);
__builtin_memmove((R+4),(R+24),4);
}
B609940:{NFSU2_TR(0x609940);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x609945ull));
TAIL_STATIC(0x5f6d50u,5f6);
}
B609945:L609945:{c.instructions+=4;NFSU2_TR(0x609945);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B609948:{NFSU2_TR(0x609948);
__builtin_memmove((R+0),gp(0x85009a),1);
}
B60994d:{NFSU2_TR(0x60994d);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x190ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B609953:{NFSU2_TR(0x609953);
__builtin_memmove((R+20),gp(0x890080),4);
}
B609959:L609959:{c.instructions+=5;NFSU2_TR(0x609959);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60995d:{NFSU2_TR(0x60995d);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B609960:{NFSU2_TR(0x609960);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B609961:{NFSU2_TR(0x609961);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B609965:{NFSU2_TR(0x609965);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6098e0u);}goto L6098e0;}}
}
B60996b:L60996b:{c.instructions+=3;NFSU2_TR(0x60996b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60996f:{NFSU2_TR(0x60996f);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B609972:{NFSU2_TR(0x609972);
if(r1(R+518)){{goto L609980;}}
}
B609974:L609974:{c.instructions+=2;NFSU2_TR(0x609974);
u8 U[4];
w4(U+0,u32(0x5ull));
s4(u32(r4(R+0)),r4(U+0));
}
B60997a:{NFSU2_TR(0x60997a);
__builtin_memmove((R+20),gp(0x890080),4);
}
B609980:L609980:{c.instructions+=6;NFSU2_TR(0x609980);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B609981:{NFSU2_TR(0x609981);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B609982:{NFSU2_TR(0x609982);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B609984:{NFSU2_TR(0x609984);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B609985:{NFSU2_TR(0x609985);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B609986:{NFSU2_TR(0x609986);
if(r1(R+518)){{goto L6099a8;}}
}
B609988:L609988:{c.instructions+=3;NFSU2_TR(0x609988);
__builtin_memmove((R+0),gp(0x890118),4);
}
B60998d:{NFSU2_TR(0x60998d);
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
B60998f:{NFSU2_TR(0x60998f);
if(r1(R+518)){{goto L6099a8;}}
}
B609991:L609991:{c.instructions+=2;NFSU2_TR(0x609991);
w4(R+4,u32(0x827b88ull));
}
B609996:{NFSU2_TR(0x609996);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60999bull));
TAIL_STATIC(0x4022c0u,402);
}
B60999b:L60999b:{c.instructions+=3;NFSU2_TR(0x60999b);
__builtin_memmove((R+4),gp(0x890118),4);
}
B6099a1:{NFSU2_TR(0x6099a1);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6099a3:{NFSU2_TR(0x6099a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6099a8ull));
TAIL_STATIC(0x5fc900u,5fc);
}
B6099a8:L6099a8:{c.instructions+=5;NFSU2_TR(0x6099a8);
__builtin_memmove((R+4),gp(0x8a1ccc),4);
}
B6099ae:{NFSU2_TR(0x6099ae);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6099b0:{NFSU2_TR(0x6099b0);
u8 U[4];
w4(U+0,u32(0x189e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6099b5:{NFSU2_TR(0x6099b5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6099b6:{NFSU2_TR(0x6099b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6099bbull));
TAIL_STATIC(0x43bcd0u,43b);
}
B6099bb:L6099bb:{c.instructions+=2;NFSU2_TR(0x6099bb);
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
B6099be:{NFSU2_TR(0x6099be);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6099c0:L6099c0:{c.instructions+=7;NFSU2_TR(0x6099c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6099c4:{NFSU2_TR(0x6099c4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6099c5:{NFSU2_TR(0x6099c5);
__builtin_memmove((R+24),(R+4),4);
}
B6099c7:{NFSU2_TR(0x6099c7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6099c8:{NFSU2_TR(0x6099c8);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B6099cc:{NFSU2_TR(0x6099cc);
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
B6099ce:{NFSU2_TR(0x6099ce);
if(r1(R+518)){{goto L609b76;}}
}
B6099d4:L6099d4:{c.instructions+=6;NFSU2_TR(0x6099d4);
{u32 ea_=u32(u32(8802700u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6099da:{NFSU2_TR(0x6099da);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6099db:{NFSU2_TR(0x6099db);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6099e1:{NFSU2_TR(0x6099e1);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6099e7:{NFSU2_TR(0x6099e7);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6099ed:{NFSU2_TR(0x6099ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6099f2ull));
TAIL_STATIC(0x75bed4u,75b);
}
B6099f2:L6099f2:{c.instructions+=3;NFSU2_TR(0x6099f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x27cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6099f8:{NFSU2_TR(0x6099f8);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6099fb:{NFSU2_TR(0x6099fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L609a62;}}
}
B6099fd:L6099fd:{c.instructions+=2;NFSU2_TR(0x6099fd);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B609a00:{NFSU2_TR(0x609a00);
if(r1(R+518)){{goto L609a08;}}
}
B609a02:L609a02:{c.instructions+=1;NFSU2_TR(0x609a02);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+28)),r4(U+0));
}
B609a08:L609a08:{c.instructions+=4;NFSU2_TR(0x609a08);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B609a0c:{NFSU2_TR(0x609a0c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B609a0d:{NFSU2_TR(0x609a0d);
w4(R+4,u32(0x89e7a0ull));
}
B609a12:{NFSU2_TR(0x609a12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x609a17ull));
TAIL_STATIC(0x5fc210u,5fc);
}
B609a17:L609a17:{c.instructions+=3;NFSU2_TR(0x609a17);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B609a1a:{NFSU2_TR(0x609a1a);
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
B609a1c:{NFSU2_TR(0x609a1c);
if(r1(R+518)){{goto L609b75;}}
}
B609a22:L609a22:{c.instructions+=3;NFSU2_TR(0x609a22);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B609a25:{NFSU2_TR(0x609a25);
w4(R+12,u32(0x6ull));
}
B609a2a:{NFSU2_TR(0x609a2a);
__builtin_memmove((R+12),(R+12),4);
}
B609a30:L609a30:{c.instructions+=3;NFSU2_TR(0x609a30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B609a32:{NFSU2_TR(0x609a32);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B609a34:{NFSU2_TR(0x609a34);
if(r1(R+518)){{goto L609a56;}}
}
B609a36:L609a36:{c.instructions+=2;NFSU2_TR(0x609a36);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B609a38:{NFSU2_TR(0x609a38);
if(r1(R+518)){{goto L609a56;}}
}
B609a3a:L609a3a:{c.instructions+=2;NFSU2_TR(0x609a3a);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B609a3d:{NFSU2_TR(0x609a3d);
if(r1(R+518)){{goto L609a45;}}
}
B609a3f:L609a3f:{c.instructions+=1;NFSU2_TR(0x609a3f);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B609a45:L609a45:{c.instructions+=5;NFSU2_TR(0x609a45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B609a47:{NFSU2_TR(0x609a47);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B609a4b:{NFSU2_TR(0x609a4b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B609a4c:{NFSU2_TR(0x609a4c);
w4(R+4,u32(0x89e7a0ull));
}
B609a51:{NFSU2_TR(0x609a51);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x609a56ull));
TAIL_STATIC(0x5fc210u,5fc);
}
B609a56:L609a56:{c.instructions+=3;NFSU2_TR(0x609a56);
w1(R+512,carry<u32>(r4(R+24),u32(0x4ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B609a59:{NFSU2_TR(0x609a59);
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
B609a5a:{NFSU2_TR(0x609a5a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x609a30u);}goto L609a30;}}
}
B609a5c:L609a5c:{c.instructions+=4;NFSU2_TR(0x609a5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B609a5d:{NFSU2_TR(0x609a5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B609a5e:{NFSU2_TR(0x609a5e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B609a5f:{NFSU2_TR(0x609a5f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B609a62:L609a62:{c.instructions+=3;NFSU2_TR(0x609a62);
__builtin_memmove((R+0),gp(0x890118),4);
}
B609a67:{NFSU2_TR(0x609a67);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B609a69:{NFSU2_TR(0x609a69);
if(r1(R+518)){{goto L609acf;}}
}
B609a6b:L609a6b:{c.instructions+=2;NFSU2_TR(0x609a6b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B609a6c:{NFSU2_TR(0x609a6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x609a71ull));
TAIL_STATIC(0x4ec4a0u,4ec);
}
B609a71:L609a71:{c.instructions+=6;NFSU2_TR(0x609a71);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B609a73:{NFSU2_TR(0x609a73);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B609a76:{NFSU2_TR(0x609a76);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B609a79:{NFSU2_TR(0x609a79);
__builtin_memmove((R+4),(R+28),4);
}
B609a7b:{NFSU2_TR(0x609a7b);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B609a7d:{NFSU2_TR(0x609a7d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L609a83;}}
}
B609a7f:L609a7f:{c.instructions+=2;NFSU2_TR(0x609a7f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B609a81:{NFSU2_TR(0x609a81);
{goto L609a93;}
}
B609a83:L609a83:{c.instructions+=6;NFSU2_TR(0x609a83);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B609a87:{NFSU2_TR(0x609a87);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B609a89:{NFSU2_TR(0x609a89);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B609a8b:{NFSU2_TR(0x609a8b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B609a8e:{NFSU2_TR(0x609a8e);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B609a92:{NFSU2_TR(0x609a92);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B609a93:L609a93:{c.instructions+=1;NFSU2_TR(0x609a93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x609a98ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6090f0u);}goto L6090f0;}
}
B609a98:L609a98:{c.instructions+=3;NFSU2_TR(0x609a98);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B609a9b:{NFSU2_TR(0x609a9b);
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
B609a9d:{NFSU2_TR(0x609a9d);
if(r1(R+518)){{goto L609b75;}}
}
B609aa3:L609aa3:{c.instructions+=3;NFSU2_TR(0x609aa3);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B609aa6:{NFSU2_TR(0x609aa6);
w4(R+12,u32(0x6ull));
}
B609aab:{NFSU2_TR(0x609aab);
{goto L609ab0;}
}
B609ab0:L609ab0:{c.instructions+=3;NFSU2_TR(0x609ab0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B609ab2:{NFSU2_TR(0x609ab2);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B609ab4:{NFSU2_TR(0x609ab4);
if(r1(R+518)){{goto L609ac3;}}
}
B609ab6:L609ab6:{c.instructions+=2;NFSU2_TR(0x609ab6);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B609ab8:{NFSU2_TR(0x609ab8);
if(r1(R+518)){{goto L609ac3;}}
}
B609aba:L609aba:{c.instructions+=3;NFSU2_TR(0x609aba);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B609abc:{NFSU2_TR(0x609abc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B609abe:{NFSU2_TR(0x609abe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x609ac3ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6090f0u);}goto L6090f0;}
}
B609ac3:L609ac3:{c.instructions+=3;NFSU2_TR(0x609ac3);
w1(R+512,carry<u32>(r4(R+24),u32(0x4ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B609ac6:{NFSU2_TR(0x609ac6);
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
B609ac7:{NFSU2_TR(0x609ac7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x609ab0u);}goto L609ab0;}}
}
B609ac9:L609ac9:{c.instructions+=4;NFSU2_TR(0x609ac9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B609aca:{NFSU2_TR(0x609aca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B609acb:{NFSU2_TR(0x609acb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B609acc:{NFSU2_TR(0x609acc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B609acf:L609acf:{c.instructions+=8;NFSU2_TR(0x609acf);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B609ad3:{NFSU2_TR(0x609ad3);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B609ad5:{NFSU2_TR(0x609ad5);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B609ad7:{NFSU2_TR(0x609ad7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B609ada:{NFSU2_TR(0x609ada);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B609ade:{NFSU2_TR(0x609ade);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B609adf:{NFSU2_TR(0x609adf);
__builtin_memmove((R+4),(R+28),4);
}
B609ae1:{NFSU2_TR(0x609ae1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x609ae6ull));
TAIL_STATIC(0x5efa30u,5ef);
}
B609ae6:L609ae6:{c.instructions+=3;NFSU2_TR(0x609ae6);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B609ae9:{NFSU2_TR(0x609ae9);
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
B609aeb:{NFSU2_TR(0x609aeb);
if(r1(R+518)){{goto L609b75;}}
}
B609af1:L609af1:{c.instructions+=3;NFSU2_TR(0x609af1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B609af4:{NFSU2_TR(0x609af4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B609af6:{NFSU2_TR(0x609af6);
if(r1(R+518)){{goto L609b07;}}
}
B609af8:L609af8:{c.instructions+=2;NFSU2_TR(0x609af8);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B609afa:{NFSU2_TR(0x609afa);
if(r1(R+518)){{goto L609b07;}}
}
B609afc:L609afc:{c.instructions+=2;NFSU2_TR(0x609afc);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B609aff:{NFSU2_TR(0x609aff);
if(r1(R+518)){{goto L609b07;}}
}
B609b01:L609b01:{c.instructions+=1;NFSU2_TR(0x609b01);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B609b07:L609b07:{c.instructions+=3;NFSU2_TR(0x609b07);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B609b0a:{NFSU2_TR(0x609b0a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B609b0c:{NFSU2_TR(0x609b0c);
if(r1(R+518)){{goto L609b1d;}}
}
B609b0e:L609b0e:{c.instructions+=2;NFSU2_TR(0x609b0e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B609b10:{NFSU2_TR(0x609b10);
if(r1(R+518)){{goto L609b1d;}}
}
B609b12:L609b12:{c.instructions+=2;NFSU2_TR(0x609b12);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B609b15:{NFSU2_TR(0x609b15);
if(r1(R+518)){{goto L609b1d;}}
}
B609b17:L609b17:{c.instructions+=1;NFSU2_TR(0x609b17);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B609b1d:L609b1d:{c.instructions+=3;NFSU2_TR(0x609b1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B609b20:{NFSU2_TR(0x609b20);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B609b22:{NFSU2_TR(0x609b22);
if(r1(R+518)){{goto L609b33;}}
}
B609b24:L609b24:{c.instructions+=2;NFSU2_TR(0x609b24);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B609b26:{NFSU2_TR(0x609b26);
if(r1(R+518)){{goto L609b33;}}
}
B609b28:L609b28:{c.instructions+=2;NFSU2_TR(0x609b28);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B609b2b:{NFSU2_TR(0x609b2b);
if(r1(R+518)){{goto L609b33;}}
}
B609b2d:L609b2d:{c.instructions+=1;NFSU2_TR(0x609b2d);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B609b33:L609b33:{c.instructions+=3;NFSU2_TR(0x609b33);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B609b36:{NFSU2_TR(0x609b36);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B609b38:{NFSU2_TR(0x609b38);
if(r1(R+518)){{goto L609b49;}}
}
B609b3a:L609b3a:{c.instructions+=2;NFSU2_TR(0x609b3a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B609b3c:{NFSU2_TR(0x609b3c);
if(r1(R+518)){{goto L609b49;}}
}
B609b3e:L609b3e:{c.instructions+=2;NFSU2_TR(0x609b3e);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B609b41:{NFSU2_TR(0x609b41);
if(r1(R+518)){{goto L609b49;}}
}
B609b43:L609b43:{c.instructions+=1;NFSU2_TR(0x609b43);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B609b49:L609b49:{c.instructions+=3;NFSU2_TR(0x609b49);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B609b4c:{NFSU2_TR(0x609b4c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B609b4e:{NFSU2_TR(0x609b4e);
if(r1(R+518)){{goto L609b5f;}}
}
B609b50:L609b50:{c.instructions+=2;NFSU2_TR(0x609b50);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B609b52:{NFSU2_TR(0x609b52);
if(r1(R+518)){{goto L609b5f;}}
}
B609b54:L609b54:{c.instructions+=2;NFSU2_TR(0x609b54);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B609b57:{NFSU2_TR(0x609b57);
if(r1(R+518)){{goto L609b5f;}}
}
B609b59:L609b59:{c.instructions+=1;NFSU2_TR(0x609b59);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B609b5f:L609b5f:{c.instructions+=3;NFSU2_TR(0x609b5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B609b62:{NFSU2_TR(0x609b62);
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
B609b64:{NFSU2_TR(0x609b64);
if(r1(R+518)){{goto L609b75;}}
}
B609b66:L609b66:{c.instructions+=2;NFSU2_TR(0x609b66);
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
B609b68:{NFSU2_TR(0x609b68);
if(r1(R+518)){{goto L609b75;}}
}
B609b6a:L609b6a:{c.instructions+=2;NFSU2_TR(0x609b6a);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x0ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B609b6d:{NFSU2_TR(0x609b6d);
if(r1(R+518)){{goto L609b75;}}
}
B609b6f:L609b6f:{c.instructions+=1;NFSU2_TR(0x609b6f);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B609b75:L609b75:{c.instructions+=1;NFSU2_TR(0x609b75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B609b76:L609b76:{c.instructions+=3;NFSU2_TR(0x609b76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B609b77:{NFSU2_TR(0x609b77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B609b78:{NFSU2_TR(0x609b78);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B609b80:L609b80:{c.instructions+=11;NFSU2_TR(0x609b80);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B609b81:{NFSU2_TR(0x609b81);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B609b82:{NFSU2_TR(0x609b82);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B609b83:{NFSU2_TR(0x609b83);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B609b87:{NFSU2_TR(0x609b87);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B609b89:{NFSU2_TR(0x609b89);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B609b8d:{NFSU2_TR(0x609b8d);
__builtin_memmove((R+24),(R+4),4);
}
B609b8f:{NFSU2_TR(0x609b8f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B609b90:{NFSU2_TR(0x609b90);
__builtin_memmove((R+4),(R+28),4);
}
B609b92:{NFSU2_TR(0x609b92);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B609b9a:{NFSU2_TR(0x609b9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x609b9full));
TAIL_STATIC(0x581d90u,581);
}
B609b9f:L609b9f:{c.instructions+=4;NFSU2_TR(0x609b9f);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B609ba4:{NFSU2_TR(0x609ba4);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B609ba8:{NFSU2_TR(0x609ba8);
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
B609baa:{NFSU2_TR(0x609baa);
if(r1(R+518)){{goto L609bb4;}}
}
B609bac:L609bac:{c.instructions+=3;NFSU2_TR(0x609bac);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B609bad:{NFSU2_TR(0x609bad);
__builtin_memmove((R+0),(R+4),4);
}
B609baf:{NFSU2_TR(0x609baf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x609bb4ull));
TAIL_STATIC(0x608dc0u,608);
}
B609bb4:L609bb4:{c.instructions+=4;NFSU2_TR(0x609bb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B609bb5:{NFSU2_TR(0x609bb5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B609bb6:{NFSU2_TR(0x609bb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B609bb7:{NFSU2_TR(0x609bb7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B609bc0:L609bc0:{c.instructions+=11;NFSU2_TR(0x609bc0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B609bc2:{NFSU2_TR(0x609bc2);
u8 U[4];
w4(U+0,u32(0x77a09bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B609bc7:{NFSU2_TR(0x609bc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B609bcd:{NFSU2_TR(0x609bcd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B609bce:{NFSU2_TR(0x609bce);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B609bd5:{NFSU2_TR(0x609bd5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B609bd6:{NFSU2_TR(0x609bd6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B609bd7:{NFSU2_TR(0x609bd7);
__builtin_memmove((R+24),(R+4),4);
}
B609bd9:{NFSU2_TR(0x609bd9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B609bdd:{NFSU2_TR(0x609bdd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B609be5:{NFSU2_TR(0x609be5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x609beaull));
TAIL_STATIC(0x605320u,605);
}
B609bea:L609bea:{c.instructions+=3;NFSU2_TR(0x609bea);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B609bed:{NFSU2_TR(0x609bed);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B609bf5:{NFSU2_TR(0x609bf5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x609bfaull));
TAIL_STATIC(0x4358e0u,435);
}
B609bfa:L609bfa:{c.instructions+=5;NFSU2_TR(0x609bfa);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B609bfe:{NFSU2_TR(0x609bfe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B609bff:{NFSU2_TR(0x609bff);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B609c06:{NFSU2_TR(0x609c06);
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
B609c09:{NFSU2_TR(0x609c09);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B609c10:L609c10:{c.instructions+=3;NFSU2_TR(0x609c10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B609c11:{NFSU2_TR(0x609c11);
__builtin_memmove((R+24),(R+4),4);
}
B609c13:{NFSU2_TR(0x609c13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x609c18ull));
TAIL_STATIC(0x605390u,605);
}
B609c18:L609c18:{c.instructions+=2;NFSU2_TR(0x609c18);
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
B609c1d:{NFSU2_TR(0x609c1d);
if(r1(R+518)){{goto L609c28;}}
}
B609c1f:L609c1f:{c.instructions+=2;NFSU2_TR(0x609c1f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B609c20:{NFSU2_TR(0x609c20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x609c25ull));
TAIL_STATIC(0x575630u,575);
}
B609c25:L609c25:{c.instructions+=1;NFSU2_TR(0x609c25);
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
B609c28:L609c28:{c.instructions+=3;NFSU2_TR(0x609c28);
__builtin_memmove((R+0),(R+24),4);
}
B609c2a:{NFSU2_TR(0x609c2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B609c2b:{NFSU2_TR(0x609c2b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B609c30:L609c30:{c.instructions+=3;NFSU2_TR(0x609c30);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B609c31:{NFSU2_TR(0x609c31);
__builtin_memmove((R+24),(R+4),4);
}
B609c33:{NFSU2_TR(0x609c33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x609c38ull));
TAIL_STATIC(0x605400u,605);
}
B609c38:L609c38:{c.instructions+=2;NFSU2_TR(0x609c38);
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
B609c3d:{NFSU2_TR(0x609c3d);
if(r1(R+518)){{goto L609c48;}}
}
B609c3f:L609c3f:{c.instructions+=2;NFSU2_TR(0x609c3f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B609c40:{NFSU2_TR(0x609c40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x609c45ull));
TAIL_STATIC(0x575630u,575);
}
B609c45:L609c45:{c.instructions+=1;NFSU2_TR(0x609c45);
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
B609c48:L609c48:{c.instructions+=3;NFSU2_TR(0x609c48);
__builtin_memmove((R+0),(R+24),4);
}
B609c4a:{NFSU2_TR(0x609c4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B609c4b:{NFSU2_TR(0x609c4b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B609c50:L609c50:{c.instructions+=6;NFSU2_TR(0x609c50);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B609c51:{NFSU2_TR(0x609c51);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B609c52:{NFSU2_TR(0x609c52);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B609c53:{NFSU2_TR(0x609c53);
__builtin_memmove((R+28),(R+4),4);
}
B609c55:{NFSU2_TR(0x609c55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B609c57:{NFSU2_TR(0x609c57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x609c5cull));
TAIL_STATIC(0x502fd0u,502);
}
B609c5c:L609c5c:{c.instructions+=3;NFSU2_TR(0x609c5c);
__builtin_memmove((R+12),(R+0),4);
}
B609c5e:{NFSU2_TR(0x609c5e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B609c60:{NFSU2_TR(0x609c60);
if(r1(R+518)){{goto L609c6f;}}
}
B609c62:L609c62:{c.instructions+=2;NFSU2_TR(0x609c62);
__builtin_memmove((R+4),(R+24),4);
}
B609c64:{NFSU2_TR(0x609c64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x609c69ull));
TAIL_STATIC(0x605320u,605);
}
B609c69:L609c69:{c.instructions+=3;NFSU2_TR(0x609c69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B609c6b:{NFSU2_TR(0x609c6b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B609c6d:{NFSU2_TR(0x609c6d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x609c62u);}goto L609c62;}}
}
B609c6f:L609c6f:{c.instructions+=3;NFSU2_TR(0x609c6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B609c71:{NFSU2_TR(0x609c71);
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
B609c73:{NFSU2_TR(0x609c73);
if(r1(R+518)){{goto L609c95;}}
}
B609c75:L609c75:{c.instructions+=6;NFSU2_TR(0x609c75);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B609c78:{NFSU2_TR(0x609c78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B609c7a:{NFSU2_TR(0x609c7a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B609c7c:{NFSU2_TR(0x609c7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B609c7f:{NFSU2_TR(0x609c7f);
__builtin_memmove((R+4),(R+24),4);
}
B609c81:{NFSU2_TR(0x609c81);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x609c86ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x609bc0u);}goto L609bc0;}
}
B609c86:L609c86:{c.instructions+=2;NFSU2_TR(0x609c86);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B609c87:{NFSU2_TR(0x609c87);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x609c8cull));
TAIL_STATIC(0x575630u,575);
}
B609c8c:L609c8c:{c.instructions+=4;NFSU2_TR(0x609c8c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B609c8e:{NFSU2_TR(0x609c8e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B609c91:{NFSU2_TR(0x609c91);
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
B609c93:{NFSU2_TR(0x609c93);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x609c75u);}goto L609c75;}}
}
B609c95:L609c95:{c.instructions+=4;NFSU2_TR(0x609c95);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B609c96:{NFSU2_TR(0x609c96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B609c97:{NFSU2_TR(0x609c97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B609c98:{NFSU2_TR(0x609c98);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B609ca0:L609ca0:{c.instructions+=6;NFSU2_TR(0x609ca0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B609ca1:{NFSU2_TR(0x609ca1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B609ca2:{NFSU2_TR(0x609ca2);
__builtin_memmove((R+28),(R+4),4);
}
B609ca4:{NFSU2_TR(0x609ca4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B609ca6:{NFSU2_TR(0x609ca6);
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
B609ca8:{NFSU2_TR(0x609ca8);
if(r1(R+518)){{goto L609cd0;}}
}
B609caa:L609caa:{c.instructions+=1;NFSU2_TR(0x609caa);
__builtin_memmove((R+12),(R+12),4);
}
B609cb0:L609cb0:{c.instructions+=6;NFSU2_TR(0x609cb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B609cb3:{NFSU2_TR(0x609cb3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B609cb5:{NFSU2_TR(0x609cb5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B609cb7:{NFSU2_TR(0x609cb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B609cba:{NFSU2_TR(0x609cba);
__builtin_memmove((R+4),(R+24),4);
}
B609cbc:{NFSU2_TR(0x609cbc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x609cc1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x609bc0u);}goto L609bc0;}
}
B609cc1:L609cc1:{c.instructions+=2;NFSU2_TR(0x609cc1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B609cc2:{NFSU2_TR(0x609cc2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x609cc7ull));
TAIL_STATIC(0x575630u,575);
}
B609cc7:L609cc7:{c.instructions+=4;NFSU2_TR(0x609cc7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B609cc9:{NFSU2_TR(0x609cc9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B609ccc:{NFSU2_TR(0x609ccc);
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
B609cce:{NFSU2_TR(0x609cce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x609cb0u);}goto L609cb0;}}
}
B609cd0:L609cd0:{c.instructions+=3;NFSU2_TR(0x609cd0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B609cd1:{NFSU2_TR(0x609cd1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B609cd2:{NFSU2_TR(0x609cd2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B609ce0:L609ce0:{c.instructions+=8;NFSU2_TR(0x609ce0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B609ce1:{NFSU2_TR(0x609ce1);
__builtin_memmove((R+20),(R+16),4);
}
B609ce3:{NFSU2_TR(0x609ce3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B609ce6:{NFSU2_TR(0x609ce6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B609ce7:{NFSU2_TR(0x609ce7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B609ce8:{NFSU2_TR(0x609ce8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B609ce9:{NFSU2_TR(0x609ce9);
__builtin_memmove((R+24),(R+4),4);
}
B609ceb:{NFSU2_TR(0x609ceb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x609cf0ull));
TAIL_STATIC(0x5fa770u,5fa);
}
B609cf0:L609cf0:{c.instructions+=2;NFSU2_TR(0x609cf0);
s4(0x7fc800,u32(0x0ull));
}
B609cfa:{NFSU2_TR(0x609cfa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x609cffull));
TAIL_STATIC(0x5fc0e0u,5fc);
}
B609cff:L609cff:{c.instructions+=1;NFSU2_TR(0x609cff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x609d04ull));
TAIL_STATIC(0x4022c0u,402);
}
B609d04:L609d04:{c.instructions+=4;NFSU2_TR(0x609d04);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B609d07:{NFSU2_TR(0x609d07);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B609d09:{NFSU2_TR(0x609d09);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B609d0b:{NFSU2_TR(0x609d0b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L609d22;}}
}
B609d0d:L609d0d:{c.instructions+=1;NFSU2_TR(0x609d0d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((R+12),(U+0),4);
}
B609d10:L609d10:{c.instructions+=2;NFSU2_TR(0x609d10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B609d12:{NFSU2_TR(0x609d12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x609d17ull));
TAIL_STATIC(0x5f6cd0u,5f6);
}
B609d17:L609d17:{c.instructions+=5;NFSU2_TR(0x609d17);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B609d1a:{NFSU2_TR(0x609d1a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B609d1b:{NFSU2_TR(0x609d1b);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B609d1e:{NFSU2_TR(0x609d1e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B609d20:{NFSU2_TR(0x609d20);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x609d10u);}goto L609d10;}}
}
B609d22:L609d22:{c.instructions+=2;NFSU2_TR(0x609d22);
w4(R+4,u32(0x81cbc0ull));
}
B609d27:{NFSU2_TR(0x609d27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x609d2cull));
TAIL_STATIC(0x4268a0u,426);
}
B609d2c:L609d2c:{c.instructions+=1;NFSU2_TR(0x609d2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x609d31ull));
TAIL_STATIC(0x614820u,614);
}
B609d31:L609d31:{c.instructions+=5;NFSU2_TR(0x609d31);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B609d34:{NFSU2_TR(0x609d34);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B609d36:{NFSU2_TR(0x609d36);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B609d39:{NFSU2_TR(0x609d39);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B609d3c:{NFSU2_TR(0x609d3c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L609e01;}}
}
B609d42:L609d42:{c.instructions+=3;NFSU2_TR(0x609d42);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B609d49:{NFSU2_TR(0x609d49);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B609d4f:{NFSU2_TR(0x609d4f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((R+0),(U+0),4);
}
B609d55:L609d55:{c.instructions+=50;NFSU2_TR(0x609d55);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffff3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B609d5b:{NFSU2_TR(0x609d5b);
{u32 ea_=u32(r4(R+8)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B609d5e:{NFSU2_TR(0x609d5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B609d61:{NFSU2_TR(0x609d61);
{u32 ea_=u32(r4(R+8)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B609d64:{NFSU2_TR(0x609d64);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B609d67:{NFSU2_TR(0x609d67);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B609d69:{NFSU2_TR(0x609d69);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
}
B609d6c:{NFSU2_TR(0x609d6c);
{u32 ea_=u32(r4(R+0)+u32(4294967228u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B609d6f:{NFSU2_TR(0x609d6f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B609d72:{NFSU2_TR(0x609d72);
{u32 ea_=u32(r4(R+0)+u32(4294967232u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B609d75:{NFSU2_TR(0x609d75);
{u32 ea_=u32(r4(R+8)+u32(2300u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B609d7b:{NFSU2_TR(0x609d7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffff30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B609d81:{NFSU2_TR(0x609d81);
{u32 ea_=u32(r4(R+4)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B609d84:{NFSU2_TR(0x609d84);
{u32 ea_=u32(r4(R+8)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B609d87:{NFSU2_TR(0x609d87);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B609d8a:{NFSU2_TR(0x609d8a);
{u32 ea_=u32(r4(R+8)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B609d8d:{NFSU2_TR(0x609d8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B609d90:{NFSU2_TR(0x609d90);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B609d92:{NFSU2_TR(0x609d92);
{u32 ea_=u32(r4(R+0)+u32(4294967244u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B609d95:{NFSU2_TR(0x609d95);
{u32 ea_=u32(r4(R+0)+u32(4294967248u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B609d98:{NFSU2_TR(0x609d98);
{u32 ea_=u32(r4(R+8)+u32(2300u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B609d9e:{NFSU2_TR(0x609d9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffff34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B609da4:{NFSU2_TR(0x609da4);
{u32 ea_=u32(r4(R+4)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B609da7:{NFSU2_TR(0x609da7);
{u32 ea_=u32(r4(R+8)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B609daa:{NFSU2_TR(0x609daa);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B609dad:{NFSU2_TR(0x609dad);
{u32 ea_=u32(r4(R+8)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B609db0:{NFSU2_TR(0x609db0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B609db3:{NFSU2_TR(0x609db3);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B609db5:{NFSU2_TR(0x609db5);
{u32 ea_=u32(r4(R+0)+u32(4294967260u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B609db8:{NFSU2_TR(0x609db8);
{u32 ea_=u32(r4(R+0)+u32(4294967264u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B609dbb:{NFSU2_TR(0x609dbb);
{u32 ea_=u32(r4(R+8)+u32(2300u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B609dc1:{NFSU2_TR(0x609dc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffff38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B609dc7:{NFSU2_TR(0x609dc7);
{u32 ea_=u32(r4(R+4)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B609dca:{NFSU2_TR(0x609dca);
{u32 ea_=u32(r4(R+8)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B609dcd:{NFSU2_TR(0x609dcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B609dd0:{NFSU2_TR(0x609dd0);
{u32 ea_=u32(r4(R+8)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B609dd3:{NFSU2_TR(0x609dd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B609dd6:{NFSU2_TR(0x609dd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B609dd9:{NFSU2_TR(0x609dd9);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B609ddb:{NFSU2_TR(0x609ddb);
{u32 ea_=u32(r4(R+0)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B609dde:{NFSU2_TR(0x609dde);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B609de1:{NFSU2_TR(0x609de1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B609de4:{NFSU2_TR(0x609de4);
{u32 ea_=u32(r4(R+0)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B609de7:{NFSU2_TR(0x609de7);
{u32 ea_=u32(r4(R+8)+u32(2300u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B609ded:{NFSU2_TR(0x609ded);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B609df0:{NFSU2_TR(0x609df0);
{u32 ea_=u32(r4(R+4)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B609df3:{NFSU2_TR(0x609df3);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B609df6:{NFSU2_TR(0x609df6);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B609df8:{NFSU2_TR(0x609df8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B609dfb:{NFSU2_TR(0x609dfb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x609d55u);}goto L609d55;}}
}
B609e01:L609e01:{c.instructions+=2;NFSU2_TR(0x609e01);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B609e03:{NFSU2_TR(0x609e03);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L609e52;}}
}
B609e05:L609e05:{c.instructions+=8;NFSU2_TR(0x609e05);
__builtin_memmove((R+0),(R+8),4);
}
B609e07:{NFSU2_TR(0x609e07);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B609e0a:{NFSU2_TR(0x609e0a);
u8 U[12];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B609e11:{NFSU2_TR(0x609e11);
__builtin_memmove((R+0),(R+28),4);
}
B609e13:{NFSU2_TR(0x609e13);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B609e15:{NFSU2_TR(0x609e15);
u8 U[12];
w4(U+0,u32(u32(u32(0xe0ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B609e1c:{NFSU2_TR(0x609e1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B609e1f:{NFSU2_TR(0x609e1f);
}
B609e20:L609e20:{c.instructions+=16;NFSU2_TR(0x609e20);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xffffff3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B609e26:{NFSU2_TR(0x609e26);
{u32 ea_=u32(r4(R+0)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B609e29:{NFSU2_TR(0x609e29);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B609e2c:{NFSU2_TR(0x609e2c);
{u32 ea_=u32(r4(R+0)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B609e2f:{NFSU2_TR(0x609e2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B609e32:{NFSU2_TR(0x609e32);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B609e34:{NFSU2_TR(0x609e34);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B609e37:{NFSU2_TR(0x609e37);
{u32 ea_=u32(r4(R+4)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B609e3a:{NFSU2_TR(0x609e3a);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B609e3d:{NFSU2_TR(0x609e3d);
{u32 ea_=u32(r4(R+4)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B609e40:{NFSU2_TR(0x609e40);
{u32 ea_=u32(r4(R+0)+u32(2300u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B609e46:{NFSU2_TR(0x609e46);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B609e49:{NFSU2_TR(0x609e49);
{u32 ea_=u32(r4(R+12)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B609e4c:{NFSU2_TR(0x609e4c);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B609e4d:{NFSU2_TR(0x609e4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B609e50:{NFSU2_TR(0x609e50);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x609e20u);}goto L609e20;}}
}
B609e52:L609e52:{c.instructions+=2;NFSU2_TR(0x609e52);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B609e55:{NFSU2_TR(0x609e55);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L609e89;}}
}
B609e57:L609e57:{c.instructions+=7;NFSU2_TR(0x609e57);
__builtin_memmove((R+0),(R+28),4);
}
B609e59:{NFSU2_TR(0x609e59);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B609e5c:{NFSU2_TR(0x609e5c);
w4(R+8,u32(0x6ull));
}
B609e61:{NFSU2_TR(0x609e61);
u8 U[12];
w4(U+0,u32(u32(u32(0xe0ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B609e68:{NFSU2_TR(0x609e68);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+28))));
}
B609e6a:{NFSU2_TR(0x609e6a);
u8 U[12];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B609e71:{NFSU2_TR(0x609e71);
w4(R+28,u32(0x4b18967full));
}
B609e76:L609e76:{c.instructions+=8;NFSU2_TR(0x609e76);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B609e79:{NFSU2_TR(0x609e79);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B609e7c:{NFSU2_TR(0x609e7c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B609e7e:{NFSU2_TR(0x609e7e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+4)),r4(U+0));
}
B609e80:{NFSU2_TR(0x609e80);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B609e83:{NFSU2_TR(0x609e83);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B609e86:{NFSU2_TR(0x609e86);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B609e87:{NFSU2_TR(0x609e87);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x609e76u);}goto L609e76;}}
}
B609e89:L609e89:{c.instructions+=3;NFSU2_TR(0x609e89);
__builtin_memmove((R+0),gp(0x89008c),4);
}
B609e8e:{NFSU2_TR(0x609e8e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B609e90:{NFSU2_TR(0x609e90);
if(r1(R+518)){{goto L609ec9;}}
}
B609e92:L609e92:{c.instructions+=2;NFSU2_TR(0x609e92);
u8 U[8];
__builtin_memmove((U+0),gp(0x8900bc),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B609e99:{NFSU2_TR(0x609e99);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L609ec9;}}
}
B609e9b:L609e9b:{c.instructions+=4;NFSU2_TR(0x609e9b);
__builtin_memmove((R+4),gp(0x8900b4),4);
}
B609ea1:{NFSU2_TR(0x609ea1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B609ea4:{NFSU2_TR(0x609ea4);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B609ea7:{NFSU2_TR(0x609ea7);
if(r1(R+518)){{goto L609ec9;}}
}
B609ea9:L609ea9:{c.instructions+=2;NFSU2_TR(0x609ea9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B609eac:{NFSU2_TR(0x609eac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L609eba;}}
}
B609eae:L609eae:{c.instructions+=2;NFSU2_TR(0x609eae);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x230ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B609eb8:{NFSU2_TR(0x609eb8);
{goto L609ec9;}
}
B609eba:L609eba:{c.instructions+=2;NFSU2_TR(0x609eba);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B609ebd:{NFSU2_TR(0x609ebd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L609ec9;}}
}
B609ebf:L609ebf:{c.instructions+=1;NFSU2_TR(0x609ebf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x230ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B609ec9:L609ec9:{c.instructions+=3;NFSU2_TR(0x609ec9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B609ecf:{NFSU2_TR(0x609ecf);
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
B609ed1:{NFSU2_TR(0x609ed1);
if(r1(R+518)){{goto L609edc;}}
}
B609ed3:L609ed3:{c.instructions+=3;NFSU2_TR(0x609ed3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B609ed6:{NFSU2_TR(0x609ed6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B609ed7:{NFSU2_TR(0x609ed7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x609edcull));
TAIL_STATIC(0x42f910u,42f);
}
B609edc:L609edc:{c.instructions+=1;NFSU2_TR(0x609edc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x609ee1ull));
TAIL_STATIC(0x4022c0u,402);
}
B609ee1:L609ee1:{c.instructions+=6;NFSU2_TR(0x609ee1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B609ee4:{NFSU2_TR(0x609ee4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B609ee7:{NFSU2_TR(0x609ee7);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B609ee9:{NFSU2_TR(0x609ee9);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B609eeb:{NFSU2_TR(0x609eeb);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B609eed:{NFSU2_TR(0x609eed);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L609f1e;}}
}
B609eef:L609eef:{c.instructions+=1;NFSU2_TR(0x609eef);
}
B609ef0:L609ef0:{c.instructions+=4;NFSU2_TR(0x609ef0);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B609ef2:{NFSU2_TR(0x609ef2);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B609ef6:{NFSU2_TR(0x609ef6);
__builtin_memmove((R+4),(R+28),4);
}
B609ef8:{NFSU2_TR(0x609ef8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x609efdull));
TAIL_STATIC(0x5ebd80u,5eb);
}
B609efd:L609efd:{c.instructions+=7;NFSU2_TR(0x609efd);
{u32 ea_=u32(r4(R+28)+u32(1244u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B609f03:{NFSU2_TR(0x609f03);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B609f06:{NFSU2_TR(0x609f06);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B609f09:{NFSU2_TR(0x609f09);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B609f0b:{NFSU2_TR(0x609f0b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B609f0c:{NFSU2_TR(0x609f0c);
__builtin_memmove((R+4),(R+28),4);
}
B609f0e:{NFSU2_TR(0x609f0e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x609f11ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B609f11:L609f11:{c.instructions+=6;NFSU2_TR(0x609f11);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B609f14:{NFSU2_TR(0x609f14);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B609f17:{NFSU2_TR(0x609f17);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B609f18:{NFSU2_TR(0x609f18);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B609f1a:{NFSU2_TR(0x609f1a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B609f1c:{NFSU2_TR(0x609f1c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x609ef0u);}goto L609ef0;}}
}
B609f1e:L609f1e:{c.instructions+=6;NFSU2_TR(0x609f1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B609f21:{NFSU2_TR(0x609f21);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B609f24:{NFSU2_TR(0x609f24);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B609f26:{NFSU2_TR(0x609f26);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B609f28:{NFSU2_TR(0x609f28);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B609f2a:{NFSU2_TR(0x609f2a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L609f5e;}}
}
B609f2c:L609f2c:{c.instructions+=1;NFSU2_TR(0x609f2c);
__builtin_memmove((R+16),(R+16),4);
}
B609f30:L609f30:{c.instructions+=4;NFSU2_TR(0x609f30);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B609f32:{NFSU2_TR(0x609f32);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B609f36:{NFSU2_TR(0x609f36);
__builtin_memmove((R+4),(R+28),4);
}
B609f38:{NFSU2_TR(0x609f38);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x609f3dull));
TAIL_STATIC(0x5ebd80u,5eb);
}
B609f3d:L609f3d:{c.instructions+=7;NFSU2_TR(0x609f3d);
{u32 ea_=u32(r4(R+28)+u32(1244u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B609f43:{NFSU2_TR(0x609f43);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B609f46:{NFSU2_TR(0x609f46);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B609f49:{NFSU2_TR(0x609f49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B609f4b:{NFSU2_TR(0x609f4b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B609f4c:{NFSU2_TR(0x609f4c);
__builtin_memmove((R+4),(R+28),4);
}
B609f4e:{NFSU2_TR(0x609f4e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x609f51ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B609f51:L609f51:{c.instructions+=6;NFSU2_TR(0x609f51);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B609f54:{NFSU2_TR(0x609f54);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B609f57:{NFSU2_TR(0x609f57);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B609f58:{NFSU2_TR(0x609f58);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B609f5a:{NFSU2_TR(0x609f5a);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B609f5c:{NFSU2_TR(0x609f5c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x609f30u);}goto L609f30;}}
}
B609f5e:L609f5e:{c.instructions+=4;NFSU2_TR(0x609f5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B609f61:{NFSU2_TR(0x609f61);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B609f63:{NFSU2_TR(0x609f63);
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
B609f65:{NFSU2_TR(0x609f65);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L609fa1;}}
}
B609f67:L609f67:{c.instructions+=3;NFSU2_TR(0x609f67);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((R+0),(U+0),4);
}
B609f6a:{NFSU2_TR(0x609f6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B609f6d:{NFSU2_TR(0x609f6d);
__builtin_memmove((R+4),(R+4),4);
}
B609f70:L609f70:{c.instructions+=4;NFSU2_TR(0x609f70);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B609f73:{NFSU2_TR(0x609f73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B609f75:{NFSU2_TR(0x609f75);
__builtin_memmove((R+4),(R+28),4);
}
B609f77:{NFSU2_TR(0x609f77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x609f7cull));
TAIL_STATIC(0x5ebd80u,5eb);
}
B609f7c:L609f7c:{c.instructions+=7;NFSU2_TR(0x609f7c);
{u32 ea_=u32(r4(R+28)+u32(1244u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B609f82:{NFSU2_TR(0x609f82);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B609f85:{NFSU2_TR(0x609f85);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B609f88:{NFSU2_TR(0x609f88);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B609f8a:{NFSU2_TR(0x609f8a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B609f8b:{NFSU2_TR(0x609f8b);
__builtin_memmove((R+4),(R+28),4);
}
B609f8d:{NFSU2_TR(0x609f8d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x609f90ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B609f90:L609f90:{c.instructions+=7;NFSU2_TR(0x609f90);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B609f93:{NFSU2_TR(0x609f93);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B609f96:{NFSU2_TR(0x609f96);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B609f97:{NFSU2_TR(0x609f97);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B609f9a:{NFSU2_TR(0x609f9a);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B609f9c:{NFSU2_TR(0x609f9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B609f9f:{NFSU2_TR(0x609f9f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x609f70u);}goto L609f70;}}
}
B609fa1:L609fa1:{c.instructions+=1;NFSU2_TR(0x609fa1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x609fa6ull));
TAIL_STATIC(0x4022c0u,402);
}
B609fa6:L609fa6:{c.instructions+=4;NFSU2_TR(0x609fa6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B609fa9:{NFSU2_TR(0x609fa9);
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
B609fab:{NFSU2_TR(0x609fab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B609fb2:{NFSU2_TR(0x609fb2);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L609fe7;}}
}
B609fb4:L609fb4:{c.instructions+=1;NFSU2_TR(0x609fb4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((R+12),(U+0),4);
}
B609fb7:L609fb7:{c.instructions+=6;NFSU2_TR(0x609fb7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+28),(U+0),4);
}
B609fb9:{NFSU2_TR(0x609fb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B609fbc:{NFSU2_TR(0x609fbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B609fbf:{NFSU2_TR(0x609fbf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B609fc1:{NFSU2_TR(0x609fc1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B609fc2:{NFSU2_TR(0x609fc2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x609fc5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B609fc5:L609fc5:{c.instructions+=3;NFSU2_TR(0x609fc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x970ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B609fcb:{NFSU2_TR(0x609fcb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B609fcd:{NFSU2_TR(0x609fcd);
if(r1(R+518)){{goto L609fd6;}}
}
B609fcf:L609fcf:{c.instructions+=2;NFSU2_TR(0x609fcf);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B609fd0:{NFSU2_TR(0x609fd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x970ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B609fd6:L609fd6:{c.instructions+=7;NFSU2_TR(0x609fd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B609fd9:{NFSU2_TR(0x609fd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B609fdc:{NFSU2_TR(0x609fdc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B609fdd:{NFSU2_TR(0x609fdd);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B609fe0:{NFSU2_TR(0x609fe0);
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
B609fe2:{NFSU2_TR(0x609fe2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B609fe5:{NFSU2_TR(0x609fe5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x609fb7u);}goto L609fb7;}}
}
B609fe7:L609fe7:{c.instructions+=4;NFSU2_TR(0x609fe7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B609fea:{NFSU2_TR(0x609fea);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B609fec:{NFSU2_TR(0x609fec);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B609fee:{NFSU2_TR(0x609fee);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x60a005u,60a);}
}
B609ff0:L609ff0:{c.instructions+=3;NFSU2_TR(0x609ff0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((R+12),(U+0),4);
}
B609ff3:{NFSU2_TR(0x609ff3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B609ff5:{NFSU2_TR(0x609ff5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x609ffaull));
TAIL_STATIC(0x5f6cd0u,5f6);
}
B609ffa:L609ffa:{c.instructions+=3;NFSU2_TR(0x609ffa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B609ffd:{NFSU2_TR(0x609ffd);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B609ffe:{NFSU2_TR(0x609ffe);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
TAIL_STATIC(0x60a001u,60a);
}
XIT:NFSU2_TR_EXIT(0x609,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
