#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_413(u8* __restrict R,Cpu& c);
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_458(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_4ae(u8* __restrict R,Cpu& c);
u32 body_4c2(u8* __restrict R,Cpu& c);
u32 body_4d8(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_500(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50e(u8* __restrict R,Cpu& c);
u32 body_517(u8* __restrict R,Cpu& c);
u32 body_51b(u8* __restrict R,Cpu& c);
u32 body_51f(u8* __restrict R,Cpu& c);
u32 body_521(u8* __restrict R,Cpu& c);
u32 body_525(u8* __restrict R,Cpu& c);
u32 body_527(u8* __restrict R,Cpu& c);
u32 body_528(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_52e(u8* __restrict R,Cpu& c);
u32 body_530(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_538(u8* __restrict R,Cpu& c);
u32 body_53b(u8* __restrict R,Cpu& c);
u32 body_540(u8* __restrict R,Cpu& c);
u32 body_541(u8* __restrict R,Cpu& c);
u32 body_543(u8* __restrict R,Cpu& c);
u32 body_547(u8* __restrict R,Cpu& c);
u32 body_54f(u8* __restrict R,Cpu& c);
u32 body_550(u8* __restrict R,Cpu& c);
u32 body_558(u8* __restrict R,Cpu& c);
u32 body_55b(u8* __restrict R,Cpu& c);
u32 body_55c(u8* __restrict R,Cpu& c);
u32 body_55d(u8* __restrict R,Cpu& c);
u32 body_560(u8* __restrict R,Cpu& c);
u32 body_562(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_610(u8* __restrict R,Cpu& c);
u32 body_61b(u8* __restrict R,Cpu& c);
u32 body_631(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x561,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x561,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_561(u8* __restrict R,Cpu& c);
u32 page_561(Cpu& c){return body_561(c.regs.data(),c);}
__attribute__((noinline)) u32 body_561(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x561000:goto L561000;
case 0x561002:goto L561002;
case 0x561005:c.instructions+=3;goto B561005;
case 0x561008:c.instructions+=2;goto B561008;
case 0x56100a:c.instructions+=1;goto B56100a;
case 0x56100c:goto L56100c;
case 0x56100e:c.instructions+=2;goto B56100e;
case 0x561010:c.instructions+=1;goto B561010;
case 0x561012:goto L561012;
case 0x561015:c.instructions+=2;goto B561015;
case 0x561017:c.instructions+=1;goto B561017;
case 0x561019:goto L561019;
case 0x56101b:c.instructions+=1;goto B56101b;
case 0x56101d:goto L56101d;
case 0x56101f:goto L56101f;
case 0x561022:c.instructions+=5;goto B561022;
case 0x561024:c.instructions+=4;goto B561024;
case 0x561027:c.instructions+=3;goto B561027;
case 0x561028:c.instructions+=2;goto B561028;
case 0x56102a:c.instructions+=1;goto B56102a;
case 0x56102c:goto L56102c;
case 0x56102d:c.instructions+=1;goto B56102d;
case 0x561032:goto L561032;
case 0x561035:c.instructions+=2;goto B561035;
case 0x561037:c.instructions+=1;goto B561037;
case 0x561039:goto L561039;
case 0x56103c:c.instructions+=1;goto B56103c;
case 0x56103e:goto L56103e;
case 0x561040:goto L561040;
case 0x561043:c.instructions+=1;goto B561043;
case 0x561045:goto L561045;
case 0x561049:c.instructions+=4;goto B561049;
case 0x56104c:c.instructions+=3;goto B56104c;
case 0x56104d:c.instructions+=2;goto B56104d;
case 0x561051:c.instructions+=1;goto B561051;
case 0x561053:goto L561053;
case 0x561057:c.instructions+=2;goto B561057;
case 0x561058:c.instructions+=1;goto B561058;
case 0x56105a:goto L56105a;
case 0x56105c:goto L56105c;
case 0x56105f:c.instructions+=2;goto B56105f;
case 0x561062:c.instructions+=1;goto B561062;
case 0x561065:goto L561065;
case 0x56106b:c.instructions+=2;goto B56106b;
case 0x56106e:c.instructions+=1;goto B56106e;
case 0x561073:goto L561073;
case 0x561074:c.instructions+=1;goto B561074;
case 0x561079:goto L561079;
case 0x56107c:c.instructions+=3;goto B56107c;
case 0x56107f:c.instructions+=2;goto B56107f;
case 0x561081:c.instructions+=1;goto B561081;
case 0x561083:goto L561083;
case 0x561086:c.instructions+=4;goto B561086;
case 0x561089:c.instructions+=3;goto B561089;
case 0x56108e:c.instructions+=2;goto B56108e;
case 0x561093:c.instructions+=1;goto B561093;
case 0x561098:goto L561098;
case 0x561099:c.instructions+=3;goto B561099;
case 0x56109b:c.instructions+=2;goto B56109b;
case 0x5610a0:c.instructions+=1;goto B5610a0;
case 0x5610a5:goto L5610a5;
case 0x5610a6:c.instructions+=3;goto B5610a6;
case 0x5610a8:c.instructions+=2;goto B5610a8;
case 0x5610ad:c.instructions+=1;goto B5610ad;
case 0x5610b2:goto L5610b2;
case 0x5610b4:c.instructions+=3;goto B5610b4;
case 0x5610b6:c.instructions+=2;goto B5610b6;
case 0x5610bb:c.instructions+=1;goto B5610bb;
case 0x5610c0:goto L5610c0;
case 0x5610c3:c.instructions+=4;goto B5610c3;
case 0x5610c8:c.instructions+=3;goto B5610c8;
case 0x5610cd:c.instructions+=2;goto B5610cd;
case 0x5610d2:c.instructions+=1;goto B5610d2;
case 0x5610d7:goto L5610d7;
case 0x5610da:c.instructions+=6;goto B5610da;
case 0x5610dd:c.instructions+=5;goto B5610dd;
case 0x5610df:c.instructions+=4;goto B5610df;
case 0x5610e1:c.instructions+=3;goto B5610e1;
case 0x5610e2:c.instructions+=2;goto B5610e2;
case 0x5610e4:c.instructions+=1;goto B5610e4;
case 0x5610e9:goto L5610e9;
case 0x5610ec:goto L5610ec;
case 0x5610ee:c.instructions+=2;goto B5610ee;
case 0x5610f0:c.instructions+=1;goto B5610f0;
case 0x5610f3:goto L5610f3;
case 0x5610f7:c.instructions+=7;goto B5610f7;
case 0x5610f8:c.instructions+=6;goto B5610f8;
case 0x5610fc:c.instructions+=5;goto B5610fc;
case 0x5610fe:c.instructions+=4;goto B5610fe;
case 0x5610ff:c.instructions+=3;goto B5610ff;
case 0x561107:c.instructions+=2;goto B561107;
case 0x561108:c.instructions+=1;goto B561108;
case 0x56110a:goto L56110a;
case 0x561110:goto L561110;
case 0x561112:c.instructions+=6;goto B561112;
case 0x561114:c.instructions+=5;goto B561114;
case 0x561117:c.instructions+=4;goto B561117;
case 0x561119:c.instructions+=3;goto B561119;
case 0x56111a:c.instructions+=2;goto B56111a;
case 0x56111d:c.instructions+=1;goto B56111d;
case 0x561122:goto L561122;
case 0x561126:c.instructions+=4;goto B561126;
case 0x56112a:c.instructions+=3;goto B56112a;
case 0x56112d:c.instructions+=2;goto B56112d;
case 0x56112f:c.instructions+=1;goto B56112f;
case 0x561131:goto L561131;
case 0x561135:c.instructions+=3;goto B561135;
case 0x56113c:c.instructions+=2;goto B56113c;
case 0x56113f:c.instructions+=1;goto B56113f;
case 0x561140:goto L561140;
case 0x561141:c.instructions+=7;goto B561141;
case 0x561143:c.instructions+=6;goto B561143;
case 0x561144:c.instructions+=5;goto B561144;
case 0x561145:c.instructions+=4;goto B561145;
case 0x561147:c.instructions+=3;goto B561147;
case 0x56114d:c.instructions+=2;goto B56114d;
case 0x56114f:c.instructions+=1;goto B56114f;
case 0x561155:goto L561155;
case 0x56115b:c.instructions+=6;goto B56115b;
case 0x56115c:c.instructions+=5;goto B56115c;
case 0x56115f:c.instructions+=4;goto B56115f;
case 0x561162:c.instructions+=3;goto B561162;
case 0x561163:c.instructions+=2;goto B561163;
case 0x561166:c.instructions+=1;goto B561166;
case 0x561168:goto L561168;
case 0x56116e:c.instructions+=1;goto B56116e;
case 0x561173:goto L561173;
case 0x561175:goto L561175;
case 0x561178:c.instructions+=1;goto B561178;
case 0x56117a:goto L56117a;
case 0x561180:c.instructions+=1;goto B561180;
case 0x561185:goto L561185;
case 0x56118b:c.instructions+=2;goto B56118b;
case 0x56118e:c.instructions+=1;goto B56118e;
case 0x561194:goto L561194;
case 0x561197:c.instructions+=1;goto B561197;
case 0x561199:goto L561199;
case 0x56119f:c.instructions+=2;goto B56119f;
case 0x5611a1:c.instructions+=1;goto B5611a1;
case 0x5611a6:goto L5611a6;
case 0x5611a8:c.instructions+=1;goto B5611a8;
case 0x5611ad:goto L5611ad;
case 0x5611af:goto L5611af;
case 0x5611b2:c.instructions+=1;goto B5611b2;
case 0x5611b4:goto L5611b4;
case 0x5611ba:c.instructions+=2;goto B5611ba;
case 0x5611bc:c.instructions+=1;goto B5611bc;
case 0x5611c1:goto L5611c1;
case 0x5611c3:c.instructions+=1;goto B5611c3;
case 0x5611c8:goto L5611c8;
case 0x5611cb:c.instructions+=3;goto B5611cb;
case 0x5611d0:c.instructions+=2;goto B5611d0;
case 0x5611d5:c.instructions+=1;goto B5611d5;
case 0x5611da:goto L5611da;
case 0x5611db:c.instructions+=3;goto B5611db;
case 0x5611dd:c.instructions+=2;goto B5611dd;
case 0x5611e2:c.instructions+=1;goto B5611e2;
case 0x5611e7:goto L5611e7;
case 0x5611e8:c.instructions+=3;goto B5611e8;
case 0x5611ea:c.instructions+=2;goto B5611ea;
case 0x5611ef:c.instructions+=1;goto B5611ef;
case 0x5611f4:goto L5611f4;
case 0x5611f6:c.instructions+=3;goto B5611f6;
case 0x5611f8:c.instructions+=2;goto B5611f8;
case 0x5611fd:c.instructions+=1;goto B5611fd;
case 0x561202:goto L561202;
case 0x561205:c.instructions+=4;goto B561205;
case 0x56120a:c.instructions+=3;goto B56120a;
case 0x56120f:c.instructions+=2;goto B56120f;
case 0x561214:c.instructions+=1;goto B561214;
case 0x561219:goto L561219;
case 0x56121b:c.instructions+=2;goto B56121b;
case 0x56121d:c.instructions+=1;goto B56121d;
case 0x561220:goto L561220;
case 0x561226:c.instructions+=3;goto B561226;
case 0x561228:c.instructions+=2;goto B561228;
case 0x56122e:c.instructions+=1;goto B56122e;
case 0x561230:goto L561230;
case 0x561233:c.instructions+=1;goto B561233;
case 0x561235:goto L561235;
case 0x561237:goto L561237;
case 0x56123a:c.instructions+=1;goto B56123a;
case 0x56123c:goto L56123c;
case 0x561242:c.instructions+=2;goto B561242;
case 0x561243:c.instructions+=1;goto B561243;
case 0x561248:goto L561248;
case 0x56124b:c.instructions+=6;goto B56124b;
case 0x56124c:c.instructions+=5;goto B56124c;
case 0x56124d:c.instructions+=4;goto B56124d;
case 0x56124e:c.instructions+=3;goto B56124e;
case 0x561250:c.instructions+=2;goto B561250;
case 0x561251:c.instructions+=1;goto B561251;
case 0x561254:goto L561254;
case 0x561259:goto L561259;
case 0x56125b:c.instructions+=1;goto B56125b;
case 0x56125d:goto L56125d;
case 0x561263:c.instructions+=2;goto B561263;
case 0x561264:c.instructions+=1;goto B561264;
case 0x561269:goto L561269;
case 0x56126c:c.instructions+=6;goto B56126c;
case 0x56126d:c.instructions+=5;goto B56126d;
case 0x56126e:c.instructions+=4;goto B56126e;
case 0x56126f:c.instructions+=3;goto B56126f;
case 0x561271:c.instructions+=2;goto B561271;
case 0x561272:c.instructions+=1;goto B561272;
case 0x561275:goto L561275;
case 0x56127b:c.instructions+=2;goto B56127b;
case 0x56127c:c.instructions+=1;goto B56127c;
case 0x561281:goto L561281;
case 0x561287:c.instructions+=2;goto B561287;
case 0x561288:c.instructions+=1;goto B561288;
case 0x56128d:goto L56128d;
case 0x561290:goto L561290;
case 0x561291:c.instructions+=1;goto B561291;
case 0x561292:goto L561292;
case 0x561293:c.instructions+=3;goto B561293;
case 0x561295:c.instructions+=2;goto B561295;
case 0x561296:c.instructions+=1;goto B561296;
case 0x5612a0:goto L5612a0;
case 0x5612a3:c.instructions+=7;goto B5612a3;
case 0x5612a4:c.instructions+=6;goto B5612a4;
case 0x5612a5:c.instructions+=5;goto B5612a5;
case 0x5612a7:c.instructions+=4;goto B5612a7;
case 0x5612a8:c.instructions+=3;goto B5612a8;
case 0x5612ae:c.instructions+=2;goto B5612ae;
case 0x5612b0:c.instructions+=1;goto B5612b0;
case 0x5612b5:goto L5612b5;
case 0x5612b8:c.instructions+=8;goto B5612b8;
case 0x5612ba:c.instructions+=7;goto B5612ba;
case 0x5612be:c.instructions+=6;goto B5612be;
case 0x5612c1:c.instructions+=5;goto B5612c1;
case 0x5612c7:c.instructions+=4;goto B5612c7;
case 0x5612c9:c.instructions+=3;goto B5612c9;
case 0x5612cb:c.instructions+=2;goto B5612cb;
case 0x5612cf:c.instructions+=1;goto B5612cf;
case 0x5612d5:goto L5612d5;
case 0x5612d7:c.instructions+=1;goto B5612d7;
case 0x5612dc:goto L5612dc;
case 0x5612df:c.instructions+=2;goto B5612df;
case 0x5612e1:c.instructions+=1;goto B5612e1;
case 0x5612e3:goto L5612e3;
case 0x5612e7:c.instructions+=12;goto B5612e7;
case 0x5612ea:c.instructions+=11;goto B5612ea;
case 0x5612ed:c.instructions+=10;goto B5612ed;
case 0x5612f0:c.instructions+=9;goto B5612f0;
case 0x5612f3:c.instructions+=8;goto B5612f3;
case 0x5612f6:c.instructions+=7;goto B5612f6;
case 0x5612f9:c.instructions+=6;goto B5612f9;
case 0x5612fd:c.instructions+=5;goto B5612fd;
case 0x561300:c.instructions+=4;goto B561300;
case 0x561303:c.instructions+=3;goto B561303;
case 0x561309:c.instructions+=2;goto B561309;
case 0x56130c:c.instructions+=1;goto B56130c;
case 0x56130e:goto L56130e;
case 0x561310:goto L561310;
case 0x561312:c.instructions+=4;goto B561312;
case 0x561314:c.instructions+=3;goto B561314;
case 0x561315:c.instructions+=2;goto B561315;
case 0x561317:c.instructions+=1;goto B561317;
case 0x56131c:goto L56131c;
case 0x56131e:c.instructions+=1;goto B56131e;
case 0x561320:goto L561320;
case 0x561323:c.instructions+=3;goto B561323;
case 0x561328:c.instructions+=2;goto B561328;
case 0x56132a:c.instructions+=1;goto B56132a;
case 0x56132c:goto L56132c;
case 0x56132f:c.instructions+=1;goto B56132f;
case 0x561336:goto L561336;
case 0x56133c:c.instructions+=9;goto B56133c;
case 0x561340:c.instructions+=8;goto B561340;
case 0x561344:c.instructions+=7;goto B561344;
case 0x561345:c.instructions+=6;goto B561345;
case 0x56134b:c.instructions+=5;goto B56134b;
case 0x56134d:c.instructions+=4;goto B56134d;
case 0x561350:c.instructions+=3;goto B561350;
case 0x561352:c.instructions+=2;goto B561352;
case 0x561356:c.instructions+=1;goto B561356;
case 0x56135c:goto L56135c;
case 0x561362:c.instructions+=2;goto B561362;
case 0x561364:c.instructions+=1;goto B561364;
case 0x561366:goto L561366;
case 0x56136b:c.instructions+=4;goto B56136b;
case 0x56136c:c.instructions+=3;goto B56136c;
case 0x561371:c.instructions+=2;goto B561371;
case 0x561375:c.instructions+=1;goto B561375;
case 0x56137a:goto L56137a;
case 0x56137e:c.instructions+=1;goto B56137e;
case 0x561380:goto L561380;
case 0x561386:c.instructions+=1;goto B561386;
case 0x56138b:goto L56138b;
case 0x56138c:c.instructions+=1;goto B56138c;
case 0x561391:goto L561391;
case 0x561395:c.instructions+=4;goto B561395;
case 0x561398:c.instructions+=3;goto B561398;
case 0x56139b:c.instructions+=2;goto B56139b;
case 0x56139d:c.instructions+=1;goto B56139d;
case 0x56139f:goto L56139f;
case 0x5613a5:c.instructions+=3;goto B5613a5;
case 0x5613a6:c.instructions+=2;goto B5613a6;
case 0x5613a8:c.instructions+=1;goto B5613a8;
case 0x5613ad:goto L5613ad;
case 0x5613af:c.instructions+=1;goto B5613af;
case 0x5613b1:goto L5613b1;
case 0x5613b4:c.instructions+=2;goto B5613b4;
case 0x5613b6:c.instructions+=1;goto B5613b6;
case 0x5613b8:goto L5613b8;
case 0x5613bb:c.instructions+=1;goto B5613bb;
case 0x5613bd:goto L5613bd;
case 0x5613bf:goto L5613bf;
case 0x5613c0:c.instructions+=2;goto B5613c0;
case 0x5613c2:c.instructions+=1;goto B5613c2;
case 0x5613c7:goto L5613c7;
case 0x5613c8:c.instructions+=2;goto B5613c8;
case 0x5613cb:c.instructions+=1;goto B5613cb;
case 0x5613d0:goto L5613d0;
case 0x5613d2:goto L5613d2;
case 0x5613d5:c.instructions+=2;goto B5613d5;
case 0x5613d7:c.instructions+=1;goto B5613d7;
case 0x5613d9:goto L5613d9;
case 0x5613dc:c.instructions+=1;goto B5613dc;
case 0x5613de:goto L5613de;
case 0x5613e0:goto L5613e0;
case 0x5613e3:c.instructions+=1;goto B5613e3;
case 0x5613e5:goto L5613e5;
case 0x5613e8:c.instructions+=3;goto B5613e8;
case 0x5613eb:c.instructions+=2;goto B5613eb;
case 0x5613ee:c.instructions+=1;goto B5613ee;
case 0x5613f0:goto L5613f0;
case 0x5613f3:c.instructions+=1;goto B5613f3;
case 0x5613f5:goto L5613f5;
case 0x5613f8:goto L5613f8;
case 0x5613fa:c.instructions+=5;goto B5613fa;
case 0x5613fd:c.instructions+=4;goto B5613fd;
case 0x5613ff:c.instructions+=3;goto B5613ff;
case 0x561401:c.instructions+=2;goto B561401;
case 0x561404:c.instructions+=1;goto B561404;
case 0x561406:goto L561406;
case 0x56140c:goto L56140c;
case 0x56140f:c.instructions+=10;goto B56140f;
case 0x561412:c.instructions+=9;goto B561412;
case 0x561415:c.instructions+=8;goto B561415;
case 0x561417:c.instructions+=7;goto B561417;
case 0x56141a:c.instructions+=6;goto B56141a;
case 0x56141e:c.instructions+=5;goto B56141e;
case 0x561421:c.instructions+=4;goto B561421;
case 0x561423:c.instructions+=3;goto B561423;
case 0x561424:c.instructions+=2;goto B561424;
case 0x561426:c.instructions+=1;goto B561426;
case 0x56142b:goto L56142b;
case 0x561431:c.instructions+=5;goto B561431;
case 0x561437:c.instructions+=4;goto B561437;
case 0x56143a:c.instructions+=3;goto B56143a;
case 0x56143f:c.instructions+=2;goto B56143f;
case 0x561444:c.instructions+=1;goto B561444;
case 0x561449:goto L561449;
case 0x56144a:c.instructions+=3;goto B56144a;
case 0x56144c:c.instructions+=2;goto B56144c;
case 0x561451:c.instructions+=1;goto B561451;
case 0x561456:goto L561456;
case 0x561457:c.instructions+=3;goto B561457;
case 0x561459:c.instructions+=2;goto B561459;
case 0x56145e:c.instructions+=1;goto B56145e;
case 0x561463:goto L561463;
case 0x561464:c.instructions+=3;goto B561464;
case 0x561466:c.instructions+=2;goto B561466;
case 0x56146b:c.instructions+=1;goto B56146b;
case 0x561470:goto L561470;
case 0x561473:c.instructions+=4;goto B561473;
case 0x561478:c.instructions+=3;goto B561478;
case 0x56147d:c.instructions+=2;goto B56147d;
case 0x561482:c.instructions+=1;goto B561482;
case 0x561487:goto L561487;
case 0x561488:c.instructions+=4;goto B561488;
case 0x561489:c.instructions+=3;goto B561489;
case 0x56148a:c.instructions+=2;goto B56148a;
case 0x56148c:c.instructions+=1;goto B56148c;
case 0x561491:goto L561491;
case 0x561493:c.instructions+=7;goto B561493;
case 0x561496:c.instructions+=6;goto B561496;
case 0x561497:c.instructions+=5;goto B561497;
case 0x561499:c.instructions+=4;goto B561499;
case 0x56149a:c.instructions+=3;goto B56149a;
case 0x56149b:c.instructions+=2;goto B56149b;
case 0x56149e:c.instructions+=1;goto B56149e;
case 0x5614b0:goto L5614b0;
case 0x5614b1:c.instructions+=7;goto B5614b1;
case 0x5614b2:c.instructions+=6;goto B5614b2;
case 0x5614b3:c.instructions+=5;goto B5614b3;
case 0x5614b4:c.instructions+=4;goto B5614b4;
case 0x5614b6:c.instructions+=3;goto B5614b6;
case 0x5614bc:c.instructions+=2;goto B5614bc;
case 0x5614be:c.instructions+=1;goto B5614be;
case 0x5614c3:goto L5614c3;
case 0x5614c6:c.instructions+=5;goto B5614c6;
case 0x5614cb:c.instructions+=4;goto B5614cb;
case 0x5614cc:c.instructions+=3;goto B5614cc;
case 0x5614d3:c.instructions+=2;goto B5614d3;
case 0x5614da:c.instructions+=1;goto B5614da;
case 0x5614df:goto L5614df;
case 0x5614e2:c.instructions+=4;goto B5614e2;
case 0x5614e4:c.instructions+=3;goto B5614e4;
case 0x5614e7:c.instructions+=2;goto B5614e7;
case 0x5614e9:c.instructions+=1;goto B5614e9;
case 0x5614eb:goto L5614eb;
case 0x5614ec:c.instructions+=1;goto B5614ec;
case 0x5614f1:goto L5614f1;
case 0x5614f4:c.instructions+=2;goto B5614f4;
case 0x5614f6:c.instructions+=1;goto B5614f6;
case 0x5614f8:goto L5614f8;
case 0x5614fd:c.instructions+=2;goto B5614fd;
case 0x5614ff:c.instructions+=1;goto B5614ff;
case 0x561504:goto L561504;
case 0x561506:c.instructions+=1;goto B561506;
case 0x561508:goto L561508;
case 0x56150d:c.instructions+=2;goto B56150d;
case 0x56150f:c.instructions+=1;goto B56150f;
case 0x561511:goto L561511;
case 0x561514:c.instructions+=3;goto B561514;
case 0x561515:c.instructions+=2;goto B561515;
case 0x56151a:c.instructions+=1;goto B56151a;
case 0x56151f:goto L56151f;
case 0x561521:c.instructions+=2;goto B561521;
case 0x561523:c.instructions+=1;goto B561523;
case 0x561525:goto L561525;
case 0x561528:c.instructions+=2;goto B561528;
case 0x56152a:c.instructions+=1;goto B56152a;
case 0x56152c:goto L56152c;
case 0x561530:goto L561530;
case 0x561535:c.instructions+=1;goto B561535;
case 0x56153a:goto L56153a;
case 0x56153d:c.instructions+=3;goto B56153d;
case 0x561540:c.instructions+=2;goto B561540;
case 0x561542:c.instructions+=1;goto B561542;
case 0x561544:goto L561544;
case 0x561547:c.instructions+=2;goto B561547;
case 0x561549:c.instructions+=1;goto B561549;
case 0x56154b:goto L56154b;
case 0x56154d:goto L56154d;
case 0x56154f:c.instructions+=1;goto B56154f;
case 0x561551:goto L561551;
case 0x561554:c.instructions+=1;goto B561554;
case 0x561556:goto L561556;
case 0x561558:c.instructions+=2;goto B561558;
case 0x56155b:c.instructions+=1;goto B56155b;
case 0x561560:goto L561560;
case 0x561563:c.instructions+=1;goto B561563;
case 0x561566:goto L561566;
case 0x561569:goto L561569;
case 0x56156b:c.instructions+=2;goto B56156b;
case 0x56156e:c.instructions+=1;goto B56156e;
case 0x561573:goto L561573;
case 0x561579:c.instructions+=4;goto B561579;
case 0x56157b:c.instructions+=3;goto B56157b;
case 0x56157d:c.instructions+=2;goto B56157d;
case 0x561581:c.instructions+=1;goto B561581;
case 0x561586:goto L561586;
case 0x561589:c.instructions+=3;goto B561589;
case 0x56158e:c.instructions+=2;goto B56158e;
case 0x56158f:c.instructions+=1;goto B56158f;
case 0x561594:goto L561594;
case 0x561597:c.instructions+=3;goto B561597;
case 0x56159c:c.instructions+=2;goto B56159c;
case 0x56159d:c.instructions+=1;goto B56159d;
case 0x5615a2:goto L5615a2;
case 0x5615a5:c.instructions+=3;goto B5615a5;
case 0x5615a8:c.instructions+=2;goto B5615a8;
case 0x5615aa:c.instructions+=1;goto B5615aa;
case 0x5615ac:goto L5615ac;
case 0x5615af:c.instructions+=1;goto B5615af;
case 0x5615b1:goto L5615b1;
case 0x5615b3:goto L5615b3;
case 0x5615b6:c.instructions+=1;goto B5615b6;
case 0x5615b8:goto L5615b8;
case 0x5615be:c.instructions+=2;goto B5615be;
case 0x5615bf:c.instructions+=1;goto B5615bf;
case 0x5615c4:goto L5615c4;
case 0x5615c7:c.instructions+=1;goto B5615c7;
case 0x5615c9:goto L5615c9;
case 0x5615cc:c.instructions+=2;goto B5615cc;
case 0x5615ce:c.instructions+=1;goto B5615ce;
case 0x5615d0:goto L5615d0;
case 0x5615d3:c.instructions+=1;goto B5615d3;
case 0x5615d5:goto L5615d5;
case 0x5615d7:goto L5615d7;
case 0x5615da:c.instructions+=1;goto B5615da;
case 0x5615dc:goto L5615dc;
case 0x5615e2:c.instructions+=2;goto B5615e2;
case 0x5615e3:c.instructions+=1;goto B5615e3;
case 0x5615e8:goto L5615e8;
case 0x5615eb:c.instructions+=1;goto B5615eb;
case 0x5615ed:goto L5615ed;
case 0x5615f3:c.instructions+=2;goto B5615f3;
case 0x5615f4:c.instructions+=1;goto B5615f4;
case 0x5615f9:goto L5615f9;
case 0x5615ff:c.instructions+=2;goto B5615ff;
case 0x561600:c.instructions+=1;goto B561600;
case 0x561605:goto L561605;
case 0x561608:goto L561608;
case 0x56160b:c.instructions+=2;goto B56160b;
case 0x56160d:c.instructions+=1;goto B56160d;
case 0x56160f:goto L56160f;
case 0x561610:c.instructions+=1;goto B561610;
case 0x561615:goto L561615;
case 0x561618:c.instructions+=2;goto B561618;
case 0x56161a:c.instructions+=1;goto B56161a;
case 0x56161c:goto L56161c;
case 0x561621:c.instructions+=2;goto B561621;
case 0x561623:c.instructions+=1;goto B561623;
case 0x561628:goto L561628;
case 0x56162a:c.instructions+=1;goto B56162a;
case 0x56162c:goto L56162c;
case 0x561631:c.instructions+=2;goto B561631;
case 0x561633:c.instructions+=1;goto B561633;
case 0x561635:goto L561635;
case 0x561638:c.instructions+=3;goto B561638;
case 0x561639:c.instructions+=2;goto B561639;
case 0x56163e:c.instructions+=1;goto B56163e;
case 0x561643:goto L561643;
case 0x561645:c.instructions+=2;goto B561645;
case 0x561647:c.instructions+=1;goto B561647;
case 0x561649:goto L561649;
case 0x56164c:c.instructions+=2;goto B56164c;
case 0x56164e:c.instructions+=1;goto B56164e;
case 0x561650:goto L561650;
case 0x561655:c.instructions+=1;goto B561655;
case 0x56165a:goto L56165a;
case 0x56165d:c.instructions+=3;goto B56165d;
case 0x561660:c.instructions+=2;goto B561660;
case 0x561662:c.instructions+=1;goto B561662;
case 0x561664:goto L561664;
case 0x561667:c.instructions+=2;goto B561667;
case 0x561669:c.instructions+=1;goto B561669;
case 0x56166b:goto L56166b;
case 0x56166c:c.instructions+=4;goto B56166c;
case 0x56166d:c.instructions+=3;goto B56166d;
case 0x56166e:c.instructions+=2;goto B56166e;
case 0x56166f:c.instructions+=1;goto B56166f;
case 0x561670:goto L561670;
case 0x561672:c.instructions+=1;goto B561672;
case 0x561674:goto L561674;
case 0x561677:c.instructions+=1;goto B561677;
case 0x561679:goto L561679;
case 0x56167b:c.instructions+=2;goto B56167b;
case 0x56167e:c.instructions+=1;goto B56167e;
case 0x561683:goto L561683;
case 0x561686:c.instructions+=1;goto B561686;
case 0x561689:goto L561689;
case 0x56168c:goto L56168c;
case 0x56168d:c.instructions+=4;goto B56168d;
case 0x56168e:c.instructions+=3;goto B56168e;
case 0x56168f:c.instructions+=2;goto B56168f;
case 0x561690:c.instructions+=1;goto B561690;
case 0x5616a0:goto L5616a0;
case 0x5616a8:c.instructions+=1;goto B5616a8;
case 0x5616aa:goto L5616aa;
case 0x5616ab:c.instructions+=11;goto B5616ab;
case 0x5616af:c.instructions+=10;goto B5616af;
case 0x5616b4:c.instructions+=9;goto B5616b4;
case 0x5616b6:c.instructions+=8;goto B5616b6;
case 0x5616bb:c.instructions+=7;goto B5616bb;
case 0x5616c0:c.instructions+=6;goto B5616c0;
case 0x5616c5:c.instructions+=5;goto B5616c5;
case 0x5616ca:c.instructions+=4;goto B5616ca;
case 0x5616cf:c.instructions+=3;goto B5616cf;
case 0x5616d4:c.instructions+=2;goto B5616d4;
case 0x5616d5:c.instructions+=1;goto B5616d5;
case 0x5616da:goto L5616da;
case 0x5616dd:c.instructions+=4;goto B5616dd;
case 0x5616de:c.instructions+=3;goto B5616de;
case 0x5616e3:c.instructions+=2;goto B5616e3;
case 0x5616ed:c.instructions+=1;goto B5616ed;
case 0x5616f2:goto L5616f2;
case 0x5616f4:c.instructions+=2;goto B5616f4;
case 0x5616f5:c.instructions+=1;goto B5616f5;
case 0x5616f7:goto L5616f7;
case 0x5616fa:c.instructions+=2;goto B5616fa;
case 0x5616fc:c.instructions+=1;goto B5616fc;
case 0x5616fe:goto L5616fe;
case 0x561701:c.instructions+=2;goto B561701;
case 0x561703:c.instructions+=1;goto B561703;
case 0x561705:goto L561705;
case 0x561706:c.instructions+=5;goto B561706;
case 0x561708:c.instructions+=4;goto B561708;
case 0x56170a:c.instructions+=3;goto B56170a;
case 0x56170f:c.instructions+=2;goto B56170f;
case 0x561711:c.instructions+=1;goto B561711;
case 0x561716:goto L561716;
case 0x561720:goto L561720;
case 0x561721:c.instructions+=8;goto B561721;
case 0x561723:c.instructions+=7;goto B561723;
case 0x561724:c.instructions+=6;goto B561724;
case 0x561726:c.instructions+=5;goto B561726;
case 0x56172c:c.instructions+=4;goto B56172c;
case 0x56172e:c.instructions+=3;goto B56172e;
case 0x56172f:c.instructions+=2;goto B56172f;
case 0x561732:c.instructions+=1;goto B561732;
case 0x561734:goto L561734;
case 0x56173a:c.instructions+=1;goto B56173a;
case 0x561740:goto L561740;
case 0x561746:c.instructions+=1;goto B561746;
case 0x56174c:goto L56174c;
case 0x56174f:c.instructions+=8;goto B56174f;
case 0x561752:c.instructions+=7;goto B561752;
case 0x561755:c.instructions+=6;goto B561755;
case 0x561756:c.instructions+=5;goto B561756;
case 0x561757:c.instructions+=4;goto B561757;
case 0x561758:c.instructions+=3;goto B561758;
case 0x561759:c.instructions+=2;goto B561759;
case 0x56175b:c.instructions+=1;goto B56175b;
case 0x561760:goto L561760;
case 0x561766:c.instructions+=1;goto B561766;
case 0x56176c:goto L56176c;
case 0x56176e:goto L56176e;
case 0x561774:c.instructions+=1;goto B561774;
case 0x561776:goto L561776;
case 0x56177c:c.instructions+=1;goto B56177c;
case 0x561782:goto L561782;
case 0x561787:c.instructions+=2;goto B561787;
case 0x56178e:c.instructions+=1;goto B56178e;
case 0x561793:goto L561793;
case 0x561794:c.instructions+=3;goto B561794;
case 0x561795:c.instructions+=2;goto B561795;
case 0x561796:c.instructions+=1;goto B561796;
case 0x561799:goto L561799;
case 0x56179b:c.instructions+=2;goto B56179b;
case 0x5617a2:c.instructions+=1;goto B5617a2;
case 0x5617a7:goto L5617a7;
case 0x5617a8:c.instructions+=3;goto B5617a8;
case 0x5617a9:c.instructions+=2;goto B5617a9;
case 0x5617aa:c.instructions+=1;goto B5617aa;
case 0x5617ad:goto L5617ad;
case 0x5617b0:c.instructions+=11;goto B5617b0;
case 0x5617b5:c.instructions+=10;goto B5617b5;
case 0x5617b7:c.instructions+=9;goto B5617b7;
case 0x5617bc:c.instructions+=8;goto B5617bc;
case 0x5617c1:c.instructions+=7;goto B5617c1;
case 0x5617c6:c.instructions+=6;goto B5617c6;
case 0x5617cb:c.instructions+=5;goto B5617cb;
case 0x5617d0:c.instructions+=4;goto B5617d0;
case 0x5617d5:c.instructions+=3;goto B5617d5;
case 0x5617d6:c.instructions+=2;goto B5617d6;
case 0x5617dd:c.instructions+=1;goto B5617dd;
case 0x5617e2:goto L5617e2;
case 0x5617e5:c.instructions+=3;goto B5617e5;
case 0x5617e7:c.instructions+=2;goto B5617e7;
case 0x5617f1:c.instructions+=1;goto B5617f1;
case 0x5617f6:goto L5617f6;
case 0x5617f7:c.instructions+=3;goto B5617f7;
case 0x5617f8:c.instructions+=2;goto B5617f8;
case 0x5617f9:c.instructions+=1;goto B5617f9;
case 0x5617fc:goto L5617fc;
case 0x561802:c.instructions+=1;goto B561802;
case 0x561804:goto L561804;
case 0x56180a:c.instructions+=1;goto B56180a;
case 0x561810:goto L561810;
case 0x561816:c.instructions+=2;goto B561816;
case 0x561818:c.instructions+=1;goto B561818;
case 0x56181a:goto L56181a;
case 0x56181d:c.instructions+=4;goto B56181d;
case 0x561820:c.instructions+=3;goto B561820;
case 0x561821:c.instructions+=2;goto B561821;
case 0x561826:c.instructions+=1;goto B561826;
case 0x56182b:goto L56182b;
case 0x561830:c.instructions+=1;goto B561830;
case 0x561835:goto L561835;
case 0x561837:goto L561837;
case 0x56183a:c.instructions+=6;goto B56183a;
case 0x56183d:c.instructions+=5;goto B56183d;
case 0x561840:c.instructions+=4;goto B561840;
case 0x561841:c.instructions+=3;goto B561841;
case 0x561842:c.instructions+=2;goto B561842;
case 0x561847:c.instructions+=1;goto B561847;
case 0x56184c:goto L56184c;
case 0x56184f:c.instructions+=6;goto B56184f;
case 0x561852:c.instructions+=5;goto B561852;
case 0x561855:c.instructions+=4;goto B561855;
case 0x561856:c.instructions+=3;goto B561856;
case 0x561857:c.instructions+=2;goto B561857;
case 0x56185c:c.instructions+=1;goto B56185c;
case 0x561861:goto L561861;
case 0x561866:c.instructions+=1;goto B561866;
case 0x56186b:goto L56186b;
case 0x561870:c.instructions+=1;goto B561870;
case 0x561875:goto L561875;
case 0x561876:c.instructions+=4;goto B561876;
case 0x56187d:c.instructions+=3;goto B56187d;
case 0x56187e:c.instructions+=2;goto B56187e;
case 0x56187f:c.instructions+=1;goto B56187f;
case 0x561882:goto L561882;
case 0x561888:c.instructions+=2;goto B561888;
case 0x56188a:c.instructions+=1;goto B56188a;
case 0x56188c:goto L56188c;
case 0x561891:c.instructions+=1;goto B561891;
case 0x561896:goto L561896;
case 0x56189b:goto L56189b;
case 0x56189c:c.instructions+=3;goto B56189c;
case 0x56189d:c.instructions+=2;goto B56189d;
case 0x56189e:c.instructions+=1;goto B56189e;
case 0x5618b0:goto L5618b0;
case 0x5618b1:c.instructions+=7;goto B5618b1;
case 0x5618b2:c.instructions+=6;goto B5618b2;
case 0x5618b4:c.instructions+=5;goto B5618b4;
case 0x5618b7:c.instructions+=4;goto B5618b7;
case 0x5618bc:c.instructions+=3;goto B5618bc;
case 0x5618c1:c.instructions+=2;goto B5618c1;
case 0x5618c2:c.instructions+=1;goto B5618c2;
case 0x5618c7:goto L5618c7;
case 0x5618ca:c.instructions+=4;goto B5618ca;
case 0x5618cd:c.instructions+=3;goto B5618cd;
case 0x5618d0:c.instructions+=2;goto B5618d0;
case 0x5618d2:c.instructions+=1;goto B5618d2;
case 0x5618d8:goto L5618d8;
case 0x5618de:c.instructions+=2;goto B5618de;
case 0x5618e0:c.instructions+=1;goto B5618e0;
case 0x5618e2:goto L5618e2;
case 0x5618e5:c.instructions+=5;goto B5618e5;
case 0x5618e8:c.instructions+=4;goto B5618e8;
case 0x5618ee:c.instructions+=3;goto B5618ee;
case 0x5618ef:c.instructions+=2;goto B5618ef;
case 0x5618f0:c.instructions+=1;goto B5618f0;
case 0x5618f5:goto L5618f5;
case 0x5618f8:c.instructions+=5;goto B5618f8;
case 0x5618fb:c.instructions+=4;goto B5618fb;
case 0x5618fe:c.instructions+=3;goto B5618fe;
case 0x5618ff:c.instructions+=2;goto B5618ff;
case 0x561904:c.instructions+=1;goto B561904;
case 0x561909:goto L561909;
case 0x56190a:c.instructions+=2;goto B56190a;
case 0x56190b:c.instructions+=1;goto B56190b;
case 0x56190c:goto L56190c;
case 0x56190f:c.instructions+=4;goto B56190f;
case 0x561910:c.instructions+=3;goto B561910;
case 0x561913:c.instructions+=2;goto B561913;
case 0x561915:c.instructions+=1;goto B561915;
case 0x56191b:goto L56191b;
case 0x56191f:c.instructions+=3;goto B56191f;
case 0x561920:c.instructions+=2;goto B561920;
case 0x561922:c.instructions+=1;goto B561922;
case 0x561928:goto L561928;
case 0x56192a:c.instructions+=2;goto B56192a;
case 0x56192f:c.instructions+=1;goto B56192f;
case 0x561934:goto L561934;
case 0x561935:c.instructions+=2;goto B561935;
case 0x56193a:c.instructions+=1;goto B56193a;
case 0x56193f:goto L56193f;
case 0x561944:c.instructions+=3;goto B561944;
case 0x561946:c.instructions+=2;goto B561946;
case 0x561948:c.instructions+=1;goto B561948;
case 0x56194d:goto L56194d;
case 0x56194f:c.instructions+=3;goto B56194f;
case 0x561951:c.instructions+=2;goto B561951;
case 0x561953:c.instructions+=1;goto B561953;
case 0x561955:goto L561955;
case 0x56195a:c.instructions+=1;goto B56195a;
case 0x56195f:goto L56195f;
case 0x561960:c.instructions+=1;goto B561960;
case 0x561965:goto L561965;
case 0x561968:c.instructions+=5;goto B561968;
case 0x56196a:c.instructions+=4;goto B56196a;
case 0x56196f:c.instructions+=3;goto B56196f;
case 0x561971:c.instructions+=2;goto B561971;
case 0x561975:c.instructions+=1;goto B561975;
case 0x56197a:goto L56197a;
case 0x56197e:c.instructions+=8;goto B56197e;
case 0x561984:c.instructions+=7;goto B561984;
case 0x561987:c.instructions+=6;goto B561987;
case 0x561988:c.instructions+=5;goto B561988;
case 0x561989:c.instructions+=4;goto B561989;
case 0x56198a:c.instructions+=3;goto B56198a;
case 0x56198f:c.instructions+=2;goto B56198f;
case 0x561990:c.instructions+=1;goto B561990;
case 0x561995:goto L561995;
case 0x561998:c.instructions+=1;goto B561998;
case 0x56199d:goto L56199d;
case 0x5619a2:c.instructions+=1;goto B5619a2;
case 0x5619a7:goto L5619a7;
case 0x5619aa:c.instructions+=3;goto B5619aa;
case 0x5619ab:c.instructions+=2;goto B5619ab;
case 0x5619ad:c.instructions+=1;goto B5619ad;
case 0x5619b2:goto L5619b2;
case 0x5619b8:c.instructions+=5;goto B5619b8;
case 0x5619b9:c.instructions+=4;goto B5619b9;
case 0x5619ba:c.instructions+=3;goto B5619ba;
case 0x5619bf:c.instructions+=2;goto B5619bf;
case 0x5619c0:c.instructions+=1;goto B5619c0;
case 0x5619c5:goto L5619c5;
case 0x5619c8:c.instructions+=1;goto B5619c8;
case 0x5619ca:goto L5619ca;
case 0x5619cf:c.instructions+=1;goto B5619cf;
case 0x5619d4:goto L5619d4;
case 0x5619d6:c.instructions+=2;goto B5619d6;
case 0x5619d8:c.instructions+=1;goto B5619d8;
case 0x5619da:goto L5619da;
case 0x5619dc:c.instructions+=2;goto B5619dc;
case 0x5619e1:c.instructions+=1;goto B5619e1;
case 0x5619e6:goto L5619e6;
case 0x5619e7:c.instructions+=1;goto B5619e7;
case 0x5619ec:goto L5619ec;
case 0x5619f2:c.instructions+=4;goto B5619f2;
case 0x5619f3:c.instructions+=3;goto B5619f3;
case 0x5619f8:c.instructions+=2;goto B5619f8;
case 0x5619f9:c.instructions+=1;goto B5619f9;
case 0x5619fe:goto L5619fe;
case 0x561a01:c.instructions+=1;goto B561a01;
case 0x561a03:goto L561a03;
case 0x561a08:goto L561a08;
case 0x561a09:c.instructions+=4;goto B561a09;
case 0x561a0f:c.instructions+=3;goto B561a0f;
case 0x561a14:c.instructions+=2;goto B561a14;
case 0x561a15:c.instructions+=1;goto B561a15;
case 0x561a1a:goto L561a1a;
case 0x561a1d:goto L561a1d;
case 0x561a20:c.instructions+=6;goto B561a20;
case 0x561a23:c.instructions+=5;goto B561a23;
case 0x561a26:c.instructions+=4;goto B561a26;
case 0x561a27:c.instructions+=3;goto B561a27;
case 0x561a28:c.instructions+=2;goto B561a28;
case 0x561a2d:c.instructions+=1;goto B561a2d;
case 0x561a32:goto L561a32;
case 0x561a33:goto L561a33;
case 0x561a34:goto L561a34;
case 0x561a35:c.instructions+=2;goto B561a35;
case 0x561a36:c.instructions+=1;goto B561a36;
case 0x561a40:goto L561a40;
case 0x561a44:c.instructions+=6;goto B561a44;
case 0x561a47:c.instructions+=5;goto B561a47;
case 0x561a48:c.instructions+=4;goto B561a48;
case 0x561a49:c.instructions+=3;goto B561a49;
case 0x561a4a:c.instructions+=2;goto B561a4a;
case 0x561a4c:c.instructions+=1;goto B561a4c;
case 0x561a4e:goto L561a4e;
case 0x561a4f:c.instructions+=1;goto B561a4f;
case 0x561a51:goto L561a51;
case 0x561a52:c.instructions+=1;goto B561a52;
case 0x561a54:goto L561a54;
case 0x561a57:c.instructions+=3;goto B561a57;
case 0x561a5a:c.instructions+=2;goto B561a5a;
case 0x561a5c:c.instructions+=1;goto B561a5c;
case 0x561a5e:goto L561a5e;
case 0x561a60:goto L561a60;
case 0x561a62:c.instructions+=1;goto B561a62;
case 0x561a64:goto L561a64;
case 0x561a67:c.instructions+=2;goto B561a67;
case 0x561a6a:c.instructions+=1;goto B561a6a;
case 0x561a6c:goto L561a6c;
case 0x561a6f:c.instructions+=1;goto B561a6f;
case 0x561a71:goto L561a71;
case 0x561a74:c.instructions+=1;goto B561a74;
case 0x561a76:goto L561a76;
case 0x561a78:c.instructions+=1;goto B561a78;
case 0x561a7a:goto L561a7a;
case 0x561a7c:c.instructions+=7;goto B561a7c;
case 0x561a7e:c.instructions+=6;goto B561a7e;
case 0x561a81:c.instructions+=5;goto B561a81;
case 0x561a83:c.instructions+=4;goto B561a83;
case 0x561a85:c.instructions+=3;goto B561a85;
case 0x561a86:c.instructions+=2;goto B561a86;
case 0x561a89:c.instructions+=1;goto B561a89;
case 0x561a8e:goto L561a8e;
case 0x561a91:goto L561a91;
case 0x561a93:c.instructions+=1;goto B561a93;
case 0x561a95:goto L561a95;
case 0x561a97:c.instructions+=1;goto B561a97;
case 0x561a9c:goto L561a9c;
case 0x561a9d:c.instructions+=3;goto B561a9d;
case 0x561a9e:c.instructions+=2;goto B561a9e;
case 0x561a9f:c.instructions+=1;goto B561a9f;
case 0x561aa2:goto L561aa2;
case 0x561aa4:c.instructions+=1;goto B561aa4;
case 0x561aa9:goto L561aa9;
case 0x561aab:c.instructions+=1;goto B561aab;
case 0x561ab0:goto L561ab0;
case 0x561ab1:c.instructions+=3;goto B561ab1;
case 0x561ab2:c.instructions+=2;goto B561ab2;
case 0x561ab3:c.instructions+=1;goto B561ab3;
case 0x561ab6:goto L561ab6;
case 0x561ab8:c.instructions+=1;goto B561ab8;
case 0x561abd:goto L561abd;
case 0x561abf:c.instructions+=1;goto B561abf;
case 0x561ac4:goto L561ac4;
case 0x561ac5:c.instructions+=3;goto B561ac5;
case 0x561ac6:c.instructions+=2;goto B561ac6;
case 0x561ac7:c.instructions+=1;goto B561ac7;
case 0x561ad0:goto L561ad0;
case 0x561ad1:c.instructions+=16;goto B561ad1;
case 0x561ad3:c.instructions+=15;goto B561ad3;
case 0x561ad6:c.instructions+=14;goto B561ad6;
case 0x561ad8:c.instructions+=13;goto B561ad8;
case 0x561add:c.instructions+=12;goto B561add;
case 0x561ae3:c.instructions+=11;goto B561ae3;
case 0x561ae4:c.instructions+=10;goto B561ae4;
case 0x561aeb:c.instructions+=9;goto B561aeb;
case 0x561aee:c.instructions+=8;goto B561aee;
case 0x561af1:c.instructions+=7;goto B561af1;
case 0x561af4:c.instructions+=6;goto B561af4;
case 0x561af5:c.instructions+=5;goto B561af5;
case 0x561af6:c.instructions+=4;goto B561af6;
case 0x561af8:c.instructions+=3;goto B561af8;
case 0x561af9:c.instructions+=2;goto B561af9;
case 0x561afd:c.instructions+=1;goto B561afd;
case 0x561b03:goto L561b03;
case 0x561b06:c.instructions+=1;goto B561b06;
case 0x561b0c:goto L561b0c;
case 0x561b0f:c.instructions+=2;goto B561b0f;
case 0x561b12:c.instructions+=1;goto B561b12;
case 0x561b18:goto L561b18;
case 0x561b1b:c.instructions+=1;goto B561b1b;
case 0x561b21:goto L561b21;
case 0x561b25:c.instructions+=9;goto B561b25;
case 0x561b29:c.instructions+=8;goto B561b29;
case 0x561b2d:c.instructions+=7;goto B561b2d;
case 0x561b31:c.instructions+=6;goto B561b31;
case 0x561b32:c.instructions+=5;goto B561b32;
case 0x561b36:c.instructions+=4;goto B561b36;
case 0x561b37:c.instructions+=3;goto B561b37;
case 0x561b39:c.instructions+=2;goto B561b39;
case 0x561b41:c.instructions+=1;goto B561b41;
case 0x561b46:goto L561b46;
case 0x561b4a:c.instructions+=3;goto B561b4a;
case 0x561b4e:c.instructions+=2;goto B561b4e;
case 0x561b50:c.instructions+=1;goto B561b50;
case 0x561b56:goto L561b56;
case 0x561b5a:c.instructions+=9;goto B561b5a;
case 0x561b5e:c.instructions+=8;goto B561b5e;
case 0x561b62:c.instructions+=7;goto B561b62;
case 0x561b66:c.instructions+=6;goto B561b66;
case 0x561b67:c.instructions+=5;goto B561b67;
case 0x561b6b:c.instructions+=4;goto B561b6b;
case 0x561b6c:c.instructions+=3;goto B561b6c;
case 0x561b6e:c.instructions+=2;goto B561b6e;
case 0x561b73:c.instructions+=1;goto B561b73;
case 0x561b78:goto L561b78;
case 0x561b7c:c.instructions+=2;goto B561b7c;
case 0x561b80:c.instructions+=1;goto B561b80;
case 0x561b85:goto L561b85;
case 0x561b87:c.instructions+=3;goto B561b87;
case 0x561b89:c.instructions+=2;goto B561b89;
case 0x561b8b:c.instructions+=1;goto B561b8b;
case 0x561b8d:goto L561b8d;
case 0x561b90:goto L561b90;
case 0x561b93:c.instructions+=2;goto B561b93;
case 0x561b96:c.instructions+=1;goto B561b96;
case 0x561b98:goto L561b98;
case 0x561b9b:c.instructions+=1;goto B561b9b;
case 0x561b9d:goto L561b9d;
case 0x561ba0:c.instructions+=1;goto B561ba0;
case 0x561ba2:goto L561ba2;
case 0x561ba5:c.instructions+=1;goto B561ba5;
case 0x561ba7:goto L561ba7;
case 0x561baa:c.instructions+=1;goto B561baa;
case 0x561bac:goto L561bac;
case 0x561bb0:c.instructions+=3;goto B561bb0;
case 0x561bb1:c.instructions+=2;goto B561bb1;
case 0x561bb2:c.instructions+=1;goto B561bb2;
case 0x561bb7:goto L561bb7;
case 0x561bba:goto L561bba;
case 0x561bbc:c.instructions+=2;goto B561bbc;
case 0x561bbe:c.instructions+=1;goto B561bbe;
case 0x561bc0:goto L561bc0;
case 0x561bc4:c.instructions+=3;goto B561bc4;
case 0x561bc8:c.instructions+=2;goto B561bc8;
case 0x561bca:c.instructions+=1;goto B561bca;
case 0x561bcf:goto L561bcf;
case 0x561bd1:c.instructions+=2;goto B561bd1;
case 0x561bd3:c.instructions+=1;goto B561bd3;
case 0x561bd5:goto L561bd5;
case 0x561bd8:c.instructions+=2;goto B561bd8;
case 0x561bdb:c.instructions+=1;goto B561bdb;
case 0x561bdd:goto L561bdd;
case 0x561be0:c.instructions+=1;goto B561be0;
case 0x561be2:goto L561be2;
case 0x561be5:c.instructions+=2;goto B561be5;
case 0x561be8:c.instructions+=1;goto B561be8;
case 0x561bea:goto L561bea;
case 0x561bed:c.instructions+=1;goto B561bed;
case 0x561bef:goto L561bef;
case 0x561bf2:c.instructions+=1;goto B561bf2;
case 0x561bf4:goto L561bf4;
case 0x561bf7:c.instructions+=4;goto B561bf7;
case 0x561bf8:c.instructions+=3;goto B561bf8;
case 0x561bfc:c.instructions+=2;goto B561bfc;
case 0x561bfd:c.instructions+=1;goto B561bfd;
case 0x561c02:goto L561c02;
case 0x561c05:goto L561c05;
case 0x561c09:goto L561c09;
case 0x561c0b:c.instructions+=2;goto B561c0b;
case 0x561c0d:c.instructions+=1;goto B561c0d;
case 0x561c0f:goto L561c0f;
case 0x561c13:c.instructions+=4;goto B561c13;
case 0x561c17:c.instructions+=3;goto B561c17;
case 0x561c1b:c.instructions+=2;goto B561c1b;
case 0x561c1d:c.instructions+=1;goto B561c1d;
case 0x561c1f:goto L561c1f;
case 0x561c22:goto L561c22;
case 0x561c24:c.instructions+=13;goto B561c24;
case 0x561c27:c.instructions+=12;goto B561c27;
case 0x561c29:c.instructions+=11;goto B561c29;
case 0x561c2c:c.instructions+=10;goto B561c2c;
case 0x561c2f:c.instructions+=9;goto B561c2f;
case 0x561c32:c.instructions+=8;goto B561c32;
case 0x561c34:c.instructions+=7;goto B561c34;
case 0x561c37:c.instructions+=6;goto B561c37;
case 0x561c39:c.instructions+=5;goto B561c39;
case 0x561c3b:c.instructions+=4;goto B561c3b;
case 0x561c3f:c.instructions+=3;goto B561c3f;
case 0x561c43:c.instructions+=2;goto B561c43;
case 0x561c45:c.instructions+=1;goto B561c45;
case 0x561c47:goto L561c47;
case 0x561c4b:goto L561c4b;
case 0x561c4f:c.instructions+=2;goto B561c4f;
case 0x561c51:c.instructions+=1;goto B561c51;
case 0x561c53:goto L561c53;
case 0x561c56:goto L561c56;
case 0x561c58:c.instructions+=14;goto B561c58;
case 0x561c5b:c.instructions+=13;goto B561c5b;
case 0x561c5d:c.instructions+=12;goto B561c5d;
case 0x561c60:c.instructions+=11;goto B561c60;
case 0x561c62:c.instructions+=10;goto B561c62;
case 0x561c65:c.instructions+=9;goto B561c65;
case 0x561c68:c.instructions+=8;goto B561c68;
case 0x561c6a:c.instructions+=7;goto B561c6a;
case 0x561c6d:c.instructions+=6;goto B561c6d;
case 0x561c6f:c.instructions+=5;goto B561c6f;
case 0x561c71:c.instructions+=4;goto B561c71;
case 0x561c75:c.instructions+=3;goto B561c75;
case 0x561c79:c.instructions+=2;goto B561c79;
case 0x561c7b:c.instructions+=1;goto B561c7b;
case 0x561c7d:goto L561c7d;
case 0x561c7f:c.instructions+=1;goto B561c7f;
case 0x561c84:goto L561c84;
case 0x561c88:c.instructions+=4;goto B561c88;
case 0x561c8c:c.instructions+=3;goto B561c8c;
case 0x561c8e:c.instructions+=2;goto B561c8e;
case 0x561c93:c.instructions+=1;goto B561c93;
case 0x561c95:goto L561c95;
case 0x561c97:c.instructions+=6;goto B561c97;
case 0x561c99:c.instructions+=5;goto B561c99;
case 0x561c9c:c.instructions+=4;goto B561c9c;
case 0x561c9e:c.instructions+=3;goto B561c9e;
case 0x561c9f:c.instructions+=2;goto B561c9f;
case 0x561ca2:c.instructions+=1;goto B561ca2;
case 0x561ca7:goto L561ca7;
case 0x561cab:c.instructions+=4;goto B561cab;
case 0x561caf:c.instructions+=3;goto B561caf;
case 0x561cb2:c.instructions+=2;goto B561cb2;
case 0x561cb4:c.instructions+=1;goto B561cb4;
case 0x561cb6:goto L561cb6;
case 0x561cba:goto L561cba;
case 0x561cbe:c.instructions+=3;goto B561cbe;
case 0x561cc0:c.instructions+=2;goto B561cc0;
case 0x561cc8:c.instructions+=1;goto B561cc8;
case 0x561cca:goto L561cca;
case 0x561cd0:goto L561cd0;
case 0x561cd2:c.instructions+=6;goto B561cd2;
case 0x561cd4:c.instructions+=5;goto B561cd4;
case 0x561cd7:c.instructions+=4;goto B561cd7;
case 0x561cd9:c.instructions+=3;goto B561cd9;
case 0x561cda:c.instructions+=2;goto B561cda;
case 0x561cdd:c.instructions+=1;goto B561cdd;
case 0x561ce2:goto L561ce2;
case 0x561ce6:c.instructions+=4;goto B561ce6;
case 0x561cea:c.instructions+=3;goto B561cea;
case 0x561ced:c.instructions+=2;goto B561ced;
case 0x561cef:c.instructions+=1;goto B561cef;
case 0x561cf1:goto L561cf1;
case 0x561cf5:c.instructions+=7;goto B561cf5;
case 0x561cf6:c.instructions+=6;goto B561cf6;
case 0x561cf7:c.instructions+=5;goto B561cf7;
case 0x561cfe:c.instructions+=4;goto B561cfe;
case 0x561cff:c.instructions+=3;goto B561cff;
case 0x561d01:c.instructions+=2;goto B561d01;
case 0x561d02:c.instructions+=1;goto B561d02;
case 0x561d10:goto L561d10;
case 0x561d11:c.instructions+=8;goto B561d11;
case 0x561d13:c.instructions+=7;goto B561d13;
case 0x561d14:c.instructions+=6;goto B561d14;
case 0x561d15:c.instructions+=5;goto B561d15;
case 0x561d16:c.instructions+=4;goto B561d16;
case 0x561d19:c.instructions+=3;goto B561d19;
case 0x561d1f:c.instructions+=2;goto B561d1f;
case 0x561d21:c.instructions+=1;goto B561d21;
case 0x561d23:goto L561d23;
case 0x561d26:c.instructions+=2;goto B561d26;
case 0x561d28:c.instructions+=1;goto B561d28;
case 0x561d2a:goto L561d2a;
case 0x561d2d:c.instructions+=1;goto B561d2d;
case 0x561d2f:goto L561d2f;
case 0x561d31:goto L561d31;
case 0x561d34:c.instructions+=1;goto B561d34;
case 0x561d36:goto L561d36;
case 0x561d39:c.instructions+=2;goto B561d39;
case 0x561d3b:c.instructions+=1;goto B561d3b;
case 0x561d3d:goto L561d3d;
case 0x561d40:c.instructions+=1;goto B561d40;
case 0x561d42:goto L561d42;
case 0x561d44:goto L561d44;
case 0x561d47:c.instructions+=1;goto B561d47;
case 0x561d49:goto L561d49;
case 0x561d50:goto L561d50;
case 0x561d56:c.instructions+=2;goto B561d56;
case 0x561d58:c.instructions+=1;goto B561d58;
case 0x561d5a:goto L561d5a;
case 0x561d5d:c.instructions+=8;goto B561d5d;
case 0x561d60:c.instructions+=7;goto B561d60;
case 0x561d63:c.instructions+=6;goto B561d63;
case 0x561d64:c.instructions+=5;goto B561d64;
case 0x561d65:c.instructions+=4;goto B561d65;
case 0x561d66:c.instructions+=3;goto B561d66;
case 0x561d67:c.instructions+=2;goto B561d67;
case 0x561d69:c.instructions+=1;goto B561d69;
case 0x561d6e:goto L561d6e;
case 0x561d74:c.instructions+=2;goto B561d74;
case 0x561d77:c.instructions+=1;goto B561d77;
case 0x561d7d:goto L561d7d;
case 0x561d83:goto L561d83;
case 0x561d89:c.instructions+=1;goto B561d89;
case 0x561d8f:goto L561d8f;
case 0x561d95:goto L561d95;
case 0x561d9b:c.instructions+=1;goto B561d9b;
case 0x561d9d:goto L561d9d;
case 0x561da3:c.instructions+=1;goto B561da3;
case 0x561da5:goto L561da5;
case 0x561dab:c.instructions+=1;goto B561dab;
case 0x561db1:goto L561db1;
case 0x561db6:c.instructions+=2;goto B561db6;
case 0x561db8:c.instructions+=1;goto B561db8;
case 0x561dbe:goto L561dbe;
case 0x561dc1:c.instructions+=2;goto B561dc1;
case 0x561dc3:c.instructions+=1;goto B561dc3;
case 0x561dc9:goto L561dc9;
case 0x561dcc:c.instructions+=5;goto B561dcc;
case 0x561dce:c.instructions+=4;goto B561dce;
case 0x561dd3:c.instructions+=3;goto B561dd3;
case 0x561dd8:c.instructions+=2;goto B561dd8;
case 0x561dd9:c.instructions+=1;goto B561dd9;
case 0x561dde:goto L561dde;
case 0x561de1:c.instructions+=1;goto B561de1;
case 0x561de6:goto L561de6;
case 0x561de7:c.instructions+=4;goto B561de7;
case 0x561de8:c.instructions+=3;goto B561de8;
case 0x561de9:c.instructions+=2;goto B561de9;
case 0x561dea:c.instructions+=1;goto B561dea;
case 0x561ded:goto L561ded;
case 0x561df2:c.instructions+=2;goto B561df2;
case 0x561df7:c.instructions+=1;goto B561df7;
case 0x561dfc:goto L561dfc;
case 0x561dff:c.instructions+=5;goto B561dff;
case 0x561e00:c.instructions+=4;goto B561e00;
case 0x561e01:c.instructions+=3;goto B561e01;
case 0x561e02:c.instructions+=2;goto B561e02;
case 0x561e03:c.instructions+=1;goto B561e03;
case 0x561e06:goto L561e06;
case 0x561e09:c.instructions+=3;goto B561e09;
case 0x561e0e:c.instructions+=2;goto B561e0e;
case 0x561e10:c.instructions+=1;goto B561e10;
case 0x561e12:goto L561e12;
case 0x561e15:c.instructions+=1;goto B561e15;
case 0x561e17:goto L561e17;
case 0x561e19:goto L561e19;
case 0x561e1e:c.instructions+=1;goto B561e1e;
case 0x561e23:goto L561e23;
case 0x561e26:c.instructions+=2;goto B561e26;
case 0x561e29:c.instructions+=1;goto B561e29;
case 0x561e2b:goto L561e2b;
case 0x561e2e:c.instructions+=1;goto B561e2e;
case 0x561e30:goto L561e30;
case 0x561e32:goto L561e32;
case 0x561e34:c.instructions+=1;goto B561e34;
case 0x561e39:goto L561e39;
case 0x561e3b:c.instructions+=1;goto B561e3b;
case 0x561e3d:goto L561e3d;
case 0x561e42:goto L561e42;
case 0x561e44:c.instructions+=1;goto B561e44;
case 0x561e49:goto L561e49;
case 0x561e4a:c.instructions+=4;goto B561e4a;
case 0x561e4b:c.instructions+=3;goto B561e4b;
case 0x561e4c:c.instructions+=2;goto B561e4c;
case 0x561e4d:c.instructions+=1;goto B561e4d;
case 0x561e50:goto L561e50;
case 0x561e51:c.instructions+=2;goto B561e51;
case 0x561e53:c.instructions+=1;goto B561e53;
case 0x561e58:goto L561e58;
case 0x561e59:c.instructions+=4;goto B561e59;
case 0x561e5a:c.instructions+=3;goto B561e5a;
case 0x561e5b:c.instructions+=2;goto B561e5b;
case 0x561e5c:c.instructions+=1;goto B561e5c;
case 0x561e5f:goto L561e5f;
case 0x561e64:goto L561e64;
case 0x561e6a:c.instructions+=3;goto B561e6a;
case 0x561e6c:c.instructions+=2;goto B561e6c;
case 0x561e73:c.instructions+=1;goto B561e73;
case 0x561e79:goto L561e79;
case 0x561e7b:c.instructions+=1;goto B561e7b;
case 0x561e80:goto L561e80;
case 0x561e81:c.instructions+=4;goto B561e81;
case 0x561e82:c.instructions+=3;goto B561e82;
case 0x561e83:c.instructions+=2;goto B561e83;
case 0x561e84:c.instructions+=1;goto B561e84;
case 0x561e87:goto L561e87;
case 0x561e8d:c.instructions+=1;goto B561e8d;
case 0x561e8f:goto L561e8f;
case 0x561e95:c.instructions+=1;goto B561e95;
case 0x561e97:goto L561e97;
case 0x561e9d:c.instructions+=1;goto B561e9d;
case 0x561ea3:goto L561ea3;
case 0x561ea8:c.instructions+=5;goto B561ea8;
case 0x561eaf:c.instructions+=4;goto B561eaf;
case 0x561eb2:c.instructions+=3;goto B561eb2;
case 0x561eb7:c.instructions+=2;goto B561eb7;
case 0x561eb8:c.instructions+=1;goto B561eb8;
case 0x561ebd:goto L561ebd;
case 0x561ec0:c.instructions+=2;goto B561ec0;
case 0x561ec2:c.instructions+=1;goto B561ec2;
case 0x561ec4:goto L561ec4;
case 0x561ec7:c.instructions+=5;goto B561ec7;
case 0x561ec9:c.instructions+=4;goto B561ec9;
case 0x561ece:c.instructions+=3;goto B561ece;
case 0x561ed3:c.instructions+=2;goto B561ed3;
case 0x561ed4:c.instructions+=1;goto B561ed4;
case 0x561ed9:goto L561ed9;
case 0x561edc:c.instructions+=5;goto B561edc;
case 0x561edd:c.instructions+=4;goto B561edd;
case 0x561ede:c.instructions+=3;goto B561ede;
case 0x561edf:c.instructions+=2;goto B561edf;
case 0x561ee0:c.instructions+=1;goto B561ee0;
case 0x561ee3:goto L561ee3;
case 0x561ee6:c.instructions+=2;goto B561ee6;
case 0x561ee8:c.instructions+=1;goto B561ee8;
case 0x561eee:goto L561eee;
case 0x561ef1:c.instructions+=6;goto B561ef1;
case 0x561ef3:c.instructions+=5;goto B561ef3;
case 0x561ef8:c.instructions+=4;goto B561ef8;
case 0x561efd:c.instructions+=3;goto B561efd;
case 0x561efe:c.instructions+=2;goto B561efe;
case 0x561f05:c.instructions+=1;goto B561f05;
case 0x561f0a:goto L561f0a;
case 0x561f0d:c.instructions+=5;goto B561f0d;
case 0x561f0e:c.instructions+=4;goto B561f0e;
case 0x561f0f:c.instructions+=3;goto B561f0f;
case 0x561f10:c.instructions+=2;goto B561f10;
case 0x561f11:c.instructions+=1;goto B561f11;
case 0x561f14:goto L561f14;
case 0x561f19:goto L561f19;
case 0x561f1b:c.instructions+=2;goto B561f1b;
case 0x561f1d:c.instructions+=1;goto B561f1d;
case 0x561f22:goto L561f22;
case 0x561f23:c.instructions+=4;goto B561f23;
case 0x561f24:c.instructions+=3;goto B561f24;
case 0x561f25:c.instructions+=2;goto B561f25;
case 0x561f26:c.instructions+=1;goto B561f26;
case 0x561f29:goto L561f29;
case 0x561f2c:c.instructions+=4;goto B561f2c;
case 0x561f31:c.instructions+=3;goto B561f31;
case 0x561f36:c.instructions+=2;goto B561f36;
case 0x561f37:c.instructions+=1;goto B561f37;
case 0x561f3c:goto L561f3c;
case 0x561f3f:c.instructions+=2;goto B561f3f;
case 0x561f41:c.instructions+=1;goto B561f41;
case 0x561f47:goto L561f47;
case 0x561f4a:c.instructions+=5;goto B561f4a;
case 0x561f4c:c.instructions+=4;goto B561f4c;
case 0x561f51:c.instructions+=3;goto B561f51;
case 0x561f56:c.instructions+=2;goto B561f56;
case 0x561f57:c.instructions+=1;goto B561f57;
case 0x561f5c:goto L561f5c;
case 0x561f5f:c.instructions+=5;goto B561f5f;
case 0x561f60:c.instructions+=4;goto B561f60;
case 0x561f61:c.instructions+=3;goto B561f61;
case 0x561f62:c.instructions+=2;goto B561f62;
case 0x561f63:c.instructions+=1;goto B561f63;
case 0x561f66:goto L561f66;
case 0x561f6c:c.instructions+=1;goto B561f6c;
case 0x561f6e:goto L561f6e;
case 0x561f70:goto L561f70;
case 0x561f76:c.instructions+=1;goto B561f76;
case 0x561f7c:goto L561f7c;
case 0x561f82:c.instructions+=1;goto B561f82;
case 0x561f88:goto L561f88;
case 0x561f8e:c.instructions+=1;goto B561f8e;
case 0x561f94:goto L561f94;
case 0x561f96:c.instructions+=1;goto B561f96;
case 0x561f9b:goto L561f9b;
case 0x561f9c:c.instructions+=4;goto B561f9c;
case 0x561f9d:c.instructions+=3;goto B561f9d;
case 0x561f9e:c.instructions+=2;goto B561f9e;
case 0x561f9f:c.instructions+=1;goto B561f9f;
case 0x561fa2:goto L561fa2;
case 0x561fa5:c.instructions+=5;goto B561fa5;
case 0x561fa7:c.instructions+=4;goto B561fa7;
case 0x561fac:c.instructions+=3;goto B561fac;
case 0x561fb1:c.instructions+=2;goto B561fb1;
case 0x561fb2:c.instructions+=1;goto B561fb2;
case 0x561fb7:goto L561fb7;
case 0x561fba:c.instructions+=2;goto B561fba;
case 0x561fc1:c.instructions+=1;goto B561fc1;
case 0x561fc6:goto L561fc6;
case 0x561fc7:c.instructions+=4;goto B561fc7;
case 0x561fc8:c.instructions+=3;goto B561fc8;
case 0x561fc9:c.instructions+=2;goto B561fc9;
case 0x561fca:c.instructions+=1;goto B561fca;
case 0x561fcd:goto L561fcd;
case 0x561fce:c.instructions+=5;goto B561fce;
case 0x561fd5:c.instructions+=4;goto B561fd5;
case 0x561fd6:c.instructions+=3;goto B561fd6;
case 0x561fd7:c.instructions+=2;goto B561fd7;
case 0x561fd8:c.instructions+=1;goto B561fd8;
case 0x561fdb:goto L561fdb;
case 0x561fe1:c.instructions+=1;goto B561fe1;
case 0x561fe7:goto L561fe7;
case 0x561fed:c.instructions+=1;goto B561fed;
case 0x561fef:goto L561fef;
case 0x561ff5:c.instructions+=1;goto B561ff5;
case 0x561ffb:goto L561ffb;
default:missing_instruction(c.pc);}
B561000:L561000:{c.instructions+=1;NFSU2_TR(0x561000);
if(r1(R+518)){{goto L561065;}}
}
B561002:L561002:{c.instructions+=4;NFSU2_TR(0x561002);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B561005:{NFSU2_TR(0x561005);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xffffffffull))));
}
B561008:{NFSU2_TR(0x561008);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56100a:{NFSU2_TR(0x56100a);
if(r1(R+518)){{goto L56102c;}}
}
B56100c:L56100c:{c.instructions+=3;NFSU2_TR(0x56100c);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+0),(U+0),1);
}
B56100e:{NFSU2_TR(0x56100e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B561010:{NFSU2_TR(0x561010);
if(r1(R+518)){{goto L56102c;}}
}
B561012:L561012:{c.instructions+=3;NFSU2_TR(0x561012);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x21ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B561015:{NFSU2_TR(0x561015);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x61ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x61ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B561017:{NFSU2_TR(0x561017);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L56101f;}}
}
B561019:L561019:{c.instructions+=2;NFSU2_TR(0x561019);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x7aull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x7aull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56101b:{NFSU2_TR(0x56101b);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L56101f;}}
}
B56101d:L56101d:{c.instructions+=1;NFSU2_TR(0x56101d);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0xe0ull))));
}
B56101f:L56101f:{c.instructions+=6;NFSU2_TR(0x56101f);
w4(R+0,u32(r1(R+0)));
}
B561022:{NFSU2_TR(0x561022);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B561024:{NFSU2_TR(0x561024);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B561027:{NFSU2_TR(0x561027);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B561028:{NFSU2_TR(0x561028);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56102a:{NFSU2_TR(0x56102a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x561012u);}goto L561012;}}
}
B56102c:L56102c:{c.instructions+=2;NFSU2_TR(0x56102c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56102d:{NFSU2_TR(0x56102d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x561032ull));
TAIL_STATIC(0x50b840u,50b);
}
B561032:L561032:{c.instructions+=3;NFSU2_TR(0x561032);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B561035:{NFSU2_TR(0x561035);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B561037:{NFSU2_TR(0x561037);
if(r1(R+518)){{goto L56103e;}}
}
B561039:L561039:{c.instructions+=2;NFSU2_TR(0x561039);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56103c:{NFSU2_TR(0x56103c);
{goto L561040;}
}
B56103e:L56103e:{c.instructions+=1;NFSU2_TR(0x56103e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B561040:L561040:{c.instructions+=2;NFSU2_TR(0x561040);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+0)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B561043:{NFSU2_TR(0x561043);
if(r1(R+518)){{goto L561053;}}
}
B561045:L561045:{c.instructions+=5;NFSU2_TR(0x561045);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B561049:{NFSU2_TR(0x561049);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56104c:{NFSU2_TR(0x56104c);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B56104d:{NFSU2_TR(0x56104d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B561051:{NFSU2_TR(0x561051);
TAIL_STATIC(0x560fe8u,560);
}
B561053:L561053:{c.instructions+=3;NFSU2_TR(0x561053);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B561057:{NFSU2_TR(0x561057);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561058:{NFSU2_TR(0x561058);
{goto L56105c;}
}
B56105a:L56105a:{c.instructions+=1;NFSU2_TR(0x56105a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56105c:L56105c:{c.instructions+=3;NFSU2_TR(0x56105c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56105f:{NFSU2_TR(0x56105f);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B561062:{NFSU2_TR(0x561062);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x561065ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B561065:L561065:{c.instructions+=3;NFSU2_TR(0x561065);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56106b:{NFSU2_TR(0x56106b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B56106e:{NFSU2_TR(0x56106e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x561073ull));
TAIL_STATIC(0x610000u,610);
}
B561073:L561073:{c.instructions+=2;NFSU2_TR(0x561073);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561074:{NFSU2_TR(0x561074);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x561079ull));
TAIL_STATIC(0x43db50u,43d);
}
B561079:L561079:{c.instructions+=4;NFSU2_TR(0x561079);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56107c:{NFSU2_TR(0x56107c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B56107f:{NFSU2_TR(0x56107f);
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
B561081:{NFSU2_TR(0x561081);
if(r1(R+518)){{goto L5610ec;}}
}
B561083:L561083:{c.instructions+=5;NFSU2_TR(0x561083);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B561086:{NFSU2_TR(0x561086);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B561089:{NFSU2_TR(0x561089);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56108e:{NFSU2_TR(0x56108e);
w4(R+4,u32(0x8389d0ull));
}
B561093:{NFSU2_TR(0x561093);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x561098ull));
TAIL_STATIC(0x413440u,413);
}
B561098:L561098:{c.instructions+=4;NFSU2_TR(0x561098);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561099:{NFSU2_TR(0x561099);
u8 U[4];
w4(U+0,u32(0x1dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56109b:{NFSU2_TR(0x56109b);
w4(R+4,u32(0x8389d0ull));
}
B5610a0:{NFSU2_TR(0x5610a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5610a5ull));
TAIL_STATIC(0x631d20u,631);
}
B5610a5:L5610a5:{c.instructions+=4;NFSU2_TR(0x5610a5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5610a6:{NFSU2_TR(0x5610a6);
u8 U[4];
w4(U+0,u32(0x1eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5610a8:{NFSU2_TR(0x5610a8);
w4(R+4,u32(0x8389d0ull));
}
B5610ad:{NFSU2_TR(0x5610ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5610b2ull));
TAIL_STATIC(0x631d20u,631);
}
B5610b2:L5610b2:{c.instructions+=4;NFSU2_TR(0x5610b2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5610b4:{NFSU2_TR(0x5610b4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5610b6:{NFSU2_TR(0x5610b6);
u8 U[4];
w4(U+0,u32(0x8389d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5610bb:{NFSU2_TR(0x5610bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5610c0ull));
TAIL_STATIC(0x4d8ec0u,4d8);
}
B5610c0:L5610c0:{c.instructions+=5;NFSU2_TR(0x5610c0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5610c3:{NFSU2_TR(0x5610c3);
u8 U[4];
w4(U+0,u32(0x8389d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5610c8:{NFSU2_TR(0x5610c8);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5610cd:{NFSU2_TR(0x5610cd);
w4(R+4,u32(0x8637d0ull));
}
B5610d2:{NFSU2_TR(0x5610d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5610d7ull));
TAIL_STATIC(0x55b1a0u,55b);
}
B5610d7:L5610d7:{c.instructions+=7;NFSU2_TR(0x5610d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5610da:{NFSU2_TR(0x5610da);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5610dd:{NFSU2_TR(0x5610dd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5610df:{NFSU2_TR(0x5610df);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5610e1:{NFSU2_TR(0x5610e1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5610e2:{NFSU2_TR(0x5610e2);
u8 U[4];
w4(U+0,u32(0x1dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5610e4:{NFSU2_TR(0x5610e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5610e9ull));
TAIL_STATIC(0x4c2100u,4c2);
}
B5610e9:L5610e9:{c.instructions+=1;NFSU2_TR(0x5610e9);
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
B5610ec:L5610ec:{c.instructions+=3;NFSU2_TR(0x5610ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5610ee:{NFSU2_TR(0x5610ee);
__builtin_memmove((R+4),(R+12),4);
}
B5610f0:{NFSU2_TR(0x5610f0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5610f3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5610f3:L5610f3:{c.instructions+=8;NFSU2_TR(0x5610f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5610f7:{NFSU2_TR(0x5610f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5610f8:{NFSU2_TR(0x5610f8);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5610fc:{NFSU2_TR(0x5610fc);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5610fe:{NFSU2_TR(0x5610fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5610ff:{NFSU2_TR(0x5610ff);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B561107:{NFSU2_TR(0x561107);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B561108:{NFSU2_TR(0x561108);
if(r1(R+518)){{goto L561131;}}
}
B56110a:L56110a:{c.instructions+=1;NFSU2_TR(0x56110a);
__builtin_memmove((R+12),(R+12),4);
}
B561110:L561110:{c.instructions+=7;NFSU2_TR(0x561110);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B561112:{NFSU2_TR(0x561112);
__builtin_memmove((R+8),(R+0),4);
}
B561114:{NFSU2_TR(0x561114);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B561117:{NFSU2_TR(0x561117);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B561119:{NFSU2_TR(0x561119);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56111a:{NFSU2_TR(0x56111a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56111d:{NFSU2_TR(0x56111d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x561122ull));
TAIL_STATIC(0x575630u,575);
}
B561122:L561122:{c.instructions+=5;NFSU2_TR(0x561122);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B561126:{NFSU2_TR(0x561126);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B56112a:{NFSU2_TR(0x56112a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B56112d:{NFSU2_TR(0x56112d);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56112f:{NFSU2_TR(0x56112f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x561110u);}goto L561110;}}
}
B561131:L561131:{c.instructions+=4;NFSU2_TR(0x561131);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B561135:{NFSU2_TR(0x561135);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56113c:{NFSU2_TR(0x56113c);
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
B56113f:{NFSU2_TR(0x56113f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B561140:L561140:{c.instructions+=8;NFSU2_TR(0x561140);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561141:{NFSU2_TR(0x561141);
__builtin_memmove((R+20),(R+16),4);
}
B561143:{NFSU2_TR(0x561143);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561144:{NFSU2_TR(0x561144);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561145:{NFSU2_TR(0x561145);
__builtin_memmove((R+24),(R+4),4);
}
B561147:{NFSU2_TR(0x561147);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x214ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56114d:{NFSU2_TR(0x56114d);
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
B56114f:{NFSU2_TR(0x56114f);
if(r1(R+518)){{goto L561292;}}
}
B561155:L561155:{c.instructions+=7;NFSU2_TR(0x561155);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56115b:{NFSU2_TR(0x56115b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56115c:{NFSU2_TR(0x56115c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B56115f:{NFSU2_TR(0x56115f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B561162:{NFSU2_TR(0x561162);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561163:{NFSU2_TR(0x561163);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B561166:{NFSU2_TR(0x561166);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L561175;}}
}
B561168:L561168:{c.instructions+=2;NFSU2_TR(0x561168);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((R+4),(U+0),4);
}
B56116e:{NFSU2_TR(0x56116e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x561173ull));
TAIL_STATIC(0x495900u,495);
}
B561173:L561173:{c.instructions+=1;NFSU2_TR(0x561173);
{goto L561185;}
}
B561175:L561175:{c.instructions+=2;NFSU2_TR(0x561175);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B561178:{NFSU2_TR(0x561178);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L561185;}}
}
B56117a:L56117a:{c.instructions+=2;NFSU2_TR(0x56117a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((R+4),(U+0),4);
}
B561180:{NFSU2_TR(0x561180);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x561185ull));
TAIL_STATIC(0x4958f0u,495);
}
B561185:L561185:{c.instructions+=3;NFSU2_TR(0x561185);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B56118b:{NFSU2_TR(0x56118b);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+28)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B56118e:{NFSU2_TR(0x56118e);
if(r1(R+518)){{goto L561290;}}
}
B561194:L561194:{c.instructions+=2;NFSU2_TR(0x561194);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B561197:{NFSU2_TR(0x561197);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5611af;}}
}
B561199:L561199:{c.instructions+=3;NFSU2_TR(0x561199);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56119f:{NFSU2_TR(0x56119f);
__builtin_memmove((R+4),(R+12),4);
}
B5611a1:{NFSU2_TR(0x5611a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5611a6ull));
TAIL_STATIC(0x527610u,527);
}
B5611a6:L5611a6:{c.instructions+=2;NFSU2_TR(0x5611a6);
__builtin_memmove((R+4),(R+12),4);
}
B5611a8:{NFSU2_TR(0x5611a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5611adull));
TAIL_STATIC(0x495850u,495);
}
B5611ad:L5611ad:{c.instructions+=1;NFSU2_TR(0x5611ad);
{goto L5611c8;}
}
B5611af:L5611af:{c.instructions+=2;NFSU2_TR(0x5611af);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5611b2:{NFSU2_TR(0x5611b2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5611c8;}}
}
B5611b4:L5611b4:{c.instructions+=3;NFSU2_TR(0x5611b4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5611ba:{NFSU2_TR(0x5611ba);
__builtin_memmove((R+4),(R+12),4);
}
B5611bc:{NFSU2_TR(0x5611bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5611c1ull));
TAIL_STATIC(0x527660u,527);
}
B5611c1:L5611c1:{c.instructions+=2;NFSU2_TR(0x5611c1);
__builtin_memmove((R+4),(R+12),4);
}
B5611c3:{NFSU2_TR(0x5611c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5611c8ull));
TAIL_STATIC(0x495810u,495);
}
B5611c8:L5611c8:{c.instructions+=4;NFSU2_TR(0x5611c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5611cb:{NFSU2_TR(0x5611cb);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5611d0:{NFSU2_TR(0x5611d0);
w4(R+4,u32(0x8389d0ull));
}
B5611d5:{NFSU2_TR(0x5611d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5611daull));
TAIL_STATIC(0x413440u,413);
}
B5611da:L5611da:{c.instructions+=4;NFSU2_TR(0x5611da);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5611db:{NFSU2_TR(0x5611db);
u8 U[4];
w4(U+0,u32(0x1dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5611dd:{NFSU2_TR(0x5611dd);
w4(R+4,u32(0x8389d0ull));
}
B5611e2:{NFSU2_TR(0x5611e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5611e7ull));
TAIL_STATIC(0x631d20u,631);
}
B5611e7:L5611e7:{c.instructions+=4;NFSU2_TR(0x5611e7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5611e8:{NFSU2_TR(0x5611e8);
u8 U[4];
w4(U+0,u32(0x1eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5611ea:{NFSU2_TR(0x5611ea);
w4(R+4,u32(0x8389d0ull));
}
B5611ef:{NFSU2_TR(0x5611ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5611f4ull));
TAIL_STATIC(0x631d20u,631);
}
B5611f4:L5611f4:{c.instructions+=4;NFSU2_TR(0x5611f4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5611f6:{NFSU2_TR(0x5611f6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5611f8:{NFSU2_TR(0x5611f8);
u8 U[4];
w4(U+0,u32(0x8389d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5611fd:{NFSU2_TR(0x5611fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x561202ull));
TAIL_STATIC(0x4d8ec0u,4d8);
}
B561202:L561202:{c.instructions+=5;NFSU2_TR(0x561202);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B561205:{NFSU2_TR(0x561205);
u8 U[4];
w4(U+0,u32(0x8389d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56120a:{NFSU2_TR(0x56120a);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56120f:{NFSU2_TR(0x56120f);
w4(R+4,u32(0x8637d0ull));
}
B561214:{NFSU2_TR(0x561214);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x561219ull));
TAIL_STATIC(0x55b1a0u,55b);
}
B561219:L561219:{c.instructions+=3;NFSU2_TR(0x561219);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B56121b:{NFSU2_TR(0x56121b);
__builtin_memmove((R+4),(R+24),4);
}
B56121d:{NFSU2_TR(0x56121d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x561220ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B561220:L561220:{c.instructions+=4;NFSU2_TR(0x561220);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B561226:{NFSU2_TR(0x561226);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B561228:{NFSU2_TR(0x561228);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((R+4),(U+0),4);
}
B56122e:{NFSU2_TR(0x56122e);
if(r1(R+518)){{goto L561235;}}
}
B561230:L561230:{c.instructions+=2;NFSU2_TR(0x561230);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B561233:{NFSU2_TR(0x561233);
{goto L561237;}
}
B561235:L561235:{c.instructions+=1;NFSU2_TR(0x561235);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B561237:L561237:{c.instructions+=2;NFSU2_TR(0x561237);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B56123a:{NFSU2_TR(0x56123a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L561254;}}
}
B56123c:L56123c:{c.instructions+=3;NFSU2_TR(0x56123c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B561242:{NFSU2_TR(0x561242);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561243:{NFSU2_TR(0x561243);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x561248ull));
TAIL_STATIC(0x50ca00u,50c);
}
B561248:L561248:{c.instructions+=7;NFSU2_TR(0x561248);
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
B56124b:{NFSU2_TR(0x56124b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56124c:{NFSU2_TR(0x56124c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56124d:{NFSU2_TR(0x56124d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56124e:{NFSU2_TR(0x56124e);
__builtin_memmove((R+16),(R+20),4);
}
B561250:{NFSU2_TR(0x561250);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B561251:{NFSU2_TR(0x561251);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B561254:L561254:{c.instructions+=1;NFSU2_TR(0x561254);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x561259ull));
TAIL_STATIC(0x4aebc0u,4ae);
}
B561259:L561259:{c.instructions+=2;NFSU2_TR(0x561259);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56125b:{NFSU2_TR(0x56125b);
if(r1(R+518)){{goto L561275;}}
}
B56125d:L56125d:{c.instructions+=3;NFSU2_TR(0x56125d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x200ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B561263:{NFSU2_TR(0x561263);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561264:{NFSU2_TR(0x561264);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x561269ull));
TAIL_STATIC(0x50ca00u,50c);
}
B561269:L561269:{c.instructions+=7;NFSU2_TR(0x561269);
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
B56126c:{NFSU2_TR(0x56126c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56126d:{NFSU2_TR(0x56126d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56126e:{NFSU2_TR(0x56126e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56126f:{NFSU2_TR(0x56126f);
__builtin_memmove((R+16),(R+20),4);
}
B561271:{NFSU2_TR(0x561271);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B561272:{NFSU2_TR(0x561272);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B561275:L561275:{c.instructions+=3;NFSU2_TR(0x561275);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56127b:{NFSU2_TR(0x56127b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56127c:{NFSU2_TR(0x56127c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x561281ull));
TAIL_STATIC(0x50ca50u,50c);
}
B561281:L561281:{c.instructions+=3;NFSU2_TR(0x561281);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x200ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B561287:{NFSU2_TR(0x561287);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561288:{NFSU2_TR(0x561288);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56128dull));
TAIL_STATIC(0x50ca50u,50c);
}
B56128d:L56128d:{c.instructions+=1;NFSU2_TR(0x56128d);
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
B561290:L561290:{c.instructions+=2;NFSU2_TR(0x561290);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B561291:{NFSU2_TR(0x561291);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B561292:L561292:{c.instructions+=4;NFSU2_TR(0x561292);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B561293:{NFSU2_TR(0x561293);
__builtin_memmove((R+16),(R+20),4);
}
B561295:{NFSU2_TR(0x561295);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B561296:{NFSU2_TR(0x561296);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5612a0:L5612a0:{c.instructions+=8;NFSU2_TR(0x5612a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B5612a3:{NFSU2_TR(0x5612a3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5612a4:{NFSU2_TR(0x5612a4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5612a5:{NFSU2_TR(0x5612a5);
__builtin_memmove((R+24),(R+4),4);
}
B5612a7:{NFSU2_TR(0x5612a7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5612a8:{NFSU2_TR(0x5612a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5612ae:{NFSU2_TR(0x5612ae);
__builtin_memmove((R+4),(R+28),4);
}
B5612b0:{NFSU2_TR(0x5612b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5612b5ull));
TAIL_STATIC(0x5385c0u,538);
}
B5612b5:L5612b5:{c.instructions+=9;NFSU2_TR(0x5612b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5612b8:{NFSU2_TR(0x5612b8);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5612ba:{NFSU2_TR(0x5612ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5612be:{NFSU2_TR(0x5612be);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
}
B5612c1:{NFSU2_TR(0x5612c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x210ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5612c7:{NFSU2_TR(0x5612c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5612c9:{NFSU2_TR(0x5612c9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5612cb:{NFSU2_TR(0x5612cb);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5612cf:{NFSU2_TR(0x5612cf);
if(r1(R+518)){{goto L56135c;}}
}
B5612d5:L5612d5:{c.instructions+=2;NFSU2_TR(0x5612d5);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5612d7:{NFSU2_TR(0x5612d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5612dcull));
TAIL_STATIC(0x575620u,575);
}
B5612dc:L5612dc:{c.instructions+=3;NFSU2_TR(0x5612dc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5612df:{NFSU2_TR(0x5612df);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5612e1:{NFSU2_TR(0x5612e1);
if(r1(R+518)){{goto L56130e;}}
}
B5612e3:L5612e3:{c.instructions+=13;NFSU2_TR(0x5612e3);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5612e7:{NFSU2_TR(0x5612e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5612ea:{NFSU2_TR(0x5612ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5612ed:{NFSU2_TR(0x5612ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5612f0:{NFSU2_TR(0x5612f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5612f3:{NFSU2_TR(0x5612f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5612f6:{NFSU2_TR(0x5612f6);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5612f9:{NFSU2_TR(0x5612f9);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x21ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5612fd:{NFSU2_TR(0x5612fd);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B561300:{NFSU2_TR(0x561300);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x23ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B561303:{NFSU2_TR(0x561303);
u8 U[4];
w4(U+0,u32(0x79afdcull));
s4(u32(r4(R+0)),r4(U+0));
}
B561309:{NFSU2_TR(0x561309);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56130c:{NFSU2_TR(0x56130c);
{goto L561310;}
}
B56130e:L56130e:{c.instructions+=1;NFSU2_TR(0x56130e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B561310:L561310:{c.instructions+=5;NFSU2_TR(0x561310);
u8 U[4];
w4(U+0,u32(0xffffffb4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561312:{NFSU2_TR(0x561312);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561314:{NFSU2_TR(0x561314);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561315:{NFSU2_TR(0x561315);
__builtin_memmove((R+4),(R+28),4);
}
B561317:{NFSU2_TR(0x561317);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56131cull));
TAIL_STATIC(0x52ed80u,52e);
}
B56131c:L56131c:{c.instructions+=2;NFSU2_TR(0x56131c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56131e:{NFSU2_TR(0x56131e);
if(r1(R+518)){{goto L561336;}}
}
B561320:L561320:{c.instructions+=4;NFSU2_TR(0x561320);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B561323:{NFSU2_TR(0x561323);
w4(R+4,u32(0x73c4ec2dull));
}
B561328:{NFSU2_TR(0x561328);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56132a:{NFSU2_TR(0x56132a);
if(r1(R+518)){{goto L561336;}}
}
B56132c:L56132c:{c.instructions+=2;NFSU2_TR(0x56132c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56132f:{NFSU2_TR(0x56132f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x400000ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B561336:L561336:{c.instructions+=10;NFSU2_TR(0x561336);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x210ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56133c:{NFSU2_TR(0x56133c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B561340:{NFSU2_TR(0x561340);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B561344:{NFSU2_TR(0x561344);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B561345:{NFSU2_TR(0x561345);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x210ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56134b:{NFSU2_TR(0x56134b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B56134d:{NFSU2_TR(0x56134d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4cull))));
}
B561350:{NFSU2_TR(0x561350);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B561352:{NFSU2_TR(0x561352);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B561356:{NFSU2_TR(0x561356);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5612d5u);}goto L5612d5;}}
}
B56135c:L56135c:{c.instructions+=3;NFSU2_TR(0x56135c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B561362:{NFSU2_TR(0x561362);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B561364:{NFSU2_TR(0x561364);
if(r1(R+518)){{goto L5613d2;}}
}
B561366:L561366:{c.instructions+=5;NFSU2_TR(0x561366);
__builtin_memmove((R+0),gp(0x839bbc),4);
}
B56136b:{NFSU2_TR(0x56136b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56136c:{NFSU2_TR(0x56136c);
u8 U[4];
w4(U+0,u32(0xebb03e66ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561371:{NFSU2_TR(0x561371);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B561375:{NFSU2_TR(0x561375);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56137aull));
TAIL_STATIC(0x61b500u,61b);
}
B56137a:L56137a:{c.instructions+=2;NFSU2_TR(0x56137a);
u8 U[22];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
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
B56137e:{NFSU2_TR(0x56137e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5613d2;}}
}
B561380:L561380:{c.instructions+=2;NFSU2_TR(0x561380);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B561386:{NFSU2_TR(0x561386);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56138bull));
TAIL_STATIC(0x610000u,610);
}
B56138b:L56138b:{c.instructions+=2;NFSU2_TR(0x56138b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56138c:{NFSU2_TR(0x56138c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x561391ull));
TAIL_STATIC(0x43db50u,43d);
}
B561391:L561391:{c.instructions+=5;NFSU2_TR(0x561391);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B561395:{NFSU2_TR(0x561395);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B561398:{NFSU2_TR(0x561398);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B56139b:{NFSU2_TR(0x56139b);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56139d:{NFSU2_TR(0x56139d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5613d2;}}
}
B56139f:L56139f:{c.instructions+=4;NFSU2_TR(0x56139f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5613a5:{NFSU2_TR(0x5613a5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5613a6:{NFSU2_TR(0x5613a6);
__builtin_memmove((R+4),(R+28),4);
}
B5613a8:{NFSU2_TR(0x5613a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5613adull));
TAIL_STATIC(0x51f7a0u,51f);
}
B5613ad:L5613ad:{c.instructions+=2;NFSU2_TR(0x5613ad);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5613af:{NFSU2_TR(0x5613af);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5613bf;}}
}
B5613b1:L5613b1:{c.instructions+=3;NFSU2_TR(0x5613b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5613b4:{NFSU2_TR(0x5613b4);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5613b6:{NFSU2_TR(0x5613b6);
if(r1(R+518)){{goto L5613bd;}}
}
B5613b8:L5613b8:{c.instructions+=2;NFSU2_TR(0x5613b8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B5613bb:{NFSU2_TR(0x5613bb);
{goto L5613bf;}
}
B5613bd:L5613bd:{c.instructions+=1;NFSU2_TR(0x5613bd);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5613bf:L5613bf:{c.instructions+=3;NFSU2_TR(0x5613bf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5613c0:{NFSU2_TR(0x5613c0);
__builtin_memmove((R+4),(R+28),4);
}
B5613c2:{NFSU2_TR(0x5613c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5613c7ull));
TAIL_STATIC(0x5386a0u,538);
}
B5613c7:L5613c7:{c.instructions+=3;NFSU2_TR(0x5613c7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5613c8:{NFSU2_TR(0x5613c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5613cb:{NFSU2_TR(0x5613cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5613d0ull));
TAIL_STATIC(0x43be80u,43b);
}
B5613d0:L5613d0:{c.instructions+=1;NFSU2_TR(0x5613d0);
{goto L56142b;}
}
B5613d2:L5613d2:{c.instructions+=3;NFSU2_TR(0x5613d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5613d5:{NFSU2_TR(0x5613d5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5613d7:{NFSU2_TR(0x5613d7);
if(r1(R+518)){{goto L5613de;}}
}
B5613d9:L5613d9:{c.instructions+=2;NFSU2_TR(0x5613d9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B5613dc:{NFSU2_TR(0x5613dc);
{goto L5613e0;}
}
B5613de:L5613de:{c.instructions+=1;NFSU2_TR(0x5613de);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5613e0:L5613e0:{c.instructions+=2;NFSU2_TR(0x5613e0);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5613e3:{NFSU2_TR(0x5613e3);
if(r1(R+518)){{goto L56142b;}}
}
B5613e5:L5613e5:{c.instructions+=4;NFSU2_TR(0x5613e5);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5613e8:{NFSU2_TR(0x5613e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5613eb:{NFSU2_TR(0x5613eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5613ee:{NFSU2_TR(0x5613ee);
if(r1(R+518)){{goto L5613f5;}}
}
B5613f0:L5613f0:{c.instructions+=2;NFSU2_TR(0x5613f0);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5613f3:{NFSU2_TR(0x5613f3);
{goto L5613f8;}
}
B5613f5:L5613f5:{c.instructions+=1;NFSU2_TR(0x5613f5);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5613f8:L5613f8:{c.instructions+=6;NFSU2_TR(0x5613f8);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5613fa:{NFSU2_TR(0x5613fa);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5613fd:{NFSU2_TR(0x5613fd);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5613ff:{NFSU2_TR(0x5613ff);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B561401:{NFSU2_TR(0x561401);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B561404:{NFSU2_TR(0x561404);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L56140c;}}
}
B561406:L561406:{c.instructions+=1;NFSU2_TR(0x561406);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
w2(U+4,u16(0x2ull));
s2(u32(r4(U+0)),r2(U+4));
}
B56140c:L56140c:{c.instructions+=11;NFSU2_TR(0x56140c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56140f:{NFSU2_TR(0x56140f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B561412:{NFSU2_TR(0x561412);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B561415:{NFSU2_TR(0x561415);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B561417:{NFSU2_TR(0x561417);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56141a:{NFSU2_TR(0x56141a);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B56141e:{NFSU2_TR(0x56141e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B561421:{NFSU2_TR(0x561421);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B561423:{NFSU2_TR(0x561423);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561424:{NFSU2_TR(0x561424);
__builtin_memmove((R+4),(R+28),4);
}
B561426:{NFSU2_TR(0x561426);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56142bull));
TAIL_STATIC(0x52eea0u,52e);
}
B56142b:L56142b:{c.instructions+=6;NFSU2_TR(0x56142b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B561431:{NFSU2_TR(0x561431);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17full))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B561437:{NFSU2_TR(0x561437);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B56143a:{NFSU2_TR(0x56143a);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56143f:{NFSU2_TR(0x56143f);
w4(R+4,u32(0x8389d0ull));
}
B561444:{NFSU2_TR(0x561444);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x561449ull));
TAIL_STATIC(0x413440u,413);
}
B561449:L561449:{c.instructions+=4;NFSU2_TR(0x561449);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56144a:{NFSU2_TR(0x56144a);
u8 U[4];
w4(U+0,u32(0x1dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56144c:{NFSU2_TR(0x56144c);
w4(R+4,u32(0x8389d0ull));
}
B561451:{NFSU2_TR(0x561451);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x561456ull));
TAIL_STATIC(0x631d20u,631);
}
B561456:L561456:{c.instructions+=4;NFSU2_TR(0x561456);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561457:{NFSU2_TR(0x561457);
u8 U[4];
w4(U+0,u32(0x1eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561459:{NFSU2_TR(0x561459);
w4(R+4,u32(0x8389d0ull));
}
B56145e:{NFSU2_TR(0x56145e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x561463ull));
TAIL_STATIC(0x631d20u,631);
}
B561463:L561463:{c.instructions+=4;NFSU2_TR(0x561463);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561464:{NFSU2_TR(0x561464);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561466:{NFSU2_TR(0x561466);
u8 U[4];
w4(U+0,u32(0x8389d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56146b:{NFSU2_TR(0x56146b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x561470ull));
TAIL_STATIC(0x4d8ec0u,4d8);
}
B561470:L561470:{c.instructions+=5;NFSU2_TR(0x561470);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B561473:{NFSU2_TR(0x561473);
u8 U[4];
w4(U+0,u32(0x8389d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561478:{NFSU2_TR(0x561478);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56147d:{NFSU2_TR(0x56147d);
w4(R+4,u32(0x8637d0ull));
}
B561482:{NFSU2_TR(0x561482);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x561487ull));
TAIL_STATIC(0x55b1a0u,55b);
}
B561487:L561487:{c.instructions+=5;NFSU2_TR(0x561487);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561488:{NFSU2_TR(0x561488);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561489:{NFSU2_TR(0x561489);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56148a:{NFSU2_TR(0x56148a);
u8 U[4];
w4(U+0,u32(0x1dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56148c:{NFSU2_TR(0x56148c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x561491ull));
TAIL_STATIC(0x4c2100u,4c2);
}
B561491:L561491:{c.instructions+=8;NFSU2_TR(0x561491);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B561493:{NFSU2_TR(0x561493);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B561496:{NFSU2_TR(0x561496);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B561497:{NFSU2_TR(0x561497);
__builtin_memmove((R+4),(R+24),4);
}
B561499:{NFSU2_TR(0x561499);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56149a:{NFSU2_TR(0x56149a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56149b:{NFSU2_TR(0x56149b);
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
B56149e:{NFSU2_TR(0x56149e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B5614b0:L5614b0:{c.instructions+=8;NFSU2_TR(0x5614b0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5614b1:{NFSU2_TR(0x5614b1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5614b2:{NFSU2_TR(0x5614b2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5614b3:{NFSU2_TR(0x5614b3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5614b4:{NFSU2_TR(0x5614b4);
__builtin_memmove((R+24),(R+4),4);
}
B5614b6:{NFSU2_TR(0x5614b6);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B5614bc:{NFSU2_TR(0x5614bc);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5614be:{NFSU2_TR(0x5614be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5614c3ull));
TAIL_STATIC(0x458520u,458);
}
B5614c3:L5614c3:{c.instructions+=6;NFSU2_TR(0x5614c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5614c6:{NFSU2_TR(0x5614c6);
u8 U[4];
w4(U+0,u32(0xdf422345ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5614cb:{NFSU2_TR(0x5614cb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5614cc:{NFSU2_TR(0x5614cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0x43a05263ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5614d3:{NFSU2_TR(0x5614d3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x214ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5614da:{NFSU2_TR(0x5614da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5614dfull));
TAIL_STATIC(0x4954e0u,495);
}
B5614df:L5614df:{c.instructions+=5;NFSU2_TR(0x5614df);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5614e2:{NFSU2_TR(0x5614e2);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5614e4:{NFSU2_TR(0x5614e4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5614e7:{NFSU2_TR(0x5614e7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5614e9:{NFSU2_TR(0x5614e9);
if(r1(R+518)){{goto L561508;}}
}
B5614eb:L5614eb:{c.instructions+=2;NFSU2_TR(0x5614eb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5614ec:{NFSU2_TR(0x5614ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5614f1ull));
TAIL_STATIC(0x52cef0u,52c);
}
B5614f1:L5614f1:{c.instructions+=3;NFSU2_TR(0x5614f1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5614f4:{NFSU2_TR(0x5614f4);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5614f6:{NFSU2_TR(0x5614f6);
if(r1(R+518)){{goto L561508;}}
}
B5614f8:L5614f8:{c.instructions+=3;NFSU2_TR(0x5614f8);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5614fd:{NFSU2_TR(0x5614fd);
__builtin_memmove((R+4),(R+0),4);
}
B5614ff:{NFSU2_TR(0x5614ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x561504ull));
TAIL_STATIC(0x517f80u,517);
}
B561504:L561504:{c.instructions+=2;NFSU2_TR(0x561504);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B561506:{NFSU2_TR(0x561506);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56151f;}}
}
B561508:L561508:{c.instructions+=3;NFSU2_TR(0x561508);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B56150d:{NFSU2_TR(0x56150d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56150f:{NFSU2_TR(0x56150f);
if(r1(R+518)){{goto L561569;}}
}
B561511:L561511:{c.instructions+=4;NFSU2_TR(0x561511);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B561514:{NFSU2_TR(0x561514);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561515:{NFSU2_TR(0x561515);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56151a:{NFSU2_TR(0x56151a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56151full));
TAIL_STATIC(0x52c570u,52c);
}
B56151f:L56151f:{c.instructions+=3;NFSU2_TR(0x56151f);
__builtin_memmove((R+20),(R+0),4);
}
B561521:{NFSU2_TR(0x561521);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B561523:{NFSU2_TR(0x561523);
if(r1(R+518)){{goto L561569;}}
}
B561525:L561525:{c.instructions+=3;NFSU2_TR(0x561525);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B561528:{NFSU2_TR(0x561528);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56152a:{NFSU2_TR(0x56152a);
if(r1(R+518)){{goto L561569;}}
}
B56152c:L56152c:{c.instructions+=1;NFSU2_TR(0x56152c);
__builtin_memmove((R+16),(R+16),4);
}
B561530:L561530:{c.instructions+=2;NFSU2_TR(0x561530);
u8 U[4];
w4(U+0,u32(0x79d788ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561535:{NFSU2_TR(0x561535);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56153aull));
TAIL_STATIC(0x505450u,505);
}
B56153a:L56153a:{c.instructions+=4;NFSU2_TR(0x56153a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56153d:{NFSU2_TR(0x56153d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B561540:{NFSU2_TR(0x561540);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B561542:{NFSU2_TR(0x561542);
if(r1(R+518)){{goto L56154d;}}
}
B561544:L561544:{c.instructions+=3;NFSU2_TR(0x561544);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B561547:{NFSU2_TR(0x561547);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B561549:{NFSU2_TR(0x561549);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x561530u);}goto L561530;}}
}
B56154b:L56154b:{c.instructions+=1;NFSU2_TR(0x56154b);
{goto L561569;}
}
B56154d:L56154d:{c.instructions+=2;NFSU2_TR(0x56154d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56154f:{NFSU2_TR(0x56154f);
if(r1(R+518)){{goto L561569;}}
}
B561551:L561551:{c.instructions+=2;NFSU2_TR(0x561551);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B561554:{NFSU2_TR(0x561554);
if(r1(R+518)){{goto L561566;}}
}
B561556:L561556:{c.instructions+=3;NFSU2_TR(0x561556);
__builtin_memmove((R+4),(R+20),4);
}
B561558:{NFSU2_TR(0x561558);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56155b:{NFSU2_TR(0x56155b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x561560ull));
TAIL_STATIC(0x517720u,517);
}
B561560:L561560:{c.instructions+=2;NFSU2_TR(0x561560);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B561563:{NFSU2_TR(0x561563);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B561566:L561566:{c.instructions+=1;NFSU2_TR(0x561566);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B561569:L561569:{c.instructions+=3;NFSU2_TR(0x561569);
__builtin_memmove((R+4),(R+24),4);
}
B56156b:{NFSU2_TR(0x56156b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7bull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B56156e:{NFSU2_TR(0x56156e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x561573ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5612a0u);}goto L5612a0;}
}
B561573:L561573:{c.instructions+=5;NFSU2_TR(0x561573);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((R+28),(U+0),4);
}
B561579:{NFSU2_TR(0x561579);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56157b:{NFSU2_TR(0x56157b);
__builtin_memmove((R+4),(R+28),4);
}
B56157d:{NFSU2_TR(0x56157d);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2full))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B561581:{NFSU2_TR(0x561581);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x561586ull));
TAIL_STATIC(0x52eb90u,52e);
}
B561586:L561586:{c.instructions+=4;NFSU2_TR(0x561586);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B561589:{NFSU2_TR(0x561589);
u8 U[4];
w4(U+0,u32(0xa936c3a2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56158e:{NFSU2_TR(0x56158e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56158f:{NFSU2_TR(0x56158f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x561594ull));
TAIL_STATIC(0x495520u,495);
}
B561594:L561594:{c.instructions+=4;NFSU2_TR(0x561594);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B561597:{NFSU2_TR(0x561597);
u8 U[4];
w4(U+0,u32(0x89782734ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56159c:{NFSU2_TR(0x56159c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56159d:{NFSU2_TR(0x56159d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5615a2ull));
TAIL_STATIC(0x495520u,495);
}
B5615a2:L5615a2:{c.instructions+=4;NFSU2_TR(0x5615a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5615a5:{NFSU2_TR(0x5615a5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5615a8:{NFSU2_TR(0x5615a8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5615aa:{NFSU2_TR(0x5615aa);
if(r1(R+518)){{goto L5615b1;}}
}
B5615ac:L5615ac:{c.instructions+=2;NFSU2_TR(0x5615ac);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B5615af:{NFSU2_TR(0x5615af);
{goto L5615b3;}
}
B5615b1:L5615b1:{c.instructions+=1;NFSU2_TR(0x5615b1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5615b3:L5615b3:{c.instructions+=2;NFSU2_TR(0x5615b3);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5615b6:{NFSU2_TR(0x5615b6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5615c9;}}
}
B5615b8:L5615b8:{c.instructions+=3;NFSU2_TR(0x5615b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5615be:{NFSU2_TR(0x5615be);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5615bf:{NFSU2_TR(0x5615bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5615c4ull));
TAIL_STATIC(0x50ca00u,50c);
}
B5615c4:L5615c4:{c.instructions+=2;NFSU2_TR(0x5615c4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5615c7:{NFSU2_TR(0x5615c7);
{goto L561608;}
}
B5615c9:L5615c9:{c.instructions+=3;NFSU2_TR(0x5615c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5615cc:{NFSU2_TR(0x5615cc);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5615ce:{NFSU2_TR(0x5615ce);
if(r1(R+518)){{goto L5615d5;}}
}
B5615d0:L5615d0:{c.instructions+=2;NFSU2_TR(0x5615d0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B5615d3:{NFSU2_TR(0x5615d3);
{goto L5615d7;}
}
B5615d5:L5615d5:{c.instructions+=1;NFSU2_TR(0x5615d5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5615d7:L5615d7:{c.instructions+=2;NFSU2_TR(0x5615d7);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5615da:{NFSU2_TR(0x5615da);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5615ed;}}
}
B5615dc:L5615dc:{c.instructions+=3;NFSU2_TR(0x5615dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x200ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5615e2:{NFSU2_TR(0x5615e2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5615e3:{NFSU2_TR(0x5615e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5615e8ull));
TAIL_STATIC(0x50ca00u,50c);
}
B5615e8:L5615e8:{c.instructions+=2;NFSU2_TR(0x5615e8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5615eb:{NFSU2_TR(0x5615eb);
{goto L561608;}
}
B5615ed:L5615ed:{c.instructions+=3;NFSU2_TR(0x5615ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5615f3:{NFSU2_TR(0x5615f3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5615f4:{NFSU2_TR(0x5615f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5615f9ull));
TAIL_STATIC(0x50ca50u,50c);
}
B5615f9:L5615f9:{c.instructions+=3;NFSU2_TR(0x5615f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x200ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5615ff:{NFSU2_TR(0x5615ff);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561600:{NFSU2_TR(0x561600);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x561605ull));
TAIL_STATIC(0x50ca50u,50c);
}
B561605:L561605:{c.instructions+=1;NFSU2_TR(0x561605);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B561608:L561608:{c.instructions+=3;NFSU2_TR(0x561608);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B56160b:{NFSU2_TR(0x56160b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56160d:{NFSU2_TR(0x56160d);
if(r1(R+518)){{goto L56162c;}}
}
B56160f:L56160f:{c.instructions+=2;NFSU2_TR(0x56160f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561610:{NFSU2_TR(0x561610);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x561615ull));
TAIL_STATIC(0x52cef0u,52c);
}
B561615:L561615:{c.instructions+=3;NFSU2_TR(0x561615);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B561618:{NFSU2_TR(0x561618);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56161a:{NFSU2_TR(0x56161a);
if(r1(R+518)){{goto L56162c;}}
}
B56161c:L56161c:{c.instructions+=3;NFSU2_TR(0x56161c);
u8 U[4];
w4(U+0,u32(0x55c171e2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561621:{NFSU2_TR(0x561621);
__builtin_memmove((R+4),(R+0),4);
}
B561623:{NFSU2_TR(0x561623);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x561628ull));
TAIL_STATIC(0x517f80u,517);
}
B561628:L561628:{c.instructions+=2;NFSU2_TR(0x561628);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56162a:{NFSU2_TR(0x56162a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L561643;}}
}
B56162c:L56162c:{c.instructions+=3;NFSU2_TR(0x56162c);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B561631:{NFSU2_TR(0x561631);
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
B561633:{NFSU2_TR(0x561633);
if(r1(R+518)){{goto L56168c;}}
}
B561635:L561635:{c.instructions+=4;NFSU2_TR(0x561635);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B561638:{NFSU2_TR(0x561638);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561639:{NFSU2_TR(0x561639);
u8 U[4];
w4(U+0,u32(0x55c171e2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56163e:{NFSU2_TR(0x56163e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x561643ull));
TAIL_STATIC(0x52c570u,52c);
}
B561643:L561643:{c.instructions+=3;NFSU2_TR(0x561643);
__builtin_memmove((R+28),(R+0),4);
}
B561645:{NFSU2_TR(0x561645);
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
B561647:{NFSU2_TR(0x561647);
if(r1(R+518)){{goto L56168c;}}
}
B561649:L561649:{c.instructions+=3;NFSU2_TR(0x561649);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B56164c:{NFSU2_TR(0x56164c);
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
B56164e:{NFSU2_TR(0x56164e);
if(r1(R+518)){{goto L56168c;}}
}
B561650:L561650:{c.instructions+=2;NFSU2_TR(0x561650);
u8 U[4];
w4(U+0,u32(0x78fc44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561655:{NFSU2_TR(0x561655);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56165aull));
TAIL_STATIC(0x505450u,505);
}
B56165a:L56165a:{c.instructions+=4;NFSU2_TR(0x56165a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56165d:{NFSU2_TR(0x56165d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B561660:{NFSU2_TR(0x561660);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B561662:{NFSU2_TR(0x561662);
if(r1(R+518)){{goto L561670;}}
}
B561664:L561664:{c.instructions+=3;NFSU2_TR(0x561664);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B561667:{NFSU2_TR(0x561667);
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
B561669:{NFSU2_TR(0x561669);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x561650u);}goto L561650;}}
}
B56166b:L56166b:{c.instructions+=5;NFSU2_TR(0x56166b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56166c:{NFSU2_TR(0x56166c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56166d:{NFSU2_TR(0x56166d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56166e:{NFSU2_TR(0x56166e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56166f:{NFSU2_TR(0x56166f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B561670:L561670:{c.instructions+=2;NFSU2_TR(0x561670);
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
B561672:{NFSU2_TR(0x561672);
if(r1(R+518)){{goto L56168c;}}
}
B561674:L561674:{c.instructions+=2;NFSU2_TR(0x561674);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
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
B561677:{NFSU2_TR(0x561677);
if(r1(R+518)){{goto L561689;}}
}
B561679:L561679:{c.instructions+=3;NFSU2_TR(0x561679);
__builtin_memmove((R+4),(R+28),4);
}
B56167b:{NFSU2_TR(0x56167b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56167e:{NFSU2_TR(0x56167e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x561683ull));
TAIL_STATIC(0x517720u,517);
}
B561683:L561683:{c.instructions+=2;NFSU2_TR(0x561683);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B561686:{NFSU2_TR(0x561686);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B561689:L561689:{c.instructions+=1;NFSU2_TR(0x561689);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56168c:L56168c:{c.instructions+=5;NFSU2_TR(0x56168c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56168d:{NFSU2_TR(0x56168d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56168e:{NFSU2_TR(0x56168e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56168f:{NFSU2_TR(0x56168f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B561690:{NFSU2_TR(0x561690);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5616a0:L5616a0:{c.instructions+=2;NFSU2_TR(0x5616a0);
u8 U[22];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xc407210ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5616a8:{NFSU2_TR(0x5616a8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L561716;}}
}
B5616aa:L5616aa:{c.instructions+=12;NFSU2_TR(0x5616aa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5616ab:{NFSU2_TR(0x5616ab);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5616af:{NFSU2_TR(0x5616af);
u8 U[4];
w4(U+0,u32(0xf5ac2b2aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5616b4:{NFSU2_TR(0x5616b4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5616b6:{NFSU2_TR(0x5616b6);
u8 U[4];
w4(U+0,u32(0x1fab5998ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5616bb:{NFSU2_TR(0x5616bb);
u8 U[4];
w4(U+0,u32(0x1fab5998ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5616c0:{NFSU2_TR(0x5616c0);
u8 U[4];
w4(U+0,u32(0xd05fc3a3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5616c5:{NFSU2_TR(0x5616c5);
u8 U[4];
w4(U+0,u32(0x61cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5616ca:{NFSU2_TR(0x5616ca);
u8 U[4];
w4(U+0,u32(0xf770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5616cf:{NFSU2_TR(0x5616cf);
u8 U[4];
w4(U+0,u32(0x78fa24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5616d4:{NFSU2_TR(0x5616d4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5616d5:{NFSU2_TR(0x5616d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5616daull));
TAIL_STATIC(0x558790u,558);
}
B5616da:L5616da:{c.instructions+=5;NFSU2_TR(0x5616da);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B5616dd:{NFSU2_TR(0x5616dd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5616de:{NFSU2_TR(0x5616de);
w4(R+4,u32(0x8637b0ull));
}
B5616e3:{NFSU2_TR(0x5616e3);
s4(0x838970,u32(0x1fab5998ull));
}
B5616ed:{NFSU2_TR(0x5616ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5616f2ull));
TAIL_STATIC(0x51bb70u,51b);
}
B5616f2:L5616f2:{c.instructions+=3;NFSU2_TR(0x5616f2);
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
B5616f4:{NFSU2_TR(0x5616f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5616f5:{NFSU2_TR(0x5616f5);
if(r1(R+518)){{goto L561716;}}
}
B5616f7:L5616f7:{c.instructions+=3;NFSU2_TR(0x5616f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5616fa:{NFSU2_TR(0x5616fa);
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
B5616fc:{NFSU2_TR(0x5616fc);
if(r1(R+518)){{goto L561716;}}
}
B5616fe:L5616fe:{c.instructions+=3;NFSU2_TR(0x5616fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B561701:{NFSU2_TR(0x561701);
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
B561703:{NFSU2_TR(0x561703);
if(r1(R+518)){{goto L561716;}}
}
B561705:L561705:{c.instructions+=6;NFSU2_TR(0x561705);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561706:{NFSU2_TR(0x561706);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561708:{NFSU2_TR(0x561708);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56170a:{NFSU2_TR(0x56170a);
u8 U[4];
w4(U+0,u32(0x96dda9e6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56170f:{NFSU2_TR(0x56170f);
__builtin_memmove((R+4),(R+0),4);
}
B561711:{NFSU2_TR(0x561711);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x561716ull));
TAIL_STATIC(0x55b5c0u,55b);
}
B561716:L561716:{c.instructions+=1;NFSU2_TR(0x561716);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B561720:L561720:{c.instructions+=9;NFSU2_TR(0x561720);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561721:{NFSU2_TR(0x561721);
__builtin_memmove((R+20),(R+16),4);
}
B561723:{NFSU2_TR(0x561723);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561724:{NFSU2_TR(0x561724);
__builtin_memmove((R+24),(R+4),4);
}
B561726:{NFSU2_TR(0x561726);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x152ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56172c:{NFSU2_TR(0x56172c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56172e:{NFSU2_TR(0x56172e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56172f:{NFSU2_TR(0x56172f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B561732:{NFSU2_TR(0x561732);
if(r1(R+518)){{goto L56174c;}}
}
B561734:L561734:{c.instructions+=2;NFSU2_TR(0x561734);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xc407210ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B56173a:{NFSU2_TR(0x56173a);
if(r1(R+518)){{goto L56189b;}}
}
B561740:L561740:{c.instructions+=2;NFSU2_TR(0x561740);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x911ab364ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x911ab364ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x911ab364ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B561746:{NFSU2_TR(0x561746);
if(r1(R+518)){{goto L56189b;}}
}
B56174c:L56174c:{c.instructions+=9;NFSU2_TR(0x56174c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56174f:{NFSU2_TR(0x56174f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B561752:{NFSU2_TR(0x561752);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B561755:{NFSU2_TR(0x561755);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561756:{NFSU2_TR(0x561756);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561757:{NFSU2_TR(0x561757);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561758:{NFSU2_TR(0x561758);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561759:{NFSU2_TR(0x561759);
__builtin_memmove((R+4),(R+24),4);
}
B56175b:{NFSU2_TR(0x56175b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x561760ull));
TAIL_STATIC(0x543d40u,543);
}
B561760:L561760:{c.instructions+=2;NFSU2_TR(0x561760);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x911ab364ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B561766:{NFSU2_TR(0x561766);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5617fc;}}
}
B56176c:L56176c:{c.instructions+=1;NFSU2_TR(0x56176c);
if(r1(R+518)){{goto L5617ad;}}
}
B56176e:L56176e:{c.instructions+=2;NFSU2_TR(0x56176e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1fab5998ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B561774:{NFSU2_TR(0x561774);
if(r1(R+518)){{goto L561799;}}
}
B561776:L561776:{c.instructions+=2;NFSU2_TR(0x561776);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x34dc1becull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x34dc1becull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x34dc1becull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B56177c:{NFSU2_TR(0x56177c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56189b;}}
}
B561782:L561782:{c.instructions+=3;NFSU2_TR(0x561782);
w4(R+4,u32(0x85b940ull));
}
B561787:{NFSU2_TR(0x561787);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56178e:{NFSU2_TR(0x56178e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x561793ull));
TAIL_STATIC(0x5419c0u,541);
}
B561793:L561793:{c.instructions+=4;NFSU2_TR(0x561793);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B561794:{NFSU2_TR(0x561794);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B561795:{NFSU2_TR(0x561795);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B561796:{NFSU2_TR(0x561796);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B561799:L561799:{c.instructions+=3;NFSU2_TR(0x561799);
__builtin_memmove((R+4),(R+24),4);
}
B56179b:{NFSU2_TR(0x56179b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x152ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5617a2:{NFSU2_TR(0x5617a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5617a7ull));
TAIL_STATIC(0x538ca0u,538);
}
B5617a7:L5617a7:{c.instructions+=4;NFSU2_TR(0x5617a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5617a8:{NFSU2_TR(0x5617a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5617a9:{NFSU2_TR(0x5617a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5617aa:{NFSU2_TR(0x5617aa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5617ad:L5617ad:{c.instructions+=12;NFSU2_TR(0x5617ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5617b0:{NFSU2_TR(0x5617b0);
u8 U[4];
w4(U+0,u32(0x20d0d219ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5617b5:{NFSU2_TR(0x5617b5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5617b7:{NFSU2_TR(0x5617b7);
u8 U[4];
w4(U+0,u32(0x1fab5998ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5617bc:{NFSU2_TR(0x5617bc);
u8 U[4];
w4(U+0,u32(0x1fab5998ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5617c1:{NFSU2_TR(0x5617c1);
u8 U[4];
w4(U+0,u32(0x34dc1becull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5617c6:{NFSU2_TR(0x5617c6);
u8 U[4];
w4(U+0,u32(0x61cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5617cb:{NFSU2_TR(0x5617cb);
u8 U[4];
w4(U+0,u32(0xf770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5617d0:{NFSU2_TR(0x5617d0);
u8 U[4];
w4(U+0,u32(0x78fa24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5617d5:{NFSU2_TR(0x5617d5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5617d6:{NFSU2_TR(0x5617d6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x152ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5617dd:{NFSU2_TR(0x5617dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5617e2ull));
TAIL_STATIC(0x558790u,558);
}
B5617e2:L5617e2:{c.instructions+=4;NFSU2_TR(0x5617e2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B5617e5:{NFSU2_TR(0x5617e5);
__builtin_memmove((R+4),(R+24),4);
}
B5617e7:{NFSU2_TR(0x5617e7);
s4(0x838970,u32(0x1fab5998ull));
}
B5617f1:{NFSU2_TR(0x5617f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5617f6ull));
TAIL_STATIC(0x538c00u,538);
}
B5617f6:L5617f6:{c.instructions+=4;NFSU2_TR(0x5617f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5617f7:{NFSU2_TR(0x5617f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5617f8:{NFSU2_TR(0x5617f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5617f9:{NFSU2_TR(0x5617f9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5617fc:L5617fc:{c.instructions+=2;NFSU2_TR(0x5617fc);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc98356baull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B561802:{NFSU2_TR(0x561802);
if(r1(R+518)){{goto L561882;}}
}
B561804:L561804:{c.instructions+=2;NFSU2_TR(0x561804);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xd05fc3a3ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xd05fc3a3ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xd05fc3a3ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B56180a:{NFSU2_TR(0x56180a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56189b;}}
}
B561810:L561810:{c.instructions+=3;NFSU2_TR(0x561810);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x151ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B561816:{NFSU2_TR(0x561816);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B561818:{NFSU2_TR(0x561818);
if(r1(R+518)){{goto L561837;}}
}
B56181a:L56181a:{c.instructions+=5;NFSU2_TR(0x56181a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56181d:{NFSU2_TR(0x56181d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B561820:{NFSU2_TR(0x561820);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561821:{NFSU2_TR(0x561821);
w4(R+4,u32(0x838980ull));
}
B561826:{NFSU2_TR(0x561826);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56182bull));
TAIL_STATIC(0x521430u,521);
}
B56182b:L56182b:{c.instructions+=2;NFSU2_TR(0x56182b);
w4(R+4,u32(0x8635bcull));
}
B561830:{NFSU2_TR(0x561830);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x561835ull));
TAIL_STATIC(0x525610u,525);
}
B561835:L561835:{c.instructions+=1;NFSU2_TR(0x561835);
{goto L56186b;}
}
B561837:L561837:{c.instructions+=7;NFSU2_TR(0x561837);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56183a:{NFSU2_TR(0x56183a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56183d:{NFSU2_TR(0x56183d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B561840:{NFSU2_TR(0x561840);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561841:{NFSU2_TR(0x561841);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561842:{NFSU2_TR(0x561842);
w4(R+4,u32(0x838980ull));
}
B561847:{NFSU2_TR(0x561847);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56184cull));
TAIL_STATIC(0x55c230u,55c);
}
B56184c:L56184c:{c.instructions+=7;NFSU2_TR(0x56184c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56184f:{NFSU2_TR(0x56184f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B561852:{NFSU2_TR(0x561852);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B561855:{NFSU2_TR(0x561855);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561856:{NFSU2_TR(0x561856);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561857:{NFSU2_TR(0x561857);
w4(R+4,u32(0x85ad40ull));
}
B56185c:{NFSU2_TR(0x56185c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x561861ull));
TAIL_STATIC(0x5289f0u,528);
}
B561861:L561861:{c.instructions+=2;NFSU2_TR(0x561861);
w4(R+4,u32(0x8635bcull));
}
B561866:{NFSU2_TR(0x561866);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56186bull));
TAIL_STATIC(0x5255d0u,525);
}
B56186b:L56186b:{c.instructions+=2;NFSU2_TR(0x56186b);
w4(R+4,u32(0x85b940ull));
}
B561870:{NFSU2_TR(0x561870);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x561875ull));
TAIL_STATIC(0x5419c0u,541);
}
B561875:L561875:{c.instructions+=5;NFSU2_TR(0x561875);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B561876:{NFSU2_TR(0x561876);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56187d:{NFSU2_TR(0x56187d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56187e:{NFSU2_TR(0x56187e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56187f:{NFSU2_TR(0x56187f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B561882:L561882:{c.instructions+=3;NFSU2_TR(0x561882);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B561888:{NFSU2_TR(0x561888);
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
B56188a:{NFSU2_TR(0x56188a);
if(r1(R+518)){{goto L56189b;}}
}
B56188c:L56188c:{c.instructions+=2;NFSU2_TR(0x56188c);
w4(R+4,u32(0x838980ull));
}
B561891:{NFSU2_TR(0x561891);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x561896ull));
TAIL_STATIC(0x54fd40u,54f);
}
B561896:L561896:{c.instructions+=1;NFSU2_TR(0x561896);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56189bull));
TAIL_STATIC(0x5404a0u,540);
}
B56189b:L56189b:{c.instructions+=4;NFSU2_TR(0x56189b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56189c:{NFSU2_TR(0x56189c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56189d:{NFSU2_TR(0x56189d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56189e:{NFSU2_TR(0x56189e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5618b0:L5618b0:{c.instructions+=8;NFSU2_TR(0x5618b0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5618b1:{NFSU2_TR(0x5618b1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5618b2:{NFSU2_TR(0x5618b2);
__builtin_memmove((R+28),(R+4),4);
}
B5618b4:{NFSU2_TR(0x5618b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5618b7:{NFSU2_TR(0x5618b7);
u8 U[4];
w4(U+0,u32(0x9986a6e3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5618bc:{NFSU2_TR(0x5618bc);
u8 U[4];
w4(U+0,u32(0x42adb44cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5618c1:{NFSU2_TR(0x5618c1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5618c2:{NFSU2_TR(0x5618c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5618c7ull));
TAIL_STATIC(0x495460u,495);
}
B5618c7:L5618c7:{c.instructions+=5;NFSU2_TR(0x5618c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5618ca:{NFSU2_TR(0x5618ca);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5618cd:{NFSU2_TR(0x5618cd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5618d0:{NFSU2_TR(0x5618d0);
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
B5618d2:{NFSU2_TR(0x5618d2);
if(r1(R+518)){{goto L561a34;}}
}
B5618d8:L5618d8:{c.instructions+=3;NFSU2_TR(0x5618d8);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x151ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5618de:{NFSU2_TR(0x5618de);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5618e0:{NFSU2_TR(0x5618e0);
if(r1(R+518)){{goto L56190c;}}
}
B5618e2:L5618e2:{c.instructions+=6;NFSU2_TR(0x5618e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5618e5:{NFSU2_TR(0x5618e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5618e8:{NFSU2_TR(0x5618e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x134ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5618ee:{NFSU2_TR(0x5618ee);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5618ef:{NFSU2_TR(0x5618ef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5618f0:{NFSU2_TR(0x5618f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5618f5ull));
TAIL_STATIC(0x50c900u,50c);
}
B5618f5:L5618f5:{c.instructions+=6;NFSU2_TR(0x5618f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5618f8:{NFSU2_TR(0x5618f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5618fb:{NFSU2_TR(0x5618fb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5618fe:{NFSU2_TR(0x5618fe);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5618ff:{NFSU2_TR(0x5618ff);
w4(R+4,u32(0x838980ull));
}
B561904:{NFSU2_TR(0x561904);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x561909ull));
TAIL_STATIC(0x521480u,521);
}
B561909:L561909:{c.instructions+=3;NFSU2_TR(0x561909);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56190a:{NFSU2_TR(0x56190a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B56190b:{NFSU2_TR(0x56190b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56190c:L56190c:{c.instructions+=5;NFSU2_TR(0x56190c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56190f:{NFSU2_TR(0x56190f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561910:{NFSU2_TR(0x561910);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B561913:{NFSU2_TR(0x561913);
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
B561915:{NFSU2_TR(0x561915);
if(r1(R+518)){{goto L561a33;}}
}
B56191b:L56191b:{c.instructions+=4;NFSU2_TR(0x56191b);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1dull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B56191f:{NFSU2_TR(0x56191f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561920:{NFSU2_TR(0x561920);
__builtin_memmove((R+4),(R+24),4);
}
B561922:{NFSU2_TR(0x561922);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5619ca;}}
}
B561928:L561928:{c.instructions+=3;NFSU2_TR(0x561928);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56192a:{NFSU2_TR(0x56192a);
u8 U[4];
w4(U+0,u32(0xebb03e66ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56192f:{NFSU2_TR(0x56192f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x561934ull));
TAIL_STATIC(0x61b500u,61b);
}
B561934:L561934:{c.instructions+=3;NFSU2_TR(0x561934);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561935:{NFSU2_TR(0x561935);
w4(R+4,u32(0x838980ull));
}
B56193a:{NFSU2_TR(0x56193a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56193full));
TAIL_STATIC(0x50e960u,50e);
}
B56193f:L56193f:{c.instructions+=4;NFSU2_TR(0x56193f);
u8 U[4];
w4(U+0,u32(0x4732da07ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561944:{NFSU2_TR(0x561944);
__builtin_memmove((R+4),(R+24),4);
}
B561946:{NFSU2_TR(0x561946);
__builtin_memmove((R+12),(R+0),4);
}
B561948:{NFSU2_TR(0x561948);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56194dull));
TAIL_STATIC(0x61b4e0u,61b);
}
B56194d:L56194d:{c.instructions+=4;NFSU2_TR(0x56194d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56194f:{NFSU2_TR(0x56194f);
__builtin_memmove((R+4),(R+24),4);
}
B561951:{NFSU2_TR(0x561951);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561953:{NFSU2_TR(0x561953);
if(r1(R+518)){{goto L56199d;}}
}
B561955:L561955:{c.instructions+=2;NFSU2_TR(0x561955);
u8 U[4];
w4(U+0,u32(0x4732da07ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56195a:{NFSU2_TR(0x56195a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56195full));
TAIL_STATIC(0x61b500u,61b);
}
B56195f:L56195f:{c.instructions+=2;NFSU2_TR(0x56195f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561960:{NFSU2_TR(0x561960);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x561965ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B561965:L561965:{c.instructions+=6;NFSU2_TR(0x561965);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B561968:{NFSU2_TR(0x561968);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56196a:{NFSU2_TR(0x56196a);
u8 U[4];
w4(U+0,u32(0xeb0101e2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56196f:{NFSU2_TR(0x56196f);
__builtin_memmove((R+4),(R+24),4);
}
B561971:{NFSU2_TR(0x561971);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B561975:{NFSU2_TR(0x561975);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56197aull));
TAIL_STATIC(0x61b500u,61b);
}
B56197a:L56197a:{c.instructions+=9;NFSU2_TR(0x56197a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56197e:{NFSU2_TR(0x56197e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x134ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B561984:{NFSU2_TR(0x561984);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B561987:{NFSU2_TR(0x561987);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561988:{NFSU2_TR(0x561988);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561989:{NFSU2_TR(0x561989);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56198a:{NFSU2_TR(0x56198a);
u8 U[4];
w4(U+0,u32(0x79d7ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56198f:{NFSU2_TR(0x56198f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561990:{NFSU2_TR(0x561990);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x561995ull));
TAIL_STATIC(0x537be0u,537);
}
B561995:L561995:{c.instructions+=2;NFSU2_TR(0x561995);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B561998:{NFSU2_TR(0x561998);
{goto L561a1d;}
}
B56199d:L56199d:{c.instructions+=2;NFSU2_TR(0x56199d);
u8 U[4];
w4(U+0,u32(0xeb0101e2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5619a2:{NFSU2_TR(0x5619a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5619a7ull));
TAIL_STATIC(0x61b500u,61b);
}
B5619a7:L5619a7:{c.instructions+=4;NFSU2_TR(0x5619a7);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B5619aa:{NFSU2_TR(0x5619aa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5619ab:{NFSU2_TR(0x5619ab);
__builtin_memmove((R+4),(R+24),4);
}
B5619ad:{NFSU2_TR(0x5619ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5619b2ull));
TAIL_STATIC(0x610000u,610);
}
B5619b2:L5619b2:{c.instructions+=6;NFSU2_TR(0x5619b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x134ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5619b8:{NFSU2_TR(0x5619b8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5619b9:{NFSU2_TR(0x5619b9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5619ba:{NFSU2_TR(0x5619ba);
u8 U[4];
w4(U+0,u32(0x79d7ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5619bf:{NFSU2_TR(0x5619bf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5619c0:{NFSU2_TR(0x5619c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5619c5ull));
TAIL_STATIC(0x537be0u,537);
}
B5619c5:L5619c5:{c.instructions+=2;NFSU2_TR(0x5619c5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B5619c8:{NFSU2_TR(0x5619c8);
{goto L561a1d;}
}
B5619ca:L5619ca:{c.instructions+=2;NFSU2_TR(0x5619ca);
u8 U[4];
w4(U+0,u32(0x4732da07ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5619cf:{NFSU2_TR(0x5619cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5619d4ull));
TAIL_STATIC(0x61b4e0u,61b);
}
B5619d4:L5619d4:{c.instructions+=3;NFSU2_TR(0x5619d4);
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
B5619d6:{NFSU2_TR(0x5619d6);
__builtin_memmove((R+4),(R+24),4);
}
B5619d8:{NFSU2_TR(0x5619d8);
if(r1(R+518)){{goto L561a03;}}
}
B5619da:L5619da:{c.instructions+=3;NFSU2_TR(0x5619da);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5619dc:{NFSU2_TR(0x5619dc);
u8 U[4];
w4(U+0,u32(0x4732da07ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5619e1:{NFSU2_TR(0x5619e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5619e6ull));
TAIL_STATIC(0x61b500u,61b);
}
B5619e6:L5619e6:{c.instructions+=2;NFSU2_TR(0x5619e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5619e7:{NFSU2_TR(0x5619e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5619ecull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B5619ec:L5619ec:{c.instructions+=5;NFSU2_TR(0x5619ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x134ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5619f2:{NFSU2_TR(0x5619f2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5619f3:{NFSU2_TR(0x5619f3);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5619f8:{NFSU2_TR(0x5619f8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5619f9:{NFSU2_TR(0x5619f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5619feull));
TAIL_STATIC(0x537be0u,537);
}
B5619fe:L5619fe:{c.instructions+=2;NFSU2_TR(0x5619fe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B561a01:{NFSU2_TR(0x561a01);
{goto L561a1d;}
}
B561a03:L561a03:{c.instructions+=1;NFSU2_TR(0x561a03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x561a08ull));
TAIL_STATIC(0x610000u,610);
}
B561a08:L561a08:{c.instructions+=5;NFSU2_TR(0x561a08);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561a09:{NFSU2_TR(0x561a09);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x134ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B561a0f:{NFSU2_TR(0x561a0f);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561a14:{NFSU2_TR(0x561a14);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561a15:{NFSU2_TR(0x561a15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x561a1aull));
TAIL_STATIC(0x537be0u,537);
}
B561a1a:L561a1a:{c.instructions+=1;NFSU2_TR(0x561a1a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B561a1d:L561a1d:{c.instructions+=7;NFSU2_TR(0x561a1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B561a20:{NFSU2_TR(0x561a20);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B561a23:{NFSU2_TR(0x561a23);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B561a26:{NFSU2_TR(0x561a26);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561a27:{NFSU2_TR(0x561a27);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561a28:{NFSU2_TR(0x561a28);
w4(R+4,u32(0x838980ull));
}
B561a2d:{NFSU2_TR(0x561a2d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x561a32ull));
TAIL_STATIC(0x55c170u,55c);
}
B561a32:L561a32:{c.instructions+=1;NFSU2_TR(0x561a32);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B561a33:L561a33:{c.instructions+=1;NFSU2_TR(0x561a33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B561a34:L561a34:{c.instructions+=3;NFSU2_TR(0x561a34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B561a35:{NFSU2_TR(0x561a35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B561a36:{NFSU2_TR(0x561a36);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B561a40:L561a40:{c.instructions+=7;NFSU2_TR(0x561a40);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B561a44:{NFSU2_TR(0x561a44);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B561a47:{NFSU2_TR(0x561a47);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561a48:{NFSU2_TR(0x561a48);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561a49:{NFSU2_TR(0x561a49);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561a4a:{NFSU2_TR(0x561a4a);
__builtin_memmove((R+12),(R+4),4);
}
B561a4c:{NFSU2_TR(0x561a4c);
if(r1(R+518)){{goto L561ab6;}}
}
B561a4e:L561a4e:{c.instructions+=2;NFSU2_TR(0x561a4e);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B561a4f:{NFSU2_TR(0x561a4f);
if(r1(R+518)){{goto L561aa2;}}
}
B561a51:L561a51:{c.instructions+=2;NFSU2_TR(0x561a51);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B561a52:{NFSU2_TR(0x561a52);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L561abd;}}
}
B561a54:L561a54:{c.instructions+=4;NFSU2_TR(0x561a54);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B561a57:{NFSU2_TR(0x561a57);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
__builtin_memmove((R+28),(U+0),4);
}
B561a5a:{NFSU2_TR(0x561a5a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B561a5c:{NFSU2_TR(0x561a5c);
if(r1(R+518)){{goto L561abd;}}
}
B561a5e:L561a5e:{c.instructions+=1;NFSU2_TR(0x561a5e);
__builtin_memmove((R+28),(R+28),4);
}
B561a60:L561a60:{c.instructions+=2;NFSU2_TR(0x561a60);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B561a62:{NFSU2_TR(0x561a62);
if(r1(R+518)){{goto L561abd;}}
}
B561a64:L561a64:{c.instructions+=3;NFSU2_TR(0x561a64);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B561a67:{NFSU2_TR(0x561a67);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3full))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B561a6a:{NFSU2_TR(0x561a6a);
if(r1(R+518)){{goto L561a7a;}}
}
B561a6c:L561a6c:{c.instructions+=2;NFSU2_TR(0x561a6c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x43ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x43ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B561a6f:{NFSU2_TR(0x561a6f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L561a76;}}
}
B561a71:L561a71:{c.instructions+=2;NFSU2_TR(0x561a71);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4aull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4aull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B561a74:{NFSU2_TR(0x561a74);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L561a7a;}}
}
B561a76:L561a76:{c.instructions+=2;NFSU2_TR(0x561a76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B561a78:{NFSU2_TR(0x561a78);
{goto L561a91;}
}
B561a7a:L561a7a:{c.instructions+=8;NFSU2_TR(0x561a7a);
__builtin_memmove((R+0),(R+24),4);
}
B561a7c:{NFSU2_TR(0x561a7c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B561a7e:{NFSU2_TR(0x561a7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B561a81:{NFSU2_TR(0x561a81);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B561a83:{NFSU2_TR(0x561a83);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B561a85:{NFSU2_TR(0x561a85);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561a86:{NFSU2_TR(0x561a86);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B561a89:{NFSU2_TR(0x561a89);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x561a8eull));
TAIL_STATIC(0x575630u,575);
}
B561a8e:L561a8e:{c.instructions+=1;NFSU2_TR(0x561a8e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B561a91:L561a91:{c.instructions+=2;NFSU2_TR(0x561a91);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B561a93:{NFSU2_TR(0x561a93);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x561a60u);}goto L561a60;}}
}
B561a95:L561a95:{c.instructions+=2;NFSU2_TR(0x561a95);
__builtin_memmove((R+4),(R+12),4);
}
B561a97:{NFSU2_TR(0x561a97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x561a9cull));
TAIL_STATIC(0x55c460u,55c);
}
B561a9c:L561a9c:{c.instructions+=4;NFSU2_TR(0x561a9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B561a9d:{NFSU2_TR(0x561a9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B561a9e:{NFSU2_TR(0x561a9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B561a9f:{NFSU2_TR(0x561a9f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B561aa2:L561aa2:{c.instructions+=2;NFSU2_TR(0x561aa2);
__builtin_memmove((R+4),(R+12),4);
}
B561aa4:{NFSU2_TR(0x561aa4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x561aa9ull));
TAIL_STATIC(0x530240u,530);
}
B561aa9:L561aa9:{c.instructions+=2;NFSU2_TR(0x561aa9);
__builtin_memmove((R+4),(R+12),4);
}
B561aab:{NFSU2_TR(0x561aab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x561ab0ull));
TAIL_STATIC(0x55c460u,55c);
}
B561ab0:L561ab0:{c.instructions+=4;NFSU2_TR(0x561ab0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B561ab1:{NFSU2_TR(0x561ab1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B561ab2:{NFSU2_TR(0x561ab2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B561ab3:{NFSU2_TR(0x561ab3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B561ab6:L561ab6:{c.instructions+=2;NFSU2_TR(0x561ab6);
__builtin_memmove((R+4),(R+12),4);
}
B561ab8:{NFSU2_TR(0x561ab8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x561abdull));
TAIL_STATIC(0x547540u,547);
}
B561abd:L561abd:{c.instructions+=2;NFSU2_TR(0x561abd);
__builtin_memmove((R+4),(R+12),4);
}
B561abf:{NFSU2_TR(0x561abf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x561ac4ull));
TAIL_STATIC(0x55c460u,55c);
}
B561ac4:L561ac4:{c.instructions+=4;NFSU2_TR(0x561ac4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B561ac5:{NFSU2_TR(0x561ac5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B561ac6:{NFSU2_TR(0x561ac6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B561ac7:{NFSU2_TR(0x561ac7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B561ad0:L561ad0:{c.instructions+=17;NFSU2_TR(0x561ad0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561ad1:{NFSU2_TR(0x561ad1);
__builtin_memmove((R+20),(R+16),4);
}
B561ad3:{NFSU2_TR(0x561ad3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B561ad6:{NFSU2_TR(0x561ad6);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561ad8:{NFSU2_TR(0x561ad8);
u8 U[4];
w4(U+0,u32(0x778500ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561add:{NFSU2_TR(0x561add);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B561ae3:{NFSU2_TR(0x561ae3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561ae4:{NFSU2_TR(0x561ae4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B561aeb:{NFSU2_TR(0x561aeb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B561aee:{NFSU2_TR(0x561aee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B561af1:{NFSU2_TR(0x561af1);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x40ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x40ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B561af4:{NFSU2_TR(0x561af4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561af5:{NFSU2_TR(0x561af5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561af6:{NFSU2_TR(0x561af6);
__builtin_memmove((R+24),(R+4),4);
}
B561af8:{NFSU2_TR(0x561af8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561af9:{NFSU2_TR(0x561af9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B561afd:{NFSU2_TR(0x561afd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L561cf1;}}
}
B561b03:L561b03:{c.instructions+=2;NFSU2_TR(0x561b03);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x43ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x43ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x43ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B561b06:{NFSU2_TR(0x561b06);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L561cf1;}}
}
B561b0c:L561b0c:{c.instructions+=3;NFSU2_TR(0x561b0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B561b0f:{NFSU2_TR(0x561b0f);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x40ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x40ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B561b12:{NFSU2_TR(0x561b12);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L561cf1;}}
}
B561b18:L561b18:{c.instructions+=2;NFSU2_TR(0x561b18);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x43ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x43ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x43ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B561b1b:{NFSU2_TR(0x561b1b);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L561cf1;}}
}
B561b21:L561b21:{c.instructions+=10;NFSU2_TR(0x561b21);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B561b25:{NFSU2_TR(0x561b25);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B561b29:{NFSU2_TR(0x561b29);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B561b2d:{NFSU2_TR(0x561b2d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B561b31:{NFSU2_TR(0x561b31);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561b32:{NFSU2_TR(0x561b32);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B561b36:{NFSU2_TR(0x561b36);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561b37:{NFSU2_TR(0x561b37);
__builtin_memmove((R+4),(R+24),4);
}
B561b39:{NFSU2_TR(0x561b39);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B561b41:{NFSU2_TR(0x561b41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x561b46ull));
TAIL_STATIC(0x5216c0u,521);
}
B561b46:L561b46:{c.instructions+=4;NFSU2_TR(0x561b46);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B561b4a:{NFSU2_TR(0x561b4a);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B561b4e:{NFSU2_TR(0x561b4e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B561b50:{NFSU2_TR(0x561b50);
if(r1(R+518)){{goto L561cba;}}
}
B561b56:L561b56:{c.instructions+=10;NFSU2_TR(0x561b56);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B561b5a:{NFSU2_TR(0x561b5a);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B561b5e:{NFSU2_TR(0x561b5e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B561b62:{NFSU2_TR(0x561b62);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B561b66:{NFSU2_TR(0x561b66);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561b67:{NFSU2_TR(0x561b67);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B561b6b:{NFSU2_TR(0x561b6b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561b6c:{NFSU2_TR(0x561b6c);
__builtin_memmove((R+4),(R+24),4);
}
B561b6e:{NFSU2_TR(0x561b6e);
u8 U[5];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B561b73:{NFSU2_TR(0x561b73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x561b78ull));
TAIL_STATIC(0x5216c0u,521);
}
B561b78:L561b78:{c.instructions+=3;NFSU2_TR(0x561b78);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B561b7c:{NFSU2_TR(0x561b7c);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B561b80:{NFSU2_TR(0x561b80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x561b85ull));
TAIL_STATIC(0x502fd0u,502);
}
B561b85:L561b85:{c.instructions+=4;NFSU2_TR(0x561b85);
__builtin_memmove((R+12),(R+0),4);
}
B561b87:{NFSU2_TR(0x561b87);
__builtin_memmove((R+0),(R+24),4);
}
B561b89:{NFSU2_TR(0x561b89);
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
B561b8b:{NFSU2_TR(0x561b8b);
if(r1(R+518)){{goto L561bc0;}}
}
B561b8d:L561b8d:{c.instructions+=1;NFSU2_TR(0x561b8d);
__builtin_memmove((R+4),(R+4),4);
}
B561b90:L561b90:{c.instructions+=3;NFSU2_TR(0x561b90);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B561b93:{NFSU2_TR(0x561b93);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x40ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B561b96:{NFSU2_TR(0x561b96);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L561ba2;}}
}
B561b98:L561b98:{c.instructions+=2;NFSU2_TR(0x561b98);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x43ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x43ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B561b9b:{NFSU2_TR(0x561b9b);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L561ba2;}}
}
B561b9d:L561b9d:{c.instructions+=2;NFSU2_TR(0x561b9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B561ba0:{NFSU2_TR(0x561ba0);
{goto L561bba;}
}
B561ba2:L561ba2:{c.instructions+=2;NFSU2_TR(0x561ba2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4dull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4dull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B561ba5:{NFSU2_TR(0x561ba5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L561bba;}}
}
B561ba7:L561ba7:{c.instructions+=2;NFSU2_TR(0x561ba7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x5cull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5cull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B561baa:{NFSU2_TR(0x561baa);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L561bba;}}
}
B561bac:L561bac:{c.instructions+=4;NFSU2_TR(0x561bac);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B561bb0:{NFSU2_TR(0x561bb0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561bb1:{NFSU2_TR(0x561bb1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561bb2:{NFSU2_TR(0x561bb2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x561bb7ull));
TAIL_STATIC(0x50ef50u,50e);
}
B561bb7:L561bb7:{c.instructions+=1;NFSU2_TR(0x561bb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B561bba:L561bba:{c.instructions+=3;NFSU2_TR(0x561bba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B561bbc:{NFSU2_TR(0x561bbc);
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
B561bbe:{NFSU2_TR(0x561bbe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x561b90u);}goto L561b90;}}
}
B561bc0:L561bc0:{c.instructions+=4;NFSU2_TR(0x561bc0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B561bc4:{NFSU2_TR(0x561bc4);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B561bc8:{NFSU2_TR(0x561bc8);
__builtin_memmove((R+28),(R+24),4);
}
B561bca:{NFSU2_TR(0x561bca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x561bcfull));
TAIL_STATIC(0x502fd0u,502);
}
B561bcf:L561bcf:{c.instructions+=3;NFSU2_TR(0x561bcf);
__builtin_memmove((R+12),(R+0),4);
}
B561bd1:{NFSU2_TR(0x561bd1);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B561bd3:{NFSU2_TR(0x561bd3);
if(r1(R+518)){{goto L561c0f;}}
}
B561bd5:L561bd5:{c.instructions+=3;NFSU2_TR(0x561bd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B561bd8:{NFSU2_TR(0x561bd8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x40ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B561bdb:{NFSU2_TR(0x561bdb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L561bea;}}
}
B561bdd:L561bdd:{c.instructions+=2;NFSU2_TR(0x561bdd);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x43ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x43ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B561be0:{NFSU2_TR(0x561be0);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L561bea;}}
}
B561be2:L561be2:{c.instructions+=3;NFSU2_TR(0x561be2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B561be5:{NFSU2_TR(0x561be5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B561be8:{NFSU2_TR(0x561be8);
{goto L561c05;}
}
B561bea:L561bea:{c.instructions+=2;NFSU2_TR(0x561bea);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4dull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4dull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B561bed:{NFSU2_TR(0x561bed);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L561c09;}}
}
B561bef:L561bef:{c.instructions+=2;NFSU2_TR(0x561bef);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x5cull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5cull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B561bf2:{NFSU2_TR(0x561bf2);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L561c09;}}
}
B561bf4:L561bf4:{c.instructions+=5;NFSU2_TR(0x561bf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B561bf7:{NFSU2_TR(0x561bf7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561bf8:{NFSU2_TR(0x561bf8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B561bfc:{NFSU2_TR(0x561bfc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561bfd:{NFSU2_TR(0x561bfd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x561c02ull));
TAIL_STATIC(0x50ef50u,50e);
}
B561c02:L561c02:{c.instructions+=1;NFSU2_TR(0x561c02);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B561c05:L561c05:{c.instructions+=1;NFSU2_TR(0x561c05);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B561c09:L561c09:{c.instructions+=3;NFSU2_TR(0x561c09);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B561c0b:{NFSU2_TR(0x561c0b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B561c0d:{NFSU2_TR(0x561c0d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x561bd5u);}goto L561bd5;}}
}
B561c0f:L561c0f:{c.instructions+=5;NFSU2_TR(0x561c0f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B561c13:{NFSU2_TR(0x561c13);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B561c17:{NFSU2_TR(0x561c17);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B561c1b:{NFSU2_TR(0x561c1b);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B561c1d:{NFSU2_TR(0x561c1d);
if(r1(R+518)){{goto L561c4b;}}
}
B561c1f:L561c1f:{c.instructions+=1;NFSU2_TR(0x561c1f);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
__builtin_memmove((R+4),(U+0),4);
}
B561c22:L561c22:{c.instructions+=14;NFSU2_TR(0x561c22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B561c24:{NFSU2_TR(0x561c24);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B561c27:{NFSU2_TR(0x561c27);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+28)),r4(U+0));
}
B561c29:{NFSU2_TR(0x561c29);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B561c2c:{NFSU2_TR(0x561c2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B561c2f:{NFSU2_TR(0x561c2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B561c32:{NFSU2_TR(0x561c32);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B561c34:{NFSU2_TR(0x561c34);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B561c37:{NFSU2_TR(0x561c37);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B561c39:{NFSU2_TR(0x561c39);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B561c3b:{NFSU2_TR(0x561c3b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B561c3f:{NFSU2_TR(0x561c3f);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B561c43:{NFSU2_TR(0x561c43);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B561c45:{NFSU2_TR(0x561c45);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x561c22u);}goto L561c22;}}
}
B561c47:L561c47:{c.instructions+=1;NFSU2_TR(0x561c47);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B561c4b:L561c4b:{c.instructions+=3;NFSU2_TR(0x561c4b);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B561c4f:{NFSU2_TR(0x561c4f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B561c51:{NFSU2_TR(0x561c51);
if(r1(R+518)){{goto L561c7d;}}
}
B561c53:L561c53:{c.instructions+=1;NFSU2_TR(0x561c53);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
__builtin_memmove((R+4),(U+0),4);
}
B561c56:L561c56:{c.instructions+=15;NFSU2_TR(0x561c56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B561c58:{NFSU2_TR(0x561c58);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B561c5b:{NFSU2_TR(0x561c5b);
__builtin_memmove((R+0),(R+24),4);
}
B561c5d:{NFSU2_TR(0x561c5d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B561c60:{NFSU2_TR(0x561c60);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+28)),r4(U+0));
}
B561c62:{NFSU2_TR(0x561c62);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B561c65:{NFSU2_TR(0x561c65);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B561c68:{NFSU2_TR(0x561c68);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B561c6a:{NFSU2_TR(0x561c6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B561c6d:{NFSU2_TR(0x561c6d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B561c6f:{NFSU2_TR(0x561c6f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B561c71:{NFSU2_TR(0x561c71);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B561c75:{NFSU2_TR(0x561c75);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B561c79:{NFSU2_TR(0x561c79);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B561c7b:{NFSU2_TR(0x561c7b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x561c56u);}goto L561c56;}}
}
B561c7d:L561c7d:{c.instructions+=2;NFSU2_TR(0x561c7d);
__builtin_memmove((R+4),(R+12),4);
}
B561c7f:{NFSU2_TR(0x561c7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x561c84ull));
TAIL_STATIC(0x55c460u,55c);
}
B561c84:L561c84:{c.instructions+=5;NFSU2_TR(0x561c84);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B561c88:{NFSU2_TR(0x561c88);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B561c8c:{NFSU2_TR(0x561c8c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B561c8e:{NFSU2_TR(0x561c8e);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B561c93:{NFSU2_TR(0x561c93);
if(r1(R+518)){{goto L561cb6;}}
}
B561c95:L561c95:{c.instructions+=7;NFSU2_TR(0x561c95);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B561c97:{NFSU2_TR(0x561c97);
__builtin_memmove((R+8),(R+0),4);
}
B561c99:{NFSU2_TR(0x561c99);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B561c9c:{NFSU2_TR(0x561c9c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B561c9e:{NFSU2_TR(0x561c9e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561c9f:{NFSU2_TR(0x561c9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B561ca2:{NFSU2_TR(0x561ca2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x561ca7ull));
TAIL_STATIC(0x575630u,575);
}
B561ca7:L561ca7:{c.instructions+=5;NFSU2_TR(0x561ca7);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B561cab:{NFSU2_TR(0x561cab);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B561caf:{NFSU2_TR(0x561caf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B561cb2:{NFSU2_TR(0x561cb2);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B561cb4:{NFSU2_TR(0x561cb4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x561c95u);}goto L561c95;}}
}
B561cb6:L561cb6:{c.instructions+=1;NFSU2_TR(0x561cb6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B561cba:L561cba:{c.instructions+=4;NFSU2_TR(0x561cba);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B561cbe:{NFSU2_TR(0x561cbe);
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
B561cc0:{NFSU2_TR(0x561cc0);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B561cc8:{NFSU2_TR(0x561cc8);
if(r1(R+518)){{goto L561cf1;}}
}
B561cca:L561cca:{c.instructions+=1;NFSU2_TR(0x561cca);
__builtin_memmove((R+12),(R+12),4);
}
B561cd0:L561cd0:{c.instructions+=7;NFSU2_TR(0x561cd0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B561cd2:{NFSU2_TR(0x561cd2);
__builtin_memmove((R+8),(R+0),4);
}
B561cd4:{NFSU2_TR(0x561cd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B561cd7:{NFSU2_TR(0x561cd7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B561cd9:{NFSU2_TR(0x561cd9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561cda:{NFSU2_TR(0x561cda);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B561cdd:{NFSU2_TR(0x561cdd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x561ce2ull));
TAIL_STATIC(0x575630u,575);
}
B561ce2:L561ce2:{c.instructions+=5;NFSU2_TR(0x561ce2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B561ce6:{NFSU2_TR(0x561ce6);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B561cea:{NFSU2_TR(0x561cea);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B561ced:{NFSU2_TR(0x561ced);
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
B561cef:{NFSU2_TR(0x561cef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x561cd0u);}goto L561cd0;}}
}
B561cf1:L561cf1:{c.instructions+=8;NFSU2_TR(0x561cf1);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B561cf5:{NFSU2_TR(0x561cf5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B561cf6:{NFSU2_TR(0x561cf6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B561cf7:{NFSU2_TR(0x561cf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B561cfe:{NFSU2_TR(0x561cfe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B561cff:{NFSU2_TR(0x561cff);
__builtin_memmove((R+16),(R+20),4);
}
B561d01:{NFSU2_TR(0x561d01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B561d02:{NFSU2_TR(0x561d02);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B561d10:L561d10:{c.instructions+=9;NFSU2_TR(0x561d10);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561d11:{NFSU2_TR(0x561d11);
__builtin_memmove((R+20),(R+16),4);
}
B561d13:{NFSU2_TR(0x561d13);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561d14:{NFSU2_TR(0x561d14);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561d15:{NFSU2_TR(0x561d15);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561d16:{NFSU2_TR(0x561d16);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B561d19:{NFSU2_TR(0x561d19);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc519bfc3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B561d1f:{NFSU2_TR(0x561d1f);
__builtin_memmove((R+24),(R+4),4);
}
B561d21:{NFSU2_TR(0x561d21);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L561d50;}}
}
B561d23:L561d23:{c.instructions+=3;NFSU2_TR(0x561d23);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B561d26:{NFSU2_TR(0x561d26);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B561d28:{NFSU2_TR(0x561d28);
if(r1(R+518)){{goto L561d2f;}}
}
B561d2a:L561d2a:{c.instructions+=2;NFSU2_TR(0x561d2a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B561d2d:{NFSU2_TR(0x561d2d);
{goto L561d31;}
}
B561d2f:L561d2f:{c.instructions+=1;NFSU2_TR(0x561d2f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B561d31:L561d31:{c.instructions+=2;NFSU2_TR(0x561d31);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B561d34:{NFSU2_TR(0x561d34);
if(r1(R+518)){{goto L561d49;}}
}
B561d36:L561d36:{c.instructions+=3;NFSU2_TR(0x561d36);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B561d39:{NFSU2_TR(0x561d39);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B561d3b:{NFSU2_TR(0x561d3b);
if(r1(R+518)){{goto L561d42;}}
}
B561d3d:L561d3d:{c.instructions+=2;NFSU2_TR(0x561d3d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B561d40:{NFSU2_TR(0x561d40);
{goto L561d44;}
}
B561d42:L561d42:{c.instructions+=1;NFSU2_TR(0x561d42);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B561d44:L561d44:{c.instructions+=2;NFSU2_TR(0x561d44);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B561d47:{NFSU2_TR(0x561d47);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L561d50;}}
}
B561d49:L561d49:{c.instructions+=1;NFSU2_TR(0x561d49);
s1(0x83855e,u8(0x1ull));
}
B561d50:L561d50:{c.instructions+=3;NFSU2_TR(0x561d50);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B561d56:{NFSU2_TR(0x561d56);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B561d58:{NFSU2_TR(0x561d58);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L561d6e;}}
}
B561d5a:L561d5a:{c.instructions+=9;NFSU2_TR(0x561d5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B561d5d:{NFSU2_TR(0x561d5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B561d60:{NFSU2_TR(0x561d60);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B561d63:{NFSU2_TR(0x561d63);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561d64:{NFSU2_TR(0x561d64);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561d65:{NFSU2_TR(0x561d65);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561d66:{NFSU2_TR(0x561d66);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561d67:{NFSU2_TR(0x561d67);
__builtin_memmove((R+4),(R+24),4);
}
B561d69:{NFSU2_TR(0x561d69);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x561d6eull));
TAIL_STATIC(0x543d40u,543);
}
B561d6e:L561d6e:{c.instructions+=3;NFSU2_TR(0x561d6e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x911ab364ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B561d74:{NFSU2_TR(0x561d74);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B561d77:{NFSU2_TR(0x561d77);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L561f66;}}
}
B561d7d:L561d7d:{c.instructions+=1;NFSU2_TR(0x561d7d);
if(r1(R+518)){{goto L561f29;}}
}
B561d83:L561d83:{c.instructions+=2;NFSU2_TR(0x561d83);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x35f8620bull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x35f8620bull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B561d89:{NFSU2_TR(0x561d89);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L561e87;}}
}
B561d8f:L561d8f:{c.instructions+=1;NFSU2_TR(0x561d8f);
if(r1(R+518)){{goto L561e5f;}}
}
B561d95:L561d95:{c.instructions+=2;NFSU2_TR(0x561d95);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9f00f07ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B561d9b:{NFSU2_TR(0x561d9b);
if(r1(R+518)){{goto L561e06;}}
}
B561d9d:L561d9d:{c.instructions+=2;NFSU2_TR(0x561d9d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc407210ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B561da3:{NFSU2_TR(0x561da3);
if(r1(R+518)){{goto L561ded;}}
}
B561da5:L561da5:{c.instructions+=2;NFSU2_TR(0x561da5);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x34dc1becull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x34dc1becull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x34dc1becull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B561dab:{NFSU2_TR(0x561dab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x5620bau,562);}
}
B561db1:L561db1:{c.instructions+=3;NFSU2_TR(0x561db1);
__builtin_memmove((R+0),gp(0x83855e),1);
}
B561db6:{NFSU2_TR(0x561db6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B561db8:{NFSU2_TR(0x561db8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L561fa2;}}
}
B561dbe:L561dbe:{c.instructions+=3;NFSU2_TR(0x561dbe);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x22ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B561dc1:{NFSU2_TR(0x561dc1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B561dc3:{NFSU2_TR(0x561dc3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L561fa2;}}
}
B561dc9:L561dc9:{c.instructions+=6;NFSU2_TR(0x561dc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B561dcc:{NFSU2_TR(0x561dcc);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561dce:{NFSU2_TR(0x561dce);
u8 U[4];
w4(U+0,u32(0x790cecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561dd3:{NFSU2_TR(0x561dd3);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561dd8:{NFSU2_TR(0x561dd8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561dd9:{NFSU2_TR(0x561dd9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x561ddeull));
TAIL_STATIC(0x537c00u,537);
}
B561dde:L561dde:{c.instructions+=2;NFSU2_TR(0x561dde);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B561de1:{NFSU2_TR(0x561de1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x561de6ull));
TAIL_STATIC(0x53b6c0u,53b);
}
B561de6:L561de6:{c.instructions+=5;NFSU2_TR(0x561de6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B561de7:{NFSU2_TR(0x561de7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B561de8:{NFSU2_TR(0x561de8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B561de9:{NFSU2_TR(0x561de9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B561dea:{NFSU2_TR(0x561dea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B561ded:L561ded:{c.instructions+=3;NFSU2_TR(0x561ded);
u8 U[4];
w4(U+0,u32(0x799cd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561df2:{NFSU2_TR(0x561df2);
u8 U[4];
w4(U+0,u32(0xc407210ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561df7:{NFSU2_TR(0x561df7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x561dfcull));
TAIL_STATIC(0x55dda0u,55d);
}
B561dfc:L561dfc:{c.instructions+=6;NFSU2_TR(0x561dfc);
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
B561dff:{NFSU2_TR(0x561dff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B561e00:{NFSU2_TR(0x561e00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B561e01:{NFSU2_TR(0x561e01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B561e02:{NFSU2_TR(0x561e02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B561e03:{NFSU2_TR(0x561e03);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B561e06:L561e06:{c.instructions+=4;NFSU2_TR(0x561e06);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B561e09:{NFSU2_TR(0x561e09);
w4(R+28,u32(0x1ull));
}
B561e0e:{NFSU2_TR(0x561e0e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B561e10:{NFSU2_TR(0x561e10);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L561e17;}}
}
B561e12:L561e12:{c.instructions+=2;NFSU2_TR(0x561e12);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B561e15:{NFSU2_TR(0x561e15);
{goto L561e19;}
}
B561e17:L561e17:{c.instructions+=1;NFSU2_TR(0x561e17);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B561e19:L561e19:{c.instructions+=2;NFSU2_TR(0x561e19);
__builtin_memmove(gp(0x839bb4),(R+0),4);
}
B561e1e:{NFSU2_TR(0x561e1e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x561e23ull));
TAIL_STATIC(0x53b6c0u,53b);
}
B561e23:L561e23:{c.instructions+=3;NFSU2_TR(0x561e23);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B561e26:{NFSU2_TR(0x561e26);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B561e29:{NFSU2_TR(0x561e29);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L561e30;}}
}
B561e2b:L561e2b:{c.instructions+=2;NFSU2_TR(0x561e2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B561e2e:{NFSU2_TR(0x561e2e);
{goto L561e32;}
}
B561e30:L561e30:{c.instructions+=1;NFSU2_TR(0x561e30);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B561e32:L561e32:{c.instructions+=2;NFSU2_TR(0x561e32);
__builtin_memmove((R+4),(R+0),4);
}
B561e34:{NFSU2_TR(0x561e34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x561e39ull));
TAIL_STATIC(0x500160u,500);
}
B561e39:L561e39:{c.instructions+=2;NFSU2_TR(0x561e39);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B561e3b:{NFSU2_TR(0x561e3b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L561e50;}}
}
B561e3d:L561e3d:{c.instructions+=1;NFSU2_TR(0x561e3d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x561e42ull));
TAIL_STATIC(0x54f980u,54f);
}
B561e42:L561e42:{c.instructions+=2;NFSU2_TR(0x561e42);
__builtin_memmove((R+4),(R+0),4);
}
B561e44:{NFSU2_TR(0x561e44);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x561e49ull));
TAIL_STATIC(0x55bd60u,55b);
}
B561e49:L561e49:{c.instructions+=5;NFSU2_TR(0x561e49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B561e4a:{NFSU2_TR(0x561e4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B561e4b:{NFSU2_TR(0x561e4b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B561e4c:{NFSU2_TR(0x561e4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B561e4d:{NFSU2_TR(0x561e4d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B561e50:L561e50:{c.instructions+=3;NFSU2_TR(0x561e50);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561e51:{NFSU2_TR(0x561e51);
__builtin_memmove((R+4),(R+24),4);
}
B561e53:{NFSU2_TR(0x561e53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x561e58ull));
TAIL_STATIC(0x5501e0u,550);
}
B561e58:L561e58:{c.instructions+=5;NFSU2_TR(0x561e58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B561e59:{NFSU2_TR(0x561e59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B561e5a:{NFSU2_TR(0x561e5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B561e5b:{NFSU2_TR(0x561e5b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B561e5c:{NFSU2_TR(0x561e5c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B561e5f:L561e5f:{c.instructions+=1;NFSU2_TR(0x561e5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x561e64ull));
TAIL_STATIC(0x53b6c0u,53b);
}
B561e64:L561e64:{c.instructions+=4;NFSU2_TR(0x561e64);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x162ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B561e6a:{NFSU2_TR(0x561e6a);
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
B561e6c:{NFSU2_TR(0x561e6c);
s1(0x83855b,u8(0x0ull));
}
B561e73:{NFSU2_TR(0x561e73);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x5620bau,562);}
}
B561e79:L561e79:{c.instructions+=2;NFSU2_TR(0x561e79);
__builtin_memmove((R+4),(R+24),4);
}
B561e7b:{NFSU2_TR(0x561e7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x561e80ull));
TAIL_STATIC(0x521de0u,521);
}
B561e80:L561e80:{c.instructions+=5;NFSU2_TR(0x561e80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B561e81:{NFSU2_TR(0x561e81);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B561e82:{NFSU2_TR(0x561e82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B561e83:{NFSU2_TR(0x561e83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B561e84:{NFSU2_TR(0x561e84);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B561e87:L561e87:{c.instructions+=2;NFSU2_TR(0x561e87);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x422f7587ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B561e8d:{NFSU2_TR(0x561e8d);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x561e3du);}goto L561e3d;}}
}
B561e8f:L561e8f:{c.instructions+=2;NFSU2_TR(0x561e8f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x51123592ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B561e95:{NFSU2_TR(0x561e95);
if(r1(R+518)){{goto L561f14;}}
}
B561e97:L561e97:{c.instructions+=2;NFSU2_TR(0x561e97);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x8577e0a0ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x8577e0a0ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8577e0a0ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B561e9d:{NFSU2_TR(0x561e9d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x5620bau,562);}
}
B561ea3:L561ea3:{c.instructions+=6;NFSU2_TR(0x561ea3);
u8 U[4];
w4(U+0,u32(0x78f9d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561ea8:{NFSU2_TR(0x561ea8);
s1(0x83855d,u8(0x0ull));
}
B561eaf:{NFSU2_TR(0x561eaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B561eb2:{NFSU2_TR(0x561eb2);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561eb7:{NFSU2_TR(0x561eb7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561eb8:{NFSU2_TR(0x561eb8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x561ebdull));
TAIL_STATIC(0x537cc0u,537);
}
B561ebd:L561ebd:{c.instructions+=3;NFSU2_TR(0x561ebd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B561ec0:{NFSU2_TR(0x561ec0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B561ec2:{NFSU2_TR(0x561ec2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L561ee3;}}
}
B561ec4:L561ec4:{c.instructions+=6;NFSU2_TR(0x561ec4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B561ec7:{NFSU2_TR(0x561ec7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561ec9:{NFSU2_TR(0x561ec9);
u8 U[4];
w4(U+0,u32(0x78f9d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561ece:{NFSU2_TR(0x561ece);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561ed3:{NFSU2_TR(0x561ed3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561ed4:{NFSU2_TR(0x561ed4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x561ed9ull));
TAIL_STATIC(0x537c00u,537);
}
B561ed9:L561ed9:{c.instructions+=6;NFSU2_TR(0x561ed9);
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
B561edc:{NFSU2_TR(0x561edc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B561edd:{NFSU2_TR(0x561edd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B561ede:{NFSU2_TR(0x561ede);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B561edf:{NFSU2_TR(0x561edf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B561ee0:{NFSU2_TR(0x561ee0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B561ee3:L561ee3:{c.instructions+=3;NFSU2_TR(0x561ee3);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x22ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B561ee6:{NFSU2_TR(0x561ee6);
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
B561ee8:{NFSU2_TR(0x561ee8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x5620bau,562);}
}
B561eee:L561eee:{c.instructions+=7;NFSU2_TR(0x561eee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B561ef1:{NFSU2_TR(0x561ef1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561ef3:{NFSU2_TR(0x561ef3);
u8 U[4];
w4(U+0,u32(0x79d7e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561ef8:{NFSU2_TR(0x561ef8);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561efd:{NFSU2_TR(0x561efd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561efe:{NFSU2_TR(0x561efe);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x163ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B561f05:{NFSU2_TR(0x561f05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x561f0aull));
TAIL_STATIC(0x537c00u,537);
}
B561f0a:L561f0a:{c.instructions+=6;NFSU2_TR(0x561f0a);
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
B561f0d:{NFSU2_TR(0x561f0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B561f0e:{NFSU2_TR(0x561f0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B561f0f:{NFSU2_TR(0x561f0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B561f10:{NFSU2_TR(0x561f10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B561f11:{NFSU2_TR(0x561f11);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B561f14:L561f14:{c.instructions+=1;NFSU2_TR(0x561f14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x561f19ull));
TAIL_STATIC(0x53b6c0u,53b);
}
B561f19:L561f19:{c.instructions+=3;NFSU2_TR(0x561f19);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561f1b:{NFSU2_TR(0x561f1b);
__builtin_memmove((R+4),(R+24),4);
}
B561f1d:{NFSU2_TR(0x561f1d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x561f22ull));
TAIL_STATIC(0x5501e0u,550);
}
B561f22:L561f22:{c.instructions+=5;NFSU2_TR(0x561f22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B561f23:{NFSU2_TR(0x561f23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B561f24:{NFSU2_TR(0x561f24);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B561f25:{NFSU2_TR(0x561f25);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B561f26:{NFSU2_TR(0x561f26);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B561f29:L561f29:{c.instructions+=5;NFSU2_TR(0x561f29);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B561f2c:{NFSU2_TR(0x561f2c);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561f31:{NFSU2_TR(0x561f31);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561f36:{NFSU2_TR(0x561f36);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561f37:{NFSU2_TR(0x561f37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x561f3cull));
TAIL_STATIC(0x537d40u,537);
}
B561f3c:L561f3c:{c.instructions+=3;NFSU2_TR(0x561f3c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B561f3f:{NFSU2_TR(0x561f3f);
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
B561f41:{NFSU2_TR(0x561f41);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x5620bau,562);}
}
B561f47:L561f47:{c.instructions+=6;NFSU2_TR(0x561f47);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B561f4a:{NFSU2_TR(0x561f4a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561f4c:{NFSU2_TR(0x561f4c);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561f51:{NFSU2_TR(0x561f51);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561f56:{NFSU2_TR(0x561f56);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561f57:{NFSU2_TR(0x561f57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x561f5cull));
TAIL_STATIC(0x537c60u,537);
}
B561f5c:L561f5c:{c.instructions+=6;NFSU2_TR(0x561f5c);
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
B561f5f:{NFSU2_TR(0x561f5f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B561f60:{NFSU2_TR(0x561f60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B561f61:{NFSU2_TR(0x561f61);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B561f62:{NFSU2_TR(0x561f62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B561f63:{NFSU2_TR(0x561f63);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B561f66:L561f66:{c.instructions+=2;NFSU2_TR(0x561f66);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xd90a3ed0ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xd90a3ed0ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xd90a3ed0ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B561f6c:{NFSU2_TR(0x561f6c);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L561fdb;}}
}
B561f6e:L561f6e:{c.instructions+=1;NFSU2_TR(0x561f6e);
if(r1(R+518)){{goto L561fcd;}}
}
B561f70:L561f70:{c.instructions+=2;NFSU2_TR(0x561f70);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xb4623f67ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B561f76:{NFSU2_TR(0x561f76);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x561db1u);}goto L561db1;}}
}
B561f7c:L561f7c:{c.instructions+=2;NFSU2_TR(0x561f7c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xb4edeb6dull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B561f82:{NFSU2_TR(0x561f82);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x561db1u);}goto L561db1;}}
}
B561f88:L561f88:{c.instructions+=2;NFSU2_TR(0x561f88);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xc516cd37ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xc516cd37ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xc516cd37ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B561f8e:{NFSU2_TR(0x561f8e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x5620bau,562);}
}
B561f94:L561f94:{c.instructions+=2;NFSU2_TR(0x561f94);
__builtin_memmove((R+4),(R+24),4);
}
B561f96:{NFSU2_TR(0x561f96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x561f9bull));
TAIL_STATIC(0x54ff90u,54f);
}
B561f9b:L561f9b:{c.instructions+=5;NFSU2_TR(0x561f9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B561f9c:{NFSU2_TR(0x561f9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B561f9d:{NFSU2_TR(0x561f9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B561f9e:{NFSU2_TR(0x561f9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B561f9f:{NFSU2_TR(0x561f9f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B561fa2:L561fa2:{c.instructions+=6;NFSU2_TR(0x561fa2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B561fa5:{NFSU2_TR(0x561fa5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561fa7:{NFSU2_TR(0x561fa7);
u8 U[4];
w4(U+0,u32(0x79d7d8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561fac:{NFSU2_TR(0x561fac);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561fb1:{NFSU2_TR(0x561fb1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B561fb2:{NFSU2_TR(0x561fb2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x561fb7ull));
TAIL_STATIC(0x537c00u,537);
}
B561fb7:L561fb7:{c.instructions+=3;NFSU2_TR(0x561fb7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B561fba:{NFSU2_TR(0x561fba);
s1(0x83855e,u8(0x0ull));
}
B561fc1:{NFSU2_TR(0x561fc1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x561fc6ull));
TAIL_STATIC(0x53b6c0u,53b);
}
B561fc6:L561fc6:{c.instructions+=5;NFSU2_TR(0x561fc6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B561fc7:{NFSU2_TR(0x561fc7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B561fc8:{NFSU2_TR(0x561fc8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B561fc9:{NFSU2_TR(0x561fc9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B561fca:{NFSU2_TR(0x561fca);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B561fcd:L561fcd:{c.instructions+=6;NFSU2_TR(0x561fcd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B561fce:{NFSU2_TR(0x561fce);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x163ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B561fd5:{NFSU2_TR(0x561fd5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B561fd6:{NFSU2_TR(0x561fd6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B561fd7:{NFSU2_TR(0x561fd7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B561fd8:{NFSU2_TR(0x561fd8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B561fdb:L561fdb:{c.instructions+=2;NFSU2_TR(0x561fdb);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xe1fde1d1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B561fe1:{NFSU2_TR(0x561fe1);
if(r1(R+518)){TAIL_STATIC(0x56208du,562);}
}
B561fe7:L561fe7:{c.instructions+=2;NFSU2_TR(0x561fe7);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xe75749d4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B561fed:{NFSU2_TR(0x561fed);
if(r1(R+518)){TAIL_STATIC(0x56203cu,562);}
}
B561fef:L561fef:{c.instructions+=2;NFSU2_TR(0x561fef);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xfa523391ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xfa523391ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xfa523391ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B561ff5:{NFSU2_TR(0x561ff5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x5620bau,562);}
}
B561ffb:L561ffb:{c.instructions+=1;NFSU2_TR(0x561ffb);
__builtin_memmove((R+0),gp(0x83855d),1);
TAIL_STATIC(0x562000u,562);
}
XIT:NFSU2_TR_EXIT(0x561,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
