#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_572(u8* __restrict R,Cpu& c);
u32 body_573(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_578(u8* __restrict R,Cpu& c);
u32 body_57a(u8* __restrict R,Cpu& c);
u32 body_5d0(u8* __restrict R,Cpu& c);
u32 body_5ed(u8* __restrict R,Cpu& c);
u32 body_6f5(u8* __restrict R,Cpu& c);
u32 body_6f7(u8* __restrict R,Cpu& c);
u32 body_6f8(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x579,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x579,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_579(u8* __restrict R,Cpu& c);
u32 page_579(Cpu& c){return body_579(c.regs.data(),c);}
__attribute__((noinline)) u32 body_579(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x579001:goto L579001;
case 0x579003:c.instructions+=1;goto B579003;
case 0x579005:goto L579005;
case 0x579006:c.instructions+=3;goto B579006;
case 0x579008:c.instructions+=2;goto B579008;
case 0x57900a:c.instructions+=1;goto B57900a;
case 0x57900c:goto L57900c;
case 0x57900d:c.instructions+=5;goto B57900d;
case 0x57900e:c.instructions+=4;goto B57900e;
case 0x57900f:c.instructions+=3;goto B57900f;
case 0x579011:c.instructions+=2;goto B579011;
case 0x579012:c.instructions+=1;goto B579012;
case 0x579015:goto L579015;
case 0x579016:c.instructions+=5;goto B579016;
case 0x579018:c.instructions+=4;goto B579018;
case 0x579019:c.instructions+=3;goto B579019;
case 0x57901a:c.instructions+=2;goto B57901a;
case 0x57901b:c.instructions+=1;goto B57901b;
case 0x579020:goto L579020;
case 0x579026:c.instructions+=3;goto B579026;
case 0x57902c:c.instructions+=2;goto B57902c;
case 0x57902e:c.instructions+=1;goto B57902e;
case 0x579030:goto L579030;
case 0x579034:goto L579034;
case 0x579036:c.instructions+=1;goto B579036;
case 0x579038:goto L579038;
case 0x57903a:c.instructions+=3;goto B57903a;
case 0x57903b:c.instructions+=2;goto B57903b;
case 0x57903d:c.instructions+=1;goto B57903d;
case 0x57903f:goto L57903f;
case 0x579041:goto L579041;
case 0x579050:goto L579050;
case 0x579054:c.instructions+=13;goto B579054;
case 0x579056:c.instructions+=12;goto B579056;
case 0x579057:c.instructions+=11;goto B579057;
case 0x57905a:c.instructions+=10;goto B57905a;
case 0x57905c:c.instructions+=9;goto B57905c;
case 0x57905f:c.instructions+=8;goto B57905f;
case 0x579065:c.instructions+=7;goto B579065;
case 0x57906b:c.instructions+=6;goto B57906b;
case 0x57906d:c.instructions+=5;goto B57906d;
case 0x579070:c.instructions+=4;goto B579070;
case 0x579073:c.instructions+=3;goto B579073;
case 0x579075:c.instructions+=2;goto B579075;
case 0x579076:c.instructions+=1;goto B579076;
case 0x579080:goto L579080;
case 0x579084:c.instructions+=6;goto B579084;
case 0x579085:c.instructions+=5;goto B579085;
case 0x579087:c.instructions+=4;goto B579087;
case 0x579089:c.instructions+=3;goto B579089;
case 0x57908a:c.instructions+=2;goto B57908a;
case 0x57908c:c.instructions+=1;goto B57908c;
case 0x57908e:goto L57908e;
case 0x579093:c.instructions+=1;goto B579093;
case 0x579098:goto L579098;
case 0x57909b:c.instructions+=2;goto B57909b;
case 0x57909d:c.instructions+=1;goto B57909d;
case 0x57909f:goto L57909f;
case 0x5790a2:c.instructions+=3;goto B5790a2;
case 0x5790a5:c.instructions+=2;goto B5790a5;
case 0x5790af:c.instructions+=1;goto B5790af;
case 0x5790b1:goto L5790b1;
case 0x5790b6:c.instructions+=2;goto B5790b6;
case 0x5790b7:c.instructions+=1;goto B5790b7;
case 0x5790bc:goto L5790bc;
case 0x5790bf:c.instructions+=1;goto B5790bf;
case 0x5790c1:goto L5790c1;
case 0x5790c3:goto L5790c3;
case 0x5790c9:c.instructions+=8;goto B5790c9;
case 0x5790cf:c.instructions+=7;goto B5790cf;
case 0x5790d1:c.instructions+=6;goto B5790d1;
case 0x5790d4:c.instructions+=5;goto B5790d4;
case 0x5790d5:c.instructions+=4;goto B5790d5;
case 0x5790d8:c.instructions+=3;goto B5790d8;
case 0x5790da:c.instructions+=2;goto B5790da;
case 0x5790db:c.instructions+=1;goto B5790db;
case 0x5790e0:goto L5790e0;
case 0x5790e1:c.instructions+=3;goto B5790e1;
case 0x5790e3:c.instructions+=2;goto B5790e3;
case 0x5790e6:c.instructions+=1;goto B5790e6;
case 0x5790e8:goto L5790e8;
case 0x5790eb:c.instructions+=2;goto B5790eb;
case 0x5790ed:c.instructions+=1;goto B5790ed;
case 0x5790ef:goto L5790ef;
case 0x5790f3:c.instructions+=5;goto B5790f3;
case 0x5790f7:c.instructions+=4;goto B5790f7;
case 0x5790f8:c.instructions+=3;goto B5790f8;
case 0x5790f9:c.instructions+=2;goto B5790f9;
case 0x5790ff:c.instructions+=1;goto B5790ff;
case 0x579104:goto L579104;
case 0x57910a:c.instructions+=3;goto B57910a;
case 0x57910d:c.instructions+=2;goto B57910d;
case 0x57910f:c.instructions+=1;goto B57910f;
case 0x579111:goto L579111;
case 0x579118:c.instructions+=2;goto B579118;
case 0x579119:c.instructions+=1;goto B579119;
case 0x57911c:goto L57911c;
case 0x57911e:goto L57911e;
case 0x57911f:c.instructions+=1;goto B57911f;
case 0x579130:goto L579130;
case 0x579131:c.instructions+=4;goto B579131;
case 0x579133:c.instructions+=3;goto B579133;
case 0x579136:c.instructions+=2;goto B579136;
case 0x579138:c.instructions+=1;goto B579138;
case 0x57913a:goto L57913a;
case 0x57913e:c.instructions+=7;goto B57913e;
case 0x579142:c.instructions+=6;goto B579142;
case 0x579146:c.instructions+=5;goto B579146;
case 0x579147:c.instructions+=4;goto B579147;
case 0x579148:c.instructions+=3;goto B579148;
case 0x57914e:c.instructions+=2;goto B57914e;
case 0x57914f:c.instructions+=1;goto B57914f;
case 0x579154:goto L579154;
case 0x57915a:c.instructions+=4;goto B57915a;
case 0x57915d:c.instructions+=3;goto B57915d;
case 0x579164:c.instructions+=2;goto B579164;
case 0x579167:c.instructions+=1;goto B579167;
case 0x579169:goto L579169;
case 0x57916f:c.instructions+=3;goto B57916f;
case 0x579171:c.instructions+=2;goto B579171;
case 0x579178:c.instructions+=1;goto B579178;
case 0x57917a:goto L57917a;
case 0x579184:goto L579184;
case 0x579185:c.instructions+=1;goto B579185;
case 0x579190:goto L579190;
case 0x579191:c.instructions+=4;goto B579191;
case 0x579197:c.instructions+=3;goto B579197;
case 0x579198:c.instructions+=2;goto B579198;
case 0x57919d:c.instructions+=1;goto B57919d;
case 0x5791a2:goto L5791a2;
case 0x5791a4:c.instructions+=2;goto B5791a4;
case 0x5791a6:c.instructions+=1;goto B5791a6;
case 0x5791a8:goto L5791a8;
case 0x5791b0:goto L5791b0;
case 0x5791b3:c.instructions+=3;goto B5791b3;
case 0x5791b8:c.instructions+=2;goto B5791b8;
case 0x5791b9:c.instructions+=1;goto B5791b9;
case 0x5791be:goto L5791be;
case 0x5791c1:c.instructions+=2;goto B5791c1;
case 0x5791c3:c.instructions+=1;goto B5791c3;
case 0x5791c5:goto L5791c5;
case 0x5791c7:c.instructions+=2;goto B5791c7;
case 0x5791c9:c.instructions+=1;goto B5791c9;
case 0x5791cb:goto L5791cb;
case 0x5791d0:c.instructions+=3;goto B5791d0;
case 0x5791da:c.instructions+=2;goto B5791da;
case 0x5791de:c.instructions+=1;goto B5791de;
case 0x5791e3:goto L5791e3;
case 0x5791e4:c.instructions+=2;goto B5791e4;
case 0x5791e9:c.instructions+=1;goto B5791e9;
case 0x5791ee:goto L5791ee;
case 0x5791f5:c.instructions+=4;goto B5791f5;
case 0x5791f6:c.instructions+=3;goto B5791f6;
case 0x5791fa:c.instructions+=2;goto B5791fa;
case 0x5791fb:c.instructions+=1;goto B5791fb;
case 0x579200:goto L579200;
case 0x579204:c.instructions+=11;goto B579204;
case 0x579207:c.instructions+=10;goto B579207;
case 0x579208:c.instructions+=9;goto B579208;
case 0x57920b:c.instructions+=8;goto B57920b;
case 0x57920c:c.instructions+=7;goto B57920c;
case 0x57920e:c.instructions+=6;goto B57920e;
case 0x57920f:c.instructions+=5;goto B57920f;
case 0x579211:c.instructions+=4;goto B579211;
case 0x579214:c.instructions+=3;goto B579214;
case 0x579216:c.instructions+=2;goto B579216;
case 0x579218:c.instructions+=1;goto B579218;
case 0x57921a:goto L57921a;
case 0x57921b:c.instructions+=2;goto B57921b;
case 0x57921f:c.instructions+=1;goto B57921f;
case 0x579220:goto L579220;
case 0x579222:c.instructions+=4;goto B579222;
case 0x579226:c.instructions+=3;goto B579226;
case 0x579228:c.instructions+=2;goto B579228;
case 0x579229:c.instructions+=1;goto B579229;
case 0x57922e:goto L57922e;
case 0x579232:c.instructions+=5;goto B579232;
case 0x579235:c.instructions+=4;goto B579235;
case 0x579238:c.instructions+=3;goto B579238;
case 0x579239:c.instructions+=2;goto B579239;
case 0x57923b:c.instructions+=1;goto B57923b;
case 0x57923d:goto L57923d;
case 0x579244:c.instructions+=4;goto B579244;
case 0x579245:c.instructions+=3;goto B579245;
case 0x579246:c.instructions+=2;goto B579246;
case 0x579247:c.instructions+=1;goto B579247;
case 0x579248:goto L579248;
case 0x57924c:c.instructions+=4;goto B57924c;
case 0x57924d:c.instructions+=3;goto B57924d;
case 0x579254:c.instructions+=2;goto B579254;
case 0x579255:c.instructions+=1;goto B579255;
case 0x579260:goto L579260;
case 0x579264:c.instructions+=3;goto B579264;
case 0x579266:c.instructions+=2;goto B579266;
case 0x57926c:c.instructions+=1;goto B57926c;
case 0x57926e:goto L57926e;
case 0x579271:c.instructions+=3;goto B579271;
case 0x579274:c.instructions+=2;goto B579274;
case 0x579279:c.instructions+=1;goto B579279;
case 0x57927c:goto L57927c;
case 0x579282:c.instructions+=1;goto B579282;
case 0x579284:goto L579284;
case 0x579287:c.instructions+=9;goto B579287;
case 0x57928a:c.instructions+=8;goto B57928a;
case 0x57928d:c.instructions+=7;goto B57928d;
case 0x57928f:c.instructions+=6;goto B57928f;
case 0x579292:c.instructions+=5;goto B579292;
case 0x579295:c.instructions+=4;goto B579295;
case 0x579297:c.instructions+=3;goto B579297;
case 0x57929e:c.instructions+=2;goto B57929e;
case 0x5792a3:c.instructions+=1;goto B5792a3;
case 0x5792a6:goto L5792a6;
case 0x5792ac:c.instructions+=1;goto B5792ac;
case 0x5792ae:goto L5792ae;
case 0x5792b1:c.instructions+=3;goto B5792b1;
case 0x5792b4:c.instructions+=2;goto B5792b4;
case 0x5792b9:c.instructions+=1;goto B5792b9;
case 0x5792bc:goto L5792bc;
case 0x5792be:c.instructions+=1;goto B5792be;
case 0x5792d0:goto L5792d0;
case 0x5792d4:c.instructions+=3;goto B5792d4;
case 0x5792d6:c.instructions+=2;goto B5792d6;
case 0x5792db:c.instructions+=1;goto B5792db;
case 0x5792dd:goto L5792dd;
case 0x5792e4:c.instructions+=2;goto B5792e4;
case 0x5792e9:c.instructions+=1;goto B5792e9;
case 0x5792ec:goto L5792ec;
case 0x5792f1:c.instructions+=1;goto B5792f1;
case 0x5792f3:goto L5792f3;
case 0x5792f4:c.instructions+=4;goto B5792f4;
case 0x5792f7:c.instructions+=3;goto B5792f7;
case 0x5792f8:c.instructions+=2;goto B5792f8;
case 0x5792fb:c.instructions+=1;goto B5792fb;
case 0x579300:goto L579300;
case 0x579302:c.instructions+=1;goto B579302;
case 0x579304:goto L579304;
case 0x579306:c.instructions+=3;goto B579306;
case 0x579309:c.instructions+=2;goto B579309;
case 0x57930b:c.instructions+=1;goto B57930b;
case 0x57930e:goto L57930e;
case 0x579313:c.instructions+=2;goto B579313;
case 0x579314:c.instructions+=1;goto B579314;
case 0x579317:goto L579317;
case 0x57931c:c.instructions+=1;goto B57931c;
case 0x57931e:goto L57931e;
case 0x579325:c.instructions+=2;goto B579325;
case 0x57932a:c.instructions+=1;goto B57932a;
case 0x57932d:goto L57932d;
case 0x57932f:c.instructions+=1;goto B57932f;
case 0x579340:goto L579340;
case 0x579344:c.instructions+=3;goto B579344;
case 0x579345:c.instructions+=2;goto B579345;
case 0x57934a:c.instructions+=1;goto B57934a;
case 0x57934f:goto L57934f;
case 0x579350:goto L579350;
case 0x579354:c.instructions+=3;goto B579354;
case 0x579355:c.instructions+=2;goto B579355;
case 0x57935a:c.instructions+=1;goto B57935a;
case 0x57935f:goto L57935f;
case 0x579360:goto L579360;
case 0x579364:c.instructions+=12;goto B579364;
case 0x579366:c.instructions+=11;goto B579366;
case 0x57936a:c.instructions+=10;goto B57936a;
case 0x57936d:c.instructions+=9;goto B57936d;
case 0x579371:c.instructions+=8;goto B579371;
case 0x579374:c.instructions+=7;goto B579374;
case 0x579376:c.instructions+=6;goto B579376;
case 0x579379:c.instructions+=5;goto B579379;
case 0x57937c:c.instructions+=4;goto B57937c;
case 0x57937f:c.instructions+=3;goto B57937f;
case 0x579382:c.instructions+=2;goto B579382;
case 0x579385:c.instructions+=1;goto B579385;
case 0x579390:goto L579390;
case 0x579391:c.instructions+=13;goto B579391;
case 0x579392:c.instructions+=12;goto B579392;
case 0x579396:c.instructions+=11;goto B579396;
case 0x579398:c.instructions+=10;goto B579398;
case 0x57939b:c.instructions+=9;goto B57939b;
case 0x57939d:c.instructions+=8;goto B57939d;
case 0x5793a3:c.instructions+=7;goto B5793a3;
case 0x5793a4:c.instructions+=6;goto B5793a4;
case 0x5793a5:c.instructions+=5;goto B5793a5;
case 0x5793ab:c.instructions+=4;goto B5793ab;
case 0x5793ad:c.instructions+=3;goto B5793ad;
case 0x5793af:c.instructions+=2;goto B5793af;
case 0x5793b5:c.instructions+=1;goto B5793b5;
case 0x5793ba:goto L5793ba;
case 0x5793bc:c.instructions+=1;goto B5793bc;
case 0x5793be:goto L5793be;
case 0x5793c0:goto L5793c0;
case 0x5793c3:c.instructions+=1;goto B5793c3;
case 0x5793c5:goto L5793c5;
case 0x5793c7:c.instructions+=2;goto B5793c7;
case 0x5793c9:c.instructions+=1;goto B5793c9;
case 0x5793cb:goto L5793cb;
case 0x5793cc:c.instructions+=4;goto B5793cc;
case 0x5793cd:c.instructions+=3;goto B5793cd;
case 0x5793ce:c.instructions+=2;goto B5793ce;
case 0x5793cf:c.instructions+=1;goto B5793cf;
case 0x5793d0:goto L5793d0;
case 0x5793d4:c.instructions+=3;goto B5793d4;
case 0x5793d6:c.instructions+=2;goto B5793d6;
case 0x5793dc:c.instructions+=1;goto B5793dc;
case 0x5793de:goto L5793de;
case 0x5793e1:c.instructions+=11;goto B5793e1;
case 0x5793e5:c.instructions+=10;goto B5793e5;
case 0x5793e6:c.instructions+=9;goto B5793e6;
case 0x5793e8:c.instructions+=8;goto B5793e8;
case 0x5793eb:c.instructions+=7;goto B5793eb;
case 0x5793ee:c.instructions+=6;goto B5793ee;
case 0x5793f1:c.instructions+=5;goto B5793f1;
case 0x5793f4:c.instructions+=4;goto B5793f4;
case 0x5793f7:c.instructions+=3;goto B5793f7;
case 0x5793fa:c.instructions+=2;goto B5793fa;
case 0x5793fd:c.instructions+=1;goto B5793fd;
case 0x579400:goto L579400;
case 0x579401:c.instructions+=4;goto B579401;
case 0x579402:c.instructions+=3;goto B579402;
case 0x579403:c.instructions+=2;goto B579403;
case 0x579404:c.instructions+=1;goto B579404;
case 0x579410:goto L579410;
case 0x579411:c.instructions+=8;goto B579411;
case 0x579412:c.instructions+=7;goto B579412;
case 0x579416:c.instructions+=6;goto B579416;
case 0x57941c:c.instructions+=5;goto B57941c;
case 0x579422:c.instructions+=4;goto B579422;
case 0x579423:c.instructions+=3;goto B579423;
case 0x579425:c.instructions+=2;goto B579425;
case 0x579427:c.instructions+=1;goto B579427;
case 0x57942c:goto L57942c;
case 0x57942e:c.instructions+=2;goto B57942e;
case 0x579432:c.instructions+=1;goto B579432;
case 0x579434:goto L579434;
case 0x579437:c.instructions+=1;goto B579437;
case 0x579439:goto L579439;
case 0x57943b:c.instructions+=2;goto B57943b;
case 0x57943d:c.instructions+=1;goto B57943d;
case 0x57943f:goto L57943f;
case 0x579444:c.instructions+=2;goto B579444;
case 0x579445:c.instructions+=1;goto B579445;
case 0x57944a:goto L57944a;
case 0x57944d:c.instructions+=2;goto B57944d;
case 0x57944f:c.instructions+=1;goto B57944f;
case 0x579451:goto L579451;
case 0x579455:c.instructions+=6;goto B579455;
case 0x579459:c.instructions+=5;goto B579459;
case 0x57945a:c.instructions+=4;goto B57945a;
case 0x57945b:c.instructions+=3;goto B57945b;
case 0x57945c:c.instructions+=2;goto B57945c;
case 0x57945e:c.instructions+=1;goto B57945e;
case 0x579463:goto L579463;
case 0x579465:c.instructions+=1;goto B579465;
case 0x579467:goto L579467;
case 0x579469:goto L579469;
case 0x57946c:c.instructions+=11;goto B57946c;
case 0x57946e:c.instructions+=10;goto B57946e;
case 0x579471:c.instructions+=9;goto B579471;
case 0x579474:c.instructions+=8;goto B579474;
case 0x579477:c.instructions+=7;goto B579477;
case 0x579479:c.instructions+=6;goto B579479;
case 0x57947f:c.instructions+=5;goto B57947f;
case 0x579485:c.instructions+=4;goto B579485;
case 0x579486:c.instructions+=3;goto B579486;
case 0x579487:c.instructions+=2;goto B579487;
case 0x579488:c.instructions+=1;goto B579488;
case 0x57948d:goto L57948d;
case 0x579490:c.instructions+=7;goto B579490;
case 0x579493:c.instructions+=6;goto B579493;
case 0x57949a:c.instructions+=5;goto B57949a;
case 0x5794a1:c.instructions+=4;goto B5794a1;
case 0x5794a2:c.instructions+=3;goto B5794a2;
case 0x5794a3:c.instructions+=2;goto B5794a3;
case 0x5794a4:c.instructions+=1;goto B5794a4;
case 0x5794b0:goto L5794b0;
case 0x5794b1:c.instructions+=7;goto B5794b1;
case 0x5794b5:c.instructions+=6;goto B5794b5;
case 0x5794b6:c.instructions+=5;goto B5794b6;
case 0x5794ba:c.instructions+=4;goto B5794ba;
case 0x5794bb:c.instructions+=3;goto B5794bb;
case 0x5794bc:c.instructions+=2;goto B5794bc;
case 0x5794c0:c.instructions+=1;goto B5794c0;
case 0x5794c2:goto L5794c2;
case 0x5794c3:c.instructions+=4;goto B5794c3;
case 0x5794c4:c.instructions+=3;goto B5794c4;
case 0x5794c5:c.instructions+=2;goto B5794c5;
case 0x5794c6:c.instructions+=1;goto B5794c6;
case 0x5794cb:goto L5794cb;
case 0x5794ce:c.instructions+=3;goto B5794ce;
case 0x5794cf:c.instructions+=2;goto B5794cf;
case 0x5794d2:c.instructions+=1;goto B5794d2;
case 0x5794d4:goto L5794d4;
case 0x5794d5:c.instructions+=4;goto B5794d5;
case 0x5794d6:c.instructions+=3;goto B5794d6;
case 0x5794d7:c.instructions+=2;goto B5794d7;
case 0x5794d8:c.instructions+=1;goto B5794d8;
case 0x5794e0:goto L5794e0;
case 0x5794e4:c.instructions+=5;goto B5794e4;
case 0x5794ea:c.instructions+=4;goto B5794ea;
case 0x5794f0:c.instructions+=3;goto B5794f0;
case 0x5794f1:c.instructions+=2;goto B5794f1;
case 0x5794f3:c.instructions+=1;goto B5794f3;
case 0x5794f8:goto L5794f8;
case 0x5794fa:c.instructions+=1;goto B5794fa;
case 0x5794fc:goto L5794fc;
case 0x579500:goto L579500;
case 0x579503:c.instructions+=1;goto B579503;
case 0x579505:goto L579505;
case 0x579507:c.instructions+=2;goto B579507;
case 0x579509:c.instructions+=1;goto B579509;
case 0x57950b:goto L57950b;
case 0x57950d:c.instructions+=2;goto B57950d;
case 0x57950e:c.instructions+=1;goto B57950e;
case 0x57950f:goto L57950f;
case 0x579514:c.instructions+=2;goto B579514;
case 0x579515:c.instructions+=1;goto B579515;
case 0x579520:goto L579520;
case 0x579521:c.instructions+=1;goto B579521;
case 0x579523:goto L579523;
case 0x579525:c.instructions+=5;goto B579525;
case 0x57952a:c.instructions+=4;goto B57952a;
case 0x57952c:c.instructions+=3;goto B57952c;
case 0x57952d:c.instructions+=2;goto B57952d;
case 0x579534:c.instructions+=1;goto B579534;
case 0x579539:goto L579539;
case 0x57953c:c.instructions+=3;goto B57953c;
case 0x57953d:c.instructions+=2;goto B57953d;
case 0x579540:c.instructions+=1;goto B579540;
case 0x579542:goto L579542;
case 0x579549:c.instructions+=2;goto B579549;
case 0x57954a:c.instructions+=1;goto B57954a;
case 0x579550:goto L579550;
case 0x579551:c.instructions+=7;goto B579551;
case 0x579553:c.instructions+=6;goto B579553;
case 0x579558:c.instructions+=5;goto B579558;
case 0x57955d:c.instructions+=4;goto B57955d;
case 0x57955f:c.instructions+=3;goto B57955f;
case 0x579569:c.instructions+=2;goto B579569;
case 0x579573:c.instructions+=1;goto B579573;
case 0x579578:goto L579578;
case 0x57957b:c.instructions+=2;goto B57957b;
case 0x579580:c.instructions+=1;goto B579580;
case 0x579585:goto L579585;
case 0x579587:goto L579587;
case 0x579589:c.instructions+=5;goto B579589;
case 0x57958e:c.instructions+=4;goto B57958e;
case 0x579590:c.instructions+=3;goto B579590;
case 0x579591:c.instructions+=2;goto B579591;
case 0x579598:c.instructions+=1;goto B579598;
case 0x57959d:goto L57959d;
case 0x5795a0:c.instructions+=3;goto B5795a0;
case 0x5795a1:c.instructions+=2;goto B5795a1;
case 0x5795a4:c.instructions+=1;goto B5795a4;
case 0x5795a6:goto L5795a6;
case 0x5795ab:c.instructions+=1;goto B5795ab;
case 0x5795b0:goto L5795b0;
case 0x5795b3:c.instructions+=3;goto B5795b3;
case 0x5795b8:c.instructions+=2;goto B5795b8;
case 0x5795b9:c.instructions+=1;goto B5795b9;
case 0x5795c0:goto L5795c0;
case 0x5795c4:c.instructions+=23;goto B5795c4;
case 0x5795c5:c.instructions+=22;goto B5795c5;
case 0x5795c6:c.instructions+=21;goto B5795c6;
case 0x5795ca:c.instructions+=20;goto B5795ca;
case 0x5795ce:c.instructions+=19;goto B5795ce;
case 0x5795d1:c.instructions+=18;goto B5795d1;
case 0x5795d3:c.instructions+=17;goto B5795d3;
case 0x5795d7:c.instructions+=16;goto B5795d7;
case 0x5795db:c.instructions+=15;goto B5795db;
case 0x5795dd:c.instructions+=14;goto B5795dd;
case 0x5795de:c.instructions+=13;goto B5795de;
case 0x5795e2:c.instructions+=12;goto B5795e2;
case 0x5795e5:c.instructions+=11;goto B5795e5;
case 0x5795e8:c.instructions+=10;goto B5795e8;
case 0x5795eb:c.instructions+=9;goto B5795eb;
case 0x5795ed:c.instructions+=8;goto B5795ed;
case 0x5795f0:c.instructions+=7;goto B5795f0;
case 0x5795f3:c.instructions+=6;goto B5795f3;
case 0x5795f7:c.instructions+=5;goto B5795f7;
case 0x5795f8:c.instructions+=4;goto B5795f8;
case 0x5795fb:c.instructions+=3;goto B5795fb;
case 0x5795ff:c.instructions+=2;goto B5795ff;
case 0x579602:c.instructions+=1;goto B579602;
case 0x579607:goto L579607;
case 0x57960c:goto L57960c;
case 0x57960f:c.instructions+=3;goto B57960f;
case 0x579612:c.instructions+=2;goto B579612;
case 0x579615:c.instructions+=1;goto B579615;
case 0x579617:goto L579617;
case 0x57961a:c.instructions+=1;goto B57961a;
case 0x57961c:goto L57961c;
case 0x579621:c.instructions+=3;goto B579621;
case 0x579623:c.instructions+=2;goto B579623;
case 0x579626:c.instructions+=1;goto B579626;
case 0x579628:goto L579628;
case 0x57962a:c.instructions+=2;goto B57962a;
case 0x57962d:c.instructions+=1;goto B57962d;
case 0x57962f:goto L57962f;
case 0x579632:c.instructions+=1;goto B579632;
case 0x579634:goto L579634;
case 0x579639:c.instructions+=1;goto B579639;
case 0x57963b:goto L57963b;
case 0x579640:c.instructions+=1;goto B579640;
case 0x579642:goto L579642;
case 0x579644:goto L579644;
case 0x579646:goto L579646;
case 0x57964b:c.instructions+=1;goto B57964b;
case 0x57964d:goto L57964d;
case 0x579652:goto L579652;
case 0x579656:c.instructions+=3;goto B579656;
case 0x579659:c.instructions+=2;goto B579659;
case 0x57965b:c.instructions+=1;goto B57965b;
case 0x57965d:goto L57965d;
case 0x579664:goto L579664;
case 0x579667:c.instructions+=7;goto B579667;
case 0x579668:c.instructions+=6;goto B579668;
case 0x57966b:c.instructions+=5;goto B57966b;
case 0x57966e:c.instructions+=4;goto B57966e;
case 0x57966f:c.instructions+=3;goto B57966f;
case 0x579671:c.instructions+=2;goto B579671;
case 0x579672:c.instructions+=1;goto B579672;
case 0x579673:goto L579673;
case 0x579676:c.instructions+=2;goto B579676;
case 0x579678:c.instructions+=1;goto B579678;
case 0x57967a:goto L57967a;
case 0x57967d:c.instructions+=13;goto B57967d;
case 0x57967e:c.instructions+=12;goto B57967e;
case 0x579680:c.instructions+=11;goto B579680;
case 0x579683:c.instructions+=10;goto B579683;
case 0x579686:c.instructions+=9;goto B579686;
case 0x579689:c.instructions+=8;goto B579689;
case 0x57968b:c.instructions+=7;goto B57968b;
case 0x57968d:c.instructions+=6;goto B57968d;
case 0x579690:c.instructions+=5;goto B579690;
case 0x579691:c.instructions+=4;goto B579691;
case 0x579693:c.instructions+=3;goto B579693;
case 0x579696:c.instructions+=2;goto B579696;
case 0x57969a:c.instructions+=1;goto B57969a;
case 0x57969c:goto L57969c;
case 0x57969e:c.instructions+=1;goto B57969e;
case 0x5796a0:goto L5796a0;
case 0x5796a5:c.instructions+=1;goto B5796a5;
case 0x5796a7:goto L5796a7;
case 0x5796ac:c.instructions+=1;goto B5796ac;
case 0x5796ae:goto L5796ae;
case 0x5796b0:goto L5796b0;
case 0x5796b3:c.instructions+=3;goto B5796b3;
case 0x5796b6:c.instructions+=2;goto B5796b6;
case 0x5796b8:c.instructions+=1;goto B5796b8;
case 0x5796ba:goto L5796ba;
case 0x5796bc:c.instructions+=2;goto B5796bc;
case 0x5796be:c.instructions+=1;goto B5796be;
case 0x5796c0:goto L5796c0;
case 0x5796c1:c.instructions+=4;goto B5796c1;
case 0x5796c2:c.instructions+=3;goto B5796c2;
case 0x5796c5:c.instructions+=2;goto B5796c5;
case 0x5796c6:c.instructions+=1;goto B5796c6;
case 0x5796d0:goto L5796d0;
case 0x5796d2:c.instructions+=10;goto B5796d2;
case 0x5796d4:c.instructions+=9;goto B5796d4;
case 0x5796d6:c.instructions+=8;goto B5796d6;
case 0x5796d9:c.instructions+=7;goto B5796d9;
case 0x5796dc:c.instructions+=6;goto B5796dc;
case 0x5796df:c.instructions+=5;goto B5796df;
case 0x5796e2:c.instructions+=4;goto B5796e2;
case 0x5796e8:c.instructions+=3;goto B5796e8;
case 0x5796ef:c.instructions+=2;goto B5796ef;
case 0x5796f2:c.instructions+=1;goto B5796f2;
case 0x579700:goto L579700;
case 0x579701:c.instructions+=6;goto B579701;
case 0x579704:c.instructions+=5;goto B579704;
case 0x579705:c.instructions+=4;goto B579705;
case 0x579708:c.instructions+=3;goto B579708;
case 0x57970a:c.instructions+=2;goto B57970a;
case 0x57970c:c.instructions+=1;goto B57970c;
case 0x57970e:goto L57970e;
case 0x579710:c.instructions+=2;goto B579710;
case 0x579711:c.instructions+=1;goto B579711;
case 0x579714:goto L579714;
case 0x579716:c.instructions+=1;goto B579716;
case 0x579718:goto L579718;
case 0x57971b:c.instructions+=2;goto B57971b;
case 0x57971d:c.instructions+=1;goto B57971d;
case 0x57971f:goto L57971f;
case 0x579721:c.instructions+=1;goto B579721;
case 0x579723:goto L579723;
case 0x579725:c.instructions+=7;goto B579725;
case 0x579727:c.instructions+=6;goto B579727;
case 0x57972e:c.instructions+=5;goto B57972e;
case 0x579731:c.instructions+=4;goto B579731;
case 0x579734:c.instructions+=3;goto B579734;
case 0x579738:c.instructions+=2;goto B579738;
case 0x57973a:c.instructions+=1;goto B57973a;
case 0x57973c:goto L57973c;
case 0x57973d:goto L57973d;
case 0x57973e:c.instructions+=2;goto B57973e;
case 0x57973f:c.instructions+=1;goto B57973f;
case 0x579740:goto L579740;
case 0x579741:c.instructions+=4;goto B579741;
case 0x579743:c.instructions+=3;goto B579743;
case 0x579746:c.instructions+=2;goto B579746;
case 0x579748:c.instructions+=1;goto B579748;
case 0x57974a:goto L57974a;
case 0x57974b:c.instructions+=1;goto B57974b;
case 0x579750:goto L579750;
case 0x579753:goto L579753;
case 0x579756:c.instructions+=2;goto B579756;
case 0x579758:c.instructions+=1;goto B579758;
case 0x57975a:goto L57975a;
case 0x57975b:c.instructions+=1;goto B57975b;
case 0x579760:goto L579760;
case 0x579763:goto L579763;
case 0x579764:c.instructions+=1;goto B579764;
case 0x579770:goto L579770;
case 0x579771:c.instructions+=4;goto B579771;
case 0x579773:c.instructions+=3;goto B579773;
case 0x579776:c.instructions+=2;goto B579776;
case 0x579778:c.instructions+=1;goto B579778;
case 0x57977a:goto L57977a;
case 0x57977b:c.instructions+=1;goto B57977b;
case 0x579780:goto L579780;
case 0x579784:c.instructions+=7;goto B579784;
case 0x579788:c.instructions+=6;goto B579788;
case 0x57978b:c.instructions+=5;goto B57978b;
case 0x579792:c.instructions+=4;goto B579792;
case 0x579795:c.instructions+=3;goto B579795;
case 0x579798:c.instructions+=2;goto B579798;
case 0x579799:c.instructions+=1;goto B579799;
case 0x57979c:goto L57979c;
case 0x5797a0:c.instructions+=5;goto B5797a0;
case 0x5797a4:c.instructions+=4;goto B5797a4;
case 0x5797a7:c.instructions+=3;goto B5797a7;
case 0x5797aa:c.instructions+=2;goto B5797aa;
case 0x5797ab:c.instructions+=1;goto B5797ab;
case 0x5797b0:goto L5797b0;
case 0x5797b1:c.instructions+=4;goto B5797b1;
case 0x5797b7:c.instructions+=3;goto B5797b7;
case 0x5797b8:c.instructions+=2;goto B5797b8;
case 0x5797bd:c.instructions+=1;goto B5797bd;
case 0x5797c2:goto L5797c2;
case 0x5797c4:c.instructions+=2;goto B5797c4;
case 0x5797c8:c.instructions+=1;goto B5797c8;
case 0x5797ca:goto L5797ca;
case 0x5797d0:goto L5797d0;
case 0x5797d3:c.instructions+=1;goto B5797d3;
case 0x5797d5:goto L5797d5;
case 0x5797d7:c.instructions+=2;goto B5797d7;
case 0x5797d9:c.instructions+=1;goto B5797d9;
case 0x5797db:goto L5797db;
case 0x5797e1:c.instructions+=2;goto B5797e1;
case 0x5797e6:c.instructions+=1;goto B5797e6;
case 0x5797eb:goto L5797eb;
case 0x5797ed:c.instructions+=1;goto B5797ed;
case 0x5797ef:goto L5797ef;
case 0x5797f0:goto L5797f0;
case 0x5797f3:c.instructions+=1;goto B5797f3;
case 0x5797f5:goto L5797f5;
case 0x5797f7:c.instructions+=2;goto B5797f7;
case 0x5797f9:c.instructions+=1;goto B5797f9;
case 0x5797fb:goto L5797fb;
case 0x5797fc:c.instructions+=3;goto B5797fc;
case 0x5797fe:c.instructions+=2;goto B5797fe;
case 0x5797ff:c.instructions+=1;goto B5797ff;
case 0x579800:goto L579800;
case 0x579801:c.instructions+=3;goto B579801;
case 0x579803:c.instructions+=2;goto B579803;
case 0x579804:c.instructions+=1;goto B579804;
case 0x579810:goto L579810;
case 0x579814:c.instructions+=2;goto B579814;
case 0x579815:c.instructions+=1;goto B579815;
case 0x57981a:goto L57981a;
case 0x57981d:c.instructions+=2;goto B57981d;
case 0x57981f:c.instructions+=1;goto B57981f;
case 0x579821:goto L579821;
case 0x579825:c.instructions+=3;goto B579825;
case 0x579829:c.instructions+=2;goto B579829;
case 0x57982c:c.instructions+=1;goto B57982c;
case 0x57982f:goto L57982f;
case 0x579830:goto L579830;
case 0x579836:c.instructions+=9;goto B579836;
case 0x57983a:c.instructions+=8;goto B57983a;
case 0x57983c:c.instructions+=7;goto B57983c;
case 0x579841:c.instructions+=6;goto B579841;
case 0x579844:c.instructions+=5;goto B579844;
case 0x579847:c.instructions+=4;goto B579847;
case 0x579849:c.instructions+=3;goto B579849;
case 0x57984b:c.instructions+=2;goto B57984b;
case 0x579851:c.instructions+=1;goto B579851;
case 0x579853:goto L579853;
case 0x579856:c.instructions+=1;goto B579856;
case 0x579857:goto L579857;
case 0x57985a:c.instructions+=7;goto B57985a;
case 0x57985c:c.instructions+=6;goto B57985c;
case 0x57985e:c.instructions+=5;goto B57985e;
case 0x579861:c.instructions+=4;goto B579861;
case 0x579862:c.instructions+=3;goto B579862;
case 0x579865:c.instructions+=2;goto B579865;
case 0x579867:c.instructions+=1;goto B579867;
case 0x579869:goto L579869;
case 0x57986a:goto L57986a;
case 0x579870:goto L579870;
case 0x579874:c.instructions+=5;goto B579874;
case 0x579875:c.instructions+=4;goto B579875;
case 0x579876:c.instructions+=3;goto B579876;
case 0x579877:c.instructions+=2;goto B579877;
case 0x579878:c.instructions+=1;goto B579878;
case 0x57987d:goto L57987d;
case 0x579883:c.instructions+=4;goto B579883;
case 0x579886:c.instructions+=3;goto B579886;
case 0x57988b:c.instructions+=2;goto B57988b;
case 0x57988d:c.instructions+=1;goto B57988d;
case 0x579892:goto L579892;
case 0x579894:c.instructions+=2;goto B579894;
case 0x579896:c.instructions+=1;goto B579896;
case 0x579898:goto L579898;
case 0x57989b:c.instructions+=3;goto B57989b;
case 0x57989d:c.instructions+=2;goto B57989d;
case 0x57989f:c.instructions+=1;goto B57989f;
case 0x5798a1:goto L5798a1;
case 0x5798a4:goto L5798a4;
case 0x5798a6:c.instructions+=1;goto B5798a6;
case 0x5798a8:goto L5798a8;
case 0x5798a9:c.instructions+=3;goto B5798a9;
case 0x5798ac:c.instructions+=2;goto B5798ac;
case 0x5798ae:c.instructions+=1;goto B5798ae;
case 0x5798b0:goto L5798b0;
case 0x5798b2:c.instructions+=2;goto B5798b2;
case 0x5798b4:c.instructions+=1;goto B5798b4;
case 0x5798b6:goto L5798b6;
case 0x5798b8:goto L5798b8;
case 0x5798b9:c.instructions+=3;goto B5798b9;
case 0x5798ba:c.instructions+=2;goto B5798ba;
case 0x5798bb:c.instructions+=1;goto B5798bb;
case 0x5798c0:goto L5798c0;
case 0x5798c5:c.instructions+=7;goto B5798c5;
case 0x5798c6:c.instructions+=6;goto B5798c6;
case 0x5798c8:c.instructions+=5;goto B5798c8;
case 0x5798cd:c.instructions+=4;goto B5798cd;
case 0x5798d0:c.instructions+=3;goto B5798d0;
case 0x5798d2:c.instructions+=2;goto B5798d2;
case 0x5798d3:c.instructions+=1;goto B5798d3;
case 0x5798d8:goto L5798d8;
case 0x5798dd:c.instructions+=2;goto B5798dd;
case 0x5798de:c.instructions+=1;goto B5798de;
case 0x5798e3:goto L5798e3;
case 0x5798e6:c.instructions+=1;goto B5798e6;
case 0x5798f0:goto L5798f0;
case 0x5798f1:c.instructions+=5;goto B5798f1;
case 0x5798f2:c.instructions+=4;goto B5798f2;
case 0x5798f8:c.instructions+=3;goto B5798f8;
case 0x5798f9:c.instructions+=2;goto B5798f9;
case 0x5798fe:c.instructions+=1;goto B5798fe;
case 0x579903:goto L579903;
case 0x579905:c.instructions+=2;goto B579905;
case 0x579907:c.instructions+=1;goto B579907;
case 0x579909:goto L579909;
case 0x57990d:c.instructions+=1;goto B57990d;
case 0x579910:goto L579910;
case 0x579913:c.instructions+=3;goto B579913;
case 0x579914:c.instructions+=2;goto B579914;
case 0x579915:c.instructions+=1;goto B579915;
case 0x57991a:goto L57991a;
case 0x57991d:c.instructions+=2;goto B57991d;
case 0x57991f:c.instructions+=1;goto B57991f;
case 0x579921:goto L579921;
case 0x579923:c.instructions+=2;goto B579923;
case 0x579925:c.instructions+=1;goto B579925;
case 0x579927:goto L579927;
case 0x579928:c.instructions+=4;goto B579928;
case 0x579929:c.instructions+=3;goto B579929;
case 0x57992b:c.instructions+=2;goto B57992b;
case 0x57992c:c.instructions+=1;goto B57992c;
case 0x57992d:goto L57992d;
case 0x57992f:c.instructions+=13;goto B57992f;
case 0x579932:c.instructions+=12;goto B579932;
case 0x579934:c.instructions+=11;goto B579934;
case 0x579937:c.instructions+=10;goto B579937;
case 0x57993c:c.instructions+=9;goto B57993c;
case 0x57993e:c.instructions+=8;goto B57993e;
case 0x579944:c.instructions+=7;goto B579944;
case 0x579947:c.instructions+=6;goto B579947;
case 0x579948:c.instructions+=5;goto B579948;
case 0x57994e:c.instructions+=4;goto B57994e;
case 0x579950:c.instructions+=3;goto B579950;
case 0x579951:c.instructions+=2;goto B579951;
case 0x579952:c.instructions+=1;goto B579952;
case 0x579960:goto L579960;
case 0x579961:c.instructions+=2;goto B579961;
case 0x579963:c.instructions+=1;goto B579963;
case 0x579968:goto L579968;
case 0x57996d:c.instructions+=1;goto B57996d;
case 0x57996f:goto L57996f;
case 0x579970:c.instructions+=1;goto B579970;
case 0x579975:goto L579975;
case 0x579978:goto L579978;
case 0x57997a:c.instructions+=2;goto B57997a;
case 0x57997b:c.instructions+=1;goto B57997b;
case 0x579980:goto L579980;
case 0x579986:c.instructions+=1;goto B579986;
case 0x579990:goto L579990;
case 0x579996:c.instructions+=13;goto B579996;
case 0x579998:c.instructions+=12;goto B579998;
case 0x57999d:c.instructions+=11;goto B57999d;
case 0x57999e:c.instructions+=10;goto B57999e;
case 0x5799a5:c.instructions+=9;goto B5799a5;
case 0x5799a6:c.instructions+=8;goto B5799a6;
case 0x5799a7:c.instructions+=7;goto B5799a7;
case 0x5799a8:c.instructions+=6;goto B5799a8;
case 0x5799ac:c.instructions+=5;goto B5799ac;
case 0x5799ae:c.instructions+=4;goto B5799ae;
case 0x5799b3:c.instructions+=3;goto B5799b3;
case 0x5799b4:c.instructions+=2;goto B5799b4;
case 0x5799b6:c.instructions+=1;goto B5799b6;
case 0x5799bb:goto L5799bb;
case 0x5799be:c.instructions+=2;goto B5799be;
case 0x5799c0:c.instructions+=1;goto B5799c0;
case 0x5799c2:goto L5799c2;
case 0x5799c5:goto L5799c5;
case 0x5799c7:c.instructions+=2;goto B5799c7;
case 0x5799c9:c.instructions+=1;goto B5799c9;
case 0x5799cb:goto L5799cb;
case 0x5799cd:c.instructions+=1;goto B5799cd;
case 0x5799cf:goto L5799cf;
case 0x5799d0:c.instructions+=1;goto B5799d0;
case 0x5799d2:goto L5799d2;
case 0x5799d3:c.instructions+=2;goto B5799d3;
case 0x5799d5:c.instructions+=1;goto B5799d5;
case 0x5799da:goto L5799da;
case 0x5799dc:c.instructions+=3;goto B5799dc;
case 0x5799df:c.instructions+=2;goto B5799df;
case 0x5799e1:c.instructions+=1;goto B5799e1;
case 0x5799e3:goto L5799e3;
case 0x5799e6:c.instructions+=2;goto B5799e6;
case 0x5799ed:c.instructions+=1;goto B5799ed;
case 0x5799ef:goto L5799ef;
case 0x5799f5:c.instructions+=2;goto B5799f5;
case 0x5799f6:c.instructions+=1;goto B5799f6;
case 0x5799fb:goto L5799fb;
case 0x5799fe:c.instructions+=4;goto B5799fe;
case 0x579a02:c.instructions+=3;goto B579a02;
case 0x579a04:c.instructions+=2;goto B579a04;
case 0x579a0c:c.instructions+=1;goto B579a0c;
case 0x579a0e:goto L579a0e;
case 0x579a0f:c.instructions+=3;goto B579a0f;
case 0x579a10:c.instructions+=2;goto B579a10;
case 0x579a12:c.instructions+=1;goto B579a12;
case 0x579a17:goto L579a17;
case 0x579a19:goto L579a19;
case 0x579a1b:goto L579a1b;
case 0x579a1e:c.instructions+=3;goto B579a1e;
case 0x579a25:c.instructions+=2;goto B579a25;
case 0x579a29:c.instructions+=1;goto B579a29;
case 0x579a2b:goto L579a2b;
case 0x579a2f:c.instructions+=6;goto B579a2f;
case 0x579a30:c.instructions+=5;goto B579a30;
case 0x579a31:c.instructions+=4;goto B579a31;
case 0x579a38:c.instructions+=3;goto B579a38;
case 0x579a39:c.instructions+=2;goto B579a39;
case 0x579a3c:c.instructions+=1;goto B579a3c;
case 0x579a40:goto L579a40;
case 0x579a41:c.instructions+=6;goto B579a41;
case 0x579a45:c.instructions+=5;goto B579a45;
case 0x579a46:c.instructions+=4;goto B579a46;
case 0x579a48:c.instructions+=3;goto B579a48;
case 0x579a49:c.instructions+=2;goto B579a49;
case 0x579a4b:c.instructions+=1;goto B579a4b;
case 0x579a50:goto L579a50;
case 0x579a53:c.instructions+=2;goto B579a53;
case 0x579a55:c.instructions+=1;goto B579a55;
case 0x579a5b:goto L579a5b;
case 0x579a5c:c.instructions+=5;goto B579a5c;
case 0x579a5d:c.instructions+=4;goto B579a5d;
case 0x579a5f:c.instructions+=3;goto B579a5f;
case 0x579a61:c.instructions+=2;goto B579a61;
case 0x579a62:c.instructions+=1;goto B579a62;
case 0x579a67:goto L579a67;
case 0x579a69:c.instructions+=3;goto B579a69;
case 0x579a6a:c.instructions+=2;goto B579a6a;
case 0x579a6e:c.instructions+=1;goto B579a6e;
case 0x579a73:goto L579a73;
case 0x579a75:c.instructions+=8;goto B579a75;
case 0x579a7a:c.instructions+=7;goto B579a7a;
case 0x579a7c:c.instructions+=6;goto B579a7c;
case 0x579a7e:c.instructions+=5;goto B579a7e;
case 0x579a81:c.instructions+=4;goto B579a81;
case 0x579a84:c.instructions+=3;goto B579a84;
case 0x579a87:c.instructions+=2;goto B579a87;
case 0x579a88:c.instructions+=1;goto B579a88;
case 0x579a8d:goto L579a8d;
case 0x579a91:c.instructions+=7;goto B579a91;
case 0x579a93:c.instructions+=6;goto B579a93;
case 0x579a94:c.instructions+=5;goto B579a94;
case 0x579a96:c.instructions+=4;goto B579a96;
case 0x579a97:c.instructions+=3;goto B579a97;
case 0x579a99:c.instructions+=2;goto B579a99;
case 0x579a9a:c.instructions+=1;goto B579a9a;
case 0x579a9f:goto L579a9f;
case 0x579aa2:c.instructions+=6;goto B579aa2;
case 0x579aa5:c.instructions+=5;goto B579aa5;
case 0x579aa8:c.instructions+=4;goto B579aa8;
case 0x579aae:c.instructions+=3;goto B579aae;
case 0x579ab1:c.instructions+=2;goto B579ab1;
case 0x579ab5:c.instructions+=1;goto B579ab5;
case 0x579ab7:goto L579ab7;
case 0x579ab8:c.instructions+=4;goto B579ab8;
case 0x579ab9:c.instructions+=3;goto B579ab9;
case 0x579abe:c.instructions+=2;goto B579abe;
case 0x579abf:c.instructions+=1;goto B579abf;
case 0x579ac4:goto L579ac4;
case 0x579ac6:c.instructions+=2;goto B579ac6;
case 0x579ac7:c.instructions+=1;goto B579ac7;
case 0x579acc:goto L579acc;
case 0x579acf:c.instructions+=2;goto B579acf;
case 0x579ad1:c.instructions+=1;goto B579ad1;
case 0x579ad3:goto L579ad3;
case 0x579ad5:c.instructions+=3;goto B579ad5;
case 0x579ad7:c.instructions+=2;goto B579ad7;
case 0x579ad8:c.instructions+=1;goto B579ad8;
case 0x579add:goto L579add;
case 0x579ae0:c.instructions+=2;goto B579ae0;
case 0x579ae3:c.instructions+=1;goto B579ae3;
case 0x579ae5:goto L579ae5;
case 0x579aec:goto L579aec;
case 0x579aed:c.instructions+=4;goto B579aed;
case 0x579af0:c.instructions+=3;goto B579af0;
case 0x579af3:c.instructions+=2;goto B579af3;
case 0x579af6:c.instructions+=1;goto B579af6;
case 0x579af8:goto L579af8;
case 0x579afc:c.instructions+=3;goto B579afc;
case 0x579afe:c.instructions+=2;goto B579afe;
case 0x579aff:c.instructions+=1;goto B579aff;
case 0x579b04:goto L579b04;
case 0x579b07:c.instructions+=6;goto B579b07;
case 0x579b08:c.instructions+=5;goto B579b08;
case 0x579b09:c.instructions+=4;goto B579b09;
case 0x579b0a:c.instructions+=3;goto B579b0a;
case 0x579b0c:c.instructions+=2;goto B579b0c;
case 0x579b0d:c.instructions+=1;goto B579b0d;
case 0x579b10:goto L579b10;
case 0x579b11:c.instructions+=3;goto B579b11;
case 0x579b13:c.instructions+=2;goto B579b13;
case 0x579b14:c.instructions+=1;goto B579b14;
case 0x579b20:goto L579b20;
case 0x579b21:c.instructions+=1;goto B579b21;
case 0x579b26:goto L579b26;
case 0x579b2b:c.instructions+=1;goto B579b2b;
case 0x579b30:goto L579b30;
case 0x579b34:c.instructions+=2;goto B579b34;
case 0x579b35:c.instructions+=1;goto B579b35;
case 0x579b3a:goto L579b3a;
case 0x579b3e:c.instructions+=12;goto B579b3e;
case 0x579b40:c.instructions+=11;goto B579b40;
case 0x579b43:c.instructions+=10;goto B579b43;
case 0x579b45:c.instructions+=9;goto B579b45;
case 0x579b48:c.instructions+=8;goto B579b48;
case 0x579b4d:c.instructions+=7;goto B579b4d;
case 0x579b4f:c.instructions+=6;goto B579b4f;
case 0x579b55:c.instructions+=5;goto B579b55;
case 0x579b58:c.instructions+=4;goto B579b58;
case 0x579b5d:c.instructions+=3;goto B579b5d;
case 0x579b60:c.instructions+=2;goto B579b60;
case 0x579b66:c.instructions+=1;goto B579b66;
case 0x579b6b:goto L579b6b;
case 0x579b6e:c.instructions+=2;goto B579b6e;
case 0x579b70:c.instructions+=1;goto B579b70;
case 0x579b72:goto L579b72;
case 0x579b74:c.instructions+=3;goto B579b74;
case 0x579b76:c.instructions+=2;goto B579b76;
case 0x579b77:c.instructions+=1;goto B579b77;
case 0x579b7c:goto L579b7c;
case 0x579b81:c.instructions+=2;goto B579b81;
case 0x579b82:c.instructions+=1;goto B579b82;
case 0x579b87:goto L579b87;
case 0x579b8a:goto L579b8a;
case 0x579b8b:c.instructions+=1;goto B579b8b;
case 0x579b90:goto L579b90;
case 0x579b91:c.instructions+=4;goto B579b91;
case 0x579b93:c.instructions+=3;goto B579b93;
case 0x579b96:c.instructions+=2;goto B579b96;
case 0x579b98:c.instructions+=1;goto B579b98;
case 0x579b9a:goto L579b9a;
case 0x579b9d:c.instructions+=2;goto B579b9d;
case 0x579b9f:c.instructions+=1;goto B579b9f;
case 0x579ba1:goto L579ba1;
case 0x579ba4:c.instructions+=1;goto B579ba4;
case 0x579ba6:goto L579ba6;
case 0x579ba9:c.instructions+=2;goto B579ba9;
case 0x579bab:c.instructions+=1;goto B579bab;
case 0x579bad:goto L579bad;
case 0x579baf:c.instructions+=3;goto B579baf;
case 0x579bb1:c.instructions+=2;goto B579bb1;
case 0x579bb2:c.instructions+=1;goto B579bb2;
case 0x579bb7:goto L579bb7;
case 0x579bbc:c.instructions+=2;goto B579bbc;
case 0x579bbd:c.instructions+=1;goto B579bbd;
case 0x579bc2:goto L579bc2;
case 0x579bc5:goto L579bc5;
case 0x579bcc:goto L579bcc;
case 0x579bd1:c.instructions+=1;goto B579bd1;
case 0x579bd3:goto L579bd3;
case 0x579bd8:c.instructions+=3;goto B579bd8;
case 0x579bd9:c.instructions+=2;goto B579bd9;
case 0x579bda:c.instructions+=1;goto B579bda;
case 0x579bdf:goto L579bdf;
case 0x579be2:goto L579be2;
case 0x579be4:c.instructions+=2;goto B579be4;
case 0x579be5:c.instructions+=1;goto B579be5;
case 0x579bf0:goto L579bf0;
case 0x579bf4:c.instructions+=2;goto B579bf4;
case 0x579bf6:c.instructions+=1;goto B579bf6;
case 0x579bf8:goto L579bf8;
case 0x579bfb:c.instructions+=2;goto B579bfb;
case 0x579bfd:c.instructions+=1;goto B579bfd;
case 0x579bff:goto L579bff;
case 0x579c06:c.instructions+=1;goto B579c06;
case 0x579c07:goto L579c07;
case 0x579c09:c.instructions+=1;goto B579c09;
case 0x579c0e:goto L579c0e;
case 0x579c10:goto L579c10;
case 0x579c11:c.instructions+=4;goto B579c11;
case 0x579c12:c.instructions+=3;goto B579c12;
case 0x579c13:c.instructions+=2;goto B579c13;
case 0x579c18:c.instructions+=1;goto B579c18;
case 0x579c1d:goto L579c1d;
case 0x579c21:c.instructions+=6;goto B579c21;
case 0x579c23:c.instructions+=5;goto B579c23;
case 0x579c27:c.instructions+=4;goto B579c27;
case 0x579c28:c.instructions+=3;goto B579c28;
case 0x579c29:c.instructions+=2;goto B579c29;
case 0x579c2a:c.instructions+=1;goto B579c2a;
case 0x579c2f:goto L579c2f;
case 0x579c33:c.instructions+=9;goto B579c33;
case 0x579c36:c.instructions+=8;goto B579c36;
case 0x579c38:c.instructions+=7;goto B579c38;
case 0x579c3a:c.instructions+=6;goto B579c3a;
case 0x579c3d:c.instructions+=5;goto B579c3d;
case 0x579c3e:c.instructions+=4;goto B579c3e;
case 0x579c3f:c.instructions+=3;goto B579c3f;
case 0x579c40:c.instructions+=2;goto B579c40;
case 0x579c41:c.instructions+=1;goto B579c41;
case 0x579c46:goto L579c46;
case 0x579c49:c.instructions+=7;goto B579c49;
case 0x579c4c:c.instructions+=6;goto B579c4c;
case 0x579c4e:c.instructions+=5;goto B579c4e;
case 0x579c50:c.instructions+=4;goto B579c50;
case 0x579c53:c.instructions+=3;goto B579c53;
case 0x579c55:c.instructions+=2;goto B579c55;
case 0x579c58:c.instructions+=1;goto B579c58;
case 0x579c5a:goto L579c5a;
case 0x579c5d:goto L579c5d;
case 0x579c5e:c.instructions+=1;goto B579c5e;
case 0x579c63:goto L579c63;
case 0x579c66:c.instructions+=5;goto B579c66;
case 0x579c67:c.instructions+=4;goto B579c67;
case 0x579c68:c.instructions+=3;goto B579c68;
case 0x579c6a:c.instructions+=2;goto B579c6a;
case 0x579c6b:c.instructions+=1;goto B579c6b;
case 0x579c70:goto L579c70;
case 0x579c75:c.instructions+=4;goto B579c75;
case 0x579c76:c.instructions+=3;goto B579c76;
case 0x579c78:c.instructions+=2;goto B579c78;
case 0x579c7e:c.instructions+=1;goto B579c7e;
case 0x579c80:goto L579c80;
case 0x579c81:c.instructions+=1;goto B579c81;
case 0x579c86:goto L579c86;
case 0x579c89:goto L579c89;
case 0x579c8b:c.instructions+=2;goto B579c8b;
case 0x579c8c:c.instructions+=1;goto B579c8c;
case 0x579c90:goto L579c90;
case 0x579c92:c.instructions+=5;goto B579c92;
case 0x579c96:c.instructions+=4;goto B579c96;
case 0x579c99:c.instructions+=3;goto B579c99;
case 0x579c9c:c.instructions+=2;goto B579c9c;
case 0x579c9f:c.instructions+=1;goto B579c9f;
case 0x579ca0:goto L579ca0;
case 0x579ca2:c.instructions+=5;goto B579ca2;
case 0x579ca5:c.instructions+=4;goto B579ca5;
case 0x579ca8:c.instructions+=3;goto B579ca8;
case 0x579cab:c.instructions+=2;goto B579cab;
case 0x579cae:c.instructions+=1;goto B579cae;
case 0x579cb0:goto L579cb0;
case 0x579cb1:c.instructions+=9;goto B579cb1;
case 0x579cb2:c.instructions+=8;goto B579cb2;
case 0x579cb6:c.instructions+=7;goto B579cb6;
case 0x579cb9:c.instructions+=6;goto B579cb9;
case 0x579cbb:c.instructions+=5;goto B579cbb;
case 0x579cbe:c.instructions+=4;goto B579cbe;
case 0x579cc2:c.instructions+=3;goto B579cc2;
case 0x579cc4:c.instructions+=2;goto B579cc4;
case 0x579cc6:c.instructions+=1;goto B579cc6;
case 0x579cc8:goto L579cc8;
case 0x579ccb:c.instructions+=2;goto B579ccb;
case 0x579ccd:c.instructions+=1;goto B579ccd;
case 0x579ccf:goto L579ccf;
case 0x579cd1:c.instructions+=2;goto B579cd1;
case 0x579cd6:c.instructions+=1;goto B579cd6;
case 0x579cdb:goto L579cdb;
case 0x579cde:goto L579cde;
case 0x579ce1:c.instructions+=4;goto B579ce1;
case 0x579ce5:c.instructions+=3;goto B579ce5;
case 0x579ce6:c.instructions+=2;goto B579ce6;
case 0x579ce8:c.instructions+=1;goto B579ce8;
case 0x579ced:goto L579ced;
case 0x579cf0:c.instructions+=5;goto B579cf0;
case 0x579cf5:c.instructions+=4;goto B579cf5;
case 0x579cf8:c.instructions+=3;goto B579cf8;
case 0x579cfb:c.instructions+=2;goto B579cfb;
case 0x579cff:c.instructions+=1;goto B579cff;
case 0x579d01:goto L579d01;
case 0x579d04:c.instructions+=3;goto B579d04;
case 0x579d05:c.instructions+=2;goto B579d05;
case 0x579d07:c.instructions+=1;goto B579d07;
case 0x579d0c:goto L579d0c;
case 0x579d0f:c.instructions+=4;goto B579d0f;
case 0x579d13:c.instructions+=3;goto B579d13;
case 0x579d17:c.instructions+=2;goto B579d17;
case 0x579d1a:c.instructions+=1;goto B579d1a;
case 0x579d21:goto L579d21;
case 0x579d22:c.instructions+=2;goto B579d22;
case 0x579d23:c.instructions+=1;goto B579d23;
case 0x579d30:goto L579d30;
case 0x579d32:c.instructions+=2;goto B579d32;
case 0x579d34:c.instructions+=1;goto B579d34;
case 0x579d39:goto L579d39;
case 0x579d3b:c.instructions+=1;goto B579d3b;
case 0x579d3d:goto L579d3d;
case 0x579d41:c.instructions+=2;goto B579d41;
case 0x579d44:c.instructions+=1;goto B579d44;
case 0x579d46:goto L579d46;
case 0x579d49:c.instructions+=1;goto B579d49;
case 0x579d4b:goto L579d4b;
case 0x579d4d:c.instructions+=1;goto B579d4d;
case 0x579d50:goto L579d50;
case 0x579d52:c.instructions+=1;goto B579d52;
case 0x579d60:goto L579d60;
case 0x579d62:c.instructions+=2;goto B579d62;
case 0x579d64:c.instructions+=1;goto B579d64;
case 0x579d69:goto L579d69;
case 0x579d6b:c.instructions+=2;goto B579d6b;
case 0x579d6e:c.instructions+=1;goto B579d6e;
case 0x579d70:goto L579d70;
case 0x579d74:c.instructions+=3;goto B579d74;
case 0x579d75:c.instructions+=2;goto B579d75;
case 0x579d77:c.instructions+=1;goto B579d77;
case 0x579d7c:goto L579d7c;
case 0x579d80:goto L579d80;
case 0x579d84:c.instructions+=3;goto B579d84;
case 0x579d85:c.instructions+=2;goto B579d85;
case 0x579d87:c.instructions+=1;goto B579d87;
case 0x579d8c:goto L579d8c;
case 0x579d90:goto L579d90;
case 0x579d94:c.instructions+=3;goto B579d94;
case 0x579d95:c.instructions+=2;goto B579d95;
case 0x579d97:c.instructions+=1;goto B579d97;
case 0x579d9c:goto L579d9c;
case 0x579da0:goto L579da0;
case 0x579da4:c.instructions+=3;goto B579da4;
case 0x579da5:c.instructions+=2;goto B579da5;
case 0x579da7:c.instructions+=1;goto B579da7;
case 0x579dac:goto L579dac;
case 0x579dae:c.instructions+=2;goto B579dae;
case 0x579db1:c.instructions+=1;goto B579db1;
case 0x579dc0:goto L579dc0;
case 0x579dc1:c.instructions+=4;goto B579dc1;
case 0x579dc3:c.instructions+=3;goto B579dc3;
case 0x579dc6:c.instructions+=2;goto B579dc6;
case 0x579dc8:c.instructions+=1;goto B579dc8;
case 0x579dca:goto L579dca;
case 0x579dcb:c.instructions+=1;goto B579dcb;
case 0x579dd0:goto L579dd0;
case 0x579dd3:c.instructions+=1;goto B579dd3;
case 0x579dda:goto L579dda;
case 0x579de4:c.instructions+=2;goto B579de4;
case 0x579de5:c.instructions+=1;goto B579de5;
case 0x579df0:goto L579df0;
case 0x579df1:c.instructions+=8;goto B579df1;
case 0x579df2:c.instructions+=7;goto B579df2;
case 0x579df6:c.instructions+=6;goto B579df6;
case 0x579df7:c.instructions+=5;goto B579df7;
case 0x579df9:c.instructions+=4;goto B579df9;
case 0x579dfc:c.instructions+=3;goto B579dfc;
case 0x579dfe:c.instructions+=2;goto B579dfe;
case 0x579e01:c.instructions+=1;goto B579e01;
case 0x579e03:goto L579e03;
case 0x579e09:c.instructions+=4;goto B579e09;
case 0x579e0f:c.instructions+=3;goto B579e0f;
case 0x579e12:c.instructions+=2;goto B579e12;
case 0x579e14:c.instructions+=1;goto B579e14;
case 0x579e16:goto L579e16;
case 0x579e18:c.instructions+=1;goto B579e18;
case 0x579e1f:goto L579e1f;
case 0x579e25:c.instructions+=1;goto B579e25;
case 0x579e27:goto L579e27;
case 0x579e29:c.instructions+=5;goto B579e29;
case 0x579e2b:c.instructions+=4;goto B579e2b;
case 0x579e2d:c.instructions+=3;goto B579e2d;
case 0x579e2e:c.instructions+=2;goto B579e2e;
case 0x579e30:c.instructions+=1;goto B579e30;
case 0x579e35:goto L579e35;
case 0x579e38:c.instructions+=3;goto B579e38;
case 0x579e3a:c.instructions+=2;goto B579e3a;
case 0x579e3d:c.instructions+=1;goto B579e3d;
case 0x579e3f:goto L579e3f;
case 0x579e45:c.instructions+=4;goto B579e45;
case 0x579e4b:c.instructions+=3;goto B579e4b;
case 0x579e4e:c.instructions+=2;goto B579e4e;
case 0x579e50:c.instructions+=1;goto B579e50;
case 0x579e52:goto L579e52;
case 0x579e54:c.instructions+=1;goto B579e54;
case 0x579e5b:goto L579e5b;
case 0x579e61:c.instructions+=1;goto B579e61;
case 0x579e63:goto L579e63;
case 0x579e65:c.instructions+=5;goto B579e65;
case 0x579e67:c.instructions+=4;goto B579e67;
case 0x579e69:c.instructions+=3;goto B579e69;
case 0x579e6a:c.instructions+=2;goto B579e6a;
case 0x579e6c:c.instructions+=1;goto B579e6c;
case 0x579e71:goto L579e71;
case 0x579e74:c.instructions+=3;goto B579e74;
case 0x579e76:c.instructions+=2;goto B579e76;
case 0x579e79:c.instructions+=1;goto B579e79;
case 0x579e7b:goto L579e7b;
case 0x579e81:c.instructions+=4;goto B579e81;
case 0x579e87:c.instructions+=3;goto B579e87;
case 0x579e8a:c.instructions+=2;goto B579e8a;
case 0x579e8c:c.instructions+=1;goto B579e8c;
case 0x579e8e:goto L579e8e;
case 0x579e90:c.instructions+=1;goto B579e90;
case 0x579e97:goto L579e97;
case 0x579e9d:c.instructions+=1;goto B579e9d;
case 0x579e9f:goto L579e9f;
case 0x579ea1:c.instructions+=5;goto B579ea1;
case 0x579ea3:c.instructions+=4;goto B579ea3;
case 0x579ea5:c.instructions+=3;goto B579ea5;
case 0x579ea6:c.instructions+=2;goto B579ea6;
case 0x579ea8:c.instructions+=1;goto B579ea8;
case 0x579ead:goto L579ead;
case 0x579eb0:c.instructions+=3;goto B579eb0;
case 0x579eb2:c.instructions+=2;goto B579eb2;
case 0x579eb5:c.instructions+=1;goto B579eb5;
case 0x579eb7:goto L579eb7;
case 0x579ebd:c.instructions+=4;goto B579ebd;
case 0x579ec3:c.instructions+=3;goto B579ec3;
case 0x579ec6:c.instructions+=2;goto B579ec6;
case 0x579ec8:c.instructions+=1;goto B579ec8;
case 0x579eca:goto L579eca;
case 0x579ecc:c.instructions+=1;goto B579ecc;
case 0x579ed3:goto L579ed3;
case 0x579ed4:c.instructions+=4;goto B579ed4;
case 0x579eda:c.instructions+=3;goto B579eda;
case 0x579edb:c.instructions+=2;goto B579edb;
case 0x579edc:c.instructions+=1;goto B579edc;
case 0x579edf:goto L579edf;
case 0x579ee1:c.instructions+=5;goto B579ee1;
case 0x579ee3:c.instructions+=4;goto B579ee3;
case 0x579ee5:c.instructions+=3;goto B579ee5;
case 0x579ee6:c.instructions+=2;goto B579ee6;
case 0x579ee8:c.instructions+=1;goto B579ee8;
case 0x579eed:goto L579eed;
case 0x579eee:c.instructions+=3;goto B579eee;
case 0x579eef:c.instructions+=2;goto B579eef;
case 0x579ef0:c.instructions+=1;goto B579ef0;
case 0x579f00:goto L579f00;
case 0x579f01:c.instructions+=2;goto B579f01;
case 0x579f03:c.instructions+=1;goto B579f03;
case 0x579f08:goto L579f08;
case 0x579f0d:c.instructions+=1;goto B579f0d;
case 0x579f0f:goto L579f0f;
case 0x579f10:c.instructions+=1;goto B579f10;
case 0x579f15:goto L579f15;
case 0x579f18:goto L579f18;
case 0x579f1a:c.instructions+=2;goto B579f1a;
case 0x579f1b:c.instructions+=1;goto B579f1b;
case 0x579f20:goto L579f20;
case 0x579f21:c.instructions+=16;goto B579f21;
case 0x579f25:c.instructions+=15;goto B579f25;
case 0x579f27:c.instructions+=14;goto B579f27;
case 0x579f2a:c.instructions+=13;goto B579f2a;
case 0x579f2b:c.instructions+=12;goto B579f2b;
case 0x579f2d:c.instructions+=11;goto B579f2d;
case 0x579f30:c.instructions+=10;goto B579f30;
case 0x579f33:c.instructions+=9;goto B579f33;
case 0x579f36:c.instructions+=8;goto B579f36;
case 0x579f39:c.instructions+=7;goto B579f39;
case 0x579f3c:c.instructions+=6;goto B579f3c;
case 0x579f3d:c.instructions+=5;goto B579f3d;
case 0x579f41:c.instructions+=4;goto B579f41;
case 0x579f47:c.instructions+=3;goto B579f47;
case 0x579f4a:c.instructions+=2;goto B579f4a;
case 0x579f4d:c.instructions+=1;goto B579f4d;
case 0x579f4f:goto L579f4f;
case 0x579f56:c.instructions+=2;goto B579f56;
case 0x579f57:c.instructions+=1;goto B579f57;
case 0x579f5c:goto L579f5c;
case 0x579f5f:c.instructions+=1;goto B579f5f;
case 0x579f62:goto L579f62;
case 0x579f65:c.instructions+=2;goto B579f65;
case 0x579f67:c.instructions+=1;goto B579f67;
case 0x579f69:goto L579f69;
case 0x579f6b:goto L579f6b;
case 0x579f6c:c.instructions+=4;goto B579f6c;
case 0x579f6e:c.instructions+=3;goto B579f6e;
case 0x579f6f:c.instructions+=2;goto B579f6f;
case 0x579f70:c.instructions+=1;goto B579f70;
case 0x579f80:goto L579f80;
case 0x579f84:c.instructions+=6;goto B579f84;
case 0x579f85:c.instructions+=5;goto B579f85;
case 0x579f89:c.instructions+=4;goto B579f89;
case 0x579f8a:c.instructions+=3;goto B579f8a;
case 0x579f8c:c.instructions+=2;goto B579f8c;
case 0x579f92:c.instructions+=1;goto B579f92;
case 0x579f97:goto L579f97;
case 0x579f98:c.instructions+=2;goto B579f98;
case 0x579f9a:c.instructions+=1;goto B579f9a;
case 0x579f9f:goto L579f9f;
case 0x579fa3:c.instructions+=7;goto B579fa3;
case 0x579fa6:c.instructions+=6;goto B579fa6;
case 0x579faa:c.instructions+=5;goto B579faa;
case 0x579fad:c.instructions+=4;goto B579fad;
case 0x579fae:c.instructions+=3;goto B579fae;
case 0x579fb4:c.instructions+=2;goto B579fb4;
case 0x579fbb:c.instructions+=1;goto B579fbb;
case 0x579fc0:goto L579fc0;
case 0x579fc4:c.instructions+=6;goto B579fc4;
case 0x579fc7:c.instructions+=5;goto B579fc7;
case 0x579fc9:c.instructions+=4;goto B579fc9;
case 0x579fcb:c.instructions+=3;goto B579fcb;
case 0x579fce:c.instructions+=2;goto B579fce;
case 0x579fd1:c.instructions+=1;goto B579fd1;
case 0x579fd3:goto L579fd3;
case 0x579fd5:goto L579fd5;
case 0x579fd7:c.instructions+=2;goto B579fd7;
case 0x579fda:c.instructions+=1;goto B579fda;
case 0x579fdd:goto L579fdd;
case 0x579fdf:goto L579fdf;
case 0x579fe0:c.instructions+=3;goto B579fe0;
case 0x579fe2:c.instructions+=2;goto B579fe2;
case 0x579fe3:c.instructions+=1;goto B579fe3;
case 0x579ff0:goto L579ff0;
case 0x579ff1:c.instructions+=2;goto B579ff1;
case 0x579ff3:c.instructions+=1;goto B579ff3;
case 0x579ff8:goto L579ff8;
case 0x579ffd:c.instructions+=1;goto B579ffd;
case 0x579fff:goto L579fff;
default:missing_instruction(c.pc);}
B579001:L579001:{c.instructions+=2;NFSU2_TR(0x579001);
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
B579003:{NFSU2_TR(0x579003);
if(r1(R+518)){{goto L579015;}}
}
B579005:L579005:{c.instructions+=4;NFSU2_TR(0x579005);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
}
B579006:{NFSU2_TR(0x579006);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B579008:{NFSU2_TR(0x579008);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57900a:{NFSU2_TR(0x57900a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x578ff0u,578);}
}
B57900c:L57900c:{c.instructions+=6;NFSU2_TR(0x57900c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57900d:{NFSU2_TR(0x57900d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57900e:{NFSU2_TR(0x57900e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B57900f:{NFSU2_TR(0x57900f);
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
B579011:{NFSU2_TR(0x579011);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B579012:{NFSU2_TR(0x579012);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B579015:L579015:{c.instructions+=6;NFSU2_TR(0x579015);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B579016:{NFSU2_TR(0x579016);
__builtin_memmove((R+0),(R+24),4);
}
B579018:{NFSU2_TR(0x579018);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B579019:{NFSU2_TR(0x579019);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B57901a:{NFSU2_TR(0x57901a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57901b:{NFSU2_TR(0x57901b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B579020:L579020:{c.instructions+=4;NFSU2_TR(0x579020);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B579026:{NFSU2_TR(0x579026);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x98ull))));
}
B57902c:{NFSU2_TR(0x57902c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57902e:{NFSU2_TR(0x57902e);
if(r1(R+518)){{goto L57903f;}}
}
B579030:L579030:{c.instructions+=1;NFSU2_TR(0x579030);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B579034:L579034:{c.instructions+=2;NFSU2_TR(0x579034);
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
B579036:{NFSU2_TR(0x579036);
if(r1(R+518)){{goto L579041;}}
}
B579038:L579038:{c.instructions+=4;NFSU2_TR(0x579038);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B57903a:{NFSU2_TR(0x57903a);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B57903b:{NFSU2_TR(0x57903b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57903d:{NFSU2_TR(0x57903d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x579034u);}goto L579034;}}
}
B57903f:L57903f:{c.instructions+=1;NFSU2_TR(0x57903f);
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
B579041:L579041:{c.instructions+=1;NFSU2_TR(0x579041);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B579050:L579050:{c.instructions+=14;NFSU2_TR(0x579050);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B579054:{NFSU2_TR(0x579054);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B579056:{NFSU2_TR(0x579056);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579057:{NFSU2_TR(0x579057);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B57905a:{NFSU2_TR(0x57905a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B57905c:{NFSU2_TR(0x57905c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57905f:{NFSU2_TR(0x57905f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B579065:{NFSU2_TR(0x579065);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x90ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x90ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x90ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B57906b:{NFSU2_TR(0x57906b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B57906d:{NFSU2_TR(0x57906d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B579070:{NFSU2_TR(0x579070);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B579073:{NFSU2_TR(0x579073);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B579075:{NFSU2_TR(0x579075);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B579076:{NFSU2_TR(0x579076);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B579080:L579080:{c.instructions+=7;NFSU2_TR(0x579080);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B579084:{NFSU2_TR(0x579084);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579085:{NFSU2_TR(0x579085);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B579087:{NFSU2_TR(0x579087);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B579089:{NFSU2_TR(0x579089);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57908a:{NFSU2_TR(0x57908a);
__builtin_memmove((R+24),(R+4),4);
}
B57908c:{NFSU2_TR(0x57908c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5790b1;}}
}
B57908e:L57908e:{c.instructions+=2;NFSU2_TR(0x57908e);
u8 U[4];
w4(U+0,u32(0x171e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579093:{NFSU2_TR(0x579093);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x579098ull));
TAIL_STATIC(0x75c6c8u,75c);
}
B579098:L579098:{c.instructions+=3;NFSU2_TR(0x579098);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B57909b:{NFSU2_TR(0x57909b);
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
B57909d:{NFSU2_TR(0x57909d);
if(r1(R+518)){{goto L5790c1;}}
}
B57909f:L57909f:{c.instructions+=4;NFSU2_TR(0x57909f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5790a2:{NFSU2_TR(0x5790a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5790a5:{NFSU2_TR(0x5790a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1e4ull))));
w4(U+4,u32(0x17000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5790af:{NFSU2_TR(0x5790af);
{goto L5790c3;}
}
B5790b1:L5790b1:{c.instructions+=3;NFSU2_TR(0x5790b1);
__builtin_memmove((R+0),gp(0x803680),4);
}
B5790b6:{NFSU2_TR(0x5790b6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5790b7:{NFSU2_TR(0x5790b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5790bcull));
TAIL_STATIC(0x43e910u,43e);
}
B5790bc:L5790bc:{c.instructions+=2;NFSU2_TR(0x5790bc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5790bf:{NFSU2_TR(0x5790bf);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57908eu);}goto L57908e;}
}
B5790c1:L5790c1:{c.instructions+=1;NFSU2_TR(0x5790c1);
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
B5790c3:L5790c3:{c.instructions+=9;NFSU2_TR(0x5790c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5790c9:{NFSU2_TR(0x5790c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5790cf:{NFSU2_TR(0x5790cf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5790d1:{NFSU2_TR(0x5790d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5790d4:{NFSU2_TR(0x5790d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5790d5:{NFSU2_TR(0x5790d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5790d8:{NFSU2_TR(0x5790d8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5790da:{NFSU2_TR(0x5790da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5790db:{NFSU2_TR(0x5790db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5790e0:L5790e0:{c.instructions+=4;NFSU2_TR(0x5790e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5790e1:{NFSU2_TR(0x5790e1);
__builtin_memmove((R+24),(R+4),4);
}
B5790e3:{NFSU2_TR(0x5790e3);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5790e6:{NFSU2_TR(0x5790e6);
if(r1(R+518)){{goto L57911c;}}
}
B5790e8:L5790e8:{c.instructions+=3;NFSU2_TR(0x5790e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5790eb:{NFSU2_TR(0x5790eb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5790ed:{NFSU2_TR(0x5790ed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57911c;}}
}
B5790ef:L5790ef:{c.instructions+=6;NFSU2_TR(0x5790ef);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5790f3:{NFSU2_TR(0x5790f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5790f7:{NFSU2_TR(0x5790f7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5790f8:{NFSU2_TR(0x5790f8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5790f9:{NFSU2_TR(0x5790f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5790ff:{NFSU2_TR(0x5790ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x579104ull));
TAIL_STATIC(0x575270u,575);
}
B579104:L579104:{c.instructions+=4;NFSU2_TR(0x579104);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57910a:{NFSU2_TR(0x57910a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57910d:{NFSU2_TR(0x57910d);
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
B57910f:{NFSU2_TR(0x57910f);
if(r1(R+518)){{goto L57911e;}}
}
B579111:L579111:{c.instructions+=3;NFSU2_TR(0x579111);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B579118:{NFSU2_TR(0x579118);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B579119:{NFSU2_TR(0x579119);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57911c:L57911c:{c.instructions+=1;NFSU2_TR(0x57911c);
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
B57911e:L57911e:{c.instructions+=2;NFSU2_TR(0x57911e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57911f:{NFSU2_TR(0x57911f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B579130:L579130:{c.instructions+=5;NFSU2_TR(0x579130);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579131:{NFSU2_TR(0x579131);
__builtin_memmove((R+24),(R+4),4);
}
B579133:{NFSU2_TR(0x579133);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B579136:{NFSU2_TR(0x579136);
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
B579138:{NFSU2_TR(0x579138);
if(r1(R+518)){{goto L579184;}}
}
B57913a:L57913a:{c.instructions+=8;NFSU2_TR(0x57913a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57913e:{NFSU2_TR(0x57913e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B579142:{NFSU2_TR(0x579142);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B579146:{NFSU2_TR(0x579146);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579147:{NFSU2_TR(0x579147);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579148:{NFSU2_TR(0x579148);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57914e:{NFSU2_TR(0x57914e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57914f:{NFSU2_TR(0x57914f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x579154ull));
TAIL_STATIC(0x575140u,575);
}
B579154:L579154:{c.instructions+=5;NFSU2_TR(0x579154);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57915a:{NFSU2_TR(0x57915a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57915d:{NFSU2_TR(0x57915d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0xffffffbcull))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B579164:{NFSU2_TR(0x579164);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+8)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B579167:{NFSU2_TR(0x579167);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L579184;}}
}
B579169:L579169:{c.instructions+=4;NFSU2_TR(0x579169);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57916f:{NFSU2_TR(0x57916f);
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
B579171:{NFSU2_TR(0x579171);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B579178:{NFSU2_TR(0x579178);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L579184;}}
}
B57917a:L57917a:{c.instructions+=1;NFSU2_TR(0x57917a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B579184:L579184:{c.instructions+=2;NFSU2_TR(0x579184);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B579185:{NFSU2_TR(0x579185);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B579190:L579190:{c.instructions+=5;NFSU2_TR(0x579190);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579191:{NFSU2_TR(0x579191);
__builtin_memmove((R+24),gp(0x86519c),4);
}
B579197:{NFSU2_TR(0x579197);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579198:{NFSU2_TR(0x579198);
w4(R+4,u32(0x86519cull));
}
B57919d:{NFSU2_TR(0x57919d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5791a2ull));
TAIL_STATIC(0x502fd0u,502);
}
B5791a2:L5791a2:{c.instructions+=3;NFSU2_TR(0x5791a2);
__builtin_memmove((R+28),(R+0),4);
}
B5791a4:{NFSU2_TR(0x5791a4);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5791a6:{NFSU2_TR(0x5791a6);
if(r1(R+518)){{goto L5791cb;}}
}
B5791a8:L5791a8:{c.instructions+=1;NFSU2_TR(0x5791a8);
{goto L5791b0;}
}
B5791b0:L5791b0:{c.instructions+=4;NFSU2_TR(0x5791b0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5791b3:{NFSU2_TR(0x5791b3);
u8 U[4];
w4(U+0,u32(0x7a082cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5791b8:{NFSU2_TR(0x5791b8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5791b9:{NFSU2_TR(0x5791b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5791beull));
TAIL_STATIC(0x43dc30u,43d);
}
B5791be:L5791be:{c.instructions+=3;NFSU2_TR(0x5791be);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5791c1:{NFSU2_TR(0x5791c1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5791c3:{NFSU2_TR(0x5791c3);
if(r1(R+518)){{goto L5791cb;}}
}
B5791c5:L5791c5:{c.instructions+=3;NFSU2_TR(0x5791c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5791c7:{NFSU2_TR(0x5791c7);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5791c9:{NFSU2_TR(0x5791c9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5791b0u);}goto L5791b0;}}
}
B5791cb:L5791cb:{c.instructions+=4;NFSU2_TR(0x5791cb);
w4(R+4,u32(0x89e7a0ull));
}
B5791d0:{NFSU2_TR(0x5791d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5791da:{NFSU2_TR(0x5791da);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x41ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5791de:{NFSU2_TR(0x5791de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5791e3ull));
TAIL_STATIC(0x5ed5f0u,5ed);
}
B5791e3:L5791e3:{c.instructions+=3;NFSU2_TR(0x5791e3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5791e4:{NFSU2_TR(0x5791e4);
w4(R+4,u32(0x89e7a0ull));
}
B5791e9:{NFSU2_TR(0x5791e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5791eeull));
TAIL_STATIC(0x5ed6b0u,5ed);
}
B5791ee:L5791ee:{c.instructions+=5;NFSU2_TR(0x5791ee);
s1(0x89e7ad,u8(0x1ull));
}
B5791f5:{NFSU2_TR(0x5791f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5791f6:{NFSU2_TR(0x5791f6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x41ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5791fa:{NFSU2_TR(0x5791fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5791fb:{NFSU2_TR(0x5791fb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B579200:L579200:{c.instructions+=12;NFSU2_TR(0x579200);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B579204:{NFSU2_TR(0x579204);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
}
B579207:{NFSU2_TR(0x579207);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B579208:{NFSU2_TR(0x579208);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x3ull))));
}
B57920b:{NFSU2_TR(0x57920b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57920c:{NFSU2_TR(0x57920c);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B57920e:{NFSU2_TR(0x57920e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57920f:{NFSU2_TR(0x57920f);
__builtin_memmove((R+28),(R+0),4);
}
B579211:{NFSU2_TR(0x579211);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,sar<u32>(r4(R+28),u64(r4(U+0))));
}
B579214:{NFSU2_TR(0x579214);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B579216:{NFSU2_TR(0x579216);
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
B579218:{NFSU2_TR(0x579218);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L579248;}}
}
B57921a:L57921a:{c.instructions+=3;NFSU2_TR(0x57921a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57921b:{NFSU2_TR(0x57921b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B57921f:{NFSU2_TR(0x57921f);
}
B579220:L579220:{c.instructions+=5;NFSU2_TR(0x579220);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579222:{NFSU2_TR(0x579222);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B579226:{NFSU2_TR(0x579226);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579228:{NFSU2_TR(0x579228);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579229:{NFSU2_TR(0x579229);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57922eull));
TAIL_STATIC(0x573090u,573);
}
B57922e:L57922e:{c.instructions+=6;NFSU2_TR(0x57922e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B579232:{NFSU2_TR(0x579232);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B579235:{NFSU2_TR(0x579235);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B579238:{NFSU2_TR(0x579238);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B579239:{NFSU2_TR(0x579239);
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
B57923b:{NFSU2_TR(0x57923b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x579220u);}goto L579220;}}
}
B57923d:L57923d:{c.instructions+=5;NFSU2_TR(0x57923d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B579244:{NFSU2_TR(0x579244);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B579245:{NFSU2_TR(0x579245);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B579246:{NFSU2_TR(0x579246);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B579247:{NFSU2_TR(0x579247);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B579248:L579248:{c.instructions+=5;NFSU2_TR(0x579248);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57924c:{NFSU2_TR(0x57924c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57924d:{NFSU2_TR(0x57924d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B579254:{NFSU2_TR(0x579254);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B579255:{NFSU2_TR(0x579255);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B579260:L579260:{c.instructions+=4;NFSU2_TR(0x579260);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B579264:{NFSU2_TR(0x579264);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B579266:{NFSU2_TR(0x579266);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x39100ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57926c:{NFSU2_TR(0x57926c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57927c;}}
}
B57926e:L57926e:{c.instructions+=4;NFSU2_TR(0x57926e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x8ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B579271:{NFSU2_TR(0x579271);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B579274:{NFSU2_TR(0x579274);
w4(R+0,u32(0x1ull));
}
B579279:{NFSU2_TR(0x579279);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57927c:L57927c:{c.instructions+=2;NFSU2_TR(0x57927c);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x39101ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B579282:{NFSU2_TR(0x579282);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5792a6;}}
}
B579284:L579284:{c.instructions+=10;NFSU2_TR(0x579284);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B579287:{NFSU2_TR(0x579287);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B57928a:{NFSU2_TR(0x57928a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x2cull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x2cull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2cull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B57928d:{NFSU2_TR(0x57928d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B57928f:{NFSU2_TR(0x57928f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B579292:{NFSU2_TR(0x579292);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B579295:{NFSU2_TR(0x579295);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B579297:{NFSU2_TR(0x579297);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57929e:{NFSU2_TR(0x57929e);
w4(R+0,u32(0x1ull));
}
B5792a3:{NFSU2_TR(0x5792a3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5792a6:L5792a6:{c.instructions+=2;NFSU2_TR(0x5792a6);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x39102ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5792ac:{NFSU2_TR(0x5792ac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5792bc;}}
}
B5792ae:L5792ae:{c.instructions+=4;NFSU2_TR(0x5792ae);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x8ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5792b1:{NFSU2_TR(0x5792b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5792b4:{NFSU2_TR(0x5792b4);
w4(R+0,u32(0x1ull));
}
B5792b9:{NFSU2_TR(0x5792b9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5792bc:L5792bc:{c.instructions+=2;NFSU2_TR(0x5792bc);
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
B5792be:{NFSU2_TR(0x5792be);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5792d0:L5792d0:{c.instructions+=4;NFSU2_TR(0x5792d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5792d4:{NFSU2_TR(0x5792d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5792d6:{NFSU2_TR(0x5792d6);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x39100ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x39100ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x39100ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5792db:{NFSU2_TR(0x5792db);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5792ec;}}
}
B5792dd:L5792dd:{c.instructions+=3;NFSU2_TR(0x5792dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5792e4:{NFSU2_TR(0x5792e4);
w4(R+0,u32(0x1ull));
}
B5792e9:{NFSU2_TR(0x5792e9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5792ec:L5792ec:{c.instructions+=2;NFSU2_TR(0x5792ec);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x39101ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5792f1:{NFSU2_TR(0x5792f1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L579317;}}
}
B5792f3:L5792f3:{c.instructions+=5;NFSU2_TR(0x5792f3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5792f4:{NFSU2_TR(0x5792f4);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5792f7:{NFSU2_TR(0x5792f7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5792f8:{NFSU2_TR(0x5792f8);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2cull))));
}
B5792fb:{NFSU2_TR(0x5792fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x579300ull));
TAIL_STATIC(0x43be80u,43b);
}
B579300:L579300:{c.instructions+=2;NFSU2_TR(0x579300);
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
B579302:{NFSU2_TR(0x579302);
if(r1(R+518)){{goto L57930e;}}
}
B579304:L579304:{c.instructions+=4;NFSU2_TR(0x579304);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B579306:{NFSU2_TR(0x579306);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B579309:{NFSU2_TR(0x579309);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B57930b:{NFSU2_TR(0x57930b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57930e:L57930e:{c.instructions+=3;NFSU2_TR(0x57930e);
w4(R+0,u32(0x1ull));
}
B579313:{NFSU2_TR(0x579313);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B579314:{NFSU2_TR(0x579314);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B579317:L579317:{c.instructions+=2;NFSU2_TR(0x579317);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x39102ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x39102ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x39102ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B57931c:{NFSU2_TR(0x57931c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57932d;}}
}
B57931e:L57931e:{c.instructions+=3;NFSU2_TR(0x57931e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B579325:{NFSU2_TR(0x579325);
w4(R+0,u32(0x1ull));
}
B57932a:{NFSU2_TR(0x57932a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57932d:L57932d:{c.instructions+=2;NFSU2_TR(0x57932d);
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
B57932f:{NFSU2_TR(0x57932f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B579340:L579340:{c.instructions+=4;NFSU2_TR(0x579340);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B579344:{NFSU2_TR(0x579344);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579345:{NFSU2_TR(0x579345);
w4(R+4,u32(0x865564ull));
}
B57934a:{NFSU2_TR(0x57934a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57934full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x579260u);}goto L579260;}
}
B57934f:L57934f:{c.instructions+=1;NFSU2_TR(0x57934f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B579350:L579350:{c.instructions+=4;NFSU2_TR(0x579350);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B579354:{NFSU2_TR(0x579354);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579355:{NFSU2_TR(0x579355);
w4(R+4,u32(0x865564ull));
}
B57935a:{NFSU2_TR(0x57935a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57935full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5792d0u);}goto L5792d0;}
}
B57935f:L57935f:{c.instructions+=1;NFSU2_TR(0x57935f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B579360:L579360:{c.instructions+=13;NFSU2_TR(0x579360);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B579364:{NFSU2_TR(0x579364);
__builtin_memmove((R+0),(R+4),4);
}
B579366:{NFSU2_TR(0x579366);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57936a:{NFSU2_TR(0x57936a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57936d:{NFSU2_TR(0x57936d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B579371:{NFSU2_TR(0x579371);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B579374:{NFSU2_TR(0x579374);
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
B579376:{NFSU2_TR(0x579376);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B579379:{NFSU2_TR(0x579379);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57937c:{NFSU2_TR(0x57937c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57937f:{NFSU2_TR(0x57937f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B579382:{NFSU2_TR(0x579382);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B579385:{NFSU2_TR(0x579385);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B579390:L579390:{c.instructions+=14;NFSU2_TR(0x579390);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579391:{NFSU2_TR(0x579391);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579392:{NFSU2_TR(0x579392);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B579396:{NFSU2_TR(0x579396);
__builtin_memmove((R+12),(R+20),4);
}
B579398:{NFSU2_TR(0x579398);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B57939b:{NFSU2_TR(0x57939b);
__builtin_memmove((R+4),(R+12),4);
}
B57939d:{NFSU2_TR(0x57939d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x1c8ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B5793a3:{NFSU2_TR(0x5793a3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5793a4:{NFSU2_TR(0x5793a4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5793a5:{NFSU2_TR(0x5793a5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8655a0ull))));
}
B5793ab:{NFSU2_TR(0x5793ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5793ad:{NFSU2_TR(0x5793ad);
__builtin_memmove((R+28),(R+20),4);
}
B5793af:{NFSU2_TR(0x5793af);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5793b5:{NFSU2_TR(0x5793b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5793baull));
TAIL_STATIC(0x502fd0u,502);
}
B5793ba:L5793ba:{c.instructions+=2;NFSU2_TR(0x5793ba);
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
B5793bc:{NFSU2_TR(0x5793bc);
if(r1(R+518)){{goto L579400;}}
}
B5793be:L5793be:{c.instructions+=1;NFSU2_TR(0x5793be);
__builtin_memmove((R+28),(R+28),4);
}
B5793c0:L5793c0:{c.instructions+=2;NFSU2_TR(0x5793c0);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5793c3:{NFSU2_TR(0x5793c3);
if(r1(R+518)){{goto L5793d0;}}
}
B5793c5:L5793c5:{c.instructions+=3;NFSU2_TR(0x5793c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5793c7:{NFSU2_TR(0x5793c7);
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
B5793c9:{NFSU2_TR(0x5793c9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5793c0u);}goto L5793c0;}}
}
B5793cb:L5793cb:{c.instructions+=5;NFSU2_TR(0x5793cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5793cc:{NFSU2_TR(0x5793cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5793cd:{NFSU2_TR(0x5793cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5793ce:{NFSU2_TR(0x5793ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5793cf:{NFSU2_TR(0x5793cf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5793d0:L5793d0:{c.instructions+=4;NFSU2_TR(0x5793d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5793d4:{NFSU2_TR(0x5793d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5793d6:{NFSU2_TR(0x5793d6);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x100ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x100ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5793dc:{NFSU2_TR(0x5793dc);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L579400;}}
}
B5793de:L5793de:{c.instructions+=12;NFSU2_TR(0x5793de);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5793e1:{NFSU2_TR(0x5793e1);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5793e5:{NFSU2_TR(0x5793e5);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5793e6:{NFSU2_TR(0x5793e6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5793e8:{NFSU2_TR(0x5793e8);
u8 U[2];
__builtin_memmove((U+0),(R+20),2);
s2(u32(r4(R+0)),r2(U+0));
}
B5793eb:{NFSU2_TR(0x5793eb);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5793ee:{NFSU2_TR(0x5793ee);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5793f1:{NFSU2_TR(0x5793f1);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5793f4:{NFSU2_TR(0x5793f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5793f7:{NFSU2_TR(0x5793f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5793fa:{NFSU2_TR(0x5793fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5793fd:{NFSU2_TR(0x5793fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B579400:L579400:{c.instructions+=5;NFSU2_TR(0x579400);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B579401:{NFSU2_TR(0x579401);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B579402:{NFSU2_TR(0x579402);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B579403:{NFSU2_TR(0x579403);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B579404:{NFSU2_TR(0x579404);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B579410:L579410:{c.instructions+=9;NFSU2_TR(0x579410);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579411:{NFSU2_TR(0x579411);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579412:{NFSU2_TR(0x579412);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B579416:{NFSU2_TR(0x579416);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x1c8ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B57941c:{NFSU2_TR(0x57941c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8655a0ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8655a0ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8655a0ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B579422:{NFSU2_TR(0x579422);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579423:{NFSU2_TR(0x579423);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B579425:{NFSU2_TR(0x579425);
__builtin_memmove((R+4),(R+24),4);
}
B579427:{NFSU2_TR(0x579427);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57942cull));
TAIL_STATIC(0x502fd0u,502);
}
B57942c:L57942c:{c.instructions+=3;NFSU2_TR(0x57942c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57942e:{NFSU2_TR(0x57942e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B579432:{NFSU2_TR(0x579432);
if(r1(R+518)){{goto L57943f;}}
}
B579434:L579434:{c.instructions+=2;NFSU2_TR(0x579434);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B579437:{NFSU2_TR(0x579437);
if(r1(R+518)){{goto L57943f;}}
}
B579439:L579439:{c.instructions+=3;NFSU2_TR(0x579439);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B57943b:{NFSU2_TR(0x57943b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57943d:{NFSU2_TR(0x57943d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x579434u);}goto L579434;}}
}
B57943f:L57943f:{c.instructions+=3;NFSU2_TR(0x57943f);
__builtin_memmove((R+0),gp(0x8650bc),4);
}
B579444:{NFSU2_TR(0x579444);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579445:{NFSU2_TR(0x579445);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57944aull));
TAIL_STATIC(0x440e50u,440);
}
B57944a:L57944a:{c.instructions+=3;NFSU2_TR(0x57944a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B57944d:{NFSU2_TR(0x57944d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57944f:{NFSU2_TR(0x57944f);
if(r1(R+518)){{goto L579467;}}
}
B579451:L579451:{c.instructions+=7;NFSU2_TR(0x579451);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B579455:{NFSU2_TR(0x579455);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B579459:{NFSU2_TR(0x579459);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57945a:{NFSU2_TR(0x57945a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57945b:{NFSU2_TR(0x57945b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57945c:{NFSU2_TR(0x57945c);
__builtin_memmove((R+4),(R+0),4);
}
B57945e:{NFSU2_TR(0x57945e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x579463ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x579360u);}goto L579360;}
}
B579463:L579463:{c.instructions+=2;NFSU2_TR(0x579463);
__builtin_memmove((R+28),(R+0),4);
}
B579465:{NFSU2_TR(0x579465);
{goto L579469;}
}
B579467:L579467:{c.instructions+=1;NFSU2_TR(0x579467);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B579469:L579469:{c.instructions+=12;NFSU2_TR(0x579469);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57946c:{NFSU2_TR(0x57946c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B57946e:{NFSU2_TR(0x57946e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B579471:{NFSU2_TR(0x579471);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B579474:{NFSU2_TR(0x579474);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B579477:{NFSU2_TR(0x579477);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+28)),r4(U+0));
}
B579479:{NFSU2_TR(0x579479);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57947f:{NFSU2_TR(0x57947f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B579485:{NFSU2_TR(0x579485);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579486:{NFSU2_TR(0x579486);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579487:{NFSU2_TR(0x579487);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579488:{NFSU2_TR(0x579488);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57948dull));
TAIL_STATIC(0x572120u,572);
}
B57948d:L57948d:{c.instructions+=8;NFSU2_TR(0x57948d);
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
B579490:{NFSU2_TR(0x579490);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B579493:{NFSU2_TR(0x579493);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57949a:{NFSU2_TR(0x57949a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5794a1:{NFSU2_TR(0x5794a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5794a2:{NFSU2_TR(0x5794a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5794a3:{NFSU2_TR(0x5794a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5794a4:{NFSU2_TR(0x5794a4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5794b0:L5794b0:{c.instructions+=8;NFSU2_TR(0x5794b0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5794b1:{NFSU2_TR(0x5794b1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5794b5:{NFSU2_TR(0x5794b5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5794b6:{NFSU2_TR(0x5794b6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5794ba:{NFSU2_TR(0x5794ba);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5794bb:{NFSU2_TR(0x5794bb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5794bc:{NFSU2_TR(0x5794bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5794c0:{NFSU2_TR(0x5794c0);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5794c2:L5794c2:{c.instructions+=5;NFSU2_TR(0x5794c2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5794c3:{NFSU2_TR(0x5794c3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5794c4:{NFSU2_TR(0x5794c4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5794c5:{NFSU2_TR(0x5794c5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5794c6:{NFSU2_TR(0x5794c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5794cbull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x579410u);}goto L579410;}
}
B5794cb:L5794cb:{c.instructions+=4;NFSU2_TR(0x5794cb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5794ce:{NFSU2_TR(0x5794ce);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5794cf:{NFSU2_TR(0x5794cf);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x2ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5794d2:{NFSU2_TR(0x5794d2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5794c2u);}goto L5794c2;}}
}
B5794d4:L5794d4:{c.instructions+=5;NFSU2_TR(0x5794d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5794d5:{NFSU2_TR(0x5794d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5794d6:{NFSU2_TR(0x5794d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5794d7:{NFSU2_TR(0x5794d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5794d8:{NFSU2_TR(0x5794d8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5794e0:L5794e0:{c.instructions+=6;NFSU2_TR(0x5794e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5794e4:{NFSU2_TR(0x5794e4);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x1c8ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B5794ea:{NFSU2_TR(0x5794ea);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x8655a0ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x8655a0ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8655a0ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5794f0:{NFSU2_TR(0x5794f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5794f1:{NFSU2_TR(0x5794f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5794f3:{NFSU2_TR(0x5794f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5794f8ull));
TAIL_STATIC(0x502fd0u,502);
}
B5794f8:L5794f8:{c.instructions+=2;NFSU2_TR(0x5794f8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5794fa:{NFSU2_TR(0x5794fa);
if(r1(R+518)){{goto L57950b;}}
}
B5794fc:L5794fc:{c.instructions+=1;NFSU2_TR(0x5794fc);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B579500:L579500:{c.instructions+=2;NFSU2_TR(0x579500);
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
B579503:{NFSU2_TR(0x579503);
if(r1(R+518)){{goto L57950f;}}
}
B579505:L579505:{c.instructions+=3;NFSU2_TR(0x579505);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B579507:{NFSU2_TR(0x579507);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B579509:{NFSU2_TR(0x579509);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x579500u);}goto L579500;}}
}
B57950b:L57950b:{c.instructions+=3;NFSU2_TR(0x57950b);
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
B57950d:{NFSU2_TR(0x57950d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57950e:{NFSU2_TR(0x57950e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57950f:L57950f:{c.instructions+=3;NFSU2_TR(0x57950f);
w4(R+0,u32(0x1ull));
}
B579514:{NFSU2_TR(0x579514);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B579515:{NFSU2_TR(0x579515);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B579520:L579520:{c.instructions+=2;NFSU2_TR(0x579520);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579521:{NFSU2_TR(0x579521);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B579523:L579523:{c.instructions+=6;NFSU2_TR(0x579523);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579525:{NFSU2_TR(0x579525);
u8 U[4];
w4(U+0,u32(0x571a50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57952a:{NFSU2_TR(0x57952a);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57952c:{NFSU2_TR(0x57952c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57952d:{NFSU2_TR(0x57952d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8647a0ull))));
w1(U+4,u8(0xffull));
s1(u32(r4(U+0)),r1(U+4));
}
B579534:{NFSU2_TR(0x579534);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x579539ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x579410u);}goto L579410;}
}
B579539:L579539:{c.instructions+=4;NFSU2_TR(0x579539);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B57953c:{NFSU2_TR(0x57953c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B57953d:{NFSU2_TR(0x57953d);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x2ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B579540:{NFSU2_TR(0x579540);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x579523u);}goto L579523;}}
}
B579542:L579542:{c.instructions+=3;NFSU2_TR(0x579542);
s1(0x8650c0,u8(0x1ull));
}
B579549:{NFSU2_TR(0x579549);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57954a:{NFSU2_TR(0x57954a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B579550:L579550:{c.instructions+=8;NFSU2_TR(0x579550);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579551:{NFSU2_TR(0x579551);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579553:{NFSU2_TR(0x579553);
u8 U[4];
w4(U+0,u32(0x7a0858ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579558:{NFSU2_TR(0x579558);
u8 U[4];
w4(U+0,u32(0xa0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57955d:{NFSU2_TR(0x57955d);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57955f:{NFSU2_TR(0x57955f);
s4(0x865754,u32(0x0ull));
}
B579569:{NFSU2_TR(0x579569);
s4(0x86591c,u32(0x1ull));
}
B579573:{NFSU2_TR(0x579573);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x579578ull));
TAIL_STATIC(0x440df0u,440);
}
B579578:L579578:{c.instructions+=3;NFSU2_TR(0x579578);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B57957b:{NFSU2_TR(0x57957b);
__builtin_memmove(gp(0x8650bc),(R+0),4);
}
B579580:{NFSU2_TR(0x579580);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x579585ull));
TAIL_STATIC(0x5d0380u,5d0);
}
B579585:L579585:{c.instructions+=1;NFSU2_TR(0x579585);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B579587:L579587:{c.instructions+=6;NFSU2_TR(0x579587);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579589:{NFSU2_TR(0x579589);
u8 U[4];
w4(U+0,u32(0x571a20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57958e:{NFSU2_TR(0x57958e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579590:{NFSU2_TR(0x579590);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579591:{NFSU2_TR(0x579591);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x864788ull))));
w1(U+4,u8(0xffull));
s1(u32(r4(U+0)),r1(U+4));
}
B579598:{NFSU2_TR(0x579598);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57959dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x579410u);}goto L579410;}
}
B57959d:L57959d:{c.instructions+=4;NFSU2_TR(0x57959d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5795a0:{NFSU2_TR(0x5795a0);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5795a1:{NFSU2_TR(0x5795a1);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5795a4:{NFSU2_TR(0x5795a4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x579587u);}goto L579587;}}
}
B5795a6:L5795a6:{c.instructions+=2;NFSU2_TR(0x5795a6);
u8 U[4];
w4(U+0,u32(0x80000000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5795ab:{NFSU2_TR(0x5795ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5795b0ull));
TAIL_STATIC(0x43c1c0u,43c);
}
B5795b0:L5795b0:{c.instructions+=4;NFSU2_TR(0x5795b0);
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
B5795b3:{NFSU2_TR(0x5795b3);
__builtin_memmove(gp(0x7fb2a0),(R+0),4);
}
B5795b8:{NFSU2_TR(0x5795b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5795b9:{NFSU2_TR(0x5795b9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5795c0:L5795c0:{c.instructions+=24;NFSU2_TR(0x5795c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5795c4:{NFSU2_TR(0x5795c4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5795c5:{NFSU2_TR(0x5795c5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5795c6:{NFSU2_TR(0x5795c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5795ca:{NFSU2_TR(0x5795ca);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B5795ce:{NFSU2_TR(0x5795ce);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5795d1:{NFSU2_TR(0x5795d1);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B5795d3:{NFSU2_TR(0x5795d3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B5795d7:{NFSU2_TR(0x5795d7);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+20,u32(r1(U+4)));
}
B5795db:{NFSU2_TR(0x5795db);
__builtin_memmove((R+8),(R+4),4);
}
B5795dd:{NFSU2_TR(0x5795dd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5795de:{NFSU2_TR(0x5795de);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5795e2:{NFSU2_TR(0x5795e2);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5795e5:{NFSU2_TR(0x5795e5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B5795e8:{NFSU2_TR(0x5795e8);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B5795eb:{NFSU2_TR(0x5795eb);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r1(U+0))));
}
B5795ed:{NFSU2_TR(0x5795ed);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(R+8,u8(u32(r1(R+8))^u32(r1(U+4))));
}
B5795f0:{NFSU2_TR(0x5795f0);
w4(R+4,u32(r1(R+8)));
}
B5795f3:{NFSU2_TR(0x5795f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5795f7:{NFSU2_TR(0x5795f7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5795f8:{NFSU2_TR(0x5795f8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5795fb:{NFSU2_TR(0x5795fb);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5795ff:{NFSU2_TR(0x5795ff);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B579602:{NFSU2_TR(0x579602);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x579607ull));
TAIL_STATIC(0x576790u,576);
}
B579607:L579607:{c.instructions+=1;NFSU2_TR(0x579607);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57960cull));
TAIL_STATIC(0x75bed4u,75b);
}
B57960c:L57960c:{c.instructions+=4;NFSU2_TR(0x57960c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B57960f:{NFSU2_TR(0x57960f);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B579612:{NFSU2_TR(0x579612);
w4(R+0,u32(r1(R+0)));
}
B579615:{NFSU2_TR(0x579615);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57962f;}}
}
B579617:L579617:{c.instructions+=2;NFSU2_TR(0x579617);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x7full))));
}
B57961a:{NFSU2_TR(0x57961a);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L579628;}}
}
B57961c:L57961c:{c.instructions+=4;NFSU2_TR(0x57961c);
w4(R+4,u32(0x7full));
}
B579621:{NFSU2_TR(0x579621);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B579623:{NFSU2_TR(0x579623);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B579626:{NFSU2_TR(0x579626);
{goto L579646;}
}
B579628:L579628:{c.instructions+=3;NFSU2_TR(0x579628);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B57962a:{NFSU2_TR(0x57962a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B57962d:{NFSU2_TR(0x57962d);
{goto L579646;}
}
B57962f:L57962f:{c.instructions+=2;NFSU2_TR(0x57962f);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B579632:{NFSU2_TR(0x579632);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L579652;}}
}
B579634:L579634:{c.instructions+=2;NFSU2_TR(0x579634);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x80ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x80ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B579639:{NFSU2_TR(0x579639);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L579642;}}
}
B57963b:L57963b:{c.instructions+=2;NFSU2_TR(0x57963b);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x80ull))));
}
B579640:{NFSU2_TR(0x579640);
{goto L579644;}
}
B579642:L579642:{c.instructions+=1;NFSU2_TR(0x579642);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B579644:L579644:{c.instructions+=1;NFSU2_TR(0x579644);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+0))));
}
B579646:L579646:{c.instructions+=2;NFSU2_TR(0x579646);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xfeull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57964b:{NFSU2_TR(0x57964b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L579652;}}
}
B57964d:L57964d:{c.instructions+=1;NFSU2_TR(0x57964d);
w4(R+0,u32(0xffull));
}
B579652:L579652:{c.instructions+=4;NFSU2_TR(0x579652);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B579656:{NFSU2_TR(0x579656);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B579659:{NFSU2_TR(0x579659);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57965b:{NFSU2_TR(0x57965b);
if(r1(R+518)){{goto L579673;}}
}
B57965d:L57965d:{c.instructions+=1;NFSU2_TR(0x57965d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B579664:L579664:{c.instructions+=8;NFSU2_TR(0x579664);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B579667:{NFSU2_TR(0x579667);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B579668:{NFSU2_TR(0x579668);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57966b:{NFSU2_TR(0x57966b);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B57966e:{NFSU2_TR(0x57966e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57966f:{NFSU2_TR(0x57966f);
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
B579671:{NFSU2_TR(0x579671);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B579672:{NFSU2_TR(0x579672);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B579673:L579673:{c.instructions+=3;NFSU2_TR(0x579673);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B579676:{NFSU2_TR(0x579676);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B579678:{NFSU2_TR(0x579678);
if(r1(R+518)){{goto L57969c;}}
}
B57967a:L57967a:{c.instructions+=14;NFSU2_TR(0x57967a);
w4(R+4,u32(r1(R+4)));
}
B57967d:{NFSU2_TR(0x57967d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57967e:{NFSU2_TR(0x57967e);
__builtin_memmove((R+12),(R+4),4);
}
B579680:{NFSU2_TR(0x579680);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B579683:{NFSU2_TR(0x579683);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B579686:{NFSU2_TR(0x579686);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B579689:{NFSU2_TR(0x579689);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r1(U+0))));
}
B57968b:{NFSU2_TR(0x57968b);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B57968d:{NFSU2_TR(0x57968d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B579690:{NFSU2_TR(0x579690);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B579691:{NFSU2_TR(0x579691);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+4))));
}
B579693:{NFSU2_TR(0x579693);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B579696:{NFSU2_TR(0x579696);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57969a:{NFSU2_TR(0x57969a);
if(r1(R+518)){{goto L5796c0;}}
}
B57969c:L57969c:{c.instructions+=2;NFSU2_TR(0x57969c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57969e:{NFSU2_TR(0x57969e);
if(r1(R+518)){{goto L5796ae;}}
}
B5796a0:L5796a0:{c.instructions+=2;NFSU2_TR(0x5796a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x80ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5796a5:{NFSU2_TR(0x5796a5);
if(r1(R+518)){{goto L5796ae;}}
}
B5796a7:L5796a7:{c.instructions+=2;NFSU2_TR(0x5796a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5796ac:{NFSU2_TR(0x5796ac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5796b0;}}
}
B5796ae:L5796ae:{c.instructions+=1;NFSU2_TR(0x5796ae);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5796b0:L5796b0:{c.instructions+=4;NFSU2_TR(0x5796b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5796b3:{NFSU2_TR(0x5796b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B5796b6:{NFSU2_TR(0x5796b6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B5796b8:{NFSU2_TR(0x5796b8);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x579664u);}goto L579664;}}
}
B5796ba:L5796ba:{c.instructions+=3;NFSU2_TR(0x5796ba);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+20))));
}
B5796bc:{NFSU2_TR(0x5796bc);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5796be:{NFSU2_TR(0x5796be);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x579664u);}goto L579664;}}
}
B5796c0:L5796c0:{c.instructions+=5;NFSU2_TR(0x5796c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5796c1:{NFSU2_TR(0x5796c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5796c2:{NFSU2_TR(0x5796c2);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w2(R+0,u16(u32(r2(R+0))^u32(r2(R+0))));
w1(R+519,u8(s16(r2(R+0))<s16(u16(0x0ull))));
w1(R+518,u8((r2(R+0))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(R+0))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B5796c5:{NFSU2_TR(0x5796c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5796c6:{NFSU2_TR(0x5796c6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5796d0:L5796d0:{c.instructions+=11;NFSU2_TR(0x5796d0);
__builtin_memmove((R+0),(R+4),4);
}
B5796d2:{NFSU2_TR(0x5796d2);
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
B5796d4:{NFSU2_TR(0x5796d4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5796d6:{NFSU2_TR(0x5796d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5796d9:{NFSU2_TR(0x5796d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5796dc:{NFSU2_TR(0x5796dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5796df:{NFSU2_TR(0x5796df);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5796e2:{NFSU2_TR(0x5796e2);
__builtin_memmove((R+4),gp(0x79dc68),4);
}
B5796e8:{NFSU2_TR(0x5796e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5796ef:{NFSU2_TR(0x5796ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5796f2:{NFSU2_TR(0x5796f2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B579700:L579700:{c.instructions+=7;NFSU2_TR(0x579700);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579701:{NFSU2_TR(0x579701);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B579704:{NFSU2_TR(0x579704);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579705:{NFSU2_TR(0x579705);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B579708:{NFSU2_TR(0x579708);
__builtin_memmove((R+0),(R+24),4);
}
B57970a:{NFSU2_TR(0x57970a);
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
B57970c:{NFSU2_TR(0x57970c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L57973d;}}
}
B57970e:L57970e:{c.instructions+=3;NFSU2_TR(0x57970e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B579710:{NFSU2_TR(0x579710);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579711:{NFSU2_TR(0x579711);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((R+12),(U+0),4);
}
B579714:L579714:{c.instructions+=2;NFSU2_TR(0x579714);
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
B579716:{NFSU2_TR(0x579716);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L57973c;}}
}
B579718:L579718:{c.instructions+=3;NFSU2_TR(0x579718);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57971b:{NFSU2_TR(0x57971b);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57971d:{NFSU2_TR(0x57971d);
if(r1(R+518)){{goto L579723;}}
}
B57971f:L57971f:{c.instructions+=2;NFSU2_TR(0x57971f);
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
B579721:{NFSU2_TR(0x579721);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L57973c;}}
}
B579723:L579723:{c.instructions+=8;NFSU2_TR(0x579723);
__builtin_memmove((R+8),(R+0),4);
}
B579725:{NFSU2_TR(0x579725);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+24))));
}
B579727:{NFSU2_TR(0x579727);
u8 U[12];
w4(U+0,u32(u32(u32(0x128ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B57972e:{NFSU2_TR(0x57972e);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w4(R+8,u32(r1(U+0)));
}
B579731:{NFSU2_TR(0x579731);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B579734:{NFSU2_TR(0x579734);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B579738:{NFSU2_TR(0x579738);
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
B57973a:{NFSU2_TR(0x57973a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x579714u);}goto L579714;}}
}
B57973c:L57973c:{c.instructions+=1;NFSU2_TR(0x57973c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57973d:L57973d:{c.instructions+=3;NFSU2_TR(0x57973d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57973e:{NFSU2_TR(0x57973e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57973f:{NFSU2_TR(0x57973f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B579740:L579740:{c.instructions+=5;NFSU2_TR(0x579740);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579741:{NFSU2_TR(0x579741);
__builtin_memmove((R+24),(R+4),4);
}
B579743:{NFSU2_TR(0x579743);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B579746:{NFSU2_TR(0x579746);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B579748:{NFSU2_TR(0x579748);
if(r1(R+518)){{goto L579753;}}
}
B57974a:L57974a:{c.instructions+=2;NFSU2_TR(0x57974a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57974b:{NFSU2_TR(0x57974b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x579750ull));
TAIL_STATIC(0x75c6dau,75c);
}
B579750:L579750:{c.instructions+=1;NFSU2_TR(0x579750);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B579753:L579753:{c.instructions+=3;NFSU2_TR(0x579753);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B579756:{NFSU2_TR(0x579756);
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
B579758:{NFSU2_TR(0x579758);
if(r1(R+518)){{goto L579763;}}
}
B57975a:L57975a:{c.instructions+=2;NFSU2_TR(0x57975a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57975b:{NFSU2_TR(0x57975b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x579760ull));
TAIL_STATIC(0x75c6dau,75c);
}
B579760:L579760:{c.instructions+=1;NFSU2_TR(0x579760);
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
B579763:L579763:{c.instructions+=2;NFSU2_TR(0x579763);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B579764:{NFSU2_TR(0x579764);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B579770:L579770:{c.instructions+=5;NFSU2_TR(0x579770);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579771:{NFSU2_TR(0x579771);
__builtin_memmove((R+24),(R+4),4);
}
B579773:{NFSU2_TR(0x579773);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B579776:{NFSU2_TR(0x579776);
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
B579778:{NFSU2_TR(0x579778);
if(r1(R+518)){{goto L57979c;}}
}
B57977a:L57977a:{c.instructions+=2;NFSU2_TR(0x57977a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57977b:{NFSU2_TR(0x57977b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x579780ull));
TAIL_STATIC(0x75c6dau,75c);
}
B579780:L579780:{c.instructions+=8;NFSU2_TR(0x579780);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B579784:{NFSU2_TR(0x579784);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B579788:{NFSU2_TR(0x579788);
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
B57978b:{NFSU2_TR(0x57978b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B579792:{NFSU2_TR(0x579792);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B579795:{NFSU2_TR(0x579795);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B579798:{NFSU2_TR(0x579798);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B579799:{NFSU2_TR(0x579799);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57979c:L57979c:{c.instructions+=6;NFSU2_TR(0x57979c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5797a0:{NFSU2_TR(0x5797a0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5797a4:{NFSU2_TR(0x5797a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5797a7:{NFSU2_TR(0x5797a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5797aa:{NFSU2_TR(0x5797aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5797ab:{NFSU2_TR(0x5797ab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5797b0:L5797b0:{c.instructions+=5;NFSU2_TR(0x5797b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5797b1:{NFSU2_TR(0x5797b1);
__builtin_memmove((R+24),gp(0x865550),4);
}
B5797b7:{NFSU2_TR(0x5797b7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5797b8:{NFSU2_TR(0x5797b8);
w4(R+4,u32(0x865550ull));
}
B5797bd:{NFSU2_TR(0x5797bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5797c2ull));
TAIL_STATIC(0x502fd0u,502);
}
B5797c2:L5797c2:{c.instructions+=3;NFSU2_TR(0x5797c2);
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
B5797c4:{NFSU2_TR(0x5797c4);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5797c8:{NFSU2_TR(0x5797c8);
if(r1(R+518)){{goto L5797db;}}
}
B5797ca:L5797ca:{c.instructions+=1;NFSU2_TR(0x5797ca);
__builtin_memmove((R+12),(R+12),4);
}
B5797d0:L5797d0:{c.instructions+=2;NFSU2_TR(0x5797d0);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
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
B5797d3:{NFSU2_TR(0x5797d3);
if(r1(R+518)){{goto L579800;}}
}
B5797d5:L5797d5:{c.instructions+=3;NFSU2_TR(0x5797d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5797d7:{NFSU2_TR(0x5797d7);
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
B5797d9:{NFSU2_TR(0x5797d9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5797d0u);}goto L5797d0;}}
}
B5797db:L5797db:{c.instructions+=3;NFSU2_TR(0x5797db);
__builtin_memmove((R+24),gp(0x865220),4);
}
B5797e1:{NFSU2_TR(0x5797e1);
w4(R+4,u32(0x865220ull));
}
B5797e6:{NFSU2_TR(0x5797e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5797ebull));
TAIL_STATIC(0x502fd0u,502);
}
B5797eb:L5797eb:{c.instructions+=2;NFSU2_TR(0x5797eb);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5797ed:{NFSU2_TR(0x5797ed);
if(r1(R+518)){{goto L5797fb;}}
}
B5797ef:L5797ef:{c.instructions+=1;NFSU2_TR(0x5797ef);
}
B5797f0:L5797f0:{c.instructions+=2;NFSU2_TR(0x5797f0);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
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
B5797f3:{NFSU2_TR(0x5797f3);
if(r1(R+518)){{goto L579800;}}
}
B5797f5:L5797f5:{c.instructions+=3;NFSU2_TR(0x5797f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5797f7:{NFSU2_TR(0x5797f7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5797f9:{NFSU2_TR(0x5797f9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5797f0u);}goto L5797f0;}}
}
B5797fb:L5797fb:{c.instructions+=4;NFSU2_TR(0x5797fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5797fc:{NFSU2_TR(0x5797fc);
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
B5797fe:{NFSU2_TR(0x5797fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5797ff:{NFSU2_TR(0x5797ff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B579800:L579800:{c.instructions+=4;NFSU2_TR(0x579800);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B579801:{NFSU2_TR(0x579801);
__builtin_memmove((R+0),(R+24),4);
}
B579803:{NFSU2_TR(0x579803);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B579804:{NFSU2_TR(0x579804);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B579810:L579810:{c.instructions+=3;NFSU2_TR(0x579810);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B579814:{NFSU2_TR(0x579814);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579815:{NFSU2_TR(0x579815);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57981aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5797b0u);}goto L5797b0;}
}
B57981a:L57981a:{c.instructions+=3;NFSU2_TR(0x57981a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B57981d:{NFSU2_TR(0x57981d);
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
B57981f:{NFSU2_TR(0x57981f);
if(r1(R+518)){{goto L57982f;}}
}
B579821:L579821:{c.instructions+=4;NFSU2_TR(0x579821);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B579825:{NFSU2_TR(0x579825);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B579829:{NFSU2_TR(0x579829);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57982c:{NFSU2_TR(0x57982c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57982f:L57982f:{c.instructions+=1;NFSU2_TR(0x57982f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B579830:L579830:{c.instructions+=10;NFSU2_TR(0x579830);
__builtin_memmove((R+4),gp(0x86521c),4);
}
B579836:{NFSU2_TR(0x579836);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57983a:{NFSU2_TR(0x57983a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B57983c:{NFSU2_TR(0x57983c);
__builtin_memmove(gp(0x86521c),(R+0),4);
}
B579841:{NFSU2_TR(0x579841);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B579844:{NFSU2_TR(0x579844);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B579847:{NFSU2_TR(0x579847);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B579849:{NFSU2_TR(0x579849);
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
B57984b:{NFSU2_TR(0x57984b);
u8 U[4];
w4(U+0,u32(0x865218ull));
s4(u32(r4(R+0)),r4(U+0));
}
B579851:{NFSU2_TR(0x579851);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L57986a;}}
}
B579853:L579853:{c.instructions+=2;NFSU2_TR(0x579853);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B579856:{NFSU2_TR(0x579856);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579857:L579857:{c.instructions+=8;NFSU2_TR(0x579857);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B57985a:{NFSU2_TR(0x57985a);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B57985c:{NFSU2_TR(0x57985c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B57985e:{NFSU2_TR(0x57985e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B579861:{NFSU2_TR(0x579861);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B579862:{NFSU2_TR(0x579862);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x14ull))));
}
B579865:{NFSU2_TR(0x579865);
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
B579867:{NFSU2_TR(0x579867);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x579857u);}goto L579857;}}
}
B579869:L579869:{c.instructions+=1;NFSU2_TR(0x579869);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57986a:L57986a:{c.instructions+=1;NFSU2_TR(0x57986a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B579870:L579870:{c.instructions+=6;NFSU2_TR(0x579870);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B579874:{NFSU2_TR(0x579874);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579875:{NFSU2_TR(0x579875);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579876:{NFSU2_TR(0x579876);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579877:{NFSU2_TR(0x579877);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579878:{NFSU2_TR(0x579878);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57987dull));
TAIL_STATIC(0x575330u,575);
}
B57987d:L57987d:{c.instructions+=5;NFSU2_TR(0x57987d);
__builtin_memmove((R+24),gp(0x865218),4);
}
B579883:{NFSU2_TR(0x579883);
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
B579886:{NFSU2_TR(0x579886);
w4(R+4,u32(0x865218ull));
}
B57988b:{NFSU2_TR(0x57988b);
__builtin_memmove((R+28),(R+0),4);
}
B57988d:{NFSU2_TR(0x57988d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x579892ull));
TAIL_STATIC(0x502fd0u,502);
}
B579892:L579892:{c.instructions+=3;NFSU2_TR(0x579892);
__builtin_memmove((R+12),(R+0),4);
}
B579894:{NFSU2_TR(0x579894);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B579896:{NFSU2_TR(0x579896);
if(r1(R+518)){{goto L5798b6;}}
}
B579898:L579898:{c.instructions+=4;NFSU2_TR(0x579898);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57989b:{NFSU2_TR(0x57989b);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B57989d:{NFSU2_TR(0x57989d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57989f:{NFSU2_TR(0x57989f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5798b0;}}
}
B5798a1:L5798a1:{c.instructions+=1;NFSU2_TR(0x5798a1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5798a4:L5798a4:{c.instructions+=2;NFSU2_TR(0x5798a4);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
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
B5798a6:{NFSU2_TR(0x5798a6);
if(r1(R+518)){{goto L5798b8;}}
}
B5798a8:L5798a8:{c.instructions+=4;NFSU2_TR(0x5798a8);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5798a9:{NFSU2_TR(0x5798a9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
}
B5798ac:{NFSU2_TR(0x5798ac);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5798ae:{NFSU2_TR(0x5798ae);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5798a4u);}goto L5798a4;}}
}
B5798b0:L5798b0:{c.instructions+=3;NFSU2_TR(0x5798b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5798b2:{NFSU2_TR(0x5798b2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5798b4:{NFSU2_TR(0x5798b4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x579898u);}goto L579898;}}
}
B5798b6:L5798b6:{c.instructions+=1;NFSU2_TR(0x5798b6);
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
B5798b8:L5798b8:{c.instructions+=4;NFSU2_TR(0x5798b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5798b9:{NFSU2_TR(0x5798b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5798ba:{NFSU2_TR(0x5798ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5798bb:{NFSU2_TR(0x5798bb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5798c0:L5798c0:{c.instructions+=8;NFSU2_TR(0x5798c0);
__builtin_memmove((R+0),gp(0x865108),4);
}
B5798c5:{NFSU2_TR(0x5798c5);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B5798c6:{NFSU2_TR(0x5798c6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5798c8:{NFSU2_TR(0x5798c8);
__builtin_memmove(gp(0x865108),(R+0),4);
}
B5798cd:{NFSU2_TR(0x5798cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5798d0:{NFSU2_TR(0x5798d0);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5798d2:{NFSU2_TR(0x5798d2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5798d3:{NFSU2_TR(0x5798d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5798d8ull));
TAIL_STATIC(0x6f7790u,6f7);
}
B5798d8:L5798d8:{c.instructions+=3;NFSU2_TR(0x5798d8);
u8 U[4];
w4(U+0,u32(0x5755d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5798dd:{NFSU2_TR(0x5798dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5798de:{NFSU2_TR(0x5798de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5798e3ull));
TAIL_STATIC(0x6f76f2u,6f7);
}
B5798e3:L5798e3:{c.instructions+=2;NFSU2_TR(0x5798e3);
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
B5798e6:{NFSU2_TR(0x5798e6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5798f0:L5798f0:{c.instructions+=6;NFSU2_TR(0x5798f0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5798f1:{NFSU2_TR(0x5798f1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5798f2:{NFSU2_TR(0x5798f2);
__builtin_memmove((R+24),gp(0x866584),4);
}
B5798f8:{NFSU2_TR(0x5798f8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5798f9:{NFSU2_TR(0x5798f9);
w4(R+4,u32(0x866584ull));
}
B5798fe:{NFSU2_TR(0x5798fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x579903ull));
TAIL_STATIC(0x502fd0u,502);
}
B579903:L579903:{c.instructions+=3;NFSU2_TR(0x579903);
__builtin_memmove((R+28),(R+0),4);
}
B579905:{NFSU2_TR(0x579905);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B579907:{NFSU2_TR(0x579907);
if(r1(R+518)){{goto L579927;}}
}
B579909:L579909:{c.instructions+=2;NFSU2_TR(0x579909);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B57990d:{NFSU2_TR(0x57990d);
__builtin_memmove((R+4),(R+4),4);
}
B579910:L579910:{c.instructions+=4;NFSU2_TR(0x579910);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B579913:{NFSU2_TR(0x579913);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579914:{NFSU2_TR(0x579914);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579915:{NFSU2_TR(0x579915);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57991aull));
TAIL_STATIC(0x43dc30u,43d);
}
B57991a:L57991a:{c.instructions+=3;NFSU2_TR(0x57991a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B57991d:{NFSU2_TR(0x57991d);
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
B57991f:{NFSU2_TR(0x57991f);
if(r1(R+518)){{goto L57992d;}}
}
B579921:L579921:{c.instructions+=3;NFSU2_TR(0x579921);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B579923:{NFSU2_TR(0x579923);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B579925:{NFSU2_TR(0x579925);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x579910u);}goto L579910;}}
}
B579927:L579927:{c.instructions+=5;NFSU2_TR(0x579927);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B579928:{NFSU2_TR(0x579928);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B579929:{NFSU2_TR(0x579929);
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
B57992b:{NFSU2_TR(0x57992b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57992c:{NFSU2_TR(0x57992c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57992d:L57992d:{c.instructions+=14;NFSU2_TR(0x57992d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B57992f:{NFSU2_TR(0x57992f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B579932:{NFSU2_TR(0x579932);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B579934:{NFSU2_TR(0x579934);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B579937:{NFSU2_TR(0x579937);
__builtin_memmove((R+0),gp(0x866588),4);
}
B57993c:{NFSU2_TR(0x57993c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B57993e:{NFSU2_TR(0x57993e);
__builtin_memmove(gp(0x866588),(R+24),4);
}
B579944:{NFSU2_TR(0x579944);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B579947:{NFSU2_TR(0x579947);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B579948:{NFSU2_TR(0x579948);
u8 U[4];
w4(U+0,u32(0x866584ull));
s4(u32(r4(R+24)),r4(U+0));
}
B57994e:{NFSU2_TR(0x57994e);
__builtin_memmove((R+0),(R+24),4);
}
B579950:{NFSU2_TR(0x579950);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B579951:{NFSU2_TR(0x579951);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B579952:{NFSU2_TR(0x579952);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B579960:L579960:{c.instructions+=3;NFSU2_TR(0x579960);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579961:{NFSU2_TR(0x579961);
__builtin_memmove((R+24),(R+4),4);
}
B579963:{NFSU2_TR(0x579963);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x579968ull));
{goto L579980;}
}
B579968:L579968:{c.instructions+=2;NFSU2_TR(0x579968);
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
B57996d:{NFSU2_TR(0x57996d);
if(r1(R+518)){{goto L579978;}}
}
B57996f:L57996f:{c.instructions+=2;NFSU2_TR(0x57996f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579970:{NFSU2_TR(0x579970);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x579975ull));
TAIL_STATIC(0x75c6dau,75c);
}
B579975:L579975:{c.instructions+=1;NFSU2_TR(0x579975);
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
B579978:L579978:{c.instructions+=3;NFSU2_TR(0x579978);
__builtin_memmove((R+0),(R+24),4);
}
B57997a:{NFSU2_TR(0x57997a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57997b:{NFSU2_TR(0x57997b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B579980:L579980:{c.instructions+=2;NFSU2_TR(0x579980);
u8 U[4];
w4(U+0,u32(0x7a0358ull));
s4(u32(r4(R+4)),r4(U+0));
}
B579986:{NFSU2_TR(0x579986);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B579990:L579990:{c.instructions+=14;NFSU2_TR(0x579990);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B579996:{NFSU2_TR(0x579996);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579998:{NFSU2_TR(0x579998);
u8 U[4];
w4(U+0,u32(0x7787cbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57999d:{NFSU2_TR(0x57999d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57999e:{NFSU2_TR(0x57999e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5799a5:{NFSU2_TR(0x5799a5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5799a6:{NFSU2_TR(0x5799a6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5799a7:{NFSU2_TR(0x5799a7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5799a8:{NFSU2_TR(0x5799a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5799ac:{NFSU2_TR(0x5799ac);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5799ae:{NFSU2_TR(0x5799ae);
u8 U[4];
w4(U+0,u32(0x7a0460ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5799b3:{NFSU2_TR(0x5799b3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5799b4:{NFSU2_TR(0x5799b4);
__builtin_memmove((R+12),(R+4),4);
}
B5799b6:{NFSU2_TR(0x5799b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5799bbull));
TAIL_STATIC(0x43dc60u,43d);
}
B5799bb:L5799bb:{c.instructions+=3;NFSU2_TR(0x5799bb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5799be:{NFSU2_TR(0x5799be);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5799c0:{NFSU2_TR(0x5799c0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5799c5;}}
}
B5799c2:L5799c2:{c.instructions+=1;NFSU2_TR(0x5799c2);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x6ull))));
}
B5799c5:L5799c5:{c.instructions+=3;NFSU2_TR(0x5799c5);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+0),(U+0),1);
}
B5799c7:{NFSU2_TR(0x5799c7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x5cull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5799c9:{NFSU2_TR(0x5799c9);
if(r1(R+518)){{goto L5799cf;}}
}
B5799cb:L5799cb:{c.instructions+=2;NFSU2_TR(0x5799cb);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x2full))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5799cd:{NFSU2_TR(0x5799cd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5799d2;}}
}
B5799cf:L5799cf:{c.instructions+=2;NFSU2_TR(0x5799cf);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5799d0:{NFSU2_TR(0x5799d0);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5799c5u);}goto L5799c5;}
}
B5799d2:L5799d2:{c.instructions+=3;NFSU2_TR(0x5799d2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5799d3:{NFSU2_TR(0x5799d3);
__builtin_memmove((R+4),(R+12),4);
}
B5799d5:{NFSU2_TR(0x5799d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5799daull));
TAIL_STATIC(0x5754f0u,575);
}
B5799da:L5799da:{c.instructions+=4;NFSU2_TR(0x5799da);
__builtin_memmove((R+24),(R+0),4);
}
B5799dc:{NFSU2_TR(0x5799dc);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B5799df:{NFSU2_TR(0x5799df);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5799e1:{NFSU2_TR(0x5799e1);
if(r1(R+518)){{goto L579a2b;}}
}
B5799e3:L5799e3:{c.instructions+=3;NFSU2_TR(0x5799e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5799e6:{NFSU2_TR(0x5799e6);
u8 U[24];
w4(U+0,u32(u32(u32(0x41cull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(r4(R+0))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B5799ed:{NFSU2_TR(0x5799ed);
if(r1(R+518)){{goto L579a2b;}}
}
B5799ef:L5799ef:{c.instructions+=3;NFSU2_TR(0x5799ef);
__builtin_memmove((R+8),gp(0x865104),4);
}
B5799f5:{NFSU2_TR(0x5799f5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5799f6:{NFSU2_TR(0x5799f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5799fbull));
TAIL_STATIC(0x440e50u,440);
}
B5799fb:L5799fb:{c.instructions+=5;NFSU2_TR(0x5799fb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5799fe:{NFSU2_TR(0x5799fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B579a02:{NFSU2_TR(0x579a02);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B579a04:{NFSU2_TR(0x579a04);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B579a0c:{NFSU2_TR(0x579a0c);
if(r1(R+518)){{goto L579a19;}}
}
B579a0e:L579a0e:{c.instructions+=4;NFSU2_TR(0x579a0e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579a0f:{NFSU2_TR(0x579a0f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579a10:{NFSU2_TR(0x579a10);
__builtin_memmove((R+4),(R+0),4);
}
B579a12:{NFSU2_TR(0x579a12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x579a17ull));
TAIL_STATIC(0x5753c0u,575);
}
B579a17:L579a17:{c.instructions+=1;NFSU2_TR(0x579a17);
{goto L579a1b;}
}
B579a19:L579a19:{c.instructions+=1;NFSU2_TR(0x579a19);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B579a1b:L579a1b:{c.instructions+=4;NFSU2_TR(0x579a1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B579a1e:{NFSU2_TR(0x579a1e);
u8 U[16];
w4(U+0,u32(u32(u32(0x41cull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B579a25:{NFSU2_TR(0x579a25);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B579a29:{NFSU2_TR(0x579a29);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B579a2b:L579a2b:{c.instructions+=7;NFSU2_TR(0x579a2b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B579a2f:{NFSU2_TR(0x579a2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B579a30:{NFSU2_TR(0x579a30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B579a31:{NFSU2_TR(0x579a31);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B579a38:{NFSU2_TR(0x579a38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B579a39:{NFSU2_TR(0x579a39);
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
B579a3c:{NFSU2_TR(0x579a3c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B579a40:L579a40:{c.instructions+=7;NFSU2_TR(0x579a40);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579a41:{NFSU2_TR(0x579a41);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B579a45:{NFSU2_TR(0x579a45);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579a46:{NFSU2_TR(0x579a46);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579a48:{NFSU2_TR(0x579a48);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579a49:{NFSU2_TR(0x579a49);
__builtin_memmove((R+28),(R+4),4);
}
B579a4b:{NFSU2_TR(0x579a4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x579a50ull));
TAIL_STATIC(0x6f87eau,6f8);
}
B579a50:L579a50:{c.instructions+=3;NFSU2_TR(0x579a50);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B579a53:{NFSU2_TR(0x579a53);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B579a55:{NFSU2_TR(0x579a55);
if(r1(R+518)){{goto L579b10;}}
}
B579a5b:L579a5b:{c.instructions+=6;NFSU2_TR(0x579a5b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579a5c:{NFSU2_TR(0x579a5c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579a5d:{NFSU2_TR(0x579a5d);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579a5f:{NFSU2_TR(0x579a5f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579a61:{NFSU2_TR(0x579a61);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579a62:{NFSU2_TR(0x579a62);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x579a67ull));
TAIL_STATIC(0x6f8710u,6f8);
}
B579a67:L579a67:{c.instructions+=4;NFSU2_TR(0x579a67);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579a69:{NFSU2_TR(0x579a69);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579a6a:{NFSU2_TR(0x579a6a);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B579a6e:{NFSU2_TR(0x579a6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x579a73ull));
TAIL_STATIC(0x6f87c5u,6f8);
}
B579a73:L579a73:{c.instructions+=9;NFSU2_TR(0x579a73);
__builtin_memmove((R+12),(R+0),4);
}
B579a75:{NFSU2_TR(0x579a75);
w4(R+0,u32(0xaaaaaaabull));
}
B579a7a:{NFSU2_TR(0x579a7a);
u8 U[24];
w8(U+0,u64(r4(R+0)));
w8(U+8,u64(r4(R+12)));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B579a7c:{NFSU2_TR(0x579a7c);
__builtin_memmove((R+24),(R+8),4);
}
B579a7e:{NFSU2_TR(0x579a7e);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B579a81:{NFSU2_TR(0x579a81);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B579a84:{NFSU2_TR(0x579a84);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B579a87:{NFSU2_TR(0x579a87);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579a88:{NFSU2_TR(0x579a88);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x579a8dull));
TAIL_STATIC(0x75c6c8u,75c);
}
B579a8d:L579a8d:{c.instructions+=8;NFSU2_TR(0x579a8d);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B579a91:{NFSU2_TR(0x579a91);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579a93:{NFSU2_TR(0x579a93);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579a94:{NFSU2_TR(0x579a94);
__builtin_memmove((R+20),(R+0),4);
}
B579a96:{NFSU2_TR(0x579a96);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579a97:{NFSU2_TR(0x579a97);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579a99:{NFSU2_TR(0x579a99);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579a9a:{NFSU2_TR(0x579a9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x579a9full));
TAIL_STATIC(0x6f8738u,6f8);
}
B579a9f:L579a9f:{c.instructions+=7;NFSU2_TR(0x579a9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B579aa2:{NFSU2_TR(0x579aa2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B579aa5:{NFSU2_TR(0x579aa5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2cull))));
}
B579aa8:{NFSU2_TR(0x579aa8);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x41cull))));
__builtin_memmove((R+20),(U+0),4);
}
B579aae:{NFSU2_TR(0x579aae);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((R+24),(U+0),4);
}
B579ab1:{NFSU2_TR(0x579ab1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B579ab5:{NFSU2_TR(0x579ab5);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B579ab7:L579ab7:{c.instructions+=5;NFSU2_TR(0x579ab7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579ab8:{NFSU2_TR(0x579ab8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579ab9:{NFSU2_TR(0x579ab9);
u8 U[4];
w4(U+0,u32(0x7a0874ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579abe:{NFSU2_TR(0x579abe);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579abf:{NFSU2_TR(0x579abf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x579ac4ull));
TAIL_STATIC(0x4400d0u,440);
}
B579ac4:L579ac4:{c.instructions+=3;NFSU2_TR(0x579ac4);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579ac6:{NFSU2_TR(0x579ac6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579ac7:{NFSU2_TR(0x579ac7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x579accull));
TAIL_STATIC(0x6f87eau,6f8);
}
B579acc:L579acc:{c.instructions+=3;NFSU2_TR(0x579acc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B579acf:{NFSU2_TR(0x579acf);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B579ad1:{NFSU2_TR(0x579ad1);
if(r1(R+518)){{goto L579ae5;}}
}
B579ad3:L579ad3:{c.instructions+=4;NFSU2_TR(0x579ad3);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579ad5:{NFSU2_TR(0x579ad5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579ad7:{NFSU2_TR(0x579ad7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579ad8:{NFSU2_TR(0x579ad8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x579addull));
TAIL_STATIC(0x6f8710u,6f8);
}
B579add:L579add:{c.instructions+=3;NFSU2_TR(0x579add);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B579ae0:{NFSU2_TR(0x579ae0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+20)),r4(U+0));
}
B579ae3:{NFSU2_TR(0x579ae3);
{goto L579aec;}
}
B579ae5:L579ae5:{c.instructions+=1;NFSU2_TR(0x579ae5);
u8 U[4];
w4(U+0,u32(0xffffffffull));
s4(u32(r4(R+20)),r4(U+0));
}
B579aec:L579aec:{c.instructions+=5;NFSU2_TR(0x579aec);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B579aed:{NFSU2_TR(0x579aed);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B579af0:{NFSU2_TR(0x579af0);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x40ull))));
}
B579af3:{NFSU2_TR(0x579af3);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x10ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B579af6:{NFSU2_TR(0x579af6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x579ab7u);}goto L579ab7;}}
}
B579af8:L579af8:{c.instructions+=4;NFSU2_TR(0x579af8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B579afc:{NFSU2_TR(0x579afc);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579afe:{NFSU2_TR(0x579afe);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579aff:{NFSU2_TR(0x579aff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x579b04ull));
TAIL_STATIC(0x6f879au,6f8);
}
B579b04:L579b04:{c.instructions+=7;NFSU2_TR(0x579b04);
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
B579b07:{NFSU2_TR(0x579b07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B579b08:{NFSU2_TR(0x579b08);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B579b09:{NFSU2_TR(0x579b09);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B579b0a:{NFSU2_TR(0x579b0a);
w1(R+0,u8(0x1ull));
}
B579b0c:{NFSU2_TR(0x579b0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B579b0d:{NFSU2_TR(0x579b0d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B579b10:L579b10:{c.instructions+=4;NFSU2_TR(0x579b10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B579b11:{NFSU2_TR(0x579b11);
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
B579b13:{NFSU2_TR(0x579b13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B579b14:{NFSU2_TR(0x579b14);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B579b20:L579b20:{c.instructions+=2;NFSU2_TR(0x579b20);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579b21:{NFSU2_TR(0x579b21);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x579b26ull));
TAIL_STATIC(0x43bdf0u,43b);
}
B579b26:L579b26:{c.instructions+=2;NFSU2_TR(0x579b26);
w4(R+4,u32(0x864efcull));
}
B579b2b:{NFSU2_TR(0x579b2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x579b30ull));
TAIL_STATIC(0x6f55ddu,6f5);
}
B579b30:L579b30:{c.instructions+=3;NFSU2_TR(0x579b30);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B579b34:{NFSU2_TR(0x579b34);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579b35:{NFSU2_TR(0x579b35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x579b3aull));
TAIL_STATIC(0x6f76e9u,6f7);
}
B579b3a:L579b3a:{c.instructions+=13;NFSU2_TR(0x579b3a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B579b3e:{NFSU2_TR(0x579b3e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B579b40:{NFSU2_TR(0x579b40);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B579b43:{NFSU2_TR(0x579b43);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B579b45:{NFSU2_TR(0x579b45);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B579b48:{NFSU2_TR(0x579b48);
__builtin_memmove((R+0),gp(0x865194),4);
}
B579b4d:{NFSU2_TR(0x579b4d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B579b4f:{NFSU2_TR(0x579b4f);
__builtin_memmove(gp(0x865194),(R+24),4);
}
B579b55:{NFSU2_TR(0x579b55);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B579b58:{NFSU2_TR(0x579b58);
w4(R+4,u32(0x864efcull));
}
B579b5d:{NFSU2_TR(0x579b5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B579b60:{NFSU2_TR(0x579b60);
u8 U[4];
w4(U+0,u32(0x865190ull));
s4(u32(r4(R+24)),r4(U+0));
}
B579b66:{NFSU2_TR(0x579b66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x579b6bull));
TAIL_STATIC(0x6f55e8u,6f5);
}
B579b6b:L579b6b:{c.instructions+=3;NFSU2_TR(0x579b6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B579b6e:{NFSU2_TR(0x579b6e);
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
B579b70:{NFSU2_TR(0x579b70);
if(r1(R+518)){{goto L579b8a;}}
}
B579b72:L579b72:{c.instructions+=4;NFSU2_TR(0x579b72);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579b74:{NFSU2_TR(0x579b74);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579b76:{NFSU2_TR(0x579b76);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579b77:{NFSU2_TR(0x579b77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x579b7cull));
TAIL_STATIC(0x6f7790u,6f7);
}
B579b7c:L579b7c:{c.instructions+=3;NFSU2_TR(0x579b7c);
u8 U[4];
w4(U+0,u32(0x5755d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579b81:{NFSU2_TR(0x579b81);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579b82:{NFSU2_TR(0x579b82);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x579b87ull));
TAIL_STATIC(0x6f76f2u,6f7);
}
B579b87:L579b87:{c.instructions+=1;NFSU2_TR(0x579b87);
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
B579b8a:L579b8a:{c.instructions+=2;NFSU2_TR(0x579b8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B579b8b:{NFSU2_TR(0x579b8b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B579b90:L579b90:{c.instructions+=5;NFSU2_TR(0x579b90);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579b91:{NFSU2_TR(0x579b91);
__builtin_memmove((R+24),(R+4),4);
}
B579b93:{NFSU2_TR(0x579b93);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B579b96:{NFSU2_TR(0x579b96);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B579b98:{NFSU2_TR(0x579b98);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L579bcc;}}
}
B579b9a:L579b9a:{c.instructions+=3;NFSU2_TR(0x579b9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B579b9d:{NFSU2_TR(0x579b9d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B579b9f:{NFSU2_TR(0x579b9f);
if(r1(R+518)){{goto L579ba6;}}
}
B579ba1:L579ba1:{c.instructions+=2;NFSU2_TR(0x579ba1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B579ba4:{NFSU2_TR(0x579ba4);
{goto L579bc5;}
}
B579ba6:L579ba6:{c.instructions+=3;NFSU2_TR(0x579ba6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B579ba9:{NFSU2_TR(0x579ba9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B579bab:{NFSU2_TR(0x579bab);
if(r1(R+518)){{goto L579bc5;}}
}
B579bad:L579bad:{c.instructions+=4;NFSU2_TR(0x579bad);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579baf:{NFSU2_TR(0x579baf);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579bb1:{NFSU2_TR(0x579bb1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579bb2:{NFSU2_TR(0x579bb2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x579bb7ull));
TAIL_STATIC(0x6f7790u,6f7);
}
B579bb7:L579bb7:{c.instructions+=3;NFSU2_TR(0x579bb7);
u8 U[4];
w4(U+0,u32(0x5755d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579bbc:{NFSU2_TR(0x579bbc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579bbd:{NFSU2_TR(0x579bbd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x579bc2ull));
TAIL_STATIC(0x6f76f2u,6f7);
}
B579bc2:L579bc2:{c.instructions+=1;NFSU2_TR(0x579bc2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B579bc5:L579bc5:{c.instructions+=1;NFSU2_TR(0x579bc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B579bcc:L579bcc:{c.instructions+=2;NFSU2_TR(0x579bcc);
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
B579bd1:{NFSU2_TR(0x579bd1);
if(r1(R+518)){{goto L579be2;}}
}
B579bd3:L579bd3:{c.instructions+=4;NFSU2_TR(0x579bd3);
__builtin_memmove((R+0),gp(0x865104),4);
}
B579bd8:{NFSU2_TR(0x579bd8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579bd9:{NFSU2_TR(0x579bd9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579bda:{NFSU2_TR(0x579bda);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x579bdfull));
TAIL_STATIC(0x43f920u,43f);
}
B579bdf:L579bdf:{c.instructions+=1;NFSU2_TR(0x579bdf);
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
B579be2:L579be2:{c.instructions+=3;NFSU2_TR(0x579be2);
__builtin_memmove((R+0),(R+24),4);
}
B579be4:{NFSU2_TR(0x579be4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B579be5:{NFSU2_TR(0x579be5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B579bf0:L579bf0:{c.instructions+=3;NFSU2_TR(0x579bf0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B579bf4:{NFSU2_TR(0x579bf4);
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
B579bf6:{NFSU2_TR(0x579bf6);
if(r1(R+518)){{goto L579c0e;}}
}
B579bf8:L579bf8:{c.instructions+=3;NFSU2_TR(0x579bf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B579bfb:{NFSU2_TR(0x579bfb);
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
B579bfd:{NFSU2_TR(0x579bfd);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L579c07;}}
}
B579bff:L579bff:{c.instructions+=2;NFSU2_TR(0x579bff);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B579c06:{NFSU2_TR(0x579c06);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B579c07:L579c07:{c.instructions+=2;NFSU2_TR(0x579c07);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579c09:{NFSU2_TR(0x579c09);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x579c0eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x579b90u);}goto L579b90;}
}
B579c0e:L579c0e:{c.instructions+=1;NFSU2_TR(0x579c0e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B579c10:L579c10:{c.instructions+=5;NFSU2_TR(0x579c10);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579c11:{NFSU2_TR(0x579c11);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579c12:{NFSU2_TR(0x579c12);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579c13:{NFSU2_TR(0x579c13);
u8 U[4];
w4(U+0,u32(0x2000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579c18:{NFSU2_TR(0x579c18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x579c1dull));
TAIL_STATIC(0x75c6c8u,75c);
}
B579c1d:L579c1d:{c.instructions+=7;NFSU2_TR(0x579c1d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B579c21:{NFSU2_TR(0x579c21);
__builtin_memmove((R+28),(R+0),4);
}
B579c23:{NFSU2_TR(0x579c23);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B579c27:{NFSU2_TR(0x579c27);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579c28:{NFSU2_TR(0x579c28);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579c29:{NFSU2_TR(0x579c29);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579c2a:{NFSU2_TR(0x579c2a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x579c2full));
TAIL_STATIC(0x43fbc0u,43f);
}
B579c2f:L579c2f:{c.instructions+=10;NFSU2_TR(0x579c2f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B579c33:{NFSU2_TR(0x579c33);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B579c36:{NFSU2_TR(0x579c36);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579c38:{NFSU2_TR(0x579c38);
__builtin_memmove((R+12),(R+0),4);
}
B579c3a:{NFSU2_TR(0x579c3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B579c3d:{NFSU2_TR(0x579c3d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579c3e:{NFSU2_TR(0x579c3e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579c3f:{NFSU2_TR(0x579c3f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579c40:{NFSU2_TR(0x579c40);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579c41:{NFSU2_TR(0x579c41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x579c46ull));
TAIL_STATIC(0x6f876cu,6f8);
}
B579c46:L579c46:{c.instructions+=8;NFSU2_TR(0x579c46);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B579c49:{NFSU2_TR(0x579c49);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B579c4c:{NFSU2_TR(0x579c4c);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+12))));
}
B579c4e:{NFSU2_TR(0x579c4e);
__builtin_memmove((R+0),(R+8),4);
}
B579c50:{NFSU2_TR(0x579c50);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B579c53:{NFSU2_TR(0x579c53);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B579c55:{NFSU2_TR(0x579c55);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B579c58:{NFSU2_TR(0x579c58);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L579c5d;}}
}
B579c5a:L579c5a:{c.instructions+=1;NFSU2_TR(0x579c5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B579c5d:L579c5d:{c.instructions+=2;NFSU2_TR(0x579c5d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579c5e:{NFSU2_TR(0x579c5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x579c63ull));
TAIL_STATIC(0x75c6dau,75c);
}
B579c63:L579c63:{c.instructions+=6;NFSU2_TR(0x579c63);
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
B579c66:{NFSU2_TR(0x579c66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B579c67:{NFSU2_TR(0x579c67);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B579c68:{NFSU2_TR(0x579c68);
__builtin_memmove((R+0),(R+12),4);
}
B579c6a:{NFSU2_TR(0x579c6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B579c6b:{NFSU2_TR(0x579c6b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B579c70:L579c70:{c.instructions+=5;NFSU2_TR(0x579c70);
u8 U[9];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
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
B579c75:{NFSU2_TR(0x579c75);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579c76:{NFSU2_TR(0x579c76);
__builtin_memmove((R+24),(R+4),4);
}
B579c78:{NFSU2_TR(0x579c78);
u8 U[4];
w4(U+0,u32(0x7a0604ull));
s4(u32(r4(R+24)),r4(U+0));
}
B579c7e:{NFSU2_TR(0x579c7e);
if(r1(R+518)){{goto L579c89;}}
}
B579c80:L579c80:{c.instructions+=2;NFSU2_TR(0x579c80);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579c81:{NFSU2_TR(0x579c81);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x579c86ull));
TAIL_STATIC(0x75c6dau,75c);
}
B579c86:L579c86:{c.instructions+=1;NFSU2_TR(0x579c86);
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
B579c89:L579c89:{c.instructions+=3;NFSU2_TR(0x579c89);
__builtin_memmove((R+0),(R+24),4);
}
B579c8b:{NFSU2_TR(0x579c8b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B579c8c:{NFSU2_TR(0x579c8c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B579c90:L579c90:{c.instructions+=6;NFSU2_TR(0x579c90);
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
B579c92:{NFSU2_TR(0x579c92);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B579c96:{NFSU2_TR(0x579c96);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B579c99:{NFSU2_TR(0x579c99);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B579c9c:{NFSU2_TR(0x579c9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B579c9f:{NFSU2_TR(0x579c9f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B579ca0:L579ca0:{c.instructions+=6;NFSU2_TR(0x579ca0);
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
B579ca2:{NFSU2_TR(0x579ca2);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B579ca5:{NFSU2_TR(0x579ca5);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B579ca8:{NFSU2_TR(0x579ca8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B579cab:{NFSU2_TR(0x579cab);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B579cae:{NFSU2_TR(0x579cae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B579cb0:L579cb0:{c.instructions+=10;NFSU2_TR(0x579cb0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579cb1:{NFSU2_TR(0x579cb1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579cb2:{NFSU2_TR(0x579cb2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B579cb6:{NFSU2_TR(0x579cb6);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0x34ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B579cb9:{NFSU2_TR(0x579cb9);
__builtin_memmove((R+24),(R+4),4);
}
B579cbb:{NFSU2_TR(0x579cbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B579cbe:{NFSU2_TR(0x579cbe);
u8 U[13];
w4(U+0,u32(u32(u32(0x32ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B579cc2:{NFSU2_TR(0x579cc2);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B579cc4:{NFSU2_TR(0x579cc4);
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
B579cc6:{NFSU2_TR(0x579cc6);
if(r1(R+518)){{goto L579d21;}}
}
B579cc8:L579cc8:{c.instructions+=3;NFSU2_TR(0x579cc8);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B579ccb:{NFSU2_TR(0x579ccb);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B579ccd:{NFSU2_TR(0x579ccd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L579cde;}}
}
B579ccf:L579ccf:{c.instructions+=3;NFSU2_TR(0x579ccf);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579cd1:{NFSU2_TR(0x579cd1);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579cd6:{NFSU2_TR(0x579cd6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x579cdbull));
TAIL_STATIC(0x51de60u,51d);
}
B579cdb:L579cdb:{c.instructions+=1;NFSU2_TR(0x579cdb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B579cde:L579cde:{c.instructions+=5;NFSU2_TR(0x579cde);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B579ce1:{NFSU2_TR(0x579ce1);
u8 U[16];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B579ce5:{NFSU2_TR(0x579ce5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579ce6:{NFSU2_TR(0x579ce6);
__builtin_memmove((R+4),(R+24),4);
}
B579ce8:{NFSU2_TR(0x579ce8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x579cedull));
TAIL_STATIC(0x576050u,576);
}
B579ced:L579ced:{c.instructions+=6;NFSU2_TR(0x579ced);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B579cf0:{NFSU2_TR(0x579cf0);
u8 U[13];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x1ull));
s1(u32(r4(U+8)),r1(U+12));
}
B579cf5:{NFSU2_TR(0x579cf5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B579cf8:{NFSU2_TR(0x579cf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B579cfb:{NFSU2_TR(0x579cfb);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x5ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x5ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B579cff:{NFSU2_TR(0x579cff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L579d0c;}}
}
B579d01:L579d01:{c.instructions+=4;NFSU2_TR(0x579d01);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B579d04:{NFSU2_TR(0x579d04);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579d05:{NFSU2_TR(0x579d05);
__builtin_memmove((R+4),(R+24),4);
}
B579d07:{NFSU2_TR(0x579d07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x579d0cull));
TAIL_STATIC(0x5760a0u,576);
}
B579d0c:L579d0c:{c.instructions+=5;NFSU2_TR(0x579d0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B579d0f:{NFSU2_TR(0x579d0f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B579d13:{NFSU2_TR(0x579d13);
u8 U[16];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B579d17:{NFSU2_TR(0x579d17);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B579d1a:{NFSU2_TR(0x579d1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B579d21:L579d21:{c.instructions+=3;NFSU2_TR(0x579d21);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B579d22:{NFSU2_TR(0x579d22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B579d23:{NFSU2_TR(0x579d23);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B579d30:L579d30:{c.instructions+=3;NFSU2_TR(0x579d30);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579d32:{NFSU2_TR(0x579d32);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579d34:{NFSU2_TR(0x579d34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x579d39ull));
TAIL_STATIC(0x576000u,576);
}
B579d39:L579d39:{c.instructions+=2;NFSU2_TR(0x579d39);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B579d3b:{NFSU2_TR(0x579d3b);
if(r1(R+518)){{goto L579d50;}}
}
B579d3d:L579d3d:{c.instructions+=3;NFSU2_TR(0x579d3d);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B579d41:{NFSU2_TR(0x579d41);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x1bull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1bull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1bull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B579d44:{NFSU2_TR(0x579d44);
if(r1(R+518)){{goto L579d4b;}}
}
B579d46:L579d46:{c.instructions+=2;NFSU2_TR(0x579d46);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x15ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x15ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x15ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B579d49:{NFSU2_TR(0x579d49);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L579d50;}}
}
B579d4b:L579d4b:{c.instructions+=2;NFSU2_TR(0x579d4b);
w1(R+0,u8(0x1ull));
}
B579d4d:{NFSU2_TR(0x579d4d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B579d50:L579d50:{c.instructions+=2;NFSU2_TR(0x579d50);
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
B579d52:{NFSU2_TR(0x579d52);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B579d60:L579d60:{c.instructions+=3;NFSU2_TR(0x579d60);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579d62:{NFSU2_TR(0x579d62);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579d64:{NFSU2_TR(0x579d64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x579d69ull));
TAIL_STATIC(0x576000u,576);
}
B579d69:L579d69:{c.instructions+=3;NFSU2_TR(0x579d69);
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
B579d6b:{NFSU2_TR(0x579d6b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B579d6e:{NFSU2_TR(0x579d6e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B579d70:L579d70:{c.instructions+=4;NFSU2_TR(0x579d70);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B579d74:{NFSU2_TR(0x579d74);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579d75:{NFSU2_TR(0x579d75);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579d77:{NFSU2_TR(0x579d77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x579d7cull));
TAIL_STATIC(0x576000u,576);
}
B579d7c:L579d7c:{c.instructions+=1;NFSU2_TR(0x579d7c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B579d80:L579d80:{c.instructions+=4;NFSU2_TR(0x579d80);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B579d84:{NFSU2_TR(0x579d84);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579d85:{NFSU2_TR(0x579d85);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579d87:{NFSU2_TR(0x579d87);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x579d8cull));
TAIL_STATIC(0x576000u,576);
}
B579d8c:L579d8c:{c.instructions+=1;NFSU2_TR(0x579d8c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B579d90:L579d90:{c.instructions+=4;NFSU2_TR(0x579d90);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B579d94:{NFSU2_TR(0x579d94);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579d95:{NFSU2_TR(0x579d95);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579d97:{NFSU2_TR(0x579d97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x579d9cull));
TAIL_STATIC(0x576000u,576);
}
B579d9c:L579d9c:{c.instructions+=1;NFSU2_TR(0x579d9c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B579da0:L579da0:{c.instructions+=4;NFSU2_TR(0x579da0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B579da4:{NFSU2_TR(0x579da4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579da5:{NFSU2_TR(0x579da5);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579da7:{NFSU2_TR(0x579da7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x579dacull));
TAIL_STATIC(0x576000u,576);
}
B579dac:L579dac:{c.instructions+=3;NFSU2_TR(0x579dac);
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
B579dae:{NFSU2_TR(0x579dae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B579db1:{NFSU2_TR(0x579db1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B579dc0:L579dc0:{c.instructions+=5;NFSU2_TR(0x579dc0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579dc1:{NFSU2_TR(0x579dc1);
__builtin_memmove((R+24),(R+4),4);
}
B579dc3:{NFSU2_TR(0x579dc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B579dc6:{NFSU2_TR(0x579dc6);
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
B579dc8:{NFSU2_TR(0x579dc8);
if(r1(R+518)){{goto L579dda;}}
}
B579dca:L579dca:{c.instructions+=2;NFSU2_TR(0x579dca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579dcb:{NFSU2_TR(0x579dcb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x579dd0ull));
TAIL_STATIC(0x440540u,440);
}
B579dd0:L579dd0:{c.instructions+=2;NFSU2_TR(0x579dd0);
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
B579dd3:{NFSU2_TR(0x579dd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B579dda:L579dda:{c.instructions+=3;NFSU2_TR(0x579dda);
s4(0x865134,u32(0x0ull));
}
B579de4:{NFSU2_TR(0x579de4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B579de5:{NFSU2_TR(0x579de5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B579df0:L579df0:{c.instructions+=9;NFSU2_TR(0x579df0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579df1:{NFSU2_TR(0x579df1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579df2:{NFSU2_TR(0x579df2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B579df6:{NFSU2_TR(0x579df6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579df7:{NFSU2_TR(0x579df7);
__builtin_memmove((R+28),(R+4),4);
}
B579df9:{NFSU2_TR(0x579df9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B579dfc:{NFSU2_TR(0x579dfc);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B579dfe:{NFSU2_TR(0x579dfe);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B579e01:{NFSU2_TR(0x579e01);
if(r1(R+518)){{goto L579e27;}}
}
B579e03:L579e03:{c.instructions+=5;NFSU2_TR(0x579e03);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B579e09:{NFSU2_TR(0x579e09);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B579e0f:{NFSU2_TR(0x579e0f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B579e12:{NFSU2_TR(0x579e12);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B579e14:{NFSU2_TR(0x579e14);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L579e1f;}}
}
B579e16:L579e16:{c.instructions+=2;NFSU2_TR(0x579e16);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+0),(U+0),1);
}
B579e18:{NFSU2_TR(0x579e18);
u8 U[13];
w4(U+0,u32(u32(u32(0x1e8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),1);
s1(u32(r4(U+8)),r1(U+12));
}
B579e1f:L579e1f:{c.instructions+=2;NFSU2_TR(0x579e1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B579e25:{NFSU2_TR(0x579e25);
{goto L579e35;}
}
B579e27:L579e27:{c.instructions+=6;NFSU2_TR(0x579e27);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579e29:{NFSU2_TR(0x579e29);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579e2b:{NFSU2_TR(0x579e2b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579e2d:{NFSU2_TR(0x579e2d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579e2e:{NFSU2_TR(0x579e2e);
__builtin_memmove((R+4),(R+24),4);
}
B579e30:{NFSU2_TR(0x579e30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x579e35ull));
TAIL_STATIC(0x571640u,571);
}
B579e35:L579e35:{c.instructions+=4;NFSU2_TR(0x579e35);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B579e38:{NFSU2_TR(0x579e38);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B579e3a:{NFSU2_TR(0x579e3a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5ull))));
__builtin_memmove((R+0),(U+0),4);
}
B579e3d:{NFSU2_TR(0x579e3d);
if(r1(R+518)){{goto L579e63;}}
}
B579e3f:L579e3f:{c.instructions+=5;NFSU2_TR(0x579e3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B579e45:{NFSU2_TR(0x579e45);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B579e4b:{NFSU2_TR(0x579e4b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B579e4e:{NFSU2_TR(0x579e4e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B579e50:{NFSU2_TR(0x579e50);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L579e5b;}}
}
B579e52:L579e52:{c.instructions+=2;NFSU2_TR(0x579e52);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+0),(U+0),1);
}
B579e54:{NFSU2_TR(0x579e54);
u8 U[13];
w4(U+0,u32(u32(u32(0x1e8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),1);
s1(u32(r4(U+8)),r1(U+12));
}
B579e5b:L579e5b:{c.instructions+=2;NFSU2_TR(0x579e5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B579e61:{NFSU2_TR(0x579e61);
{goto L579e71;}
}
B579e63:L579e63:{c.instructions+=6;NFSU2_TR(0x579e63);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579e65:{NFSU2_TR(0x579e65);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579e67:{NFSU2_TR(0x579e67);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579e69:{NFSU2_TR(0x579e69);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579e6a:{NFSU2_TR(0x579e6a);
__builtin_memmove((R+4),(R+24),4);
}
B579e6c:{NFSU2_TR(0x579e6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x579e71ull));
TAIL_STATIC(0x571640u,571);
}
B579e71:L579e71:{c.instructions+=4;NFSU2_TR(0x579e71);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B579e74:{NFSU2_TR(0x579e74);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B579e76:{NFSU2_TR(0x579e76);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((R+0),(U+0),4);
}
B579e79:{NFSU2_TR(0x579e79);
if(r1(R+518)){{goto L579e9f;}}
}
B579e7b:L579e7b:{c.instructions+=5;NFSU2_TR(0x579e7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B579e81:{NFSU2_TR(0x579e81);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B579e87:{NFSU2_TR(0x579e87);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B579e8a:{NFSU2_TR(0x579e8a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B579e8c:{NFSU2_TR(0x579e8c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L579e97;}}
}
B579e8e:L579e8e:{c.instructions+=2;NFSU2_TR(0x579e8e);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+0),(U+0),1);
}
B579e90:{NFSU2_TR(0x579e90);
u8 U[13];
w4(U+0,u32(u32(u32(0x1e8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),1);
s1(u32(r4(U+8)),r1(U+12));
}
B579e97:L579e97:{c.instructions+=2;NFSU2_TR(0x579e97);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B579e9d:{NFSU2_TR(0x579e9d);
{goto L579ead;}
}
B579e9f:L579e9f:{c.instructions+=6;NFSU2_TR(0x579e9f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579ea1:{NFSU2_TR(0x579ea1);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579ea3:{NFSU2_TR(0x579ea3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579ea5:{NFSU2_TR(0x579ea5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579ea6:{NFSU2_TR(0x579ea6);
__builtin_memmove((R+4),(R+24),4);
}
B579ea8:{NFSU2_TR(0x579ea8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x579eadull));
TAIL_STATIC(0x571640u,571);
}
B579ead:L579ead:{c.instructions+=4;NFSU2_TR(0x579ead);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B579eb0:{NFSU2_TR(0x579eb0);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B579eb2:{NFSU2_TR(0x579eb2);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7ull))));
__builtin_memmove((R+0),(U+0),4);
}
B579eb5:{NFSU2_TR(0x579eb5);
if(r1(R+518)){{goto L579edf;}}
}
B579eb7:L579eb7:{c.instructions+=5;NFSU2_TR(0x579eb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B579ebd:{NFSU2_TR(0x579ebd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B579ec3:{NFSU2_TR(0x579ec3);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B579ec6:{NFSU2_TR(0x579ec6);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B579ec8:{NFSU2_TR(0x579ec8);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L579ed3;}}
}
B579eca:L579eca:{c.instructions+=2;NFSU2_TR(0x579eca);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+0),(U+0),1);
}
B579ecc:{NFSU2_TR(0x579ecc);
u8 U[13];
w4(U+0,u32(u32(u32(0x1e8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),1);
s1(u32(r4(U+8)),r1(U+12));
}
B579ed3:L579ed3:{c.instructions+=5;NFSU2_TR(0x579ed3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B579ed4:{NFSU2_TR(0x579ed4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B579eda:{NFSU2_TR(0x579eda);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B579edb:{NFSU2_TR(0x579edb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B579edc:{NFSU2_TR(0x579edc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B579edf:L579edf:{c.instructions+=6;NFSU2_TR(0x579edf);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579ee1:{NFSU2_TR(0x579ee1);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579ee3:{NFSU2_TR(0x579ee3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579ee5:{NFSU2_TR(0x579ee5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579ee6:{NFSU2_TR(0x579ee6);
__builtin_memmove((R+4),(R+24),4);
}
B579ee8:{NFSU2_TR(0x579ee8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x579eedull));
TAIL_STATIC(0x571640u,571);
}
B579eed:L579eed:{c.instructions+=4;NFSU2_TR(0x579eed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B579eee:{NFSU2_TR(0x579eee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B579eef:{NFSU2_TR(0x579eef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B579ef0:{NFSU2_TR(0x579ef0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B579f00:L579f00:{c.instructions+=3;NFSU2_TR(0x579f00);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579f01:{NFSU2_TR(0x579f01);
__builtin_memmove((R+24),(R+4),4);
}
B579f03:{NFSU2_TR(0x579f03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x579f08ull));
TAIL_STATIC(0x5768e0u,576);
}
B579f08:L579f08:{c.instructions+=2;NFSU2_TR(0x579f08);
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
B579f0d:{NFSU2_TR(0x579f0d);
if(r1(R+518)){{goto L579f18;}}
}
B579f0f:L579f0f:{c.instructions+=2;NFSU2_TR(0x579f0f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579f10:{NFSU2_TR(0x579f10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x579f15ull));
TAIL_STATIC(0x75c6dau,75c);
}
B579f15:L579f15:{c.instructions+=1;NFSU2_TR(0x579f15);
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
B579f18:L579f18:{c.instructions+=3;NFSU2_TR(0x579f18);
__builtin_memmove((R+0),(R+24),4);
}
B579f1a:{NFSU2_TR(0x579f1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B579f1b:{NFSU2_TR(0x579f1b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B579f20:L579f20:{c.instructions+=17;NFSU2_TR(0x579f20);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579f21:{NFSU2_TR(0x579f21);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B579f25:{NFSU2_TR(0x579f25);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B579f27:{NFSU2_TR(0x579f27);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x5ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B579f2a:{NFSU2_TR(0x579f2a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579f2b:{NFSU2_TR(0x579f2b);
__builtin_memmove((R+24),(R+4),4);
}
B579f2d:{NFSU2_TR(0x579f2d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B579f30:{NFSU2_TR(0x579f30);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B579f33:{NFSU2_TR(0x579f33);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B579f36:{NFSU2_TR(0x579f36);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B579f39:{NFSU2_TR(0x579f39);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B579f3c:{NFSU2_TR(0x579f3c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579f3d:{NFSU2_TR(0x579f3d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w1(U+4,u8(0x4ull));
s1(u32(r4(U+0)),r1(U+4));
}
B579f41:{NFSU2_TR(0x579f41);
u8 U[4];
w4(U+0,u32(0x7a0608ull));
s4(u32(r4(R+24)),r4(U+0));
}
B579f47:{NFSU2_TR(0x579f47);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B579f4a:{NFSU2_TR(0x579f4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B579f4d:{NFSU2_TR(0x579f4d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L579f62;}}
}
B579f4f:L579f4f:{c.instructions+=3;NFSU2_TR(0x579f4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B579f56:{NFSU2_TR(0x579f56);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579f57:{NFSU2_TR(0x579f57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x579f5cull));
TAIL_STATIC(0x75c6c8u,75c);
}
B579f5c:L579f5c:{c.instructions+=2;NFSU2_TR(0x579f5c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B579f5f:{NFSU2_TR(0x579f5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B579f62:L579f62:{c.instructions+=3;NFSU2_TR(0x579f62);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B579f65:{NFSU2_TR(0x579f65);
__builtin_memmove((R+4),(R+12),4);
}
B579f67:{NFSU2_TR(0x579f67);
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
B579f69:L579f69:{c.instructions+=1;NFSU2_TR(0x579f69);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L579f6b;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x579f69u);}goto L579f69;}
}
B579f6b:L579f6b:{c.instructions+=5;NFSU2_TR(0x579f6b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B579f6c:{NFSU2_TR(0x579f6c);
__builtin_memmove((R+0),(R+24),4);
}
B579f6e:{NFSU2_TR(0x579f6e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B579f6f:{NFSU2_TR(0x579f6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B579f70:{NFSU2_TR(0x579f70);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B579f80:L579f80:{c.instructions+=7;NFSU2_TR(0x579f80);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B579f84:{NFSU2_TR(0x579f84);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579f85:{NFSU2_TR(0x579f85);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B579f89:{NFSU2_TR(0x579f89);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579f8a:{NFSU2_TR(0x579f8a);
__builtin_memmove((R+24),(R+4),4);
}
B579f8c:{NFSU2_TR(0x579f8c);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B579f92:{NFSU2_TR(0x579f92);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x579f97ull));
TAIL_STATIC(0x75bed4u,75b);
}
B579f97:L579f97:{c.instructions+=3;NFSU2_TR(0x579f97);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579f98:{NFSU2_TR(0x579f98);
__builtin_memmove((R+4),(R+24),4);
}
B579f9a:{NFSU2_TR(0x579f9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x579f9full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x579f20u);}goto L579f20;}
}
B579f9f:L579f9f:{c.instructions+=8;NFSU2_TR(0x579f9f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B579fa3:{NFSU2_TR(0x579fa3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B579fa6:{NFSU2_TR(0x579fa6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B579faa:{NFSU2_TR(0x579faa);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B579fad:{NFSU2_TR(0x579fad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579fae:{NFSU2_TR(0x579fae);
u8 U[4];
w4(U+0,u32(0x7a0610ull));
s4(u32(r4(R+24)),r4(U+0));
}
B579fb4:{NFSU2_TR(0x579fb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B579fbb:{NFSU2_TR(0x579fbb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x579fc0ull));
TAIL_STATIC(0x75c6c8u,75c);
}
B579fc0:L579fc0:{c.instructions+=7;NFSU2_TR(0x579fc0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B579fc4:{NFSU2_TR(0x579fc4);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B579fc7:{NFSU2_TR(0x579fc7);
__builtin_memmove((R+8),(R+4),4);
}
B579fc9:{NFSU2_TR(0x579fc9);
__builtin_memmove((R+28),(R+0),4);
}
B579fcb:{NFSU2_TR(0x579fcb);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B579fce:{NFSU2_TR(0x579fce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B579fd1:{NFSU2_TR(0x579fd1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B579fd3:L579fd3:{c.instructions+=1;NFSU2_TR(0x579fd3);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L579fd5;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x579fd3u);}goto L579fd3;}
}
B579fd5:L579fd5:{c.instructions+=3;NFSU2_TR(0x579fd5);
__builtin_memmove((R+4),(R+8),4);
}
B579fd7:{NFSU2_TR(0x579fd7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B579fda:{NFSU2_TR(0x579fda);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B579fdd:L579fdd:{c.instructions+=1;NFSU2_TR(0x579fdd);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L579fdf;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x579fddu);}goto L579fdd;}
}
B579fdf:L579fdf:{c.instructions+=4;NFSU2_TR(0x579fdf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B579fe0:{NFSU2_TR(0x579fe0);
__builtin_memmove((R+0),(R+24),4);
}
B579fe2:{NFSU2_TR(0x579fe2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B579fe3:{NFSU2_TR(0x579fe3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B579ff0:L579ff0:{c.instructions+=3;NFSU2_TR(0x579ff0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B579ff1:{NFSU2_TR(0x579ff1);
__builtin_memmove((R+24),(R+4),4);
}
B579ff3:{NFSU2_TR(0x579ff3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x579ff8ull));
TAIL_STATIC(0x576a60u,576);
}
B579ff8:L579ff8:{c.instructions+=2;NFSU2_TR(0x579ff8);
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
B579ffd:{NFSU2_TR(0x579ffd);
if(r1(R+518)){TAIL_STATIC(0x57a008u,57a);}
}
B579fff:L579fff:{c.instructions+=1;NFSU2_TR(0x579fff);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
TAIL_STATIC(0x57a000u,57a);
}
XIT:NFSU2_TR_EXIT(0x579,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
