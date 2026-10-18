#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_642(u8* __restrict R,Cpu& c);
u32 body_65a(u8* __restrict R,Cpu& c);
u32 body_65b(u8* __restrict R,Cpu& c);
u32 body_65c(u8* __restrict R,Cpu& c);
u32 body_660(u8* __restrict R,Cpu& c);
u32 body_661(u8* __restrict R,Cpu& c);
u32 body_665(u8* __restrict R,Cpu& c);
u32 body_66a(u8* __restrict R,Cpu& c);
u32 body_66c(u8* __restrict R,Cpu& c);
u32 body_66f(u8* __restrict R,Cpu& c);
u32 body_671(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x670,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x670,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_670(u8* __restrict R,Cpu& c);
u32 page_670(Cpu& c){return body_670(c.regs.data(),c);}
__attribute__((noinline)) u32 body_670(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x670000:goto L670000;
case 0x670003:c.instructions+=8;goto B670003;
case 0x670006:c.instructions+=7;goto B670006;
case 0x670009:c.instructions+=6;goto B670009;
case 0x67000a:c.instructions+=5;goto B67000a;
case 0x67000d:c.instructions+=4;goto B67000d;
case 0x67000e:c.instructions+=3;goto B67000e;
case 0x67000f:c.instructions+=2;goto B67000f;
case 0x670011:c.instructions+=1;goto B670011;
case 0x670016:goto L670016;
case 0x670019:c.instructions+=4;goto B670019;
case 0x67001c:c.instructions+=3;goto B67001c;
case 0x67001f:c.instructions+=2;goto B67001f;
case 0x670021:c.instructions+=1;goto B670021;
case 0x670027:goto L670027;
case 0x67002a:c.instructions+=5;goto B67002a;
case 0x67002d:c.instructions+=4;goto B67002d;
case 0x670030:c.instructions+=3;goto B670030;
case 0x670034:c.instructions+=2;goto B670034;
case 0x670037:c.instructions+=1;goto B670037;
case 0x67003d:goto L67003d;
case 0x670040:c.instructions+=3;goto B670040;
case 0x670044:c.instructions+=2;goto B670044;
case 0x67004a:c.instructions+=1;goto B67004a;
case 0x670050:goto L670050;
case 0x670054:c.instructions+=2;goto B670054;
case 0x67005a:c.instructions+=1;goto B67005a;
case 0x670060:goto L670060;
case 0x670063:c.instructions+=6;goto B670063;
case 0x670065:c.instructions+=5;goto B670065;
case 0x670068:c.instructions+=4;goto B670068;
case 0x67006b:c.instructions+=3;goto B67006b;
case 0x67006d:c.instructions+=2;goto B67006d;
case 0x67006e:c.instructions+=1;goto B67006e;
case 0x670071:goto L670071;
case 0x670074:c.instructions+=3;goto B670074;
case 0x670075:c.instructions+=2;goto B670075;
case 0x670077:c.instructions+=1;goto B670077;
case 0x670079:goto L670079;
case 0x67007b:c.instructions+=4;goto B67007b;
case 0x67007e:c.instructions+=3;goto B67007e;
case 0x670080:c.instructions+=2;goto B670080;
case 0x670081:c.instructions+=1;goto B670081;
case 0x670084:goto L670084;
case 0x670087:c.instructions+=2;goto B670087;
case 0x67008a:c.instructions+=1;goto B67008a;
case 0x67008d:goto L67008d;
case 0x670090:c.instructions+=6;goto B670090;
case 0x670091:c.instructions+=5;goto B670091;
case 0x670093:c.instructions+=4;goto B670093;
case 0x670096:c.instructions+=3;goto B670096;
case 0x670098:c.instructions+=2;goto B670098;
case 0x670099:c.instructions+=1;goto B670099;
case 0x67009c:goto L67009c;
case 0x67009f:c.instructions+=3;goto B67009f;
case 0x6700a0:c.instructions+=2;goto B6700a0;
case 0x6700a2:c.instructions+=1;goto B6700a2;
case 0x6700a4:goto L6700a4;
case 0x6700a6:c.instructions+=4;goto B6700a6;
case 0x6700a9:c.instructions+=3;goto B6700a9;
case 0x6700ab:c.instructions+=2;goto B6700ab;
case 0x6700ac:c.instructions+=1;goto B6700ac;
case 0x6700af:goto L6700af;
case 0x6700b2:c.instructions+=2;goto B6700b2;
case 0x6700b5:c.instructions+=1;goto B6700b5;
case 0x6700b8:goto L6700b8;
case 0x6700bb:c.instructions+=5;goto B6700bb;
case 0x6700bc:c.instructions+=4;goto B6700bc;
case 0x6700be:c.instructions+=3;goto B6700be;
case 0x6700c0:c.instructions+=2;goto B6700c0;
case 0x6700c1:c.instructions+=1;goto B6700c1;
case 0x6700c4:goto L6700c4;
case 0x6700c6:c.instructions+=1;goto B6700c6;
case 0x6700cc:goto L6700cc;
case 0x6700ce:c.instructions+=3;goto B6700ce;
case 0x6700d1:c.instructions+=2;goto B6700d1;
case 0x6700d4:c.instructions+=1;goto B6700d4;
case 0x6700d6:goto L6700d6;
case 0x6700d7:c.instructions+=3;goto B6700d7;
case 0x6700d8:c.instructions+=2;goto B6700d8;
case 0x6700da:c.instructions+=1;goto B6700da;
case 0x6700df:goto L6700df;
case 0x6700e1:c.instructions+=1;goto B6700e1;
case 0x6700e7:goto L6700e7;
case 0x6700ea:c.instructions+=3;goto B6700ea;
case 0x6700ed:c.instructions+=2;goto B6700ed;
case 0x6700f0:c.instructions+=1;goto B6700f0;
case 0x6700f2:goto L6700f2;
case 0x6700f6:c.instructions+=2;goto B6700f6;
case 0x6700fa:c.instructions+=1;goto B6700fa;
case 0x670100:goto L670100;
case 0x670102:c.instructions+=4;goto B670102;
case 0x670105:c.instructions+=3;goto B670105;
case 0x670107:c.instructions+=2;goto B670107;
case 0x670108:c.instructions+=1;goto B670108;
case 0x67010b:goto L67010b;
case 0x67010e:c.instructions+=3;goto B67010e;
case 0x67010f:c.instructions+=2;goto B67010f;
case 0x670111:c.instructions+=1;goto B670111;
case 0x670113:goto L670113;
case 0x670115:c.instructions+=4;goto B670115;
case 0x670118:c.instructions+=3;goto B670118;
case 0x67011a:c.instructions+=2;goto B67011a;
case 0x67011b:c.instructions+=1;goto B67011b;
case 0x67011e:goto L67011e;
case 0x670121:c.instructions+=2;goto B670121;
case 0x670124:c.instructions+=1;goto B670124;
case 0x670127:goto L670127;
case 0x67012a:c.instructions+=6;goto B67012a;
case 0x67012b:c.instructions+=5;goto B67012b;
case 0x67012d:c.instructions+=4;goto B67012d;
case 0x670130:c.instructions+=3;goto B670130;
case 0x670132:c.instructions+=2;goto B670132;
case 0x670133:c.instructions+=1;goto B670133;
case 0x670136:goto L670136;
case 0x670139:c.instructions+=3;goto B670139;
case 0x67013a:c.instructions+=2;goto B67013a;
case 0x67013c:c.instructions+=1;goto B67013c;
case 0x67013e:goto L67013e;
case 0x670140:c.instructions+=4;goto B670140;
case 0x670143:c.instructions+=3;goto B670143;
case 0x670145:c.instructions+=2;goto B670145;
case 0x670146:c.instructions+=1;goto B670146;
case 0x670149:goto L670149;
case 0x67014c:c.instructions+=2;goto B67014c;
case 0x67014f:c.instructions+=1;goto B67014f;
case 0x670152:goto L670152;
case 0x670155:c.instructions+=6;goto B670155;
case 0x670156:c.instructions+=5;goto B670156;
case 0x670158:c.instructions+=4;goto B670158;
case 0x67015b:c.instructions+=3;goto B67015b;
case 0x67015d:c.instructions+=2;goto B67015d;
case 0x67015e:c.instructions+=1;goto B67015e;
case 0x670161:goto L670161;
case 0x670164:c.instructions+=3;goto B670164;
case 0x670165:c.instructions+=2;goto B670165;
case 0x670167:c.instructions+=1;goto B670167;
case 0x670169:goto L670169;
case 0x67016b:c.instructions+=4;goto B67016b;
case 0x67016e:c.instructions+=3;goto B67016e;
case 0x670170:c.instructions+=2;goto B670170;
case 0x670171:c.instructions+=1;goto B670171;
case 0x670174:goto L670174;
case 0x670177:c.instructions+=2;goto B670177;
case 0x67017a:c.instructions+=1;goto B67017a;
case 0x67017d:goto L67017d;
case 0x670180:c.instructions+=6;goto B670180;
case 0x670181:c.instructions+=5;goto B670181;
case 0x670183:c.instructions+=4;goto B670183;
case 0x670186:c.instructions+=3;goto B670186;
case 0x670188:c.instructions+=2;goto B670188;
case 0x670189:c.instructions+=1;goto B670189;
case 0x67018c:goto L67018c;
case 0x67018f:c.instructions+=3;goto B67018f;
case 0x670190:c.instructions+=2;goto B670190;
case 0x670192:c.instructions+=1;goto B670192;
case 0x670194:goto L670194;
case 0x670196:c.instructions+=4;goto B670196;
case 0x670199:c.instructions+=3;goto B670199;
case 0x67019b:c.instructions+=2;goto B67019b;
case 0x67019c:c.instructions+=1;goto B67019c;
case 0x67019f:goto L67019f;
case 0x6701a2:c.instructions+=2;goto B6701a2;
case 0x6701a5:c.instructions+=1;goto B6701a5;
case 0x6701a8:goto L6701a8;
case 0x6701ab:c.instructions+=6;goto B6701ab;
case 0x6701ac:c.instructions+=5;goto B6701ac;
case 0x6701ae:c.instructions+=4;goto B6701ae;
case 0x6701b1:c.instructions+=3;goto B6701b1;
case 0x6701b3:c.instructions+=2;goto B6701b3;
case 0x6701b4:c.instructions+=1;goto B6701b4;
case 0x6701b7:goto L6701b7;
case 0x6701ba:c.instructions+=3;goto B6701ba;
case 0x6701bb:c.instructions+=2;goto B6701bb;
case 0x6701bd:c.instructions+=1;goto B6701bd;
case 0x6701bf:goto L6701bf;
case 0x6701c1:c.instructions+=4;goto B6701c1;
case 0x6701c4:c.instructions+=3;goto B6701c4;
case 0x6701c6:c.instructions+=2;goto B6701c6;
case 0x6701c7:c.instructions+=1;goto B6701c7;
case 0x6701ca:goto L6701ca;
case 0x6701cd:c.instructions+=2;goto B6701cd;
case 0x6701d0:c.instructions+=1;goto B6701d0;
case 0x6701d3:goto L6701d3;
case 0x6701d6:c.instructions+=5;goto B6701d6;
case 0x6701d7:c.instructions+=4;goto B6701d7;
case 0x6701d9:c.instructions+=3;goto B6701d9;
case 0x6701db:c.instructions+=2;goto B6701db;
case 0x6701dc:c.instructions+=1;goto B6701dc;
case 0x6701df:goto L6701df;
case 0x6701e1:c.instructions+=1;goto B6701e1;
case 0x6701e7:goto L6701e7;
case 0x6701ea:c.instructions+=2;goto B6701ea;
case 0x6701ed:c.instructions+=1;goto B6701ed;
case 0x6701ef:goto L6701ef;
case 0x6701f2:c.instructions+=2;goto B6701f2;
case 0x6701f8:c.instructions+=1;goto B6701f8;
case 0x6701fe:goto L6701fe;
case 0x670204:c.instructions+=7;goto B670204;
case 0x670207:c.instructions+=6;goto B670207;
case 0x67020a:c.instructions+=5;goto B67020a;
case 0x67020c:c.instructions+=4;goto B67020c;
case 0x670210:c.instructions+=3;goto B670210;
case 0x670213:c.instructions+=2;goto B670213;
case 0x670215:c.instructions+=1;goto B670215;
case 0x67021b:goto L67021b;
case 0x67021f:c.instructions+=2;goto B67021f;
case 0x670221:c.instructions+=1;goto B670221;
case 0x670223:goto L670223;
case 0x670229:c.instructions+=1;goto B670229;
case 0x67022f:goto L67022f;
case 0x670235:c.instructions+=5;goto B670235;
case 0x67023b:c.instructions+=4;goto B67023b;
case 0x67023d:c.instructions+=3;goto B67023d;
case 0x670240:c.instructions+=2;goto B670240;
case 0x670243:c.instructions+=1;goto B670243;
case 0x670249:goto L670249;
case 0x67024d:c.instructions+=1;goto B67024d;
case 0x670253:goto L670253;
case 0x670256:c.instructions+=2;goto B670256;
case 0x670259:c.instructions+=1;goto B670259;
case 0x67025e:goto L67025e;
case 0x670261:c.instructions+=5;goto B670261;
case 0x670263:c.instructions+=4;goto B670263;
case 0x670266:c.instructions+=3;goto B670266;
case 0x67026b:c.instructions+=2;goto B67026b;
case 0x67026e:c.instructions+=1;goto B67026e;
case 0x670274:goto L670274;
case 0x670277:c.instructions+=9;goto B670277;
case 0x67027a:c.instructions+=8;goto B67027a;
case 0x67027d:c.instructions+=7;goto B67027d;
case 0x670280:c.instructions+=6;goto B670280;
case 0x670284:c.instructions+=5;goto B670284;
case 0x670289:c.instructions+=4;goto B670289;
case 0x67028c:c.instructions+=3;goto B67028c;
case 0x670292:c.instructions+=2;goto B670292;
case 0x670295:c.instructions+=1;goto B670295;
case 0x670297:goto L670297;
case 0x67029a:c.instructions+=1;goto B67029a;
case 0x67029c:goto L67029c;
case 0x67029f:c.instructions+=1;goto B67029f;
case 0x6702a1:goto L6702a1;
case 0x6702a4:c.instructions+=1;goto B6702a4;
case 0x6702a6:goto L6702a6;
case 0x6702aa:c.instructions+=6;goto B6702aa;
case 0x6702ab:c.instructions+=5;goto B6702ab;
case 0x6702ac:c.instructions+=4;goto B6702ac;
case 0x6702af:c.instructions+=3;goto B6702af;
case 0x6702b1:c.instructions+=2;goto B6702b1;
case 0x6702b4:c.instructions+=1;goto B6702b4;
case 0x6702b6:goto L6702b6;
case 0x6702bb:goto L6702bb;
case 0x6702bd:goto L6702bd;
case 0x6702c1:c.instructions+=1;goto B6702c1;
case 0x6702c3:goto L6702c3;
case 0x6702c8:goto L6702c8;
case 0x6702ca:goto L6702ca;
case 0x6702cf:goto L6702cf;
case 0x6702d1:goto L6702d1;
case 0x6702d2:c.instructions+=5;goto B6702d2;
case 0x6702d3:c.instructions+=4;goto B6702d3;
case 0x6702d6:c.instructions+=3;goto B6702d6;
case 0x6702d8:c.instructions+=2;goto B6702d8;
case 0x6702db:c.instructions+=1;goto B6702db;
case 0x6702e0:goto L6702e0;
case 0x6702e2:goto L6702e2;
case 0x6702e6:c.instructions+=1;goto B6702e6;
case 0x6702e8:goto L6702e8;
case 0x6702e9:c.instructions+=5;goto B6702e9;
case 0x6702ea:c.instructions+=4;goto B6702ea;
case 0x6702ed:c.instructions+=3;goto B6702ed;
case 0x6702ef:c.instructions+=2;goto B6702ef;
case 0x6702f2:c.instructions+=1;goto B6702f2;
case 0x6702f4:goto L6702f4;
case 0x6702f9:goto L6702f9;
case 0x6702fb:c.instructions+=1;goto B6702fb;
case 0x670301:goto L670301;
case 0x670304:c.instructions+=3;goto B670304;
case 0x670307:c.instructions+=2;goto B670307;
case 0x67030a:c.instructions+=1;goto B67030a;
case 0x670310:goto L670310;
case 0x670312:c.instructions+=2;goto B670312;
case 0x670315:c.instructions+=1;goto B670315;
case 0x670317:goto L670317;
case 0x670319:c.instructions+=2;goto B670319;
case 0x67031f:c.instructions+=1;goto B67031f;
case 0x670321:goto L670321;
case 0x670327:c.instructions+=8;goto B670327;
case 0x67032d:c.instructions+=7;goto B67032d;
case 0x670330:c.instructions+=6;goto B670330;
case 0x670333:c.instructions+=5;goto B670333;
case 0x670335:c.instructions+=4;goto B670335;
case 0x670338:c.instructions+=3;goto B670338;
case 0x67033b:c.instructions+=2;goto B67033b;
case 0x670342:c.instructions+=1;goto B670342;
case 0x670344:goto L670344;
case 0x670345:c.instructions+=3;goto B670345;
case 0x670348:c.instructions+=2;goto B670348;
case 0x670349:c.instructions+=1;goto B670349;
case 0x67034e:goto L67034e;
case 0x670350:c.instructions+=1;goto B670350;
case 0x670356:goto L670356;
case 0x670357:c.instructions+=3;goto B670357;
case 0x67035a:c.instructions+=2;goto B67035a;
case 0x670360:c.instructions+=1;goto B670360;
case 0x670362:goto L670362;
case 0x670366:c.instructions+=2;goto B670366;
case 0x67036b:c.instructions+=1;goto B67036b;
case 0x670371:goto L670371;
case 0x670375:c.instructions+=4;goto B670375;
case 0x670378:c.instructions+=3;goto B670378;
case 0x67037b:c.instructions+=2;goto B67037b;
case 0x67037d:c.instructions+=1;goto B67037d;
case 0x670382:goto L670382;
case 0x670384:c.instructions+=2;goto B670384;
case 0x670387:c.instructions+=1;goto B670387;
case 0x67038d:goto L67038d;
case 0x670390:c.instructions+=4;goto B670390;
case 0x670392:c.instructions+=3;goto B670392;
case 0x670394:c.instructions+=2;goto B670394;
case 0x670397:c.instructions+=1;goto B670397;
case 0x670399:goto L670399;
case 0x67039b:goto L67039b;
case 0x67039d:c.instructions+=1;goto B67039d;
case 0x6703a0:goto L6703a0;
case 0x6703a2:goto L6703a2;
case 0x6703a5:c.instructions+=7;goto B6703a5;
case 0x6703a7:c.instructions+=6;goto B6703a7;
case 0x6703a9:c.instructions+=5;goto B6703a9;
case 0x6703ad:c.instructions+=4;goto B6703ad;
case 0x6703b0:c.instructions+=3;goto B6703b0;
case 0x6703b3:c.instructions+=2;goto B6703b3;
case 0x6703b6:c.instructions+=1;goto B6703b6;
case 0x6703bc:goto L6703bc;
case 0x6703c0:c.instructions+=8;goto B6703c0;
case 0x6703c6:c.instructions+=7;goto B6703c6;
case 0x6703c9:c.instructions+=6;goto B6703c9;
case 0x6703cc:c.instructions+=5;goto B6703cc;
case 0x6703cf:c.instructions+=4;goto B6703cf;
case 0x6703d2:c.instructions+=3;goto B6703d2;
case 0x6703d5:c.instructions+=2;goto B6703d5;
case 0x6703d9:c.instructions+=1;goto B6703d9;
case 0x6703db:goto L6703db;
case 0x6703de:c.instructions+=1;goto B6703de;
case 0x6703e0:goto L6703e0;
case 0x6703e5:c.instructions+=1;goto B6703e5;
case 0x6703ea:goto L6703ea;
case 0x6703ed:c.instructions+=1;goto B6703ed;
case 0x6703f0:goto L6703f0;
case 0x6703f3:c.instructions+=7;goto B6703f3;
case 0x6703f6:c.instructions+=6;goto B6703f6;
case 0x6703f8:c.instructions+=5;goto B6703f8;
case 0x6703fb:c.instructions+=4;goto B6703fb;
case 0x670401:c.instructions+=3;goto B670401;
case 0x670404:c.instructions+=2;goto B670404;
case 0x670408:c.instructions+=1;goto B670408;
case 0x67040a:goto L67040a;
case 0x67040d:c.instructions+=1;goto B67040d;
case 0x67040f:goto L67040f;
case 0x670412:c.instructions+=1;goto B670412;
case 0x670415:goto L670415;
case 0x670418:c.instructions+=8;goto B670418;
case 0x67041b:c.instructions+=7;goto B67041b;
case 0x67041d:c.instructions+=6;goto B67041d;
case 0x670420:c.instructions+=5;goto B670420;
case 0x670424:c.instructions+=4;goto B670424;
case 0x670427:c.instructions+=3;goto B670427;
case 0x67042d:c.instructions+=2;goto B67042d;
case 0x670433:c.instructions+=1;goto B670433;
case 0x670435:goto L670435;
case 0x67043b:c.instructions+=1;goto B67043b;
case 0x670441:goto L670441;
case 0x670445:c.instructions+=9;goto B670445;
case 0x670448:c.instructions+=8;goto B670448;
case 0x67044c:c.instructions+=7;goto B67044c;
case 0x67044f:c.instructions+=6;goto B67044f;
case 0x670453:c.instructions+=5;goto B670453;
case 0x670456:c.instructions+=4;goto B670456;
case 0x670459:c.instructions+=3;goto B670459;
case 0x67045b:c.instructions+=2;goto B67045b;
case 0x67045d:c.instructions+=1;goto B67045d;
case 0x67045f:goto L67045f;
case 0x670465:c.instructions+=3;goto B670465;
case 0x670467:c.instructions+=2;goto B670467;
case 0x67046b:c.instructions+=1;goto B67046b;
case 0x67046d:goto L67046d;
case 0x670470:c.instructions+=4;goto B670470;
case 0x670473:c.instructions+=3;goto B670473;
case 0x670476:c.instructions+=2;goto B670476;
case 0x670479:c.instructions+=1;goto B670479;
case 0x67047b:goto L67047b;
case 0x67047e:c.instructions+=10;goto B67047e;
case 0x670481:c.instructions+=9;goto B670481;
case 0x670483:c.instructions+=8;goto B670483;
case 0x670486:c.instructions+=7;goto B670486;
case 0x670489:c.instructions+=6;goto B670489;
case 0x67048c:c.instructions+=5;goto B67048c;
case 0x67048f:c.instructions+=4;goto B67048f;
case 0x670492:c.instructions+=3;goto B670492;
case 0x670495:c.instructions+=2;goto B670495;
case 0x670498:c.instructions+=1;goto B670498;
case 0x67049b:goto L67049b;
case 0x67049e:c.instructions+=6;goto B67049e;
case 0x6704a1:c.instructions+=5;goto B6704a1;
case 0x6704a6:c.instructions+=4;goto B6704a6;
case 0x6704a8:c.instructions+=3;goto B6704a8;
case 0x6704ad:c.instructions+=2;goto B6704ad;
case 0x6704b0:c.instructions+=1;goto B6704b0;
case 0x6704b2:goto L6704b2;
case 0x6704b8:c.instructions+=7;goto B6704b8;
case 0x6704bb:c.instructions+=6;goto B6704bb;
case 0x6704bf:c.instructions+=5;goto B6704bf;
case 0x6704c1:c.instructions+=4;goto B6704c1;
case 0x6704c4:c.instructions+=3;goto B6704c4;
case 0x6704c7:c.instructions+=2;goto B6704c7;
case 0x6704ca:c.instructions+=1;goto B6704ca;
case 0x6704ce:goto L6704ce;
case 0x6704d1:c.instructions+=3;goto B6704d1;
case 0x6704d5:c.instructions+=2;goto B6704d5;
case 0x6704d9:c.instructions+=1;goto B6704d9;
case 0x6704df:goto L6704df;
case 0x6704e2:c.instructions+=3;goto B6704e2;
case 0x6704e6:c.instructions+=2;goto B6704e6;
case 0x6704ea:c.instructions+=1;goto B6704ea;
case 0x6704f0:goto L6704f0;
case 0x6704f3:goto L6704f3;
case 0x6704f9:c.instructions+=8;goto B6704f9;
case 0x6704ff:c.instructions+=7;goto B6704ff;
case 0x670506:c.instructions+=6;goto B670506;
case 0x670508:c.instructions+=5;goto B670508;
case 0x67050a:c.instructions+=4;goto B67050a;
case 0x670510:c.instructions+=3;goto B670510;
case 0x670513:c.instructions+=2;goto B670513;
case 0x670517:c.instructions+=1;goto B670517;
case 0x670519:goto L670519;
case 0x67051b:goto L67051b;
case 0x670521:c.instructions+=7;goto B670521;
case 0x670524:c.instructions+=6;goto B670524;
case 0x670527:c.instructions+=5;goto B670527;
case 0x670529:c.instructions+=4;goto B670529;
case 0x67052c:c.instructions+=3;goto B67052c;
case 0x67052e:c.instructions+=2;goto B67052e;
case 0x670531:c.instructions+=1;goto B670531;
case 0x670533:goto L670533;
case 0x670536:c.instructions+=1;goto B670536;
case 0x670538:goto L670538;
case 0x670539:c.instructions+=2;goto B670539;
case 0x67053b:c.instructions+=1;goto B67053b;
case 0x670540:goto L670540;
case 0x670542:c.instructions+=1;goto B670542;
case 0x670548:goto L670548;
case 0x67054a:goto L67054a;
case 0x67054b:c.instructions+=3;goto B67054b;
case 0x67054e:c.instructions+=2;goto B67054e;
case 0x670554:c.instructions+=1;goto B670554;
case 0x670556:goto L670556;
case 0x67055c:c.instructions+=2;goto B67055c;
case 0x67055f:c.instructions+=1;goto B67055f;
case 0x670565:goto L670565;
case 0x670567:goto L670567;
case 0x67056d:c.instructions+=6;goto B67056d;
case 0x670570:c.instructions+=5;goto B670570;
case 0x670573:c.instructions+=4;goto B670573;
case 0x670576:c.instructions+=3;goto B670576;
case 0x670579:c.instructions+=2;goto B670579;
case 0x67057c:c.instructions+=1;goto B67057c;
case 0x67057e:goto L67057e;
case 0x670581:c.instructions+=1;goto B670581;
case 0x670583:goto L670583;
case 0x670586:c.instructions+=1;goto B670586;
case 0x670589:goto L670589;
case 0x67058c:c.instructions+=9;goto B67058c;
case 0x67058f:c.instructions+=8;goto B67058f;
case 0x670592:c.instructions+=7;goto B670592;
case 0x670595:c.instructions+=6;goto B670595;
case 0x670597:c.instructions+=5;goto B670597;
case 0x67059d:c.instructions+=4;goto B67059d;
case 0x6705a0:c.instructions+=3;goto B6705a0;
case 0x6705a2:c.instructions+=2;goto B6705a2;
case 0x6705a5:c.instructions+=1;goto B6705a5;
case 0x6705a7:goto L6705a7;
case 0x6705aa:c.instructions+=1;goto B6705aa;
case 0x6705ac:goto L6705ac;
case 0x6705af:c.instructions+=1;goto B6705af;
case 0x6705b2:goto L6705b2;
case 0x6705b5:c.instructions+=4;goto B6705b5;
case 0x6705b8:c.instructions+=3;goto B6705b8;
case 0x6705bb:c.instructions+=2;goto B6705bb;
case 0x6705be:c.instructions+=1;goto B6705be;
case 0x6705c0:goto L6705c0;
case 0x6705c3:c.instructions+=5;goto B6705c3;
case 0x6705c9:c.instructions+=4;goto B6705c9;
case 0x6705cc:c.instructions+=3;goto B6705cc;
case 0x6705cf:c.instructions+=2;goto B6705cf;
case 0x6705d2:c.instructions+=1;goto B6705d2;
case 0x6705d4:goto L6705d4;
case 0x6705d7:c.instructions+=1;goto B6705d7;
case 0x6705d9:goto L6705d9;
case 0x6705dc:c.instructions+=1;goto B6705dc;
case 0x6705df:goto L6705df;
case 0x6705e2:c.instructions+=9;goto B6705e2;
case 0x6705e5:c.instructions+=8;goto B6705e5;
case 0x6705e8:c.instructions+=7;goto B6705e8;
case 0x6705eb:c.instructions+=6;goto B6705eb;
case 0x6705ed:c.instructions+=5;goto B6705ed;
case 0x6705f3:c.instructions+=4;goto B6705f3;
case 0x6705f6:c.instructions+=3;goto B6705f6;
case 0x6705f8:c.instructions+=2;goto B6705f8;
case 0x6705fb:c.instructions+=1;goto B6705fb;
case 0x6705fd:goto L6705fd;
case 0x670600:c.instructions+=1;goto B670600;
case 0x670602:goto L670602;
case 0x670605:c.instructions+=1;goto B670605;
case 0x670608:goto L670608;
case 0x67060b:c.instructions+=3;goto B67060b;
case 0x67060e:c.instructions+=2;goto B67060e;
case 0x670611:c.instructions+=1;goto B670611;
case 0x670614:goto L670614;
case 0x670617:c.instructions+=3;goto B670617;
case 0x67061a:c.instructions+=2;goto B67061a;
case 0x67061c:c.instructions+=1;goto B67061c;
case 0x67061e:goto L67061e;
case 0x670621:c.instructions+=3;goto B670621;
case 0x670625:c.instructions+=2;goto B670625;
case 0x67062b:c.instructions+=1;goto B67062b;
case 0x670631:goto L670631;
case 0x670633:goto L670633;
case 0x670638:goto L670638;
case 0x67063e:c.instructions+=6;goto B67063e;
case 0x67063f:c.instructions+=5;goto B67063f;
case 0x670640:c.instructions+=4;goto B670640;
case 0x670646:c.instructions+=3;goto B670646;
case 0x670647:c.instructions+=2;goto B670647;
case 0x670648:c.instructions+=1;goto B670648;
case 0x67064b:goto L67064b;
case 0x67064d:c.instructions+=7;goto B67064d;
case 0x67064e:c.instructions+=6;goto B67064e;
case 0x670650:c.instructions+=5;goto B670650;
case 0x670653:c.instructions+=4;goto B670653;
case 0x670654:c.instructions+=3;goto B670654;
case 0x670656:c.instructions+=2;goto B670656;
case 0x670659:c.instructions+=1;goto B670659;
case 0x67065b:goto L67065b;
case 0x670662:c.instructions+=1;goto B670662;
case 0x670667:goto L670667;
case 0x670668:c.instructions+=2;goto B670668;
case 0x67066d:c.instructions+=1;goto B67066d;
case 0x670672:goto L670672;
case 0x670674:c.instructions+=2;goto B670674;
case 0x670675:c.instructions+=1;goto B670675;
case 0x670677:goto L670677;
case 0x670679:c.instructions+=1;goto B670679;
case 0x67067e:goto L67067e;
case 0x670680:c.instructions+=1;goto B670680;
case 0x670682:goto L670682;
case 0x670684:goto L670684;
case 0x670686:c.instructions+=1;goto B670686;
case 0x670688:goto L670688;
case 0x67068f:c.instructions+=1;goto B67068f;
case 0x670694:goto L670694;
case 0x670697:c.instructions+=8;goto B670697;
case 0x670698:c.instructions+=7;goto B670698;
case 0x67069b:c.instructions+=6;goto B67069b;
case 0x67069e:c.instructions+=5;goto B67069e;
case 0x6706a1:c.instructions+=4;goto B6706a1;
case 0x6706a2:c.instructions+=3;goto B6706a2;
case 0x6706a5:c.instructions+=2;goto B6706a5;
case 0x6706a7:c.instructions+=1;goto B6706a7;
case 0x6706ad:goto L6706ad;
case 0x6706b4:c.instructions+=4;goto B6706b4;
case 0x6706b7:c.instructions+=3;goto B6706b7;
case 0x6706ba:c.instructions+=2;goto B6706ba;
case 0x6706bb:c.instructions+=1;goto B6706bb;
case 0x6706c0:goto L6706c0;
case 0x6706c2:c.instructions+=2;goto B6706c2;
case 0x6706c5:c.instructions+=1;goto B6706c5;
case 0x6706cb:goto L6706cb;
case 0x6706d2:c.instructions+=2;goto B6706d2;
case 0x6706d4:c.instructions+=1;goto B6706d4;
case 0x6706d9:goto L6706d9;
case 0x6706db:c.instructions+=2;goto B6706db;
case 0x6706de:c.instructions+=1;goto B6706de;
case 0x6706e4:goto L6706e4;
case 0x6706e7:c.instructions+=4;goto B6706e7;
case 0x6706e9:c.instructions+=3;goto B6706e9;
case 0x6706ef:c.instructions+=2;goto B6706ef;
case 0x6706f2:c.instructions+=1;goto B6706f2;
case 0x6706f8:goto L6706f8;
case 0x6706fc:goto L6706fc;
case 0x670702:c.instructions+=3;goto B670702;
case 0x670705:c.instructions+=2;goto B670705;
case 0x67070d:c.instructions+=1;goto B67070d;
case 0x67070f:goto L67070f;
case 0x670716:c.instructions+=7;goto B670716;
case 0x67071c:c.instructions+=6;goto B67071c;
case 0x670723:c.instructions+=5;goto B670723;
case 0x670729:c.instructions+=4;goto B670729;
case 0x670730:c.instructions+=3;goto B670730;
case 0x670732:c.instructions+=2;goto B670732;
case 0x670733:c.instructions+=1;goto B670733;
case 0x670736:goto L670736;
case 0x670739:c.instructions+=2;goto B670739;
case 0x67073f:c.instructions+=1;goto B67073f;
case 0x670746:goto L670746;
case 0x67074c:c.instructions+=2;goto B67074c;
case 0x670750:c.instructions+=1;goto B670750;
case 0x670752:goto L670752;
case 0x670755:c.instructions+=7;goto B670755;
case 0x67075b:c.instructions+=6;goto B67075b;
case 0x67075e:c.instructions+=5;goto B67075e;
case 0x670764:c.instructions+=4;goto B670764;
case 0x670767:c.instructions+=3;goto B670767;
case 0x670769:c.instructions+=2;goto B670769;
case 0x67076a:c.instructions+=1;goto B67076a;
case 0x67076d:goto L67076d;
case 0x670770:c.instructions+=2;goto B670770;
case 0x670773:c.instructions+=1;goto B670773;
case 0x670775:goto L670775;
case 0x670778:c.instructions+=2;goto B670778;
case 0x67077e:c.instructions+=1;goto B67077e;
case 0x670785:goto L670785;
case 0x67078b:c.instructions+=2;goto B67078b;
case 0x67078f:c.instructions+=1;goto B67078f;
case 0x670791:goto L670791;
case 0x670794:c.instructions+=7;goto B670794;
case 0x67079a:c.instructions+=6;goto B67079a;
case 0x67079d:c.instructions+=5;goto B67079d;
case 0x6707a3:c.instructions+=4;goto B6707a3;
case 0x6707a6:c.instructions+=3;goto B6707a6;
case 0x6707a8:c.instructions+=2;goto B6707a8;
case 0x6707a9:c.instructions+=1;goto B6707a9;
case 0x6707ac:goto L6707ac;
case 0x6707af:c.instructions+=2;goto B6707af;
case 0x6707b2:c.instructions+=1;goto B6707b2;
case 0x6707b4:goto L6707b4;
case 0x6707b7:c.instructions+=4;goto B6707b7;
case 0x6707ba:c.instructions+=3;goto B6707ba;
case 0x6707c1:c.instructions+=2;goto B6707c1;
case 0x6707c7:c.instructions+=1;goto B6707c7;
case 0x6707cd:goto L6707cd;
case 0x6707d1:c.instructions+=2;goto B6707d1;
case 0x6707d5:c.instructions+=1;goto B6707d5;
case 0x6707db:goto L6707db;
case 0x6707dd:goto L6707dd;
case 0x6707e0:c.instructions+=3;goto B6707e0;
case 0x6707e2:c.instructions+=2;goto B6707e2;
case 0x6707e5:c.instructions+=1;goto B6707e5;
case 0x6707e7:goto L6707e7;
case 0x6707eb:c.instructions+=1;goto B6707eb;
case 0x6707ed:goto L6707ed;
case 0x6707f0:c.instructions+=4;goto B6707f0;
case 0x6707f4:c.instructions+=3;goto B6707f4;
case 0x6707f6:c.instructions+=2;goto B6707f6;
case 0x6707f7:c.instructions+=1;goto B6707f7;
case 0x6707fa:goto L6707fa;
case 0x6707fd:c.instructions+=3;goto B6707fd;
case 0x670801:c.instructions+=2;goto B670801;
case 0x670804:c.instructions+=1;goto B670804;
case 0x670806:goto L670806;
case 0x670808:c.instructions+=3;goto B670808;
case 0x67080a:c.instructions+=2;goto B67080a;
case 0x67080b:c.instructions+=1;goto B67080b;
case 0x67080e:goto L67080e;
case 0x670811:c.instructions+=1;goto B670811;
case 0x670816:goto L670816;
case 0x670819:c.instructions+=15;goto B670819;
case 0x67081d:c.instructions+=14;goto B67081d;
case 0x670820:c.instructions+=13;goto B670820;
case 0x670824:c.instructions+=12;goto B670824;
case 0x670827:c.instructions+=11;goto B670827;
case 0x67082b:c.instructions+=10;goto B67082b;
case 0x67082e:c.instructions+=9;goto B67082e;
case 0x670831:c.instructions+=8;goto B670831;
case 0x670835:c.instructions+=7;goto B670835;
case 0x670838:c.instructions+=6;goto B670838;
case 0x67083a:c.instructions+=5;goto B67083a;
case 0x67083d:c.instructions+=4;goto B67083d;
case 0x67083f:c.instructions+=3;goto B67083f;
case 0x670842:c.instructions+=2;goto B670842;
case 0x670846:c.instructions+=1;goto B670846;
case 0x670849:goto L670849;
case 0x67084c:c.instructions+=3;goto B67084c;
case 0x67084e:c.instructions+=2;goto B67084e;
case 0x670851:c.instructions+=1;goto B670851;
case 0x670853:goto L670853;
case 0x670857:c.instructions+=1;goto B670857;
case 0x670859:goto L670859;
case 0x67085c:c.instructions+=4;goto B67085c;
case 0x670860:c.instructions+=3;goto B670860;
case 0x670862:c.instructions+=2;goto B670862;
case 0x670863:c.instructions+=1;goto B670863;
case 0x670866:goto L670866;
case 0x670869:c.instructions+=3;goto B670869;
case 0x67086d:c.instructions+=2;goto B67086d;
case 0x670870:c.instructions+=1;goto B670870;
case 0x670872:goto L670872;
case 0x670874:c.instructions+=3;goto B670874;
case 0x670876:c.instructions+=2;goto B670876;
case 0x670877:c.instructions+=1;goto B670877;
case 0x67087a:goto L67087a;
case 0x67087d:c.instructions+=1;goto B67087d;
case 0x670882:goto L670882;
case 0x670885:c.instructions+=15;goto B670885;
case 0x670889:c.instructions+=14;goto B670889;
case 0x67088c:c.instructions+=13;goto B67088c;
case 0x670890:c.instructions+=12;goto B670890;
case 0x670893:c.instructions+=11;goto B670893;
case 0x670897:c.instructions+=10;goto B670897;
case 0x67089a:c.instructions+=9;goto B67089a;
case 0x67089d:c.instructions+=8;goto B67089d;
case 0x6708a1:c.instructions+=7;goto B6708a1;
case 0x6708a4:c.instructions+=6;goto B6708a4;
case 0x6708a6:c.instructions+=5;goto B6708a6;
case 0x6708a9:c.instructions+=4;goto B6708a9;
case 0x6708ab:c.instructions+=3;goto B6708ab;
case 0x6708ae:c.instructions+=2;goto B6708ae;
case 0x6708b2:c.instructions+=1;goto B6708b2;
case 0x6708b5:goto L6708b5;
case 0x6708b8:c.instructions+=4;goto B6708b8;
case 0x6708bb:c.instructions+=3;goto B6708bb;
case 0x6708be:c.instructions+=2;goto B6708be;
case 0x6708c1:c.instructions+=1;goto B6708c1;
case 0x6708c7:goto L6708c7;
case 0x6708cd:c.instructions+=4;goto B6708cd;
case 0x6708cf:c.instructions+=3;goto B6708cf;
case 0x6708d5:c.instructions+=2;goto B6708d5;
case 0x6708d8:c.instructions+=1;goto B6708d8;
case 0x6708da:goto L6708da;
case 0x6708dc:c.instructions+=3;goto B6708dc;
case 0x6708de:c.instructions+=2;goto B6708de;
case 0x6708df:c.instructions+=1;goto B6708df;
case 0x6708e2:goto L6708e2;
case 0x6708e4:c.instructions+=1;goto B6708e4;
case 0x6708e9:goto L6708e9;
case 0x6708eb:c.instructions+=3;goto B6708eb;
case 0x6708ed:c.instructions+=2;goto B6708ed;
case 0x6708f0:c.instructions+=1;goto B6708f0;
case 0x6708f2:goto L6708f2;
case 0x6708f5:c.instructions+=3;goto B6708f5;
case 0x6708f8:c.instructions+=2;goto B6708f8;
case 0x6708fb:c.instructions+=1;goto B6708fb;
case 0x6708fd:goto L6708fd;
case 0x670900:c.instructions+=7;goto B670900;
case 0x670903:c.instructions+=6;goto B670903;
case 0x670906:c.instructions+=5;goto B670906;
case 0x670909:c.instructions+=4;goto B670909;
case 0x67090d:c.instructions+=3;goto B67090d;
case 0x67090f:c.instructions+=2;goto B67090f;
case 0x670912:c.instructions+=1;goto B670912;
case 0x670914:goto L670914;
case 0x670917:c.instructions+=3;goto B670917;
case 0x67091a:c.instructions+=2;goto B67091a;
case 0x67091d:c.instructions+=1;goto B67091d;
case 0x67091f:goto L67091f;
case 0x670922:c.instructions+=7;goto B670922;
case 0x670925:c.instructions+=6;goto B670925;
case 0x670928:c.instructions+=5;goto B670928;
case 0x67092b:c.instructions+=4;goto B67092b;
case 0x67092f:c.instructions+=3;goto B67092f;
case 0x670931:c.instructions+=2;goto B670931;
case 0x670934:c.instructions+=1;goto B670934;
case 0x670936:goto L670936;
case 0x670937:c.instructions+=3;goto B670937;
case 0x67093a:c.instructions+=2;goto B67093a;
case 0x67093d:c.instructions+=1;goto B67093d;
case 0x67093f:goto L67093f;
case 0x670941:goto L670941;
case 0x670944:c.instructions+=3;goto B670944;
case 0x670947:c.instructions+=2;goto B670947;
case 0x670948:c.instructions+=1;goto B670948;
case 0x67094d:goto L67094d;
case 0x67094f:c.instructions+=2;goto B67094f;
case 0x670952:c.instructions+=1;goto B670952;
case 0x670958:goto L670958;
case 0x67095a:c.instructions+=1;goto B67095a;
case 0x67095f:goto L67095f;
case 0x670961:c.instructions+=2;goto B670961;
case 0x670964:c.instructions+=1;goto B670964;
case 0x67096a:goto L67096a;
case 0x67096c:c.instructions+=1;goto B67096c;
case 0x670971:goto L670971;
case 0x670975:c.instructions+=2;goto B670975;
case 0x67097c:c.instructions+=1;goto B67097c;
case 0x670982:goto L670982;
case 0x670986:goto L670986;
case 0x67098c:c.instructions+=10;goto B67098c;
case 0x67098f:c.instructions+=9;goto B67098f;
case 0x670995:c.instructions+=8;goto B670995;
case 0x670998:c.instructions+=7;goto B670998;
case 0x67099e:c.instructions+=6;goto B67099e;
case 0x6709a1:c.instructions+=5;goto B6709a1;
case 0x6709a4:c.instructions+=4;goto B6709a4;
case 0x6709a8:c.instructions+=3;goto B6709a8;
case 0x6709ab:c.instructions+=2;goto B6709ab;
case 0x6709ae:c.instructions+=1;goto B6709ae;
case 0x6709b0:goto L6709b0;
case 0x6709b3:c.instructions+=1;goto B6709b3;
case 0x6709b5:goto L6709b5;
case 0x6709b8:c.instructions+=1;goto B6709b8;
case 0x6709bb:goto L6709bb;
case 0x6709be:c.instructions+=3;goto B6709be;
case 0x6709c1:c.instructions+=2;goto B6709c1;
case 0x6709c5:c.instructions+=1;goto B6709c5;
case 0x6709c7:goto L6709c7;
case 0x6709cb:c.instructions+=1;goto B6709cb;
case 0x6709cd:goto L6709cd;
case 0x6709d0:c.instructions+=2;goto B6709d0;
case 0x6709d4:c.instructions+=1;goto B6709d4;
case 0x6709d6:goto L6709d6;
case 0x6709d9:c.instructions+=1;goto B6709d9;
case 0x6709db:goto L6709db;
case 0x6709de:c.instructions+=1;goto B6709de;
case 0x6709e1:goto L6709e1;
case 0x6709e5:c.instructions+=1;goto B6709e5;
case 0x6709e8:goto L6709e8;
case 0x6709eb:c.instructions+=2;goto B6709eb;
case 0x6709f2:c.instructions+=1;goto B6709f2;
case 0x6709f8:goto L6709f8;
case 0x6709fb:c.instructions+=4;goto B6709fb;
case 0x670a01:c.instructions+=3;goto B670a01;
case 0x670a04:c.instructions+=2;goto B670a04;
case 0x670a08:c.instructions+=1;goto B670a08;
case 0x670a0a:goto L670a0a;
case 0x670a0d:c.instructions+=1;goto B670a0d;
case 0x670a0f:goto L670a0f;
case 0x670a12:c.instructions+=1;goto B670a12;
case 0x670a15:goto L670a15;
case 0x670a18:c.instructions+=10;goto B670a18;
case 0x670a1b:c.instructions+=9;goto B670a1b;
case 0x670a1c:c.instructions+=8;goto B670a1c;
case 0x670a1f:c.instructions+=7;goto B670a1f;
case 0x670a21:c.instructions+=6;goto B670a21;
case 0x670a24:c.instructions+=5;goto B670a24;
case 0x670a26:c.instructions+=4;goto B670a26;
case 0x670a27:c.instructions+=3;goto B670a27;
case 0x670a2a:c.instructions+=2;goto B670a2a;
case 0x670a2c:c.instructions+=1;goto B670a2c;
case 0x670a31:goto L670a31;
case 0x670a33:c.instructions+=2;goto B670a33;
case 0x670a36:c.instructions+=1;goto B670a36;
case 0x670a3c:goto L670a3c;
case 0x670a3f:c.instructions+=2;goto B670a3f;
case 0x670a41:c.instructions+=1;goto B670a41;
case 0x670a46:goto L670a46;
case 0x670a48:goto L670a48;
case 0x670a4b:c.instructions+=4;goto B670a4b;
case 0x670a51:c.instructions+=3;goto B670a51;
case 0x670a54:c.instructions+=2;goto B670a54;
case 0x670a58:c.instructions+=1;goto B670a58;
case 0x670a5a:goto L670a5a;
case 0x670a5d:c.instructions+=1;goto B670a5d;
case 0x670a5f:goto L670a5f;
case 0x670a62:c.instructions+=1;goto B670a62;
case 0x670a65:goto L670a65;
case 0x670a68:c.instructions+=11;goto B670a68;
case 0x670a6b:c.instructions+=10;goto B670a6b;
case 0x670a6e:c.instructions+=9;goto B670a6e;
case 0x670a6f:c.instructions+=8;goto B670a6f;
case 0x670a72:c.instructions+=7;goto B670a72;
case 0x670a74:c.instructions+=6;goto B670a74;
case 0x670a77:c.instructions+=5;goto B670a77;
case 0x670a79:c.instructions+=4;goto B670a79;
case 0x670a7b:c.instructions+=3;goto B670a7b;
case 0x670a7c:c.instructions+=2;goto B670a7c;
case 0x670a7f:c.instructions+=1;goto B670a7f;
case 0x670a84:goto L670a84;
case 0x670a86:c.instructions+=2;goto B670a86;
case 0x670a89:c.instructions+=1;goto B670a89;
case 0x670a8f:goto L670a8f;
case 0x670a92:c.instructions+=6;goto B670a92;
case 0x670a95:c.instructions+=5;goto B670a95;
case 0x670a97:c.instructions+=4;goto B670a97;
case 0x670a9a:c.instructions+=3;goto B670a9a;
case 0x670a9c:c.instructions+=2;goto B670a9c;
case 0x670a9f:c.instructions+=1;goto B670a9f;
case 0x670aa1:goto L670aa1;
case 0x670aa4:c.instructions+=1;goto B670aa4;
case 0x670aa6:goto L670aa6;
case 0x670aa7:c.instructions+=4;goto B670aa7;
case 0x670aa8:c.instructions+=3;goto B670aa8;
case 0x670aab:c.instructions+=2;goto B670aab;
case 0x670aad:c.instructions+=1;goto B670aad;
case 0x670ab2:goto L670ab2;
case 0x670ab4:c.instructions+=2;goto B670ab4;
case 0x670ab7:c.instructions+=1;goto B670ab7;
case 0x670abd:goto L670abd;
case 0x670ac0:c.instructions+=7;goto B670ac0;
case 0x670ac3:c.instructions+=6;goto B670ac3;
case 0x670ac9:c.instructions+=5;goto B670ac9;
case 0x670acc:c.instructions+=4;goto B670acc;
case 0x670acf:c.instructions+=3;goto B670acf;
case 0x670ad2:c.instructions+=2;goto B670ad2;
case 0x670ad6:c.instructions+=1;goto B670ad6;
case 0x670ad8:goto L670ad8;
case 0x670adb:c.instructions+=1;goto B670adb;
case 0x670add:goto L670add;
case 0x670ae0:c.instructions+=1;goto B670ae0;
case 0x670ae3:goto L670ae3;
case 0x670ae6:c.instructions+=11;goto B670ae6;
case 0x670ae9:c.instructions+=10;goto B670ae9;
case 0x670aec:c.instructions+=9;goto B670aec;
case 0x670aed:c.instructions+=8;goto B670aed;
case 0x670af0:c.instructions+=7;goto B670af0;
case 0x670af2:c.instructions+=6;goto B670af2;
case 0x670af5:c.instructions+=5;goto B670af5;
case 0x670af7:c.instructions+=4;goto B670af7;
case 0x670af9:c.instructions+=3;goto B670af9;
case 0x670afa:c.instructions+=2;goto B670afa;
case 0x670afd:c.instructions+=1;goto B670afd;
case 0x670b02:goto L670b02;
case 0x670b04:c.instructions+=2;goto B670b04;
case 0x670b07:c.instructions+=1;goto B670b07;
case 0x670b0d:goto L670b0d;
case 0x670b10:goto L670b10;
case 0x670b12:c.instructions+=1;goto B670b12;
case 0x670b14:goto L670b14;
case 0x670b17:c.instructions+=4;goto B670b17;
case 0x670b1a:c.instructions+=3;goto B670b1a;
case 0x670b1e:c.instructions+=2;goto B670b1e;
case 0x670b24:c.instructions+=1;goto B670b24;
case 0x670b2a:goto L670b2a;
case 0x670b2c:c.instructions+=3;goto B670b2c;
case 0x670b32:c.instructions+=2;goto B670b32;
case 0x670b35:c.instructions+=1;goto B670b35;
case 0x670b3b:goto L670b3b;
case 0x670b3e:goto L670b3e;
case 0x670b44:c.instructions+=10;goto B670b44;
case 0x670b47:c.instructions+=9;goto B670b47;
case 0x670b4d:c.instructions+=8;goto B670b4d;
case 0x670b50:c.instructions+=7;goto B670b50;
case 0x670b53:c.instructions+=6;goto B670b53;
case 0x670b56:c.instructions+=5;goto B670b56;
case 0x670b58:c.instructions+=4;goto B670b58;
case 0x670b5b:c.instructions+=3;goto B670b5b;
case 0x670b5e:c.instructions+=2;goto B670b5e;
case 0x670b61:c.instructions+=1;goto B670b61;
case 0x670b63:goto L670b63;
case 0x670b67:c.instructions+=1;goto B670b67;
case 0x670b69:goto L670b69;
case 0x670b6c:c.instructions+=1;goto B670b6c;
case 0x670b6f:goto L670b6f;
case 0x670b72:c.instructions+=3;goto B670b72;
case 0x670b75:c.instructions+=2;goto B670b75;
case 0x670b77:c.instructions+=1;goto B670b77;
case 0x670b79:goto L670b79;
case 0x670b7c:c.instructions+=4;goto B670b7c;
case 0x670b82:c.instructions+=3;goto B670b82;
case 0x670b85:c.instructions+=2;goto B670b85;
case 0x670b89:c.instructions+=1;goto B670b89;
case 0x670b8b:goto L670b8b;
case 0x670b8e:c.instructions+=1;goto B670b8e;
case 0x670b90:goto L670b90;
case 0x670b93:c.instructions+=1;goto B670b93;
case 0x670b96:goto L670b96;
case 0x670b99:c.instructions+=11;goto B670b99;
case 0x670b9c:c.instructions+=10;goto B670b9c;
case 0x670b9f:c.instructions+=9;goto B670b9f;
case 0x670ba0:c.instructions+=8;goto B670ba0;
case 0x670ba3:c.instructions+=7;goto B670ba3;
case 0x670ba5:c.instructions+=6;goto B670ba5;
case 0x670ba8:c.instructions+=5;goto B670ba8;
case 0x670baa:c.instructions+=4;goto B670baa;
case 0x670bac:c.instructions+=3;goto B670bac;
case 0x670bad:c.instructions+=2;goto B670bad;
case 0x670bb0:c.instructions+=1;goto B670bb0;
case 0x670bb5:goto L670bb5;
case 0x670bb7:c.instructions+=2;goto B670bb7;
case 0x670bba:c.instructions+=1;goto B670bba;
case 0x670bc0:goto L670bc0;
case 0x670bc3:c.instructions+=3;goto B670bc3;
case 0x670bc6:c.instructions+=2;goto B670bc6;
case 0x670bc9:c.instructions+=1;goto B670bc9;
case 0x670bcb:goto L670bcb;
case 0x670bcd:c.instructions+=2;goto B670bcd;
case 0x670bd0:c.instructions+=1;goto B670bd0;
case 0x670bd2:goto L670bd2;
case 0x670bd4:c.instructions+=2;goto B670bd4;
case 0x670bd7:c.instructions+=1;goto B670bd7;
case 0x670bd9:goto L670bd9;
case 0x670bda:c.instructions+=4;goto B670bda;
case 0x670bdb:c.instructions+=3;goto B670bdb;
case 0x670bde:c.instructions+=2;goto B670bde;
case 0x670be0:c.instructions+=1;goto B670be0;
case 0x670be5:goto L670be5;
case 0x670be7:c.instructions+=2;goto B670be7;
case 0x670bea:c.instructions+=1;goto B670bea;
case 0x670bf0:goto L670bf0;
case 0x670bf3:c.instructions+=7;goto B670bf3;
case 0x670bf6:c.instructions+=6;goto B670bf6;
case 0x670bfc:c.instructions+=5;goto B670bfc;
case 0x670bff:c.instructions+=4;goto B670bff;
case 0x670c02:c.instructions+=3;goto B670c02;
case 0x670c05:c.instructions+=2;goto B670c05;
case 0x670c09:c.instructions+=1;goto B670c09;
case 0x670c0b:goto L670c0b;
case 0x670c0e:c.instructions+=1;goto B670c0e;
case 0x670c10:goto L670c10;
case 0x670c13:c.instructions+=1;goto B670c13;
case 0x670c16:goto L670c16;
case 0x670c19:c.instructions+=11;goto B670c19;
case 0x670c1c:c.instructions+=10;goto B670c1c;
case 0x670c1f:c.instructions+=9;goto B670c1f;
case 0x670c20:c.instructions+=8;goto B670c20;
case 0x670c23:c.instructions+=7;goto B670c23;
case 0x670c25:c.instructions+=6;goto B670c25;
case 0x670c28:c.instructions+=5;goto B670c28;
case 0x670c2a:c.instructions+=4;goto B670c2a;
case 0x670c2c:c.instructions+=3;goto B670c2c;
case 0x670c2d:c.instructions+=2;goto B670c2d;
case 0x670c30:c.instructions+=1;goto B670c30;
case 0x670c35:goto L670c35;
case 0x670c37:c.instructions+=2;goto B670c37;
case 0x670c3a:c.instructions+=1;goto B670c3a;
case 0x670c40:goto L670c40;
case 0x670c43:goto L670c43;
case 0x670c45:c.instructions+=1;goto B670c45;
case 0x670c47:goto L670c47;
case 0x670c4a:c.instructions+=3;goto B670c4a;
case 0x670c4d:c.instructions+=2;goto B670c4d;
case 0x670c50:c.instructions+=1;goto B670c50;
case 0x670c56:goto L670c56;
case 0x670c59:goto L670c59;
case 0x670c5c:c.instructions+=10;goto B670c5c;
case 0x670c5f:c.instructions+=9;goto B670c5f;
case 0x670c62:c.instructions+=8;goto B670c62;
case 0x670c65:c.instructions+=7;goto B670c65;
case 0x670c68:c.instructions+=6;goto B670c68;
case 0x670c6b:c.instructions+=5;goto B670c6b;
case 0x670c6e:c.instructions+=4;goto B670c6e;
case 0x670c71:c.instructions+=3;goto B670c71;
case 0x670c73:c.instructions+=2;goto B670c73;
case 0x670c76:c.instructions+=1;goto B670c76;
case 0x670c78:goto L670c78;
case 0x670c7c:c.instructions+=1;goto B670c7c;
case 0x670c7e:goto L670c7e;
case 0x670c81:c.instructions+=1;goto B670c81;
case 0x670c84:goto L670c84;
case 0x670c87:c.instructions+=3;goto B670c87;
case 0x670c8a:c.instructions+=2;goto B670c8a;
case 0x670c8c:c.instructions+=1;goto B670c8c;
case 0x670c8e:goto L670c8e;
case 0x670c91:c.instructions+=4;goto B670c91;
case 0x670c97:c.instructions+=3;goto B670c97;
case 0x670c9a:c.instructions+=2;goto B670c9a;
case 0x670c9e:c.instructions+=1;goto B670c9e;
case 0x670ca0:goto L670ca0;
case 0x670ca3:c.instructions+=1;goto B670ca3;
case 0x670ca5:goto L670ca5;
case 0x670ca8:c.instructions+=1;goto B670ca8;
case 0x670cab:goto L670cab;
case 0x670cae:c.instructions+=11;goto B670cae;
case 0x670cb1:c.instructions+=10;goto B670cb1;
case 0x670cb4:c.instructions+=9;goto B670cb4;
case 0x670cb5:c.instructions+=8;goto B670cb5;
case 0x670cb8:c.instructions+=7;goto B670cb8;
case 0x670cba:c.instructions+=6;goto B670cba;
case 0x670cbd:c.instructions+=5;goto B670cbd;
case 0x670cbf:c.instructions+=4;goto B670cbf;
case 0x670cc1:c.instructions+=3;goto B670cc1;
case 0x670cc2:c.instructions+=2;goto B670cc2;
case 0x670cc5:c.instructions+=1;goto B670cc5;
case 0x670cca:goto L670cca;
case 0x670ccc:c.instructions+=2;goto B670ccc;
case 0x670ccf:c.instructions+=1;goto B670ccf;
case 0x670cd5:goto L670cd5;
case 0x670cd8:c.instructions+=3;goto B670cd8;
case 0x670cdb:c.instructions+=2;goto B670cdb;
case 0x670cde:c.instructions+=1;goto B670cde;
case 0x670ce0:goto L670ce0;
case 0x670ce2:c.instructions+=2;goto B670ce2;
case 0x670ce5:c.instructions+=1;goto B670ce5;
case 0x670ce7:goto L670ce7;
case 0x670ce9:c.instructions+=2;goto B670ce9;
case 0x670cec:c.instructions+=1;goto B670cec;
case 0x670cee:goto L670cee;
case 0x670cef:c.instructions+=4;goto B670cef;
case 0x670cf0:c.instructions+=3;goto B670cf0;
case 0x670cf3:c.instructions+=2;goto B670cf3;
case 0x670cf5:c.instructions+=1;goto B670cf5;
case 0x670cfa:goto L670cfa;
case 0x670cfc:c.instructions+=2;goto B670cfc;
case 0x670cff:c.instructions+=1;goto B670cff;
case 0x670d05:goto L670d05;
case 0x670d08:c.instructions+=7;goto B670d08;
case 0x670d0b:c.instructions+=6;goto B670d0b;
case 0x670d11:c.instructions+=5;goto B670d11;
case 0x670d14:c.instructions+=4;goto B670d14;
case 0x670d17:c.instructions+=3;goto B670d17;
case 0x670d1a:c.instructions+=2;goto B670d1a;
case 0x670d1e:c.instructions+=1;goto B670d1e;
case 0x670d20:goto L670d20;
case 0x670d23:c.instructions+=1;goto B670d23;
case 0x670d25:goto L670d25;
case 0x670d28:c.instructions+=1;goto B670d28;
case 0x670d2b:goto L670d2b;
case 0x670d2e:c.instructions+=11;goto B670d2e;
case 0x670d31:c.instructions+=10;goto B670d31;
case 0x670d34:c.instructions+=9;goto B670d34;
case 0x670d35:c.instructions+=8;goto B670d35;
case 0x670d38:c.instructions+=7;goto B670d38;
case 0x670d3a:c.instructions+=6;goto B670d3a;
case 0x670d3d:c.instructions+=5;goto B670d3d;
case 0x670d3f:c.instructions+=4;goto B670d3f;
case 0x670d41:c.instructions+=3;goto B670d41;
case 0x670d42:c.instructions+=2;goto B670d42;
case 0x670d45:c.instructions+=1;goto B670d45;
case 0x670d4a:goto L670d4a;
case 0x670d4c:c.instructions+=2;goto B670d4c;
case 0x670d4f:c.instructions+=1;goto B670d4f;
case 0x670d51:goto L670d51;
case 0x670d54:goto L670d54;
case 0x670d56:c.instructions+=1;goto B670d56;
case 0x670d58:goto L670d58;
case 0x670d5b:c.instructions+=5;goto B670d5b;
case 0x670d5e:c.instructions+=4;goto B670d5e;
case 0x670d61:c.instructions+=3;goto B670d61;
case 0x670d65:c.instructions+=2;goto B670d65;
case 0x670d68:c.instructions+=1;goto B670d68;
case 0x670d6e:goto L670d6e;
case 0x670d71:c.instructions+=4;goto B670d71;
case 0x670d74:c.instructions+=3;goto B670d74;
case 0x670d7b:c.instructions+=2;goto B670d7b;
case 0x670d81:c.instructions+=1;goto B670d81;
case 0x670d87:goto L670d87;
case 0x670d8a:c.instructions+=2;goto B670d8a;
case 0x670d8c:c.instructions+=1;goto B670d8c;
case 0x670d8e:goto L670d8e;
case 0x670d90:c.instructions+=2;goto B670d90;
case 0x670d91:c.instructions+=1;goto B670d91;
case 0x670d93:goto L670d93;
case 0x670d95:c.instructions+=2;goto B670d95;
case 0x670d96:c.instructions+=1;goto B670d96;
case 0x670d99:goto L670d99;
case 0x670d9a:goto L670d9a;
case 0x670d9d:c.instructions+=3;goto B670d9d;
case 0x670d9e:c.instructions+=2;goto B670d9e;
case 0x670d9f:c.instructions+=1;goto B670d9f;
case 0x670da2:goto L670da2;
case 0x670da5:c.instructions+=2;goto B670da5;
case 0x670dab:c.instructions+=1;goto B670dab;
case 0x670db0:goto L670db0;
case 0x670db1:c.instructions+=1;goto B670db1;
case 0x670db2:goto L670db2;
case 0x670db4:c.instructions+=8;goto B670db4;
case 0x670db5:c.instructions+=7;goto B670db5;
case 0x670db7:c.instructions+=6;goto B670db7;
case 0x670db8:c.instructions+=5;goto B670db8;
case 0x670db9:c.instructions+=4;goto B670db9;
case 0x670dbc:c.instructions+=3;goto B670dbc;
case 0x670dbd:c.instructions+=2;goto B670dbd;
case 0x670dbf:c.instructions+=1;goto B670dbf;
case 0x670dc4:goto L670dc4;
case 0x670dc6:c.instructions+=3;goto B670dc6;
case 0x670dc7:c.instructions+=2;goto B670dc7;
case 0x670dca:c.instructions+=1;goto B670dca;
case 0x670dcc:goto L670dcc;
case 0x670dd1:c.instructions+=1;goto B670dd1;
case 0x670dd3:goto L670dd3;
case 0x670dd6:c.instructions+=1;goto B670dd6;
case 0x670dd8:goto L670dd8;
case 0x670dd9:c.instructions+=3;goto B670dd9;
case 0x670dda:c.instructions+=2;goto B670dda;
case 0x670ddb:c.instructions+=1;goto B670ddb;
case 0x670dde:goto L670dde;
case 0x670de0:c.instructions+=7;goto B670de0;
case 0x670de1:c.instructions+=6;goto B670de1;
case 0x670de3:c.instructions+=5;goto B670de3;
case 0x670de6:c.instructions+=4;goto B670de6;
case 0x670de9:c.instructions+=3;goto B670de9;
case 0x670dec:c.instructions+=2;goto B670dec;
case 0x670ded:c.instructions+=1;goto B670ded;
case 0x670df0:goto L670df0;
case 0x670df2:c.instructions+=9;goto B670df2;
case 0x670df3:c.instructions+=8;goto B670df3;
case 0x670df5:c.instructions+=7;goto B670df5;
case 0x670df8:c.instructions+=6;goto B670df8;
case 0x670dfb:c.instructions+=5;goto B670dfb;
case 0x670dfe:c.instructions+=4;goto B670dfe;
case 0x670dff:c.instructions+=3;goto B670dff;
case 0x670e02:c.instructions+=2;goto B670e02;
case 0x670e05:c.instructions+=1;goto B670e05;
case 0x670e07:goto L670e07;
case 0x670e09:c.instructions+=2;goto B670e09;
case 0x670e0b:c.instructions+=1;goto B670e0b;
case 0x670e0e:goto L670e0e;
case 0x670e10:c.instructions+=3;goto B670e10;
case 0x670e11:c.instructions+=2;goto B670e11;
case 0x670e12:c.instructions+=1;goto B670e12;
case 0x670e15:goto L670e15;
case 0x670e17:c.instructions+=6;goto B670e17;
case 0x670e18:c.instructions+=5;goto B670e18;
case 0x670e1a:c.instructions+=4;goto B670e1a;
case 0x670e1d:c.instructions+=3;goto B670e1d;
case 0x670e20:c.instructions+=2;goto B670e20;
case 0x670e21:c.instructions+=1;goto B670e21;
case 0x670e24:goto L670e24;
case 0x670e26:c.instructions+=5;goto B670e26;
case 0x670e27:c.instructions+=4;goto B670e27;
case 0x670e29:c.instructions+=3;goto B670e29;
case 0x670e2a:c.instructions+=2;goto B670e2a;
case 0x670e2c:c.instructions+=1;goto B670e2c;
case 0x670e31:goto L670e31;
case 0x670e35:c.instructions+=1;goto B670e35;
case 0x670e37:goto L670e37;
case 0x670e38:c.instructions+=1;goto B670e38;
case 0x670e3d:goto L670e3d;
case 0x670e3e:goto L670e3e;
case 0x670e40:c.instructions+=3;goto B670e40;
case 0x670e41:c.instructions+=2;goto B670e41;
case 0x670e42:c.instructions+=1;goto B670e42;
case 0x670e45:goto L670e45;
case 0x670e47:c.instructions+=11;goto B670e47;
case 0x670e48:c.instructions+=10;goto B670e48;
case 0x670e4a:c.instructions+=9;goto B670e4a;
case 0x670e4d:c.instructions+=8;goto B670e4d;
case 0x670e50:c.instructions+=7;goto B670e50;
case 0x670e51:c.instructions+=6;goto B670e51;
case 0x670e54:c.instructions+=5;goto B670e54;
case 0x670e55:c.instructions+=4;goto B670e55;
case 0x670e57:c.instructions+=3;goto B670e57;
case 0x670e58:c.instructions+=2;goto B670e58;
case 0x670e5d:c.instructions+=1;goto B670e5d;
case 0x670e5f:goto L670e5f;
case 0x670e61:goto L670e61;
case 0x670e63:goto L670e63;
case 0x670e66:c.instructions+=4;goto B670e66;
case 0x670e68:c.instructions+=3;goto B670e68;
case 0x670e69:c.instructions+=2;goto B670e69;
case 0x670e6e:c.instructions+=1;goto B670e6e;
case 0x670e70:goto L670e70;
case 0x670e72:goto L670e72;
case 0x670e74:goto L670e74;
case 0x670e77:c.instructions+=4;goto B670e77;
case 0x670e79:c.instructions+=3;goto B670e79;
case 0x670e7b:c.instructions+=2;goto B670e7b;
case 0x670e7c:c.instructions+=1;goto B670e7c;
case 0x670e7f:goto L670e7f;
case 0x670e81:c.instructions+=1;goto B670e81;
case 0x670e83:goto L670e83;
case 0x670e88:goto L670e88;
case 0x670e89:c.instructions+=3;goto B670e89;
case 0x670e8a:c.instructions+=2;goto B670e8a;
case 0x670e8b:c.instructions+=1;goto B670e8b;
case 0x670e8e:goto L670e8e;
case 0x670e90:c.instructions+=5;goto B670e90;
case 0x670e94:c.instructions+=4;goto B670e94;
case 0x670e98:c.instructions+=3;goto B670e98;
case 0x670e9e:c.instructions+=2;goto B670e9e;
case 0x670ea5:c.instructions+=1;goto B670ea5;
case 0x670ea6:goto L670ea6;
case 0x670ea8:c.instructions+=6;goto B670ea8;
case 0x670ea9:c.instructions+=5;goto B670ea9;
case 0x670eab:c.instructions+=4;goto B670eab;
case 0x670eac:c.instructions+=3;goto B670eac;
case 0x670eaf:c.instructions+=2;goto B670eaf;
case 0x670eb1:c.instructions+=1;goto B670eb1;
case 0x670eb3:goto L670eb3;
case 0x670eb8:c.instructions+=1;goto B670eb8;
case 0x670eba:goto L670eba;
case 0x670ebb:c.instructions+=2;goto B670ebb;
case 0x670ebd:c.instructions+=1;goto B670ebd;
case 0x670ec2:goto L670ec2;
case 0x670ec4:c.instructions+=2;goto B670ec4;
case 0x670ec5:c.instructions+=1;goto B670ec5;
case 0x670ec7:goto L670ec7;
case 0x670ec9:c.instructions+=1;goto B670ec9;
case 0x670ece:goto L670ece;
case 0x670ed0:c.instructions+=1;goto B670ed0;
case 0x670ed2:goto L670ed2;
case 0x670ed4:goto L670ed4;
case 0x670ed6:c.instructions+=1;goto B670ed6;
case 0x670ed8:goto L670ed8;
case 0x670edd:c.instructions+=1;goto B670edd;
case 0x670edf:goto L670edf;
case 0x670ee1:c.instructions+=4;goto B670ee1;
case 0x670ee2:c.instructions+=3;goto B670ee2;
case 0x670ee5:c.instructions+=2;goto B670ee5;
case 0x670ee7:c.instructions+=1;goto B670ee7;
case 0x670eea:goto L670eea;
case 0x670eec:c.instructions+=2;goto B670eec;
case 0x670eee:c.instructions+=1;goto B670eee;
case 0x670ef0:goto L670ef0;
case 0x670ef2:c.instructions+=3;goto B670ef2;
case 0x670ef4:c.instructions+=2;goto B670ef4;
case 0x670ef6:c.instructions+=1;goto B670ef6;
case 0x670ef9:goto L670ef9;
case 0x670efb:c.instructions+=1;goto B670efb;
case 0x670efd:goto L670efd;
case 0x670eff:c.instructions+=1;goto B670eff;
case 0x670f01:goto L670f01;
case 0x670f02:goto L670f02;
case 0x670f03:goto L670f03;
case 0x670f04:c.instructions+=2;goto B670f04;
case 0x670f05:c.instructions+=1;goto B670f05;
case 0x670f08:goto L670f08;
case 0x670f0a:c.instructions+=4;goto B670f0a;
case 0x670f0b:c.instructions+=3;goto B670f0b;
case 0x670f0d:c.instructions+=2;goto B670f0d;
case 0x670f0e:c.instructions+=1;goto B670f0e;
case 0x670f13:goto L670f13;
case 0x670f15:c.instructions+=5;goto B670f15;
case 0x670f17:c.instructions+=4;goto B670f17;
case 0x670f19:c.instructions+=3;goto B670f19;
case 0x670f1c:c.instructions+=2;goto B670f1c;
case 0x670f1f:c.instructions+=1;goto B670f1f;
case 0x670f20:goto L670f20;
case 0x670f22:c.instructions+=2;goto B670f22;
case 0x670f24:c.instructions+=1;goto B670f24;
case 0x670f26:goto L670f26;
case 0x670f27:c.instructions+=1;goto B670f27;
case 0x670f2d:goto L670f2d;
case 0x670f2e:goto L670f2e;
case 0x670f30:c.instructions+=5;goto B670f30;
case 0x670f31:c.instructions+=4;goto B670f31;
case 0x670f33:c.instructions+=3;goto B670f33;
case 0x670f35:c.instructions+=2;goto B670f35;
case 0x670f37:c.instructions+=1;goto B670f37;
case 0x670f39:goto L670f39;
case 0x670f3a:c.instructions+=1;goto B670f3a;
case 0x670f40:goto L670f40;
case 0x670f43:c.instructions+=5;goto B670f43;
case 0x670f47:c.instructions+=4;goto B670f47;
case 0x670f4b:c.instructions+=3;goto B670f4b;
case 0x670f4d:c.instructions+=2;goto B670f4d;
case 0x670f4e:c.instructions+=1;goto B670f4e;
case 0x670f4f:goto L670f4f;
case 0x670f51:c.instructions+=9;goto B670f51;
case 0x670f52:c.instructions+=8;goto B670f52;
case 0x670f54:c.instructions+=7;goto B670f54;
case 0x670f55:c.instructions+=6;goto B670f55;
case 0x670f56:c.instructions+=5;goto B670f56;
case 0x670f58:c.instructions+=4;goto B670f58;
case 0x670f5a:c.instructions+=3;goto B670f5a;
case 0x670f5c:c.instructions+=2;goto B670f5c;
case 0x670f5d:c.instructions+=1;goto B670f5d;
case 0x670f5f:goto L670f5f;
case 0x670f64:goto L670f64;
case 0x670f67:c.instructions+=2;goto B670f67;
case 0x670f6d:c.instructions+=1;goto B670f6d;
case 0x670f6f:goto L670f6f;
case 0x670f75:goto L670f75;
case 0x670f78:c.instructions+=1;goto B670f78;
case 0x670f7a:goto L670f7a;
case 0x670f7c:c.instructions+=3;goto B670f7c;
case 0x670f7f:c.instructions+=2;goto B670f7f;
case 0x670f82:c.instructions+=1;goto B670f82;
case 0x670f84:goto L670f84;
case 0x670f86:c.instructions+=2;goto B670f86;
case 0x670f88:c.instructions+=1;goto B670f88;
case 0x670f8a:goto L670f8a;
case 0x670f8c:c.instructions+=3;goto B670f8c;
case 0x670f8f:c.instructions+=2;goto B670f8f;
case 0x670f92:c.instructions+=1;goto B670f92;
case 0x670f94:goto L670f94;
case 0x670f96:c.instructions+=2;goto B670f96;
case 0x670f98:c.instructions+=1;goto B670f98;
case 0x670f9a:goto L670f9a;
case 0x670f9b:c.instructions+=2;goto B670f9b;
case 0x670f9e:c.instructions+=1;goto B670f9e;
case 0x670fa4:goto L670fa4;
case 0x670fa6:c.instructions+=2;goto B670fa6;
case 0x670fa9:c.instructions+=1;goto B670fa9;
case 0x670fab:goto L670fab;
case 0x670fac:c.instructions+=2;goto B670fac;
case 0x670faf:c.instructions+=1;goto B670faf;
case 0x670fb5:goto L670fb5;
case 0x670fb7:c.instructions+=2;goto B670fb7;
case 0x670fb9:c.instructions+=1;goto B670fb9;
case 0x670fbb:goto L670fbb;
case 0x670fbc:c.instructions+=1;goto B670fbc;
case 0x670fc2:goto L670fc2;
case 0x670fc4:c.instructions+=2;goto B670fc4;
case 0x670fc7:c.instructions+=1;goto B670fc7;
case 0x670fc9:goto L670fc9;
case 0x670fcf:goto L670fcf;
case 0x670fd4:c.instructions+=1;goto B670fd4;
case 0x670fd6:goto L670fd6;
case 0x670fd8:goto L670fd8;
case 0x670fd9:c.instructions+=4;goto B670fd9;
case 0x670fda:c.instructions+=3;goto B670fda;
case 0x670fdb:c.instructions+=2;goto B670fdb;
case 0x670fdc:c.instructions+=1;goto B670fdc;
case 0x670fdf:goto L670fdf;
case 0x670fe1:c.instructions+=8;goto B670fe1;
case 0x670fe2:c.instructions+=7;goto B670fe2;
case 0x670fe4:c.instructions+=6;goto B670fe4;
case 0x670fe7:c.instructions+=5;goto B670fe7;
case 0x670fec:c.instructions+=4;goto B670fec;
case 0x670fef:c.instructions+=3;goto B670fef;
case 0x670ff5:c.instructions+=2;goto B670ff5;
case 0x670ffa:c.instructions+=1;goto B670ffa;
default:missing_instruction(c.pc);}
B670000:L670000:{c.instructions+=9;NFSU2_TR(0x670000);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B670003:{NFSU2_TR(0x670003);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B670006:{NFSU2_TR(0x670006);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+4),(U+0),4);
}
B670009:{NFSU2_TR(0x670009);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67000a:{NFSU2_TR(0x67000a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B67000d:{NFSU2_TR(0x67000d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67000e:{NFSU2_TR(0x67000e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67000f:{NFSU2_TR(0x67000f);
__builtin_memmove((R+4),(R+12),4);
}
B670011:{NFSU2_TR(0x670011);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x670016ull));
TAIL_STATIC(0x65c033u,65c);
}
B670016:L670016:{c.instructions+=5;NFSU2_TR(0x670016);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B670019:{NFSU2_TR(0x670019);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67001c:{NFSU2_TR(0x67001c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B67001f:{NFSU2_TR(0x67001f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B670021:{NFSU2_TR(0x670021);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x66ff24u,66f);}
}
B670027:L670027:{c.instructions+=6;NFSU2_TR(0x670027);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B67002a:{NFSU2_TR(0x67002a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67002d:{NFSU2_TR(0x67002d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B670030:{NFSU2_TR(0x670030);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x38ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B670034:{NFSU2_TR(0x670034);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B670037:{NFSU2_TR(0x670037);
if(r1(R+512)){TAIL_STATIC(0x66ff12u,66f);}
}
B67003d:L67003d:{c.instructions+=4;NFSU2_TR(0x67003d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B670040:{NFSU2_TR(0x670040);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B670044:{NFSU2_TR(0x670044);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B67004a:{NFSU2_TR(0x67004a);
if(r1(R+512)){TAIL_STATIC(0x66fde3u,66f);}
}
B670050:L670050:{c.instructions+=3;NFSU2_TR(0x670050);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B670054:{NFSU2_TR(0x670054);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa8ull))));
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
B67005a:{NFSU2_TR(0x67005a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6703e0;}}
}
B670060:L670060:{c.instructions+=7;NFSU2_TR(0x670060);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B670063:{NFSU2_TR(0x670063);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B670065:{NFSU2_TR(0x670065);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B670068:{NFSU2_TR(0x670068);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67006b:{NFSU2_TR(0x67006b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B67006d:{NFSU2_TR(0x67006d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67006e:{NFSU2_TR(0x67006e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x670071ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B670071:L670071:{c.instructions+=4;NFSU2_TR(0x670071);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B670074:{NFSU2_TR(0x670074);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B670075:{NFSU2_TR(0x670075);
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
B670077:{NFSU2_TR(0x670077);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L67008d;}}
}
B670079:L670079:{c.instructions+=5;NFSU2_TR(0x670079);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B67007b:{NFSU2_TR(0x67007b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67007e:{NFSU2_TR(0x67007e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B670080:{NFSU2_TR(0x670080);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B670081:{NFSU2_TR(0x670081);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x670084ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B670084:L670084:{c.instructions+=3;NFSU2_TR(0x670084);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B670087:{NFSU2_TR(0x670087);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B67008a:{NFSU2_TR(0x67008a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67008d:L67008d:{c.instructions+=7;NFSU2_TR(0x67008d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B670090:{NFSU2_TR(0x670090);
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
B670091:{NFSU2_TR(0x670091);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B670093:{NFSU2_TR(0x670093);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B670096:{NFSU2_TR(0x670096);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B670098:{NFSU2_TR(0x670098);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B670099:{NFSU2_TR(0x670099);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67009cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B67009c:L67009c:{c.instructions+=4;NFSU2_TR(0x67009c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67009f:{NFSU2_TR(0x67009f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6700a0:{NFSU2_TR(0x6700a0);
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
B6700a2:{NFSU2_TR(0x6700a2);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6700b8;}}
}
B6700a4:L6700a4:{c.instructions+=5;NFSU2_TR(0x6700a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6700a6:{NFSU2_TR(0x6700a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6700a9:{NFSU2_TR(0x6700a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6700ab:{NFSU2_TR(0x6700ab);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6700ac:{NFSU2_TR(0x6700ac);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6700afull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6700af:L6700af:{c.instructions+=3;NFSU2_TR(0x6700af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6700b2:{NFSU2_TR(0x6700b2);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6700b5:{NFSU2_TR(0x6700b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6700b8:L6700b8:{c.instructions+=6;NFSU2_TR(0x6700b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6700bb:{NFSU2_TR(0x6700bb);
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
B6700bc:{NFSU2_TR(0x6700bc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B6700be:{NFSU2_TR(0x6700be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6700c0:{NFSU2_TR(0x6700c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6700c1:{NFSU2_TR(0x6700c1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6700c4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6700c4:L6700c4:{c.instructions+=2;NFSU2_TR(0x6700c4);
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
B6700c6:{NFSU2_TR(0x6700c6);
if(r1(R+512)){{goto L6703e0;}}
}
B6700cc:L6700cc:{c.instructions+=4;NFSU2_TR(0x6700cc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6700ce:{NFSU2_TR(0x6700ce);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6700d1:{NFSU2_TR(0x6700d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6700d4:{NFSU2_TR(0x6700d4);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6700f2;}}
}
B6700d6:L6700d6:{c.instructions+=4;NFSU2_TR(0x6700d6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6700d7:{NFSU2_TR(0x6700d7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6700d8:{NFSU2_TR(0x6700d8);
__builtin_memmove((R+4),(R+12),4);
}
B6700da:{NFSU2_TR(0x6700da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6700dfull));
TAIL_STATIC(0x65ba2cu,65b);
}
B6700df:L6700df:{c.instructions+=2;NFSU2_TR(0x6700df);
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
B6700e1:{NFSU2_TR(0x6700e1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L670638;}}
}
B6700e7:L6700e7:{c.instructions+=4;NFSU2_TR(0x6700e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6700ea:{NFSU2_TR(0x6700ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6700ed:{NFSU2_TR(0x6700ed);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6700f0:{NFSU2_TR(0x6700f0);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6700d6u);}goto L6700d6;}}
}
B6700f2:L6700f2:{c.instructions+=3;NFSU2_TR(0x6700f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6700f6:{NFSU2_TR(0x6700f6);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
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
B6700fa:{NFSU2_TR(0x6700fa);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L670310;}}
}
B670100:L670100:{c.instructions+=5;NFSU2_TR(0x670100);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B670102:{NFSU2_TR(0x670102);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B670105:{NFSU2_TR(0x670105);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B670107:{NFSU2_TR(0x670107);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B670108:{NFSU2_TR(0x670108);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67010bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B67010b:L67010b:{c.instructions+=4;NFSU2_TR(0x67010b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67010e:{NFSU2_TR(0x67010e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B67010f:{NFSU2_TR(0x67010f);
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
B670111:{NFSU2_TR(0x670111);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L670127;}}
}
B670113:L670113:{c.instructions+=5;NFSU2_TR(0x670113);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B670115:{NFSU2_TR(0x670115);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B670118:{NFSU2_TR(0x670118);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B67011a:{NFSU2_TR(0x67011a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67011b:{NFSU2_TR(0x67011b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67011eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B67011e:L67011e:{c.instructions+=3;NFSU2_TR(0x67011e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B670121:{NFSU2_TR(0x670121);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B670124:{NFSU2_TR(0x670124);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B670127:L670127:{c.instructions+=7;NFSU2_TR(0x670127);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67012a:{NFSU2_TR(0x67012a);
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
B67012b:{NFSU2_TR(0x67012b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B67012d:{NFSU2_TR(0x67012d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B670130:{NFSU2_TR(0x670130);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B670132:{NFSU2_TR(0x670132);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B670133:{NFSU2_TR(0x670133);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x670136ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B670136:L670136:{c.instructions+=4;NFSU2_TR(0x670136);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B670139:{NFSU2_TR(0x670139);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B67013a:{NFSU2_TR(0x67013a);
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
B67013c:{NFSU2_TR(0x67013c);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L670152;}}
}
B67013e:L67013e:{c.instructions+=5;NFSU2_TR(0x67013e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B670140:{NFSU2_TR(0x670140);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B670143:{NFSU2_TR(0x670143);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B670145:{NFSU2_TR(0x670145);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B670146:{NFSU2_TR(0x670146);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x670149ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B670149:L670149:{c.instructions+=3;NFSU2_TR(0x670149);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67014c:{NFSU2_TR(0x67014c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B67014f:{NFSU2_TR(0x67014f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B670152:L670152:{c.instructions+=7;NFSU2_TR(0x670152);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B670155:{NFSU2_TR(0x670155);
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
B670156:{NFSU2_TR(0x670156);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B670158:{NFSU2_TR(0x670158);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67015b:{NFSU2_TR(0x67015b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B67015d:{NFSU2_TR(0x67015d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67015e:{NFSU2_TR(0x67015e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x670161ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B670161:L670161:{c.instructions+=4;NFSU2_TR(0x670161);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B670164:{NFSU2_TR(0x670164);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B670165:{NFSU2_TR(0x670165);
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
B670167:{NFSU2_TR(0x670167);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L67017d;}}
}
B670169:L670169:{c.instructions+=5;NFSU2_TR(0x670169);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B67016b:{NFSU2_TR(0x67016b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67016e:{NFSU2_TR(0x67016e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B670170:{NFSU2_TR(0x670170);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B670171:{NFSU2_TR(0x670171);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x670174ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B670174:L670174:{c.instructions+=3;NFSU2_TR(0x670174);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B670177:{NFSU2_TR(0x670177);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B67017a:{NFSU2_TR(0x67017a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67017d:L67017d:{c.instructions+=7;NFSU2_TR(0x67017d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B670180:{NFSU2_TR(0x670180);
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
B670181:{NFSU2_TR(0x670181);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B670183:{NFSU2_TR(0x670183);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B670186:{NFSU2_TR(0x670186);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B670188:{NFSU2_TR(0x670188);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B670189:{NFSU2_TR(0x670189);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67018cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B67018c:L67018c:{c.instructions+=4;NFSU2_TR(0x67018c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67018f:{NFSU2_TR(0x67018f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B670190:{NFSU2_TR(0x670190);
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
B670192:{NFSU2_TR(0x670192);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6701a8;}}
}
B670194:L670194:{c.instructions+=5;NFSU2_TR(0x670194);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B670196:{NFSU2_TR(0x670196);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B670199:{NFSU2_TR(0x670199);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B67019b:{NFSU2_TR(0x67019b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67019c:{NFSU2_TR(0x67019c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67019full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B67019f:L67019f:{c.instructions+=3;NFSU2_TR(0x67019f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6701a2:{NFSU2_TR(0x6701a2);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6701a5:{NFSU2_TR(0x6701a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6701a8:L6701a8:{c.instructions+=7;NFSU2_TR(0x6701a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6701ab:{NFSU2_TR(0x6701ab);
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
B6701ac:{NFSU2_TR(0x6701ac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B6701ae:{NFSU2_TR(0x6701ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6701b1:{NFSU2_TR(0x6701b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6701b3:{NFSU2_TR(0x6701b3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6701b4:{NFSU2_TR(0x6701b4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6701b7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6701b7:L6701b7:{c.instructions+=4;NFSU2_TR(0x6701b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6701ba:{NFSU2_TR(0x6701ba);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6701bb:{NFSU2_TR(0x6701bb);
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
B6701bd:{NFSU2_TR(0x6701bd);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6701d3;}}
}
B6701bf:L6701bf:{c.instructions+=5;NFSU2_TR(0x6701bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6701c1:{NFSU2_TR(0x6701c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6701c4:{NFSU2_TR(0x6701c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6701c6:{NFSU2_TR(0x6701c6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6701c7:{NFSU2_TR(0x6701c7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6701caull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6701ca:L6701ca:{c.instructions+=3;NFSU2_TR(0x6701ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6701cd:{NFSU2_TR(0x6701cd);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6701d0:{NFSU2_TR(0x6701d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6701d3:L6701d3:{c.instructions+=6;NFSU2_TR(0x6701d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6701d6:{NFSU2_TR(0x6701d6);
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
B6701d7:{NFSU2_TR(0x6701d7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B6701d9:{NFSU2_TR(0x6701d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6701db:{NFSU2_TR(0x6701db);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6701dc:{NFSU2_TR(0x6701dc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6701dfull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6701df:L6701df:{c.instructions+=2;NFSU2_TR(0x6701df);
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
B6701e1:{NFSU2_TR(0x6701e1);
if(r1(R+512)){{goto L6703e0;}}
}
B6701e7:L6701e7:{c.instructions+=3;NFSU2_TR(0x6701e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6701ea:{NFSU2_TR(0x6701ea);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6701ed:{NFSU2_TR(0x6701ed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L670223;}}
}
B6701ef:L6701ef:{c.instructions+=3;NFSU2_TR(0x6701ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6701f2:{NFSU2_TR(0x6701f2);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x98ull))));
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
B6701f8:{NFSU2_TR(0x6701f8);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6703e0;}}
}
B6701fe:L6701fe:{c.instructions+=8;NFSU2_TR(0x6701fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B670204:{NFSU2_TR(0x670204);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B670207:{NFSU2_TR(0x670207);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B67020a:{NFSU2_TR(0x67020a);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B67020c:{NFSU2_TR(0x67020c);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x46ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B670210:{NFSU2_TR(0x670210);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B670213:{NFSU2_TR(0x670213);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B670215:{NFSU2_TR(0x670215);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6703e0;}}
}
B67021b:L67021b:{c.instructions+=3;NFSU2_TR(0x67021b);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B67021f:{NFSU2_TR(0x67021f);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B670221:{NFSU2_TR(0x670221);
{goto L67025e;}
}
B670223:L670223:{c.instructions+=2;NFSU2_TR(0x670223);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa0ull))));
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
B670229:{NFSU2_TR(0x670229);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6703e0;}}
}
B67022f:L67022f:{c.instructions+=6;NFSU2_TR(0x67022f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B670235:{NFSU2_TR(0x670235);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0xb4ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B67023b:{NFSU2_TR(0x67023b);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B67023d:{NFSU2_TR(0x67023d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B670240:{NFSU2_TR(0x670240);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
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
B670243:{NFSU2_TR(0x670243);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6703e0;}}
}
B670249:L670249:{c.instructions+=2;NFSU2_TR(0x670249);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xffffffffull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B67024d:{NFSU2_TR(0x67024d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6703e0;}}
}
B670253:L670253:{c.instructions+=3;NFSU2_TR(0x670253);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B670256:{NFSU2_TR(0x670256);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B670259:{NFSU2_TR(0x670259);
u8 U[14];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+4,u32(r2(U+12)));
}
B67025e:L67025e:{c.instructions+=6;NFSU2_TR(0x67025e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B670261:{NFSU2_TR(0x670261);
__builtin_memmove((R+8),(R+4),4);
}
B670263:{NFSU2_TR(0x670263);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B670266:{NFSU2_TR(0x670266);
u8 U[14];
w4(U+0,u32(u32(u32(0x36ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+8,u32(r2(U+12)));
}
B67026b:{NFSU2_TR(0x67026b);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
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
B67026e:{NFSU2_TR(0x67026e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6703e0;}}
}
B670274:L670274:{c.instructions+=10;NFSU2_TR(0x670274);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B670277:{NFSU2_TR(0x670277);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67027a:{NFSU2_TR(0x67027a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B67027d:{NFSU2_TR(0x67027d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B670280:{NFSU2_TR(0x670280);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B670284:{NFSU2_TR(0x670284);
u8 U[14];
w4(U+0,u32(u32(u32(0x52ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+0,u32(r2(U+12)));
}
B670289:{NFSU2_TR(0x670289);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x1cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B67028c:{NFSU2_TR(0x67028c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7b582cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B670292:{NFSU2_TR(0x670292);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B670295:{NFSU2_TR(0x670295);
if(r1(R+518)){{goto L6702e2;}}
}
B670297:L670297:{c.instructions+=2;NFSU2_TR(0x670297);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67029a:{NFSU2_TR(0x67029a);
if(r1(R+518)){{goto L6702e2;}}
}
B67029c:L67029c:{c.instructions+=2;NFSU2_TR(0x67029c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xeull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xeull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67029f:{NFSU2_TR(0x67029f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6702d1;}}
}
B6702a1:L6702a1:{c.instructions+=2;NFSU2_TR(0x6702a1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x10ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6702a4:{NFSU2_TR(0x6702a4);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6702d1;}}
}
B6702a6:L6702a6:{c.instructions+=7;NFSU2_TR(0x6702a6);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6702aa:{NFSU2_TR(0x6702aa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6702ab:{NFSU2_TR(0x6702ab);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6702ac:{NFSU2_TR(0x6702ac);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6702af:{NFSU2_TR(0x6702af);
__builtin_memmove((R+4),(R+12),4);
}
B6702b1:{NFSU2_TR(0x6702b1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6702b4:{NFSU2_TR(0x6702b4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6702bd;}}
}
B6702b6:L6702b6:{c.instructions+=1;NFSU2_TR(0x6702b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6702bbull));
TAIL_STATIC(0x66520du,665);
}
B6702bb:L6702bb:{c.instructions+=1;NFSU2_TR(0x6702bb);
{goto L6702f9;}
}
B6702bd:L6702bd:{c.instructions+=2;NFSU2_TR(0x6702bd);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6702c1:{NFSU2_TR(0x6702c1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6702ca;}}
}
B6702c3:L6702c3:{c.instructions+=1;NFSU2_TR(0x6702c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6702c8ull));
TAIL_STATIC(0x66c37eu,66c);
}
B6702c8:L6702c8:{c.instructions+=1;NFSU2_TR(0x6702c8);
{goto L6702f9;}
}
B6702ca:L6702ca:{c.instructions+=1;NFSU2_TR(0x6702ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6702cfull));
TAIL_STATIC(0x66c645u,66c);
}
B6702cf:L6702cf:{c.instructions+=1;NFSU2_TR(0x6702cf);
{goto L6702f9;}
}
B6702d1:L6702d1:{c.instructions+=6;NFSU2_TR(0x6702d1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6702d2:{NFSU2_TR(0x6702d2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6702d3:{NFSU2_TR(0x6702d3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6702d6:{NFSU2_TR(0x6702d6);
__builtin_memmove((R+4),(R+12),4);
}
B6702d8:{NFSU2_TR(0x6702d8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6702db:{NFSU2_TR(0x6702db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6702e0ull));
TAIL_STATIC(0x661a40u,661);
}
B6702e0:L6702e0:{c.instructions+=1;NFSU2_TR(0x6702e0);
{goto L6702f9;}
}
B6702e2:L6702e2:{c.instructions+=2;NFSU2_TR(0x6702e2);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6702e6:{NFSU2_TR(0x6702e6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6702f4;}}
}
B6702e8:L6702e8:{c.instructions+=6;NFSU2_TR(0x6702e8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6702e9:{NFSU2_TR(0x6702e9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6702ea:{NFSU2_TR(0x6702ea);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6702ed:{NFSU2_TR(0x6702ed);
__builtin_memmove((R+4),(R+12),4);
}
B6702ef:{NFSU2_TR(0x6702ef);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6702f2:{NFSU2_TR(0x6702f2);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6702c3u);}goto L6702c3;}
}
B6702f4:L6702f4:{c.instructions+=1;NFSU2_TR(0x6702f4);
w4(R+0,u32(0x80004005ull));
}
B6702f9:L6702f9:{c.instructions+=2;NFSU2_TR(0x6702f9);
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
B6702fb:{NFSU2_TR(0x6702fb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L670638;}}
}
B670301:L670301:{c.instructions+=4;NFSU2_TR(0x670301);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B670304:{NFSU2_TR(0x670304);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B670307:{NFSU2_TR(0x670307);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+14)));
w4(U+18,u32(u32(r4(R+4))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B67030a:{NFSU2_TR(0x67030a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x670100u);}goto L670100;}}
}
B670310:L670310:{c.instructions+=3;NFSU2_TR(0x670310);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B670312:{NFSU2_TR(0x670312);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B670315:{NFSU2_TR(0x670315);
if(r1(R+518)){{goto L670362;}}
}
B670317:L670317:{c.instructions+=3;NFSU2_TR(0x670317);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B670319:{NFSU2_TR(0x670319);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67031f:{NFSU2_TR(0x67031f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L670362;}}
}
B670321:L670321:{c.instructions+=9;NFSU2_TR(0x670321);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B670327:{NFSU2_TR(0x670327);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B67032d:{NFSU2_TR(0x67032d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B670330:{NFSU2_TR(0x670330);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B670333:{NFSU2_TR(0x670333);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B670335:{NFSU2_TR(0x670335);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B670338:{NFSU2_TR(0x670338);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B67033b:{NFSU2_TR(0x67033b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0x1ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B670342:{NFSU2_TR(0x670342);
if(r1(R+518)){{goto L670356;}}
}
B670344:L670344:{c.instructions+=4;NFSU2_TR(0x670344);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B670345:{NFSU2_TR(0x670345);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B670348:{NFSU2_TR(0x670348);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B670349:{NFSU2_TR(0x670349);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67034eull));
TAIL_STATIC(0x64259cu,642);
}
B67034e:L67034e:{c.instructions+=2;NFSU2_TR(0x67034e);
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
B670350:{NFSU2_TR(0x670350);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L670638;}}
}
B670356:L670356:{c.instructions+=4;NFSU2_TR(0x670356);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B670357:{NFSU2_TR(0x670357);
w4(R+4,u32(r2(R+24)));
}
B67035a:{NFSU2_TR(0x67035a);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B670360:{NFSU2_TR(0x670360);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x670321u);}goto L670321;}}
}
B670362:L670362:{c.instructions+=3;NFSU2_TR(0x670362);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B670366:{NFSU2_TR(0x670366);
u8 U[10];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(U+6))<(u16(0x0ull))));
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B67036b:{NFSU2_TR(0x67036b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6704f3;}}
}
B670371:L670371:{c.instructions+=5;NFSU2_TR(0x670371);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B670375:{NFSU2_TR(0x670375);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B670378:{NFSU2_TR(0x670378);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B67037b:{NFSU2_TR(0x67037b);
__builtin_memmove((R+4),(R+24),4);
}
B67037d:{NFSU2_TR(0x67037d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x670382ull));
TAIL_STATIC(0x65b733u,65b);
}
B670382:L670382:{c.instructions+=3;NFSU2_TR(0x670382);
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
B670384:{NFSU2_TR(0x670384);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B670387:{NFSU2_TR(0x670387);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L670638;}}
}
B67038d:L67038d:{c.instructions+=5;NFSU2_TR(0x67038d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B670390:{NFSU2_TR(0x670390);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B670392:{NFSU2_TR(0x670392);
__builtin_memmove((R+8),(R+4),4);
}
B670394:{NFSU2_TR(0x670394);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B670397:{NFSU2_TR(0x670397);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B670399:L670399:{c.instructions+=1;NFSU2_TR(0x670399);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L67039b;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x670399u);}goto L670399;}
}
B67039b:L67039b:{c.instructions+=2;NFSU2_TR(0x67039b);
__builtin_memmove((R+4),(R+8),4);
}
B67039d:{NFSU2_TR(0x67039d);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6703a0:L6703a0:{c.instructions+=1;NFSU2_TR(0x6703a0);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L6703a2;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6703a0u);}goto L6703a0;}
}
B6703a2:L6703a2:{c.instructions+=8;NFSU2_TR(0x6703a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6703a5:{NFSU2_TR(0x6703a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+0))));
}
B6703a7:{NFSU2_TR(0x6703a7);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6703a9:{NFSU2_TR(0x6703a9);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x36ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(U+6))<(r2(R+4))));
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+4))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B6703ad:{NFSU2_TR(0x6703ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6703b0:{NFSU2_TR(0x6703b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6703b3:{NFSU2_TR(0x6703b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6703b6:{NFSU2_TR(0x6703b6);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6704df;}}
}
B6703bc:L6703bc:{c.instructions+=9;NFSU2_TR(0x6703bc);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6703c0:{NFSU2_TR(0x6703c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6703c6:{NFSU2_TR(0x6703c6);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6703c9:{NFSU2_TR(0x6703c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B6703cc:{NFSU2_TR(0x6703cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6703cf:{NFSU2_TR(0x6703cf);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6703d2:{NFSU2_TR(0x6703d2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6703d5:{NFSU2_TR(0x6703d5);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6703d9:{NFSU2_TR(0x6703d9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6703ea;}}
}
B6703db:L6703db:{c.instructions+=2;NFSU2_TR(0x6703db);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6703de:{NFSU2_TR(0x6703de);
{goto L6703f0;}
}
B6703e0:L6703e0:{c.instructions+=2;NFSU2_TR(0x6703e0);
w4(R+0,u32(0x80004005ull));
}
B6703e5:{NFSU2_TR(0x6703e5);
{goto L670638;}
}
B6703ea:L6703ea:{c.instructions+=2;NFSU2_TR(0x6703ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6703ed:{NFSU2_TR(0x6703ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6703f0:L6703f0:{c.instructions+=8;NFSU2_TR(0x6703f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6703f3:{NFSU2_TR(0x6703f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B6703f6:{NFSU2_TR(0x6703f6);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B6703f8:{NFSU2_TR(0x6703f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6703fb:{NFSU2_TR(0x6703fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B670401:{NFSU2_TR(0x670401);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B670404:{NFSU2_TR(0x670404);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B670408:{NFSU2_TR(0x670408);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L67040f;}}
}
B67040a:L67040a:{c.instructions+=2;NFSU2_TR(0x67040a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67040d:{NFSU2_TR(0x67040d);
{goto L670415;}
}
B67040f:L67040f:{c.instructions+=2;NFSU2_TR(0x67040f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B670412:{NFSU2_TR(0x670412);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B670415:L670415:{c.instructions+=9;NFSU2_TR(0x670415);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B670418:{NFSU2_TR(0x670418);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B67041b:{NFSU2_TR(0x67041b);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B67041d:{NFSU2_TR(0x67041d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B670420:{NFSU2_TR(0x670420);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x52ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B670424:{NFSU2_TR(0x670424);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x1cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B670427:{NFSU2_TR(0x670427);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7b583cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67042d:{NFSU2_TR(0x67042d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xe000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B670433:{NFSU2_TR(0x670433);
if(r1(R+518)){{goto L670441;}}
}
B670435:L670435:{c.instructions+=2;NFSU2_TR(0x670435);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xf000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67043b:{NFSU2_TR(0x67043b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6704ce;}}
}
B670441:L670441:{c.instructions+=10;NFSU2_TR(0x670441);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B670445:{NFSU2_TR(0x670445);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B670448:{NFSU2_TR(0x670448);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+28),(U+4),2);
}
B67044c:{NFSU2_TR(0x67044c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B67044f:{NFSU2_TR(0x67044f);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),2);
s2(u32(r4(U+4)),r2(U+8));
}
B670453:{NFSU2_TR(0x670453);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B670456:{NFSU2_TR(0x670456);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B670459:{NFSU2_TR(0x670459);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+0))));
}
B67045b:{NFSU2_TR(0x67045b);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B67045d:{NFSU2_TR(0x67045d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6704b2;}}
}
B67045f:L67045f:{c.instructions+=4;NFSU2_TR(0x67045f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B670465:{NFSU2_TR(0x670465);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+28),(U+0),4);
}
B670467:{NFSU2_TR(0x670467);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67046b:{NFSU2_TR(0x67046b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L67047b;}}
}
B67046d:L67046d:{c.instructions+=5;NFSU2_TR(0x67046d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B670470:{NFSU2_TR(0x670470);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B670473:{NFSU2_TR(0x670473);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B670476:{NFSU2_TR(0x670476);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B670479:{NFSU2_TR(0x670479);
{goto L67049b;}
}
B67047b:L67047b:{c.instructions+=11;NFSU2_TR(0x67047b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B67047e:{NFSU2_TR(0x67047e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B670481:{NFSU2_TR(0x670481);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B670483:{NFSU2_TR(0x670483);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B670486:{NFSU2_TR(0x670486);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B670489:{NFSU2_TR(0x670489);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B67048c:{NFSU2_TR(0x67048c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67048f:{NFSU2_TR(0x67048f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B670492:{NFSU2_TR(0x670492);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B670495:{NFSU2_TR(0x670495);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B670498:{NFSU2_TR(0x670498);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B67049b:L67049b:{c.instructions+=7;NFSU2_TR(0x67049b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67049e:{NFSU2_TR(0x67049e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6704a1:{NFSU2_TR(0x6704a1);
u8 U[14];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((R+0),(U+12),2);
}
B6704a6:{NFSU2_TR(0x6704a6);
w2(R+0,u16(u32(r2(R+0))+u32(u16(0x1ull))));
}
B6704a8:{NFSU2_TR(0x6704a8);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))&u32(u16(0x0ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B6704ad:{NFSU2_TR(0x6704ad);
u8 U[2];
__builtin_memmove((U+0),(R+0),2);
s2(u32(r4(R+4)),r2(U+0));
}
B6704b0:{NFSU2_TR(0x6704b0);
{goto L6704ce;}
}
B6704b2:L6704b2:{c.instructions+=8;NFSU2_TR(0x6704b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6704b8:{NFSU2_TR(0x6704b8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6704bb:{NFSU2_TR(0x6704bb);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B6704bf:{NFSU2_TR(0x6704bf);
w2(R+8,u16(u32(r2(R+8))+u32(u16(0x1ull))));
}
B6704c1:{NFSU2_TR(0x6704c1);
u8 U[2];
__builtin_memmove((U+0),(R+8),2);
s2(u32(r4(R+4)),r2(U+0));
}
B6704c4:{NFSU2_TR(0x6704c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6704c7:{NFSU2_TR(0x6704c7);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B6704ca:{NFSU2_TR(0x6704ca);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B6704ce:L6704ce:{c.instructions+=4;NFSU2_TR(0x6704ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6704d1:{NFSU2_TR(0x6704d1);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B6704d5:{NFSU2_TR(0x6704d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x36ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(R+0))<(r2(U+6))));
}
B6704d9:{NFSU2_TR(0x6704d9);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6703bcu);}goto L6703bc;}}
}
B6704df:L6704df:{c.instructions+=4;NFSU2_TR(0x6704df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6704e2:{NFSU2_TR(0x6704e2);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B6704e6:{NFSU2_TR(0x6704e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(R+0))<(r2(U+6))));
}
B6704ea:{NFSU2_TR(0x6704ea);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x670371u);}goto L670371;}}
}
B6704f0:L6704f0:{c.instructions+=1;NFSU2_TR(0x6704f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6704f3:L6704f3:{c.instructions+=9;NFSU2_TR(0x6704f3);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))|u32(u16(0xffffull))));
s2(u32(r4(U+0)),r2(U+4));
}
B6704f9:{NFSU2_TR(0x6704f9);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))|u32(u16(0xffffull))));
s2(u32(r4(U+0)),r2(U+4));
}
B6704ff:{NFSU2_TR(0x6704ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x40ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B670506:{NFSU2_TR(0x670506);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B670508:{NFSU2_TR(0x670508);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B67050a:{NFSU2_TR(0x67050a);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B670510:{NFSU2_TR(0x670510);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B670513:{NFSU2_TR(0x670513);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x42ull))));
__builtin_memmove((U+4),(R+28),2);
s2(u32(r4(U+0)),r2(U+4));
}
B670517:{NFSU2_TR(0x670517);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L670556;}}
}
B670519:L670519:{c.instructions+=1;NFSU2_TR(0x670519);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B67051b:L67051b:{c.instructions+=8;NFSU2_TR(0x67051b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B670521:{NFSU2_TR(0x670521);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B670524:{NFSU2_TR(0x670524);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B670527:{NFSU2_TR(0x670527);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B670529:{NFSU2_TR(0x670529);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67052c:{NFSU2_TR(0x67052c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B67052e:{NFSU2_TR(0x67052e);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B670531:{NFSU2_TR(0x670531);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L670538;}}
}
B670533:L670533:{c.instructions+=2;NFSU2_TR(0x670533);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xeull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xeull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B670536:{NFSU2_TR(0x670536);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L67054a;}}
}
B670538:L670538:{c.instructions+=3;NFSU2_TR(0x670538);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B670539:{NFSU2_TR(0x670539);
__builtin_memmove((R+4),(R+12),4);
}
B67053b:{NFSU2_TR(0x67053b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x670540ull));
TAIL_STATIC(0x65ab14u,65a);
}
B670540:L670540:{c.instructions+=2;NFSU2_TR(0x670540);
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
B670542:{NFSU2_TR(0x670542);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L670638;}}
}
B670548:L670548:{c.instructions+=1;NFSU2_TR(0x670548);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B67054a:L67054a:{c.instructions+=4;NFSU2_TR(0x67054a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B67054b:{NFSU2_TR(0x67054b);
w4(R+4,u32(r2(R+24)));
}
B67054e:{NFSU2_TR(0x67054e);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B670554:{NFSU2_TR(0x670554);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67051bu);}goto L67051b;}}
}
B670556:L670556:{c.instructions+=3;NFSU2_TR(0x670556);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa8ull))));
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
B67055c:{NFSU2_TR(0x67055c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67055f:{NFSU2_TR(0x67055f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L670638;}}
}
B670565:L670565:{c.instructions+=1;NFSU2_TR(0x670565);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B670567:L670567:{c.instructions+=7;NFSU2_TR(0x670567);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B67056d:{NFSU2_TR(0x67056d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B670570:{NFSU2_TR(0x670570);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B670573:{NFSU2_TR(0x670573);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B670576:{NFSU2_TR(0x670576);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B670579:{NFSU2_TR(0x670579);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67057c:{NFSU2_TR(0x67057c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L670583;}}
}
B67057e:L67057e:{c.instructions+=2;NFSU2_TR(0x67057e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B670581:{NFSU2_TR(0x670581);
{goto L670589;}
}
B670583:L670583:{c.instructions+=2;NFSU2_TR(0x670583);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B670586:{NFSU2_TR(0x670586);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B670589:L670589:{c.instructions+=10;NFSU2_TR(0x670589);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67058c:{NFSU2_TR(0x67058c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B67058f:{NFSU2_TR(0x67058f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B670592:{NFSU2_TR(0x670592);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B670595:{NFSU2_TR(0x670595);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+4)),r4(U+0));
}
B670597:{NFSU2_TR(0x670597);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B67059d:{NFSU2_TR(0x67059d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6705a0:{NFSU2_TR(0x6705a0);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6705a2:{NFSU2_TR(0x6705a2);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6705a5:{NFSU2_TR(0x6705a5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6705ac;}}
}
B6705a7:L6705a7:{c.instructions+=2;NFSU2_TR(0x6705a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6705aa:{NFSU2_TR(0x6705aa);
{goto L6705b2;}
}
B6705ac:L6705ac:{c.instructions+=2;NFSU2_TR(0x6705ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6705af:{NFSU2_TR(0x6705af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6705b2:L6705b2:{c.instructions+=5;NFSU2_TR(0x6705b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6705b5:{NFSU2_TR(0x6705b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6705b8:{NFSU2_TR(0x6705b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B6705bb:{NFSU2_TR(0x6705bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B6705be:{NFSU2_TR(0x6705be);
{goto L670614;}
}
B6705c0:L6705c0:{c.instructions+=6;NFSU2_TR(0x6705c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6705c3:{NFSU2_TR(0x6705c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6705c9:{NFSU2_TR(0x6705c9);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6705cc:{NFSU2_TR(0x6705cc);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6705cf:{NFSU2_TR(0x6705cf);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6705d2:{NFSU2_TR(0x6705d2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6705d9;}}
}
B6705d4:L6705d4:{c.instructions+=2;NFSU2_TR(0x6705d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6705d7:{NFSU2_TR(0x6705d7);
{goto L6705df;}
}
B6705d9:L6705d9:{c.instructions+=2;NFSU2_TR(0x6705d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6705dc:{NFSU2_TR(0x6705dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6705df:L6705df:{c.instructions+=10;NFSU2_TR(0x6705df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6705e2:{NFSU2_TR(0x6705e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6705e5:{NFSU2_TR(0x6705e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B6705e8:{NFSU2_TR(0x6705e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B6705eb:{NFSU2_TR(0x6705eb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6705ed:{NFSU2_TR(0x6705ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6705f3:{NFSU2_TR(0x6705f3);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6705f6:{NFSU2_TR(0x6705f6);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6705f8:{NFSU2_TR(0x6705f8);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6705fb:{NFSU2_TR(0x6705fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L670602;}}
}
B6705fd:L6705fd:{c.instructions+=2;NFSU2_TR(0x6705fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B670600:{NFSU2_TR(0x670600);
{goto L670608;}
}
B670602:L670602:{c.instructions+=2;NFSU2_TR(0x670602);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B670605:{NFSU2_TR(0x670605);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B670608:L670608:{c.instructions+=4;NFSU2_TR(0x670608);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67060b:{NFSU2_TR(0x67060b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B67060e:{NFSU2_TR(0x67060e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B670611:{NFSU2_TR(0x670611);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B670614:L670614:{c.instructions+=4;NFSU2_TR(0x670614);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B670617:{NFSU2_TR(0x670617);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67061a:{NFSU2_TR(0x67061a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67061c:{NFSU2_TR(0x67061c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6705c0u);}goto L6705c0;}}
}
B67061e:L67061e:{c.instructions+=4;NFSU2_TR(0x67061e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B670621:{NFSU2_TR(0x670621);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B670625:{NFSU2_TR(0x670625);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+14)));
w4(U+18,u32(u32(r4(R+4))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B67062b:{NFSU2_TR(0x67062b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x670567u);}goto L670567;}}
}
B670631:L670631:{c.instructions+=1;NFSU2_TR(0x670631);
{goto L670638;}
}
B670633:L670633:{c.instructions+=1;NFSU2_TR(0x670633);
w4(R+0,u32(0x8876086cull));
}
B670638:L670638:{c.instructions+=7;NFSU2_TR(0x670638);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67063e:{NFSU2_TR(0x67063e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B67063f:{NFSU2_TR(0x67063f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B670640:{NFSU2_TR(0x670640);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B670646:{NFSU2_TR(0x670646);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B670647:{NFSU2_TR(0x670647);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B670648:{NFSU2_TR(0x670648);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B67064b:L67064b:{c.instructions+=8;NFSU2_TR(0x67064b);
__builtin_memmove((R+28),(R+28),4);
}
B67064d:{NFSU2_TR(0x67064d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67064e:{NFSU2_TR(0x67064e);
__builtin_memmove((R+20),(R+16),4);
}
B670650:{NFSU2_TR(0x670650);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B670653:{NFSU2_TR(0x670653);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B670654:{NFSU2_TR(0x670654);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B670656:{NFSU2_TR(0x670656);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+12)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B670659:{NFSU2_TR(0x670659);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L670667;}}
}
B67065b:L67065b:{c.instructions+=2;NFSU2_TR(0x67065b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
w4(U+4,u32(0x8876086cull));
s4(u32(r4(U+0)),r4(U+4));
}
B670662:{NFSU2_TR(0x670662);
{goto L670d9a;}
}
B670667:L670667:{c.instructions+=3;NFSU2_TR(0x670667);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B670668:{NFSU2_TR(0x670668);
u8 U[4];
w4(U+0,u32(0x130ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67066d:{NFSU2_TR(0x67066d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x670672ull));
TAIL_STATIC(0x575620u,575);
}
B670672:L670672:{c.instructions+=3;NFSU2_TR(0x670672);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B670674:{NFSU2_TR(0x670674);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B670675:{NFSU2_TR(0x670675);
if(r1(R+518)){{goto L670682;}}
}
B670677:L670677:{c.instructions+=2;NFSU2_TR(0x670677);
__builtin_memmove((R+4),(R+0),4);
}
B670679:{NFSU2_TR(0x670679);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67067eull));
TAIL_STATIC(0x66509eu,665);
}
B67067e:L67067e:{c.instructions+=2;NFSU2_TR(0x67067e);
__builtin_memmove((R+28),(R+0),4);
}
B670680:{NFSU2_TR(0x670680);
{goto L670684;}
}
B670682:L670682:{c.instructions+=1;NFSU2_TR(0x670682);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B670684:L670684:{c.instructions+=2;NFSU2_TR(0x670684);
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
B670686:{NFSU2_TR(0x670686);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L670694;}}
}
B670688:L670688:{c.instructions+=2;NFSU2_TR(0x670688);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
w4(U+4,u32(0x8007000eull));
s4(u32(r4(U+0)),r4(U+4));
}
B67068f:{NFSU2_TR(0x67068f);
{goto L670d99;}
}
B670694:L670694:{c.instructions+=9;NFSU2_TR(0x670694);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B670697:{NFSU2_TR(0x670697);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B670698:{NFSU2_TR(0x670698);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B67069b:{NFSU2_TR(0x67069b);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67069e:{NFSU2_TR(0x67069e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+4),(U+0),4);
}
B6706a1:{NFSU2_TR(0x6706a1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6706a2:{NFSU2_TR(0x6706a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6706a5:{NFSU2_TR(0x6706a5);
__builtin_memmove((R+4),(R+28),4);
}
B6706a7:{NFSU2_TR(0x6706a7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L670941;}}
}
B6706ad:L6706ad:{c.instructions+=5;NFSU2_TR(0x6706ad);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x119ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x2ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B6706b4:{NFSU2_TR(0x6706b4);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6706b7:{NFSU2_TR(0x6706b7);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6706ba:{NFSU2_TR(0x6706ba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6706bb:{NFSU2_TR(0x6706bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6706c0ull));
TAIL_STATIC(0x66f69cu,66f);
}
B6706c0:L6706c0:{c.instructions+=3;NFSU2_TR(0x6706c0);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6706c2:{NFSU2_TR(0x6706c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6706c5:{NFSU2_TR(0x6706c5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L670d8e;}}
}
B6706cb:L6706cb:{c.instructions+=3;NFSU2_TR(0x6706cb);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x119ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))&u32(u8(0xfdull))));
s1(u32(r4(U+0)),r1(U+4));
}
B6706d2:{NFSU2_TR(0x6706d2);
__builtin_memmove((R+4),(R+24),4);
}
B6706d4:{NFSU2_TR(0x6706d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6706d9ull));
TAIL_STATIC(0x65b92du,65b);
}
B6706d9:L6706d9:{c.instructions+=3;NFSU2_TR(0x6706d9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6706db:{NFSU2_TR(0x6706db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6706de:{NFSU2_TR(0x6706de);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L670d8e;}}
}
B6706e4:L6706e4:{c.instructions+=5;NFSU2_TR(0x6706e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6706e7:{NFSU2_TR(0x6706e7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6706e9:{NFSU2_TR(0x6706e9);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6706ef:{NFSU2_TR(0x6706ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6706f2:{NFSU2_TR(0x6706f2);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6707cd;}}
}
B6706f8:L6706f8:{c.instructions+=1;NFSU2_TR(0x6706f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6706fc:L6706fc:{c.instructions+=4;NFSU2_TR(0x6706fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B670702:{NFSU2_TR(0x670702);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B670705:{NFSU2_TR(0x670705);
u8 U[30];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+22),(U+12),4);
w1(R+512,u8((r4(U+22))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+22),u32(0x0ull)));
w4(U+26,u32(u32(r4(U+22))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+26))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+26))==(u32(0x0ull))));
w4(U+16,u32(u32(r4(U+26))&u32(u32(0xffull))));
w1(U+20,u8(__builtin_popcountll(u64(r4(U+16)))));
w1(U+21,u8(u32(r1(U+20))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+21))==(u8(0x0ull))));
}
B67070d:{NFSU2_TR(0x67070d);
if(r1(R+518)){{goto L670736;}}
}
B67070f:L67070f:{c.instructions+=8;NFSU2_TR(0x67070f);
u8 U[16];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B670716:{NFSU2_TR(0x670716);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67071c:{NFSU2_TR(0x67071c);
u8 U[16];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B670723:{NFSU2_TR(0x670723);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B670729:{NFSU2_TR(0x670729);
u8 U[16];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B670730:{NFSU2_TR(0x670730);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B670732:{NFSU2_TR(0x670732);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B670733:{NFSU2_TR(0x670733);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x670736ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B670736:L670736:{c.instructions+=3;NFSU2_TR(0x670736);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B670739:{NFSU2_TR(0x670739);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x8cull))));
}
B67073f:{NFSU2_TR(0x67073f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B670746:L670746:{c.instructions+=3;NFSU2_TR(0x670746);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67074c:{NFSU2_TR(0x67074c);
u8 U[26];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+18),(U+8),4);
w1(R+512,u8((r4(U+18))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+18),u32(0x0ull)));
w4(U+22,u32(u32(r4(U+18))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+22))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+22))==(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+22))&u32(u32(0xffull))));
w1(U+16,u8(__builtin_popcountll(u64(r4(U+12)))));
w1(U+17,u8(u32(r1(U+16))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+17))==(u8(0x0ull))));
}
B670750:{NFSU2_TR(0x670750);
if(r1(R+518)){{goto L67076d;}}
}
B670752:L670752:{c.instructions+=8;NFSU2_TR(0x670752);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B670755:{NFSU2_TR(0x670755);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67075b:{NFSU2_TR(0x67075b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B67075e:{NFSU2_TR(0x67075e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B670764:{NFSU2_TR(0x670764);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B670767:{NFSU2_TR(0x670767);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B670769:{NFSU2_TR(0x670769);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67076a:{NFSU2_TR(0x67076a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67076dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B67076d:L67076d:{c.instructions+=3;NFSU2_TR(0x67076d);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B670770:{NFSU2_TR(0x670770);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B670773:{NFSU2_TR(0x670773);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x670746u);}goto L670746;}}
}
B670775:L670775:{c.instructions+=3;NFSU2_TR(0x670775);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B670778:{NFSU2_TR(0x670778);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x94ull))));
}
B67077e:{NFSU2_TR(0x67077e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B670785:L670785:{c.instructions+=3;NFSU2_TR(0x670785);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67078b:{NFSU2_TR(0x67078b);
u8 U[26];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+18),(U+8),4);
w1(R+512,u8((r4(U+18))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+18),u32(0x0ull)));
w4(U+22,u32(u32(r4(U+18))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+22))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+22))==(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+22))&u32(u32(0xffull))));
w1(U+16,u8(__builtin_popcountll(u64(r4(U+12)))));
w1(U+17,u8(u32(r1(U+16))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+17))==(u8(0x0ull))));
}
B67078f:{NFSU2_TR(0x67078f);
if(r1(R+518)){{goto L6707ac;}}
}
B670791:L670791:{c.instructions+=8;NFSU2_TR(0x670791);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B670794:{NFSU2_TR(0x670794);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67079a:{NFSU2_TR(0x67079a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B67079d:{NFSU2_TR(0x67079d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6707a3:{NFSU2_TR(0x6707a3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6707a6:{NFSU2_TR(0x6707a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6707a8:{NFSU2_TR(0x6707a8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6707a9:{NFSU2_TR(0x6707a9);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6707acull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6707ac:L6707ac:{c.instructions+=3;NFSU2_TR(0x6707ac);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B6707af:{NFSU2_TR(0x6707af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6707b2:{NFSU2_TR(0x6707b2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x670785u);}goto L670785;}}
}
B6707b4:L6707b4:{c.instructions+=5;NFSU2_TR(0x6707b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6707b7:{NFSU2_TR(0x6707b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6707ba:{NFSU2_TR(0x6707ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0xb4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6707c1:{NFSU2_TR(0x6707c1);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6707c7:{NFSU2_TR(0x6707c7);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6706fcu);}goto L6706fc;}}
}
B6707cd:L6707cd:{c.instructions+=3;NFSU2_TR(0x6707cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6707d1:{NFSU2_TR(0x6707d1);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6707d5:{NFSU2_TR(0x6707d5);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6708c7;}}
}
B6707db:L6707db:{c.instructions+=1;NFSU2_TR(0x6707db);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6707dd:L6707dd:{c.instructions+=4;NFSU2_TR(0x6707dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6707e0:{NFSU2_TR(0x6707e0);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B6707e2:{NFSU2_TR(0x6707e2);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0xfull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6707e5:{NFSU2_TR(0x6707e5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L670849;}}
}
B6707e7:L6707e7:{c.instructions+=2;NFSU2_TR(0x6707e7);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
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
B6707eb:{NFSU2_TR(0x6707eb);
if(r1(R+518)){{goto L6707fa;}}
}
B6707ed:L6707ed:{c.instructions+=5;NFSU2_TR(0x6707ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6707f0:{NFSU2_TR(0x6707f0);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6707f4:{NFSU2_TR(0x6707f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6707f6:{NFSU2_TR(0x6707f6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6707f7:{NFSU2_TR(0x6707f7);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6707faull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6707fa:L6707fa:{c.instructions+=4;NFSU2_TR(0x6707fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6707fd:{NFSU2_TR(0x6707fd);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B670801:{NFSU2_TR(0x670801);
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
B670804:{NFSU2_TR(0x670804);
if(r1(R+518)){{goto L670816;}}
}
B670806:L670806:{c.instructions+=4;NFSU2_TR(0x670806);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B670808:{NFSU2_TR(0x670808);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B67080a:{NFSU2_TR(0x67080a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67080b:{NFSU2_TR(0x67080b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67080eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B67080e:L67080e:{c.instructions+=2;NFSU2_TR(0x67080e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B670811:{NFSU2_TR(0x670811);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(U+12,u32(u32(r4(U+12))&u32(u32(0x0ull))));
s4(u32(r4(U+8)),r4(U+12));
}
B670816:L670816:{c.instructions+=16;NFSU2_TR(0x670816);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B670819:{NFSU2_TR(0x670819);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B67081d:{NFSU2_TR(0x67081d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B670820:{NFSU2_TR(0x670820);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B670824:{NFSU2_TR(0x670824);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B670827:{NFSU2_TR(0x670827);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B67082b:{NFSU2_TR(0x67082b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67082e:{NFSU2_TR(0x67082e);
u8 U[4];
w4(U+0,u32(u32(u32(0x1eull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B670831:{NFSU2_TR(0x670831);
u8 U[12];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B670835:{NFSU2_TR(0x670835);
u8 U[4];
w4(U+0,u32(u32(u32(0x1eull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B670838:{NFSU2_TR(0x670838);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(U+0))));
}
B67083a:{NFSU2_TR(0x67083a);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x2ull))));
}
B67083d:{NFSU2_TR(0x67083d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))^u32(r4(R+4))));
s4(u32(r4(R+0)),r4(U+0));
}
B67083f:{NFSU2_TR(0x67083f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B670842:{NFSU2_TR(0x670842);
u8 U[12];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B670846:{NFSU2_TR(0x670846);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))|u32(u32(0x1ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B670849:L670849:{c.instructions+=4;NFSU2_TR(0x670849);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67084c:{NFSU2_TR(0x67084c);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B67084e:{NFSU2_TR(0x67084e);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x10ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B670851:{NFSU2_TR(0x670851);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6708b5;}}
}
B670853:L670853:{c.instructions+=2;NFSU2_TR(0x670853);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
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
B670857:{NFSU2_TR(0x670857);
if(r1(R+518)){{goto L670866;}}
}
B670859:L670859:{c.instructions+=5;NFSU2_TR(0x670859);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67085c:{NFSU2_TR(0x67085c);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B670860:{NFSU2_TR(0x670860);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B670862:{NFSU2_TR(0x670862);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B670863:{NFSU2_TR(0x670863);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x670866ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B670866:L670866:{c.instructions+=4;NFSU2_TR(0x670866);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B670869:{NFSU2_TR(0x670869);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B67086d:{NFSU2_TR(0x67086d);
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
B670870:{NFSU2_TR(0x670870);
if(r1(R+518)){{goto L670882;}}
}
B670872:L670872:{c.instructions+=4;NFSU2_TR(0x670872);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B670874:{NFSU2_TR(0x670874);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B670876:{NFSU2_TR(0x670876);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B670877:{NFSU2_TR(0x670877);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67087aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B67087a:L67087a:{c.instructions+=2;NFSU2_TR(0x67087a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67087d:{NFSU2_TR(0x67087d);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(U+12,u32(u32(r4(U+12))&u32(u32(0x0ull))));
s4(u32(r4(U+8)),r4(U+12));
}
B670882:L670882:{c.instructions+=16;NFSU2_TR(0x670882);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B670885:{NFSU2_TR(0x670885);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B670889:{NFSU2_TR(0x670889);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67088c:{NFSU2_TR(0x67088c);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B670890:{NFSU2_TR(0x670890);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B670893:{NFSU2_TR(0x670893);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B670897:{NFSU2_TR(0x670897);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67089a:{NFSU2_TR(0x67089a);
u8 U[4];
w4(U+0,u32(u32(u32(0x1eull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B67089d:{NFSU2_TR(0x67089d);
u8 U[12];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6708a1:{NFSU2_TR(0x6708a1);
u8 U[4];
w4(U+0,u32(u32(u32(0x1eull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B6708a4:{NFSU2_TR(0x6708a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(U+0))));
}
B6708a6:{NFSU2_TR(0x6708a6);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x2ull))));
}
B6708a9:{NFSU2_TR(0x6708a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))^u32(r4(R+4))));
s4(u32(r4(R+0)),r4(U+0));
}
B6708ab:{NFSU2_TR(0x6708ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6708ae:{NFSU2_TR(0x6708ae);
u8 U[12];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6708b2:{NFSU2_TR(0x6708b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))|u32(u32(0x1ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6708b5:L6708b5:{c.instructions+=5;NFSU2_TR(0x6708b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6708b8:{NFSU2_TR(0x6708b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6708bb:{NFSU2_TR(0x6708bb);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x18ull))));
}
B6708be:{NFSU2_TR(0x6708be);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6708c1:{NFSU2_TR(0x6708c1);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6707ddu);}goto L6707dd;}}
}
B6708c7:L6708c7:{c.instructions+=5;NFSU2_TR(0x6708c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x104ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6708cd:{NFSU2_TR(0x6708cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6708cf:{NFSU2_TR(0x6708cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x104ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6708d5:{NFSU2_TR(0x6708d5);
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
B6708d8:{NFSU2_TR(0x6708d8);
if(r1(R+518)){{goto L6708e2;}}
}
B6708da:L6708da:{c.instructions+=4;NFSU2_TR(0x6708da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6708dc:{NFSU2_TR(0x6708dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6708de:{NFSU2_TR(0x6708de);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6708df:{NFSU2_TR(0x6708df);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6708e2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6708e2:L6708e2:{c.instructions+=2;NFSU2_TR(0x6708e2);
__builtin_memmove((R+4),(R+28),4);
}
B6708e4:{NFSU2_TR(0x6708e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6708e9ull));
TAIL_STATIC(0x66afe6u,66a);
}
B6708e9:L6708e9:{c.instructions+=4;NFSU2_TR(0x6708e9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6708eb:{NFSU2_TR(0x6708eb);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6708ed:{NFSU2_TR(0x6708ed);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6708f0:{NFSU2_TR(0x6708f0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L670971;}}
}
B6708f2:L6708f2:{c.instructions+=4;NFSU2_TR(0x6708f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6708f5:{NFSU2_TR(0x6708f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6708f8:{NFSU2_TR(0x6708f8);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0xfull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6708fb:{NFSU2_TR(0x6708fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L670914;}}
}
B6708fd:L6708fd:{c.instructions+=8;NFSU2_TR(0x6708fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B670900:{NFSU2_TR(0x670900);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B670903:{NFSU2_TR(0x670903);
u8 U[4];
w4(U+0,u32(u32(u32(0x1eull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B670906:{NFSU2_TR(0x670906);
u8 U[4];
w4(U+0,u32(u32(u32(0x1eull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B670909:{NFSU2_TR(0x670909);
u8 U[12];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B67090d:{NFSU2_TR(0x67090d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(R+8,u32(u32(r4(R+8))^u32(r4(U+0))));
}
B67090f:{NFSU2_TR(0x67090f);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x2ull))));
}
B670912:{NFSU2_TR(0x670912);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))^u32(r4(R+8))));
s4(u32(r4(R+4)),r4(U+0));
}
B670914:L670914:{c.instructions+=4;NFSU2_TR(0x670914);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B670917:{NFSU2_TR(0x670917);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B67091a:{NFSU2_TR(0x67091a);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x10ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B67091d:{NFSU2_TR(0x67091d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L670936;}}
}
B67091f:L67091f:{c.instructions+=8;NFSU2_TR(0x67091f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B670922:{NFSU2_TR(0x670922);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B670925:{NFSU2_TR(0x670925);
u8 U[4];
w4(U+0,u32(u32(u32(0x1eull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B670928:{NFSU2_TR(0x670928);
u8 U[4];
w4(U+0,u32(u32(u32(0x1eull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B67092b:{NFSU2_TR(0x67092b);
u8 U[12];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B67092f:{NFSU2_TR(0x67092f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(R+8,u32(u32(r4(R+8))^u32(r4(U+0))));
}
B670931:{NFSU2_TR(0x670931);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x2ull))));
}
B670934:{NFSU2_TR(0x670934);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))^u32(r4(R+8))));
s4(u32(r4(R+4)),r4(U+0));
}
B670936:L670936:{c.instructions+=4;NFSU2_TR(0x670936);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B670937:{NFSU2_TR(0x670937);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
}
B67093a:{NFSU2_TR(0x67093a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B67093d:{NFSU2_TR(0x67093d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6708f2u);}goto L6708f2;}}
}
B67093f:L67093f:{c.instructions+=1;NFSU2_TR(0x67093f);
{goto L670971;}
}
B670941:L670941:{c.instructions+=4;NFSU2_TR(0x670941);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B670944:{NFSU2_TR(0x670944);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B670947:{NFSU2_TR(0x670947);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B670948:{NFSU2_TR(0x670948);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67094dull));
TAIL_STATIC(0x66f69cu,66f);
}
B67094d:L67094d:{c.instructions+=3;NFSU2_TR(0x67094d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67094f:{NFSU2_TR(0x67094f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B670952:{NFSU2_TR(0x670952);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L670d8e;}}
}
B670958:L670958:{c.instructions+=2;NFSU2_TR(0x670958);
__builtin_memmove((R+4),(R+24),4);
}
B67095a:{NFSU2_TR(0x67095a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67095full));
TAIL_STATIC(0x65b92du,65b);
}
B67095f:L67095f:{c.instructions+=3;NFSU2_TR(0x67095f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B670961:{NFSU2_TR(0x670961);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B670964:{NFSU2_TR(0x670964);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L670d8e;}}
}
B67096a:L67096a:{c.instructions+=2;NFSU2_TR(0x67096a);
__builtin_memmove((R+4),(R+28),4);
}
B67096c:{NFSU2_TR(0x67096c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x670971ull));
TAIL_STATIC(0x66afe6u,66a);
}
B670971:L670971:{c.instructions+=3;NFSU2_TR(0x670971);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B670975:{NFSU2_TR(0x670975);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67097c:{NFSU2_TR(0x67097c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L670b2a;}}
}
B670982:L670982:{c.instructions+=1;NFSU2_TR(0x670982);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B670986:L670986:{c.instructions+=11;NFSU2_TR(0x670986);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B67098c:{NFSU2_TR(0x67098c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B67098f:{NFSU2_TR(0x67098f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B670995:{NFSU2_TR(0x670995);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B670998:{NFSU2_TR(0x670998);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67099e:{NFSU2_TR(0x67099e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B6709a1:{NFSU2_TR(0x6709a1);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6709a4:{NFSU2_TR(0x6709a4);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6709a8:{NFSU2_TR(0x6709a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6709ab:{NFSU2_TR(0x6709ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6709ae:{NFSU2_TR(0x6709ae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6709b5;}}
}
B6709b0:L6709b0:{c.instructions+=2;NFSU2_TR(0x6709b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6709b3:{NFSU2_TR(0x6709b3);
{goto L6709bb;}
}
B6709b5:L6709b5:{c.instructions+=2;NFSU2_TR(0x6709b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6709b8:{NFSU2_TR(0x6709b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6709bb:L6709bb:{c.instructions+=4;NFSU2_TR(0x6709bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6709be:{NFSU2_TR(0x6709be);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6709c1:{NFSU2_TR(0x6709c1);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6709c5:{NFSU2_TR(0x6709c5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6709cd;}}
}
B6709c7:L6709c7:{c.instructions+=2;NFSU2_TR(0x6709c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6709cb:{NFSU2_TR(0x6709cb);
{goto L6709e8;}
}
B6709cd:L6709cd:{c.instructions+=3;NFSU2_TR(0x6709cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6709d0:{NFSU2_TR(0x6709d0);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6709d4:{NFSU2_TR(0x6709d4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6709db;}}
}
B6709d6:L6709d6:{c.instructions+=2;NFSU2_TR(0x6709d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6709d9:{NFSU2_TR(0x6709d9);
{goto L6709e1;}
}
B6709db:L6709db:{c.instructions+=2;NFSU2_TR(0x6709db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6709de:{NFSU2_TR(0x6709de);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6709e1:L6709e1:{c.instructions+=2;NFSU2_TR(0x6709e1);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B6709e5:{NFSU2_TR(0x6709e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6709e8:L6709e8:{c.instructions+=3;NFSU2_TR(0x6709e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6709eb:{NFSU2_TR(0x6709eb);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0x2ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6709f2:{NFSU2_TR(0x6709f2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L670a8f;}}
}
B6709f8:L6709f8:{c.instructions+=5;NFSU2_TR(0x6709f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6709fb:{NFSU2_TR(0x6709fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B670a01:{NFSU2_TR(0x670a01);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B670a04:{NFSU2_TR(0x670a04);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B670a08:{NFSU2_TR(0x670a08);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L670a0f;}}
}
B670a0a:L670a0a:{c.instructions+=2;NFSU2_TR(0x670a0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B670a0d:{NFSU2_TR(0x670a0d);
{goto L670a15;}
}
B670a0f:L670a0f:{c.instructions+=2;NFSU2_TR(0x670a0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B670a12:{NFSU2_TR(0x670a12);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B670a15:L670a15:{c.instructions+=11;NFSU2_TR(0x670a15);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B670a18:{NFSU2_TR(0x670a18);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B670a1b:{NFSU2_TR(0x670a1b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B670a1c:{NFSU2_TR(0x670a1c);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B670a1f:{NFSU2_TR(0x670a1f);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B670a21:{NFSU2_TR(0x670a21);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B670a24:{NFSU2_TR(0x670a24);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B670a26:{NFSU2_TR(0x670a26);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B670a27:{NFSU2_TR(0x670a27);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B670a2a:{NFSU2_TR(0x670a2a);
__builtin_memmove((R+4),(R+28),4);
}
B670a2c:{NFSU2_TR(0x670a2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x670a31ull));
TAIL_STATIC(0x661fa3u,661);
}
B670a31:L670a31:{c.instructions+=3;NFSU2_TR(0x670a31);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B670a33:{NFSU2_TR(0x670a33);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B670a36:{NFSU2_TR(0x670a36);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L670d8e;}}
}
B670a3c:L670a3c:{c.instructions+=3;NFSU2_TR(0x670a3c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B670a3f:{NFSU2_TR(0x670a3f);
__builtin_memmove((R+4),(R+28),4);
}
B670a41:{NFSU2_TR(0x670a41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x670a46ull));
TAIL_STATIC(0x66055cu,660);
}
B670a46:L670a46:{c.instructions+=1;NFSU2_TR(0x670a46);
{goto L670a84;}
}
B670a48:L670a48:{c.instructions+=5;NFSU2_TR(0x670a48);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B670a4b:{NFSU2_TR(0x670a4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B670a51:{NFSU2_TR(0x670a51);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B670a54:{NFSU2_TR(0x670a54);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B670a58:{NFSU2_TR(0x670a58);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L670a5f;}}
}
B670a5a:L670a5a:{c.instructions+=2;NFSU2_TR(0x670a5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B670a5d:{NFSU2_TR(0x670a5d);
{goto L670a65;}
}
B670a5f:L670a5f:{c.instructions+=2;NFSU2_TR(0x670a5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B670a62:{NFSU2_TR(0x670a62);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B670a65:L670a65:{c.instructions+=12;NFSU2_TR(0x670a65);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B670a68:{NFSU2_TR(0x670a68);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B670a6b:{NFSU2_TR(0x670a6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B670a6e:{NFSU2_TR(0x670a6e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B670a6f:{NFSU2_TR(0x670a6f);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B670a72:{NFSU2_TR(0x670a72);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B670a74:{NFSU2_TR(0x670a74);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B670a77:{NFSU2_TR(0x670a77);
__builtin_memmove((R+4),(R+28),4);
}
B670a79:{NFSU2_TR(0x670a79);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B670a7b:{NFSU2_TR(0x670a7b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B670a7c:{NFSU2_TR(0x670a7c);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B670a7f:{NFSU2_TR(0x670a7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x670a84ull));
TAIL_STATIC(0x661fa3u,661);
}
B670a84:L670a84:{c.instructions+=3;NFSU2_TR(0x670a84);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B670a86:{NFSU2_TR(0x670a86);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B670a89:{NFSU2_TR(0x670a89);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L670d8e;}}
}
B670a8f:L670a8f:{c.instructions+=7;NFSU2_TR(0x670a8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B670a92:{NFSU2_TR(0x670a92);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B670a95:{NFSU2_TR(0x670a95);
__builtin_memmove((R+4),(R+0),4);
}
B670a97:{NFSU2_TR(0x670a97);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B670a9a:{NFSU2_TR(0x670a9a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B670a9c:{NFSU2_TR(0x670a9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B670a9f:{NFSU2_TR(0x670a9f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x670a48u);}goto L670a48;}}
}
B670aa1:L670aa1:{c.instructions+=2;NFSU2_TR(0x670aa1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B670aa4:{NFSU2_TR(0x670aa4);
{goto L670b10;}
}
B670aa6:L670aa6:{c.instructions+=5;NFSU2_TR(0x670aa6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B670aa7:{NFSU2_TR(0x670aa7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B670aa8:{NFSU2_TR(0x670aa8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B670aab:{NFSU2_TR(0x670aab);
__builtin_memmove((R+4),(R+24),4);
}
B670aad:{NFSU2_TR(0x670aad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x670ab2ull));
TAIL_STATIC(0x65c312u,65c);
}
B670ab2:L670ab2:{c.instructions+=3;NFSU2_TR(0x670ab2);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B670ab4:{NFSU2_TR(0x670ab4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B670ab7:{NFSU2_TR(0x670ab7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L670d8e;}}
}
B670abd:L670abd:{c.instructions+=8;NFSU2_TR(0x670abd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B670ac0:{NFSU2_TR(0x670ac0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B670ac3:{NFSU2_TR(0x670ac3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B670ac9:{NFSU2_TR(0x670ac9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B670acc:{NFSU2_TR(0x670acc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B670acf:{NFSU2_TR(0x670acf);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B670ad2:{NFSU2_TR(0x670ad2);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B670ad6:{NFSU2_TR(0x670ad6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L670add;}}
}
B670ad8:L670ad8:{c.instructions+=2;NFSU2_TR(0x670ad8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B670adb:{NFSU2_TR(0x670adb);
{goto L670ae3;}
}
B670add:L670add:{c.instructions+=2;NFSU2_TR(0x670add);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B670ae0:{NFSU2_TR(0x670ae0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B670ae3:L670ae3:{c.instructions+=12;NFSU2_TR(0x670ae3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B670ae6:{NFSU2_TR(0x670ae6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B670ae9:{NFSU2_TR(0x670ae9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B670aec:{NFSU2_TR(0x670aec);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B670aed:{NFSU2_TR(0x670aed);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B670af0:{NFSU2_TR(0x670af0);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B670af2:{NFSU2_TR(0x670af2);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B670af5:{NFSU2_TR(0x670af5);
__builtin_memmove((R+4),(R+28),4);
}
B670af7:{NFSU2_TR(0x670af7);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B670af9:{NFSU2_TR(0x670af9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B670afa:{NFSU2_TR(0x670afa);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B670afd:{NFSU2_TR(0x670afd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x670b02ull));
TAIL_STATIC(0x661fa3u,661);
}
B670b02:L670b02:{c.instructions+=3;NFSU2_TR(0x670b02);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B670b04:{NFSU2_TR(0x670b04);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B670b07:{NFSU2_TR(0x670b07);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L670d8e;}}
}
B670b0d:L670b0d:{c.instructions+=1;NFSU2_TR(0x670b0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B670b10:L670b10:{c.instructions+=2;NFSU2_TR(0x670b10);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B670b12:{NFSU2_TR(0x670b12);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x670aa6u);}goto L670aa6;}}
}
B670b14:L670b14:{c.instructions+=5;NFSU2_TR(0x670b14);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B670b17:{NFSU2_TR(0x670b17);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B670b1a:{NFSU2_TR(0x670b1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x50ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B670b1e:{NFSU2_TR(0x670b1e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B670b24:{NFSU2_TR(0x670b24);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x670986u);}goto L670986;}}
}
B670b2a:L670b2a:{c.instructions+=4;NFSU2_TR(0x670b2a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B670b2c:{NFSU2_TR(0x670b2c);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B670b32:{NFSU2_TR(0x670b32);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B670b35:{NFSU2_TR(0x670b35);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L670d87;}}
}
B670b3b:L670b3b:{c.instructions+=1;NFSU2_TR(0x670b3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B670b3e:L670b3e:{c.instructions+=11;NFSU2_TR(0x670b3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B670b44:{NFSU2_TR(0x670b44);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B670b47:{NFSU2_TR(0x670b47);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B670b4d:{NFSU2_TR(0x670b4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B670b50:{NFSU2_TR(0x670b50);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B670b53:{NFSU2_TR(0x670b53);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B670b56:{NFSU2_TR(0x670b56);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+12))));
}
B670b58:{NFSU2_TR(0x670b58);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B670b5b:{NFSU2_TR(0x670b5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B670b5e:{NFSU2_TR(0x670b5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B670b61:{NFSU2_TR(0x670b61);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L670b69;}}
}
B670b63:L670b63:{c.instructions+=2;NFSU2_TR(0x670b63);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B670b67:{NFSU2_TR(0x670b67);
{goto L670b6f;}
}
B670b69:L670b69:{c.instructions+=2;NFSU2_TR(0x670b69);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B670b6c:{NFSU2_TR(0x670b6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B670b6f:L670b6f:{c.instructions+=4;NFSU2_TR(0x670b6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B670b72:{NFSU2_TR(0x670b72);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
}
B670b75:{NFSU2_TR(0x670b75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B670b77:{NFSU2_TR(0x670b77);
{goto L670bcb;}
}
B670b79:L670b79:{c.instructions+=5;NFSU2_TR(0x670b79);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B670b7c:{NFSU2_TR(0x670b7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B670b82:{NFSU2_TR(0x670b82);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B670b85:{NFSU2_TR(0x670b85);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B670b89:{NFSU2_TR(0x670b89);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L670b90;}}
}
B670b8b:L670b8b:{c.instructions+=2;NFSU2_TR(0x670b8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B670b8e:{NFSU2_TR(0x670b8e);
{goto L670b96;}
}
B670b90:L670b90:{c.instructions+=2;NFSU2_TR(0x670b90);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B670b93:{NFSU2_TR(0x670b93);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B670b96:L670b96:{c.instructions+=12;NFSU2_TR(0x670b96);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B670b99:{NFSU2_TR(0x670b99);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B670b9c:{NFSU2_TR(0x670b9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B670b9f:{NFSU2_TR(0x670b9f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B670ba0:{NFSU2_TR(0x670ba0);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B670ba3:{NFSU2_TR(0x670ba3);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B670ba5:{NFSU2_TR(0x670ba5);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B670ba8:{NFSU2_TR(0x670ba8);
__builtin_memmove((R+4),(R+28),4);
}
B670baa:{NFSU2_TR(0x670baa);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B670bac:{NFSU2_TR(0x670bac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B670bad:{NFSU2_TR(0x670bad);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B670bb0:{NFSU2_TR(0x670bb0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x670bb5ull));
TAIL_STATIC(0x661fa3u,661);
}
B670bb5:L670bb5:{c.instructions+=3;NFSU2_TR(0x670bb5);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B670bb7:{NFSU2_TR(0x670bb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B670bba:{NFSU2_TR(0x670bba);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L670d8e;}}
}
B670bc0:L670bc0:{c.instructions+=4;NFSU2_TR(0x670bc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B670bc3:{NFSU2_TR(0x670bc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B670bc6:{NFSU2_TR(0x670bc6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
}
B670bc9:{NFSU2_TR(0x670bc9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B670bcb:L670bcb:{c.instructions+=3;NFSU2_TR(0x670bcb);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B670bcd:{NFSU2_TR(0x670bcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B670bd0:{NFSU2_TR(0x670bd0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x670b79u);}goto L670b79;}}
}
B670bd2:L670bd2:{c.instructions+=3;NFSU2_TR(0x670bd2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B670bd4:{NFSU2_TR(0x670bd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B670bd7:{NFSU2_TR(0x670bd7);
{goto L670c43;}
}
B670bd9:L670bd9:{c.instructions+=5;NFSU2_TR(0x670bd9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B670bda:{NFSU2_TR(0x670bda);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B670bdb:{NFSU2_TR(0x670bdb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B670bde:{NFSU2_TR(0x670bde);
__builtin_memmove((R+4),(R+24),4);
}
B670be0:{NFSU2_TR(0x670be0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x670be5ull));
TAIL_STATIC(0x65c312u,65c);
}
B670be5:L670be5:{c.instructions+=3;NFSU2_TR(0x670be5);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B670be7:{NFSU2_TR(0x670be7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B670bea:{NFSU2_TR(0x670bea);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L670d8e;}}
}
B670bf0:L670bf0:{c.instructions+=8;NFSU2_TR(0x670bf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B670bf3:{NFSU2_TR(0x670bf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B670bf6:{NFSU2_TR(0x670bf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B670bfc:{NFSU2_TR(0x670bfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B670bff:{NFSU2_TR(0x670bff);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B670c02:{NFSU2_TR(0x670c02);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B670c05:{NFSU2_TR(0x670c05);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B670c09:{NFSU2_TR(0x670c09);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L670c10;}}
}
B670c0b:L670c0b:{c.instructions+=2;NFSU2_TR(0x670c0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B670c0e:{NFSU2_TR(0x670c0e);
{goto L670c16;}
}
B670c10:L670c10:{c.instructions+=2;NFSU2_TR(0x670c10);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B670c13:{NFSU2_TR(0x670c13);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B670c16:L670c16:{c.instructions+=12;NFSU2_TR(0x670c16);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B670c19:{NFSU2_TR(0x670c19);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B670c1c:{NFSU2_TR(0x670c1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B670c1f:{NFSU2_TR(0x670c1f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B670c20:{NFSU2_TR(0x670c20);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B670c23:{NFSU2_TR(0x670c23);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B670c25:{NFSU2_TR(0x670c25);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B670c28:{NFSU2_TR(0x670c28);
__builtin_memmove((R+4),(R+28),4);
}
B670c2a:{NFSU2_TR(0x670c2a);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B670c2c:{NFSU2_TR(0x670c2c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B670c2d:{NFSU2_TR(0x670c2d);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B670c30:{NFSU2_TR(0x670c30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x670c35ull));
TAIL_STATIC(0x661fa3u,661);
}
B670c35:L670c35:{c.instructions+=3;NFSU2_TR(0x670c35);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B670c37:{NFSU2_TR(0x670c37);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B670c3a:{NFSU2_TR(0x670c3a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L670d8e;}}
}
B670c40:L670c40:{c.instructions+=1;NFSU2_TR(0x670c40);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B670c43:L670c43:{c.instructions+=2;NFSU2_TR(0x670c43);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B670c45:{NFSU2_TR(0x670c45);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x670bd9u);}goto L670bd9;}}
}
B670c47:L670c47:{c.instructions+=4;NFSU2_TR(0x670c47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B670c4a:{NFSU2_TR(0x670c4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+12))));
s4(u32(r4(U+0)),r4(U+4));
}
B670c4d:{NFSU2_TR(0x670c4d);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B670c50:{NFSU2_TR(0x670c50);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L670d6e;}}
}
B670c56:L670c56:{c.instructions+=1;NFSU2_TR(0x670c56);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+12))));
s4(u32(r4(U+0)),r4(U+4));
}
B670c59:L670c59:{c.instructions+=11;NFSU2_TR(0x670c59);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B670c5c:{NFSU2_TR(0x670c5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B670c5f:{NFSU2_TR(0x670c5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B670c62:{NFSU2_TR(0x670c62);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B670c65:{NFSU2_TR(0x670c65);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B670c68:{NFSU2_TR(0x670c68);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B670c6b:{NFSU2_TR(0x670c6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B670c6e:{NFSU2_TR(0x670c6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B670c71:{NFSU2_TR(0x670c71);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+12))));
}
B670c73:{NFSU2_TR(0x670c73);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B670c76:{NFSU2_TR(0x670c76);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L670c7e;}}
}
B670c78:L670c78:{c.instructions+=2;NFSU2_TR(0x670c78);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B670c7c:{NFSU2_TR(0x670c7c);
{goto L670c84;}
}
B670c7e:L670c7e:{c.instructions+=2;NFSU2_TR(0x670c7e);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B670c81:{NFSU2_TR(0x670c81);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B670c84:L670c84:{c.instructions+=4;NFSU2_TR(0x670c84);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B670c87:{NFSU2_TR(0x670c87);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
}
B670c8a:{NFSU2_TR(0x670c8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B670c8c:{NFSU2_TR(0x670c8c);
{goto L670ce0;}
}
B670c8e:L670c8e:{c.instructions+=5;NFSU2_TR(0x670c8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B670c91:{NFSU2_TR(0x670c91);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B670c97:{NFSU2_TR(0x670c97);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B670c9a:{NFSU2_TR(0x670c9a);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B670c9e:{NFSU2_TR(0x670c9e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L670ca5;}}
}
B670ca0:L670ca0:{c.instructions+=2;NFSU2_TR(0x670ca0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B670ca3:{NFSU2_TR(0x670ca3);
{goto L670cab;}
}
B670ca5:L670ca5:{c.instructions+=2;NFSU2_TR(0x670ca5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B670ca8:{NFSU2_TR(0x670ca8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B670cab:L670cab:{c.instructions+=12;NFSU2_TR(0x670cab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B670cae:{NFSU2_TR(0x670cae);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B670cb1:{NFSU2_TR(0x670cb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B670cb4:{NFSU2_TR(0x670cb4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B670cb5:{NFSU2_TR(0x670cb5);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B670cb8:{NFSU2_TR(0x670cb8);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B670cba:{NFSU2_TR(0x670cba);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B670cbd:{NFSU2_TR(0x670cbd);
__builtin_memmove((R+4),(R+28),4);
}
B670cbf:{NFSU2_TR(0x670cbf);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B670cc1:{NFSU2_TR(0x670cc1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B670cc2:{NFSU2_TR(0x670cc2);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B670cc5:{NFSU2_TR(0x670cc5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x670ccaull));
TAIL_STATIC(0x661fa3u,661);
}
B670cca:L670cca:{c.instructions+=3;NFSU2_TR(0x670cca);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B670ccc:{NFSU2_TR(0x670ccc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B670ccf:{NFSU2_TR(0x670ccf);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L670d8e;}}
}
B670cd5:L670cd5:{c.instructions+=4;NFSU2_TR(0x670cd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B670cd8:{NFSU2_TR(0x670cd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B670cdb:{NFSU2_TR(0x670cdb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
}
B670cde:{NFSU2_TR(0x670cde);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B670ce0:L670ce0:{c.instructions+=3;NFSU2_TR(0x670ce0);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B670ce2:{NFSU2_TR(0x670ce2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B670ce5:{NFSU2_TR(0x670ce5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x670c8eu);}goto L670c8e;}}
}
B670ce7:L670ce7:{c.instructions+=3;NFSU2_TR(0x670ce7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B670ce9:{NFSU2_TR(0x670ce9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B670cec:{NFSU2_TR(0x670cec);
{goto L670d54;}
}
B670cee:L670cee:{c.instructions+=5;NFSU2_TR(0x670cee);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B670cef:{NFSU2_TR(0x670cef);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B670cf0:{NFSU2_TR(0x670cf0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B670cf3:{NFSU2_TR(0x670cf3);
__builtin_memmove((R+4),(R+24),4);
}
B670cf5:{NFSU2_TR(0x670cf5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x670cfaull));
TAIL_STATIC(0x65c312u,65c);
}
B670cfa:L670cfa:{c.instructions+=3;NFSU2_TR(0x670cfa);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B670cfc:{NFSU2_TR(0x670cfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B670cff:{NFSU2_TR(0x670cff);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L670d8e;}}
}
B670d05:L670d05:{c.instructions+=8;NFSU2_TR(0x670d05);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B670d08:{NFSU2_TR(0x670d08);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B670d0b:{NFSU2_TR(0x670d0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B670d11:{NFSU2_TR(0x670d11);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B670d14:{NFSU2_TR(0x670d14);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B670d17:{NFSU2_TR(0x670d17);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B670d1a:{NFSU2_TR(0x670d1a);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B670d1e:{NFSU2_TR(0x670d1e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L670d25;}}
}
B670d20:L670d20:{c.instructions+=2;NFSU2_TR(0x670d20);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B670d23:{NFSU2_TR(0x670d23);
{goto L670d2b;}
}
B670d25:L670d25:{c.instructions+=2;NFSU2_TR(0x670d25);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B670d28:{NFSU2_TR(0x670d28);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B670d2b:L670d2b:{c.instructions+=12;NFSU2_TR(0x670d2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B670d2e:{NFSU2_TR(0x670d2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B670d31:{NFSU2_TR(0x670d31);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B670d34:{NFSU2_TR(0x670d34);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B670d35:{NFSU2_TR(0x670d35);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B670d38:{NFSU2_TR(0x670d38);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B670d3a:{NFSU2_TR(0x670d3a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B670d3d:{NFSU2_TR(0x670d3d);
__builtin_memmove((R+4),(R+28),4);
}
B670d3f:{NFSU2_TR(0x670d3f);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B670d41:{NFSU2_TR(0x670d41);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B670d42:{NFSU2_TR(0x670d42);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B670d45:{NFSU2_TR(0x670d45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x670d4aull));
TAIL_STATIC(0x661fa3u,661);
}
B670d4a:L670d4a:{c.instructions+=3;NFSU2_TR(0x670d4a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B670d4c:{NFSU2_TR(0x670d4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B670d4f:{NFSU2_TR(0x670d4f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L670d8e;}}
}
B670d51:L670d51:{c.instructions+=1;NFSU2_TR(0x670d51);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B670d54:L670d54:{c.instructions+=2;NFSU2_TR(0x670d54);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B670d56:{NFSU2_TR(0x670d56);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x670ceeu);}goto L670cee;}}
}
B670d58:L670d58:{c.instructions+=6;NFSU2_TR(0x670d58);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B670d5b:{NFSU2_TR(0x670d5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B670d5e:{NFSU2_TR(0x670d5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B670d61:{NFSU2_TR(0x670d61);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x38ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B670d65:{NFSU2_TR(0x670d65);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B670d68:{NFSU2_TR(0x670d68);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x670c59u);}goto L670c59;}}
}
B670d6e:L670d6e:{c.instructions+=5;NFSU2_TR(0x670d6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B670d71:{NFSU2_TR(0x670d71);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B670d74:{NFSU2_TR(0x670d74);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0xb4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B670d7b:{NFSU2_TR(0x670d7b);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B670d81:{NFSU2_TR(0x670d81);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x670b3eu);}goto L670b3e;}}
}
B670d87:L670d87:{c.instructions+=3;NFSU2_TR(0x670d87);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B670d8a:{NFSU2_TR(0x670d8a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B670d8c:{NFSU2_TR(0x670d8c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B670d8e:L670d8e:{c.instructions+=3;NFSU2_TR(0x670d8e);
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
B670d90:{NFSU2_TR(0x670d90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B670d91:{NFSU2_TR(0x670d91);
if(r1(R+518)){{goto L670d99;}}
}
B670d93:L670d93:{c.instructions+=3;NFSU2_TR(0x670d93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B670d95:{NFSU2_TR(0x670d95);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B670d96:{NFSU2_TR(0x670d96);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x670d99ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B670d99:L670d99:{c.instructions+=1;NFSU2_TR(0x670d99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B670d9a:L670d9a:{c.instructions+=4;NFSU2_TR(0x670d9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B670d9d:{NFSU2_TR(0x670d9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B670d9e:{NFSU2_TR(0x670d9e);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B670d9f:{NFSU2_TR(0x670d9f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B670da2:L670da2:{c.instructions+=3;NFSU2_TR(0x670da2);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B670da5:{NFSU2_TR(0x670da5);
u8 U[4];
w4(U+0,u32(0x7b711cull));
s4(u32(r4(R+4)),r4(U+0));
}
B670dab:{NFSU2_TR(0x670dab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x670db0ull));
TAIL_STATIC(0x575630u,575);
}
B670db0:L670db0:{c.instructions+=2;NFSU2_TR(0x670db0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B670db1:{NFSU2_TR(0x670db1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B670db2:L670db2:{c.instructions+=9;NFSU2_TR(0x670db2);
__builtin_memmove((R+28),(R+28),4);
}
B670db4:{NFSU2_TR(0x670db4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B670db5:{NFSU2_TR(0x670db5);
__builtin_memmove((R+20),(R+16),4);
}
B670db7:{NFSU2_TR(0x670db7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B670db8:{NFSU2_TR(0x670db8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B670db9:{NFSU2_TR(0x670db9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B670dbc:{NFSU2_TR(0x670dbc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B670dbd:{NFSU2_TR(0x670dbd);
__builtin_memmove((R+24),(R+4),4);
}
B670dbf:{NFSU2_TR(0x670dbf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x670dc4ull));
TAIL_STATIC(0x575620u,575);
}
B670dc4:L670dc4:{c.instructions+=4;NFSU2_TR(0x670dc4);
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
B670dc6:{NFSU2_TR(0x670dc6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B670dc7:{NFSU2_TR(0x670dc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B670dca:{NFSU2_TR(0x670dca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L670dd3;}}
}
B670dcc:L670dcc:{c.instructions+=2;NFSU2_TR(0x670dcc);
w4(R+0,u32(0x8007000eull));
}
B670dd1:{NFSU2_TR(0x670dd1);
{goto L670dd8;}
}
B670dd3:L670dd3:{c.instructions+=2;NFSU2_TR(0x670dd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B670dd6:{NFSU2_TR(0x670dd6);
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
B670dd8:L670dd8:{c.instructions+=4;NFSU2_TR(0x670dd8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B670dd9:{NFSU2_TR(0x670dd9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B670dda:{NFSU2_TR(0x670dda);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B670ddb:{NFSU2_TR(0x670ddb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B670dde:L670dde:{c.instructions+=8;NFSU2_TR(0x670dde);
__builtin_memmove((R+28),(R+28),4);
}
B670de0:{NFSU2_TR(0x670de0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B670de1:{NFSU2_TR(0x670de1);
__builtin_memmove((R+20),(R+16),4);
}
B670de3:{NFSU2_TR(0x670de3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B670de6:{NFSU2_TR(0x670de6);
u8 U[14];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
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
B670de9:{NFSU2_TR(0x670de9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B670dec:{NFSU2_TR(0x670dec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B670ded:{NFSU2_TR(0x670ded);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B670df0:L670df0:{c.instructions+=10;NFSU2_TR(0x670df0);
__builtin_memmove((R+28),(R+28),4);
}
B670df2:{NFSU2_TR(0x670df2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B670df3:{NFSU2_TR(0x670df3);
__builtin_memmove((R+20),(R+16),4);
}
B670df5:{NFSU2_TR(0x670df5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B670df8:{NFSU2_TR(0x670df8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B670dfb:{NFSU2_TR(0x670dfb);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B670dfe:{NFSU2_TR(0x670dfe);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B670dff:{NFSU2_TR(0x670dff);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((R+24),(U+0),4);
}
B670e02:{NFSU2_TR(0x670e02);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B670e05:{NFSU2_TR(0x670e05);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L670e0e;}}
}
B670e07:L670e07:{c.instructions+=3;NFSU2_TR(0x670e07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B670e09:{NFSU2_TR(0x670e09);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B670e0b:{NFSU2_TR(0x670e0b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x670e0eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B670e0e:L670e0e:{c.instructions+=4;NFSU2_TR(0x670e0e);
__builtin_memmove((R+0),(R+24),4);
}
B670e10:{NFSU2_TR(0x670e10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B670e11:{NFSU2_TR(0x670e11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B670e12:{NFSU2_TR(0x670e12);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B670e15:L670e15:{c.instructions+=7;NFSU2_TR(0x670e15);
__builtin_memmove((R+28),(R+28),4);
}
B670e17:{NFSU2_TR(0x670e17);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B670e18:{NFSU2_TR(0x670e18);
__builtin_memmove((R+20),(R+16),4);
}
B670e1a:{NFSU2_TR(0x670e1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B670e1d:{NFSU2_TR(0x670e1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B670e20:{NFSU2_TR(0x670e20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B670e21:{NFSU2_TR(0x670e21);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B670e24:L670e24:{c.instructions+=6;NFSU2_TR(0x670e24);
__builtin_memmove((R+28),(R+28),4);
}
B670e26:{NFSU2_TR(0x670e26);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B670e27:{NFSU2_TR(0x670e27);
__builtin_memmove((R+20),(R+16),4);
}
B670e29:{NFSU2_TR(0x670e29);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B670e2a:{NFSU2_TR(0x670e2a);
__builtin_memmove((R+24),(R+4),4);
}
B670e2c:{NFSU2_TR(0x670e2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x670e31ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x670da2u);}goto L670da2;}
}
B670e31:L670e31:{c.instructions+=2;NFSU2_TR(0x670e31);
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
B670e35:{NFSU2_TR(0x670e35);
if(r1(R+518)){{goto L670e3e;}}
}
B670e37:L670e37:{c.instructions+=2;NFSU2_TR(0x670e37);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B670e38:{NFSU2_TR(0x670e38);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x670e3dull));
TAIL_STATIC(0x575630u,575);
}
B670e3d:L670e3d:{c.instructions+=1;NFSU2_TR(0x670e3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B670e3e:L670e3e:{c.instructions+=4;NFSU2_TR(0x670e3e);
__builtin_memmove((R+0),(R+24),4);
}
B670e40:{NFSU2_TR(0x670e40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B670e41:{NFSU2_TR(0x670e41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B670e42:{NFSU2_TR(0x670e42);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B670e45:L670e45:{c.instructions+=12;NFSU2_TR(0x670e45);
__builtin_memmove((R+28),(R+28),4);
}
B670e47:{NFSU2_TR(0x670e47);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B670e48:{NFSU2_TR(0x670e48);
__builtin_memmove((R+20),(R+16),4);
}
B670e4a:{NFSU2_TR(0x670e4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B670e4d:{NFSU2_TR(0x670e4d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B670e50:{NFSU2_TR(0x670e50);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B670e51:{NFSU2_TR(0x670e51);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B670e54:{NFSU2_TR(0x670e54);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B670e55:{NFSU2_TR(0x670e55);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B670e57:{NFSU2_TR(0x670e57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B670e58:{NFSU2_TR(0x670e58);
w4(R+28,u32(0x7d9904ull));
}
B670e5d:{NFSU2_TR(0x670e5d);
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
B670e5f:L670e5f:{c.instructions+=1;NFSU2_TR(0x670e5f);
u8 U[59];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L670e61;}}
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
__builtin_memmove((U+36),gp(u32(r4(U+20))),4);
__builtin_memmove((U+47),(U+36),4);
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+51),(U+16),4);
w1(R+512,u8((r4(U+51))<(r4(U+47))));
w1(R+523,sborrow<u32>(r4(U+51),r4(U+47)));
w4(U+55,u32(u32(r4(U+51))-u32(r4(U+47))));
w1(R+519,u8(s32(r4(U+55))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+55))==(u32(0x0ull))));
w4(U+41,u32(u32(r4(U+55))&u32(u32(0xffull))));
w1(U+45,u8(__builtin_popcountll(u64(r4(U+41)))));
w1(U+46,u8(u32(r1(U+45))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+46))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x670e5fu);}goto L670e5f;}}
}
B670e61:L670e61:{c.instructions+=1;NFSU2_TR(0x670e61);
if(r1(R+518)){{goto L670e74;}}
}
B670e63:L670e63:{c.instructions+=5;NFSU2_TR(0x670e63);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B670e66:{NFSU2_TR(0x670e66);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B670e68:{NFSU2_TR(0x670e68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B670e69:{NFSU2_TR(0x670e69);
w4(R+28,u32(0x7b7430ull));
}
B670e6e:{NFSU2_TR(0x670e6e);
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
B670e70:L670e70:{c.instructions+=1;NFSU2_TR(0x670e70);
u8 U[59];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L670e72;}}
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
__builtin_memmove((U+36),gp(u32(r4(U+20))),4);
__builtin_memmove((U+47),(U+36),4);
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+51),(U+16),4);
w1(R+512,u8((r4(U+51))<(r4(U+47))));
w1(R+523,sborrow<u32>(r4(U+51),r4(U+47)));
w4(U+55,u32(u32(r4(U+51))-u32(r4(U+47))));
w1(R+519,u8(s32(r4(U+55))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+55))==(u32(0x0ull))));
w4(U+41,u32(u32(r4(U+55))&u32(u32(0xffull))));
w1(U+45,u8(__builtin_popcountll(u64(r4(U+41)))));
w1(U+46,u8(u32(r1(U+45))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+46))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x670e70u);}goto L670e70;}}
}
B670e72:L670e72:{c.instructions+=1;NFSU2_TR(0x670e72);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L670e83;}}
}
B670e74:L670e74:{c.instructions+=5;NFSU2_TR(0x670e74);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B670e77:{NFSU2_TR(0x670e77);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B670e79:{NFSU2_TR(0x670e79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B670e7b:{NFSU2_TR(0x670e7b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B670e7c:{NFSU2_TR(0x670e7c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x670e7full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B670e7f:L670e7f:{c.instructions+=2;NFSU2_TR(0x670e7f);
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
B670e81:{NFSU2_TR(0x670e81);
{goto L670e88;}
}
B670e83:L670e83:{c.instructions+=1;NFSU2_TR(0x670e83);
w4(R+0,u32(0x80004002ull));
}
B670e88:L670e88:{c.instructions+=4;NFSU2_TR(0x670e88);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B670e89:{NFSU2_TR(0x670e89);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B670e8a:{NFSU2_TR(0x670e8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B670e8b:{NFSU2_TR(0x670e8b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B670e8e:L670e8e:{c.instructions+=6;NFSU2_TR(0x670e8e);
__builtin_memmove((R+0),(R+4),4);
}
B670e90:{NFSU2_TR(0x670e90);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B670e94:{NFSU2_TR(0x670e94);
u8 U[14];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
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
B670e98:{NFSU2_TR(0x670e98);
u8 U[4];
w4(U+0,u32(0x7b711cull));
s4(u32(r4(R+0)),r4(U+0));
}
B670e9e:{NFSU2_TR(0x670e9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B670ea5:{NFSU2_TR(0x670ea5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B670ea6:L670ea6:{c.instructions+=7;NFSU2_TR(0x670ea6);
__builtin_memmove((R+28),(R+28),4);
}
B670ea8:{NFSU2_TR(0x670ea8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B670ea9:{NFSU2_TR(0x670ea9);
__builtin_memmove((R+20),(R+16),4);
}
B670eab:{NFSU2_TR(0x670eab);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B670eac:{NFSU2_TR(0x670eac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B670eaf:{NFSU2_TR(0x670eaf);
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
B670eb1:{NFSU2_TR(0x670eb1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L670eba;}}
}
B670eb3:L670eb3:{c.instructions+=2;NFSU2_TR(0x670eb3);
w4(R+0,u32(0x8876086cull));
}
B670eb8:{NFSU2_TR(0x670eb8);
{goto L670f03;}
}
B670eba:L670eba:{c.instructions+=3;NFSU2_TR(0x670eba);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B670ebb:{NFSU2_TR(0x670ebb);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B670ebd:{NFSU2_TR(0x670ebd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x670ec2ull));
TAIL_STATIC(0x575620u,575);
}
B670ec2:L670ec2:{c.instructions+=3;NFSU2_TR(0x670ec2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B670ec4:{NFSU2_TR(0x670ec4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B670ec5:{NFSU2_TR(0x670ec5);
if(r1(R+518)){{goto L670ed2;}}
}
B670ec7:L670ec7:{c.instructions+=2;NFSU2_TR(0x670ec7);
__builtin_memmove((R+4),(R+0),4);
}
B670ec9:{NFSU2_TR(0x670ec9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x670eceull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x670e8eu);}goto L670e8e;}
}
B670ece:L670ece:{c.instructions+=2;NFSU2_TR(0x670ece);
__builtin_memmove((R+24),(R+0),4);
}
B670ed0:{NFSU2_TR(0x670ed0);
{goto L670ed4;}
}
B670ed2:L670ed2:{c.instructions+=1;NFSU2_TR(0x670ed2);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B670ed4:L670ed4:{c.instructions+=2;NFSU2_TR(0x670ed4);
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
B670ed6:{NFSU2_TR(0x670ed6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L670edf;}}
}
B670ed8:L670ed8:{c.instructions+=2;NFSU2_TR(0x670ed8);
w4(R+0,u32(0x8007000eull));
}
B670edd:{NFSU2_TR(0x670edd);
{goto L670f02;}
}
B670edf:L670edf:{c.instructions+=5;NFSU2_TR(0x670edf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B670ee1:{NFSU2_TR(0x670ee1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B670ee2:{NFSU2_TR(0x670ee2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B670ee5:{NFSU2_TR(0x670ee5);
__builtin_memmove((R+4),(R+24),4);
}
B670ee7:{NFSU2_TR(0x670ee7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x670eeaull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B670eea:L670eea:{c.instructions+=3;NFSU2_TR(0x670eea);
__builtin_memmove((R+28),(R+0),4);
}
B670eec:{NFSU2_TR(0x670eec);
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
B670eee:{NFSU2_TR(0x670eee);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L670efd;}}
}
B670ef0:L670ef0:{c.instructions+=4;NFSU2_TR(0x670ef0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B670ef2:{NFSU2_TR(0x670ef2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B670ef4:{NFSU2_TR(0x670ef4);
__builtin_memmove((R+4),(R+24),4);
}
B670ef6:{NFSU2_TR(0x670ef6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x670ef9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B670ef9:L670ef9:{c.instructions+=2;NFSU2_TR(0x670ef9);
__builtin_memmove((R+0),(R+28),4);
}
B670efb:{NFSU2_TR(0x670efb);
{goto L670f01;}
}
B670efd:L670efd:{c.instructions+=2;NFSU2_TR(0x670efd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+12)),r4(U+0));
}
B670eff:{NFSU2_TR(0x670eff);
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
B670f01:L670f01:{c.instructions+=1;NFSU2_TR(0x670f01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B670f02:L670f02:{c.instructions+=1;NFSU2_TR(0x670f02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B670f03:L670f03:{c.instructions+=3;NFSU2_TR(0x670f03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B670f04:{NFSU2_TR(0x670f04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B670f05:{NFSU2_TR(0x670f05);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B670f08:L670f08:{c.instructions+=5;NFSU2_TR(0x670f08);
__builtin_memmove((R+28),(R+28),4);
}
B670f0a:{NFSU2_TR(0x670f0a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B670f0b:{NFSU2_TR(0x670f0b);
__builtin_memmove((R+20),(R+16),4);
}
B670f0d:{NFSU2_TR(0x670f0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B670f0e:{NFSU2_TR(0x670f0e);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x670ea6u);}goto L670ea6;}
}
B670f13:L670f13:{c.instructions+=6;NFSU2_TR(0x670f13);
__builtin_memmove((R+0),(R+4),4);
}
B670f15:{NFSU2_TR(0x670f15);
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
B670f17:{NFSU2_TR(0x670f17);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B670f19:{NFSU2_TR(0x670f19);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B670f1c:{NFSU2_TR(0x670f1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B670f1f:{NFSU2_TR(0x670f1f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B670f20:L670f20:{c.instructions+=3;NFSU2_TR(0x670f20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B670f22:{NFSU2_TR(0x670f22);
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
B670f24:{NFSU2_TR(0x670f24);
if(r1(R+518)){{goto L670f2d;}}
}
B670f26:L670f26:{c.instructions+=2;NFSU2_TR(0x670f26);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B670f27:{NFSU2_TR(0x670f27);
u8 U[4];
__builtin_memmove((U+0),gp(0x783058),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x670f2dull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B670f2d:L670f2d:{c.instructions+=1;NFSU2_TR(0x670f2d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B670f2e:L670f2e:{c.instructions+=6;NFSU2_TR(0x670f2e);
__builtin_memmove((R+28),(R+28),4);
}
B670f30:{NFSU2_TR(0x670f30);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B670f31:{NFSU2_TR(0x670f31);
__builtin_memmove((R+24),(R+4),4);
}
B670f33:{NFSU2_TR(0x670f33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B670f35:{NFSU2_TR(0x670f35);
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
B670f37:{NFSU2_TR(0x670f37);
if(r1(R+518)){{goto L670f40;}}
}
B670f39:L670f39:{c.instructions+=2;NFSU2_TR(0x670f39);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B670f3a:{NFSU2_TR(0x670f3a);
u8 U[4];
__builtin_memmove((U+0),gp(0x783058),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x670f40ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B670f40:L670f40:{c.instructions+=6;NFSU2_TR(0x670f40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+24)),r4(U+0));
}
B670f43:{NFSU2_TR(0x670f43);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B670f47:{NFSU2_TR(0x670f47);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B670f4b:{NFSU2_TR(0x670f4b);
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
B670f4d:{NFSU2_TR(0x670f4d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B670f4e:{NFSU2_TR(0x670f4e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B670f4f:L670f4f:{c.instructions+=10;NFSU2_TR(0x670f4f);
__builtin_memmove((R+28),(R+28),4);
}
B670f51:{NFSU2_TR(0x670f51);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B670f52:{NFSU2_TR(0x670f52);
__builtin_memmove((R+20),(R+16),4);
}
B670f54:{NFSU2_TR(0x670f54);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B670f55:{NFSU2_TR(0x670f55);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B670f56:{NFSU2_TR(0x670f56);
__builtin_memmove((R+12),(R+4),4);
}
B670f58:{NFSU2_TR(0x670f58);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B670f5a:{NFSU2_TR(0x670f5a);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+24))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B670f5c:{NFSU2_TR(0x670f5c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B670f5d:{NFSU2_TR(0x670f5d);
if(r1(R+518)){{goto L670f64;}}
}
B670f5f:L670f5f:{c.instructions+=1;NFSU2_TR(0x670f5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x670f64ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x670f2eu);}goto L670f2e;}
}
B670f64:L670f64:{c.instructions+=3;NFSU2_TR(0x670f64);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B670f67:{NFSU2_TR(0x670f67);
__builtin_memmove((R+28),gp(0x7831ec),4);
}
B670f6d:{NFSU2_TR(0x670f6d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L670f75;}}
}
B670f6f:L670f6f:{c.instructions+=1;NFSU2_TR(0x670f6f);
__builtin_memmove((R+28),gp(0x7831e8),4);
}
B670f75:L670f75:{c.instructions+=2;NFSU2_TR(0x670f75);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
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
B670f78:{NFSU2_TR(0x670f78);
if(r1(R+518)){{goto L670f8a;}}
}
B670f7a:L670f7a:{c.instructions+=4;NFSU2_TR(0x670f7a);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B670f7c:{NFSU2_TR(0x670f7c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B670f7f:{NFSU2_TR(0x670f7f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B670f82:{NFSU2_TR(0x670f82);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x670f84ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B670f84:L670f84:{c.instructions+=3;NFSU2_TR(0x670f84);
__builtin_memmove((R+24),(R+0),4);
}
B670f86:{NFSU2_TR(0x670f86);
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
B670f88:{NFSU2_TR(0x670f88);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L670f9a;}}
}
B670f8a:L670f8a:{c.instructions+=4;NFSU2_TR(0x670f8a);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B670f8c:{NFSU2_TR(0x670f8c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B670f8f:{NFSU2_TR(0x670f8f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B670f92:{NFSU2_TR(0x670f92);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x670f94ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B670f94:L670f94:{c.instructions+=3;NFSU2_TR(0x670f94);
__builtin_memmove((R+24),(R+0),4);
}
B670f96:{NFSU2_TR(0x670f96);
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
B670f98:{NFSU2_TR(0x670f98);
if(r1(R+518)){{goto L670fc9;}}
}
B670f9a:L670f9a:{c.instructions+=3;NFSU2_TR(0x670f9a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B670f9b:{NFSU2_TR(0x670f9b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B670f9e:{NFSU2_TR(0x670f9e);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831e4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x670fa4ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B670fa4:L670fa4:{c.instructions+=3;NFSU2_TR(0x670fa4);
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
B670fa6:{NFSU2_TR(0x670fa6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B670fa9:{NFSU2_TR(0x670fa9);
if(r1(R+518)){{goto L670fc9;}}
}
B670fab:L670fab:{c.instructions+=3;NFSU2_TR(0x670fab);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B670fac:{NFSU2_TR(0x670fac);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B670faf:{NFSU2_TR(0x670faf);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831e0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x670fb5ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B670fb5:L670fb5:{c.instructions+=3;NFSU2_TR(0x670fb5);
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
B670fb7:{NFSU2_TR(0x670fb7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B670fb9:{NFSU2_TR(0x670fb9);
if(r1(R+518)){{goto L670fc9;}}
}
B670fbb:L670fbb:{c.instructions+=2;NFSU2_TR(0x670fbb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B670fbc:{NFSU2_TR(0x670fbc);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831dc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x670fc2ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B670fc2:L670fc2:{c.instructions+=3;NFSU2_TR(0x670fc2);
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
B670fc4:{NFSU2_TR(0x670fc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B670fc7:{NFSU2_TR(0x670fc7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L670fd6;}}
}
B670fc9:L670fc9:{c.instructions+=1;NFSU2_TR(0x670fc9);
u8 U[4];
__builtin_memmove((U+0),gp(0x783114),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x670fcfull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B670fcf:L670fcf:{c.instructions+=2;NFSU2_TR(0x670fcf);
w4(R+0,u32(0x88760b59ull));
}
B670fd4:{NFSU2_TR(0x670fd4);
{goto L670fd8;}
}
B670fd6:L670fd6:{c.instructions+=1;NFSU2_TR(0x670fd6);
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
B670fd8:L670fd8:{c.instructions+=5;NFSU2_TR(0x670fd8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B670fd9:{NFSU2_TR(0x670fd9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B670fda:{NFSU2_TR(0x670fda);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B670fdb:{NFSU2_TR(0x670fdb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B670fdc:{NFSU2_TR(0x670fdc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B670fdf:L670fdf:{c.instructions+=9;NFSU2_TR(0x670fdf);
__builtin_memmove((R+28),(R+28),4);
}
B670fe1:{NFSU2_TR(0x670fe1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B670fe2:{NFSU2_TR(0x670fe2);
__builtin_memmove((R+20),(R+16),4);
}
B670fe4:{NFSU2_TR(0x670fe4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B670fe7:{NFSU2_TR(0x670fe7);
w4(R+4,u32(0x68cdbcull));
}
B670fec:{NFSU2_TR(0x670fec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B670fef:{NFSU2_TR(0x670fef);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B670ff5:{NFSU2_TR(0x670ff5);
w4(R+4,u32(0x68b8c5ull));
}
B670ffa:{NFSU2_TR(0x670ffa);
u8 U[4];
w4(U+0,u32(0x689b13ull));
s4(u32(r4(R+0)),r4(U+0));
TAIL_STATIC(0x671000u,671);
}
XIT:NFSU2_TR_EXIT(0x670,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
