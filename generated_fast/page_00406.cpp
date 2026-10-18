#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_407(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_578(u8* __restrict R,Cpu& c);
u32 body_591(u8* __restrict R,Cpu& c);
u32 body_59d(u8* __restrict R,Cpu& c);
u32 body_59f(u8* __restrict R,Cpu& c);
u32 body_5bf(u8* __restrict R,Cpu& c);
u32 body_5c1(u8* __restrict R,Cpu& c);
u32 body_5c9(u8* __restrict R,Cpu& c);
u32 body_5cd(u8* __restrict R,Cpu& c);
u32 body_5eb(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x406,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x406,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_406(u8* __restrict R,Cpu& c);
u32 page_406(Cpu& c){return body_406(c.regs.data(),c);}
__attribute__((noinline)) u32 body_406(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x406000:goto L406000;
case 0x406004:c.instructions+=3;goto B406004;
case 0x406006:c.instructions+=2;goto B406006;
case 0x406009:c.instructions+=1;goto B406009;
case 0x40600b:goto L40600b;
case 0x406010:c.instructions+=2;goto B406010;
case 0x406012:c.instructions+=1;goto B406012;
case 0x406014:goto L406014;
case 0x406019:c.instructions+=2;goto B406019;
case 0x40601b:c.instructions+=1;goto B40601b;
case 0x40601d:goto L40601d;
case 0x406022:c.instructions+=2;goto B406022;
case 0x406024:c.instructions+=1;goto B406024;
case 0x406026:goto L406026;
case 0x40602b:c.instructions+=2;goto B40602b;
case 0x40602d:c.instructions+=1;goto B40602d;
case 0x40602f:goto L40602f;
case 0x406034:c.instructions+=2;goto B406034;
case 0x406036:c.instructions+=1;goto B406036;
case 0x406038:goto L406038;
case 0x406039:c.instructions+=2;goto B406039;
case 0x40603e:c.instructions+=1;goto B40603e;
case 0x406040:goto L406040;
case 0x406041:c.instructions+=1;goto B406041;
case 0x406046:goto L406046;
case 0x40604a:c.instructions+=3;goto B40604a;
case 0x40604c:c.instructions+=2;goto B40604c;
case 0x40604f:c.instructions+=1;goto B40604f;
case 0x406054:goto L406054;
case 0x406058:c.instructions+=8;goto B406058;
case 0x40605a:c.instructions+=7;goto B40605a;
case 0x40605e:c.instructions+=6;goto B40605e;
case 0x406064:c.instructions+=5;goto B406064;
case 0x406068:c.instructions+=4;goto B406068;
case 0x40606a:c.instructions+=3;goto B40606a;
case 0x40606c:c.instructions+=2;goto B40606c;
case 0x40606f:c.instructions+=1;goto B40606f;
case 0x406071:goto L406071;
case 0x406075:c.instructions+=1;goto B406075;
case 0x406077:goto L406077;
case 0x40607a:c.instructions+=5;goto B40607a;
case 0x40607c:c.instructions+=4;goto B40607c;
case 0x406082:c.instructions+=3;goto B406082;
case 0x406084:c.instructions+=2;goto B406084;
case 0x406087:c.instructions+=1;goto B406087;
case 0x406089:goto L406089;
case 0x40608f:c.instructions+=7;goto B40608f;
case 0x406093:c.instructions+=6;goto B406093;
case 0x406099:c.instructions+=5;goto B406099;
case 0x40609d:c.instructions+=4;goto B40609d;
case 0x40609f:c.instructions+=3;goto B40609f;
case 0x4060a1:c.instructions+=2;goto B4060a1;
case 0x4060a4:c.instructions+=1;goto B4060a4;
case 0x4060a6:goto L4060a6;
case 0x4060aa:c.instructions+=1;goto B4060aa;
case 0x4060ac:goto L4060ac;
case 0x4060ae:goto L4060ae;
case 0x4060b2:c.instructions+=4;goto B4060b2;
case 0x4060b8:c.instructions+=3;goto B4060b8;
case 0x4060ba:c.instructions+=2;goto B4060ba;
case 0x4060bd:c.instructions+=1;goto B4060bd;
case 0x4060bf:goto L4060bf;
case 0x4060c7:goto L4060c7;
case 0x4060cb:c.instructions+=5;goto B4060cb;
case 0x4060cf:c.instructions+=4;goto B4060cf;
case 0x4060d5:c.instructions+=3;goto B4060d5;
case 0x4060d6:c.instructions+=2;goto B4060d6;
case 0x4060d9:c.instructions+=1;goto B4060d9;
case 0x4060e0:goto L4060e0;
case 0x4060e4:c.instructions+=12;goto B4060e4;
case 0x4060e5:c.instructions+=11;goto B4060e5;
case 0x4060e7:c.instructions+=10;goto B4060e7;
case 0x4060ed:c.instructions+=9;goto B4060ed;
case 0x4060f0:c.instructions+=8;goto B4060f0;
case 0x4060f5:c.instructions+=7;goto B4060f5;
case 0x4060f9:c.instructions+=6;goto B4060f9;
case 0x4060ff:c.instructions+=5;goto B4060ff;
case 0x406105:c.instructions+=4;goto B406105;
case 0x406109:c.instructions+=3;goto B406109;
case 0x40610b:c.instructions+=2;goto B40610b;
case 0x40610e:c.instructions+=1;goto B40610e;
case 0x406113:goto L406113;
case 0x406114:c.instructions+=3;goto B406114;
case 0x406117:c.instructions+=2;goto B406117;
case 0x40611a:c.instructions+=1;goto B40611a;
case 0x40611f:goto L40611f;
case 0x406124:c.instructions+=2;goto B406124;
case 0x406126:c.instructions+=1;goto B406126;
case 0x406128:goto L406128;
case 0x40612d:c.instructions+=2;goto B40612d;
case 0x40612f:c.instructions+=1;goto B40612f;
case 0x406131:goto L406131;
case 0x406136:c.instructions+=2;goto B406136;
case 0x406138:c.instructions+=1;goto B406138;
case 0x40613a:goto L40613a;
case 0x40613f:c.instructions+=2;goto B40613f;
case 0x406141:c.instructions+=1;goto B406141;
case 0x406143:goto L406143;
case 0x406148:c.instructions+=2;goto B406148;
case 0x40614a:c.instructions+=1;goto B40614a;
case 0x40614c:goto L40614c;
case 0x406151:c.instructions+=2;goto B406151;
case 0x406153:c.instructions+=1;goto B406153;
case 0x406155:goto L406155;
case 0x40615a:c.instructions+=2;goto B40615a;
case 0x40615c:c.instructions+=1;goto B40615c;
case 0x40615e:goto L40615e;
case 0x406163:c.instructions+=2;goto B406163;
case 0x406165:c.instructions+=1;goto B406165;
case 0x406167:goto L406167;
case 0x40616c:c.instructions+=2;goto B40616c;
case 0x406170:c.instructions+=1;goto B406170;
case 0x406172:goto L406172;
case 0x406178:c.instructions+=1;goto B406178;
case 0x40617c:goto L40617c;
case 0x40617e:c.instructions+=6;goto B40617e;
case 0x406184:c.instructions+=5;goto B406184;
case 0x406186:c.instructions+=4;goto B406186;
case 0x406187:c.instructions+=3;goto B406187;
case 0x40618c:c.instructions+=2;goto B40618c;
case 0x406190:c.instructions+=1;goto B406190;
case 0x406195:goto L406195;
case 0x406199:c.instructions+=10;goto B406199;
case 0x40619c:c.instructions+=9;goto B40619c;
case 0x40619d:c.instructions+=8;goto B40619d;
case 0x40619f:c.instructions+=7;goto B40619f;
case 0x4061a4:c.instructions+=6;goto B4061a4;
case 0x4061a8:c.instructions+=5;goto B4061a8;
case 0x4061aa:c.instructions+=4;goto B4061aa;
case 0x4061ad:c.instructions+=3;goto B4061ad;
case 0x4061af:c.instructions+=2;goto B4061af;
case 0x4061b2:c.instructions+=1;goto B4061b2;
case 0x4061b7:goto L4061b7;
case 0x4061bb:c.instructions+=2;goto B4061bb;
case 0x4061bc:c.instructions+=1;goto B4061bc;
case 0x4061c0:goto L4061c0;
case 0x4061c3:c.instructions+=13;goto B4061c3;
case 0x4061c4:c.instructions+=12;goto B4061c4;
case 0x4061c5:c.instructions+=11;goto B4061c5;
case 0x4061c7:c.instructions+=10;goto B4061c7;
case 0x4061ca:c.instructions+=9;goto B4061ca;
case 0x4061cd:c.instructions+=8;goto B4061cd;
case 0x4061cf:c.instructions+=7;goto B4061cf;
case 0x4061d7:c.instructions+=6;goto B4061d7;
case 0x4061d9:c.instructions+=5;goto B4061d9;
case 0x4061dd:c.instructions+=4;goto B4061dd;
case 0x4061df:c.instructions+=3;goto B4061df;
case 0x4061e1:c.instructions+=2;goto B4061e1;
case 0x4061e4:c.instructions+=1;goto B4061e4;
case 0x4061e6:goto L4061e6;
case 0x4061ea:c.instructions+=1;goto B4061ea;
case 0x4061ec:goto L4061ec;
case 0x4061ee:goto L4061ee;
case 0x4061f0:c.instructions+=4;goto B4061f0;
case 0x4061f2:c.instructions+=3;goto B4061f2;
case 0x4061f4:c.instructions+=2;goto B4061f4;
case 0x4061f7:c.instructions+=1;goto B4061f7;
case 0x4061f9:goto L4061f9;
case 0x4061fb:c.instructions+=1;goto B4061fb;
case 0x4061fd:goto L4061fd;
case 0x4061ff:c.instructions+=11;goto B4061ff;
case 0x406200:c.instructions+=10;goto B406200;
case 0x406202:c.instructions+=9;goto B406202;
case 0x406207:c.instructions+=8;goto B406207;
case 0x406209:c.instructions+=7;goto B406209;
case 0x40620b:c.instructions+=6;goto B40620b;
case 0x40620d:c.instructions+=5;goto B40620d;
case 0x40620f:c.instructions+=4;goto B40620f;
case 0x406215:c.instructions+=3;goto B406215;
case 0x406218:c.instructions+=2;goto B406218;
case 0x40621a:c.instructions+=1;goto B40621a;
case 0x40621f:goto L40621f;
case 0x406221:c.instructions+=2;goto B406221;
case 0x406225:c.instructions+=1;goto B406225;
case 0x40622b:goto L40622b;
case 0x40622d:c.instructions+=6;goto B40622d;
case 0x406233:c.instructions+=5;goto B406233;
case 0x406235:c.instructions+=4;goto B406235;
case 0x406239:c.instructions+=3;goto B406239;
case 0x40623a:c.instructions+=2;goto B40623a;
case 0x40623f:c.instructions+=1;goto B40623f;
case 0x406244:goto L406244;
case 0x406248:c.instructions+=17;goto B406248;
case 0x40624a:c.instructions+=16;goto B40624a;
case 0x40624d:c.instructions+=15;goto B40624d;
case 0x406253:c.instructions+=14;goto B406253;
case 0x406259:c.instructions+=13;goto B406259;
case 0x40625f:c.instructions+=12;goto B40625f;
case 0x406265:c.instructions+=11;goto B406265;
case 0x40626b:c.instructions+=10;goto B40626b;
case 0x40626d:c.instructions+=9;goto B40626d;
case 0x406273:c.instructions+=8;goto B406273;
case 0x406274:c.instructions+=7;goto B406274;
case 0x406279:c.instructions+=6;goto B406279;
case 0x40627b:c.instructions+=5;goto B40627b;
case 0x40627f:c.instructions+=4;goto B40627f;
case 0x406285:c.instructions+=3;goto B406285;
case 0x40628b:c.instructions+=2;goto B40628b;
case 0x40628f:c.instructions+=1;goto B40628f;
case 0x406294:goto L406294;
case 0x40629a:c.instructions+=10;goto B40629a;
case 0x40629b:c.instructions+=9;goto B40629b;
case 0x4062a0:c.instructions+=8;goto B4062a0;
case 0x4062a4:c.instructions+=7;goto B4062a4;
case 0x4062aa:c.instructions+=6;goto B4062aa;
case 0x4062ae:c.instructions+=5;goto B4062ae;
case 0x4062b2:c.instructions+=4;goto B4062b2;
case 0x4062b5:c.instructions+=3;goto B4062b5;
case 0x4062b7:c.instructions+=2;goto B4062b7;
case 0x4062ba:c.instructions+=1;goto B4062ba;
case 0x4062bf:goto L4062bf;
case 0x4062c3:c.instructions+=1;goto B4062c3;
case 0x4062c7:goto L4062c7;
case 0x4062c9:c.instructions+=2;goto B4062c9;
case 0x4062cc:c.instructions+=1;goto B4062cc;
case 0x4062d1:goto L4062d1;
case 0x4062d3:c.instructions+=27;goto B4062d3;
case 0x4062d9:c.instructions+=26;goto B4062d9;
case 0x4062db:c.instructions+=25;goto B4062db;
case 0x4062dd:c.instructions+=24;goto B4062dd;
case 0x4062e1:c.instructions+=23;goto B4062e1;
case 0x4062e4:c.instructions+=22;goto B4062e4;
case 0x4062e7:c.instructions+=21;goto B4062e7;
case 0x4062ea:c.instructions+=20;goto B4062ea;
case 0x4062ec:c.instructions+=19;goto B4062ec;
case 0x4062ee:c.instructions+=18;goto B4062ee;
case 0x4062f0:c.instructions+=17;goto B4062f0;
case 0x4062f2:c.instructions+=16;goto B4062f2;
case 0x4062f4:c.instructions+=15;goto B4062f4;
case 0x4062f6:c.instructions+=14;goto B4062f6;
case 0x4062f8:c.instructions+=13;goto B4062f8;
case 0x4062fa:c.instructions+=12;goto B4062fa;
case 0x4062fc:c.instructions+=11;goto B4062fc;
case 0x4062fe:c.instructions+=10;goto B4062fe;
case 0x406300:c.instructions+=9;goto B406300;
case 0x406302:c.instructions+=8;goto B406302;
case 0x406306:c.instructions+=7;goto B406306;
case 0x40630a:c.instructions+=6;goto B40630a;
case 0x40630c:c.instructions+=5;goto B40630c;
case 0x406312:c.instructions+=4;goto B406312;
case 0x406314:c.instructions+=3;goto B406314;
case 0x406316:c.instructions+=2;goto B406316;
case 0x406319:c.instructions+=1;goto B406319;
case 0x40631b:goto L40631b;
case 0x40631d:c.instructions+=1;goto B40631d;
case 0x40631f:goto L40631f;
case 0x406321:goto L406321;
case 0x406324:c.instructions+=3;goto B406324;
case 0x406328:c.instructions+=2;goto B406328;
case 0x40632a:c.instructions+=1;goto B40632a;
case 0x40632c:goto L40632c;
case 0x406332:c.instructions+=3;goto B406332;
case 0x406334:c.instructions+=2;goto B406334;
case 0x406337:c.instructions+=1;goto B406337;
case 0x406339:goto L406339;
case 0x40633d:c.instructions+=4;goto B40633d;
case 0x406343:c.instructions+=3;goto B406343;
case 0x406345:c.instructions+=2;goto B406345;
case 0x406348:c.instructions+=1;goto B406348;
case 0x40634a:goto L40634a;
case 0x40634e:c.instructions+=1;goto B40634e;
case 0x406350:goto L406350;
case 0x406356:c.instructions+=3;goto B406356;
case 0x406358:c.instructions+=2;goto B406358;
case 0x40635b:c.instructions+=1;goto B40635b;
case 0x40635d:goto L40635d;
case 0x406361:c.instructions+=4;goto B406361;
case 0x406367:c.instructions+=3;goto B406367;
case 0x406369:c.instructions+=2;goto B406369;
case 0x40636c:c.instructions+=1;goto B40636c;
case 0x40636e:goto L40636e;
case 0x406372:goto L406372;
case 0x406374:c.instructions+=1;goto B406374;
case 0x406376:goto L406376;
case 0x406379:c.instructions+=2;goto B406379;
case 0x40637b:c.instructions+=1;goto B40637b;
case 0x40637d:goto L40637d;
case 0x406381:c.instructions+=4;goto B406381;
case 0x406385:c.instructions+=3;goto B406385;
case 0x406387:c.instructions+=2;goto B406387;
case 0x40638a:c.instructions+=1;goto B40638a;
case 0x40638c:goto L40638c;
case 0x406390:c.instructions+=6;goto B406390;
case 0x406394:c.instructions+=5;goto B406394;
case 0x406398:c.instructions+=4;goto B406398;
case 0x40639e:c.instructions+=3;goto B40639e;
case 0x4063a0:c.instructions+=2;goto B4063a0;
case 0x4063a3:c.instructions+=1;goto B4063a3;
case 0x4063a5:goto L4063a5;
case 0x4063ad:c.instructions+=1;goto B4063ad;
case 0x4063af:goto L4063af;
case 0x4063b2:c.instructions+=5;goto B4063b2;
case 0x4063b4:c.instructions+=4;goto B4063b4;
case 0x4063ba:c.instructions+=3;goto B4063ba;
case 0x4063bc:c.instructions+=2;goto B4063bc;
case 0x4063bf:c.instructions+=1;goto B4063bf;
case 0x4063c1:goto L4063c1;
case 0x4063c7:c.instructions+=7;goto B4063c7;
case 0x4063cb:c.instructions+=6;goto B4063cb;
case 0x4063d1:c.instructions+=5;goto B4063d1;
case 0x4063d5:c.instructions+=4;goto B4063d5;
case 0x4063d7:c.instructions+=3;goto B4063d7;
case 0x4063d9:c.instructions+=2;goto B4063d9;
case 0x4063dc:c.instructions+=1;goto B4063dc;
case 0x4063de:goto L4063de;
case 0x4063e2:c.instructions+=1;goto B4063e2;
case 0x4063e4:goto L4063e4;
case 0x4063e6:goto L4063e6;
case 0x4063e9:c.instructions+=8;goto B4063e9;
case 0x4063ed:c.instructions+=7;goto B4063ed;
case 0x4063f3:c.instructions+=6;goto B4063f3;
case 0x4063f7:c.instructions+=5;goto B4063f7;
case 0x4063fb:c.instructions+=4;goto B4063fb;
case 0x406401:c.instructions+=3;goto B406401;
case 0x406403:c.instructions+=2;goto B406403;
case 0x406406:c.instructions+=1;goto B406406;
case 0x406408:goto L406408;
case 0x40640c:c.instructions+=5;goto B40640c;
case 0x406412:c.instructions+=4;goto B406412;
case 0x406416:c.instructions+=3;goto B406416;
case 0x406418:c.instructions+=2;goto B406418;
case 0x40641b:c.instructions+=1;goto B40641b;
case 0x40641d:goto L40641d;
case 0x40641f:c.instructions+=1;goto B40641f;
case 0x406425:goto L406425;
case 0x40642b:c.instructions+=1;goto B40642b;
case 0x406430:goto L406430;
case 0x406434:c.instructions+=13;goto B406434;
case 0x406436:c.instructions+=12;goto B406436;
case 0x40643b:c.instructions+=11;goto B40643b;
case 0x40643d:c.instructions+=10;goto B40643d;
case 0x40643f:c.instructions+=9;goto B40643f;
case 0x406442:c.instructions+=8;goto B406442;
case 0x406444:c.instructions+=7;goto B406444;
case 0x406447:c.instructions+=6;goto B406447;
case 0x406449:c.instructions+=5;goto B406449;
case 0x40644d:c.instructions+=4;goto B40644d;
case 0x40644e:c.instructions+=3;goto B40644e;
case 0x40644f:c.instructions+=2;goto B40644f;
case 0x406452:c.instructions+=1;goto B406452;
case 0x406455:goto L406455;
case 0x40645b:c.instructions+=1;goto B40645b;
case 0x406460:goto L406460;
case 0x406461:c.instructions+=10;goto B406461;
case 0x406463:c.instructions+=9;goto B406463;
case 0x406466:c.instructions+=8;goto B406466;
case 0x406469:c.instructions+=7;goto B406469;
case 0x40646a:c.instructions+=6;goto B40646a;
case 0x40646b:c.instructions+=5;goto B40646b;
case 0x40646c:c.instructions+=4;goto B40646c;
case 0x40646e:c.instructions+=3;goto B40646e;
case 0x406470:c.instructions+=2;goto B406470;
case 0x406474:c.instructions+=1;goto B406474;
case 0x40647a:goto L40647a;
case 0x40647d:c.instructions+=2;goto B40647d;
case 0x40647f:c.instructions+=1;goto B40647f;
case 0x406485:goto L406485;
case 0x40648b:c.instructions+=2;goto B40648b;
case 0x40648d:c.instructions+=1;goto B40648d;
case 0x406493:goto L406493;
case 0x406496:c.instructions+=2;goto B406496;
case 0x406497:c.instructions+=1;goto B406497;
case 0x40649c:goto L40649c;
case 0x40649e:c.instructions+=1;goto B40649e;
case 0x4064a4:goto L4064a4;
case 0x4064a9:c.instructions+=2;goto B4064a9;
case 0x4064ab:c.instructions+=1;goto B4064ab;
case 0x4064b1:goto L4064b1;
case 0x4064b4:c.instructions+=1;goto B4064b4;
case 0x4064ba:goto L4064ba;
case 0x4064bc:c.instructions+=2;goto B4064bc;
case 0x4064bf:c.instructions+=1;goto B4064bf;
case 0x4064c4:goto L4064c4;
case 0x4064c6:c.instructions+=1;goto B4064c6;
case 0x4064cc:goto L4064cc;
case 0x4064d1:c.instructions+=1;goto B4064d1;
case 0x4064d6:goto L4064d6;
case 0x4064d8:c.instructions+=1;goto B4064d8;
case 0x4064de:goto L4064de;
case 0x4064e1:c.instructions+=6;goto B4064e1;
case 0x4064e7:c.instructions+=5;goto B4064e7;
case 0x4064e9:c.instructions+=4;goto B4064e9;
case 0x4064ef:c.instructions+=3;goto B4064ef;
case 0x4064f1:c.instructions+=2;goto B4064f1;
case 0x4064f4:c.instructions+=1;goto B4064f4;
case 0x4064f6:goto L4064f6;
case 0x4064fb:c.instructions+=4;goto B4064fb;
case 0x406500:c.instructions+=3;goto B406500;
case 0x406502:c.instructions+=2;goto B406502;
case 0x406503:c.instructions+=1;goto B406503;
case 0x406508:goto L406508;
case 0x40650a:goto L40650a;
case 0x40650b:c.instructions+=1;goto B40650b;
case 0x406510:goto L406510;
case 0x406512:c.instructions+=3;goto B406512;
case 0x406515:c.instructions+=2;goto B406515;
case 0x406516:c.instructions+=1;goto B406516;
case 0x40651b:goto L40651b;
case 0x40651f:c.instructions+=4;goto B40651f;
case 0x406525:c.instructions+=3;goto B406525;
case 0x406528:c.instructions+=2;goto B406528;
case 0x40652d:c.instructions+=1;goto B40652d;
case 0x406532:goto L406532;
case 0x406536:c.instructions+=6;goto B406536;
case 0x406539:c.instructions+=5;goto B406539;
case 0x40653c:c.instructions+=4;goto B40653c;
case 0x40653f:c.instructions+=3;goto B40653f;
case 0x406543:c.instructions+=2;goto B406543;
case 0x406544:c.instructions+=1;goto B406544;
case 0x406549:goto L406549;
case 0x40654d:c.instructions+=5;goto B40654d;
case 0x406551:c.instructions+=4;goto B406551;
case 0x406552:c.instructions+=3;goto B406552;
case 0x406555:c.instructions+=2;goto B406555;
case 0x406559:c.instructions+=1;goto B406559;
case 0x40655e:goto L40655e;
case 0x406562:c.instructions+=6;goto B406562;
case 0x406566:c.instructions+=5;goto B406566;
case 0x40656a:c.instructions+=4;goto B40656a;
case 0x406570:c.instructions+=3;goto B406570;
case 0x406572:c.instructions+=2;goto B406572;
case 0x406575:c.instructions+=1;goto B406575;
case 0x406577:goto L406577;
case 0x40657b:c.instructions+=5;goto B40657b;
case 0x40657d:c.instructions+=4;goto B40657d;
case 0x406583:c.instructions+=3;goto B406583;
case 0x406585:c.instructions+=2;goto B406585;
case 0x406588:c.instructions+=1;goto B406588;
case 0x40658a:goto L40658a;
case 0x40658e:c.instructions+=3;goto B40658e;
case 0x406591:c.instructions+=2;goto B406591;
case 0x406597:c.instructions+=1;goto B406597;
case 0x40659c:goto L40659c;
case 0x4065a1:c.instructions+=1;goto B4065a1;
case 0x4065a3:goto L4065a3;
case 0x4065a8:c.instructions+=1;goto B4065a8;
case 0x4065aa:goto L4065aa;
case 0x4065af:c.instructions+=2;goto B4065af;
case 0x4065b1:c.instructions+=1;goto B4065b1;
case 0x4065b3:goto L4065b3;
case 0x4065b8:c.instructions+=1;goto B4065b8;
case 0x4065ba:goto L4065ba;
case 0x4065bc:goto L4065bc;
case 0x4065c2:c.instructions+=3;goto B4065c2;
case 0x4065c4:c.instructions+=2;goto B4065c4;
case 0x4065c5:c.instructions+=1;goto B4065c5;
case 0x4065ca:goto L4065ca;
case 0x4065cc:c.instructions+=1;goto B4065cc;
case 0x4065ce:goto L4065ce;
case 0x4065d4:c.instructions+=4;goto B4065d4;
case 0x4065d9:c.instructions+=3;goto B4065d9;
case 0x4065da:c.instructions+=2;goto B4065da;
case 0x4065db:c.instructions+=1;goto B4065db;
case 0x4065e0:goto L4065e0;
case 0x4065e6:c.instructions+=3;goto B4065e6;
case 0x4065ea:c.instructions+=2;goto B4065ea;
case 0x4065f0:c.instructions+=1;goto B4065f0;
case 0x4065f5:goto L4065f5;
case 0x4065fb:c.instructions+=3;goto B4065fb;
case 0x4065fc:c.instructions+=2;goto B4065fc;
case 0x4065fd:c.instructions+=1;goto B4065fd;
case 0x406602:goto L406602;
case 0x406604:c.instructions+=3;goto B406604;
case 0x40660a:c.instructions+=2;goto B40660a;
case 0x40660c:c.instructions+=1;goto B40660c;
case 0x40660e:goto L40660e;
case 0x406614:c.instructions+=2;goto B406614;
case 0x406616:c.instructions+=1;goto B406616;
case 0x406618:goto L406618;
case 0x40661e:c.instructions+=3;goto B40661e;
case 0x406620:c.instructions+=2;goto B406620;
case 0x406621:c.instructions+=1;goto B406621;
case 0x406626:goto L406626;
case 0x406628:c.instructions+=1;goto B406628;
case 0x40662a:goto L40662a;
case 0x406630:c.instructions+=2;goto B406630;
case 0x406631:c.instructions+=1;goto B406631;
case 0x406636:goto L406636;
case 0x406638:goto L406638;
case 0x40663e:c.instructions+=3;goto B40663e;
case 0x406640:c.instructions+=2;goto B406640;
case 0x406641:c.instructions+=1;goto B406641;
case 0x406646:goto L406646;
case 0x406648:c.instructions+=1;goto B406648;
case 0x40664a:goto L40664a;
case 0x406650:c.instructions+=2;goto B406650;
case 0x406651:c.instructions+=1;goto B406651;
case 0x406656:goto L406656;
case 0x40665d:c.instructions+=9;goto B40665d;
case 0x406664:c.instructions+=8;goto B406664;
case 0x406668:c.instructions+=7;goto B406668;
case 0x40666c:c.instructions+=6;goto B40666c;
case 0x406670:c.instructions+=5;goto B406670;
case 0x406672:c.instructions+=4;goto B406672;
case 0x406678:c.instructions+=3;goto B406678;
case 0x40667a:c.instructions+=2;goto B40667a;
case 0x40667d:c.instructions+=1;goto B40667d;
case 0x40667f:goto L40667f;
case 0x406685:c.instructions+=7;goto B406685;
case 0x40668b:c.instructions+=6;goto B40668b;
case 0x40668d:c.instructions+=5;goto B40668d;
case 0x406694:c.instructions+=4;goto B406694;
case 0x40669a:c.instructions+=3;goto B40669a;
case 0x40669c:c.instructions+=2;goto B40669c;
case 0x40669f:c.instructions+=1;goto B40669f;
case 0x4066a5:goto L4066a5;
case 0x4066a7:c.instructions+=1;goto B4066a7;
case 0x4066b2:goto L4066b2;
case 0x4066b4:goto L4066b4;
case 0x4066b6:c.instructions+=8;goto B4066b6;
case 0x4066bc:c.instructions+=7;goto B4066bc;
case 0x4066c2:c.instructions+=6;goto B4066c2;
case 0x4066c8:c.instructions+=5;goto B4066c8;
case 0x4066ce:c.instructions+=4;goto B4066ce;
case 0x4066d4:c.instructions+=3;goto B4066d4;
case 0x4066d6:c.instructions+=2;goto B4066d6;
case 0x4066d9:c.instructions+=1;goto B4066d9;
case 0x4066df:goto L4066df;
case 0x4066e5:c.instructions+=4;goto B4066e5;
case 0x4066e6:c.instructions+=3;goto B4066e6;
case 0x4066e9:c.instructions+=2;goto B4066e9;
case 0x4066ee:c.instructions+=1;goto B4066ee;
case 0x4066f3:goto L4066f3;
case 0x4066f9:c.instructions+=8;goto B4066f9;
case 0x4066fc:c.instructions+=7;goto B4066fc;
case 0x406702:c.instructions+=6;goto B406702;
case 0x406704:c.instructions+=5;goto B406704;
case 0x40670b:c.instructions+=4;goto B40670b;
case 0x406711:c.instructions+=3;goto B406711;
case 0x406713:c.instructions+=2;goto B406713;
case 0x406716:c.instructions+=1;goto B406716;
case 0x406718:goto L406718;
case 0x40671a:c.instructions+=3;goto B40671a;
case 0x406725:c.instructions+=2;goto B406725;
case 0x406727:c.instructions+=1;goto B406727;
case 0x406729:goto L406729;
case 0x40672f:c.instructions+=3;goto B40672f;
case 0x406731:c.instructions+=2;goto B406731;
case 0x406734:c.instructions+=1;goto B406734;
case 0x40673a:goto L40673a;
case 0x406741:c.instructions+=7;goto B406741;
case 0x406742:c.instructions+=6;goto B406742;
case 0x406746:c.instructions+=5;goto B406746;
case 0x40674c:c.instructions+=4;goto B40674c;
case 0x406752:c.instructions+=3;goto B406752;
case 0x406755:c.instructions+=2;goto B406755;
case 0x40675a:c.instructions+=1;goto B40675a;
case 0x40675f:goto L40675f;
case 0x406765:c.instructions+=2;goto B406765;
case 0x406768:c.instructions+=1;goto B406768;
case 0x40676d:goto L40676d;
case 0x406773:c.instructions+=3;goto B406773;
case 0x406774:c.instructions+=2;goto B406774;
case 0x406775:c.instructions+=1;goto B406775;
case 0x40677a:goto L40677a;
case 0x40677f:goto L40677f;
case 0x406785:c.instructions+=3;goto B406785;
case 0x406787:c.instructions+=2;goto B406787;
case 0x40678a:c.instructions+=1;goto B40678a;
case 0x40678c:goto L40678c;
case 0x406793:goto L406793;
case 0x406799:c.instructions+=1;goto B406799;
case 0x40679e:goto L40679e;
case 0x4067a4:c.instructions+=3;goto B4067a4;
case 0x4067a5:c.instructions+=2;goto B4067a5;
case 0x4067a6:c.instructions+=1;goto B4067a6;
case 0x4067ab:goto L4067ab;
case 0x4067ad:goto L4067ad;
case 0x4067af:goto L4067af;
case 0x4067b1:goto L4067b1;
case 0x4067b3:c.instructions+=6;goto B4067b3;
case 0x4067b9:c.instructions+=5;goto B4067b9;
case 0x4067bf:c.instructions+=4;goto B4067bf;
case 0x4067c2:c.instructions+=3;goto B4067c2;
case 0x4067c5:c.instructions+=2;goto B4067c5;
case 0x4067c9:c.instructions+=1;goto B4067c9;
case 0x4067cb:goto L4067cb;
case 0x4067d2:goto L4067d2;
case 0x4067d7:c.instructions+=2;goto B4067d7;
case 0x4067dc:c.instructions+=1;goto B4067dc;
case 0x4067de:goto L4067de;
case 0x4067e3:c.instructions+=2;goto B4067e3;
case 0x4067e8:c.instructions+=1;goto B4067e8;
case 0x4067ea:goto L4067ea;
case 0x4067ef:c.instructions+=2;goto B4067ef;
case 0x4067f4:c.instructions+=1;goto B4067f4;
case 0x4067f6:goto L4067f6;
case 0x4067fb:c.instructions+=2;goto B4067fb;
case 0x4067fd:c.instructions+=1;goto B4067fd;
case 0x4067ff:goto L4067ff;
case 0x406804:c.instructions+=2;goto B406804;
case 0x406809:c.instructions+=1;goto B406809;
case 0x40680b:goto L40680b;
case 0x406810:c.instructions+=2;goto B406810;
case 0x406815:c.instructions+=1;goto B406815;
case 0x406817:goto L406817;
case 0x40681c:c.instructions+=2;goto B40681c;
case 0x406821:c.instructions+=1;goto B406821;
case 0x406823:goto L406823;
case 0x406825:c.instructions+=1;goto B406825;
case 0x406827:goto L406827;
case 0x40682a:c.instructions+=2;goto B40682a;
case 0x40682d:c.instructions+=1;goto B40682d;
case 0x40682f:goto L40682f;
case 0x406836:goto L406836;
case 0x406838:c.instructions+=3;goto B406838;
case 0x40683e:c.instructions+=2;goto B40683e;
case 0x406841:c.instructions+=1;goto B406841;
case 0x406843:goto L406843;
case 0x406845:c.instructions+=3;goto B406845;
case 0x406848:c.instructions+=2;goto B406848;
case 0x40684b:c.instructions+=1;goto B40684b;
case 0x40684d:goto L40684d;
case 0x406850:c.instructions+=3;goto B406850;
case 0x406855:c.instructions+=2;goto B406855;
case 0x406858:c.instructions+=1;goto B406858;
case 0x40685a:goto L40685a;
case 0x40685d:c.instructions+=3;goto B40685d;
case 0x406862:c.instructions+=2;goto B406862;
case 0x406865:c.instructions+=1;goto B406865;
case 0x406867:goto L406867;
case 0x40686a:c.instructions+=3;goto B40686a;
case 0x40686f:c.instructions+=2;goto B40686f;
case 0x406872:c.instructions+=1;goto B406872;
case 0x406874:goto L406874;
case 0x406879:c.instructions+=3;goto B406879;
case 0x40687e:c.instructions+=2;goto B40687e;
case 0x406883:c.instructions+=1;goto B406883;
case 0x406885:goto L406885;
case 0x40688a:c.instructions+=3;goto B40688a;
case 0x40688f:c.instructions+=2;goto B40688f;
case 0x406894:c.instructions+=1;goto B406894;
case 0x406896:goto L406896;
case 0x406898:goto L406898;
case 0x406899:c.instructions+=12;goto B406899;
case 0x40689b:c.instructions+=11;goto B40689b;
case 0x40689d:c.instructions+=10;goto B40689d;
case 0x40689e:c.instructions+=9;goto B40689e;
case 0x4068a0:c.instructions+=8;goto B4068a0;
case 0x4068a1:c.instructions+=7;goto B4068a1;
case 0x4068a3:c.instructions+=6;goto B4068a3;
case 0x4068a5:c.instructions+=5;goto B4068a5;
case 0x4068a9:c.instructions+=4;goto B4068a9;
case 0x4068ad:c.instructions+=3;goto B4068ad;
case 0x4068b1:c.instructions+=2;goto B4068b1;
case 0x4068b7:c.instructions+=1;goto B4068b7;
case 0x4068bc:goto L4068bc;
case 0x4068c2:c.instructions+=4;goto B4068c2;
case 0x4068c3:c.instructions+=3;goto B4068c3;
case 0x4068c4:c.instructions+=2;goto B4068c4;
case 0x4068c5:c.instructions+=1;goto B4068c5;
case 0x4068ca:goto L4068ca;
case 0x4068cd:c.instructions+=1;goto B4068cd;
case 0x4068cf:goto L4068cf;
case 0x4068d4:c.instructions+=1;goto B4068d4;
case 0x4068d6:goto L4068d6;
case 0x4068da:c.instructions+=4;goto B4068da;
case 0x4068e0:c.instructions+=3;goto B4068e0;
case 0x4068e2:c.instructions+=2;goto B4068e2;
case 0x4068e5:c.instructions+=1;goto B4068e5;
case 0x4068e7:goto L4068e7;
case 0x4068ed:c.instructions+=3;goto B4068ed;
case 0x4068f2:c.instructions+=2;goto B4068f2;
case 0x4068f3:c.instructions+=1;goto B4068f3;
case 0x4068f8:goto L4068f8;
case 0x4068fc:c.instructions+=8;goto B4068fc;
case 0x406900:c.instructions+=7;goto B406900;
case 0x406902:c.instructions+=6;goto B406902;
case 0x406903:c.instructions+=5;goto B406903;
case 0x406904:c.instructions+=4;goto B406904;
case 0x406905:c.instructions+=3;goto B406905;
case 0x406907:c.instructions+=2;goto B406907;
case 0x406908:c.instructions+=1;goto B406908;
case 0x40690b:goto L40690b;
case 0x406911:c.instructions+=2;goto B406911;
case 0x406912:c.instructions+=1;goto B406912;
case 0x406917:goto L406917;
case 0x40691b:c.instructions+=8;goto B40691b;
case 0x40691f:c.instructions+=7;goto B40691f;
case 0x406921:c.instructions+=6;goto B406921;
case 0x406922:c.instructions+=5;goto B406922;
case 0x406923:c.instructions+=4;goto B406923;
case 0x406924:c.instructions+=3;goto B406924;
case 0x406926:c.instructions+=2;goto B406926;
case 0x406927:c.instructions+=1;goto B406927;
case 0x40692a:goto L40692a;
case 0x406930:c.instructions+=2;goto B406930;
case 0x406931:c.instructions+=1;goto B406931;
case 0x406936:goto L406936;
case 0x40693c:c.instructions+=2;goto B40693c;
case 0x40693d:c.instructions+=1;goto B40693d;
case 0x406942:goto L406942;
case 0x406948:c.instructions+=2;goto B406948;
case 0x406949:c.instructions+=1;goto B406949;
case 0x40694e:goto L40694e;
case 0x406954:c.instructions+=2;goto B406954;
case 0x406955:c.instructions+=1;goto B406955;
case 0x40695a:goto L40695a;
case 0x406960:c.instructions+=2;goto B406960;
case 0x406961:c.instructions+=1;goto B406961;
case 0x406966:goto L406966;
case 0x406969:c.instructions+=8;goto B406969;
case 0x40696f:c.instructions+=7;goto B40696f;
case 0x406971:c.instructions+=6;goto B406971;
case 0x406977:c.instructions+=5;goto B406977;
case 0x406979:c.instructions+=4;goto B406979;
case 0x40697a:c.instructions+=3;goto B40697a;
case 0x40697c:c.instructions+=2;goto B40697c;
case 0x40697f:c.instructions+=1;goto B40697f;
case 0x406981:goto L406981;
case 0x406986:goto L406986;
case 0x406988:c.instructions+=2;goto B406988;
case 0x40698e:c.instructions+=1;goto B40698e;
case 0x406990:goto L406990;
case 0x406991:c.instructions+=1;goto B406991;
case 0x406996:goto L406996;
case 0x406997:c.instructions+=5;goto B406997;
case 0x406998:c.instructions+=4;goto B406998;
case 0x406999:c.instructions+=3;goto B406999;
case 0x40699b:c.instructions+=2;goto B40699b;
case 0x40699c:c.instructions+=1;goto B40699c;
case 0x40699f:goto L40699f;
case 0x4069a4:c.instructions+=4;goto B4069a4;
case 0x4069a9:c.instructions+=3;goto B4069a9;
case 0x4069ab:c.instructions+=2;goto B4069ab;
case 0x4069ac:c.instructions+=1;goto B4069ac;
case 0x4069b1:goto L4069b1;
case 0x4069b2:c.instructions+=5;goto B4069b2;
case 0x4069b3:c.instructions+=4;goto B4069b3;
case 0x4069b4:c.instructions+=3;goto B4069b4;
case 0x4069b6:c.instructions+=2;goto B4069b6;
case 0x4069b7:c.instructions+=1;goto B4069b7;
case 0x4069ba:goto L4069ba;
case 0x4069bf:goto L4069bf;
case 0x4069c1:c.instructions+=2;goto B4069c1;
case 0x4069c7:c.instructions+=1;goto B4069c7;
case 0x4069c9:goto L4069c9;
case 0x4069ce:c.instructions+=4;goto B4069ce;
case 0x4069d3:c.instructions+=3;goto B4069d3;
case 0x4069d5:c.instructions+=2;goto B4069d5;
case 0x4069d6:c.instructions+=1;goto B4069d6;
case 0x4069db:goto L4069db;
case 0x4069dc:c.instructions+=5;goto B4069dc;
case 0x4069dd:c.instructions+=4;goto B4069dd;
case 0x4069de:c.instructions+=3;goto B4069de;
case 0x4069e0:c.instructions+=2;goto B4069e0;
case 0x4069e1:c.instructions+=1;goto B4069e1;
case 0x406a40:goto L406a40;
case 0x406a43:c.instructions+=11;goto B406a43;
case 0x406a44:c.instructions+=10;goto B406a44;
case 0x406a46:c.instructions+=9;goto B406a46;
case 0x406a4a:c.instructions+=8;goto B406a4a;
case 0x406a4e:c.instructions+=7;goto B406a4e;
case 0x406a52:c.instructions+=6;goto B406a52;
case 0x406a58:c.instructions+=5;goto B406a58;
case 0x406a5c:c.instructions+=4;goto B406a5c;
case 0x406a62:c.instructions+=3;goto B406a62;
case 0x406a64:c.instructions+=2;goto B406a64;
case 0x406a67:c.instructions+=1;goto B406a67;
case 0x406a69:goto L406a69;
case 0x406a6d:c.instructions+=2;goto B406a6d;
case 0x406a73:c.instructions+=1;goto B406a73;
case 0x406a77:goto L406a77;
case 0x406a79:c.instructions+=2;goto B406a79;
case 0x406a7c:c.instructions+=1;goto B406a7c;
case 0x406a81:goto L406a81;
case 0x406a83:c.instructions+=24;goto B406a83;
case 0x406a89:c.instructions+=23;goto B406a89;
case 0x406a8c:c.instructions+=22;goto B406a8c;
case 0x406a90:c.instructions+=21;goto B406a90;
case 0x406a92:c.instructions+=20;goto B406a92;
case 0x406a96:c.instructions+=19;goto B406a96;
case 0x406a99:c.instructions+=18;goto B406a99;
case 0x406a9c:c.instructions+=17;goto B406a9c;
case 0x406a9e:c.instructions+=16;goto B406a9e;
case 0x406aa1:c.instructions+=15;goto B406aa1;
case 0x406aa3:c.instructions+=14;goto B406aa3;
case 0x406aa5:c.instructions+=13;goto B406aa5;
case 0x406aa7:c.instructions+=12;goto B406aa7;
case 0x406aa9:c.instructions+=11;goto B406aa9;
case 0x406aab:c.instructions+=10;goto B406aab;
case 0x406aad:c.instructions+=9;goto B406aad;
case 0x406aaf:c.instructions+=8;goto B406aaf;
case 0x406ab1:c.instructions+=7;goto B406ab1;
case 0x406ab3:c.instructions+=6;goto B406ab3;
case 0x406ab5:c.instructions+=5;goto B406ab5;
case 0x406ab7:c.instructions+=4;goto B406ab7;
case 0x406ab9:c.instructions+=3;goto B406ab9;
case 0x406abb:c.instructions+=2;goto B406abb;
case 0x406abf:c.instructions+=1;goto B406abf;
case 0x406ac1:goto L406ac1;
case 0x406ac7:c.instructions+=3;goto B406ac7;
case 0x406ac9:c.instructions+=2;goto B406ac9;
case 0x406acc:c.instructions+=1;goto B406acc;
case 0x406ace:goto L406ace;
case 0x406ad2:c.instructions+=4;goto B406ad2;
case 0x406ad8:c.instructions+=3;goto B406ad8;
case 0x406ada:c.instructions+=2;goto B406ada;
case 0x406add:c.instructions+=1;goto B406add;
case 0x406adf:goto L406adf;
case 0x406ae3:c.instructions+=1;goto B406ae3;
case 0x406ae5:goto L406ae5;
case 0x406aeb:c.instructions+=3;goto B406aeb;
case 0x406aed:c.instructions+=2;goto B406aed;
case 0x406af0:c.instructions+=1;goto B406af0;
case 0x406af2:goto L406af2;
case 0x406af6:c.instructions+=4;goto B406af6;
case 0x406afc:c.instructions+=3;goto B406afc;
case 0x406afe:c.instructions+=2;goto B406afe;
case 0x406b01:c.instructions+=1;goto B406b01;
case 0x406b03:goto L406b03;
case 0x406b07:goto L406b07;
case 0x406b08:c.instructions+=3;goto B406b08;
case 0x406b0c:c.instructions+=2;goto B406b0c;
case 0x406b0d:c.instructions+=1;goto B406b0d;
case 0x406b12:goto L406b12;
case 0x406b15:c.instructions+=2;goto B406b15;
case 0x406b17:c.instructions+=1;goto B406b17;
case 0x406b19:goto L406b19;
case 0x406b1b:c.instructions+=3;goto B406b1b;
case 0x406b21:c.instructions+=2;goto B406b21;
case 0x406b26:c.instructions+=1;goto B406b26;
case 0x406b28:goto L406b28;
case 0x406b2d:c.instructions+=2;goto B406b2d;
case 0x406b2f:c.instructions+=1;goto B406b2f;
case 0x406b31:goto L406b31;
case 0x406b36:c.instructions+=2;goto B406b36;
case 0x406b38:c.instructions+=1;goto B406b38;
case 0x406b3a:goto L406b3a;
case 0x406b3f:c.instructions+=2;goto B406b3f;
case 0x406b41:c.instructions+=1;goto B406b41;
case 0x406b43:goto L406b43;
case 0x406b48:c.instructions+=2;goto B406b48;
case 0x406b4a:c.instructions+=1;goto B406b4a;
case 0x406b4c:goto L406b4c;
case 0x406b51:c.instructions+=2;goto B406b51;
case 0x406b53:c.instructions+=1;goto B406b53;
case 0x406b55:goto L406b55;
case 0x406b58:c.instructions+=2;goto B406b58;
case 0x406b5a:c.instructions+=1;goto B406b5a;
case 0x406b5c:goto L406b5c;
case 0x406b5e:c.instructions+=3;goto B406b5e;
case 0x406b64:c.instructions+=2;goto B406b64;
case 0x406b69:c.instructions+=1;goto B406b69;
case 0x406b6b:goto L406b6b;
case 0x406b6d:c.instructions+=2;goto B406b6d;
case 0x406b73:c.instructions+=1;goto B406b73;
case 0x406b78:goto L406b78;
case 0x406b7a:c.instructions+=3;goto B406b7a;
case 0x406b7b:c.instructions+=2;goto B406b7b;
case 0x406b7f:c.instructions+=1;goto B406b7f;
case 0x406b84:goto L406b84;
case 0x406b86:c.instructions+=17;goto B406b86;
case 0x406b89:c.instructions+=16;goto B406b89;
case 0x406b8f:c.instructions+=15;goto B406b8f;
case 0x406b95:c.instructions+=14;goto B406b95;
case 0x406b9b:c.instructions+=13;goto B406b9b;
case 0x406ba1:c.instructions+=12;goto B406ba1;
case 0x406ba7:c.instructions+=11;goto B406ba7;
case 0x406bad:c.instructions+=10;goto B406bad;
case 0x406bb3:c.instructions+=9;goto B406bb3;
case 0x406bb5:c.instructions+=8;goto B406bb5;
case 0x406bb9:c.instructions+=7;goto B406bb9;
case 0x406bbb:c.instructions+=6;goto B406bbb;
case 0x406bbf:c.instructions+=5;goto B406bbf;
case 0x406bc3:c.instructions+=4;goto B406bc3;
case 0x406bc9:c.instructions+=3;goto B406bc9;
case 0x406bcb:c.instructions+=2;goto B406bcb;
case 0x406bce:c.instructions+=1;goto B406bce;
case 0x406bd4:goto L406bd4;
case 0x406bd7:c.instructions+=2;goto B406bd7;
case 0x406bd9:c.instructions+=1;goto B406bd9;
case 0x406bdb:goto L406bdb;
case 0x406bdf:c.instructions+=4;goto B406bdf;
case 0x406be3:c.instructions+=3;goto B406be3;
case 0x406be5:c.instructions+=2;goto B406be5;
case 0x406be8:c.instructions+=1;goto B406be8;
case 0x406bee:goto L406bee;
case 0x406bef:c.instructions+=1;goto B406bef;
case 0x406bf4:goto L406bf4;
case 0x406bf7:c.instructions+=2;goto B406bf7;
case 0x406bf9:c.instructions+=1;goto B406bf9;
case 0x406bfb:goto L406bfb;
case 0x406c05:c.instructions+=1;goto B406c05;
case 0x406c07:goto L406c07;
case 0x406c0c:c.instructions+=2;goto B406c0c;
case 0x406c0e:c.instructions+=1;goto B406c0e;
case 0x406c10:goto L406c10;
case 0x406c15:c.instructions+=2;goto B406c15;
case 0x406c17:c.instructions+=1;goto B406c17;
case 0x406c19:goto L406c19;
case 0x406c1e:c.instructions+=2;goto B406c1e;
case 0x406c20:c.instructions+=1;goto B406c20;
case 0x406c22:goto L406c22;
case 0x406c27:c.instructions+=2;goto B406c27;
case 0x406c29:c.instructions+=1;goto B406c29;
case 0x406c2b:goto L406c2b;
case 0x406c30:c.instructions+=2;goto B406c30;
case 0x406c32:c.instructions+=1;goto B406c32;
case 0x406c34:goto L406c34;
case 0x406c35:c.instructions+=2;goto B406c35;
case 0x406c3a:c.instructions+=1;goto B406c3a;
case 0x406c3c:goto L406c3c;
case 0x406c3d:c.instructions+=1;goto B406c3d;
case 0x406c42:goto L406c42;
case 0x406c46:c.instructions+=3;goto B406c46;
case 0x406c48:c.instructions+=2;goto B406c48;
case 0x406c4b:c.instructions+=1;goto B406c4b;
case 0x406c50:goto L406c50;
case 0x406c56:goto L406c56;
case 0x406c5c:c.instructions+=9;goto B406c5c;
case 0x406c60:c.instructions+=8;goto B406c60;
case 0x406c64:c.instructions+=7;goto B406c64;
case 0x406c6a:c.instructions+=6;goto B406c6a;
case 0x406c70:c.instructions+=5;goto B406c70;
case 0x406c74:c.instructions+=4;goto B406c74;
case 0x406c76:c.instructions+=3;goto B406c76;
case 0x406c78:c.instructions+=2;goto B406c78;
case 0x406c7b:c.instructions+=1;goto B406c7b;
case 0x406c7d:goto L406c7d;
case 0x406c81:c.instructions+=1;goto B406c81;
case 0x406c83:goto L406c83;
case 0x406c85:goto L406c85;
case 0x406c89:c.instructions+=7;goto B406c89;
case 0x406c8a:c.instructions+=6;goto B406c8a;
case 0x406c8e:c.instructions+=5;goto B406c8e;
case 0x406c93:c.instructions+=4;goto B406c93;
case 0x406c97:c.instructions+=3;goto B406c97;
case 0x406c99:c.instructions+=2;goto B406c99;
case 0x406c9c:c.instructions+=1;goto B406c9c;
case 0x406ca1:goto L406ca1;
case 0x406ca5:c.instructions+=6;goto B406ca5;
case 0x406ca9:c.instructions+=5;goto B406ca9;
case 0x406caa:c.instructions+=4;goto B406caa;
case 0x406cb0:c.instructions+=3;goto B406cb0;
case 0x406cb2:c.instructions+=2;goto B406cb2;
case 0x406cb5:c.instructions+=1;goto B406cb5;
case 0x406cb7:goto L406cb7;
case 0x406cbb:c.instructions+=2;goto B406cbb;
case 0x406cbd:c.instructions+=1;goto B406cbd;
case 0x406cc1:goto L406cc1;
case 0x406cc3:c.instructions+=9;goto B406cc3;
case 0x406cc7:c.instructions+=8;goto B406cc7;
case 0x406ccd:c.instructions+=7;goto B406ccd;
case 0x406cd1:c.instructions+=6;goto B406cd1;
case 0x406cd3:c.instructions+=5;goto B406cd3;
case 0x406cd4:c.instructions+=4;goto B406cd4;
case 0x406cd9:c.instructions+=3;goto B406cd9;
case 0x406cdd:c.instructions+=2;goto B406cdd;
case 0x406ce1:c.instructions+=1;goto B406ce1;
case 0x406ce6:goto L406ce6;
case 0x406cec:c.instructions+=5;goto B406cec;
case 0x406cf0:c.instructions+=4;goto B406cf0;
case 0x406cf6:c.instructions+=3;goto B406cf6;
case 0x406cf8:c.instructions+=2;goto B406cf8;
case 0x406cfb:c.instructions+=1;goto B406cfb;
case 0x406cfd:goto L406cfd;
case 0x406d01:c.instructions+=4;goto B406d01;
case 0x406d05:c.instructions+=3;goto B406d05;
case 0x406d07:c.instructions+=2;goto B406d07;
case 0x406d0a:c.instructions+=1;goto B406d0a;
case 0x406d0c:goto L406d0c;
case 0x406d10:c.instructions+=4;goto B406d10;
case 0x406d16:c.instructions+=3;goto B406d16;
case 0x406d18:c.instructions+=2;goto B406d18;
case 0x406d1b:c.instructions+=1;goto B406d1b;
case 0x406d1d:goto L406d1d;
case 0x406d21:c.instructions+=4;goto B406d21;
case 0x406d25:c.instructions+=3;goto B406d25;
case 0x406d27:c.instructions+=2;goto B406d27;
case 0x406d2a:c.instructions+=1;goto B406d2a;
case 0x406d2c:goto L406d2c;
case 0x406d32:goto L406d32;
case 0x406d36:c.instructions+=4;goto B406d36;
case 0x406d3c:c.instructions+=3;goto B406d3c;
case 0x406d3e:c.instructions+=2;goto B406d3e;
case 0x406d41:c.instructions+=1;goto B406d41;
case 0x406d43:goto L406d43;
case 0x406d45:c.instructions+=1;goto B406d45;
case 0x406d4b:goto L406d4b;
case 0x406d4f:c.instructions+=4;goto B406d4f;
case 0x406d51:c.instructions+=3;goto B406d51;
case 0x406d53:c.instructions+=2;goto B406d53;
case 0x406d56:c.instructions+=1;goto B406d56;
case 0x406d58:goto L406d58;
case 0x406d5c:c.instructions+=1;goto B406d5c;
case 0x406d5e:goto L406d5e;
case 0x406d60:c.instructions+=5;goto B406d60;
case 0x406d64:c.instructions+=4;goto B406d64;
case 0x406d66:c.instructions+=3;goto B406d66;
case 0x406d68:c.instructions+=2;goto B406d68;
case 0x406d6b:c.instructions+=1;goto B406d6b;
case 0x406d6d:goto L406d6d;
case 0x406d71:c.instructions+=1;goto B406d71;
case 0x406d73:goto L406d73;
case 0x406d75:goto L406d75;
case 0x406d79:c.instructions+=7;goto B406d79;
case 0x406d7a:c.instructions+=6;goto B406d7a;
case 0x406d7e:c.instructions+=5;goto B406d7e;
case 0x406d83:c.instructions+=4;goto B406d83;
case 0x406d87:c.instructions+=3;goto B406d87;
case 0x406d89:c.instructions+=2;goto B406d89;
case 0x406d8c:c.instructions+=1;goto B406d8c;
case 0x406d91:goto L406d91;
case 0x406d95:c.instructions+=5;goto B406d95;
case 0x406d99:c.instructions+=4;goto B406d99;
case 0x406d9f:c.instructions+=3;goto B406d9f;
case 0x406da1:c.instructions+=2;goto B406da1;
case 0x406da4:c.instructions+=1;goto B406da4;
case 0x406da6:goto L406da6;
case 0x406da8:goto L406da8;
case 0x406daa:c.instructions+=6;goto B406daa;
case 0x406dad:c.instructions+=5;goto B406dad;
case 0x406db3:c.instructions+=4;goto B406db3;
case 0x406db7:c.instructions+=3;goto B406db7;
case 0x406dbd:c.instructions+=2;goto B406dbd;
case 0x406dc3:c.instructions+=1;goto B406dc3;
case 0x406dc8:goto L406dc8;
case 0x406dcc:c.instructions+=12;goto B406dcc;
case 0x406dce:c.instructions+=11;goto B406dce;
case 0x406dd3:c.instructions+=10;goto B406dd3;
case 0x406dd5:c.instructions+=9;goto B406dd5;
case 0x406dd7:c.instructions+=8;goto B406dd7;
case 0x406dda:c.instructions+=7;goto B406dda;
case 0x406ddc:c.instructions+=6;goto B406ddc;
case 0x406ddf:c.instructions+=5;goto B406ddf;
case 0x406de1:c.instructions+=4;goto B406de1;
case 0x406de5:c.instructions+=3;goto B406de5;
case 0x406de6:c.instructions+=2;goto B406de6;
case 0x406de9:c.instructions+=1;goto B406de9;
case 0x406df0:goto L406df0;
case 0x406df1:c.instructions+=9;goto B406df1;
case 0x406df2:c.instructions+=8;goto B406df2;
case 0x406df3:c.instructions+=7;goto B406df3;
case 0x406df7:c.instructions+=6;goto B406df7;
case 0x406df8:c.instructions+=5;goto B406df8;
case 0x406dfd:c.instructions+=4;goto B406dfd;
case 0x406dff:c.instructions+=3;goto B406dff;
case 0x406e01:c.instructions+=2;goto B406e01;
case 0x406e03:c.instructions+=1;goto B406e03;
case 0x406e08:goto L406e08;
case 0x406e0a:c.instructions+=6;goto B406e0a;
case 0x406e0c:c.instructions+=5;goto B406e0c;
case 0x406e0e:c.instructions+=4;goto B406e0e;
case 0x406e14:c.instructions+=3;goto B406e14;
case 0x406e15:c.instructions+=2;goto B406e15;
case 0x406e17:c.instructions+=1;goto B406e17;
case 0x406e1c:goto L406e1c;
case 0x406e1e:c.instructions+=6;goto B406e1e;
case 0x406e20:c.instructions+=5;goto B406e20;
case 0x406e22:c.instructions+=4;goto B406e22;
case 0x406e28:c.instructions+=3;goto B406e28;
case 0x406e29:c.instructions+=2;goto B406e29;
case 0x406e2b:c.instructions+=1;goto B406e2b;
case 0x406e30:goto L406e30;
case 0x406e32:c.instructions+=6;goto B406e32;
case 0x406e34:c.instructions+=5;goto B406e34;
case 0x406e36:c.instructions+=4;goto B406e36;
case 0x406e3c:c.instructions+=3;goto B406e3c;
case 0x406e3d:c.instructions+=2;goto B406e3d;
case 0x406e3f:c.instructions+=1;goto B406e3f;
case 0x406e44:goto L406e44;
case 0x406e46:c.instructions+=6;goto B406e46;
case 0x406e48:c.instructions+=5;goto B406e48;
case 0x406e4a:c.instructions+=4;goto B406e4a;
case 0x406e50:c.instructions+=3;goto B406e50;
case 0x406e51:c.instructions+=2;goto B406e51;
case 0x406e53:c.instructions+=1;goto B406e53;
case 0x406e58:goto L406e58;
case 0x406e5e:c.instructions+=3;goto B406e5e;
case 0x406e5f:c.instructions+=2;goto B406e5f;
case 0x406e61:c.instructions+=1;goto B406e61;
case 0x406e66:goto L406e66;
case 0x406e6c:c.instructions+=3;goto B406e6c;
case 0x406e6d:c.instructions+=2;goto B406e6d;
case 0x406e6f:c.instructions+=1;goto B406e6f;
case 0x406e74:goto L406e74;
case 0x406e7a:c.instructions+=3;goto B406e7a;
case 0x406e7b:c.instructions+=2;goto B406e7b;
case 0x406e7d:c.instructions+=1;goto B406e7d;
case 0x406e82:goto L406e82;
case 0x406e88:c.instructions+=3;goto B406e88;
case 0x406e89:c.instructions+=2;goto B406e89;
case 0x406e8b:c.instructions+=1;goto B406e8b;
case 0x406e90:goto L406e90;
case 0x406e96:c.instructions+=3;goto B406e96;
case 0x406e97:c.instructions+=2;goto B406e97;
case 0x406e99:c.instructions+=1;goto B406e99;
case 0x406e9e:goto L406e9e;
case 0x406ea4:c.instructions+=3;goto B406ea4;
case 0x406ea5:c.instructions+=2;goto B406ea5;
case 0x406ea7:c.instructions+=1;goto B406ea7;
case 0x406eac:goto L406eac;
case 0x406eb2:c.instructions+=3;goto B406eb2;
case 0x406eb3:c.instructions+=2;goto B406eb3;
case 0x406eb5:c.instructions+=1;goto B406eb5;
case 0x406eba:goto L406eba;
case 0x406ec0:c.instructions+=3;goto B406ec0;
case 0x406ec1:c.instructions+=2;goto B406ec1;
case 0x406ec3:c.instructions+=1;goto B406ec3;
case 0x406ec8:goto L406ec8;
case 0x406ece:c.instructions+=3;goto B406ece;
case 0x406ecf:c.instructions+=2;goto B406ecf;
case 0x406ed1:c.instructions+=1;goto B406ed1;
case 0x406ed6:goto L406ed6;
case 0x406edc:c.instructions+=3;goto B406edc;
case 0x406edd:c.instructions+=2;goto B406edd;
case 0x406edf:c.instructions+=1;goto B406edf;
case 0x406ee4:goto L406ee4;
case 0x406eea:c.instructions+=3;goto B406eea;
case 0x406eeb:c.instructions+=2;goto B406eeb;
case 0x406eed:c.instructions+=1;goto B406eed;
case 0x406ef2:goto L406ef2;
case 0x406ef8:c.instructions+=3;goto B406ef8;
case 0x406ef9:c.instructions+=2;goto B406ef9;
case 0x406efb:c.instructions+=1;goto B406efb;
case 0x406f00:goto L406f00;
case 0x406f06:c.instructions+=3;goto B406f06;
case 0x406f07:c.instructions+=2;goto B406f07;
case 0x406f09:c.instructions+=1;goto B406f09;
case 0x406f0e:goto L406f0e;
case 0x406f14:c.instructions+=3;goto B406f14;
case 0x406f15:c.instructions+=2;goto B406f15;
case 0x406f17:c.instructions+=1;goto B406f17;
case 0x406f1c:goto L406f1c;
case 0x406f22:c.instructions+=3;goto B406f22;
case 0x406f23:c.instructions+=2;goto B406f23;
case 0x406f25:c.instructions+=1;goto B406f25;
case 0x406f2a:goto L406f2a;
case 0x406f30:c.instructions+=3;goto B406f30;
case 0x406f31:c.instructions+=2;goto B406f31;
case 0x406f33:c.instructions+=1;goto B406f33;
case 0x406f38:goto L406f38;
case 0x406f3e:c.instructions+=3;goto B406f3e;
case 0x406f3f:c.instructions+=2;goto B406f3f;
case 0x406f41:c.instructions+=1;goto B406f41;
case 0x406f46:goto L406f46;
case 0x406f4c:c.instructions+=3;goto B406f4c;
case 0x406f4d:c.instructions+=2;goto B406f4d;
case 0x406f4f:c.instructions+=1;goto B406f4f;
case 0x406f54:goto L406f54;
case 0x406f5a:c.instructions+=3;goto B406f5a;
case 0x406f5b:c.instructions+=2;goto B406f5b;
case 0x406f5d:c.instructions+=1;goto B406f5d;
case 0x406f62:goto L406f62;
case 0x406f64:c.instructions+=6;goto B406f64;
case 0x406f66:c.instructions+=5;goto B406f66;
case 0x406f68:c.instructions+=4;goto B406f68;
case 0x406f6e:c.instructions+=3;goto B406f6e;
case 0x406f6f:c.instructions+=2;goto B406f6f;
case 0x406f71:c.instructions+=1;goto B406f71;
case 0x406f76:goto L406f76;
case 0x406f7c:c.instructions+=3;goto B406f7c;
case 0x406f7d:c.instructions+=2;goto B406f7d;
case 0x406f7f:c.instructions+=1;goto B406f7f;
case 0x406f84:goto L406f84;
case 0x406f8a:c.instructions+=3;goto B406f8a;
case 0x406f8b:c.instructions+=2;goto B406f8b;
case 0x406f8d:c.instructions+=1;goto B406f8d;
case 0x406f92:goto L406f92;
case 0x406f94:c.instructions+=6;goto B406f94;
case 0x406f96:c.instructions+=5;goto B406f96;
case 0x406f98:c.instructions+=4;goto B406f98;
case 0x406f9e:c.instructions+=3;goto B406f9e;
case 0x406f9f:c.instructions+=2;goto B406f9f;
case 0x406fa1:c.instructions+=1;goto B406fa1;
case 0x406fa6:goto L406fa6;
case 0x406fac:c.instructions+=3;goto B406fac;
case 0x406fad:c.instructions+=2;goto B406fad;
case 0x406faf:c.instructions+=1;goto B406faf;
case 0x406fb4:goto L406fb4;
case 0x406fba:c.instructions+=3;goto B406fba;
case 0x406fbb:c.instructions+=2;goto B406fbb;
case 0x406fbd:c.instructions+=1;goto B406fbd;
case 0x406fc2:goto L406fc2;
case 0x406fc4:c.instructions+=6;goto B406fc4;
case 0x406fc6:c.instructions+=5;goto B406fc6;
case 0x406fc8:c.instructions+=4;goto B406fc8;
case 0x406fce:c.instructions+=3;goto B406fce;
case 0x406fcf:c.instructions+=2;goto B406fcf;
case 0x406fd1:c.instructions+=1;goto B406fd1;
case 0x406fd6:goto L406fd6;
case 0x406fd8:c.instructions+=6;goto B406fd8;
case 0x406fda:c.instructions+=5;goto B406fda;
case 0x406fdc:c.instructions+=4;goto B406fdc;
case 0x406fe2:c.instructions+=3;goto B406fe2;
case 0x406fe3:c.instructions+=2;goto B406fe3;
case 0x406fe5:c.instructions+=1;goto B406fe5;
case 0x406fea:goto L406fea;
case 0x406ff0:c.instructions+=3;goto B406ff0;
case 0x406ff1:c.instructions+=2;goto B406ff1;
case 0x406ff3:c.instructions+=1;goto B406ff3;
case 0x406ff8:goto L406ff8;
case 0x406ffe:c.instructions+=1;goto B406ffe;
default:missing_instruction(c.pc);}
B406000:L406000:{c.instructions+=4;NFSU2_TR(0x406000);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B406004:{NFSU2_TR(0x406004);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B406006:{NFSU2_TR(0x406006);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B406009:{NFSU2_TR(0x406009);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L406077;}}
}
B40600b:L40600b:{c.instructions+=3;NFSU2_TR(0x40600b);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B406010:{NFSU2_TR(0x406010);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B406012:{NFSU2_TR(0x406012);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L406040;}}
}
B406014:L406014:{c.instructions+=3;NFSU2_TR(0x406014);
__builtin_memmove((R+0),gp(0x890108),4);
}
B406019:{NFSU2_TR(0x406019);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40601b:{NFSU2_TR(0x40601b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L406040;}}
}
B40601d:L40601d:{c.instructions+=3;NFSU2_TR(0x40601d);
__builtin_memmove((R+0),gp(0x890114),4);
}
B406022:{NFSU2_TR(0x406022);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B406024:{NFSU2_TR(0x406024);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L406038;}}
}
B406026:L406026:{c.instructions+=3;NFSU2_TR(0x406026);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B40602b:{NFSU2_TR(0x40602b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40602d:{NFSU2_TR(0x40602d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L406038;}}
}
B40602f:L40602f:{c.instructions+=3;NFSU2_TR(0x40602f);
__builtin_memmove((R+0),gp(0x890104),4);
}
B406034:{NFSU2_TR(0x406034);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B406036:{NFSU2_TR(0x406036);
if(r1(R+518)){{goto L406040;}}
}
B406038:L406038:{c.instructions+=3;NFSU2_TR(0x406038);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406039:{NFSU2_TR(0x406039);
w4(R+4,u32(0x7e9ec4ull));
}
B40603e:{NFSU2_TR(0x40603e);
{goto L406046;}
}
B406040:L406040:{c.instructions+=2;NFSU2_TR(0x406040);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406041:{NFSU2_TR(0x406041);
w4(R+4,u32(0x7e9eb0ull));
}
B406046:L406046:{c.instructions+=4;NFSU2_TR(0x406046);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40604a:{NFSU2_TR(0x40604a);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B40604c:{NFSU2_TR(0x40604c);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40604f:{NFSU2_TR(0x40604f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x406054ull));
TAIL_STATIC(0x5764d0u,576);
}
B406054:L406054:{c.instructions+=9;NFSU2_TR(0x406054);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B406058:{NFSU2_TR(0x406058);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B40605a:{NFSU2_TR(0x40605a);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40605e:{NFSU2_TR(0x40605e);
{u32 ea_=u32(u32(7881940u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B406064:{NFSU2_TR(0x406064);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B406068:{NFSU2_TR(0x406068);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B40606a:{NFSU2_TR(0x40606a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40606c:{NFSU2_TR(0x40606c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40606f:{NFSU2_TR(0x40606f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4060ac;}}
}
B406071:L406071:{c.instructions+=2;NFSU2_TR(0x406071);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B406075:{NFSU2_TR(0x406075);
{goto L4060ae;}
}
B406077:L406077:{c.instructions+=6;NFSU2_TR(0x406077);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40607a:{NFSU2_TR(0x40607a);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B40607c:{NFSU2_TR(0x40607c);
{u32 ea_=u32(u32(7879404u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B406082:{NFSU2_TR(0x406082);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B406084:{NFSU2_TR(0x406084);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B406087:{NFSU2_TR(0x406087);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4060ae;}}
}
B406089:L406089:{c.instructions+=8;NFSU2_TR(0x406089);
{u32 ea_=u32(u32(7879408u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40608f:{NFSU2_TR(0x40608f);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B406093:{NFSU2_TR(0x406093);
{u32 ea_=u32(r4(R+24)+u32(128u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B406099:{NFSU2_TR(0x406099);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40609d:{NFSU2_TR(0x40609d);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B40609f:{NFSU2_TR(0x40609f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4060a1:{NFSU2_TR(0x4060a1);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4060a4:{NFSU2_TR(0x4060a4);
if(r1(R+518)){{goto L4060ac;}}
}
B4060a6:L4060a6:{c.instructions+=2;NFSU2_TR(0x4060a6);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4060aa:{NFSU2_TR(0x4060aa);
{goto L4060ae;}
}
B4060ac:L4060ac:{c.instructions+=1;NFSU2_TR(0x4060ac);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4060ae:L4060ae:{c.instructions+=5;NFSU2_TR(0x4060ae);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4060b2:{NFSU2_TR(0x4060b2);
{u32 ea_=u32(u32(7881940u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4060b8:{NFSU2_TR(0x4060b8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4060ba:{NFSU2_TR(0x4060ba);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4060bd:{NFSU2_TR(0x4060bd);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4060c7;}}
}
B4060bf:L4060bf:{c.instructions+=1;NFSU2_TR(0x4060bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x42340000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4060c7:L4060c7:{c.instructions+=6;NFSU2_TR(0x4060c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4060cb:{NFSU2_TR(0x4060cb);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4060cf:{NFSU2_TR(0x4060cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4060d5:{NFSU2_TR(0x4060d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4060d6:{NFSU2_TR(0x4060d6);
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
B4060d9:{NFSU2_TR(0x4060d9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4060e0:L4060e0:{c.instructions+=13;NFSU2_TR(0x4060e0);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4060e4:{NFSU2_TR(0x4060e4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4060e5:{NFSU2_TR(0x4060e5);
__builtin_memmove((R+24),(R+4),4);
}
B4060e7:{NFSU2_TR(0x4060e7);
{u32 ea_=u32(r4(R+24)+u32(132u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4060ed:{NFSU2_TR(0x4060ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B4060f0:{NFSU2_TR(0x4060f0);
w4(R+4,u32(0x7e9f28ull));
}
B4060f5:{NFSU2_TR(0x4060f5);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B4060f9:{NFSU2_TR(0x4060f9);
{u32 ea_=u32(u32(8802700u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4060ff:{NFSU2_TR(0x4060ff);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B406105:{NFSU2_TR(0x406105);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B406109:{NFSU2_TR(0x406109);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B40610b:{NFSU2_TR(0x40610b);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40610e:{NFSU2_TR(0x40610e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x406113ull));
TAIL_STATIC(0x5764d0u,576);
}
B406113:L406113:{c.instructions+=4;NFSU2_TR(0x406113);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406114:{NFSU2_TR(0x406114);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((R+4),(U+0),4);
}
B406117:{NFSU2_TR(0x406117);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40611a:{NFSU2_TR(0x40611a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40611full));
TAIL_STATIC(0x576aa0u,576);
}
B40611f:L40611f:{c.instructions+=3;NFSU2_TR(0x40611f);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B406124:{NFSU2_TR(0x406124);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B406126:{NFSU2_TR(0x406126);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40614c;}}
}
B406128:L406128:{c.instructions+=3;NFSU2_TR(0x406128);
__builtin_memmove((R+0),gp(0x890108),4);
}
B40612d:{NFSU2_TR(0x40612d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40612f:{NFSU2_TR(0x40612f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40614c;}}
}
B406131:L406131:{c.instructions+=3;NFSU2_TR(0x406131);
__builtin_memmove((R+0),gp(0x890114),4);
}
B406136:{NFSU2_TR(0x406136);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B406138:{NFSU2_TR(0x406138);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L406172;}}
}
B40613a:L40613a:{c.instructions+=3;NFSU2_TR(0x40613a);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B40613f:{NFSU2_TR(0x40613f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B406141:{NFSU2_TR(0x406141);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L406172;}}
}
B406143:L406143:{c.instructions+=3;NFSU2_TR(0x406143);
__builtin_memmove((R+0),gp(0x890104),4);
}
B406148:{NFSU2_TR(0x406148);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40614a:{NFSU2_TR(0x40614a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L406172;}}
}
B40614c:L40614c:{c.instructions+=3;NFSU2_TR(0x40614c);
__builtin_memmove((R+0),gp(0x89e7e2),1);
}
B406151:{NFSU2_TR(0x406151);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B406153:{NFSU2_TR(0x406153);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L406172;}}
}
B406155:L406155:{c.instructions+=3;NFSU2_TR(0x406155);
__builtin_memmove((R+0),gp(0x890100),4);
}
B40615a:{NFSU2_TR(0x40615a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40615c:{NFSU2_TR(0x40615c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L406172;}}
}
B40615e:L40615e:{c.instructions+=3;NFSU2_TR(0x40615e);
__builtin_memmove((R+0),gp(0x890110),4);
}
B406163:{NFSU2_TR(0x406163);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B406165:{NFSU2_TR(0x406165);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L406172;}}
}
B406167:L406167:{c.instructions+=3;NFSU2_TR(0x406167);
__builtin_memmove((R+0),gp(0x783ae4),4);
}
B40616c:{NFSU2_TR(0x40616c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B406170:{NFSU2_TR(0x406170);
{goto L40617c;}
}
B406172:L406172:{c.instructions+=2;NFSU2_TR(0x406172);
__builtin_memmove((R+4),gp(0x783ae8),4);
}
B406178:{NFSU2_TR(0x406178);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40617c:L40617c:{c.instructions+=7;NFSU2_TR(0x40617c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B40617e:{NFSU2_TR(0x40617e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x42cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B406184:{NFSU2_TR(0x406184);
__builtin_memmove((R+4),(R+0),4);
}
B406186:{NFSU2_TR(0x406186);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406187:{NFSU2_TR(0x406187);
w4(R+4,u32(0x7e9f14ull));
}
B40618c:{NFSU2_TR(0x40618c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B406190:{NFSU2_TR(0x406190);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x406195ull));
TAIL_STATIC(0x5764d0u,576);
}
B406195:L406195:{c.instructions+=11;NFSU2_TR(0x406195);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B406199:{NFSU2_TR(0x406199);
{u32 ea_=u32(r4(R+24)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40619c:{NFSU2_TR(0x40619c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40619d:{NFSU2_TR(0x40619d);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B40619f:{NFSU2_TR(0x40619f);
w4(R+4,u32(0x7e9f3cull));
}
B4061a4:{NFSU2_TR(0x4061a4);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4061a8:{NFSU2_TR(0x4061a8);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4061aa:{NFSU2_TR(0x4061aa);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4061ad:{NFSU2_TR(0x4061ad);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B4061af:{NFSU2_TR(0x4061af);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4061b2:{NFSU2_TR(0x4061b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4061b7ull));
TAIL_STATIC(0x5764d0u,576);
}
B4061b7:L4061b7:{c.instructions+=3;NFSU2_TR(0x4061b7);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4061bb:{NFSU2_TR(0x4061bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4061bc:{NFSU2_TR(0x4061bc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4061c0:L4061c0:{c.instructions+=14;NFSU2_TR(0x4061c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B4061c3:{NFSU2_TR(0x4061c3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4061c4:{NFSU2_TR(0x4061c4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4061c5:{NFSU2_TR(0x4061c5);
__builtin_memmove((R+24),(R+4),4);
}
B4061c7:{NFSU2_TR(0x4061c7);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4061ca:{NFSU2_TR(0x4061ca);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B4061cd:{NFSU2_TR(0x4061cd);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B4061cf:{NFSU2_TR(0x4061cf);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x42340000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4061d7:{NFSU2_TR(0x4061d7);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B4061d9:{NFSU2_TR(0x4061d9);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4061dd:{NFSU2_TR(0x4061dd);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B4061df:{NFSU2_TR(0x4061df);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4061e1:{NFSU2_TR(0x4061e1);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4061e4:{NFSU2_TR(0x4061e4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4061ec;}}
}
B4061e6:L4061e6:{c.instructions+=2;NFSU2_TR(0x4061e6);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4061ea:{NFSU2_TR(0x4061ea);
{goto L4061ee;}
}
B4061ec:L4061ec:{c.instructions+=1;NFSU2_TR(0x4061ec);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B4061ee:L4061ee:{c.instructions+=5;NFSU2_TR(0x4061ee);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B4061f0:{NFSU2_TR(0x4061f0);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B4061f2:{NFSU2_TR(0x4061f2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4061f4:{NFSU2_TR(0x4061f4);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4061f7:{NFSU2_TR(0x4061f7);
if(r1(R+514)){{goto L4061fd;}}
}
B4061f9:L4061f9:{c.instructions+=2;NFSU2_TR(0x4061f9);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4061fb:{NFSU2_TR(0x4061fb);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B4061fd:L4061fd:{c.instructions+=12;NFSU2_TR(0x4061fd);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B4061ff:{NFSU2_TR(0x4061ff);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406200:{NFSU2_TR(0x406200);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B406202:{NFSU2_TR(0x406202);
w4(R+4,u32(0x7e9e88ull));
}
B406207:{NFSU2_TR(0x406207);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B406209:{NFSU2_TR(0x406209);
__asm__ volatile(".byte 0xde,0xfa":::"memory");
}
B40620b:{NFSU2_TR(0x40620b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B40620d:{NFSU2_TR(0x40620d);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B40620f:{NFSU2_TR(0x40620f);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B406215:{NFSU2_TR(0x406215);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B406218:{NFSU2_TR(0x406218);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40621a:{NFSU2_TR(0x40621a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40621full));
TAIL_STATIC(0x5764d0u,576);
}
B40621f:L40621f:{c.instructions+=3;NFSU2_TR(0x40621f);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B406221:{NFSU2_TR(0x406221);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B406225:{NFSU2_TR(0x406225);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4062c7;}}
}
B40622b:L40622b:{c.instructions+=7;NFSU2_TR(0x40622b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B40622d:{NFSU2_TR(0x40622d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x42cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B406233:{NFSU2_TR(0x406233);
__builtin_memmove((R+8),(R+4),4);
}
B406235:{NFSU2_TR(0x406235);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B406239:{NFSU2_TR(0x406239);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40623a:{NFSU2_TR(0x40623a);
w4(R+4,u32(0x7e9eecull));
}
B40623f:{NFSU2_TR(0x40623f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x406244ull));
TAIL_STATIC(0x5764d0u,576);
}
B406244:L406244:{c.instructions+=18;NFSU2_TR(0x406244);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B406248:{NFSU2_TR(0x406248);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B40624a:{NFSU2_TR(0x40624a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40624d:{NFSU2_TR(0x40624d);
{u32 ea_=u32(r4(R+0)+u32(524u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B406253:{NFSU2_TR(0x406253);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B406259:{NFSU2_TR(0x406259);
{u32 ea_=u32(r4(R+0)+u32(532u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40625f:{NFSU2_TR(0x40625f);
{u32 ea_=u32(r4(R+0)+u32(528u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B406265:{NFSU2_TR(0x406265);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x42cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40626b:{NFSU2_TR(0x40626b);
__builtin_memmove((R+4),(R+0),4);
}
B40626d:{NFSU2_TR(0x40626d);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B406273:{NFSU2_TR(0x406273);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406274:{NFSU2_TR(0x406274);
w4(R+4,u32(0x7e9f14ull));
}
B406279:{NFSU2_TR(0x406279);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B40627b:{NFSU2_TR(0x40627b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40627f:{NFSU2_TR(0x40627f);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B406285:{NFSU2_TR(0x406285);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B40628b:{NFSU2_TR(0x40628b);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40628f:{NFSU2_TR(0x40628f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x406294ull));
TAIL_STATIC(0x5764d0u,576);
}
B406294:L406294:{c.instructions+=11;NFSU2_TR(0x406294);
{u32 ea_=u32(u32(7879392u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40629a:{NFSU2_TR(0x40629a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40629b:{NFSU2_TR(0x40629b);
w4(R+4,u32(0x7e9f00ull));
}
B4062a0:{NFSU2_TR(0x4062a0);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4062a4:{NFSU2_TR(0x4062a4);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4062aa:{NFSU2_TR(0x4062aa);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4062ae:{NFSU2_TR(0x4062ae);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4062b2:{NFSU2_TR(0x4062b2);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4062b5:{NFSU2_TR(0x4062b5);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B4062b7:{NFSU2_TR(0x4062b7);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4062ba:{NFSU2_TR(0x4062ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4062bfull));
TAIL_STATIC(0x5764d0u,576);
}
B4062bf:L4062bf:{c.instructions+=2;NFSU2_TR(0x4062bf);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4062c3:{NFSU2_TR(0x4062c3);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4062c7:L4062c7:{c.instructions+=3;NFSU2_TR(0x4062c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4062c9:{NFSU2_TR(0x4062c9);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x40ull))));
}
B4062cc:{NFSU2_TR(0x4062cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4062d1ull));
TAIL_STATIC(0x59fa10u,59f);
}
B4062d1:L4062d1:{c.instructions+=28;NFSU2_TR(0x4062d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4062d3:{NFSU2_TR(0x4062d3);
{u32 ea_=u32(u32(7881292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4062d9:{NFSU2_TR(0x4062d9);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B4062db:{NFSU2_TR(0x4062db);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B4062dd:{NFSU2_TR(0x4062dd);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4062e1:{NFSU2_TR(0x4062e1);
{u32 ea_=u32(r4(R+4)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4062e4:{NFSU2_TR(0x4062e4);
{u32 ea_=u32(r4(R+4)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4062e7:{NFSU2_TR(0x4062e7);
{u32 ea_=u32(r4(R+4)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4062ea:{NFSU2_TR(0x4062ea);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B4062ec:{NFSU2_TR(0x4062ec);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B4062ee:{NFSU2_TR(0x4062ee);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B4062f0:{NFSU2_TR(0x4062f0);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B4062f2:{NFSU2_TR(0x4062f2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4062f4:{NFSU2_TR(0x4062f4);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B4062f6:{NFSU2_TR(0x4062f6);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B4062f8:{NFSU2_TR(0x4062f8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4062fa:{NFSU2_TR(0x4062fa);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B4062fc:{NFSU2_TR(0x4062fc);
__asm__ volatile(".byte 0xdd,0xdb":::"memory");
}
B4062fe:{NFSU2_TR(0x4062fe);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B406300:{NFSU2_TR(0x406300);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B406302:{NFSU2_TR(0x406302);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B406306:{NFSU2_TR(0x406306);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40630a:{NFSU2_TR(0x40630a);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B40630c:{NFSU2_TR(0x40630c);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B406312:{NFSU2_TR(0x406312);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B406314:{NFSU2_TR(0x406314);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B406316:{NFSU2_TR(0x406316);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B406319:{NFSU2_TR(0x406319);
if(r1(R+514)){{goto L40631f;}}
}
B40631b:L40631b:{c.instructions+=2;NFSU2_TR(0x40631b);
w1(R+8,u8(0x1ull));
}
B40631d:{NFSU2_TR(0x40631d);
{goto L406321;}
}
B40631f:L40631f:{c.instructions+=1;NFSU2_TR(0x40631f);
w1(R+8,u8(u32(r1(R+8))^u32(r1(R+8))));
}
B406321:L406321:{c.instructions+=4;NFSU2_TR(0x406321);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B406324:{NFSU2_TR(0x406324);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B406328:{NFSU2_TR(0x406328);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40632a:{NFSU2_TR(0x40632a);
if(r1(R+518)){{goto L406350;}}
}
B40632c:L40632c:{c.instructions+=4;NFSU2_TR(0x40632c);
{u32 ea_=u32(u32(8294708u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B406332:{NFSU2_TR(0x406332);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B406334:{NFSU2_TR(0x406334);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B406337:{NFSU2_TR(0x406337);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L40634a;}}
}
B406339:L406339:{c.instructions+=5;NFSU2_TR(0x406339);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40633d:{NFSU2_TR(0x40633d);
{u32 ea_=u32(u32(8506256u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B406343:{NFSU2_TR(0x406343);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B406345:{NFSU2_TR(0x406345);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B406348:{NFSU2_TR(0x406348);
if(r1(R+514)){{goto L406372;}}
}
B40634a:L40634a:{c.instructions+=2;NFSU2_TR(0x40634a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B40634e:{NFSU2_TR(0x40634e);
{goto L406372;}
}
B406350:L406350:{c.instructions+=4;NFSU2_TR(0x406350);
{u32 ea_=u32(u32(8294704u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B406356:{NFSU2_TR(0x406356);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B406358:{NFSU2_TR(0x406358);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40635b:{NFSU2_TR(0x40635b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L406372;}}
}
B40635d:L40635d:{c.instructions+=5;NFSU2_TR(0x40635d);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B406361:{NFSU2_TR(0x406361);
{u32 ea_=u32(u32(8294712u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B406367:{NFSU2_TR(0x406367);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B406369:{NFSU2_TR(0x406369);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40636c:{NFSU2_TR(0x40636c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L406372;}}
}
B40636e:L40636e:{c.instructions+=1;NFSU2_TR(0x40636e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B406372:L406372:{c.instructions+=2;NFSU2_TR(0x406372);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B406374:{NFSU2_TR(0x406374);
if(r1(R+518)){{goto L4063af;}}
}
B406376:L406376:{c.instructions+=3;NFSU2_TR(0x406376);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B406379:{NFSU2_TR(0x406379);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40637b:{NFSU2_TR(0x40637b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40638c;}}
}
B40637d:L40637d:{c.instructions+=5;NFSU2_TR(0x40637d);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B406381:{NFSU2_TR(0x406381);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B406385:{NFSU2_TR(0x406385);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B406387:{NFSU2_TR(0x406387);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40638a:{NFSU2_TR(0x40638a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4063af;}}
}
B40638c:L40638c:{c.instructions+=7;NFSU2_TR(0x40638c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B406390:{NFSU2_TR(0x406390);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B406394:{NFSU2_TR(0x406394);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B406398:{NFSU2_TR(0x406398);
{u32 ea_=u32(u32(7881940u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40639e:{NFSU2_TR(0x40639e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4063a0:{NFSU2_TR(0x4063a0);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4063a3:{NFSU2_TR(0x4063a3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4063e6;}}
}
B4063a5:L4063a5:{c.instructions+=2;NFSU2_TR(0x4063a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x42340000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4063ad:{NFSU2_TR(0x4063ad);
{goto L4063e6;}
}
B4063af:L4063af:{c.instructions+=6;NFSU2_TR(0x4063af);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4063b2:{NFSU2_TR(0x4063b2);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B4063b4:{NFSU2_TR(0x4063b4);
{u32 ea_=u32(u32(7879404u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4063ba:{NFSU2_TR(0x4063ba);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4063bc:{NFSU2_TR(0x4063bc);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4063bf:{NFSU2_TR(0x4063bf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4063e6;}}
}
B4063c1:L4063c1:{c.instructions+=8;NFSU2_TR(0x4063c1);
{u32 ea_=u32(u32(7879408u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4063c7:{NFSU2_TR(0x4063c7);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4063cb:{NFSU2_TR(0x4063cb);
{u32 ea_=u32(r4(R+24)+u32(128u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B4063d1:{NFSU2_TR(0x4063d1);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4063d5:{NFSU2_TR(0x4063d5);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B4063d7:{NFSU2_TR(0x4063d7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4063d9:{NFSU2_TR(0x4063d9);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4063dc:{NFSU2_TR(0x4063dc);
if(r1(R+518)){{goto L4063e4;}}
}
B4063de:L4063de:{c.instructions+=2;NFSU2_TR(0x4063de);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4063e2:{NFSU2_TR(0x4063e2);
{goto L4063e6;}
}
B4063e4:L4063e4:{c.instructions+=1;NFSU2_TR(0x4063e4);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4063e6:L4063e6:{c.instructions+=9;NFSU2_TR(0x4063e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4063e9:{NFSU2_TR(0x4063e9);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4063ed:{NFSU2_TR(0x4063ed);
{u32 ea_=u32(r4(R+0)+u32(624u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4063f3:{NFSU2_TR(0x4063f3);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4063f7:{NFSU2_TR(0x4063f7);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4063fb:{NFSU2_TR(0x4063fb);
{u32 ea_=u32(u32(7881948u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B406401:{NFSU2_TR(0x406401);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B406403:{NFSU2_TR(0x406403);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B406406:{NFSU2_TR(0x406406);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L406455;}}
}
B406408:L406408:{c.instructions+=6;NFSU2_TR(0x406408);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40640c:{NFSU2_TR(0x40640c);
{u32 ea_=u32(u32(7881940u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B406412:{NFSU2_TR(0x406412);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B406416:{NFSU2_TR(0x406416);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B406418:{NFSU2_TR(0x406418);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40641b:{NFSU2_TR(0x40641b);
if(r1(R+514)){{goto L406425;}}
}
B40641d:L40641d:{c.instructions+=2;NFSU2_TR(0x40641d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40641f:{NFSU2_TR(0x40641f);
{u32 ea_=u32(u32(7881940u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B406425:L406425:{c.instructions+=2;NFSU2_TR(0x406425);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40642b:{NFSU2_TR(0x40642b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x406430ull));
TAIL_STATIC(0x75bed4u,75b);
}
B406430:L406430:{c.instructions+=14;NFSU2_TR(0x406430);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B406434:{NFSU2_TR(0x406434);
__builtin_memmove((R+4),(R+0),4);
}
B406436:{NFSU2_TR(0x406436);
w4(R+0,u32(0xb60b60b7ull));
}
B40643b:{NFSU2_TR(0x40643b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B40643d:{NFSU2_TR(0x40643d);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B40643f:{NFSU2_TR(0x40643f);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B406442:{NFSU2_TR(0x406442);
__builtin_memmove((R+4),(R+8),4);
}
B406444:{NFSU2_TR(0x406444);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B406447:{NFSU2_TR(0x406447);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B406449:{NFSU2_TR(0x406449);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B40644d:{NFSU2_TR(0x40644d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40644e:{NFSU2_TR(0x40644e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B40644f:{NFSU2_TR(0x40644f);
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
B406452:{NFSU2_TR(0x406452);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B406455:L406455:{c.instructions+=2;NFSU2_TR(0x406455);
{u32 ea_=u32(u32(7881948u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40645b:{NFSU2_TR(0x40645b);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x406425u);}goto L406425;}
}
B406460:L406460:{c.instructions+=11;NFSU2_TR(0x406460);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406461:{NFSU2_TR(0x406461);
__builtin_memmove((R+20),(R+16),4);
}
B406463:{NFSU2_TR(0x406463);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B406466:{NFSU2_TR(0x406466);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B406469:{NFSU2_TR(0x406469);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40646a:{NFSU2_TR(0x40646a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40646b:{NFSU2_TR(0x40646b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40646c:{NFSU2_TR(0x40646c);
__builtin_memmove((R+28),(R+4),4);
}
B40646e:{NFSU2_TR(0x40646e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B406470:{NFSU2_TR(0x406470);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
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
B406474:{NFSU2_TR(0x406474);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4069db;}}
}
B40647a:L40647a:{c.instructions+=3;NFSU2_TR(0x40647a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40647d:{NFSU2_TR(0x40647d);
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
B40647f:{NFSU2_TR(0x40647f);
if(r1(R+518)){{goto L4069db;}}
}
B406485:L406485:{c.instructions+=3;NFSU2_TR(0x406485);
__builtin_memmove((R+4),gp(0x870760),4);
}
B40648b:{NFSU2_TR(0x40648b);
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
B40648d:{NFSU2_TR(0x40648d);
if(r1(R+518)){{goto L4069db;}}
}
B406493:L406493:{c.instructions+=3;NFSU2_TR(0x406493);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B406496:{NFSU2_TR(0x406496);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406497:{NFSU2_TR(0x406497);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40649cull));
TAIL_STATIC(0x5bfd70u,5bf);
}
B40649c:L40649c:{c.instructions+=2;NFSU2_TR(0x40649c);
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
B40649e:{NFSU2_TR(0x40649e);
if(r1(R+518)){{goto L4069db;}}
}
B4064a4:L4064a4:{c.instructions+=3;NFSU2_TR(0x4064a4);
__builtin_memmove((R+0),gp(0x8900d8),4);
}
B4064a9:{NFSU2_TR(0x4064a9);
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
B4064ab:{NFSU2_TR(0x4064ab);
if(r1(R+518)){{goto L4069db;}}
}
B4064b1:L4064b1:{c.instructions+=2;NFSU2_TR(0x4064b1);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
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
B4064b4:{NFSU2_TR(0x4064b4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4069db;}}
}
B4064ba:L4064ba:{c.instructions+=3;NFSU2_TR(0x4064ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4064bc:{NFSU2_TR(0x4064bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4064bf:{NFSU2_TR(0x4064bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4064c4ull));
TAIL_STATIC(0x5eb420u,5eb);
}
B4064c4:L4064c4:{c.instructions+=2;NFSU2_TR(0x4064c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4064c6:{NFSU2_TR(0x4064c6);
if(r1(R+518)){{goto L40692a;}}
}
B4064cc:L4064cc:{c.instructions+=2;NFSU2_TR(0x4064cc);
w4(R+4,u32(0x89e7a0ull));
}
B4064d1:{NFSU2_TR(0x4064d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4064d6ull));
TAIL_STATIC(0x4018f0u,401);
}
B4064d6:L4064d6:{c.instructions+=2;NFSU2_TR(0x4064d6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4064d8:{NFSU2_TR(0x4064d8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40692a;}}
}
B4064de:L4064de:{c.instructions+=7;NFSU2_TR(0x4064de);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4064e1:{NFSU2_TR(0x4064e1);
__builtin_memmove((R+4),gp(0x870760),4);
}
B4064e7:{NFSU2_TR(0x4064e7);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B4064e9:{NFSU2_TR(0x4064e9);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4064ef:{NFSU2_TR(0x4064ef);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4064f1:{NFSU2_TR(0x4064f1);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4064f4:{NFSU2_TR(0x4064f4);
if(r1(R+514)){{goto L40650a;}}
}
B4064f6:L4064f6:{c.instructions+=5;NFSU2_TR(0x4064f6);
u8 U[4];
w4(U+0,u32(0x2710ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4064fb:{NFSU2_TR(0x4064fb);
u8 U[4];
w4(U+0,u32(0x2710ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406500:{NFSU2_TR(0x406500);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406502:{NFSU2_TR(0x406502);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406503:{NFSU2_TR(0x406503);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x406508ull));
TAIL_STATIC(0x5c9150u,5c9);
}
B406508:L406508:{c.instructions+=1;NFSU2_TR(0x406508);
{goto L406510;}
}
B40650a:L40650a:{c.instructions+=2;NFSU2_TR(0x40650a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40650b:{NFSU2_TR(0x40650b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x406510ull));
TAIL_STATIC(0x5bfe00u,5bf);
}
B406510:L406510:{c.instructions+=4;NFSU2_TR(0x406510);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B406512:{NFSU2_TR(0x406512);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((R+4),(U+0),4);
}
B406515:{NFSU2_TR(0x406515);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406516:{NFSU2_TR(0x406516);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40651bull));
TAIL_STATIC(0x440f70u,440);
}
B40651b:L40651b:{c.instructions+=5;NFSU2_TR(0x40651b);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B40651f:{NFSU2_TR(0x40651f);
{u32 ea_=u32(u32(7881988u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B406525:{NFSU2_TR(0x406525);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B406528:{NFSU2_TR(0x406528);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40652d:{NFSU2_TR(0x40652d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x406532ull));
TAIL_STATIC(0x401070u,401);
}
B406532:L406532:{c.instructions+=7;NFSU2_TR(0x406532);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B406536:{NFSU2_TR(0x406536);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B406539:{NFSU2_TR(0x406539);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40653c:{NFSU2_TR(0x40653c);
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
B40653f:{NFSU2_TR(0x40653f);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B406543:{NFSU2_TR(0x406543);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406544:{NFSU2_TR(0x406544);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x406549ull));
TAIL_STATIC(0x59daf0u,59d);
}
B406549:L406549:{c.instructions+=6;NFSU2_TR(0x406549);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40654d:{NFSU2_TR(0x40654d);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B406551:{NFSU2_TR(0x406551);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406552:{NFSU2_TR(0x406552);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B406555:{NFSU2_TR(0x406555);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B406559:{NFSU2_TR(0x406559);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40655eull));
TAIL_STATIC(0x59daf0u,59d);
}
B40655e:L40655e:{c.instructions+=7;NFSU2_TR(0x40655e);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B406562:{NFSU2_TR(0x406562);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B406566:{NFSU2_TR(0x406566);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B40656a:{NFSU2_TR(0x40656a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B406570:{NFSU2_TR(0x406570);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B406572:{NFSU2_TR(0x406572);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B406575:{NFSU2_TR(0x406575);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4065e0;}}
}
B406577:L406577:{c.instructions+=6;NFSU2_TR(0x406577);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40657b:{NFSU2_TR(0x40657b);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B40657d:{NFSU2_TR(0x40657d);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B406583:{NFSU2_TR(0x406583);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B406585:{NFSU2_TR(0x406585);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B406588:{NFSU2_TR(0x406588);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4065ba;}}
}
B40658a:L40658a:{c.instructions+=4;NFSU2_TR(0x40658a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40658e:{NFSU2_TR(0x40658e);
{u32 ea_=u32(r4(R+28)+u32(12u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B406591:{NFSU2_TR(0x406591);
{u32 ea_=u32(u32(7881984u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B406597:{NFSU2_TR(0x406597);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40659cull));
TAIL_STATIC(0x75bed4u,75b);
}
B40659c:L40659c:{c.instructions+=2;NFSU2_TR(0x40659c);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x2710ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x2710ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4065a1:{NFSU2_TR(0x4065a1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4065aa;}}
}
B4065a3:L4065a3:{c.instructions+=2;NFSU2_TR(0x4065a3);
w4(R+24,u32(0x2710ull));
}
B4065a8:{NFSU2_TR(0x4065a8);
{goto L4065bc;}
}
B4065aa:L4065aa:{c.instructions+=3;NFSU2_TR(0x4065aa);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0xffffd8f0ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffffd8f0ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4065af:{NFSU2_TR(0x4065af);
__builtin_memmove((R+24),(R+0),4);
}
B4065b1:{NFSU2_TR(0x4065b1);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4065bc;}}
}
B4065b3:L4065b3:{c.instructions+=2;NFSU2_TR(0x4065b3);
w4(R+24,u32(0xffffd8f0ull));
}
B4065b8:{NFSU2_TR(0x4065b8);
{goto L4065bc;}
}
B4065ba:L4065ba:{c.instructions+=1;NFSU2_TR(0x4065ba);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4065bc:L4065bc:{c.instructions+=4;NFSU2_TR(0x4065bc);
__builtin_memmove((R+4),gp(0x870760),4);
}
B4065c2:{NFSU2_TR(0x4065c2);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4065c4:{NFSU2_TR(0x4065c4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4065c5:{NFSU2_TR(0x4065c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4065caull));
TAIL_STATIC(0x5bfd90u,5bf);
}
B4065ca:L4065ca:{c.instructions+=2;NFSU2_TR(0x4065ca);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4065cc:{NFSU2_TR(0x4065cc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4065e0;}}
}
B4065ce:L4065ce:{c.instructions+=5;NFSU2_TR(0x4065ce);
__builtin_memmove((R+4),gp(0x870760),4);
}
B4065d4:{NFSU2_TR(0x4065d4);
u8 U[4];
w4(U+0,u32(0x10eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4065d9:{NFSU2_TR(0x4065d9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4065da:{NFSU2_TR(0x4065da);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4065db:{NFSU2_TR(0x4065db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4065e0ull));
TAIL_STATIC(0x5c9550u,5c9);
}
B4065e0:L4065e0:{c.instructions+=4;NFSU2_TR(0x4065e0);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4065e6:{NFSU2_TR(0x4065e6);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4065ea:{NFSU2_TR(0x4065ea);
{u32 ea_=u32(u32(7881980u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4065f0:{NFSU2_TR(0x4065f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4065f5ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4065f5:L4065f5:{c.instructions+=4;NFSU2_TR(0x4065f5);
__builtin_memmove((R+4),gp(0x870760),4);
}
B4065fb:{NFSU2_TR(0x4065fb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4065fc:{NFSU2_TR(0x4065fc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4065fd:{NFSU2_TR(0x4065fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x406602ull));
TAIL_STATIC(0x5c9590u,5c9);
}
B406602:L406602:{c.instructions+=4;NFSU2_TR(0x406602);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B406604:{NFSU2_TR(0x406604);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x390ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B40660a:{NFSU2_TR(0x40660a);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40660c:{NFSU2_TR(0x40660c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L406638;}}
}
B40660e:L40660e:{c.instructions+=3;NFSU2_TR(0x40660e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x391ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B406614:{NFSU2_TR(0x406614);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B406616:{NFSU2_TR(0x406616);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L406638;}}
}
B406618:L406618:{c.instructions+=4;NFSU2_TR(0x406618);
__builtin_memmove((R+4),gp(0x870760),4);
}
B40661e:{NFSU2_TR(0x40661e);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406620:{NFSU2_TR(0x406620);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406621:{NFSU2_TR(0x406621);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x406626ull));
TAIL_STATIC(0x5c9040u,5c9);
}
B406626:L406626:{c.instructions+=2;NFSU2_TR(0x406626);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B406628:{NFSU2_TR(0x406628);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L406656;}}
}
B40662a:L40662a:{c.instructions+=3;NFSU2_TR(0x40662a);
__builtin_memmove((R+4),gp(0x870760),4);
}
B406630:{NFSU2_TR(0x406630);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406631:{NFSU2_TR(0x406631);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x406636ull));
TAIL_STATIC(0x5cda10u,5cd);
}
B406636:L406636:{c.instructions+=1;NFSU2_TR(0x406636);
{goto L406656;}
}
B406638:L406638:{c.instructions+=4;NFSU2_TR(0x406638);
__builtin_memmove((R+4),gp(0x870760),4);
}
B40663e:{NFSU2_TR(0x40663e);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406640:{NFSU2_TR(0x406640);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406641:{NFSU2_TR(0x406641);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x406646ull));
TAIL_STATIC(0x5c9040u,5c9);
}
B406646:L406646:{c.instructions+=2;NFSU2_TR(0x406646);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B406648:{NFSU2_TR(0x406648);
if(r1(R+518)){{goto L406656;}}
}
B40664a:L40664a:{c.instructions+=3;NFSU2_TR(0x40664a);
__builtin_memmove((R+4),gp(0x870760),4);
}
B406650:{NFSU2_TR(0x406650);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406651:{NFSU2_TR(0x406651);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x406656ull));
TAIL_STATIC(0x5cdbb0u,5cd);
}
B406656:L406656:{c.instructions+=10;NFSU2_TR(0x406656);
{u32 ea_=u32((r4(R+12)*4u)+u32(8551084u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40665d:{NFSU2_TR(0x40665d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x827aacull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B406664:{NFSU2_TR(0x406664);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B406668:{NFSU2_TR(0x406668);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40666c:{NFSU2_TR(0x40666c);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B406670:{NFSU2_TR(0x406670);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B406672:{NFSU2_TR(0x406672);
{u32 ea_=u32(u32(7881976u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B406678:{NFSU2_TR(0x406678);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40667a:{NFSU2_TR(0x40667a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40667d:{NFSU2_TR(0x40667d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4066b4;}}
}
B40667f:L40667f:{c.instructions+=8;NFSU2_TR(0x40667f);
{u32 ea_=u32(u32(8802700u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B406685:{NFSU2_TR(0x406685);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40668b:{NFSU2_TR(0x40668b);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B40668d:{NFSU2_TR(0x40668d);
{u32 ea_=u32((r4(R+12)*4u)+u32(8551076u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B406694:{NFSU2_TR(0x406694);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B40669a:{NFSU2_TR(0x40669a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40669c:{NFSU2_TR(0x40669c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40669f:{NFSU2_TR(0x40669f);
if(r1(R+514)){{goto L406729;}}
}
B4066a5:L4066a5:{c.instructions+=2;NFSU2_TR(0x4066a5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4066a7:{NFSU2_TR(0x4066a7);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x827aa4ull))+u32(r4(U+0))));
w4(U+8,u32(0x0ull));
s4(u32(r4(U+4)),r4(U+8));
}
B4066b2:L4066b2:{c.instructions+=1;NFSU2_TR(0x4066b2);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4066b4:L4066b4:{c.instructions+=9;NFSU2_TR(0x4066b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4066b6:{NFSU2_TR(0x4066b6);
{u32 ea_=u32(r4(R+0)+u32(880u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4066bc:{NFSU2_TR(0x4066bc);
{u32 ea_=u32(r4(R+0)+u32(884u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4066c2:{NFSU2_TR(0x4066c2);
{u32 ea_=u32(r4(R+0)+u32(888u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4066c8:{NFSU2_TR(0x4066c8);
{u32 ea_=u32(r4(R+0)+u32(892u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4066ce:{NFSU2_TR(0x4066ce);
{u32 ea_=u32(u32(7881972u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4066d4:{NFSU2_TR(0x4066d4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4066d6:{NFSU2_TR(0x4066d6);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4066d9:{NFSU2_TR(0x4066d9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4067af;}}
}
B4066df:L4066df:{c.instructions+=5;NFSU2_TR(0x4066df);
{u32 ea_=u32(u32(7879376u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B4066e5:{NFSU2_TR(0x4066e5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4066e6:{NFSU2_TR(0x4066e6);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4066e9:{NFSU2_TR(0x4066e9);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4066ee:{NFSU2_TR(0x4066ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4066f3ull));
TAIL_STATIC(0x401070u,401);
}
B4066f3:L4066f3:{c.instructions+=9;NFSU2_TR(0x4066f3);
{u32 ea_=u32(u32(8802700u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4066f9:{NFSU2_TR(0x4066f9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4066fc:{NFSU2_TR(0x4066fc);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B406702:{NFSU2_TR(0x406702);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B406704:{NFSU2_TR(0x406704);
{u32 ea_=u32((r4(R+12)*4u)+u32(8551076u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40670b:{NFSU2_TR(0x40670b);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B406711:{NFSU2_TR(0x406711);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B406713:{NFSU2_TR(0x406713);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B406716:{NFSU2_TR(0x406716);
if(r1(R+514)){{goto L40677f;}}
}
B406718:L406718:{c.instructions+=4;NFSU2_TR(0x406718);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40671a:{NFSU2_TR(0x40671a);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x827aa4ull))+u32(r4(U+0))));
w4(U+8,u32(0x0ull));
s4(u32(r4(U+4)),r4(U+8));
}
B406725:{NFSU2_TR(0x406725);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B406727:{NFSU2_TR(0x406727);
{goto L406793;}
}
B406729:L406729:{c.instructions+=4;NFSU2_TR(0x406729);
{u32 ea_=u32(u32(7881968u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40672f:{NFSU2_TR(0x40672f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B406731:{NFSU2_TR(0x406731);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B406734:{NFSU2_TR(0x406734);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4066b2u);}goto L4066b2;}}
}
B40673a:L40673a:{c.instructions+=8;NFSU2_TR(0x40673a);
{u32 ea_=u32((r4(R+12)*4u)+u32(8551076u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B406741:{NFSU2_TR(0x406741);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406742:{NFSU2_TR(0x406742);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B406746:{NFSU2_TR(0x406746);
{u32 ea_=u32(u32(7881976u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40674c:{NFSU2_TR(0x40674c);
{u32 ea_=u32(u32(7881964u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B406752:{NFSU2_TR(0x406752);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B406755:{NFSU2_TR(0x406755);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40675a:{NFSU2_TR(0x40675a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40675full));
TAIL_STATIC(0x401070u,401);
}
B40675f:L40675f:{c.instructions+=3;NFSU2_TR(0x40675f);
{u32 ea_=u32(u32(7881984u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B406765:{NFSU2_TR(0x406765);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B406768:{NFSU2_TR(0x406768);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40676dull));
TAIL_STATIC(0x75bed4u,75b);
}
B40676d:L40676d:{c.instructions+=4;NFSU2_TR(0x40676d);
__builtin_memmove((R+4),gp(0x870760),4);
}
B406773:{NFSU2_TR(0x406773);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406774:{NFSU2_TR(0x406774);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406775:{NFSU2_TR(0x406775);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40677aull));
TAIL_STATIC(0x5c9760u,5c9);
}
B40677a:L40677a:{c.instructions+=1;NFSU2_TR(0x40677a);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4066b4u);}goto L4066b4;}
}
B40677f:L40677f:{c.instructions+=4;NFSU2_TR(0x40677f);
{u32 ea_=u32(u32(7881968u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B406785:{NFSU2_TR(0x406785);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B406787:{NFSU2_TR(0x406787);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40678a:{NFSU2_TR(0x40678a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4067ad;}}
}
B40678c:L40678c:{c.instructions+=1;NFSU2_TR(0x40678c);
{u32 ea_=u32((r4(R+12)*4u)+u32(8551076u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B406793:L406793:{c.instructions+=2;NFSU2_TR(0x406793);
{u32 ea_=u32(u32(7881960u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B406799:{NFSU2_TR(0x406799);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40679eull));
TAIL_STATIC(0x75bed4u,75b);
}
B40679e:L40679e:{c.instructions+=4;NFSU2_TR(0x40679e);
__builtin_memmove((R+4),gp(0x870760),4);
}
B4067a4:{NFSU2_TR(0x4067a4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4067a5:{NFSU2_TR(0x4067a5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4067a6:{NFSU2_TR(0x4067a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4067abull));
TAIL_STATIC(0x5c9760u,5c9);
}
B4067ab:L4067ab:{c.instructions+=1;NFSU2_TR(0x4067ab);
{goto L4067b1;}
}
B4067ad:L4067ad:{c.instructions+=1;NFSU2_TR(0x4067ad);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4067af:L4067af:{c.instructions+=1;NFSU2_TR(0x4067af);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4067b1:L4067b1:{c.instructions+=7;NFSU2_TR(0x4067b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4067b3:{NFSU2_TR(0x4067b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x394ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4067b9:{NFSU2_TR(0x4067b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x398ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4067bf:{NFSU2_TR(0x4067bf);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4067c2:{NFSU2_TR(0x4067c2);
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
B4067c5:{NFSU2_TR(0x4067c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4067c9:{NFSU2_TR(0x4067c9);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L406823;}}
}
B4067cb:L4067cb:{c.instructions+=1;NFSU2_TR(0x4067cb);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4069e4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4067d2:L4067d2:{c.instructions+=3;NFSU2_TR(0x4067d2);
w4(R+4,u32(0x82ull));
}
B4067d7:{NFSU2_TR(0x4067d7);
w4(R+0,u32(0x50ull));
}
B4067dc:{NFSU2_TR(0x4067dc);
{goto L406827;}
}
B4067de:L4067de:{c.instructions+=3;NFSU2_TR(0x4067de);
w4(R+4,u32(0x6eull));
}
B4067e3:{NFSU2_TR(0x4067e3);
w4(R+0,u32(0x50ull));
}
B4067e8:{NFSU2_TR(0x4067e8);
{goto L406827;}
}
B4067ea:L4067ea:{c.instructions+=3;NFSU2_TR(0x4067ea);
w4(R+4,u32(0x64ull));
}
B4067ef:{NFSU2_TR(0x4067ef);
w4(R+0,u32(0x28ull));
}
B4067f4:{NFSU2_TR(0x4067f4);
{goto L406827;}
}
B4067f6:L4067f6:{c.instructions+=3;NFSU2_TR(0x4067f6);
w4(R+4,u32(0x64ull));
}
B4067fb:{NFSU2_TR(0x4067fb);
__builtin_memmove((R+0),(R+4),4);
}
B4067fd:{NFSU2_TR(0x4067fd);
{goto L406827;}
}
B4067ff:L4067ff:{c.instructions+=3;NFSU2_TR(0x4067ff);
w4(R+4,u32(0x46ull));
}
B406804:{NFSU2_TR(0x406804);
w4(R+0,u32(0x5aull));
}
B406809:{NFSU2_TR(0x406809);
{goto L406827;}
}
B40680b:L40680b:{c.instructions+=3;NFSU2_TR(0x40680b);
w4(R+4,u32(0x50ull));
}
B406810:{NFSU2_TR(0x406810);
w4(R+0,u32(0x64ull));
}
B406815:{NFSU2_TR(0x406815);
{goto L406827;}
}
B406817:L406817:{c.instructions+=3;NFSU2_TR(0x406817);
w4(R+4,u32(0x50ull));
}
B40681c:{NFSU2_TR(0x40681c);
w4(R+0,u32(0x8cull));
}
B406821:{NFSU2_TR(0x406821);
{goto L406827;}
}
B406823:L406823:{c.instructions+=2;NFSU2_TR(0x406823);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B406825:{NFSU2_TR(0x406825);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B406827:L406827:{c.instructions+=3;NFSU2_TR(0x406827);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xfffffff8ull))));
}
B40682a:{NFSU2_TR(0x40682a);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B40682d:{NFSU2_TR(0x40682d);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L406896;}}
}
B40682f:L40682f:{c.instructions+=1;NFSU2_TR(0x40682f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x406a0cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B406836:L406836:{c.instructions+=4;NFSU2_TR(0x406836);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B406838:{NFSU2_TR(0x406838);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x82ull))));
}
B40683e:{NFSU2_TR(0x40683e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
}
B406841:{NFSU2_TR(0x406841);
{goto L406898;}
}
B406843:L406843:{c.instructions+=4;NFSU2_TR(0x406843);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B406845:{NFSU2_TR(0x406845);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x6eull))));
}
B406848:{NFSU2_TR(0x406848);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
}
B40684b:{NFSU2_TR(0x40684b);
{goto L406898;}
}
B40684d:L40684d:{c.instructions+=4;NFSU2_TR(0x40684d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x64ull))));
}
B406850:{NFSU2_TR(0x406850);
w4(R+24,u32(0x2ull));
}
B406855:{NFSU2_TR(0x406855);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
}
B406858:{NFSU2_TR(0x406858);
{goto L406898;}
}
B40685a:L40685a:{c.instructions+=4;NFSU2_TR(0x40685a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x64ull))));
}
B40685d:{NFSU2_TR(0x40685d);
w4(R+24,u32(0x1ull));
}
B406862:{NFSU2_TR(0x406862);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
}
B406865:{NFSU2_TR(0x406865);
{goto L406898;}
}
B406867:L406867:{c.instructions+=4;NFSU2_TR(0x406867);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x46ull))));
}
B40686a:{NFSU2_TR(0x40686a);
w4(R+24,u32(0x1ull));
}
B40686f:{NFSU2_TR(0x40686f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x5aull))));
}
B406872:{NFSU2_TR(0x406872);
{goto L406898;}
}
B406874:L406874:{c.instructions+=4;NFSU2_TR(0x406874);
w4(R+24,u32(0x1ull));
}
B406879:{NFSU2_TR(0x406879);
w4(R+4,u32(0x50ull));
}
B40687e:{NFSU2_TR(0x40687e);
w4(R+0,u32(0x64ull));
}
B406883:{NFSU2_TR(0x406883);
{goto L406898;}
}
B406885:L406885:{c.instructions+=4;NFSU2_TR(0x406885);
w4(R+24,u32(0x1ull));
}
B40688a:{NFSU2_TR(0x40688a);
w4(R+4,u32(0x50ull));
}
B40688f:{NFSU2_TR(0x40688f);
w4(R+0,u32(0x8cull));
}
B406894:{NFSU2_TR(0x406894);
{goto L406898;}
}
B406896:L406896:{c.instructions+=1;NFSU2_TR(0x406896);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B406898:L406898:{c.instructions+=13;NFSU2_TR(0x406898);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B406899:{NFSU2_TR(0x406899);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B40689b:{NFSU2_TR(0x40689b);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B40689d:{NFSU2_TR(0x40689d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40689e:{NFSU2_TR(0x40689e);
__builtin_memmove((R+0),(R+4),4);
}
B4068a0:{NFSU2_TR(0x4068a0);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B4068a1:{NFSU2_TR(0x4068a1);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B4068a3:{NFSU2_TR(0x4068a3);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B4068a5:{NFSU2_TR(0x4068a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4068a9:{NFSU2_TR(0x4068a9);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4068ad:{NFSU2_TR(0x4068ad);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4068b1:{NFSU2_TR(0x4068b1);
{u32 ea_=u32(u32(7881956u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4068b7:{NFSU2_TR(0x4068b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4068bcull));
TAIL_STATIC(0x75bed4u,75b);
}
B4068bc:L4068bc:{c.instructions+=5;NFSU2_TR(0x4068bc);
__builtin_memmove((R+4),gp(0x870760),4);
}
B4068c2:{NFSU2_TR(0x4068c2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4068c3:{NFSU2_TR(0x4068c3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4068c4:{NFSU2_TR(0x4068c4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4068c5:{NFSU2_TR(0x4068c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4068caull));
TAIL_STATIC(0x5c9fd0u,5c9);
}
B4068ca:L4068ca:{c.instructions+=2;NFSU2_TR(0x4068ca);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4068cd:{NFSU2_TR(0x4068cd);
if(r1(R+518)){{goto L4068d6;}}
}
B4068cf:L4068cf:{c.instructions+=2;NFSU2_TR(0x4068cf);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4068d4:{NFSU2_TR(0x4068d4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40690b;}}
}
B4068d6:L4068d6:{c.instructions+=5;NFSU2_TR(0x4068d6);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4068da:{NFSU2_TR(0x4068da);
{u32 ea_=u32(u32(7881952u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4068e0:{NFSU2_TR(0x4068e0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4068e2:{NFSU2_TR(0x4068e2);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4068e5:{NFSU2_TR(0x4068e5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40690b;}}
}
B4068e7:L4068e7:{c.instructions+=4;NFSU2_TR(0x4068e7);
__builtin_memmove((R+4),gp(0x870760),4);
}
B4068ed:{NFSU2_TR(0x4068ed);
u8 U[4];
w4(U+0,u32(0x2710ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4068f2:{NFSU2_TR(0x4068f2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4068f3:{NFSU2_TR(0x4068f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4068f8ull));
TAIL_STATIC(0x5c9d90u,5c9);
}
B4068f8:L4068f8:{c.instructions+=9;NFSU2_TR(0x4068f8);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4068fc:{NFSU2_TR(0x4068fc);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B406900:{NFSU2_TR(0x406900);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B406902:{NFSU2_TR(0x406902);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B406903:{NFSU2_TR(0x406903);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B406904:{NFSU2_TR(0x406904);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B406905:{NFSU2_TR(0x406905);
__builtin_memmove((R+16),(R+20),4);
}
B406907:{NFSU2_TR(0x406907);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B406908:{NFSU2_TR(0x406908);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40690b:L40690b:{c.instructions+=3;NFSU2_TR(0x40690b);
__builtin_memmove((R+4),gp(0x870760),4);
}
B406911:{NFSU2_TR(0x406911);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406912:{NFSU2_TR(0x406912);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x406917ull));
TAIL_STATIC(0x5cd910u,5cd);
}
B406917:L406917:{c.instructions+=9;NFSU2_TR(0x406917);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40691b:{NFSU2_TR(0x40691b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40691f:{NFSU2_TR(0x40691f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B406921:{NFSU2_TR(0x406921);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B406922:{NFSU2_TR(0x406922);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B406923:{NFSU2_TR(0x406923);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B406924:{NFSU2_TR(0x406924);
__builtin_memmove((R+16),(R+20),4);
}
B406926:{NFSU2_TR(0x406926);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B406927:{NFSU2_TR(0x406927);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40692a:L40692a:{c.instructions+=3;NFSU2_TR(0x40692a);
__builtin_memmove((R+4),gp(0x870760),4);
}
B406930:{NFSU2_TR(0x406930);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406931:{NFSU2_TR(0x406931);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x406936ull));
TAIL_STATIC(0x5cd850u,5cd);
}
B406936:L406936:{c.instructions+=3;NFSU2_TR(0x406936);
__builtin_memmove((R+4),gp(0x870760),4);
}
B40693c:{NFSU2_TR(0x40693c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40693d:{NFSU2_TR(0x40693d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x406942ull));
TAIL_STATIC(0x5cd9d0u,5cd);
}
B406942:L406942:{c.instructions+=3;NFSU2_TR(0x406942);
__builtin_memmove((R+4),gp(0x870760),4);
}
B406948:{NFSU2_TR(0x406948);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406949:{NFSU2_TR(0x406949);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40694eull));
TAIL_STATIC(0x5bfe70u,5bf);
}
B40694e:L40694e:{c.instructions+=3;NFSU2_TR(0x40694e);
__builtin_memmove((R+4),gp(0x870760),4);
}
B406954:{NFSU2_TR(0x406954);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406955:{NFSU2_TR(0x406955);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40695aull));
TAIL_STATIC(0x5cdbb0u,5cd);
}
B40695a:L40695a:{c.instructions+=3;NFSU2_TR(0x40695a);
__builtin_memmove((R+4),gp(0x870760),4);
}
B406960:{NFSU2_TR(0x406960);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406961:{NFSU2_TR(0x406961);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x406966ull));
TAIL_STATIC(0x5cd910u,5cd);
}
B406966:L406966:{c.instructions+=9;NFSU2_TR(0x406966);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B406969:{NFSU2_TR(0x406969);
__builtin_memmove((R+4),gp(0x870760),4);
}
B40696f:{NFSU2_TR(0x40696f);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B406971:{NFSU2_TR(0x406971);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B406977:{NFSU2_TR(0x406977);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406979:{NFSU2_TR(0x406979);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40697a:{NFSU2_TR(0x40697a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40697c:{NFSU2_TR(0x40697c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40697f:{NFSU2_TR(0x40697f);
if(r1(R+514)){{goto L4069ba;}}
}
B406981:L406981:{c.instructions+=1;NFSU2_TR(0x406981);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x406986ull));
TAIL_STATIC(0x5bfd90u,5bf);
}
B406986:L406986:{c.instructions+=3;NFSU2_TR(0x406986);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B406988:{NFSU2_TR(0x406988);
__builtin_memmove((R+4),gp(0x870760),4);
}
B40698e:{NFSU2_TR(0x40698e);
if(r1(R+518)){{goto L40699f;}}
}
B406990:L406990:{c.instructions+=2;NFSU2_TR(0x406990);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406991:{NFSU2_TR(0x406991);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x406996ull));
TAIL_STATIC(0x5bfe00u,5bf);
}
B406996:L406996:{c.instructions+=6;NFSU2_TR(0x406996);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B406997:{NFSU2_TR(0x406997);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B406998:{NFSU2_TR(0x406998);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B406999:{NFSU2_TR(0x406999);
__builtin_memmove((R+16),(R+20),4);
}
B40699b:{NFSU2_TR(0x40699b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B40699c:{NFSU2_TR(0x40699c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40699f:L40699f:{c.instructions+=5;NFSU2_TR(0x40699f);
u8 U[4];
w4(U+0,u32(0x2710ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4069a4:{NFSU2_TR(0x4069a4);
u8 U[4];
w4(U+0,u32(0x2710ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4069a9:{NFSU2_TR(0x4069a9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4069ab:{NFSU2_TR(0x4069ab);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4069ac:{NFSU2_TR(0x4069ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4069b1ull));
TAIL_STATIC(0x5c9150u,5c9);
}
B4069b1:L4069b1:{c.instructions+=6;NFSU2_TR(0x4069b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4069b2:{NFSU2_TR(0x4069b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4069b3:{NFSU2_TR(0x4069b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4069b4:{NFSU2_TR(0x4069b4);
__builtin_memmove((R+16),(R+20),4);
}
B4069b6:{NFSU2_TR(0x4069b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4069b7:{NFSU2_TR(0x4069b7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4069ba:L4069ba:{c.instructions+=1;NFSU2_TR(0x4069ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4069bfull));
TAIL_STATIC(0x5bfd90u,5bf);
}
B4069bf:L4069bf:{c.instructions+=3;NFSU2_TR(0x4069bf);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4069c1:{NFSU2_TR(0x4069c1);
__builtin_memmove((R+4),gp(0x870760),4);
}
B4069c7:{NFSU2_TR(0x4069c7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x406990u);}goto L406990;}}
}
B4069c9:L4069c9:{c.instructions+=5;NFSU2_TR(0x4069c9);
u8 U[4];
w4(U+0,u32(0x1b92ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4069ce:{NFSU2_TR(0x4069ce);
u8 U[4];
w4(U+0,u32(0x1b92ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4069d3:{NFSU2_TR(0x4069d3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4069d5:{NFSU2_TR(0x4069d5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4069d6:{NFSU2_TR(0x4069d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4069dbull));
TAIL_STATIC(0x5c9150u,5c9);
}
B4069db:L4069db:{c.instructions+=6;NFSU2_TR(0x4069db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4069dc:{NFSU2_TR(0x4069dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4069dd:{NFSU2_TR(0x4069dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4069de:{NFSU2_TR(0x4069de);
__builtin_memmove((R+16),(R+20),4);
}
B4069e0:{NFSU2_TR(0x4069e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4069e1:{NFSU2_TR(0x4069e1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B406a40:L406a40:{c.instructions+=12;NFSU2_TR(0x406a40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B406a43:{NFSU2_TR(0x406a43);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406a44:{NFSU2_TR(0x406a44);
__builtin_memmove((R+24),(R+4),4);
}
B406a46:{NFSU2_TR(0x406a46);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B406a4a:{NFSU2_TR(0x406a4a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B406a4e:{NFSU2_TR(0x406a4e);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B406a52:{NFSU2_TR(0x406a52);
{u32 ea_=u32(u32(7881288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B406a58:{NFSU2_TR(0x406a58);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B406a5c:{NFSU2_TR(0x406a5c);
{u32 ea_=u32(u32(7882000u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B406a62:{NFSU2_TR(0x406a62);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B406a64:{NFSU2_TR(0x406a64);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B406a67:{NFSU2_TR(0x406a67);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L406a77;}}
}
B406a69:L406a69:{c.instructions+=3;NFSU2_TR(0x406a69);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B406a6d:{NFSU2_TR(0x406a6d);
{u32 ea_=u32(u32(7881996u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B406a73:{NFSU2_TR(0x406a73);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B406a77:L406a77:{c.instructions+=3;NFSU2_TR(0x406a77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B406a79:{NFSU2_TR(0x406a79);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x40ull))));
}
B406a7c:{NFSU2_TR(0x406a7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x406a81ull));
TAIL_STATIC(0x591d90u,591);
}
B406a81:L406a81:{c.instructions+=25;NFSU2_TR(0x406a81);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B406a83:{NFSU2_TR(0x406a83);
{u32 ea_=u32(u32(7881292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B406a89:{NFSU2_TR(0x406a89);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
}
B406a8c:{NFSU2_TR(0x406a8c);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B406a90:{NFSU2_TR(0x406a90);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B406a92:{NFSU2_TR(0x406a92);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B406a96:{NFSU2_TR(0x406a96);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B406a99:{NFSU2_TR(0x406a99);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B406a9c:{NFSU2_TR(0x406a9c);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B406a9e:{NFSU2_TR(0x406a9e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B406aa1:{NFSU2_TR(0x406aa1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B406aa3:{NFSU2_TR(0x406aa3);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B406aa5:{NFSU2_TR(0x406aa5);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B406aa7:{NFSU2_TR(0x406aa7);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B406aa9:{NFSU2_TR(0x406aa9);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B406aab:{NFSU2_TR(0x406aab);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B406aad:{NFSU2_TR(0x406aad);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B406aaf:{NFSU2_TR(0x406aaf);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B406ab1:{NFSU2_TR(0x406ab1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B406ab3:{NFSU2_TR(0x406ab3);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B406ab5:{NFSU2_TR(0x406ab5);
__asm__ volatile(".byte 0xdd,0xdb":::"memory");
}
B406ab7:{NFSU2_TR(0x406ab7);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B406ab9:{NFSU2_TR(0x406ab9);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B406abb:{NFSU2_TR(0x406abb);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B406abf:{NFSU2_TR(0x406abf);
if(r1(R+518)){{goto L406ae5;}}
}
B406ac1:L406ac1:{c.instructions+=4;NFSU2_TR(0x406ac1);
{u32 ea_=u32(u32(8294708u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B406ac7:{NFSU2_TR(0x406ac7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B406ac9:{NFSU2_TR(0x406ac9);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B406acc:{NFSU2_TR(0x406acc);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L406adf;}}
}
B406ace:L406ace:{c.instructions+=5;NFSU2_TR(0x406ace);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B406ad2:{NFSU2_TR(0x406ad2);
{u32 ea_=u32(u32(8506256u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B406ad8:{NFSU2_TR(0x406ad8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B406ada:{NFSU2_TR(0x406ada);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B406add:{NFSU2_TR(0x406add);
if(r1(R+514)){{goto L406b07;}}
}
B406adf:L406adf:{c.instructions+=2;NFSU2_TR(0x406adf);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B406ae3:{NFSU2_TR(0x406ae3);
{goto L406b07;}
}
B406ae5:L406ae5:{c.instructions+=4;NFSU2_TR(0x406ae5);
{u32 ea_=u32(u32(8294704u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B406aeb:{NFSU2_TR(0x406aeb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B406aed:{NFSU2_TR(0x406aed);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B406af0:{NFSU2_TR(0x406af0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L406b07;}}
}
B406af2:L406af2:{c.instructions+=5;NFSU2_TR(0x406af2);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B406af6:{NFSU2_TR(0x406af6);
{u32 ea_=u32(u32(8294712u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B406afc:{NFSU2_TR(0x406afc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B406afe:{NFSU2_TR(0x406afe);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B406b01:{NFSU2_TR(0x406b01);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L406b07;}}
}
B406b03:L406b03:{c.instructions+=1;NFSU2_TR(0x406b03);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B406b07:L406b07:{c.instructions+=4;NFSU2_TR(0x406b07);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406b08:{NFSU2_TR(0x406b08);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B406b0c:{NFSU2_TR(0x406b0c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406b0d:{NFSU2_TR(0x406b0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x406b12ull));
TAIL_STATIC(0x5c1000u,5c1);
}
B406b12:L406b12:{c.instructions+=3;NFSU2_TR(0x406b12);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B406b15:{NFSU2_TR(0x406b15);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B406b17:{NFSU2_TR(0x406b17);
if(r1(R+518)){{goto L406b28;}}
}
B406b19:L406b19:{c.instructions+=4;NFSU2_TR(0x406b19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B406b1b:{NFSU2_TR(0x406b1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x42cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B406b21:{NFSU2_TR(0x406b21);
w4(R+4,u32(0x7e9f78ull));
}
B406b26:{NFSU2_TR(0x406b26);
{goto L406b78;}
}
B406b28:L406b28:{c.instructions+=3;NFSU2_TR(0x406b28);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B406b2d:{NFSU2_TR(0x406b2d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B406b2f:{NFSU2_TR(0x406b2f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L406b6b;}}
}
B406b31:L406b31:{c.instructions+=3;NFSU2_TR(0x406b31);
__builtin_memmove((R+0),gp(0x890108),4);
}
B406b36:{NFSU2_TR(0x406b36);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B406b38:{NFSU2_TR(0x406b38);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L406b6b;}}
}
B406b3a:L406b3a:{c.instructions+=3;NFSU2_TR(0x406b3a);
__builtin_memmove((R+0),gp(0x890114),4);
}
B406b3f:{NFSU2_TR(0x406b3f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B406b41:{NFSU2_TR(0x406b41);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L406b55;}}
}
B406b43:L406b43:{c.instructions+=3;NFSU2_TR(0x406b43);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B406b48:{NFSU2_TR(0x406b48);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B406b4a:{NFSU2_TR(0x406b4a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L406b55;}}
}
B406b4c:L406b4c:{c.instructions+=3;NFSU2_TR(0x406b4c);
__builtin_memmove((R+0),gp(0x890104),4);
}
B406b51:{NFSU2_TR(0x406b51);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B406b53:{NFSU2_TR(0x406b53);
if(r1(R+518)){{goto L406b6b;}}
}
B406b55:L406b55:{c.instructions+=3;NFSU2_TR(0x406b55);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B406b58:{NFSU2_TR(0x406b58);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B406b5a:{NFSU2_TR(0x406b5a);
if(r1(R+518)){{goto L406b6b;}}
}
B406b5c:L406b5c:{c.instructions+=4;NFSU2_TR(0x406b5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B406b5e:{NFSU2_TR(0x406b5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x42cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B406b64:{NFSU2_TR(0x406b64);
w4(R+4,u32(0x7e9fc8ull));
}
B406b69:{NFSU2_TR(0x406b69);
{goto L406b78;}
}
B406b6b:L406b6b:{c.instructions+=3;NFSU2_TR(0x406b6b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B406b6d:{NFSU2_TR(0x406b6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x42cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B406b73:{NFSU2_TR(0x406b73);
w4(R+4,u32(0x7e9f8cull));
}
B406b78:L406b78:{c.instructions+=4;NFSU2_TR(0x406b78);
__builtin_memmove((R+0),(R+8),4);
}
B406b7a:{NFSU2_TR(0x406b7a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406b7b:{NFSU2_TR(0x406b7b);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B406b7f:{NFSU2_TR(0x406b7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x406b84ull));
TAIL_STATIC(0x5764d0u,576);
}
B406b84:L406b84:{c.instructions+=18;NFSU2_TR(0x406b84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B406b86:{NFSU2_TR(0x406b86);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B406b89:{NFSU2_TR(0x406b89);
{u32 ea_=u32(r4(R+0)+u32(524u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B406b8f:{NFSU2_TR(0x406b8f);
{u32 ea_=u32(r4(R+0)+u32(532u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B406b95:{NFSU2_TR(0x406b95);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B406b9b:{NFSU2_TR(0x406b9b);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B406ba1:{NFSU2_TR(0x406ba1);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B406ba7:{NFSU2_TR(0x406ba7);
{u32 ea_=u32(u32(7879392u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B406bad:{NFSU2_TR(0x406bad);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B406bb3:{NFSU2_TR(0x406bb3);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B406bb5:{NFSU2_TR(0x406bb5);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B406bb9:{NFSU2_TR(0x406bb9);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B406bbb:{NFSU2_TR(0x406bbb);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B406bbf:{NFSU2_TR(0x406bbf);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B406bc3:{NFSU2_TR(0x406bc3);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B406bc9:{NFSU2_TR(0x406bc9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B406bcb:{NFSU2_TR(0x406bcb);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B406bce:{NFSU2_TR(0x406bce);
if(r1(R+514)){{goto L406c85;}}
}
B406bd4:L406bd4:{c.instructions+=3;NFSU2_TR(0x406bd4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B406bd7:{NFSU2_TR(0x406bd7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B406bd9:{NFSU2_TR(0x406bd9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L406bee;}}
}
B406bdb:L406bdb:{c.instructions+=5;NFSU2_TR(0x406bdb);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B406bdf:{NFSU2_TR(0x406bdf);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B406be3:{NFSU2_TR(0x406be3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B406be5:{NFSU2_TR(0x406be5);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B406be8:{NFSU2_TR(0x406be8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L406c85;}}
}
B406bee:L406bee:{c.instructions+=2;NFSU2_TR(0x406bee);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406bef:{NFSU2_TR(0x406bef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x406bf4ull));
TAIL_STATIC(0x5c1000u,5c1);
}
B406bf4:L406bf4:{c.instructions+=3;NFSU2_TR(0x406bf4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B406bf7:{NFSU2_TR(0x406bf7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B406bf9:{NFSU2_TR(0x406bf9);
if(r1(R+518)){{goto L406c07;}}
}
B406bfb:L406bfb:{c.instructions+=2;NFSU2_TR(0x406bfb);
s4(0x7e93b4,u32(0x3f800000ull));
}
B406c05:{NFSU2_TR(0x406c05);
{goto L406c56;}
}
B406c07:L406c07:{c.instructions+=3;NFSU2_TR(0x406c07);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B406c0c:{NFSU2_TR(0x406c0c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B406c0e:{NFSU2_TR(0x406c0e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L406c3c;}}
}
B406c10:L406c10:{c.instructions+=3;NFSU2_TR(0x406c10);
__builtin_memmove((R+0),gp(0x890108),4);
}
B406c15:{NFSU2_TR(0x406c15);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B406c17:{NFSU2_TR(0x406c17);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L406c3c;}}
}
B406c19:L406c19:{c.instructions+=3;NFSU2_TR(0x406c19);
__builtin_memmove((R+0),gp(0x890114),4);
}
B406c1e:{NFSU2_TR(0x406c1e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B406c20:{NFSU2_TR(0x406c20);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L406c34;}}
}
B406c22:L406c22:{c.instructions+=3;NFSU2_TR(0x406c22);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B406c27:{NFSU2_TR(0x406c27);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B406c29:{NFSU2_TR(0x406c29);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L406c34;}}
}
B406c2b:L406c2b:{c.instructions+=3;NFSU2_TR(0x406c2b);
__builtin_memmove((R+0),gp(0x890104),4);
}
B406c30:{NFSU2_TR(0x406c30);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B406c32:{NFSU2_TR(0x406c32);
if(r1(R+518)){{goto L406c3c;}}
}
B406c34:L406c34:{c.instructions+=3;NFSU2_TR(0x406c34);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406c35:{NFSU2_TR(0x406c35);
w4(R+4,u32(0x7e9ec4ull));
}
B406c3a:{NFSU2_TR(0x406c3a);
{goto L406c42;}
}
B406c3c:L406c3c:{c.instructions+=2;NFSU2_TR(0x406c3c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406c3d:{NFSU2_TR(0x406c3d);
w4(R+4,u32(0x7e9fdcull));
}
B406c42:L406c42:{c.instructions+=4;NFSU2_TR(0x406c42);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B406c46:{NFSU2_TR(0x406c46);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B406c48:{NFSU2_TR(0x406c48);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B406c4b:{NFSU2_TR(0x406c4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x406c50ull));
TAIL_STATIC(0x5764d0u,576);
}
B406c50:L406c50:{c.instructions+=1;NFSU2_TR(0x406c50);
{u32 ea_=u32(u32(8295348u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B406c56:L406c56:{c.instructions+=10;NFSU2_TR(0x406c56);
{u32 ea_=u32(u32(8295348u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B406c5c:{NFSU2_TR(0x406c5c);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B406c60:{NFSU2_TR(0x406c60);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B406c64:{NFSU2_TR(0x406c64);
{u32 ea_=u32(u32(8295348u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B406c6a:{NFSU2_TR(0x406c6a);
{u32 ea_=u32(u32(7881940u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B406c70:{NFSU2_TR(0x406c70);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B406c74:{NFSU2_TR(0x406c74);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B406c76:{NFSU2_TR(0x406c76);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B406c78:{NFSU2_TR(0x406c78);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B406c7b:{NFSU2_TR(0x406c7b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L406c83;}}
}
B406c7d:L406c7d:{c.instructions+=2;NFSU2_TR(0x406c7d);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B406c81:{NFSU2_TR(0x406c81);
{goto L406c85;}
}
B406c83:L406c83:{c.instructions+=1;NFSU2_TR(0x406c83);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B406c85:L406c85:{c.instructions+=8;NFSU2_TR(0x406c85);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B406c89:{NFSU2_TR(0x406c89);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406c8a:{NFSU2_TR(0x406c8a);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B406c8e:{NFSU2_TR(0x406c8e);
w4(R+4,u32(0x7e9fb4ull));
}
B406c93:{NFSU2_TR(0x406c93);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B406c97:{NFSU2_TR(0x406c97);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B406c99:{NFSU2_TR(0x406c99);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B406c9c:{NFSU2_TR(0x406c9c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x406ca1ull));
TAIL_STATIC(0x576560u,576);
}
B406ca1:L406ca1:{c.instructions+=7;NFSU2_TR(0x406ca1);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B406ca5:{NFSU2_TR(0x406ca5);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B406ca9:{NFSU2_TR(0x406ca9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B406caa:{NFSU2_TR(0x406caa);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B406cb0:{NFSU2_TR(0x406cb0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B406cb2:{NFSU2_TR(0x406cb2);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B406cb5:{NFSU2_TR(0x406cb5);
if(r1(R+514)){{goto L406cc1;}}
}
B406cb7:L406cb7:{c.instructions+=3;NFSU2_TR(0x406cb7);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B406cbb:{NFSU2_TR(0x406cbb);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B406cbd:{NFSU2_TR(0x406cbd);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B406cc1:L406cc1:{c.instructions+=10;NFSU2_TR(0x406cc1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B406cc3:{NFSU2_TR(0x406cc3);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B406cc7:{NFSU2_TR(0x406cc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x42cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B406ccd:{NFSU2_TR(0x406ccd);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B406cd1:{NFSU2_TR(0x406cd1);
__builtin_memmove((R+4),(R+0),4);
}
B406cd3:{NFSU2_TR(0x406cd3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406cd4:{NFSU2_TR(0x406cd4);
w4(R+4,u32(0x7e9fa0ull));
}
B406cd9:{NFSU2_TR(0x406cd9);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B406cdd:{NFSU2_TR(0x406cdd);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B406ce1:{NFSU2_TR(0x406ce1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x406ce6ull));
TAIL_STATIC(0x5764d0u,576);
}
B406ce6:L406ce6:{c.instructions+=6;NFSU2_TR(0x406ce6);
{u32 ea_=u32(u32(8295536u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B406cec:{NFSU2_TR(0x406cec);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B406cf0:{NFSU2_TR(0x406cf0);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B406cf6:{NFSU2_TR(0x406cf6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B406cf8:{NFSU2_TR(0x406cf8);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B406cfb:{NFSU2_TR(0x406cfb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L406d0c;}}
}
B406cfd:L406cfd:{c.instructions+=5;NFSU2_TR(0x406cfd);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B406d01:{NFSU2_TR(0x406d01);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B406d05:{NFSU2_TR(0x406d05);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B406d07:{NFSU2_TR(0x406d07);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B406d0a:{NFSU2_TR(0x406d0a);
if(r1(R+518)){{goto L406d2c;}}
}
B406d0c:L406d0c:{c.instructions+=5;NFSU2_TR(0x406d0c);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B406d10:{NFSU2_TR(0x406d10);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B406d16:{NFSU2_TR(0x406d16);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B406d18:{NFSU2_TR(0x406d18);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B406d1b:{NFSU2_TR(0x406d1b);
if(r1(R+514)){{goto L406d32;}}
}
B406d1d:L406d1d:{c.instructions+=5;NFSU2_TR(0x406d1d);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B406d21:{NFSU2_TR(0x406d21);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B406d25:{NFSU2_TR(0x406d25);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B406d27:{NFSU2_TR(0x406d27);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B406d2a:{NFSU2_TR(0x406d2a);
if(r1(R+514)){{goto L406d32;}}
}
B406d2c:L406d2c:{c.instructions+=1;NFSU2_TR(0x406d2c);
{u32 ea_=u32(u32(8295540u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B406d32:L406d32:{c.instructions+=5;NFSU2_TR(0x406d32);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B406d36:{NFSU2_TR(0x406d36);
{u32 ea_=u32(u32(7881992u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B406d3c:{NFSU2_TR(0x406d3c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B406d3e:{NFSU2_TR(0x406d3e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B406d41:{NFSU2_TR(0x406d41);
if(r1(R+514)){{goto L406d4b;}}
}
B406d43:L406d43:{c.instructions+=2;NFSU2_TR(0x406d43);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B406d45:{NFSU2_TR(0x406d45);
{u32 ea_=u32(u32(7881992u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B406d4b:L406d4b:{c.instructions+=5;NFSU2_TR(0x406d4b);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B406d4f:{NFSU2_TR(0x406d4f);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B406d51:{NFSU2_TR(0x406d51);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B406d53:{NFSU2_TR(0x406d53);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B406d56:{NFSU2_TR(0x406d56);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L406d5e;}}
}
B406d58:L406d58:{c.instructions+=2;NFSU2_TR(0x406d58);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B406d5c:{NFSU2_TR(0x406d5c);
{goto L406d75;}
}
B406d5e:L406d5e:{c.instructions+=6;NFSU2_TR(0x406d5e);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B406d60:{NFSU2_TR(0x406d60);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B406d64:{NFSU2_TR(0x406d64);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B406d66:{NFSU2_TR(0x406d66);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B406d68:{NFSU2_TR(0x406d68);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B406d6b:{NFSU2_TR(0x406d6b);
if(r1(R+514)){{goto L406d73;}}
}
B406d6d:L406d6d:{c.instructions+=2;NFSU2_TR(0x406d6d);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B406d71:{NFSU2_TR(0x406d71);
{goto L406d75;}
}
B406d73:L406d73:{c.instructions+=1;NFSU2_TR(0x406d73);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B406d75:L406d75:{c.instructions+=8;NFSU2_TR(0x406d75);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B406d79:{NFSU2_TR(0x406d79);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406d7a:{NFSU2_TR(0x406d7a);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B406d7e:{NFSU2_TR(0x406d7e);
w4(R+4,u32(0x7e9fb4ull));
}
B406d83:{NFSU2_TR(0x406d83);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B406d87:{NFSU2_TR(0x406d87);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B406d89:{NFSU2_TR(0x406d89);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B406d8c:{NFSU2_TR(0x406d8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x406d91ull));
TAIL_STATIC(0x5764d0u,576);
}
B406d91:L406d91:{c.instructions+=6;NFSU2_TR(0x406d91);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B406d95:{NFSU2_TR(0x406d95);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B406d99:{NFSU2_TR(0x406d99);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B406d9f:{NFSU2_TR(0x406d9f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B406da1:{NFSU2_TR(0x406da1);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B406da4:{NFSU2_TR(0x406da4);
if(r1(R+514)){{goto L406da8;}}
}
B406da6:L406da6:{c.instructions+=1;NFSU2_TR(0x406da6);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B406da8:L406da8:{c.instructions+=7;NFSU2_TR(0x406da8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B406daa:{NFSU2_TR(0x406daa);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B406dad:{NFSU2_TR(0x406dad);
{u32 ea_=u32(r4(R+0)+u32(624u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B406db3:{NFSU2_TR(0x406db3);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B406db7:{NFSU2_TR(0x406db7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B406dbd:{NFSU2_TR(0x406dbd);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B406dc3:{NFSU2_TR(0x406dc3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x406dc8ull));
TAIL_STATIC(0x75bed4u,75b);
}
B406dc8:L406dc8:{c.instructions+=13;NFSU2_TR(0x406dc8);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B406dcc:{NFSU2_TR(0x406dcc);
__builtin_memmove((R+4),(R+0),4);
}
B406dce:{NFSU2_TR(0x406dce);
w4(R+0,u32(0xb60b60b7ull));
}
B406dd3:{NFSU2_TR(0x406dd3);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B406dd5:{NFSU2_TR(0x406dd5);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B406dd7:{NFSU2_TR(0x406dd7);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B406dda:{NFSU2_TR(0x406dda);
__builtin_memmove((R+0),(R+8),4);
}
B406ddc:{NFSU2_TR(0x406ddc);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B406ddf:{NFSU2_TR(0x406ddf);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B406de1:{NFSU2_TR(0x406de1);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B406de5:{NFSU2_TR(0x406de5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B406de6:{NFSU2_TR(0x406de6);
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
B406de9:{NFSU2_TR(0x406de9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B406df0:L406df0:{c.instructions+=10;NFSU2_TR(0x406df0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406df1:{NFSU2_TR(0x406df1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406df2:{NFSU2_TR(0x406df2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406df3:{NFSU2_TR(0x406df3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B406df7:{NFSU2_TR(0x406df7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406df8:{NFSU2_TR(0x406df8);
u8 U[4];
w4(U+0,u32(0x784530ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406dfd:{NFSU2_TR(0x406dfd);
__builtin_memmove((R+28),(R+4),4);
}
B406dff:{NFSU2_TR(0x406dff);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406e01:{NFSU2_TR(0x406e01);
__builtin_memmove((R+4),(R+24),4);
}
B406e03:{NFSU2_TR(0x406e03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x406e08ull));
TAIL_STATIC(0x578ce0u,578);
}
B406e08:L406e08:{c.instructions+=7;NFSU2_TR(0x406e08);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406e0a:{NFSU2_TR(0x406e0a);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406e0c:{NFSU2_TR(0x406e0c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406e0e:{NFSU2_TR(0x406e0e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2acull))));
__builtin_memmove((R+0),(U+0),4);
}
B406e14:{NFSU2_TR(0x406e14);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406e15:{NFSU2_TR(0x406e15);
__builtin_memmove((R+4),(R+24),4);
}
B406e17:{NFSU2_TR(0x406e17);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x406e1cull));
TAIL_STATIC(0x571640u,571);
}
B406e1c:L406e1c:{c.instructions+=7;NFSU2_TR(0x406e1c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406e1e:{NFSU2_TR(0x406e1e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406e20:{NFSU2_TR(0x406e20);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406e22:{NFSU2_TR(0x406e22);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2b4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B406e28:{NFSU2_TR(0x406e28);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406e29:{NFSU2_TR(0x406e29);
__builtin_memmove((R+4),(R+24),4);
}
B406e2b:{NFSU2_TR(0x406e2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x406e30ull));
TAIL_STATIC(0x571640u,571);
}
B406e30:L406e30:{c.instructions+=7;NFSU2_TR(0x406e30);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406e32:{NFSU2_TR(0x406e32);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406e34:{NFSU2_TR(0x406e34);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406e36:{NFSU2_TR(0x406e36);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2b8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B406e3c:{NFSU2_TR(0x406e3c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406e3d:{NFSU2_TR(0x406e3d);
__builtin_memmove((R+4),(R+24),4);
}
B406e3f:{NFSU2_TR(0x406e3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x406e44ull));
TAIL_STATIC(0x571640u,571);
}
B406e44:L406e44:{c.instructions+=7;NFSU2_TR(0x406e44);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406e46:{NFSU2_TR(0x406e46);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406e48:{NFSU2_TR(0x406e48);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406e4a:{NFSU2_TR(0x406e4a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2c0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B406e50:{NFSU2_TR(0x406e50);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406e51:{NFSU2_TR(0x406e51);
__builtin_memmove((R+4),(R+24),4);
}
B406e53:{NFSU2_TR(0x406e53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x406e58ull));
TAIL_STATIC(0x571640u,571);
}
B406e58:L406e58:{c.instructions+=4;NFSU2_TR(0x406e58);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2bcull))));
__builtin_memmove((R+4),(U+0),4);
}
B406e5e:{NFSU2_TR(0x406e5e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406e5f:{NFSU2_TR(0x406e5f);
__builtin_memmove((R+4),(R+24),4);
}
B406e61:{NFSU2_TR(0x406e61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x406e66ull));
TAIL_STATIC(0x571770u,571);
}
B406e66:L406e66:{c.instructions+=4;NFSU2_TR(0x406e66);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2c4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B406e6c:{NFSU2_TR(0x406e6c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406e6d:{NFSU2_TR(0x406e6d);
__builtin_memmove((R+4),(R+24),4);
}
B406e6f:{NFSU2_TR(0x406e6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x406e74ull));
TAIL_STATIC(0x5716c0u,571);
}
B406e74:L406e74:{c.instructions+=4;NFSU2_TR(0x406e74);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2c5ull))));
__builtin_memmove((R+0),(U+0),4);
}
B406e7a:{NFSU2_TR(0x406e7a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406e7b:{NFSU2_TR(0x406e7b);
__builtin_memmove((R+4),(R+24),4);
}
B406e7d:{NFSU2_TR(0x406e7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x406e82ull));
TAIL_STATIC(0x5716c0u,571);
}
B406e82:L406e82:{c.instructions+=4;NFSU2_TR(0x406e82);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2c8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B406e88:{NFSU2_TR(0x406e88);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406e89:{NFSU2_TR(0x406e89);
__builtin_memmove((R+4),(R+24),4);
}
B406e8b:{NFSU2_TR(0x406e8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x406e90ull));
TAIL_STATIC(0x571770u,571);
}
B406e90:L406e90:{c.instructions+=4;NFSU2_TR(0x406e90);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2d0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B406e96:{NFSU2_TR(0x406e96);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406e97:{NFSU2_TR(0x406e97);
__builtin_memmove((R+4),(R+24),4);
}
B406e99:{NFSU2_TR(0x406e99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x406e9eull));
TAIL_STATIC(0x5716c0u,571);
}
B406e9e:L406e9e:{c.instructions+=4;NFSU2_TR(0x406e9e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2d1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B406ea4:{NFSU2_TR(0x406ea4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406ea5:{NFSU2_TR(0x406ea5);
__builtin_memmove((R+4),(R+24),4);
}
B406ea7:{NFSU2_TR(0x406ea7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x406eacull));
TAIL_STATIC(0x5716c0u,571);
}
B406eac:L406eac:{c.instructions+=4;NFSU2_TR(0x406eac);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2d2ull))));
__builtin_memmove((R+4),(U+0),4);
}
B406eb2:{NFSU2_TR(0x406eb2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406eb3:{NFSU2_TR(0x406eb3);
__builtin_memmove((R+4),(R+24),4);
}
B406eb5:{NFSU2_TR(0x406eb5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x406ebaull));
TAIL_STATIC(0x5716c0u,571);
}
B406eba:L406eba:{c.instructions+=4;NFSU2_TR(0x406eba);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2d4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B406ec0:{NFSU2_TR(0x406ec0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406ec1:{NFSU2_TR(0x406ec1);
__builtin_memmove((R+4),(R+24),4);
}
B406ec3:{NFSU2_TR(0x406ec3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x406ec8ull));
TAIL_STATIC(0x571770u,571);
}
B406ec8:L406ec8:{c.instructions+=4;NFSU2_TR(0x406ec8);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ccull))));
__builtin_memmove((R+0),(U+0),4);
}
B406ece:{NFSU2_TR(0x406ece);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406ecf:{NFSU2_TR(0x406ecf);
__builtin_memmove((R+4),(R+24),4);
}
B406ed1:{NFSU2_TR(0x406ed1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x406ed6ull));
TAIL_STATIC(0x571770u,571);
}
B406ed6:L406ed6:{c.instructions+=4;NFSU2_TR(0x406ed6);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2d8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B406edc:{NFSU2_TR(0x406edc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406edd:{NFSU2_TR(0x406edd);
__builtin_memmove((R+4),(R+24),4);
}
B406edf:{NFSU2_TR(0x406edf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x406ee4ull));
TAIL_STATIC(0x5716c0u,571);
}
B406ee4:L406ee4:{c.instructions+=4;NFSU2_TR(0x406ee4);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2d9ull))));
__builtin_memmove((R+8),(U+0),4);
}
B406eea:{NFSU2_TR(0x406eea);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406eeb:{NFSU2_TR(0x406eeb);
__builtin_memmove((R+4),(R+24),4);
}
B406eed:{NFSU2_TR(0x406eed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x406ef2ull));
TAIL_STATIC(0x5716c0u,571);
}
B406ef2:L406ef2:{c.instructions+=4;NFSU2_TR(0x406ef2);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2daull))));
__builtin_memmove((R+0),(U+0),4);
}
B406ef8:{NFSU2_TR(0x406ef8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406ef9:{NFSU2_TR(0x406ef9);
__builtin_memmove((R+4),(R+24),4);
}
B406efb:{NFSU2_TR(0x406efb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x406f00ull));
TAIL_STATIC(0x5716c0u,571);
}
B406f00:L406f00:{c.instructions+=4;NFSU2_TR(0x406f00);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2dcull))));
__builtin_memmove((R+4),(U+0),4);
}
B406f06:{NFSU2_TR(0x406f06);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406f07:{NFSU2_TR(0x406f07);
__builtin_memmove((R+4),(R+24),4);
}
B406f09:{NFSU2_TR(0x406f09);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x406f0eull));
TAIL_STATIC(0x571770u,571);
}
B406f0e:L406f0e:{c.instructions+=4;NFSU2_TR(0x406f0e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2e0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B406f14:{NFSU2_TR(0x406f14);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406f15:{NFSU2_TR(0x406f15);
__builtin_memmove((R+4),(R+24),4);
}
B406f17:{NFSU2_TR(0x406f17);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x406f1cull));
TAIL_STATIC(0x5716c0u,571);
}
B406f1c:L406f1c:{c.instructions+=4;NFSU2_TR(0x406f1c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2e1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B406f22:{NFSU2_TR(0x406f22);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406f23:{NFSU2_TR(0x406f23);
__builtin_memmove((R+4),(R+24),4);
}
B406f25:{NFSU2_TR(0x406f25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x406f2aull));
TAIL_STATIC(0x5716c0u,571);
}
B406f2a:L406f2a:{c.instructions+=4;NFSU2_TR(0x406f2a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2e4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B406f30:{NFSU2_TR(0x406f30);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406f31:{NFSU2_TR(0x406f31);
__builtin_memmove((R+4),(R+24),4);
}
B406f33:{NFSU2_TR(0x406f33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x406f38ull));
TAIL_STATIC(0x571770u,571);
}
B406f38:L406f38:{c.instructions+=4;NFSU2_TR(0x406f38);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2e8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B406f3e:{NFSU2_TR(0x406f3e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406f3f:{NFSU2_TR(0x406f3f);
__builtin_memmove((R+4),(R+24),4);
}
B406f41:{NFSU2_TR(0x406f41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x406f46ull));
TAIL_STATIC(0x5716c0u,571);
}
B406f46:L406f46:{c.instructions+=4;NFSU2_TR(0x406f46);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2e9ull))));
__builtin_memmove((R+0),(U+0),4);
}
B406f4c:{NFSU2_TR(0x406f4c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406f4d:{NFSU2_TR(0x406f4d);
__builtin_memmove((R+4),(R+24),4);
}
B406f4f:{NFSU2_TR(0x406f4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x406f54ull));
TAIL_STATIC(0x5716c0u,571);
}
B406f54:L406f54:{c.instructions+=4;NFSU2_TR(0x406f54);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ecull))));
__builtin_memmove((R+4),(U+0),4);
}
B406f5a:{NFSU2_TR(0x406f5a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406f5b:{NFSU2_TR(0x406f5b);
__builtin_memmove((R+4),(R+24),4);
}
B406f5d:{NFSU2_TR(0x406f5d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x406f62ull));
TAIL_STATIC(0x571770u,571);
}
B406f62:L406f62:{c.instructions+=7;NFSU2_TR(0x406f62);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406f64:{NFSU2_TR(0x406f64);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406f66:{NFSU2_TR(0x406f66);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406f68:{NFSU2_TR(0x406f68);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2f0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B406f6e:{NFSU2_TR(0x406f6e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406f6f:{NFSU2_TR(0x406f6f);
__builtin_memmove((R+4),(R+24),4);
}
B406f71:{NFSU2_TR(0x406f71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x406f76ull));
TAIL_STATIC(0x571640u,571);
}
B406f76:L406f76:{c.instructions+=4;NFSU2_TR(0x406f76);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2f4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B406f7c:{NFSU2_TR(0x406f7c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406f7d:{NFSU2_TR(0x406f7d);
__builtin_memmove((R+4),(R+24),4);
}
B406f7f:{NFSU2_TR(0x406f7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x406f84ull));
TAIL_STATIC(0x571770u,571);
}
B406f84:L406f84:{c.instructions+=4;NFSU2_TR(0x406f84);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x300ull))));
__builtin_memmove((R+4),(U+0),4);
}
B406f8a:{NFSU2_TR(0x406f8a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406f8b:{NFSU2_TR(0x406f8b);
__builtin_memmove((R+4),(R+24),4);
}
B406f8d:{NFSU2_TR(0x406f8d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x406f92ull));
TAIL_STATIC(0x571770u,571);
}
B406f92:L406f92:{c.instructions+=7;NFSU2_TR(0x406f92);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406f94:{NFSU2_TR(0x406f94);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406f96:{NFSU2_TR(0x406f96);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406f98:{NFSU2_TR(0x406f98);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2f9ull))));
__builtin_memmove((R+8),(U+0),4);
}
B406f9e:{NFSU2_TR(0x406f9e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406f9f:{NFSU2_TR(0x406f9f);
__builtin_memmove((R+4),(R+24),4);
}
B406fa1:{NFSU2_TR(0x406fa1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x406fa6ull));
TAIL_STATIC(0x571640u,571);
}
B406fa6:L406fa6:{c.instructions+=4;NFSU2_TR(0x406fa6);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2fbull))));
__builtin_memmove((R+0),(U+0),4);
}
B406fac:{NFSU2_TR(0x406fac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406fad:{NFSU2_TR(0x406fad);
__builtin_memmove((R+4),(R+24),4);
}
B406faf:{NFSU2_TR(0x406faf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x406fb4ull));
TAIL_STATIC(0x5716c0u,571);
}
B406fb4:L406fb4:{c.instructions+=4;NFSU2_TR(0x406fb4);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2fcull))));
__builtin_memmove((R+4),(U+0),4);
}
B406fba:{NFSU2_TR(0x406fba);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406fbb:{NFSU2_TR(0x406fbb);
__builtin_memmove((R+4),(R+24),4);
}
B406fbd:{NFSU2_TR(0x406fbd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x406fc2ull));
TAIL_STATIC(0x5716c0u,571);
}
B406fc2:L406fc2:{c.instructions+=7;NFSU2_TR(0x406fc2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406fc4:{NFSU2_TR(0x406fc4);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406fc6:{NFSU2_TR(0x406fc6);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406fc8:{NFSU2_TR(0x406fc8);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x304ull))));
__builtin_memmove((R+8),(U+0),4);
}
B406fce:{NFSU2_TR(0x406fce);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406fcf:{NFSU2_TR(0x406fcf);
__builtin_memmove((R+4),(R+24),4);
}
B406fd1:{NFSU2_TR(0x406fd1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x406fd6ull));
TAIL_STATIC(0x571640u,571);
}
B406fd6:L406fd6:{c.instructions+=7;NFSU2_TR(0x406fd6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406fd8:{NFSU2_TR(0x406fd8);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406fda:{NFSU2_TR(0x406fda);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406fdc:{NFSU2_TR(0x406fdc);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30cull))));
__builtin_memmove((R+0),(U+0),4);
}
B406fe2:{NFSU2_TR(0x406fe2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406fe3:{NFSU2_TR(0x406fe3);
__builtin_memmove((R+4),(R+24),4);
}
B406fe5:{NFSU2_TR(0x406fe5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x406feaull));
TAIL_STATIC(0x571640u,571);
}
B406fea:L406fea:{c.instructions+=4;NFSU2_TR(0x406fea);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2faull))));
__builtin_memmove((R+4),(U+0),4);
}
B406ff0:{NFSU2_TR(0x406ff0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B406ff1:{NFSU2_TR(0x406ff1);
__builtin_memmove((R+4),(R+24),4);
}
B406ff3:{NFSU2_TR(0x406ff3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x406ff8ull));
TAIL_STATIC(0x5716c0u,571);
}
B406ff8:L406ff8:{c.instructions+=2;NFSU2_TR(0x406ff8);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ecull))));
__builtin_memmove((R+12),(U+0),4);
}
B406ffe:{NFSU2_TR(0x406ffe);
w4(R+20,u32(0x4ull));
TAIL_STATIC(0x407003u,407);
}
XIT:NFSU2_TR_EXIT(0x406,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
