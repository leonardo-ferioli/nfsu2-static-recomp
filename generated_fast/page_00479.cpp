#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_457(u8* __restrict R,Cpu& c);
u32 body_458(u8* __restrict R,Cpu& c);
u32 body_459(u8* __restrict R,Cpu& c);
u32 body_45b(u8* __restrict R,Cpu& c);
u32 body_464(u8* __restrict R,Cpu& c);
u32 body_467(u8* __restrict R,Cpu& c);
u32 body_468(u8* __restrict R,Cpu& c);
u32 body_469(u8* __restrict R,Cpu& c);
u32 body_46a(u8* __restrict R,Cpu& c);
u32 body_46b(u8* __restrict R,Cpu& c);
u32 body_46c(u8* __restrict R,Cpu& c);
u32 body_475(u8* __restrict R,Cpu& c);
u32 body_478(u8* __restrict R,Cpu& c);
u32 body_47a(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_57b(u8* __restrict R,Cpu& c);
u32 body_57d(u8* __restrict R,Cpu& c);
u32 body_734(u8* __restrict R,Cpu& c);
u32 body_735(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x479,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x479,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_479(u8* __restrict R,Cpu& c);
u32 page_479(Cpu& c){return body_479(c.regs.data(),c);}
__attribute__((noinline)) u32 body_479(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x479001:goto L479001;
case 0x479003:goto L479003;
case 0x479006:c.instructions+=3;goto B479006;
case 0x479009:c.instructions+=2;goto B479009;
case 0x47900b:c.instructions+=1;goto B47900b;
case 0x47900d:goto L47900d;
case 0x479011:c.instructions+=2;goto B479011;
case 0x479012:c.instructions+=1;goto B479012;
case 0x479017:goto L479017;
case 0x47901a:c.instructions+=3;goto B47901a;
case 0x47901b:c.instructions+=2;goto B47901b;
case 0x47901d:c.instructions+=1;goto B47901d;
case 0x47901f:goto L47901f;
case 0x479022:c.instructions+=3;goto B479022;
case 0x479023:c.instructions+=2;goto B479023;
case 0x479025:c.instructions+=1;goto B479025;
case 0x479027:goto L479027;
case 0x479028:c.instructions+=4;goto B479028;
case 0x479029:c.instructions+=3;goto B479029;
case 0x47902a:c.instructions+=2;goto B47902a;
case 0x47902b:c.instructions+=1;goto B47902b;
case 0x479030:goto L479030;
case 0x479031:c.instructions+=10;goto B479031;
case 0x479035:c.instructions+=9;goto B479035;
case 0x479037:c.instructions+=8;goto B479037;
case 0x47903a:c.instructions+=7;goto B47903a;
case 0x47903d:c.instructions+=6;goto B47903d;
case 0x479040:c.instructions+=5;goto B479040;
case 0x479046:c.instructions+=4;goto B479046;
case 0x479047:c.instructions+=3;goto B479047;
case 0x47904b:c.instructions+=2;goto B47904b;
case 0x47904f:c.instructions+=1;goto B47904f;
case 0x479051:goto L479051;
case 0x479054:c.instructions+=15;goto B479054;
case 0x479055:c.instructions+=14;goto B479055;
case 0x479057:c.instructions+=13;goto B479057;
case 0x47905a:c.instructions+=12;goto B47905a;
case 0x47905c:c.instructions+=11;goto B47905c;
case 0x47905f:c.instructions+=10;goto B47905f;
case 0x479064:c.instructions+=9;goto B479064;
case 0x479065:c.instructions+=8;goto B479065;
case 0x479068:c.instructions+=7;goto B479068;
case 0x47906a:c.instructions+=6;goto B47906a;
case 0x47906d:c.instructions+=5;goto B47906d;
case 0x47906f:c.instructions+=4;goto B47906f;
case 0x479070:c.instructions+=3;goto B479070;
case 0x479072:c.instructions+=2;goto B479072;
case 0x479075:c.instructions+=1;goto B479075;
case 0x479078:goto L479078;
case 0x47907c:c.instructions+=6;goto B47907c;
case 0x47907d:c.instructions+=5;goto B47907d;
case 0x47907e:c.instructions+=4;goto B47907e;
case 0x47907f:c.instructions+=3;goto B47907f;
case 0x479084:c.instructions+=2;goto B479084;
case 0x479086:c.instructions+=1;goto B479086;
case 0x47908b:goto L47908b;
case 0x47908e:c.instructions+=7;goto B47908e;
case 0x47908f:c.instructions+=6;goto B47908f;
case 0x479090:c.instructions+=5;goto B479090;
case 0x479093:c.instructions+=4;goto B479093;
case 0x479094:c.instructions+=3;goto B479094;
case 0x479096:c.instructions+=2;goto B479096;
case 0x479097:c.instructions+=1;goto B479097;
case 0x47909a:goto L47909a;
case 0x47909c:c.instructions+=12;goto B47909c;
case 0x4790a2:c.instructions+=11;goto B4790a2;
case 0x4790a3:c.instructions+=10;goto B4790a3;
case 0x4790a6:c.instructions+=9;goto B4790a6;
case 0x4790ab:c.instructions+=8;goto B4790ab;
case 0x4790ac:c.instructions+=7;goto B4790ac;
case 0x4790ad:c.instructions+=6;goto B4790ad;
case 0x4790b2:c.instructions+=5;goto B4790b2;
case 0x4790b4:c.instructions+=4;goto B4790b4;
case 0x4790b7:c.instructions+=3;goto B4790b7;
case 0x4790ba:c.instructions+=2;goto B4790ba;
case 0x4790c1:c.instructions+=1;goto B4790c1;
case 0x4790c6:goto L4790c6;
case 0x4790c9:c.instructions+=5;goto B4790c9;
case 0x4790cc:c.instructions+=4;goto B4790cc;
case 0x4790cd:c.instructions+=3;goto B4790cd;
case 0x4790cf:c.instructions+=2;goto B4790cf;
case 0x4790d0:c.instructions+=1;goto B4790d0;
case 0x4790e0:goto L4790e0;
case 0x4790e1:c.instructions+=2;goto B4790e1;
case 0x4790e3:c.instructions+=1;goto B4790e3;
case 0x4790e8:goto L4790e8;
case 0x4790ed:c.instructions+=1;goto B4790ed;
case 0x4790ef:goto L4790ef;
case 0x4790f0:c.instructions+=1;goto B4790f0;
case 0x4790f5:goto L4790f5;
case 0x4790f8:goto L4790f8;
case 0x4790fa:c.instructions+=2;goto B4790fa;
case 0x4790fb:c.instructions+=1;goto B4790fb;
case 0x479100:goto L479100;
case 0x479101:c.instructions+=4;goto B479101;
case 0x479103:c.instructions+=3;goto B479103;
case 0x479105:c.instructions+=2;goto B479105;
case 0x479107:c.instructions+=1;goto B479107;
case 0x479109:goto L479109;
case 0x479110:goto L479110;
case 0x479112:c.instructions+=6;goto B479112;
case 0x479115:c.instructions+=5;goto B479115;
case 0x479117:c.instructions+=4;goto B479117;
case 0x47911a:c.instructions+=3;goto B47911a;
case 0x47911d:c.instructions+=2;goto B47911d;
case 0x47911f:c.instructions+=1;goto B47911f;
case 0x479121:goto L479121;
case 0x479123:c.instructions+=2;goto B479123;
case 0x479125:c.instructions+=1;goto B479125;
case 0x479127:goto L479127;
case 0x479129:c.instructions+=2;goto B479129;
case 0x47912b:c.instructions+=1;goto B47912b;
case 0x47912d:goto L47912d;
case 0x47912e:c.instructions+=1;goto B47912e;
case 0x479130:goto L479130;
case 0x479131:c.instructions+=2;goto B479131;
case 0x479133:c.instructions+=1;goto B479133;
case 0x479138:goto L479138;
case 0x47913a:c.instructions+=1;goto B47913a;
case 0x47913c:goto L47913c;
case 0x479140:c.instructions+=8;goto B479140;
case 0x479143:c.instructions+=7;goto B479143;
case 0x479146:c.instructions+=6;goto B479146;
case 0x479148:c.instructions+=5;goto B479148;
case 0x47914b:c.instructions+=4;goto B47914b;
case 0x47914d:c.instructions+=3;goto B47914d;
case 0x479150:c.instructions+=2;goto B479150;
case 0x479151:c.instructions+=1;goto B479151;
case 0x479154:goto L479154;
case 0x479157:c.instructions+=7;goto B479157;
case 0x479159:c.instructions+=6;goto B479159;
case 0x47915b:c.instructions+=5;goto B47915b;
case 0x47915e:c.instructions+=4;goto B47915e;
case 0x479160:c.instructions+=3;goto B479160;
case 0x479163:c.instructions+=2;goto B479163;
case 0x479164:c.instructions+=1;goto B479164;
case 0x479170:goto L479170;
case 0x479172:c.instructions+=18;goto B479172;
case 0x479174:c.instructions+=17;goto B479174;
case 0x479177:c.instructions+=16;goto B479177;
case 0x47917a:c.instructions+=15;goto B47917a;
case 0x47917d:c.instructions+=14;goto B47917d;
case 0x479180:c.instructions+=13;goto B479180;
case 0x479183:c.instructions+=12;goto B479183;
case 0x479186:c.instructions+=11;goto B479186;
case 0x479189:c.instructions+=10;goto B479189;
case 0x47918c:c.instructions+=9;goto B47918c;
case 0x47918f:c.instructions+=8;goto B47918f;
case 0x479192:c.instructions+=7;goto B479192;
case 0x479195:c.instructions+=6;goto B479195;
case 0x479198:c.instructions+=5;goto B479198;
case 0x47919b:c.instructions+=4;goto B47919b;
case 0x47919e:c.instructions+=3;goto B47919e;
case 0x4791a4:c.instructions+=2;goto B4791a4;
case 0x4791a7:c.instructions+=1;goto B4791a7;
case 0x4791b0:goto L4791b0;
case 0x4791b5:c.instructions+=1;goto B4791b5;
case 0x4791ba:goto L4791ba;
case 0x4791bc:c.instructions+=1;goto B4791bc;
case 0x4791be:goto L4791be;
case 0x4791c0:c.instructions+=1;goto B4791c0;
case 0x4791c5:goto L4791c5;
case 0x4791d0:goto L4791d0;
case 0x4791d1:c.instructions+=2;goto B4791d1;
case 0x4791d6:c.instructions+=1;goto B4791d6;
case 0x4791db:goto L4791db;
case 0x4791dd:c.instructions+=2;goto B4791dd;
case 0x4791df:c.instructions+=1;goto B4791df;
case 0x4791e1:goto L4791e1;
case 0x4791e6:c.instructions+=3;goto B4791e6;
case 0x4791eb:c.instructions+=2;goto B4791eb;
case 0x4791ec:c.instructions+=1;goto B4791ec;
case 0x4791f1:goto L4791f1;
case 0x4791f4:c.instructions+=1;goto B4791f4;
case 0x4791fb:goto L4791fb;
case 0x4791fc:c.instructions+=1;goto B4791fc;
case 0x479200:goto L479200;
case 0x479205:c.instructions+=1;goto B479205;
case 0x47920a:goto L47920a;
case 0x47920c:c.instructions+=1;goto B47920c;
case 0x47920e:goto L47920e;
case 0x479215:goto L479215;
case 0x479220:goto L479220;
case 0x479223:c.instructions+=13;goto B479223;
case 0x479228:c.instructions+=12;goto B479228;
case 0x479229:c.instructions+=11;goto B479229;
case 0x47922a:c.instructions+=10;goto B47922a;
case 0x47922b:c.instructions+=9;goto B47922b;
case 0x47922c:c.instructions+=8;goto B47922c;
case 0x47922e:c.instructions+=7;goto B47922e;
case 0x479230:c.instructions+=6;goto B479230;
case 0x479232:c.instructions+=5;goto B479232;
case 0x479236:c.instructions+=4;goto B479236;
case 0x47923a:c.instructions+=3;goto B47923a;
case 0x479241:c.instructions+=2;goto B479241;
case 0x479243:c.instructions+=1;goto B479243;
case 0x479248:goto L479248;
case 0x47924c:c.instructions+=3;goto B47924c;
case 0x47924d:c.instructions+=2;goto B47924d;
case 0x479250:c.instructions+=1;goto B479250;
case 0x479252:goto L479252;
case 0x479253:c.instructions+=1;goto B479253;
case 0x479255:goto L479255;
case 0x479256:c.instructions+=1;goto B479256;
case 0x479258:goto L479258;
case 0x47925d:c.instructions+=6;goto B47925d;
case 0x47925f:c.instructions+=5;goto B47925f;
case 0x479261:c.instructions+=4;goto B479261;
case 0x479262:c.instructions+=3;goto B479262;
case 0x479264:c.instructions+=2;goto B479264;
case 0x479265:c.instructions+=1;goto B479265;
case 0x479267:goto L479267;
case 0x47926c:c.instructions+=4;goto B47926c;
case 0x47926e:c.instructions+=3;goto B47926e;
case 0x479270:c.instructions+=2;goto B479270;
case 0x479271:c.instructions+=1;goto B479271;
case 0x479273:goto L479273;
case 0x479278:c.instructions+=3;goto B479278;
case 0x47927a:c.instructions+=2;goto B47927a;
case 0x47927c:c.instructions+=1;goto B47927c;
case 0x47927d:goto L47927d;
case 0x479280:c.instructions+=2;goto B479280;
case 0x479286:c.instructions+=1;goto B479286;
case 0x479288:goto L479288;
case 0x47928c:c.instructions+=3;goto B47928c;
case 0x479292:c.instructions+=2;goto B479292;
case 0x479294:c.instructions+=1;goto B479294;
case 0x479296:goto L479296;
case 0x47929a:c.instructions+=6;goto B47929a;
case 0x47929b:c.instructions+=5;goto B47929b;
case 0x47929c:c.instructions+=4;goto B47929c;
case 0x47929d:c.instructions+=3;goto B47929d;
case 0x47929e:c.instructions+=2;goto B47929e;
case 0x47929f:c.instructions+=1;goto B47929f;
case 0x4792a4:goto L4792a4;
case 0x4792a5:c.instructions+=5;goto B4792a5;
case 0x4792a6:c.instructions+=4;goto B4792a6;
case 0x4792a7:c.instructions+=3;goto B4792a7;
case 0x4792a8:c.instructions+=2;goto B4792a8;
case 0x4792ab:c.instructions+=1;goto B4792ab;
case 0x4792b0:goto L4792b0;
case 0x4792b5:c.instructions+=4;goto B4792b5;
case 0x4792bb:c.instructions+=3;goto B4792bb;
case 0x4792bd:c.instructions+=2;goto B4792bd;
case 0x4792c1:c.instructions+=1;goto B4792c1;
case 0x4792c3:goto L4792c3;
case 0x4792c6:goto L4792c6;
case 0x4792d0:goto L4792d0;
case 0x4792d5:c.instructions+=2;goto B4792d5;
case 0x4792d7:c.instructions+=1;goto B4792d7;
case 0x4792d9:goto L4792d9;
case 0x4792dc:c.instructions+=1;goto B4792dc;
case 0x4792e1:goto L4792e1;
case 0x4792f0:goto L4792f0;
case 0x4792f1:c.instructions+=10;goto B4792f1;
case 0x4792f5:c.instructions+=9;goto B4792f5;
case 0x4792f6:c.instructions+=8;goto B4792f6;
case 0x4792fc:c.instructions+=7;goto B4792fc;
case 0x4792ff:c.instructions+=6;goto B4792ff;
case 0x479302:c.instructions+=5;goto B479302;
case 0x479305:c.instructions+=4;goto B479305;
case 0x479306:c.instructions+=3;goto B479306;
case 0x479307:c.instructions+=2;goto B479307;
case 0x479308:c.instructions+=1;goto B479308;
case 0x47930d:goto L47930d;
case 0x47930e:c.instructions+=1;goto B47930e;
case 0x479313:goto L479313;
case 0x479316:c.instructions+=3;goto B479316;
case 0x479318:c.instructions+=2;goto B479318;
case 0x47931b:c.instructions+=1;goto B47931b;
case 0x479321:goto L479321;
case 0x479322:c.instructions+=1;goto B479322;
case 0x479327:goto L479327;
case 0x47932a:c.instructions+=3;goto B47932a;
case 0x47932d:c.instructions+=2;goto B47932d;
case 0x47932f:c.instructions+=1;goto B47932f;
case 0x479331:goto L479331;
case 0x479334:c.instructions+=5;goto B479334;
case 0x479337:c.instructions+=4;goto B479337;
case 0x479338:c.instructions+=3;goto B479338;
case 0x479339:c.instructions+=2;goto B479339;
case 0x47933e:c.instructions+=1;goto B47933e;
case 0x479343:goto L479343;
case 0x479346:c.instructions+=8;goto B479346;
case 0x479347:c.instructions+=7;goto B479347;
case 0x47934c:c.instructions+=6;goto B47934c;
case 0x47934d:c.instructions+=5;goto B47934d;
case 0x47934f:c.instructions+=4;goto B47934f;
case 0x479350:c.instructions+=3;goto B479350;
case 0x479351:c.instructions+=2;goto B479351;
case 0x479354:c.instructions+=1;goto B479354;
case 0x479359:goto L479359;
case 0x47935c:c.instructions+=1;goto B47935c;
case 0x47935e:goto L47935e;
case 0x479361:c.instructions+=1;goto B479361;
case 0x479363:goto L479363;
case 0x479366:c.instructions+=1;goto B479366;
case 0x479368:goto L479368;
case 0x47936b:c.instructions+=1;goto B47936b;
case 0x47936d:goto L47936d;
case 0x479370:c.instructions+=3;goto B479370;
case 0x479375:c.instructions+=2;goto B479375;
case 0x479376:c.instructions+=1;goto B479376;
case 0x47937b:goto L47937b;
case 0x47937e:c.instructions+=8;goto B47937e;
case 0x47937f:c.instructions+=7;goto B47937f;
case 0x479384:c.instructions+=6;goto B479384;
case 0x479385:c.instructions+=5;goto B479385;
case 0x479387:c.instructions+=4;goto B479387;
case 0x479388:c.instructions+=3;goto B479388;
case 0x479389:c.instructions+=2;goto B479389;
case 0x47938c:c.instructions+=1;goto B47938c;
case 0x479391:goto L479391;
case 0x479394:goto L479394;
case 0x479397:c.instructions+=2;goto B479397;
case 0x479399:c.instructions+=1;goto B479399;
case 0x47939b:goto L47939b;
case 0x4793a0:c.instructions+=2;goto B4793a0;
case 0x4793a3:c.instructions+=1;goto B4793a3;
case 0x4793a9:goto L4793a9;
case 0x4793aa:c.instructions+=2;goto B4793aa;
case 0x4793ab:c.instructions+=1;goto B4793ab;
case 0x4793b0:goto L4793b0;
case 0x4793b1:c.instructions+=2;goto B4793b1;
case 0x4793b3:c.instructions+=1;goto B4793b3;
case 0x4793b8:goto L4793b8;
case 0x4793bd:c.instructions+=1;goto B4793bd;
case 0x4793bf:goto L4793bf;
case 0x4793c0:c.instructions+=1;goto B4793c0;
case 0x4793c5:goto L4793c5;
case 0x4793c8:goto L4793c8;
case 0x4793ca:c.instructions+=2;goto B4793ca;
case 0x4793cb:c.instructions+=1;goto B4793cb;
case 0x4793d0:goto L4793d0;
case 0x4793d1:c.instructions+=8;goto B4793d1;
case 0x4793d2:c.instructions+=7;goto B4793d2;
case 0x4793d3:c.instructions+=6;goto B4793d3;
case 0x4793d5:c.instructions+=5;goto B4793d5;
case 0x4793d8:c.instructions+=4;goto B4793d8;
case 0x4793da:c.instructions+=3;goto B4793da;
case 0x4793dc:c.instructions+=2;goto B4793dc;
case 0x4793dd:c.instructions+=1;goto B4793dd;
case 0x4793e3:goto L4793e3;
case 0x4793e9:c.instructions+=1;goto B4793e9;
case 0x4793eb:goto L4793eb;
case 0x4793f1:c.instructions+=2;goto B4793f1;
case 0x4793f2:c.instructions+=1;goto B4793f2;
case 0x4793f7:goto L4793f7;
case 0x4793fd:c.instructions+=4;goto B4793fd;
case 0x479400:c.instructions+=3;goto B479400;
case 0x479402:c.instructions+=2;goto B479402;
case 0x479405:c.instructions+=1;goto B479405;
case 0x47940b:goto L47940b;
case 0x47940e:c.instructions+=2;goto B47940e;
case 0x479410:c.instructions+=1;goto B479410;
case 0x479412:goto L479412;
case 0x479414:c.instructions+=2;goto B479414;
case 0x479416:c.instructions+=1;goto B479416;
case 0x479418:goto L479418;
case 0x47941d:goto L47941d;
case 0x479421:c.instructions+=2;goto B479421;
case 0x479422:c.instructions+=1;goto B479422;
case 0x479427:goto L479427;
case 0x47942a:c.instructions+=1;goto B47942a;
case 0x47942f:goto L47942f;
case 0x479433:c.instructions+=4;goto B479433;
case 0x479435:c.instructions+=3;goto B479435;
case 0x479436:c.instructions+=2;goto B479436;
case 0x479437:c.instructions+=1;goto B479437;
case 0x47943a:goto L47943a;
case 0x47943f:goto L47943f;
case 0x479442:c.instructions+=2;goto B479442;
case 0x47944c:c.instructions+=1;goto B47944c;
case 0x479451:goto L479451;
case 0x479456:c.instructions+=3;goto B479456;
case 0x479457:c.instructions+=2;goto B479457;
case 0x47945c:c.instructions+=1;goto B47945c;
case 0x479461:goto L479461;
case 0x479466:c.instructions+=1;goto B479466;
case 0x47946b:goto L47946b;
case 0x479471:c.instructions+=3;goto B479471;
case 0x479473:c.instructions+=2;goto B479473;
case 0x479475:c.instructions+=1;goto B479475;
case 0x479478:goto L479478;
case 0x47947a:c.instructions+=2;goto B47947a;
case 0x47947d:c.instructions+=1;goto B47947d;
case 0x47947f:goto L47947f;
case 0x479481:c.instructions+=1;goto B479481;
case 0x479483:goto L479483;
case 0x479488:c.instructions+=1;goto B479488;
case 0x47948a:goto L47948a;
case 0x47948f:goto L47948f;
case 0x479492:c.instructions+=4;goto B479492;
case 0x479497:c.instructions+=3;goto B479497;
case 0x47949c:c.instructions+=2;goto B47949c;
case 0x4794a1:c.instructions+=1;goto B4794a1;
case 0x4794a6:goto L4794a6;
case 0x4794ac:c.instructions+=1;goto B4794ac;
case 0x4794b1:goto L4794b1;
case 0x4794b3:c.instructions+=2;goto B4794b3;
case 0x4794b6:c.instructions+=1;goto B4794b6;
case 0x4794b8:goto L4794b8;
case 0x4794ba:c.instructions+=1;goto B4794ba;
case 0x4794bc:goto L4794bc;
case 0x4794c1:c.instructions+=1;goto B4794c1;
case 0x4794c3:goto L4794c3;
case 0x4794c8:goto L4794c8;
case 0x4794cb:c.instructions+=4;goto B4794cb;
case 0x4794ce:c.instructions+=3;goto B4794ce;
case 0x4794d0:c.instructions+=2;goto B4794d0;
case 0x4794d2:c.instructions+=1;goto B4794d2;
case 0x4794d4:goto L4794d4;
case 0x4794d7:c.instructions+=2;goto B4794d7;
case 0x4794d8:c.instructions+=1;goto B4794d8;
case 0x4794dd:goto L4794dd;
case 0x4794e0:c.instructions+=2;goto B4794e0;
case 0x4794e2:c.instructions+=1;goto B4794e2;
case 0x4794e8:goto L4794e8;
case 0x4794eb:c.instructions+=6;goto B4794eb;
case 0x4794ee:c.instructions+=5;goto B4794ee;
case 0x4794f5:c.instructions+=4;goto B4794f5;
case 0x4794fb:c.instructions+=3;goto B4794fb;
case 0x4794fd:c.instructions+=2;goto B4794fd;
case 0x4794ff:c.instructions+=1;goto B4794ff;
case 0x479502:goto L479502;
case 0x479504:c.instructions+=2;goto B479504;
case 0x479507:c.instructions+=1;goto B479507;
case 0x479509:goto L479509;
case 0x47950b:c.instructions+=1;goto B47950b;
case 0x47950d:goto L47950d;
case 0x479512:c.instructions+=1;goto B479512;
case 0x479514:goto L479514;
case 0x479519:goto L479519;
case 0x47951c:c.instructions+=4;goto B47951c;
case 0x47951f:c.instructions+=3;goto B47951f;
case 0x479521:c.instructions+=2;goto B479521;
case 0x479523:c.instructions+=1;goto B479523;
case 0x479525:goto L479525;
case 0x479528:c.instructions+=2;goto B479528;
case 0x479529:c.instructions+=1;goto B479529;
case 0x47952e:goto L47952e;
case 0x479531:c.instructions+=4;goto B479531;
case 0x479533:c.instructions+=3;goto B479533;
case 0x479535:c.instructions+=2;goto B479535;
case 0x479539:c.instructions+=1;goto B479539;
case 0x47953b:goto L47953b;
case 0x47953f:c.instructions+=2;goto B47953f;
case 0x479540:c.instructions+=1;goto B479540;
case 0x479545:goto L479545;
case 0x47954a:c.instructions+=1;goto B47954a;
case 0x47954c:goto L47954c;
case 0x47954f:c.instructions+=2;goto B47954f;
case 0x479551:c.instructions+=1;goto B479551;
case 0x479553:goto L479553;
case 0x479555:c.instructions+=2;goto B479555;
case 0x479557:c.instructions+=1;goto B479557;
case 0x479559:goto L479559;
case 0x47955e:goto L47955e;
case 0x479562:c.instructions+=2;goto B479562;
case 0x479563:c.instructions+=1;goto B479563;
case 0x479568:goto L479568;
case 0x47956b:c.instructions+=1;goto B47956b;
case 0x479570:goto L479570;
case 0x479574:c.instructions+=4;goto B479574;
case 0x479576:c.instructions+=3;goto B479576;
case 0x479577:c.instructions+=2;goto B479577;
case 0x479578:c.instructions+=1;goto B479578;
case 0x47957b:goto L47957b;
case 0x479580:goto L479580;
case 0x479583:goto L479583;
case 0x479584:c.instructions+=4;goto B479584;
case 0x479585:c.instructions+=3;goto B479585;
case 0x479586:c.instructions+=2;goto B479586;
case 0x479587:c.instructions+=1;goto B479587;
case 0x479590:goto L479590;
case 0x479591:c.instructions+=4;goto B479591;
case 0x479593:c.instructions+=3;goto B479593;
case 0x479596:c.instructions+=2;goto B479596;
case 0x479598:c.instructions+=1;goto B479598;
case 0x47959a:goto L47959a;
case 0x47959c:c.instructions+=2;goto B47959c;
case 0x47959d:c.instructions+=1;goto B47959d;
case 0x4795a0:goto L4795a0;
case 0x4795a4:c.instructions+=3;goto B4795a4;
case 0x4795a5:c.instructions+=2;goto B4795a5;
case 0x4795a7:c.instructions+=1;goto B4795a7;
case 0x4795ac:goto L4795ac;
case 0x4795ad:c.instructions+=4;goto B4795ad;
case 0x4795af:c.instructions+=3;goto B4795af;
case 0x4795b6:c.instructions+=2;goto B4795b6;
case 0x4795bd:c.instructions+=1;goto B4795bd;
case 0x4795c2:goto L4795c2;
case 0x4795c3:goto L4795c3;
case 0x4795c4:c.instructions+=1;goto B4795c4;
case 0x4795d0:goto L4795d0;
case 0x4795d2:c.instructions+=18;goto B4795d2;
case 0x4795d4:c.instructions+=17;goto B4795d4;
case 0x4795d7:c.instructions+=16;goto B4795d7;
case 0x4795da:c.instructions+=15;goto B4795da;
case 0x4795dd:c.instructions+=14;goto B4795dd;
case 0x4795e0:c.instructions+=13;goto B4795e0;
case 0x4795e3:c.instructions+=12;goto B4795e3;
case 0x4795e6:c.instructions+=11;goto B4795e6;
case 0x4795e9:c.instructions+=10;goto B4795e9;
case 0x4795ec:c.instructions+=9;goto B4795ec;
case 0x4795ef:c.instructions+=8;goto B4795ef;
case 0x4795f2:c.instructions+=7;goto B4795f2;
case 0x4795f5:c.instructions+=6;goto B4795f5;
case 0x4795f8:c.instructions+=5;goto B4795f8;
case 0x4795fb:c.instructions+=4;goto B4795fb;
case 0x4795fe:c.instructions+=3;goto B4795fe;
case 0x479604:c.instructions+=2;goto B479604;
case 0x479607:c.instructions+=1;goto B479607;
case 0x479610:goto L479610;
case 0x479611:c.instructions+=4;goto B479611;
case 0x479613:c.instructions+=3;goto B479613;
case 0x479616:c.instructions+=2;goto B479616;
case 0x479618:c.instructions+=1;goto B479618;
case 0x47961a:goto L47961a;
case 0x47961c:c.instructions+=1;goto B47961c;
case 0x47961f:goto L47961f;
case 0x479623:c.instructions+=3;goto B479623;
case 0x479624:c.instructions+=2;goto B479624;
case 0x479626:c.instructions+=1;goto B479626;
case 0x47962b:goto L47962b;
case 0x47962e:c.instructions+=3;goto B47962e;
case 0x479630:c.instructions+=2;goto B479630;
case 0x479637:c.instructions+=1;goto B479637;
case 0x479639:goto L479639;
case 0x47963f:c.instructions+=2;goto B47963f;
case 0x479641:c.instructions+=1;goto B479641;
case 0x479643:goto L479643;
case 0x47964a:goto L47964a;
case 0x47964c:c.instructions+=2;goto B47964c;
case 0x47964e:c.instructions+=1;goto B47964e;
case 0x479651:goto L479651;
case 0x479653:c.instructions+=2;goto B479653;
case 0x479655:c.instructions+=1;goto B479655;
case 0x479658:goto L479658;
case 0x479659:c.instructions+=1;goto B479659;
case 0x479660:goto L479660;
case 0x479662:c.instructions+=30;goto B479662;
case 0x479664:c.instructions+=29;goto B479664;
case 0x479667:c.instructions+=28;goto B479667;
case 0x47966a:c.instructions+=27;goto B47966a;
case 0x47966d:c.instructions+=26;goto B47966d;
case 0x479670:c.instructions+=25;goto B479670;
case 0x479673:c.instructions+=24;goto B479673;
case 0x479676:c.instructions+=23;goto B479676;
case 0x479679:c.instructions+=22;goto B479679;
case 0x47967c:c.instructions+=21;goto B47967c;
case 0x47967f:c.instructions+=20;goto B47967f;
case 0x479685:c.instructions+=19;goto B479685;
case 0x479688:c.instructions+=18;goto B479688;
case 0x47968b:c.instructions+=17;goto B47968b;
case 0x47968e:c.instructions+=16;goto B47968e;
case 0x479691:c.instructions+=15;goto B479691;
case 0x479697:c.instructions+=14;goto B479697;
case 0x47969a:c.instructions+=13;goto B47969a;
case 0x47969d:c.instructions+=12;goto B47969d;
case 0x4796a7:c.instructions+=11;goto B4796a7;
case 0x4796b1:c.instructions+=10;goto B4796b1;
case 0x4796b7:c.instructions+=9;goto B4796b7;
case 0x4796ba:c.instructions+=8;goto B4796ba;
case 0x4796bd:c.instructions+=7;goto B4796bd;
case 0x4796c3:c.instructions+=6;goto B4796c3;
case 0x4796c9:c.instructions+=5;goto B4796c9;
case 0x4796cf:c.instructions+=4;goto B4796cf;
case 0x4796d5:c.instructions+=3;goto B4796d5;
case 0x4796db:c.instructions+=2;goto B4796db;
case 0x4796e1:c.instructions+=1;goto B4796e1;
case 0x4796f0:goto L4796f0;
case 0x4796f3:c.instructions+=1;goto B4796f3;
case 0x479700:goto L479700;
case 0x479706:c.instructions+=1;goto B479706;
case 0x479710:goto L479710;
case 0x479712:c.instructions+=11;goto B479712;
case 0x479717:c.instructions+=10;goto B479717;
case 0x47971d:c.instructions+=9;goto B47971d;
case 0x47971e:c.instructions+=8;goto B47971e;
case 0x479725:c.instructions+=7;goto B479725;
case 0x479726:c.instructions+=6;goto B479726;
case 0x479727:c.instructions+=5;goto B479727;
case 0x479729:c.instructions+=4;goto B479729;
case 0x47972d:c.instructions+=3;goto B47972d;
case 0x479733:c.instructions+=2;goto B479733;
case 0x47973b:c.instructions+=1;goto B47973b;
case 0x479740:goto L479740;
case 0x479746:c.instructions+=3;goto B479746;
case 0x479748:c.instructions+=2;goto B479748;
case 0x479750:c.instructions+=1;goto B479750;
case 0x479755:goto L479755;
case 0x479759:c.instructions+=5;goto B479759;
case 0x47975f:c.instructions+=4;goto B47975f;
case 0x479760:c.instructions+=3;goto B479760;
case 0x479767:c.instructions+=2;goto B479767;
case 0x47976a:c.instructions+=1;goto B47976a;
case 0x479770:goto L479770;
case 0x479774:c.instructions+=7;goto B479774;
case 0x479775:c.instructions+=6;goto B479775;
case 0x479777:c.instructions+=5;goto B479777;
case 0x479778:c.instructions+=4;goto B479778;
case 0x47977b:c.instructions+=3;goto B47977b;
case 0x47977c:c.instructions+=2;goto B47977c;
case 0x47977e:c.instructions+=1;goto B47977e;
case 0x479783:goto L479783;
case 0x479785:c.instructions+=2;goto B479785;
case 0x479787:c.instructions+=1;goto B479787;
case 0x47978c:goto L47978c;
case 0x47978f:c.instructions+=4;goto B47978f;
case 0x479795:c.instructions+=3;goto B479795;
case 0x479796:c.instructions+=2;goto B479796;
case 0x479797:c.instructions+=1;goto B479797;
case 0x479799:goto L479799;
case 0x47979e:goto L47979e;
case 0x4797b0:goto L4797b0;
case 0x4797b5:c.instructions+=4;goto B4797b5;
case 0x4797b7:c.instructions+=3;goto B4797b7;
case 0x4797b8:c.instructions+=2;goto B4797b8;
case 0x4797ba:c.instructions+=1;goto B4797ba;
case 0x4797c0:goto L4797c0;
case 0x4797c1:c.instructions+=5;goto B4797c1;
case 0x4797c2:c.instructions+=4;goto B4797c2;
case 0x4797c5:c.instructions+=3;goto B4797c5;
case 0x4797c7:c.instructions+=2;goto B4797c7;
case 0x4797c9:c.instructions+=1;goto B4797c9;
case 0x4797ce:goto L4797ce;
case 0x4797d0:c.instructions+=2;goto B4797d0;
case 0x4797d2:c.instructions+=1;goto B4797d2;
case 0x4797d4:goto L4797d4;
case 0x4797d7:c.instructions+=1;goto B4797d7;
case 0x4797d9:goto L4797d9;
case 0x4797db:goto L4797db;
case 0x4797df:c.instructions+=1;goto B4797df;
case 0x4797e0:goto L4797e0;
case 0x4797e2:c.instructions+=1;goto B4797e2;
case 0x4797e4:goto L4797e4;
case 0x4797e7:c.instructions+=1;goto B4797e7;
case 0x4797e9:goto L4797e9;
case 0x4797eb:goto L4797eb;
case 0x4797ed:c.instructions+=1;goto B4797ed;
case 0x4797f3:goto L4797f3;
case 0x4797f6:c.instructions+=1;goto B4797f6;
case 0x4797f8:goto L4797f8;
case 0x4797fe:c.instructions+=2;goto B4797fe;
case 0x479800:c.instructions+=1;goto B479800;
case 0x479802:goto L479802;
case 0x479805:c.instructions+=2;goto B479805;
case 0x479807:c.instructions+=1;goto B479807;
case 0x479809:goto L479809;
case 0x47980c:c.instructions+=1;goto B47980c;
case 0x47980e:goto L47980e;
case 0x479810:c.instructions+=1;goto B479810;
case 0x479812:goto L479812;
case 0x479815:c.instructions+=2;goto B479815;
case 0x479817:c.instructions+=1;goto B479817;
case 0x479819:goto L479819;
case 0x47981b:c.instructions+=3;goto B47981b;
case 0x47981c:c.instructions+=2;goto B47981c;
case 0x47981e:c.instructions+=1;goto B47981e;
case 0x479821:goto L479821;
case 0x479827:c.instructions+=2;goto B479827;
case 0x479829:c.instructions+=1;goto B479829;
case 0x47982b:goto L47982b;
case 0x479831:c.instructions+=2;goto B479831;
case 0x479833:c.instructions+=1;goto B479833;
case 0x479835:goto L479835;
case 0x47983b:c.instructions+=2;goto B47983b;
case 0x47983d:c.instructions+=1;goto B47983d;
case 0x47983f:goto L47983f;
case 0x479840:c.instructions+=4;goto B479840;
case 0x479843:c.instructions+=3;goto B479843;
case 0x479844:c.instructions+=2;goto B479844;
case 0x479846:c.instructions+=1;goto B479846;
case 0x47984b:goto L47984b;
case 0x47984d:c.instructions+=1;goto B47984d;
case 0x47984f:goto L47984f;
case 0x479851:c.instructions+=2;goto B479851;
case 0x479853:c.instructions+=1;goto B479853;
case 0x479856:goto L479856;
case 0x479858:c.instructions+=1;goto B479858;
case 0x47985a:goto L47985a;
case 0x47985b:c.instructions+=2;goto B47985b;
case 0x47985d:c.instructions+=1;goto B47985d;
case 0x479862:goto L479862;
case 0x479863:c.instructions+=3;goto B479863;
case 0x479864:c.instructions+=2;goto B479864;
case 0x479865:c.instructions+=1;goto B479865;
case 0x479868:goto L479868;
case 0x47986a:c.instructions+=2;goto B47986a;
case 0x47986c:c.instructions+=1;goto B47986c;
case 0x47986f:goto L47986f;
case 0x479870:c.instructions+=1;goto B479870;
case 0x479871:goto L479871;
case 0x479872:c.instructions+=1;goto B479872;
case 0x479880:goto L479880;
case 0x479882:c.instructions+=13;goto B479882;
case 0x479887:c.instructions+=12;goto B479887;
case 0x47988d:c.instructions+=11;goto B47988d;
case 0x47988e:c.instructions+=10;goto B47988e;
case 0x479895:c.instructions+=9;goto B479895;
case 0x479896:c.instructions+=8;goto B479896;
case 0x479897:c.instructions+=7;goto B479897;
case 0x479899:c.instructions+=6;goto B479899;
case 0x47989d:c.instructions+=5;goto B47989d;
case 0x4798a3:c.instructions+=4;goto B4798a3;
case 0x4798a6:c.instructions+=3;goto B4798a6;
case 0x4798a8:c.instructions+=2;goto B4798a8;
case 0x4798b0:c.instructions+=1;goto B4798b0;
case 0x4798b2:goto L4798b2;
case 0x4798b4:c.instructions+=1;goto B4798b4;
case 0x4798b7:goto L4798b7;
case 0x4798bd:c.instructions+=2;goto B4798bd;
case 0x4798bf:c.instructions+=1;goto B4798bf;
case 0x4798c1:goto L4798c1;
case 0x4798c3:c.instructions+=2;goto B4798c3;
case 0x4798c5:c.instructions+=1;goto B4798c5;
case 0x4798c7:goto L4798c7;
case 0x4798c9:c.instructions+=2;goto B4798c9;
case 0x4798d3:c.instructions+=1;goto B4798d3;
case 0x4798d8:goto L4798d8;
case 0x4798db:c.instructions+=2;goto B4798db;
case 0x4798e3:c.instructions+=1;goto B4798e3;
case 0x4798e8:goto L4798e8;
case 0x4798ec:c.instructions+=4;goto B4798ec;
case 0x4798ed:c.instructions+=3;goto B4798ed;
case 0x4798f4:c.instructions+=2;goto B4798f4;
case 0x4798f7:c.instructions+=1;goto B4798f7;
case 0x479900:goto L479900;
case 0x479901:c.instructions+=4;goto B479901;
case 0x479903:c.instructions+=3;goto B479903;
case 0x479909:c.instructions+=2;goto B479909;
case 0x47990b:c.instructions+=1;goto B47990b;
case 0x47990d:goto L47990d;
case 0x479912:c.instructions+=2;goto B479912;
case 0x479913:c.instructions+=1;goto B479913;
case 0x479918:goto L479918;
case 0x47991b:c.instructions+=2;goto B47991b;
case 0x479920:c.instructions+=1;goto B479920;
case 0x479922:goto L479922;
case 0x479928:c.instructions+=5;goto B479928;
case 0x47992b:c.instructions+=4;goto B47992b;
case 0x479931:c.instructions+=3;goto B479931;
case 0x479932:c.instructions+=2;goto B479932;
case 0x479934:c.instructions+=1;goto B479934;
case 0x479939:goto L479939;
case 0x47993c:c.instructions+=2;goto B47993c;
case 0x47993e:c.instructions+=1;goto B47993e;
case 0x479940:goto L479940;
case 0x479946:c.instructions+=3;goto B479946;
case 0x479947:c.instructions+=2;goto B479947;
case 0x479949:c.instructions+=1;goto B479949;
case 0x47994e:goto L47994e;
case 0x479950:goto L479950;
case 0x479952:goto L479952;
case 0x479958:c.instructions+=4;goto B479958;
case 0x47995e:c.instructions+=3;goto B47995e;
case 0x47995f:c.instructions+=2;goto B47995f;
case 0x479961:c.instructions+=1;goto B479961;
case 0x479966:goto L479966;
case 0x479967:c.instructions+=1;goto B479967;
case 0x479970:goto L479970;
case 0x479975:c.instructions+=4;goto B479975;
case 0x479977:c.instructions+=3;goto B479977;
case 0x479978:c.instructions+=2;goto B479978;
case 0x47997a:c.instructions+=1;goto B47997a;
case 0x479980:goto L479980;
case 0x479986:c.instructions+=2;goto B479986;
case 0x479988:c.instructions+=1;goto B479988;
case 0x47998e:goto L47998e;
case 0x479991:c.instructions+=11;goto B479991;
case 0x479994:c.instructions+=10;goto B479994;
case 0x479997:c.instructions+=9;goto B479997;
case 0x47999b:c.instructions+=8;goto B47999b;
case 0x47999c:c.instructions+=7;goto B47999c;
case 0x47999e:c.instructions+=6;goto B47999e;
case 0x4799a4:c.instructions+=5;goto B4799a4;
case 0x4799a5:c.instructions+=4;goto B4799a5;
case 0x4799a8:c.instructions+=3;goto B4799a8;
case 0x4799ae:c.instructions+=2;goto B4799ae;
case 0x4799b4:c.instructions+=1;goto B4799b4;
case 0x4799b9:goto L4799b9;
case 0x4799bf:c.instructions+=8;goto B4799bf;
case 0x4799c5:c.instructions+=7;goto B4799c5;
case 0x4799c9:c.instructions+=6;goto B4799c9;
case 0x4799cd:c.instructions+=5;goto B4799cd;
case 0x4799ce:c.instructions+=4;goto B4799ce;
case 0x4799d1:c.instructions+=3;goto B4799d1;
case 0x4799d3:c.instructions+=2;goto B4799d3;
case 0x4799d6:c.instructions+=1;goto B4799d6;
case 0x4799db:goto L4799db;
case 0x4799dd:c.instructions+=2;goto B4799dd;
case 0x4799df:c.instructions+=1;goto B4799df;
case 0x4799e2:goto L4799e2;
case 0x4799e4:c.instructions+=2;goto B4799e4;
case 0x4799e6:c.instructions+=1;goto B4799e6;
case 0x4799e9:goto L4799e9;
case 0x4799ec:c.instructions+=5;goto B4799ec;
case 0x4799f2:c.instructions+=4;goto B4799f2;
case 0x4799f8:c.instructions+=3;goto B4799f8;
case 0x4799fa:c.instructions+=2;goto B4799fa;
case 0x4799fb:c.instructions+=1;goto B4799fb;
case 0x4799fd:goto L4799fd;
case 0x479a00:c.instructions+=2;goto B479a00;
case 0x479a06:c.instructions+=1;goto B479a06;
case 0x479a0b:goto L479a0b;
case 0x479a11:goto L479a11;
case 0x479a13:c.instructions+=2;goto B479a13;
case 0x479a15:c.instructions+=1;goto B479a15;
case 0x479a18:goto L479a18;
case 0x479a19:c.instructions+=1;goto B479a19;
case 0x479a20:goto L479a20;
case 0x479a23:c.instructions+=10;goto B479a23;
case 0x479a24:c.instructions+=9;goto B479a24;
case 0x479a26:c.instructions+=8;goto B479a26;
case 0x479a29:c.instructions+=7;goto B479a29;
case 0x479a2c:c.instructions+=6;goto B479a2c;
case 0x479a32:c.instructions+=5;goto B479a32;
case 0x479a33:c.instructions+=4;goto B479a33;
case 0x479a39:c.instructions+=3;goto B479a39;
case 0x479a3a:c.instructions+=2;goto B479a3a;
case 0x479a3f:c.instructions+=1;goto B479a3f;
case 0x479a43:goto L479a43;
case 0x479a45:goto L479a45;
case 0x479a49:c.instructions+=12;goto B479a49;
case 0x479a50:c.instructions+=11;goto B479a50;
case 0x479a54:c.instructions+=10;goto B479a54;
case 0x479a58:c.instructions+=9;goto B479a58;
case 0x479a5c:c.instructions+=8;goto B479a5c;
case 0x479a60:c.instructions+=7;goto B479a60;
case 0x479a64:c.instructions+=6;goto B479a64;
case 0x479a68:c.instructions+=5;goto B479a68;
case 0x479a6a:c.instructions+=4;goto B479a6a;
case 0x479a70:c.instructions+=3;goto B479a70;
case 0x479a72:c.instructions+=2;goto B479a72;
case 0x479a75:c.instructions+=1;goto B479a75;
case 0x479a77:goto L479a77;
case 0x479a7b:c.instructions+=2;goto B479a7b;
case 0x479a81:c.instructions+=1;goto B479a81;
case 0x479a85:goto L479a85;
case 0x479a89:c.instructions+=4;goto B479a89;
case 0x479a8d:c.instructions+=3;goto B479a8d;
case 0x479a91:c.instructions+=2;goto B479a91;
case 0x479a95:c.instructions+=1;goto B479a95;
case 0x479a9a:goto L479a9a;
case 0x479a9e:c.instructions+=2;goto B479a9e;
case 0x479aa0:c.instructions+=1;goto B479aa0;
case 0x479aa2:goto L479aa2;
case 0x479aa6:c.instructions+=1;goto B479aa6;
case 0x479aab:goto L479aab;
case 0x479aaf:c.instructions+=2;goto B479aaf;
case 0x479ab5:c.instructions+=1;goto B479ab5;
case 0x479aba:goto L479aba;
case 0x479abb:c.instructions+=5;goto B479abb;
case 0x479abc:c.instructions+=4;goto B479abc;
case 0x479abf:c.instructions+=3;goto B479abf;
case 0x479ac0:c.instructions+=2;goto B479ac0;
case 0x479ac3:c.instructions+=1;goto B479ac3;
case 0x479ad0:goto L479ad0;
case 0x479ad1:c.instructions+=4;goto B479ad1;
case 0x479ad3:c.instructions+=3;goto B479ad3;
case 0x479ad9:c.instructions+=2;goto B479ad9;
case 0x479adb:c.instructions+=1;goto B479adb;
case 0x479add:goto L479add;
case 0x479ae0:c.instructions+=2;goto B479ae0;
case 0x479ae2:c.instructions+=1;goto B479ae2;
case 0x479ae4:goto L479ae4;
case 0x479ae7:c.instructions+=3;goto B479ae7;
case 0x479aed:c.instructions+=2;goto B479aed;
case 0x479af0:c.instructions+=1;goto B479af0;
case 0x479af5:goto L479af5;
case 0x479afb:c.instructions+=3;goto B479afb;
case 0x479afe:c.instructions+=2;goto B479afe;
case 0x479b00:c.instructions+=1;goto B479b00;
case 0x479b02:goto L479b02;
case 0x479b04:c.instructions+=1;goto B479b04;
case 0x479b09:goto L479b09;
case 0x479b0c:c.instructions+=2;goto B479b0c;
case 0x479b12:c.instructions+=1;goto B479b12;
case 0x479b17:goto L479b17;
case 0x479b1a:goto L479b1a;
case 0x479b1b:c.instructions+=1;goto B479b1b;
case 0x479b20:goto L479b20;
case 0x479b25:c.instructions+=4;goto B479b25;
case 0x479b2b:c.instructions+=3;goto B479b2b;
case 0x479b2d:c.instructions+=2;goto B479b2d;
case 0x479b30:c.instructions+=1;goto B479b30;
case 0x479b35:goto L479b35;
case 0x479b38:c.instructions+=1;goto B479b38;
case 0x479b40:goto L479b40;
case 0x479b44:c.instructions+=4;goto B479b44;
case 0x479b46:c.instructions+=3;goto B479b46;
case 0x479b49:c.instructions+=2;goto B479b49;
case 0x479b4a:c.instructions+=1;goto B479b4a;
case 0x479b50:goto L479b50;
case 0x479b56:c.instructions+=3;goto B479b56;
case 0x479b59:c.instructions+=2;goto B479b59;
case 0x479b5c:c.instructions+=1;goto B479b5c;
case 0x479b62:goto L479b62;
case 0x479b69:goto L479b69;
case 0x479b6e:c.instructions+=7;goto B479b6e;
case 0x479b72:c.instructions+=6;goto B479b72;
case 0x479b73:c.instructions+=5;goto B479b73;
case 0x479b78:c.instructions+=4;goto B479b78;
case 0x479b7a:c.instructions+=3;goto B479b7a;
case 0x479b80:c.instructions+=2;goto B479b80;
case 0x479b82:c.instructions+=1;goto B479b82;
case 0x479b87:goto L479b87;
case 0x479b89:c.instructions+=1;goto B479b89;
case 0x479b8b:goto L479b8b;
case 0x479b8d:c.instructions+=1;goto B479b8d;
case 0x479b8f:goto L479b8f;
case 0x479b92:c.instructions+=1;goto B479b92;
case 0x479b94:goto L479b94;
case 0x479b99:goto L479b99;
case 0x479ba0:c.instructions+=2;goto B479ba0;
case 0x479ba6:c.instructions+=1;goto B479ba6;
case 0x479bab:goto L479bab;
case 0x479bae:c.instructions+=6;goto B479bae;
case 0x479bb0:c.instructions+=5;goto B479bb0;
case 0x479bb2:c.instructions+=4;goto B479bb2;
case 0x479bb7:c.instructions+=3;goto B479bb7;
case 0x479bb8:c.instructions+=2;goto B479bb8;
case 0x479bbe:c.instructions+=1;goto B479bbe;
case 0x479bc3:goto L479bc3;
case 0x479bc8:c.instructions+=7;goto B479bc8;
case 0x479bcc:c.instructions+=6;goto B479bcc;
case 0x479bcd:c.instructions+=5;goto B479bcd;
case 0x479bd2:c.instructions+=4;goto B479bd2;
case 0x479bd4:c.instructions+=3;goto B479bd4;
case 0x479bda:c.instructions+=2;goto B479bda;
case 0x479bdc:c.instructions+=1;goto B479bdc;
case 0x479be1:goto L479be1;
case 0x479be3:c.instructions+=1;goto B479be3;
case 0x479be5:goto L479be5;
case 0x479be7:c.instructions+=1;goto B479be7;
case 0x479be9:goto L479be9;
case 0x479bec:c.instructions+=1;goto B479bec;
case 0x479bee:goto L479bee;
case 0x479bf3:goto L479bf3;
case 0x479bfa:c.instructions+=2;goto B479bfa;
case 0x479c00:c.instructions+=1;goto B479c00;
case 0x479c05:goto L479c05;
case 0x479c08:c.instructions+=6;goto B479c08;
case 0x479c0a:c.instructions+=5;goto B479c0a;
case 0x479c0c:c.instructions+=4;goto B479c0c;
case 0x479c11:c.instructions+=3;goto B479c11;
case 0x479c12:c.instructions+=2;goto B479c12;
case 0x479c18:c.instructions+=1;goto B479c18;
case 0x479c1d:goto L479c1d;
case 0x479c22:c.instructions+=7;goto B479c22;
case 0x479c26:c.instructions+=6;goto B479c26;
case 0x479c27:c.instructions+=5;goto B479c27;
case 0x479c2c:c.instructions+=4;goto B479c2c;
case 0x479c2e:c.instructions+=3;goto B479c2e;
case 0x479c34:c.instructions+=2;goto B479c34;
case 0x479c36:c.instructions+=1;goto B479c36;
case 0x479c3b:goto L479c3b;
case 0x479c3d:c.instructions+=1;goto B479c3d;
case 0x479c3f:goto L479c3f;
case 0x479c41:c.instructions+=1;goto B479c41;
case 0x479c43:goto L479c43;
case 0x479c46:c.instructions+=1;goto B479c46;
case 0x479c48:goto L479c48;
case 0x479c4d:goto L479c4d;
case 0x479c54:c.instructions+=2;goto B479c54;
case 0x479c5a:c.instructions+=1;goto B479c5a;
case 0x479c5f:goto L479c5f;
case 0x479c62:c.instructions+=6;goto B479c62;
case 0x479c64:c.instructions+=5;goto B479c64;
case 0x479c66:c.instructions+=4;goto B479c66;
case 0x479c69:c.instructions+=3;goto B479c69;
case 0x479c6a:c.instructions+=2;goto B479c6a;
case 0x479c70:c.instructions+=1;goto B479c70;
case 0x479c75:goto L479c75;
case 0x479c7a:c.instructions+=7;goto B479c7a;
case 0x479c7e:c.instructions+=6;goto B479c7e;
case 0x479c7f:c.instructions+=5;goto B479c7f;
case 0x479c84:c.instructions+=4;goto B479c84;
case 0x479c86:c.instructions+=3;goto B479c86;
case 0x479c8c:c.instructions+=2;goto B479c8c;
case 0x479c8e:c.instructions+=1;goto B479c8e;
case 0x479c93:goto L479c93;
case 0x479c95:c.instructions+=1;goto B479c95;
case 0x479c97:goto L479c97;
case 0x479c99:c.instructions+=1;goto B479c99;
case 0x479c9b:goto L479c9b;
case 0x479c9e:c.instructions+=1;goto B479c9e;
case 0x479ca0:goto L479ca0;
case 0x479ca5:goto L479ca5;
case 0x479cac:c.instructions+=2;goto B479cac;
case 0x479cb2:c.instructions+=1;goto B479cb2;
case 0x479cb7:goto L479cb7;
case 0x479cba:c.instructions+=6;goto B479cba;
case 0x479cbc:c.instructions+=5;goto B479cbc;
case 0x479cbe:c.instructions+=4;goto B479cbe;
case 0x479cc3:c.instructions+=3;goto B479cc3;
case 0x479cc4:c.instructions+=2;goto B479cc4;
case 0x479cca:c.instructions+=1;goto B479cca;
case 0x479ccf:goto L479ccf;
case 0x479cd4:c.instructions+=7;goto B479cd4;
case 0x479cd8:c.instructions+=6;goto B479cd8;
case 0x479cd9:c.instructions+=5;goto B479cd9;
case 0x479cde:c.instructions+=4;goto B479cde;
case 0x479ce0:c.instructions+=3;goto B479ce0;
case 0x479ce6:c.instructions+=2;goto B479ce6;
case 0x479ce8:c.instructions+=1;goto B479ce8;
case 0x479ced:goto L479ced;
case 0x479cef:c.instructions+=1;goto B479cef;
case 0x479cf1:goto L479cf1;
case 0x479cf3:c.instructions+=1;goto B479cf3;
case 0x479cf5:goto L479cf5;
case 0x479cf8:c.instructions+=1;goto B479cf8;
case 0x479cfa:goto L479cfa;
case 0x479cff:goto L479cff;
case 0x479d06:c.instructions+=2;goto B479d06;
case 0x479d0c:c.instructions+=1;goto B479d0c;
case 0x479d11:goto L479d11;
case 0x479d14:c.instructions+=6;goto B479d14;
case 0x479d16:c.instructions+=5;goto B479d16;
case 0x479d18:c.instructions+=4;goto B479d18;
case 0x479d1d:c.instructions+=3;goto B479d1d;
case 0x479d1e:c.instructions+=2;goto B479d1e;
case 0x479d24:c.instructions+=1;goto B479d24;
case 0x479d29:goto L479d29;
case 0x479d2e:c.instructions+=7;goto B479d2e;
case 0x479d32:c.instructions+=6;goto B479d32;
case 0x479d33:c.instructions+=5;goto B479d33;
case 0x479d38:c.instructions+=4;goto B479d38;
case 0x479d3a:c.instructions+=3;goto B479d3a;
case 0x479d40:c.instructions+=2;goto B479d40;
case 0x479d42:c.instructions+=1;goto B479d42;
case 0x479d47:goto L479d47;
case 0x479d49:c.instructions+=1;goto B479d49;
case 0x479d4b:goto L479d4b;
case 0x479d4d:c.instructions+=1;goto B479d4d;
case 0x479d4f:goto L479d4f;
case 0x479d52:c.instructions+=1;goto B479d52;
case 0x479d54:goto L479d54;
case 0x479d59:goto L479d59;
case 0x479d60:c.instructions+=2;goto B479d60;
case 0x479d66:c.instructions+=1;goto B479d66;
case 0x479d6b:goto L479d6b;
case 0x479d6e:c.instructions+=6;goto B479d6e;
case 0x479d70:c.instructions+=5;goto B479d70;
case 0x479d72:c.instructions+=4;goto B479d72;
case 0x479d77:c.instructions+=3;goto B479d77;
case 0x479d78:c.instructions+=2;goto B479d78;
case 0x479d7e:c.instructions+=1;goto B479d7e;
case 0x479d83:goto L479d83;
case 0x479d88:c.instructions+=7;goto B479d88;
case 0x479d8c:c.instructions+=6;goto B479d8c;
case 0x479d8d:c.instructions+=5;goto B479d8d;
case 0x479d92:c.instructions+=4;goto B479d92;
case 0x479d94:c.instructions+=3;goto B479d94;
case 0x479d9a:c.instructions+=2;goto B479d9a;
case 0x479d9c:c.instructions+=1;goto B479d9c;
case 0x479da1:goto L479da1;
case 0x479da3:c.instructions+=1;goto B479da3;
case 0x479da5:goto L479da5;
case 0x479da7:c.instructions+=1;goto B479da7;
case 0x479da9:goto L479da9;
case 0x479dac:c.instructions+=1;goto B479dac;
case 0x479dae:goto L479dae;
case 0x479db3:goto L479db3;
case 0x479dba:c.instructions+=2;goto B479dba;
case 0x479dc0:c.instructions+=1;goto B479dc0;
case 0x479dc5:goto L479dc5;
case 0x479dc8:c.instructions+=6;goto B479dc8;
case 0x479dca:c.instructions+=5;goto B479dca;
case 0x479dcc:c.instructions+=4;goto B479dcc;
case 0x479dd1:c.instructions+=3;goto B479dd1;
case 0x479dd2:c.instructions+=2;goto B479dd2;
case 0x479dd8:c.instructions+=1;goto B479dd8;
case 0x479ddd:goto L479ddd;
case 0x479de2:c.instructions+=7;goto B479de2;
case 0x479de6:c.instructions+=6;goto B479de6;
case 0x479de7:c.instructions+=5;goto B479de7;
case 0x479dec:c.instructions+=4;goto B479dec;
case 0x479dee:c.instructions+=3;goto B479dee;
case 0x479df4:c.instructions+=2;goto B479df4;
case 0x479df6:c.instructions+=1;goto B479df6;
case 0x479dfb:goto L479dfb;
case 0x479dfd:c.instructions+=1;goto B479dfd;
case 0x479dff:goto L479dff;
case 0x479e01:c.instructions+=1;goto B479e01;
case 0x479e03:goto L479e03;
case 0x479e06:c.instructions+=1;goto B479e06;
case 0x479e08:goto L479e08;
case 0x479e0d:goto L479e0d;
case 0x479e14:c.instructions+=2;goto B479e14;
case 0x479e1a:c.instructions+=1;goto B479e1a;
case 0x479e1f:goto L479e1f;
case 0x479e22:c.instructions+=6;goto B479e22;
case 0x479e24:c.instructions+=5;goto B479e24;
case 0x479e26:c.instructions+=4;goto B479e26;
case 0x479e2b:c.instructions+=3;goto B479e2b;
case 0x479e2c:c.instructions+=2;goto B479e2c;
case 0x479e32:c.instructions+=1;goto B479e32;
case 0x479e37:goto L479e37;
case 0x479e3c:c.instructions+=7;goto B479e3c;
case 0x479e40:c.instructions+=6;goto B479e40;
case 0x479e41:c.instructions+=5;goto B479e41;
case 0x479e46:c.instructions+=4;goto B479e46;
case 0x479e48:c.instructions+=3;goto B479e48;
case 0x479e4e:c.instructions+=2;goto B479e4e;
case 0x479e50:c.instructions+=1;goto B479e50;
case 0x479e55:goto L479e55;
case 0x479e57:c.instructions+=1;goto B479e57;
case 0x479e59:goto L479e59;
case 0x479e5b:c.instructions+=1;goto B479e5b;
case 0x479e5d:goto L479e5d;
case 0x479e60:c.instructions+=1;goto B479e60;
case 0x479e62:goto L479e62;
case 0x479e67:goto L479e67;
case 0x479e6e:c.instructions+=2;goto B479e6e;
case 0x479e74:c.instructions+=1;goto B479e74;
case 0x479e79:goto L479e79;
case 0x479e7c:c.instructions+=6;goto B479e7c;
case 0x479e7e:c.instructions+=5;goto B479e7e;
case 0x479e80:c.instructions+=4;goto B479e80;
case 0x479e85:c.instructions+=3;goto B479e85;
case 0x479e86:c.instructions+=2;goto B479e86;
case 0x479e8c:c.instructions+=1;goto B479e8c;
case 0x479e91:goto L479e91;
case 0x479e96:c.instructions+=7;goto B479e96;
case 0x479e9a:c.instructions+=6;goto B479e9a;
case 0x479e9b:c.instructions+=5;goto B479e9b;
case 0x479ea0:c.instructions+=4;goto B479ea0;
case 0x479ea2:c.instructions+=3;goto B479ea2;
case 0x479ea8:c.instructions+=2;goto B479ea8;
case 0x479eaa:c.instructions+=1;goto B479eaa;
case 0x479eaf:goto L479eaf;
case 0x479eb1:c.instructions+=1;goto B479eb1;
case 0x479eb3:goto L479eb3;
case 0x479eb5:c.instructions+=1;goto B479eb5;
case 0x479eb7:goto L479eb7;
case 0x479eba:c.instructions+=1;goto B479eba;
case 0x479ebc:goto L479ebc;
case 0x479ec1:goto L479ec1;
case 0x479ec8:c.instructions+=2;goto B479ec8;
case 0x479ece:c.instructions+=1;goto B479ece;
case 0x479ed3:goto L479ed3;
case 0x479ed6:c.instructions+=6;goto B479ed6;
case 0x479ed8:c.instructions+=5;goto B479ed8;
case 0x479eda:c.instructions+=4;goto B479eda;
case 0x479edd:c.instructions+=3;goto B479edd;
case 0x479ede:c.instructions+=2;goto B479ede;
case 0x479ee4:c.instructions+=1;goto B479ee4;
case 0x479ee9:goto L479ee9;
case 0x479eee:c.instructions+=7;goto B479eee;
case 0x479ef2:c.instructions+=6;goto B479ef2;
case 0x479ef3:c.instructions+=5;goto B479ef3;
case 0x479ef8:c.instructions+=4;goto B479ef8;
case 0x479efa:c.instructions+=3;goto B479efa;
case 0x479f00:c.instructions+=2;goto B479f00;
case 0x479f02:c.instructions+=1;goto B479f02;
case 0x479f07:goto L479f07;
case 0x479f09:c.instructions+=1;goto B479f09;
case 0x479f0b:goto L479f0b;
case 0x479f0d:c.instructions+=1;goto B479f0d;
case 0x479f0f:goto L479f0f;
case 0x479f12:c.instructions+=1;goto B479f12;
case 0x479f14:goto L479f14;
case 0x479f19:goto L479f19;
case 0x479f20:c.instructions+=2;goto B479f20;
case 0x479f26:c.instructions+=1;goto B479f26;
case 0x479f2b:goto L479f2b;
case 0x479f2e:c.instructions+=6;goto B479f2e;
case 0x479f30:c.instructions+=5;goto B479f30;
case 0x479f32:c.instructions+=4;goto B479f32;
case 0x479f35:c.instructions+=3;goto B479f35;
case 0x479f36:c.instructions+=2;goto B479f36;
case 0x479f3c:c.instructions+=1;goto B479f3c;
case 0x479f41:goto L479f41;
case 0x479f46:c.instructions+=7;goto B479f46;
case 0x479f4a:c.instructions+=6;goto B479f4a;
case 0x479f4b:c.instructions+=5;goto B479f4b;
case 0x479f50:c.instructions+=4;goto B479f50;
case 0x479f52:c.instructions+=3;goto B479f52;
case 0x479f58:c.instructions+=2;goto B479f58;
case 0x479f5a:c.instructions+=1;goto B479f5a;
case 0x479f5f:goto L479f5f;
case 0x479f61:c.instructions+=1;goto B479f61;
case 0x479f63:goto L479f63;
case 0x479f65:c.instructions+=1;goto B479f65;
case 0x479f67:goto L479f67;
case 0x479f6a:c.instructions+=1;goto B479f6a;
case 0x479f6c:goto L479f6c;
case 0x479f71:goto L479f71;
case 0x479f78:c.instructions+=2;goto B479f78;
case 0x479f7e:c.instructions+=1;goto B479f7e;
case 0x479f83:goto L479f83;
case 0x479f86:c.instructions+=6;goto B479f86;
case 0x479f88:c.instructions+=5;goto B479f88;
case 0x479f8a:c.instructions+=4;goto B479f8a;
case 0x479f8f:c.instructions+=3;goto B479f8f;
case 0x479f90:c.instructions+=2;goto B479f90;
case 0x479f96:c.instructions+=1;goto B479f96;
case 0x479f9b:goto L479f9b;
case 0x479fa0:c.instructions+=7;goto B479fa0;
case 0x479fa4:c.instructions+=6;goto B479fa4;
case 0x479fa5:c.instructions+=5;goto B479fa5;
case 0x479faa:c.instructions+=4;goto B479faa;
case 0x479fac:c.instructions+=3;goto B479fac;
case 0x479fb2:c.instructions+=2;goto B479fb2;
case 0x479fb4:c.instructions+=1;goto B479fb4;
case 0x479fb9:goto L479fb9;
case 0x479fbb:c.instructions+=1;goto B479fbb;
case 0x479fbd:goto L479fbd;
case 0x479fbf:c.instructions+=1;goto B479fbf;
case 0x479fc1:goto L479fc1;
case 0x479fc4:c.instructions+=1;goto B479fc4;
case 0x479fc6:goto L479fc6;
case 0x479fcb:goto L479fcb;
case 0x479fd2:c.instructions+=2;goto B479fd2;
case 0x479fd8:c.instructions+=1;goto B479fd8;
case 0x479fdd:goto L479fdd;
case 0x479fe0:c.instructions+=6;goto B479fe0;
case 0x479fe2:c.instructions+=5;goto B479fe2;
case 0x479fe4:c.instructions+=4;goto B479fe4;
case 0x479fe9:c.instructions+=3;goto B479fe9;
case 0x479fea:c.instructions+=2;goto B479fea;
case 0x479ff0:c.instructions+=1;goto B479ff0;
case 0x479ff5:goto L479ff5;
case 0x479ff8:c.instructions+=1;goto B479ff8;
case 0x479ffe:goto L479ffe;
default:missing_instruction(c.pc);}
B479001:L479001:{c.instructions+=1;NFSU2_TR(0x479001);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L47901f;}}
}
B479003:L479003:{c.instructions+=4;NFSU2_TR(0x479003);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B479006:{NFSU2_TR(0x479006);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B479009:{NFSU2_TR(0x479009);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47900b:{NFSU2_TR(0x47900b);
if(r1(R+518)){{goto L479017;}}
}
B47900d:L47900d:{c.instructions+=3;NFSU2_TR(0x47900d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B479011:{NFSU2_TR(0x479011);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B479012:{NFSU2_TR(0x479012);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x479017ull));
TAIL_STATIC(0x467e70u,467);
}
B479017:L479017:{c.instructions+=4;NFSU2_TR(0x479017);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47901a:{NFSU2_TR(0x47901a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B47901b:{NFSU2_TR(0x47901b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B47901d:{NFSU2_TR(0x47901d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x479003u);}goto L479003;}}
}
B47901f:L47901f:{c.instructions+=4;NFSU2_TR(0x47901f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B479022:{NFSU2_TR(0x479022);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B479023:{NFSU2_TR(0x479023);
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
B479025:{NFSU2_TR(0x479025);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x478ff0u,478);}
}
B479027:L479027:{c.instructions+=5;NFSU2_TR(0x479027);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B479028:{NFSU2_TR(0x479028);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B479029:{NFSU2_TR(0x479029);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B47902a:{NFSU2_TR(0x47902a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B47902b:{NFSU2_TR(0x47902b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B479030:L479030:{c.instructions+=11;NFSU2_TR(0x479030);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B479031:{NFSU2_TR(0x479031);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B479035:{NFSU2_TR(0x479035);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B479037:{NFSU2_TR(0x479037);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47903a:{NFSU2_TR(0x47903a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B47903d:{NFSU2_TR(0x47903d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B479040:{NFSU2_TR(0x479040);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(u32(0x10000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B479046:{NFSU2_TR(0x479046);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B479047:{NFSU2_TR(0x479047);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B47904b:{NFSU2_TR(0x47904b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47904f:{NFSU2_TR(0x47904f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47909a;}}
}
B479051:L479051:{c.instructions+=16;NFSU2_TR(0x479051);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B479054:{NFSU2_TR(0x479054);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B479055:{NFSU2_TR(0x479055);
__builtin_memmove((R+12),(R+0),4);
}
B479057:{NFSU2_TR(0x479057);
w4(R+0,u32(s32(s16(r2(R+12)))));
}
B47905a:{NFSU2_TR(0x47905a);
w4(R+0,u32(0-u32(r4(R+0))));
}
B47905c:{NFSU2_TR(0x47905c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47905f:{NFSU2_TR(0x47905f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xffffd8f0ull))));
}
B479064:{NFSU2_TR(0x479064);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B479065:{NFSU2_TR(0x479065);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B479068:{NFSU2_TR(0x479068);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B47906a:{NFSU2_TR(0x47906a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47906d:{NFSU2_TR(0x47906d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+20),(U+0),4);
}
B47906f:{NFSU2_TR(0x47906f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B479070:{NFSU2_TR(0x479070);
__builtin_memmove((R+4),(R+28),4);
}
B479072:{NFSU2_TR(0x479072);
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x4ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B479075:{NFSU2_TR(0x479075);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x479078ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B479078:L479078:{c.instructions+=7;NFSU2_TR(0x479078);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47907c:{NFSU2_TR(0x47907c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47907d:{NFSU2_TR(0x47907d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47907e:{NFSU2_TR(0x47907e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47907f:{NFSU2_TR(0x47907f);
u8 U[4];
w4(U+0,u32(0x78ba1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B479084:{NFSU2_TR(0x479084);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B479086:{NFSU2_TR(0x479086);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47908bull));
TAIL_STATIC(0x4691c0u,469);
}
B47908b:L47908b:{c.instructions+=8;NFSU2_TR(0x47908b);
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
B47908e:{NFSU2_TR(0x47908e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B47908f:{NFSU2_TR(0x47908f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B479090:{NFSU2_TR(0x479090);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B479093:{NFSU2_TR(0x479093);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B479094:{NFSU2_TR(0x479094);
__builtin_memmove((R+0),(R+24),4);
}
B479096:{NFSU2_TR(0x479096);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B479097:{NFSU2_TR(0x479097);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47909a:L47909a:{c.instructions+=13;NFSU2_TR(0x47909a);
__builtin_memmove((R+4),(R+0),4);
}
B47909c:{NFSU2_TR(0x47909c);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xffff0000ull))));
}
B4790a2:{NFSU2_TR(0x4790a2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4790a3:{NFSU2_TR(0x4790a3);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B4790a6:{NFSU2_TR(0x4790a6);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7fffull))));
}
B4790ab:{NFSU2_TR(0x4790ab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4790ac:{NFSU2_TR(0x4790ac);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4790ad:{NFSU2_TR(0x4790ad);
u8 U[4];
w4(U+0,u32(0x78b9f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4790b2:{NFSU2_TR(0x4790b2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4790b4:{NFSU2_TR(0x4790b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4790b7:{NFSU2_TR(0x4790b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4790ba:{NFSU2_TR(0x4790ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4790c1:{NFSU2_TR(0x4790c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4790c6ull));
TAIL_STATIC(0x4691c0u,469);
}
B4790c6:L4790c6:{c.instructions+=6;NFSU2_TR(0x4790c6);
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
B4790c9:{NFSU2_TR(0x4790c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4790cc:{NFSU2_TR(0x4790cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4790cd:{NFSU2_TR(0x4790cd);
__builtin_memmove((R+0),(R+24),4);
}
B4790cf:{NFSU2_TR(0x4790cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4790d0:{NFSU2_TR(0x4790d0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4790e0:L4790e0:{c.instructions+=3;NFSU2_TR(0x4790e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4790e1:{NFSU2_TR(0x4790e1);
__builtin_memmove((R+24),(R+4),4);
}
B4790e3:{NFSU2_TR(0x4790e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4790e8ull));
TAIL_STATIC(0x467f90u,467);
}
B4790e8:L4790e8:{c.instructions+=2;NFSU2_TR(0x4790e8);
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
B4790ed:{NFSU2_TR(0x4790ed);
if(r1(R+518)){{goto L4790f8;}}
}
B4790ef:L4790ef:{c.instructions+=2;NFSU2_TR(0x4790ef);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4790f0:{NFSU2_TR(0x4790f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4790f5ull));
TAIL_STATIC(0x440540u,440);
}
B4790f5:L4790f5:{c.instructions+=1;NFSU2_TR(0x4790f5);
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
B4790f8:L4790f8:{c.instructions+=3;NFSU2_TR(0x4790f8);
__builtin_memmove((R+0),(R+24),4);
}
B4790fa:{NFSU2_TR(0x4790fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4790fb:{NFSU2_TR(0x4790fb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B479100:L479100:{c.instructions+=5;NFSU2_TR(0x479100);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B479101:{NFSU2_TR(0x479101);
__builtin_memmove((R+24),(R+4),4);
}
B479103:{NFSU2_TR(0x479103);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B479105:{NFSU2_TR(0x479105);
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
B479107:{NFSU2_TR(0x479107);
if(r1(R+518)){{goto L47912d;}}
}
B479109:L479109:{c.instructions+=1;NFSU2_TR(0x479109);
__builtin_memmove((R+16),(R+16),4);
}
B479110:L479110:{c.instructions+=7;NFSU2_TR(0x479110);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B479112:{NFSU2_TR(0x479112);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B479115:{NFSU2_TR(0x479115);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B479117:{NFSU2_TR(0x479117);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47911a:{NFSU2_TR(0x47911a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B47911d:{NFSU2_TR(0x47911d);
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
B47911f:{NFSU2_TR(0x47911f);
if(r1(R+518)){{goto L479127;}}
}
B479121:L479121:{c.instructions+=3;NFSU2_TR(0x479121);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B479123:{NFSU2_TR(0x479123);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B479125:{NFSU2_TR(0x479125);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x479127ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B479127:L479127:{c.instructions+=3;NFSU2_TR(0x479127);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B479129:{NFSU2_TR(0x479129);
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
B47912b:{NFSU2_TR(0x47912b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x479110u);}goto L479110;}}
}
B47912d:L47912d:{c.instructions+=2;NFSU2_TR(0x47912d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47912e:{NFSU2_TR(0x47912e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B479130:L479130:{c.instructions+=3;NFSU2_TR(0x479130);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B479131:{NFSU2_TR(0x479131);
__builtin_memmove((R+24),(R+4),4);
}
B479133:{NFSU2_TR(0x479133);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x479138ull));
TAIL_STATIC(0x440ec0u,440);
}
B479138:L479138:{c.instructions+=2;NFSU2_TR(0x479138);
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
B47913a:{NFSU2_TR(0x47913a);
if(r1(R+518)){{goto L479154;}}
}
B47913c:L47913c:{c.instructions+=9;NFSU2_TR(0x47913c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B479140:{NFSU2_TR(0x479140);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B479143:{NFSU2_TR(0x479143);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B479146:{NFSU2_TR(0x479146);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B479148:{NFSU2_TR(0x479148);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47914b:{NFSU2_TR(0x47914b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B47914d:{NFSU2_TR(0x47914d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B479150:{NFSU2_TR(0x479150);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B479151:{NFSU2_TR(0x479151);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B479154:L479154:{c.instructions+=8;NFSU2_TR(0x479154);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B479157:{NFSU2_TR(0x479157);
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
B479159:{NFSU2_TR(0x479159);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B47915b:{NFSU2_TR(0x47915b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47915e:{NFSU2_TR(0x47915e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B479160:{NFSU2_TR(0x479160);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B479163:{NFSU2_TR(0x479163);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B479164:{NFSU2_TR(0x479164);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B479170:L479170:{c.instructions+=19;NFSU2_TR(0x479170);
__builtin_memmove((R+0),(R+4),4);
}
B479172:{NFSU2_TR(0x479172);
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
B479174:{NFSU2_TR(0x479174);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B479177:{NFSU2_TR(0x479177);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47917a:{NFSU2_TR(0x47917a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47917d:{NFSU2_TR(0x47917d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B479180:{NFSU2_TR(0x479180);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B479183:{NFSU2_TR(0x479183);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B479186:{NFSU2_TR(0x479186);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B479189:{NFSU2_TR(0x479189);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47918c:{NFSU2_TR(0x47918c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47918f:{NFSU2_TR(0x47918f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B479192:{NFSU2_TR(0x479192);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B479195:{NFSU2_TR(0x479195);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B479198:{NFSU2_TR(0x479198);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47919b:{NFSU2_TR(0x47919b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B47919e:{NFSU2_TR(0x47919e);
u8 U[4];
w4(U+0,u32(0x78ba48ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4791a4:{NFSU2_TR(0x4791a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4791a7:{NFSU2_TR(0x4791a7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4791b0:L4791b0:{c.instructions+=2;NFSU2_TR(0x4791b0);
u8 U[4];
w4(U+0,u32(0x40000050ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4791b5:{NFSU2_TR(0x4791b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4791baull));
TAIL_STATIC(0x468f70u,468);
}
B4791ba:L4791ba:{c.instructions+=2;NFSU2_TR(0x4791ba);
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
B4791bc:{NFSU2_TR(0x4791bc);
if(r1(R+518)){{goto L4791c5;}}
}
B4791be:L4791be:{c.instructions+=2;NFSU2_TR(0x4791be);
__builtin_memmove((R+4),(R+0),4);
}
B4791c0:{NFSU2_TR(0x4791c0);
TAIL_STATIC(0x4754c0u,475);
}
B4791c5:L4791c5:{c.instructions+=1;NFSU2_TR(0x4791c5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4791d0:L4791d0:{c.instructions+=3;NFSU2_TR(0x4791d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4791d1:{NFSU2_TR(0x4791d1);
u8 U[4];
w4(U+0,u32(0x40000050ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4791d6:{NFSU2_TR(0x4791d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4791dbull));
TAIL_STATIC(0x468f70u,468);
}
B4791db:L4791db:{c.instructions+=3;NFSU2_TR(0x4791db);
__builtin_memmove((R+24),(R+0),4);
}
B4791dd:{NFSU2_TR(0x4791dd);
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
B4791df:{NFSU2_TR(0x4791df);
if(r1(R+518)){{goto L4791fb;}}
}
B4791e1:L4791e1:{c.instructions+=4;NFSU2_TR(0x4791e1);
__builtin_memmove((R+0),gp(0x82bc4c),4);
}
B4791e6:{NFSU2_TR(0x4791e6);
u8 U[4];
w4(U+0,u32(0x78b274ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4791eb:{NFSU2_TR(0x4791eb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4791ec:{NFSU2_TR(0x4791ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4791f1ull));
TAIL_STATIC(0x4691c0u,469);
}
B4791f1:L4791f1:{c.instructions+=2;NFSU2_TR(0x4791f1);
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
B4791f4:{NFSU2_TR(0x4791f4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4791fb:L4791fb:{c.instructions+=2;NFSU2_TR(0x4791fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4791fc:{NFSU2_TR(0x4791fc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B479200:L479200:{c.instructions+=2;NFSU2_TR(0x479200);
u8 U[4];
w4(U+0,u32(0x40000050ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B479205:{NFSU2_TR(0x479205);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47920aull));
TAIL_STATIC(0x468f70u,468);
}
B47920a:L47920a:{c.instructions+=2;NFSU2_TR(0x47920a);
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
B47920c:{NFSU2_TR(0x47920c);
if(r1(R+518)){{goto L479215;}}
}
B47920e:L47920e:{c.instructions+=1;NFSU2_TR(0x47920e);
s1(0x82bc49,u8(0x1ull));
}
B479215:L479215:{c.instructions+=1;NFSU2_TR(0x479215);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B479220:L479220:{c.instructions+=14;NFSU2_TR(0x479220);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B479223:{NFSU2_TR(0x479223);
__builtin_memmove((R+0),gp(0x83aa58),4);
}
B479228:{NFSU2_TR(0x479228);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B479229:{NFSU2_TR(0x479229);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47922a:{NFSU2_TR(0x47922a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47922b:{NFSU2_TR(0x47922b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47922c:{NFSU2_TR(0x47922c);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B47922e:{NFSU2_TR(0x47922e);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B479230:{NFSU2_TR(0x479230);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B479232:{NFSU2_TR(0x479232);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B479236:{NFSU2_TR(0x479236);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47923a:{NFSU2_TR(0x47923a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
w4(U+4,u32(0x83aa28ull));
s4(u32(r4(U+0)),r4(U+4));
}
B479241:{NFSU2_TR(0x479241);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B479243:{NFSU2_TR(0x479243);
w4(R+20,u32(0x83acb8ull));
}
B479248:L479248:{c.instructions+=4;NFSU2_TR(0x479248);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B47924c:{NFSU2_TR(0x47924c);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B47924d:{NFSU2_TR(0x47924d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+4),(U+0),4);
}
B479250:{NFSU2_TR(0x479250);
if(r1(R+518)){{goto L479273;}}
}
B479252:L479252:{c.instructions+=2;NFSU2_TR(0x479252);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B479253:{NFSU2_TR(0x479253);
if(r1(R+518)){{goto L479267;}}
}
B479255:L479255:{c.instructions+=2;NFSU2_TR(0x479255);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B479256:{NFSU2_TR(0x479256);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47927d;}}
}
B479258:L479258:{c.instructions+=7;NFSU2_TR(0x479258);
w4(R+0,u32(0x1ull));
}
B47925d:{NFSU2_TR(0x47925d);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B47925f:{NFSU2_TR(0x47925f);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+0))));
}
B479261:{NFSU2_TR(0x479261);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B479262:{NFSU2_TR(0x479262);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B479264:{NFSU2_TR(0x479264);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B479265:{NFSU2_TR(0x479265);
{goto L47927d;}
}
B479267:L479267:{c.instructions+=5;NFSU2_TR(0x479267);
w4(R+0,u32(0x1ull));
}
B47926c:{NFSU2_TR(0x47926c);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B47926e:{NFSU2_TR(0x47926e);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B479270:{NFSU2_TR(0x479270);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B479271:{NFSU2_TR(0x479271);
{goto L47927d;}
}
B479273:L479273:{c.instructions+=4;NFSU2_TR(0x479273);
w4(R+0,u32(0x1ull));
}
B479278:{NFSU2_TR(0x479278);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B47927a:{NFSU2_TR(0x47927a);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+0))));
}
B47927c:{NFSU2_TR(0x47927c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B47927d:L47927d:{c.instructions+=3;NFSU2_TR(0x47927d);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x8ull))));
}
B479280:{NFSU2_TR(0x479280);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x83ad90ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x83ad90ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B479286:{NFSU2_TR(0x479286);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x479248u);}goto L479248;}}
}
B479288:L479288:{c.instructions+=4;NFSU2_TR(0x479288);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47928c:{NFSU2_TR(0x47928c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B479292:{NFSU2_TR(0x479292);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B479294:{NFSU2_TR(0x479294);
if(r1(R+518)){{goto L4792a4;}}
}
B479296:L479296:{c.instructions+=7;NFSU2_TR(0x479296);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47929a:{NFSU2_TR(0x47929a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47929b:{NFSU2_TR(0x47929b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47929c:{NFSU2_TR(0x47929c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47929d:{NFSU2_TR(0x47929d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47929e:{NFSU2_TR(0x47929e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47929f:{NFSU2_TR(0x47929f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4792a4ull));
TAIL_STATIC(0x46baa0u,46b);
}
B4792a4:L4792a4:{c.instructions+=6;NFSU2_TR(0x4792a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4792a5:{NFSU2_TR(0x4792a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4792a6:{NFSU2_TR(0x4792a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4792a7:{NFSU2_TR(0x4792a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4792a8:{NFSU2_TR(0x4792a8);
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
B4792ab:{NFSU2_TR(0x4792ab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4792b0:L4792b0:{c.instructions+=5;NFSU2_TR(0x4792b0);
__builtin_memmove((R+0),gp(0x7faaa8),4);
}
B4792b5:{NFSU2_TR(0x4792b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4792bb:{NFSU2_TR(0x4792bb);
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
B4792bd:{NFSU2_TR(0x4792bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4792c1:{NFSU2_TR(0x4792c1);
if(r1(R+518)){{goto L4792c6;}}
}
B4792c3:L4792c3:{c.instructions+=1;NFSU2_TR(0x4792c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4792c6:L4792c6:{c.instructions+=1;NFSU2_TR(0x4792c6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4792d0:L4792d0:{c.instructions+=3;NFSU2_TR(0x4792d0);
__builtin_memmove((R+0),gp(0x7faaa8),4);
}
B4792d5:{NFSU2_TR(0x4792d5);
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
B4792d7:{NFSU2_TR(0x4792d7);
if(r1(R+518)){{goto L4792e1;}}
}
B4792d9:L4792d9:{c.instructions+=2;NFSU2_TR(0x4792d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4792dc:{NFSU2_TR(0x4792dc);
TAIL_STATIC(0x469de0u,469);
}
B4792e1:L4792e1:{c.instructions+=1;NFSU2_TR(0x4792e1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4792f0:L4792f0:{c.instructions+=11;NFSU2_TR(0x4792f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4792f1:{NFSU2_TR(0x4792f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4792f5:{NFSU2_TR(0x4792f5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4792f6:{NFSU2_TR(0x4792f6);
__builtin_memmove(gp(0x82b920),(R+24),4);
}
B4792fc:{NFSU2_TR(0x4792fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4792ff:{NFSU2_TR(0x4792ff);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((R+28),(U+0),4);
}
B479302:{NFSU2_TR(0x479302);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B479305:{NFSU2_TR(0x479305);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B479306:{NFSU2_TR(0x479306);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B479307:{NFSU2_TR(0x479307);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B479308:{NFSU2_TR(0x479308);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47930dull));
TAIL_STATIC(0x43dda0u,43d);
}
B47930d:L47930d:{c.instructions+=2;NFSU2_TR(0x47930d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47930e:{NFSU2_TR(0x47930e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x479313ull));
TAIL_STATIC(0x57d900u,57d);
}
B479313:L479313:{c.instructions+=4;NFSU2_TR(0x479313);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B479316:{NFSU2_TR(0x479316);
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
B479318:{NFSU2_TR(0x479318);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47931b:{NFSU2_TR(0x47931b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4793a9;}}
}
B479321:L479321:{c.instructions+=2;NFSU2_TR(0x479321);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B479322:{NFSU2_TR(0x479322);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x479327ull));
TAIL_STATIC(0x458890u,458);
}
B479327:L479327:{c.instructions+=4;NFSU2_TR(0x479327);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47932a:{NFSU2_TR(0x47932a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B47932d:{NFSU2_TR(0x47932d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47932f:{NFSU2_TR(0x47932f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47935e;}}
}
B479331:L479331:{c.instructions+=6;NFSU2_TR(0x479331);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B479334:{NFSU2_TR(0x479334);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B479337:{NFSU2_TR(0x479337);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B479338:{NFSU2_TR(0x479338);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B479339:{NFSU2_TR(0x479339);
w4(R+4,u32(0x82c6d4ull));
}
B47933e:{NFSU2_TR(0x47933e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x479343ull));
TAIL_STATIC(0x457a60u,457);
}
B479343:L479343:{c.instructions+=9;NFSU2_TR(0x479343);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B479346:{NFSU2_TR(0x479346);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B479347:{NFSU2_TR(0x479347);
u8 U[4];
w4(U+0,u32(0x4692f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47934c:{NFSU2_TR(0x47934c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47934d:{NFSU2_TR(0x47934d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47934f:{NFSU2_TR(0x47934f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B479350:{NFSU2_TR(0x479350);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B479351:{NFSU2_TR(0x479351);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B479354:{NFSU2_TR(0x479354);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x479359ull));
TAIL_STATIC(0x57b4a0u,57b);
}
B479359:L479359:{c.instructions+=2;NFSU2_TR(0x479359);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B47935c:{NFSU2_TR(0x47935c);
{goto L479394;}
}
B47935e:L47935e:{c.instructions+=2;NFSU2_TR(0x47935e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B479361:{NFSU2_TR(0x479361);
if(r1(R+518)){{goto L479394;}}
}
B479363:L479363:{c.instructions+=2;NFSU2_TR(0x479363);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B479366:{NFSU2_TR(0x479366);
if(r1(R+518)){{goto L47936d;}}
}
B479368:L479368:{c.instructions+=2;NFSU2_TR(0x479368);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47936b:{NFSU2_TR(0x47936b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L479394;}}
}
B47936d:L47936d:{c.instructions+=4;NFSU2_TR(0x47936d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B479370:{NFSU2_TR(0x479370);
u8 U[4];
w4(U+0,u32(0x1008ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B479375:{NFSU2_TR(0x479375);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B479376:{NFSU2_TR(0x479376);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47937bull));
TAIL_STATIC(0x440820u,440);
}
B47937b:L47937b:{c.instructions+=9;NFSU2_TR(0x47937b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47937e:{NFSU2_TR(0x47937e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47937f:{NFSU2_TR(0x47937f);
u8 U[4];
w4(U+0,u32(0x4692f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B479384:{NFSU2_TR(0x479384);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B479385:{NFSU2_TR(0x479385);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B479387:{NFSU2_TR(0x479387);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B479388:{NFSU2_TR(0x479388);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B479389:{NFSU2_TR(0x479389);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47938c:{NFSU2_TR(0x47938c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x479391ull));
TAIL_STATIC(0x57b4a0u,57b);
}
B479391:L479391:{c.instructions+=1;NFSU2_TR(0x479391);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B479394:L479394:{c.instructions+=3;NFSU2_TR(0x479394);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B479397:{NFSU2_TR(0x479397);
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
B479399:{NFSU2_TR(0x479399);
if(r1(R+518)){{goto L4793a9;}}
}
B47939b:L47939b:{c.instructions+=3;NFSU2_TR(0x47939b);
__builtin_memmove(gp(0x82b910),(R+0),4);
}
B4793a0:{NFSU2_TR(0x4793a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4793a3:{NFSU2_TR(0x4793a3);
__builtin_memmove(gp(0x82b914),(R+8),4);
}
B4793a9:L4793a9:{c.instructions+=3;NFSU2_TR(0x4793a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4793aa:{NFSU2_TR(0x4793aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4793ab:{NFSU2_TR(0x4793ab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4793b0:L4793b0:{c.instructions+=3;NFSU2_TR(0x4793b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4793b1:{NFSU2_TR(0x4793b1);
__builtin_memmove((R+24),(R+4),4);
}
B4793b3:{NFSU2_TR(0x4793b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4793b8ull));
TAIL_STATIC(0x4693f0u,469);
}
B4793b8:L4793b8:{c.instructions+=2;NFSU2_TR(0x4793b8);
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
B4793bd:{NFSU2_TR(0x4793bd);
if(r1(R+518)){{goto L4793c8;}}
}
B4793bf:L4793bf:{c.instructions+=2;NFSU2_TR(0x4793bf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4793c0:{NFSU2_TR(0x4793c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4793c5ull));
TAIL_STATIC(0x575630u,575);
}
B4793c5:L4793c5:{c.instructions+=1;NFSU2_TR(0x4793c5);
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
B4793c8:L4793c8:{c.instructions+=3;NFSU2_TR(0x4793c8);
__builtin_memmove((R+0),(R+24),4);
}
B4793ca:{NFSU2_TR(0x4793ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4793cb:{NFSU2_TR(0x4793cb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4793d0:L4793d0:{c.instructions+=9;NFSU2_TR(0x4793d0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4793d1:{NFSU2_TR(0x4793d1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4793d2:{NFSU2_TR(0x4793d2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4793d3:{NFSU2_TR(0x4793d3);
__builtin_memmove((R+24),(R+4),4);
}
B4793d5:{NFSU2_TR(0x4793d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4793d8:{NFSU2_TR(0x4793d8);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4793da:{NFSU2_TR(0x4793da);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4793dc:{NFSU2_TR(0x4793dc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4793dd:{NFSU2_TR(0x4793dd);
if(r1(R+518)){{goto L4794dd;}}
}
B4793e3:L4793e3:{c.instructions+=2;NFSU2_TR(0x4793e3);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4793e9:{NFSU2_TR(0x4793e9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L479451;}}
}
B4793eb:L4793eb:{c.instructions+=3;NFSU2_TR(0x4793eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4793f1:{NFSU2_TR(0x4793f1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4793f2:{NFSU2_TR(0x4793f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4793f7ull));
TAIL_STATIC(0x43e5c0u,43e);
}
B4793f7:L4793f7:{c.instructions+=5;NFSU2_TR(0x4793f7);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4793fd:{NFSU2_TR(0x4793fd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B479400:{NFSU2_TR(0x479400);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B479402:{NFSU2_TR(0x479402);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B479405:{NFSU2_TR(0x479405);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4794dd;}}
}
B47940b:L47940b:{c.instructions+=3;NFSU2_TR(0x47940b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B47940e:{NFSU2_TR(0x47940e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B479410:{NFSU2_TR(0x479410);
if(r1(R+518)){{goto L47943f;}}
}
B479412:L479412:{c.instructions+=3;NFSU2_TR(0x479412);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B479414:{NFSU2_TR(0x479414);
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
B479416:{NFSU2_TR(0x479416);
if(r1(R+518)){{goto L47941d;}}
}
B479418:L479418:{c.instructions+=1;NFSU2_TR(0x479418);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47941dull));
TAIL_STATIC(0x735550u,735);
}
B47941d:L47941d:{c.instructions+=3;NFSU2_TR(0x47941d);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B479421:{NFSU2_TR(0x479421);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B479422:{NFSU2_TR(0x479422);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x479427ull));
TAIL_STATIC(0x734df0u,734);
}
B479427:L479427:{c.instructions+=2;NFSU2_TR(0x479427);
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
B47942a:{NFSU2_TR(0x47942a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47942full));
TAIL_STATIC(0x734e40u,734);
}
B47942f:L47942f:{c.instructions+=5;NFSU2_TR(0x47942f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B479433:{NFSU2_TR(0x479433);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B479435:{NFSU2_TR(0x479435);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B479436:{NFSU2_TR(0x479436);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B479437:{NFSU2_TR(0x479437);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47943aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47943a:L47943a:{c.instructions+=1;NFSU2_TR(0x47943a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47943full));
TAIL_STATIC(0x734e60u,734);
}
B47943f:L47943f:{c.instructions+=3;NFSU2_TR(0x47943f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B479442:{NFSU2_TR(0x479442);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xecull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B47944c:{NFSU2_TR(0x47944c);
{goto L4794dd;}
}
B479451:L479451:{c.instructions+=4;NFSU2_TR(0x479451);
__builtin_memmove((R+0),gp(0x7ec858),4);
}
B479456:{NFSU2_TR(0x479456);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B479457:{NFSU2_TR(0x479457);
w4(R+4,u32(0x82c6e8ull));
}
B47945c:{NFSU2_TR(0x47945c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x479461ull));
TAIL_STATIC(0x576970u,576);
}
B479461:L479461:{c.instructions+=2;NFSU2_TR(0x479461);
w4(R+4,u32(0x82c6e8ull));
}
B479466:{NFSU2_TR(0x479466);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47946bull));
TAIL_STATIC(0x576910u,576);
}
B47946b:L47946b:{c.instructions+=4;NFSU2_TR(0x47946b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B479471:{NFSU2_TR(0x479471);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B479473:{NFSU2_TR(0x479473);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B479475:{NFSU2_TR(0x479475);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x479478ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B479478:L479478:{c.instructions+=3;NFSU2_TR(0x479478);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B47947a:{NFSU2_TR(0x47947a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47947d:{NFSU2_TR(0x47947d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L479483;}}
}
B47947f:L47947f:{c.instructions+=2;NFSU2_TR(0x47947f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B479481:{NFSU2_TR(0x479481);
{goto L47948f;}
}
B479483:L479483:{c.instructions+=2;NFSU2_TR(0x479483);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7fffull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B479488:{NFSU2_TR(0x479488);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L47948f;}}
}
B47948a:L47948a:{c.instructions+=1;NFSU2_TR(0x47948a);
w4(R+0,u32(0x7fffull));
}
B47948f:L47948f:{c.instructions+=5;NFSU2_TR(0x47948f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B479492:{NFSU2_TR(0x479492);
__builtin_memmove((R+0),gp(0x82c6f4),4);
}
B479497:{NFSU2_TR(0x479497);
w4(R+4,u32(0x7efffcull));
}
B47949c:{NFSU2_TR(0x47949c);
__builtin_memmove(gp(0x7f000c),(R+0),4);
}
B4794a1:{NFSU2_TR(0x4794a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4794a6ull));
TAIL_STATIC(0x4599e0u,459);
}
B4794a6:L4794a6:{c.instructions+=2;NFSU2_TR(0x4794a6);
{u32 ea_=u32(u32(8323088u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4794ac:{NFSU2_TR(0x4794ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4794b1ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4794b1:L4794b1:{c.instructions+=3;NFSU2_TR(0x4794b1);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4794b3:{NFSU2_TR(0x4794b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4794b6:{NFSU2_TR(0x4794b6);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4794bc;}}
}
B4794b8:L4794b8:{c.instructions+=2;NFSU2_TR(0x4794b8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4794ba:{NFSU2_TR(0x4794ba);
{goto L4794c8;}
}
B4794bc:L4794bc:{c.instructions+=2;NFSU2_TR(0x4794bc);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1fffull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x1fffull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4794c1:{NFSU2_TR(0x4794c1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4794c8;}}
}
B4794c3:L4794c3:{c.instructions+=1;NFSU2_TR(0x4794c3);
w4(R+0,u32(0x1fffull));
}
B4794c8:L4794c8:{c.instructions+=5;NFSU2_TR(0x4794c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4794cb:{NFSU2_TR(0x4794cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4794ce:{NFSU2_TR(0x4794ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4794d0:{NFSU2_TR(0x4794d0);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4794d2:{NFSU2_TR(0x4794d2);
if(r1(R+518)){{goto L4794dd;}}
}
B4794d4:L4794d4:{c.instructions+=3;NFSU2_TR(0x4794d4);
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
B4794d7:{NFSU2_TR(0x4794d7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4794d8:{NFSU2_TR(0x4794d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4794ddull));
TAIL_STATIC(0x735580u,735);
}
B4794dd:L4794dd:{c.instructions+=3;NFSU2_TR(0x4794dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4794e0:{NFSU2_TR(0x4794e0);
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
B4794e2:{NFSU2_TR(0x4794e2);
if(r1(R+518)){{goto L479583;}}
}
B4794e8:L4794e8:{c.instructions+=7;NFSU2_TR(0x4794e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4794eb:{NFSU2_TR(0x4794eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4794ee:{NFSU2_TR(0x4794ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x1000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4794f5:{NFSU2_TR(0x4794f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4794fb:{NFSU2_TR(0x4794fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4794fd:{NFSU2_TR(0x4794fd);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4794ff:{NFSU2_TR(0x4794ff);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x479502ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B479502:L479502:{c.instructions+=3;NFSU2_TR(0x479502);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B479504:{NFSU2_TR(0x479504);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B479507:{NFSU2_TR(0x479507);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L47950d;}}
}
B479509:L479509:{c.instructions+=2;NFSU2_TR(0x479509);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B47950b:{NFSU2_TR(0x47950b);
{goto L479519;}
}
B47950d:L47950d:{c.instructions+=2;NFSU2_TR(0x47950d);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7fffull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B479512:{NFSU2_TR(0x479512);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L479519;}}
}
B479514:L479514:{c.instructions+=1;NFSU2_TR(0x479514);
w4(R+0,u32(0x7fffull));
}
B479519:L479519:{c.instructions+=5;NFSU2_TR(0x479519);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47951c:{NFSU2_TR(0x47951c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47951f:{NFSU2_TR(0x47951f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B479521:{NFSU2_TR(0x479521);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B479523:{NFSU2_TR(0x479523);
if(r1(R+518)){{goto L47952e;}}
}
B479525:L479525:{c.instructions+=3;NFSU2_TR(0x479525);
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
B479528:{NFSU2_TR(0x479528);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B479529:{NFSU2_TR(0x479529);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47952eull));
TAIL_STATIC(0x735580u,735);
}
B47952e:L47952e:{c.instructions+=5;NFSU2_TR(0x47952e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B479531:{NFSU2_TR(0x479531);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B479533:{NFSU2_TR(0x479533);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B479535:{NFSU2_TR(0x479535);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B479539:{NFSU2_TR(0x479539);
if(r1(R+518)){{goto L47954c;}}
}
B47953b:L47953b:{c.instructions+=3;NFSU2_TR(0x47953b);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B47953f:{NFSU2_TR(0x47953f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B479540:{NFSU2_TR(0x479540);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x479545ull));
TAIL_STATIC(0x735070u,735);
}
B479545:L479545:{c.instructions+=2;NFSU2_TR(0x479545);
u8 U[22];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
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
B47954a:{NFSU2_TR(0x47954a);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L479583;}}
}
B47954c:L47954c:{c.instructions+=3;NFSU2_TR(0x47954c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B47954f:{NFSU2_TR(0x47954f);
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
B479551:{NFSU2_TR(0x479551);
if(r1(R+518)){{goto L479580;}}
}
B479553:L479553:{c.instructions+=3;NFSU2_TR(0x479553);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B479555:{NFSU2_TR(0x479555);
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
B479557:{NFSU2_TR(0x479557);
if(r1(R+518)){{goto L47955e;}}
}
B479559:L479559:{c.instructions+=1;NFSU2_TR(0x479559);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47955eull));
TAIL_STATIC(0x735550u,735);
}
B47955e:L47955e:{c.instructions+=3;NFSU2_TR(0x47955e);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B479562:{NFSU2_TR(0x479562);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B479563:{NFSU2_TR(0x479563);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x479568ull));
TAIL_STATIC(0x734df0u,734);
}
B479568:L479568:{c.instructions+=2;NFSU2_TR(0x479568);
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
B47956b:{NFSU2_TR(0x47956b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x479570ull));
TAIL_STATIC(0x734e40u,734);
}
B479570:L479570:{c.instructions+=5;NFSU2_TR(0x479570);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B479574:{NFSU2_TR(0x479574);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B479576:{NFSU2_TR(0x479576);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B479577:{NFSU2_TR(0x479577);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B479578:{NFSU2_TR(0x479578);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47957bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47957b:L47957b:{c.instructions+=1;NFSU2_TR(0x47957b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x479580ull));
TAIL_STATIC(0x734e60u,734);
}
B479580:L479580:{c.instructions+=1;NFSU2_TR(0x479580);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B479583:L479583:{c.instructions+=5;NFSU2_TR(0x479583);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B479584:{NFSU2_TR(0x479584);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B479585:{NFSU2_TR(0x479585);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B479586:{NFSU2_TR(0x479586);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B479587:{NFSU2_TR(0x479587);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B479590:L479590:{c.instructions+=5;NFSU2_TR(0x479590);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B479591:{NFSU2_TR(0x479591);
__builtin_memmove((R+24),(R+4),4);
}
B479593:{NFSU2_TR(0x479593);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B479596:{NFSU2_TR(0x479596);
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
B479598:{NFSU2_TR(0x479598);
if(r1(R+518)){{goto L4795c3;}}
}
B47959a:L47959a:{c.instructions+=3;NFSU2_TR(0x47959a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B47959c:{NFSU2_TR(0x47959c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47959d:{NFSU2_TR(0x47959d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4795a0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4795a0:L4795a0:{c.instructions+=4;NFSU2_TR(0x4795a0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4795a4:{NFSU2_TR(0x4795a4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4795a5:{NFSU2_TR(0x4795a5);
__builtin_memmove((R+4),(R+24),4);
}
B4795a7:{NFSU2_TR(0x4795a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4795acull));
TAIL_STATIC(0x464c10u,464);
}
B4795ac:L4795ac:{c.instructions+=5;NFSU2_TR(0x4795ac);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4795ad:{NFSU2_TR(0x4795ad);
__builtin_memmove((R+4),(R+24),4);
}
B4795af:{NFSU2_TR(0x4795af);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4795b6:{NFSU2_TR(0x4795b6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4795bd:{NFSU2_TR(0x4795bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4795c2ull));
TAIL_STATIC(0x469a10u,469);
}
B4795c2:L4795c2:{c.instructions+=1;NFSU2_TR(0x4795c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4795c3:L4795c3:{c.instructions+=2;NFSU2_TR(0x4795c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4795c4:{NFSU2_TR(0x4795c4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4795d0:L4795d0:{c.instructions+=19;NFSU2_TR(0x4795d0);
__builtin_memmove((R+0),(R+4),4);
}
B4795d2:{NFSU2_TR(0x4795d2);
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
B4795d4:{NFSU2_TR(0x4795d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4795d7:{NFSU2_TR(0x4795d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4795da:{NFSU2_TR(0x4795da);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4795dd:{NFSU2_TR(0x4795dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4795e0:{NFSU2_TR(0x4795e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4795e3:{NFSU2_TR(0x4795e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4795e6:{NFSU2_TR(0x4795e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4795e9:{NFSU2_TR(0x4795e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4795ec:{NFSU2_TR(0x4795ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4795ef:{NFSU2_TR(0x4795ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4795f2:{NFSU2_TR(0x4795f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4795f5:{NFSU2_TR(0x4795f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4795f8:{NFSU2_TR(0x4795f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4795fb:{NFSU2_TR(0x4795fb);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4795fe:{NFSU2_TR(0x4795fe);
u8 U[4];
w4(U+0,u32(0x78ba78ull));
s4(u32(r4(R+0)),r4(U+0));
}
B479604:{NFSU2_TR(0x479604);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B479607:{NFSU2_TR(0x479607);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B479610:L479610:{c.instructions+=5;NFSU2_TR(0x479610);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B479611:{NFSU2_TR(0x479611);
__builtin_memmove((R+24),(R+4),4);
}
B479613:{NFSU2_TR(0x479613);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B479616:{NFSU2_TR(0x479616);
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
B479618:{NFSU2_TR(0x479618);
if(r1(R+518)){{goto L479658;}}
}
B47961a:L47961a:{c.instructions+=2;NFSU2_TR(0x47961a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B47961c:{NFSU2_TR(0x47961c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47961full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47961f:L47961f:{c.instructions+=4;NFSU2_TR(0x47961f);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B479623:{NFSU2_TR(0x479623);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B479624:{NFSU2_TR(0x479624);
__builtin_memmove((R+4),(R+24),4);
}
B479626:{NFSU2_TR(0x479626);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47962bull));
TAIL_STATIC(0x464c10u,464);
}
B47962b:L47962b:{c.instructions+=4;NFSU2_TR(0x47962b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47962e:{NFSU2_TR(0x47962e);
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
B479630:{NFSU2_TR(0x479630);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B479637:{NFSU2_TR(0x479637);
if(r1(R+518)){{goto L479658;}}
}
B479639:L479639:{c.instructions+=3;NFSU2_TR(0x479639);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B47963f:{NFSU2_TR(0x47963f);
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
B479641:{NFSU2_TR(0x479641);
if(r1(R+518)){{goto L47964a;}}
}
B479643:L479643:{c.instructions+=1;NFSU2_TR(0x479643);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf1ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B47964a:L47964a:{c.instructions+=3;NFSU2_TR(0x47964a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B47964c:{NFSU2_TR(0x47964c);
__builtin_memmove((R+4),(R+24),4);
}
B47964e:{NFSU2_TR(0x47964e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x479651ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B479651:L479651:{c.instructions+=3;NFSU2_TR(0x479651);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B479653:{NFSU2_TR(0x479653);
__builtin_memmove((R+4),(R+24),4);
}
B479655:{NFSU2_TR(0x479655);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x479658ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B479658:L479658:{c.instructions+=2;NFSU2_TR(0x479658);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B479659:{NFSU2_TR(0x479659);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B479660:L479660:{c.instructions+=31;NFSU2_TR(0x479660);
__builtin_memmove((R+0),(R+4),4);
}
B479662:{NFSU2_TR(0x479662);
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
B479664:{NFSU2_TR(0x479664);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B479667:{NFSU2_TR(0x479667);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47966a:{NFSU2_TR(0x47966a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47966d:{NFSU2_TR(0x47966d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B479670:{NFSU2_TR(0x479670);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B479673:{NFSU2_TR(0x479673);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B479676:{NFSU2_TR(0x479676);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B479679:{NFSU2_TR(0x479679);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47967c:{NFSU2_TR(0x47967c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47967f:{NFSU2_TR(0x47967f);
u8 U[4];
w4(U+0,u32(0x78baa8ull));
s4(u32(r4(R+0)),r4(U+0));
}
B479685:{NFSU2_TR(0x479685);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B479688:{NFSU2_TR(0x479688);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47968b:{NFSU2_TR(0x47968b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47968e:{NFSU2_TR(0x47968e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B479691:{NFSU2_TR(0x479691);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B479697:{NFSU2_TR(0x479697);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47969a:{NFSU2_TR(0x47969a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47969d:{NFSU2_TR(0x47969d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
w4(U+4,u32(0x7f0de0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4796a7:{NFSU2_TR(0x4796a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x88ull))));
w4(U+4,u32(0x7f2230ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4796b1:{NFSU2_TR(0x4796b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4796b7:{NFSU2_TR(0x4796b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4796ba:{NFSU2_TR(0x4796ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4796bd:{NFSU2_TR(0x4796bd);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4796c3:{NFSU2_TR(0x4796c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4796c9:{NFSU2_TR(0x4796c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4796cf:{NFSU2_TR(0x4796cf);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4796d5:{NFSU2_TR(0x4796d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4796db:{NFSU2_TR(0x4796db);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4796e1:{NFSU2_TR(0x4796e1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4796f0:L4796f0:{c.instructions+=2;NFSU2_TR(0x4796f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4796f3:{NFSU2_TR(0x4796f3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B479700:L479700:{c.instructions+=2;NFSU2_TR(0x479700);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B479706:{NFSU2_TR(0x479706);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B479710:L479710:{c.instructions+=12;NFSU2_TR(0x479710);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B479712:{NFSU2_TR(0x479712);
u8 U[4];
w4(U+0,u32(0x7725c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B479717:{NFSU2_TR(0x479717);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47971d:{NFSU2_TR(0x47971d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47971e:{NFSU2_TR(0x47971e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B479725:{NFSU2_TR(0x479725);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B479726:{NFSU2_TR(0x479726);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B479727:{NFSU2_TR(0x479727);
__builtin_memmove((R+24),(R+4),4);
}
B479729:{NFSU2_TR(0x479729);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47972d:{NFSU2_TR(0x47972d);
u8 U[4];
w4(U+0,u32(0x78baa8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B479733:{NFSU2_TR(0x479733);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B47973b:{NFSU2_TR(0x47973b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x479740ull));
TAIL_STATIC(0x464c80u,464);
}
B479740:L479740:{c.instructions+=4;NFSU2_TR(0x479740);
u8 U[4];
w4(U+0,u32(0x78a588ull));
s4(u32(r4(R+24)),r4(U+0));
}
B479746:{NFSU2_TR(0x479746);
__builtin_memmove((R+4),(R+24),4);
}
B479748:{NFSU2_TR(0x479748);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B479750:{NFSU2_TR(0x479750);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x479755ull));
TAIL_STATIC(0x464c80u,464);
}
B479755:L479755:{c.instructions+=6;NFSU2_TR(0x479755);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B479759:{NFSU2_TR(0x479759);
u8 U[4];
w4(U+0,u32(0x789ce4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B47975f:{NFSU2_TR(0x47975f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B479760:{NFSU2_TR(0x479760);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B479767:{NFSU2_TR(0x479767);
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
B47976a:{NFSU2_TR(0x47976a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B479770:L479770:{c.instructions+=8;NFSU2_TR(0x479770);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B479774:{NFSU2_TR(0x479774);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B479775:{NFSU2_TR(0x479775);
__builtin_memmove((R+24),(R+4),4);
}
B479777:{NFSU2_TR(0x479777);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B479778:{NFSU2_TR(0x479778);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B47977b:{NFSU2_TR(0x47977b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47977c:{NFSU2_TR(0x47977c);
__builtin_memmove((R+4),(R+28),4);
}
B47977e:{NFSU2_TR(0x47977e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x479783ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x479130u);}goto L479130;}
}
B479783:L479783:{c.instructions+=3;NFSU2_TR(0x479783);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B479785:{NFSU2_TR(0x479785);
__builtin_memmove((R+4),(R+28),4);
}
B479787:{NFSU2_TR(0x479787);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47978cull));
TAIL_STATIC(0x43be80u,43b);
}
B47978c:L47978c:{c.instructions+=5;NFSU2_TR(0x47978c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47978f:{NFSU2_TR(0x47978f);
u8 U[14];
__builtin_memmove((U+6),gp(0x82b960),4);
w1(R+512,u8((r4(U+6))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+0)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B479795:{NFSU2_TR(0x479795);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B479796:{NFSU2_TR(0x479796);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B479797:{NFSU2_TR(0x479797);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L47979e;}}
}
B479799:L479799:{c.instructions+=1;NFSU2_TR(0x479799);
__builtin_memmove(gp(0x82b960),(R+0),4);
}
B47979e:L47979e:{c.instructions+=1;NFSU2_TR(0x47979e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4797b0:L4797b0:{c.instructions+=5;NFSU2_TR(0x4797b0);
__builtin_memmove((R+0),gp(0x7faaa8),4);
}
B4797b5:{NFSU2_TR(0x4797b5);
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
B4797b7:{NFSU2_TR(0x4797b7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4797b8:{NFSU2_TR(0x4797b8);
__builtin_memmove((R+12),(R+4),4);
}
B4797ba:{NFSU2_TR(0x4797ba);
if(r1(R+518)){{goto L479871;}}
}
B4797c0:L4797c0:{c.instructions+=6;NFSU2_TR(0x4797c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4797c1:{NFSU2_TR(0x4797c1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4797c2:{NFSU2_TR(0x4797c2);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4797c5:{NFSU2_TR(0x4797c5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4797c7:{NFSU2_TR(0x4797c7);
__builtin_memmove((R+4),(R+28),4);
}
B4797c9:{NFSU2_TR(0x4797c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4797ceull));
TAIL_STATIC(0x43be80u,43b);
}
B4797ce:L4797ce:{c.instructions+=3;NFSU2_TR(0x4797ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4797d0:{NFSU2_TR(0x4797d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4797d2:{NFSU2_TR(0x4797d2);
if(r1(R+518)){{goto L4797d9;}}
}
B4797d4:L4797d4:{c.instructions+=2;NFSU2_TR(0x4797d4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4797d7:{NFSU2_TR(0x4797d7);
{goto L4797db;}
}
B4797d9:L4797d9:{c.instructions+=1;NFSU2_TR(0x4797d9);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4797db:L4797db:{c.instructions+=2;NFSU2_TR(0x4797db);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4797df:{NFSU2_TR(0x4797df);
}
B4797e0:L4797e0:{c.instructions+=2;NFSU2_TR(0x4797e0);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4797e2:{NFSU2_TR(0x4797e2);
if(r1(R+518)){{goto L4797e9;}}
}
B4797e4:L4797e4:{c.instructions+=2;NFSU2_TR(0x4797e4);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4797e7:{NFSU2_TR(0x4797e7);
{goto L4797eb;}
}
B4797e9:L4797e9:{c.instructions+=1;NFSU2_TR(0x4797e9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4797eb:L4797eb:{c.instructions+=2;NFSU2_TR(0x4797eb);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B4797ed:{NFSU2_TR(0x4797ed);
if(r1(R+518)){{goto L47986f;}}
}
B4797f3:L4797f3:{c.instructions+=2;NFSU2_TR(0x4797f3);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4797f6:{NFSU2_TR(0x4797f6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L479802;}}
}
B4797f8:L4797f8:{c.instructions+=3;NFSU2_TR(0x4797f8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x135ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4797fe:{NFSU2_TR(0x4797fe);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B479800:{NFSU2_TR(0x479800);
if(r1(R+518)){{goto L479812;}}
}
B479802:L479802:{c.instructions+=3;NFSU2_TR(0x479802);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B479805:{NFSU2_TR(0x479805);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B479807:{NFSU2_TR(0x479807);
if(r1(R+518)){{goto L47980e;}}
}
B479809:L479809:{c.instructions+=2;NFSU2_TR(0x479809);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffff0ull))));
}
B47980c:{NFSU2_TR(0x47980c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4797e0u);}goto L4797e0;}
}
B47980e:L47980e:{c.instructions+=2;NFSU2_TR(0x47980e);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B479810:{NFSU2_TR(0x479810);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4797e0u);}goto L4797e0;}
}
B479812:L479812:{c.instructions+=3;NFSU2_TR(0x479812);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B479815:{NFSU2_TR(0x479815);
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
B479817:{NFSU2_TR(0x479817);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L479821;}}
}
B479819:L479819:{c.instructions+=4;NFSU2_TR(0x479819);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B47981b:{NFSU2_TR(0x47981b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47981c:{NFSU2_TR(0x47981c);
__builtin_memmove((R+4),(R+24),4);
}
B47981e:{NFSU2_TR(0x47981e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x479821ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B479821:L479821:{c.instructions+=3;NFSU2_TR(0x479821);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x132ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B479827:{NFSU2_TR(0x479827);
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
B479829:{NFSU2_TR(0x479829);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47986f;}}
}
B47982b:L47982b:{c.instructions+=3;NFSU2_TR(0x47982b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x135ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B479831:{NFSU2_TR(0x479831);
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
B479833:{NFSU2_TR(0x479833);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47986f;}}
}
B479835:L479835:{c.instructions+=3;NFSU2_TR(0x479835);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x133ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B47983b:{NFSU2_TR(0x47983b);
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
B47983d:{NFSU2_TR(0x47983d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47986f;}}
}
B47983f:L47983f:{c.instructions+=5;NFSU2_TR(0x47983f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B479840:{NFSU2_TR(0x479840);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B479843:{NFSU2_TR(0x479843);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B479844:{NFSU2_TR(0x479844);
__builtin_memmove((R+4),(R+12),4);
}
B479846:{NFSU2_TR(0x479846);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47984bull));
TAIL_STATIC(0x469db0u,469);
}
B47984b:L47984b:{c.instructions+=2;NFSU2_TR(0x47984b);
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
B47984d:{NFSU2_TR(0x47984d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47986f;}}
}
B47984f:L47984f:{c.instructions+=3;NFSU2_TR(0x47984f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B479851:{NFSU2_TR(0x479851);
__builtin_memmove((R+4),(R+24),4);
}
B479853:{NFSU2_TR(0x479853);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x479856ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B479856:L479856:{c.instructions+=2;NFSU2_TR(0x479856);
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
B479858:{NFSU2_TR(0x479858);
if(r1(R+518)){{goto L479868;}}
}
B47985a:L47985a:{c.instructions+=3;NFSU2_TR(0x47985a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47985b:{NFSU2_TR(0x47985b);
__builtin_memmove((R+4),(R+12),4);
}
B47985d:{NFSU2_TR(0x47985d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x479862ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x479770u);}goto L479770;}
}
B479862:L479862:{c.instructions+=4;NFSU2_TR(0x479862);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B479863:{NFSU2_TR(0x479863);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B479864:{NFSU2_TR(0x479864);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B479865:{NFSU2_TR(0x479865);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B479868:L479868:{c.instructions+=3;NFSU2_TR(0x479868);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B47986a:{NFSU2_TR(0x47986a);
__builtin_memmove((R+4),(R+24),4);
}
B47986c:{NFSU2_TR(0x47986c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47986full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47986f:L47986f:{c.instructions+=2;NFSU2_TR(0x47986f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B479870:{NFSU2_TR(0x479870);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B479871:L479871:{c.instructions+=2;NFSU2_TR(0x479871);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B479872:{NFSU2_TR(0x479872);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B479880:L479880:{c.instructions+=14;NFSU2_TR(0x479880);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B479882:{NFSU2_TR(0x479882);
u8 U[4];
w4(U+0,u32(0x7725dbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B479887:{NFSU2_TR(0x479887);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47988d:{NFSU2_TR(0x47988d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47988e:{NFSU2_TR(0x47988e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B479895:{NFSU2_TR(0x479895);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B479896:{NFSU2_TR(0x479896);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B479897:{NFSU2_TR(0x479897);
__builtin_memmove((R+24),(R+4),4);
}
B479899:{NFSU2_TR(0x479899);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47989d:{NFSU2_TR(0x47989d);
u8 U[4];
w4(U+0,u32(0x78a760ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4798a3:{NFSU2_TR(0x4798a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4798a6:{NFSU2_TR(0x4798a6);
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
B4798a8:{NFSU2_TR(0x4798a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4798b0:{NFSU2_TR(0x4798b0);
if(r1(R+518)){{goto L4798b7;}}
}
B4798b2:L4798b2:{c.instructions+=2;NFSU2_TR(0x4798b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4798b4:{NFSU2_TR(0x4798b4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4798b7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4798b7:L4798b7:{c.instructions+=3;NFSU2_TR(0x4798b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4798bd:{NFSU2_TR(0x4798bd);
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
B4798bf:{NFSU2_TR(0x4798bf);
if(r1(R+518)){{goto L4798c7;}}
}
B4798c1:L4798c1:{c.instructions+=3;NFSU2_TR(0x4798c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4798c3:{NFSU2_TR(0x4798c3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4798c5:{NFSU2_TR(0x4798c5);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4798c7ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B4798c7:L4798c7:{c.instructions+=3;NFSU2_TR(0x4798c7);
__builtin_memmove((R+4),(R+24),4);
}
B4798c9:{NFSU2_TR(0x4798c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4798d3:{NFSU2_TR(0x4798d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4798d8ull));
TAIL_STATIC(0x46a400u,46a);
}
B4798d8:L4798d8:{c.instructions+=3;NFSU2_TR(0x4798d8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4798db:{NFSU2_TR(0x4798db);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4798e3:{NFSU2_TR(0x4798e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4798e8ull));
TAIL_STATIC(0x5768e0u,576);
}
B4798e8:L4798e8:{c.instructions+=5;NFSU2_TR(0x4798e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4798ec:{NFSU2_TR(0x4798ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4798ed:{NFSU2_TR(0x4798ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4798f4:{NFSU2_TR(0x4798f4);
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
B4798f7:{NFSU2_TR(0x4798f7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B479900:L479900:{c.instructions+=5;NFSU2_TR(0x479900);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B479901:{NFSU2_TR(0x479901);
__builtin_memmove((R+24),(R+4),4);
}
B479903:{NFSU2_TR(0x479903);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B479909:{NFSU2_TR(0x479909);
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
B47990b:{NFSU2_TR(0x47990b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L479966;}}
}
B47990d:L47990d:{c.instructions+=3;NFSU2_TR(0x47990d);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B479912:{NFSU2_TR(0x479912);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B479913:{NFSU2_TR(0x479913);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x479918ull));
TAIL_STATIC(0x43e910u,43e);
}
B479918:L479918:{c.instructions+=3;NFSU2_TR(0x479918);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B47991b:{NFSU2_TR(0x47991b);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x45cull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x45cull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B479920:{NFSU2_TR(0x479920);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L479950;}}
}
B479922:L479922:{c.instructions+=6;NFSU2_TR(0x479922);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B479928:{NFSU2_TR(0x479928);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B47992b:{NFSU2_TR(0x47992b);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B479931:{NFSU2_TR(0x479931);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B479932:{NFSU2_TR(0x479932);
u8 U[4];
w4(U+0,u32(0x5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B479934:{NFSU2_TR(0x479934);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x479939ull));
TAIL_STATIC(0x440820u,440);
}
B479939:L479939:{c.instructions+=3;NFSU2_TR(0x479939);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B47993c:{NFSU2_TR(0x47993c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47993e:{NFSU2_TR(0x47993e);
if(r1(R+518)){{goto L479950;}}
}
B479940:L479940:{c.instructions+=4;NFSU2_TR(0x479940);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B479946:{NFSU2_TR(0x479946);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B479947:{NFSU2_TR(0x479947);
__builtin_memmove((R+4),(R+0),4);
}
B479949:{NFSU2_TR(0x479949);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47994eull));
TAIL_STATIC(0x45b1f0u,45b);
}
B47994e:L47994e:{c.instructions+=1;NFSU2_TR(0x47994e);
{goto L479952;}
}
B479950:L479950:{c.instructions+=1;NFSU2_TR(0x479950);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B479952:L479952:{c.instructions+=5;NFSU2_TR(0x479952);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B479958:{NFSU2_TR(0x479958);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xbcull))));
}
B47995e:{NFSU2_TR(0x47995e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47995f:{NFSU2_TR(0x47995f);
__builtin_memmove((R+4),(R+0),4);
}
B479961:{NFSU2_TR(0x479961);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x479966ull));
TAIL_STATIC(0x46cdd0u,46c);
}
B479966:L479966:{c.instructions+=2;NFSU2_TR(0x479966);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B479967:{NFSU2_TR(0x479967);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B479970:L479970:{c.instructions+=5;NFSU2_TR(0x479970);
__builtin_memmove((R+0),gp(0x7faaa8),4);
}
B479975:{NFSU2_TR(0x479975);
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
B479977:{NFSU2_TR(0x479977);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B479978:{NFSU2_TR(0x479978);
__builtin_memmove((R+24),(R+4),4);
}
B47997a:{NFSU2_TR(0x47997a);
if(r1(R+518)){{goto L479a18;}}
}
B479980:L479980:{c.instructions+=3;NFSU2_TR(0x479980);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B479986:{NFSU2_TR(0x479986);
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
B479988:{NFSU2_TR(0x479988);
if(r1(R+518)){{goto L479a18;}}
}
B47998e:L47998e:{c.instructions+=12;NFSU2_TR(0x47998e);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B479991:{NFSU2_TR(0x479991);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B479994:{NFSU2_TR(0x479994);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B479997:{NFSU2_TR(0x479997);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47999b:{NFSU2_TR(0x47999b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47999c:{NFSU2_TR(0x47999c);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B47999e:{NFSU2_TR(0x47999e);
{u32 ea_=u32(r4(R+24)+u32(260u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4799a4:{NFSU2_TR(0x4799a4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4799a5:{NFSU2_TR(0x4799a5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4799a8:{NFSU2_TR(0x4799a8);
{u32 ea_=u32(r4(R+24)+u32(264u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4799ae:{NFSU2_TR(0x4799ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4799b4:{NFSU2_TR(0x4799b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4799b9ull));
TAIL_STATIC(0x46b100u,46b);
}
B4799b9:L4799b9:{c.instructions+=9;NFSU2_TR(0x4799b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4799bf:{NFSU2_TR(0x4799bf);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xffffull))));
}
B4799c5:{NFSU2_TR(0x4799c5);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4799c9:{NFSU2_TR(0x4799c9);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4799cd:{NFSU2_TR(0x4799cd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4799ce:{NFSU2_TR(0x4799ce);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4799d1:{NFSU2_TR(0x4799d1);
__builtin_memmove((R+4),(R+28),4);
}
B4799d3:{NFSU2_TR(0x4799d3);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4799d6:{NFSU2_TR(0x4799d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4799dbull));
TAIL_STATIC(0x576970u,576);
}
B4799db:L4799db:{c.instructions+=3;NFSU2_TR(0x4799db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4799dd:{NFSU2_TR(0x4799dd);
__builtin_memmove((R+4),(R+28),4);
}
B4799df:{NFSU2_TR(0x4799df);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4799e2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4799e2:L4799e2:{c.instructions+=3;NFSU2_TR(0x4799e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4799e4:{NFSU2_TR(0x4799e4);
__builtin_memmove((R+4),(R+24),4);
}
B4799e6:{NFSU2_TR(0x4799e6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4799e9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4799e9:L4799e9:{c.instructions+=6;NFSU2_TR(0x4799e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4799ec:{NFSU2_TR(0x4799ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4799f2:{NFSU2_TR(0x4799f2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4799f8:{NFSU2_TR(0x4799f8);
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
B4799fa:{NFSU2_TR(0x4799fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4799fb:{NFSU2_TR(0x4799fb);
if(r1(R+518)){{goto L479a11;}}
}
B4799fd:L4799fd:{c.instructions+=3;NFSU2_TR(0x4799fd);
{u32 ea_=u32(r4(R+24)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B479a00:{NFSU2_TR(0x479a00);
{u32 ea_=u32(r4(R+24)+u32(212u));__asm__ volatile(".byte 0xda,0x08"::"a"(ea_):"memory");}
}
B479a06:{NFSU2_TR(0x479a06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x479a0bull));
TAIL_STATIC(0x75bed4u,75b);
}
B479a0b:L479a0b:{c.instructions+=1;NFSU2_TR(0x479a0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B479a11:L479a11:{c.instructions+=3;NFSU2_TR(0x479a11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B479a13:{NFSU2_TR(0x479a13);
__builtin_memmove((R+4),(R+24),4);
}
B479a15:{NFSU2_TR(0x479a15);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x479a18ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B479a18:L479a18:{c.instructions+=2;NFSU2_TR(0x479a18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B479a19:{NFSU2_TR(0x479a19);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B479a20:L479a20:{c.instructions+=11;NFSU2_TR(0x479a20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B479a23:{NFSU2_TR(0x479a23);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B479a24:{NFSU2_TR(0x479a24);
__builtin_memmove((R+12),(R+4),4);
}
B479a26:{NFSU2_TR(0x479a26);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B479a29:{NFSU2_TR(0x479a29);
{u32 ea_=u32(r4(R+0)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B479a2c:{NFSU2_TR(0x479a2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B479a32:{NFSU2_TR(0x479a32);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B479a33:{NFSU2_TR(0x479a33);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B479a39:{NFSU2_TR(0x479a39);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B479a3a:{NFSU2_TR(0x479a3a);
w4(R+4,u32(0x7ull));
}
B479a3f:{NFSU2_TR(0x479a3f);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B479a43:L479a43:{c.instructions+=1;NFSU2_TR(0x479a43);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L479a45;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x479a43u);}goto L479a43;}
}
B479a45:L479a45:{c.instructions+=13;NFSU2_TR(0x479a45);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B479a49:{NFSU2_TR(0x479a49);
{u32 ea_=u32((r4(R+0)*4u)+u32(7898356u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B479a50:{NFSU2_TR(0x479a50);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B479a54:{NFSU2_TR(0x479a54);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B479a58:{NFSU2_TR(0x479a58);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B479a5c:{NFSU2_TR(0x479a5c);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B479a60:{NFSU2_TR(0x479a60);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B479a64:{NFSU2_TR(0x479a64);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B479a68:{NFSU2_TR(0x479a68);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B479a6a:{NFSU2_TR(0x479a6a);
{u32 ea_=u32(u32(7894420u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B479a70:{NFSU2_TR(0x479a70);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B479a72:{NFSU2_TR(0x479a72);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B479a75:{NFSU2_TR(0x479a75);
if(r1(R+514)){{goto L479a85;}}
}
B479a77:L479a77:{c.instructions+=3;NFSU2_TR(0x479a77);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B479a7b:{NFSU2_TR(0x479a7b);
{u32 ea_=u32(u32(7894420u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B479a81:{NFSU2_TR(0x479a81);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B479a85:L479a85:{c.instructions+=5;NFSU2_TR(0x479a85);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B479a89:{NFSU2_TR(0x479a89);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B479a8d:{NFSU2_TR(0x479a8d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B479a91:{NFSU2_TR(0x479a91);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B479a95:{NFSU2_TR(0x479a95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x479a9aull));
TAIL_STATIC(0x4599e0u,459);
}
B479a9a:L479a9a:{c.instructions+=3;NFSU2_TR(0x479a9a);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B479a9e:{NFSU2_TR(0x479a9e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B479aa0:{NFSU2_TR(0x479aa0);
if(r1(R+518)){{goto L479aab;}}
}
B479aa2:L479aa2:{c.instructions+=2;NFSU2_TR(0x479aa2);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B479aa6:{NFSU2_TR(0x479aa6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x479aabull));
TAIL_STATIC(0x4599e0u,459);
}
B479aab:L479aab:{c.instructions+=3;NFSU2_TR(0x479aab);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B479aaf:{NFSU2_TR(0x479aaf);
{u32 ea_=u32(u32(7909636u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B479ab5:{NFSU2_TR(0x479ab5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x479abaull));
TAIL_STATIC(0x75bed4u,75b);
}
B479aba:L479aba:{c.instructions+=6;NFSU2_TR(0x479aba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B479abb:{NFSU2_TR(0x479abb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B479abc:{NFSU2_TR(0x479abc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B479abf:{NFSU2_TR(0x479abf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B479ac0:{NFSU2_TR(0x479ac0);
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
B479ac3:{NFSU2_TR(0x479ac3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B479ad0:L479ad0:{c.instructions+=5;NFSU2_TR(0x479ad0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B479ad1:{NFSU2_TR(0x479ad1);
__builtin_memmove((R+24),(R+4),4);
}
B479ad3:{NFSU2_TR(0x479ad3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x135ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B479ad9:{NFSU2_TR(0x479ad9);
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
B479adb:{NFSU2_TR(0x479adb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L479b1a;}}
}
B479add:L479add:{c.instructions+=3;NFSU2_TR(0x479add);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B479ae0:{NFSU2_TR(0x479ae0);
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
B479ae2:{NFSU2_TR(0x479ae2);
if(r1(R+518)){{goto L479b1a;}}
}
B479ae4:L479ae4:{c.instructions+=4;NFSU2_TR(0x479ae4);
{u32 ea_=u32(r4(R+0)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B479ae7:{NFSU2_TR(0x479ae7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B479aed:{NFSU2_TR(0x479aed);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B479af0:{NFSU2_TR(0x479af0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x479af5ull));
TAIL_STATIC(0x4599e0u,459);
}
B479af5:L479af5:{c.instructions+=4;NFSU2_TR(0x479af5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B479afb:{NFSU2_TR(0x479afb);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B479afe:{NFSU2_TR(0x479afe);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B479b00:{NFSU2_TR(0x479b00);
if(r1(R+518)){{goto L479b09;}}
}
B479b02:L479b02:{c.instructions+=2;NFSU2_TR(0x479b02);
__builtin_memmove((R+4),(R+8),4);
}
B479b04:{NFSU2_TR(0x479b04);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x479b09ull));
TAIL_STATIC(0x4599e0u,459);
}
B479b09:L479b09:{c.instructions+=3;NFSU2_TR(0x479b09);
{u32 ea_=u32(r4(R+8)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B479b0c:{NFSU2_TR(0x479b0c);
{u32 ea_=u32(u32(7909636u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B479b12:{NFSU2_TR(0x479b12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x479b17ull));
TAIL_STATIC(0x75bed4u,75b);
}
B479b17:L479b17:{c.instructions+=1;NFSU2_TR(0x479b17);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B479b1a:L479b1a:{c.instructions+=2;NFSU2_TR(0x479b1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B479b1b:{NFSU2_TR(0x479b1b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B479b20:L479b20:{c.instructions+=5;NFSU2_TR(0x479b20);
__builtin_memmove((R+0),gp(0x82b884),4);
}
B479b25:{NFSU2_TR(0x479b25);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B479b2b:{NFSU2_TR(0x479b2b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B479b2d:{NFSU2_TR(0x479b2d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B479b30:{NFSU2_TR(0x479b30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x479b35ull));
TAIL_STATIC(0x43be60u,43b);
}
B479b35:L479b35:{c.instructions+=2;NFSU2_TR(0x479b35);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B479b38:{NFSU2_TR(0x479b38);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B479b40:L479b40:{c.instructions+=5;NFSU2_TR(0x479b40);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B479b44:{NFSU2_TR(0x479b44);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B479b46:{NFSU2_TR(0x479b46);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B479b49:{NFSU2_TR(0x479b49);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B479b4a:{NFSU2_TR(0x479b4a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L479ff5;}}
}
B479b50:L479b50:{c.instructions+=4;NFSU2_TR(0x479b50);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x140ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B479b56:{NFSU2_TR(0x479b56);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B479b59:{NFSU2_TR(0x479b59);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x11ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x11ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x11ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B479b5c:{NFSU2_TR(0x479b5c);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L479f9b;}}
}
B479b62:L479b62:{c.instructions+=1;NFSU2_TR(0x479b62);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x47a4bcull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B479b69:L479b69:{c.instructions+=8;NFSU2_TR(0x479b69);
__builtin_memmove((R+0),gp(0x82cbd4),4);
}
B479b6e:{NFSU2_TR(0x479b6e);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B479b72:{NFSU2_TR(0x479b72);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B479b73:{NFSU2_TR(0x479b73);
w4(R+4,u32(0x3ull));
}
B479b78:{NFSU2_TR(0x479b78);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x479b78);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x479b78);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B479b7a:{NFSU2_TR(0x479b7a);
{u32 ea_=u32(u32(7912192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B479b80:{NFSU2_TR(0x479b80);
__builtin_memmove((R+24),(R+8),4);
}
B479b82:{NFSU2_TR(0x479b82);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x479b87ull));
TAIL_STATIC(0x75bed4u,75b);
}
B479b87:L479b87:{c.instructions+=2;NFSU2_TR(0x479b87);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B479b89:{NFSU2_TR(0x479b89);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L479b8f;}}
}
B479b8b:L479b8b:{c.instructions+=2;NFSU2_TR(0x479b8b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B479b8d:{NFSU2_TR(0x479b8d);
{goto L479b99;}
}
B479b8f:L479b8f:{c.instructions+=2;NFSU2_TR(0x479b8f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x13ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x13ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B479b92:{NFSU2_TR(0x479b92);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L479b99;}}
}
B479b94:L479b94:{c.instructions+=1;NFSU2_TR(0x479b94);
w4(R+0,u32(0x13ull));
}
B479b99:L479b99:{c.instructions+=3;NFSU2_TR(0x479b99);
{u32 ea_=u32((r4(R+0)*4u)+u32(8309624u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B479ba0:{NFSU2_TR(0x479ba0);
{u32 ea_=u32(u32(7886288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B479ba6:{NFSU2_TR(0x479ba6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x479babull));
TAIL_STATIC(0x75bed4u,75b);
}
B479bab:L479bab:{c.instructions+=7;NFSU2_TR(0x479bab);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B479bae:{NFSU2_TR(0x479bae);
__builtin_memmove((R+0),(R+24),4);
}
B479bb0:{NFSU2_TR(0x479bb0);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B479bb2:{NFSU2_TR(0x479bb2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xc7ull))));
}
B479bb7:{NFSU2_TR(0x479bb7);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B479bb8:{NFSU2_TR(0x479bb8);
__builtin_memmove(gp(0x82cbd4),(R+24),4);
}
B479bbe:{NFSU2_TR(0x479bbe);
TAIL_STATIC(0x47a49du,47a);
}
B479bc3:L479bc3:{c.instructions+=8;NFSU2_TR(0x479bc3);
__builtin_memmove((R+0),gp(0x82cbd0),4);
}
B479bc8:{NFSU2_TR(0x479bc8);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B479bcc:{NFSU2_TR(0x479bcc);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B479bcd:{NFSU2_TR(0x479bcd);
w4(R+4,u32(0x3ull));
}
B479bd2:{NFSU2_TR(0x479bd2);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x479bd2);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x479bd2);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B479bd4:{NFSU2_TR(0x479bd4);
{u32 ea_=u32(u32(7912192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B479bda:{NFSU2_TR(0x479bda);
__builtin_memmove((R+24),(R+8),4);
}
B479bdc:{NFSU2_TR(0x479bdc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x479be1ull));
TAIL_STATIC(0x75bed4u,75b);
}
B479be1:L479be1:{c.instructions+=2;NFSU2_TR(0x479be1);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B479be3:{NFSU2_TR(0x479be3);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L479be9;}}
}
B479be5:L479be5:{c.instructions+=2;NFSU2_TR(0x479be5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B479be7:{NFSU2_TR(0x479be7);
{goto L479bf3;}
}
B479be9:L479be9:{c.instructions+=2;NFSU2_TR(0x479be9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x13ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x13ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B479bec:{NFSU2_TR(0x479bec);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L479bf3;}}
}
B479bee:L479bee:{c.instructions+=1;NFSU2_TR(0x479bee);
w4(R+0,u32(0x13ull));
}
B479bf3:L479bf3:{c.instructions+=3;NFSU2_TR(0x479bf3);
{u32 ea_=u32((r4(R+0)*4u)+u32(8309624u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B479bfa:{NFSU2_TR(0x479bfa);
{u32 ea_=u32(u32(7886288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B479c00:{NFSU2_TR(0x479c00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x479c05ull));
TAIL_STATIC(0x75bed4u,75b);
}
B479c05:L479c05:{c.instructions+=7;NFSU2_TR(0x479c05);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B479c08:{NFSU2_TR(0x479c08);
__builtin_memmove((R+0),(R+24),4);
}
B479c0a:{NFSU2_TR(0x479c0a);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B479c0c:{NFSU2_TR(0x479c0c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8bull))));
}
B479c11:{NFSU2_TR(0x479c11);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B479c12:{NFSU2_TR(0x479c12);
__builtin_memmove(gp(0x82cbd0),(R+24),4);
}
B479c18:{NFSU2_TR(0x479c18);
TAIL_STATIC(0x47a49du,47a);
}
B479c1d:L479c1d:{c.instructions+=8;NFSU2_TR(0x479c1d);
__builtin_memmove((R+0),gp(0x82cbcc),4);
}
B479c22:{NFSU2_TR(0x479c22);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B479c26:{NFSU2_TR(0x479c26);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B479c27:{NFSU2_TR(0x479c27);
w4(R+4,u32(0x3ull));
}
B479c2c:{NFSU2_TR(0x479c2c);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x479c2c);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x479c2c);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B479c2e:{NFSU2_TR(0x479c2e);
{u32 ea_=u32(u32(7912192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B479c34:{NFSU2_TR(0x479c34);
__builtin_memmove((R+24),(R+8),4);
}
B479c36:{NFSU2_TR(0x479c36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x479c3bull));
TAIL_STATIC(0x75bed4u,75b);
}
B479c3b:L479c3b:{c.instructions+=2;NFSU2_TR(0x479c3b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B479c3d:{NFSU2_TR(0x479c3d);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L479c43;}}
}
B479c3f:L479c3f:{c.instructions+=2;NFSU2_TR(0x479c3f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B479c41:{NFSU2_TR(0x479c41);
{goto L479c4d;}
}
B479c43:L479c43:{c.instructions+=2;NFSU2_TR(0x479c43);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x13ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x13ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B479c46:{NFSU2_TR(0x479c46);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L479c4d;}}
}
B479c48:L479c48:{c.instructions+=1;NFSU2_TR(0x479c48);
w4(R+0,u32(0x13ull));
}
B479c4d:L479c4d:{c.instructions+=3;NFSU2_TR(0x479c4d);
{u32 ea_=u32((r4(R+0)*4u)+u32(8309624u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B479c54:{NFSU2_TR(0x479c54);
{u32 ea_=u32(u32(7886288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B479c5a:{NFSU2_TR(0x479c5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x479c5full));
TAIL_STATIC(0x75bed4u,75b);
}
B479c5f:L479c5f:{c.instructions+=7;NFSU2_TR(0x479c5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B479c62:{NFSU2_TR(0x479c62);
__builtin_memmove((R+0),(R+24),4);
}
B479c64:{NFSU2_TR(0x479c64);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B479c66:{NFSU2_TR(0x479c66);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x5eull))));
}
B479c69:{NFSU2_TR(0x479c69);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B479c6a:{NFSU2_TR(0x479c6a);
__builtin_memmove(gp(0x82cbcc),(R+24),4);
}
B479c70:{NFSU2_TR(0x479c70);
TAIL_STATIC(0x47a49du,47a);
}
B479c75:L479c75:{c.instructions+=8;NFSU2_TR(0x479c75);
__builtin_memmove((R+0),gp(0x82cbc8),4);
}
B479c7a:{NFSU2_TR(0x479c7a);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B479c7e:{NFSU2_TR(0x479c7e);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B479c7f:{NFSU2_TR(0x479c7f);
w4(R+4,u32(0x3ull));
}
B479c84:{NFSU2_TR(0x479c84);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x479c84);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x479c84);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B479c86:{NFSU2_TR(0x479c86);
{u32 ea_=u32(u32(7912192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B479c8c:{NFSU2_TR(0x479c8c);
__builtin_memmove((R+24),(R+8),4);
}
B479c8e:{NFSU2_TR(0x479c8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x479c93ull));
TAIL_STATIC(0x75bed4u,75b);
}
B479c93:L479c93:{c.instructions+=2;NFSU2_TR(0x479c93);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B479c95:{NFSU2_TR(0x479c95);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L479c9b;}}
}
B479c97:L479c97:{c.instructions+=2;NFSU2_TR(0x479c97);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B479c99:{NFSU2_TR(0x479c99);
{goto L479ca5;}
}
B479c9b:L479c9b:{c.instructions+=2;NFSU2_TR(0x479c9b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x13ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x13ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B479c9e:{NFSU2_TR(0x479c9e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L479ca5;}}
}
B479ca0:L479ca0:{c.instructions+=1;NFSU2_TR(0x479ca0);
w4(R+0,u32(0x13ull));
}
B479ca5:L479ca5:{c.instructions+=3;NFSU2_TR(0x479ca5);
{u32 ea_=u32((r4(R+0)*4u)+u32(8309624u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B479cac:{NFSU2_TR(0x479cac);
{u32 ea_=u32(u32(7886288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B479cb2:{NFSU2_TR(0x479cb2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x479cb7ull));
TAIL_STATIC(0x75bed4u,75b);
}
B479cb7:L479cb7:{c.instructions+=7;NFSU2_TR(0x479cb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B479cba:{NFSU2_TR(0x479cba);
__builtin_memmove((R+0),(R+24),4);
}
B479cbc:{NFSU2_TR(0x479cbc);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B479cbe:{NFSU2_TR(0x479cbe);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x103ull))));
}
B479cc3:{NFSU2_TR(0x479cc3);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B479cc4:{NFSU2_TR(0x479cc4);
__builtin_memmove(gp(0x82cbc8),(R+24),4);
}
B479cca:{NFSU2_TR(0x479cca);
TAIL_STATIC(0x47a49du,47a);
}
B479ccf:L479ccf:{c.instructions+=8;NFSU2_TR(0x479ccf);
__builtin_memmove((R+0),gp(0x82cbc4),4);
}
B479cd4:{NFSU2_TR(0x479cd4);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B479cd8:{NFSU2_TR(0x479cd8);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B479cd9:{NFSU2_TR(0x479cd9);
w4(R+4,u32(0x3ull));
}
B479cde:{NFSU2_TR(0x479cde);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x479cde);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x479cde);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B479ce0:{NFSU2_TR(0x479ce0);
{u32 ea_=u32(u32(7912192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B479ce6:{NFSU2_TR(0x479ce6);
__builtin_memmove((R+24),(R+8),4);
}
B479ce8:{NFSU2_TR(0x479ce8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x479cedull));
TAIL_STATIC(0x75bed4u,75b);
}
B479ced:L479ced:{c.instructions+=2;NFSU2_TR(0x479ced);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B479cef:{NFSU2_TR(0x479cef);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L479cf5;}}
}
B479cf1:L479cf1:{c.instructions+=2;NFSU2_TR(0x479cf1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B479cf3:{NFSU2_TR(0x479cf3);
{goto L479cff;}
}
B479cf5:L479cf5:{c.instructions+=2;NFSU2_TR(0x479cf5);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x13ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x13ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B479cf8:{NFSU2_TR(0x479cf8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L479cff;}}
}
B479cfa:L479cfa:{c.instructions+=1;NFSU2_TR(0x479cfa);
w4(R+0,u32(0x13ull));
}
B479cff:L479cff:{c.instructions+=3;NFSU2_TR(0x479cff);
{u32 ea_=u32((r4(R+0)*4u)+u32(8309624u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B479d06:{NFSU2_TR(0x479d06);
{u32 ea_=u32(u32(7886288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B479d0c:{NFSU2_TR(0x479d0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x479d11ull));
TAIL_STATIC(0x75bed4u,75b);
}
B479d11:L479d11:{c.instructions+=7;NFSU2_TR(0x479d11);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B479d14:{NFSU2_TR(0x479d14);
__builtin_memmove((R+0),(R+24),4);
}
B479d16:{NFSU2_TR(0x479d16);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B479d18:{NFSU2_TR(0x479d18);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xe5ull))));
}
B479d1d:{NFSU2_TR(0x479d1d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B479d1e:{NFSU2_TR(0x479d1e);
__builtin_memmove(gp(0x82cbc4),(R+24),4);
}
B479d24:{NFSU2_TR(0x479d24);
TAIL_STATIC(0x47a49du,47a);
}
B479d29:L479d29:{c.instructions+=8;NFSU2_TR(0x479d29);
__builtin_memmove((R+0),gp(0x82cbc0),4);
}
B479d2e:{NFSU2_TR(0x479d2e);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B479d32:{NFSU2_TR(0x479d32);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B479d33:{NFSU2_TR(0x479d33);
w4(R+4,u32(0x3ull));
}
B479d38:{NFSU2_TR(0x479d38);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x479d38);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x479d38);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B479d3a:{NFSU2_TR(0x479d3a);
{u32 ea_=u32(u32(7912192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B479d40:{NFSU2_TR(0x479d40);
__builtin_memmove((R+24),(R+8),4);
}
B479d42:{NFSU2_TR(0x479d42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x479d47ull));
TAIL_STATIC(0x75bed4u,75b);
}
B479d47:L479d47:{c.instructions+=2;NFSU2_TR(0x479d47);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B479d49:{NFSU2_TR(0x479d49);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L479d4f;}}
}
B479d4b:L479d4b:{c.instructions+=2;NFSU2_TR(0x479d4b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B479d4d:{NFSU2_TR(0x479d4d);
{goto L479d59;}
}
B479d4f:L479d4f:{c.instructions+=2;NFSU2_TR(0x479d4f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x13ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x13ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B479d52:{NFSU2_TR(0x479d52);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L479d59;}}
}
B479d54:L479d54:{c.instructions+=1;NFSU2_TR(0x479d54);
w4(R+0,u32(0x13ull));
}
B479d59:L479d59:{c.instructions+=3;NFSU2_TR(0x479d59);
{u32 ea_=u32((r4(R+0)*4u)+u32(8309624u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B479d60:{NFSU2_TR(0x479d60);
{u32 ea_=u32(u32(7886288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B479d66:{NFSU2_TR(0x479d66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x479d6bull));
TAIL_STATIC(0x75bed4u,75b);
}
B479d6b:L479d6b:{c.instructions+=7;NFSU2_TR(0x479d6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B479d6e:{NFSU2_TR(0x479d6e);
__builtin_memmove((R+0),(R+24),4);
}
B479d70:{NFSU2_TR(0x479d70);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B479d72:{NFSU2_TR(0x479d72);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xf4ull))));
}
B479d77:{NFSU2_TR(0x479d77);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B479d78:{NFSU2_TR(0x479d78);
__builtin_memmove(gp(0x82cbc0),(R+24),4);
}
B479d7e:{NFSU2_TR(0x479d7e);
TAIL_STATIC(0x47a49du,47a);
}
B479d83:L479d83:{c.instructions+=8;NFSU2_TR(0x479d83);
__builtin_memmove((R+0),gp(0x82cbbc),4);
}
B479d88:{NFSU2_TR(0x479d88);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B479d8c:{NFSU2_TR(0x479d8c);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B479d8d:{NFSU2_TR(0x479d8d);
w4(R+4,u32(0x3ull));
}
B479d92:{NFSU2_TR(0x479d92);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x479d92);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x479d92);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B479d94:{NFSU2_TR(0x479d94);
{u32 ea_=u32(u32(7912192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B479d9a:{NFSU2_TR(0x479d9a);
__builtin_memmove((R+24),(R+8),4);
}
B479d9c:{NFSU2_TR(0x479d9c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x479da1ull));
TAIL_STATIC(0x75bed4u,75b);
}
B479da1:L479da1:{c.instructions+=2;NFSU2_TR(0x479da1);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B479da3:{NFSU2_TR(0x479da3);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L479da9;}}
}
B479da5:L479da5:{c.instructions+=2;NFSU2_TR(0x479da5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B479da7:{NFSU2_TR(0x479da7);
{goto L479db3;}
}
B479da9:L479da9:{c.instructions+=2;NFSU2_TR(0x479da9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x13ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x13ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B479dac:{NFSU2_TR(0x479dac);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L479db3;}}
}
B479dae:L479dae:{c.instructions+=1;NFSU2_TR(0x479dae);
w4(R+0,u32(0x13ull));
}
B479db3:L479db3:{c.instructions+=3;NFSU2_TR(0x479db3);
{u32 ea_=u32((r4(R+0)*4u)+u32(8309624u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B479dba:{NFSU2_TR(0x479dba);
{u32 ea_=u32(u32(7886288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B479dc0:{NFSU2_TR(0x479dc0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x479dc5ull));
TAIL_STATIC(0x75bed4u,75b);
}
B479dc5:L479dc5:{c.instructions+=7;NFSU2_TR(0x479dc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B479dc8:{NFSU2_TR(0x479dc8);
__builtin_memmove((R+0),(R+24),4);
}
B479dca:{NFSU2_TR(0x479dca);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B479dcc:{NFSU2_TR(0x479dcc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x9aull))));
}
B479dd1:{NFSU2_TR(0x479dd1);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B479dd2:{NFSU2_TR(0x479dd2);
__builtin_memmove(gp(0x82cbbc),(R+24),4);
}
B479dd8:{NFSU2_TR(0x479dd8);
TAIL_STATIC(0x47a49du,47a);
}
B479ddd:L479ddd:{c.instructions+=8;NFSU2_TR(0x479ddd);
__builtin_memmove((R+0),gp(0x82cbb8),4);
}
B479de2:{NFSU2_TR(0x479de2);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B479de6:{NFSU2_TR(0x479de6);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B479de7:{NFSU2_TR(0x479de7);
w4(R+4,u32(0x3ull));
}
B479dec:{NFSU2_TR(0x479dec);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x479dec);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x479dec);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B479dee:{NFSU2_TR(0x479dee);
{u32 ea_=u32(u32(7912192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B479df4:{NFSU2_TR(0x479df4);
__builtin_memmove((R+24),(R+8),4);
}
B479df6:{NFSU2_TR(0x479df6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x479dfbull));
TAIL_STATIC(0x75bed4u,75b);
}
B479dfb:L479dfb:{c.instructions+=2;NFSU2_TR(0x479dfb);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B479dfd:{NFSU2_TR(0x479dfd);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L479e03;}}
}
B479dff:L479dff:{c.instructions+=2;NFSU2_TR(0x479dff);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B479e01:{NFSU2_TR(0x479e01);
{goto L479e0d;}
}
B479e03:L479e03:{c.instructions+=2;NFSU2_TR(0x479e03);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x13ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x13ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B479e06:{NFSU2_TR(0x479e06);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L479e0d;}}
}
B479e08:L479e08:{c.instructions+=1;NFSU2_TR(0x479e08);
w4(R+0,u32(0x13ull));
}
B479e0d:L479e0d:{c.instructions+=3;NFSU2_TR(0x479e0d);
{u32 ea_=u32((r4(R+0)*4u)+u32(8309624u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B479e14:{NFSU2_TR(0x479e14);
{u32 ea_=u32(u32(7886288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B479e1a:{NFSU2_TR(0x479e1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x479e1full));
TAIL_STATIC(0x75bed4u,75b);
}
B479e1f:L479e1f:{c.instructions+=7;NFSU2_TR(0x479e1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B479e22:{NFSU2_TR(0x479e22);
__builtin_memmove((R+0),(R+24),4);
}
B479e24:{NFSU2_TR(0x479e24);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B479e26:{NFSU2_TR(0x479e26);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x112ull))));
}
B479e2b:{NFSU2_TR(0x479e2b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B479e2c:{NFSU2_TR(0x479e2c);
__builtin_memmove(gp(0x82cbb8),(R+24),4);
}
B479e32:{NFSU2_TR(0x479e32);
TAIL_STATIC(0x47a49du,47a);
}
B479e37:L479e37:{c.instructions+=8;NFSU2_TR(0x479e37);
__builtin_memmove((R+0),gp(0x82cbb4),4);
}
B479e3c:{NFSU2_TR(0x479e3c);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B479e40:{NFSU2_TR(0x479e40);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B479e41:{NFSU2_TR(0x479e41);
w4(R+4,u32(0x3ull));
}
B479e46:{NFSU2_TR(0x479e46);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x479e46);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x479e46);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B479e48:{NFSU2_TR(0x479e48);
{u32 ea_=u32(u32(7912192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B479e4e:{NFSU2_TR(0x479e4e);
__builtin_memmove((R+24),(R+8),4);
}
B479e50:{NFSU2_TR(0x479e50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x479e55ull));
TAIL_STATIC(0x75bed4u,75b);
}
B479e55:L479e55:{c.instructions+=2;NFSU2_TR(0x479e55);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B479e57:{NFSU2_TR(0x479e57);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L479e5d;}}
}
B479e59:L479e59:{c.instructions+=2;NFSU2_TR(0x479e59);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B479e5b:{NFSU2_TR(0x479e5b);
{goto L479e67;}
}
B479e5d:L479e5d:{c.instructions+=2;NFSU2_TR(0x479e5d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x13ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x13ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B479e60:{NFSU2_TR(0x479e60);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L479e67;}}
}
B479e62:L479e62:{c.instructions+=1;NFSU2_TR(0x479e62);
w4(R+0,u32(0x13ull));
}
B479e67:L479e67:{c.instructions+=3;NFSU2_TR(0x479e67);
{u32 ea_=u32((r4(R+0)*4u)+u32(8309624u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B479e6e:{NFSU2_TR(0x479e6e);
{u32 ea_=u32(u32(7886288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B479e74:{NFSU2_TR(0x479e74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x479e79ull));
TAIL_STATIC(0x75bed4u,75b);
}
B479e79:L479e79:{c.instructions+=7;NFSU2_TR(0x479e79);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B479e7c:{NFSU2_TR(0x479e7c);
__builtin_memmove((R+0),(R+24),4);
}
B479e7e:{NFSU2_TR(0x479e7e);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B479e80:{NFSU2_TR(0x479e80);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xd6ull))));
}
B479e85:{NFSU2_TR(0x479e85);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B479e86:{NFSU2_TR(0x479e86);
__builtin_memmove(gp(0x82cbb4),(R+24),4);
}
B479e8c:{NFSU2_TR(0x479e8c);
TAIL_STATIC(0x47a49du,47a);
}
B479e91:L479e91:{c.instructions+=8;NFSU2_TR(0x479e91);
__builtin_memmove((R+0),gp(0x82cbb0),4);
}
B479e96:{NFSU2_TR(0x479e96);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B479e9a:{NFSU2_TR(0x479e9a);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B479e9b:{NFSU2_TR(0x479e9b);
w4(R+4,u32(0x3ull));
}
B479ea0:{NFSU2_TR(0x479ea0);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x479ea0);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x479ea0);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B479ea2:{NFSU2_TR(0x479ea2);
{u32 ea_=u32(u32(7912192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B479ea8:{NFSU2_TR(0x479ea8);
__builtin_memmove((R+24),(R+8),4);
}
B479eaa:{NFSU2_TR(0x479eaa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x479eafull));
TAIL_STATIC(0x75bed4u,75b);
}
B479eaf:L479eaf:{c.instructions+=2;NFSU2_TR(0x479eaf);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B479eb1:{NFSU2_TR(0x479eb1);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L479eb7;}}
}
B479eb3:L479eb3:{c.instructions+=2;NFSU2_TR(0x479eb3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B479eb5:{NFSU2_TR(0x479eb5);
{goto L479ec1;}
}
B479eb7:L479eb7:{c.instructions+=2;NFSU2_TR(0x479eb7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x13ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x13ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B479eba:{NFSU2_TR(0x479eba);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L479ec1;}}
}
B479ebc:L479ebc:{c.instructions+=1;NFSU2_TR(0x479ebc);
w4(R+0,u32(0x13ull));
}
B479ec1:L479ec1:{c.instructions+=3;NFSU2_TR(0x479ec1);
{u32 ea_=u32((r4(R+0)*4u)+u32(8309624u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B479ec8:{NFSU2_TR(0x479ec8);
{u32 ea_=u32(u32(7886288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B479ece:{NFSU2_TR(0x479ece);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x479ed3ull));
TAIL_STATIC(0x75bed4u,75b);
}
B479ed3:L479ed3:{c.instructions+=7;NFSU2_TR(0x479ed3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B479ed6:{NFSU2_TR(0x479ed6);
__builtin_memmove((R+0),(R+24),4);
}
B479ed8:{NFSU2_TR(0x479ed8);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B479eda:{NFSU2_TR(0x479eda);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x7cull))));
}
B479edd:{NFSU2_TR(0x479edd);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B479ede:{NFSU2_TR(0x479ede);
__builtin_memmove(gp(0x82cbb0),(R+24),4);
}
B479ee4:{NFSU2_TR(0x479ee4);
TAIL_STATIC(0x47a49du,47a);
}
B479ee9:L479ee9:{c.instructions+=8;NFSU2_TR(0x479ee9);
__builtin_memmove((R+0),gp(0x82cbac),4);
}
B479eee:{NFSU2_TR(0x479eee);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B479ef2:{NFSU2_TR(0x479ef2);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B479ef3:{NFSU2_TR(0x479ef3);
w4(R+4,u32(0x3ull));
}
B479ef8:{NFSU2_TR(0x479ef8);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x479ef8);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x479ef8);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B479efa:{NFSU2_TR(0x479efa);
{u32 ea_=u32(u32(7912192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B479f00:{NFSU2_TR(0x479f00);
__builtin_memmove((R+24),(R+8),4);
}
B479f02:{NFSU2_TR(0x479f02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x479f07ull));
TAIL_STATIC(0x75bed4u,75b);
}
B479f07:L479f07:{c.instructions+=2;NFSU2_TR(0x479f07);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B479f09:{NFSU2_TR(0x479f09);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L479f0f;}}
}
B479f0b:L479f0b:{c.instructions+=2;NFSU2_TR(0x479f0b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B479f0d:{NFSU2_TR(0x479f0d);
{goto L479f19;}
}
B479f0f:L479f0f:{c.instructions+=2;NFSU2_TR(0x479f0f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x13ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x13ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B479f12:{NFSU2_TR(0x479f12);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L479f19;}}
}
B479f14:L479f14:{c.instructions+=1;NFSU2_TR(0x479f14);
w4(R+0,u32(0x13ull));
}
B479f19:L479f19:{c.instructions+=3;NFSU2_TR(0x479f19);
{u32 ea_=u32((r4(R+0)*4u)+u32(8309624u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B479f20:{NFSU2_TR(0x479f20);
{u32 ea_=u32(u32(7886288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B479f26:{NFSU2_TR(0x479f26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x479f2bull));
TAIL_STATIC(0x75bed4u,75b);
}
B479f2b:L479f2b:{c.instructions+=7;NFSU2_TR(0x479f2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B479f2e:{NFSU2_TR(0x479f2e);
__builtin_memmove((R+0),(R+24),4);
}
B479f30:{NFSU2_TR(0x479f30);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B479f32:{NFSU2_TR(0x479f32);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x6dull))));
}
B479f35:{NFSU2_TR(0x479f35);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B479f36:{NFSU2_TR(0x479f36);
__builtin_memmove(gp(0x82cbac),(R+24),4);
}
B479f3c:{NFSU2_TR(0x479f3c);
TAIL_STATIC(0x47a49du,47a);
}
B479f41:L479f41:{c.instructions+=8;NFSU2_TR(0x479f41);
__builtin_memmove((R+0),gp(0x82cba8),4);
}
B479f46:{NFSU2_TR(0x479f46);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B479f4a:{NFSU2_TR(0x479f4a);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B479f4b:{NFSU2_TR(0x479f4b);
w4(R+4,u32(0x3ull));
}
B479f50:{NFSU2_TR(0x479f50);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x479f50);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x479f50);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B479f52:{NFSU2_TR(0x479f52);
{u32 ea_=u32(u32(7912192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B479f58:{NFSU2_TR(0x479f58);
__builtin_memmove((R+24),(R+8),4);
}
B479f5a:{NFSU2_TR(0x479f5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x479f5full));
TAIL_STATIC(0x75bed4u,75b);
}
B479f5f:L479f5f:{c.instructions+=2;NFSU2_TR(0x479f5f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B479f61:{NFSU2_TR(0x479f61);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L479f67;}}
}
B479f63:L479f63:{c.instructions+=2;NFSU2_TR(0x479f63);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B479f65:{NFSU2_TR(0x479f65);
{goto L479f71;}
}
B479f67:L479f67:{c.instructions+=2;NFSU2_TR(0x479f67);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x13ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x13ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B479f6a:{NFSU2_TR(0x479f6a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L479f71;}}
}
B479f6c:L479f6c:{c.instructions+=1;NFSU2_TR(0x479f6c);
w4(R+0,u32(0x13ull));
}
B479f71:L479f71:{c.instructions+=3;NFSU2_TR(0x479f71);
{u32 ea_=u32((r4(R+0)*4u)+u32(8309624u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B479f78:{NFSU2_TR(0x479f78);
{u32 ea_=u32(u32(7886288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B479f7e:{NFSU2_TR(0x479f7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x479f83ull));
TAIL_STATIC(0x75bed4u,75b);
}
B479f83:L479f83:{c.instructions+=7;NFSU2_TR(0x479f83);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B479f86:{NFSU2_TR(0x479f86);
__builtin_memmove((R+0),(R+24),4);
}
B479f88:{NFSU2_TR(0x479f88);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B479f8a:{NFSU2_TR(0x479f8a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xa9ull))));
}
B479f8f:{NFSU2_TR(0x479f8f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B479f90:{NFSU2_TR(0x479f90);
__builtin_memmove(gp(0x82cba8),(R+24),4);
}
B479f96:{NFSU2_TR(0x479f96);
TAIL_STATIC(0x47a49du,47a);
}
B479f9b:L479f9b:{c.instructions+=8;NFSU2_TR(0x479f9b);
__builtin_memmove((R+0),gp(0x82cba4),4);
}
B479fa0:{NFSU2_TR(0x479fa0);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B479fa4:{NFSU2_TR(0x479fa4);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B479fa5:{NFSU2_TR(0x479fa5);
w4(R+4,u32(0x3ull));
}
B479faa:{NFSU2_TR(0x479faa);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x479faa);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x479faa);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B479fac:{NFSU2_TR(0x479fac);
{u32 ea_=u32(u32(7912192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B479fb2:{NFSU2_TR(0x479fb2);
__builtin_memmove((R+24),(R+8),4);
}
B479fb4:{NFSU2_TR(0x479fb4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x479fb9ull));
TAIL_STATIC(0x75bed4u,75b);
}
B479fb9:L479fb9:{c.instructions+=2;NFSU2_TR(0x479fb9);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B479fbb:{NFSU2_TR(0x479fbb);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L479fc1;}}
}
B479fbd:L479fbd:{c.instructions+=2;NFSU2_TR(0x479fbd);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B479fbf:{NFSU2_TR(0x479fbf);
{goto L479fcb;}
}
B479fc1:L479fc1:{c.instructions+=2;NFSU2_TR(0x479fc1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x13ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x13ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B479fc4:{NFSU2_TR(0x479fc4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L479fcb;}}
}
B479fc6:L479fc6:{c.instructions+=1;NFSU2_TR(0x479fc6);
w4(R+0,u32(0x13ull));
}
B479fcb:L479fcb:{c.instructions+=3;NFSU2_TR(0x479fcb);
{u32 ea_=u32((r4(R+0)*4u)+u32(8309624u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B479fd2:{NFSU2_TR(0x479fd2);
{u32 ea_=u32(u32(7886288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B479fd8:{NFSU2_TR(0x479fd8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x479fddull));
TAIL_STATIC(0x75bed4u,75b);
}
B479fdd:L479fdd:{c.instructions+=7;NFSU2_TR(0x479fdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B479fe0:{NFSU2_TR(0x479fe0);
__builtin_memmove((R+0),(R+24),4);
}
B479fe2:{NFSU2_TR(0x479fe2);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B479fe4:{NFSU2_TR(0x479fe4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x103ull))));
}
B479fe9:{NFSU2_TR(0x479fe9);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B479fea:{NFSU2_TR(0x479fea);
__builtin_memmove(gp(0x82cba4),(R+24),4);
}
B479ff0:{NFSU2_TR(0x479ff0);
TAIL_STATIC(0x47a49du,47a);
}
B479ff5:L479ff5:{c.instructions+=2;NFSU2_TR(0x479ff5);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B479ff8:{NFSU2_TR(0x479ff8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x47a49du,47a);}
}
B479ffe:L479ffe:{c.instructions+=1;NFSU2_TR(0x479ffe);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x140ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
TAIL_STATIC(0x47a004u,47a);
}
XIT:NFSU2_TR_EXIT(0x479,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
