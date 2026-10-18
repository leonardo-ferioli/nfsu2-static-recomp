#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_63d(u8* __restrict R,Cpu& c);
u32 body_64b(u8* __restrict R,Cpu& c);
u32 body_65a(u8* __restrict R,Cpu& c);
u32 body_65b(u8* __restrict R,Cpu& c);
u32 body_65c(u8* __restrict R,Cpu& c);
u32 body_65d(u8* __restrict R,Cpu& c);
u32 body_660(u8* __restrict R,Cpu& c);
u32 body_662(u8* __restrict R,Cpu& c);
u32 body_663(u8* __restrict R,Cpu& c);
u32 body_670(u8* __restrict R,Cpu& c);
u32 body_688(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x661,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x661,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_661(u8* __restrict R,Cpu& c);
u32 page_661(Cpu& c){return body_661(c.regs.data(),c);}
__attribute__((noinline)) u32 body_661(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x661001:goto L661001;
case 0x661004:c.instructions+=1;goto B661004;
case 0x66100a:goto L66100a;
case 0x66100d:c.instructions+=2;goto B66100d;
case 0x66100f:c.instructions+=1;goto B66100f;
case 0x661015:goto L661015;
case 0x661018:c.instructions+=5;goto B661018;
case 0x66101b:c.instructions+=4;goto B66101b;
case 0x66101e:c.instructions+=3;goto B66101e;
case 0x661021:c.instructions+=2;goto B661021;
case 0x661022:c.instructions+=1;goto B661022;
case 0x661027:goto L661027;
case 0x661029:c.instructions+=2;goto B661029;
case 0x66102a:c.instructions+=1;goto B66102a;
case 0x66102c:goto L66102c;
case 0x66102f:c.instructions+=8;goto B66102f;
case 0x661034:c.instructions+=7;goto B661034;
case 0x661035:c.instructions+=6;goto B661035;
case 0x661037:c.instructions+=5;goto B661037;
case 0x66103a:c.instructions+=4;goto B66103a;
case 0x66103c:c.instructions+=3;goto B66103c;
case 0x66103d:c.instructions+=2;goto B66103d;
case 0x661040:c.instructions+=1;goto B661040;
case 0x661045:goto L661045;
case 0x661048:c.instructions+=1;goto B661048;
case 0x66104a:goto L66104a;
case 0x66104c:goto L66104c;
case 0x66104e:c.instructions+=2;goto B66104e;
case 0x661051:c.instructions+=1;goto B661051;
case 0x661053:goto L661053;
case 0x66105a:c.instructions+=1;goto B66105a;
case 0x66105f:goto L66105f;
case 0x661062:c.instructions+=9;goto B661062;
case 0x661066:c.instructions+=8;goto B661066;
case 0x66106a:c.instructions+=7;goto B66106a;
case 0x66106d:c.instructions+=6;goto B66106d;
case 0x661071:c.instructions+=5;goto B661071;
case 0x661074:c.instructions+=4;goto B661074;
case 0x661076:c.instructions+=3;goto B661076;
case 0x66107a:c.instructions+=2;goto B66107a;
case 0x66107d:c.instructions+=1;goto B66107d;
case 0x66107f:goto L66107f;
case 0x661081:goto L661081;
case 0x661084:goto L661084;
case 0x661086:c.instructions+=5;goto B661086;
case 0x661089:c.instructions+=4;goto B661089;
case 0x66108c:c.instructions+=3;goto B66108c;
case 0x66108e:c.instructions+=2;goto B66108e;
case 0x66108f:c.instructions+=1;goto B66108f;
case 0x661094:goto L661094;
case 0x661096:c.instructions+=1;goto B661096;
case 0x661098:goto L661098;
case 0x66109b:c.instructions+=11;goto B66109b;
case 0x66109d:c.instructions+=10;goto B66109d;
case 0x6610a1:c.instructions+=9;goto B6610a1;
case 0x6610a4:c.instructions+=8;goto B6610a4;
case 0x6610a5:c.instructions+=7;goto B6610a5;
case 0x6610a6:c.instructions+=6;goto B6610a6;
case 0x6610a9:c.instructions+=5;goto B6610a9;
case 0x6610aa:c.instructions+=4;goto B6610aa;
case 0x6610ad:c.instructions+=3;goto B6610ad;
case 0x6610b1:c.instructions+=2;goto B6610b1;
case 0x6610b4:c.instructions+=1;goto B6610b4;
case 0x6610b9:goto L6610b9;
case 0x6610bb:c.instructions+=2;goto B6610bb;
case 0x6610be:c.instructions+=1;goto B6610be;
case 0x6610c4:goto L6610c4;
case 0x6610c7:c.instructions+=5;goto B6610c7;
case 0x6610ca:c.instructions+=4;goto B6610ca;
case 0x6610cd:c.instructions+=3;goto B6610cd;
case 0x6610d1:c.instructions+=2;goto B6610d1;
case 0x6610d4:c.instructions+=1;goto B6610d4;
case 0x6610d6:goto L6610d6;
case 0x6610da:c.instructions+=7;goto B6610da;
case 0x6610de:c.instructions+=6;goto B6610de;
case 0x6610e2:c.instructions+=5;goto B6610e2;
case 0x6610e5:c.instructions+=4;goto B6610e5;
case 0x6610e8:c.instructions+=3;goto B6610e8;
case 0x6610ea:c.instructions+=2;goto B6610ea;
case 0x6610ed:c.instructions+=1;goto B6610ed;
case 0x6610ef:goto L6610ef;
case 0x6610f0:c.instructions+=1;goto B6610f0;
case 0x6610f3:goto L6610f3;
case 0x6610f6:c.instructions+=53;goto B6610f6;
case 0x6610f8:c.instructions+=52;goto B6610f8;
case 0x6610fa:c.instructions+=51;goto B6610fa;
case 0x6610fc:c.instructions+=50;goto B6610fc;
case 0x6610fe:c.instructions+=49;goto B6610fe;
case 0x661101:c.instructions+=48;goto B661101;
case 0x661103:c.instructions+=47;goto B661103;
case 0x661105:c.instructions+=46;goto B661105;
case 0x661108:c.instructions+=45;goto B661108;
case 0x66110a:c.instructions+=44;goto B66110a;
case 0x66110c:c.instructions+=43;goto B66110c;
case 0x66110f:c.instructions+=42;goto B66110f;
case 0x661111:c.instructions+=41;goto B661111;
case 0x661113:c.instructions+=40;goto B661113;
case 0x661116:c.instructions+=39;goto B661116;
case 0x661118:c.instructions+=38;goto B661118;
case 0x66111b:c.instructions+=37;goto B66111b;
case 0x66111e:c.instructions+=36;goto B66111e;
case 0x661121:c.instructions+=35;goto B661121;
case 0x661125:c.instructions+=34;goto B661125;
case 0x661128:c.instructions+=33;goto B661128;
case 0x66112c:c.instructions+=32;goto B66112c;
case 0x66112f:c.instructions+=31;goto B66112f;
case 0x661131:c.instructions+=30;goto B661131;
case 0x661134:c.instructions+=29;goto B661134;
case 0x661138:c.instructions+=28;goto B661138;
case 0x66113b:c.instructions+=27;goto B66113b;
case 0x66113e:c.instructions+=26;goto B66113e;
case 0x661141:c.instructions+=25;goto B661141;
case 0x661144:c.instructions+=24;goto B661144;
case 0x661147:c.instructions+=23;goto B661147;
case 0x66114a:c.instructions+=22;goto B66114a;
case 0x66114d:c.instructions+=21;goto B66114d;
case 0x66114f:c.instructions+=20;goto B66114f;
case 0x661151:c.instructions+=19;goto B661151;
case 0x661154:c.instructions+=18;goto B661154;
case 0x661157:c.instructions+=17;goto B661157;
case 0x66115a:c.instructions+=16;goto B66115a;
case 0x66115d:c.instructions+=15;goto B66115d;
case 0x661160:c.instructions+=14;goto B661160;
case 0x661163:c.instructions+=13;goto B661163;
case 0x661167:c.instructions+=12;goto B661167;
case 0x66116a:c.instructions+=11;goto B66116a;
case 0x66116c:c.instructions+=10;goto B66116c;
case 0x66116f:c.instructions+=9;goto B66116f;
case 0x661172:c.instructions+=8;goto B661172;
case 0x661175:c.instructions+=7;goto B661175;
case 0x661178:c.instructions+=6;goto B661178;
case 0x66117b:c.instructions+=5;goto B66117b;
case 0x66117e:c.instructions+=4;goto B66117e;
case 0x661181:c.instructions+=3;goto B661181;
case 0x661184:c.instructions+=2;goto B661184;
case 0x661187:c.instructions+=1;goto B661187;
case 0x661189:goto L661189;
case 0x66118c:goto L66118c;
case 0x66118f:c.instructions+=1;goto B66118f;
case 0x661191:goto L661191;
case 0x661198:goto L661198;
case 0x66119b:c.instructions+=5;goto B66119b;
case 0x66119c:c.instructions+=4;goto B66119c;
case 0x66119d:c.instructions+=3;goto B66119d;
case 0x66119e:c.instructions+=2;goto B66119e;
case 0x66119f:c.instructions+=1;goto B66119f;
case 0x6611a2:goto L6611a2;
case 0x6611a4:c.instructions+=24;goto B6611a4;
case 0x6611a5:c.instructions+=23;goto B6611a5;
case 0x6611a7:c.instructions+=22;goto B6611a7;
case 0x6611aa:c.instructions+=21;goto B6611aa;
case 0x6611ad:c.instructions+=20;goto B6611ad;
case 0x6611b0:c.instructions+=19;goto B6611b0;
case 0x6611b4:c.instructions+=18;goto B6611b4;
case 0x6611b7:c.instructions+=17;goto B6611b7;
case 0x6611b8:c.instructions+=16;goto B6611b8;
case 0x6611bb:c.instructions+=15;goto B6611bb;
case 0x6611be:c.instructions+=14;goto B6611be;
case 0x6611c1:c.instructions+=13;goto B6611c1;
case 0x6611c5:c.instructions+=12;goto B6611c5;
case 0x6611c8:c.instructions+=11;goto B6611c8;
case 0x6611cb:c.instructions+=10;goto B6611cb;
case 0x6611ce:c.instructions+=9;goto B6611ce;
case 0x6611d1:c.instructions+=8;goto B6611d1;
case 0x6611d4:c.instructions+=7;goto B6611d4;
case 0x6611d7:c.instructions+=6;goto B6611d7;
case 0x6611da:c.instructions+=5;goto B6611da;
case 0x6611dd:c.instructions+=4;goto B6611dd;
case 0x6611e3:c.instructions+=3;goto B6611e3;
case 0x6611e6:c.instructions+=2;goto B6611e6;
case 0x6611e9:c.instructions+=1;goto B6611e9;
case 0x6611eb:goto L6611eb;
case 0x6611ee:c.instructions+=8;goto B6611ee;
case 0x6611ef:c.instructions+=7;goto B6611ef;
case 0x6611f1:c.instructions+=6;goto B6611f1;
case 0x6611f3:c.instructions+=5;goto B6611f3;
case 0x6611f5:c.instructions+=4;goto B6611f5;
case 0x6611f7:c.instructions+=3;goto B6611f7;
case 0x6611f9:c.instructions+=2;goto B6611f9;
case 0x6611fc:c.instructions+=1;goto B6611fc;
case 0x6611fd:goto L6611fd;
case 0x661200:c.instructions+=4;goto B661200;
case 0x661203:c.instructions+=3;goto B661203;
case 0x66120a:c.instructions+=2;goto B66120a;
case 0x66120b:c.instructions+=1;goto B66120b;
case 0x66120d:goto L66120d;
case 0x661214:c.instructions+=1;goto B661214;
case 0x661216:goto L661216;
case 0x66121b:goto L66121b;
case 0x66121d:c.instructions+=2;goto B66121d;
case 0x66121e:c.instructions+=1;goto B66121e;
case 0x661221:goto L661221;
case 0x661223:c.instructions+=19;goto B661223;
case 0x661224:c.instructions+=18;goto B661224;
case 0x661226:c.instructions+=17;goto B661226;
case 0x661229:c.instructions+=16;goto B661229;
case 0x66122a:c.instructions+=15;goto B66122a;
case 0x66122b:c.instructions+=14;goto B66122b;
case 0x66122e:c.instructions+=13;goto B66122e;
case 0x661231:c.instructions+=12;goto B661231;
case 0x661235:c.instructions+=11;goto B661235;
case 0x661236:c.instructions+=10;goto B661236;
case 0x661239:c.instructions+=9;goto B661239;
case 0x66123b:c.instructions+=8;goto B66123b;
case 0x66123c:c.instructions+=7;goto B66123c;
case 0x66123d:c.instructions+=6;goto B66123d;
case 0x661240:c.instructions+=5;goto B661240;
case 0x661243:c.instructions+=4;goto B661243;
case 0x661246:c.instructions+=3;goto B661246;
case 0x661248:c.instructions+=2;goto B661248;
case 0x661249:c.instructions+=1;goto B661249;
case 0x66124c:goto L66124c;
case 0x66124e:c.instructions+=2;goto B66124e;
case 0x661250:c.instructions+=1;goto B661250;
case 0x661256:goto L661256;
case 0x661259:c.instructions+=5;goto B661259;
case 0x66125b:c.instructions+=4;goto B66125b;
case 0x66125e:c.instructions+=3;goto B66125e;
case 0x66125f:c.instructions+=2;goto B66125f;
case 0x661260:c.instructions+=1;goto B661260;
case 0x661263:goto L661263;
case 0x661265:c.instructions+=2;goto B661265;
case 0x661267:c.instructions+=1;goto B661267;
case 0x66126d:goto L66126d;
case 0x661270:c.instructions+=2;goto B661270;
case 0x661272:c.instructions+=1;goto B661272;
case 0x661274:goto L661274;
case 0x661276:c.instructions+=2;goto B661276;
case 0x661277:c.instructions+=1;goto B661277;
case 0x66127a:goto L66127a;
case 0x66127d:c.instructions+=1;goto B66127d;
case 0x66127f:goto L66127f;
case 0x661282:c.instructions+=3;goto B661282;
case 0x661283:c.instructions+=2;goto B661283;
case 0x661286:c.instructions+=1;goto B661286;
case 0x66128b:goto L66128b;
case 0x66128d:c.instructions+=2;goto B66128d;
case 0x66128f:c.instructions+=1;goto B66128f;
case 0x661291:goto L661291;
case 0x661294:c.instructions+=2;goto B661294;
case 0x661296:c.instructions+=1;goto B661296;
case 0x661298:goto L661298;
case 0x66129a:c.instructions+=2;goto B66129a;
case 0x66129b:c.instructions+=1;goto B66129b;
case 0x66129e:goto L66129e;
case 0x6612a1:goto L6612a1;
case 0x6612a4:c.instructions+=2;goto B6612a4;
case 0x6612a7:c.instructions+=1;goto B6612a7;
case 0x6612aa:goto L6612aa;
case 0x6612ad:c.instructions+=7;goto B6612ad;
case 0x6612af:c.instructions+=6;goto B6612af;
case 0x6612b2:c.instructions+=5;goto B6612b2;
case 0x6612b5:c.instructions+=4;goto B6612b5;
case 0x6612b6:c.instructions+=3;goto B6612b6;
case 0x6612b8:c.instructions+=2;goto B6612b8;
case 0x6612b9:c.instructions+=1;goto B6612b9;
case 0x6612bc:goto L6612bc;
case 0x6612bd:c.instructions+=2;goto B6612bd;
case 0x6612c0:c.instructions+=1;goto B6612c0;
case 0x6612c3:goto L6612c3;
case 0x6612c5:c.instructions+=2;goto B6612c5;
case 0x6612c7:c.instructions+=1;goto B6612c7;
case 0x6612c9:goto L6612c9;
case 0x6612cc:c.instructions+=3;goto B6612cc;
case 0x6612cf:c.instructions+=2;goto B6612cf;
case 0x6612d2:c.instructions+=1;goto B6612d2;
case 0x6612d4:goto L6612d4;
case 0x6612d7:c.instructions+=2;goto B6612d7;
case 0x6612d9:c.instructions+=1;goto B6612d9;
case 0x6612db:goto L6612db;
case 0x6612dd:c.instructions+=2;goto B6612dd;
case 0x6612de:c.instructions+=1;goto B6612de;
case 0x6612e1:goto L6612e1;
case 0x6612e4:goto L6612e4;
case 0x6612e7:c.instructions+=2;goto B6612e7;
case 0x6612e8:c.instructions+=1;goto B6612e8;
case 0x6612ed:goto L6612ed;
case 0x6612f0:c.instructions+=2;goto B6612f0;
case 0x6612f2:c.instructions+=1;goto B6612f2;
case 0x6612f4:goto L6612f4;
case 0x6612f6:c.instructions+=2;goto B6612f6;
case 0x6612f7:c.instructions+=1;goto B6612f7;
case 0x6612fa:goto L6612fa;
case 0x6612fd:goto L6612fd;
case 0x661300:c.instructions+=2;goto B661300;
case 0x661302:c.instructions+=1;goto B661302;
case 0x661304:goto L661304;
case 0x661306:c.instructions+=2;goto B661306;
case 0x661307:c.instructions+=1;goto B661307;
case 0x66130a:goto L66130a;
case 0x66130b:c.instructions+=5;goto B66130b;
case 0x66130c:c.instructions+=4;goto B66130c;
case 0x66130e:c.instructions+=3;goto B66130e;
case 0x66130f:c.instructions+=2;goto B66130f;
case 0x661310:c.instructions+=1;goto B661310;
case 0x661313:goto L661313;
case 0x661315:c.instructions+=19;goto B661315;
case 0x661316:c.instructions+=18;goto B661316;
case 0x661318:c.instructions+=17;goto B661318;
case 0x66131b:c.instructions+=16;goto B66131b;
case 0x66131c:c.instructions+=15;goto B66131c;
case 0x66131d:c.instructions+=14;goto B66131d;
case 0x661320:c.instructions+=13;goto B661320;
case 0x661323:c.instructions+=12;goto B661323;
case 0x661327:c.instructions+=11;goto B661327;
case 0x661328:c.instructions+=10;goto B661328;
case 0x66132b:c.instructions+=9;goto B66132b;
case 0x66132d:c.instructions+=8;goto B66132d;
case 0x66132e:c.instructions+=7;goto B66132e;
case 0x66132f:c.instructions+=6;goto B66132f;
case 0x661332:c.instructions+=5;goto B661332;
case 0x661335:c.instructions+=4;goto B661335;
case 0x661338:c.instructions+=3;goto B661338;
case 0x66133a:c.instructions+=2;goto B66133a;
case 0x66133b:c.instructions+=1;goto B66133b;
case 0x66133e:goto L66133e;
case 0x661340:c.instructions+=2;goto B661340;
case 0x661342:c.instructions+=1;goto B661342;
case 0x661348:goto L661348;
case 0x66134b:c.instructions+=5;goto B66134b;
case 0x66134d:c.instructions+=4;goto B66134d;
case 0x661350:c.instructions+=3;goto B661350;
case 0x661351:c.instructions+=2;goto B661351;
case 0x661352:c.instructions+=1;goto B661352;
case 0x661355:goto L661355;
case 0x661357:c.instructions+=2;goto B661357;
case 0x661359:c.instructions+=1;goto B661359;
case 0x66135f:goto L66135f;
case 0x661362:c.instructions+=2;goto B661362;
case 0x661364:c.instructions+=1;goto B661364;
case 0x661366:goto L661366;
case 0x661368:c.instructions+=2;goto B661368;
case 0x661369:c.instructions+=1;goto B661369;
case 0x66136c:goto L66136c;
case 0x66136f:c.instructions+=1;goto B66136f;
case 0x661371:goto L661371;
case 0x661374:c.instructions+=3;goto B661374;
case 0x661375:c.instructions+=2;goto B661375;
case 0x661378:c.instructions+=1;goto B661378;
case 0x66137d:goto L66137d;
case 0x66137f:c.instructions+=2;goto B66137f;
case 0x661381:c.instructions+=1;goto B661381;
case 0x661383:goto L661383;
case 0x661386:c.instructions+=2;goto B661386;
case 0x661388:c.instructions+=1;goto B661388;
case 0x66138a:goto L66138a;
case 0x66138c:c.instructions+=2;goto B66138c;
case 0x66138d:c.instructions+=1;goto B66138d;
case 0x661390:goto L661390;
case 0x661393:goto L661393;
case 0x661396:c.instructions+=2;goto B661396;
case 0x661399:c.instructions+=1;goto B661399;
case 0x66139c:goto L66139c;
case 0x66139f:c.instructions+=7;goto B66139f;
case 0x6613a1:c.instructions+=6;goto B6613a1;
case 0x6613a4:c.instructions+=5;goto B6613a4;
case 0x6613a7:c.instructions+=4;goto B6613a7;
case 0x6613a8:c.instructions+=3;goto B6613a8;
case 0x6613aa:c.instructions+=2;goto B6613aa;
case 0x6613ab:c.instructions+=1;goto B6613ab;
case 0x6613ae:goto L6613ae;
case 0x6613af:c.instructions+=2;goto B6613af;
case 0x6613b2:c.instructions+=1;goto B6613b2;
case 0x6613b5:goto L6613b5;
case 0x6613b7:c.instructions+=2;goto B6613b7;
case 0x6613b9:c.instructions+=1;goto B6613b9;
case 0x6613bb:goto L6613bb;
case 0x6613be:c.instructions+=3;goto B6613be;
case 0x6613c1:c.instructions+=2;goto B6613c1;
case 0x6613c4:c.instructions+=1;goto B6613c4;
case 0x6613c6:goto L6613c6;
case 0x6613c9:c.instructions+=2;goto B6613c9;
case 0x6613cb:c.instructions+=1;goto B6613cb;
case 0x6613cd:goto L6613cd;
case 0x6613cf:c.instructions+=2;goto B6613cf;
case 0x6613d0:c.instructions+=1;goto B6613d0;
case 0x6613d3:goto L6613d3;
case 0x6613d6:goto L6613d6;
case 0x6613d9:c.instructions+=2;goto B6613d9;
case 0x6613da:c.instructions+=1;goto B6613da;
case 0x6613df:goto L6613df;
case 0x6613e2:c.instructions+=2;goto B6613e2;
case 0x6613e4:c.instructions+=1;goto B6613e4;
case 0x6613e6:goto L6613e6;
case 0x6613e8:c.instructions+=2;goto B6613e8;
case 0x6613e9:c.instructions+=1;goto B6613e9;
case 0x6613ec:goto L6613ec;
case 0x6613ef:goto L6613ef;
case 0x6613f2:c.instructions+=2;goto B6613f2;
case 0x6613f4:c.instructions+=1;goto B6613f4;
case 0x6613f6:goto L6613f6;
case 0x6613f8:c.instructions+=2;goto B6613f8;
case 0x6613f9:c.instructions+=1;goto B6613f9;
case 0x6613fc:goto L6613fc;
case 0x6613fd:c.instructions+=5;goto B6613fd;
case 0x6613fe:c.instructions+=4;goto B6613fe;
case 0x661400:c.instructions+=3;goto B661400;
case 0x661401:c.instructions+=2;goto B661401;
case 0x661402:c.instructions+=1;goto B661402;
case 0x661405:goto L661405;
case 0x661407:c.instructions+=6;goto B661407;
case 0x661408:c.instructions+=5;goto B661408;
case 0x66140a:c.instructions+=4;goto B66140a;
case 0x66140e:c.instructions+=3;goto B66140e;
case 0x66140f:c.instructions+=2;goto B66140f;
case 0x661411:c.instructions+=1;goto B661411;
case 0x661413:goto L661413;
case 0x661414:c.instructions+=6;goto B661414;
case 0x661419:c.instructions+=5;goto B661419;
case 0x66141c:c.instructions+=4;goto B66141c;
case 0x66141e:c.instructions+=3;goto B66141e;
case 0x661420:c.instructions+=2;goto B661420;
case 0x661421:c.instructions+=1;goto B661421;
case 0x661426:goto L661426;
case 0x66142a:c.instructions+=1;goto B66142a;
case 0x66142c:goto L66142c;
case 0x66142d:c.instructions+=1;goto B66142d;
case 0x661432:goto L661432;
case 0x661433:goto L661433;
case 0x661435:c.instructions+=2;goto B661435;
case 0x661436:c.instructions+=1;goto B661436;
case 0x661438:goto L661438;
case 0x66143a:c.instructions+=1;goto B66143a;
case 0x66143f:goto L66143f;
case 0x661443:c.instructions+=1;goto B661443;
case 0x661445:goto L661445;
case 0x661446:c.instructions+=1;goto B661446;
case 0x66144b:goto L66144b;
case 0x66144c:goto L66144c;
case 0x66144e:goto L66144e;
case 0x66144f:c.instructions+=2;goto B66144f;
case 0x661450:c.instructions+=1;goto B661450;
case 0x661453:goto L661453;
case 0x661455:c.instructions+=6;goto B661455;
case 0x661456:c.instructions+=5;goto B661456;
case 0x661458:c.instructions+=4;goto B661458;
case 0x66145c:c.instructions+=3;goto B66145c;
case 0x66145d:c.instructions+=2;goto B66145d;
case 0x66145f:c.instructions+=1;goto B66145f;
case 0x661461:goto L661461;
case 0x661462:c.instructions+=6;goto B661462;
case 0x661467:c.instructions+=5;goto B661467;
case 0x66146a:c.instructions+=4;goto B66146a;
case 0x66146c:c.instructions+=3;goto B66146c;
case 0x66146e:c.instructions+=2;goto B66146e;
case 0x66146f:c.instructions+=1;goto B66146f;
case 0x661474:goto L661474;
case 0x661478:c.instructions+=1;goto B661478;
case 0x66147a:goto L66147a;
case 0x66147b:c.instructions+=1;goto B66147b;
case 0x661480:goto L661480;
case 0x661481:goto L661481;
case 0x661483:c.instructions+=2;goto B661483;
case 0x661484:c.instructions+=1;goto B661484;
case 0x661486:goto L661486;
case 0x661488:c.instructions+=1;goto B661488;
case 0x66148d:goto L66148d;
case 0x661491:c.instructions+=1;goto B661491;
case 0x661493:goto L661493;
case 0x661494:c.instructions+=1;goto B661494;
case 0x661499:goto L661499;
case 0x66149a:goto L66149a;
case 0x66149c:goto L66149c;
case 0x66149d:c.instructions+=2;goto B66149d;
case 0x66149e:c.instructions+=1;goto B66149e;
case 0x6614a1:goto L6614a1;
case 0x6614a3:c.instructions+=13;goto B6614a3;
case 0x6614a4:c.instructions+=12;goto B6614a4;
case 0x6614a6:c.instructions+=11;goto B6614a6;
case 0x6614a9:c.instructions+=10;goto B6614a9;
case 0x6614aa:c.instructions+=9;goto B6614aa;
case 0x6614ad:c.instructions+=8;goto B6614ad;
case 0x6614b0:c.instructions+=7;goto B6614b0;
case 0x6614b1:c.instructions+=6;goto B6614b1;
case 0x6614b3:c.instructions+=5;goto B6614b3;
case 0x6614b9:c.instructions+=4;goto B6614b9;
case 0x6614bc:c.instructions+=3;goto B6614bc;
case 0x6614c0:c.instructions+=2;goto B6614c0;
case 0x6614c1:c.instructions+=1;goto B6614c1;
case 0x6614c3:goto L6614c3;
case 0x6614c6:c.instructions+=1;goto B6614c6;
case 0x6614c8:goto L6614c8;
case 0x6614cb:c.instructions+=1;goto B6614cb;
case 0x6614ce:goto L6614ce;
case 0x6614d1:c.instructions+=8;goto B6614d1;
case 0x6614d4:c.instructions+=7;goto B6614d4;
case 0x6614d6:c.instructions+=6;goto B6614d6;
case 0x6614d8:c.instructions+=5;goto B6614d8;
case 0x6614db:c.instructions+=4;goto B6614db;
case 0x6614de:c.instructions+=3;goto B6614de;
case 0x6614df:c.instructions+=2;goto B6614df;
case 0x6614e1:c.instructions+=1;goto B6614e1;
case 0x6614e3:goto L6614e3;
case 0x6614e6:c.instructions+=1;goto B6614e6;
case 0x6614e8:goto L6614e8;
case 0x6614eb:c.instructions+=1;goto B6614eb;
case 0x6614ed:goto L6614ed;
case 0x6614f0:c.instructions+=5;goto B6614f0;
case 0x6614f3:c.instructions+=4;goto B6614f3;
case 0x6614f6:c.instructions+=3;goto B6614f6;
case 0x6614f9:c.instructions+=2;goto B6614f9;
case 0x6614fc:c.instructions+=1;goto B6614fc;
case 0x661502:goto L661502;
case 0x661505:c.instructions+=1;goto B661505;
case 0x661507:goto L661507;
case 0x66150a:c.instructions+=1;goto B66150a;
case 0x661510:goto L661510;
case 0x661513:c.instructions+=11;goto B661513;
case 0x661516:c.instructions+=10;goto B661516;
case 0x661519:c.instructions+=9;goto B661519;
case 0x66151c:c.instructions+=8;goto B66151c;
case 0x66151f:c.instructions+=7;goto B66151f;
case 0x661522:c.instructions+=6;goto B661522;
case 0x661523:c.instructions+=5;goto B661523;
case 0x661526:c.instructions+=4;goto B661526;
case 0x661527:c.instructions+=3;goto B661527;
case 0x661528:c.instructions+=2;goto B661528;
case 0x66152b:c.instructions+=1;goto B66152b;
case 0x661530:goto L661530;
case 0x661533:c.instructions+=16;goto B661533;
case 0x661535:c.instructions+=15;goto B661535;
case 0x661538:c.instructions+=14;goto B661538;
case 0x66153a:c.instructions+=13;goto B66153a;
case 0x66153d:c.instructions+=12;goto B66153d;
case 0x661540:c.instructions+=11;goto B661540;
case 0x661543:c.instructions+=10;goto B661543;
case 0x661545:c.instructions+=9;goto B661545;
case 0x661548:c.instructions+=8;goto B661548;
case 0x66154b:c.instructions+=7;goto B66154b;
case 0x66154c:c.instructions+=6;goto B66154c;
case 0x66154f:c.instructions+=5;goto B66154f;
case 0x661551:c.instructions+=4;goto B661551;
case 0x661553:c.instructions+=3;goto B661553;
case 0x661554:c.instructions+=2;goto B661554;
case 0x661555:c.instructions+=1;goto B661555;
case 0x661558:goto L661558;
case 0x66155a:c.instructions+=1;goto B66155a;
case 0x661560:goto L661560;
case 0x661565:goto L661565;
case 0x661568:c.instructions+=9;goto B661568;
case 0x66156b:c.instructions+=8;goto B66156b;
case 0x66156e:c.instructions+=7;goto B66156e;
case 0x661570:c.instructions+=6;goto B661570;
case 0x661572:c.instructions+=5;goto B661572;
case 0x661574:c.instructions+=4;goto B661574;
case 0x661576:c.instructions+=3;goto B661576;
case 0x661579:c.instructions+=2;goto B661579;
case 0x66157c:c.instructions+=1;goto B66157c;
case 0x66157e:goto L66157e;
case 0x661580:c.instructions+=5;goto B661580;
case 0x661581:c.instructions+=4;goto B661581;
case 0x661584:c.instructions+=3;goto B661584;
case 0x661587:c.instructions+=2;goto B661587;
case 0x66158a:c.instructions+=1;goto B66158a;
case 0x66158d:goto L66158d;
case 0x661590:c.instructions+=4;goto B661590;
case 0x661592:c.instructions+=3;goto B661592;
case 0x661595:c.instructions+=2;goto B661595;
case 0x661598:c.instructions+=1;goto B661598;
case 0x66159a:goto L66159a;
case 0x66159d:c.instructions+=2;goto B66159d;
case 0x6615a0:c.instructions+=1;goto B6615a0;
case 0x6615a3:goto L6615a3;
case 0x6615a6:c.instructions+=5;goto B6615a6;
case 0x6615a9:c.instructions+=4;goto B6615a9;
case 0x6615ad:c.instructions+=3;goto B6615ad;
case 0x6615af:c.instructions+=2;goto B6615af;
case 0x6615b1:c.instructions+=1;goto B6615b1;
case 0x6615b4:goto L6615b4;
case 0x6615b6:goto L6615b6;
case 0x6615b8:c.instructions+=2;goto B6615b8;
case 0x6615bb:c.instructions+=1;goto B6615bb;
case 0x6615be:goto L6615be;
case 0x6615c0:goto L6615c0;
case 0x6615c3:c.instructions+=1;goto B6615c3;
case 0x6615c5:goto L6615c5;
case 0x6615c8:goto L6615c8;
case 0x6615cb:c.instructions+=4;goto B6615cb;
case 0x6615ce:c.instructions+=3;goto B6615ce;
case 0x6615d1:c.instructions+=2;goto B6615d1;
case 0x6615d4:c.instructions+=1;goto B6615d4;
case 0x6615d9:goto L6615d9;
case 0x6615dc:c.instructions+=1;goto B6615dc;
case 0x6615de:goto L6615de;
case 0x6615e1:goto L6615e1;
case 0x6615e3:c.instructions+=4;goto B6615e3;
case 0x6615e6:c.instructions+=3;goto B6615e6;
case 0x6615e9:c.instructions+=2;goto B6615e9;
case 0x6615eb:c.instructions+=1;goto B6615eb;
case 0x6615ed:goto L6615ed;
case 0x6615f0:c.instructions+=8;goto B6615f0;
case 0x6615f3:c.instructions+=7;goto B6615f3;
case 0x6615f6:c.instructions+=6;goto B6615f6;
case 0x6615f8:c.instructions+=5;goto B6615f8;
case 0x6615fa:c.instructions+=4;goto B6615fa;
case 0x6615fc:c.instructions+=3;goto B6615fc;
case 0x6615fe:c.instructions+=2;goto B6615fe;
case 0x661601:c.instructions+=1;goto B661601;
case 0x661603:goto L661603;
case 0x661606:c.instructions+=3;goto B661606;
case 0x661609:c.instructions+=2;goto B661609;
case 0x66160c:c.instructions+=1;goto B66160c;
case 0x66160f:goto L66160f;
case 0x661612:c.instructions+=4;goto B661612;
case 0x661614:c.instructions+=3;goto B661614;
case 0x661616:c.instructions+=2;goto B661616;
case 0x661619:c.instructions+=1;goto B661619;
case 0x66161b:goto L66161b;
case 0x66161d:goto L66161d;
case 0x66161f:c.instructions+=5;goto B66161f;
case 0x661621:c.instructions+=4;goto B661621;
case 0x661624:c.instructions+=3;goto B661624;
case 0x661627:c.instructions+=2;goto B661627;
case 0x66162a:c.instructions+=1;goto B66162a;
case 0x66162d:goto L66162d;
case 0x66162f:goto L66162f;
case 0x661632:c.instructions+=1;goto B661632;
case 0x661634:goto L661634;
case 0x661637:c.instructions+=1;goto B661637;
case 0x66163a:goto L66163a;
case 0x66163c:c.instructions+=3;goto B66163c;
case 0x66163f:c.instructions+=2;goto B66163f;
case 0x661642:c.instructions+=1;goto B661642;
case 0x661644:goto L661644;
case 0x661646:goto L661646;
case 0x661647:c.instructions+=4;goto B661647;
case 0x661648:c.instructions+=3;goto B661648;
case 0x661649:c.instructions+=2;goto B661649;
case 0x66164a:c.instructions+=1;goto B66164a;
case 0x66164d:goto L66164d;
case 0x66164f:c.instructions+=19;goto B66164f;
case 0x661650:c.instructions+=18;goto B661650;
case 0x661652:c.instructions+=17;goto B661652;
case 0x661653:c.instructions+=16;goto B661653;
case 0x661656:c.instructions+=15;goto B661656;
case 0x661657:c.instructions+=14;goto B661657;
case 0x66165a:c.instructions+=13;goto B66165a;
case 0x66165b:c.instructions+=12;goto B66165b;
case 0x66165f:c.instructions+=11;goto B66165f;
case 0x661660:c.instructions+=10;goto B661660;
case 0x661663:c.instructions+=9;goto B661663;
case 0x661667:c.instructions+=8;goto B661667;
case 0x66166a:c.instructions+=7;goto B66166a;
case 0x66166d:c.instructions+=6;goto B66166d;
case 0x661670:c.instructions+=5;goto B661670;
case 0x661673:c.instructions+=4;goto B661673;
case 0x661676:c.instructions+=3;goto B661676;
case 0x66167a:c.instructions+=2;goto B66167a;
case 0x66167c:c.instructions+=1;goto B66167c;
case 0x66167e:goto L66167e;
case 0x661680:c.instructions+=2;goto B661680;
case 0x661681:c.instructions+=1;goto B661681;
case 0x661684:goto L661684;
case 0x661686:c.instructions+=3;goto B661686;
case 0x661687:c.instructions+=2;goto B661687;
case 0x661689:c.instructions+=1;goto B661689;
case 0x66168b:goto L66168b;
case 0x66168e:c.instructions+=3;goto B66168e;
case 0x661690:c.instructions+=2;goto B661690;
case 0x661691:c.instructions+=1;goto B661691;
case 0x661694:goto L661694;
case 0x661696:c.instructions+=2;goto B661696;
case 0x661699:c.instructions+=1;goto B661699;
case 0x66169c:goto L66169c;
case 0x66169f:c.instructions+=3;goto B66169f;
case 0x6616a1:c.instructions+=2;goto B6616a1;
case 0x6616a3:c.instructions+=1;goto B6616a3;
case 0x6616a5:goto L6616a5;
case 0x6616a7:c.instructions+=2;goto B6616a7;
case 0x6616a8:c.instructions+=1;goto B6616a8;
case 0x6616ab:goto L6616ab;
case 0x6616ad:c.instructions+=3;goto B6616ad;
case 0x6616ae:c.instructions+=2;goto B6616ae;
case 0x6616b0:c.instructions+=1;goto B6616b0;
case 0x6616b2:goto L6616b2;
case 0x6616b5:c.instructions+=3;goto B6616b5;
case 0x6616b7:c.instructions+=2;goto B6616b7;
case 0x6616b8:c.instructions+=1;goto B6616b8;
case 0x6616bb:goto L6616bb;
case 0x6616bd:c.instructions+=2;goto B6616bd;
case 0x6616c0:c.instructions+=1;goto B6616c0;
case 0x6616c3:goto L6616c3;
case 0x6616c6:c.instructions+=3;goto B6616c6;
case 0x6616c8:c.instructions+=2;goto B6616c8;
case 0x6616ca:c.instructions+=1;goto B6616ca;
case 0x6616cc:goto L6616cc;
case 0x6616ce:c.instructions+=2;goto B6616ce;
case 0x6616cf:c.instructions+=1;goto B6616cf;
case 0x6616d2:goto L6616d2;
case 0x6616d4:c.instructions+=3;goto B6616d4;
case 0x6616d5:c.instructions+=2;goto B6616d5;
case 0x6616d7:c.instructions+=1;goto B6616d7;
case 0x6616d9:goto L6616d9;
case 0x6616dc:c.instructions+=3;goto B6616dc;
case 0x6616de:c.instructions+=2;goto B6616de;
case 0x6616df:c.instructions+=1;goto B6616df;
case 0x6616e2:goto L6616e2;
case 0x6616e4:c.instructions+=2;goto B6616e4;
case 0x6616e7:c.instructions+=1;goto B6616e7;
case 0x6616ea:goto L6616ea;
case 0x6616ed:c.instructions+=3;goto B6616ed;
case 0x6616ef:c.instructions+=2;goto B6616ef;
case 0x6616f1:c.instructions+=1;goto B6616f1;
case 0x6616f3:goto L6616f3;
case 0x6616f5:c.instructions+=2;goto B6616f5;
case 0x6616f6:c.instructions+=1;goto B6616f6;
case 0x6616f9:goto L6616f9;
case 0x6616fb:c.instructions+=3;goto B6616fb;
case 0x6616fc:c.instructions+=2;goto B6616fc;
case 0x6616fe:c.instructions+=1;goto B6616fe;
case 0x661700:goto L661700;
case 0x661703:c.instructions+=3;goto B661703;
case 0x661705:c.instructions+=2;goto B661705;
case 0x661706:c.instructions+=1;goto B661706;
case 0x661709:goto L661709;
case 0x66170b:c.instructions+=2;goto B66170b;
case 0x66170e:c.instructions+=1;goto B66170e;
case 0x661711:goto L661711;
case 0x661714:c.instructions+=3;goto B661714;
case 0x661716:c.instructions+=2;goto B661716;
case 0x661718:c.instructions+=1;goto B661718;
case 0x66171a:goto L66171a;
case 0x66171c:c.instructions+=2;goto B66171c;
case 0x66171d:c.instructions+=1;goto B66171d;
case 0x661720:goto L661720;
case 0x661722:c.instructions+=1;goto B661722;
case 0x661724:goto L661724;
case 0x661728:c.instructions+=3;goto B661728;
case 0x66172c:c.instructions+=2;goto B66172c;
case 0x661730:c.instructions+=1;goto B661730;
case 0x661732:goto L661732;
case 0x661735:c.instructions+=4;goto B661735;
case 0x661738:c.instructions+=3;goto B661738;
case 0x66173e:c.instructions+=2;goto B66173e;
case 0x661740:c.instructions+=1;goto B661740;
case 0x661742:goto L661742;
case 0x661746:c.instructions+=2;goto B661746;
case 0x661748:c.instructions+=1;goto B661748;
case 0x66174a:goto L66174a;
case 0x66174f:c.instructions+=1;goto B66174f;
case 0x661751:goto L661751;
case 0x661755:c.instructions+=2;goto B661755;
case 0x661759:c.instructions+=1;goto B661759;
case 0x66175b:goto L66175b;
case 0x66175f:c.instructions+=1;goto B66175f;
case 0x661761:goto L661761;
case 0x661765:c.instructions+=1;goto B661765;
case 0x661767:goto L661767;
case 0x66176b:c.instructions+=1;goto B66176b;
case 0x66176d:goto L66176d;
case 0x661771:c.instructions+=1;goto B661771;
case 0x661773:goto L661773;
case 0x661777:c.instructions+=1;goto B661777;
case 0x661779:goto L661779;
case 0x661780:c.instructions+=1;goto B661780;
case 0x661785:goto L661785;
case 0x66178f:c.instructions+=1;goto B66178f;
case 0x661791:goto L661791;
case 0x661796:c.instructions+=6;goto B661796;
case 0x66179c:c.instructions+=5;goto B66179c;
case 0x6617a1:c.instructions+=4;goto B6617a1;
case 0x6617a3:c.instructions+=3;goto B6617a3;
case 0x6617a6:c.instructions+=2;goto B6617a6;
case 0x6617ab:c.instructions+=1;goto B6617ab;
case 0x6617b1:goto L6617b1;
case 0x6617b7:goto L6617b7;
case 0x6617bc:c.instructions+=2;goto B6617bc;
case 0x6617be:c.instructions+=1;goto B6617be;
case 0x6617c4:goto L6617c4;
case 0x6617ca:goto L6617ca;
case 0x6617cf:c.instructions+=1;goto B6617cf;
case 0x6617d1:goto L6617d1;
case 0x6617d6:c.instructions+=1;goto B6617d6;
case 0x6617d8:goto L6617d8;
case 0x6617dd:c.instructions+=1;goto B6617dd;
case 0x6617df:goto L6617df;
case 0x6617e4:c.instructions+=1;goto B6617e4;
case 0x6617ea:goto L6617ea;
case 0x6617ef:goto L6617ef;
case 0x6617f3:c.instructions+=1;goto B6617f3;
case 0x6617f7:goto L6617f7;
case 0x6617fb:c.instructions+=10;goto B6617fb;
case 0x6617fe:c.instructions+=9;goto B6617fe;
case 0x661801:c.instructions+=8;goto B661801;
case 0x661804:c.instructions+=7;goto B661804;
case 0x661807:c.instructions+=6;goto B661807;
case 0x66180a:c.instructions+=5;goto B66180a;
case 0x66180d:c.instructions+=4;goto B66180d;
case 0x661813:c.instructions+=3;goto B661813;
case 0x661816:c.instructions+=2;goto B661816;
case 0x661819:c.instructions+=1;goto B661819;
case 0x66181b:goto L66181b;
case 0x66181f:c.instructions+=2;goto B66181f;
case 0x661823:c.instructions+=1;goto B661823;
case 0x661825:goto L661825;
case 0x661828:c.instructions+=7;goto B661828;
case 0x66182b:c.instructions+=6;goto B66182b;
case 0x66182e:c.instructions+=5;goto B66182e;
case 0x661831:c.instructions+=4;goto B661831;
case 0x661834:c.instructions+=3;goto B661834;
case 0x66183a:c.instructions+=2;goto B66183a;
case 0x66183d:c.instructions+=1;goto B66183d;
case 0x661840:goto L661840;
case 0x661843:c.instructions+=2;goto B661843;
case 0x661847:c.instructions+=1;goto B661847;
case 0x66184d:goto L66184d;
case 0x661851:goto L661851;
case 0x661854:c.instructions+=5;goto B661854;
case 0x661855:c.instructions+=4;goto B661855;
case 0x661856:c.instructions+=3;goto B661856;
case 0x661857:c.instructions+=2;goto B661857;
case 0x661858:c.instructions+=1;goto B661858;
case 0x66185b:goto L66185b;
case 0x661860:c.instructions+=1;goto B661860;
case 0x661866:goto L661866;
case 0x661867:c.instructions+=1;goto B661867;
case 0x66186d:goto L66186d;
case 0x66186e:c.instructions+=1;goto B66186e;
case 0x661874:goto L661874;
case 0x661879:c.instructions+=1;goto B661879;
case 0x66187f:goto L66187f;
case 0x661882:c.instructions+=9;goto B661882;
case 0x661885:c.instructions+=8;goto B661885;
case 0x661888:c.instructions+=7;goto B661888;
case 0x66188a:c.instructions+=6;goto B66188a;
case 0x66188d:c.instructions+=5;goto B66188d;
case 0x66188e:c.instructions+=4;goto B66188e;
case 0x66188f:c.instructions+=3;goto B66188f;
case 0x661892:c.instructions+=2;goto B661892;
case 0x661893:c.instructions+=1;goto B661893;
case 0x661898:goto L661898;
case 0x66189c:c.instructions+=3;goto B66189c;
case 0x66189f:c.instructions+=2;goto B66189f;
case 0x6618a2:c.instructions+=1;goto B6618a2;
case 0x6618a4:goto L6618a4;
case 0x6618a8:c.instructions+=2;goto B6618a8;
case 0x6618aa:c.instructions+=1;goto B6618aa;
case 0x6618ac:goto L6618ac;
case 0x6618af:c.instructions+=26;goto B6618af;
case 0x6618b1:c.instructions+=25;goto B6618b1;
case 0x6618b4:c.instructions+=24;goto B6618b4;
case 0x6618b6:c.instructions+=23;goto B6618b6;
case 0x6618b7:c.instructions+=22;goto B6618b7;
case 0x6618b9:c.instructions+=21;goto B6618b9;
case 0x6618bc:c.instructions+=20;goto B6618bc;
case 0x6618be:c.instructions+=19;goto B6618be;
case 0x6618c0:c.instructions+=18;goto B6618c0;
case 0x6618c3:c.instructions+=17;goto B6618c3;
case 0x6618c6:c.instructions+=16;goto B6618c6;
case 0x6618c8:c.instructions+=15;goto B6618c8;
case 0x6618cb:c.instructions+=14;goto B6618cb;
case 0x6618cd:c.instructions+=13;goto B6618cd;
case 0x6618d0:c.instructions+=12;goto B6618d0;
case 0x6618d2:c.instructions+=11;goto B6618d2;
case 0x6618d5:c.instructions+=10;goto B6618d5;
case 0x6618d7:c.instructions+=9;goto B6618d7;
case 0x6618da:c.instructions+=8;goto B6618da;
case 0x6618dc:c.instructions+=7;goto B6618dc;
case 0x6618df:c.instructions+=6;goto B6618df;
case 0x6618e1:c.instructions+=5;goto B6618e1;
case 0x6618e4:c.instructions+=4;goto B6618e4;
case 0x6618e7:c.instructions+=3;goto B6618e7;
case 0x6618ea:c.instructions+=2;goto B6618ea;
case 0x6618ed:c.instructions+=1;goto B6618ed;
case 0x6618f2:goto L6618f2;
case 0x6618f4:c.instructions+=1;goto B6618f4;
case 0x6618fa:goto L6618fa;
case 0x6618fc:goto L6618fc;
case 0x661901:c.instructions+=1;goto B661901;
case 0x661903:goto L661903;
case 0x661904:c.instructions+=1;goto B661904;
case 0x661906:goto L661906;
case 0x661907:c.instructions+=1;goto B661907;
case 0x661909:goto L661909;
case 0x66190a:c.instructions+=1;goto B66190a;
case 0x66190c:goto L66190c;
case 0x661911:goto L661911;
case 0x661917:goto L661917;
case 0x66191b:goto L66191b;
case 0x66191f:goto L66191f;
case 0x661923:c.instructions+=3;goto B661923;
case 0x661929:c.instructions+=2;goto B661929;
case 0x66192f:c.instructions+=1;goto B66192f;
case 0x661931:goto L661931;
case 0x661937:c.instructions+=1;goto B661937;
case 0x661939:goto L661939;
case 0x66193f:c.instructions+=1;goto B66193f;
case 0x661941:goto L661941;
case 0x661943:c.instructions+=1;goto B661943;
case 0x661945:goto L661945;
case 0x66194b:c.instructions+=2;goto B66194b;
case 0x661952:c.instructions+=1;goto B661952;
case 0x661954:goto L661954;
case 0x66195a:c.instructions+=1;goto B66195a;
case 0x661961:goto L661961;
case 0x661965:c.instructions+=4;goto B661965;
case 0x661968:c.instructions+=3;goto B661968;
case 0x66196e:c.instructions+=2;goto B66196e;
case 0x661973:c.instructions+=1;goto B661973;
case 0x661975:goto L661975;
case 0x66197a:c.instructions+=1;goto B66197a;
case 0x66197c:goto L66197c;
case 0x66197f:c.instructions+=7;goto B66197f;
case 0x661982:c.instructions+=6;goto B661982;
case 0x661985:c.instructions+=5;goto B661985;
case 0x661987:c.instructions+=4;goto B661987;
case 0x66198a:c.instructions+=3;goto B66198a;
case 0x66198d:c.instructions+=2;goto B66198d;
case 0x66198e:c.instructions+=1;goto B66198e;
case 0x661993:goto L661993;
case 0x661997:goto L661997;
case 0x66199b:c.instructions+=1;goto B66199b;
case 0x6619a0:goto L6619a0;
case 0x6619a5:c.instructions+=1;goto B6619a5;
case 0x6619ab:goto L6619ab;
case 0x6619b0:c.instructions+=1;goto B6619b0;
case 0x6619b2:goto L6619b2;
case 0x6619b7:c.instructions+=1;goto B6619b7;
case 0x6619b9:goto L6619b9;
case 0x6619be:c.instructions+=1;goto B6619be;
case 0x6619c0:goto L6619c0;
case 0x6619c6:c.instructions+=2;goto B6619c6;
case 0x6619c7:c.instructions+=1;goto B6619c7;
case 0x6619c9:goto L6619c9;
case 0x6619ca:c.instructions+=1;goto B6619ca;
case 0x6619cc:goto L6619cc;
case 0x6619cd:c.instructions+=1;goto B6619cd;
case 0x6619cf:goto L6619cf;
case 0x6619d4:c.instructions+=1;goto B6619d4;
case 0x6619d6:goto L6619d6;
case 0x6619d8:c.instructions+=1;goto B6619d8;
case 0x6619da:goto L6619da;
case 0x6619dc:c.instructions+=1;goto B6619dc;
case 0x6619dd:goto L6619dd;
case 0x6619e3:c.instructions+=7;goto B6619e3;
case 0x6619ea:c.instructions+=6;goto B6619ea;
case 0x6619ec:c.instructions+=5;goto B6619ec;
case 0x6619ef:c.instructions+=4;goto B6619ef;
case 0x6619f0:c.instructions+=3;goto B6619f0;
case 0x6619f4:c.instructions+=2;goto B6619f4;
case 0x6619f6:c.instructions+=1;goto B6619f6;
case 0x6619fb:goto L6619fb;
case 0x661a01:c.instructions+=6;goto B661a01;
case 0x661a05:c.instructions+=5;goto B661a05;
case 0x661a08:c.instructions+=4;goto B661a08;
case 0x661a0c:c.instructions+=3;goto B661a0c;
case 0x661a0e:c.instructions+=2;goto B661a0e;
case 0x661a0f:c.instructions+=1;goto B661a0f;
case 0x661a14:goto L661a14;
case 0x661a17:c.instructions+=7;goto B661a17;
case 0x661a1a:c.instructions+=6;goto B661a1a;
case 0x661a1d:c.instructions+=5;goto B661a1d;
case 0x661a1f:c.instructions+=4;goto B661a1f;
case 0x661a22:c.instructions+=3;goto B661a22;
case 0x661a25:c.instructions+=2;goto B661a25;
case 0x661a26:c.instructions+=1;goto B661a26;
case 0x661a2b:goto L661a2b;
case 0x661a2f:c.instructions+=1;goto B661a2f;
case 0x661a32:goto L661a32;
case 0x661a35:c.instructions+=2;goto B661a35;
case 0x661a3b:c.instructions+=1;goto B661a3b;
case 0x661a40:goto L661a40;
case 0x661a42:c.instructions+=17;goto B661a42;
case 0x661a43:c.instructions+=16;goto B661a43;
case 0x661a45:c.instructions+=15;goto B661a45;
case 0x661a48:c.instructions+=14;goto B661a48;
case 0x661a4b:c.instructions+=13;goto B661a4b;
case 0x661a4c:c.instructions+=12;goto B661a4c;
case 0x661a4f:c.instructions+=11;goto B661a4f;
case 0x661a50:c.instructions+=10;goto B661a50;
case 0x661a53:c.instructions+=9;goto B661a53;
case 0x661a56:c.instructions+=8;goto B661a56;
case 0x661a59:c.instructions+=7;goto B661a59;
case 0x661a5c:c.instructions+=6;goto B661a5c;
case 0x661a5f:c.instructions+=5;goto B661a5f;
case 0x661a61:c.instructions+=4;goto B661a61;
case 0x661a62:c.instructions+=3;goto B661a62;
case 0x661a65:c.instructions+=2;goto B661a65;
case 0x661a68:c.instructions+=1;goto B661a68;
case 0x661a6a:goto L661a6a;
case 0x661a6c:c.instructions+=2;goto B661a6c;
case 0x661a6d:c.instructions+=1;goto B661a6d;
case 0x661a70:goto L661a70;
case 0x661a73:c.instructions+=5;goto B661a73;
case 0x661a75:c.instructions+=4;goto B661a75;
case 0x661a76:c.instructions+=3;goto B661a76;
case 0x661a78:c.instructions+=2;goto B661a78;
case 0x661a7b:c.instructions+=1;goto B661a7b;
case 0x661a7d:goto L661a7d;
case 0x661a7f:c.instructions+=2;goto B661a7f;
case 0x661a80:c.instructions+=1;goto B661a80;
case 0x661a83:goto L661a83;
case 0x661a85:c.instructions+=4;goto B661a85;
case 0x661a88:c.instructions+=3;goto B661a88;
case 0x661a8b:c.instructions+=2;goto B661a8b;
case 0x661a8e:c.instructions+=1;goto B661a8e;
case 0x661a90:goto L661a90;
case 0x661a93:goto L661a93;
case 0x661a95:c.instructions+=2;goto B661a95;
case 0x661a97:c.instructions+=1;goto B661a97;
case 0x661a9d:goto L661a9d;
case 0x661a9f:c.instructions+=2;goto B661a9f;
case 0x661aa0:c.instructions+=1;goto B661aa0;
case 0x661aa3:goto L661aa3;
case 0x661aa5:c.instructions+=1;goto B661aa5;
case 0x661aab:goto L661aab;
case 0x661aae:c.instructions+=5;goto B661aae;
case 0x661ab1:c.instructions+=4;goto B661ab1;
case 0x661ab2:c.instructions+=3;goto B661ab2;
case 0x661ab5:c.instructions+=2;goto B661ab5;
case 0x661ab6:c.instructions+=1;goto B661ab6;
case 0x661abb:goto L661abb;
case 0x661abd:c.instructions+=2;goto B661abd;
case 0x661ac0:c.instructions+=1;goto B661ac0;
case 0x661ac6:goto L661ac6;
case 0x661ac8:c.instructions+=3;goto B661ac8;
case 0x661aca:c.instructions+=2;goto B661aca;
case 0x661acb:c.instructions+=1;goto B661acb;
case 0x661ace:goto L661ace;
case 0x661ad0:c.instructions+=4;goto B661ad0;
case 0x661ad4:c.instructions+=3;goto B661ad4;
case 0x661ad8:c.instructions+=2;goto B661ad8;
case 0x661adb:c.instructions+=1;goto B661adb;
case 0x661ae1:goto L661ae1;
case 0x661ae4:c.instructions+=12;goto B661ae4;
case 0x661ae7:c.instructions+=11;goto B661ae7;
case 0x661aea:c.instructions+=10;goto B661aea;
case 0x661aec:c.instructions+=9;goto B661aec;
case 0x661aee:c.instructions+=8;goto B661aee;
case 0x661af0:c.instructions+=7;goto B661af0;
case 0x661af3:c.instructions+=6;goto B661af3;
case 0x661af5:c.instructions+=5;goto B661af5;
case 0x661af8:c.instructions+=4;goto B661af8;
case 0x661afb:c.instructions+=3;goto B661afb;
case 0x661afd:c.instructions+=2;goto B661afd;
case 0x661afe:c.instructions+=1;goto B661afe;
case 0x661b01:goto L661b01;
case 0x661b04:c.instructions+=4;goto B661b04;
case 0x661b06:c.instructions+=3;goto B661b06;
case 0x661b09:c.instructions+=2;goto B661b09;
case 0x661b0b:c.instructions+=1;goto B661b0b;
case 0x661b0d:goto L661b0d;
case 0x661b10:c.instructions+=3;goto B661b10;
case 0x661b12:c.instructions+=2;goto B661b12;
case 0x661b13:c.instructions+=1;goto B661b13;
case 0x661b16:goto L661b16;
case 0x661b19:c.instructions+=6;goto B661b19;
case 0x661b1b:c.instructions+=5;goto B661b1b;
case 0x661b1e:c.instructions+=4;goto B661b1e;
case 0x661b21:c.instructions+=3;goto B661b21;
case 0x661b23:c.instructions+=2;goto B661b23;
case 0x661b26:c.instructions+=1;goto B661b26;
case 0x661b29:goto L661b29;
case 0x661b2b:goto L661b2b;
case 0x661b2d:c.instructions+=1;goto B661b2d;
case 0x661b30:goto L661b30;
case 0x661b32:goto L661b32;
case 0x661b35:c.instructions+=1;goto B661b35;
case 0x661b38:goto L661b38;
case 0x661b3b:c.instructions+=9;goto B661b3b;
case 0x661b3e:c.instructions+=8;goto B661b3e;
case 0x661b40:c.instructions+=7;goto B661b40;
case 0x661b43:c.instructions+=6;goto B661b43;
case 0x661b44:c.instructions+=5;goto B661b44;
case 0x661b47:c.instructions+=4;goto B661b47;
case 0x661b4a:c.instructions+=3;goto B661b4a;
case 0x661b4b:c.instructions+=2;goto B661b4b;
case 0x661b4c:c.instructions+=1;goto B661b4c;
case 0x661b51:goto L661b51;
case 0x661b53:c.instructions+=2;goto B661b53;
case 0x661b56:c.instructions+=1;goto B661b56;
case 0x661b5c:goto L661b5c;
case 0x661b5f:c.instructions+=3;goto B661b5f;
case 0x661b61:c.instructions+=2;goto B661b61;
case 0x661b62:c.instructions+=1;goto B661b62;
case 0x661b65:goto L661b65;
case 0x661b68:c.instructions+=2;goto B661b68;
case 0x661b6a:c.instructions+=1;goto B661b6a;
case 0x661b6c:goto L661b6c;
case 0x661b73:c.instructions+=1;goto B661b73;
case 0x661b78:goto L661b78;
case 0x661b7b:c.instructions+=6;goto B661b7b;
case 0x661b7c:c.instructions+=5;goto B661b7c;
case 0x661b7f:c.instructions+=4;goto B661b7f;
case 0x661b80:c.instructions+=3;goto B661b80;
case 0x661b83:c.instructions+=2;goto B661b83;
case 0x661b84:c.instructions+=1;goto B661b84;
case 0x661b89:goto L661b89;
case 0x661b8b:c.instructions+=2;goto B661b8b;
case 0x661b8e:c.instructions+=1;goto B661b8e;
case 0x661b94:goto L661b94;
case 0x661b97:c.instructions+=4;goto B661b97;
case 0x661b98:c.instructions+=3;goto B661b98;
case 0x661b9b:c.instructions+=2;goto B661b9b;
case 0x661b9e:c.instructions+=1;goto B661b9e;
case 0x661ba3:goto L661ba3;
case 0x661ba5:c.instructions+=2;goto B661ba5;
case 0x661ba8:c.instructions+=1;goto B661ba8;
case 0x661baa:goto L661baa;
case 0x661bad:c.instructions+=7;goto B661bad;
case 0x661bb0:c.instructions+=6;goto B661bb0;
case 0x661bb3:c.instructions+=5;goto B661bb3;
case 0x661bb5:c.instructions+=4;goto B661bb5;
case 0x661bb8:c.instructions+=3;goto B661bb8;
case 0x661bbb:c.instructions+=2;goto B661bbb;
case 0x661bbc:c.instructions+=1;goto B661bbc;
case 0x661bc1:goto L661bc1;
case 0x661bc3:c.instructions+=3;goto B661bc3;
case 0x661bc6:c.instructions+=2;goto B661bc6;
case 0x661bc9:c.instructions+=1;goto B661bc9;
case 0x661bcb:goto L661bcb;
case 0x661bcc:c.instructions+=1;goto B661bcc;
case 0x661bcf:goto L661bcf;
case 0x661bd2:c.instructions+=26;goto B661bd2;
case 0x661bd4:c.instructions+=25;goto B661bd4;
case 0x661bd6:c.instructions+=24;goto B661bd6;
case 0x661bd8:c.instructions+=23;goto B661bd8;
case 0x661bda:c.instructions+=22;goto B661bda;
case 0x661bdd:c.instructions+=21;goto B661bdd;
case 0x661bdf:c.instructions+=20;goto B661bdf;
case 0x661be1:c.instructions+=19;goto B661be1;
case 0x661be4:c.instructions+=18;goto B661be4;
case 0x661be6:c.instructions+=17;goto B661be6;
case 0x661be8:c.instructions+=16;goto B661be8;
case 0x661beb:c.instructions+=15;goto B661beb;
case 0x661bed:c.instructions+=14;goto B661bed;
case 0x661bef:c.instructions+=13;goto B661bef;
case 0x661bf2:c.instructions+=12;goto B661bf2;
case 0x661bf4:c.instructions+=11;goto B661bf4;
case 0x661bf7:c.instructions+=10;goto B661bf7;
case 0x661bfe:c.instructions+=9;goto B661bfe;
case 0x661c01:c.instructions+=8;goto B661c01;
case 0x661c03:c.instructions+=7;goto B661c03;
case 0x661c06:c.instructions+=6;goto B661c06;
case 0x661c09:c.instructions+=5;goto B661c09;
case 0x661c0c:c.instructions+=4;goto B661c0c;
case 0x661c0f:c.instructions+=3;goto B661c0f;
case 0x661c12:c.instructions+=2;goto B661c12;
case 0x661c15:c.instructions+=1;goto B661c15;
case 0x661c1b:goto L661c1b;
case 0x661c1e:c.instructions+=5;goto B661c1e;
case 0x661c1f:c.instructions+=4;goto B661c1f;
case 0x661c20:c.instructions+=3;goto B661c20;
case 0x661c21:c.instructions+=2;goto B661c21;
case 0x661c22:c.instructions+=1;goto B661c22;
case 0x661c25:goto L661c25;
case 0x661c27:c.instructions+=7;goto B661c27;
case 0x661c28:c.instructions+=6;goto B661c28;
case 0x661c2a:c.instructions+=5;goto B661c2a;
case 0x661c2d:c.instructions+=4;goto B661c2d;
case 0x661c2f:c.instructions+=3;goto B661c2f;
case 0x661c32:c.instructions+=2;goto B661c32;
case 0x661c35:c.instructions+=1;goto B661c35;
case 0x661c3a:goto L661c3a;
case 0x661c3b:c.instructions+=1;goto B661c3b;
case 0x661c3e:goto L661c3e;
case 0x661c40:c.instructions+=11;goto B661c40;
case 0x661c41:c.instructions+=10;goto B661c41;
case 0x661c43:c.instructions+=9;goto B661c43;
case 0x661c46:c.instructions+=8;goto B661c46;
case 0x661c47:c.instructions+=7;goto B661c47;
case 0x661c48:c.instructions+=6;goto B661c48;
case 0x661c4b:c.instructions+=5;goto B661c4b;
case 0x661c4c:c.instructions+=4;goto B661c4c;
case 0x661c4e:c.instructions+=3;goto B661c4e;
case 0x661c51:c.instructions+=2;goto B661c51;
case 0x661c53:c.instructions+=1;goto B661c53;
case 0x661c55:goto L661c55;
case 0x661c57:c.instructions+=1;goto B661c57;
case 0x661c5c:goto L661c5c;
case 0x661c60:goto L661c60;
case 0x661c63:c.instructions+=4;goto B661c63;
case 0x661c66:c.instructions+=3;goto B661c66;
case 0x661c6d:c.instructions+=2;goto B661c6d;
case 0x661c6e:c.instructions+=1;goto B661c6e;
case 0x661c73:goto L661c73;
case 0x661c75:c.instructions+=2;goto B661c75;
case 0x661c76:c.instructions+=1;goto B661c76;
case 0x661c78:goto L661c78;
case 0x661c7d:c.instructions+=7;goto B661c7d;
case 0x661c7e:c.instructions+=6;goto B661c7e;
case 0x661c80:c.instructions+=5;goto B661c80;
case 0x661c83:c.instructions+=4;goto B661c83;
case 0x661c85:c.instructions+=3;goto B661c85;
case 0x661c86:c.instructions+=2;goto B661c86;
case 0x661c89:c.instructions+=1;goto B661c89;
case 0x661c8e:goto L661c8e;
case 0x661c91:c.instructions+=1;goto B661c91;
case 0x661c93:goto L661c93;
case 0x661c95:goto L661c95;
case 0x661c97:c.instructions+=2;goto B661c97;
case 0x661c9a:c.instructions+=1;goto B661c9a;
case 0x661c9c:goto L661c9c;
case 0x661ca1:c.instructions+=1;goto B661ca1;
case 0x661ca6:goto L661ca6;
case 0x661cac:c.instructions+=15;goto B661cac;
case 0x661caf:c.instructions+=14;goto B661caf;
case 0x661cb2:c.instructions+=13;goto B661cb2;
case 0x661cb5:c.instructions+=12;goto B661cb5;
case 0x661cb7:c.instructions+=11;goto B661cb7;
case 0x661cba:c.instructions+=10;goto B661cba;
case 0x661cbe:c.instructions+=9;goto B661cbe;
case 0x661cc1:c.instructions+=8;goto B661cc1;
case 0x661cc4:c.instructions+=7;goto B661cc4;
case 0x661cc6:c.instructions+=6;goto B661cc6;
case 0x661cc9:c.instructions+=5;goto B661cc9;
case 0x661ccc:c.instructions+=4;goto B661ccc;
case 0x661cce:c.instructions+=3;goto B661cce;
case 0x661cd1:c.instructions+=2;goto B661cd1;
case 0x661cd4:c.instructions+=1;goto B661cd4;
case 0x661cda:goto L661cda;
case 0x661cdd:c.instructions+=2;goto B661cdd;
case 0x661cdf:c.instructions+=1;goto B661cdf;
case 0x661ce2:goto L661ce2;
case 0x661ce5:c.instructions+=23;goto B661ce5;
case 0x661ced:c.instructions+=22;goto B661ced;
case 0x661cf0:c.instructions+=21;goto B661cf0;
case 0x661cf3:c.instructions+=20;goto B661cf3;
case 0x661cf7:c.instructions+=19;goto B661cf7;
case 0x661cfd:c.instructions+=18;goto B661cfd;
case 0x661d00:c.instructions+=17;goto B661d00;
case 0x661d03:c.instructions+=16;goto B661d03;
case 0x661d06:c.instructions+=15;goto B661d06;
case 0x661d09:c.instructions+=14;goto B661d09;
case 0x661d0c:c.instructions+=13;goto B661d0c;
case 0x661d10:c.instructions+=12;goto B661d10;
case 0x661d16:c.instructions+=11;goto B661d16;
case 0x661d19:c.instructions+=10;goto B661d19;
case 0x661d1c:c.instructions+=9;goto B661d1c;
case 0x661d1f:c.instructions+=8;goto B661d1f;
case 0x661d22:c.instructions+=7;goto B661d22;
case 0x661d25:c.instructions+=6;goto B661d25;
case 0x661d29:c.instructions+=5;goto B661d29;
case 0x661d2c:c.instructions+=4;goto B661d2c;
case 0x661d32:c.instructions+=3;goto B661d32;
case 0x661d35:c.instructions+=2;goto B661d35;
case 0x661d39:c.instructions+=1;goto B661d39;
case 0x661d3b:goto L661d3b;
case 0x661d3e:c.instructions+=1;goto B661d3e;
case 0x661d40:goto L661d40;
case 0x661d43:c.instructions+=1;goto B661d43;
case 0x661d46:goto L661d46;
case 0x661d49:c.instructions+=6;goto B661d49;
case 0x661d4a:c.instructions+=5;goto B661d4a;
case 0x661d4d:c.instructions+=4;goto B661d4d;
case 0x661d4e:c.instructions+=3;goto B661d4e;
case 0x661d4f:c.instructions+=2;goto B661d4f;
case 0x661d51:c.instructions+=1;goto B661d51;
case 0x661d56:goto L661d56;
case 0x661d59:c.instructions+=6;goto B661d59;
case 0x661d5d:c.instructions+=5;goto B661d5d;
case 0x661d60:c.instructions+=4;goto B661d60;
case 0x661d66:c.instructions+=3;goto B661d66;
case 0x661d69:c.instructions+=2;goto B661d69;
case 0x661d6d:c.instructions+=1;goto B661d6d;
case 0x661d6f:goto L661d6f;
case 0x661d72:c.instructions+=1;goto B661d72;
case 0x661d74:goto L661d74;
case 0x661d77:c.instructions+=1;goto B661d77;
case 0x661d7a:goto L661d7a;
case 0x661d7d:c.instructions+=5;goto B661d7d;
case 0x661d7e:c.instructions+=4;goto B661d7e;
case 0x661d81:c.instructions+=3;goto B661d81;
case 0x661d82:c.instructions+=2;goto B661d82;
case 0x661d83:c.instructions+=1;goto B661d83;
case 0x661d88:goto L661d88;
case 0x661d8b:c.instructions+=7;goto B661d8b;
case 0x661d91:c.instructions+=6;goto B661d91;
case 0x661d94:c.instructions+=5;goto B661d94;
case 0x661d97:c.instructions+=4;goto B661d97;
case 0x661d9a:c.instructions+=3;goto B661d9a;
case 0x661d9d:c.instructions+=2;goto B661d9d;
case 0x661da1:c.instructions+=1;goto B661da1;
case 0x661da3:goto L661da3;
case 0x661da6:c.instructions+=1;goto B661da6;
case 0x661da8:goto L661da8;
case 0x661dab:c.instructions+=1;goto B661dab;
case 0x661dae:goto L661dae;
case 0x661db1:c.instructions+=14;goto B661db1;
case 0x661db7:c.instructions+=13;goto B661db7;
case 0x661dba:c.instructions+=12;goto B661dba;
case 0x661dbd:c.instructions+=11;goto B661dbd;
case 0x661dc0:c.instructions+=10;goto B661dc0;
case 0x661dc3:c.instructions+=9;goto B661dc3;
case 0x661dc6:c.instructions+=8;goto B661dc6;
case 0x661dc9:c.instructions+=7;goto B661dc9;
case 0x661dcf:c.instructions+=6;goto B661dcf;
case 0x661dd2:c.instructions+=5;goto B661dd2;
case 0x661dd5:c.instructions+=4;goto B661dd5;
case 0x661dd8:c.instructions+=3;goto B661dd8;
case 0x661ddb:c.instructions+=2;goto B661ddb;
case 0x661ddf:c.instructions+=1;goto B661ddf;
case 0x661de1:goto L661de1;
case 0x661de4:c.instructions+=1;goto B661de4;
case 0x661de6:goto L661de6;
case 0x661de9:c.instructions+=1;goto B661de9;
case 0x661dec:goto L661dec;
case 0x661def:c.instructions+=9;goto B661def;
case 0x661df5:c.instructions+=8;goto B661df5;
case 0x661df8:c.instructions+=7;goto B661df8;
case 0x661dfb:c.instructions+=6;goto B661dfb;
case 0x661dfe:c.instructions+=5;goto B661dfe;
case 0x661e01:c.instructions+=4;goto B661e01;
case 0x661e04:c.instructions+=3;goto B661e04;
case 0x661e07:c.instructions+=2;goto B661e07;
case 0x661e09:c.instructions+=1;goto B661e09;
case 0x661e0f:goto L661e0f;
case 0x661e11:goto L661e11;
case 0x661e12:c.instructions+=4;goto B661e12;
case 0x661e13:c.instructions+=3;goto B661e13;
case 0x661e14:c.instructions+=2;goto B661e14;
case 0x661e15:c.instructions+=1;goto B661e15;
case 0x661e18:goto L661e18;
case 0x661e1a:c.instructions+=6;goto B661e1a;
case 0x661e1b:c.instructions+=5;goto B661e1b;
case 0x661e1d:c.instructions+=4;goto B661e1d;
case 0x661e1e:c.instructions+=3;goto B661e1e;
case 0x661e21:c.instructions+=2;goto B661e21;
case 0x661e23:c.instructions+=1;goto B661e23;
case 0x661e25:goto L661e25;
case 0x661e28:c.instructions+=3;goto B661e28;
case 0x661e2a:c.instructions+=2;goto B661e2a;
case 0x661e2b:c.instructions+=1;goto B661e2b;
case 0x661e30:goto L661e30;
case 0x661e32:c.instructions+=1;goto B661e32;
case 0x661e34:goto L661e34;
case 0x661e37:c.instructions+=2;goto B661e37;
case 0x661e3a:c.instructions+=1;goto B661e3a;
case 0x661e3c:goto L661e3c;
case 0x661e3f:c.instructions+=3;goto B661e3f;
case 0x661e41:c.instructions+=2;goto B661e41;
case 0x661e42:c.instructions+=1;goto B661e42;
case 0x661e47:goto L661e47;
case 0x661e49:c.instructions+=1;goto B661e49;
case 0x661e4b:goto L661e4b;
case 0x661e4d:c.instructions+=2;goto B661e4d;
case 0x661e4e:c.instructions+=1;goto B661e4e;
case 0x661e53:goto L661e53;
case 0x661e55:c.instructions+=1;goto B661e55;
case 0x661e57:goto L661e57;
case 0x661e5a:c.instructions+=1;goto B661e5a;
case 0x661e5d:goto L661e5d;
case 0x661e60:c.instructions+=1;goto B661e60;
case 0x661e62:goto L661e62;
case 0x661e66:c.instructions+=1;goto B661e66;
case 0x661e68:goto L661e68;
case 0x661e6b:goto L661e6b;
case 0x661e6c:c.instructions+=2;goto B661e6c;
case 0x661e6f:c.instructions+=1;goto B661e6f;
case 0x661e71:goto L661e71;
case 0x661e73:c.instructions+=1;goto B661e73;
case 0x661e75:goto L661e75;
case 0x661e77:goto L661e77;
case 0x661e78:c.instructions+=2;goto B661e78;
case 0x661e79:c.instructions+=1;goto B661e79;
case 0x661e7c:goto L661e7c;
case 0x661e7e:c.instructions+=8;goto B661e7e;
case 0x661e7f:c.instructions+=7;goto B661e7f;
case 0x661e81:c.instructions+=6;goto B661e81;
case 0x661e82:c.instructions+=5;goto B661e82;
case 0x661e86:c.instructions+=4;goto B661e86;
case 0x661e87:c.instructions+=3;goto B661e87;
case 0x661e8a:c.instructions+=2;goto B661e8a;
case 0x661e8e:c.instructions+=1;goto B661e8e;
case 0x661e90:goto L661e90;
case 0x661e97:c.instructions+=1;goto B661e97;
case 0x661e9c:goto L661e9c;
case 0x661e9d:c.instructions+=4;goto B661e9d;
case 0x661e9f:c.instructions+=3;goto B661e9f;
case 0x661ea2:c.instructions+=2;goto B661ea2;
case 0x661ea4:c.instructions+=1;goto B661ea4;
case 0x661ea9:goto L661ea9;
case 0x661eab:c.instructions+=2;goto B661eab;
case 0x661ead:c.instructions+=1;goto B661ead;
case 0x661eaf:goto L661eaf;
case 0x661eb6:c.instructions+=1;goto B661eb6;
case 0x661ebb:goto L661ebb;
case 0x661ebc:c.instructions+=3;goto B661ebc;
case 0x661ec0:c.instructions+=2;goto B661ec0;
case 0x661ec5:c.instructions+=1;goto B661ec5;
case 0x661ec7:goto L661ec7;
case 0x661ecb:c.instructions+=16;goto B661ecb;
case 0x661ecd:c.instructions+=15;goto B661ecd;
case 0x661ed1:c.instructions+=14;goto B661ed1;
case 0x661ed4:c.instructions+=13;goto B661ed4;
case 0x661ed7:c.instructions+=12;goto B661ed7;
case 0x661edd:c.instructions+=11;goto B661edd;
case 0x661ee0:c.instructions+=10;goto B661ee0;
case 0x661ee3:c.instructions+=9;goto B661ee3;
case 0x661ee4:c.instructions+=8;goto B661ee4;
case 0x661ee5:c.instructions+=7;goto B661ee5;
case 0x661eeb:c.instructions+=6;goto B661eeb;
case 0x661eef:c.instructions+=5;goto B661eef;
case 0x661ef4:c.instructions+=4;goto B661ef4;
case 0x661ef6:c.instructions+=3;goto B661ef6;
case 0x661ef7:c.instructions+=2;goto B661ef7;
case 0x661ef9:c.instructions+=1;goto B661ef9;
case 0x661efe:goto L661efe;
case 0x661f00:c.instructions+=2;goto B661f00;
case 0x661f03:c.instructions+=1;goto B661f03;
case 0x661f09:goto L661f09;
case 0x661f0f:goto L661f0f;
case 0x661f13:c.instructions+=10;goto B661f13;
case 0x661f17:c.instructions+=9;goto B661f17;
case 0x661f1d:c.instructions+=8;goto B661f1d;
case 0x661f23:c.instructions+=7;goto B661f23;
case 0x661f27:c.instructions+=6;goto B661f27;
case 0x661f2a:c.instructions+=5;goto B661f2a;
case 0x661f2d:c.instructions+=4;goto B661f2d;
case 0x661f2f:c.instructions+=3;goto B661f2f;
case 0x661f32:c.instructions+=2;goto B661f32;
case 0x661f38:c.instructions+=1;goto B661f38;
case 0x661f3a:goto L661f3a;
case 0x661f3e:c.instructions+=2;goto B661f3e;
case 0x661f40:c.instructions+=1;goto B661f40;
case 0x661f42:goto L661f42;
case 0x661f44:c.instructions+=2;goto B661f44;
case 0x661f46:c.instructions+=1;goto B661f46;
case 0x661f48:goto L661f48;
case 0x661f4e:c.instructions+=2;goto B661f4e;
case 0x661f52:c.instructions+=1;goto B661f52;
case 0x661f54:goto L661f54;
case 0x661f5a:c.instructions+=3;goto B661f5a;
case 0x661f5d:c.instructions+=2;goto B661f5d;
case 0x661f5f:c.instructions+=1;goto B661f5f;
case 0x661f61:goto L661f61;
case 0x661f63:goto L661f63;
case 0x661f69:c.instructions+=9;goto B661f69;
case 0x661f6b:c.instructions+=8;goto B661f6b;
case 0x661f6f:c.instructions+=7;goto B661f6f;
case 0x661f73:c.instructions+=6;goto B661f73;
case 0x661f76:c.instructions+=5;goto B661f76;
case 0x661f79:c.instructions+=4;goto B661f79;
case 0x661f7c:c.instructions+=3;goto B661f7c;
case 0x661f80:c.instructions+=2;goto B661f80;
case 0x661f87:c.instructions+=1;goto B661f87;
case 0x661f8a:goto L661f8a;
case 0x661f8c:c.instructions+=2;goto B661f8c;
case 0x661f8e:c.instructions+=1;goto B661f8e;
case 0x661f90:goto L661f90;
case 0x661f91:c.instructions+=2;goto B661f91;
case 0x661f97:c.instructions+=1;goto B661f97;
case 0x661f99:goto L661f99;
case 0x661f9a:goto L661f9a;
case 0x661f9b:goto L661f9b;
case 0x661f9e:c.instructions+=3;goto B661f9e;
case 0x661f9f:c.instructions+=2;goto B661f9f;
case 0x661fa0:c.instructions+=1;goto B661fa0;
case 0x661fa3:goto L661fa3;
case 0x661fa5:c.instructions+=12;goto B661fa5;
case 0x661fa6:c.instructions+=11;goto B661fa6;
case 0x661fa8:c.instructions+=10;goto B661fa8;
case 0x661fab:c.instructions+=9;goto B661fab;
case 0x661fae:c.instructions+=8;goto B661fae;
case 0x661fb1:c.instructions+=7;goto B661fb1;
case 0x661fb4:c.instructions+=6;goto B661fb4;
case 0x661fb5:c.instructions+=5;goto B661fb5;
case 0x661fb8:c.instructions+=4;goto B661fb8;
case 0x661fb9:c.instructions+=3;goto B661fb9;
case 0x661fbc:c.instructions+=2;goto B661fbc;
case 0x661fbd:c.instructions+=1;goto B661fbd;
case 0x661fc2:goto L661fc2;
case 0x661fc3:c.instructions+=1;goto B661fc3;
case 0x661fc6:goto L661fc6;
case 0x661fc8:c.instructions+=14;goto B661fc8;
case 0x661fc9:c.instructions+=13;goto B661fc9;
case 0x661fcb:c.instructions+=12;goto B661fcb;
case 0x661fce:c.instructions+=11;goto B661fce;
case 0x661fcf:c.instructions+=10;goto B661fcf;
case 0x661fd0:c.instructions+=9;goto B661fd0;
case 0x661fd3:c.instructions+=8;goto B661fd3;
case 0x661fd7:c.instructions+=7;goto B661fd7;
case 0x661fd9:c.instructions+=6;goto B661fd9;
case 0x661fdc:c.instructions+=5;goto B661fdc;
case 0x661fdf:c.instructions+=4;goto B661fdf;
case 0x661fe0:c.instructions+=3;goto B661fe0;
case 0x661fe2:c.instructions+=2;goto B661fe2;
case 0x661fe5:c.instructions+=1;goto B661fe5;
case 0x661fe7:goto L661fe7;
case 0x661fea:c.instructions+=2;goto B661fea;
case 0x661fed:c.instructions+=1;goto B661fed;
case 0x661fef:goto L661fef;
case 0x661ff1:c.instructions+=1;goto B661ff1;
case 0x661ff2:goto L661ff2;
case 0x661ff5:c.instructions+=5;goto B661ff5;
case 0x661ff7:c.instructions+=4;goto B661ff7;
case 0x661ff9:c.instructions+=3;goto B661ff9;
case 0x661ffc:c.instructions+=2;goto B661ffc;
case 0x661fff:c.instructions+=1;goto B661fff;
default:missing_instruction(c.pc);}
B661001:L661001:{c.instructions+=2;NFSU2_TR(0x661001);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B661004:{NFSU2_TR(0x661004);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L661198;}}
}
B66100a:L66100a:{c.instructions+=3;NFSU2_TR(0x66100a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66100d:{NFSU2_TR(0x66100d);
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
B66100f:{NFSU2_TR(0x66100f);
if(r1(R+518)){{goto L661198;}}
}
B661015:L661015:{c.instructions+=6;NFSU2_TR(0x661015);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B661018:{NFSU2_TR(0x661018);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66101b:{NFSU2_TR(0x66101b);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B66101e:{NFSU2_TR(0x66101e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B661021:{NFSU2_TR(0x661021);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661022:{NFSU2_TR(0x661022);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x661027ull));
TAIL_STATIC(0x575620u,575);
}
B661027:L661027:{c.instructions+=3;NFSU2_TR(0x661027);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B661029:{NFSU2_TR(0x661029);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66102a:{NFSU2_TR(0x66102a);
if(r1(R+518)){{goto L66104a;}}
}
B66102c:L66102c:{c.instructions+=9;NFSU2_TR(0x66102c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66102f:{NFSU2_TR(0x66102f);
u8 U[4];
w4(U+0,u32(0x65b680ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661034:{NFSU2_TR(0x661034);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661035:{NFSU2_TR(0x661035);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B661037:{NFSU2_TR(0x661037);
w1(R+512,carry<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B66103a:{NFSU2_TR(0x66103a);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66103c:{NFSU2_TR(0x66103c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66103d:{NFSU2_TR(0x66103d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B661040:{NFSU2_TR(0x661040);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x661045ull));
TAIL_STATIC(0x401650u,401);
}
B661045:L661045:{c.instructions+=2;NFSU2_TR(0x661045);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B661048:{NFSU2_TR(0x661048);
{goto L66104c;}
}
B66104a:L66104a:{c.instructions+=1;NFSU2_TR(0x66104a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B66104c:L66104c:{c.instructions+=3;NFSU2_TR(0x66104c);
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
B66104e:{NFSU2_TR(0x66104e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B661051:{NFSU2_TR(0x661051);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66105f;}}
}
B661053:L661053:{c.instructions+=2;NFSU2_TR(0x661053);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8007000eull));
s4(u32(r4(U+0)),r4(U+4));
}
B66105a:{NFSU2_TR(0x66105a);
{goto L661198;}
}
B66105f:L66105f:{c.instructions+=10;NFSU2_TR(0x66105f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B661062:{NFSU2_TR(0x661062);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B661066:{NFSU2_TR(0x661066);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66106a:{NFSU2_TR(0x66106a);
w2(R+4,shl<u16>(r2(R+4),u64(u32(0x1ull))));
}
B66106d:{NFSU2_TR(0x66106d);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B661071:{NFSU2_TR(0x661071);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B661074:{NFSU2_TR(0x661074);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B661076:{NFSU2_TR(0x661076);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66107a:{NFSU2_TR(0x66107a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66107d:{NFSU2_TR(0x66107d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6610d6;}}
}
B66107f:L66107f:{c.instructions+=1;NFSU2_TR(0x66107f);
{goto L661084;}
}
B661081:L661081:{c.instructions+=1;NFSU2_TR(0x661081);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B661084:L661084:{c.instructions+=6;NFSU2_TR(0x661084);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B661086:{NFSU2_TR(0x661086);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B661089:{NFSU2_TR(0x661089);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66108c:{NFSU2_TR(0x66108c);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66108e:{NFSU2_TR(0x66108e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66108f:{NFSU2_TR(0x66108f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x661094ull));
TAIL_STATIC(0x65be0du,65b);
}
B661094:L661094:{c.instructions+=2;NFSU2_TR(0x661094);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B661096:{NFSU2_TR(0x661096);
if(r1(R+518)){{goto L6610c4;}}
}
B661098:L661098:{c.instructions+=12;NFSU2_TR(0x661098);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66109b:{NFSU2_TR(0x66109b);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B66109d:{NFSU2_TR(0x66109d);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B6610a1:{NFSU2_TR(0x6610a1);
w4(R+8,u32(r2(R+4)));
}
B6610a4:{NFSU2_TR(0x6610a4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6610a5:{NFSU2_TR(0x6610a5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6610a6:{NFSU2_TR(0x6610a6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6610a9:{NFSU2_TR(0x6610a9);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6610aa:{NFSU2_TR(0x6610aa);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6610ad:{NFSU2_TR(0x6610ad);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4eull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B6610b1:{NFSU2_TR(0x6610b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6610b4:{NFSU2_TR(0x6610b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6610b9ull));
TAIL_STATIC(0x65bd1eu,65b);
}
B6610b9:L6610b9:{c.instructions+=3;NFSU2_TR(0x6610b9);
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
B6610bb:{NFSU2_TR(0x6610bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6610be:{NFSU2_TR(0x6610be);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L661198;}}
}
B6610c4:L6610c4:{c.instructions+=6;NFSU2_TR(0x6610c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6610c7:{NFSU2_TR(0x6610c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6610ca:{NFSU2_TR(0x6610ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6610cd:{NFSU2_TR(0x6610cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x14ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6610d1:{NFSU2_TR(0x6610d1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6610d4:{NFSU2_TR(0x6610d4);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x661081u);}goto L661081;}}
}
B6610d6:L6610d6:{c.instructions+=8;NFSU2_TR(0x6610d6);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6610da:{NFSU2_TR(0x6610da);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6610de:{NFSU2_TR(0x6610de);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6610e2:{NFSU2_TR(0x6610e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B6610e5:{NFSU2_TR(0x6610e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6610e8:{NFSU2_TR(0x6610e8);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6610ea:{NFSU2_TR(0x6610ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6610ed:{NFSU2_TR(0x6610ed);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6610f3;}}
}
B6610ef:L6610ef:{c.instructions+=2;NFSU2_TR(0x6610ef);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6610f0:{NFSU2_TR(0x6610f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6610f3:L6610f3:{c.instructions+=54;NFSU2_TR(0x6610f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6610f6:{NFSU2_TR(0x6610f6);
__builtin_memmove((R+0),(R+12),4);
}
B6610f8:{NFSU2_TR(0x6610f8);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B6610fa:{NFSU2_TR(0x6610fa);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+12))));
}
B6610fc:{NFSU2_TR(0x6610fc);
__builtin_memmove((R+12),(R+0),4);
}
B6610fe:{NFSU2_TR(0x6610fe);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B661101:{NFSU2_TR(0x661101);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+0))));
}
B661103:{NFSU2_TR(0x661103);
__builtin_memmove((R+0),(R+12),4);
}
B661105:{NFSU2_TR(0x661105);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B661108:{NFSU2_TR(0x661108);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+12))));
}
B66110a:{NFSU2_TR(0x66110a);
__builtin_memmove((R+12),(R+0),4);
}
B66110c:{NFSU2_TR(0x66110c);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B66110f:{NFSU2_TR(0x66110f);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+0))));
}
B661111:{NFSU2_TR(0x661111);
__builtin_memmove((R+0),(R+12),4);
}
B661113:{NFSU2_TR(0x661113);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B661116:{NFSU2_TR(0x661116);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+12))));
}
B661118:{NFSU2_TR(0x661118);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66111b:{NFSU2_TR(0x66111b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B66111e:{NFSU2_TR(0x66111e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B661121:{NFSU2_TR(0x661121);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
w4(U+8,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,shr<u32>(r4(U+4),u64(r4(U+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B661125:{NFSU2_TR(0x661125);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B661128:{NFSU2_TR(0x661128);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x7ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66112c:{NFSU2_TR(0x66112c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B66112f:{NFSU2_TR(0x66112f);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B661131:{NFSU2_TR(0x661131);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B661134:{NFSU2_TR(0x661134);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B661138:{NFSU2_TR(0x661138);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66113b:{NFSU2_TR(0x66113b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B66113e:{NFSU2_TR(0x66113e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B661141:{NFSU2_TR(0x661141);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B661144:{NFSU2_TR(0x661144);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B661147:{NFSU2_TR(0x661147);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66114a:{NFSU2_TR(0x66114a);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B66114d:{NFSU2_TR(0x66114d);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B66114f:{NFSU2_TR(0x66114f);
__builtin_memmove((R+8),(R+0),4);
}
B661151:{NFSU2_TR(0x661151);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ull))));
}
B661154:{NFSU2_TR(0x661154);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B661157:{NFSU2_TR(0x661157);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B66115a:{NFSU2_TR(0x66115a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66115d:{NFSU2_TR(0x66115d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B661160:{NFSU2_TR(0x661160);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B661163:{NFSU2_TR(0x661163);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B661167:{NFSU2_TR(0x661167);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B66116a:{NFSU2_TR(0x66116a);
__builtin_memmove((R+8),(R+0),4);
}
B66116c:{NFSU2_TR(0x66116c);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ull))));
}
B66116f:{NFSU2_TR(0x66116f);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B661172:{NFSU2_TR(0x661172);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B661175:{NFSU2_TR(0x661175);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B661178:{NFSU2_TR(0x661178);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B66117b:{NFSU2_TR(0x66117b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66117e:{NFSU2_TR(0x66117e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B661181:{NFSU2_TR(0x661181);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B661184:{NFSU2_TR(0x661184);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B661187:{NFSU2_TR(0x661187);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L66118c;}}
}
B661189:L661189:{c.instructions+=1;NFSU2_TR(0x661189);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66118c:L66118c:{c.instructions+=2;NFSU2_TR(0x66118c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66118f:{NFSU2_TR(0x66118f);
{goto L661198;}
}
B661191:L661191:{c.instructions+=1;NFSU2_TR(0x661191);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x80004005ull));
s4(u32(r4(U+0)),r4(U+4));
}
B661198:L661198:{c.instructions+=6;NFSU2_TR(0x661198);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66119b:{NFSU2_TR(0x66119b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66119c:{NFSU2_TR(0x66119c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B66119d:{NFSU2_TR(0x66119d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B66119e:{NFSU2_TR(0x66119e);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B66119f:{NFSU2_TR(0x66119f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6611a2:L6611a2:{c.instructions+=25;NFSU2_TR(0x6611a2);
__builtin_memmove((R+28),(R+28),4);
}
B6611a4:{NFSU2_TR(0x6611a4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6611a5:{NFSU2_TR(0x6611a5);
__builtin_memmove((R+20),(R+16),4);
}
B6611a7:{NFSU2_TR(0x6611a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6611aa:{NFSU2_TR(0x6611aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6611ad:{NFSU2_TR(0x6611ad);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6611b0:{NFSU2_TR(0x6611b0);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B6611b4:{NFSU2_TR(0x6611b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6611b7:{NFSU2_TR(0x6611b7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6611b8:{NFSU2_TR(0x6611b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6611bb:{NFSU2_TR(0x6611bb);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B6611be:{NFSU2_TR(0x6611be);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6611c1:{NFSU2_TR(0x6611c1);
u8 U[16];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+12))));
}
B6611c5:{NFSU2_TR(0x6611c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6611c8:{NFSU2_TR(0x6611c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6611cb:{NFSU2_TR(0x6611cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6611ce:{NFSU2_TR(0x6611ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6611d1:{NFSU2_TR(0x6611d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6611d4:{NFSU2_TR(0x6611d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6611d7:{NFSU2_TR(0x6611d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6611da:{NFSU2_TR(0x6611da);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6611dd:{NFSU2_TR(0x6611dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6611e3:{NFSU2_TR(0x6611e3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6611e6:{NFSU2_TR(0x6611e6);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6611e9:{NFSU2_TR(0x6611e9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6611fd;}}
}
B6611eb:L6611eb:{c.instructions+=9;NFSU2_TR(0x6611eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6611ee:{NFSU2_TR(0x6611ee);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6611ef:{NFSU2_TR(0x6611ef);
__builtin_memmove((R+28),(R+24),4);
}
B6611f1:{NFSU2_TR(0x6611f1);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
}
B6611f3:{NFSU2_TR(0x6611f3);
w1(R+512,u8((r4(R+28))!=(u32(0x0ull))));
w4(R+28,u32(0-u32(r4(R+28))));
}
B6611f5:{NFSU2_TR(0x6611f5);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(R+28))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6611f7:{NFSU2_TR(0x6611f7);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+24))));
}
B6611f9:{NFSU2_TR(0x6611f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6611fc:{NFSU2_TR(0x6611fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6611fd:L6611fd:{c.instructions+=5;NFSU2_TR(0x6611fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B661200:{NFSU2_TR(0x661200);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B661203:{NFSU2_TR(0x661203);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x119ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B66120a:{NFSU2_TR(0x66120a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B66120b:{NFSU2_TR(0x66120b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66121b;}}
}
B66120d:L66120d:{c.instructions+=2;NFSU2_TR(0x66120d);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B661214:{NFSU2_TR(0x661214);
if(r1(R+518)){{goto L66121b;}}
}
B661216:L661216:{c.instructions+=1;NFSU2_TR(0x661216);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66121bull));
TAIL_STATIC(0x65b7f0u,65b);
}
B66121b:L66121b:{c.instructions+=3;NFSU2_TR(0x66121b);
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
B66121d:{NFSU2_TR(0x66121d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B66121e:{NFSU2_TR(0x66121e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B661221:L661221:{c.instructions+=20;NFSU2_TR(0x661221);
__builtin_memmove((R+28),(R+28),4);
}
B661223:{NFSU2_TR(0x661223);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661224:{NFSU2_TR(0x661224);
__builtin_memmove((R+20),(R+16),4);
}
B661226:{NFSU2_TR(0x661226);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B661229:{NFSU2_TR(0x661229);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66122a:{NFSU2_TR(0x66122a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66122b:{NFSU2_TR(0x66122b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66122e:{NFSU2_TR(0x66122e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B661231:{NFSU2_TR(0x661231);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0xfffffffeull))));
s4(u32(r4(U+0)),r4(U+4));
}
B661235:{NFSU2_TR(0x661235);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661236:{NFSU2_TR(0x661236);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B661239:{NFSU2_TR(0x661239);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B66123b:{NFSU2_TR(0x66123b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66123c:{NFSU2_TR(0x66123c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66123d:{NFSU2_TR(0x66123d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B661240:{NFSU2_TR(0x661240);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B661243:{NFSU2_TR(0x661243);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B661246:{NFSU2_TR(0x661246);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B661248:{NFSU2_TR(0x661248);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661249:{NFSU2_TR(0x661249);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66124cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66124c:L66124c:{c.instructions+=3;NFSU2_TR(0x66124c);
__builtin_memmove((R+12),(R+0),4);
}
B66124e:{NFSU2_TR(0x66124e);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B661250:{NFSU2_TR(0x661250);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6612ed;}}
}
B661256:L661256:{c.instructions+=6;NFSU2_TR(0x661256);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B661259:{NFSU2_TR(0x661259);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66125b:{NFSU2_TR(0x66125b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B66125e:{NFSU2_TR(0x66125e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66125f:{NFSU2_TR(0x66125f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661260:{NFSU2_TR(0x661260);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x661263ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B661263:L661263:{c.instructions+=3;NFSU2_TR(0x661263);
__builtin_memmove((R+12),(R+0),4);
}
B661265:{NFSU2_TR(0x661265);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B661267:{NFSU2_TR(0x661267);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6612ed;}}
}
B66126d:L66126d:{c.instructions+=3;NFSU2_TR(0x66126d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B661270:{NFSU2_TR(0x661270);
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
B661272:{NFSU2_TR(0x661272);
if(r1(R+518)){{goto L66127f;}}
}
B661274:L661274:{c.instructions+=3;NFSU2_TR(0x661274);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B661276:{NFSU2_TR(0x661276);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661277:{NFSU2_TR(0x661277);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66127aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66127a:L66127a:{c.instructions+=2;NFSU2_TR(0x66127a);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B66127d:{NFSU2_TR(0x66127d);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6612aa;}}
}
B66127f:L66127f:{c.instructions+=4;NFSU2_TR(0x66127f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B661282:{NFSU2_TR(0x661282);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661283:{NFSU2_TR(0x661283);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B661286:{NFSU2_TR(0x661286);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66128bull));
TAIL_STATIC(0x670f08u,670);
}
B66128b:L66128b:{c.instructions+=3;NFSU2_TR(0x66128b);
__builtin_memmove((R+12),(R+0),4);
}
B66128d:{NFSU2_TR(0x66128d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B66128f:{NFSU2_TR(0x66128f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6612ed;}}
}
B661291:L661291:{c.instructions+=3;NFSU2_TR(0x661291);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B661294:{NFSU2_TR(0x661294);
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
B661296:{NFSU2_TR(0x661296);
if(r1(R+518)){{goto L6612a1;}}
}
B661298:L661298:{c.instructions+=3;NFSU2_TR(0x661298);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66129a:{NFSU2_TR(0x66129a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66129b:{NFSU2_TR(0x66129b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66129eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66129e:L66129e:{c.instructions+=1;NFSU2_TR(0x66129e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6612a1:L6612a1:{c.instructions+=3;NFSU2_TR(0x6612a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6612a4:{NFSU2_TR(0x6612a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6612a7:{NFSU2_TR(0x6612a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6612aa:L6612aa:{c.instructions+=8;NFSU2_TR(0x6612aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6612ad:{NFSU2_TR(0x6612ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6612af:{NFSU2_TR(0x6612af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6612b2:{NFSU2_TR(0x6612b2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6612b5:{NFSU2_TR(0x6612b5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6612b6:{NFSU2_TR(0x6612b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6612b8:{NFSU2_TR(0x6612b8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6612b9:{NFSU2_TR(0x6612b9);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6612bcull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6612bc:L6612bc:{c.instructions+=3;NFSU2_TR(0x6612bc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6612bd:{NFSU2_TR(0x6612bd);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6612c0:{NFSU2_TR(0x6612c0);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6612c3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6612c3:L6612c3:{c.instructions+=3;NFSU2_TR(0x6612c3);
__builtin_memmove((R+12),(R+0),4);
}
B6612c5:{NFSU2_TR(0x6612c5);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6612c7:{NFSU2_TR(0x6612c7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6612ed;}}
}
B6612c9:L6612c9:{c.instructions+=4;NFSU2_TR(0x6612c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6612cc:{NFSU2_TR(0x6612cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6612cf:{NFSU2_TR(0x6612cf);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6612d2:{NFSU2_TR(0x6612d2);
if(r1(R+518)){{goto L6612ed;}}
}
B6612d4:L6612d4:{c.instructions+=3;NFSU2_TR(0x6612d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6612d7:{NFSU2_TR(0x6612d7);
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
B6612d9:{NFSU2_TR(0x6612d9);
if(r1(R+518)){{goto L6612e4;}}
}
B6612db:L6612db:{c.instructions+=3;NFSU2_TR(0x6612db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6612dd:{NFSU2_TR(0x6612dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6612de:{NFSU2_TR(0x6612de);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6612e1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6612e1:L6612e1:{c.instructions+=1;NFSU2_TR(0x6612e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6612e4:L6612e4:{c.instructions+=3;NFSU2_TR(0x6612e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6612e7:{NFSU2_TR(0x6612e7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6612e8:{NFSU2_TR(0x6612e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6612edull));
TAIL_STATIC(0x65b970u,65b);
}
B6612ed:L6612ed:{c.instructions+=3;NFSU2_TR(0x6612ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6612f0:{NFSU2_TR(0x6612f0);
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
B6612f2:{NFSU2_TR(0x6612f2);
if(r1(R+518)){{goto L6612fd;}}
}
B6612f4:L6612f4:{c.instructions+=3;NFSU2_TR(0x6612f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6612f6:{NFSU2_TR(0x6612f6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6612f7:{NFSU2_TR(0x6612f7);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6612faull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6612fa:L6612fa:{c.instructions+=1;NFSU2_TR(0x6612fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6612fd:L6612fd:{c.instructions+=3;NFSU2_TR(0x6612fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B661300:{NFSU2_TR(0x661300);
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
B661302:{NFSU2_TR(0x661302);
if(r1(R+518)){{goto L66130a;}}
}
B661304:L661304:{c.instructions+=3;NFSU2_TR(0x661304);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B661306:{NFSU2_TR(0x661306);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661307:{NFSU2_TR(0x661307);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66130aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66130a:L66130a:{c.instructions+=6;NFSU2_TR(0x66130a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66130b:{NFSU2_TR(0x66130b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B66130c:{NFSU2_TR(0x66130c);
__builtin_memmove((R+0),(R+12),4);
}
B66130e:{NFSU2_TR(0x66130e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B66130f:{NFSU2_TR(0x66130f);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B661310:{NFSU2_TR(0x661310);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B661313:L661313:{c.instructions+=20;NFSU2_TR(0x661313);
__builtin_memmove((R+28),(R+28),4);
}
B661315:{NFSU2_TR(0x661315);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661316:{NFSU2_TR(0x661316);
__builtin_memmove((R+20),(R+16),4);
}
B661318:{NFSU2_TR(0x661318);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B66131b:{NFSU2_TR(0x66131b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66131c:{NFSU2_TR(0x66131c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66131d:{NFSU2_TR(0x66131d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B661320:{NFSU2_TR(0x661320);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B661323:{NFSU2_TR(0x661323);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0xfffffffeull))));
s4(u32(r4(U+0)),r4(U+4));
}
B661327:{NFSU2_TR(0x661327);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661328:{NFSU2_TR(0x661328);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B66132b:{NFSU2_TR(0x66132b);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B66132d:{NFSU2_TR(0x66132d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66132e:{NFSU2_TR(0x66132e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66132f:{NFSU2_TR(0x66132f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B661332:{NFSU2_TR(0x661332);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B661335:{NFSU2_TR(0x661335);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B661338:{NFSU2_TR(0x661338);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66133a:{NFSU2_TR(0x66133a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66133b:{NFSU2_TR(0x66133b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66133eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66133e:L66133e:{c.instructions+=3;NFSU2_TR(0x66133e);
__builtin_memmove((R+12),(R+0),4);
}
B661340:{NFSU2_TR(0x661340);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B661342:{NFSU2_TR(0x661342);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6613df;}}
}
B661348:L661348:{c.instructions+=6;NFSU2_TR(0x661348);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66134b:{NFSU2_TR(0x66134b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66134d:{NFSU2_TR(0x66134d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B661350:{NFSU2_TR(0x661350);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661351:{NFSU2_TR(0x661351);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661352:{NFSU2_TR(0x661352);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x661355ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B661355:L661355:{c.instructions+=3;NFSU2_TR(0x661355);
__builtin_memmove((R+12),(R+0),4);
}
B661357:{NFSU2_TR(0x661357);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B661359:{NFSU2_TR(0x661359);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6613df;}}
}
B66135f:L66135f:{c.instructions+=3;NFSU2_TR(0x66135f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B661362:{NFSU2_TR(0x661362);
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
B661364:{NFSU2_TR(0x661364);
if(r1(R+518)){{goto L661371;}}
}
B661366:L661366:{c.instructions+=3;NFSU2_TR(0x661366);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B661368:{NFSU2_TR(0x661368);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661369:{NFSU2_TR(0x661369);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66136cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66136c:L66136c:{c.instructions+=2;NFSU2_TR(0x66136c);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B66136f:{NFSU2_TR(0x66136f);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L66139c;}}
}
B661371:L661371:{c.instructions+=4;NFSU2_TR(0x661371);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B661374:{NFSU2_TR(0x661374);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661375:{NFSU2_TR(0x661375);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B661378:{NFSU2_TR(0x661378);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66137dull));
TAIL_STATIC(0x670f08u,670);
}
B66137d:L66137d:{c.instructions+=3;NFSU2_TR(0x66137d);
__builtin_memmove((R+12),(R+0),4);
}
B66137f:{NFSU2_TR(0x66137f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B661381:{NFSU2_TR(0x661381);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6613df;}}
}
B661383:L661383:{c.instructions+=3;NFSU2_TR(0x661383);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B661386:{NFSU2_TR(0x661386);
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
B661388:{NFSU2_TR(0x661388);
if(r1(R+518)){{goto L661393;}}
}
B66138a:L66138a:{c.instructions+=3;NFSU2_TR(0x66138a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66138c:{NFSU2_TR(0x66138c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66138d:{NFSU2_TR(0x66138d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x661390ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B661390:L661390:{c.instructions+=1;NFSU2_TR(0x661390);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B661393:L661393:{c.instructions+=3;NFSU2_TR(0x661393);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B661396:{NFSU2_TR(0x661396);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B661399:{NFSU2_TR(0x661399);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66139c:L66139c:{c.instructions+=8;NFSU2_TR(0x66139c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66139f:{NFSU2_TR(0x66139f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6613a1:{NFSU2_TR(0x6613a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6613a4:{NFSU2_TR(0x6613a4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6613a7:{NFSU2_TR(0x6613a7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6613a8:{NFSU2_TR(0x6613a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6613aa:{NFSU2_TR(0x6613aa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6613ab:{NFSU2_TR(0x6613ab);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6613aeull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6613ae:L6613ae:{c.instructions+=3;NFSU2_TR(0x6613ae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6613af:{NFSU2_TR(0x6613af);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6613b2:{NFSU2_TR(0x6613b2);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6613b5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6613b5:L6613b5:{c.instructions+=3;NFSU2_TR(0x6613b5);
__builtin_memmove((R+12),(R+0),4);
}
B6613b7:{NFSU2_TR(0x6613b7);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6613b9:{NFSU2_TR(0x6613b9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6613df;}}
}
B6613bb:L6613bb:{c.instructions+=4;NFSU2_TR(0x6613bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6613be:{NFSU2_TR(0x6613be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6613c1:{NFSU2_TR(0x6613c1);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6613c4:{NFSU2_TR(0x6613c4);
if(r1(R+518)){{goto L6613df;}}
}
B6613c6:L6613c6:{c.instructions+=3;NFSU2_TR(0x6613c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6613c9:{NFSU2_TR(0x6613c9);
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
B6613cb:{NFSU2_TR(0x6613cb);
if(r1(R+518)){{goto L6613d6;}}
}
B6613cd:L6613cd:{c.instructions+=3;NFSU2_TR(0x6613cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6613cf:{NFSU2_TR(0x6613cf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6613d0:{NFSU2_TR(0x6613d0);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6613d3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6613d3:L6613d3:{c.instructions+=1;NFSU2_TR(0x6613d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6613d6:L6613d6:{c.instructions+=3;NFSU2_TR(0x6613d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6613d9:{NFSU2_TR(0x6613d9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6613da:{NFSU2_TR(0x6613da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6613dfull));
TAIL_STATIC(0x65b9ceu,65b);
}
B6613df:L6613df:{c.instructions+=3;NFSU2_TR(0x6613df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6613e2:{NFSU2_TR(0x6613e2);
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
B6613e4:{NFSU2_TR(0x6613e4);
if(r1(R+518)){{goto L6613ef;}}
}
B6613e6:L6613e6:{c.instructions+=3;NFSU2_TR(0x6613e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6613e8:{NFSU2_TR(0x6613e8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6613e9:{NFSU2_TR(0x6613e9);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6613ecull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6613ec:L6613ec:{c.instructions+=1;NFSU2_TR(0x6613ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6613ef:L6613ef:{c.instructions+=3;NFSU2_TR(0x6613ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6613f2:{NFSU2_TR(0x6613f2);
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
B6613f4:{NFSU2_TR(0x6613f4);
if(r1(R+518)){{goto L6613fc;}}
}
B6613f6:L6613f6:{c.instructions+=3;NFSU2_TR(0x6613f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6613f8:{NFSU2_TR(0x6613f8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6613f9:{NFSU2_TR(0x6613f9);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6613fcull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6613fc:L6613fc:{c.instructions+=6;NFSU2_TR(0x6613fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6613fd:{NFSU2_TR(0x6613fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6613fe:{NFSU2_TR(0x6613fe);
__builtin_memmove((R+0),(R+12),4);
}
B661400:{NFSU2_TR(0x661400);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B661401:{NFSU2_TR(0x661401);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B661402:{NFSU2_TR(0x661402);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B661405:L661405:{c.instructions+=7;NFSU2_TR(0x661405);
__builtin_memmove((R+28),(R+28),4);
}
B661407:{NFSU2_TR(0x661407);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661408:{NFSU2_TR(0x661408);
__builtin_memmove((R+20),(R+16),4);
}
B66140a:{NFSU2_TR(0x66140a);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B66140e:{NFSU2_TR(0x66140e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66140f:{NFSU2_TR(0x66140f);
__builtin_memmove((R+28),(R+4),4);
}
B661411:{NFSU2_TR(0x661411);
if(r1(R+518)){{goto L661438;}}
}
B661413:L661413:{c.instructions+=7;NFSU2_TR(0x661413);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661414:{NFSU2_TR(0x661414);
u8 U[4];
w4(U+0,u32(0x663e90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661419:{NFSU2_TR(0x661419);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B66141c:{NFSU2_TR(0x66141c);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B66141e:{NFSU2_TR(0x66141e);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661420:{NFSU2_TR(0x661420);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661421:{NFSU2_TR(0x661421);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x661426ull));
TAIL_STATIC(0x64b5ffu,64b);
}
B661426:L661426:{c.instructions+=2;NFSU2_TR(0x661426);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B66142a:{NFSU2_TR(0x66142a);
if(r1(R+518)){{goto L661433;}}
}
B66142c:L66142c:{c.instructions+=2;NFSU2_TR(0x66142c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66142d:{NFSU2_TR(0x66142d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x661432ull));
TAIL_STATIC(0x575630u,575);
}
B661432:L661432:{c.instructions+=1;NFSU2_TR(0x661432);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B661433:L661433:{c.instructions+=3;NFSU2_TR(0x661433);
__builtin_memmove((R+0),(R+24),4);
}
B661435:{NFSU2_TR(0x661435);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B661436:{NFSU2_TR(0x661436);
{goto L66144e;}
}
B661438:L661438:{c.instructions+=2;NFSU2_TR(0x661438);
__builtin_memmove((R+4),(R+28),4);
}
B66143a:{NFSU2_TR(0x66143a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66143full));
TAIL_STATIC(0x663e90u,663);
}
B66143f:L66143f:{c.instructions+=2;NFSU2_TR(0x66143f);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B661443:{NFSU2_TR(0x661443);
if(r1(R+518)){{goto L66144c;}}
}
B661445:L661445:{c.instructions+=2;NFSU2_TR(0x661445);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661446:{NFSU2_TR(0x661446);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66144bull));
TAIL_STATIC(0x575630u,575);
}
B66144b:L66144b:{c.instructions+=1;NFSU2_TR(0x66144b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66144c:L66144c:{c.instructions+=1;NFSU2_TR(0x66144c);
__builtin_memmove((R+0),(R+28),4);
}
B66144e:L66144e:{c.instructions+=3;NFSU2_TR(0x66144e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66144f:{NFSU2_TR(0x66144f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B661450:{NFSU2_TR(0x661450);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B661453:L661453:{c.instructions+=7;NFSU2_TR(0x661453);
__builtin_memmove((R+28),(R+28),4);
}
B661455:{NFSU2_TR(0x661455);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661456:{NFSU2_TR(0x661456);
__builtin_memmove((R+20),(R+16),4);
}
B661458:{NFSU2_TR(0x661458);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B66145c:{NFSU2_TR(0x66145c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66145d:{NFSU2_TR(0x66145d);
__builtin_memmove((R+28),(R+4),4);
}
B66145f:{NFSU2_TR(0x66145f);
if(r1(R+518)){{goto L661486;}}
}
B661461:L661461:{c.instructions+=7;NFSU2_TR(0x661461);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661462:{NFSU2_TR(0x661462);
u8 U[4];
w4(U+0,u32(0x65b7adull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661467:{NFSU2_TR(0x661467);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B66146a:{NFSU2_TR(0x66146a);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B66146c:{NFSU2_TR(0x66146c);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66146e:{NFSU2_TR(0x66146e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66146f:{NFSU2_TR(0x66146f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x661474ull));
TAIL_STATIC(0x64b5ffu,64b);
}
B661474:L661474:{c.instructions+=2;NFSU2_TR(0x661474);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B661478:{NFSU2_TR(0x661478);
if(r1(R+518)){{goto L661481;}}
}
B66147a:L66147a:{c.instructions+=2;NFSU2_TR(0x66147a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66147b:{NFSU2_TR(0x66147b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x661480ull));
TAIL_STATIC(0x575630u,575);
}
B661480:L661480:{c.instructions+=1;NFSU2_TR(0x661480);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B661481:L661481:{c.instructions+=3;NFSU2_TR(0x661481);
__builtin_memmove((R+0),(R+24),4);
}
B661483:{NFSU2_TR(0x661483);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B661484:{NFSU2_TR(0x661484);
{goto L66149c;}
}
B661486:L661486:{c.instructions+=2;NFSU2_TR(0x661486);
__builtin_memmove((R+4),(R+28),4);
}
B661488:{NFSU2_TR(0x661488);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66148dull));
TAIL_STATIC(0x65b7adu,65b);
}
B66148d:L66148d:{c.instructions+=2;NFSU2_TR(0x66148d);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B661491:{NFSU2_TR(0x661491);
if(r1(R+518)){{goto L66149a;}}
}
B661493:L661493:{c.instructions+=2;NFSU2_TR(0x661493);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661494:{NFSU2_TR(0x661494);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x661499ull));
TAIL_STATIC(0x575630u,575);
}
B661499:L661499:{c.instructions+=1;NFSU2_TR(0x661499);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66149a:L66149a:{c.instructions+=1;NFSU2_TR(0x66149a);
__builtin_memmove((R+0),(R+28),4);
}
B66149c:L66149c:{c.instructions+=3;NFSU2_TR(0x66149c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66149d:{NFSU2_TR(0x66149d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B66149e:{NFSU2_TR(0x66149e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6614a1:L6614a1:{c.instructions+=14;NFSU2_TR(0x6614a1);
__builtin_memmove((R+28),(R+28),4);
}
B6614a3:{NFSU2_TR(0x6614a3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6614a4:{NFSU2_TR(0x6614a4);
__builtin_memmove((R+20),(R+16),4);
}
B6614a6:{NFSU2_TR(0x6614a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B6614a9:{NFSU2_TR(0x6614a9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6614aa:{NFSU2_TR(0x6614aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6614ad:{NFSU2_TR(0x6614ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6614b0:{NFSU2_TR(0x6614b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6614b1:{NFSU2_TR(0x6614b1);
__builtin_memmove((R+24),(R+4),4);
}
B6614b3:{NFSU2_TR(0x6614b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6614b9:{NFSU2_TR(0x6614b9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6614bc:{NFSU2_TR(0x6614bc);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6614c0:{NFSU2_TR(0x6614c0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6614c1:{NFSU2_TR(0x6614c1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6614c8;}}
}
B6614c3:L6614c3:{c.instructions+=2;NFSU2_TR(0x6614c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6614c6:{NFSU2_TR(0x6614c6);
{goto L6614ce;}
}
B6614c8:L6614c8:{c.instructions+=2;NFSU2_TR(0x6614c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6614cb:{NFSU2_TR(0x6614cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6614ce:L6614ce:{c.instructions+=9;NFSU2_TR(0x6614ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6614d1:{NFSU2_TR(0x6614d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B6614d4:{NFSU2_TR(0x6614d4);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6614d6:{NFSU2_TR(0x6614d6);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B6614d8:{NFSU2_TR(0x6614d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6614db:{NFSU2_TR(0x6614db);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6614de:{NFSU2_TR(0x6614de);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6614df:{NFSU2_TR(0x6614df);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6614e1:{NFSU2_TR(0x6614e1);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6614e8;}}
}
B6614e3:L6614e3:{c.instructions+=2;NFSU2_TR(0x6614e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6614e6:{NFSU2_TR(0x6614e6);
{goto L6614ed;}
}
B6614e8:L6614e8:{c.instructions+=2;NFSU2_TR(0x6614e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6614eb:{NFSU2_TR(0x6614eb);
__builtin_memmove((R+4),(R+28),4);
}
B6614ed:L6614ed:{c.instructions+=6;NFSU2_TR(0x6614ed);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(U+0))<(u32(0x1ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6614f0:{NFSU2_TR(0x6614f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6614f3:{NFSU2_TR(0x6614f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6614f6:{NFSU2_TR(0x6614f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6614f9:{NFSU2_TR(0x6614f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6614fc:{NFSU2_TR(0x6614fc);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6615ed;}}
}
B661502:L661502:{c.instructions+=2;NFSU2_TR(0x661502);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(U+0))<(u32(0x3ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B661505:{NFSU2_TR(0x661505);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L661565;}}
}
B661507:L661507:{c.instructions+=2;NFSU2_TR(0x661507);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66150a:{NFSU2_TR(0x66150a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L661644;}}
}
B661510:L661510:{c.instructions+=12;NFSU2_TR(0x661510);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B661513:{NFSU2_TR(0x661513);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B661516:{NFSU2_TR(0x661516);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B661519:{NFSU2_TR(0x661519);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B66151c:{NFSU2_TR(0x66151c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66151f:{NFSU2_TR(0x66151f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B661522:{NFSU2_TR(0x661522);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661523:{NFSU2_TR(0x661523);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B661526:{NFSU2_TR(0x661526);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661527:{NFSU2_TR(0x661527);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661528:{NFSU2_TR(0x661528);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66152b:{NFSU2_TR(0x66152b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x661530ull));
TAIL_STATIC(0x65bf18u,65b);
}
B661530:L661530:{c.instructions+=17;NFSU2_TR(0x661530);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B661533:{NFSU2_TR(0x661533);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B661535:{NFSU2_TR(0x661535);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B661538:{NFSU2_TR(0x661538);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+0))));
s4(u32(r4(R+4)),r4(U+0));
}
B66153a:{NFSU2_TR(0x66153a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66153d:{NFSU2_TR(0x66153d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B661540:{NFSU2_TR(0x661540);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B661543:{NFSU2_TR(0x661543);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B661545:{NFSU2_TR(0x661545);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B661548:{NFSU2_TR(0x661548);
u8 U[14];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B66154b:{NFSU2_TR(0x66154b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66154c:{NFSU2_TR(0x66154c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66154f:{NFSU2_TR(0x66154f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B661551:{NFSU2_TR(0x661551);
w4(R+12,u32(~u32(r4(R+12))));
}
B661553:{NFSU2_TR(0x661553);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661554:{NFSU2_TR(0x661554);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661555:{NFSU2_TR(0x661555);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x661558ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B661558:L661558:{c.instructions+=2;NFSU2_TR(0x661558);
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
B66155a:{NFSU2_TR(0x66155a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L661644;}}
}
B661560:L661560:{c.instructions+=1;NFSU2_TR(0x661560);
{goto L661646;}
}
B661565:L661565:{c.instructions+=10;NFSU2_TR(0x661565);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B661568:{NFSU2_TR(0x661568);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66156b:{NFSU2_TR(0x66156b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66156e:{NFSU2_TR(0x66156e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B661570:{NFSU2_TR(0x661570);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B661572:{NFSU2_TR(0x661572);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B661574:{NFSU2_TR(0x661574);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B661576:{NFSU2_TR(0x661576);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B661579:{NFSU2_TR(0x661579);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66157c:{NFSU2_TR(0x66157c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6615e1;}}
}
B66157e:L66157e:{c.instructions+=6;NFSU2_TR(0x66157e);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661580:{NFSU2_TR(0x661580);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B661581:{NFSU2_TR(0x661581);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B661584:{NFSU2_TR(0x661584);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B661587:{NFSU2_TR(0x661587);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B66158a:{NFSU2_TR(0x66158a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66158d:L66158d:{c.instructions+=5;NFSU2_TR(0x66158d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B661590:{NFSU2_TR(0x661590);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B661592:{NFSU2_TR(0x661592);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B661595:{NFSU2_TR(0x661595);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B661598:{NFSU2_TR(0x661598);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6615c8;}}
}
B66159a:L66159a:{c.instructions+=3;NFSU2_TR(0x66159a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66159d:{NFSU2_TR(0x66159d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6615a0:{NFSU2_TR(0x6615a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6615a3:L6615a3:{c.instructions+=6;NFSU2_TR(0x6615a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6615a6:{NFSU2_TR(0x6615a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6615a9:{NFSU2_TR(0x6615a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6615ad:{NFSU2_TR(0x6615ad);
__builtin_memmove((R+4),(R+0),4);
}
B6615af:{NFSU2_TR(0x6615af);
__builtin_memmove((R+8),(R+4),4);
}
B6615b1:{NFSU2_TR(0x6615b1);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6615b4:L6615b4:{c.instructions+=1;NFSU2_TR(0x6615b4);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6615b6;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6615b4u);}goto L6615b4;}
}
B6615b6:L6615b6:{c.instructions+=3;NFSU2_TR(0x6615b6);
__builtin_memmove((R+4),(R+8),4);
}
B6615b8:{NFSU2_TR(0x6615b8);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6615bb:{NFSU2_TR(0x6615bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6615be:L6615be:{c.instructions+=1;NFSU2_TR(0x6615be);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6615c0;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6615beu);}goto L6615be;}
}
B6615c0:L6615c0:{c.instructions+=2;NFSU2_TR(0x6615c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6615c3:{NFSU2_TR(0x6615c3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6615a3u);}goto L6615a3;}}
}
B6615c5:L6615c5:{c.instructions+=1;NFSU2_TR(0x6615c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6615c8:L6615c8:{c.instructions+=5;NFSU2_TR(0x6615c8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6615cb:{NFSU2_TR(0x6615cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6615ce:{NFSU2_TR(0x6615ce);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6615d1:{NFSU2_TR(0x6615d1);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(U+4),r4(R+0)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(U+4),r4(R+0)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
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
B6615d4:{NFSU2_TR(0x6615d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6615d9ull));
TAIL_STATIC(0x63d12cu,63d);
}
B6615d9:L6615d9:{c.instructions+=2;NFSU2_TR(0x6615d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6615dc:{NFSU2_TR(0x6615dc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66158du);}goto L66158d;}}
}
B6615de:L6615de:{c.instructions+=1;NFSU2_TR(0x6615de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6615e1:L6615e1:{c.instructions+=5;NFSU2_TR(0x6615e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6615e3:{NFSU2_TR(0x6615e3);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6615e6:{NFSU2_TR(0x6615e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6615e9:{NFSU2_TR(0x6615e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+4))));
s4(u32(r4(R+28)),r4(U+0));
}
B6615eb:{NFSU2_TR(0x6615eb);
{goto L661644;}
}
B6615ed:L6615ed:{c.instructions+=9;NFSU2_TR(0x6615ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6615f0:{NFSU2_TR(0x6615f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6615f3:{NFSU2_TR(0x6615f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6615f6:{NFSU2_TR(0x6615f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6615f8:{NFSU2_TR(0x6615f8);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B6615fa:{NFSU2_TR(0x6615fa);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B6615fc:{NFSU2_TR(0x6615fc);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6615fe:{NFSU2_TR(0x6615fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B661601:{NFSU2_TR(0x661601);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66163a;}}
}
B661603:L661603:{c.instructions+=4;NFSU2_TR(0x661603);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B661606:{NFSU2_TR(0x661606);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B661609:{NFSU2_TR(0x661609);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66160c:{NFSU2_TR(0x66160c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66160f:L66160f:{c.instructions+=5;NFSU2_TR(0x66160f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B661612:{NFSU2_TR(0x661612);
__builtin_memmove((R+28),(R+8),4);
}
B661614:{NFSU2_TR(0x661614);
__builtin_memmove((R+8),(R+4),4);
}
B661616:{NFSU2_TR(0x661616);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B661619:{NFSU2_TR(0x661619);
__builtin_memmove((R+24),(R+0),4);
}
B66161b:L66161b:{c.instructions+=1;NFSU2_TR(0x66161b);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L66161d;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66161bu);}goto L66161b;}
}
B66161d:L66161d:{c.instructions+=6;NFSU2_TR(0x66161d);
__builtin_memmove((R+4),(R+8),4);
}
B66161f:{NFSU2_TR(0x66161f);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B661621:{NFSU2_TR(0x661621);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B661624:{NFSU2_TR(0x661624);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B661627:{NFSU2_TR(0x661627);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x10ull))));
}
B66162a:{NFSU2_TR(0x66162a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66162d:L66162d:{c.instructions+=1;NFSU2_TR(0x66162d);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L66162f;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66162du);}goto L66162d;}
}
B66162f:L66162f:{c.instructions+=2;NFSU2_TR(0x66162f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B661632:{NFSU2_TR(0x661632);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66160fu);}goto L66160f;}}
}
B661634:L661634:{c.instructions+=2;NFSU2_TR(0x661634);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B661637:{NFSU2_TR(0x661637);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66163a:L66163a:{c.instructions+=4;NFSU2_TR(0x66163a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66163c:{NFSU2_TR(0x66163c);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B66163f:{NFSU2_TR(0x66163f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B661642:{NFSU2_TR(0x661642);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+4))));
s4(u32(r4(R+24)),r4(U+0));
}
B661644:L661644:{c.instructions+=1;NFSU2_TR(0x661644);
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
B661646:L661646:{c.instructions+=5;NFSU2_TR(0x661646);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B661647:{NFSU2_TR(0x661647);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B661648:{NFSU2_TR(0x661648);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B661649:{NFSU2_TR(0x661649);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B66164a:{NFSU2_TR(0x66164a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B66164d:L66164d:{c.instructions+=20;NFSU2_TR(0x66164d);
__builtin_memmove((R+28),(R+28),4);
}
B66164f:{NFSU2_TR(0x66164f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661650:{NFSU2_TR(0x661650);
__builtin_memmove((R+20),(R+16),4);
}
B661652:{NFSU2_TR(0x661652);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661653:{NFSU2_TR(0x661653);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B661656:{NFSU2_TR(0x661656);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661657:{NFSU2_TR(0x661657);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B66165a:{NFSU2_TR(0x66165a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66165b:{NFSU2_TR(0x66165b);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B66165f:{NFSU2_TR(0x66165f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661660:{NFSU2_TR(0x661660);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B661663:{NFSU2_TR(0x661663);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B661667:{NFSU2_TR(0x661667);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B66166a:{NFSU2_TR(0x66166a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B66166d:{NFSU2_TR(0x66166d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B661670:{NFSU2_TR(0x661670);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B661673:{NFSU2_TR(0x661673);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+24)),r4(U+0));
}
B661676:{NFSU2_TR(0x661676);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66167a:{NFSU2_TR(0x66167a);
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
B66167c:{NFSU2_TR(0x66167c);
if(r1(R+518)){{goto L66169c;}}
}
B66167e:L66167e:{c.instructions+=3;NFSU2_TR(0x66167e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B661680:{NFSU2_TR(0x661680);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661681:{NFSU2_TR(0x661681);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x661684ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B661684:L661684:{c.instructions+=4;NFSU2_TR(0x661684);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B661686:{NFSU2_TR(0x661686);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B661687:{NFSU2_TR(0x661687);
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
B661689:{NFSU2_TR(0x661689);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L66169c;}}
}
B66168b:L66168b:{c.instructions+=4;NFSU2_TR(0x66168b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66168e:{NFSU2_TR(0x66168e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B661690:{NFSU2_TR(0x661690);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661691:{NFSU2_TR(0x661691);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x661694ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B661694:L661694:{c.instructions+=3;NFSU2_TR(0x661694);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B661696:{NFSU2_TR(0x661696);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B661699:{NFSU2_TR(0x661699);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x52ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66169c:L66169c:{c.instructions+=4;NFSU2_TR(0x66169c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66169f:{NFSU2_TR(0x66169f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+12)),r4(U+0));
}
B6616a1:{NFSU2_TR(0x6616a1);
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
B6616a3:{NFSU2_TR(0x6616a3);
if(r1(R+518)){{goto L6616c3;}}
}
B6616a5:L6616a5:{c.instructions+=3;NFSU2_TR(0x6616a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6616a7:{NFSU2_TR(0x6616a7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6616a8:{NFSU2_TR(0x6616a8);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6616abull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6616ab:L6616ab:{c.instructions+=4;NFSU2_TR(0x6616ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6616ad:{NFSU2_TR(0x6616ad);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6616ae:{NFSU2_TR(0x6616ae);
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
B6616b0:{NFSU2_TR(0x6616b0);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6616c3;}}
}
B6616b2:L6616b2:{c.instructions+=4;NFSU2_TR(0x6616b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6616b5:{NFSU2_TR(0x6616b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6616b7:{NFSU2_TR(0x6616b7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6616b8:{NFSU2_TR(0x6616b8);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6616bbull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6616bb:L6616bb:{c.instructions+=3;NFSU2_TR(0x6616bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6616bd:{NFSU2_TR(0x6616bd);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6616c0:{NFSU2_TR(0x6616c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6616c3:L6616c3:{c.instructions+=4;NFSU2_TR(0x6616c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6616c6:{NFSU2_TR(0x6616c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+12)),r4(U+0));
}
B6616c8:{NFSU2_TR(0x6616c8);
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
B6616ca:{NFSU2_TR(0x6616ca);
if(r1(R+518)){{goto L6616ea;}}
}
B6616cc:L6616cc:{c.instructions+=3;NFSU2_TR(0x6616cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6616ce:{NFSU2_TR(0x6616ce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6616cf:{NFSU2_TR(0x6616cf);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6616d2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6616d2:L6616d2:{c.instructions+=4;NFSU2_TR(0x6616d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6616d4:{NFSU2_TR(0x6616d4);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6616d5:{NFSU2_TR(0x6616d5);
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
B6616d7:{NFSU2_TR(0x6616d7);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6616ea;}}
}
B6616d9:L6616d9:{c.instructions+=4;NFSU2_TR(0x6616d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6616dc:{NFSU2_TR(0x6616dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6616de:{NFSU2_TR(0x6616de);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6616df:{NFSU2_TR(0x6616df);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6616e2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6616e2:L6616e2:{c.instructions+=3;NFSU2_TR(0x6616e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6616e4:{NFSU2_TR(0x6616e4);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6616e7:{NFSU2_TR(0x6616e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6616ea:L6616ea:{c.instructions+=4;NFSU2_TR(0x6616ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6616ed:{NFSU2_TR(0x6616ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+12)),r4(U+0));
}
B6616ef:{NFSU2_TR(0x6616ef);
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
B6616f1:{NFSU2_TR(0x6616f1);
if(r1(R+518)){{goto L661711;}}
}
B6616f3:L6616f3:{c.instructions+=3;NFSU2_TR(0x6616f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6616f5:{NFSU2_TR(0x6616f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6616f6:{NFSU2_TR(0x6616f6);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6616f9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6616f9:L6616f9:{c.instructions+=4;NFSU2_TR(0x6616f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6616fb:{NFSU2_TR(0x6616fb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6616fc:{NFSU2_TR(0x6616fc);
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
B6616fe:{NFSU2_TR(0x6616fe);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L661711;}}
}
B661700:L661700:{c.instructions+=4;NFSU2_TR(0x661700);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B661703:{NFSU2_TR(0x661703);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B661705:{NFSU2_TR(0x661705);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661706:{NFSU2_TR(0x661706);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x661709ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B661709:L661709:{c.instructions+=3;NFSU2_TR(0x661709);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66170b:{NFSU2_TR(0x66170b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B66170e:{NFSU2_TR(0x66170e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B661711:L661711:{c.instructions+=4;NFSU2_TR(0x661711);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B661714:{NFSU2_TR(0x661714);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+12)),r4(U+0));
}
B661716:{NFSU2_TR(0x661716);
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
B661718:{NFSU2_TR(0x661718);
if(r1(R+518)){{goto L661779;}}
}
B66171a:L66171a:{c.instructions+=3;NFSU2_TR(0x66171a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66171c:{NFSU2_TR(0x66171c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66171d:{NFSU2_TR(0x66171d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x661720ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B661720:L661720:{c.instructions+=2;NFSU2_TR(0x661720);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(R+0))<(r4(U+10))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+10)));
w4(U+14,u32(u32(r4(R+0))-u32(r4(U+10))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B661722:{NFSU2_TR(0x661722);
if(r1(R+512)){{goto L661779;}}
}
B661724:L661724:{c.instructions+=4;NFSU2_TR(0x661724);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x52ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B661728:{NFSU2_TR(0x661728);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66172c:{NFSU2_TR(0x66172c);
u8 U[6];
w1(R+512,u8((r2(R+0))<(u16(0xb6ull))));
w1(R+523,sborrow<u16>(r2(R+0),u16(0xb6ull)));
w2(U+4,u16(u32(r2(R+0))-u32(u16(0xb6ull))));
w1(R+519,u8(s16(r2(U+4))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+4))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B661730:{NFSU2_TR(0x661730);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L661779;}}
}
B661732:L661732:{c.instructions+=5;NFSU2_TR(0x661732);
w4(R+4,u32(r2(R+0)));
}
B661735:{NFSU2_TR(0x661735);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x1cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B661738:{NFSU2_TR(0x661738);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7b5838ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66173e:{NFSU2_TR(0x66173e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B661740:{NFSU2_TR(0x661740);
if(r1(R+518)){{goto L66174a;}}
}
B661742:L661742:{c.instructions+=3;NFSU2_TR(0x661742);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B661746:{NFSU2_TR(0x661746);
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
B661748:{NFSU2_TR(0x661748);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L661779;}}
}
B66174a:L66174a:{c.instructions+=2;NFSU2_TR(0x66174a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x105ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66174f:{NFSU2_TR(0x66174f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L661791;}}
}
B661751:L661751:{c.instructions+=3;NFSU2_TR(0x661751);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B661755:{NFSU2_TR(0x661755);
w1(R+512,u8((r2(R+0))<(u16(0x10ull))));
}
B661759:{NFSU2_TR(0x661759);
if(r1(R+512)){{goto L661785;}}
}
B66175b:L66175b:{c.instructions+=2;NFSU2_TR(0x66175b);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0x101ull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B66175f:{NFSU2_TR(0x66175f);
if(r1(R+518)){{goto L661785;}}
}
B661761:L661761:{c.instructions+=2;NFSU2_TR(0x661761);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0x102ull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B661765:{NFSU2_TR(0x661765);
if(r1(R+518)){{goto L661785;}}
}
B661767:L661767:{c.instructions+=2;NFSU2_TR(0x661767);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0x103ull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B66176b:{NFSU2_TR(0x66176b);
if(r1(R+518)){{goto L661785;}}
}
B66176d:L66176d:{c.instructions+=2;NFSU2_TR(0x66176d);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0x104ull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B661771:{NFSU2_TR(0x661771);
if(r1(R+518)){{goto L661785;}}
}
B661773:L661773:{c.instructions+=2;NFSU2_TR(0x661773);
u8 U[6];
w1(R+512,u8((r2(R+0))<(u16(0x100ull))));
w1(R+523,sborrow<u16>(r2(R+0),u16(0x100ull)));
w2(U+4,u16(u32(r2(R+0))-u32(u16(0x100ull))));
w1(R+519,u8(s16(r2(U+4))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+4))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B661777:{NFSU2_TR(0x661777);
if(r1(R+518)){{goto L661791;}}
}
B661779:L661779:{c.instructions+=2;NFSU2_TR(0x661779);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x80004005ull));
s4(u32(r4(U+0)),r4(U+4));
}
B661780:{NFSU2_TR(0x661780);
{goto L661851;}
}
B661785:L661785:{c.instructions+=2;NFSU2_TR(0x661785);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7b583cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x300000dull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x300000dull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x300000dull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B66178f:{NFSU2_TR(0x66178f);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x661779u);}goto L661779;}}
}
B661791:L661791:{c.instructions+=7;NFSU2_TR(0x661791);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x56ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))&u32(u16(0x0ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B661796:{NFSU2_TR(0x661796);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7b583cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66179c:{NFSU2_TR(0x66179c);
w4(R+8,u32(0xc020000ull));
}
B6617a1:{NFSU2_TR(0x6617a1);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6617a3:{NFSU2_TR(0x6617a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6617a6:{NFSU2_TR(0x6617a6);
w4(R+12,u32(0xd000004ull));
}
B6617ab:{NFSU2_TR(0x6617ab);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6618f2;}}
}
B6617b1:L6617b1:{c.instructions+=1;NFSU2_TR(0x6617b1);
if(r1(R+518)){{goto L661a14;}}
}
B6617b7:L6617b7:{c.instructions+=3;NFSU2_TR(0x6617b7);
w4(R+8,u32(0xc000001ull));
}
B6617bc:{NFSU2_TR(0x6617bc);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6617be:{NFSU2_TR(0x6617be);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L66185b;}}
}
B6617c4:L6617c4:{c.instructions+=1;NFSU2_TR(0x6617c4);
if(r1(R+518)){{goto L66191f;}}
}
B6617ca:L6617ca:{c.instructions+=2;NFSU2_TR(0x6617ca);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6617cf:{NFSU2_TR(0x6617cf);
if(r1(R+518)){{goto L661825;}}
}
B6617d1:L6617d1:{c.instructions+=2;NFSU2_TR(0x6617d1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xa000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6617d6:{NFSU2_TR(0x6617d6);
if(r1(R+518)){{goto L66181b;}}
}
B6617d8:L6617d8:{c.instructions+=2;NFSU2_TR(0x6617d8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xb000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6617dd:{NFSU2_TR(0x6617dd);
if(r1(R+518)){{goto L6617ef;}}
}
B6617df:L6617df:{c.instructions+=2;NFSU2_TR(0x6617df);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6617e4:{NFSU2_TR(0x6617e4);
if(r1(R+518)){{goto L661961;}}
}
B6617ea:L6617ea:{c.instructions+=1;NFSU2_TR(0x6617ea);
{goto L6619c0;}
}
B6617ef:L6617ef:{c.instructions+=2;NFSU2_TR(0x6617ef);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B6617f3:{NFSU2_TR(0x6617f3);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1aull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B6617f7:L6617f7:{c.instructions+=11;NFSU2_TR(0x6617f7);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x52ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6617fb:{NFSU2_TR(0x6617fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6617fe:{NFSU2_TR(0x6617fe);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x1cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B661801:{NFSU2_TR(0x661801);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B661804:{NFSU2_TR(0x661804);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B661807:{NFSU2_TR(0x661807);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B66180a:{NFSU2_TR(0x66180a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66180d:{NFSU2_TR(0x66180d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7b582cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B661813:{NFSU2_TR(0x661813);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B661816:{NFSU2_TR(0x661816);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B661819:{NFSU2_TR(0x661819);
{goto L661840;}
}
B66181b:L66181b:{c.instructions+=3;NFSU2_TR(0x66181b);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B66181f:{NFSU2_TR(0x66181f);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B661823:{NFSU2_TR(0x661823);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6617f7u);}goto L6617f7;}
}
B661825:L661825:{c.instructions+=8;NFSU2_TR(0x661825);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B661828:{NFSU2_TR(0x661828);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66182b:{NFSU2_TR(0x66182b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66182e:{NFSU2_TR(0x66182e);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B661831:{NFSU2_TR(0x661831);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B661834:{NFSU2_TR(0x661834);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7b582cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66183a:{NFSU2_TR(0x66183a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B66183d:{NFSU2_TR(0x66183d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B661840:L661840:{c.instructions+=3;NFSU2_TR(0x661840);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+24)),r4(U+0));
}
B661843:{NFSU2_TR(0x661843);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0xfffffffdull))));
s4(u32(r4(U+0)),r4(U+4));
}
B661847:{NFSU2_TR(0x661847);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x56ull))));
w2(U+4,u16(0x1ull));
s2(u32(r4(U+0)),r2(U+4));
}
B66184d:L66184d:{c.instructions+=1;NFSU2_TR(0x66184d);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
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
B661851:L661851:{c.instructions+=6;NFSU2_TR(0x661851);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B661854:{NFSU2_TR(0x661854);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B661855:{NFSU2_TR(0x661855);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B661856:{NFSU2_TR(0x661856);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B661857:{NFSU2_TR(0x661857);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B661858:{NFSU2_TR(0x661858);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B66185b:L66185b:{c.instructions+=2;NFSU2_TR(0x66185b);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0xc000002ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B661860:{NFSU2_TR(0x661860);
if(r1(R+518)){{goto L66191b;}}
}
B661866:L661866:{c.instructions+=2;NFSU2_TR(0x661866);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B661867:{NFSU2_TR(0x661867);
if(r1(R+518)){{goto L661917;}}
}
B66186d:L66186d:{c.instructions+=2;NFSU2_TR(0x66186d);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B66186e:{NFSU2_TR(0x66186e);
if(r1(R+518)){{goto L661911;}}
}
B661874:L661874:{c.instructions+=2;NFSU2_TR(0x661874);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0xfffcull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B661879:{NFSU2_TR(0x661879);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6619c0;}}
}
B66187f:L66187f:{c.instructions+=10;NFSU2_TR(0x66187f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B661882:{NFSU2_TR(0x661882);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B661885:{NFSU2_TR(0x661885);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B661888:{NFSU2_TR(0x661888);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B66188a:{NFSU2_TR(0x66188a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66188d:{NFSU2_TR(0x66188d);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B66188e:{NFSU2_TR(0x66188e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66188f:{NFSU2_TR(0x66188f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B661892:{NFSU2_TR(0x661892);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661893:{NFSU2_TR(0x661893);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x661898ull));
TAIL_STATIC(0x65b019u,65b);
}
B661898:L661898:{c.instructions+=4;NFSU2_TR(0x661898);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x56ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B66189c:{NFSU2_TR(0x66189c);
w4(R+0,u32(r2(R+0)));
}
B66189f:{NFSU2_TR(0x66189f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6618a2:{NFSU2_TR(0x6618a2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6618a4:L6618a4:{c.instructions+=3;NFSU2_TR(0x6618a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0xfffffffdull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6618a8:{NFSU2_TR(0x6618a8);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6618aa:{NFSU2_TR(0x6618aa);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66184du);}goto L66184d;}}
}
B6618ac:L6618ac:{c.instructions+=27;NFSU2_TR(0x6618ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6618af:{NFSU2_TR(0x6618af);
__builtin_memmove((R+12),(R+4),4);
}
B6618b1:{NFSU2_TR(0x6618b1);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B6618b4:{NFSU2_TR(0x6618b4);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6618b6:{NFSU2_TR(0x6618b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6618b7:{NFSU2_TR(0x6618b7);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+8))));
}
B6618b9:{NFSU2_TR(0x6618b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6618bc:{NFSU2_TR(0x6618bc);
__builtin_memmove((R+12),(R+4),4);
}
B6618be:{NFSU2_TR(0x6618be);
w4(R+12,shr<u32>(r4(R+12),u64(u32(0x1ull))));
}
B6618c0:{NFSU2_TR(0x6618c0);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1ull))));
}
B6618c3:{NFSU2_TR(0x6618c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6618c6:{NFSU2_TR(0x6618c6);
__builtin_memmove((R+12),(R+4),4);
}
B6618c8:{NFSU2_TR(0x6618c8);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B6618cb:{NFSU2_TR(0x6618cb);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+8))));
}
B6618cd:{NFSU2_TR(0x6618cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6618d0:{NFSU2_TR(0x6618d0);
__builtin_memmove((R+12),(R+4),4);
}
B6618d2:{NFSU2_TR(0x6618d2);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B6618d5:{NFSU2_TR(0x6618d5);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+8))));
}
B6618d7:{NFSU2_TR(0x6618d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6618da:{NFSU2_TR(0x6618da);
__builtin_memmove((R+12),(R+4),4);
}
B6618dc:{NFSU2_TR(0x6618dc);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B6618df:{NFSU2_TR(0x6618df);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+8))));
}
B6618e1:{NFSU2_TR(0x6618e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6618e4:{NFSU2_TR(0x6618e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6618e7:{NFSU2_TR(0x6618e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6618ea:{NFSU2_TR(0x6618ea);
u8 U[14];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(U+4),r4(R+0)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(U+4),r4(R+0)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
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
B6618ed:{NFSU2_TR(0x6618ed);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x661851u);}goto L661851;}
}
B6618f2:L6618f2:{c.instructions+=2;NFSU2_TR(0x6618f2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6618f4:{NFSU2_TR(0x6618f4);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6619a0;}}
}
B6618fa:L6618fa:{c.instructions+=1;NFSU2_TR(0x6618fa);
if(r1(R+518)){{goto L661911;}}
}
B6618fc:L6618fc:{c.instructions+=2;NFSU2_TR(0x6618fc);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0xd000000ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B661901:{NFSU2_TR(0x661901);
if(r1(R+518)){{goto L661961;}}
}
B661903:L661903:{c.instructions+=2;NFSU2_TR(0x661903);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B661904:{NFSU2_TR(0x661904);
if(r1(R+518)){{goto L66191f;}}
}
B661906:L661906:{c.instructions+=2;NFSU2_TR(0x661906);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B661907:{NFSU2_TR(0x661907);
if(r1(R+518)){{goto L66191b;}}
}
B661909:L661909:{c.instructions+=2;NFSU2_TR(0x661909);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B66190a:{NFSU2_TR(0x66190a);
if(r1(R+518)){{goto L661917;}}
}
B66190c:L66190c:{c.instructions+=1;NFSU2_TR(0x66190c);
{goto L6619c0;}
}
B661911:L661911:{c.instructions+=1;NFSU2_TR(0x661911);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x56ull))));
w2(U+4,u16(0x1ull));
s2(u32(r4(U+0)),r2(U+4));
}
B661917:L661917:{c.instructions+=1;NFSU2_TR(0x661917);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x56ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))+u32(u16(0x1ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B66191b:L66191b:{c.instructions+=1;NFSU2_TR(0x66191b);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x56ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))+u32(u16(0x1ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B66191f:L66191f:{c.instructions+=4;NFSU2_TR(0x66191f);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x56ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))+u32(u16(0x1ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B661923:{NFSU2_TR(0x661923);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7b583cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B661929:{NFSU2_TR(0x661929);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xd000001ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66192f:{NFSU2_TR(0x66192f);
if(r1(R+518)){{goto L661954;}}
}
B661931:L661931:{c.instructions+=2;NFSU2_TR(0x661931);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xd000002ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B661937:{NFSU2_TR(0x661937);
if(r1(R+518)){{goto L661954;}}
}
B661939:L661939:{c.instructions+=2;NFSU2_TR(0x661939);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xd000003ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66193f:{NFSU2_TR(0x66193f);
if(r1(R+518)){{goto L661954;}}
}
B661941:L661941:{c.instructions+=2;NFSU2_TR(0x661941);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B661943:{NFSU2_TR(0x661943);
if(r1(R+518)){{goto L661954;}}
}
B661945:L661945:{c.instructions+=3;NFSU2_TR(0x661945);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x52ull))));
w2(U+4,u16(0x94ull));
s2(u32(r4(U+0)),r2(U+4));
}
B66194b:{NFSU2_TR(0x66194b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
w4(U+4,u32(0xc000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B661952:{NFSU2_TR(0x661952);
{goto L661961;}
}
B661954:L661954:{c.instructions+=2;NFSU2_TR(0x661954);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x52ull))));
w2(U+4,u16(0x9cull));
s2(u32(r4(U+0)),r2(U+4));
}
B66195a:{NFSU2_TR(0x66195a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
w4(U+4,u32(0xd000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B661961:L661961:{c.instructions+=5;NFSU2_TR(0x661961);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x52ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B661965:{NFSU2_TR(0x661965);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x1cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B661968:{NFSU2_TR(0x661968);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7b583cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66196e:{NFSU2_TR(0x66196e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xd000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B661973:{NFSU2_TR(0x661973);
if(r1(R+518)){{goto L66197c;}}
}
B661975:L661975:{c.instructions+=2;NFSU2_TR(0x661975);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66197a:{NFSU2_TR(0x66197a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L661997;}}
}
B66197c:L66197c:{c.instructions+=8;NFSU2_TR(0x66197c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66197f:{NFSU2_TR(0x66197f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B661982:{NFSU2_TR(0x661982);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B661985:{NFSU2_TR(0x661985);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661987:{NFSU2_TR(0x661987);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66198a:{NFSU2_TR(0x66198a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B66198d:{NFSU2_TR(0x66198d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66198e:{NFSU2_TR(0x66198e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x661993ull));
TAIL_STATIC(0x65b019u,65b);
}
B661993:L661993:{c.instructions+=1;NFSU2_TR(0x661993);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x56ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B661997:L661997:{c.instructions+=2;NFSU2_TR(0x661997);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x56ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B66199b:{NFSU2_TR(0x66199b);
{goto L661a32;}
}
B6619a0:L6619a0:{c.instructions+=2;NFSU2_TR(0x6619a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xd010000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6619a5:{NFSU2_TR(0x6619a5);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66187fu);}goto L66187f;}}
}
B6619ab:L6619ab:{c.instructions+=2;NFSU2_TR(0x6619ab);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xd020000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6619b0:{NFSU2_TR(0x6619b0);
if(r1(R+518)){{goto L661a14;}}
}
B6619b2:L6619b2:{c.instructions+=2;NFSU2_TR(0x6619b2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xe000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6619b7:{NFSU2_TR(0x6619b7);
if(r1(R+518)){{goto L6619fb;}}
}
B6619b9:L6619b9:{c.instructions+=2;NFSU2_TR(0x6619b9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xf000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6619be:{NFSU2_TR(0x6619be);
if(r1(R+518)){{goto L6619fb;}}
}
B6619c0:L6619c0:{c.instructions+=3;NFSU2_TR(0x6619c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7b582cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6619c6:{NFSU2_TR(0x6619c6);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6619c7:{NFSU2_TR(0x6619c7);
if(r1(R+518)){{goto L6619da;}}
}
B6619c9:L6619c9:{c.instructions+=2;NFSU2_TR(0x6619c9);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6619ca:{NFSU2_TR(0x6619ca);
if(r1(R+518)){{goto L6619da;}}
}
B6619cc:L6619cc:{c.instructions+=2;NFSU2_TR(0x6619cc);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6619cd:{NFSU2_TR(0x6619cd);
if(r1(R+518)){{goto L6619da;}}
}
B6619cf:L6619cf:{c.instructions+=2;NFSU2_TR(0x6619cf);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0xf1fffdull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6619d4:{NFSU2_TR(0x6619d4);
if(r1(R+518)){{goto L6619da;}}
}
B6619d6:L6619d6:{c.instructions+=2;NFSU2_TR(0x6619d6);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6619d8:{NFSU2_TR(0x6619d8);
{goto L6619dd;}
}
B6619da:L6619da:{c.instructions+=2;NFSU2_TR(0x6619da);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6619dc:{NFSU2_TR(0x6619dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6619dd:L6619dd:{c.instructions+=8;NFSU2_TR(0x6619dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7b5834ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6619e3:{NFSU2_TR(0x6619e3);
u8 U[32];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7b5830ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B6619ea:{NFSU2_TR(0x6619ea);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6619ec:{NFSU2_TR(0x6619ec);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6619ef:{NFSU2_TR(0x6619ef);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6619f0:{NFSU2_TR(0x6619f0);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x56ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B6619f4:{NFSU2_TR(0x6619f4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6619f6:{NFSU2_TR(0x6619f6);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6618a4u);}goto L6618a4;}
}
B6619fb:L6619fb:{c.instructions+=7;NFSU2_TR(0x6619fb);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x56ull))));
w2(U+4,u16(0x1ull));
s2(u32(r4(U+0)),r2(U+4));
}
B661a01:{NFSU2_TR(0x661a01);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))+u32(u16(0x1ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B661a05:{NFSU2_TR(0x661a05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+24)),r4(U+0));
}
B661a08:{NFSU2_TR(0x661a08);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0xfffffffdull))));
s4(u32(r4(U+0)),r4(U+4));
}
B661a0c:{NFSU2_TR(0x661a0c);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661a0e:{NFSU2_TR(0x661a0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B661a0f:{NFSU2_TR(0x661a0f);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6618acu);}goto L6618ac;}
}
B661a14:L661a14:{c.instructions+=8;NFSU2_TR(0x661a14);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B661a17:{NFSU2_TR(0x661a17);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B661a1a:{NFSU2_TR(0x661a1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B661a1d:{NFSU2_TR(0x661a1d);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661a1f:{NFSU2_TR(0x661a1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B661a22:{NFSU2_TR(0x661a22);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B661a25:{NFSU2_TR(0x661a25);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661a26:{NFSU2_TR(0x661a26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x661a2bull));
TAIL_STATIC(0x65b019u,65b);
}
B661a2b:L661a2b:{c.instructions+=2;NFSU2_TR(0x661a2b);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x56ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B661a2f:{NFSU2_TR(0x661a2f);
w4(R+0,u32(r2(R+0)));
}
B661a32:L661a32:{c.instructions+=3;NFSU2_TR(0x661a32);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B661a35:{NFSU2_TR(0x661a35);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+24)),r4(U+0));
}
B661a3b:{NFSU2_TR(0x661a3b);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6618a4u);}goto L6618a4;}
}
B661a40:L661a40:{c.instructions+=18;NFSU2_TR(0x661a40);
__builtin_memmove((R+28),(R+28),4);
}
B661a42:{NFSU2_TR(0x661a42);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661a43:{NFSU2_TR(0x661a43);
__builtin_memmove((R+20),(R+16),4);
}
B661a45:{NFSU2_TR(0x661a45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B661a48:{NFSU2_TR(0x661a48);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B661a4b:{NFSU2_TR(0x661a4b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661a4c:{NFSU2_TR(0x661a4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B661a4f:{NFSU2_TR(0x661a4f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661a50:{NFSU2_TR(0x661a50);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B661a53:{NFSU2_TR(0x661a53);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B661a56:{NFSU2_TR(0x661a56);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B661a59:{NFSU2_TR(0x661a59);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B661a5c:{NFSU2_TR(0x661a5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B661a5f:{NFSU2_TR(0x661a5f);
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
B661a61:{NFSU2_TR(0x661a61);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661a62:{NFSU2_TR(0x661a62);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B661a65:{NFSU2_TR(0x661a65);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B661a68:{NFSU2_TR(0x661a68);
if(r1(R+518)){{goto L661a90;}}
}
B661a6a:L661a6a:{c.instructions+=3;NFSU2_TR(0x661a6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B661a6c:{NFSU2_TR(0x661a6c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661a6d:{NFSU2_TR(0x661a6d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x661a70ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B661a70:L661a70:{c.instructions+=6;NFSU2_TR(0x661a70);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B661a73:{NFSU2_TR(0x661a73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B661a75:{NFSU2_TR(0x661a75);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B661a76:{NFSU2_TR(0x661a76);
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
B661a78:{NFSU2_TR(0x661a78);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B661a7b:{NFSU2_TR(0x661a7b);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L661a93;}}
}
B661a7d:L661a7d:{c.instructions+=3;NFSU2_TR(0x661a7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B661a7f:{NFSU2_TR(0x661a7f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661a80:{NFSU2_TR(0x661a80);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x661a83ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B661a83:L661a83:{c.instructions+=5;NFSU2_TR(0x661a83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B661a85:{NFSU2_TR(0x661a85);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B661a88:{NFSU2_TR(0x661a88);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B661a8b:{NFSU2_TR(0x661a8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B661a8e:{NFSU2_TR(0x661a8e);
{goto L661a93;}
}
B661a90:L661a90:{c.instructions+=1;NFSU2_TR(0x661a90);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B661a93:L661a93:{c.instructions+=3;NFSU2_TR(0x661a93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+28)),r4(U+0));
}
B661a95:{NFSU2_TR(0x661a95);
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
B661a97:{NFSU2_TR(0x661a97);
if(r1(R+518)){{goto L661b6c;}}
}
B661a9d:L661a9d:{c.instructions+=3;NFSU2_TR(0x661a9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B661a9f:{NFSU2_TR(0x661a9f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661aa0:{NFSU2_TR(0x661aa0);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x661aa3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B661aa3:L661aa3:{c.instructions+=2;NFSU2_TR(0x661aa3);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(R+0))<(r4(U+10))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+10)));
w4(U+14,u32(u32(r4(R+0))-u32(r4(U+10))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B661aa5:{NFSU2_TR(0x661aa5);
if(r1(R+512)){{goto L661b6c;}}
}
B661aab:L661aab:{c.instructions+=6;NFSU2_TR(0x661aab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B661aae:{NFSU2_TR(0x661aae);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((R+28),(U+0),4);
}
B661ab1:{NFSU2_TR(0x661ab1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661ab2:{NFSU2_TR(0x661ab2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
}
B661ab5:{NFSU2_TR(0x661ab5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661ab6:{NFSU2_TR(0x661ab6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x661abbull));
TAIL_STATIC(0x670f08u,670);
}
B661abb:L661abb:{c.instructions+=3;NFSU2_TR(0x661abb);
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
B661abd:{NFSU2_TR(0x661abd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B661ac0:{NFSU2_TR(0x661ac0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L661c1b;}}
}
B661ac6:L661ac6:{c.instructions+=4;NFSU2_TR(0x661ac6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B661ac8:{NFSU2_TR(0x661ac8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B661aca:{NFSU2_TR(0x661aca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661acb:{NFSU2_TR(0x661acb);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x661aceull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B661ace:L661ace:{c.instructions+=5;NFSU2_TR(0x661ace);
__builtin_memmove((R+28),(R+0),4);
}
B661ad0:{NFSU2_TR(0x661ad0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B661ad4:{NFSU2_TR(0x661ad4);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B661ad8:{NFSU2_TR(0x661ad8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B661adb:{NFSU2_TR(0x661adb);
if(r1(R+518)){{goto L661c1b;}}
}
B661ae1:L661ae1:{c.instructions+=13;NFSU2_TR(0x661ae1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B661ae4:{NFSU2_TR(0x661ae4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B661ae7:{NFSU2_TR(0x661ae7);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3ull))));
}
B661aea:{NFSU2_TR(0x661aea);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B661aec:{NFSU2_TR(0x661aec);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B661aee:{NFSU2_TR(0x661aee);
w4(R+0,u32(0-u32(r4(R+0))));
}
B661af0:{NFSU2_TR(0x661af0);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B661af3:{NFSU2_TR(0x661af3);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+4)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+4)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B661af5:{NFSU2_TR(0x661af5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B661af8:{NFSU2_TR(0x661af8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B661afb:{NFSU2_TR(0x661afb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B661afd:{NFSU2_TR(0x661afd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661afe:{NFSU2_TR(0x661afe);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x661b01ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B661b01:L661b01:{c.instructions+=5;NFSU2_TR(0x661b01);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B661b04:{NFSU2_TR(0x661b04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B661b06:{NFSU2_TR(0x661b06);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B661b09:{NFSU2_TR(0x661b09);
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
B661b0b:{NFSU2_TR(0x661b0b);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L661b38;}}
}
B661b0d:L661b0d:{c.instructions+=4;NFSU2_TR(0x661b0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B661b10:{NFSU2_TR(0x661b10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B661b12:{NFSU2_TR(0x661b12);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661b13:{NFSU2_TR(0x661b13);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x661b16ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B661b16:L661b16:{c.instructions+=7;NFSU2_TR(0x661b16);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B661b19:{NFSU2_TR(0x661b19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B661b1b:{NFSU2_TR(0x661b1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B661b1e:{NFSU2_TR(0x661b1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B661b21:{NFSU2_TR(0x661b21);
__builtin_memmove((R+0),(R+4),4);
}
B661b23:{NFSU2_TR(0x661b23);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x20ull))));
}
B661b26:{NFSU2_TR(0x661b26);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B661b29:L661b29:{c.instructions+=1;NFSU2_TR(0x661b29);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L661b2b;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x661b29u);}goto L661b29;}
}
B661b2b:L661b2b:{c.instructions+=2;NFSU2_TR(0x661b2b);
__builtin_memmove((R+4),(R+0),4);
}
B661b2d:{NFSU2_TR(0x661b2d);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B661b30:L661b30:{c.instructions+=1;NFSU2_TR(0x661b30);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L661b32;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x661b30u);}goto L661b30;}
}
B661b32:L661b32:{c.instructions+=2;NFSU2_TR(0x661b32);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B661b35:{NFSU2_TR(0x661b35);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B661b38:L661b38:{c.instructions+=10;NFSU2_TR(0x661b38);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B661b3b:{NFSU2_TR(0x661b3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B661b3e:{NFSU2_TR(0x661b3e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+4))));
s4(u32(r4(R+0)),r4(U+0));
}
B661b40:{NFSU2_TR(0x661b40);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((R+0),(U+0),4);
}
B661b43:{NFSU2_TR(0x661b43);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661b44:{NFSU2_TR(0x661b44);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B661b47:{NFSU2_TR(0x661b47);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((R+8),(U+0),4);
}
B661b4a:{NFSU2_TR(0x661b4a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661b4b:{NFSU2_TR(0x661b4b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661b4c:{NFSU2_TR(0x661b4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x661b51ull));
TAIL_STATIC(0x688dc9u,688);
}
B661b51:L661b51:{c.instructions+=3;NFSU2_TR(0x661b51);
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
B661b53:{NFSU2_TR(0x661b53);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B661b56:{NFSU2_TR(0x661b56);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L661c1b;}}
}
B661b5c:L661b5c:{c.instructions+=4;NFSU2_TR(0x661b5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B661b5f:{NFSU2_TR(0x661b5f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B661b61:{NFSU2_TR(0x661b61);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661b62:{NFSU2_TR(0x661b62);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x661b65ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B661b65:L661b65:{c.instructions+=3;NFSU2_TR(0x661b65);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B661b68:{NFSU2_TR(0x661b68);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(R+0))<(r4(U+10))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+10)));
w4(U+14,u32(u32(r4(R+0))-u32(r4(U+10))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B661b6a:{NFSU2_TR(0x661b6a);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L661b78;}}
}
B661b6c:L661b6c:{c.instructions+=2;NFSU2_TR(0x661b6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x80004005ull));
s4(u32(r4(U+0)),r4(U+4));
}
B661b73:{NFSU2_TR(0x661b73);
{goto L661c1b;}
}
B661b78:L661b78:{c.instructions+=7;NFSU2_TR(0x661b78);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((R+0),(U+0),4);
}
B661b7b:{NFSU2_TR(0x661b7b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661b7c:{NFSU2_TR(0x661b7c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+0),(U+0),4);
}
B661b7f:{NFSU2_TR(0x661b7f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661b80:{NFSU2_TR(0x661b80);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B661b83:{NFSU2_TR(0x661b83);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661b84:{NFSU2_TR(0x661b84);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x661b89ull));
TAIL_STATIC(0x688dc9u,688);
}
B661b89:L661b89:{c.instructions+=3;NFSU2_TR(0x661b89);
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
B661b8b:{NFSU2_TR(0x661b8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B661b8e:{NFSU2_TR(0x661b8e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L661c1b;}}
}
B661b94:L661b94:{c.instructions+=5;NFSU2_TR(0x661b94);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B661b97:{NFSU2_TR(0x661b97);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661b98:{NFSU2_TR(0x661b98);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B661b9b:{NFSU2_TR(0x661b9b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B661b9e:{NFSU2_TR(0x661b9e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x661ba3ull));
TAIL_STATIC(0x660d4eu,660);
}
B661ba3:L661ba3:{c.instructions+=3;NFSU2_TR(0x661ba3);
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
B661ba5:{NFSU2_TR(0x661ba5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B661ba8:{NFSU2_TR(0x661ba8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L661c1b;}}
}
B661baa:L661baa:{c.instructions+=8;NFSU2_TR(0x661baa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B661bad:{NFSU2_TR(0x661bad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B661bb0:{NFSU2_TR(0x661bb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B661bb3:{NFSU2_TR(0x661bb3);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661bb5:{NFSU2_TR(0x661bb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B661bb8:{NFSU2_TR(0x661bb8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B661bbb:{NFSU2_TR(0x661bbb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661bbc:{NFSU2_TR(0x661bbc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x661bc1ull));
TAIL_STATIC(0x65b019u,65b);
}
B661bc1:L661bc1:{c.instructions+=4;NFSU2_TR(0x661bc1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B661bc3:{NFSU2_TR(0x661bc3);
u8 U[9];
w4(U+5,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+5))));
w1(U+0,u8((r4(U+5))!=(u32(0x0ull))));
w1(U+1,u8((r4(R+0))==(u32(0x0ull))));
w1(U+2,u8(!(r1(U+0))));
w1(U+3,u8(u32(r1(U+2))&u32(r1(R+518))));
w1(U+4,u8(u32(r1(U+0))&u32(r1(U+1))));
w1(R+518,u8(u32(r1(U+3))|u32(r1(U+4))));
}
B661bc6:{NFSU2_TR(0x661bc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B661bc9:{NFSU2_TR(0x661bc9);
if(r1(R+518)){{goto L661bcf;}}
}
B661bcb:L661bcb:{c.instructions+=2;NFSU2_TR(0x661bcb);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B661bcc:{NFSU2_TR(0x661bcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B661bcf:L661bcf:{c.instructions+=27;NFSU2_TR(0x661bcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B661bd2:{NFSU2_TR(0x661bd2);
__builtin_memmove((R+0),(R+4),4);
}
B661bd4:{NFSU2_TR(0x661bd4);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B661bd6:{NFSU2_TR(0x661bd6);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
}
B661bd8:{NFSU2_TR(0x661bd8);
__builtin_memmove((R+4),(R+0),4);
}
B661bda:{NFSU2_TR(0x661bda);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B661bdd:{NFSU2_TR(0x661bdd);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+0))));
}
B661bdf:{NFSU2_TR(0x661bdf);
__builtin_memmove((R+0),(R+4),4);
}
B661be1:{NFSU2_TR(0x661be1);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B661be4:{NFSU2_TR(0x661be4);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
}
B661be6:{NFSU2_TR(0x661be6);
__builtin_memmove((R+4),(R+0),4);
}
B661be8:{NFSU2_TR(0x661be8);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B661beb:{NFSU2_TR(0x661beb);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+0))));
}
B661bed:{NFSU2_TR(0x661bed);
__builtin_memmove((R+0),(R+4),4);
}
B661bef:{NFSU2_TR(0x661bef);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B661bf2:{NFSU2_TR(0x661bf2);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
}
B661bf4:{NFSU2_TR(0x661bf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B661bf7:{NFSU2_TR(0x661bf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x8ull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B661bfe:{NFSU2_TR(0x661bfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B661c01:{NFSU2_TR(0x661c01);
__builtin_memmove((R+8),(R+0),4);
}
B661c03:{NFSU2_TR(0x661c03);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B661c06:{NFSU2_TR(0x661c06);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ull))));
}
B661c09:{NFSU2_TR(0x661c09);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B661c0c:{NFSU2_TR(0x661c0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B661c0f:{NFSU2_TR(0x661c0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B661c12:{NFSU2_TR(0x661c12);
u8 U[14];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(U+4),r4(R+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(U+4),r4(R+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
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
B661c15:{NFSU2_TR(0x661c15);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+24)),r4(U+0));
}
B661c1b:L661c1b:{c.instructions+=6;NFSU2_TR(0x661c1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B661c1e:{NFSU2_TR(0x661c1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B661c1f:{NFSU2_TR(0x661c1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B661c20:{NFSU2_TR(0x661c20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B661c21:{NFSU2_TR(0x661c21);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B661c22:{NFSU2_TR(0x661c22);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B661c25:L661c25:{c.instructions+=8;NFSU2_TR(0x661c25);
__builtin_memmove((R+28),(R+28),4);
}
B661c27:{NFSU2_TR(0x661c27);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661c28:{NFSU2_TR(0x661c28);
__builtin_memmove((R+20),(R+16),4);
}
B661c2a:{NFSU2_TR(0x661c2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B661c2d:{NFSU2_TR(0x661c2d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661c2f:{NFSU2_TR(0x661c2f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B661c32:{NFSU2_TR(0x661c32);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B661c35:{NFSU2_TR(0x661c35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x661c3aull));
TAIL_STATIC(0x65c123u,65c);
}
B661c3a:L661c3a:{c.instructions+=2;NFSU2_TR(0x661c3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B661c3b:{NFSU2_TR(0x661c3b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B661c3e:L661c3e:{c.instructions+=12;NFSU2_TR(0x661c3e);
__builtin_memmove((R+28),(R+28),4);
}
B661c40:{NFSU2_TR(0x661c40);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661c41:{NFSU2_TR(0x661c41);
__builtin_memmove((R+20),(R+16),4);
}
B661c43:{NFSU2_TR(0x661c43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B661c46:{NFSU2_TR(0x661c46);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661c47:{NFSU2_TR(0x661c47);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661c48:{NFSU2_TR(0x661c48);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B661c4b:{NFSU2_TR(0x661c4b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661c4c:{NFSU2_TR(0x661c4c);
__builtin_memmove((R+28),(R+4),4);
}
B661c4e:{NFSU2_TR(0x661c4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B661c51:{NFSU2_TR(0x661c51);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B661c53:{NFSU2_TR(0x661c53);
if(r1(R+518)){{goto L661c60;}}
}
B661c55:L661c55:{c.instructions+=2;NFSU2_TR(0x661c55);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661c57:{NFSU2_TR(0x661c57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x661c5cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x661405u);}goto L661405;}
}
B661c5c:L661c5c:{c.instructions+=1;NFSU2_TR(0x661c5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B661c60:L661c60:{c.instructions+=5;NFSU2_TR(0x661c60);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B661c63:{NFSU2_TR(0x661c63);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B661c66:{NFSU2_TR(0x661c66);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x4ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B661c6d:{NFSU2_TR(0x661c6d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661c6e:{NFSU2_TR(0x661c6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x661c73ull));
TAIL_STATIC(0x575620u,575);
}
B661c73:L661c73:{c.instructions+=3;NFSU2_TR(0x661c73);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B661c75:{NFSU2_TR(0x661c75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B661c76:{NFSU2_TR(0x661c76);
if(r1(R+518)){{goto L661c93;}}
}
B661c78:L661c78:{c.instructions+=8;NFSU2_TR(0x661c78);
u8 U[4];
w4(U+0,u32(0x65b694ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661c7d:{NFSU2_TR(0x661c7d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661c7e:{NFSU2_TR(0x661c7e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B661c80:{NFSU2_TR(0x661c80);
w1(R+512,carry<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B661c83:{NFSU2_TR(0x661c83);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661c85:{NFSU2_TR(0x661c85);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661c86:{NFSU2_TR(0x661c86);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B661c89:{NFSU2_TR(0x661c89);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x661c8eull));
TAIL_STATIC(0x401650u,401);
}
B661c8e:L661c8e:{c.instructions+=2;NFSU2_TR(0x661c8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B661c91:{NFSU2_TR(0x661c91);
{goto L661c95;}
}
B661c93:L661c93:{c.instructions+=1;NFSU2_TR(0x661c93);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B661c95:L661c95:{c.instructions+=3;NFSU2_TR(0x661c95);
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
B661c97:{NFSU2_TR(0x661c97);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B661c9a:{NFSU2_TR(0x661c9a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L661ca6;}}
}
B661c9c:L661c9c:{c.instructions+=2;NFSU2_TR(0x661c9c);
w4(R+0,u32(0x8007000eull));
}
B661ca1:{NFSU2_TR(0x661ca1);
{goto L661e11;}
}
B661ca6:L661ca6:{c.instructions+=16;NFSU2_TR(0x661ca6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B661cac:{NFSU2_TR(0x661cac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B661caf:{NFSU2_TR(0x661caf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B661cb2:{NFSU2_TR(0x661cb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B661cb5:{NFSU2_TR(0x661cb5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B661cb7:{NFSU2_TR(0x661cb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B661cba:{NFSU2_TR(0x661cba);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B661cbe:{NFSU2_TR(0x661cbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B661cc1:{NFSU2_TR(0x661cc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B661cc4:{NFSU2_TR(0x661cc4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B661cc6:{NFSU2_TR(0x661cc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B661cc9:{NFSU2_TR(0x661cc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B661ccc:{NFSU2_TR(0x661ccc);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B661cce:{NFSU2_TR(0x661cce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B661cd1:{NFSU2_TR(0x661cd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B661cd4:{NFSU2_TR(0x661cd4);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L661e0f;}}
}
B661cda:L661cda:{c.instructions+=3;NFSU2_TR(0x661cda);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B661cdd:{NFSU2_TR(0x661cdd);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B661cdf:{NFSU2_TR(0x661cdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B661ce2:L661ce2:{c.instructions+=24;NFSU2_TR(0x661ce2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B661ce5:{NFSU2_TR(0x661ce5);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w4(U+12,u32(0x3ull));
s4(u32(r4(U+8)),r4(U+12));
}
B661ced:{NFSU2_TR(0x661ced);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B661cf0:{NFSU2_TR(0x661cf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B661cf3:{NFSU2_TR(0x661cf3);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B661cf7:{NFSU2_TR(0x661cf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B661cfd:{NFSU2_TR(0x661cfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B661d00:{NFSU2_TR(0x661d00);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B661d03:{NFSU2_TR(0x661d03);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B661d06:{NFSU2_TR(0x661d06);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B661d09:{NFSU2_TR(0x661d09);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B661d0c:{NFSU2_TR(0x661d0c);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B661d10:{NFSU2_TR(0x661d10);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B661d16:{NFSU2_TR(0x661d16);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B661d19:{NFSU2_TR(0x661d19);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B661d1c:{NFSU2_TR(0x661d1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B661d1f:{NFSU2_TR(0x661d1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B661d22:{NFSU2_TR(0x661d22);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B661d25:{NFSU2_TR(0x661d25);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B661d29:{NFSU2_TR(0x661d29);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B661d2c:{NFSU2_TR(0x661d2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B661d32:{NFSU2_TR(0x661d32);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B661d35:{NFSU2_TR(0x661d35);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B661d39:{NFSU2_TR(0x661d39);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L661d40;}}
}
B661d3b:L661d3b:{c.instructions+=2;NFSU2_TR(0x661d3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B661d3e:{NFSU2_TR(0x661d3e);
{goto L661d46;}
}
B661d40:L661d40:{c.instructions+=2;NFSU2_TR(0x661d40);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B661d43:{NFSU2_TR(0x661d43);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B661d46:L661d46:{c.instructions+=7;NFSU2_TR(0x661d46);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B661d49:{NFSU2_TR(0x661d49);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661d4a:{NFSU2_TR(0x661d4a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B661d4d:{NFSU2_TR(0x661d4d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661d4e:{NFSU2_TR(0x661d4e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661d4f:{NFSU2_TR(0x661d4f);
__builtin_memmove((R+4),(R+28),4);
}
B661d51:{NFSU2_TR(0x661d51);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x661d56ull));
TAIL_STATIC(0x65c033u,65c);
}
B661d56:L661d56:{c.instructions+=7;NFSU2_TR(0x661d56);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B661d59:{NFSU2_TR(0x661d59);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B661d5d:{NFSU2_TR(0x661d5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B661d60:{NFSU2_TR(0x661d60);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B661d66:{NFSU2_TR(0x661d66);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B661d69:{NFSU2_TR(0x661d69);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B661d6d:{NFSU2_TR(0x661d6d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L661d74;}}
}
B661d6f:L661d6f:{c.instructions+=2;NFSU2_TR(0x661d6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B661d72:{NFSU2_TR(0x661d72);
{goto L661d7a;}
}
B661d74:L661d74:{c.instructions+=2;NFSU2_TR(0x661d74);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B661d77:{NFSU2_TR(0x661d77);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B661d7a:L661d7a:{c.instructions+=6;NFSU2_TR(0x661d7a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B661d7d:{NFSU2_TR(0x661d7d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661d7e:{NFSU2_TR(0x661d7e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B661d81:{NFSU2_TR(0x661d81);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661d82:{NFSU2_TR(0x661d82);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661d83:{NFSU2_TR(0x661d83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x661d88ull));
TAIL_STATIC(0x65bf18u,65b);
}
B661d88:L661d88:{c.instructions+=8;NFSU2_TR(0x661d88);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B661d8b:{NFSU2_TR(0x661d8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B661d91:{NFSU2_TR(0x661d91);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B661d94:{NFSU2_TR(0x661d94);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B661d97:{NFSU2_TR(0x661d97);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B661d9a:{NFSU2_TR(0x661d9a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B661d9d:{NFSU2_TR(0x661d9d);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B661da1:{NFSU2_TR(0x661da1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L661da8;}}
}
B661da3:L661da3:{c.instructions+=2;NFSU2_TR(0x661da3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B661da6:{NFSU2_TR(0x661da6);
{goto L661dae;}
}
B661da8:L661da8:{c.instructions+=2;NFSU2_TR(0x661da8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B661dab:{NFSU2_TR(0x661dab);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B661dae:L661dae:{c.instructions+=15;NFSU2_TR(0x661dae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B661db1:{NFSU2_TR(0x661db1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B661db7:{NFSU2_TR(0x661db7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B661dba:{NFSU2_TR(0x661dba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B661dbd:{NFSU2_TR(0x661dbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B661dc0:{NFSU2_TR(0x661dc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B661dc3:{NFSU2_TR(0x661dc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B661dc6:{NFSU2_TR(0x661dc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B661dc9:{NFSU2_TR(0x661dc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B661dcf:{NFSU2_TR(0x661dcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B661dd2:{NFSU2_TR(0x661dd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B661dd5:{NFSU2_TR(0x661dd5);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B661dd8:{NFSU2_TR(0x661dd8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B661ddb:{NFSU2_TR(0x661ddb);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B661ddf:{NFSU2_TR(0x661ddf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L661de6;}}
}
B661de1:L661de1:{c.instructions+=2;NFSU2_TR(0x661de1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B661de4:{NFSU2_TR(0x661de4);
{goto L661dec;}
}
B661de6:L661de6:{c.instructions+=2;NFSU2_TR(0x661de6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B661de9:{NFSU2_TR(0x661de9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B661dec:L661dec:{c.instructions+=10;NFSU2_TR(0x661dec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B661def:{NFSU2_TR(0x661def);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B661df5:{NFSU2_TR(0x661df5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B661df8:{NFSU2_TR(0x661df8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B661dfb:{NFSU2_TR(0x661dfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B661dfe:{NFSU2_TR(0x661dfe);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x28ull))));
}
B661e01:{NFSU2_TR(0x661e01);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B661e04:{NFSU2_TR(0x661e04);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B661e07:{NFSU2_TR(0x661e07);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B661e09:{NFSU2_TR(0x661e09);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x661ce2u);}goto L661ce2;}}
}
B661e0f:L661e0f:{c.instructions+=1;NFSU2_TR(0x661e0f);
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
B661e11:L661e11:{c.instructions+=5;NFSU2_TR(0x661e11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B661e12:{NFSU2_TR(0x661e12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B661e13:{NFSU2_TR(0x661e13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B661e14:{NFSU2_TR(0x661e14);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B661e15:{NFSU2_TR(0x661e15);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B661e18:L661e18:{c.instructions+=7;NFSU2_TR(0x661e18);
__builtin_memmove((R+28),(R+28),4);
}
B661e1a:{NFSU2_TR(0x661e1a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661e1b:{NFSU2_TR(0x661e1b);
__builtin_memmove((R+20),(R+16),4);
}
B661e1d:{NFSU2_TR(0x661e1d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661e1e:{NFSU2_TR(0x661e1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B661e21:{NFSU2_TR(0x661e21);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B661e23:{NFSU2_TR(0x661e23);
if(r1(R+518)){{goto L661e75;}}
}
B661e25:L661e25:{c.instructions+=4;NFSU2_TR(0x661e25);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B661e28:{NFSU2_TR(0x661e28);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661e2a:{NFSU2_TR(0x661e2a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661e2b:{NFSU2_TR(0x661e2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x661e30ull));
TAIL_STATIC(0x65be0du,65b);
}
B661e30:L661e30:{c.instructions+=2;NFSU2_TR(0x661e30);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B661e32:{NFSU2_TR(0x661e32);
if(r1(R+518)){{goto L661e3c;}}
}
B661e34:L661e34:{c.instructions+=3;NFSU2_TR(0x661e34);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B661e37:{NFSU2_TR(0x661e37);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B661e3a:{NFSU2_TR(0x661e3a);
{goto L661e5d;}
}
B661e3c:L661e3c:{c.instructions+=4;NFSU2_TR(0x661e3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B661e3f:{NFSU2_TR(0x661e3f);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661e41:{NFSU2_TR(0x661e41);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661e42:{NFSU2_TR(0x661e42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x661e47ull));
TAIL_STATIC(0x65c61fu,65c);
}
B661e47:L661e47:{c.instructions+=2;NFSU2_TR(0x661e47);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B661e49:{NFSU2_TR(0x661e49);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L661e57;}}
}
B661e4b:L661e4b:{c.instructions+=3;NFSU2_TR(0x661e4b);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661e4d:{NFSU2_TR(0x661e4d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661e4e:{NFSU2_TR(0x661e4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x661e53ull));
TAIL_STATIC(0x65c5deu,65c);
}
B661e53:L661e53:{c.instructions+=2;NFSU2_TR(0x661e53);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B661e55:{NFSU2_TR(0x661e55);
if(r1(R+518)){{goto L661e75;}}
}
B661e57:L661e57:{c.instructions+=2;NFSU2_TR(0x661e57);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B661e5a:{NFSU2_TR(0x661e5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B661e5d:L661e5d:{c.instructions+=2;NFSU2_TR(0x661e5d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
}
B661e60:{NFSU2_TR(0x661e60);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L661e75;}}
}
B661e62:L661e62:{c.instructions+=2;NFSU2_TR(0x661e62);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B661e66:{NFSU2_TR(0x661e66);
if(r1(R+518)){{goto L661e71;}}
}
B661e68:L661e68:{c.instructions+=1;NFSU2_TR(0x661e68);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B661e6b:L661e6b:{c.instructions+=3;NFSU2_TR(0x661e6b);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B661e6c:{NFSU2_TR(0x661e6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B661e6f:{NFSU2_TR(0x661e6f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x661e6bu);}goto L661e6b;}}
}
B661e71:L661e71:{c.instructions+=2;NFSU2_TR(0x661e71);
w4(R+0,u32(~u32(r4(R+0))));
}
B661e73:{NFSU2_TR(0x661e73);
{goto L661e77;}
}
B661e75:L661e75:{c.instructions+=1;NFSU2_TR(0x661e75);
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
B661e77:L661e77:{c.instructions+=3;NFSU2_TR(0x661e77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B661e78:{NFSU2_TR(0x661e78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B661e79:{NFSU2_TR(0x661e79);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B661e7c:L661e7c:{c.instructions+=9;NFSU2_TR(0x661e7c);
__builtin_memmove((R+28),(R+28),4);
}
B661e7e:{NFSU2_TR(0x661e7e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661e7f:{NFSU2_TR(0x661e7f);
__builtin_memmove((R+20),(R+16),4);
}
B661e81:{NFSU2_TR(0x661e81);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661e82:{NFSU2_TR(0x661e82);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B661e86:{NFSU2_TR(0x661e86);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661e87:{NFSU2_TR(0x661e87);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B661e8a:{NFSU2_TR(0x661e8a);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
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
B661e8e:{NFSU2_TR(0x661e8e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L661e9c;}}
}
B661e90:L661e90:{c.instructions+=2;NFSU2_TR(0x661e90);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8876086cull));
s4(u32(r4(U+0)),r4(U+4));
}
B661e97:{NFSU2_TR(0x661e97);
{goto L661f9b;}
}
B661e9c:L661e9c:{c.instructions+=5;NFSU2_TR(0x661e9c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661e9d:{NFSU2_TR(0x661e9d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661e9f:{NFSU2_TR(0x661e9f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B661ea2:{NFSU2_TR(0x661ea2);
__builtin_memmove((R+4),(R+24),4);
}
B661ea4:{NFSU2_TR(0x661ea4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x661ea9ull));
TAIL_STATIC(0x65c61fu,65c);
}
B661ea9:L661ea9:{c.instructions+=3;NFSU2_TR(0x661ea9);
__builtin_memmove((R+12),(R+0),4);
}
B661eab:{NFSU2_TR(0x661eab);
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
B661ead:{NFSU2_TR(0x661ead);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L661ebb;}}
}
B661eaf:L661eaf:{c.instructions+=2;NFSU2_TR(0x661eaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8876086cull));
s4(u32(r4(U+0)),r4(U+4));
}
B661eb6:{NFSU2_TR(0x661eb6);
{goto L661f9a;}
}
B661ebb:L661ebb:{c.instructions+=4;NFSU2_TR(0x661ebb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661ebc:{NFSU2_TR(0x661ebc);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+28),(U+4),2);
}
B661ec0:{NFSU2_TR(0x661ec0);
u8 U[4];
__builtin_memmove((U+0),(R+28),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B661ec5:{NFSU2_TR(0x661ec5);
if(r1(R+518)){{goto L661f0f;}}
}
B661ec7:L661ec7:{c.instructions+=17;NFSU2_TR(0x661ec7);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x42ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B661ecb:{NFSU2_TR(0x661ecb);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B661ecd:{NFSU2_TR(0x661ecd);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+0))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B661ed1:{NFSU2_TR(0x661ed1);
w4(R+0,u32(r2(R+0)));
}
B661ed4:{NFSU2_TR(0x661ed4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B661ed7:{NFSU2_TR(0x661ed7);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0xb4ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B661edd:{NFSU2_TR(0x661edd);
w4(R+8,u32(r2(R+28)));
}
B661ee0:{NFSU2_TR(0x661ee0);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B661ee3:{NFSU2_TR(0x661ee3);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B661ee4:{NFSU2_TR(0x661ee4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661ee5:{NFSU2_TR(0x661ee5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B661eeb:{NFSU2_TR(0x661eeb);
u8 U[16];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B661eef:{NFSU2_TR(0x661eef);
u8 U[14];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+0,u32(r2(U+12)));
}
B661ef4:{NFSU2_TR(0x661ef4);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661ef6:{NFSU2_TR(0x661ef6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661ef7:{NFSU2_TR(0x661ef7);
__builtin_memmove((R+4),(R+24),4);
}
B661ef9:{NFSU2_TR(0x661ef9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x661efeull));
TAIL_STATIC(0x65ae25u,65a);
}
B661efe:L661efe:{c.instructions+=3;NFSU2_TR(0x661efe);
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
B661f00:{NFSU2_TR(0x661f00);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B661f03:{NFSU2_TR(0x661f03);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L661f99;}}
}
B661f09:L661f09:{c.instructions+=1;NFSU2_TR(0x661f09);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))|u32(u16(0xffffull))));
s2(u32(r4(U+0)),r2(U+4));
}
B661f0f:L661f0f:{c.instructions+=11;NFSU2_TR(0x661f0f);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B661f13:{NFSU2_TR(0x661f13);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x42ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B661f17:{NFSU2_TR(0x661f17);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B661f1d:{NFSU2_TR(0x661f1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B661f23:{NFSU2_TR(0x661f23);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x42ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B661f27:{NFSU2_TR(0x661f27);
w4(R+0,u32(r2(R+0)));
}
B661f2a:{NFSU2_TR(0x661f2a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B661f2d:{NFSU2_TR(0x661f2d);
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
B661f2f:{NFSU2_TR(0x661f2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B661f32:{NFSU2_TR(0x661f32);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B661f38:{NFSU2_TR(0x661f38);
if(r1(R+518)){{goto L661f99;}}
}
B661f3a:L661f3a:{c.instructions+=3;NFSU2_TR(0x661f3a);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x42ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B661f3e:{NFSU2_TR(0x661f3e);
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
B661f40:{NFSU2_TR(0x661f40);
if(r1(R+518)){{goto L661f99;}}
}
B661f42:L661f42:{c.instructions+=3;NFSU2_TR(0x661f42);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B661f44:{NFSU2_TR(0x661f44);
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
B661f46:{NFSU2_TR(0x661f46);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L661f99;}}
}
B661f48:L661f48:{c.instructions+=3;NFSU2_TR(0x661f48);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B661f4e:{NFSU2_TR(0x661f4e);
u8 U[11];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((U+9),(U+8),1);
w1(U+10,u8(u32(r1(U+9))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+10))==(u8(0x0ull))));
}
B661f52:{NFSU2_TR(0x661f52);
if(r1(R+518)){{goto L661f90;}}
}
B661f54:L661f54:{c.instructions+=4;NFSU2_TR(0x661f54);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B661f5a:{NFSU2_TR(0x661f5a);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B661f5d:{NFSU2_TR(0x661f5d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B661f5f:{NFSU2_TR(0x661f5f);
if(r1(R+518)){{goto L661f90;}}
}
B661f61:L661f61:{c.instructions+=1;NFSU2_TR(0x661f61);
{goto L661f8a;}
}
B661f63:L661f63:{c.instructions+=10;NFSU2_TR(0x661f63);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+4)),r4(U+0));
}
B661f69:{NFSU2_TR(0x661f69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B661f6b:{NFSU2_TR(0x661f6b);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B661f6f:{NFSU2_TR(0x661f6f);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x16ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B661f73:{NFSU2_TR(0x661f73);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B661f76:{NFSU2_TR(0x661f76);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B661f79:{NFSU2_TR(0x661f79);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B661f7c:{NFSU2_TR(0x661f7c);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B661f80:{NFSU2_TR(0x661f80);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
w4(U+8,u32(0x1ull));
s4(u32(r4(U+4)),r4(U+8));
}
B661f87:{NFSU2_TR(0x661f87);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B661f8a:L661f8a:{c.instructions+=3;NFSU2_TR(0x661f8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B661f8c:{NFSU2_TR(0x661f8c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B661f8e:{NFSU2_TR(0x661f8e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x661f63u);}goto L661f63;}}
}
B661f90:L661f90:{c.instructions+=3;NFSU2_TR(0x661f90);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B661f91:{NFSU2_TR(0x661f91);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+28),r4(U+14)));
w4(U+18,u32(u32(r4(R+28))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B661f97:{NFSU2_TR(0x661f97);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x661f48u);}goto L661f48;}}
}
B661f99:L661f99:{c.instructions+=1;NFSU2_TR(0x661f99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B661f9a:L661f9a:{c.instructions+=1;NFSU2_TR(0x661f9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B661f9b:L661f9b:{c.instructions+=4;NFSU2_TR(0x661f9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B661f9e:{NFSU2_TR(0x661f9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B661f9f:{NFSU2_TR(0x661f9f);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B661fa0:{NFSU2_TR(0x661fa0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B661fa3:L661fa3:{c.instructions+=13;NFSU2_TR(0x661fa3);
__builtin_memmove((R+28),(R+28),4);
}
B661fa5:{NFSU2_TR(0x661fa5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661fa6:{NFSU2_TR(0x661fa6);
__builtin_memmove((R+20),(R+16),4);
}
B661fa8:{NFSU2_TR(0x661fa8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B661fab:{NFSU2_TR(0x661fab);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B661fae:{NFSU2_TR(0x661fae);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B661fb1:{NFSU2_TR(0x661fb1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B661fb4:{NFSU2_TR(0x661fb4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661fb5:{NFSU2_TR(0x661fb5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B661fb8:{NFSU2_TR(0x661fb8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661fb9:{NFSU2_TR(0x661fb9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B661fbc:{NFSU2_TR(0x661fbc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661fbd:{NFSU2_TR(0x661fbd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x661fc2ull));
TAIL_STATIC(0x65d92fu,65d);
}
B661fc2:L661fc2:{c.instructions+=2;NFSU2_TR(0x661fc2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B661fc3:{NFSU2_TR(0x661fc3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B661fc6:L661fc6:{c.instructions+=15;NFSU2_TR(0x661fc6);
__builtin_memmove((R+28),(R+28),4);
}
B661fc8:{NFSU2_TR(0x661fc8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661fc9:{NFSU2_TR(0x661fc9);
__builtin_memmove((R+20),(R+16),4);
}
B661fcb:{NFSU2_TR(0x661fcb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B661fce:{NFSU2_TR(0x661fce);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661fcf:{NFSU2_TR(0x661fcf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661fd0:{NFSU2_TR(0x661fd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B661fd3:{NFSU2_TR(0x661fd3);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B661fd7:{NFSU2_TR(0x661fd7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B661fd9:{NFSU2_TR(0x661fd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B661fdc:{NFSU2_TR(0x661fdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B661fdf:{NFSU2_TR(0x661fdf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B661fe0:{NFSU2_TR(0x661fe0);
__builtin_memmove((R+28),(R+4),4);
}
B661fe2:{NFSU2_TR(0x661fe2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B661fe5:{NFSU2_TR(0x661fe5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L661fef;}}
}
B661fe7:L661fe7:{c.instructions+=3;NFSU2_TR(0x661fe7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B661fea:{NFSU2_TR(0x661fea);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x1ull))));
}
B661fed:{NFSU2_TR(0x661fed);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L661ff2;}}
}
B661fef:L661fef:{c.instructions+=2;NFSU2_TR(0x661fef);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B661ff1:{NFSU2_TR(0x661ff1);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B661ff2:L661ff2:{c.instructions+=6;NFSU2_TR(0x661ff2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B661ff5:{NFSU2_TR(0x661ff5);
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
B661ff7:{NFSU2_TR(0x661ff7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B661ff9:{NFSU2_TR(0x661ff9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B661ffc:{NFSU2_TR(0x661ffc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B661fff:{NFSU2_TR(0x661fff);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x662325u,662);}
TAIL_STATIC(0x662005u,662);
}
XIT:NFSU2_TR_EXIT(0x661,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
