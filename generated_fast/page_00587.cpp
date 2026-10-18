#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_581(u8* __restrict R,Cpu& c);
u32 body_583(u8* __restrict R,Cpu& c);
u32 body_585(u8* __restrict R,Cpu& c);
u32 body_586(u8* __restrict R,Cpu& c);
u32 body_588(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_5f9(u8* __restrict R,Cpu& c);
u32 body_5fe(u8* __restrict R,Cpu& c);
u32 body_741(u8* __restrict R,Cpu& c);
u32 body_742(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x587,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x587,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_587(u8* __restrict R,Cpu& c);
u32 page_587(Cpu& c){return body_587(c.regs.data(),c);}
__attribute__((noinline)) u32 body_587(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x587001:goto L587001;
case 0x587005:c.instructions+=7;goto B587005;
case 0x587008:c.instructions+=6;goto B587008;
case 0x587009:c.instructions+=5;goto B587009;
case 0x58700e:c.instructions+=4;goto B58700e;
case 0x587012:c.instructions+=3;goto B587012;
case 0x587017:c.instructions+=2;goto B587017;
case 0x587018:c.instructions+=1;goto B587018;
case 0x58701d:goto L58701d;
case 0x587021:c.instructions+=6;goto B587021;
case 0x587022:c.instructions+=5;goto B587022;
case 0x587027:c.instructions+=4;goto B587027;
case 0x58702b:c.instructions+=3;goto B58702b;
case 0x587030:c.instructions+=2;goto B587030;
case 0x587031:c.instructions+=1;goto B587031;
case 0x587036:goto L587036;
case 0x58703a:c.instructions+=6;goto B58703a;
case 0x58703b:c.instructions+=5;goto B58703b;
case 0x587040:c.instructions+=4;goto B587040;
case 0x587044:c.instructions+=3;goto B587044;
case 0x587049:c.instructions+=2;goto B587049;
case 0x58704a:c.instructions+=1;goto B58704a;
case 0x58704f:goto L58704f;
case 0x587053:c.instructions+=6;goto B587053;
case 0x587054:c.instructions+=5;goto B587054;
case 0x587059:c.instructions+=4;goto B587059;
case 0x58705d:c.instructions+=3;goto B58705d;
case 0x587062:c.instructions+=2;goto B587062;
case 0x587063:c.instructions+=1;goto B587063;
case 0x587068:goto L587068;
case 0x58706b:c.instructions+=7;goto B58706b;
case 0x58706f:c.instructions+=6;goto B58706f;
case 0x587070:c.instructions+=5;goto B587070;
case 0x587075:c.instructions+=4;goto B587075;
case 0x587079:c.instructions+=3;goto B587079;
case 0x58707e:c.instructions+=2;goto B58707e;
case 0x58707f:c.instructions+=1;goto B58707f;
case 0x587084:goto L587084;
case 0x587087:c.instructions+=1;goto B587087;
case 0x58708c:goto L58708c;
case 0x58708e:c.instructions+=1;goto B58708e;
case 0x587090:goto L587090;
case 0x587095:goto L587095;
case 0x587096:c.instructions+=5;goto B587096;
case 0x58709b:c.instructions+=4;goto B58709b;
case 0x58709f:c.instructions+=3;goto B58709f;
case 0x5870a4:c.instructions+=2;goto B5870a4;
case 0x5870a5:c.instructions+=1;goto B5870a5;
case 0x5870aa:goto L5870aa;
case 0x5870ad:goto L5870ad;
case 0x5870b2:goto L5870b2;
case 0x5870b4:c.instructions+=1;goto B5870b4;
case 0x5870b6:goto L5870b6;
case 0x5870bb:goto L5870bb;
case 0x5870bc:c.instructions+=5;goto B5870bc;
case 0x5870c1:c.instructions+=4;goto B5870c1;
case 0x5870c5:c.instructions+=3;goto B5870c5;
case 0x5870ca:c.instructions+=2;goto B5870ca;
case 0x5870cb:c.instructions+=1;goto B5870cb;
case 0x5870d0:goto L5870d0;
case 0x5870d3:goto L5870d3;
case 0x5870d7:c.instructions+=2;goto B5870d7;
case 0x5870d9:c.instructions+=1;goto B5870d9;
case 0x5870db:goto L5870db;
case 0x5870dc:c.instructions+=5;goto B5870dc;
case 0x5870e1:c.instructions+=4;goto B5870e1;
case 0x5870e5:c.instructions+=3;goto B5870e5;
case 0x5870ea:c.instructions+=2;goto B5870ea;
case 0x5870eb:c.instructions+=1;goto B5870eb;
case 0x5870f0:goto L5870f0;
case 0x5870f3:goto L5870f3;
case 0x5870f5:c.instructions+=5;goto B5870f5;
case 0x5870fa:c.instructions+=4;goto B5870fa;
case 0x5870fe:c.instructions+=3;goto B5870fe;
case 0x587103:c.instructions+=2;goto B587103;
case 0x587104:c.instructions+=1;goto B587104;
case 0x587109:goto L587109;
case 0x58710d:c.instructions+=13;goto B58710d;
case 0x58710f:c.instructions+=12;goto B58710f;
case 0x587112:c.instructions+=11;goto B587112;
case 0x587115:c.instructions+=10;goto B587115;
case 0x587118:c.instructions+=9;goto B587118;
case 0x587119:c.instructions+=8;goto B587119;
case 0x58711a:c.instructions+=7;goto B58711a;
case 0x58711b:c.instructions+=6;goto B58711b;
case 0x58711c:c.instructions+=5;goto B58711c;
case 0x587121:c.instructions+=4;goto B587121;
case 0x587125:c.instructions+=3;goto B587125;
case 0x587126:c.instructions+=2;goto B587126;
case 0x58712b:c.instructions+=1;goto B58712b;
case 0x587130:goto L587130;
case 0x587131:c.instructions+=5;goto B587131;
case 0x587132:c.instructions+=4;goto B587132;
case 0x587133:c.instructions+=3;goto B587133;
case 0x587135:c.instructions+=2;goto B587135;
case 0x587136:c.instructions+=1;goto B587136;
case 0x587139:goto L587139;
case 0x58713a:c.instructions+=6;goto B58713a;
case 0x58713b:c.instructions+=5;goto B58713b;
case 0x58713e:c.instructions+=4;goto B58713e;
case 0x58713f:c.instructions+=3;goto B58713f;
case 0x587141:c.instructions+=2;goto B587141;
case 0x587142:c.instructions+=1;goto B587142;
case 0x587150:goto L587150;
case 0x587151:c.instructions+=10;goto B587151;
case 0x587153:c.instructions+=9;goto B587153;
case 0x587156:c.instructions+=8;goto B587156;
case 0x58715c:c.instructions+=7;goto B58715c;
case 0x58715d:c.instructions+=6;goto B58715d;
case 0x58715f:c.instructions+=5;goto B58715f;
case 0x587161:c.instructions+=4;goto B587161;
case 0x587164:c.instructions+=3;goto B587164;
case 0x587166:c.instructions+=2;goto B587166;
case 0x587167:c.instructions+=1;goto B587167;
case 0x58716d:goto L58716d;
case 0x587170:c.instructions+=2;goto B587170;
case 0x587172:c.instructions+=1;goto B587172;
case 0x587178:goto L587178;
case 0x58717b:c.instructions+=1;goto B58717b;
case 0x587181:goto L587181;
case 0x587186:c.instructions+=3;goto B587186;
case 0x587188:c.instructions+=2;goto B587188;
case 0x58718d:c.instructions+=1;goto B58718d;
case 0x587191:goto L587191;
case 0x587193:goto L587193;
case 0x587194:c.instructions+=7;goto B587194;
case 0x587199:c.instructions+=6;goto B587199;
case 0x58719b:c.instructions+=5;goto B58719b;
case 0x58719f:c.instructions+=4;goto B58719f;
case 0x5871a4:c.instructions+=3;goto B5871a4;
case 0x5871a5:c.instructions+=2;goto B5871a5;
case 0x5871a6:c.instructions+=1;goto B5871a6;
case 0x5871ab:goto L5871ab;
case 0x5871ae:c.instructions+=1;goto B5871ae;
case 0x5871b3:goto L5871b3;
case 0x5871b5:c.instructions+=1;goto B5871b5;
case 0x5871b7:goto L5871b7;
case 0x5871bc:goto L5871bc;
case 0x5871bd:c.instructions+=5;goto B5871bd;
case 0x5871c2:c.instructions+=4;goto B5871c2;
case 0x5871c6:c.instructions+=3;goto B5871c6;
case 0x5871cb:c.instructions+=2;goto B5871cb;
case 0x5871cc:c.instructions+=1;goto B5871cc;
case 0x5871d1:goto L5871d1;
case 0x5871d4:goto L5871d4;
case 0x5871d9:goto L5871d9;
case 0x5871db:c.instructions+=1;goto B5871db;
case 0x5871dd:goto L5871dd;
case 0x5871e2:goto L5871e2;
case 0x5871e3:c.instructions+=5;goto B5871e3;
case 0x5871e8:c.instructions+=4;goto B5871e8;
case 0x5871ec:c.instructions+=3;goto B5871ec;
case 0x5871f1:c.instructions+=2;goto B5871f1;
case 0x5871f2:c.instructions+=1;goto B5871f2;
case 0x5871f7:goto L5871f7;
case 0x5871fa:goto L5871fa;
case 0x5871fd:c.instructions+=11;goto B5871fd;
case 0x587200:c.instructions+=10;goto B587200;
case 0x587202:c.instructions+=9;goto B587202;
case 0x587204:c.instructions+=8;goto B587204;
case 0x587205:c.instructions+=7;goto B587205;
case 0x587206:c.instructions+=6;goto B587206;
case 0x587207:c.instructions+=5;goto B587207;
case 0x58720c:c.instructions+=4;goto B58720c;
case 0x587210:c.instructions+=3;goto B587210;
case 0x587211:c.instructions+=2;goto B587211;
case 0x587216:c.instructions+=1;goto B587216;
case 0x58721b:goto L58721b;
case 0x58721c:c.instructions+=4;goto B58721c;
case 0x58721d:c.instructions+=3;goto B58721d;
case 0x58721f:c.instructions+=2;goto B58721f;
case 0x587220:c.instructions+=1;goto B587220;
case 0x587223:goto L587223;
case 0x587224:c.instructions+=5;goto B587224;
case 0x587227:c.instructions+=4;goto B587227;
case 0x587228:c.instructions+=3;goto B587228;
case 0x58722a:c.instructions+=2;goto B58722a;
case 0x58722b:c.instructions+=1;goto B58722b;
case 0x587230:goto L587230;
case 0x587231:c.instructions+=10;goto B587231;
case 0x587233:c.instructions+=9;goto B587233;
case 0x587236:c.instructions+=8;goto B587236;
case 0x58723c:c.instructions+=7;goto B58723c;
case 0x58723d:c.instructions+=6;goto B58723d;
case 0x58723f:c.instructions+=5;goto B58723f;
case 0x587241:c.instructions+=4;goto B587241;
case 0x587244:c.instructions+=3;goto B587244;
case 0x587246:c.instructions+=2;goto B587246;
case 0x587247:c.instructions+=1;goto B587247;
case 0x58724d:goto L58724d;
case 0x587250:c.instructions+=2;goto B587250;
case 0x587252:c.instructions+=1;goto B587252;
case 0x587258:goto L587258;
case 0x58725b:c.instructions+=1;goto B58725b;
case 0x587261:goto L587261;
case 0x587266:c.instructions+=3;goto B587266;
case 0x587268:c.instructions+=2;goto B587268;
case 0x58726d:c.instructions+=1;goto B58726d;
case 0x587271:goto L587271;
case 0x587273:goto L587273;
case 0x587274:c.instructions+=7;goto B587274;
case 0x587279:c.instructions+=6;goto B587279;
case 0x58727b:c.instructions+=5;goto B58727b;
case 0x58727f:c.instructions+=4;goto B58727f;
case 0x587284:c.instructions+=3;goto B587284;
case 0x587285:c.instructions+=2;goto B587285;
case 0x587286:c.instructions+=1;goto B587286;
case 0x58728b:goto L58728b;
case 0x58728e:c.instructions+=1;goto B58728e;
case 0x587293:goto L587293;
case 0x587295:c.instructions+=1;goto B587295;
case 0x587297:goto L587297;
case 0x58729c:goto L58729c;
case 0x58729d:c.instructions+=5;goto B58729d;
case 0x5872a2:c.instructions+=4;goto B5872a2;
case 0x5872a6:c.instructions+=3;goto B5872a6;
case 0x5872ab:c.instructions+=2;goto B5872ab;
case 0x5872ac:c.instructions+=1;goto B5872ac;
case 0x5872b1:goto L5872b1;
case 0x5872b4:goto L5872b4;
case 0x5872b9:goto L5872b9;
case 0x5872bb:c.instructions+=1;goto B5872bb;
case 0x5872bd:goto L5872bd;
case 0x5872c2:goto L5872c2;
case 0x5872c3:c.instructions+=5;goto B5872c3;
case 0x5872c8:c.instructions+=4;goto B5872c8;
case 0x5872cc:c.instructions+=3;goto B5872cc;
case 0x5872d1:c.instructions+=2;goto B5872d1;
case 0x5872d2:c.instructions+=1;goto B5872d2;
case 0x5872d7:goto L5872d7;
case 0x5872da:goto L5872da;
case 0x5872dd:c.instructions+=11;goto B5872dd;
case 0x5872e0:c.instructions+=10;goto B5872e0;
case 0x5872e2:c.instructions+=9;goto B5872e2;
case 0x5872e4:c.instructions+=8;goto B5872e4;
case 0x5872e5:c.instructions+=7;goto B5872e5;
case 0x5872e6:c.instructions+=6;goto B5872e6;
case 0x5872e7:c.instructions+=5;goto B5872e7;
case 0x5872ec:c.instructions+=4;goto B5872ec;
case 0x5872f0:c.instructions+=3;goto B5872f0;
case 0x5872f1:c.instructions+=2;goto B5872f1;
case 0x5872f6:c.instructions+=1;goto B5872f6;
case 0x5872fb:goto L5872fb;
case 0x5872fc:c.instructions+=4;goto B5872fc;
case 0x5872fd:c.instructions+=3;goto B5872fd;
case 0x5872ff:c.instructions+=2;goto B5872ff;
case 0x587300:c.instructions+=1;goto B587300;
case 0x587303:goto L587303;
case 0x587304:c.instructions+=5;goto B587304;
case 0x587307:c.instructions+=4;goto B587307;
case 0x587308:c.instructions+=3;goto B587308;
case 0x58730a:c.instructions+=2;goto B58730a;
case 0x58730b:c.instructions+=1;goto B58730b;
case 0x587310:goto L587310;
case 0x587313:c.instructions+=6;goto B587313;
case 0x587314:c.instructions+=5;goto B587314;
case 0x587316:c.instructions+=4;goto B587316;
case 0x587318:c.instructions+=3;goto B587318;
case 0x58731b:c.instructions+=2;goto B58731b;
case 0x58731d:c.instructions+=1;goto B58731d;
case 0x58731f:goto L58731f;
case 0x587322:c.instructions+=3;goto B587322;
case 0x587324:c.instructions+=2;goto B587324;
case 0x587327:c.instructions+=1;goto B587327;
case 0x587329:goto L587329;
case 0x58732c:c.instructions+=3;goto B58732c;
case 0x58732d:c.instructions+=2;goto B58732d;
case 0x587330:c.instructions+=1;goto B587330;
case 0x587333:goto L587333;
case 0x587334:c.instructions+=6;goto B587334;
case 0x587338:c.instructions+=5;goto B587338;
case 0x587339:c.instructions+=4;goto B587339;
case 0x58733b:c.instructions+=3;goto B58733b;
case 0x58733c:c.instructions+=2;goto B58733c;
case 0x58733d:c.instructions+=1;goto B58733d;
case 0x587342:goto L587342;
case 0x587347:c.instructions+=3;goto B587347;
case 0x587349:c.instructions+=2;goto B587349;
case 0x58734e:c.instructions+=1;goto B58734e;
case 0x587352:goto L587352;
case 0x587354:goto L587354;
case 0x587355:c.instructions+=7;goto B587355;
case 0x58735a:c.instructions+=6;goto B58735a;
case 0x58735c:c.instructions+=5;goto B58735c;
case 0x587360:c.instructions+=4;goto B587360;
case 0x587362:c.instructions+=3;goto B587362;
case 0x587363:c.instructions+=2;goto B587363;
case 0x587364:c.instructions+=1;goto B587364;
case 0x587369:goto L587369;
case 0x58736d:c.instructions+=12;goto B58736d;
case 0x587371:c.instructions+=11;goto B587371;
case 0x587374:c.instructions+=10;goto B587374;
case 0x587376:c.instructions+=9;goto B587376;
case 0x587377:c.instructions+=8;goto B587377;
case 0x587378:c.instructions+=7;goto B587378;
case 0x587379:c.instructions+=6;goto B587379;
case 0x58737e:c.instructions+=5;goto B58737e;
case 0x587382:c.instructions+=4;goto B587382;
case 0x587383:c.instructions+=3;goto B587383;
case 0x587385:c.instructions+=2;goto B587385;
case 0x58738a:c.instructions+=1;goto B58738a;
case 0x58738f:goto L58738f;
case 0x587390:c.instructions+=4;goto B587390;
case 0x587391:c.instructions+=3;goto B587391;
case 0x587392:c.instructions+=2;goto B587392;
case 0x587395:c.instructions+=1;goto B587395;
case 0x5873a0:goto L5873a0;
case 0x5873a3:c.instructions+=6;goto B5873a3;
case 0x5873a4:c.instructions+=5;goto B5873a4;
case 0x5873a6:c.instructions+=4;goto B5873a6;
case 0x5873a8:c.instructions+=3;goto B5873a8;
case 0x5873ab:c.instructions+=2;goto B5873ab;
case 0x5873ad:c.instructions+=1;goto B5873ad;
case 0x5873af:goto L5873af;
case 0x5873b2:c.instructions+=3;goto B5873b2;
case 0x5873b4:c.instructions+=2;goto B5873b4;
case 0x5873b7:c.instructions+=1;goto B5873b7;
case 0x5873b9:goto L5873b9;
case 0x5873bc:c.instructions+=3;goto B5873bc;
case 0x5873bd:c.instructions+=2;goto B5873bd;
case 0x5873c0:c.instructions+=1;goto B5873c0;
case 0x5873c3:goto L5873c3;
case 0x5873c4:c.instructions+=7;goto B5873c4;
case 0x5873c8:c.instructions+=6;goto B5873c8;
case 0x5873cb:c.instructions+=5;goto B5873cb;
case 0x5873ce:c.instructions+=4;goto B5873ce;
case 0x5873d1:c.instructions+=3;goto B5873d1;
case 0x5873d3:c.instructions+=2;goto B5873d3;
case 0x5873d5:c.instructions+=1;goto B5873d5;
case 0x5873d7:goto L5873d7;
case 0x5873d8:c.instructions+=4;goto B5873d8;
case 0x5873db:c.instructions+=3;goto B5873db;
case 0x5873dc:c.instructions+=2;goto B5873dc;
case 0x5873df:c.instructions+=1;goto B5873df;
case 0x5873e2:goto L5873e2;
case 0x5873e3:c.instructions+=3;goto B5873e3;
case 0x5873e4:c.instructions+=2;goto B5873e4;
case 0x5873e5:c.instructions+=1;goto B5873e5;
case 0x5873ea:goto L5873ea;
case 0x5873ec:c.instructions+=3;goto B5873ec;
case 0x5873f1:c.instructions+=2;goto B5873f1;
case 0x5873f6:c.instructions+=1;goto B5873f6;
case 0x5873fa:goto L5873fa;
case 0x5873fc:goto L5873fc;
case 0x5873fe:c.instructions+=9;goto B5873fe;
case 0x5873ff:c.instructions+=8;goto B5873ff;
case 0x587401:c.instructions+=7;goto B587401;
case 0x587403:c.instructions+=6;goto B587403;
case 0x587404:c.instructions+=5;goto B587404;
case 0x587409:c.instructions+=4;goto B587409;
case 0x58740d:c.instructions+=3;goto B58740d;
case 0x58740f:c.instructions+=2;goto B58740f;
case 0x587410:c.instructions+=1;goto B587410;
case 0x587415:goto L587415;
case 0x587419:c.instructions+=12;goto B587419;
case 0x58741d:c.instructions+=11;goto B58741d;
case 0x587420:c.instructions+=10;goto B587420;
case 0x587422:c.instructions+=9;goto B587422;
case 0x587423:c.instructions+=8;goto B587423;
case 0x587424:c.instructions+=7;goto B587424;
case 0x587425:c.instructions+=6;goto B587425;
case 0x58742a:c.instructions+=5;goto B58742a;
case 0x58742e:c.instructions+=4;goto B58742e;
case 0x58742f:c.instructions+=3;goto B58742f;
case 0x587431:c.instructions+=2;goto B587431;
case 0x587436:c.instructions+=1;goto B587436;
case 0x58743b:goto L58743b;
case 0x58743c:c.instructions+=4;goto B58743c;
case 0x58743d:c.instructions+=3;goto B58743d;
case 0x58743e:c.instructions+=2;goto B58743e;
case 0x587441:c.instructions+=1;goto B587441;
case 0x587450:goto L587450;
case 0x587451:c.instructions+=7;goto B587451;
case 0x587453:c.instructions+=6;goto B587453;
case 0x587455:c.instructions+=5;goto B587455;
case 0x587458:c.instructions+=4;goto B587458;
case 0x58745a:c.instructions+=3;goto B58745a;
case 0x58745b:c.instructions+=2;goto B58745b;
case 0x58745c:c.instructions+=1;goto B58745c;
case 0x58745e:goto L58745e;
case 0x58745f:c.instructions+=4;goto B58745f;
case 0x587460:c.instructions+=3;goto B587460;
case 0x587463:c.instructions+=2;goto B587463;
case 0x587464:c.instructions+=1;goto B587464;
case 0x587467:goto L587467;
case 0x587468:c.instructions+=3;goto B587468;
case 0x58746c:c.instructions+=2;goto B58746c;
case 0x58746e:c.instructions+=1;goto B58746e;
case 0x587470:goto L587470;
case 0x587474:c.instructions+=1;goto B587474;
case 0x587476:goto L587476;
case 0x587479:c.instructions+=2;goto B587479;
case 0x58747b:c.instructions+=1;goto B58747b;
case 0x58747d:goto L58747d;
case 0x58747e:c.instructions+=5;goto B58747e;
case 0x58747f:c.instructions+=4;goto B58747f;
case 0x587480:c.instructions+=3;goto B587480;
case 0x587485:c.instructions+=2;goto B587485;
case 0x587486:c.instructions+=1;goto B587486;
case 0x587489:goto L587489;
case 0x58748b:c.instructions+=1;goto B58748b;
case 0x587490:goto L587490;
case 0x587492:c.instructions+=4;goto B587492;
case 0x587494:c.instructions+=3;goto B587494;
case 0x587495:c.instructions+=2;goto B587495;
case 0x587496:c.instructions+=1;goto B587496;
case 0x58749b:goto L58749b;
case 0x58749e:c.instructions+=2;goto B58749e;
case 0x5874a0:c.instructions+=1;goto B5874a0;
case 0x5874a2:goto L5874a2;
case 0x5874a5:c.instructions+=3;goto B5874a5;
case 0x5874a6:c.instructions+=2;goto B5874a6;
case 0x5874ac:c.instructions+=1;goto B5874ac;
case 0x5874ae:goto L5874ae;
case 0x5874af:c.instructions+=5;goto B5874af;
case 0x5874b0:c.instructions+=4;goto B5874b0;
case 0x5874b1:c.instructions+=3;goto B5874b1;
case 0x5874b4:c.instructions+=2;goto B5874b4;
case 0x5874b5:c.instructions+=1;goto B5874b5;
case 0x5874b8:goto L5874b8;
case 0x5874bc:c.instructions+=6;goto B5874bc;
case 0x5874c0:c.instructions+=5;goto B5874c0;
case 0x5874c1:c.instructions+=4;goto B5874c1;
case 0x5874c2:c.instructions+=3;goto B5874c2;
case 0x5874c3:c.instructions+=2;goto B5874c3;
case 0x5874c5:c.instructions+=1;goto B5874c5;
case 0x5874ca:goto L5874ca;
case 0x5874cb:c.instructions+=4;goto B5874cb;
case 0x5874cc:c.instructions+=3;goto B5874cc;
case 0x5874cd:c.instructions+=2;goto B5874cd;
case 0x5874ce:c.instructions+=1;goto B5874ce;
case 0x5874e0:goto L5874e0;
case 0x5874e1:c.instructions+=5;goto B5874e1;
case 0x5874e2:c.instructions+=4;goto B5874e2;
case 0x5874e6:c.instructions+=3;goto B5874e6;
case 0x5874e8:c.instructions+=2;goto B5874e8;
case 0x5874ea:c.instructions+=1;goto B5874ea;
case 0x5874f0:goto L5874f0;
case 0x5874f3:c.instructions+=1;goto B5874f3;
case 0x5874f9:goto L5874f9;
case 0x5874fa:c.instructions+=6;goto B5874fa;
case 0x5874fd:c.instructions+=5;goto B5874fd;
case 0x5874fe:c.instructions+=4;goto B5874fe;
case 0x587500:c.instructions+=3;goto B587500;
case 0x587503:c.instructions+=2;goto B587503;
case 0x58750d:c.instructions+=1;goto B58750d;
case 0x587512:goto L587512;
case 0x587518:c.instructions+=2;goto B587518;
case 0x58751a:c.instructions+=1;goto B58751a;
case 0x58751f:goto L58751f;
case 0x587524:c.instructions+=5;goto B587524;
case 0x587526:c.instructions+=4;goto B587526;
case 0x587527:c.instructions+=3;goto B587527;
case 0x58752c:c.instructions+=2;goto B58752c;
case 0x58752d:c.instructions+=1;goto B58752d;
case 0x587532:goto L587532;
case 0x587535:c.instructions+=2;goto B587535;
case 0x587536:c.instructions+=1;goto B587536;
case 0x58753b:goto L58753b;
case 0x58753e:c.instructions+=6;goto B58753e;
case 0x587543:c.instructions+=5;goto B587543;
case 0x587548:c.instructions+=4;goto B587548;
case 0x587549:c.instructions+=3;goto B587549;
case 0x58754e:c.instructions+=2;goto B58754e;
case 0x58754f:c.instructions+=1;goto B58754f;
case 0x587554:goto L587554;
case 0x587557:c.instructions+=2;goto B587557;
case 0x587558:c.instructions+=1;goto B587558;
case 0x58755d:goto L58755d;
case 0x587560:c.instructions+=6;goto B587560;
case 0x587565:c.instructions+=5;goto B587565;
case 0x58756a:c.instructions+=4;goto B58756a;
case 0x58756b:c.instructions+=3;goto B58756b;
case 0x587570:c.instructions+=2;goto B587570;
case 0x587571:c.instructions+=1;goto B587571;
case 0x587576:goto L587576;
case 0x587579:c.instructions+=2;goto B587579;
case 0x58757a:c.instructions+=1;goto B58757a;
case 0x58757f:goto L58757f;
case 0x587582:c.instructions+=4;goto B587582;
case 0x587584:c.instructions+=3;goto B587584;
case 0x587589:c.instructions+=2;goto B587589;
case 0x58758a:c.instructions+=1;goto B58758a;
case 0x58758f:goto L58758f;
case 0x587592:c.instructions+=2;goto B587592;
case 0x587593:c.instructions+=1;goto B587593;
case 0x587598:goto L587598;
case 0x58759b:c.instructions+=7;goto B58759b;
case 0x58759c:c.instructions+=6;goto B58759c;
case 0x58759d:c.instructions+=5;goto B58759d;
case 0x5875a3:c.instructions+=4;goto B5875a3;
case 0x5875a4:c.instructions+=3;goto B5875a4;
case 0x5875a6:c.instructions+=2;goto B5875a6;
case 0x5875a7:c.instructions+=1;goto B5875a7;
case 0x5875aa:goto L5875aa;
case 0x5875ab:c.instructions+=3;goto B5875ab;
case 0x5875ae:c.instructions+=2;goto B5875ae;
case 0x5875af:c.instructions+=1;goto B5875af;
case 0x5875c0:goto L5875c0;
case 0x5875c2:c.instructions+=7;goto B5875c2;
case 0x5875c3:c.instructions+=6;goto B5875c3;
case 0x5875c6:c.instructions+=5;goto B5875c6;
case 0x5875c7:c.instructions+=4;goto B5875c7;
case 0x5875c9:c.instructions+=3;goto B5875c9;
case 0x5875cc:c.instructions+=2;goto B5875cc;
case 0x5875d6:c.instructions+=1;goto B5875d6;
case 0x5875db:goto L5875db;
case 0x5875e1:c.instructions+=1;goto B5875e1;
case 0x5875e6:goto L5875e6;
case 0x5875ea:c.instructions+=4;goto B5875ea;
case 0x5875ed:c.instructions+=3;goto B5875ed;
case 0x5875ef:c.instructions+=2;goto B5875ef;
case 0x5875f2:c.instructions+=1;goto B5875f2;
case 0x5875f4:goto L5875f4;
case 0x5875f5:c.instructions+=3;goto B5875f5;
case 0x5875f8:c.instructions+=2;goto B5875f8;
case 0x5875f9:c.instructions+=1;goto B5875f9;
case 0x5875fc:goto L5875fc;
case 0x5875fd:c.instructions+=2;goto B5875fd;
case 0x5875fe:c.instructions+=1;goto B5875fe;
case 0x587603:goto L587603;
case 0x587608:c.instructions+=5;goto B587608;
case 0x58760d:c.instructions+=4;goto B58760d;
case 0x58760e:c.instructions+=3;goto B58760e;
case 0x587611:c.instructions+=2;goto B587611;
case 0x587612:c.instructions+=1;goto B587612;
case 0x587617:goto L587617;
case 0x58761a:c.instructions+=4;goto B58761a;
case 0x58761b:c.instructions+=3;goto B58761b;
case 0x58761d:c.instructions+=2;goto B58761d;
case 0x58761e:c.instructions+=1;goto B58761e;
case 0x587630:goto L587630;
case 0x587631:c.instructions+=11;goto B587631;
case 0x587633:c.instructions+=10;goto B587633;
case 0x587636:c.instructions+=9;goto B587636;
case 0x58763c:c.instructions+=8;goto B58763c;
case 0x58763d:c.instructions+=7;goto B58763d;
case 0x58763e:c.instructions+=6;goto B58763e;
case 0x587640:c.instructions+=5;goto B587640;
case 0x587646:c.instructions+=4;goto B587646;
case 0x587648:c.instructions+=3;goto B587648;
case 0x58764a:c.instructions+=2;goto B58764a;
case 0x58764b:c.instructions+=1;goto B58764b;
case 0x58764d:goto L58764d;
case 0x587652:c.instructions+=1;goto B587652;
case 0x587657:goto L587657;
case 0x58765a:c.instructions+=3;goto B58765a;
case 0x58765c:c.instructions+=2;goto B58765c;
case 0x587662:c.instructions+=1;goto B587662;
case 0x587664:goto L587664;
case 0x587666:c.instructions+=6;goto B587666;
case 0x587667:c.instructions+=5;goto B587667;
case 0x587668:c.instructions+=4;goto B587668;
case 0x587669:c.instructions+=3;goto B587669;
case 0x58766b:c.instructions+=2;goto B58766b;
case 0x58766c:c.instructions+=1;goto B58766c;
case 0x58766f:goto L58766f;
case 0x587671:goto L587671;
case 0x587674:c.instructions+=10;goto B587674;
case 0x587676:c.instructions+=9;goto B587676;
case 0x58767d:c.instructions+=8;goto B58767d;
case 0x58767e:c.instructions+=7;goto B58767e;
case 0x58767f:c.instructions+=6;goto B58767f;
case 0x587684:c.instructions+=5;goto B587684;
case 0x58768b:c.instructions+=4;goto B58768b;
case 0x587692:c.instructions+=3;goto B587692;
case 0x587699:c.instructions+=2;goto B587699;
case 0x5876a1:c.instructions+=1;goto B5876a1;
case 0x5876a6:goto L5876a6;
case 0x5876ad:c.instructions+=5;goto B5876ad;
case 0x5876af:c.instructions+=4;goto B5876af;
case 0x5876b3:c.instructions+=3;goto B5876b3;
case 0x5876b9:c.instructions+=2;goto B5876b9;
case 0x5876be:c.instructions+=1;goto B5876be;
case 0x5876c2:goto L5876c2;
case 0x5876c4:goto L5876c4;
case 0x5876c8:c.instructions+=3;goto B5876c8;
case 0x5876ca:c.instructions+=2;goto B5876ca;
case 0x5876cb:c.instructions+=1;goto B5876cb;
case 0x5876d0:goto L5876d0;
case 0x5876d4:c.instructions+=5;goto B5876d4;
case 0x5876d8:c.instructions+=4;goto B5876d8;
case 0x5876dc:c.instructions+=3;goto B5876dc;
case 0x5876de:c.instructions+=2;goto B5876de;
case 0x5876e1:c.instructions+=1;goto B5876e1;
case 0x5876e3:goto L5876e3;
case 0x5876e9:goto L5876e9;
case 0x5876ea:c.instructions+=3;goto B5876ea;
case 0x5876eb:c.instructions+=2;goto B5876eb;
case 0x5876ec:c.instructions+=1;goto B5876ec;
case 0x5876f1:goto L5876f1;
case 0x5876f2:c.instructions+=3;goto B5876f2;
case 0x5876f9:c.instructions+=2;goto B5876f9;
case 0x5876fa:c.instructions+=1;goto B5876fa;
case 0x5876ff:goto L5876ff;
case 0x587700:c.instructions+=5;goto B587700;
case 0x587702:c.instructions+=4;goto B587702;
case 0x587706:c.instructions+=3;goto B587706;
case 0x58770b:c.instructions+=2;goto B58770b;
case 0x58770c:c.instructions+=1;goto B58770c;
case 0x587711:goto L587711;
case 0x587718:c.instructions+=4;goto B587718;
case 0x58771b:c.instructions+=3;goto B58771b;
case 0x587721:c.instructions+=2;goto B587721;
case 0x587725:c.instructions+=1;goto B587725;
case 0x58772a:goto L58772a;
case 0x58772e:c.instructions+=5;goto B58772e;
case 0x587732:c.instructions+=4;goto B587732;
case 0x587736:c.instructions+=3;goto B587736;
case 0x587738:c.instructions+=2;goto B587738;
case 0x58773b:c.instructions+=1;goto B58773b;
case 0x58773d:goto L58773d;
case 0x587743:goto L587743;
case 0x587745:c.instructions+=4;goto B587745;
case 0x587749:c.instructions+=3;goto B587749;
case 0x58774e:c.instructions+=2;goto B58774e;
case 0x58774f:c.instructions+=1;goto B58774f;
case 0x587754:goto L587754;
case 0x587755:c.instructions+=3;goto B587755;
case 0x58775c:c.instructions+=2;goto B58775c;
case 0x58775d:c.instructions+=1;goto B58775d;
case 0x587762:goto L587762;
case 0x587768:c.instructions+=6;goto B587768;
case 0x58776c:c.instructions+=5;goto B58776c;
case 0x58776d:c.instructions+=4;goto B58776d;
case 0x587772:c.instructions+=3;goto B587772;
case 0x587777:c.instructions+=2;goto B587777;
case 0x587778:c.instructions+=1;goto B587778;
case 0x58777d:goto L58777d;
case 0x587780:c.instructions+=7;goto B587780;
case 0x587781:c.instructions+=6;goto B587781;
case 0x587782:c.instructions+=5;goto B587782;
case 0x587784:c.instructions+=4;goto B587784;
case 0x587785:c.instructions+=3;goto B587785;
case 0x587787:c.instructions+=2;goto B587787;
case 0x587788:c.instructions+=1;goto B587788;
case 0x587790:goto L587790;
case 0x587791:c.instructions+=7;goto B587791;
case 0x587792:c.instructions+=6;goto B587792;
case 0x587793:c.instructions+=5;goto B587793;
case 0x587795:c.instructions+=4;goto B587795;
case 0x587797:c.instructions+=3;goto B587797;
case 0x587798:c.instructions+=2;goto B587798;
case 0x58779a:c.instructions+=1;goto B58779a;
case 0x58779f:goto L58779f;
case 0x5877a1:c.instructions+=2;goto B5877a1;
case 0x5877a3:c.instructions+=1;goto B5877a3;
case 0x5877a5:goto L5877a5;
case 0x5877a7:c.instructions+=5;goto B5877a7;
case 0x5877a9:c.instructions+=4;goto B5877a9;
case 0x5877ac:c.instructions+=3;goto B5877ac;
case 0x5877ae:c.instructions+=2;goto B5877ae;
case 0x5877b1:c.instructions+=1;goto B5877b1;
case 0x5877b3:goto L5877b3;
case 0x5877b4:c.instructions+=1;goto B5877b4;
case 0x5877b9:goto L5877b9;
case 0x5877bc:goto L5877bc;
case 0x5877be:c.instructions+=3;goto B5877be;
case 0x5877c0:c.instructions+=2;goto B5877c0;
case 0x5877c2:c.instructions+=1;goto B5877c2;
case 0x5877c4:goto L5877c4;
case 0x5877c5:c.instructions+=4;goto B5877c5;
case 0x5877c6:c.instructions+=3;goto B5877c6;
case 0x5877c7:c.instructions+=2;goto B5877c7;
case 0x5877c8:c.instructions+=1;goto B5877c8;
case 0x5877d0:goto L5877d0;
case 0x5877d1:c.instructions+=1;goto B5877d1;
case 0x5877d6:goto L5877d6;
case 0x5877db:c.instructions+=1;goto B5877db;
case 0x5877e0:goto L5877e0;
case 0x5877e2:c.instructions+=3;goto B5877e2;
case 0x5877e3:c.instructions+=2;goto B5877e3;
case 0x5877e6:c.instructions+=1;goto B5877e6;
case 0x5877e8:goto L5877e8;
case 0x5877ef:goto L5877ef;
case 0x5877f0:c.instructions+=1;goto B5877f0;
case 0x5877f5:goto L5877f5;
case 0x5877f7:goto L5877f7;
case 0x5877f8:c.instructions+=1;goto B5877f8;
case 0x5877fd:goto L5877fd;
case 0x5877ff:goto L5877ff;
case 0x587800:c.instructions+=1;goto B587800;
case 0x587805:goto L587805;
case 0x587807:goto L587807;
case 0x58780a:c.instructions+=2;goto B58780a;
case 0x58780b:c.instructions+=1;goto B58780b;
case 0x587810:goto L587810;
case 0x587813:goto L587813;
case 0x587816:c.instructions+=2;goto B587816;
case 0x58781c:c.instructions+=1;goto B58781c;
case 0x58781e:goto L58781e;
case 0x58781f:c.instructions+=1;goto B58781f;
case 0x587830:goto L587830;
case 0x587836:c.instructions+=3;goto B587836;
case 0x587837:c.instructions+=2;goto B587837;
case 0x587838:c.instructions+=1;goto B587838;
case 0x58783d:goto L58783d;
case 0x587843:c.instructions+=3;goto B587843;
case 0x587845:c.instructions+=2;goto B587845;
case 0x587847:c.instructions+=1;goto B587847;
case 0x58784d:goto L58784d;
case 0x587854:c.instructions+=1;goto B587854;
case 0x58785a:goto L58785a;
case 0x587861:c.instructions+=1;goto B587861;
case 0x587867:goto L587867;
case 0x587869:c.instructions+=1;goto B587869;
case 0x58786f:goto L58786f;
case 0x587876:c.instructions+=2;goto B587876;
case 0x587878:c.instructions+=1;goto B587878;
case 0x58787e:goto L58787e;
case 0x587880:c.instructions+=7;goto B587880;
case 0x587882:c.instructions+=6;goto B587882;
case 0x587886:c.instructions+=5;goto B587886;
case 0x58788b:c.instructions+=4;goto B58788b;
case 0x587896:c.instructions+=3;goto B587896;
case 0x5878a1:c.instructions+=2;goto B5878a1;
case 0x5878a9:c.instructions+=1;goto B5878a9;
case 0x5878ae:goto L5878ae;
case 0x5878b4:c.instructions+=7;goto B5878b4;
case 0x5878b6:c.instructions+=6;goto B5878b6;
case 0x5878ba:c.instructions+=5;goto B5878ba;
case 0x5878c0:c.instructions+=4;goto B5878c0;
case 0x5878c4:c.instructions+=3;goto B5878c4;
case 0x5878c8:c.instructions+=2;goto B5878c8;
case 0x5878c9:c.instructions+=1;goto B5878c9;
case 0x5878ce:goto L5878ce;
case 0x5878d3:c.instructions+=3;goto B5878d3;
case 0x5878d4:c.instructions+=2;goto B5878d4;
case 0x5878d8:c.instructions+=1;goto B5878d8;
case 0x5878dd:goto L5878dd;
case 0x5878e3:c.instructions+=7;goto B5878e3;
case 0x5878e5:c.instructions+=6;goto B5878e5;
case 0x5878eb:c.instructions+=5;goto B5878eb;
case 0x5878ef:c.instructions+=4;goto B5878ef;
case 0x5878f3:c.instructions+=3;goto B5878f3;
case 0x5878f4:c.instructions+=2;goto B5878f4;
case 0x5878f8:c.instructions+=1;goto B5878f8;
case 0x5878fd:goto L5878fd;
case 0x587900:c.instructions+=4;goto B587900;
case 0x587902:c.instructions+=3;goto B587902;
case 0x587903:c.instructions+=2;goto B587903;
case 0x587907:c.instructions+=1;goto B587907;
case 0x58790c:goto L58790c;
case 0x58790d:c.instructions+=5;goto B58790d;
case 0x587911:c.instructions+=4;goto B587911;
case 0x587912:c.instructions+=3;goto B587912;
case 0x587913:c.instructions+=2;goto B587913;
case 0x587918:c.instructions+=1;goto B587918;
case 0x58791d:goto L58791d;
case 0x58791f:c.instructions+=4;goto B58791f;
case 0x587923:c.instructions+=3;goto B587923;
case 0x587924:c.instructions+=2;goto B587924;
case 0x587926:c.instructions+=1;goto B587926;
case 0x58792b:goto L58792b;
case 0x58792e:goto L58792e;
case 0x58792f:c.instructions+=3;goto B58792f;
case 0x587930:c.instructions+=2;goto B587930;
case 0x587936:c.instructions+=1;goto B587936;
case 0x587940:goto L587940;
case 0x587945:c.instructions+=4;goto B587945;
case 0x58794c:c.instructions+=3;goto B58794c;
case 0x587951:c.instructions+=2;goto B587951;
case 0x58795b:c.instructions+=1;goto B58795b;
case 0x587960:goto L587960;
case 0x587966:c.instructions+=8;goto B587966;
case 0x587968:c.instructions+=7;goto B587968;
case 0x58796a:c.instructions+=6;goto B58796a;
case 0x58796e:c.instructions+=5;goto B58796e;
case 0x587973:c.instructions+=4;goto B587973;
case 0x58797e:c.instructions+=3;goto B58797e;
case 0x587989:c.instructions+=2;goto B587989;
case 0x587991:c.instructions+=1;goto B587991;
case 0x587996:goto L587996;
case 0x58799d:c.instructions+=6;goto B58799d;
case 0x58799f:c.instructions+=5;goto B58799f;
case 0x5879a1:c.instructions+=4;goto B5879a1;
case 0x5879a2:c.instructions+=3;goto B5879a2;
case 0x5879a6:c.instructions+=2;goto B5879a6;
case 0x5879aa:c.instructions+=1;goto B5879aa;
case 0x5879af:goto L5879af;
case 0x5879b1:c.instructions+=4;goto B5879b1;
case 0x5879b5:c.instructions+=3;goto B5879b5;
case 0x5879b6:c.instructions+=2;goto B5879b6;
case 0x5879b8:c.instructions+=1;goto B5879b8;
case 0x5879bd:goto L5879bd;
case 0x5879c3:c.instructions+=1;goto B5879c3;
case 0x5879d0:goto L5879d0;
case 0x5879d6:c.instructions+=10;goto B5879d6;
case 0x5879d8:c.instructions+=9;goto B5879d8;
case 0x5879da:c.instructions+=8;goto B5879da;
case 0x5879dc:c.instructions+=7;goto B5879dc;
case 0x5879e0:c.instructions+=6;goto B5879e0;
case 0x5879ea:c.instructions+=5;goto B5879ea;
case 0x5879ee:c.instructions+=4;goto B5879ee;
case 0x5879f5:c.instructions+=3;goto B5879f5;
case 0x5879fc:c.instructions+=2;goto B5879fc;
case 0x587a04:c.instructions+=1;goto B587a04;
case 0x587a09:goto L587a09;
case 0x587a0b:c.instructions+=3;goto B587a0b;
case 0x587a0d:c.instructions+=2;goto B587a0d;
case 0x587a11:c.instructions+=1;goto B587a11;
case 0x587a16:goto L587a16;
case 0x587a18:c.instructions+=4;goto B587a18;
case 0x587a1c:c.instructions+=3;goto B587a1c;
case 0x587a1d:c.instructions+=2;goto B587a1d;
case 0x587a1f:c.instructions+=1;goto B587a1f;
case 0x587a24:goto L587a24;
case 0x587a2a:c.instructions+=1;goto B587a2a;
case 0x587a30:goto L587a30;
case 0x587a36:c.instructions+=10;goto B587a36;
case 0x587a38:c.instructions+=9;goto B587a38;
case 0x587a3a:c.instructions+=8;goto B587a3a;
case 0x587a3c:c.instructions+=7;goto B587a3c;
case 0x587a40:c.instructions+=6;goto B587a40;
case 0x587a4a:c.instructions+=5;goto B587a4a;
case 0x587a4e:c.instructions+=4;goto B587a4e;
case 0x587a55:c.instructions+=3;goto B587a55;
case 0x587a5c:c.instructions+=2;goto B587a5c;
case 0x587a64:c.instructions+=1;goto B587a64;
case 0x587a69:goto L587a69;
case 0x587a6b:c.instructions+=3;goto B587a6b;
case 0x587a6d:c.instructions+=2;goto B587a6d;
case 0x587a71:c.instructions+=1;goto B587a71;
case 0x587a76:goto L587a76;
case 0x587a78:c.instructions+=4;goto B587a78;
case 0x587a7c:c.instructions+=3;goto B587a7c;
case 0x587a7d:c.instructions+=2;goto B587a7d;
case 0x587a7f:c.instructions+=1;goto B587a7f;
case 0x587a84:goto L587a84;
case 0x587a8a:c.instructions+=1;goto B587a8a;
case 0x587a90:goto L587a90;
case 0x587a96:c.instructions+=10;goto B587a96;
case 0x587a98:c.instructions+=9;goto B587a98;
case 0x587a9a:c.instructions+=8;goto B587a9a;
case 0x587a9c:c.instructions+=7;goto B587a9c;
case 0x587aa0:c.instructions+=6;goto B587aa0;
case 0x587aaa:c.instructions+=5;goto B587aaa;
case 0x587aae:c.instructions+=4;goto B587aae;
case 0x587ab5:c.instructions+=3;goto B587ab5;
case 0x587abc:c.instructions+=2;goto B587abc;
case 0x587ac4:c.instructions+=1;goto B587ac4;
case 0x587ac9:goto L587ac9;
case 0x587acb:c.instructions+=3;goto B587acb;
case 0x587acd:c.instructions+=2;goto B587acd;
case 0x587ad1:c.instructions+=1;goto B587ad1;
case 0x587ad6:goto L587ad6;
case 0x587ad8:c.instructions+=4;goto B587ad8;
case 0x587adc:c.instructions+=3;goto B587adc;
case 0x587add:c.instructions+=2;goto B587add;
case 0x587adf:c.instructions+=1;goto B587adf;
case 0x587ae4:goto L587ae4;
case 0x587aea:c.instructions+=1;goto B587aea;
case 0x587af0:goto L587af0;
case 0x587af6:c.instructions+=11;goto B587af6;
case 0x587af7:c.instructions+=10;goto B587af7;
case 0x587af8:c.instructions+=9;goto B587af8;
case 0x587af9:c.instructions+=8;goto B587af9;
case 0x587afb:c.instructions+=7;goto B587afb;
case 0x587afd:c.instructions+=6;goto B587afd;
case 0x587b01:c.instructions+=5;goto B587b01;
case 0x587b06:c.instructions+=4;goto B587b06;
case 0x587b11:c.instructions+=3;goto B587b11;
case 0x587b1c:c.instructions+=2;goto B587b1c;
case 0x587b24:c.instructions+=1;goto B587b24;
case 0x587b29:goto L587b29;
case 0x587b30:c.instructions+=4;goto B587b30;
case 0x587b36:c.instructions+=3;goto B587b36;
case 0x587b3c:c.instructions+=2;goto B587b3c;
case 0x587b40:c.instructions+=1;goto B587b40;
case 0x587b45:goto L587b45;
case 0x587b49:c.instructions+=5;goto B587b49;
case 0x587b4d:c.instructions+=4;goto B587b4d;
case 0x587b51:c.instructions+=3;goto B587b51;
case 0x587b53:c.instructions+=2;goto B587b53;
case 0x587b56:c.instructions+=1;goto B587b56;
case 0x587b58:goto L587b58;
case 0x587b5e:goto L587b5e;
case 0x587b60:c.instructions+=1;goto B587b60;
case 0x587b65:goto L587b65;
case 0x587b67:c.instructions+=2;goto B587b67;
case 0x587b69:c.instructions+=1;goto B587b69;
case 0x587b6b:goto L587b6b;
case 0x587b70:goto L587b70;
case 0x587b74:c.instructions+=4;goto B587b74;
case 0x587b76:c.instructions+=3;goto B587b76;
case 0x587b77:c.instructions+=2;goto B587b77;
case 0x587b7b:c.instructions+=1;goto B587b7b;
case 0x587b80:goto L587b80;
case 0x587b81:c.instructions+=2;goto B587b81;
case 0x587b83:c.instructions+=1;goto B587b83;
case 0x587b85:goto L587b85;
case 0x587b87:c.instructions+=4;goto B587b87;
case 0x587b8b:c.instructions+=3;goto B587b8b;
case 0x587b8c:c.instructions+=2;goto B587b8c;
case 0x587b8e:c.instructions+=1;goto B587b8e;
case 0x587b93:goto L587b93;
case 0x587b96:c.instructions+=5;goto B587b96;
case 0x587b97:c.instructions+=4;goto B587b97;
case 0x587b98:c.instructions+=3;goto B587b98;
case 0x587b99:c.instructions+=2;goto B587b99;
case 0x587b9f:c.instructions+=1;goto B587b9f;
case 0x587ba0:goto L587ba0;
case 0x587ba6:c.instructions+=11;goto B587ba6;
case 0x587ba7:c.instructions+=10;goto B587ba7;
case 0x587ba8:c.instructions+=9;goto B587ba8;
case 0x587ba9:c.instructions+=8;goto B587ba9;
case 0x587bab:c.instructions+=7;goto B587bab;
case 0x587bad:c.instructions+=6;goto B587bad;
case 0x587bb1:c.instructions+=5;goto B587bb1;
case 0x587bb6:c.instructions+=4;goto B587bb6;
case 0x587bc1:c.instructions+=3;goto B587bc1;
case 0x587bcc:c.instructions+=2;goto B587bcc;
case 0x587bd4:c.instructions+=1;goto B587bd4;
case 0x587bd9:goto L587bd9;
case 0x587be0:c.instructions+=4;goto B587be0;
case 0x587be6:c.instructions+=3;goto B587be6;
case 0x587bec:c.instructions+=2;goto B587bec;
case 0x587bf0:c.instructions+=1;goto B587bf0;
case 0x587bf5:goto L587bf5;
case 0x587bf9:c.instructions+=5;goto B587bf9;
case 0x587bfd:c.instructions+=4;goto B587bfd;
case 0x587c01:c.instructions+=3;goto B587c01;
case 0x587c03:c.instructions+=2;goto B587c03;
case 0x587c06:c.instructions+=1;goto B587c06;
case 0x587c08:goto L587c08;
case 0x587c0e:goto L587c0e;
case 0x587c10:c.instructions+=1;goto B587c10;
case 0x587c15:goto L587c15;
case 0x587c17:c.instructions+=2;goto B587c17;
case 0x587c19:c.instructions+=1;goto B587c19;
case 0x587c1b:goto L587c1b;
case 0x587c20:goto L587c20;
case 0x587c24:c.instructions+=4;goto B587c24;
case 0x587c26:c.instructions+=3;goto B587c26;
case 0x587c27:c.instructions+=2;goto B587c27;
case 0x587c2b:c.instructions+=1;goto B587c2b;
case 0x587c30:goto L587c30;
case 0x587c31:c.instructions+=2;goto B587c31;
case 0x587c33:c.instructions+=1;goto B587c33;
case 0x587c35:goto L587c35;
case 0x587c37:c.instructions+=4;goto B587c37;
case 0x587c3b:c.instructions+=3;goto B587c3b;
case 0x587c3c:c.instructions+=2;goto B587c3c;
case 0x587c3e:c.instructions+=1;goto B587c3e;
case 0x587c43:goto L587c43;
case 0x587c46:c.instructions+=5;goto B587c46;
case 0x587c47:c.instructions+=4;goto B587c47;
case 0x587c48:c.instructions+=3;goto B587c48;
case 0x587c49:c.instructions+=2;goto B587c49;
case 0x587c4f:c.instructions+=1;goto B587c4f;
case 0x587c50:goto L587c50;
case 0x587c56:c.instructions+=10;goto B587c56;
case 0x587c57:c.instructions+=9;goto B587c57;
case 0x587c58:c.instructions+=8;goto B587c58;
case 0x587c5f:c.instructions+=7;goto B587c5f;
case 0x587c61:c.instructions+=6;goto B587c61;
case 0x587c65:c.instructions+=5;goto B587c65;
case 0x587c67:c.instructions+=4;goto B587c67;
case 0x587c68:c.instructions+=3;goto B587c68;
case 0x587c6a:c.instructions+=2;goto B587c6a;
case 0x587c6e:c.instructions+=1;goto B587c6e;
case 0x587c73:goto L587c73;
case 0x587c77:c.instructions+=3;goto B587c77;
case 0x587c7c:c.instructions+=2;goto B587c7c;
case 0x587c7f:c.instructions+=1;goto B587c7f;
case 0x587c85:goto L587c85;
case 0x587c88:c.instructions+=1;goto B587c88;
case 0x587c8e:goto L587c8e;
case 0x587c90:c.instructions+=5;goto B587c90;
case 0x587c94:c.instructions+=4;goto B587c94;
case 0x587c95:c.instructions+=3;goto B587c95;
case 0x587c97:c.instructions+=2;goto B587c97;
case 0x587c9b:c.instructions+=1;goto B587c9b;
case 0x587ca0:goto L587ca0;
case 0x587ca4:c.instructions+=3;goto B587ca4;
case 0x587ca5:c.instructions+=2;goto B587ca5;
case 0x587caa:c.instructions+=1;goto B587caa;
case 0x587caf:goto L587caf;
case 0x587cb1:c.instructions+=8;goto B587cb1;
case 0x587cb3:c.instructions+=7;goto B587cb3;
case 0x587cb7:c.instructions+=6;goto B587cb7;
case 0x587cc1:c.instructions+=5;goto B587cc1;
case 0x587cc5:c.instructions+=4;goto B587cc5;
case 0x587ccc:c.instructions+=3;goto B587ccc;
case 0x587cd3:c.instructions+=2;goto B587cd3;
case 0x587cdb:c.instructions+=1;goto B587cdb;
case 0x587ce0:goto L587ce0;
case 0x587ce2:c.instructions+=3;goto B587ce2;
case 0x587ce4:c.instructions+=2;goto B587ce4;
case 0x587ce8:c.instructions+=1;goto B587ce8;
case 0x587ced:goto L587ced;
case 0x587cef:c.instructions+=4;goto B587cef;
case 0x587cf3:c.instructions+=3;goto B587cf3;
case 0x587cf4:c.instructions+=2;goto B587cf4;
case 0x587cf6:c.instructions+=1;goto B587cf6;
case 0x587cfb:goto L587cfb;
case 0x587cfe:c.instructions+=4;goto B587cfe;
case 0x587cff:c.instructions+=3;goto B587cff;
case 0x587d00:c.instructions+=2;goto B587d00;
case 0x587d06:c.instructions+=1;goto B587d06;
case 0x587d07:goto L587d07;
case 0x587d0c:c.instructions+=1;goto B587d0c;
case 0x587d11:goto L587d11;
case 0x587d13:c.instructions+=1;goto B587d13;
case 0x587d15:goto L587d15;
case 0x587d1c:c.instructions+=1;goto B587d1c;
case 0x587d1e:goto L587d1e;
case 0x587d23:c.instructions+=1;goto B587d23;
case 0x587d28:goto L587d28;
case 0x587d2a:c.instructions+=1;goto B587d2a;
case 0x587d2f:goto L587d2f;
case 0x587d32:c.instructions+=4;goto B587d32;
case 0x587d33:c.instructions+=3;goto B587d33;
case 0x587d34:c.instructions+=2;goto B587d34;
case 0x587d3a:c.instructions+=1;goto B587d3a;
case 0x587d3b:goto L587d3b;
case 0x587d40:c.instructions+=1;goto B587d40;
case 0x587d45:goto L587d45;
case 0x587d46:c.instructions+=3;goto B587d46;
case 0x587d47:c.instructions+=2;goto B587d47;
case 0x587d4d:c.instructions+=1;goto B587d4d;
case 0x587d50:goto L587d50;
case 0x587d56:c.instructions+=12;goto B587d56;
case 0x587d58:c.instructions+=11;goto B587d58;
case 0x587d59:c.instructions+=10;goto B587d59;
case 0x587d60:c.instructions+=9;goto B587d60;
case 0x587d64:c.instructions+=8;goto B587d64;
case 0x587d6b:c.instructions+=7;goto B587d6b;
case 0x587d72:c.instructions+=6;goto B587d72;
case 0x587d75:c.instructions+=5;goto B587d75;
case 0x587d77:c.instructions+=4;goto B587d77;
case 0x587d78:c.instructions+=3;goto B587d78;
case 0x587d7c:c.instructions+=2;goto B587d7c;
case 0x587d84:c.instructions+=1;goto B587d84;
case 0x587d89:goto L587d89;
case 0x587d8b:c.instructions+=4;goto B587d8b;
case 0x587d8f:c.instructions+=3;goto B587d8f;
case 0x587d90:c.instructions+=2;goto B587d90;
case 0x587d91:c.instructions+=1;goto B587d91;
case 0x587d96:goto L587d96;
case 0x587d99:c.instructions+=3;goto B587d99;
case 0x587d9a:c.instructions+=2;goto B587d9a;
case 0x587da0:c.instructions+=1;goto B587da0;
case 0x587db0:goto L587db0;
case 0x587db1:c.instructions+=11;goto B587db1;
case 0x587db3:c.instructions+=10;goto B587db3;
case 0x587db6:c.instructions+=9;goto B587db6;
case 0x587db9:c.instructions+=8;goto B587db9;
case 0x587dba:c.instructions+=7;goto B587dba;
case 0x587dbb:c.instructions+=6;goto B587dbb;
case 0x587dbc:c.instructions+=5;goto B587dbc;
case 0x587dbf:c.instructions+=4;goto B587dbf;
case 0x587dc5:c.instructions+=3;goto B587dc5;
case 0x587dcb:c.instructions+=2;goto B587dcb;
case 0x587dcf:c.instructions+=1;goto B587dcf;
case 0x587dd4:goto L587dd4;
case 0x587dd8:c.instructions+=5;goto B587dd8;
case 0x587ddc:c.instructions+=4;goto B587ddc;
case 0x587de0:c.instructions+=3;goto B587de0;
case 0x587de2:c.instructions+=2;goto B587de2;
case 0x587de5:c.instructions+=1;goto B587de5;
case 0x587de7:goto L587de7;
case 0x587ded:goto L587ded;
case 0x587df2:goto L587df2;
case 0x587df3:c.instructions+=14;goto B587df3;
case 0x587df8:c.instructions+=13;goto B587df8;
case 0x587dfa:c.instructions+=12;goto B587dfa;
case 0x587dff:c.instructions+=11;goto B587dff;
case 0x587e01:c.instructions+=10;goto B587e01;
case 0x587e03:c.instructions+=9;goto B587e03;
case 0x587e06:c.instructions+=8;goto B587e06;
case 0x587e09:c.instructions+=7;goto B587e09;
case 0x587e0b:c.instructions+=6;goto B587e0b;
case 0x587e0e:c.instructions+=5;goto B587e0e;
case 0x587e11:c.instructions+=4;goto B587e11;
case 0x587e13:c.instructions+=3;goto B587e13;
case 0x587e16:c.instructions+=2;goto B587e16;
case 0x587e1a:c.instructions+=1;goto B587e1a;
case 0x587e20:goto L587e20;
case 0x587e23:c.instructions+=3;goto B587e23;
case 0x587e27:c.instructions+=2;goto B587e27;
case 0x587e2f:c.instructions+=1;goto B587e2f;
case 0x587e31:goto L587e31;
case 0x587e34:goto L587e34;
case 0x587e39:c.instructions+=1;goto B587e39;
case 0x587e3e:goto L587e3e;
case 0x587e40:c.instructions+=3;goto B587e40;
case 0x587e43:c.instructions+=2;goto B587e43;
case 0x587e45:c.instructions+=1;goto B587e45;
case 0x587e47:goto L587e47;
case 0x587e4d:c.instructions+=4;goto B587e4d;
case 0x587e53:c.instructions+=3;goto B587e53;
case 0x587e57:c.instructions+=2;goto B587e57;
case 0x587e5e:c.instructions+=1;goto B587e5e;
case 0x587e60:goto L587e60;
case 0x587e64:c.instructions+=5;goto B587e64;
case 0x587e66:c.instructions+=4;goto B587e66;
case 0x587e69:c.instructions+=3;goto B587e69;
case 0x587e6a:c.instructions+=2;goto B587e6a;
case 0x587e6c:c.instructions+=1;goto B587e6c;
case 0x587e71:goto L587e71;
case 0x587e75:c.instructions+=6;goto B587e75;
case 0x587e79:c.instructions+=5;goto B587e79;
case 0x587e7b:c.instructions+=4;goto B587e7b;
case 0x587e7c:c.instructions+=3;goto B587e7c;
case 0x587e7e:c.instructions+=2;goto B587e7e;
case 0x587e81:c.instructions+=1;goto B587e81;
case 0x587e86:goto L587e86;
case 0x587e8a:c.instructions+=6;goto B587e8a;
case 0x587e8e:c.instructions+=5;goto B587e8e;
case 0x587e90:c.instructions+=4;goto B587e90;
case 0x587e93:c.instructions+=3;goto B587e93;
case 0x587e94:c.instructions+=2;goto B587e94;
case 0x587e96:c.instructions+=1;goto B587e96;
case 0x587e9b:goto L587e9b;
case 0x587e9f:c.instructions+=2;goto B587e9f;
case 0x587ea3:c.instructions+=1;goto B587ea3;
case 0x587ea5:goto L587ea5;
case 0x587eaa:c.instructions+=1;goto B587eaa;
case 0x587eac:goto L587eac;
case 0x587eb2:c.instructions+=1;goto B587eb2;
case 0x587eb8:goto L587eb8;
case 0x587ebb:c.instructions+=5;goto B587ebb;
case 0x587ebd:c.instructions+=4;goto B587ebd;
case 0x587ebe:c.instructions+=3;goto B587ebe;
case 0x587ec0:c.instructions+=2;goto B587ec0;
case 0x587ec4:c.instructions+=1;goto B587ec4;
case 0x587ec9:goto L587ec9;
case 0x587ecd:c.instructions+=2;goto B587ecd;
case 0x587ed1:c.instructions+=1;goto B587ed1;
case 0x587ed3:goto L587ed3;
case 0x587ed8:c.instructions+=2;goto B587ed8;
case 0x587edc:c.instructions+=1;goto B587edc;
case 0x587ede:goto L587ede;
case 0x587ee4:c.instructions+=7;goto B587ee4;
case 0x587eea:c.instructions+=6;goto B587eea;
case 0x587eec:c.instructions+=5;goto B587eec;
case 0x587ef0:c.instructions+=4;goto B587ef0;
case 0x587ef4:c.instructions+=3;goto B587ef4;
case 0x587efa:c.instructions+=2;goto B587efa;
case 0x587efe:c.instructions+=1;goto B587efe;
case 0x587f03:goto L587f03;
case 0x587f07:c.instructions+=5;goto B587f07;
case 0x587f0b:c.instructions+=4;goto B587f0b;
case 0x587f0f:c.instructions+=3;goto B587f0f;
case 0x587f11:c.instructions+=2;goto B587f11;
case 0x587f14:c.instructions+=1;goto B587f14;
case 0x587f16:goto L587f16;
case 0x587f1c:goto L587f1c;
case 0x587f21:goto L587f21;
case 0x587f25:c.instructions+=1;goto B587f25;
case 0x587f27:goto L587f27;
case 0x587f2b:c.instructions+=2;goto B587f2b;
case 0x587f2f:c.instructions+=1;goto B587f2f;
case 0x587f31:goto L587f31;
case 0x587f33:c.instructions+=1;goto B587f33;
case 0x587f35:goto L587f35;
case 0x587f36:c.instructions+=1;goto B587f36;
case 0x587f3a:goto L587f3a;
case 0x587f3c:c.instructions+=3;goto B587f3c;
case 0x587f41:c.instructions+=2;goto B587f41;
case 0x587f46:c.instructions+=1;goto B587f46;
case 0x587f4a:goto L587f4a;
case 0x587f4c:goto L587f4c;
case 0x587f4e:c.instructions+=4;goto B587f4e;
case 0x587f4f:c.instructions+=3;goto B587f4f;
case 0x587f51:c.instructions+=2;goto B587f51;
case 0x587f53:c.instructions+=1;goto B587f53;
case 0x587f55:goto L587f55;
case 0x587f58:c.instructions+=5;goto B587f58;
case 0x587f5a:c.instructions+=4;goto B587f5a;
case 0x587f5e:c.instructions+=3;goto B587f5e;
case 0x587f5f:c.instructions+=2;goto B587f5f;
case 0x587f67:c.instructions+=1;goto B587f67;
case 0x587f6c:goto L587f6c;
case 0x587f70:c.instructions+=5;goto B587f70;
case 0x587f74:c.instructions+=4;goto B587f74;
case 0x587f78:c.instructions+=3;goto B587f78;
case 0x587f79:c.instructions+=2;goto B587f79;
case 0x587f7b:c.instructions+=1;goto B587f7b;
case 0x587f7d:goto L587f7d;
case 0x587f7f:goto L587f7f;
case 0x587f81:c.instructions+=2;goto B587f81;
case 0x587f83:c.instructions+=1;goto B587f83;
case 0x587f85:goto L587f85;
case 0x587f8a:c.instructions+=4;goto B587f8a;
case 0x587f8c:c.instructions+=3;goto B587f8c;
case 0x587f8d:c.instructions+=2;goto B587f8d;
case 0x587f8f:c.instructions+=1;goto B587f8f;
case 0x587f94:goto L587f94;
case 0x587f98:c.instructions+=3;goto B587f98;
case 0x587f99:c.instructions+=2;goto B587f99;
case 0x587f9b:c.instructions+=1;goto B587f9b;
case 0x587f9d:goto L587f9d;
case 0x587fa1:c.instructions+=2;goto B587fa1;
case 0x587fa5:c.instructions+=1;goto B587fa5;
case 0x587fa7:goto L587fa7;
case 0x587faa:c.instructions+=3;goto B587faa;
case 0x587fb0:c.instructions+=2;goto B587fb0;
case 0x587fb6:c.instructions+=1;goto B587fb6;
case 0x587fb8:goto L587fb8;
case 0x587fb9:c.instructions+=4;goto B587fb9;
case 0x587fbd:c.instructions+=3;goto B587fbd;
case 0x587fbe:c.instructions+=2;goto B587fbe;
case 0x587fc6:c.instructions+=1;goto B587fc6;
case 0x587fcb:goto L587fcb;
case 0x587fcf:c.instructions+=4;goto B587fcf;
case 0x587fd0:c.instructions+=3;goto B587fd0;
case 0x587fd1:c.instructions+=2;goto B587fd1;
case 0x587fd3:c.instructions+=1;goto B587fd3;
case 0x587fd8:goto L587fd8;
case 0x587fdb:c.instructions+=13;goto B587fdb;
case 0x587fde:c.instructions+=12;goto B587fde;
case 0x587fe2:c.instructions+=11;goto B587fe2;
case 0x587fe4:c.instructions+=10;goto B587fe4;
case 0x587fe7:c.instructions+=9;goto B587fe7;
case 0x587fea:c.instructions+=8;goto B587fea;
case 0x587fee:c.instructions+=7;goto B587fee;
case 0x587ff0:c.instructions+=6;goto B587ff0;
case 0x587ff2:c.instructions+=5;goto B587ff2;
case 0x587ff6:c.instructions+=4;goto B587ff6;
case 0x587ff7:c.instructions+=3;goto B587ff7;
case 0x587ff9:c.instructions+=2;goto B587ff9;
case 0x587ffd:c.instructions+=1;goto B587ffd;
default:missing_instruction(c.pc);}
B587001:L587001:{c.instructions+=8;NFSU2_TR(0x587001);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B587005:{NFSU2_TR(0x587005);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B587008:{NFSU2_TR(0x587008);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587009:{NFSU2_TR(0x587009);
u8 U[4];
w4(U+0,u32(0x7a13c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58700e:{NFSU2_TR(0x58700e);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B587012:{NFSU2_TR(0x587012);
u8 U[4];
w4(U+0,u32(0x300ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587017:{NFSU2_TR(0x587017);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587018:{NFSU2_TR(0x587018);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58701dull));
TAIL_STATIC(0x741a50u,741);
}
B58701d:L58701d:{c.instructions+=7;NFSU2_TR(0x58701d);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B587021:{NFSU2_TR(0x587021);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587022:{NFSU2_TR(0x587022);
u8 U[4];
w4(U+0,u32(0x7a13c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587027:{NFSU2_TR(0x587027);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B58702b:{NFSU2_TR(0x58702b);
u8 U[4];
w4(U+0,u32(0x300ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587030:{NFSU2_TR(0x587030);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587031:{NFSU2_TR(0x587031);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x587036ull));
TAIL_STATIC(0x741a50u,741);
}
B587036:L587036:{c.instructions+=7;NFSU2_TR(0x587036);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58703a:{NFSU2_TR(0x58703a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58703b:{NFSU2_TR(0x58703b);
u8 U[4];
w4(U+0,u32(0x7a13b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587040:{NFSU2_TR(0x587040);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B587044:{NFSU2_TR(0x587044);
u8 U[4];
w4(U+0,u32(0x300ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587049:{NFSU2_TR(0x587049);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58704a:{NFSU2_TR(0x58704a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58704full));
TAIL_STATIC(0x741a50u,741);
}
B58704f:L58704f:{c.instructions+=7;NFSU2_TR(0x58704f);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B587053:{NFSU2_TR(0x587053);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587054:{NFSU2_TR(0x587054);
u8 U[4];
w4(U+0,u32(0x7a13b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587059:{NFSU2_TR(0x587059);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58705d:{NFSU2_TR(0x58705d);
u8 U[4];
w4(U+0,u32(0x300ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587062:{NFSU2_TR(0x587062);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587063:{NFSU2_TR(0x587063);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x587068ull));
TAIL_STATIC(0x741a50u,741);
}
B587068:L587068:{c.instructions+=8;NFSU2_TR(0x587068);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B58706b:{NFSU2_TR(0x58706b);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B58706f:{NFSU2_TR(0x58706f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587070:{NFSU2_TR(0x587070);
u8 U[4];
w4(U+0,u32(0x7a13a8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587075:{NFSU2_TR(0x587075);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B587079:{NFSU2_TR(0x587079);
u8 U[4];
w4(U+0,u32(0x300ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58707e:{NFSU2_TR(0x58707e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58707f:{NFSU2_TR(0x58707f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x587084ull));
TAIL_STATIC(0x741a50u,741);
}
B587084:L587084:{c.instructions+=2;NFSU2_TR(0x587084);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B587087:{NFSU2_TR(0x587087);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58708cull));
TAIL_STATIC(0x571380u,571);
}
B58708c:L58708c:{c.instructions+=2;NFSU2_TR(0x58708c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58708e:{NFSU2_TR(0x58708e);
if(r1(R+518)){{goto L5870ad;}}
}
B587090:L587090:{c.instructions+=1;NFSU2_TR(0x587090);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x587095ull));
TAIL_STATIC(0x571380u,571);
}
B587095:L587095:{c.instructions+=6;NFSU2_TR(0x587095);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587096:{NFSU2_TR(0x587096);
u8 U[4];
w4(U+0,u32(0x7a13a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58709b:{NFSU2_TR(0x58709b);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58709f:{NFSU2_TR(0x58709f);
u8 U[4];
w4(U+0,u32(0x300ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5870a4:{NFSU2_TR(0x5870a4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5870a5:{NFSU2_TR(0x5870a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5870aaull));
TAIL_STATIC(0x741a50u,741);
}
B5870aa:L5870aa:{c.instructions+=1;NFSU2_TR(0x5870aa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5870ad:L5870ad:{c.instructions+=1;NFSU2_TR(0x5870ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5870b2ull));
TAIL_STATIC(0x5712a0u,571);
}
B5870b2:L5870b2:{c.instructions+=2;NFSU2_TR(0x5870b2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5870b4:{NFSU2_TR(0x5870b4);
if(r1(R+518)){{goto L5870d3;}}
}
B5870b6:L5870b6:{c.instructions+=1;NFSU2_TR(0x5870b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5870bbull));
TAIL_STATIC(0x5712a0u,571);
}
B5870bb:L5870bb:{c.instructions+=6;NFSU2_TR(0x5870bb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5870bc:{NFSU2_TR(0x5870bc);
u8 U[4];
w4(U+0,u32(0x7a1398ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5870c1:{NFSU2_TR(0x5870c1);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5870c5:{NFSU2_TR(0x5870c5);
u8 U[4];
w4(U+0,u32(0x300ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5870ca:{NFSU2_TR(0x5870ca);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5870cb:{NFSU2_TR(0x5870cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5870d0ull));
TAIL_STATIC(0x741a50u,741);
}
B5870d0:L5870d0:{c.instructions+=1;NFSU2_TR(0x5870d0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5870d3:L5870d3:{c.instructions+=3;NFSU2_TR(0x5870d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5870d7:{NFSU2_TR(0x5870d7);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(r1(R+12))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B5870d9:{NFSU2_TR(0x5870d9);
if(r1(R+518)){{goto L5870f3;}}
}
B5870db:L5870db:{c.instructions+=6;NFSU2_TR(0x5870db);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5870dc:{NFSU2_TR(0x5870dc);
u8 U[4];
w4(U+0,u32(0x7a1390ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5870e1:{NFSU2_TR(0x5870e1);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5870e5:{NFSU2_TR(0x5870e5);
u8 U[4];
w4(U+0,u32(0x300ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5870ea:{NFSU2_TR(0x5870ea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5870eb:{NFSU2_TR(0x5870eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5870f0ull));
TAIL_STATIC(0x741a50u,741);
}
B5870f0:L5870f0:{c.instructions+=1;NFSU2_TR(0x5870f0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5870f3:L5870f3:{c.instructions+=6;NFSU2_TR(0x5870f3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5870f5:{NFSU2_TR(0x5870f5);
u8 U[4];
w4(U+0,u32(0x7a138cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5870fa:{NFSU2_TR(0x5870fa);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5870fe:{NFSU2_TR(0x5870fe);
u8 U[4];
w4(U+0,u32(0x300ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587103:{NFSU2_TR(0x587103);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587104:{NFSU2_TR(0x587104);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x587109ull));
TAIL_STATIC(0x741690u,741);
}
B587109:L587109:{c.instructions+=14;NFSU2_TR(0x587109);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58710d:{NFSU2_TR(0x58710d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B58710f:{NFSU2_TR(0x58710f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B587112:{NFSU2_TR(0x587112);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B587115:{NFSU2_TR(0x587115);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B587118:{NFSU2_TR(0x587118);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587119:{NFSU2_TR(0x587119);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58711a:{NFSU2_TR(0x58711a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58711b:{NFSU2_TR(0x58711b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58711c:{NFSU2_TR(0x58711c);
u8 U[4];
w4(U+0,u32(0x584630ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587121:{NFSU2_TR(0x587121);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B587125:{NFSU2_TR(0x587125);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587126:{NFSU2_TR(0x587126);
u8 U[4];
w4(U+0,u32(0x61636374ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58712b:{NFSU2_TR(0x58712b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x587130ull));
TAIL_STATIC(0x5869a0u,586);
}
B587130:L587130:{c.instructions+=6;NFSU2_TR(0x587130);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B587131:{NFSU2_TR(0x587131);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B587132:{NFSU2_TR(0x587132);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B587133:{NFSU2_TR(0x587133);
__builtin_memmove((R+16),(R+20),4);
}
B587135:{NFSU2_TR(0x587135);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B587136:{NFSU2_TR(0x587136);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B587139:L587139:{c.instructions+=7;NFSU2_TR(0x587139);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58713a:{NFSU2_TR(0x58713a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58713b:{NFSU2_TR(0x58713b);
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
B58713e:{NFSU2_TR(0x58713e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58713f:{NFSU2_TR(0x58713f);
__builtin_memmove((R+16),(R+20),4);
}
B587141:{NFSU2_TR(0x587141);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B587142:{NFSU2_TR(0x587142);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B587150:L587150:{c.instructions+=11;NFSU2_TR(0x587150);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587151:{NFSU2_TR(0x587151);
__builtin_memmove((R+20),(R+16),4);
}
B587153:{NFSU2_TR(0x587153);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B587156:{NFSU2_TR(0x587156);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x100ull))));
}
B58715c:{NFSU2_TR(0x58715c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58715d:{NFSU2_TR(0x58715d);
__builtin_memmove((R+24),(R+4),4);
}
B58715f:{NFSU2_TR(0x58715f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B587161:{NFSU2_TR(0x587161);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B587164:{NFSU2_TR(0x587164);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B587166:{NFSU2_TR(0x587166);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587167:{NFSU2_TR(0x587167);
if(r1(R+518)){{goto L587223;}}
}
B58716d:L58716d:{c.instructions+=3;NFSU2_TR(0x58716d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B587170:{NFSU2_TR(0x587170);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B587172:{NFSU2_TR(0x587172);
if(r1(R+518)){{goto L587223;}}
}
B587178:L587178:{c.instructions+=2;NFSU2_TR(0x587178);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B58717b:{NFSU2_TR(0x58717b);
if(r1(R+518)){{goto L587223;}}
}
B587181:L587181:{c.instructions+=4;NFSU2_TR(0x587181);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B587186:{NFSU2_TR(0x587186);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B587188:{NFSU2_TR(0x587188);
w4(R+4,u32(0x3full));
}
B58718d:{NFSU2_TR(0x58718d);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B587191:L587191:{c.instructions+=1;NFSU2_TR(0x587191);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L587193;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x587191u);}goto L587191;}
}
B587193:L587193:{c.instructions+=8;NFSU2_TR(0x587193);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587194:{NFSU2_TR(0x587194);
u8 U[4];
w4(U+0,u32(0x7a13c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587199:{NFSU2_TR(0x587199);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B58719b:{NFSU2_TR(0x58719b);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58719f:{NFSU2_TR(0x58719f);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5871a4:{NFSU2_TR(0x5871a4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5871a5:{NFSU2_TR(0x5871a5);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B5871a6:{NFSU2_TR(0x5871a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5871abull));
TAIL_STATIC(0x741a50u,741);
}
B5871ab:L5871ab:{c.instructions+=2;NFSU2_TR(0x5871ab);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5871ae:{NFSU2_TR(0x5871ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5871b3ull));
TAIL_STATIC(0x571380u,571);
}
B5871b3:L5871b3:{c.instructions+=2;NFSU2_TR(0x5871b3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5871b5:{NFSU2_TR(0x5871b5);
if(r1(R+518)){{goto L5871d4;}}
}
B5871b7:L5871b7:{c.instructions+=1;NFSU2_TR(0x5871b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5871bcull));
TAIL_STATIC(0x571380u,571);
}
B5871bc:L5871bc:{c.instructions+=6;NFSU2_TR(0x5871bc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5871bd:{NFSU2_TR(0x5871bd);
u8 U[4];
w4(U+0,u32(0x7a13a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5871c2:{NFSU2_TR(0x5871c2);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5871c6:{NFSU2_TR(0x5871c6);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5871cb:{NFSU2_TR(0x5871cb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5871cc:{NFSU2_TR(0x5871cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5871d1ull));
TAIL_STATIC(0x741a50u,741);
}
B5871d1:L5871d1:{c.instructions+=1;NFSU2_TR(0x5871d1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5871d4:L5871d4:{c.instructions+=1;NFSU2_TR(0x5871d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5871d9ull));
TAIL_STATIC(0x5712a0u,571);
}
B5871d9:L5871d9:{c.instructions+=2;NFSU2_TR(0x5871d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5871db:{NFSU2_TR(0x5871db);
if(r1(R+518)){{goto L5871fa;}}
}
B5871dd:L5871dd:{c.instructions+=1;NFSU2_TR(0x5871dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5871e2ull));
TAIL_STATIC(0x5712a0u,571);
}
B5871e2:L5871e2:{c.instructions+=6;NFSU2_TR(0x5871e2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5871e3:{NFSU2_TR(0x5871e3);
u8 U[4];
w4(U+0,u32(0x7a1398ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5871e8:{NFSU2_TR(0x5871e8);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5871ec:{NFSU2_TR(0x5871ec);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5871f1:{NFSU2_TR(0x5871f1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5871f2:{NFSU2_TR(0x5871f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5871f7ull));
TAIL_STATIC(0x741a50u,741);
}
B5871f7:L5871f7:{c.instructions+=1;NFSU2_TR(0x5871f7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5871fa:L5871fa:{c.instructions+=12;NFSU2_TR(0x5871fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5871fd:{NFSU2_TR(0x5871fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B587200:{NFSU2_TR(0x587200);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B587202:{NFSU2_TR(0x587202);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587204:{NFSU2_TR(0x587204);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587205:{NFSU2_TR(0x587205);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587206:{NFSU2_TR(0x587206);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587207:{NFSU2_TR(0x587207);
u8 U[4];
w4(U+0,u32(0x584630ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58720c:{NFSU2_TR(0x58720c);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B587210:{NFSU2_TR(0x587210);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587211:{NFSU2_TR(0x587211);
u8 U[4];
w4(U+0,u32(0x6c6f7374ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587216:{NFSU2_TR(0x587216);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58721bull));
TAIL_STATIC(0x5869a0u,586);
}
B58721b:L58721b:{c.instructions+=5;NFSU2_TR(0x58721b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58721c:{NFSU2_TR(0x58721c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58721d:{NFSU2_TR(0x58721d);
__builtin_memmove((R+16),(R+20),4);
}
B58721f:{NFSU2_TR(0x58721f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B587220:{NFSU2_TR(0x587220);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B587223:L587223:{c.instructions+=6;NFSU2_TR(0x587223);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B587224:{NFSU2_TR(0x587224);
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
B587227:{NFSU2_TR(0x587227);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B587228:{NFSU2_TR(0x587228);
__builtin_memmove((R+16),(R+20),4);
}
B58722a:{NFSU2_TR(0x58722a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58722b:{NFSU2_TR(0x58722b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B587230:L587230:{c.instructions+=11;NFSU2_TR(0x587230);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587231:{NFSU2_TR(0x587231);
__builtin_memmove((R+20),(R+16),4);
}
B587233:{NFSU2_TR(0x587233);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B587236:{NFSU2_TR(0x587236);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x100ull))));
}
B58723c:{NFSU2_TR(0x58723c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58723d:{NFSU2_TR(0x58723d);
__builtin_memmove((R+24),(R+4),4);
}
B58723f:{NFSU2_TR(0x58723f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B587241:{NFSU2_TR(0x587241);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B587244:{NFSU2_TR(0x587244);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B587246:{NFSU2_TR(0x587246);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587247:{NFSU2_TR(0x587247);
if(r1(R+518)){{goto L587303;}}
}
B58724d:L58724d:{c.instructions+=3;NFSU2_TR(0x58724d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B587250:{NFSU2_TR(0x587250);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B587252:{NFSU2_TR(0x587252);
if(r1(R+518)){{goto L587303;}}
}
B587258:L587258:{c.instructions+=2;NFSU2_TR(0x587258);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B58725b:{NFSU2_TR(0x58725b);
if(r1(R+518)){{goto L587303;}}
}
B587261:L587261:{c.instructions+=4;NFSU2_TR(0x587261);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B587266:{NFSU2_TR(0x587266);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B587268:{NFSU2_TR(0x587268);
w4(R+4,u32(0x3full));
}
B58726d:{NFSU2_TR(0x58726d);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B587271:L587271:{c.instructions+=1;NFSU2_TR(0x587271);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L587273;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x587271u);}goto L587271;}
}
B587273:L587273:{c.instructions+=8;NFSU2_TR(0x587273);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587274:{NFSU2_TR(0x587274);
u8 U[4];
w4(U+0,u32(0x79ac28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587279:{NFSU2_TR(0x587279);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B58727b:{NFSU2_TR(0x58727b);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58727f:{NFSU2_TR(0x58727f);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587284:{NFSU2_TR(0x587284);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587285:{NFSU2_TR(0x587285);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B587286:{NFSU2_TR(0x587286);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58728bull));
TAIL_STATIC(0x741a50u,741);
}
B58728b:L58728b:{c.instructions+=2;NFSU2_TR(0x58728b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B58728e:{NFSU2_TR(0x58728e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x587293ull));
TAIL_STATIC(0x571380u,571);
}
B587293:L587293:{c.instructions+=2;NFSU2_TR(0x587293);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B587295:{NFSU2_TR(0x587295);
if(r1(R+518)){{goto L5872b4;}}
}
B587297:L587297:{c.instructions+=1;NFSU2_TR(0x587297);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58729cull));
TAIL_STATIC(0x571380u,571);
}
B58729c:L58729c:{c.instructions+=6;NFSU2_TR(0x58729c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58729d:{NFSU2_TR(0x58729d);
u8 U[4];
w4(U+0,u32(0x7a13a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5872a2:{NFSU2_TR(0x5872a2);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5872a6:{NFSU2_TR(0x5872a6);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5872ab:{NFSU2_TR(0x5872ab);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5872ac:{NFSU2_TR(0x5872ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5872b1ull));
TAIL_STATIC(0x741a50u,741);
}
B5872b1:L5872b1:{c.instructions+=1;NFSU2_TR(0x5872b1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5872b4:L5872b4:{c.instructions+=1;NFSU2_TR(0x5872b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5872b9ull));
TAIL_STATIC(0x5712a0u,571);
}
B5872b9:L5872b9:{c.instructions+=2;NFSU2_TR(0x5872b9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5872bb:{NFSU2_TR(0x5872bb);
if(r1(R+518)){{goto L5872da;}}
}
B5872bd:L5872bd:{c.instructions+=1;NFSU2_TR(0x5872bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5872c2ull));
TAIL_STATIC(0x5712a0u,571);
}
B5872c2:L5872c2:{c.instructions+=6;NFSU2_TR(0x5872c2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5872c3:{NFSU2_TR(0x5872c3);
u8 U[4];
w4(U+0,u32(0x7a1398ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5872c8:{NFSU2_TR(0x5872c8);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5872cc:{NFSU2_TR(0x5872cc);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5872d1:{NFSU2_TR(0x5872d1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5872d2:{NFSU2_TR(0x5872d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5872d7ull));
TAIL_STATIC(0x741a50u,741);
}
B5872d7:L5872d7:{c.instructions+=1;NFSU2_TR(0x5872d7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5872da:L5872da:{c.instructions+=12;NFSU2_TR(0x5872da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5872dd:{NFSU2_TR(0x5872dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5872e0:{NFSU2_TR(0x5872e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5872e2:{NFSU2_TR(0x5872e2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5872e4:{NFSU2_TR(0x5872e4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5872e5:{NFSU2_TR(0x5872e5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5872e6:{NFSU2_TR(0x5872e6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5872e7:{NFSU2_TR(0x5872e7);
u8 U[4];
w4(U+0,u32(0x584630ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5872ec:{NFSU2_TR(0x5872ec);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5872f0:{NFSU2_TR(0x5872f0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5872f1:{NFSU2_TR(0x5872f1);
u8 U[4];
w4(U+0,u32(0x6c6f7374ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5872f6:{NFSU2_TR(0x5872f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5872fbull));
TAIL_STATIC(0x5869a0u,586);
}
B5872fb:L5872fb:{c.instructions+=5;NFSU2_TR(0x5872fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5872fc:{NFSU2_TR(0x5872fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5872fd:{NFSU2_TR(0x5872fd);
__builtin_memmove((R+16),(R+20),4);
}
B5872ff:{NFSU2_TR(0x5872ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B587300:{NFSU2_TR(0x587300);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B587303:L587303:{c.instructions+=6;NFSU2_TR(0x587303);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B587304:{NFSU2_TR(0x587304);
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
B587307:{NFSU2_TR(0x587307);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B587308:{NFSU2_TR(0x587308);
__builtin_memmove((R+16),(R+20),4);
}
B58730a:{NFSU2_TR(0x58730a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58730b:{NFSU2_TR(0x58730b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B587310:L587310:{c.instructions+=7;NFSU2_TR(0x587310);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x40ull))));
}
B587313:{NFSU2_TR(0x587313);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587314:{NFSU2_TR(0x587314);
__builtin_memmove((R+24),(R+4),4);
}
B587316:{NFSU2_TR(0x587316);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B587318:{NFSU2_TR(0x587318);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B58731b:{NFSU2_TR(0x58731b);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B58731d:{NFSU2_TR(0x58731d);
if(r1(R+518)){{goto L587329;}}
}
B58731f:L58731f:{c.instructions+=4;NFSU2_TR(0x58731f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B587322:{NFSU2_TR(0x587322);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B587324:{NFSU2_TR(0x587324);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B587327:{NFSU2_TR(0x587327);
if(r1(R+518)){{goto L587333;}}
}
B587329:L587329:{c.instructions+=4;NFSU2_TR(0x587329);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B58732c:{NFSU2_TR(0x58732c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58732d:{NFSU2_TR(0x58732d);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x40ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x40ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B587330:{NFSU2_TR(0x587330);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B587333:L587333:{c.instructions+=7;NFSU2_TR(0x587333);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587334:{NFSU2_TR(0x587334);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B587338:{NFSU2_TR(0x587338);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587339:{NFSU2_TR(0x587339);
u8 U[4];
w4(U+0,u32(0xfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58733b:{NFSU2_TR(0x58733b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58733c:{NFSU2_TR(0x58733c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58733d:{NFSU2_TR(0x58733d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x587342ull));
TAIL_STATIC(0x43dc00u,43d);
}
B587342:L587342:{c.instructions+=4;NFSU2_TR(0x587342);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B587347:{NFSU2_TR(0x587347);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B587349:{NFSU2_TR(0x587349);
w4(R+4,u32(0xfull));
}
B58734e:{NFSU2_TR(0x58734e);
u8 U[4];
w4(U+0,u32(u32(u32(0x19ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B587352:L587352:{c.instructions+=1;NFSU2_TR(0x587352);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L587354;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x587352u);}goto L587352;}
}
B587354:L587354:{c.instructions+=8;NFSU2_TR(0x587354);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587355:{NFSU2_TR(0x587355);
u8 U[4];
w4(U+0,u32(0x7a13e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58735a:{NFSU2_TR(0x58735a);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B58735c:{NFSU2_TR(0x58735c);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B587360:{NFSU2_TR(0x587360);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587362:{NFSU2_TR(0x587362);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587363:{NFSU2_TR(0x587363);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B587364:{NFSU2_TR(0x587364);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x587369ull));
TAIL_STATIC(0x741a50u,741);
}
B587369:L587369:{c.instructions+=13;NFSU2_TR(0x587369);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58736d:{NFSU2_TR(0x58736d);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B587371:{NFSU2_TR(0x587371);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B587374:{NFSU2_TR(0x587374);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587376:{NFSU2_TR(0x587376);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587377:{NFSU2_TR(0x587377);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587378:{NFSU2_TR(0x587378);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587379:{NFSU2_TR(0x587379);
u8 U[4];
w4(U+0,u32(0x585040ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58737e:{NFSU2_TR(0x58737e);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B587382:{NFSU2_TR(0x587382);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587383:{NFSU2_TR(0x587383);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B587385:{NFSU2_TR(0x587385);
u8 U[4];
w4(U+0,u32(0x63706572ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58738a:{NFSU2_TR(0x58738a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58738full));
TAIL_STATIC(0x5869a0u,586);
}
B58738f:L58738f:{c.instructions+=5;NFSU2_TR(0x58738f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B587390:{NFSU2_TR(0x587390);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B587391:{NFSU2_TR(0x587391);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B587392:{NFSU2_TR(0x587392);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x40ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x40ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B587395:{NFSU2_TR(0x587395);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5873a0:L5873a0:{c.instructions+=7;NFSU2_TR(0x5873a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x40ull))));
}
B5873a3:{NFSU2_TR(0x5873a3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5873a4:{NFSU2_TR(0x5873a4);
__builtin_memmove((R+12),(R+4),4);
}
B5873a6:{NFSU2_TR(0x5873a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5873a8:{NFSU2_TR(0x5873a8);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5873ab:{NFSU2_TR(0x5873ab);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5873ad:{NFSU2_TR(0x5873ad);
if(r1(R+518)){{goto L5873b9;}}
}
B5873af:L5873af:{c.instructions+=4;NFSU2_TR(0x5873af);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5873b2:{NFSU2_TR(0x5873b2);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5873b4:{NFSU2_TR(0x5873b4);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5873b7:{NFSU2_TR(0x5873b7);
if(r1(R+518)){{goto L5873c3;}}
}
B5873b9:L5873b9:{c.instructions+=4;NFSU2_TR(0x5873b9);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B5873bc:{NFSU2_TR(0x5873bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5873bd:{NFSU2_TR(0x5873bd);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x40ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x40ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5873c0:{NFSU2_TR(0x5873c0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5873c3:L5873c3:{c.instructions+=8;NFSU2_TR(0x5873c3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5873c4:{NFSU2_TR(0x5873c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5873c8:{NFSU2_TR(0x5873c8);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x5ull))));
}
B5873cb:{NFSU2_TR(0x5873cb);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B5873ce:{NFSU2_TR(0x5873ce);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+8),(U+8),1);
}
B5873d1:{NFSU2_TR(0x5873d1);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B5873d3:{NFSU2_TR(0x5873d3);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5873d5:{NFSU2_TR(0x5873d5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5873e2;}}
}
B5873d7:L5873d7:{c.instructions+=5;NFSU2_TR(0x5873d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5873d8:{NFSU2_TR(0x5873d8);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B5873db:{NFSU2_TR(0x5873db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5873dc:{NFSU2_TR(0x5873dc);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x40ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x40ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5873df:{NFSU2_TR(0x5873df);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5873e2:L5873e2:{c.instructions+=4;NFSU2_TR(0x5873e2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5873e3:{NFSU2_TR(0x5873e3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5873e4:{NFSU2_TR(0x5873e4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5873e5:{NFSU2_TR(0x5873e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5873eaull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5873ea:L5873ea:{c.instructions+=4;NFSU2_TR(0x5873ea);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5873ec:{NFSU2_TR(0x5873ec);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5873f1:{NFSU2_TR(0x5873f1);
w4(R+4,u32(0xfull));
}
B5873f6:{NFSU2_TR(0x5873f6);
u8 U[4];
w4(U+0,u32(u32(u32(0x15ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B5873fa:L5873fa:{c.instructions+=1;NFSU2_TR(0x5873fa);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5873fc;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5873fau);}goto L5873fa;}
}
B5873fc:L5873fc:{c.instructions+=10;NFSU2_TR(0x5873fc);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B5873fe:{NFSU2_TR(0x5873fe);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B5873ff:{NFSU2_TR(0x5873ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B587401:{NFSU2_TR(0x587401);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B587403:{NFSU2_TR(0x587403);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587404:{NFSU2_TR(0x587404);
u8 U[4];
w4(U+0,u32(0x7a13e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587409:{NFSU2_TR(0x587409);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58740d:{NFSU2_TR(0x58740d);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58740f:{NFSU2_TR(0x58740f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587410:{NFSU2_TR(0x587410);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x587415ull));
TAIL_STATIC(0x741a50u,741);
}
B587415:L587415:{c.instructions+=13;NFSU2_TR(0x587415);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B587419:{NFSU2_TR(0x587419);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58741d:{NFSU2_TR(0x58741d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B587420:{NFSU2_TR(0x587420);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587422:{NFSU2_TR(0x587422);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587423:{NFSU2_TR(0x587423);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587424:{NFSU2_TR(0x587424);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587425:{NFSU2_TR(0x587425);
u8 U[4];
w4(U+0,u32(0x5850c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58742a:{NFSU2_TR(0x58742a);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58742e:{NFSU2_TR(0x58742e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58742f:{NFSU2_TR(0x58742f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B587431:{NFSU2_TR(0x587431);
u8 U[4];
w4(U+0,u32(0x64706572ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587436:{NFSU2_TR(0x587436);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58743bull));
TAIL_STATIC(0x5869a0u,586);
}
B58743b:L58743b:{c.instructions+=5;NFSU2_TR(0x58743b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58743c:{NFSU2_TR(0x58743c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58743d:{NFSU2_TR(0x58743d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58743e:{NFSU2_TR(0x58743e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x40ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x40ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B587441:{NFSU2_TR(0x587441);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B587450:L587450:{c.instructions+=8;NFSU2_TR(0x587450);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587451:{NFSU2_TR(0x587451);
__builtin_memmove((R+12),(R+4),4);
}
B587453:{NFSU2_TR(0x587453);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B587455:{NFSU2_TR(0x587455);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B587458:{NFSU2_TR(0x587458);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B58745a:{NFSU2_TR(0x58745a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58745b:{NFSU2_TR(0x58745b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58745c:{NFSU2_TR(0x58745c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L587467;}}
}
B58745e:L58745e:{c.instructions+=5;NFSU2_TR(0x58745e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58745f:{NFSU2_TR(0x58745f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B587460:{NFSU2_TR(0x587460);
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
B587463:{NFSU2_TR(0x587463);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B587464:{NFSU2_TR(0x587464);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B587467:L587467:{c.instructions+=4;NFSU2_TR(0x587467);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587468:{NFSU2_TR(0x587468);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B58746c:{NFSU2_TR(0x58746c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58746e:{NFSU2_TR(0x58746e);
if(r1(R+518)){{goto L5874ae;}}
}
B587470:L587470:{c.instructions+=2;NFSU2_TR(0x587470);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+20))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B587474:{NFSU2_TR(0x587474);
if(r1(R+518)){{goto L5874ae;}}
}
B587476:L587476:{c.instructions+=3;NFSU2_TR(0x587476);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B587479:{NFSU2_TR(0x587479);
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
B58747b:{NFSU2_TR(0x58747b);
if(r1(R+518)){{goto L587489;}}
}
B58747d:L58747d:{c.instructions+=6;NFSU2_TR(0x58747d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58747e:{NFSU2_TR(0x58747e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58747f:{NFSU2_TR(0x58747f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B587480:{NFSU2_TR(0x587480);
w4(R+0,u32(0xffffffffull));
}
B587485:{NFSU2_TR(0x587485);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B587486:{NFSU2_TR(0x587486);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B587489:L587489:{c.instructions+=2;NFSU2_TR(0x587489);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B58748b:{NFSU2_TR(0x58748b);
w4(R+24,u32(0x50ull));
}
B587490:L587490:{c.instructions+=5;NFSU2_TR(0x587490);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B587492:{NFSU2_TR(0x587492);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B587494:{NFSU2_TR(0x587494);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587495:{NFSU2_TR(0x587495);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587496:{NFSU2_TR(0x587496);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58749bull));
TAIL_STATIC(0x43dc30u,43d);
}
B58749b:L58749b:{c.instructions+=3;NFSU2_TR(0x58749b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58749e:{NFSU2_TR(0x58749e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5874a0:{NFSU2_TR(0x5874a0);
if(r1(R+518)){{goto L5874b8;}}
}
B5874a2:L5874a2:{c.instructions+=4;NFSU2_TR(0x5874a2);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B5874a5:{NFSU2_TR(0x5874a5);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5874a6:{NFSU2_TR(0x5874a6);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x90ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x90ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5874ac:{NFSU2_TR(0x5874ac);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x587490u);}goto L587490;}}
}
B5874ae:L5874ae:{c.instructions+=6;NFSU2_TR(0x5874ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5874af:{NFSU2_TR(0x5874af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5874b0:{NFSU2_TR(0x5874b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5874b1:{NFSU2_TR(0x5874b1);
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
B5874b4:{NFSU2_TR(0x5874b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5874b5:{NFSU2_TR(0x5874b5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5874b8:L5874b8:{c.instructions+=7;NFSU2_TR(0x5874b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5874bc:{NFSU2_TR(0x5874bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5874c0:{NFSU2_TR(0x5874c0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5874c1:{NFSU2_TR(0x5874c1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5874c2:{NFSU2_TR(0x5874c2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5874c3:{NFSU2_TR(0x5874c3);
__builtin_memmove((R+4),(R+12),4);
}
B5874c5:{NFSU2_TR(0x5874c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5874caull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5873a0u);}goto L5873a0;}
}
B5874ca:L5874ca:{c.instructions+=5;NFSU2_TR(0x5874ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5874cb:{NFSU2_TR(0x5874cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5874cc:{NFSU2_TR(0x5874cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5874cd:{NFSU2_TR(0x5874cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5874ce:{NFSU2_TR(0x5874ce);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5874e0:L5874e0:{c.instructions+=6;NFSU2_TR(0x5874e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5874e1:{NFSU2_TR(0x5874e1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5874e2:{NFSU2_TR(0x5874e2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5874e6:{NFSU2_TR(0x5874e6);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5874e8:{NFSU2_TR(0x5874e8);
__builtin_memmove((R+24),(R+4),4);
}
B5874ea:{NFSU2_TR(0x5874ea);
if(r1(R+518)){{goto L5875aa;}}
}
B5874f0:L5874f0:{c.instructions+=2;NFSU2_TR(0x5874f0);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B5874f3:{NFSU2_TR(0x5874f3);
if(r1(R+518)){{goto L5875aa;}}
}
B5874f9:L5874f9:{c.instructions+=7;NFSU2_TR(0x5874f9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5874fa:{NFSU2_TR(0x5874fa);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5874fd:{NFSU2_TR(0x5874fd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5874fe:{NFSU2_TR(0x5874fe);
__builtin_memmove((R+4),(R+12),4);
}
B587500:{NFSU2_TR(0x587500);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+24)),r1(U+0));
}
B587503:{NFSU2_TR(0x587503);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x140ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B58750d:{NFSU2_TR(0x58750d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x587512ull));
TAIL_STATIC(0x583220u,583);
}
B587512:L587512:{c.instructions+=3;NFSU2_TR(0x587512);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((R+20),(U+0),4);
}
B587518:{NFSU2_TR(0x587518);
__builtin_memmove((R+4),(R+20),4);
}
B58751a:{NFSU2_TR(0x58751a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58751full));
TAIL_STATIC(0x583220u,583);
}
B58751f:L58751f:{c.instructions+=6;NFSU2_TR(0x58751f);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587524:{NFSU2_TR(0x587524);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587526:{NFSU2_TR(0x587526);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587527:{NFSU2_TR(0x587527);
u8 U[4];
w4(U+0,u32(0x7a13e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58752c:{NFSU2_TR(0x58752c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58752d:{NFSU2_TR(0x58752d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x587532ull));
TAIL_STATIC(0x7414a0u,741);
}
B587532:L587532:{c.instructions+=3;NFSU2_TR(0x587532);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B587535:{NFSU2_TR(0x587535);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587536:{NFSU2_TR(0x587536);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58753bull));
TAIL_STATIC(0x742360u,742);
}
B58753b:L58753b:{c.instructions+=7;NFSU2_TR(0x58753b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B58753e:{NFSU2_TR(0x58753e);
u8 U[4];
w4(U+0,u32(0x794e68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587543:{NFSU2_TR(0x587543);
u8 U[4];
w4(U+0,u32(0x98ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587548:{NFSU2_TR(0x587548);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587549:{NFSU2_TR(0x587549);
u8 U[4];
w4(U+0,u32(0x7a1400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58754e:{NFSU2_TR(0x58754e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58754f:{NFSU2_TR(0x58754f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x587554ull));
TAIL_STATIC(0x7414a0u,741);
}
B587554:L587554:{c.instructions+=3;NFSU2_TR(0x587554);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B587557:{NFSU2_TR(0x587557);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587558:{NFSU2_TR(0x587558);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58755dull));
TAIL_STATIC(0x7425d0u,742);
}
B58755d:L58755d:{c.instructions+=7;NFSU2_TR(0x58755d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B587560:{NFSU2_TR(0x587560);
u8 U[4];
w4(U+0,u32(0x794e68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587565:{NFSU2_TR(0x587565);
u8 U[4];
w4(U+0,u32(0x98ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58756a:{NFSU2_TR(0x58756a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58756b:{NFSU2_TR(0x58756b);
u8 U[4];
w4(U+0,u32(0x7a13f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587570:{NFSU2_TR(0x587570);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587571:{NFSU2_TR(0x587571);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x587576ull));
TAIL_STATIC(0x7414a0u,741);
}
B587576:L587576:{c.instructions+=3;NFSU2_TR(0x587576);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B587579:{NFSU2_TR(0x587579);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58757a:{NFSU2_TR(0x58757a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58757full));
TAIL_STATIC(0x7425d0u,742);
}
B58757f:L58757f:{c.instructions+=5;NFSU2_TR(0x58757f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B587582:{NFSU2_TR(0x587582);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587584:{NFSU2_TR(0x587584);
u8 U[4];
w4(U+0,u32(0x7a13f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587589:{NFSU2_TR(0x587589);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58758a:{NFSU2_TR(0x58758a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58758full));
TAIL_STATIC(0x7414a0u,741);
}
B58758f:L58758f:{c.instructions+=3;NFSU2_TR(0x58758f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B587592:{NFSU2_TR(0x587592);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587593:{NFSU2_TR(0x587593);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x587598ull));
TAIL_STATIC(0x7420b0u,742);
}
B587598:L587598:{c.instructions+=8;NFSU2_TR(0x587598);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58759b:{NFSU2_TR(0x58759b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58759c:{NFSU2_TR(0x58759c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58759d:{NFSU2_TR(0x58759d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x140ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5875a3:{NFSU2_TR(0x5875a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5875a4:{NFSU2_TR(0x5875a4);
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
B5875a6:{NFSU2_TR(0x5875a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5875a7:{NFSU2_TR(0x5875a7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5875aa:L5875aa:{c.instructions+=4;NFSU2_TR(0x5875aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5875ab:{NFSU2_TR(0x5875ab);
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
B5875ae:{NFSU2_TR(0x5875ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5875af:{NFSU2_TR(0x5875af);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5875c0:L5875c0:{c.instructions+=8;NFSU2_TR(0x5875c0);
__builtin_memmove((R+8),(R+4),4);
}
B5875c2:{NFSU2_TR(0x5875c2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5875c3:{NFSU2_TR(0x5875c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5875c6:{NFSU2_TR(0x5875c6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5875c7:{NFSU2_TR(0x5875c7);
__builtin_memmove((R+4),(R+24),4);
}
B5875c9:{NFSU2_TR(0x5875c9);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+8)),r1(U+0));
}
B5875cc:{NFSU2_TR(0x5875cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x140ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5875d6:{NFSU2_TR(0x5875d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5875dbull));
TAIL_STATIC(0x583220u,583);
}
B5875db:L5875db:{c.instructions+=2;NFSU2_TR(0x5875db);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xa8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5875e1:{NFSU2_TR(0x5875e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5875e6ull));
TAIL_STATIC(0x583220u,583);
}
B5875e6:L5875e6:{c.instructions+=5;NFSU2_TR(0x5875e6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5875ea:{NFSU2_TR(0x5875ea);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5875ed:{NFSU2_TR(0x5875ed);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5875ef:{NFSU2_TR(0x5875ef);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5875f2:{NFSU2_TR(0x5875f2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5875fc;}}
}
B5875f4:L5875f4:{c.instructions+=4;NFSU2_TR(0x5875f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5875f5:{NFSU2_TR(0x5875f5);
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
B5875f8:{NFSU2_TR(0x5875f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5875f9:{NFSU2_TR(0x5875f9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5875fc:L5875fc:{c.instructions+=3;NFSU2_TR(0x5875fc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5875fd:{NFSU2_TR(0x5875fd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5875fe:{NFSU2_TR(0x5875fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x587603ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B587603:L587603:{c.instructions+=6;NFSU2_TR(0x587603);
u8 U[4];
w4(U+0,u32(0x794e68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587608:{NFSU2_TR(0x587608);
u8 U[4];
w4(U+0,u32(0x98ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58760d:{NFSU2_TR(0x58760d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58760e:{NFSU2_TR(0x58760e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x28ull))));
}
B587611:{NFSU2_TR(0x587611);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587612:{NFSU2_TR(0x587612);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x587617ull));
TAIL_STATIC(0x7425d0u,742);
}
B587617:L587617:{c.instructions+=5;NFSU2_TR(0x587617);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B58761a:{NFSU2_TR(0x58761a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58761b:{NFSU2_TR(0x58761b);
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
B58761d:{NFSU2_TR(0x58761d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58761e:{NFSU2_TR(0x58761e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B587630:L587630:{c.instructions+=12;NFSU2_TR(0x587630);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587631:{NFSU2_TR(0x587631);
__builtin_memmove((R+20),(R+16),4);
}
B587633:{NFSU2_TR(0x587633);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B587636:{NFSU2_TR(0x587636);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x624ull))));
}
B58763c:{NFSU2_TR(0x58763c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58763d:{NFSU2_TR(0x58763d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58763e:{NFSU2_TR(0x58763e);
__builtin_memmove((R+24),(R+4),4);
}
B587640:{NFSU2_TR(0x587640);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B587646:{NFSU2_TR(0x587646);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B587648:{NFSU2_TR(0x587648);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58764a:{NFSU2_TR(0x58764a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58764b:{NFSU2_TR(0x58764b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L587671;}}
}
B58764d:L58764d:{c.instructions+=2;NFSU2_TR(0x58764d);
u8 U[4];
w4(U+0,u32(0x204ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587652:{NFSU2_TR(0x587652);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x587657ull));
TAIL_STATIC(0x575620u,575);
}
B587657:L587657:{c.instructions+=4;NFSU2_TR(0x587657);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B58765a:{NFSU2_TR(0x58765a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58765c:{NFSU2_TR(0x58765c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B587662:{NFSU2_TR(0x587662);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58766f;}}
}
B587664:L587664:{c.instructions+=7;NFSU2_TR(0x587664);
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
B587666:{NFSU2_TR(0x587666);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B587667:{NFSU2_TR(0x587667);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B587668:{NFSU2_TR(0x587668);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B587669:{NFSU2_TR(0x587669);
__builtin_memmove((R+16),(R+20),4);
}
B58766b:{NFSU2_TR(0x58766b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58766c:{NFSU2_TR(0x58766c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58766f:L58766f:{c.instructions+=1;NFSU2_TR(0x58766f);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+0)),r1(U+0));
}
B587671:L587671:{c.instructions+=11;NFSU2_TR(0x587671);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B587674:{NFSU2_TR(0x587674);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587676:{NFSU2_TR(0x587676);
u8 U[4];
w4(U+0,u32(u32(u32(0x224ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B58767d:{NFSU2_TR(0x58767d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58767e:{NFSU2_TR(0x58767e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58767f:{NFSU2_TR(0x58767f);
w4(R+4,u32(0x89cf48ull));
}
B587684:{NFSU2_TR(0x587684);
u8 U[5];
w4(U+0,u32(u32(u32(0x22cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B58768b:{NFSU2_TR(0x58768b);
u8 U[8];
w4(U+0,u32(u32(u32(0x62cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B587692:{NFSU2_TR(0x587692);
u8 U[8];
w4(U+0,u32(u32(u32(0x630ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B587699:{NFSU2_TR(0x587699);
u8 U[5];
w4(U+0,u32(u32(u32(0x634ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5876a1:{NFSU2_TR(0x5876a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5876a6ull));
TAIL_STATIC(0x5f0320u,5f0);
}
B5876a6:L5876a6:{c.instructions+=6;NFSU2_TR(0x5876a6);
{u32 ea_=u32(r4(R+16)+u32(1568u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5876ad:{NFSU2_TR(0x5876ad);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5876af:{NFSU2_TR(0x5876af);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5876b3:{NFSU2_TR(0x5876b3);
{u32 ea_=u32(u32(7897444u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5876b9:{NFSU2_TR(0x5876b9);
w4(R+4,u32(0x80ull));
}
B5876be:{NFSU2_TR(0x5876be);
u8 U[4];
w4(U+0,u32(u32(u32(0x19ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B5876c2:L5876c2:{c.instructions+=1;NFSU2_TR(0x5876c2);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5876c4;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5876c2u);}goto L5876c2;}
}
B5876c4:L5876c4:{c.instructions+=4;NFSU2_TR(0x5876c4);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5876c8:{NFSU2_TR(0x5876c8);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B5876ca:{NFSU2_TR(0x5876ca);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B5876cb:{NFSU2_TR(0x5876cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5876d0ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5876d0:L5876d0:{c.instructions+=6;NFSU2_TR(0x5876d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5876d4:{NFSU2_TR(0x5876d4);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5876d8:{NFSU2_TR(0x5876d8);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5876dc:{NFSU2_TR(0x5876dc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5876de:{NFSU2_TR(0x5876de);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5876e1:{NFSU2_TR(0x5876e1);
if(r1(R+514)){{goto L5876e9;}}
}
B5876e3:L5876e3:{c.instructions+=1;NFSU2_TR(0x5876e3);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5876e9:L5876e9:{c.instructions+=4;NFSU2_TR(0x5876e9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5876ea:{NFSU2_TR(0x5876ea);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5876eb:{NFSU2_TR(0x5876eb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5876ec:{NFSU2_TR(0x5876ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5876f1ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5876f1:L5876f1:{c.instructions+=4;NFSU2_TR(0x5876f1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5876f2:{NFSU2_TR(0x5876f2);
u8 U[4];
w4(U+0,u32(u32(u32(0x230ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5876f9:{NFSU2_TR(0x5876f9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5876fa:{NFSU2_TR(0x5876fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5876ffull));
TAIL_STATIC(0x576130u,576);
}
B5876ff:L5876ff:{c.instructions+=6;NFSU2_TR(0x5876ff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587700:{NFSU2_TR(0x587700);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587702:{NFSU2_TR(0x587702);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B587706:{NFSU2_TR(0x587706);
u8 U[4];
w4(U+0,u32(0x7a1408ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58770b:{NFSU2_TR(0x58770b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58770c:{NFSU2_TR(0x58770c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x587711ull));
TAIL_STATIC(0x4400d0u,440);
}
B587711:L587711:{c.instructions+=5;NFSU2_TR(0x587711);
{u32 ea_=u32(r4(R+16)+u32(1604u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B587718:{NFSU2_TR(0x587718);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B58771b:{NFSU2_TR(0x58771b);
{u32 ea_=u32(u32(7897444u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B587721:{NFSU2_TR(0x587721);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B587725:{NFSU2_TR(0x587725);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58772aull));
TAIL_STATIC(0x75bed4u,75b);
}
B58772a:L58772a:{c.instructions+=6;NFSU2_TR(0x58772a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58772e:{NFSU2_TR(0x58772e);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B587732:{NFSU2_TR(0x587732);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B587736:{NFSU2_TR(0x587736);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B587738:{NFSU2_TR(0x587738);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B58773b:{NFSU2_TR(0x58773b);
if(r1(R+514)){{goto L587743;}}
}
B58773d:L58773d:{c.instructions+=1;NFSU2_TR(0x58773d);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B587743:L587743:{c.instructions+=5;NFSU2_TR(0x587743);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587745:{NFSU2_TR(0x587745);
u8 U[4];
w4(U+0,u32(u32(u32(0x21ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B587749:{NFSU2_TR(0x587749);
u8 U[4];
w4(U+0,u32(0x1ffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58774e:{NFSU2_TR(0x58774e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58774f:{NFSU2_TR(0x58774f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x587754ull));
TAIL_STATIC(0x75bed4u,75b);
}
B587754:L587754:{c.instructions+=4;NFSU2_TR(0x587754);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587755:{NFSU2_TR(0x587755);
u8 U[4];
w4(U+0,u32(u32(u32(0x230ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B58775c:{NFSU2_TR(0x58775c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58775d:{NFSU2_TR(0x58775d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x587762ull));
TAIL_STATIC(0x576130u,576);
}
B587762:L587762:{c.instructions+=7;NFSU2_TR(0x587762);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B587768:{NFSU2_TR(0x587768);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B58776c:{NFSU2_TR(0x58776c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58776d:{NFSU2_TR(0x58776d);
u8 U[4];
w4(U+0,u32(0x7a1314ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587772:{NFSU2_TR(0x587772);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587777:{NFSU2_TR(0x587777);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587778:{NFSU2_TR(0x587778);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58777dull));
TAIL_STATIC(0x741a50u,741);
}
B58777d:L58777d:{c.instructions+=8;NFSU2_TR(0x58777d);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x24ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x24ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B587780:{NFSU2_TR(0x587780);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B587781:{NFSU2_TR(0x587781);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B587782:{NFSU2_TR(0x587782);
w1(R+0,u8(0x1ull));
}
B587784:{NFSU2_TR(0x587784);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B587785:{NFSU2_TR(0x587785);
__builtin_memmove((R+16),(R+20),4);
}
B587787:{NFSU2_TR(0x587787);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B587788:{NFSU2_TR(0x587788);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B587790:L587790:{c.instructions+=8;NFSU2_TR(0x587790);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587791:{NFSU2_TR(0x587791);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587792:{NFSU2_TR(0x587792);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587793:{NFSU2_TR(0x587793);
__builtin_memmove((R+12),(R+4),4);
}
B587795:{NFSU2_TR(0x587795);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+24),(U+0),4);
}
B587797:{NFSU2_TR(0x587797);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587798:{NFSU2_TR(0x587798);
__builtin_memmove((R+28),(R+24),4);
}
B58779a:{NFSU2_TR(0x58779a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58779full));
TAIL_STATIC(0x502fd0u,502);
}
B58779f:L58779f:{c.instructions+=3;NFSU2_TR(0x58779f);
__builtin_memmove((R+20),(R+0),4);
}
B5877a1:{NFSU2_TR(0x5877a1);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B5877a3:{NFSU2_TR(0x5877a3);
if(r1(R+518)){{goto L5877c4;}}
}
B5877a5:L5877a5:{c.instructions+=6;NFSU2_TR(0x5877a5);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5877a7:{NFSU2_TR(0x5877a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5877a9:{NFSU2_TR(0x5877a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5877ac:{NFSU2_TR(0x5877ac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5877ae:{NFSU2_TR(0x5877ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5877b1:{NFSU2_TR(0x5877b1);
if(r1(R+518)){{goto L5877bc;}}
}
B5877b3:L5877b3:{c.instructions+=2;NFSU2_TR(0x5877b3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5877b4:{NFSU2_TR(0x5877b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5877b9ull));
TAIL_STATIC(0x575630u,575);
}
B5877b9:L5877b9:{c.instructions+=1;NFSU2_TR(0x5877b9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5877bc:L5877bc:{c.instructions+=4;NFSU2_TR(0x5877bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5877be:{NFSU2_TR(0x5877be);
__builtin_memmove((R+28),(R+24),4);
}
B5877c0:{NFSU2_TR(0x5877c0);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B5877c2:{NFSU2_TR(0x5877c2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5877a5u);}goto L5877a5;}}
}
B5877c4:L5877c4:{c.instructions+=5;NFSU2_TR(0x5877c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5877c5:{NFSU2_TR(0x5877c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5877c6:{NFSU2_TR(0x5877c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5877c7:{NFSU2_TR(0x5877c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5877c8:{NFSU2_TR(0x5877c8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5877d0:L5877d0:{c.instructions+=2;NFSU2_TR(0x5877d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5877d1:{NFSU2_TR(0x5877d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5877d6ull));
TAIL_STATIC(0x742db0u,742);
}
B5877d6:L5877d6:{c.instructions+=2;NFSU2_TR(0x5877d6);
w4(R+24,u32(0x8691d0ull));
}
B5877db:{NFSU2_TR(0x5877db);
{goto L5877e0;}
}
B5877e0:L5877e0:{c.instructions+=4;NFSU2_TR(0x5877e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5877e2:{NFSU2_TR(0x5877e2);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B5877e3:{NFSU2_TR(0x5877e3);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x3ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5877e6:{NFSU2_TR(0x5877e6);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L587813;}}
}
B5877e8:L5877e8:{c.instructions+=1;NFSU2_TR(0x5877e8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x587820ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5877ef:L5877ef:{c.instructions+=2;NFSU2_TR(0x5877ef);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5877f0:{NFSU2_TR(0x5877f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5877f5ull));
TAIL_STATIC(0x585900u,585);
}
B5877f5:L5877f5:{c.instructions+=1;NFSU2_TR(0x5877f5);
{goto L587810;}
}
B5877f7:L5877f7:{c.instructions+=2;NFSU2_TR(0x5877f7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5877f8:{NFSU2_TR(0x5877f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5877fdull));
TAIL_STATIC(0x585990u,585);
}
B5877fd:L5877fd:{c.instructions+=1;NFSU2_TR(0x5877fd);
{goto L587810;}
}
B5877ff:L5877ff:{c.instructions+=2;NFSU2_TR(0x5877ff);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587800:{NFSU2_TR(0x587800);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x587805ull));
TAIL_STATIC(0x585a00u,585);
}
B587805:L587805:{c.instructions+=1;NFSU2_TR(0x587805);
{goto L587810;}
}
B587807:L587807:{c.instructions+=3;NFSU2_TR(0x587807);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58780a:{NFSU2_TR(0x58780a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58780b:{NFSU2_TR(0x58780b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x587810ull));
TAIL_STATIC(0x585880u,585);
}
B587810:L587810:{c.instructions+=1;NFSU2_TR(0x587810);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B587813:L587813:{c.instructions+=3;NFSU2_TR(0x587813);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x14ull))));
}
B587816:{NFSU2_TR(0x587816);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x869234ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x869234ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x869234ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58781c:{NFSU2_TR(0x58781c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5877e0u);}goto L5877e0;}}
}
B58781e:L58781e:{c.instructions+=2;NFSU2_TR(0x58781e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58781f:{NFSU2_TR(0x58781f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B587830:L587830:{c.instructions+=4;NFSU2_TR(0x587830);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x410ull))));
}
B587836:{NFSU2_TR(0x587836);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587837:{NFSU2_TR(0x587837);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587838:{NFSU2_TR(0x587838);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58783dull));
TAIL_STATIC(0x583710u,583);
}
B58783d:L58783d:{c.instructions+=4;NFSU2_TR(0x58783d);
__builtin_memmove((R+24),gp(0x7fbe5c),4);
}
B587843:{NFSU2_TR(0x587843);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B587845:{NFSU2_TR(0x587845);
__builtin_memmove((R+12),(R+0),4);
}
B587847:{NFSU2_TR(0x587847);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L58792e;}}
}
B58784d:L58784d:{c.instructions+=2;NFSU2_TR(0x58784d);
u8 U[8];
__builtin_memmove((U+0),gp(0x8669f4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x5ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B587854:{NFSU2_TR(0x587854);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L58792e;}}
}
B58785a:L58785a:{c.instructions+=2;NFSU2_TR(0x58785a);
u8 U[8];
__builtin_memmove((U+0),gp(0x866a08),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B587861:{NFSU2_TR(0x587861);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L58792e;}}
}
B587867:L587867:{c.instructions+=2;NFSU2_TR(0x587867);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B587869:{NFSU2_TR(0x587869);
if(r1(R+518)){{goto L58792e;}}
}
B58786f:L58786f:{c.instructions+=3;NFSU2_TR(0x58786f);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89cf50ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B587876:{NFSU2_TR(0x587876);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B587878:{NFSU2_TR(0x587878);
if(r1(R+518)){{goto L58792e;}}
}
B58787e:L58787e:{c.instructions+=8;NFSU2_TR(0x58787e);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587880:{NFSU2_TR(0x587880);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587882:{NFSU2_TR(0x587882);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B587886:{NFSU2_TR(0x587886);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B58788b:{NFSU2_TR(0x58788b);
u8 U[8];
w4(U+0,u32(u32(u32(0x414ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B587896:{NFSU2_TR(0x587896);
u8 U[8];
w4(U+0,u32(u32(u32(0x418ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5878a1:{NFSU2_TR(0x5878a1);
u8 U[5];
w4(U+0,u32(u32(u32(0x41cull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5878a9:{NFSU2_TR(0x5878a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5878aeull));
TAIL_STATIC(0x581d00u,581);
}
B5878ae:L5878ae:{c.instructions+=8;NFSU2_TR(0x5878ae);
{u32 ea_=u32(u32(8802700u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5878b4:{NFSU2_TR(0x5878b4);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5878b6:{NFSU2_TR(0x5878b6);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5878ba:{NFSU2_TR(0x5878ba);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5878c0:{NFSU2_TR(0x5878c0);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5878c4:{NFSU2_TR(0x5878c4);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5878c8:{NFSU2_TR(0x5878c8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5878c9:{NFSU2_TR(0x5878c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5878ceull));
TAIL_STATIC(0x581d00u,581);
}
B5878ce:L5878ce:{c.instructions+=4;NFSU2_TR(0x5878ce);
u8 U[4];
w4(U+0,u32(0x869088ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5878d3:{NFSU2_TR(0x5878d3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5878d4:{NFSU2_TR(0x5878d4);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5878d8:{NFSU2_TR(0x5878d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5878ddull));
TAIL_STATIC(0x583f80u,583);
}
B5878dd:L5878dd:{c.instructions+=8;NFSU2_TR(0x5878dd);
{u32 ea_=u32(u32(8802732u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5878e3:{NFSU2_TR(0x5878e3);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5878e5:{NFSU2_TR(0x5878e5);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5878eb:{NFSU2_TR(0x5878eb);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5878ef:{NFSU2_TR(0x5878ef);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5878f3:{NFSU2_TR(0x5878f3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5878f4:{NFSU2_TR(0x5878f4);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5878f8:{NFSU2_TR(0x5878f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5878fdull));
TAIL_STATIC(0x581d00u,581);
}
B5878fd:L5878fd:{c.instructions+=5;NFSU2_TR(0x5878fd);
w4(R+8,u32(r1(R+12)));
}
B587900:{NFSU2_TR(0x587900);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587902:{NFSU2_TR(0x587902);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587903:{NFSU2_TR(0x587903);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B587907:{NFSU2_TR(0x587907);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58790cull));
TAIL_STATIC(0x581d00u,581);
}
B58790c:L58790c:{c.instructions+=6;NFSU2_TR(0x58790c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58790d:{NFSU2_TR(0x58790d);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B587911:{NFSU2_TR(0x587911);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587912:{NFSU2_TR(0x587912);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587913:{NFSU2_TR(0x587913);
w4(R+4,u32(0x89cf48ull));
}
B587918:{NFSU2_TR(0x587918);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58791dull));
TAIL_STATIC(0x5f9930u,5f9);
}
B58791d:L58791d:{c.instructions+=5;NFSU2_TR(0x58791d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58791f:{NFSU2_TR(0x58791f);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B587923:{NFSU2_TR(0x587923);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587924:{NFSU2_TR(0x587924);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587926:{NFSU2_TR(0x587926);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58792bull));
TAIL_STATIC(0x585d50u,585);
}
B58792b:L58792b:{c.instructions+=1;NFSU2_TR(0x58792b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B58792e:L58792e:{c.instructions+=4;NFSU2_TR(0x58792e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58792f:{NFSU2_TR(0x58792f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B587930:{NFSU2_TR(0x587930);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x410ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x410ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x410ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B587936:{NFSU2_TR(0x587936);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B587940:L587940:{c.instructions+=5;NFSU2_TR(0x587940);
__builtin_memmove((R+0),gp(0x8651ac),4);
}
B587945:{NFSU2_TR(0x587945);
s1(0x8669f8,u8(0x1ull));
}
B58794c:{NFSU2_TR(0x58794c);
__builtin_memmove(gp(0x869468),(R+0),4);
}
B587951:{NFSU2_TR(0x587951);
s4(0x8669f4,u32(0x2ull));
}
B58795b:{NFSU2_TR(0x58795b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B587960:L587960:{c.instructions+=9;NFSU2_TR(0x587960);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x410ull))));
}
B587966:{NFSU2_TR(0x587966);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587968:{NFSU2_TR(0x587968);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58796a:{NFSU2_TR(0x58796a);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58796e:{NFSU2_TR(0x58796e);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B587973:{NFSU2_TR(0x587973);
u8 U[8];
w4(U+0,u32(u32(u32(0x40cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B58797e:{NFSU2_TR(0x58797e);
u8 U[8];
w4(U+0,u32(u32(u32(0x410ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B587989:{NFSU2_TR(0x587989);
u8 U[5];
w4(U+0,u32(u32(u32(0x414ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B587991:{NFSU2_TR(0x587991);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x587996ull));
TAIL_STATIC(0x581d00u,581);
}
B587996:L587996:{c.instructions+=7;NFSU2_TR(0x587996);
u8 U[8];
w4(U+0,u32(u32(u32(0x414ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58799d:{NFSU2_TR(0x58799d);
__builtin_memmove((R+4),(R+0),4);
}
B58799f:{NFSU2_TR(0x58799f);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5879a1:{NFSU2_TR(0x5879a1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5879a2:{NFSU2_TR(0x5879a2);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5879a6:{NFSU2_TR(0x5879a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5879aa:{NFSU2_TR(0x5879aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5879afull));
TAIL_STATIC(0x581d00u,581);
}
B5879af:L5879af:{c.instructions+=5;NFSU2_TR(0x5879af);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5879b1:{NFSU2_TR(0x5879b1);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5879b5:{NFSU2_TR(0x5879b5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5879b6:{NFSU2_TR(0x5879b6);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5879b8:{NFSU2_TR(0x5879b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5879bdull));
TAIL_STATIC(0x585d50u,585);
}
B5879bd:L5879bd:{c.instructions+=2;NFSU2_TR(0x5879bd);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x41cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x41cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x41cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5879c3:{NFSU2_TR(0x5879c3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5879d0:L5879d0:{c.instructions+=11;NFSU2_TR(0x5879d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x40cull))));
}
B5879d6:{NFSU2_TR(0x5879d6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5879d8:{NFSU2_TR(0x5879d8);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5879da:{NFSU2_TR(0x5879da);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5879dc:{NFSU2_TR(0x5879dc);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5879e0:{NFSU2_TR(0x5879e0);
s4(0x8669f4,u32(0x5ull));
}
B5879ea:{NFSU2_TR(0x5879ea);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5879ee:{NFSU2_TR(0x5879ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x408ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5879f5:{NFSU2_TR(0x5879f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x40cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5879fc:{NFSU2_TR(0x5879fc);
u8 U[5];
w4(U+0,u32(u32(u32(0x410ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B587a04:{NFSU2_TR(0x587a04);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x587a09ull));
TAIL_STATIC(0x581d00u,581);
}
B587a09:L587a09:{c.instructions+=4;NFSU2_TR(0x587a09);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587a0b:{NFSU2_TR(0x587a0b);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587a0d:{NFSU2_TR(0x587a0d);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B587a11:{NFSU2_TR(0x587a11);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x587a16ull));
TAIL_STATIC(0x581d00u,581);
}
B587a16:L587a16:{c.instructions+=5;NFSU2_TR(0x587a16);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587a18:{NFSU2_TR(0x587a18);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B587a1c:{NFSU2_TR(0x587a1c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587a1d:{NFSU2_TR(0x587a1d);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587a1f:{NFSU2_TR(0x587a1f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x587a24ull));
TAIL_STATIC(0x585d50u,585);
}
B587a24:L587a24:{c.instructions+=2;NFSU2_TR(0x587a24);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x418ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x418ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x418ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B587a2a:{NFSU2_TR(0x587a2a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B587a30:L587a30:{c.instructions+=11;NFSU2_TR(0x587a30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x40cull))));
}
B587a36:{NFSU2_TR(0x587a36);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B587a38:{NFSU2_TR(0x587a38);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587a3a:{NFSU2_TR(0x587a3a);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587a3c:{NFSU2_TR(0x587a3c);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B587a40:{NFSU2_TR(0x587a40);
s4(0x8669f4,u32(0x6ull));
}
B587a4a:{NFSU2_TR(0x587a4a);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B587a4e:{NFSU2_TR(0x587a4e);
u8 U[8];
w4(U+0,u32(u32(u32(0x408ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B587a55:{NFSU2_TR(0x587a55);
u8 U[8];
w4(U+0,u32(u32(u32(0x40cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B587a5c:{NFSU2_TR(0x587a5c);
u8 U[5];
w4(U+0,u32(u32(u32(0x410ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B587a64:{NFSU2_TR(0x587a64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x587a69ull));
TAIL_STATIC(0x581d00u,581);
}
B587a69:L587a69:{c.instructions+=4;NFSU2_TR(0x587a69);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587a6b:{NFSU2_TR(0x587a6b);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587a6d:{NFSU2_TR(0x587a6d);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B587a71:{NFSU2_TR(0x587a71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x587a76ull));
TAIL_STATIC(0x581d00u,581);
}
B587a76:L587a76:{c.instructions+=5;NFSU2_TR(0x587a76);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587a78:{NFSU2_TR(0x587a78);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B587a7c:{NFSU2_TR(0x587a7c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587a7d:{NFSU2_TR(0x587a7d);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587a7f:{NFSU2_TR(0x587a7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x587a84ull));
TAIL_STATIC(0x585d50u,585);
}
B587a84:L587a84:{c.instructions+=2;NFSU2_TR(0x587a84);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x418ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x418ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x418ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B587a8a:{NFSU2_TR(0x587a8a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B587a90:L587a90:{c.instructions+=11;NFSU2_TR(0x587a90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x40cull))));
}
B587a96:{NFSU2_TR(0x587a96);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B587a98:{NFSU2_TR(0x587a98);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587a9a:{NFSU2_TR(0x587a9a);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587a9c:{NFSU2_TR(0x587a9c);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B587aa0:{NFSU2_TR(0x587aa0);
s4(0x8669f4,u32(0x4ull));
}
B587aaa:{NFSU2_TR(0x587aaa);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B587aae:{NFSU2_TR(0x587aae);
u8 U[8];
w4(U+0,u32(u32(u32(0x408ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B587ab5:{NFSU2_TR(0x587ab5);
u8 U[8];
w4(U+0,u32(u32(u32(0x40cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B587abc:{NFSU2_TR(0x587abc);
u8 U[5];
w4(U+0,u32(u32(u32(0x410ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B587ac4:{NFSU2_TR(0x587ac4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x587ac9ull));
TAIL_STATIC(0x581d00u,581);
}
B587ac9:L587ac9:{c.instructions+=4;NFSU2_TR(0x587ac9);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587acb:{NFSU2_TR(0x587acb);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587acd:{NFSU2_TR(0x587acd);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B587ad1:{NFSU2_TR(0x587ad1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x587ad6ull));
TAIL_STATIC(0x581d00u,581);
}
B587ad6:L587ad6:{c.instructions+=5;NFSU2_TR(0x587ad6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587ad8:{NFSU2_TR(0x587ad8);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B587adc:{NFSU2_TR(0x587adc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587add:{NFSU2_TR(0x587add);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587adf:{NFSU2_TR(0x587adf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x587ae4ull));
TAIL_STATIC(0x585d50u,585);
}
B587ae4:L587ae4:{c.instructions+=2;NFSU2_TR(0x587ae4);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x418ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x418ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x418ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B587aea:{NFSU2_TR(0x587aea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B587af0:L587af0:{c.instructions+=12;NFSU2_TR(0x587af0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x414ull))));
}
B587af6:{NFSU2_TR(0x587af6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587af7:{NFSU2_TR(0x587af7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587af8:{NFSU2_TR(0x587af8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587af9:{NFSU2_TR(0x587af9);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587afb:{NFSU2_TR(0x587afb);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587afd:{NFSU2_TR(0x587afd);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B587b01:{NFSU2_TR(0x587b01);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B587b06:{NFSU2_TR(0x587b06);
u8 U[8];
w4(U+0,u32(u32(u32(0x41cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B587b11:{NFSU2_TR(0x587b11);
u8 U[8];
w4(U+0,u32(u32(u32(0x420ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B587b1c:{NFSU2_TR(0x587b1c);
u8 U[5];
w4(U+0,u32(u32(u32(0x424ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B587b24:{NFSU2_TR(0x587b24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x587b29ull));
TAIL_STATIC(0x581d00u,581);
}
B587b29:L587b29:{c.instructions+=5;NFSU2_TR(0x587b29);
u8 U[8];
w4(U+0,u32(u32(u32(0x424ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B587b30:{NFSU2_TR(0x587b30);
{u32 ea_=u32(r4(R+20)+u32(1024u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B587b36:{NFSU2_TR(0x587b36);
{u32 ea_=u32(u32(7897444u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B587b3c:{NFSU2_TR(0x587b3c);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B587b40:{NFSU2_TR(0x587b40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x587b45ull));
TAIL_STATIC(0x75bed4u,75b);
}
B587b45:L587b45:{c.instructions+=6;NFSU2_TR(0x587b45);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B587b49:{NFSU2_TR(0x587b49);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B587b4d:{NFSU2_TR(0x587b4d);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B587b51:{NFSU2_TR(0x587b51);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B587b53:{NFSU2_TR(0x587b53);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B587b56:{NFSU2_TR(0x587b56);
if(r1(R+514)){{goto L587b5e;}}
}
B587b58:L587b58:{c.instructions+=1;NFSU2_TR(0x587b58);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B587b5e:L587b5e:{c.instructions+=2;NFSU2_TR(0x587b5e);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B587b60:{NFSU2_TR(0x587b60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x587b65ull));
TAIL_STATIC(0x75bed4u,75b);
}
B587b65:L587b65:{c.instructions+=3;NFSU2_TR(0x587b65);
__builtin_memmove((R+28),(R+0),4);
}
B587b67:{NFSU2_TR(0x587b67);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B587b69:{NFSU2_TR(0x587b69);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L587b85;}}
}
B587b6b:L587b6b:{c.instructions+=1;NFSU2_TR(0x587b6b);
{goto L587b70;}
}
B587b70:L587b70:{c.instructions+=5;NFSU2_TR(0x587b70);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(r1(U+8)));
}
B587b74:{NFSU2_TR(0x587b74);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587b76:{NFSU2_TR(0x587b76);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587b77:{NFSU2_TR(0x587b77);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B587b7b:{NFSU2_TR(0x587b7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x587b80ull));
TAIL_STATIC(0x581d00u,581);
}
B587b80:L587b80:{c.instructions+=3;NFSU2_TR(0x587b80);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B587b81:{NFSU2_TR(0x587b81);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B587b83:{NFSU2_TR(0x587b83);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x587b70u);}goto L587b70;}}
}
B587b85:L587b85:{c.instructions+=5;NFSU2_TR(0x587b85);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587b87:{NFSU2_TR(0x587b87);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B587b8b:{NFSU2_TR(0x587b8b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587b8c:{NFSU2_TR(0x587b8c);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587b8e:{NFSU2_TR(0x587b8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x587b93ull));
TAIL_STATIC(0x585d50u,585);
}
B587b93:L587b93:{c.instructions+=6;NFSU2_TR(0x587b93);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B587b96:{NFSU2_TR(0x587b96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B587b97:{NFSU2_TR(0x587b97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B587b98:{NFSU2_TR(0x587b98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B587b99:{NFSU2_TR(0x587b99);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x414ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x414ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x414ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B587b9f:{NFSU2_TR(0x587b9f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B587ba0:L587ba0:{c.instructions+=12;NFSU2_TR(0x587ba0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x414ull))));
}
B587ba6:{NFSU2_TR(0x587ba6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587ba7:{NFSU2_TR(0x587ba7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587ba8:{NFSU2_TR(0x587ba8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587ba9:{NFSU2_TR(0x587ba9);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587bab:{NFSU2_TR(0x587bab);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587bad:{NFSU2_TR(0x587bad);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B587bb1:{NFSU2_TR(0x587bb1);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B587bb6:{NFSU2_TR(0x587bb6);
u8 U[8];
w4(U+0,u32(u32(u32(0x41cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B587bc1:{NFSU2_TR(0x587bc1);
u8 U[8];
w4(U+0,u32(u32(u32(0x420ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B587bcc:{NFSU2_TR(0x587bcc);
u8 U[5];
w4(U+0,u32(u32(u32(0x424ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B587bd4:{NFSU2_TR(0x587bd4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x587bd9ull));
TAIL_STATIC(0x581d00u,581);
}
B587bd9:L587bd9:{c.instructions+=5;NFSU2_TR(0x587bd9);
u8 U[8];
w4(U+0,u32(u32(u32(0x424ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B587be0:{NFSU2_TR(0x587be0);
{u32 ea_=u32(r4(R+20)+u32(1024u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B587be6:{NFSU2_TR(0x587be6);
{u32 ea_=u32(u32(7897444u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B587bec:{NFSU2_TR(0x587bec);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B587bf0:{NFSU2_TR(0x587bf0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x587bf5ull));
TAIL_STATIC(0x75bed4u,75b);
}
B587bf5:L587bf5:{c.instructions+=6;NFSU2_TR(0x587bf5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B587bf9:{NFSU2_TR(0x587bf9);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B587bfd:{NFSU2_TR(0x587bfd);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B587c01:{NFSU2_TR(0x587c01);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B587c03:{NFSU2_TR(0x587c03);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B587c06:{NFSU2_TR(0x587c06);
if(r1(R+514)){{goto L587c0e;}}
}
B587c08:L587c08:{c.instructions+=1;NFSU2_TR(0x587c08);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B587c0e:L587c0e:{c.instructions+=2;NFSU2_TR(0x587c0e);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B587c10:{NFSU2_TR(0x587c10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x587c15ull));
TAIL_STATIC(0x75bed4u,75b);
}
B587c15:L587c15:{c.instructions+=3;NFSU2_TR(0x587c15);
__builtin_memmove((R+28),(R+0),4);
}
B587c17:{NFSU2_TR(0x587c17);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B587c19:{NFSU2_TR(0x587c19);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L587c35;}}
}
B587c1b:L587c1b:{c.instructions+=1;NFSU2_TR(0x587c1b);
{goto L587c20;}
}
B587c20:L587c20:{c.instructions+=5;NFSU2_TR(0x587c20);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(r1(U+8)));
}
B587c24:{NFSU2_TR(0x587c24);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587c26:{NFSU2_TR(0x587c26);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587c27:{NFSU2_TR(0x587c27);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B587c2b:{NFSU2_TR(0x587c2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x587c30ull));
TAIL_STATIC(0x581d00u,581);
}
B587c30:L587c30:{c.instructions+=3;NFSU2_TR(0x587c30);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B587c31:{NFSU2_TR(0x587c31);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B587c33:{NFSU2_TR(0x587c33);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x587c20u);}goto L587c20;}}
}
B587c35:L587c35:{c.instructions+=5;NFSU2_TR(0x587c35);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587c37:{NFSU2_TR(0x587c37);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B587c3b:{NFSU2_TR(0x587c3b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587c3c:{NFSU2_TR(0x587c3c);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587c3e:{NFSU2_TR(0x587c3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x587c43ull));
TAIL_STATIC(0x585d50u,585);
}
B587c43:L587c43:{c.instructions+=6;NFSU2_TR(0x587c43);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B587c46:{NFSU2_TR(0x587c46);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B587c47:{NFSU2_TR(0x587c47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B587c48:{NFSU2_TR(0x587c48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B587c49:{NFSU2_TR(0x587c49);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x414ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x414ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x414ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B587c4f:{NFSU2_TR(0x587c4f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B587c50:L587c50:{c.instructions+=11;NFSU2_TR(0x587c50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x410ull))));
}
B587c56:{NFSU2_TR(0x587c56);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587c57:{NFSU2_TR(0x587c57);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587c58:{NFSU2_TR(0x587c58);
u8 U[8];
w4(U+0,u32(u32(u32(0x41cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B587c5f:{NFSU2_TR(0x587c5f);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587c61:{NFSU2_TR(0x587c61);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B587c65:{NFSU2_TR(0x587c65);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B587c67:{NFSU2_TR(0x587c67);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587c68:{NFSU2_TR(0x587c68);
__builtin_memmove((R+4),(R+24),4);
}
B587c6a:{NFSU2_TR(0x587c6a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B587c6e:{NFSU2_TR(0x587c6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x587c73ull));
TAIL_STATIC(0x581d90u,581);
}
B587c73:L587c73:{c.instructions+=4;NFSU2_TR(0x587c73);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B587c77:{NFSU2_TR(0x587c77);
__builtin_memmove(gp(0x866a08),(R+0),4);
}
B587c7c:{NFSU2_TR(0x587c7c);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B587c7f:{NFSU2_TR(0x587c7f);
if(r1(R+518)){{goto L587d07;}}
}
B587c85:L587c85:{c.instructions+=2;NFSU2_TR(0x587c85);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B587c88:{NFSU2_TR(0x587c88);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L587d45;}}
}
B587c8e:L587c8e:{c.instructions+=6;NFSU2_TR(0x587c8e);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587c90:{NFSU2_TR(0x587c90);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B587c94:{NFSU2_TR(0x587c94);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587c95:{NFSU2_TR(0x587c95);
__builtin_memmove((R+4),(R+24),4);
}
B587c97:{NFSU2_TR(0x587c97);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B587c9b:{NFSU2_TR(0x587c9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x587ca0ull));
TAIL_STATIC(0x581d90u,581);
}
B587ca0:L587ca0:{c.instructions+=4;NFSU2_TR(0x587ca0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B587ca4:{NFSU2_TR(0x587ca4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587ca5:{NFSU2_TR(0x587ca5);
w4(R+4,u32(0x89cf48ull));
}
B587caa:{NFSU2_TR(0x587caa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x587cafull));
TAIL_STATIC(0x5f0160u,5f0);
}
B587caf:L587caf:{c.instructions+=9;NFSU2_TR(0x587caf);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587cb1:{NFSU2_TR(0x587cb1);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587cb3:{NFSU2_TR(0x587cb3);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B587cb7:{NFSU2_TR(0x587cb7);
s4(0x8669f4,u32(0x7ull));
}
B587cc1:{NFSU2_TR(0x587cc1);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B587cc5:{NFSU2_TR(0x587cc5);
u8 U[8];
w4(U+0,u32(u32(u32(0x414ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B587ccc:{NFSU2_TR(0x587ccc);
u8 U[8];
w4(U+0,u32(u32(u32(0x418ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B587cd3:{NFSU2_TR(0x587cd3);
u8 U[5];
w4(U+0,u32(u32(u32(0x41cull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B587cdb:{NFSU2_TR(0x587cdb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x587ce0ull));
TAIL_STATIC(0x581d00u,581);
}
B587ce0:L587ce0:{c.instructions+=4;NFSU2_TR(0x587ce0);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587ce2:{NFSU2_TR(0x587ce2);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587ce4:{NFSU2_TR(0x587ce4);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B587ce8:{NFSU2_TR(0x587ce8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x587cedull));
TAIL_STATIC(0x581d00u,581);
}
B587ced:L587ced:{c.instructions+=5;NFSU2_TR(0x587ced);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587cef:{NFSU2_TR(0x587cef);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B587cf3:{NFSU2_TR(0x587cf3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587cf4:{NFSU2_TR(0x587cf4);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587cf6:{NFSU2_TR(0x587cf6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x587cfbull));
TAIL_STATIC(0x585d50u,585);
}
B587cfb:L587cfb:{c.instructions+=5;NFSU2_TR(0x587cfb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B587cfe:{NFSU2_TR(0x587cfe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B587cff:{NFSU2_TR(0x587cff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B587d00:{NFSU2_TR(0x587d00);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x410ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x410ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x410ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B587d06:{NFSU2_TR(0x587d06);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B587d07:L587d07:{c.instructions+=2;NFSU2_TR(0x587d07);
w4(R+4,u32(0x89cf48ull));
}
B587d0c:{NFSU2_TR(0x587d0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x587d11ull));
TAIL_STATIC(0x5fe4c0u,5fe);
}
B587d11:L587d11:{c.instructions+=2;NFSU2_TR(0x587d11);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B587d13:{NFSU2_TR(0x587d13);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L587d3b;}}
}
B587d15:L587d15:{c.instructions+=2;NFSU2_TR(0x587d15);
u8 U[8];
__builtin_memmove((U+0),gp(0x8669f4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B587d1c:{NFSU2_TR(0x587d1c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L587d3b;}}
}
B587d1e:L587d1e:{c.instructions+=2;NFSU2_TR(0x587d1e);
w4(R+4,u32(0x89cf48ull));
}
B587d23:{NFSU2_TR(0x587d23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x587d28ull));
TAIL_STATIC(0x5f9250u,5f9);
}
B587d28:L587d28:{c.instructions+=2;NFSU2_TR(0x587d28);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587d2a:{NFSU2_TR(0x587d2a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x587d2full));
TAIL_STATIC(0x585e10u,585);
}
B587d2f:L587d2f:{c.instructions+=5;NFSU2_TR(0x587d2f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B587d32:{NFSU2_TR(0x587d32);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B587d33:{NFSU2_TR(0x587d33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B587d34:{NFSU2_TR(0x587d34);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x410ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x410ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x410ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B587d3a:{NFSU2_TR(0x587d3a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B587d3b:L587d3b:{c.instructions+=2;NFSU2_TR(0x587d3b);
w4(R+4,u32(0x89cf48ull));
}
B587d40:{NFSU2_TR(0x587d40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x587d45ull));
TAIL_STATIC(0x5fe450u,5fe);
}
B587d45:L587d45:{c.instructions+=4;NFSU2_TR(0x587d45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B587d46:{NFSU2_TR(0x587d46);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B587d47:{NFSU2_TR(0x587d47);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x410ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x410ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x410ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B587d4d:{NFSU2_TR(0x587d4d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B587d50:L587d50:{c.instructions+=13;NFSU2_TR(0x587d50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x40cull))));
}
B587d56:{NFSU2_TR(0x587d56);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B587d58:{NFSU2_TR(0x587d58);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587d59:{NFSU2_TR(0x587d59);
u8 U[8];
w4(U+0,u32(u32(u32(0x414ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B587d60:{NFSU2_TR(0x587d60);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B587d64:{NFSU2_TR(0x587d64);
u8 U[8];
w4(U+0,u32(u32(u32(0x404ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B587d6b:{NFSU2_TR(0x587d6b);
u8 U[8];
w4(U+0,u32(u32(u32(0x408ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B587d72:{NFSU2_TR(0x587d72);
w4(R+0,u32(r1(R+12)));
}
B587d75:{NFSU2_TR(0x587d75);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587d77:{NFSU2_TR(0x587d77);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587d78:{NFSU2_TR(0x587d78);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B587d7c:{NFSU2_TR(0x587d7c);
u8 U[5];
w4(U+0,u32(u32(u32(0x414ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B587d84:{NFSU2_TR(0x587d84);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x587d89ull));
TAIL_STATIC(0x581d00u,581);
}
B587d89:L587d89:{c.instructions+=5;NFSU2_TR(0x587d89);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587d8b:{NFSU2_TR(0x587d8b);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B587d8f:{NFSU2_TR(0x587d8f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587d90:{NFSU2_TR(0x587d90);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587d91:{NFSU2_TR(0x587d91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x587d96ull));
TAIL_STATIC(0x585d50u,585);
}
B587d96:L587d96:{c.instructions+=4;NFSU2_TR(0x587d96);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B587d99:{NFSU2_TR(0x587d99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B587d9a:{NFSU2_TR(0x587d9a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x40cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x40cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B587da0:{NFSU2_TR(0x587da0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B587db0:L587db0:{c.instructions+=12;NFSU2_TR(0x587db0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587db1:{NFSU2_TR(0x587db1);
__builtin_memmove((R+20),(R+16),4);
}
B587db3:{NFSU2_TR(0x587db3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B587db6:{NFSU2_TR(0x587db6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x7cull))));
}
B587db9:{NFSU2_TR(0x587db9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587dba:{NFSU2_TR(0x587dba);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587dbb:{NFSU2_TR(0x587dbb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587dbc:{NFSU2_TR(0x587dbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B587dbf:{NFSU2_TR(0x587dbf);
{u32 ea_=u32(r4(R+28)+u32(1024u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B587dc5:{NFSU2_TR(0x587dc5);
{u32 ea_=u32(u32(7897444u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B587dcb:{NFSU2_TR(0x587dcb);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B587dcf:{NFSU2_TR(0x587dcf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x587dd4ull));
TAIL_STATIC(0x75bed4u,75b);
}
B587dd4:L587dd4:{c.instructions+=6;NFSU2_TR(0x587dd4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B587dd8:{NFSU2_TR(0x587dd8);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B587ddc:{NFSU2_TR(0x587ddc);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B587de0:{NFSU2_TR(0x587de0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B587de2:{NFSU2_TR(0x587de2);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B587de5:{NFSU2_TR(0x587de5);
if(r1(R+514)){{goto L587ded;}}
}
B587de7:L587de7:{c.instructions+=1;NFSU2_TR(0x587de7);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B587ded:L587ded:{c.instructions+=1;NFSU2_TR(0x587ded);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x587df2ull));
TAIL_STATIC(0x75bed4u,75b);
}
B587df2:L587df2:{c.instructions+=15;NFSU2_TR(0x587df2);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B587df3:{NFSU2_TR(0x587df3);
w4(R+4,u32(0x64ull));
}
B587df8:{NFSU2_TR(0x587df8);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x587df8);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x587df8);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B587dfa:{NFSU2_TR(0x587dfa);
u8 U[5];
w4(U+0,u32(u32(u32(0xeull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B587dff:{NFSU2_TR(0x587dff);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x1ull))));
}
B587e01:{NFSU2_TR(0x587e01);
__builtin_memmove((R+4),(R+0),1);
}
B587e03:{NFSU2_TR(0x587e03);
w4(R+0,u32(r1(R+4)));
}
B587e06:{NFSU2_TR(0x587e06);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B587e09:{NFSU2_TR(0x587e09);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B587e0b:{NFSU2_TR(0x587e0b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x64ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x64ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B587e0e:{NFSU2_TR(0x587e0e);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
__builtin_memmove((R+0),(U+2),1);
}
B587e11:{NFSU2_TR(0x587e11);
w1(R+4,u8(u32(r1(R+4))+u32(r1(R+0))));
}
B587e13:{NFSU2_TR(0x587e13);
u8 U[5];
__builtin_memmove((U+3),(R+4),1);
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
B587e16:{NFSU2_TR(0x587e16);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B587e1a:{NFSU2_TR(0x587e1a);
if(r1(R+512)){TAIL_STATIC(0x588007u,588);}
}
B587e20:L587e20:{c.instructions+=4;NFSU2_TR(0x587e20);
w4(R+4,u32(r1(R+4)));
}
B587e23:{NFSU2_TR(0x587e23);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B587e27:{NFSU2_TR(0x587e27);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B587e2f:{NFSU2_TR(0x587e2f);
{goto L587e34;}
}
B587e31:L587e31:{c.instructions+=1;NFSU2_TR(0x587e31);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B587e34:L587e34:{c.instructions+=2;NFSU2_TR(0x587e34);
u8 U[4];
w4(U+0,u32(0x418ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587e39:{NFSU2_TR(0x587e39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x587e3eull));
TAIL_STATIC(0x575620u,575);
}
B587e3e:L587e3e:{c.instructions+=4;NFSU2_TR(0x587e3e);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B587e40:{NFSU2_TR(0x587e40);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B587e43:{NFSU2_TR(0x587e43);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B587e45:{NFSU2_TR(0x587e45);
if(r1(R+518)){{goto L587e60;}}
}
B587e47:L587e47:{c.instructions+=5;NFSU2_TR(0x587e47);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B587e4d:{NFSU2_TR(0x587e4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x410ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B587e53:{NFSU2_TR(0x587e53);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B587e57:{NFSU2_TR(0x587e57);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x414ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B587e5e:{NFSU2_TR(0x587e5e);
__builtin_memmove((R+24),(R+0),4);
}
B587e60:L587e60:{c.instructions+=6;NFSU2_TR(0x587e60);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B587e64:{NFSU2_TR(0x587e64);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587e66:{NFSU2_TR(0x587e66);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+12),(U+0),4);
}
B587e69:{NFSU2_TR(0x587e69);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587e6a:{NFSU2_TR(0x587e6a);
__builtin_memmove((R+4),(R+12),4);
}
B587e6c:{NFSU2_TR(0x587e6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x587e71ull));
TAIL_STATIC(0x581d00u,581);
}
B587e71:L587e71:{c.instructions+=7;NFSU2_TR(0x587e71);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B587e75:{NFSU2_TR(0x587e75);
u8 U[5];
w4(U+0,u32(u32(u32(0xeull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B587e79:{NFSU2_TR(0x587e79);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587e7b:{NFSU2_TR(0x587e7b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587e7c:{NFSU2_TR(0x587e7c);
__builtin_memmove((R+4),(R+12),4);
}
B587e7e:{NFSU2_TR(0x587e7e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B587e81:{NFSU2_TR(0x587e81);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x587e86ull));
TAIL_STATIC(0x581d00u,581);
}
B587e86:L587e86:{c.instructions+=7;NFSU2_TR(0x587e86);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B587e8a:{NFSU2_TR(0x587e8a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B587e8e:{NFSU2_TR(0x587e8e);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587e90:{NFSU2_TR(0x587e90);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B587e93:{NFSU2_TR(0x587e93);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587e94:{NFSU2_TR(0x587e94);
__builtin_memmove((R+4),(R+12),4);
}
B587e96:{NFSU2_TR(0x587e96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x587e9bull));
TAIL_STATIC(0x581d00u,581);
}
B587e9b:L587e9b:{c.instructions+=3;NFSU2_TR(0x587e9b);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B587e9f:{NFSU2_TR(0x587e9f);
u8 U[6];
w4(U+0,u32(u32(u32(0xeull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(U+5))<(r1(R+0))));
}
B587ea3:{NFSU2_TR(0x587ea3);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L587eac;}}
}
B587ea5:L587ea5:{c.instructions+=2;NFSU2_TR(0x587ea5);
w4(R+0,u32(0x2f8ull));
}
B587eaa:{NFSU2_TR(0x587eaa);
{goto L587eb8;}
}
B587eac:L587eac:{c.instructions+=2;NFSU2_TR(0x587eac);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x400ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B587eb2:{NFSU2_TR(0x587eb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x404ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B587eb8:L587eb8:{c.instructions+=6;NFSU2_TR(0x587eb8);
w4(R+4,u32(s32(s16(r2(R+0)))));
}
B587ebb:{NFSU2_TR(0x587ebb);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587ebd:{NFSU2_TR(0x587ebd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587ebe:{NFSU2_TR(0x587ebe);
__builtin_memmove((R+4),(R+12),4);
}
B587ec0:{NFSU2_TR(0x587ec0);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B587ec4:{NFSU2_TR(0x587ec4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x587ec9ull));
TAIL_STATIC(0x581d00u,581);
}
B587ec9:L587ec9:{c.instructions+=3;NFSU2_TR(0x587ec9);
u8 U[5];
w4(U+0,u32(u32(u32(0xeull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B587ecd:{NFSU2_TR(0x587ecd);
u8 U[6];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(R+8))<(r1(U+5))));
}
B587ed1:{NFSU2_TR(0x587ed1);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L587ede;}}
}
B587ed3:L587ed3:{c.instructions+=3;NFSU2_TR(0x587ed3);
w4(R+8,u32(0x5full));
}
B587ed8:{NFSU2_TR(0x587ed8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B587edc:{NFSU2_TR(0x587edc);
{goto L587f27;}
}
B587ede:L587ede:{c.instructions+=8;NFSU2_TR(0x587ede);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x404ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B587ee4:{NFSU2_TR(0x587ee4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x400ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B587eea:{NFSU2_TR(0x587eea);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B587eec:{NFSU2_TR(0x587eec);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B587ef0:{NFSU2_TR(0x587ef0);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B587ef4:{NFSU2_TR(0x587ef4);
{u32 ea_=u32(u32(7897444u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B587efa:{NFSU2_TR(0x587efa);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B587efe:{NFSU2_TR(0x587efe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x587f03ull));
TAIL_STATIC(0x75bed4u,75b);
}
B587f03:L587f03:{c.instructions+=6;NFSU2_TR(0x587f03);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B587f07:{NFSU2_TR(0x587f07);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B587f0b:{NFSU2_TR(0x587f0b);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B587f0f:{NFSU2_TR(0x587f0f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B587f11:{NFSU2_TR(0x587f11);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B587f14:{NFSU2_TR(0x587f14);
if(r1(R+514)){{goto L587f1c;}}
}
B587f16:L587f16:{c.instructions+=1;NFSU2_TR(0x587f16);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B587f1c:L587f1c:{c.instructions+=1;NFSU2_TR(0x587f1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x587f21ull));
TAIL_STATIC(0x75bed4u,75b);
}
B587f21:L587f21:{c.instructions+=2;NFSU2_TR(0x587f21);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B587f25:{NFSU2_TR(0x587f25);
__builtin_memmove((R+8),(R+0),4);
}
B587f27:L587f27:{c.instructions+=3;NFSU2_TR(0x587f27);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B587f2b:{NFSU2_TR(0x587f2b);
u8 U[7];
w4(U+0,u32(u32(u32(0xeull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+4))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B587f2f:{NFSU2_TR(0x587f2f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L587f3a;}}
}
B587f31:L587f31:{c.instructions+=2;NFSU2_TR(0x587f31);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B587f33:{NFSU2_TR(0x587f33);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L587f3a;}}
}
B587f35:L587f35:{c.instructions+=2;NFSU2_TR(0x587f35);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B587f36:{NFSU2_TR(0x587f36);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B587f3a:L587f3a:{c.instructions+=4;NFSU2_TR(0x587f3a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B587f3c:{NFSU2_TR(0x587f3c);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B587f41:{NFSU2_TR(0x587f41);
w4(R+4,u32(0x18ull));
}
B587f46:{NFSU2_TR(0x587f46);
u8 U[4];
w4(U+0,u32(u32(u32(0x21ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B587f4a:L587f4a:{c.instructions+=1;NFSU2_TR(0x587f4a);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L587f4c;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x587f4au);}goto L587f4a;}
}
B587f4c:L587f4c:{c.instructions+=5;NFSU2_TR(0x587f4c);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B587f4e:{NFSU2_TR(0x587f4e);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B587f4f:{NFSU2_TR(0x587f4f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B587f51:{NFSU2_TR(0x587f51);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B587f53:{NFSU2_TR(0x587f53);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L587f7f;}}
}
B587f55:L587f55:{c.instructions+=6;NFSU2_TR(0x587f55);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B587f58:{NFSU2_TR(0x587f58);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587f5a:{NFSU2_TR(0x587f5a);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B587f5e:{NFSU2_TR(0x587f5e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587f5f:{NFSU2_TR(0x587f5f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B587f67:{NFSU2_TR(0x587f67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x587f6cull));
TAIL_STATIC(0x581d90u,581);
}
B587f6c:L587f6c:{c.instructions+=6;NFSU2_TR(0x587f6c);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B587f70:{NFSU2_TR(0x587f70);
u8 U[13];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),1);
s1(u32(r4(U+8)),r1(U+12));
}
B587f74:{NFSU2_TR(0x587f74);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B587f78:{NFSU2_TR(0x587f78);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B587f79:{NFSU2_TR(0x587f79);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B587f7b:{NFSU2_TR(0x587f7b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x587f55u);}goto L587f55;}}
}
B587f7d:L587f7d:{c.instructions+=1;NFSU2_TR(0x587f7d);
__builtin_memmove((R+8),(R+0),4);
}
B587f7f:L587f7f:{c.instructions+=3;NFSU2_TR(0x587f7f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B587f81:{NFSU2_TR(0x587f81);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B587f83:{NFSU2_TR(0x587f83);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L587f9d;}}
}
B587f85:L587f85:{c.instructions+=5;NFSU2_TR(0x587f85);
u8 U[13];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+4,u32(r1(U+12)));
}
B587f8a:{NFSU2_TR(0x587f8a);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587f8c:{NFSU2_TR(0x587f8c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587f8d:{NFSU2_TR(0x587f8d);
__builtin_memmove((R+4),(R+12),4);
}
B587f8f:{NFSU2_TR(0x587f8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x587f94ull));
TAIL_STATIC(0x581d00u,581);
}
B587f94:L587f94:{c.instructions+=4;NFSU2_TR(0x587f94);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B587f98:{NFSU2_TR(0x587f98);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B587f99:{NFSU2_TR(0x587f99);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B587f9b:{NFSU2_TR(0x587f9b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x587f85u);}goto L587f85;}}
}
B587f9d:L587f9d:{c.instructions+=3;NFSU2_TR(0x587f9d);
u8 U[5];
w4(U+0,u32(u32(u32(0xeull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B587fa1:{NFSU2_TR(0x587fa1);
u8 U[7];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(R+8))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B587fa5:{NFSU2_TR(0x587fa5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L587fd8;}}
}
B587fa7:L587fa7:{c.instructions+=4;NFSU2_TR(0x587fa7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B587faa:{NFSU2_TR(0x587faa);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x400ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B587fb0:{NFSU2_TR(0x587fb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x404ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))-u32(r4(U+4))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B587fb6:{NFSU2_TR(0x587fb6);
if(r1(R+518)){{goto L587fd8;}}
}
B587fb8:L587fb8:{c.instructions+=5;NFSU2_TR(0x587fb8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587fb9:{NFSU2_TR(0x587fb9);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B587fbd:{NFSU2_TR(0x587fbd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587fbe:{NFSU2_TR(0x587fbe);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B587fc6:{NFSU2_TR(0x587fc6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x587fcbull));
TAIL_STATIC(0x581d90u,581);
}
B587fcb:L587fcb:{c.instructions+=5;NFSU2_TR(0x587fcb);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B587fcf:{NFSU2_TR(0x587fcf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587fd0:{NFSU2_TR(0x587fd0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B587fd1:{NFSU2_TR(0x587fd1);
__builtin_memmove((R+4),(R+12),4);
}
B587fd3:{NFSU2_TR(0x587fd3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x587fd8ull));
TAIL_STATIC(0x581d00u,581);
}
B587fd8:L587fd8:{c.instructions+=14;NFSU2_TR(0x587fd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B587fdb:{NFSU2_TR(0x587fdb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B587fde:{NFSU2_TR(0x587fde);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B587fe2:{NFSU2_TR(0x587fe2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B587fe4:{NFSU2_TR(0x587fe4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B587fe7:{NFSU2_TR(0x587fe7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B587fea:{NFSU2_TR(0x587fea);
u8 U[5];
w4(U+0,u32(u32(u32(0xeull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B587fee:{NFSU2_TR(0x587fee);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x1ull))));
}
B587ff0:{NFSU2_TR(0x587ff0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B587ff2:{NFSU2_TR(0x587ff2);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B587ff6:{NFSU2_TR(0x587ff6);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B587ff7:{NFSU2_TR(0x587ff7);
u8 U[5];
__builtin_memmove((U+3),(R+4),1);
w1(R+512,u8((r1(R+0))<(r1(U+3))));
w1(R+523,sborrow<u8>(r1(R+0),r1(U+3)));
w1(U+4,u8(u32(r1(R+0))-u32(r1(U+3))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B587ff9:{NFSU2_TR(0x587ff9);
u8 U[5];
w4(U+0,u32(u32(u32(0xeull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B587ffd:{NFSU2_TR(0x587ffd);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
TAIL_STATIC(0x588001u,588);
}
XIT:NFSU2_TR_EXIT(0x587,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
