#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_430(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_4ae(u8* __restrict R,Cpu& c);
u32 body_4ec(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_500(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_503(u8* __restrict R,Cpu& c);
u32 body_512(u8* __restrict R,Cpu& c);
u32 body_514(u8* __restrict R,Cpu& c);
u32 body_570(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_5ee(u8* __restrict R,Cpu& c);
u32 body_610(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x513,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x513,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_513(u8* __restrict R,Cpu& c);
u32 page_513(Cpu& c){return body_513(c.regs.data(),c);}
__attribute__((noinline)) u32 body_513(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x513002:goto L513002;
case 0x513004:c.instructions+=1;goto B513004;
case 0x513006:goto L513006;
case 0x513007:c.instructions+=4;goto B513007;
case 0x513008:c.instructions+=3;goto B513008;
case 0x51300b:c.instructions+=2;goto B51300b;
case 0x51300c:c.instructions+=1;goto B51300c;
case 0x513011:goto L513011;
case 0x513013:c.instructions+=2;goto B513013;
case 0x513015:c.instructions+=1;goto B513015;
case 0x513017:goto L513017;
case 0x513018:c.instructions+=1;goto B513018;
case 0x51301d:goto L51301d;
case 0x51301f:goto L51301f;
case 0x513022:c.instructions+=2;goto B513022;
case 0x513024:c.instructions+=1;goto B513024;
case 0x513026:goto L513026;
case 0x513029:c.instructions+=2;goto B513029;
case 0x51302b:c.instructions+=1;goto B51302b;
case 0x51302d:goto L51302d;
case 0x513031:c.instructions+=3;goto B513031;
case 0x513032:c.instructions+=2;goto B513032;
case 0x513033:c.instructions+=1;goto B513033;
case 0x513038:goto L513038;
case 0x513039:c.instructions+=1;goto B513039;
case 0x51303e:goto L51303e;
case 0x513041:goto L513041;
case 0x513042:c.instructions+=2;goto B513042;
case 0x513046:c.instructions+=1;goto B513046;
case 0x513047:goto L513047;
case 0x513048:c.instructions+=1;goto B513048;
case 0x513050:goto L513050;
case 0x513054:c.instructions+=9;goto B513054;
case 0x513056:c.instructions+=8;goto B513056;
case 0x513057:c.instructions+=7;goto B513057;
case 0x51305d:c.instructions+=6;goto B51305d;
case 0x513063:c.instructions+=5;goto B513063;
case 0x513069:c.instructions+=4;goto B513069;
case 0x51306f:c.instructions+=3;goto B51306f;
case 0x513075:c.instructions+=2;goto B513075;
case 0x513077:c.instructions+=1;goto B513077;
case 0x513079:goto L513079;
case 0x51307c:c.instructions+=2;goto B51307c;
case 0x51307e:c.instructions+=1;goto B51307e;
case 0x513080:goto L513080;
case 0x513086:c.instructions+=1;goto B513086;
case 0x513088:goto L513088;
case 0x51308e:c.instructions+=2;goto B51308e;
case 0x513091:c.instructions+=1;goto B513091;
case 0x513093:goto L513093;
case 0x513099:goto L513099;
case 0x51309a:c.instructions+=1;goto B51309a;
case 0x5130a0:goto L5130a0;
case 0x5130a1:c.instructions+=8;goto B5130a1;
case 0x5130a7:c.instructions+=7;goto B5130a7;
case 0x5130a8:c.instructions+=6;goto B5130a8;
case 0x5130a9:c.instructions+=5;goto B5130a9;
case 0x5130ab:c.instructions+=4;goto B5130ab;
case 0x5130ad:c.instructions+=3;goto B5130ad;
case 0x5130ae:c.instructions+=2;goto B5130ae;
case 0x5130b0:c.instructions+=1;goto B5130b0;
case 0x5130b2:goto L5130b2;
case 0x5130b8:c.instructions+=2;goto B5130b8;
case 0x5130bb:c.instructions+=1;goto B5130bb;
case 0x5130c0:goto L5130c0;
case 0x5130c2:c.instructions+=1;goto B5130c2;
case 0x5130c4:goto L5130c4;
case 0x5130c6:c.instructions+=1;goto B5130c6;
case 0x5130c8:goto L5130c8;
case 0x5130cb:c.instructions+=2;goto B5130cb;
case 0x5130cd:c.instructions+=1;goto B5130cd;
case 0x5130cf:goto L5130cf;
case 0x5130d3:c.instructions+=2;goto B5130d3;
case 0x5130d7:c.instructions+=1;goto B5130d7;
case 0x5130d9:goto L5130d9;
case 0x5130db:c.instructions+=3;goto B5130db;
case 0x5130dc:c.instructions+=2;goto B5130dc;
case 0x5130de:c.instructions+=1;goto B5130de;
case 0x5130e3:goto L5130e3;
case 0x5130e5:c.instructions+=1;goto B5130e5;
case 0x5130e7:goto L5130e7;
case 0x5130e8:c.instructions+=3;goto B5130e8;
case 0x5130ee:c.instructions+=2;goto B5130ee;
case 0x5130f0:c.instructions+=1;goto B5130f0;
case 0x5130f2:goto L5130f2;
case 0x5130f3:c.instructions+=5;goto B5130f3;
case 0x5130f4:c.instructions+=4;goto B5130f4;
case 0x5130f5:c.instructions+=3;goto B5130f5;
case 0x5130f7:c.instructions+=2;goto B5130f7;
case 0x5130f8:c.instructions+=1;goto B5130f8;
case 0x5130fb:goto L5130fb;
case 0x5130fc:c.instructions+=5;goto B5130fc;
case 0x5130fd:c.instructions+=4;goto B5130fd;
case 0x5130fe:c.instructions+=3;goto B5130fe;
case 0x513100:c.instructions+=2;goto B513100;
case 0x513101:c.instructions+=1;goto B513101;
case 0x513110:goto L513110;
case 0x513115:c.instructions+=2;goto B513115;
case 0x513117:c.instructions+=1;goto B513117;
case 0x513119:goto L513119;
case 0x51311b:c.instructions+=1;goto B51311b;
case 0x51311e:goto L51311e;
case 0x513124:c.instructions+=5;goto B513124;
case 0x513125:c.instructions+=4;goto B513125;
case 0x513129:c.instructions+=3;goto B513129;
case 0x513130:c.instructions+=2;goto B513130;
case 0x513132:c.instructions+=1;goto B513132;
case 0x513134:goto L513134;
case 0x513136:c.instructions+=2;goto B513136;
case 0x513137:c.instructions+=1;goto B513137;
case 0x51313a:goto L51313a;
case 0x51313d:c.instructions+=2;goto B51313d;
case 0x51313f:c.instructions+=1;goto B51313f;
case 0x513141:goto L513141;
case 0x513144:c.instructions+=2;goto B513144;
case 0x513145:c.instructions+=1;goto B513145;
case 0x51314a:goto L51314a;
case 0x51314c:c.instructions+=1;goto B51314c;
case 0x51314e:goto L51314e;
case 0x513152:c.instructions+=1;goto B513152;
case 0x513154:goto L513154;
case 0x513156:c.instructions+=1;goto B513156;
case 0x51315b:goto L51315b;
case 0x51315c:c.instructions+=1;goto B51315c;
case 0x513160:goto L513160;
case 0x513163:c.instructions+=9;goto B513163;
case 0x513164:c.instructions+=8;goto B513164;
case 0x513165:c.instructions+=7;goto B513165;
case 0x51316b:c.instructions+=6;goto B51316b;
case 0x51316d:c.instructions+=5;goto B51316d;
case 0x51316f:c.instructions+=4;goto B51316f;
case 0x513171:c.instructions+=3;goto B513171;
case 0x513175:c.instructions+=2;goto B513175;
case 0x513179:c.instructions+=1;goto B513179;
case 0x51317f:goto L51317f;
case 0x513184:c.instructions+=5;goto B513184;
case 0x513185:c.instructions+=4;goto B513185;
case 0x513186:c.instructions+=3;goto B513186;
case 0x51318a:c.instructions+=2;goto B51318a;
case 0x51318c:c.instructions+=1;goto B51318c;
case 0x513190:goto L513190;
case 0x513192:c.instructions+=1;goto B513192;
case 0x513194:goto L513194;
case 0x513196:c.instructions+=1;goto B513196;
case 0x513198:goto L513198;
case 0x51319a:goto L51319a;
case 0x51319e:c.instructions+=2;goto B51319e;
case 0x5131a1:c.instructions+=1;goto B5131a1;
case 0x5131a7:goto L5131a7;
case 0x5131ae:goto L5131ae;
case 0x5131b2:c.instructions+=1;goto B5131b2;
case 0x5131b8:goto L5131b8;
case 0x5131bb:c.instructions+=1;goto B5131bb;
case 0x5131c1:goto L5131c1;
case 0x5131c4:c.instructions+=2;goto B5131c4;
case 0x5131c6:c.instructions+=1;goto B5131c6;
case 0x5131c8:goto L5131c8;
case 0x5131cc:c.instructions+=1;goto B5131cc;
case 0x5131d2:goto L5131d2;
case 0x5131d5:c.instructions+=1;goto B5131d5;
case 0x5131db:goto L5131db;
case 0x5131de:c.instructions+=1;goto B5131de;
case 0x5131e0:goto L5131e0;
case 0x5131e4:c.instructions+=1;goto B5131e4;
case 0x5131ea:goto L5131ea;
case 0x5131ed:c.instructions+=1;goto B5131ed;
case 0x5131f3:goto L5131f3;
case 0x5131f7:c.instructions+=1;goto B5131f7;
case 0x5131f9:goto L5131f9;
case 0x5131fd:c.instructions+=1;goto B5131fd;
case 0x5131ff:goto L5131ff;
case 0x513202:c.instructions+=1;goto B513202;
case 0x513204:goto L513204;
case 0x513208:c.instructions+=1;goto B513208;
case 0x51320a:goto L51320a;
case 0x51320e:c.instructions+=1;goto B51320e;
case 0x513210:goto L513210;
case 0x513213:c.instructions+=1;goto B513213;
case 0x513215:goto L513215;
case 0x513219:c.instructions+=1;goto B513219;
case 0x51321b:goto L51321b;
case 0x51321f:c.instructions+=1;goto B51321f;
case 0x513221:goto L513221;
case 0x513224:goto L513224;
case 0x513226:goto L513226;
case 0x513228:goto L513228;
case 0x51322e:c.instructions+=4;goto B51322e;
case 0x513231:c.instructions+=3;goto B513231;
case 0x513233:c.instructions+=2;goto B513233;
case 0x513235:c.instructions+=1;goto B513235;
case 0x513237:goto L513237;
case 0x51323d:c.instructions+=1;goto B51323d;
case 0x513240:goto L513240;
case 0x513242:c.instructions+=1;goto B513242;
case 0x513244:goto L513244;
case 0x513245:c.instructions+=3;goto B513245;
case 0x513248:c.instructions+=2;goto B513248;
case 0x51324a:c.instructions+=1;goto B51324a;
case 0x51324c:goto L51324c;
case 0x51324e:goto L51324e;
case 0x513255:c.instructions+=2;goto B513255;
case 0x513257:c.instructions+=1;goto B513257;
case 0x513259:goto L513259;
case 0x51325c:c.instructions+=3;goto B51325c;
case 0x51325f:c.instructions+=2;goto B51325f;
case 0x513261:c.instructions+=1;goto B513261;
case 0x513263:goto L513263;
case 0x513267:goto L513267;
case 0x51326b:c.instructions+=3;goto B51326b;
case 0x513271:c.instructions+=2;goto B513271;
case 0x513272:c.instructions+=1;goto B513272;
case 0x513276:goto L513276;
case 0x51327a:c.instructions+=5;goto B51327a;
case 0x51327b:c.instructions+=4;goto B51327b;
case 0x513280:c.instructions+=3;goto B513280;
case 0x513282:c.instructions+=2;goto B513282;
case 0x513286:c.instructions+=1;goto B513286;
case 0x51328c:goto L51328c;
case 0x513290:c.instructions+=11;goto B513290;
case 0x513294:c.instructions+=10;goto B513294;
case 0x513298:c.instructions+=9;goto B513298;
case 0x513299:c.instructions+=8;goto B513299;
case 0x51329a:c.instructions+=7;goto B51329a;
case 0x51329c:c.instructions+=6;goto B51329c;
case 0x5132a0:c.instructions+=5;goto B5132a0;
case 0x5132a1:c.instructions+=4;goto B5132a1;
case 0x5132a3:c.instructions+=3;goto B5132a3;
case 0x5132a4:c.instructions+=2;goto B5132a4;
case 0x5132a7:c.instructions+=1;goto B5132a7;
case 0x5132aa:goto L5132aa;
case 0x5132ae:c.instructions+=8;goto B5132ae;
case 0x5132b2:c.instructions+=7;goto B5132b2;
case 0x5132b4:c.instructions+=6;goto B5132b4;
case 0x5132b8:c.instructions+=5;goto B5132b8;
case 0x5132b9:c.instructions+=4;goto B5132b9;
case 0x5132bb:c.instructions+=3;goto B5132bb;
case 0x5132bc:c.instructions+=2;goto B5132bc;
case 0x5132bf:c.instructions+=1;goto B5132bf;
case 0x5132e0:goto L5132e0;
case 0x5132e3:c.instructions+=11;goto B5132e3;
case 0x5132e4:c.instructions+=10;goto B5132e4;
case 0x5132e5:c.instructions+=9;goto B5132e5;
case 0x5132e6:c.instructions+=8;goto B5132e6;
case 0x5132ec:c.instructions+=7;goto B5132ec;
case 0x5132ef:c.instructions+=6;goto B5132ef;
case 0x5132f2:c.instructions+=5;goto B5132f2;
case 0x5132f6:c.instructions+=4;goto B5132f6;
case 0x5132fc:c.instructions+=3;goto B5132fc;
case 0x5132fe:c.instructions+=2;goto B5132fe;
case 0x513300:c.instructions+=1;goto B513300;
case 0x513302:goto L513302;
case 0x513307:goto L513307;
case 0x51330d:c.instructions+=2;goto B51330d;
case 0x51330f:c.instructions+=1;goto B51330f;
case 0x513311:goto L513311;
case 0x513312:goto L513312;
case 0x513318:c.instructions+=2;goto B513318;
case 0x51331a:c.instructions+=1;goto B51331a;
case 0x51331c:goto L51331c;
case 0x51331d:goto L51331d;
case 0x513323:c.instructions+=2;goto B513323;
case 0x513325:c.instructions+=1;goto B513325;
case 0x513327:goto L513327;
case 0x513328:goto L513328;
case 0x51332d:goto L51332d;
case 0x51332f:c.instructions+=1;goto B51332f;
case 0x513334:goto L513334;
case 0x513338:c.instructions+=16;goto B513338;
case 0x51333a:c.instructions+=15;goto B51333a;
case 0x51333c:c.instructions+=14;goto B51333c;
case 0x513340:c.instructions+=13;goto B513340;
case 0x513344:c.instructions+=12;goto B513344;
case 0x513345:c.instructions+=11;goto B513345;
case 0x513349:c.instructions+=10;goto B513349;
case 0x51334a:c.instructions+=9;goto B51334a;
case 0x51334b:c.instructions+=8;goto B51334b;
case 0x51334f:c.instructions+=7;goto B51334f;
case 0x513353:c.instructions+=6;goto B513353;
case 0x513357:c.instructions+=5;goto B513357;
case 0x51335b:c.instructions+=4;goto B51335b;
case 0x51335f:c.instructions+=3;goto B51335f;
case 0x513361:c.instructions+=2;goto B513361;
case 0x513364:c.instructions+=1;goto B513364;
case 0x513366:goto L513366;
case 0x51336a:c.instructions+=4;goto B51336a;
case 0x513370:c.instructions+=3;goto B513370;
case 0x513372:c.instructions+=2;goto B513372;
case 0x513375:c.instructions+=1;goto B513375;
case 0x513377:goto L513377;
case 0x51337b:c.instructions+=5;goto B51337b;
case 0x51337f:c.instructions+=4;goto B51337f;
case 0x513381:c.instructions+=3;goto B513381;
case 0x513385:c.instructions+=2;goto B513385;
case 0x513387:c.instructions+=1;goto B513387;
case 0x51338b:goto L51338b;
case 0x51338e:c.instructions+=1;goto B51338e;
case 0x513390:goto L513390;
case 0x513391:c.instructions+=5;goto B513391;
case 0x513392:c.instructions+=4;goto B513392;
case 0x513396:c.instructions+=3;goto B513396;
case 0x513399:c.instructions+=2;goto B513399;
case 0x51339b:c.instructions+=1;goto B51339b;
case 0x51339d:goto L51339d;
case 0x5133a1:c.instructions+=1;goto B5133a1;
case 0x5133a3:goto L5133a3;
case 0x5133a5:goto L5133a5;
case 0x5133a8:c.instructions+=2;goto B5133a8;
case 0x5133aa:c.instructions+=1;goto B5133aa;
case 0x5133ac:goto L5133ac;
case 0x5133af:c.instructions+=1;goto B5133af;
case 0x5133b1:goto L5133b1;
case 0x5133b2:c.instructions+=2;goto B5133b2;
case 0x5133b5:c.instructions+=1;goto B5133b5;
case 0x5133b7:goto L5133b7;
case 0x5133b8:c.instructions+=2;goto B5133b8;
case 0x5133b9:c.instructions+=1;goto B5133b9;
case 0x5133bc:goto L5133bc;
case 0x5133bf:c.instructions+=4;goto B5133bf;
case 0x5133c0:c.instructions+=3;goto B5133c0;
case 0x5133c3:c.instructions+=2;goto B5133c3;
case 0x5133c4:c.instructions+=1;goto B5133c4;
case 0x5133c7:goto L5133c7;
case 0x5133c9:c.instructions+=1;goto B5133c9;
case 0x5133cb:goto L5133cb;
case 0x5133cd:c.instructions+=1;goto B5133cd;
case 0x5133d3:goto L5133d3;
case 0x5133d5:c.instructions+=2;goto B5133d5;
case 0x5133d7:c.instructions+=1;goto B5133d7;
case 0x5133d9:goto L5133d9;
case 0x5133dc:c.instructions+=1;goto B5133dc;
case 0x5133de:goto L5133de;
case 0x5133df:c.instructions+=3;goto B5133df;
case 0x5133e2:c.instructions+=2;goto B5133e2;
case 0x5133e5:c.instructions+=1;goto B5133e5;
case 0x5133e7:goto L5133e7;
case 0x5133e8:c.instructions+=2;goto B5133e8;
case 0x5133e9:c.instructions+=1;goto B5133e9;
case 0x5133ec:goto L5133ec;
case 0x5133ef:c.instructions+=4;goto B5133ef;
case 0x5133f0:c.instructions+=3;goto B5133f0;
case 0x5133f7:c.instructions+=2;goto B5133f7;
case 0x5133f8:c.instructions+=1;goto B5133f8;
case 0x5133fb:goto L5133fb;
case 0x5133fd:c.instructions+=1;goto B5133fd;
case 0x5133ff:goto L5133ff;
case 0x513401:c.instructions+=1;goto B513401;
case 0x513407:goto L513407;
case 0x513409:c.instructions+=2;goto B513409;
case 0x51340b:c.instructions+=1;goto B51340b;
case 0x51340d:goto L51340d;
case 0x513410:c.instructions+=1;goto B513410;
case 0x513412:goto L513412;
case 0x513413:c.instructions+=3;goto B513413;
case 0x513416:c.instructions+=2;goto B513416;
case 0x513419:c.instructions+=1;goto B513419;
case 0x51341b:goto L51341b;
case 0x51341c:c.instructions+=2;goto B51341c;
case 0x51341d:c.instructions+=1;goto B51341d;
case 0x513420:goto L513420;
case 0x513423:c.instructions+=1;goto B513423;
case 0x51342a:goto L51342a;
case 0x51342b:c.instructions+=2;goto B51342b;
case 0x51342c:c.instructions+=1;goto B51342c;
case 0x513430:goto L513430;
case 0x513431:c.instructions+=7;goto B513431;
case 0x513432:c.instructions+=6;goto B513432;
case 0x513433:c.instructions+=5;goto B513433;
case 0x513437:c.instructions+=4;goto B513437;
case 0x51343a:c.instructions+=3;goto B51343a;
case 0x51343f:c.instructions+=2;goto B51343f;
case 0x513441:c.instructions+=1;goto B513441;
case 0x513446:goto L513446;
case 0x513449:c.instructions+=2;goto B513449;
case 0x51344b:c.instructions+=1;goto B51344b;
case 0x51344d:goto L51344d;
case 0x513450:c.instructions+=2;goto B513450;
case 0x513455:c.instructions+=1;goto B513455;
case 0x51345a:goto L51345a;
case 0x51345d:c.instructions+=2;goto B51345d;
case 0x51345f:c.instructions+=1;goto B51345f;
case 0x513461:goto L513461;
case 0x513465:c.instructions+=3;goto B513465;
case 0x513466:c.instructions+=2;goto B513466;
case 0x513467:c.instructions+=1;goto B513467;
case 0x51346c:goto L51346c;
case 0x513472:c.instructions+=5;goto B513472;
case 0x513478:c.instructions+=4;goto B513478;
case 0x51347b:c.instructions+=3;goto B51347b;
case 0x51347c:c.instructions+=2;goto B51347c;
case 0x513482:c.instructions+=1;goto B513482;
case 0x513488:goto L513488;
case 0x513489:c.instructions+=3;goto B513489;
case 0x51348a:c.instructions+=2;goto B51348a;
case 0x51348b:c.instructions+=1;goto B51348b;
case 0x513490:goto L513490;
case 0x513491:c.instructions+=8;goto B513491;
case 0x513492:c.instructions+=7;goto B513492;
case 0x513498:c.instructions+=6;goto B513498;
case 0x513499:c.instructions+=5;goto B513499;
case 0x51349b:c.instructions+=4;goto B51349b;
case 0x51349d:c.instructions+=3;goto B51349d;
case 0x51349e:c.instructions+=2;goto B51349e;
case 0x5134a2:c.instructions+=1;goto B5134a2;
case 0x5134a4:goto L5134a4;
case 0x5134aa:c.instructions+=2;goto B5134aa;
case 0x5134ad:c.instructions+=1;goto B5134ad;
case 0x5134b0:goto L5134b0;
case 0x5134b2:c.instructions+=1;goto B5134b2;
case 0x5134b4:goto L5134b4;
case 0x5134b6:c.instructions+=1;goto B5134b6;
case 0x5134b8:goto L5134b8;
case 0x5134bb:c.instructions+=2;goto B5134bb;
case 0x5134bd:c.instructions+=1;goto B5134bd;
case 0x5134bf:goto L5134bf;
case 0x5134c3:c.instructions+=5;goto B5134c3;
case 0x5134c9:c.instructions+=4;goto B5134c9;
case 0x5134cc:c.instructions+=3;goto B5134cc;
case 0x5134d0:c.instructions+=2;goto B5134d0;
case 0x5134d2:c.instructions+=1;goto B5134d2;
case 0x5134d4:goto L5134d4;
case 0x5134d7:c.instructions+=1;goto B5134d7;
case 0x5134d9:goto L5134d9;
case 0x5134dc:c.instructions+=3;goto B5134dc;
case 0x5134dd:c.instructions+=2;goto B5134dd;
case 0x5134e2:c.instructions+=1;goto B5134e2;
case 0x5134e7:goto L5134e7;
case 0x5134e9:c.instructions+=1;goto B5134e9;
case 0x5134eb:goto L5134eb;
case 0x5134ec:c.instructions+=3;goto B5134ec;
case 0x5134ef:c.instructions+=2;goto B5134ef;
case 0x5134f1:c.instructions+=1;goto B5134f1;
case 0x5134f3:goto L5134f3;
case 0x5134f4:c.instructions+=5;goto B5134f4;
case 0x5134f5:c.instructions+=4;goto B5134f5;
case 0x5134f7:c.instructions+=3;goto B5134f7;
case 0x5134f8:c.instructions+=2;goto B5134f8;
case 0x5134f9:c.instructions+=1;goto B5134f9;
case 0x5134fa:goto L5134fa;
case 0x5134fb:c.instructions+=5;goto B5134fb;
case 0x5134fc:c.instructions+=4;goto B5134fc;
case 0x5134fe:c.instructions+=3;goto B5134fe;
case 0x5134ff:c.instructions+=2;goto B5134ff;
case 0x513500:c.instructions+=1;goto B513500;
case 0x513510:goto L513510;
case 0x513511:c.instructions+=6;goto B513511;
case 0x513512:c.instructions+=5;goto B513512;
case 0x513516:c.instructions+=4;goto B513516;
case 0x513519:c.instructions+=3;goto B513519;
case 0x51351b:c.instructions+=2;goto B51351b;
case 0x51351d:c.instructions+=1;goto B51351d;
case 0x51351f:goto L51351f;
case 0x513524:goto L513524;
case 0x513526:c.instructions+=10;goto B513526;
case 0x513529:c.instructions+=9;goto B513529;
case 0x51352a:c.instructions+=8;goto B51352a;
case 0x513530:c.instructions+=7;goto B513530;
case 0x513532:c.instructions+=6;goto B513532;
case 0x513535:c.instructions+=5;goto B513535;
case 0x513537:c.instructions+=4;goto B513537;
case 0x513538:c.instructions+=3;goto B513538;
case 0x51353b:c.instructions+=2;goto B51353b;
case 0x51353c:c.instructions+=1;goto B51353c;
case 0x51353f:goto L51353f;
case 0x513541:c.instructions+=1;goto B513541;
case 0x513543:goto L513543;
case 0x513545:c.instructions+=1;goto B513545;
case 0x51354a:goto L51354a;
case 0x51354c:c.instructions+=1;goto B51354c;
case 0x51354e:goto L51354e;
case 0x51354f:c.instructions+=4;goto B51354f;
case 0x513552:c.instructions+=3;goto B513552;
case 0x513554:c.instructions+=2;goto B513554;
case 0x513558:c.instructions+=1;goto B513558;
case 0x51355d:goto L51355d;
case 0x513560:c.instructions+=3;goto B513560;
case 0x513562:c.instructions+=2;goto B513562;
case 0x513563:c.instructions+=1;goto B513563;
case 0x513565:goto L513565;
case 0x513567:c.instructions+=1;goto B513567;
case 0x51356c:goto L51356c;
case 0x513571:c.instructions+=2;goto B513571;
case 0x513573:c.instructions+=1;goto B513573;
case 0x513575:goto L513575;
case 0x513577:c.instructions+=1;goto B513577;
case 0x51357c:goto L51357c;
case 0x513581:c.instructions+=2;goto B513581;
case 0x513583:c.instructions+=1;goto B513583;
case 0x513585:goto L513585;
case 0x513586:c.instructions+=3;goto B513586;
case 0x513588:c.instructions+=2;goto B513588;
case 0x513589:c.instructions+=1;goto B513589;
case 0x51358c:goto L51358c;
case 0x51358d:c.instructions+=3;goto B51358d;
case 0x51358f:c.instructions+=2;goto B51358f;
case 0x513590:c.instructions+=1;goto B513590;
case 0x5135a0:goto L5135a0;
case 0x5135a1:c.instructions+=5;goto B5135a1;
case 0x5135a2:c.instructions+=4;goto B5135a2;
case 0x5135a3:c.instructions+=3;goto B5135a3;
case 0x5135a4:c.instructions+=2;goto B5135a4;
case 0x5135a6:c.instructions+=1;goto B5135a6;
case 0x5135a8:goto L5135a8;
case 0x5135ac:c.instructions+=2;goto B5135ac;
case 0x5135ae:c.instructions+=1;goto B5135ae;
case 0x5135b0:goto L5135b0;
case 0x5135b4:c.instructions+=4;goto B5135b4;
case 0x5135b7:c.instructions+=3;goto B5135b7;
case 0x5135bd:c.instructions+=2;goto B5135bd;
case 0x5135be:c.instructions+=1;goto B5135be;
case 0x5135c3:goto L5135c3;
case 0x5135c6:c.instructions+=4;goto B5135c6;
case 0x5135c8:c.instructions+=3;goto B5135c8;
case 0x5135ce:c.instructions+=2;goto B5135ce;
case 0x5135cf:c.instructions+=1;goto B5135cf;
case 0x5135d4:goto L5135d4;
case 0x5135d7:c.instructions+=2;goto B5135d7;
case 0x5135d9:c.instructions+=1;goto B5135d9;
case 0x5135db:goto L5135db;
case 0x5135dc:c.instructions+=2;goto B5135dc;
case 0x5135df:c.instructions+=1;goto B5135df;
case 0x5135e1:goto L5135e1;
case 0x5135e2:c.instructions+=5;goto B5135e2;
case 0x5135e3:c.instructions+=4;goto B5135e3;
case 0x5135e4:c.instructions+=3;goto B5135e4;
case 0x5135e6:c.instructions+=2;goto B5135e6;
case 0x5135e7:c.instructions+=1;goto B5135e7;
case 0x5135ea:goto L5135ea;
case 0x5135eb:c.instructions+=5;goto B5135eb;
case 0x5135ec:c.instructions+=4;goto B5135ec;
case 0x5135ed:c.instructions+=3;goto B5135ed;
case 0x5135ef:c.instructions+=2;goto B5135ef;
case 0x5135f0:c.instructions+=1;goto B5135f0;
case 0x513600:goto L513600;
case 0x513604:c.instructions+=3;goto B513604;
case 0x513607:c.instructions+=2;goto B513607;
case 0x513608:c.instructions+=1;goto B513608;
case 0x51360e:goto L51360e;
case 0x513615:goto L513615;
case 0x513619:c.instructions+=2;goto B513619;
case 0x51361b:c.instructions+=1;goto B51361b;
case 0x513620:goto L513620;
case 0x513622:c.instructions+=1;goto B513622;
case 0x513624:goto L513624;
case 0x513627:c.instructions+=2;goto B513627;
case 0x513629:c.instructions+=1;goto B513629;
case 0x51362b:goto L51362b;
case 0x51362f:c.instructions+=2;goto B51362f;
case 0x513631:c.instructions+=1;goto B513631;
case 0x513636:goto L513636;
case 0x513638:c.instructions+=1;goto B513638;
case 0x51363a:goto L51363a;
case 0x51363e:c.instructions+=1;goto B51363e;
case 0x513640:goto L513640;
case 0x513644:c.instructions+=2;goto B513644;
case 0x513646:c.instructions+=1;goto B513646;
case 0x51364b:goto L51364b;
case 0x51364d:c.instructions+=1;goto B51364d;
case 0x51364f:goto L51364f;
case 0x513653:c.instructions+=1;goto B513653;
case 0x513655:goto L513655;
case 0x513659:c.instructions+=2;goto B513659;
case 0x51365b:c.instructions+=1;goto B51365b;
case 0x513660:goto L513660;
case 0x513662:c.instructions+=1;goto B513662;
case 0x513664:goto L513664;
case 0x513667:c.instructions+=3;goto B513667;
case 0x51366c:c.instructions+=2;goto B51366c;
case 0x51366e:c.instructions+=1;goto B51366e;
case 0x513674:goto L513674;
case 0x513676:c.instructions+=2;goto B513676;
case 0x513677:c.instructions+=1;goto B513677;
case 0x51367a:goto L51367a;
case 0x51367e:c.instructions+=2;goto B51367e;
case 0x513680:c.instructions+=1;goto B513680;
case 0x513685:goto L513685;
case 0x513687:c.instructions+=1;goto B513687;
case 0x513689:goto L513689;
case 0x51368d:goto L51368d;
case 0x51368f:goto L51368f;
case 0x513694:c.instructions+=2;goto B513694;
case 0x513695:c.instructions+=1;goto B513695;
case 0x513698:goto L513698;
case 0x51369c:c.instructions+=6;goto B51369c;
case 0x51369f:c.instructions+=5;goto B51369f;
case 0x5136a1:c.instructions+=4;goto B5136a1;
case 0x5136a4:c.instructions+=3;goto B5136a4;
case 0x5136a7:c.instructions+=2;goto B5136a7;
case 0x5136a8:c.instructions+=1;goto B5136a8;
case 0x5136ab:goto L5136ab;
case 0x5136af:c.instructions+=4;goto B5136af;
case 0x5136b2:c.instructions+=3;goto B5136b2;
case 0x5136b7:c.instructions+=2;goto B5136b7;
case 0x5136b9:c.instructions+=1;goto B5136b9;
case 0x5136bb:goto L5136bb;
case 0x5136be:c.instructions+=2;goto B5136be;
case 0x5136c0:c.instructions+=1;goto B5136c0;
case 0x5136c2:goto L5136c2;
case 0x5136c4:c.instructions+=2;goto B5136c4;
case 0x5136c5:c.instructions+=1;goto B5136c5;
case 0x5136c8:goto L5136c8;
case 0x5136cc:c.instructions+=4;goto B5136cc;
case 0x5136cf:c.instructions+=3;goto B5136cf;
case 0x5136d4:c.instructions+=2;goto B5136d4;
case 0x5136d6:c.instructions+=1;goto B5136d6;
case 0x5136d8:goto L5136d8;
case 0x5136dc:c.instructions+=1;goto B5136dc;
case 0x5136de:goto L5136de;
case 0x5136e0:c.instructions+=2;goto B5136e0;
case 0x5136e1:c.instructions+=1;goto B5136e1;
case 0x5136e4:goto L5136e4;
case 0x5136e8:c.instructions+=4;goto B5136e8;
case 0x5136eb:c.instructions+=3;goto B5136eb;
case 0x5136f0:c.instructions+=2;goto B5136f0;
case 0x5136f2:c.instructions+=1;goto B5136f2;
case 0x5136f4:goto L5136f4;
case 0x5136f8:c.instructions+=1;goto B5136f8;
case 0x5136fa:goto L5136fa;
case 0x5136fc:c.instructions+=2;goto B5136fc;
case 0x5136fd:c.instructions+=1;goto B5136fd;
case 0x513700:goto L513700;
case 0x513704:c.instructions+=4;goto B513704;
case 0x513707:c.instructions+=3;goto B513707;
case 0x51370c:c.instructions+=2;goto B51370c;
case 0x51370e:c.instructions+=1;goto B51370e;
case 0x513710:goto L513710;
case 0x513713:c.instructions+=1;goto B513713;
case 0x513715:goto L513715;
case 0x513717:c.instructions+=2;goto B513717;
case 0x513718:c.instructions+=1;goto B513718;
case 0x51371b:goto L51371b;
case 0x51371f:c.instructions+=4;goto B51371f;
case 0x513722:c.instructions+=3;goto B513722;
case 0x513727:c.instructions+=2;goto B513727;
case 0x513729:c.instructions+=1;goto B513729;
case 0x51372b:goto L51372b;
case 0x51372f:c.instructions+=1;goto B51372f;
case 0x513731:goto L513731;
case 0x513733:c.instructions+=2;goto B513733;
case 0x513734:c.instructions+=1;goto B513734;
case 0x513737:goto L513737;
case 0x513739:goto L513739;
case 0x51373a:c.instructions+=1;goto B51373a;
case 0x513770:goto L513770;
case 0x513771:c.instructions+=10;goto B513771;
case 0x513772:c.instructions+=9;goto B513772;
case 0x513773:c.instructions+=8;goto B513773;
case 0x513777:c.instructions+=7;goto B513777;
case 0x513778:c.instructions+=6;goto B513778;
case 0x513779:c.instructions+=5;goto B513779;
case 0x51377b:c.instructions+=4;goto B51377b;
case 0x513783:c.instructions+=3;goto B513783;
case 0x513789:c.instructions+=2;goto B513789;
case 0x51378e:c.instructions+=1;goto B51378e;
case 0x513790:goto L513790;
case 0x513792:c.instructions+=2;goto B513792;
case 0x513794:c.instructions+=1;goto B513794;
case 0x513796:goto L513796;
case 0x513797:c.instructions+=3;goto B513797;
case 0x513798:c.instructions+=2;goto B513798;
case 0x51379a:c.instructions+=1;goto B51379a;
case 0x51379f:goto L51379f;
case 0x5137a1:c.instructions+=1;goto B5137a1;
case 0x5137a3:goto L5137a3;
case 0x5137a7:goto L5137a7;
case 0x5137aa:c.instructions+=2;goto B5137aa;
case 0x5137ab:c.instructions+=1;goto B5137ab;
case 0x5137ad:goto L5137ad;
case 0x5137b1:c.instructions+=6;goto B5137b1;
case 0x5137b2:c.instructions+=5;goto B5137b2;
case 0x5137b3:c.instructions+=4;goto B5137b3;
case 0x5137b4:c.instructions+=3;goto B5137b4;
case 0x5137b5:c.instructions+=2;goto B5137b5;
case 0x5137b6:c.instructions+=1;goto B5137b6;
case 0x5137c0:goto L5137c0;
case 0x5137c1:c.instructions+=13;goto B5137c1;
case 0x5137c3:c.instructions+=12;goto B5137c3;
case 0x5137c6:c.instructions+=11;goto B5137c6;
case 0x5137cb:c.instructions+=10;goto B5137cb;
case 0x5137d1:c.instructions+=9;goto B5137d1;
case 0x5137d6:c.instructions+=8;goto B5137d6;
case 0x5137d7:c.instructions+=7;goto B5137d7;
case 0x5137da:c.instructions+=6;goto B5137da;
case 0x5137e0:c.instructions+=5;goto B5137e0;
case 0x5137e2:c.instructions+=4;goto B5137e2;
case 0x5137e4:c.instructions+=3;goto B5137e4;
case 0x5137e5:c.instructions+=2;goto B5137e5;
case 0x5137e8:c.instructions+=1;goto B5137e8;
case 0x5137ea:goto L5137ea;
case 0x5137ee:c.instructions+=3;goto B5137ee;
case 0x5137f1:c.instructions+=2;goto B5137f1;
case 0x5137f3:c.instructions+=1;goto B5137f3;
case 0x5137f5:goto L5137f5;
case 0x5137fc:c.instructions+=1;goto B5137fc;
case 0x5137ff:goto L5137ff;
case 0x513803:c.instructions+=2;goto B513803;
case 0x513805:c.instructions+=1;goto B513805;
case 0x513807:goto L513807;
case 0x513808:c.instructions+=1;goto B513808;
case 0x51380b:goto L51380b;
case 0x51380f:c.instructions+=2;goto B51380f;
case 0x513811:c.instructions+=1;goto B513811;
case 0x513813:goto L513813;
case 0x513814:c.instructions+=1;goto B513814;
case 0x513817:goto L513817;
case 0x51381b:c.instructions+=2;goto B51381b;
case 0x51381d:c.instructions+=1;goto B51381d;
case 0x51381f:goto L51381f;
case 0x513820:c.instructions+=1;goto B513820;
case 0x513823:goto L513823;
case 0x513825:c.instructions+=1;goto B513825;
case 0x513827:goto L513827;
case 0x513828:c.instructions+=3;goto B513828;
case 0x51382b:c.instructions+=2;goto B51382b;
case 0x513831:c.instructions+=1;goto B513831;
case 0x513836:goto L513836;
case 0x513838:c.instructions+=2;goto B513838;
case 0x51383a:c.instructions+=1;goto B51383a;
case 0x51383c:goto L51383c;
case 0x51383d:c.instructions+=1;goto B51383d;
case 0x513842:goto L513842;
case 0x513845:c.instructions+=4;goto B513845;
case 0x513848:c.instructions+=3;goto B513848;
case 0x513849:c.instructions+=2;goto B513849;
case 0x51384a:c.instructions+=1;goto B51384a;
case 0x51384f:goto L51384f;
case 0x513851:c.instructions+=1;goto B513851;
case 0x513853:goto L513853;
case 0x513856:goto L513856;
case 0x513859:c.instructions+=2;goto B513859;
case 0x51385a:c.instructions+=1;goto B51385a;
case 0x51385c:goto L51385c;
case 0x51385f:c.instructions+=6;goto B51385f;
case 0x513860:c.instructions+=5;goto B513860;
case 0x513861:c.instructions+=4;goto B513861;
case 0x513862:c.instructions+=3;goto B513862;
case 0x513864:c.instructions+=2;goto B513864;
case 0x513865:c.instructions+=1;goto B513865;
case 0x513868:goto L513868;
case 0x513869:c.instructions+=5;goto B513869;
case 0x51386b:c.instructions+=4;goto B51386b;
case 0x51386c:c.instructions+=3;goto B51386c;
case 0x51386e:c.instructions+=2;goto B51386e;
case 0x51386f:c.instructions+=1;goto B51386f;
case 0x513880:goto L513880;
case 0x513886:c.instructions+=3;goto B513886;
case 0x513889:c.instructions+=2;goto B513889;
case 0x51388a:c.instructions+=1;goto B51388a;
case 0x51388f:goto L51388f;
case 0x513890:goto L513890;
case 0x513891:c.instructions+=5;goto B513891;
case 0x513895:c.instructions+=4;goto B513895;
case 0x513897:c.instructions+=3;goto B513897;
case 0x513898:c.instructions+=2;goto B513898;
case 0x51389a:c.instructions+=1;goto B51389a;
case 0x51389c:goto L51389c;
case 0x5138a0:c.instructions+=2;goto B5138a0;
case 0x5138a1:c.instructions+=1;goto B5138a1;
case 0x5138a3:goto L5138a3;
case 0x5138a4:c.instructions+=1;goto B5138a4;
case 0x5138a6:goto L5138a6;
case 0x5138a9:c.instructions+=2;goto B5138a9;
case 0x5138aa:c.instructions+=1;goto B5138aa;
case 0x5138af:goto L5138af;
case 0x5138b1:c.instructions+=1;goto B5138b1;
case 0x5138b3:goto L5138b3;
case 0x5138b4:c.instructions+=3;goto B5138b4;
case 0x5138b6:c.instructions+=2;goto B5138b6;
case 0x5138b7:c.instructions+=1;goto B5138b7;
case 0x5138ba:goto L5138ba;
case 0x5138c0:c.instructions+=2;goto B5138c0;
case 0x5138c3:c.instructions+=1;goto B5138c3;
case 0x5138c5:goto L5138c5;
case 0x5138c9:c.instructions+=3;goto B5138c9;
case 0x5138d0:c.instructions+=2;goto B5138d0;
case 0x5138d2:c.instructions+=1;goto B5138d2;
case 0x5138d4:goto L5138d4;
case 0x5138d5:c.instructions+=3;goto B5138d5;
case 0x5138da:c.instructions+=2;goto B5138da;
case 0x5138db:c.instructions+=1;goto B5138db;
case 0x5138de:goto L5138de;
case 0x5138df:c.instructions+=3;goto B5138df;
case 0x5138e1:c.instructions+=2;goto B5138e1;
case 0x5138e2:c.instructions+=1;goto B5138e2;
case 0x5138f0:goto L5138f0;
case 0x5138f4:c.instructions+=3;goto B5138f4;
case 0x5138f7:c.instructions+=2;goto B5138f7;
case 0x5138f8:c.instructions+=1;goto B5138f8;
case 0x5138fd:goto L5138fd;
case 0x513901:c.instructions+=1;goto B513901;
case 0x513910:goto L513910;
case 0x513917:c.instructions+=1;goto B513917;
case 0x513919:goto L513919;
case 0x51391e:c.instructions+=2;goto B51391e;
case 0x513920:c.instructions+=1;goto B513920;
case 0x513922:goto L513922;
case 0x513927:c.instructions+=1;goto B513927;
case 0x51392c:goto L51392c;
case 0x51392d:c.instructions+=1;goto B51392d;
case 0x513932:goto L513932;
case 0x513935:c.instructions+=2;goto B513935;
case 0x51393a:c.instructions+=1;goto B51393a;
case 0x51393b:goto L51393b;
case 0x513941:goto L513941;
case 0x513950:goto L513950;
case 0x513952:c.instructions+=5;goto B513952;
case 0x513958:c.instructions+=4;goto B513958;
case 0x51395e:c.instructions+=3;goto B51395e;
case 0x513965:c.instructions+=2;goto B513965;
case 0x51396c:c.instructions+=1;goto B51396c;
case 0x51396e:goto L51396e;
case 0x513973:c.instructions+=3;goto B513973;
case 0x513976:c.instructions+=2;goto B513976;
case 0x513978:c.instructions+=1;goto B513978;
case 0x51397a:goto L51397a;
case 0x51397d:c.instructions+=10;goto B51397d;
case 0x51397e:c.instructions+=9;goto B51397e;
case 0x513981:c.instructions+=8;goto B513981;
case 0x513984:c.instructions+=7;goto B513984;
case 0x513986:c.instructions+=6;goto B513986;
case 0x51398c:c.instructions+=5;goto B51398c;
case 0x513992:c.instructions+=4;goto B513992;
case 0x513993:c.instructions+=3;goto B513993;
case 0x513999:c.instructions+=2;goto B513999;
case 0x5139a0:c.instructions+=1;goto B5139a0;
case 0x5139a7:goto L5139a7;
case 0x5139ad:c.instructions+=2;goto B5139ad;
case 0x5139af:c.instructions+=1;goto B5139af;
case 0x5139b1:goto L5139b1;
case 0x5139b6:goto L5139b6;
case 0x5139c0:goto L5139c0;
case 0x5139c1:c.instructions+=5;goto B5139c1;
case 0x5139c3:c.instructions+=4;goto B5139c3;
case 0x5139ca:c.instructions+=3;goto B5139ca;
case 0x5139d0:c.instructions+=2;goto B5139d0;
case 0x5139d2:c.instructions+=1;goto B5139d2;
case 0x5139d4:goto L5139d4;
case 0x5139d7:c.instructions+=3;goto B5139d7;
case 0x5139d8:c.instructions+=2;goto B5139d8;
case 0x5139dd:c.instructions+=1;goto B5139dd;
case 0x5139e2:goto L5139e2;
case 0x5139e4:c.instructions+=1;goto B5139e4;
case 0x5139e6:goto L5139e6;
case 0x5139ea:goto L5139ea;
case 0x5139f4:c.instructions+=1;goto B5139f4;
case 0x5139fe:goto L5139fe;
case 0x513a03:c.instructions+=2;goto B513a03;
case 0x513a05:c.instructions+=1;goto B513a05;
case 0x513a07:goto L513a07;
case 0x513a0d:c.instructions+=3;goto B513a0d;
case 0x513a10:c.instructions+=2;goto B513a10;
case 0x513a12:c.instructions+=1;goto B513a12;
case 0x513a14:goto L513a14;
case 0x513a17:c.instructions+=8;goto B513a17;
case 0x513a1a:c.instructions+=7;goto B513a1a;
case 0x513a1d:c.instructions+=6;goto B513a1d;
case 0x513a23:c.instructions+=5;goto B513a23;
case 0x513a25:c.instructions+=4;goto B513a25;
case 0x513a2b:c.instructions+=3;goto B513a2b;
case 0x513a31:c.instructions+=2;goto B513a31;
case 0x513a38:c.instructions+=1;goto B513a38;
case 0x513a3f:goto L513a3f;
case 0x513a40:c.instructions+=1;goto B513a40;
case 0x513a50:goto L513a50;
case 0x513a51:c.instructions+=4;goto B513a51;
case 0x513a53:c.instructions+=3;goto B513a53;
case 0x513a59:c.instructions+=2;goto B513a59;
case 0x513a5b:c.instructions+=1;goto B513a5b;
case 0x513a5d:goto L513a5d;
case 0x513a5f:c.instructions+=2;goto B513a5f;
case 0x513a60:c.instructions+=1;goto B513a60;
case 0x513a63:goto L513a63;
case 0x513a69:c.instructions+=7;goto B513a69;
case 0x513a6a:c.instructions+=6;goto B513a6a;
case 0x513a6b:c.instructions+=5;goto B513a6b;
case 0x513a71:c.instructions+=4;goto B513a71;
case 0x513a75:c.instructions+=3;goto B513a75;
case 0x513a78:c.instructions+=2;goto B513a78;
case 0x513a7b:c.instructions+=1;goto B513a7b;
case 0x513a7d:goto L513a7d;
case 0x513a80:c.instructions+=3;goto B513a80;
case 0x513a81:c.instructions+=2;goto B513a81;
case 0x513a83:c.instructions+=1;goto B513a83;
case 0x513a88:goto L513a88;
case 0x513a8a:c.instructions+=1;goto B513a8a;
case 0x513a8c:goto L513a8c;
case 0x513a90:c.instructions+=4;goto B513a90;
case 0x513a92:c.instructions+=3;goto B513a92;
case 0x513a93:c.instructions+=2;goto B513a93;
case 0x513a94:c.instructions+=1;goto B513a94;
case 0x513a99:goto L513a99;
case 0x513a9c:c.instructions+=5;goto B513a9c;
case 0x513a9d:c.instructions+=4;goto B513a9d;
case 0x513a9e:c.instructions+=3;goto B513a9e;
case 0x513aa0:c.instructions+=2;goto B513aa0;
case 0x513aa1:c.instructions+=1;goto B513aa1;
case 0x513aa4:goto L513aa4;
case 0x513aa8:c.instructions+=2;goto B513aa8;
case 0x513aaa:c.instructions+=1;goto B513aaa;
case 0x513aac:goto L513aac;
case 0x513ab3:c.instructions+=1;goto B513ab3;
case 0x513ab5:goto L513ab5;
case 0x513ab9:c.instructions+=4;goto B513ab9;
case 0x513abb:c.instructions+=3;goto B513abb;
case 0x513ac0:c.instructions+=2;goto B513ac0;
case 0x513ac1:c.instructions+=1;goto B513ac1;
case 0x513ac6:goto L513ac6;
case 0x513ac9:c.instructions+=5;goto B513ac9;
case 0x513aca:c.instructions+=4;goto B513aca;
case 0x513acb:c.instructions+=3;goto B513acb;
case 0x513acd:c.instructions+=2;goto B513acd;
case 0x513ace:c.instructions+=1;goto B513ace;
case 0x513ad1:goto L513ad1;
case 0x513ad8:c.instructions+=1;goto B513ad8;
case 0x513ada:goto L513ada;
case 0x513adf:c.instructions+=2;goto B513adf;
case 0x513ae1:c.instructions+=1;goto B513ae1;
case 0x513ae6:goto L513ae6;
case 0x513ae8:c.instructions+=2;goto B513ae8;
case 0x513aea:c.instructions+=1;goto B513aea;
case 0x513aec:goto L513aec;
case 0x513af0:c.instructions+=3;goto B513af0;
case 0x513af5:c.instructions+=2;goto B513af5;
case 0x513af6:c.instructions+=1;goto B513af6;
case 0x513afb:goto L513afb;
case 0x513afe:c.instructions+=5;goto B513afe;
case 0x513aff:c.instructions+=4;goto B513aff;
case 0x513b00:c.instructions+=3;goto B513b00;
case 0x513b02:c.instructions+=2;goto B513b02;
case 0x513b03:c.instructions+=1;goto B513b03;
case 0x513b06:goto L513b06;
case 0x513b0a:c.instructions+=3;goto B513b0a;
case 0x513b0f:c.instructions+=2;goto B513b0f;
case 0x513b10:c.instructions+=1;goto B513b10;
case 0x513b15:goto L513b15;
case 0x513b18:c.instructions+=5;goto B513b18;
case 0x513b19:c.instructions+=4;goto B513b19;
case 0x513b1a:c.instructions+=3;goto B513b1a;
case 0x513b1c:c.instructions+=2;goto B513b1c;
case 0x513b1d:c.instructions+=1;goto B513b1d;
case 0x513b20:goto L513b20;
case 0x513b21:c.instructions+=4;goto B513b21;
case 0x513b22:c.instructions+=3;goto B513b22;
case 0x513b24:c.instructions+=2;goto B513b24;
case 0x513b25:c.instructions+=1;goto B513b25;
case 0x513b30:goto L513b30;
case 0x513b35:c.instructions+=8;goto B513b35;
case 0x513b38:c.instructions+=7;goto B513b38;
case 0x513b39:c.instructions+=6;goto B513b39;
case 0x513b3b:c.instructions+=5;goto B513b3b;
case 0x513b3d:c.instructions+=4;goto B513b3d;
case 0x513b3e:c.instructions+=3;goto B513b3e;
case 0x513b40:c.instructions+=2;goto B513b40;
case 0x513b42:c.instructions+=1;goto B513b42;
case 0x513b44:goto L513b44;
case 0x513b4a:c.instructions+=1;goto B513b4a;
case 0x513b4c:goto L513b4c;
case 0x513b52:c.instructions+=9;goto B513b52;
case 0x513b55:c.instructions+=8;goto B513b55;
case 0x513b58:c.instructions+=7;goto B513b58;
case 0x513b5b:c.instructions+=6;goto B513b5b;
case 0x513b5d:c.instructions+=5;goto B513b5d;
case 0x513b63:c.instructions+=4;goto B513b63;
case 0x513b69:c.instructions+=3;goto B513b69;
case 0x513b6f:c.instructions+=2;goto B513b6f;
case 0x513b76:c.instructions+=1;goto B513b76;
case 0x513b7d:goto L513b7d;
case 0x513b83:c.instructions+=5;goto B513b83;
case 0x513b89:c.instructions+=4;goto B513b89;
case 0x513b8f:c.instructions+=3;goto B513b8f;
case 0x513b95:c.instructions+=2;goto B513b95;
case 0x513b97:c.instructions+=1;goto B513b97;
case 0x513b99:goto L513b99;
case 0x513b9c:c.instructions+=3;goto B513b9c;
case 0x513b9d:c.instructions+=2;goto B513b9d;
case 0x513ba2:c.instructions+=1;goto B513ba2;
case 0x513ba7:goto L513ba7;
case 0x513ba9:c.instructions+=1;goto B513ba9;
case 0x513bab:goto L513bab;
case 0x513bae:goto L513bae;
case 0x513bb4:c.instructions+=1;goto B513bb4;
case 0x513bba:goto L513bba;
case 0x513bbb:c.instructions+=2;goto B513bbb;
case 0x513bbc:c.instructions+=1;goto B513bbc;
case 0x513bc0:goto L513bc0;
case 0x513bc5:c.instructions+=2;goto B513bc5;
case 0x513bc7:c.instructions+=1;goto B513bc7;
case 0x513bc9:goto L513bc9;
case 0x513bcf:c.instructions+=2;goto B513bcf;
case 0x513bd1:c.instructions+=1;goto B513bd1;
case 0x513bd3:goto L513bd3;
case 0x513bd9:c.instructions+=3;goto B513bd9;
case 0x513bdf:c.instructions+=2;goto B513bdf;
case 0x513be2:c.instructions+=1;goto B513be2;
case 0x513be4:goto L513be4;
case 0x513be9:goto L513be9;
case 0x513bf0:goto L513bf0;
case 0x513bf1:c.instructions+=3;goto B513bf1;
case 0x513bf3:c.instructions+=2;goto B513bf3;
case 0x513bf8:c.instructions+=1;goto B513bf8;
case 0x513bfd:goto L513bfd;
case 0x513bff:c.instructions+=1;goto B513bff;
case 0x513c01:goto L513c01;
case 0x513c06:c.instructions+=1;goto B513c06;
case 0x513c0b:goto L513c0b;
case 0x513c0d:c.instructions+=1;goto B513c0d;
case 0x513c0f:goto L513c0f;
case 0x513c15:c.instructions+=2;goto B513c15;
case 0x513c17:c.instructions+=1;goto B513c17;
case 0x513c19:goto L513c19;
case 0x513c23:goto L513c23;
case 0x513c24:c.instructions+=1;goto B513c24;
case 0x513c30:goto L513c30;
case 0x513c36:c.instructions+=3;goto B513c36;
case 0x513c37:c.instructions+=2;goto B513c37;
case 0x513c3c:c.instructions+=1;goto B513c3c;
case 0x513c41:goto L513c41;
case 0x513c50:goto L513c50;
case 0x513c53:c.instructions+=7;goto B513c53;
case 0x513c54:c.instructions+=6;goto B513c54;
case 0x513c55:c.instructions+=5;goto B513c55;
case 0x513c56:c.instructions+=4;goto B513c56;
case 0x513c5a:c.instructions+=3;goto B513c5a;
case 0x513c5f:c.instructions+=2;goto B513c5f;
case 0x513c64:c.instructions+=1;goto B513c64;
case 0x513c68:goto L513c68;
case 0x513c6a:goto L513c6a;
case 0x513c6c:c.instructions+=4;goto B513c6c;
case 0x513c71:c.instructions+=3;goto B513c71;
case 0x513c73:c.instructions+=2;goto B513c73;
case 0x513c75:c.instructions+=1;goto B513c75;
case 0x513c77:goto L513c77;
case 0x513c79:c.instructions+=1;goto B513c79;
case 0x513c80:goto L513c80;
case 0x513c82:c.instructions+=1;goto B513c82;
case 0x513c84:goto L513c84;
case 0x513c86:c.instructions+=1;goto B513c86;
case 0x513c88:goto L513c88;
case 0x513c8d:c.instructions+=3;goto B513c8d;
case 0x513c90:c.instructions+=2;goto B513c90;
case 0x513c92:c.instructions+=1;goto B513c92;
case 0x513c94:goto L513c94;
case 0x513c99:goto L513c99;
case 0x513c9b:c.instructions+=1;goto B513c9b;
case 0x513c9d:goto L513c9d;
case 0x513ca0:c.instructions+=2;goto B513ca0;
case 0x513ca1:c.instructions+=1;goto B513ca1;
case 0x513ca3:goto L513ca3;
case 0x513ca6:c.instructions+=1;goto B513ca6;
case 0x513ca7:goto L513ca7;
case 0x513cac:goto L513cac;
case 0x513caf:c.instructions+=2;goto B513caf;
case 0x513cb1:c.instructions+=1;goto B513cb1;
case 0x513cb3:goto L513cb3;
case 0x513cb6:c.instructions+=3;goto B513cb6;
case 0x513cba:c.instructions+=2;goto B513cba;
case 0x513cbb:c.instructions+=1;goto B513cbb;
case 0x513cc0:goto L513cc0;
case 0x513cc2:c.instructions+=1;goto B513cc2;
case 0x513cc4:goto L513cc4;
case 0x513cc6:c.instructions+=2;goto B513cc6;
case 0x513cc7:c.instructions+=1;goto B513cc7;
case 0x513ccc:goto L513ccc;
case 0x513cd2:c.instructions+=2;goto B513cd2;
case 0x513cd5:c.instructions+=1;goto B513cd5;
case 0x513cda:goto L513cda;
case 0x513cdf:c.instructions+=4;goto B513cdf;
case 0x513ce0:c.instructions+=3;goto B513ce0;
case 0x513ce3:c.instructions+=2;goto B513ce3;
case 0x513ce5:c.instructions+=1;goto B513ce5;
case 0x513ce7:goto L513ce7;
case 0x513ceb:c.instructions+=2;goto B513ceb;
case 0x513ced:c.instructions+=1;goto B513ced;
case 0x513cf0:goto L513cf0;
case 0x513cf4:c.instructions+=2;goto B513cf4;
case 0x513cf6:c.instructions+=1;goto B513cf6;
case 0x513cf8:goto L513cf8;
case 0x513cfa:c.instructions+=1;goto B513cfa;
case 0x513cff:goto L513cff;
case 0x513d02:c.instructions+=2;goto B513d02;
case 0x513d04:c.instructions+=1;goto B513d04;
case 0x513d06:goto L513d06;
case 0x513d09:c.instructions+=1;goto B513d09;
case 0x513d0b:goto L513d0b;
case 0x513d0d:goto L513d0d;
case 0x513d10:c.instructions+=4;goto B513d10;
case 0x513d12:c.instructions+=3;goto B513d12;
case 0x513d15:c.instructions+=2;goto B513d15;
case 0x513d18:c.instructions+=1;goto B513d18;
case 0x513d1a:goto L513d1a;
case 0x513d1b:c.instructions+=2;goto B513d1b;
case 0x513d1e:c.instructions+=1;goto B513d1e;
case 0x513d20:goto L513d20;
case 0x513d21:c.instructions+=4;goto B513d21;
case 0x513d22:c.instructions+=3;goto B513d22;
case 0x513d23:c.instructions+=2;goto B513d23;
case 0x513d26:c.instructions+=1;goto B513d26;
case 0x513d30:goto L513d30;
case 0x513d36:c.instructions+=2;goto B513d36;
case 0x513d39:c.instructions+=1;goto B513d39;
case 0x513d3b:goto L513d3b;
case 0x513d3d:c.instructions+=1;goto B513d3d;
case 0x513d3e:goto L513d3e;
case 0x513d40:c.instructions+=8;goto B513d40;
case 0x513d46:c.instructions+=7;goto B513d46;
case 0x513d48:c.instructions+=6;goto B513d48;
case 0x513d49:c.instructions+=5;goto B513d49;
case 0x513d4a:c.instructions+=4;goto B513d4a;
case 0x513d50:c.instructions+=3;goto B513d50;
case 0x513d54:c.instructions+=2;goto B513d54;
case 0x513d5a:c.instructions+=1;goto B513d5a;
case 0x513d5c:goto L513d5c;
case 0x513d62:c.instructions+=2;goto B513d62;
case 0x513d64:c.instructions+=1;goto B513d64;
case 0x513d66:goto L513d66;
case 0x513d68:c.instructions+=1;goto B513d68;
case 0x513d6a:goto L513d6a;
case 0x513d6c:c.instructions+=2;goto B513d6c;
case 0x513d6e:c.instructions+=1;goto B513d6e;
case 0x513d70:goto L513d70;
case 0x513d76:c.instructions+=2;goto B513d76;
case 0x513d78:c.instructions+=1;goto B513d78;
case 0x513d7a:goto L513d7a;
case 0x513d7c:goto L513d7c;
case 0x513d82:c.instructions+=2;goto B513d82;
case 0x513d84:c.instructions+=1;goto B513d84;
case 0x513d86:goto L513d86;
case 0x513d88:c.instructions+=1;goto B513d88;
case 0x513d8a:goto L513d8a;
case 0x513d8c:c.instructions+=1;goto B513d8c;
case 0x513d8e:goto L513d8e;
case 0x513d91:c.instructions+=1;goto B513d91;
case 0x513d93:goto L513d93;
case 0x513d99:c.instructions+=4;goto B513d99;
case 0x513d9f:c.instructions+=3;goto B513d9f;
case 0x513da1:c.instructions+=2;goto B513da1;
case 0x513da4:c.instructions+=1;goto B513da4;
case 0x513da6:goto L513da6;
case 0x513da7:c.instructions+=3;goto B513da7;
case 0x513da9:c.instructions+=2;goto B513da9;
case 0x513daa:c.instructions+=1;goto B513daa;
case 0x513dab:goto L513dab;
case 0x513dac:c.instructions+=3;goto B513dac;
case 0x513dae:c.instructions+=2;goto B513dae;
case 0x513daf:c.instructions+=1;goto B513daf;
case 0x513db0:goto L513db0;
case 0x513db7:c.instructions+=1;goto B513db7;
case 0x513db9:goto L513db9;
case 0x513dbe:c.instructions+=2;goto B513dbe;
case 0x513dc0:c.instructions+=1;goto B513dc0;
case 0x513dc2:goto L513dc2;
case 0x513dc8:c.instructions+=5;goto B513dc8;
case 0x513dce:c.instructions+=4;goto B513dce;
case 0x513dd0:c.instructions+=3;goto B513dd0;
case 0x513dd6:c.instructions+=2;goto B513dd6;
case 0x513ddc:c.instructions+=1;goto B513ddc;
case 0x513dde:goto L513dde;
case 0x513de3:goto L513de3;
case 0x513de5:c.instructions+=1;goto B513de5;
case 0x513de7:goto L513de7;
case 0x513df1:c.instructions+=1;goto B513df1;
case 0x513dfb:goto L513dfb;
case 0x513e00:goto L513e00;
case 0x513e07:c.instructions+=1;goto B513e07;
case 0x513e09:goto L513e09;
case 0x513e0e:c.instructions+=2;goto B513e0e;
case 0x513e10:c.instructions+=1;goto B513e10;
case 0x513e12:goto L513e12;
case 0x513e17:c.instructions+=2;goto B513e17;
case 0x513e19:c.instructions+=1;goto B513e19;
case 0x513e1b:goto L513e1b;
case 0x513e1d:c.instructions+=1;goto B513e1d;
case 0x513e20:goto L513e20;
case 0x513e25:c.instructions+=3;goto B513e25;
case 0x513e27:c.instructions+=2;goto B513e27;
case 0x513e2a:c.instructions+=1;goto B513e2a;
case 0x513e30:goto L513e30;
case 0x513e31:c.instructions+=6;goto B513e31;
case 0x513e34:c.instructions+=5;goto B513e34;
case 0x513e3a:c.instructions+=4;goto B513e3a;
case 0x513e3c:c.instructions+=3;goto B513e3c;
case 0x513e3e:c.instructions+=2;goto B513e3e;
case 0x513e3f:c.instructions+=1;goto B513e3f;
case 0x513e41:goto L513e41;
case 0x513e45:c.instructions+=1;goto B513e45;
case 0x513e48:goto L513e48;
case 0x513e4a:c.instructions+=1;goto B513e4a;
case 0x513e4c:goto L513e4c;
case 0x513e4d:c.instructions+=3;goto B513e4d;
case 0x513e53:c.instructions+=2;goto B513e53;
case 0x513e55:c.instructions+=1;goto B513e55;
case 0x513e57:goto L513e57;
case 0x513e58:c.instructions+=4;goto B513e58;
case 0x513e5a:c.instructions+=3;goto B513e5a;
case 0x513e5c:c.instructions+=2;goto B513e5c;
case 0x513e5d:c.instructions+=1;goto B513e5d;
case 0x513e60:goto L513e60;
case 0x513e66:c.instructions+=5;goto B513e66;
case 0x513e67:c.instructions+=4;goto B513e67;
case 0x513e69:c.instructions+=3;goto B513e69;
case 0x513e6b:c.instructions+=2;goto B513e6b;
case 0x513e6c:c.instructions+=1;goto B513e6c;
case 0x513e70:goto L513e70;
case 0x513e74:c.instructions+=2;goto B513e74;
case 0x513e76:c.instructions+=1;goto B513e76;
case 0x513e78:goto L513e78;
case 0x513e7b:c.instructions+=1;goto B513e7b;
case 0x513e7d:goto L513e7d;
case 0x513e80:c.instructions+=2;goto B513e80;
case 0x513e84:c.instructions+=1;goto B513e84;
case 0x513e86:goto L513e86;
case 0x513e88:goto L513e88;
case 0x513e8b:c.instructions+=3;goto B513e8b;
case 0x513e91:c.instructions+=2;goto B513e91;
case 0x513e92:c.instructions+=1;goto B513e92;
case 0x513e97:goto L513e97;
case 0x513e9e:c.instructions+=1;goto B513e9e;
case 0x513eb0:goto L513eb0;
case 0x513eb1:c.instructions+=3;goto B513eb1;
case 0x513eb5:c.instructions+=2;goto B513eb5;
case 0x513eb7:c.instructions+=1;goto B513eb7;
case 0x513eb9:goto L513eb9;
case 0x513ebc:c.instructions+=1;goto B513ebc;
case 0x513ebe:goto L513ebe;
case 0x513ec1:c.instructions+=2;goto B513ec1;
case 0x513ec5:c.instructions+=1;goto B513ec5;
case 0x513ec7:goto L513ec7;
case 0x513ec9:goto L513ec9;
case 0x513ecc:c.instructions+=8;goto B513ecc;
case 0x513ecd:c.instructions+=7;goto B513ecd;
case 0x513ece:c.instructions+=6;goto B513ece;
case 0x513ed4:c.instructions+=5;goto B513ed4;
case 0x513ed6:c.instructions+=4;goto B513ed6;
case 0x513ed8:c.instructions+=3;goto B513ed8;
case 0x513eda:c.instructions+=2;goto B513eda;
case 0x513ede:c.instructions+=1;goto B513ede;
case 0x513ee4:goto L513ee4;
case 0x513ee5:c.instructions+=4;goto B513ee5;
case 0x513ee8:c.instructions+=3;goto B513ee8;
case 0x513ee9:c.instructions+=2;goto B513ee9;
case 0x513eed:c.instructions+=1;goto B513eed;
case 0x513ef0:goto L513ef0;
case 0x513ef2:c.instructions+=1;goto B513ef2;
case 0x513ef4:goto L513ef4;
case 0x513ef6:c.instructions+=1;goto B513ef6;
case 0x513ef8:goto L513ef8;
case 0x513efb:c.instructions+=1;goto B513efb;
case 0x513efd:goto L513efd;
case 0x513eff:c.instructions+=1;goto B513eff;
case 0x513f01:goto L513f01;
case 0x513f03:goto L513f03;
case 0x513f07:c.instructions+=1;goto B513f07;
case 0x513f09:goto L513f09;
case 0x513f0b:c.instructions+=1;goto B513f0b;
case 0x513f0d:goto L513f0d;
case 0x513f0f:c.instructions+=1;goto B513f0f;
case 0x513f11:goto L513f11;
case 0x513f14:c.instructions+=1;goto B513f14;
case 0x513f16:goto L513f16;
case 0x513f18:c.instructions+=1;goto B513f18;
case 0x513f1a:goto L513f1a;
case 0x513f1c:goto L513f1c;
case 0x513f20:c.instructions+=1;goto B513f20;
case 0x513f22:goto L513f22;
case 0x513f24:c.instructions+=1;goto B513f24;
case 0x513f26:goto L513f26;
case 0x513f28:c.instructions+=1;goto B513f28;
case 0x513f2a:goto L513f2a;
case 0x513f2d:c.instructions+=1;goto B513f2d;
case 0x513f2f:goto L513f2f;
case 0x513f31:c.instructions+=1;goto B513f31;
case 0x513f33:goto L513f33;
case 0x513f35:goto L513f35;
case 0x513f3b:c.instructions+=4;goto B513f3b;
case 0x513f3e:c.instructions+=3;goto B513f3e;
case 0x513f40:c.instructions+=2;goto B513f40;
case 0x513f42:c.instructions+=1;goto B513f42;
case 0x513f44:goto L513f44;
case 0x513f47:goto L513f47;
case 0x513f49:c.instructions+=1;goto B513f49;
case 0x513f4b:goto L513f4b;
case 0x513f4c:c.instructions+=3;goto B513f4c;
case 0x513f52:c.instructions+=2;goto B513f52;
case 0x513f54:c.instructions+=1;goto B513f54;
case 0x513f56:goto L513f56;
case 0x513f5a:goto L513f5a;
case 0x513f5c:goto L513f5c;
case 0x513f5e:c.instructions+=2;goto B513f5e;
case 0x513f65:c.instructions+=1;goto B513f65;
case 0x513f69:goto L513f69;
case 0x513f6a:c.instructions+=4;goto B513f6a;
case 0x513f70:c.instructions+=3;goto B513f70;
case 0x513f72:c.instructions+=2;goto B513f72;
case 0x513f76:c.instructions+=1;goto B513f76;
case 0x513f7c:goto L513f7c;
case 0x513f80:c.instructions+=6;goto B513f80;
case 0x513f81:c.instructions+=5;goto B513f81;
case 0x513f82:c.instructions+=4;goto B513f82;
case 0x513f83:c.instructions+=3;goto B513f83;
case 0x513f84:c.instructions+=2;goto B513f84;
case 0x513f85:c.instructions+=1;goto B513f85;
case 0x513f88:goto L513f88;
case 0x513f8c:c.instructions+=3;goto B513f8c;
case 0x513f92:c.instructions+=2;goto B513f92;
case 0x513f94:c.instructions+=1;goto B513f94;
case 0x513f96:goto L513f96;
case 0x513f97:c.instructions+=4;goto B513f97;
case 0x513f99:c.instructions+=3;goto B513f99;
case 0x513f9a:c.instructions+=2;goto B513f9a;
case 0x513f9b:c.instructions+=1;goto B513f9b;
case 0x513fa0:goto L513fa0;
case 0x513fa6:c.instructions+=2;goto B513fa6;
case 0x513fa8:c.instructions+=1;goto B513fa8;
case 0x513faa:goto L513faa;
case 0x513fab:c.instructions+=7;goto B513fab;
case 0x513fb1:c.instructions+=6;goto B513fb1;
case 0x513fb7:c.instructions+=5;goto B513fb7;
case 0x513fbb:c.instructions+=4;goto B513fbb;
case 0x513fc1:c.instructions+=3;goto B513fc1;
case 0x513fc3:c.instructions+=2;goto B513fc3;
case 0x513fc4:c.instructions+=1;goto B513fc4;
case 0x513fc6:goto L513fc6;
case 0x513fc8:c.instructions+=1;goto B513fc8;
case 0x513fca:goto L513fca;
case 0x513fcc:c.instructions+=1;goto B513fcc;
case 0x513fcd:goto L513fcd;
case 0x513fcf:c.instructions+=2;goto B513fcf;
case 0x513fd2:c.instructions+=1;goto B513fd2;
case 0x513fd7:goto L513fd7;
case 0x513fdb:c.instructions+=2;goto B513fdb;
case 0x513fde:c.instructions+=1;goto B513fde;
case 0x513fe0:goto L513fe0;
case 0x513fe3:c.instructions+=9;goto B513fe3;
case 0x513fe9:c.instructions+=8;goto B513fe9;
case 0x513fea:c.instructions+=7;goto B513fea;
case 0x513fec:c.instructions+=6;goto B513fec;
case 0x513ff2:c.instructions+=5;goto B513ff2;
case 0x513ff7:c.instructions+=4;goto B513ff7;
case 0x513ff9:c.instructions+=3;goto B513ff9;
case 0x513ffa:c.instructions+=2;goto B513ffa;
case 0x513ffb:c.instructions+=1;goto B513ffb;
default:missing_instruction(c.pc);}
B513002:L513002:{c.instructions+=2;NFSU2_TR(0x513002);
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
B513004:{NFSU2_TR(0x513004);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L513047;}}
}
B513006:L513006:{c.instructions+=5;NFSU2_TR(0x513006);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B513007:{NFSU2_TR(0x513007);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B513008:{NFSU2_TR(0x513008);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B51300b:{NFSU2_TR(0x51300b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51300c:{NFSU2_TR(0x51300c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x513011ull));
TAIL_STATIC(0x5003b0u,500);
}
B513011:L513011:{c.instructions+=3;NFSU2_TR(0x513011);
__builtin_memmove((R+24),(R+0),4);
}
B513013:{NFSU2_TR(0x513013);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B513015:{NFSU2_TR(0x513015);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51301f;}}
}
B513017:L513017:{c.instructions+=2;NFSU2_TR(0x513017);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B513018:{NFSU2_TR(0x513018);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51301dull));
TAIL_STATIC(0x512f10u,512);
}
B51301d:L51301d:{c.instructions+=1;NFSU2_TR(0x51301d);
__builtin_memmove((R+24),(R+0),4);
}
B51301f:L51301f:{c.instructions+=3;NFSU2_TR(0x51301f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B513022:{NFSU2_TR(0x513022);
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
B513024:{NFSU2_TR(0x513024);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L513041;}}
}
B513026:L513026:{c.instructions+=3;NFSU2_TR(0x513026);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x51ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B513029:{NFSU2_TR(0x513029);
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
B51302b:{NFSU2_TR(0x51302b);
if(r1(R+518)){{goto L513041;}}
}
B51302d:L51302d:{c.instructions+=4;NFSU2_TR(0x51302d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B513031:{NFSU2_TR(0x513031);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B513032:{NFSU2_TR(0x513032);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B513033:{NFSU2_TR(0x513033);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x513038ull));
TAIL_STATIC(0x500e20u,500);
}
B513038:L513038:{c.instructions+=2;NFSU2_TR(0x513038);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B513039:{NFSU2_TR(0x513039);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51303eull));
TAIL_STATIC(0x4eccf0u,4ec);
}
B51303e:L51303e:{c.instructions+=1;NFSU2_TR(0x51303e);
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
B513041:L513041:{c.instructions+=3;NFSU2_TR(0x513041);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B513042:{NFSU2_TR(0x513042);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B513046:{NFSU2_TR(0x513046);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B513047:L513047:{c.instructions+=2;NFSU2_TR(0x513047);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B513048:{NFSU2_TR(0x513048);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B513050:L513050:{c.instructions+=10;NFSU2_TR(0x513050);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B513054:{NFSU2_TR(0x513054);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B513056:{NFSU2_TR(0x513056);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B513057:{NFSU2_TR(0x513057);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8700ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51305d:{NFSU2_TR(0x51305d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x871cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B513063:{NFSU2_TR(0x513063);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8724ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B513069:{NFSU2_TR(0x513069);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8728ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51306f:{NFSU2_TR(0x51306f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8720ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B513075:{NFSU2_TR(0x513075);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+0)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B513077:{NFSU2_TR(0x513077);
if(r1(R+518)){{goto L513099;}}
}
B513079:L513079:{c.instructions+=3;NFSU2_TR(0x513079);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51307c:{NFSU2_TR(0x51307c);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B51307e:{NFSU2_TR(0x51307e);
if(r1(R+518)){{goto L513099;}}
}
B513080:L513080:{c.instructions+=2;NFSU2_TR(0x513080);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4216ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(r1(R+0))));
w1(R+523,sborrow<u8>(r1(U+8),r1(R+0)));
w1(U+9,u8(u32(r1(U+8))-u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B513086:{NFSU2_TR(0x513086);
if(r1(R+518)){{goto L513099;}}
}
B513088:L513088:{c.instructions+=3;NFSU2_TR(0x513088);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4218ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51308e:{NFSU2_TR(0x51308e);
u8 U[22];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+24),r4(U+14)));
w4(U+18,u32(u32(r4(R+24))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B513091:{NFSU2_TR(0x513091);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L513099;}}
}
B513093:L513093:{c.instructions+=1;NFSU2_TR(0x513093);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4216ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B513099:L513099:{c.instructions+=2;NFSU2_TR(0x513099);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51309a:{NFSU2_TR(0x51309a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5130a0:L5130a0:{c.instructions+=9;NFSU2_TR(0x5130a0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5130a1:{NFSU2_TR(0x5130a1);
__builtin_memmove((R+12),gp(0x8383e4),4);
}
B5130a7:{NFSU2_TR(0x5130a7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5130a8:{NFSU2_TR(0x5130a8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5130a9:{NFSU2_TR(0x5130a9);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5130ab:{NFSU2_TR(0x5130ab);
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
B5130ad:{NFSU2_TR(0x5130ad);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5130ae:{NFSU2_TR(0x5130ae);
__builtin_memmove((R+20),(R+4),4);
}
B5130b0:{NFSU2_TR(0x5130b0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5130f2;}}
}
B5130b2:L5130b2:{c.instructions+=3;NFSU2_TR(0x5130b2);
__builtin_memmove((R+28),gp(0x8383e0),4);
}
B5130b8:{NFSU2_TR(0x5130b8);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
}
B5130bb:{NFSU2_TR(0x5130bb);
{goto L5130c0;}
}
B5130c0:L5130c0:{c.instructions+=2;NFSU2_TR(0x5130c0);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5130c2:{NFSU2_TR(0x5130c2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5130e7;}}
}
B5130c4:L5130c4:{c.instructions+=2;NFSU2_TR(0x5130c4);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5130c6:{NFSU2_TR(0x5130c6);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5130e7;}}
}
B5130c8:L5130c8:{c.instructions+=3;NFSU2_TR(0x5130c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5130cb:{NFSU2_TR(0x5130cb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5130cd:{NFSU2_TR(0x5130cd);
if(r1(R+518)){{goto L5130e7;}}
}
B5130cf:L5130cf:{c.instructions+=3;NFSU2_TR(0x5130cf);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B5130d3:{NFSU2_TR(0x5130d3);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5130d7:{NFSU2_TR(0x5130d7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5130e7;}}
}
B5130d9:L5130d9:{c.instructions+=4;NFSU2_TR(0x5130d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5130db:{NFSU2_TR(0x5130db);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5130dc:{NFSU2_TR(0x5130dc);
__builtin_memmove((R+4),(R+20),4);
}
B5130de:{NFSU2_TR(0x5130de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5130e3ull));
TAIL_STATIC(0x500b80u,500);
}
B5130e3:L5130e3:{c.instructions+=2;NFSU2_TR(0x5130e3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5130e5:{NFSU2_TR(0x5130e5);
if(r1(R+518)){{goto L5130fb;}}
}
B5130e7:L5130e7:{c.instructions+=4;NFSU2_TR(0x5130e7);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5130e8:{NFSU2_TR(0x5130e8);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x88ull))));
}
B5130ee:{NFSU2_TR(0x5130ee);
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
B5130f0:{NFSU2_TR(0x5130f0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5130c0u);}goto L5130c0;}}
}
B5130f2:L5130f2:{c.instructions+=6;NFSU2_TR(0x5130f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5130f3:{NFSU2_TR(0x5130f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5130f4:{NFSU2_TR(0x5130f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5130f5:{NFSU2_TR(0x5130f5);
w1(R+0,u8(0x1ull));
}
B5130f7:{NFSU2_TR(0x5130f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5130f8:{NFSU2_TR(0x5130f8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5130fb:L5130fb:{c.instructions+=6;NFSU2_TR(0x5130fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5130fc:{NFSU2_TR(0x5130fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5130fd:{NFSU2_TR(0x5130fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5130fe:{NFSU2_TR(0x5130fe);
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
B513100:{NFSU2_TR(0x513100);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B513101:{NFSU2_TR(0x513101);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B513110:L513110:{c.instructions+=3;NFSU2_TR(0x513110);
__builtin_memmove((R+0),gp(0x838441),1);
}
B513115:{NFSU2_TR(0x513115);
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
B513117:{NFSU2_TR(0x513117);
if(r1(R+518)){{goto L51311e;}}
}
B513119:L513119:{c.instructions+=2;NFSU2_TR(0x513119);
w1(R+0,u8(0x1ull));
}
B51311b:{NFSU2_TR(0x51311b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51311e:L51311e:{c.instructions+=6;NFSU2_TR(0x51311e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7af8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B513124:{NFSU2_TR(0x513124);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B513125:{NFSU2_TR(0x513125);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B513129:{NFSU2_TR(0x513129);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B513130:{NFSU2_TR(0x513130);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B513132:{NFSU2_TR(0x513132);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L51313a;}}
}
B513134:L513134:{c.instructions+=3;NFSU2_TR(0x513134);
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
B513136:{NFSU2_TR(0x513136);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B513137:{NFSU2_TR(0x513137);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51313a:L51313a:{c.instructions+=3;NFSU2_TR(0x51313a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x51ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B51313d:{NFSU2_TR(0x51313d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B51313f:{NFSU2_TR(0x51313f);
if(r1(R+518)){{goto L513154;}}
}
B513141:L513141:{c.instructions+=3;NFSU2_TR(0x513141);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B513144:{NFSU2_TR(0x513144);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B513145:{NFSU2_TR(0x513145);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51314aull));
TAIL_STATIC(0x5003b0u,500);
}
B51314a:L51314a:{c.instructions+=2;NFSU2_TR(0x51314a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51314c:{NFSU2_TR(0x51314c);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x513134u);}goto L513134;}}
}
B51314e:L51314e:{c.instructions+=2;NFSU2_TR(0x51314e);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B513152:{NFSU2_TR(0x513152);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x513134u);}goto L513134;}}
}
B513154:L513154:{c.instructions+=2;NFSU2_TR(0x513154);
__builtin_memmove((R+4),(R+24),4);
}
B513156:{NFSU2_TR(0x513156);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51315bull));
TAIL_STATIC(0x512870u,512);
}
B51315b:L51315b:{c.instructions+=2;NFSU2_TR(0x51315b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51315c:{NFSU2_TR(0x51315c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B513160:L513160:{c.instructions+=10;NFSU2_TR(0x513160);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B513163:{NFSU2_TR(0x513163);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B513164:{NFSU2_TR(0x513164);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B513165:{NFSU2_TR(0x513165);
__builtin_memmove((R+24),gp(0x8383e4),4);
}
B51316b:{NFSU2_TR(0x51316b);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B51316d:{NFSU2_TR(0x51316d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B51316f:{NFSU2_TR(0x51316f);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B513171:{NFSU2_TR(0x513171);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B513175:{NFSU2_TR(0x513175);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B513179:{NFSU2_TR(0x513179);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5132aa;}}
}
B51317f:L51317f:{c.instructions+=6;NFSU2_TR(0x51317f);
__builtin_memmove((R+0),gp(0x8383e0),4);
}
B513184:{NFSU2_TR(0x513184);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B513185:{NFSU2_TR(0x513185);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B513186:{NFSU2_TR(0x513186);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51318a:{NFSU2_TR(0x51318a);
w1(R+12,u8(0x1ull));
}
B51318c:{NFSU2_TR(0x51318c);
__builtin_memmove((R+16),(R+16),4);
}
B513190:L513190:{c.instructions+=2;NFSU2_TR(0x513190);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B513192:{NFSU2_TR(0x513192);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L513198;}}
}
B513194:L513194:{c.instructions+=2;NFSU2_TR(0x513194);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B513196:{NFSU2_TR(0x513196);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L51319a;}}
}
B513198:L513198:{c.instructions+=1;NFSU2_TR(0x513198);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B51319a:L51319a:{c.instructions+=3;NFSU2_TR(0x51319a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51319e:{NFSU2_TR(0x51319e);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B5131a1:{NFSU2_TR(0x5131a1);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L513276;}}
}
B5131a7:L5131a7:{c.instructions+=1;NFSU2_TR(0x5131a7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x5132c4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5131ae:L5131ae:{c.instructions+=2;NFSU2_TR(0x5131ae);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5131b2:{NFSU2_TR(0x5131b2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L513276;}}
}
B5131b8:L5131b8:{c.instructions+=2;NFSU2_TR(0x5131b8);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5131bb:{NFSU2_TR(0x5131bb);
if(r1(R+518)){{goto L513276;}}
}
B5131c1:L5131c1:{c.instructions+=3;NFSU2_TR(0x5131c1);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5131c4:{NFSU2_TR(0x5131c4);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5131c6:{NFSU2_TR(0x5131c6);
{goto L513226;}
}
B5131c8:L5131c8:{c.instructions+=2;NFSU2_TR(0x5131c8);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5131cc:{NFSU2_TR(0x5131cc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L513276;}}
}
B5131d2:L5131d2:{c.instructions+=2;NFSU2_TR(0x5131d2);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5131d5:{NFSU2_TR(0x5131d5);
if(r1(R+518)){{goto L513276;}}
}
B5131db:L5131db:{c.instructions+=2;NFSU2_TR(0x5131db);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5131de:{NFSU2_TR(0x5131de);
{goto L513224;}
}
B5131e0:L5131e0:{c.instructions+=2;NFSU2_TR(0x5131e0);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5131e4:{NFSU2_TR(0x5131e4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L513276;}}
}
B5131ea:L5131ea:{c.instructions+=2;NFSU2_TR(0x5131ea);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5131ed:{NFSU2_TR(0x5131ed);
if(r1(R+518)){{goto L513276;}}
}
B5131f3:L5131f3:{c.instructions+=2;NFSU2_TR(0x5131f3);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x5ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5131f7:{NFSU2_TR(0x5131f7);
{goto L513226;}
}
B5131f9:L5131f9:{c.instructions+=2;NFSU2_TR(0x5131f9);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5131fd:{NFSU2_TR(0x5131fd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L513276;}}
}
B5131ff:L5131ff:{c.instructions+=2;NFSU2_TR(0x5131ff);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B513202:{NFSU2_TR(0x513202);
if(r1(R+518)){{goto L513276;}}
}
B513204:L513204:{c.instructions+=2;NFSU2_TR(0x513204);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x4ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B513208:{NFSU2_TR(0x513208);
{goto L513226;}
}
B51320a:L51320a:{c.instructions+=2;NFSU2_TR(0x51320a);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B51320e:{NFSU2_TR(0x51320e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L513276;}}
}
B513210:L513210:{c.instructions+=2;NFSU2_TR(0x513210);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B513213:{NFSU2_TR(0x513213);
if(r1(R+518)){{goto L513276;}}
}
B513215:L513215:{c.instructions+=2;NFSU2_TR(0x513215);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B513219:{NFSU2_TR(0x513219);
{goto L513226;}
}
B51321b:L51321b:{c.instructions+=2;NFSU2_TR(0x51321b);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B51321f:{NFSU2_TR(0x51321f);
{goto L513226;}
}
B513221:L513221:{c.instructions+=1;NFSU2_TR(0x513221);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B513224:L513224:{c.instructions+=1;NFSU2_TR(0x513224);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+8))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B513226:L513226:{c.instructions+=1;NFSU2_TR(0x513226);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L513276;}}
}
B513228:L513228:{c.instructions+=5;NFSU2_TR(0x513228);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7afcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51322e:{NFSU2_TR(0x51322e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B513231:{NFSU2_TR(0x513231);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B513233:{NFSU2_TR(0x513233);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B513235:{NFSU2_TR(0x513235);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L513267;}}
}
B513237:L513237:{c.instructions+=2;NFSU2_TR(0x513237);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7b00ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51323d:{NFSU2_TR(0x51323d);
__builtin_memmove((R+4),(R+4),4);
}
B513240:L513240:{c.instructions+=2;NFSU2_TR(0x513240);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+0))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B513242:{NFSU2_TR(0x513242);
if(r1(R+518)){{goto L51324e;}}
}
B513244:L513244:{c.instructions+=4;NFSU2_TR(0x513244);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B513245:{NFSU2_TR(0x513245);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
}
B513248:{NFSU2_TR(0x513248);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B51324a:{NFSU2_TR(0x51324a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x513240u);}goto L513240;}}
}
B51324c:L51324c:{c.instructions+=1;NFSU2_TR(0x51324c);
{goto L513267;}
}
B51324e:L51324e:{c.instructions+=3;NFSU2_TR(0x51324e);
u8 U[12];
w4(U+0,u32(u32(u32(0x7b00ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B513255:{NFSU2_TR(0x513255);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B513257:{NFSU2_TR(0x513257);
if(r1(R+518)){{goto L513267;}}
}
B513259:L513259:{c.instructions+=4;NFSU2_TR(0x513259);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B51325c:{NFSU2_TR(0x51325c);
__builtin_memmove((R+0),(R+518),1);
}
B51325f:{NFSU2_TR(0x51325f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B513261:{NFSU2_TR(0x513261);
if(r1(R+518)){{goto L513267;}}
}
B513263:L513263:{c.instructions+=1;NFSU2_TR(0x513263);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B513267:L513267:{c.instructions+=4;NFSU2_TR(0x513267);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51326b:{NFSU2_TR(0x51326b);
__builtin_memmove((R+24),gp(0x8383e4),4);
}
B513271:{NFSU2_TR(0x513271);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B513272:{NFSU2_TR(0x513272);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B513276:L513276:{c.instructions+=6;NFSU2_TR(0x513276);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51327a:{NFSU2_TR(0x51327a);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B51327b:{NFSU2_TR(0x51327b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x88ull))));
}
B513280:{NFSU2_TR(0x513280);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B513282:{NFSU2_TR(0x513282);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B513286:{NFSU2_TR(0x513286);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x513190u);}goto L513190;}}
}
B51328c:L51328c:{c.instructions+=12;NFSU2_TR(0x51328c);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B513290:{NFSU2_TR(0x513290);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B513294:{NFSU2_TR(0x513294);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B513298:{NFSU2_TR(0x513298);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B513299:{NFSU2_TR(0x513299);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51329a:{NFSU2_TR(0x51329a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B51329c:{NFSU2_TR(0x51329c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5132a0:{NFSU2_TR(0x5132a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5132a1:{NFSU2_TR(0x5132a1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5132a3:{NFSU2_TR(0x5132a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5132a4:{NFSU2_TR(0x5132a4);
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
B5132a7:{NFSU2_TR(0x5132a7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5132aa:L5132aa:{c.instructions+=9;NFSU2_TR(0x5132aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5132ae:{NFSU2_TR(0x5132ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5132b2:{NFSU2_TR(0x5132b2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5132b4:{NFSU2_TR(0x5132b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5132b8:{NFSU2_TR(0x5132b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5132b9:{NFSU2_TR(0x5132b9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5132bb:{NFSU2_TR(0x5132bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5132bc:{NFSU2_TR(0x5132bc);
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
B5132bf:{NFSU2_TR(0x5132bf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5132e0:L5132e0:{c.instructions+=12;NFSU2_TR(0x5132e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B5132e3:{NFSU2_TR(0x5132e3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5132e4:{NFSU2_TR(0x5132e4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5132e5:{NFSU2_TR(0x5132e5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5132e6:{NFSU2_TR(0x5132e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5132ec:{NFSU2_TR(0x5132ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5132ef:{NFSU2_TR(0x5132ef);
{u32 ea_=u32(r4(R+28)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5132f2:{NFSU2_TR(0x5132f2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5132f6:{NFSU2_TR(0x5132f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5132fc:{NFSU2_TR(0x5132fc);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5132fe:{NFSU2_TR(0x5132fe);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B513300:{NFSU2_TR(0x513300);
if(r1(R+518)){{goto L513307;}}
}
B513302:L513302:{c.instructions+=1;NFSU2_TR(0x513302);
w4(R+24,u32(0x1ull));
}
B513307:L513307:{c.instructions+=3;NFSU2_TR(0x513307);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51330d:{NFSU2_TR(0x51330d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51330f:{NFSU2_TR(0x51330f);
if(r1(R+518)){{goto L513312;}}
}
B513311:L513311:{c.instructions+=1;NFSU2_TR(0x513311);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B513312:L513312:{c.instructions+=3;NFSU2_TR(0x513312);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B513318:{NFSU2_TR(0x513318);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51331a:{NFSU2_TR(0x51331a);
if(r1(R+518)){{goto L51331d;}}
}
B51331c:L51331c:{c.instructions+=1;NFSU2_TR(0x51331c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B51331d:L51331d:{c.instructions+=3;NFSU2_TR(0x51331d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B513323:{NFSU2_TR(0x513323);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B513325:{NFSU2_TR(0x513325);
if(r1(R+518)){{goto L513328;}}
}
B513327:L513327:{c.instructions+=1;NFSU2_TR(0x513327);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B513328:L513328:{c.instructions+=1;NFSU2_TR(0x513328);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51332dull));
TAIL_STATIC(0x500520u,500);
}
B51332d:L51332d:{c.instructions+=2;NFSU2_TR(0x51332d);
__builtin_memmove((R+12),(R+0),4);
}
B51332f:{NFSU2_TR(0x51332f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x513334ull));
TAIL_STATIC(0x5004d0u,500);
}
B513334:L513334:{c.instructions+=17;NFSU2_TR(0x513334);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x42ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B513338:{NFSU2_TR(0x513338);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+12))));
}
B51333a:{NFSU2_TR(0x51333a);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B51333c:{NFSU2_TR(0x51333c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B513340:{NFSU2_TR(0x513340);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B513344:{NFSU2_TR(0x513344);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B513345:{NFSU2_TR(0x513345);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B513349:{NFSU2_TR(0x513349);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51334a:{NFSU2_TR(0x51334a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51334b:{NFSU2_TR(0x51334b);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51334f:{NFSU2_TR(0x51334f);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B513353:{NFSU2_TR(0x513353);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B513357:{NFSU2_TR(0x513357);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51335b:{NFSU2_TR(0x51335b);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B51335f:{NFSU2_TR(0x51335f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B513361:{NFSU2_TR(0x513361);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B513364:{NFSU2_TR(0x513364);
if(r1(R+518)){{goto L51338b;}}
}
B513366:L513366:{c.instructions+=5;NFSU2_TR(0x513366);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51336a:{NFSU2_TR(0x51336a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B513370:{NFSU2_TR(0x513370);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B513372:{NFSU2_TR(0x513372);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B513375:{NFSU2_TR(0x513375);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L51338b;}}
}
B513377:L513377:{c.instructions+=6;NFSU2_TR(0x513377);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51337b:{NFSU2_TR(0x51337b);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B51337f:{NFSU2_TR(0x51337f);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B513381:{NFSU2_TR(0x513381);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B513385:{NFSU2_TR(0x513385);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B513387:{NFSU2_TR(0x513387);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B51338b:L51338b:{c.instructions+=2;NFSU2_TR(0x51338b);
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
B51338e:{NFSU2_TR(0x51338e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B513390:L513390:{c.instructions+=6;NFSU2_TR(0x513390);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B513391:{NFSU2_TR(0x513391);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B513392:{NFSU2_TR(0x513392);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B513396:{NFSU2_TR(0x513396);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B513399:{NFSU2_TR(0x513399);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B51339b:{NFSU2_TR(0x51339b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5133c7;}}
}
B51339d:L51339d:{c.instructions+=2;NFSU2_TR(0x51339d);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5133a1:{NFSU2_TR(0x5133a1);
if(r1(R+518)){{goto L5133c7;}}
}
B5133a3:L5133a3:{c.instructions+=1;NFSU2_TR(0x5133a3);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5133a5:L5133a5:{c.instructions+=3;NFSU2_TR(0x5133a5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5133a8:{NFSU2_TR(0x5133a8);
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
B5133aa:{NFSU2_TR(0x5133aa);
if(r1(R+518)){{goto L5133bc;}}
}
B5133ac:L5133ac:{c.instructions+=2;NFSU2_TR(0x5133ac);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+14)));
w4(U+18,u32(u32(r4(R+0))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5133af:{NFSU2_TR(0x5133af);
if(r1(R+518)){{goto L5133bc;}}
}
B5133b1:L5133b1:{c.instructions+=3;NFSU2_TR(0x5133b1);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5133b2:{NFSU2_TR(0x5133b2);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(U+6))<(u32(0x23ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x23ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x23ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5133b5:{NFSU2_TR(0x5133b5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5133a5u);}goto L5133a5;}}
}
B5133b7:L5133b7:{c.instructions+=3;NFSU2_TR(0x5133b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5133b8:{NFSU2_TR(0x5133b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5133b9:{NFSU2_TR(0x5133b9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5133bc:L5133bc:{c.instructions+=5;NFSU2_TR(0x5133bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5133bf:{NFSU2_TR(0x5133bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5133c0:{NFSU2_TR(0x5133c0);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B5133c3:{NFSU2_TR(0x5133c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5133c4:{NFSU2_TR(0x5133c4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5133c7:L5133c7:{c.instructions+=2;NFSU2_TR(0x5133c7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5133c9:{NFSU2_TR(0x5133c9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5133fb;}}
}
B5133cb:L5133cb:{c.instructions+=2;NFSU2_TR(0x5133cb);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5133cd:{NFSU2_TR(0x5133cd);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8cull))));
__builtin_memmove((R+24),(U+0),4);
}
B5133d3:L5133d3:{c.instructions+=3;NFSU2_TR(0x5133d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5133d5:{NFSU2_TR(0x5133d5);
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
B5133d7:{NFSU2_TR(0x5133d7);
if(r1(R+518)){{goto L5133ec;}}
}
B5133d9:L5133d9:{c.instructions+=2;NFSU2_TR(0x5133d9);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+14)));
w4(U+18,u32(u32(r4(R+0))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5133dc:{NFSU2_TR(0x5133dc);
if(r1(R+518)){{goto L5133ec;}}
}
B5133de:L5133de:{c.instructions+=4;NFSU2_TR(0x5133de);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5133df:{NFSU2_TR(0x5133df);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B5133e2:{NFSU2_TR(0x5133e2);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B5133e5:{NFSU2_TR(0x5133e5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5133d3u);}goto L5133d3;}}
}
B5133e7:L5133e7:{c.instructions+=3;NFSU2_TR(0x5133e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5133e8:{NFSU2_TR(0x5133e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5133e9:{NFSU2_TR(0x5133e9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5133ec:L5133ec:{c.instructions+=5;NFSU2_TR(0x5133ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5133ef:{NFSU2_TR(0x5133ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5133f0:{NFSU2_TR(0x5133f0);
u8 U[16];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5133f7:{NFSU2_TR(0x5133f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5133f8:{NFSU2_TR(0x5133f8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5133fb:L5133fb:{c.instructions+=2;NFSU2_TR(0x5133fb);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x2ull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x2ull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5133fd:{NFSU2_TR(0x5133fd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51342a;}}
}
B5133ff:L5133ff:{c.instructions+=2;NFSU2_TR(0x5133ff);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B513401:{NFSU2_TR(0x513401);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9cull))));
__builtin_memmove((R+24),(U+0),4);
}
B513407:L513407:{c.instructions+=3;NFSU2_TR(0x513407);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B513409:{NFSU2_TR(0x513409);
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
B51340b:{NFSU2_TR(0x51340b);
if(r1(R+518)){{goto L513420;}}
}
B51340d:L51340d:{c.instructions+=2;NFSU2_TR(0x51340d);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+14)));
w4(U+18,u32(u32(r4(R+8))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B513410:{NFSU2_TR(0x513410);
if(r1(R+518)){{goto L513420;}}
}
B513412:L513412:{c.instructions+=4;NFSU2_TR(0x513412);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B513413:{NFSU2_TR(0x513413);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B513416:{NFSU2_TR(0x513416);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xaull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xaull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B513419:{NFSU2_TR(0x513419);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x513407u);}goto L513407;}}
}
B51341b:L51341b:{c.instructions+=3;NFSU2_TR(0x51341b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51341c:{NFSU2_TR(0x51341c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51341d:{NFSU2_TR(0x51341d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B513420:L513420:{c.instructions+=2;NFSU2_TR(0x513420);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B513423:{NFSU2_TR(0x513423);
u8 U[16];
w4(U+0,u32(u32(u32(0x9cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B51342a:L51342a:{c.instructions+=3;NFSU2_TR(0x51342a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51342b:{NFSU2_TR(0x51342b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51342c:{NFSU2_TR(0x51342c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B513430:L513430:{c.instructions+=8;NFSU2_TR(0x513430);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B513431:{NFSU2_TR(0x513431);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B513432:{NFSU2_TR(0x513432);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B513433:{NFSU2_TR(0x513433);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B513437:{NFSU2_TR(0x513437);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B51343a:{NFSU2_TR(0x51343a);
u8 U[4];
w4(U+0,u32(0x79aff0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51343f:{NFSU2_TR(0x51343f);
__builtin_memmove((R+24),(R+4),4);
}
B513441:{NFSU2_TR(0x513441);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x513446ull));
TAIL_STATIC(0x43db50u,43d);
}
B513446:L513446:{c.instructions+=3;NFSU2_TR(0x513446);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B513449:{NFSU2_TR(0x513449);
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
B51344b:{NFSU2_TR(0x51344b);
if(r1(R+518)){{goto L513488;}}
}
B51344d:L51344d:{c.instructions+=3;NFSU2_TR(0x51344d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B513450:{NFSU2_TR(0x513450);
u8 U[4];
w4(U+0,u32(0x79afe0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B513455:{NFSU2_TR(0x513455);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51345aull));
TAIL_STATIC(0x43db50u,43d);
}
B51345a:L51345a:{c.instructions+=3;NFSU2_TR(0x51345a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B51345d:{NFSU2_TR(0x51345d);
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
B51345f:{NFSU2_TR(0x51345f);
if(r1(R+518)){{goto L513488;}}
}
B513461:L513461:{c.instructions+=4;NFSU2_TR(0x513461);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B513465:{NFSU2_TR(0x513465);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B513466:{NFSU2_TR(0x513466);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B513467:{NFSU2_TR(0x513467);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51346cull));
TAIL_STATIC(0x512b50u,512);
}
B51346c:L51346c:{c.instructions+=6;NFSU2_TR(0x51346c);
{u32 ea_=u32(r4(R+24)+u32(224u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B513472:{NFSU2_TR(0x513472);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B513478:{NFSU2_TR(0x513478);
w1(R+512,carry<u32>(r4(R+16),u32(0x8ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B51347b:{NFSU2_TR(0x51347b);
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
B51347c:{NFSU2_TR(0x51347c);
{u32 ea_=u32(r4(R+24)+u32(224u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B513482:{NFSU2_TR(0x513482);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B513488:L513488:{c.instructions+=4;NFSU2_TR(0x513488);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B513489:{NFSU2_TR(0x513489);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51348a:{NFSU2_TR(0x51348a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51348b:{NFSU2_TR(0x51348b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B513490:L513490:{c.instructions+=9;NFSU2_TR(0x513490);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B513491:{NFSU2_TR(0x513491);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B513492:{NFSU2_TR(0x513492);
__builtin_memmove((R+12),gp(0x838408),4);
}
B513498:{NFSU2_TR(0x513498);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B513499:{NFSU2_TR(0x513499);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B51349b:{NFSU2_TR(0x51349b);
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
B51349d:{NFSU2_TR(0x51349d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51349e:{NFSU2_TR(0x51349e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5134a2:{NFSU2_TR(0x5134a2);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5134f3;}}
}
B5134a4:L5134a4:{c.instructions+=3;NFSU2_TR(0x5134a4);
__builtin_memmove((R+28),gp(0x83840c),4);
}
B5134aa:{NFSU2_TR(0x5134aa);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x35ull))));
}
B5134ad:{NFSU2_TR(0x5134ad);
__builtin_memmove((R+4),(R+4),4);
}
B5134b0:L5134b0:{c.instructions+=2;NFSU2_TR(0x5134b0);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5134b2:{NFSU2_TR(0x5134b2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5134eb;}}
}
B5134b4:L5134b4:{c.instructions+=2;NFSU2_TR(0x5134b4);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5134b6:{NFSU2_TR(0x5134b6);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5134eb;}}
}
B5134b8:L5134b8:{c.instructions+=3;NFSU2_TR(0x5134b8);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffcbull))));
__builtin_memmove((R+0),(U+0),4);
}
B5134bb:{NFSU2_TR(0x5134bb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5134bd:{NFSU2_TR(0x5134bd);
if(r1(R+518)){{goto L5134eb;}}
}
B5134bf:L5134bf:{c.instructions+=6;NFSU2_TR(0x5134bf);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5134c3:{NFSU2_TR(0x5134c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5134c9:{NFSU2_TR(0x5134c9);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B5134cc:{NFSU2_TR(0x5134cc);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B5134d0:{NFSU2_TR(0x5134d0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5134d2:{NFSU2_TR(0x5134d2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5134eb;}}
}
B5134d4:L5134d4:{c.instructions+=2;NFSU2_TR(0x5134d4);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B5134d7:{NFSU2_TR(0x5134d7);
if(r1(R+518)){{goto L5134eb;}}
}
B5134d9:L5134d9:{c.instructions+=4;NFSU2_TR(0x5134d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffebull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5134dc:{NFSU2_TR(0x5134dc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5134dd:{NFSU2_TR(0x5134dd);
w4(R+4,u32(0x85ad40ull));
}
B5134e2:{NFSU2_TR(0x5134e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5134e7ull));
TAIL_STATIC(0x500b80u,500);
}
B5134e7:L5134e7:{c.instructions+=2;NFSU2_TR(0x5134e7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5134e9:{NFSU2_TR(0x5134e9);
if(r1(R+518)){{goto L5134fa;}}
}
B5134eb:L5134eb:{c.instructions+=4;NFSU2_TR(0x5134eb);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5134ec:{NFSU2_TR(0x5134ec);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x40ull))));
}
B5134ef:{NFSU2_TR(0x5134ef);
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
B5134f1:{NFSU2_TR(0x5134f1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5134b0u);}goto L5134b0;}}
}
B5134f3:L5134f3:{c.instructions+=6;NFSU2_TR(0x5134f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5134f4:{NFSU2_TR(0x5134f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5134f5:{NFSU2_TR(0x5134f5);
w1(R+0,u8(0x1ull));
}
B5134f7:{NFSU2_TR(0x5134f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5134f8:{NFSU2_TR(0x5134f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5134f9:{NFSU2_TR(0x5134f9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5134fa:L5134fa:{c.instructions+=6;NFSU2_TR(0x5134fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5134fb:{NFSU2_TR(0x5134fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5134fc:{NFSU2_TR(0x5134fc);
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
B5134fe:{NFSU2_TR(0x5134fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5134ff:{NFSU2_TR(0x5134ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B513500:{NFSU2_TR(0x513500);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B513510:L513510:{c.instructions+=7;NFSU2_TR(0x513510);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B513511:{NFSU2_TR(0x513511);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B513512:{NFSU2_TR(0x513512);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B513516:{NFSU2_TR(0x513516);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B513519:{NFSU2_TR(0x513519);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B51351b:{NFSU2_TR(0x51351b);
__builtin_memmove((R+24),(R+4),4);
}
B51351d:{NFSU2_TR(0x51351d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51353f;}}
}
B51351f:L51351f:{c.instructions+=1;NFSU2_TR(0x51351f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x513524ull));
TAIL_STATIC(0x5004d0u,500);
}
B513524:L513524:{c.instructions+=11;NFSU2_TR(0x513524);
__builtin_memmove((R+4),(R+0),4);
}
B513526:{NFSU2_TR(0x513526);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B513529:{NFSU2_TR(0x513529);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B51352a:{NFSU2_TR(0x51352a);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xffffull))));
}
B513530:{NFSU2_TR(0x513530);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B513532:{NFSU2_TR(0x513532);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B513535:{NFSU2_TR(0x513535);
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
B513537:{NFSU2_TR(0x513537);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B513538:{NFSU2_TR(0x513538);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
__builtin_memmove((R+0),(U+0),1);
}
B51353b:{NFSU2_TR(0x51353b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51353c:{NFSU2_TR(0x51353c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51353f:L51353f:{c.instructions+=2;NFSU2_TR(0x51353f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B513541:{NFSU2_TR(0x513541);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51358c;}}
}
B513543:L513543:{c.instructions+=2;NFSU2_TR(0x513543);
__builtin_memmove((R+4),(R+24),4);
}
B513545:{NFSU2_TR(0x513545);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51354aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x513490u);}goto L513490;}
}
B51354a:L51354a:{c.instructions+=2;NFSU2_TR(0x51354a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B51354c:{NFSU2_TR(0x51354c);
if(r1(R+518)){{goto L51358c;}}
}
B51354e:L51354e:{c.instructions+=5;NFSU2_TR(0x51354e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51354f:{NFSU2_TR(0x51354f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B513552:{NFSU2_TR(0x513552);
__builtin_memmove((R+4),(R+24),4);
}
B513554:{NFSU2_TR(0x513554);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B513558:{NFSU2_TR(0x513558);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51355dull));
TAIL_STATIC(0x5004d0u,500);
}
B51355d:L51355d:{c.instructions+=4;NFSU2_TR(0x51355d);
w4(R+8,u32(r1(R+13)));
}
B513560:{NFSU2_TR(0x513560);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B513562:{NFSU2_TR(0x513562);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B513563:{NFSU2_TR(0x513563);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L51358c;}}
}
B513565:L513565:{c.instructions+=2;NFSU2_TR(0x513565);
__builtin_memmove((R+4),(R+24),4);
}
B513567:{NFSU2_TR(0x513567);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51356cull));
TAIL_STATIC(0x500520u,500);
}
B51356c:L51356c:{c.instructions+=3;NFSU2_TR(0x51356c);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B513571:{NFSU2_TR(0x513571);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B513573:{NFSU2_TR(0x513573);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L51358c;}}
}
B513575:L513575:{c.instructions+=2;NFSU2_TR(0x513575);
__builtin_memmove((R+4),(R+24),4);
}
B513577:{NFSU2_TR(0x513577);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51357cull));
TAIL_STATIC(0x5005a0u,500);
}
B51357c:L51357c:{c.instructions+=3;NFSU2_TR(0x51357c);
u8 U[5];
w4(U+0,u32(u32(u32(0xeull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B513581:{NFSU2_TR(0x513581);
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
B513583:{NFSU2_TR(0x513583);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L51358c;}}
}
B513585:L513585:{c.instructions+=4;NFSU2_TR(0x513585);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B513586:{NFSU2_TR(0x513586);
w1(R+0,u8(0x1ull));
}
B513588:{NFSU2_TR(0x513588);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B513589:{NFSU2_TR(0x513589);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51358c:L51358c:{c.instructions+=4;NFSU2_TR(0x51358c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51358d:{NFSU2_TR(0x51358d);
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
B51358f:{NFSU2_TR(0x51358f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B513590:{NFSU2_TR(0x513590);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5135a0:L5135a0:{c.instructions+=6;NFSU2_TR(0x5135a0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5135a1:{NFSU2_TR(0x5135a1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5135a2:{NFSU2_TR(0x5135a2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5135a3:{NFSU2_TR(0x5135a3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5135a4:{NFSU2_TR(0x5135a4);
__builtin_memmove((R+20),(R+4),4);
}
B5135a6:{NFSU2_TR(0x5135a6);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5135a8:L5135a8:{c.instructions+=3;NFSU2_TR(0x5135a8);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B5135ac:{NFSU2_TR(0x5135ac);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5135ae:{NFSU2_TR(0x5135ae);
if(r1(R+518)){{goto L5135db;}}
}
B5135b0:L5135b0:{c.instructions+=5;NFSU2_TR(0x5135b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5135b4:{NFSU2_TR(0x5135b4);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+4,u32(r2(U+0)));
}
B5135b7:{NFSU2_TR(0x5135b7);
w4(R+4,u32(u32(r4(R+4))+u32(m4(0x838428))));
}
B5135bd:{NFSU2_TR(0x5135bd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5135be:{NFSU2_TR(0x5135be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5135c3ull));
TAIL_STATIC(0x43db50u,43d);
}
B5135c3:L5135c3:{c.instructions+=5;NFSU2_TR(0x5135c3);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+8,u32(r2(U+0)));
}
B5135c6:{NFSU2_TR(0x5135c6);
__builtin_memmove((R+12),(R+0),4);
}
B5135c8:{NFSU2_TR(0x5135c8);
w4(R+8,u32(u32(r4(R+8))+u32(m4(0x838428))));
}
B5135ce:{NFSU2_TR(0x5135ce);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5135cf:{NFSU2_TR(0x5135cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5135d4ull));
TAIL_STATIC(0x43db50u,43d);
}
B5135d4:L5135d4:{c.instructions+=3;NFSU2_TR(0x5135d4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5135d7:{NFSU2_TR(0x5135d7);
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
B5135d9:{NFSU2_TR(0x5135d9);
if(r1(R+518)){{goto L5135ea;}}
}
B5135db:L5135db:{c.instructions+=3;NFSU2_TR(0x5135db);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5135dc:{NFSU2_TR(0x5135dc);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x20ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5135df:{NFSU2_TR(0x5135df);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5135a8u);}goto L5135a8;}}
}
B5135e1:L5135e1:{c.instructions+=6;NFSU2_TR(0x5135e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5135e2:{NFSU2_TR(0x5135e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5135e3:{NFSU2_TR(0x5135e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5135e4:{NFSU2_TR(0x5135e4);
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
B5135e6:{NFSU2_TR(0x5135e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5135e7:{NFSU2_TR(0x5135e7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5135ea:L5135ea:{c.instructions+=6;NFSU2_TR(0x5135ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5135eb:{NFSU2_TR(0x5135eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5135ec:{NFSU2_TR(0x5135ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5135ed:{NFSU2_TR(0x5135ed);
w1(R+0,u8(0x1ull));
}
B5135ef:{NFSU2_TR(0x5135ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5135f0:{NFSU2_TR(0x5135f0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B513600:L513600:{c.instructions+=4;NFSU2_TR(0x513600);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B513604:{NFSU2_TR(0x513604);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xaull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xaull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B513607:{NFSU2_TR(0x513607);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B513608:{NFSU2_TR(0x513608);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L513737;}}
}
B51360e:L51360e:{c.instructions+=1;NFSU2_TR(0x51360e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x513740ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B513615:L513615:{c.instructions+=3;NFSU2_TR(0x513615);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B513619:{NFSU2_TR(0x513619);
__builtin_memmove((R+4),(R+24),4);
}
B51361b:{NFSU2_TR(0x51361b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x513620ull));
TAIL_STATIC(0x4ae8b0u,4ae);
}
B513620:L513620:{c.instructions+=2;NFSU2_TR(0x513620);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B513622:{NFSU2_TR(0x513622);
if(r1(R+518)){{goto L513674;}}
}
B513624:L513624:{c.instructions+=3;NFSU2_TR(0x513624);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B513627:{NFSU2_TR(0x513627);
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
B513629:{NFSU2_TR(0x513629);
{goto L51368d;}
}
B51362b:L51362b:{c.instructions+=3;NFSU2_TR(0x51362b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51362f:{NFSU2_TR(0x51362f);
__builtin_memmove((R+4),(R+24),4);
}
B513631:{NFSU2_TR(0x513631);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x513636ull));
TAIL_STATIC(0x4ae8b0u,4ae);
}
B513636:L513636:{c.instructions+=2;NFSU2_TR(0x513636);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B513638:{NFSU2_TR(0x513638);
if(r1(R+518)){{goto L513674;}}
}
B51363a:L51363a:{c.instructions+=2;NFSU2_TR(0x51363a);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x4ull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x4ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x4ull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B51363e:{NFSU2_TR(0x51363e);
{goto L51368d;}
}
B513640:L513640:{c.instructions+=3;NFSU2_TR(0x513640);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B513644:{NFSU2_TR(0x513644);
__builtin_memmove((R+4),(R+24),4);
}
B513646:{NFSU2_TR(0x513646);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51364bull));
TAIL_STATIC(0x4ae8b0u,4ae);
}
B51364b:L51364b:{c.instructions+=2;NFSU2_TR(0x51364b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B51364d:{NFSU2_TR(0x51364d);
if(r1(R+518)){{goto L513674;}}
}
B51364f:L51364f:{c.instructions+=2;NFSU2_TR(0x51364f);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x5ull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x5ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x5ull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B513653:{NFSU2_TR(0x513653);
{goto L51368d;}
}
B513655:L513655:{c.instructions+=3;NFSU2_TR(0x513655);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B513659:{NFSU2_TR(0x513659);
__builtin_memmove((R+4),(R+24),4);
}
B51365b:{NFSU2_TR(0x51365b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x513660ull));
TAIL_STATIC(0x4ae8b0u,4ae);
}
B513660:L513660:{c.instructions+=2;NFSU2_TR(0x513660);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B513662:{NFSU2_TR(0x513662);
if(r1(R+518)){{goto L513674;}}
}
B513664:L513664:{c.instructions+=4;NFSU2_TR(0x513664);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B513667:{NFSU2_TR(0x513667);
w4(R+0,u32(0x1ull));
}
B51366c:{NFSU2_TR(0x51366c);
u8 U[5];
__builtin_memmove((U+3),(R+0),1);
w1(R+512,u8((r1(R+4))<(r1(U+3))));
w1(R+523,sborrow<u8>(r1(R+4),r1(U+3)));
w1(U+4,u8(u32(r1(R+4))-u32(r1(U+3))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B51366e:{NFSU2_TR(0x51366e);
if(r1(R+518)){{goto L513739;}}
}
B513674:L513674:{c.instructions+=3;NFSU2_TR(0x513674);
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
B513676:{NFSU2_TR(0x513676);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B513677:{NFSU2_TR(0x513677);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51367a:L51367a:{c.instructions+=3;NFSU2_TR(0x51367a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51367e:{NFSU2_TR(0x51367e);
__builtin_memmove((R+4),(R+24),4);
}
B513680:{NFSU2_TR(0x513680);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x513685ull));
TAIL_STATIC(0x4ae8b0u,4ae);
}
B513685:L513685:{c.instructions+=2;NFSU2_TR(0x513685);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B513687:{NFSU2_TR(0x513687);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x513674u);}goto L513674;}}
}
B513689:L513689:{c.instructions+=1;NFSU2_TR(0x513689);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x2ull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x2ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B51368d:L51368d:{c.instructions+=1;NFSU2_TR(0x51368d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x513674u);}goto L513674;}}
}
B51368f:L51368f:{c.instructions+=3;NFSU2_TR(0x51368f);
w4(R+0,u32(0x1ull));
}
B513694:{NFSU2_TR(0x513694);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B513695:{NFSU2_TR(0x513695);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B513698:L513698:{c.instructions+=7;NFSU2_TR(0x513698);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51369c:{NFSU2_TR(0x51369c);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B51369f:{NFSU2_TR(0x51369f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5136a1:{NFSU2_TR(0x5136a1);
u8 U[5];
__builtin_memmove((U+3),(R+8),1);
w1(R+512,u8((r1(U+3))<(u8(0x1ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x1ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5136a4:{NFSU2_TR(0x5136a4);
__builtin_memmove((R+0),(R+518),1);
}
B5136a7:{NFSU2_TR(0x5136a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5136a8:{NFSU2_TR(0x5136a8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5136ab:L5136ab:{c.instructions+=5;NFSU2_TR(0x5136ab);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5136af:{NFSU2_TR(0x5136af);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5136b2:{NFSU2_TR(0x5136b2);
w4(R+0,u32(0x1ull));
}
B5136b7:{NFSU2_TR(0x5136b7);
u8 U[2];
__builtin_memmove((U+0),(R+0),1);
w1(U+1,u8(u32(r1(R+8))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5136b9:{NFSU2_TR(0x5136b9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5136c2;}}
}
B5136bb:L5136bb:{c.instructions+=3;NFSU2_TR(0x5136bb);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5136be:{NFSU2_TR(0x5136be);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5136c0:{NFSU2_TR(0x5136c0);
if(r1(R+518)){{goto L513739;}}
}
B5136c2:L5136c2:{c.instructions+=3;NFSU2_TR(0x5136c2);
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
B5136c4:{NFSU2_TR(0x5136c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5136c5:{NFSU2_TR(0x5136c5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5136c8:L5136c8:{c.instructions+=5;NFSU2_TR(0x5136c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5136cc:{NFSU2_TR(0x5136cc);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5136cf:{NFSU2_TR(0x5136cf);
w4(R+0,u32(0x1ull));
}
B5136d4:{NFSU2_TR(0x5136d4);
u8 U[2];
__builtin_memmove((U+0),(R+0),1);
w1(U+1,u8(u32(r1(R+8))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5136d6:{NFSU2_TR(0x5136d6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5136de;}}
}
B5136d8:L5136d8:{c.instructions+=2;NFSU2_TR(0x5136d8);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x4ull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x4ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x4ull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B5136dc:{NFSU2_TR(0x5136dc);
if(r1(R+518)){{goto L513739;}}
}
B5136de:L5136de:{c.instructions+=3;NFSU2_TR(0x5136de);
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
B5136e0:{NFSU2_TR(0x5136e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5136e1:{NFSU2_TR(0x5136e1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5136e4:L5136e4:{c.instructions+=5;NFSU2_TR(0x5136e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5136e8:{NFSU2_TR(0x5136e8);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5136eb:{NFSU2_TR(0x5136eb);
w4(R+0,u32(0x1ull));
}
B5136f0:{NFSU2_TR(0x5136f0);
u8 U[2];
__builtin_memmove((U+0),(R+0),1);
w1(U+1,u8(u32(r1(R+8))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5136f2:{NFSU2_TR(0x5136f2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5136fa;}}
}
B5136f4:L5136f4:{c.instructions+=2;NFSU2_TR(0x5136f4);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x5ull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x5ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x5ull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B5136f8:{NFSU2_TR(0x5136f8);
if(r1(R+518)){{goto L513739;}}
}
B5136fa:L5136fa:{c.instructions+=3;NFSU2_TR(0x5136fa);
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
B5136fc:{NFSU2_TR(0x5136fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5136fd:{NFSU2_TR(0x5136fd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B513700:L513700:{c.instructions+=5;NFSU2_TR(0x513700);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B513704:{NFSU2_TR(0x513704);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B513707:{NFSU2_TR(0x513707);
w4(R+0,u32(0x1ull));
}
B51370c:{NFSU2_TR(0x51370c);
u8 U[2];
__builtin_memmove((U+0),(R+0),1);
w1(U+1,u8(u32(r1(R+8))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B51370e:{NFSU2_TR(0x51370e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L513715;}}
}
B513710:L513710:{c.instructions+=2;NFSU2_TR(0x513710);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(r1(R+0))));
w1(R+523,sborrow<u8>(r1(U+8),r1(R+0)));
w1(U+9,u8(u32(r1(U+8))-u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B513713:{NFSU2_TR(0x513713);
if(r1(R+518)){{goto L513739;}}
}
B513715:L513715:{c.instructions+=3;NFSU2_TR(0x513715);
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
B513717:{NFSU2_TR(0x513717);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B513718:{NFSU2_TR(0x513718);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51371b:L51371b:{c.instructions+=5;NFSU2_TR(0x51371b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51371f:{NFSU2_TR(0x51371f);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B513722:{NFSU2_TR(0x513722);
w4(R+0,u32(0x1ull));
}
B513727:{NFSU2_TR(0x513727);
u8 U[2];
__builtin_memmove((U+0),(R+0),1);
w1(U+1,u8(u32(r1(R+8))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B513729:{NFSU2_TR(0x513729);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L513731;}}
}
B51372b:L51372b:{c.instructions+=2;NFSU2_TR(0x51372b);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x2ull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x2ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B51372f:{NFSU2_TR(0x51372f);
if(r1(R+518)){{goto L513739;}}
}
B513731:L513731:{c.instructions+=3;NFSU2_TR(0x513731);
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
B513733:{NFSU2_TR(0x513733);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B513734:{NFSU2_TR(0x513734);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B513737:L513737:{c.instructions+=1;NFSU2_TR(0x513737);
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
B513739:L513739:{c.instructions+=2;NFSU2_TR(0x513739);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51373a:{NFSU2_TR(0x51373a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B513770:L513770:{c.instructions+=11;NFSU2_TR(0x513770);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B513771:{NFSU2_TR(0x513771);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B513772:{NFSU2_TR(0x513772);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B513773:{NFSU2_TR(0x513773);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B513777:{NFSU2_TR(0x513777);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B513778:{NFSU2_TR(0x513778);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B513779:{NFSU2_TR(0x513779);
__builtin_memmove((R+28),(R+4),4);
}
B51377b:{NFSU2_TR(0x51377b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B513783:{NFSU2_TR(0x513783);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((R+24),(U+0),4);
}
B513789:{NFSU2_TR(0x513789);
w4(R+12,u32(0x40ull));
}
B51378e:{NFSU2_TR(0x51378e);
__builtin_memmove((R+28),(R+28),4);
}
B513790:L513790:{c.instructions+=3;NFSU2_TR(0x513790);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B513792:{NFSU2_TR(0x513792);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B513794:{NFSU2_TR(0x513794);
if(r1(R+518)){{goto L5137a7;}}
}
B513796:L513796:{c.instructions+=4;NFSU2_TR(0x513796);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B513797:{NFSU2_TR(0x513797);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B513798:{NFSU2_TR(0x513798);
__builtin_memmove((R+4),(R+28),4);
}
B51379a:{NFSU2_TR(0x51379a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51379full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x513600u);}goto L513600;}
}
B51379f:L51379f:{c.instructions+=2;NFSU2_TR(0x51379f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5137a1:{NFSU2_TR(0x5137a1);
if(r1(R+518)){{goto L5137a7;}}
}
B5137a3:L5137a3:{c.instructions+=1;NFSU2_TR(0x5137a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B5137a7:L5137a7:{c.instructions+=3;NFSU2_TR(0x5137a7);
w1(R+512,carry<u32>(r4(R+24),u32(0x4ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B5137aa:{NFSU2_TR(0x5137aa);
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
B5137ab:{NFSU2_TR(0x5137ab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x513790u);}goto L513790;}}
}
B5137ad:L5137ad:{c.instructions+=7;NFSU2_TR(0x5137ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5137b1:{NFSU2_TR(0x5137b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5137b2:{NFSU2_TR(0x5137b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5137b3:{NFSU2_TR(0x5137b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5137b4:{NFSU2_TR(0x5137b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5137b5:{NFSU2_TR(0x5137b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5137b6:{NFSU2_TR(0x5137b6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5137c0:L5137c0:{c.instructions+=14;NFSU2_TR(0x5137c0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5137c1:{NFSU2_TR(0x5137c1);
__builtin_memmove((R+20),(R+16),4);
}
B5137c3:{NFSU2_TR(0x5137c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B5137c6:{NFSU2_TR(0x5137c6);
__builtin_memmove((R+0),gp(0x862838),4);
}
B5137cb:{NFSU2_TR(0x5137cb);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x104ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5137d1:{NFSU2_TR(0x5137d1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x862018ull))));
}
B5137d6:{NFSU2_TR(0x5137d6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5137d7:{NFSU2_TR(0x5137d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5137da:{NFSU2_TR(0x5137da);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5137e0:{NFSU2_TR(0x5137e0);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5137e2:{NFSU2_TR(0x5137e2);
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
B5137e4:{NFSU2_TR(0x5137e4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5137e5:{NFSU2_TR(0x5137e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5137e8:{NFSU2_TR(0x5137e8);
if(r1(R+518)){{goto L513868;}}
}
B5137ea:L5137ea:{c.instructions+=4;NFSU2_TR(0x5137ea);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(s32(s8(r1(U+4)))));
}
B5137ee:{NFSU2_TR(0x5137ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5137f1:{NFSU2_TR(0x5137f1);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5137f3:{NFSU2_TR(0x5137f3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5137ff;}}
}
B5137f5:L5137f5:{c.instructions+=2;NFSU2_TR(0x5137f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5137fc:{NFSU2_TR(0x5137fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5137ff:L5137ff:{c.instructions+=3;NFSU2_TR(0x5137ff);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(s32(s8(r1(U+4)))));
}
B513803:{NFSU2_TR(0x513803);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B513805:{NFSU2_TR(0x513805);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51380b;}}
}
B513807:L513807:{c.instructions+=2;NFSU2_TR(0x513807);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B513808:{NFSU2_TR(0x513808);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51380b:L51380b:{c.instructions+=3;NFSU2_TR(0x51380b);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(s32(s8(r1(U+4)))));
}
B51380f:{NFSU2_TR(0x51380f);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B513811:{NFSU2_TR(0x513811);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L513817;}}
}
B513813:L513813:{c.instructions+=2;NFSU2_TR(0x513813);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B513814:{NFSU2_TR(0x513814);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B513817:L513817:{c.instructions+=3;NFSU2_TR(0x513817);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B51381b:{NFSU2_TR(0x51381b);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51381d:{NFSU2_TR(0x51381d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L513823;}}
}
B51381f:L51381f:{c.instructions+=2;NFSU2_TR(0x51381f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B513820:{NFSU2_TR(0x513820);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B513823:L513823:{c.instructions+=2;NFSU2_TR(0x513823);
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
B513825:{NFSU2_TR(0x513825);
if(r1(R+518)){{goto L513868;}}
}
B513827:L513827:{c.instructions+=4;NFSU2_TR(0x513827);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B513828:{NFSU2_TR(0x513828);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B51382b:{NFSU2_TR(0x51382b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
__builtin_memmove((R+24),(U+0),4);
}
B513831:{NFSU2_TR(0x513831);
w4(R+28,u32(0x4ull));
}
B513836:L513836:{c.instructions+=3;NFSU2_TR(0x513836);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B513838:{NFSU2_TR(0x513838);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51383a:{NFSU2_TR(0x51383a);
if(r1(R+518)){{goto L513856;}}
}
B51383c:L51383c:{c.instructions+=2;NFSU2_TR(0x51383c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51383d:{NFSU2_TR(0x51383d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x513842ull));
TAIL_STATIC(0x4ffc90u,4ff);
}
B513842:L513842:{c.instructions+=5;NFSU2_TR(0x513842);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B513845:{NFSU2_TR(0x513845);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B513848:{NFSU2_TR(0x513848);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B513849:{NFSU2_TR(0x513849);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51384a:{NFSU2_TR(0x51384a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51384full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x513600u);}goto L513600;}
}
B51384f:L51384f:{c.instructions+=2;NFSU2_TR(0x51384f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B513851:{NFSU2_TR(0x513851);
if(r1(R+518)){{goto L513856;}}
}
B513853:L513853:{c.instructions+=1;NFSU2_TR(0x513853);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B513856:L513856:{c.instructions+=3;NFSU2_TR(0x513856);
w1(R+512,carry<u32>(r4(R+24),u32(0x4ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B513859:{NFSU2_TR(0x513859);
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
B51385a:{NFSU2_TR(0x51385a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x513836u);}goto L513836;}}
}
B51385c:L51385c:{c.instructions+=7;NFSU2_TR(0x51385c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51385f:{NFSU2_TR(0x51385f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B513860:{NFSU2_TR(0x513860);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B513861:{NFSU2_TR(0x513861);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B513862:{NFSU2_TR(0x513862);
__builtin_memmove((R+16),(R+20),4);
}
B513864:{NFSU2_TR(0x513864);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B513865:{NFSU2_TR(0x513865);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B513868:L513868:{c.instructions+=6;NFSU2_TR(0x513868);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B513869:{NFSU2_TR(0x513869);
__builtin_memmove((R+0),(R+24),4);
}
B51386b:{NFSU2_TR(0x51386b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51386c:{NFSU2_TR(0x51386c);
__builtin_memmove((R+16),(R+20),4);
}
B51386e:{NFSU2_TR(0x51386e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B51386f:{NFSU2_TR(0x51386f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B513880:L513880:{c.instructions+=4;NFSU2_TR(0x513880);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B513886:{NFSU2_TR(0x513886);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B513889:{NFSU2_TR(0x513889);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51388a:{NFSU2_TR(0x51388a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51388full));
TAIL_STATIC(0x500b80u,500);
}
B51388f:L51388f:{c.instructions+=1;NFSU2_TR(0x51388f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B513890:L513890:{c.instructions+=6;NFSU2_TR(0x513890);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B513891:{NFSU2_TR(0x513891);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B513895:{NFSU2_TR(0x513895);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B513897:{NFSU2_TR(0x513897);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B513898:{NFSU2_TR(0x513898);
__builtin_memmove((R+28),(R+4),4);
}
B51389a:{NFSU2_TR(0x51389a);
if(r1(R+518)){{goto L5138de;}}
}
B51389c:L51389c:{c.instructions+=3;NFSU2_TR(0x51389c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B5138a0:{NFSU2_TR(0x5138a0);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5138a1:{NFSU2_TR(0x5138a1);
if(r1(R+518)){{goto L5138ba;}}
}
B5138a3:L5138a3:{c.instructions+=2;NFSU2_TR(0x5138a3);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5138a4:{NFSU2_TR(0x5138a4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5138c5;}}
}
B5138a6:L5138a6:{c.instructions+=3;NFSU2_TR(0x5138a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5138a9:{NFSU2_TR(0x5138a9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5138aa:{NFSU2_TR(0x5138aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5138afull));
TAIL_STATIC(0x500b80u,500);
}
B5138af:L5138af:{c.instructions+=2;NFSU2_TR(0x5138af);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5138b1:{NFSU2_TR(0x5138b1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5138c5;}}
}
B5138b3:L5138b3:{c.instructions+=4;NFSU2_TR(0x5138b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5138b4:{NFSU2_TR(0x5138b4);
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
B5138b6:{NFSU2_TR(0x5138b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5138b7:{NFSU2_TR(0x5138b7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5138ba:L5138ba:{c.instructions+=3;NFSU2_TR(0x5138ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7af8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5138c0:{NFSU2_TR(0x5138c0);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+8)));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5138c3:{NFSU2_TR(0x5138c3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5138b3u);}goto L5138b3;}}
}
B5138c5:L5138c5:{c.instructions+=4;NFSU2_TR(0x5138c5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B5138c9:{NFSU2_TR(0x5138c9);
u8 U[13];
w4(U+0,u32(u32(u32(0x8768ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+0),(U+12),1);
}
B5138d0:{NFSU2_TR(0x5138d0);
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
B5138d2:{NFSU2_TR(0x5138d2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5138b3u);}goto L5138b3;}}
}
B5138d4:L5138d4:{c.instructions+=4;NFSU2_TR(0x5138d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5138d5:{NFSU2_TR(0x5138d5);
w4(R+0,u32(0x1ull));
}
B5138da:{NFSU2_TR(0x5138da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5138db:{NFSU2_TR(0x5138db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5138de:L5138de:{c.instructions+=4;NFSU2_TR(0x5138de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5138df:{NFSU2_TR(0x5138df);
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
B5138e1:{NFSU2_TR(0x5138e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5138e2:{NFSU2_TR(0x5138e2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5138f0:L5138f0:{c.instructions+=4;NFSU2_TR(0x5138f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5138f4:{NFSU2_TR(0x5138f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5138f7:{NFSU2_TR(0x5138f7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5138f8:{NFSU2_TR(0x5138f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5138fdull));
TAIL_STATIC(0x512f10u,512);
}
B5138fd:L5138fd:{c.instructions+=2;NFSU2_TR(0x5138fd);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
w1(U+4,u8(0x3ull));
s1(u32(r4(U+0)),r1(U+4));
}
B513901:{NFSU2_TR(0x513901);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B513910:L513910:{c.instructions+=2;NFSU2_TR(0x513910);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x4ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B513917:{NFSU2_TR(0x513917);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51393b;}}
}
B513919:L513919:{c.instructions+=3;NFSU2_TR(0x513919);
__builtin_memmove((R+0),gp(0x838458),4);
}
B51391e:{NFSU2_TR(0x51391e);
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
B513920:{NFSU2_TR(0x513920);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L513941;}}
}
B513922:L513922:{c.instructions+=2;NFSU2_TR(0x513922);
u8 U[4];
w4(U+0,u32(0x79aa9cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B513927:{NFSU2_TR(0x513927);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51392cull));
TAIL_STATIC(0x43db50u,43d);
}
B51392c:L51392c:{c.instructions+=2;NFSU2_TR(0x51392c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51392d:{NFSU2_TR(0x51392d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x513932ull));
TAIL_STATIC(0x4ffe20u,4ff);
}
B513932:L513932:{c.instructions+=3;NFSU2_TR(0x513932);
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
B513935:{NFSU2_TR(0x513935);
__builtin_memmove(gp(0x838458),(R+0),4);
}
B51393a:{NFSU2_TR(0x51393a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51393b:L51393b:{c.instructions+=1;NFSU2_TR(0x51393b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8734ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B513941:L513941:{c.instructions+=1;NFSU2_TR(0x513941);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B513950:L513950:{c.instructions+=6;NFSU2_TR(0x513950);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B513952:{NFSU2_TR(0x513952);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8730ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B513958:{NFSU2_TR(0x513958);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd25ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B51395e:{NFSU2_TR(0x51395e);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8744ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B513965:{NFSU2_TR(0x513965);
u8 U[8];
__builtin_memmove((U+0),gp(0x89e7b0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51396c:{NFSU2_TR(0x51396c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5139a7;}}
}
B51396e:L51396e:{c.instructions+=4;NFSU2_TR(0x51396e);
__builtin_memmove((R+0),gp(0x8900ac),4);
}
B513973:{NFSU2_TR(0x513973);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B513976:{NFSU2_TR(0x513976);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B513978:{NFSU2_TR(0x513978);
if(r1(R+518)){{goto L5139a7;}}
}
B51397a:L51397a:{c.instructions+=11;NFSU2_TR(0x51397a);
{u32 ea_=u32(r4(R+0)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51397d:{NFSU2_TR(0x51397d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51397e:{NFSU2_TR(0x51397e);
{u32 ea_=u32(r4(R+0)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B513981:{NFSU2_TR(0x513981);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B513984:{NFSU2_TR(0x513984);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B513986:{NFSU2_TR(0x513986);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8750ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51398c:{NFSU2_TR(0x51398c);
{u32 ea_=u32(r4(R+4)+u32(34644u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B513992:{NFSU2_TR(0x513992);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B513993:{NFSU2_TR(0x513993);
{u32 ea_=u32(r4(R+4)+u32(34648u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B513999:{NFSU2_TR(0x513999);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B5139a0:{NFSU2_TR(0x5139a0);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8760ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5139a7:L5139a7:{c.instructions+=3;NFSU2_TR(0x5139a7);
__builtin_memmove((R+4),gp(0x890118),4);
}
B5139ad:{NFSU2_TR(0x5139ad);
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
B5139af:{NFSU2_TR(0x5139af);
if(r1(R+518)){{goto L5139b6;}}
}
B5139b1:L5139b1:{c.instructions+=1;NFSU2_TR(0x5139b1);
TAIL_STATIC(0x5eee80u,5ee);
}
B5139b6:L5139b6:{c.instructions+=1;NFSU2_TR(0x5139b6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5139c0:L5139c0:{c.instructions+=6;NFSU2_TR(0x5139c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5139c1:{NFSU2_TR(0x5139c1);
__builtin_memmove((R+24),(R+4),4);
}
B5139c3:{NFSU2_TR(0x5139c3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8744ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5139ca:{NFSU2_TR(0x5139ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc08ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5139d0:{NFSU2_TR(0x5139d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5139d2:{NFSU2_TR(0x5139d2);
if(r1(R+518)){{goto L5139fe;}}
}
B5139d4:L5139d4:{c.instructions+=4;NFSU2_TR(0x5139d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5139d7:{NFSU2_TR(0x5139d7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5139d8:{NFSU2_TR(0x5139d8);
w4(R+4,u32(0x85ad40ull));
}
B5139dd:{NFSU2_TR(0x5139dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5139e2ull));
TAIL_STATIC(0x5003b0u,500);
}
B5139e2:L5139e2:{c.instructions+=2;NFSU2_TR(0x5139e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5139e4:{NFSU2_TR(0x5139e4);
if(r1(R+518)){{goto L5139ea;}}
}
B5139e6:L5139e6:{c.instructions+=1;NFSU2_TR(0x5139e6);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5139ea:L5139ea:{c.instructions+=2;NFSU2_TR(0x5139ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc08ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5139f4:{NFSU2_TR(0x5139f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd1cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5139fe:L5139fe:{c.instructions+=3;NFSU2_TR(0x5139fe);
__builtin_memmove((R+0),gp(0x89e7b0),4);
}
B513a03:{NFSU2_TR(0x513a03);
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
B513a05:{NFSU2_TR(0x513a05);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L513a3f;}}
}
B513a07:L513a07:{c.instructions+=4;NFSU2_TR(0x513a07);
__builtin_memmove((R+4),gp(0x8900ac),4);
}
B513a0d:{NFSU2_TR(0x513a0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B513a10:{NFSU2_TR(0x513a10);
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
B513a12:{NFSU2_TR(0x513a12);
if(r1(R+518)){{goto L513a3f;}}
}
B513a14:L513a14:{c.instructions+=9;NFSU2_TR(0x513a14);
{u32 ea_=u32(r4(R+0)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B513a17:{NFSU2_TR(0x513a17);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B513a1a:{NFSU2_TR(0x513a1a);
{u32 ea_=u32(r4(R+0)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B513a1d:{NFSU2_TR(0x513a1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8750ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B513a23:{NFSU2_TR(0x513a23);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B513a25:{NFSU2_TR(0x513a25);
{u32 ea_=u32(r4(R+24)+u32(34644u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B513a2b:{NFSU2_TR(0x513a2b);
{u32 ea_=u32(r4(R+24)+u32(34648u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B513a31:{NFSU2_TR(0x513a31);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B513a38:{NFSU2_TR(0x513a38);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8760ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B513a3f:L513a3f:{c.instructions+=2;NFSU2_TR(0x513a3f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B513a40:{NFSU2_TR(0x513a40);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B513a50:L513a50:{c.instructions+=5;NFSU2_TR(0x513a50);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B513a51:{NFSU2_TR(0x513a51);
__builtin_memmove((R+28),(R+4),4);
}
B513a53:{NFSU2_TR(0x513a53);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xd27ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B513a59:{NFSU2_TR(0x513a59);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B513a5b:{NFSU2_TR(0x513a5b);
if(r1(R+518)){{goto L513a63;}}
}
B513a5d:L513a5d:{c.instructions+=3;NFSU2_TR(0x513a5d);
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
B513a5f:{NFSU2_TR(0x513a5f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B513a60:{NFSU2_TR(0x513a60);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B513a63:L513a63:{c.instructions+=8;NFSU2_TR(0x513a63);
__builtin_memmove((R+4),gp(0x838428),4);
}
B513a69:{NFSU2_TR(0x513a69);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B513a6a:{NFSU2_TR(0x513a6a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B513a6b:{NFSU2_TR(0x513a6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8730ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B513a71:{NFSU2_TR(0x513a71);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B513a75:{NFSU2_TR(0x513a75);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B513a78:{NFSU2_TR(0x513a78);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B513a7b:{NFSU2_TR(0x513a7b);
if(r1(R+518)){{goto L513aa4;}}
}
B513a7d:L513a7d:{c.instructions+=4;NFSU2_TR(0x513a7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B513a80:{NFSU2_TR(0x513a80);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B513a81:{NFSU2_TR(0x513a81);
__builtin_memmove((R+4),(R+28),4);
}
B513a83:{NFSU2_TR(0x513a83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x513a88ull));
TAIL_STATIC(0x500b80u,500);
}
B513a88:L513a88:{c.instructions+=2;NFSU2_TR(0x513a88);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B513a8a:{NFSU2_TR(0x513a8a);
if(r1(R+518)){{goto L513aa4;}}
}
B513a8c:L513a8c:{c.instructions+=5;NFSU2_TR(0x513a8c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B513a90:{NFSU2_TR(0x513a90);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B513a92:{NFSU2_TR(0x513a92);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B513a93:{NFSU2_TR(0x513a93);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B513a94:{NFSU2_TR(0x513a94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x513a99ull));
TAIL_STATIC(0x43dc00u,43d);
}
B513a99:L513a99:{c.instructions+=6;NFSU2_TR(0x513a99);
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
B513a9c:{NFSU2_TR(0x513a9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B513a9d:{NFSU2_TR(0x513a9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B513a9e:{NFSU2_TR(0x513a9e);
w1(R+0,u8(0x1ull));
}
B513aa0:{NFSU2_TR(0x513aa0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B513aa1:{NFSU2_TR(0x513aa1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B513aa4:L513aa4:{c.instructions+=3;NFSU2_TR(0x513aa4);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B513aa8:{NFSU2_TR(0x513aa8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B513aaa:{NFSU2_TR(0x513aaa);
if(r1(R+518)){{goto L513ad1;}}
}
B513aac:L513aac:{c.instructions+=2;NFSU2_TR(0x513aac);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7af8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B513ab3:{NFSU2_TR(0x513ab3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L513ad1;}}
}
B513ab5:L513ab5:{c.instructions+=5;NFSU2_TR(0x513ab5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B513ab9:{NFSU2_TR(0x513ab9);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B513abb:{NFSU2_TR(0x513abb);
u8 U[4];
w4(U+0,u32(0x79b010ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B513ac0:{NFSU2_TR(0x513ac0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B513ac1:{NFSU2_TR(0x513ac1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x513ac6ull));
TAIL_STATIC(0x43dc00u,43d);
}
B513ac6:L513ac6:{c.instructions+=6;NFSU2_TR(0x513ac6);
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
B513ac9:{NFSU2_TR(0x513ac9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B513aca:{NFSU2_TR(0x513aca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B513acb:{NFSU2_TR(0x513acb);
w1(R+0,u8(0x1ull));
}
B513acd:{NFSU2_TR(0x513acd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B513ace:{NFSU2_TR(0x513ace);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B513ad1:L513ad1:{c.instructions+=2;NFSU2_TR(0x513ad1);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4cce3e1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B513ad8:{NFSU2_TR(0x513ad8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L513b20;}}
}
B513ada:L513ada:{c.instructions+=3;NFSU2_TR(0x513ada);
u8 U[4];
w4(U+0,u32(0x4cce3e1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B513adf:{NFSU2_TR(0x513adf);
__builtin_memmove((R+4),(R+28),4);
}
B513ae1:{NFSU2_TR(0x513ae1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x513ae6ull));
TAIL_STATIC(0x500b80u,500);
}
B513ae6:L513ae6:{c.instructions+=3;NFSU2_TR(0x513ae6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B513ae8:{NFSU2_TR(0x513ae8);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B513aea:{NFSU2_TR(0x513aea);
if(r1(R+518)){{goto L513b06;}}
}
B513aec:L513aec:{c.instructions+=4;NFSU2_TR(0x513aec);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B513af0:{NFSU2_TR(0x513af0);
u8 U[4];
w4(U+0,u32(0x79b008ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B513af5:{NFSU2_TR(0x513af5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B513af6:{NFSU2_TR(0x513af6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x513afbull));
TAIL_STATIC(0x43dc00u,43d);
}
B513afb:L513afb:{c.instructions+=6;NFSU2_TR(0x513afb);
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
B513afe:{NFSU2_TR(0x513afe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B513aff:{NFSU2_TR(0x513aff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B513b00:{NFSU2_TR(0x513b00);
w1(R+0,u8(0x1ull));
}
B513b02:{NFSU2_TR(0x513b02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B513b03:{NFSU2_TR(0x513b03);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B513b06:L513b06:{c.instructions+=4;NFSU2_TR(0x513b06);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B513b0a:{NFSU2_TR(0x513b0a);
u8 U[4];
w4(U+0,u32(0x79b000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B513b0f:{NFSU2_TR(0x513b0f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B513b10:{NFSU2_TR(0x513b10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x513b15ull));
TAIL_STATIC(0x43dc00u,43d);
}
B513b15:L513b15:{c.instructions+=6;NFSU2_TR(0x513b15);
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
B513b18:{NFSU2_TR(0x513b18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B513b19:{NFSU2_TR(0x513b19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B513b1a:{NFSU2_TR(0x513b1a);
w1(R+0,u8(0x1ull));
}
B513b1c:{NFSU2_TR(0x513b1c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B513b1d:{NFSU2_TR(0x513b1d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B513b20:L513b20:{c.instructions+=5;NFSU2_TR(0x513b20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B513b21:{NFSU2_TR(0x513b21);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B513b22:{NFSU2_TR(0x513b22);
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
B513b24:{NFSU2_TR(0x513b24);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B513b25:{NFSU2_TR(0x513b25);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B513b30:L513b30:{c.instructions+=9;NFSU2_TR(0x513b30);
__builtin_memmove((R+0),gp(0x8900ac),4);
}
B513b35:{NFSU2_TR(0x513b35);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B513b38:{NFSU2_TR(0x513b38);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B513b39:{NFSU2_TR(0x513b39);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B513b3b:{NFSU2_TR(0x513b3b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B513b3d:{NFSU2_TR(0x513b3d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B513b3e:{NFSU2_TR(0x513b3e);
__builtin_memmove((R+24),(R+4),4);
}
B513b40:{NFSU2_TR(0x513b40);
w1(R+4,u8(0x1ull));
}
B513b42:{NFSU2_TR(0x513b42);
if(r1(R+518)){{goto L513b7d;}}
}
B513b44:L513b44:{c.instructions+=2;NFSU2_TR(0x513b44);
u8 U[8];
__builtin_memmove((U+0),gp(0x89e7b0),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B513b4a:{NFSU2_TR(0x513b4a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L513b7d;}}
}
B513b4c:L513b4c:{c.instructions+=10;NFSU2_TR(0x513b4c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8744ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B513b52:{NFSU2_TR(0x513b52);
{u32 ea_=u32(r4(R+0)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B513b55:{NFSU2_TR(0x513b55);
{u32 ea_=u32(r4(R+0)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B513b58:{NFSU2_TR(0x513b58);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B513b5b:{NFSU2_TR(0x513b5b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B513b5d:{NFSU2_TR(0x513b5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8750ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B513b63:{NFSU2_TR(0x513b63);
{u32 ea_=u32(r4(R+24)+u32(34644u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B513b69:{NFSU2_TR(0x513b69);
{u32 ea_=u32(r4(R+24)+u32(34648u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B513b6f:{NFSU2_TR(0x513b6f);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B513b76:{NFSU2_TR(0x513b76);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8760ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B513b7d:L513b7d:{c.instructions+=6;NFSU2_TR(0x513b7d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8879ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B513b83:{NFSU2_TR(0x513b83);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8730ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B513b89:{NFSU2_TR(0x513b89);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd25ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B513b8f:{NFSU2_TR(0x513b8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc08ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B513b95:{NFSU2_TR(0x513b95);
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
B513b97:{NFSU2_TR(0x513b97);
if(r1(R+518)){{goto L513bba;}}
}
B513b99:L513b99:{c.instructions+=4;NFSU2_TR(0x513b99);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B513b9c:{NFSU2_TR(0x513b9c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B513b9d:{NFSU2_TR(0x513b9d);
w4(R+4,u32(0x85ad40ull));
}
B513ba2:{NFSU2_TR(0x513ba2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x513ba7ull));
TAIL_STATIC(0x5003b0u,500);
}
B513ba7:L513ba7:{c.instructions+=2;NFSU2_TR(0x513ba7);
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
B513ba9:{NFSU2_TR(0x513ba9);
if(r1(R+518)){{goto L513bae;}}
}
B513bab:L513bab:{c.instructions+=1;NFSU2_TR(0x513bab);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B513bae:L513bae:{c.instructions+=2;NFSU2_TR(0x513bae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc08ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B513bb4:{NFSU2_TR(0x513bb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B513bba:L513bba:{c.instructions+=3;NFSU2_TR(0x513bba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B513bbb:{NFSU2_TR(0x513bbb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B513bbc:{NFSU2_TR(0x513bbc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B513bc0:L513bc0:{c.instructions+=3;NFSU2_TR(0x513bc0);
__builtin_memmove((R+0),gp(0x89e7b0),4);
}
B513bc5:{NFSU2_TR(0x513bc5);
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
B513bc7:{NFSU2_TR(0x513bc7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L513be9;}}
}
B513bc9:L513bc9:{c.instructions+=3;NFSU2_TR(0x513bc9);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x873dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B513bcf:{NFSU2_TR(0x513bcf);
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
B513bd1:{NFSU2_TR(0x513bd1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L513be9;}}
}
B513bd3:L513bd3:{c.instructions+=4;NFSU2_TR(0x513bd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x713cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B513bd9:{NFSU2_TR(0x513bd9);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x713cull))));
}
B513bdf:{NFSU2_TR(0x513bdf);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x9ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x9ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B513be2:{NFSU2_TR(0x513be2);
if(r1(R+518)){{goto L513be9;}}
}
B513be4:L513be4:{c.instructions+=1;NFSU2_TR(0x513be4);
TAIL_STATIC(0x5023f0u,502);
}
B513be9:L513be9:{c.instructions+=1;NFSU2_TR(0x513be9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B513bf0:L513bf0:{c.instructions+=4;NFSU2_TR(0x513bf0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B513bf1:{NFSU2_TR(0x513bf1);
__builtin_memmove((R+24),(R+4),4);
}
B513bf3:{NFSU2_TR(0x513bf3);
w4(R+4,u32(0x827e88ull));
}
B513bf8:{NFSU2_TR(0x513bf8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x513bfdull));
TAIL_STATIC(0x430560u,430);
}
B513bfd:L513bfd:{c.instructions+=2;NFSU2_TR(0x513bfd);
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
B513bff:{NFSU2_TR(0x513bff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L513c23;}}
}
B513c01:L513c01:{c.instructions+=2;NFSU2_TR(0x513c01);
w4(R+4,u32(0x827e88ull));
}
B513c06:{NFSU2_TR(0x513c06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x513c0bull));
TAIL_STATIC(0x430550u,430);
}
B513c0b:L513c0b:{c.instructions+=2;NFSU2_TR(0x513c0b);
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
B513c0d:{NFSU2_TR(0x513c0d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L513c23;}}
}
B513c0f:L513c0f:{c.instructions+=3;NFSU2_TR(0x513c0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x713cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B513c15:{NFSU2_TR(0x513c15);
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
B513c17:{NFSU2_TR(0x513c17);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L513c23;}}
}
B513c19:L513c19:{c.instructions+=1;NFSU2_TR(0x513c19);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x713cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B513c23:L513c23:{c.instructions+=2;NFSU2_TR(0x513c23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B513c24:{NFSU2_TR(0x513c24);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B513c30:L513c30:{c.instructions+=4;NFSU2_TR(0x513c30);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8740ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B513c36:{NFSU2_TR(0x513c36);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B513c37:{NFSU2_TR(0x513c37);
w4(R+4,u32(0x83ad90ull));
}
B513c3c:{NFSU2_TR(0x513c3c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x513c41ull));
TAIL_STATIC(0x503680u,503);
}
B513c41:L513c41:{c.instructions+=1;NFSU2_TR(0x513c41);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B513c50:L513c50:{c.instructions+=8;NFSU2_TR(0x513c50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x34ull))));
}
B513c53:{NFSU2_TR(0x513c53);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B513c54:{NFSU2_TR(0x513c54);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B513c55:{NFSU2_TR(0x513c55);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B513c56:{NFSU2_TR(0x513c56);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B513c5a:{NFSU2_TR(0x513c5a);
w4(R+4,u32(0xbull));
}
B513c5f:{NFSU2_TR(0x513c5f);
w4(R+0,u32(0x1010101ull));
}
B513c64:{NFSU2_TR(0x513c64);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B513c68:L513c68:{c.instructions+=1;NFSU2_TR(0x513c68);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L513c6a;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x513c68u);}goto L513c68;}
}
B513c6a:L513c6a:{c.instructions+=5;NFSU2_TR(0x513c6a);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B513c6c:{NFSU2_TR(0x513c6c);
__builtin_memmove((R+0),gp(0x83843c),4);
}
B513c71:{NFSU2_TR(0x513c71);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B513c73:{NFSU2_TR(0x513c73);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B513c75:{NFSU2_TR(0x513c75);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L513ce7;}}
}
B513c77:L513c77:{c.instructions+=2;NFSU2_TR(0x513c77);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B513c79:{NFSU2_TR(0x513c79);
__builtin_memmove((R+16),(R+16),4);
}
B513c80:L513c80:{c.instructions+=2;NFSU2_TR(0x513c80);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B513c82:{NFSU2_TR(0x513c82);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L513cda;}}
}
B513c84:L513c84:{c.instructions+=2;NFSU2_TR(0x513c84);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B513c86:{NFSU2_TR(0x513c86);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L513cda;}}
}
B513c88:L513c88:{c.instructions+=4;NFSU2_TR(0x513c88);
__builtin_memmove((R+0),gp(0x838438),4);
}
B513c8d:{NFSU2_TR(0x513c8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B513c90:{NFSU2_TR(0x513c90);
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
B513c92:{NFSU2_TR(0x513c92);
if(r1(R+518)){{goto L513cda;}}
}
B513c94:L513c94:{c.instructions+=1;NFSU2_TR(0x513c94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x513c99ull));
TAIL_STATIC(0x570a30u,570);
}
B513c99:L513c99:{c.instructions+=2;NFSU2_TR(0x513c99);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B513c9b:{NFSU2_TR(0x513c9b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L513ca3;}}
}
B513c9d:L513c9d:{c.instructions+=3;NFSU2_TR(0x513c9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B513ca0:{NFSU2_TR(0x513ca0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B513ca1:{NFSU2_TR(0x513ca1);
{goto L513ca7;}
}
B513ca3:L513ca3:{c.instructions+=2;NFSU2_TR(0x513ca3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B513ca6:{NFSU2_TR(0x513ca6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B513ca7:L513ca7:{c.instructions+=1;NFSU2_TR(0x513ca7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x513cacull));
TAIL_STATIC(0x4ffc90u,4ff);
}
B513cac:L513cac:{c.instructions+=3;NFSU2_TR(0x513cac);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B513caf:{NFSU2_TR(0x513caf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B513cb1:{NFSU2_TR(0x513cb1);
if(r1(R+518)){{goto L513cda;}}
}
B513cb3:L513cb3:{c.instructions+=4;NFSU2_TR(0x513cb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B513cb6:{NFSU2_TR(0x513cb6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B513cba:{NFSU2_TR(0x513cba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B513cbb:{NFSU2_TR(0x513cbb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x513cc0ull));
TAIL_STATIC(0x500b80u,500);
}
B513cc0:L513cc0:{c.instructions+=2;NFSU2_TR(0x513cc0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B513cc2:{NFSU2_TR(0x513cc2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L513cda;}}
}
B513cc4:L513cc4:{c.instructions+=3;NFSU2_TR(0x513cc4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B513cc6:{NFSU2_TR(0x513cc6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B513cc7:{NFSU2_TR(0x513cc7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x513cccull));
TAIL_STATIC(0x610130u,610);
}
B513ccc:L513ccc:{c.instructions+=3;NFSU2_TR(0x513ccc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x840ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B513cd2:{NFSU2_TR(0x513cd2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B513cd5:{NFSU2_TR(0x513cd5);
u8 U[13];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x0ull));
s1(u32(r4(U+8)),r1(U+12));
}
B513cda:L513cda:{c.instructions+=5;NFSU2_TR(0x513cda);
__builtin_memmove((R+0),gp(0x83843c),4);
}
B513cdf:{NFSU2_TR(0x513cdf);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B513ce0:{NFSU2_TR(0x513ce0);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xcull))));
}
B513ce3:{NFSU2_TR(0x513ce3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B513ce5:{NFSU2_TR(0x513ce5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x513c80u);}goto L513c80;}}
}
B513ce7:L513ce7:{c.instructions+=3;NFSU2_TR(0x513ce7);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B513ceb:{NFSU2_TR(0x513ceb);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B513ced:{NFSU2_TR(0x513ced);
__builtin_memmove((R+4),(R+4),4);
}
B513cf0:L513cf0:{c.instructions+=3;NFSU2_TR(0x513cf0);
u8 U[13];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+0),(U+12),1);
}
B513cf4:{NFSU2_TR(0x513cf4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B513cf6:{NFSU2_TR(0x513cf6);
if(r1(R+518)){{goto L513d1a;}}
}
B513cf8:L513cf8:{c.instructions+=2;NFSU2_TR(0x513cf8);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B513cfa:{NFSU2_TR(0x513cfa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x513cffull));
TAIL_STATIC(0x575620u,575);
}
B513cff:L513cff:{c.instructions+=3;NFSU2_TR(0x513cff);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B513d02:{NFSU2_TR(0x513d02);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B513d04:{NFSU2_TR(0x513d04);
if(r1(R+518)){{goto L513d0b;}}
}
B513d06:L513d06:{c.instructions+=2;NFSU2_TR(0x513d06);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B513d09:{NFSU2_TR(0x513d09);
{goto L513d0d;}
}
B513d0b:L513d0b:{c.instructions+=1;NFSU2_TR(0x513d0b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B513d0d:L513d0d:{c.instructions+=5;NFSU2_TR(0x513d0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B513d10:{NFSU2_TR(0x513d10);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B513d12:{NFSU2_TR(0x513d12);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B513d15:{NFSU2_TR(0x513d15);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B513d18:{NFSU2_TR(0x513d18);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B513d1a:L513d1a:{c.instructions+=3;NFSU2_TR(0x513d1a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B513d1b:{NFSU2_TR(0x513d1b);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2eull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2eull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B513d1e:{NFSU2_TR(0x513d1e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x513cf0u);}goto L513cf0;}}
}
B513d20:L513d20:{c.instructions+=5;NFSU2_TR(0x513d20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B513d21:{NFSU2_TR(0x513d21);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B513d22:{NFSU2_TR(0x513d22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B513d23:{NFSU2_TR(0x513d23);
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
B513d26:{NFSU2_TR(0x513d26);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B513d30:L513d30:{c.instructions+=3;NFSU2_TR(0x513d30);
__builtin_memmove((R+8),gp(0x862838),4);
}
B513d36:{NFSU2_TR(0x513d36);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(U+6))<(u32(0x5ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x5ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B513d39:{NFSU2_TR(0x513d39);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L513d3e;}}
}
B513d3b:L513d3b:{c.instructions+=2;NFSU2_TR(0x513d3b);
w1(R+0,u8(0x1ull));
}
B513d3d:{NFSU2_TR(0x513d3d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B513d3e:L513d3e:{c.instructions+=9;NFSU2_TR(0x513d3e);
__builtin_memmove((R+0),(R+8),4);
}
B513d40:{NFSU2_TR(0x513d40);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x104ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B513d46:{NFSU2_TR(0x513d46);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B513d48:{NFSU2_TR(0x513d48);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B513d49:{NFSU2_TR(0x513d49);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B513d4a:{NFSU2_TR(0x513d4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x862118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B513d50:{NFSU2_TR(0x513d50);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(s32(s8(r1(U+4)))));
}
B513d54:{NFSU2_TR(0x513d54);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8620f4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B513d5a:{NFSU2_TR(0x513d5a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L513d6a;}}
}
B513d5c:L513d5c:{c.instructions+=3;NFSU2_TR(0x513d5c);
__builtin_memmove((R+12),gp(0x86347d),1);
}
B513d62:{NFSU2_TR(0x513d62);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B513d64:{NFSU2_TR(0x513d64);
if(r1(R+518)){{goto L513d6a;}}
}
B513d66:L513d66:{c.instructions+=2;NFSU2_TR(0x513d66);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B513d68:{NFSU2_TR(0x513d68);
{goto L513d70;}
}
B513d6a:L513d6a:{c.instructions+=3;NFSU2_TR(0x513d6a);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B513d6c:{NFSU2_TR(0x513d6c);
w1(R+12,u8(0x1ull));
}
B513d6e:{NFSU2_TR(0x513d6e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L513d7c;}}
}
B513d70:L513d70:{c.instructions+=3;NFSU2_TR(0x513d70);
__builtin_memmove((R+8),gp(0x86347e),1);
}
B513d76:{NFSU2_TR(0x513d76);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B513d78:{NFSU2_TR(0x513d78);
if(r1(R+518)){{goto L513d7c;}}
}
B513d7a:L513d7a:{c.instructions+=1;NFSU2_TR(0x513d7a);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B513d7c:L513d7c:{c.instructions+=3;NFSU2_TR(0x513d7c);
__builtin_memmove((R+8),gp(0x85b948),4);
}
B513d82:{NFSU2_TR(0x513d82);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B513d84:{NFSU2_TR(0x513d84);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L513dab;}}
}
B513d86:L513d86:{c.instructions+=2;NFSU2_TR(0x513d86);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B513d88:{NFSU2_TR(0x513d88);
if(r1(R+518)){{goto L513dab;}}
}
B513d8a:L513d8a:{c.instructions+=2;NFSU2_TR(0x513d8a);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B513d8c:{NFSU2_TR(0x513d8c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L513d93;}}
}
B513d8e:L513d8e:{c.instructions+=2;NFSU2_TR(0x513d8e);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B513d91:{NFSU2_TR(0x513d91);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L513dab;}}
}
B513d93:L513d93:{c.instructions+=5;NFSU2_TR(0x513d93);
{u32 ea_=u32(r4(R+4)+u32(6884u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B513d99:{NFSU2_TR(0x513d99);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B513d9f:{NFSU2_TR(0x513d9f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B513da1:{NFSU2_TR(0x513da1);
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
B513da4:{NFSU2_TR(0x513da4);
if(r1(R+514)){{goto L513dab;}}
}
B513da6:L513da6:{c.instructions+=4;NFSU2_TR(0x513da6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B513da7:{NFSU2_TR(0x513da7);
w1(R+0,u8(0x1ull));
}
B513da9:{NFSU2_TR(0x513da9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B513daa:{NFSU2_TR(0x513daa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B513dab:L513dab:{c.instructions+=4;NFSU2_TR(0x513dab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B513dac:{NFSU2_TR(0x513dac);
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
B513dae:{NFSU2_TR(0x513dae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B513daf:{NFSU2_TR(0x513daf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B513db0:L513db0:{c.instructions+=2;NFSU2_TR(0x513db0);
u8 U[14];
__builtin_memmove((U+6),gp(0x8654a4),4);
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
B513db7:{NFSU2_TR(0x513db7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L513dfb;}}
}
B513db9:L513db9:{c.instructions+=3;NFSU2_TR(0x513db9);
__builtin_memmove((R+0),gp(0x89e7b0),4);
}
B513dbe:{NFSU2_TR(0x513dbe);
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
B513dc0:{NFSU2_TR(0x513dc0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L513dfb;}}
}
B513dc2:L513dc2:{c.instructions+=6;NFSU2_TR(0x513dc2);
{u32 ea_=u32(r4(R+4)+u32(6884u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B513dc8:{NFSU2_TR(0x513dc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ae8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B513dce:{NFSU2_TR(0x513dce);
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
B513dd0:{NFSU2_TR(0x513dd0);
{u32 ea_=u32(u32(8802644u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B513dd6:{NFSU2_TR(0x513dd6);
{u32 ea_=u32(r4(R+4)+u32(6884u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B513ddc:{NFSU2_TR(0x513ddc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L513dfb;}}
}
B513dde:L513dde:{c.instructions+=1;NFSU2_TR(0x513dde);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x513de3ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x513d30u);}goto L513d30;}
}
B513de3:L513de3:{c.instructions+=2;NFSU2_TR(0x513de3);
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
B513de5:{NFSU2_TR(0x513de5);
if(r1(R+518)){{goto L513dfb;}}
}
B513de7:L513de7:{c.instructions+=2;NFSU2_TR(0x513de7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ae8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B513df1:{NFSU2_TR(0x513df1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ae0ull))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B513dfb:L513dfb:{c.instructions+=1;NFSU2_TR(0x513dfb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B513e00:L513e00:{c.instructions+=2;NFSU2_TR(0x513e00);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B513e07:{NFSU2_TR(0x513e07);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L513e20;}}
}
B513e09:L513e09:{c.instructions+=3;NFSU2_TR(0x513e09);
__builtin_memmove((R+0),gp(0x862838),4);
}
B513e0e:{NFSU2_TR(0x513e0e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B513e10:{NFSU2_TR(0x513e10);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L513e20;}}
}
B513e12:L513e12:{c.instructions+=3;NFSU2_TR(0x513e12);
__builtin_memmove((R+0),gp(0x86347e),1);
}
B513e17:{NFSU2_TR(0x513e17);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B513e19:{NFSU2_TR(0x513e19);
if(r1(R+518)){{goto L513e20;}}
}
B513e1b:L513e1b:{c.instructions+=2;NFSU2_TR(0x513e1b);
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
B513e1d:{NFSU2_TR(0x513e1d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B513e20:L513e20:{c.instructions+=4;NFSU2_TR(0x513e20);
__builtin_memmove((R+0),gp(0x85b948),4);
}
B513e25:{NFSU2_TR(0x513e25);
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
B513e27:{NFSU2_TR(0x513e27);
__builtin_memmove((R+0),(R+518),1);
}
B513e2a:{NFSU2_TR(0x513e2a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B513e30:L513e30:{c.instructions+=7;NFSU2_TR(0x513e30);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B513e31:{NFSU2_TR(0x513e31);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((R+24),(U+0),4);
}
B513e34:{NFSU2_TR(0x513e34);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B513e3a:{NFSU2_TR(0x513e3a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B513e3c:{NFSU2_TR(0x513e3c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B513e3e:{NFSU2_TR(0x513e3e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B513e3f:{NFSU2_TR(0x513e3f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L513e57;}}
}
B513e41:L513e41:{c.instructions+=2;NFSU2_TR(0x513e41);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B513e45:{NFSU2_TR(0x513e45);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B513e48:L513e48:{c.instructions+=2;NFSU2_TR(0x513e48);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B513e4a:{NFSU2_TR(0x513e4a);
if(r1(R+518)){{goto L513e60;}}
}
B513e4c:L513e4c:{c.instructions+=4;NFSU2_TR(0x513e4c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B513e4d:{NFSU2_TR(0x513e4d);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x224ull))));
}
B513e53:{NFSU2_TR(0x513e53);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B513e55:{NFSU2_TR(0x513e55);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x513e48u);}goto L513e48;}}
}
B513e57:L513e57:{c.instructions+=5;NFSU2_TR(0x513e57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B513e58:{NFSU2_TR(0x513e58);
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
B513e5a:{NFSU2_TR(0x513e5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B513e5c:{NFSU2_TR(0x513e5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B513e5d:{NFSU2_TR(0x513e5d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B513e60:L513e60:{c.instructions+=6;NFSU2_TR(0x513e60);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x224ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B513e66:{NFSU2_TR(0x513e66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B513e67:{NFSU2_TR(0x513e67);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+24)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+24)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B513e69:{NFSU2_TR(0x513e69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B513e6b:{NFSU2_TR(0x513e6b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B513e6c:{NFSU2_TR(0x513e6c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B513e70:L513e70:{c.instructions+=3;NFSU2_TR(0x513e70);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B513e74:{NFSU2_TR(0x513e74);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B513e76:{NFSU2_TR(0x513e76);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L513e86;}}
}
B513e78:L513e78:{c.instructions+=2;NFSU2_TR(0x513e78);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B513e7b:{NFSU2_TR(0x513e7b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L513e86;}}
}
B513e7d:L513e7d:{c.instructions+=3;NFSU2_TR(0x513e7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B513e80:{NFSU2_TR(0x513e80);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B513e84:{NFSU2_TR(0x513e84);
{goto L513e88;}
}
B513e86:L513e86:{c.instructions+=1;NFSU2_TR(0x513e86);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B513e88:L513e88:{c.instructions+=4;NFSU2_TR(0x513e88);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B513e8b:{NFSU2_TR(0x513e8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B513e91:{NFSU2_TR(0x513e91);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B513e92:{NFSU2_TR(0x513e92);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x513e97ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x513e30u);}goto L513e30;}
}
B513e97:L513e97:{c.instructions+=2;NFSU2_TR(0x513e97);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7f7b88ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B513e9e:{NFSU2_TR(0x513e9e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B513eb0:L513eb0:{c.instructions+=4;NFSU2_TR(0x513eb0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B513eb1:{NFSU2_TR(0x513eb1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B513eb5:{NFSU2_TR(0x513eb5);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B513eb7:{NFSU2_TR(0x513eb7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L513ec7;}}
}
B513eb9:L513eb9:{c.instructions+=2;NFSU2_TR(0x513eb9);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B513ebc:{NFSU2_TR(0x513ebc);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L513ec7;}}
}
B513ebe:L513ebe:{c.instructions+=3;NFSU2_TR(0x513ebe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B513ec1:{NFSU2_TR(0x513ec1);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B513ec5:{NFSU2_TR(0x513ec5);
{goto L513ec9;}
}
B513ec7:L513ec7:{c.instructions+=1;NFSU2_TR(0x513ec7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B513ec9:L513ec9:{c.instructions+=9;NFSU2_TR(0x513ec9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B513ecc:{NFSU2_TR(0x513ecc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B513ecd:{NFSU2_TR(0x513ecd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B513ece:{NFSU2_TR(0x513ece);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B513ed4:{NFSU2_TR(0x513ed4);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B513ed6:{NFSU2_TR(0x513ed6);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B513ed8:{NFSU2_TR(0x513ed8);
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
B513eda:{NFSU2_TR(0x513eda);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B513ede:{NFSU2_TR(0x513ede);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L513f96;}}
}
B513ee4:L513ee4:{c.instructions+=5;NFSU2_TR(0x513ee4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B513ee5:{NFSU2_TR(0x513ee5);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((R+24),(U+0),4);
}
B513ee8:{NFSU2_TR(0x513ee8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B513ee9:{NFSU2_TR(0x513ee9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B513eed:{NFSU2_TR(0x513eed);
__builtin_memmove((R+4),(R+4),4);
}
B513ef0:L513ef0:{c.instructions+=2;NFSU2_TR(0x513ef0);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B513ef2:{NFSU2_TR(0x513ef2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L513f01;}}
}
B513ef4:L513ef4:{c.instructions+=2;NFSU2_TR(0x513ef4);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B513ef6:{NFSU2_TR(0x513ef6);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L513f01;}}
}
B513ef8:L513ef8:{c.instructions+=2;NFSU2_TR(0x513ef8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B513efb:{NFSU2_TR(0x513efb);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L513f01;}}
}
B513efd:L513efd:{c.instructions+=2;NFSU2_TR(0x513efd);
__builtin_memmove((R+4),(R+24),4);
}
B513eff:{NFSU2_TR(0x513eff);
{goto L513f03;}
}
B513f01:L513f01:{c.instructions+=1;NFSU2_TR(0x513f01);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B513f03:L513f03:{c.instructions+=2;NFSU2_TR(0x513f03);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B513f07:{NFSU2_TR(0x513f07);
if(r1(R+518)){{goto L513f22;}}
}
B513f09:L513f09:{c.instructions+=2;NFSU2_TR(0x513f09);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B513f0b:{NFSU2_TR(0x513f0b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L513f1a;}}
}
B513f0d:L513f0d:{c.instructions+=2;NFSU2_TR(0x513f0d);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B513f0f:{NFSU2_TR(0x513f0f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L513f1a;}}
}
B513f11:L513f11:{c.instructions+=2;NFSU2_TR(0x513f11);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B513f14:{NFSU2_TR(0x513f14);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L513f1a;}}
}
B513f16:L513f16:{c.instructions+=2;NFSU2_TR(0x513f16);
__builtin_memmove((R+4),(R+24),4);
}
B513f18:{NFSU2_TR(0x513f18);
{goto L513f1c;}
}
B513f1a:L513f1a:{c.instructions+=1;NFSU2_TR(0x513f1a);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B513f1c:L513f1c:{c.instructions+=2;NFSU2_TR(0x513f1c);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B513f20:{NFSU2_TR(0x513f20);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L513f69;}}
}
B513f22:L513f22:{c.instructions+=2;NFSU2_TR(0x513f22);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B513f24:{NFSU2_TR(0x513f24);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L513f33;}}
}
B513f26:L513f26:{c.instructions+=2;NFSU2_TR(0x513f26);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B513f28:{NFSU2_TR(0x513f28);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L513f33;}}
}
B513f2a:L513f2a:{c.instructions+=2;NFSU2_TR(0x513f2a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B513f2d:{NFSU2_TR(0x513f2d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L513f33;}}
}
B513f2f:L513f2f:{c.instructions+=2;NFSU2_TR(0x513f2f);
__builtin_memmove((R+4),(R+24),4);
}
B513f31:{NFSU2_TR(0x513f31);
{goto L513f35;}
}
B513f33:L513f33:{c.instructions+=1;NFSU2_TR(0x513f33);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B513f35:L513f35:{c.instructions+=5;NFSU2_TR(0x513f35);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B513f3b:{NFSU2_TR(0x513f3b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((R+28),(U+0),4);
}
B513f3e:{NFSU2_TR(0x513f3e);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B513f40:{NFSU2_TR(0x513f40);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B513f42:{NFSU2_TR(0x513f42);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L513f5a;}}
}
B513f44:L513f44:{c.instructions+=1;NFSU2_TR(0x513f44);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B513f47:L513f47:{c.instructions+=2;NFSU2_TR(0x513f47);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+0))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B513f49:{NFSU2_TR(0x513f49);
if(r1(R+518)){{goto L513f88;}}
}
B513f4b:L513f4b:{c.instructions+=4;NFSU2_TR(0x513f4b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B513f4c:{NFSU2_TR(0x513f4c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x224ull))));
}
B513f52:{NFSU2_TR(0x513f52);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B513f54:{NFSU2_TR(0x513f54);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x513f47u);}goto L513f47;}}
}
B513f56:L513f56:{c.instructions+=1;NFSU2_TR(0x513f56);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B513f5a:L513f5a:{c.instructions+=1;NFSU2_TR(0x513f5a);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B513f5c:L513f5c:{c.instructions+=3;NFSU2_TR(0x513f5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B513f5e:{NFSU2_TR(0x513f5e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7f7b88ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B513f65:{NFSU2_TR(0x513f65);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B513f69:L513f69:{c.instructions+=5;NFSU2_TR(0x513f69);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B513f6a:{NFSU2_TR(0x513f6a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xd24ull))));
}
B513f70:{NFSU2_TR(0x513f70);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B513f72:{NFSU2_TR(0x513f72);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B513f76:{NFSU2_TR(0x513f76);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x513ef0u);}goto L513ef0;}}
}
B513f7c:L513f7c:{c.instructions+=7;NFSU2_TR(0x513f7c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B513f80:{NFSU2_TR(0x513f80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B513f81:{NFSU2_TR(0x513f81);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B513f82:{NFSU2_TR(0x513f82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B513f83:{NFSU2_TR(0x513f83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B513f84:{NFSU2_TR(0x513f84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B513f85:{NFSU2_TR(0x513f85);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B513f88:L513f88:{c.instructions+=4;NFSU2_TR(0x513f88);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B513f8c:{NFSU2_TR(0x513f8c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x224ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B513f92:{NFSU2_TR(0x513f92);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B513f94:{NFSU2_TR(0x513f94);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x513f5cu);}goto L513f5c;}
}
B513f96:L513f96:{c.instructions+=5;NFSU2_TR(0x513f96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B513f97:{NFSU2_TR(0x513f97);
__builtin_memmove((R+0),(R+8),4);
}
B513f99:{NFSU2_TR(0x513f99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B513f9a:{NFSU2_TR(0x513f9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B513f9b:{NFSU2_TR(0x513f9b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B513fa0:L513fa0:{c.instructions+=3;NFSU2_TR(0x513fa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B513fa6:{NFSU2_TR(0x513fa6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B513fa8:{NFSU2_TR(0x513fa8);
if(r1(R+518)){{goto L513fca;}}
}
B513faa:L513faa:{c.instructions+=8;NFSU2_TR(0x513faa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B513fab:{NFSU2_TR(0x513fab);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B513fb1:{NFSU2_TR(0x513fb1);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0xd24ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B513fb7:{NFSU2_TR(0x513fb7);
u8 U[12];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B513fbb:{NFSU2_TR(0x513fbb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd24ull))));
__builtin_memmove((R+8),(U+0),4);
}
B513fc1:{NFSU2_TR(0x513fc1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B513fc3:{NFSU2_TR(0x513fc3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B513fc4:{NFSU2_TR(0x513fc4);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L513fca;}}
}
B513fc6:L513fc6:{c.instructions+=2;NFSU2_TR(0x513fc6);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B513fc8:{NFSU2_TR(0x513fc8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L513fcd;}}
}
B513fca:L513fca:{c.instructions+=2;NFSU2_TR(0x513fca);
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
B513fcc:{NFSU2_TR(0x513fcc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B513fcd:L513fcd:{c.instructions+=3;NFSU2_TR(0x513fcd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B513fcf:{NFSU2_TR(0x513fcf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((R+4),(U+0),4);
}
B513fd2:{NFSU2_TR(0x513fd2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x513fd7ull));
TAIL_STATIC(0x503320u,503);
}
B513fd7:L513fd7:{c.instructions+=3;NFSU2_TR(0x513fd7);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
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
B513fdb:{NFSU2_TR(0x513fdb);
__builtin_memmove((R+0),(R+518),1);
}
B513fde:{NFSU2_TR(0x513fde);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B513fe0:L513fe0:{c.instructions+=10;NFSU2_TR(0x513fe0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B513fe3:{NFSU2_TR(0x513fe3);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B513fe9:{NFSU2_TR(0x513fe9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B513fea:{NFSU2_TR(0x513fea);
__builtin_memmove((R+12),(R+4),4);
}
B513fec:{NFSU2_TR(0x513fec);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B513ff2:{NFSU2_TR(0x513ff2);
w4(R+8,u32(0x1ull));
}
B513ff7:{NFSU2_TR(0x513ff7);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B513ff9:{NFSU2_TR(0x513ff9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B513ffa:{NFSU2_TR(0x513ffa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B513ffb:{NFSU2_TR(0x513ffb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
TAIL_STATIC(0x514003u,514);
}
XIT:NFSU2_TR_EXIT(0x513,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
