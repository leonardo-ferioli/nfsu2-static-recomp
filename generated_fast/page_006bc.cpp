#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_673(u8* __restrict R,Cpu& c);
u32 body_698(u8* __restrict R,Cpu& c);
u32 body_699(u8* __restrict R,Cpu& c);
u32 body_69a(u8* __restrict R,Cpu& c);
u32 body_69e(u8* __restrict R,Cpu& c);
u32 body_69f(u8* __restrict R,Cpu& c);
u32 body_6a0(u8* __restrict R,Cpu& c);
u32 body_6bb(u8* __restrict R,Cpu& c);
u32 body_6bd(u8* __restrict R,Cpu& c);
u32 body_6c2(u8* __restrict R,Cpu& c);
u32 body_6cb(u8* __restrict R,Cpu& c);
u32 body_6cd(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6bc,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6bc,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6bc(u8* __restrict R,Cpu& c);
u32 page_6bc(Cpu& c){return body_6bc(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6bc(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6bc000:goto L6bc000;
case 0x6bc002:c.instructions+=3;goto B6bc002;
case 0x6bc004:c.instructions+=2;goto B6bc004;
case 0x6bc005:c.instructions+=1;goto B6bc005;
case 0x6bc007:goto L6bc007;
case 0x6bc00d:c.instructions+=2;goto B6bc00d;
case 0x6bc010:c.instructions+=1;goto B6bc010;
case 0x6bc012:goto L6bc012;
case 0x6bc014:c.instructions+=2;goto B6bc014;
case 0x6bc017:c.instructions+=1;goto B6bc017;
case 0x6bc019:goto L6bc019;
case 0x6bc01c:c.instructions+=2;goto B6bc01c;
case 0x6bc01e:c.instructions+=1;goto B6bc01e;
case 0x6bc020:goto L6bc020;
case 0x6bc023:goto L6bc023;
case 0x6bc026:c.instructions+=2;goto B6bc026;
case 0x6bc027:c.instructions+=1;goto B6bc027;
case 0x6bc029:goto L6bc029;
case 0x6bc02b:goto L6bc02b;
case 0x6bc02c:c.instructions+=8;goto B6bc02c;
case 0x6bc02e:c.instructions+=7;goto B6bc02e;
case 0x6bc02f:c.instructions+=6;goto B6bc02f;
case 0x6bc032:c.instructions+=5;goto B6bc032;
case 0x6bc033:c.instructions+=4;goto B6bc033;
case 0x6bc034:c.instructions+=3;goto B6bc034;
case 0x6bc03a:c.instructions+=2;goto B6bc03a;
case 0x6bc03c:c.instructions+=1;goto B6bc03c;
case 0x6bc041:goto L6bc041;
case 0x6bc044:c.instructions+=2;goto B6bc044;
case 0x6bc048:c.instructions+=1;goto B6bc048;
case 0x6bc04a:goto L6bc04a;
case 0x6bc04b:c.instructions+=2;goto B6bc04b;
case 0x6bc04e:c.instructions+=1;goto B6bc04e;
case 0x6bc050:goto L6bc050;
case 0x6bc052:c.instructions+=1;goto B6bc052;
case 0x6bc057:goto L6bc057;
case 0x6bc059:c.instructions+=1;goto B6bc059;
case 0x6bc05b:goto L6bc05b;
case 0x6bc05d:c.instructions+=1;goto B6bc05d;
case 0x6bc062:goto L6bc062;
case 0x6bc064:goto L6bc064;
case 0x6bc066:goto L6bc066;
case 0x6bc068:c.instructions+=3;goto B6bc068;
case 0x6bc06b:c.instructions+=2;goto B6bc06b;
case 0x6bc06d:c.instructions+=1;goto B6bc06d;
case 0x6bc06f:goto L6bc06f;
case 0x6bc074:c.instructions+=1;goto B6bc074;
case 0x6bc079:goto L6bc079;
case 0x6bc07c:c.instructions+=9;goto B6bc07c;
case 0x6bc07e:c.instructions+=8;goto B6bc07e;
case 0x6bc07f:c.instructions+=7;goto B6bc07f;
case 0x6bc081:c.instructions+=6;goto B6bc081;
case 0x6bc087:c.instructions+=5;goto B6bc087;
case 0x6bc08d:c.instructions+=4;goto B6bc08d;
case 0x6bc08e:c.instructions+=3;goto B6bc08e;
case 0x6bc08f:c.instructions+=2;goto B6bc08f;
case 0x6bc091:c.instructions+=1;goto B6bc091;
case 0x6bc096:goto L6bc096;
case 0x6bc098:c.instructions+=3;goto B6bc098;
case 0x6bc09a:c.instructions+=2;goto B6bc09a;
case 0x6bc09d:c.instructions+=1;goto B6bc09d;
case 0x6bc09f:goto L6bc09f;
case 0x6bc0a5:c.instructions+=1;goto B6bc0a5;
case 0x6bc0aa:goto L6bc0aa;
case 0x6bc0ac:c.instructions+=2;goto B6bc0ac;
case 0x6bc0af:c.instructions+=1;goto B6bc0af;
case 0x6bc0b1:goto L6bc0b1;
case 0x6bc0b3:goto L6bc0b3;
case 0x6bc0b5:c.instructions+=1;goto B6bc0b5;
case 0x6bc0b7:goto L6bc0b7;
case 0x6bc0b9:c.instructions+=1;goto B6bc0b9;
case 0x6bc0be:goto L6bc0be;
case 0x6bc0c1:c.instructions+=1;goto B6bc0c1;
case 0x6bc0c3:goto L6bc0c3;
case 0x6bc0c5:c.instructions+=3;goto B6bc0c5;
case 0x6bc0c7:c.instructions+=2;goto B6bc0c7;
case 0x6bc0ca:c.instructions+=1;goto B6bc0ca;
case 0x6bc0cc:goto L6bc0cc;
case 0x6bc0ce:c.instructions+=18;goto B6bc0ce;
case 0x6bc0d1:c.instructions+=17;goto B6bc0d1;
case 0x6bc0d4:c.instructions+=16;goto B6bc0d4;
case 0x6bc0d8:c.instructions+=15;goto B6bc0d8;
case 0x6bc0db:c.instructions+=14;goto B6bc0db;
case 0x6bc0e1:c.instructions+=13;goto B6bc0e1;
case 0x6bc0e4:c.instructions+=12;goto B6bc0e4;
case 0x6bc0e7:c.instructions+=11;goto B6bc0e7;
case 0x6bc0e9:c.instructions+=10;goto B6bc0e9;
case 0x6bc0ec:c.instructions+=9;goto B6bc0ec;
case 0x6bc0ef:c.instructions+=8;goto B6bc0ef;
case 0x6bc0f5:c.instructions+=7;goto B6bc0f5;
case 0x6bc0f8:c.instructions+=6;goto B6bc0f8;
case 0x6bc0fb:c.instructions+=5;goto B6bc0fb;
case 0x6bc0fe:c.instructions+=4;goto B6bc0fe;
case 0x6bc0ff:c.instructions+=3;goto B6bc0ff;
case 0x6bc102:c.instructions+=2;goto B6bc102;
case 0x6bc105:c.instructions+=1;goto B6bc105;
case 0x6bc107:goto L6bc107;
case 0x6bc109:goto L6bc109;
case 0x6bc10a:c.instructions+=4;goto B6bc10a;
case 0x6bc10b:c.instructions+=3;goto B6bc10b;
case 0x6bc10c:c.instructions+=2;goto B6bc10c;
case 0x6bc10d:c.instructions+=1;goto B6bc10d;
case 0x6bc110:goto L6bc110;
case 0x6bc112:c.instructions+=14;goto B6bc112;
case 0x6bc113:c.instructions+=13;goto B6bc113;
case 0x6bc115:c.instructions+=12;goto B6bc115;
case 0x6bc11b:c.instructions+=11;goto B6bc11b;
case 0x6bc11f:c.instructions+=10;goto B6bc11f;
case 0x6bc123:c.instructions+=9;goto B6bc123;
case 0x6bc124:c.instructions+=8;goto B6bc124;
case 0x6bc126:c.instructions+=7;goto B6bc126;
case 0x6bc12c:c.instructions+=6;goto B6bc12c;
case 0x6bc12e:c.instructions+=5;goto B6bc12e;
case 0x6bc12f:c.instructions+=4;goto B6bc12f;
case 0x6bc134:c.instructions+=3;goto B6bc134;
case 0x6bc136:c.instructions+=2;goto B6bc136;
case 0x6bc139:c.instructions+=1;goto B6bc139;
case 0x6bc13b:goto L6bc13b;
case 0x6bc13d:c.instructions+=1;goto B6bc13d;
case 0x6bc142:goto L6bc142;
case 0x6bc148:c.instructions+=16;goto B6bc148;
case 0x6bc14a:c.instructions+=15;goto B6bc14a;
case 0x6bc14d:c.instructions+=14;goto B6bc14d;
case 0x6bc14e:c.instructions+=13;goto B6bc14e;
case 0x6bc150:c.instructions+=12;goto B6bc150;
case 0x6bc156:c.instructions+=11;goto B6bc156;
case 0x6bc158:c.instructions+=10;goto B6bc158;
case 0x6bc15a:c.instructions+=9;goto B6bc15a;
case 0x6bc15c:c.instructions+=8;goto B6bc15c;
case 0x6bc162:c.instructions+=7;goto B6bc162;
case 0x6bc165:c.instructions+=6;goto B6bc165;
case 0x6bc16a:c.instructions+=5;goto B6bc16a;
case 0x6bc16d:c.instructions+=4;goto B6bc16d;
case 0x6bc170:c.instructions+=3;goto B6bc170;
case 0x6bc173:c.instructions+=2;goto B6bc173;
case 0x6bc178:c.instructions+=1;goto B6bc178;
case 0x6bc17a:goto L6bc17a;
case 0x6bc17c:c.instructions+=1;goto B6bc17c;
case 0x6bc17e:goto L6bc17e;
case 0x6bc180:c.instructions+=1;goto B6bc180;
case 0x6bc182:goto L6bc182;
case 0x6bc184:c.instructions+=1;goto B6bc184;
case 0x6bc186:goto L6bc186;
case 0x6bc188:c.instructions+=1;goto B6bc188;
case 0x6bc189:goto L6bc189;
case 0x6bc18d:c.instructions+=2;goto B6bc18d;
case 0x6bc192:c.instructions+=1;goto B6bc192;
case 0x6bc198:goto L6bc198;
case 0x6bc19d:c.instructions+=1;goto B6bc19d;
case 0x6bc1a3:goto L6bc1a3;
case 0x6bc1a8:c.instructions+=1;goto B6bc1a8;
case 0x6bc1ae:goto L6bc1ae;
case 0x6bc1b3:c.instructions+=1;goto B6bc1b3;
case 0x6bc1b9:goto L6bc1b9;
case 0x6bc1bb:c.instructions+=1;goto B6bc1bb;
case 0x6bc1c1:goto L6bc1c1;
case 0x6bc1c4:c.instructions+=2;goto B6bc1c4;
case 0x6bc1c7:c.instructions+=1;goto B6bc1c7;
case 0x6bc1c9:goto L6bc1c9;
case 0x6bc1cc:c.instructions+=2;goto B6bc1cc;
case 0x6bc1d2:c.instructions+=1;goto B6bc1d2;
case 0x6bc1d5:goto L6bc1d5;
case 0x6bc1d8:c.instructions+=7;goto B6bc1d8;
case 0x6bc1db:c.instructions+=6;goto B6bc1db;
case 0x6bc1df:c.instructions+=5;goto B6bc1df;
case 0x6bc1e0:c.instructions+=4;goto B6bc1e0;
case 0x6bc1e1:c.instructions+=3;goto B6bc1e1;
case 0x6bc1e2:c.instructions+=2;goto B6bc1e2;
case 0x6bc1e3:c.instructions+=1;goto B6bc1e3;
case 0x6bc1e5:goto L6bc1e5;
case 0x6bc1eb:c.instructions+=9;goto B6bc1eb;
case 0x6bc1ee:c.instructions+=8;goto B6bc1ee;
case 0x6bc1f1:c.instructions+=7;goto B6bc1f1;
case 0x6bc1f4:c.instructions+=6;goto B6bc1f4;
case 0x6bc1f7:c.instructions+=5;goto B6bc1f7;
case 0x6bc1fa:c.instructions+=4;goto B6bc1fa;
case 0x6bc1fd:c.instructions+=3;goto B6bc1fd;
case 0x6bc200:c.instructions+=2;goto B6bc200;
case 0x6bc203:c.instructions+=1;goto B6bc203;
case 0x6bc206:goto L6bc206;
case 0x6bc209:c.instructions+=12;goto B6bc209;
case 0x6bc20b:c.instructions+=11;goto B6bc20b;
case 0x6bc20d:c.instructions+=10;goto B6bc20d;
case 0x6bc210:c.instructions+=9;goto B6bc210;
case 0x6bc213:c.instructions+=8;goto B6bc213;
case 0x6bc216:c.instructions+=7;goto B6bc216;
case 0x6bc219:c.instructions+=6;goto B6bc219;
case 0x6bc21d:c.instructions+=5;goto B6bc21d;
case 0x6bc21f:c.instructions+=4;goto B6bc21f;
case 0x6bc222:c.instructions+=3;goto B6bc222;
case 0x6bc225:c.instructions+=2;goto B6bc225;
case 0x6bc22c:c.instructions+=1;goto B6bc22c;
case 0x6bc22e:goto L6bc22e;
case 0x6bc231:c.instructions+=7;goto B6bc231;
case 0x6bc234:c.instructions+=6;goto B6bc234;
case 0x6bc238:c.instructions+=5;goto B6bc238;
case 0x6bc23b:c.instructions+=4;goto B6bc23b;
case 0x6bc23e:c.instructions+=3;goto B6bc23e;
case 0x6bc241:c.instructions+=2;goto B6bc241;
case 0x6bc244:c.instructions+=1;goto B6bc244;
case 0x6bc246:goto L6bc246;
case 0x6bc24c:c.instructions+=9;goto B6bc24c;
case 0x6bc24f:c.instructions+=8;goto B6bc24f;
case 0x6bc251:c.instructions+=7;goto B6bc251;
case 0x6bc254:c.instructions+=6;goto B6bc254;
case 0x6bc257:c.instructions+=5;goto B6bc257;
case 0x6bc25a:c.instructions+=4;goto B6bc25a;
case 0x6bc25d:c.instructions+=3;goto B6bc25d;
case 0x6bc260:c.instructions+=2;goto B6bc260;
case 0x6bc264:c.instructions+=1;goto B6bc264;
case 0x6bc26a:goto L6bc26a;
case 0x6bc270:c.instructions+=12;goto B6bc270;
case 0x6bc273:c.instructions+=11;goto B6bc273;
case 0x6bc276:c.instructions+=10;goto B6bc276;
case 0x6bc279:c.instructions+=9;goto B6bc279;
case 0x6bc27b:c.instructions+=8;goto B6bc27b;
case 0x6bc27d:c.instructions+=7;goto B6bc27d;
case 0x6bc280:c.instructions+=6;goto B6bc280;
case 0x6bc283:c.instructions+=5;goto B6bc283;
case 0x6bc286:c.instructions+=4;goto B6bc286;
case 0x6bc289:c.instructions+=3;goto B6bc289;
case 0x6bc28b:c.instructions+=2;goto B6bc28b;
case 0x6bc28d:c.instructions+=1;goto B6bc28d;
case 0x6bc290:goto L6bc290;
case 0x6bc295:c.instructions+=2;goto B6bc295;
case 0x6bc298:c.instructions+=1;goto B6bc298;
case 0x6bc29e:goto L6bc29e;
case 0x6bc2a1:c.instructions+=1;goto B6bc2a1;
case 0x6bc2a3:goto L6bc2a3;
case 0x6bc2a8:c.instructions+=4;goto B6bc2a8;
case 0x6bc2ae:c.instructions+=3;goto B6bc2ae;
case 0x6bc2af:c.instructions+=2;goto B6bc2af;
case 0x6bc2b1:c.instructions+=1;goto B6bc2b1;
case 0x6bc2b6:goto L6bc2b6;
case 0x6bc2b8:c.instructions+=4;goto B6bc2b8;
case 0x6bc2ba:c.instructions+=3;goto B6bc2ba;
case 0x6bc2bb:c.instructions+=2;goto B6bc2bb;
case 0x6bc2be:c.instructions+=1;goto B6bc2be;
case 0x6bc2c0:goto L6bc2c0;
case 0x6bc2c3:c.instructions+=1;goto B6bc2c3;
case 0x6bc2c5:goto L6bc2c5;
case 0x6bc2c7:c.instructions+=2;goto B6bc2c7;
case 0x6bc2ca:c.instructions+=1;goto B6bc2ca;
case 0x6bc2cf:goto L6bc2cf;
case 0x6bc2d0:c.instructions+=4;goto B6bc2d0;
case 0x6bc2d6:c.instructions+=3;goto B6bc2d6;
case 0x6bc2d7:c.instructions+=2;goto B6bc2d7;
case 0x6bc2d9:c.instructions+=1;goto B6bc2d9;
case 0x6bc2de:goto L6bc2de;
case 0x6bc2e0:c.instructions+=1;goto B6bc2e0;
case 0x6bc2e2:goto L6bc2e2;
case 0x6bc2e5:c.instructions+=3;goto B6bc2e5;
case 0x6bc2e8:c.instructions+=2;goto B6bc2e8;
case 0x6bc2eb:c.instructions+=1;goto B6bc2eb;
case 0x6bc2ed:goto L6bc2ed;
case 0x6bc2ef:goto L6bc2ef;
case 0x6bc2f6:goto L6bc2f6;
case 0x6bc2f8:c.instructions+=3;goto B6bc2f8;
case 0x6bc2fb:c.instructions+=2;goto B6bc2fb;
case 0x6bc2fe:c.instructions+=1;goto B6bc2fe;
case 0x6bc301:goto L6bc301;
case 0x6bc303:c.instructions+=1;goto B6bc303;
case 0x6bc305:goto L6bc305;
case 0x6bc308:c.instructions+=2;goto B6bc308;
case 0x6bc30c:c.instructions+=1;goto B6bc30c;
case 0x6bc30e:goto L6bc30e;
case 0x6bc311:c.instructions+=4;goto B6bc311;
case 0x6bc314:c.instructions+=3;goto B6bc314;
case 0x6bc315:c.instructions+=2;goto B6bc315;
case 0x6bc317:c.instructions+=1;goto B6bc317;
case 0x6bc31c:goto L6bc31c;
case 0x6bc31e:c.instructions+=2;goto B6bc31e;
case 0x6bc320:c.instructions+=1;goto B6bc320;
case 0x6bc326:goto L6bc326;
case 0x6bc328:c.instructions+=10;goto B6bc328;
case 0x6bc32b:c.instructions+=9;goto B6bc32b;
case 0x6bc32c:c.instructions+=8;goto B6bc32c;
case 0x6bc32d:c.instructions+=7;goto B6bc32d;
case 0x6bc32e:c.instructions+=6;goto B6bc32e;
case 0x6bc32f:c.instructions+=5;goto B6bc32f;
case 0x6bc332:c.instructions+=4;goto B6bc332;
case 0x6bc333:c.instructions+=3;goto B6bc333;
case 0x6bc339:c.instructions+=2;goto B6bc339;
case 0x6bc33a:c.instructions+=1;goto B6bc33a;
case 0x6bc33f:goto L6bc33f;
case 0x6bc341:c.instructions+=1;goto B6bc341;
case 0x6bc343:goto L6bc343;
case 0x6bc347:c.instructions+=1;goto B6bc347;
case 0x6bc34d:goto L6bc34d;
case 0x6bc353:c.instructions+=1;goto B6bc353;
case 0x6bc359:goto L6bc359;
case 0x6bc35c:c.instructions+=5;goto B6bc35c;
case 0x6bc35f:c.instructions+=4;goto B6bc35f;
case 0x6bc362:c.instructions+=3;goto B6bc362;
case 0x6bc364:c.instructions+=2;goto B6bc364;
case 0x6bc365:c.instructions+=1;goto B6bc365;
case 0x6bc36a:goto L6bc36a;
case 0x6bc36c:c.instructions+=2;goto B6bc36c;
case 0x6bc36e:c.instructions+=1;goto B6bc36e;
case 0x6bc374:goto L6bc374;
case 0x6bc37a:c.instructions+=3;goto B6bc37a;
case 0x6bc37d:c.instructions+=2;goto B6bc37d;
case 0x6bc381:c.instructions+=1;goto B6bc381;
case 0x6bc387:goto L6bc387;
case 0x6bc38a:c.instructions+=2;goto B6bc38a;
case 0x6bc38c:c.instructions+=1;goto B6bc38c;
case 0x6bc391:goto L6bc391;
case 0x6bc393:c.instructions+=2;goto B6bc393;
case 0x6bc395:c.instructions+=1;goto B6bc395;
case 0x6bc39b:goto L6bc39b;
case 0x6bc3a0:goto L6bc3a0;
case 0x6bc3a4:c.instructions+=2;goto B6bc3a4;
case 0x6bc3a8:c.instructions+=1;goto B6bc3a8;
case 0x6bc3aa:goto L6bc3aa;
case 0x6bc3b0:c.instructions+=1;goto B6bc3b0;
case 0x6bc3b3:goto L6bc3b3;
case 0x6bc3b8:c.instructions+=1;goto B6bc3b8;
case 0x6bc3ba:goto L6bc3ba;
case 0x6bc3bb:c.instructions+=3;goto B6bc3bb;
case 0x6bc3be:c.instructions+=2;goto B6bc3be;
case 0x6bc3c0:c.instructions+=1;goto B6bc3c0;
case 0x6bc3c5:goto L6bc3c5;
case 0x6bc3c7:c.instructions+=1;goto B6bc3c7;
case 0x6bc3cd:goto L6bc3cd;
case 0x6bc3d0:c.instructions+=3;goto B6bc3d0;
case 0x6bc3d3:c.instructions+=2;goto B6bc3d3;
case 0x6bc3d9:c.instructions+=1;goto B6bc3d9;
case 0x6bc3db:goto L6bc3db;
case 0x6bc3e2:goto L6bc3e2;
case 0x6bc3e8:c.instructions+=4;goto B6bc3e8;
case 0x6bc3ea:c.instructions+=3;goto B6bc3ea;
case 0x6bc3f0:c.instructions+=2;goto B6bc3f0;
case 0x6bc3f6:c.instructions+=1;goto B6bc3f6;
case 0x6bc3f8:goto L6bc3f8;
case 0x6bc3fe:c.instructions+=1;goto B6bc3fe;
case 0x6bc404:goto L6bc404;
case 0x6bc407:c.instructions+=3;goto B6bc407;
case 0x6bc409:c.instructions+=2;goto B6bc409;
case 0x6bc40b:c.instructions+=1;goto B6bc40b;
case 0x6bc411:goto L6bc411;
case 0x6bc414:c.instructions+=1;goto B6bc414;
case 0x6bc417:goto L6bc417;
case 0x6bc419:c.instructions+=3;goto B6bc419;
case 0x6bc41c:c.instructions+=2;goto B6bc41c;
case 0x6bc420:c.instructions+=1;goto B6bc420;
case 0x6bc422:goto L6bc422;
case 0x6bc424:c.instructions+=1;goto B6bc424;
case 0x6bc425:goto L6bc425;
case 0x6bc428:c.instructions+=2;goto B6bc428;
case 0x6bc429:c.instructions+=1;goto B6bc429;
case 0x6bc42b:goto L6bc42b;
case 0x6bc42d:c.instructions+=1;goto B6bc42d;
case 0x6bc433:goto L6bc433;
case 0x6bc436:c.instructions+=3;goto B6bc436;
case 0x6bc438:c.instructions+=2;goto B6bc438;
case 0x6bc43a:c.instructions+=1;goto B6bc43a;
case 0x6bc43c:goto L6bc43c;
case 0x6bc442:c.instructions+=1;goto B6bc442;
case 0x6bc444:goto L6bc444;
case 0x6bc446:c.instructions+=2;goto B6bc446;
case 0x6bc449:c.instructions+=1;goto B6bc449;
case 0x6bc44b:goto L6bc44b;
case 0x6bc44e:c.instructions+=2;goto B6bc44e;
case 0x6bc450:c.instructions+=1;goto B6bc450;
case 0x6bc452:goto L6bc452;
case 0x6bc455:goto L6bc455;
case 0x6bc458:c.instructions+=2;goto B6bc458;
case 0x6bc459:c.instructions+=1;goto B6bc459;
case 0x6bc45b:goto L6bc45b;
case 0x6bc45d:goto L6bc45d;
case 0x6bc45e:c.instructions+=8;goto B6bc45e;
case 0x6bc460:c.instructions+=7;goto B6bc460;
case 0x6bc461:c.instructions+=6;goto B6bc461;
case 0x6bc464:c.instructions+=5;goto B6bc464;
case 0x6bc465:c.instructions+=4;goto B6bc465;
case 0x6bc466:c.instructions+=3;goto B6bc466;
case 0x6bc46c:c.instructions+=2;goto B6bc46c;
case 0x6bc46e:c.instructions+=1;goto B6bc46e;
case 0x6bc473:goto L6bc473;
case 0x6bc476:c.instructions+=2;goto B6bc476;
case 0x6bc47d:c.instructions+=1;goto B6bc47d;
case 0x6bc47f:goto L6bc47f;
case 0x6bc480:c.instructions+=2;goto B6bc480;
case 0x6bc483:c.instructions+=1;goto B6bc483;
case 0x6bc485:goto L6bc485;
case 0x6bc487:c.instructions+=1;goto B6bc487;
case 0x6bc48c:goto L6bc48c;
case 0x6bc48e:c.instructions+=2;goto B6bc48e;
case 0x6bc490:c.instructions+=1;goto B6bc490;
case 0x6bc492:goto L6bc492;
case 0x6bc494:c.instructions+=1;goto B6bc494;
case 0x6bc499:goto L6bc499;
case 0x6bc49c:c.instructions+=1;goto B6bc49c;
case 0x6bc49e:goto L6bc49e;
case 0x6bc4a1:c.instructions+=4;goto B6bc4a1;
case 0x6bc4a4:c.instructions+=3;goto B6bc4a4;
case 0x6bc4a8:c.instructions+=2;goto B6bc4a8;
case 0x6bc4ab:c.instructions+=1;goto B6bc4ab;
case 0x6bc4b1:goto L6bc4b1;
case 0x6bc4b6:goto L6bc4b6;
case 0x6bc4bb:c.instructions+=1;goto B6bc4bb;
case 0x6bc4c0:goto L6bc4c0;
case 0x6bc4c3:goto L6bc4c3;
case 0x6bc4c6:c.instructions+=1;goto B6bc4c6;
case 0x6bc4c8:goto L6bc4c8;
case 0x6bc4ce:c.instructions+=9;goto B6bc4ce;
case 0x6bc4d1:c.instructions+=8;goto B6bc4d1;
case 0x6bc4d2:c.instructions+=7;goto B6bc4d2;
case 0x6bc4d5:c.instructions+=6;goto B6bc4d5;
case 0x6bc4d8:c.instructions+=5;goto B6bc4d8;
case 0x6bc4d9:c.instructions+=4;goto B6bc4d9;
case 0x6bc4de:c.instructions+=3;goto B6bc4de;
case 0x6bc4e3:c.instructions+=2;goto B6bc4e3;
case 0x6bc4e4:c.instructions+=1;goto B6bc4e4;
case 0x6bc4e9:goto L6bc4e9;
case 0x6bc4eb:c.instructions+=2;goto B6bc4eb;
case 0x6bc4ed:c.instructions+=1;goto B6bc4ed;
case 0x6bc4f3:goto L6bc4f3;
case 0x6bc4f9:c.instructions+=2;goto B6bc4f9;
case 0x6bc4fc:c.instructions+=1;goto B6bc4fc;
case 0x6bc501:goto L6bc501;
case 0x6bc503:c.instructions+=2;goto B6bc503;
case 0x6bc505:c.instructions+=1;goto B6bc505;
case 0x6bc50b:goto L6bc50b;
case 0x6bc511:c.instructions+=7;goto B6bc511;
case 0x6bc514:c.instructions+=6;goto B6bc514;
case 0x6bc517:c.instructions+=5;goto B6bc517;
case 0x6bc51a:c.instructions+=4;goto B6bc51a;
case 0x6bc51d:c.instructions+=3;goto B6bc51d;
case 0x6bc51f:c.instructions+=2;goto B6bc51f;
case 0x6bc522:c.instructions+=1;goto B6bc522;
case 0x6bc528:goto L6bc528;
case 0x6bc52a:goto L6bc52a;
case 0x6bc52c:c.instructions+=1;goto B6bc52c;
case 0x6bc52f:goto L6bc52f;
case 0x6bc531:goto L6bc531;
case 0x6bc537:c.instructions+=6;goto B6bc537;
case 0x6bc53a:c.instructions+=5;goto B6bc53a;
case 0x6bc53d:c.instructions+=4;goto B6bc53d;
case 0x6bc540:c.instructions+=3;goto B6bc540;
case 0x6bc543:c.instructions+=2;goto B6bc543;
case 0x6bc545:c.instructions+=1;goto B6bc545;
case 0x6bc548:goto L6bc548;
case 0x6bc54a:goto L6bc54a;
case 0x6bc54c:c.instructions+=1;goto B6bc54c;
case 0x6bc54f:goto L6bc54f;
case 0x6bc551:goto L6bc551;
case 0x6bc557:c.instructions+=6;goto B6bc557;
case 0x6bc55a:c.instructions+=5;goto B6bc55a;
case 0x6bc55d:c.instructions+=4;goto B6bc55d;
case 0x6bc560:c.instructions+=3;goto B6bc560;
case 0x6bc562:c.instructions+=2;goto B6bc562;
case 0x6bc565:c.instructions+=1;goto B6bc565;
case 0x6bc56b:goto L6bc56b;
case 0x6bc56d:goto L6bc56d;
case 0x6bc56f:c.instructions+=1;goto B6bc56f;
case 0x6bc572:goto L6bc572;
case 0x6bc574:goto L6bc574;
case 0x6bc575:c.instructions+=2;goto B6bc575;
case 0x6bc577:c.instructions+=1;goto B6bc577;
case 0x6bc57c:goto L6bc57c;
case 0x6bc57e:c.instructions+=2;goto B6bc57e;
case 0x6bc580:c.instructions+=1;goto B6bc580;
case 0x6bc586:goto L6bc586;
case 0x6bc58a:goto L6bc58a;
case 0x6bc58c:c.instructions+=2;goto B6bc58c;
case 0x6bc58f:c.instructions+=1;goto B6bc58f;
case 0x6bc595:goto L6bc595;
case 0x6bc599:c.instructions+=1;goto B6bc599;
case 0x6bc59f:goto L6bc59f;
case 0x6bc5a3:c.instructions+=3;goto B6bc5a3;
case 0x6bc5a6:c.instructions+=2;goto B6bc5a6;
case 0x6bc5a9:c.instructions+=1;goto B6bc5a9;
case 0x6bc5af:goto L6bc5af;
case 0x6bc5b6:c.instructions+=1;goto B6bc5b6;
case 0x6bc5b8:goto L6bc5b8;
case 0x6bc5ba:c.instructions+=2;goto B6bc5ba;
case 0x6bc5bd:c.instructions+=1;goto B6bc5bd;
case 0x6bc5bf:goto L6bc5bf;
case 0x6bc5c1:c.instructions+=17;goto B6bc5c1;
case 0x6bc5c4:c.instructions+=16;goto B6bc5c4;
case 0x6bc5c5:c.instructions+=15;goto B6bc5c5;
case 0x6bc5c6:c.instructions+=14;goto B6bc5c6;
case 0x6bc5c7:c.instructions+=13;goto B6bc5c7;
case 0x6bc5c8:c.instructions+=12;goto B6bc5c8;
case 0x6bc5cb:c.instructions+=11;goto B6bc5cb;
case 0x6bc5ce:c.instructions+=10;goto B6bc5ce;
case 0x6bc5cf:c.instructions+=9;goto B6bc5cf;
case 0x6bc5d0:c.instructions+=8;goto B6bc5d0;
case 0x6bc5d1:c.instructions+=7;goto B6bc5d1;
case 0x6bc5d2:c.instructions+=6;goto B6bc5d2;
case 0x6bc5d5:c.instructions+=5;goto B6bc5d5;
case 0x6bc5da:c.instructions+=4;goto B6bc5da;
case 0x6bc5dc:c.instructions+=3;goto B6bc5dc;
case 0x6bc5e0:c.instructions+=2;goto B6bc5e0;
case 0x6bc5e3:c.instructions+=1;goto B6bc5e3;
case 0x6bc5e5:goto L6bc5e5;
case 0x6bc5eb:c.instructions+=1;goto B6bc5eb;
case 0x6bc5ee:goto L6bc5ee;
case 0x6bc5f1:c.instructions+=3;goto B6bc5f1;
case 0x6bc5f2:c.instructions+=2;goto B6bc5f2;
case 0x6bc5f3:c.instructions+=1;goto B6bc5f3;
case 0x6bc5f8:goto L6bc5f8;
case 0x6bc5fa:c.instructions+=1;goto B6bc5fa;
case 0x6bc5fc:goto L6bc5fc;
case 0x6bc5ff:c.instructions+=3;goto B6bc5ff;
case 0x6bc600:c.instructions+=2;goto B6bc600;
case 0x6bc601:c.instructions+=1;goto B6bc601;
case 0x6bc606:goto L6bc606;
case 0x6bc608:c.instructions+=1;goto B6bc608;
case 0x6bc60a:goto L6bc60a;
case 0x6bc611:goto L6bc611;
case 0x6bc614:c.instructions+=2;goto B6bc614;
case 0x6bc617:c.instructions+=1;goto B6bc617;
case 0x6bc619:goto L6bc619;
case 0x6bc61d:c.instructions+=1;goto B6bc61d;
case 0x6bc61f:goto L6bc61f;
case 0x6bc620:c.instructions+=2;goto B6bc620;
case 0x6bc623:c.instructions+=1;goto B6bc623;
case 0x6bc625:goto L6bc625;
case 0x6bc629:c.instructions+=1;goto B6bc629;
case 0x6bc630:goto L6bc630;
case 0x6bc634:c.instructions+=1;goto B6bc634;
case 0x6bc63a:goto L6bc63a;
case 0x6bc63c:c.instructions+=3;goto B6bc63c;
case 0x6bc63e:c.instructions+=2;goto B6bc63e;
case 0x6bc641:c.instructions+=1;goto B6bc641;
case 0x6bc643:goto L6bc643;
case 0x6bc645:c.instructions+=5;goto B6bc645;
case 0x6bc648:c.instructions+=4;goto B6bc648;
case 0x6bc64b:c.instructions+=3;goto B6bc64b;
case 0x6bc64c:c.instructions+=2;goto B6bc64c;
case 0x6bc64e:c.instructions+=1;goto B6bc64e;
case 0x6bc653:goto L6bc653;
case 0x6bc655:c.instructions+=2;goto B6bc655;
case 0x6bc657:c.instructions+=1;goto B6bc657;
case 0x6bc65d:goto L6bc65d;
case 0x6bc65f:c.instructions+=5;goto B6bc65f;
case 0x6bc662:c.instructions+=4;goto B6bc662;
case 0x6bc665:c.instructions+=3;goto B6bc665;
case 0x6bc666:c.instructions+=2;goto B6bc666;
case 0x6bc668:c.instructions+=1;goto B6bc668;
case 0x6bc66d:goto L6bc66d;
case 0x6bc66f:c.instructions+=2;goto B6bc66f;
case 0x6bc671:c.instructions+=1;goto B6bc671;
case 0x6bc677:goto L6bc677;
case 0x6bc67c:goto L6bc67c;
case 0x6bc67e:goto L6bc67e;
case 0x6bc681:c.instructions+=2;goto B6bc681;
case 0x6bc683:c.instructions+=1;goto B6bc683;
case 0x6bc689:goto L6bc689;
case 0x6bc68b:c.instructions+=20;goto B6bc68b;
case 0x6bc68e:c.instructions+=19;goto B6bc68e;
case 0x6bc68f:c.instructions+=18;goto B6bc68f;
case 0x6bc690:c.instructions+=17;goto B6bc690;
case 0x6bc691:c.instructions+=16;goto B6bc691;
case 0x6bc692:c.instructions+=15;goto B6bc692;
case 0x6bc695:c.instructions+=14;goto B6bc695;
case 0x6bc698:c.instructions+=13;goto B6bc698;
case 0x6bc699:c.instructions+=12;goto B6bc699;
case 0x6bc69a:c.instructions+=11;goto B6bc69a;
case 0x6bc69b:c.instructions+=10;goto B6bc69b;
case 0x6bc69c:c.instructions+=9;goto B6bc69c;
case 0x6bc69f:c.instructions+=8;goto B6bc69f;
case 0x6bc6a3:c.instructions+=7;goto B6bc6a3;
case 0x6bc6a7:c.instructions+=6;goto B6bc6a7;
case 0x6bc6aa:c.instructions+=5;goto B6bc6aa;
case 0x6bc6ae:c.instructions+=4;goto B6bc6ae;
case 0x6bc6b2:c.instructions+=3;goto B6bc6b2;
case 0x6bc6b5:c.instructions+=2;goto B6bc6b5;
case 0x6bc6b8:c.instructions+=1;goto B6bc6b8;
case 0x6bc6be:goto L6bc6be;
case 0x6bc6c1:c.instructions+=2;goto B6bc6c1;
case 0x6bc6c7:c.instructions+=1;goto B6bc6c7;
case 0x6bc6ca:goto L6bc6ca;
case 0x6bc6cd:c.instructions+=3;goto B6bc6cd;
case 0x6bc6ce:c.instructions+=2;goto B6bc6ce;
case 0x6bc6cf:c.instructions+=1;goto B6bc6cf;
case 0x6bc6d4:goto L6bc6d4;
case 0x6bc6d7:c.instructions+=4;goto B6bc6d7;
case 0x6bc6da:c.instructions+=3;goto B6bc6da;
case 0x6bc6db:c.instructions+=2;goto B6bc6db;
case 0x6bc6dc:c.instructions+=1;goto B6bc6dc;
case 0x6bc6e1:goto L6bc6e1;
case 0x6bc6e5:c.instructions+=1;goto B6bc6e5;
case 0x6bc6e7:goto L6bc6e7;
case 0x6bc6ee:c.instructions+=1;goto B6bc6ee;
case 0x6bc6f0:goto L6bc6f0;
case 0x6bc6f2:c.instructions+=1;goto B6bc6f2;
case 0x6bc6f4:goto L6bc6f4;
case 0x6bc6fb:goto L6bc6fb;
case 0x6bc6fe:c.instructions+=2;goto B6bc6fe;
case 0x6bc701:c.instructions+=1;goto B6bc701;
case 0x6bc703:goto L6bc703;
case 0x6bc707:c.instructions+=1;goto B6bc707;
case 0x6bc709:goto L6bc709;
case 0x6bc70d:c.instructions+=1;goto B6bc70d;
case 0x6bc70f:goto L6bc70f;
case 0x6bc712:c.instructions+=23;goto B6bc712;
case 0x6bc715:c.instructions+=22;goto B6bc715;
case 0x6bc716:c.instructions+=21;goto B6bc716;
case 0x6bc717:c.instructions+=20;goto B6bc717;
case 0x6bc718:c.instructions+=19;goto B6bc718;
case 0x6bc719:c.instructions+=18;goto B6bc719;
case 0x6bc71c:c.instructions+=17;goto B6bc71c;
case 0x6bc71f:c.instructions+=16;goto B6bc71f;
case 0x6bc720:c.instructions+=15;goto B6bc720;
case 0x6bc721:c.instructions+=14;goto B6bc721;
case 0x6bc722:c.instructions+=13;goto B6bc722;
case 0x6bc723:c.instructions+=12;goto B6bc723;
case 0x6bc726:c.instructions+=11;goto B6bc726;
case 0x6bc729:c.instructions+=10;goto B6bc729;
case 0x6bc72a:c.instructions+=9;goto B6bc72a;
case 0x6bc72b:c.instructions+=8;goto B6bc72b;
case 0x6bc72c:c.instructions+=7;goto B6bc72c;
case 0x6bc72d:c.instructions+=6;goto B6bc72d;
case 0x6bc730:c.instructions+=5;goto B6bc730;
case 0x6bc735:c.instructions+=4;goto B6bc735;
case 0x6bc738:c.instructions+=3;goto B6bc738;
case 0x6bc73d:c.instructions+=2;goto B6bc73d;
case 0x6bc744:c.instructions+=1;goto B6bc744;
case 0x6bc746:goto L6bc746;
case 0x6bc747:c.instructions+=3;goto B6bc747;
case 0x6bc74a:c.instructions+=2;goto B6bc74a;
case 0x6bc74d:c.instructions+=1;goto B6bc74d;
case 0x6bc753:goto L6bc753;
case 0x6bc755:goto L6bc755;
case 0x6bc75c:goto L6bc75c;
case 0x6bc75f:c.instructions+=2;goto B6bc75f;
case 0x6bc763:c.instructions+=1;goto B6bc763;
case 0x6bc769:goto L6bc769;
case 0x6bc76d:c.instructions+=1;goto B6bc76d;
case 0x6bc76f:goto L6bc76f;
case 0x6bc771:c.instructions+=5;goto B6bc771;
case 0x6bc774:c.instructions+=4;goto B6bc774;
case 0x6bc777:c.instructions+=3;goto B6bc777;
case 0x6bc778:c.instructions+=2;goto B6bc778;
case 0x6bc77a:c.instructions+=1;goto B6bc77a;
case 0x6bc77f:goto L6bc77f;
case 0x6bc781:c.instructions+=2;goto B6bc781;
case 0x6bc783:c.instructions+=1;goto B6bc783;
case 0x6bc789:goto L6bc789;
case 0x6bc78b:c.instructions+=1;goto B6bc78b;
case 0x6bc790:goto L6bc790;
case 0x6bc794:c.instructions+=1;goto B6bc794;
case 0x6bc79a:goto L6bc79a;
case 0x6bc79c:c.instructions+=6;goto B6bc79c;
case 0x6bc79f:c.instructions+=5;goto B6bc79f;
case 0x6bc7a2:c.instructions+=4;goto B6bc7a2;
case 0x6bc7a3:c.instructions+=3;goto B6bc7a3;
case 0x6bc7a5:c.instructions+=2;goto B6bc7a5;
case 0x6bc7ac:c.instructions+=1;goto B6bc7ac;
case 0x6bc7b1:goto L6bc7b1;
case 0x6bc7b3:c.instructions+=2;goto B6bc7b3;
case 0x6bc7b5:c.instructions+=1;goto B6bc7b5;
case 0x6bc7bb:goto L6bc7bb;
case 0x6bc7bd:c.instructions+=5;goto B6bc7bd;
case 0x6bc7c0:c.instructions+=4;goto B6bc7c0;
case 0x6bc7c3:c.instructions+=3;goto B6bc7c3;
case 0x6bc7c4:c.instructions+=2;goto B6bc7c4;
case 0x6bc7c6:c.instructions+=1;goto B6bc7c6;
case 0x6bc7cb:goto L6bc7cb;
case 0x6bc7cd:c.instructions+=2;goto B6bc7cd;
case 0x6bc7cf:c.instructions+=1;goto B6bc7cf;
case 0x6bc7d5:goto L6bc7d5;
case 0x6bc7d7:c.instructions+=2;goto B6bc7d7;
case 0x6bc7da:c.instructions+=1;goto B6bc7da;
case 0x6bc7df:goto L6bc7df;
case 0x6bc7e3:c.instructions+=1;goto B6bc7e3;
case 0x6bc7e9:goto L6bc7e9;
case 0x6bc7ed:c.instructions+=1;goto B6bc7ed;
case 0x6bc7ef:goto L6bc7ef;
case 0x6bc7f7:c.instructions+=1;goto B6bc7f7;
case 0x6bc7f9:goto L6bc7f9;
case 0x6bc7fc:goto L6bc7fc;
case 0x6bc7fd:c.instructions+=2;goto B6bc7fd;
case 0x6bc800:c.instructions+=1;goto B6bc800;
case 0x6bc802:goto L6bc802;
case 0x6bc806:goto L6bc806;
case 0x6bc80a:c.instructions+=1;goto B6bc80a;
case 0x6bc810:goto L6bc810;
case 0x6bc812:goto L6bc812;
case 0x6bc816:c.instructions+=1;goto B6bc816;
case 0x6bc81c:goto L6bc81c;
case 0x6bc81f:c.instructions+=2;goto B6bc81f;
case 0x6bc821:c.instructions+=1;goto B6bc821;
case 0x6bc827:goto L6bc827;
case 0x6bc82a:c.instructions+=2;goto B6bc82a;
case 0x6bc82c:c.instructions+=1;goto B6bc82c;
case 0x6bc82e:goto L6bc82e;
case 0x6bc830:c.instructions+=1;goto B6bc830;
case 0x6bc832:goto L6bc832;
case 0x6bc835:c.instructions+=22;goto B6bc835;
case 0x6bc838:c.instructions+=21;goto B6bc838;
case 0x6bc839:c.instructions+=20;goto B6bc839;
case 0x6bc83a:c.instructions+=19;goto B6bc83a;
case 0x6bc83b:c.instructions+=18;goto B6bc83b;
case 0x6bc83c:c.instructions+=17;goto B6bc83c;
case 0x6bc83e:c.instructions+=16;goto B6bc83e;
case 0x6bc841:c.instructions+=15;goto B6bc841;
case 0x6bc842:c.instructions+=14;goto B6bc842;
case 0x6bc843:c.instructions+=13;goto B6bc843;
case 0x6bc844:c.instructions+=12;goto B6bc844;
case 0x6bc845:c.instructions+=11;goto B6bc845;
case 0x6bc847:c.instructions+=10;goto B6bc847;
case 0x6bc84a:c.instructions+=9;goto B6bc84a;
case 0x6bc84d:c.instructions+=8;goto B6bc84d;
case 0x6bc850:c.instructions+=7;goto B6bc850;
case 0x6bc853:c.instructions+=6;goto B6bc853;
case 0x6bc858:c.instructions+=5;goto B6bc858;
case 0x6bc85d:c.instructions+=4;goto B6bc85d;
case 0x6bc862:c.instructions+=3;goto B6bc862;
case 0x6bc865:c.instructions+=2;goto B6bc865;
case 0x6bc868:c.instructions+=1;goto B6bc868;
case 0x6bc86a:goto L6bc86a;
case 0x6bc870:c.instructions+=1;goto B6bc870;
case 0x6bc873:goto L6bc873;
case 0x6bc877:c.instructions+=1;goto B6bc877;
case 0x6bc879:goto L6bc879;
case 0x6bc87c:c.instructions+=3;goto B6bc87c;
case 0x6bc87d:c.instructions+=2;goto B6bc87d;
case 0x6bc880:c.instructions+=1;goto B6bc880;
case 0x6bc885:goto L6bc885;
case 0x6bc887:c.instructions+=1;goto B6bc887;
case 0x6bc889:goto L6bc889;
case 0x6bc890:goto L6bc890;
case 0x6bc894:c.instructions+=3;goto B6bc894;
case 0x6bc895:c.instructions+=2;goto B6bc895;
case 0x6bc898:c.instructions+=1;goto B6bc898;
case 0x6bc89a:goto L6bc89a;
case 0x6bc89e:c.instructions+=1;goto B6bc89e;
case 0x6bc8a0:goto L6bc8a0;
case 0x6bc8a7:goto L6bc8a7;
case 0x6bc8a8:c.instructions+=2;goto B6bc8a8;
case 0x6bc8ab:c.instructions+=1;goto B6bc8ab;
case 0x6bc8b1:goto L6bc8b1;
case 0x6bc8b4:c.instructions+=2;goto B6bc8b4;
case 0x6bc8b8:c.instructions+=1;goto B6bc8b8;
case 0x6bc8be:goto L6bc8be;
case 0x6bc8c2:c.instructions+=1;goto B6bc8c2;
case 0x6bc8c4:goto L6bc8c4;
case 0x6bc8c6:c.instructions+=5;goto B6bc8c6;
case 0x6bc8c9:c.instructions+=4;goto B6bc8c9;
case 0x6bc8cc:c.instructions+=3;goto B6bc8cc;
case 0x6bc8cd:c.instructions+=2;goto B6bc8cd;
case 0x6bc8cf:c.instructions+=1;goto B6bc8cf;
case 0x6bc8d4:goto L6bc8d4;
case 0x6bc8d6:c.instructions+=2;goto B6bc8d6;
case 0x6bc8d8:c.instructions+=1;goto B6bc8d8;
case 0x6bc8de:goto L6bc8de;
case 0x6bc8e0:goto L6bc8e0;
case 0x6bc8e3:goto L6bc8e3;
case 0x6bc8e6:c.instructions+=3;goto B6bc8e6;
case 0x6bc8e8:c.instructions+=2;goto B6bc8e8;
case 0x6bc8e9:c.instructions+=1;goto B6bc8e9;
case 0x6bc8ee:goto L6bc8ee;
case 0x6bc8f0:c.instructions+=2;goto B6bc8f0;
case 0x6bc8f2:c.instructions+=1;goto B6bc8f2;
case 0x6bc8f8:goto L6bc8f8;
case 0x6bc8fc:c.instructions+=1;goto B6bc8fc;
case 0x6bc8fe:goto L6bc8fe;
case 0x6bc900:c.instructions+=2;goto B6bc900;
case 0x6bc903:c.instructions+=1;goto B6bc903;
case 0x6bc905:goto L6bc905;
case 0x6bc908:c.instructions+=18;goto B6bc908;
case 0x6bc90b:c.instructions+=17;goto B6bc90b;
case 0x6bc90e:c.instructions+=16;goto B6bc90e;
case 0x6bc911:c.instructions+=15;goto B6bc911;
case 0x6bc914:c.instructions+=14;goto B6bc914;
case 0x6bc915:c.instructions+=13;goto B6bc915;
case 0x6bc916:c.instructions+=12;goto B6bc916;
case 0x6bc917:c.instructions+=11;goto B6bc917;
case 0x6bc918:c.instructions+=10;goto B6bc918;
case 0x6bc91e:c.instructions+=9;goto B6bc91e;
case 0x6bc921:c.instructions+=8;goto B6bc921;
case 0x6bc924:c.instructions+=7;goto B6bc924;
case 0x6bc927:c.instructions+=6;goto B6bc927;
case 0x6bc92a:c.instructions+=5;goto B6bc92a;
case 0x6bc92f:c.instructions+=4;goto B6bc92f;
case 0x6bc932:c.instructions+=3;goto B6bc932;
case 0x6bc933:c.instructions+=2;goto B6bc933;
case 0x6bc935:c.instructions+=1;goto B6bc935;
case 0x6bc93a:goto L6bc93a;
case 0x6bc93c:c.instructions+=2;goto B6bc93c;
case 0x6bc93e:c.instructions+=1;goto B6bc93e;
case 0x6bc944:goto L6bc944;
case 0x6bc945:c.instructions+=2;goto B6bc945;
case 0x6bc948:c.instructions+=1;goto B6bc948;
case 0x6bc94a:goto L6bc94a;
case 0x6bc94e:c.instructions+=1;goto B6bc94e;
case 0x6bc954:goto L6bc954;
case 0x6bc957:c.instructions+=2;goto B6bc957;
case 0x6bc959:c.instructions+=1;goto B6bc959;
case 0x6bc95e:goto L6bc95e;
case 0x6bc960:c.instructions+=2;goto B6bc960;
case 0x6bc962:c.instructions+=1;goto B6bc962;
case 0x6bc968:goto L6bc968;
case 0x6bc96c:c.instructions+=1;goto B6bc96c;
case 0x6bc971:goto L6bc971;
case 0x6bc977:c.instructions+=2;goto B6bc977;
case 0x6bc979:c.instructions+=1;goto B6bc979;
case 0x6bc97e:goto L6bc97e;
case 0x6bc980:c.instructions+=2;goto B6bc980;
case 0x6bc982:c.instructions+=1;goto B6bc982;
case 0x6bc988:goto L6bc988;
case 0x6bc98d:goto L6bc98d;
case 0x6bc98f:c.instructions+=1;goto B6bc98f;
case 0x6bc995:goto L6bc995;
case 0x6bc997:c.instructions+=1;goto B6bc997;
case 0x6bc99d:goto L6bc99d;
case 0x6bc9a3:c.instructions+=7;goto B6bc9a3;
case 0x6bc9a6:c.instructions+=6;goto B6bc9a6;
case 0x6bc9a9:c.instructions+=5;goto B6bc9a9;
case 0x6bc9ab:c.instructions+=4;goto B6bc9ab;
case 0x6bc9ae:c.instructions+=3;goto B6bc9ae;
case 0x6bc9b1:c.instructions+=2;goto B6bc9b1;
case 0x6bc9b7:c.instructions+=1;goto B6bc9b7;
case 0x6bc9b9:goto L6bc9b9;
case 0x6bc9bf:c.instructions+=5;goto B6bc9bf;
case 0x6bc9c4:c.instructions+=4;goto B6bc9c4;
case 0x6bc9c9:c.instructions+=3;goto B6bc9c9;
case 0x6bc9cc:c.instructions+=2;goto B6bc9cc;
case 0x6bc9cd:c.instructions+=1;goto B6bc9cd;
case 0x6bc9d2:goto L6bc9d2;
case 0x6bc9d5:c.instructions+=2;goto B6bc9d5;
case 0x6bc9da:c.instructions+=1;goto B6bc9da;
case 0x6bc9df:goto L6bc9df;
case 0x6bc9e1:c.instructions+=3;goto B6bc9e1;
case 0x6bc9e4:c.instructions+=2;goto B6bc9e4;
case 0x6bc9e7:c.instructions+=1;goto B6bc9e7;
case 0x6bc9ed:goto L6bc9ed;
case 0x6bc9f0:c.instructions+=5;goto B6bc9f0;
case 0x6bc9f2:c.instructions+=4;goto B6bc9f2;
case 0x6bc9f8:c.instructions+=3;goto B6bc9f8;
case 0x6bc9fb:c.instructions+=2;goto B6bc9fb;
case 0x6bc9fe:c.instructions+=1;goto B6bc9fe;
case 0x6bca01:goto L6bca01;
case 0x6bca04:c.instructions+=8;goto B6bca04;
case 0x6bca07:c.instructions+=7;goto B6bca07;
case 0x6bca09:c.instructions+=6;goto B6bca09;
case 0x6bca0b:c.instructions+=5;goto B6bca0b;
case 0x6bca0c:c.instructions+=4;goto B6bca0c;
case 0x6bca0d:c.instructions+=3;goto B6bca0d;
case 0x6bca0e:c.instructions+=2;goto B6bca0e;
case 0x6bca0f:c.instructions+=1;goto B6bca0f;
case 0x6bca11:goto L6bca11;
case 0x6bca17:c.instructions+=3;goto B6bca17;
case 0x6bca1a:c.instructions+=2;goto B6bca1a;
case 0x6bca1d:c.instructions+=1;goto B6bca1d;
case 0x6bca20:goto L6bca20;
case 0x6bca22:c.instructions+=8;goto B6bca22;
case 0x6bca25:c.instructions+=7;goto B6bca25;
case 0x6bca28:c.instructions+=6;goto B6bca28;
case 0x6bca2b:c.instructions+=5;goto B6bca2b;
case 0x6bca2d:c.instructions+=4;goto B6bca2d;
case 0x6bca30:c.instructions+=3;goto B6bca30;
case 0x6bca33:c.instructions+=2;goto B6bca33;
case 0x6bca36:c.instructions+=1;goto B6bca36;
case 0x6bca38:goto L6bca38;
case 0x6bca3c:c.instructions+=1;goto B6bca3c;
case 0x6bca41:goto L6bca41;
case 0x6bca42:c.instructions+=3;goto B6bca42;
case 0x6bca45:c.instructions+=2;goto B6bca45;
case 0x6bca47:c.instructions+=1;goto B6bca47;
case 0x6bca4c:goto L6bca4c;
case 0x6bca4e:c.instructions+=1;goto B6bca4e;
case 0x6bca50:goto L6bca50;
case 0x6bca54:c.instructions+=3;goto B6bca54;
case 0x6bca57:c.instructions+=2;goto B6bca57;
case 0x6bca5e:c.instructions+=1;goto B6bca5e;
case 0x6bca60:goto L6bca60;
case 0x6bca64:c.instructions+=1;goto B6bca64;
case 0x6bca66:goto L6bca66;
case 0x6bca69:c.instructions+=5;goto B6bca69;
case 0x6bca6c:c.instructions+=4;goto B6bca6c;
case 0x6bca6d:c.instructions+=3;goto B6bca6d;
case 0x6bca6e:c.instructions+=2;goto B6bca6e;
case 0x6bca70:c.instructions+=1;goto B6bca70;
case 0x6bca75:goto L6bca75;
case 0x6bca77:c.instructions+=2;goto B6bca77;
case 0x6bca79:c.instructions+=1;goto B6bca79;
case 0x6bca7f:goto L6bca7f;
case 0x6bca83:c.instructions+=1;goto B6bca83;
case 0x6bca85:goto L6bca85;
case 0x6bca88:c.instructions+=2;goto B6bca88;
case 0x6bca8a:c.instructions+=1;goto B6bca8a;
case 0x6bca8f:goto L6bca8f;
case 0x6bca91:c.instructions+=2;goto B6bca91;
case 0x6bca93:c.instructions+=1;goto B6bca93;
case 0x6bca99:goto L6bca99;
case 0x6bca9d:goto L6bca9d;
case 0x6bca9f:c.instructions+=1;goto B6bca9f;
case 0x6bcaa4:goto L6bcaa4;
case 0x6bcaa6:c.instructions+=1;goto B6bcaa6;
case 0x6bcaa8:goto L6bcaa8;
case 0x6bcaaa:c.instructions+=1;goto B6bcaaa;
case 0x6bcaaf:goto L6bcaaf;
case 0x6bcab1:c.instructions+=1;goto B6bcab1;
case 0x6bcab3:goto L6bcab3;
case 0x6bcab6:c.instructions+=6;goto B6bcab6;
case 0x6bcab9:c.instructions+=5;goto B6bcab9;
case 0x6bcabc:c.instructions+=4;goto B6bcabc;
case 0x6bcabf:c.instructions+=3;goto B6bcabf;
case 0x6bcac3:c.instructions+=2;goto B6bcac3;
case 0x6bcac6:c.instructions+=1;goto B6bcac6;
case 0x6bcacc:goto L6bcacc;
case 0x6bcad2:c.instructions+=2;goto B6bcad2;
case 0x6bcad4:c.instructions+=1;goto B6bcad4;
case 0x6bcad9:goto L6bcad9;
case 0x6bcadb:c.instructions+=2;goto B6bcadb;
case 0x6bcadd:c.instructions+=1;goto B6bcadd;
case 0x6bcae3:goto L6bcae3;
case 0x6bcae9:c.instructions+=3;goto B6bcae9;
case 0x6bcaec:c.instructions+=2;goto B6bcaec;
case 0x6bcaee:c.instructions+=1;goto B6bcaee;
case 0x6bcaf3:goto L6bcaf3;
case 0x6bcaf5:goto L6bcaf5;
case 0x6bcaf7:c.instructions+=1;goto B6bcaf7;
case 0x6bcafd:goto L6bcafd;
case 0x6bcb00:c.instructions+=3;goto B6bcb00;
case 0x6bcb04:c.instructions+=2;goto B6bcb04;
case 0x6bcb06:c.instructions+=1;goto B6bcb06;
case 0x6bcb08:goto L6bcb08;
case 0x6bcb0b:c.instructions+=1;goto B6bcb0b;
case 0x6bcb0e:goto L6bcb0e;
case 0x6bcb10:c.instructions+=6;goto B6bcb10;
case 0x6bcb13:c.instructions+=5;goto B6bcb13;
case 0x6bcb16:c.instructions+=4;goto B6bcb16;
case 0x6bcb19:c.instructions+=3;goto B6bcb19;
case 0x6bcb1c:c.instructions+=2;goto B6bcb1c;
case 0x6bcb1f:c.instructions+=1;goto B6bcb1f;
case 0x6bcb21:goto L6bcb21;
case 0x6bcb24:c.instructions+=1;goto B6bcb24;
case 0x6bcb26:goto L6bcb26;
case 0x6bcb29:c.instructions+=3;goto B6bcb29;
case 0x6bcb2a:c.instructions+=2;goto B6bcb2a;
case 0x6bcb2d:c.instructions+=1;goto B6bcb2d;
case 0x6bcb2f:goto L6bcb2f;
case 0x6bcb32:goto L6bcb32;
case 0x6bcb35:c.instructions+=2;goto B6bcb35;
case 0x6bcb38:c.instructions+=1;goto B6bcb38;
case 0x6bcb3a:goto L6bcb3a;
case 0x6bcb3c:c.instructions+=5;goto B6bcb3c;
case 0x6bcb3e:c.instructions+=4;goto B6bcb3e;
case 0x6bcb40:c.instructions+=3;goto B6bcb40;
case 0x6bcb45:c.instructions+=2;goto B6bcb45;
case 0x6bcb47:c.instructions+=1;goto B6bcb47;
case 0x6bcb4c:goto L6bcb4c;
case 0x6bcb4e:c.instructions+=2;goto B6bcb4e;
case 0x6bcb50:c.instructions+=1;goto B6bcb50;
case 0x6bcb56:goto L6bcb56;
case 0x6bcb5c:c.instructions+=2;goto B6bcb5c;
case 0x6bcb5e:c.instructions+=1;goto B6bcb5e;
case 0x6bcb63:goto L6bcb63;
case 0x6bcb65:c.instructions+=2;goto B6bcb65;
case 0x6bcb67:c.instructions+=1;goto B6bcb67;
case 0x6bcb6d:goto L6bcb6d;
case 0x6bcb6e:c.instructions+=8;goto B6bcb6e;
case 0x6bcb70:c.instructions+=7;goto B6bcb70;
case 0x6bcb71:c.instructions+=6;goto B6bcb71;
case 0x6bcb74:c.instructions+=5;goto B6bcb74;
case 0x6bcb76:c.instructions+=4;goto B6bcb76;
case 0x6bcb79:c.instructions+=3;goto B6bcb79;
case 0x6bcb7b:c.instructions+=2;goto B6bcb7b;
case 0x6bcb81:c.instructions+=1;goto B6bcb81;
case 0x6bcb86:goto L6bcb86;
case 0x6bcb89:c.instructions+=3;goto B6bcb89;
case 0x6bcb8c:c.instructions+=2;goto B6bcb8c;
case 0x6bcb8f:c.instructions+=1;goto B6bcb8f;
case 0x6bcb95:goto L6bcb95;
case 0x6bcb98:c.instructions+=15;goto B6bcb98;
case 0x6bcb9b:c.instructions+=14;goto B6bcb9b;
case 0x6bcb9d:c.instructions+=13;goto B6bcb9d;
case 0x6bcba3:c.instructions+=12;goto B6bcba3;
case 0x6bcba6:c.instructions+=11;goto B6bcba6;
case 0x6bcba8:c.instructions+=10;goto B6bcba8;
case 0x6bcbab:c.instructions+=9;goto B6bcbab;
case 0x6bcbad:c.instructions+=8;goto B6bcbad;
case 0x6bcbb3:c.instructions+=7;goto B6bcbb3;
case 0x6bcbb6:c.instructions+=6;goto B6bcbb6;
case 0x6bcbb9:c.instructions+=5;goto B6bcbb9;
case 0x6bcbbc:c.instructions+=4;goto B6bcbbc;
case 0x6bcbbf:c.instructions+=3;goto B6bcbbf;
case 0x6bcbc0:c.instructions+=2;goto B6bcbc0;
case 0x6bcbc2:c.instructions+=1;goto B6bcbc2;
case 0x6bcbc7:goto L6bcbc7;
case 0x6bcbc9:c.instructions+=2;goto B6bcbc9;
case 0x6bcbcb:c.instructions+=1;goto B6bcbcb;
case 0x6bcbd1:goto L6bcbd1;
case 0x6bcbd3:c.instructions+=4;goto B6bcbd3;
case 0x6bcbd4:c.instructions+=3;goto B6bcbd4;
case 0x6bcbd7:c.instructions+=2;goto B6bcbd7;
case 0x6bcbda:c.instructions+=1;goto B6bcbda;
case 0x6bcbe0:goto L6bcbe0;
case 0x6bcbe3:c.instructions+=2;goto B6bcbe3;
case 0x6bcbe6:c.instructions+=1;goto B6bcbe6;
case 0x6bcbe9:goto L6bcbe9;
case 0x6bcbeb:c.instructions+=1;goto B6bcbeb;
case 0x6bcbf0:goto L6bcbf0;
case 0x6bcbf2:c.instructions+=1;goto B6bcbf2;
case 0x6bcbf4:goto L6bcbf4;
case 0x6bcbf6:c.instructions+=1;goto B6bcbf6;
case 0x6bcbfb:goto L6bcbfb;
case 0x6bcbfd:c.instructions+=1;goto B6bcbfd;
case 0x6bcbff:goto L6bcbff;
case 0x6bcc01:goto L6bcc01;
case 0x6bcc03:c.instructions+=1;goto B6bcc03;
case 0x6bcc09:goto L6bcc09;
case 0x6bcc0b:c.instructions+=5;goto B6bcc0b;
case 0x6bcc0d:c.instructions+=4;goto B6bcc0d;
case 0x6bcc0f:c.instructions+=3;goto B6bcc0f;
case 0x6bcc14:c.instructions+=2;goto B6bcc14;
case 0x6bcc16:c.instructions+=1;goto B6bcc16;
case 0x6bcc1b:goto L6bcc1b;
case 0x6bcc1d:c.instructions+=2;goto B6bcc1d;
case 0x6bcc1f:c.instructions+=1;goto B6bcc1f;
case 0x6bcc25:goto L6bcc25;
case 0x6bcc2b:c.instructions+=2;goto B6bcc2b;
case 0x6bcc2d:c.instructions+=1;goto B6bcc2d;
case 0x6bcc32:goto L6bcc32;
case 0x6bcc34:c.instructions+=2;goto B6bcc34;
case 0x6bcc36:c.instructions+=1;goto B6bcc36;
case 0x6bcc3c:goto L6bcc3c;
case 0x6bcc42:c.instructions+=18;goto B6bcc42;
case 0x6bcc45:c.instructions+=17;goto B6bcc45;
case 0x6bcc48:c.instructions+=16;goto B6bcc48;
case 0x6bcc4b:c.instructions+=15;goto B6bcc4b;
case 0x6bcc4e:c.instructions+=14;goto B6bcc4e;
case 0x6bcc51:c.instructions+=13;goto B6bcc51;
case 0x6bcc53:c.instructions+=12;goto B6bcc53;
case 0x6bcc59:c.instructions+=11;goto B6bcc59;
case 0x6bcc5c:c.instructions+=10;goto B6bcc5c;
case 0x6bcc5f:c.instructions+=9;goto B6bcc5f;
case 0x6bcc62:c.instructions+=8;goto B6bcc62;
case 0x6bcc65:c.instructions+=7;goto B6bcc65;
case 0x6bcc68:c.instructions+=6;goto B6bcc68;
case 0x6bcc6b:c.instructions+=5;goto B6bcc6b;
case 0x6bcc6e:c.instructions+=4;goto B6bcc6e;
case 0x6bcc71:c.instructions+=3;goto B6bcc71;
case 0x6bcc72:c.instructions+=2;goto B6bcc72;
case 0x6bcc74:c.instructions+=1;goto B6bcc74;
case 0x6bcc76:goto L6bcc76;
case 0x6bcc77:c.instructions+=8;goto B6bcc77;
case 0x6bcc79:c.instructions+=7;goto B6bcc79;
case 0x6bcc7a:c.instructions+=6;goto B6bcc7a;
case 0x6bcc7d:c.instructions+=5;goto B6bcc7d;
case 0x6bcc7f:c.instructions+=4;goto B6bcc7f;
case 0x6bcc82:c.instructions+=3;goto B6bcc82;
case 0x6bcc84:c.instructions+=2;goto B6bcc84;
case 0x6bcc8a:c.instructions+=1;goto B6bcc8a;
case 0x6bcc8f:goto L6bcc8f;
case 0x6bcc92:c.instructions+=3;goto B6bcc92;
case 0x6bcc95:c.instructions+=2;goto B6bcc95;
case 0x6bcc98:c.instructions+=1;goto B6bcc98;
case 0x6bcc9a:goto L6bcc9a;
case 0x6bcc9f:c.instructions+=1;goto B6bcc9f;
case 0x6bcca4:goto L6bcca4;
case 0x6bccaa:c.instructions+=2;goto B6bccaa;
case 0x6bccad:c.instructions+=1;goto B6bccad;
case 0x6bccaf:goto L6bccaf;
case 0x6bccb2:c.instructions+=4;goto B6bccb2;
case 0x6bccb4:c.instructions+=3;goto B6bccb4;
case 0x6bccb5:c.instructions+=2;goto B6bccb5;
case 0x6bccb7:c.instructions+=1;goto B6bccb7;
case 0x6bccbc:goto L6bccbc;
case 0x6bccbe:c.instructions+=2;goto B6bccbe;
case 0x6bccc0:c.instructions+=1;goto B6bccc0;
case 0x6bccc2:goto L6bccc2;
case 0x6bccc5:c.instructions+=4;goto B6bccc5;
case 0x6bccc8:c.instructions+=3;goto B6bccc8;
case 0x6bcccc:c.instructions+=2;goto B6bcccc;
case 0x6bcccf:c.instructions+=1;goto B6bcccf;
case 0x6bccd5:goto L6bccd5;
case 0x6bccda:goto L6bccda;
case 0x6bcce0:c.instructions+=2;goto B6bcce0;
case 0x6bcce2:c.instructions+=1;goto B6bcce2;
case 0x6bcce7:goto L6bcce7;
case 0x6bcce9:c.instructions+=2;goto B6bcce9;
case 0x6bcceb:c.instructions+=1;goto B6bcceb;
case 0x6bcced:goto L6bcced;
case 0x6bccf3:c.instructions+=2;goto B6bccf3;
case 0x6bccf6:c.instructions+=1;goto B6bccf6;
case 0x6bccf8:goto L6bccf8;
case 0x6bccfe:c.instructions+=2;goto B6bccfe;
case 0x6bcd00:c.instructions+=1;goto B6bcd00;
case 0x6bcd05:goto L6bcd05;
case 0x6bcd07:c.instructions+=2;goto B6bcd07;
case 0x6bcd09:c.instructions+=1;goto B6bcd09;
case 0x6bcd0b:goto L6bcd0b;
case 0x6bcd11:c.instructions+=1;goto B6bcd11;
case 0x6bcd14:goto L6bcd14;
case 0x6bcd18:c.instructions+=1;goto B6bcd18;
case 0x6bcd1a:goto L6bcd1a;
case 0x6bcd1d:c.instructions+=2;goto B6bcd1d;
case 0x6bcd1f:c.instructions+=1;goto B6bcd1f;
case 0x6bcd24:goto L6bcd24;
case 0x6bcd27:c.instructions+=2;goto B6bcd27;
case 0x6bcd29:c.instructions+=1;goto B6bcd29;
case 0x6bcd2b:goto L6bcd2b;
case 0x6bcd2d:c.instructions+=1;goto B6bcd2d;
case 0x6bcd32:goto L6bcd32;
case 0x6bcd34:c.instructions+=1;goto B6bcd34;
case 0x6bcd35:goto L6bcd35;
case 0x6bcd36:c.instructions+=3;goto B6bcd36;
case 0x6bcd37:c.instructions+=2;goto B6bcd37;
case 0x6bcd38:c.instructions+=1;goto B6bcd38;
case 0x6bcd39:goto L6bcd39;
case 0x6bcd3b:c.instructions+=19;goto B6bcd3b;
case 0x6bcd3c:c.instructions+=18;goto B6bcd3c;
case 0x6bcd3e:c.instructions+=17;goto B6bcd3e;
case 0x6bcd41:c.instructions+=16;goto B6bcd41;
case 0x6bcd44:c.instructions+=15;goto B6bcd44;
case 0x6bcd46:c.instructions+=14;goto B6bcd46;
case 0x6bcd47:c.instructions+=13;goto B6bcd47;
case 0x6bcd49:c.instructions+=12;goto B6bcd49;
case 0x6bcd4a:c.instructions+=11;goto B6bcd4a;
case 0x6bcd4d:c.instructions+=10;goto B6bcd4d;
case 0x6bcd50:c.instructions+=9;goto B6bcd50;
case 0x6bcd53:c.instructions+=8;goto B6bcd53;
case 0x6bcd56:c.instructions+=7;goto B6bcd56;
case 0x6bcd59:c.instructions+=6;goto B6bcd59;
case 0x6bcd5a:c.instructions+=5;goto B6bcd5a;
case 0x6bcd5d:c.instructions+=4;goto B6bcd5d;
case 0x6bcd60:c.instructions+=3;goto B6bcd60;
case 0x6bcd62:c.instructions+=2;goto B6bcd62;
case 0x6bcd66:c.instructions+=1;goto B6bcd66;
case 0x6bcd68:goto L6bcd68;
case 0x6bcd6b:c.instructions+=2;goto B6bcd6b;
case 0x6bcd71:c.instructions+=1;goto B6bcd71;
case 0x6bcd76:goto L6bcd76;
case 0x6bcd79:c.instructions+=4;goto B6bcd79;
case 0x6bcd7b:c.instructions+=3;goto B6bcd7b;
case 0x6bcd7c:c.instructions+=2;goto B6bcd7c;
case 0x6bcd82:c.instructions+=1;goto B6bcd82;
case 0x6bcd84:goto L6bcd84;
case 0x6bcd88:c.instructions+=1;goto B6bcd88;
case 0x6bcd8a:goto L6bcd8a;
case 0x6bcd90:c.instructions+=1;goto B6bcd90;
case 0x6bcd92:goto L6bcd92;
case 0x6bcd96:c.instructions+=1;goto B6bcd96;
case 0x6bcd97:goto L6bcd97;
case 0x6bcd9d:c.instructions+=1;goto B6bcd9d;
case 0x6bcd9f:goto L6bcd9f;
case 0x6bcda7:c.instructions+=1;goto B6bcda7;
case 0x6bcda8:goto L6bcda8;
case 0x6bcdae:c.instructions+=1;goto B6bcdae;
case 0x6bcdb0:goto L6bcdb0;
case 0x6bcdb8:c.instructions+=1;goto B6bcdb8;
case 0x6bcdb9:goto L6bcdb9;
case 0x6bcdbc:c.instructions+=1;goto B6bcdbc;
case 0x6bcdbe:goto L6bcdbe;
case 0x6bcdc1:goto L6bcdc1;
case 0x6bcdc4:c.instructions+=4;goto B6bcdc4;
case 0x6bcdc7:c.instructions+=3;goto B6bcdc7;
case 0x6bcdca:c.instructions+=2;goto B6bcdca;
case 0x6bcdcd:c.instructions+=1;goto B6bcdcd;
case 0x6bcdcf:goto L6bcdcf;
case 0x6bcdd2:c.instructions+=1;goto B6bcdd2;
case 0x6bcdd4:goto L6bcdd4;
case 0x6bcdd6:c.instructions+=2;goto B6bcdd6;
case 0x6bcdd9:c.instructions+=1;goto B6bcdd9;
case 0x6bcddb:goto L6bcddb;
case 0x6bcdde:c.instructions+=2;goto B6bcdde;
case 0x6bcde1:c.instructions+=1;goto B6bcde1;
case 0x6bcde4:goto L6bcde4;
case 0x6bcde7:c.instructions+=4;goto B6bcde7;
case 0x6bcdea:c.instructions+=3;goto B6bcdea;
case 0x6bcded:c.instructions+=2;goto B6bcded;
case 0x6bcdf0:c.instructions+=1;goto B6bcdf0;
case 0x6bcdf2:goto L6bcdf2;
case 0x6bcdf3:c.instructions+=2;goto B6bcdf3;
case 0x6bcdf6:c.instructions+=1;goto B6bcdf6;
case 0x6bcdf8:goto L6bcdf8;
case 0x6bcdfb:c.instructions+=1;goto B6bcdfb;
case 0x6bcdfd:goto L6bcdfd;
case 0x6bcdff:goto L6bcdff;
case 0x6bce03:c.instructions+=3;goto B6bce03;
case 0x6bce04:c.instructions+=2;goto B6bce04;
case 0x6bce07:c.instructions+=1;goto B6bce07;
case 0x6bce09:goto L6bce09;
case 0x6bce0b:goto L6bce0b;
case 0x6bce0e:c.instructions+=1;goto B6bce0e;
case 0x6bce11:goto L6bce11;
case 0x6bce14:c.instructions+=4;goto B6bce14;
case 0x6bce15:c.instructions+=3;goto B6bce15;
case 0x6bce16:c.instructions+=2;goto B6bce16;
case 0x6bce17:c.instructions+=1;goto B6bce17;
case 0x6bce18:goto L6bce18;
case 0x6bce1a:c.instructions+=2;goto B6bce1a;
case 0x6bce1d:c.instructions+=1;goto B6bce1d;
case 0x6bce1f:goto L6bce1f;
case 0x6bce22:c.instructions+=2;goto B6bce22;
case 0x6bce25:c.instructions+=1;goto B6bce25;
case 0x6bce27:goto L6bce27;
case 0x6bce2b:c.instructions+=8;goto B6bce2b;
case 0x6bce2e:c.instructions+=7;goto B6bce2e;
case 0x6bce32:c.instructions+=6;goto B6bce32;
case 0x6bce35:c.instructions+=5;goto B6bce35;
case 0x6bce38:c.instructions+=4;goto B6bce38;
case 0x6bce39:c.instructions+=3;goto B6bce39;
case 0x6bce3c:c.instructions+=2;goto B6bce3c;
case 0x6bce40:c.instructions+=1;goto B6bce40;
case 0x6bce42:goto L6bce42;
case 0x6bce44:c.instructions+=2;goto B6bce44;
case 0x6bce47:c.instructions+=1;goto B6bce47;
case 0x6bce49:goto L6bce49;
case 0x6bce4e:c.instructions+=1;goto B6bce4e;
case 0x6bce51:goto L6bce51;
case 0x6bce54:c.instructions+=4;goto B6bce54;
case 0x6bce57:c.instructions+=3;goto B6bce57;
case 0x6bce58:c.instructions+=2;goto B6bce58;
case 0x6bce5a:c.instructions+=1;goto B6bce5a;
case 0x6bce5f:goto L6bce5f;
case 0x6bce61:c.instructions+=1;goto B6bce61;
case 0x6bce63:goto L6bce63;
case 0x6bce67:c.instructions+=3;goto B6bce67;
case 0x6bce68:c.instructions+=2;goto B6bce68;
case 0x6bce6b:c.instructions+=1;goto B6bce6b;
case 0x6bce6d:goto L6bce6d;
case 0x6bce6f:goto L6bce6f;
case 0x6bce72:c.instructions+=3;goto B6bce72;
case 0x6bce74:c.instructions+=2;goto B6bce74;
case 0x6bce76:c.instructions+=1;goto B6bce76;
case 0x6bce78:goto L6bce78;
case 0x6bce7e:c.instructions+=5;goto B6bce7e;
case 0x6bce83:c.instructions+=4;goto B6bce83;
case 0x6bce88:c.instructions+=3;goto B6bce88;
case 0x6bce8b:c.instructions+=2;goto B6bce8b;
case 0x6bce8c:c.instructions+=1;goto B6bce8c;
case 0x6bce91:goto L6bce91;
case 0x6bce94:c.instructions+=2;goto B6bce94;
case 0x6bce99:c.instructions+=1;goto B6bce99;
case 0x6bce9b:goto L6bce9b;
case 0x6bce9e:goto L6bce9e;
case 0x6bcea0:c.instructions+=2;goto B6bcea0;
case 0x6bcea2:c.instructions+=1;goto B6bcea2;
case 0x6bcea3:goto L6bcea3;
case 0x6bcea5:c.instructions+=7;goto B6bcea5;
case 0x6bcea7:c.instructions+=6;goto B6bcea7;
case 0x6bceaa:c.instructions+=5;goto B6bceaa;
case 0x6bceac:c.instructions+=4;goto B6bceac;
case 0x6bcead:c.instructions+=3;goto B6bcead;
case 0x6bceae:c.instructions+=2;goto B6bceae;
case 0x6bceb1:c.instructions+=1;goto B6bceb1;
case 0x6bceb3:goto L6bceb3;
case 0x6bceb6:c.instructions+=1;goto B6bceb6;
case 0x6bceb8:goto L6bceb8;
case 0x6bceba:goto L6bceba;
case 0x6bcebb:c.instructions+=4;goto B6bcebb;
case 0x6bcebc:c.instructions+=3;goto B6bcebc;
case 0x6bcebd:c.instructions+=2;goto B6bcebd;
case 0x6bcebe:c.instructions+=1;goto B6bcebe;
case 0x6bcec1:goto L6bcec1;
case 0x6bcec3:c.instructions+=6;goto B6bcec3;
case 0x6bcec4:c.instructions+=5;goto B6bcec4;
case 0x6bcec6:c.instructions+=4;goto B6bcec6;
case 0x6bcec7:c.instructions+=3;goto B6bcec7;
case 0x6bcec9:c.instructions+=2;goto B6bcec9;
case 0x6bcecf:c.instructions+=1;goto B6bcecf;
case 0x6bced4:goto L6bced4;
case 0x6bced8:c.instructions+=1;goto B6bced8;
case 0x6bceda:goto L6bceda;
case 0x6bcedb:c.instructions+=1;goto B6bcedb;
case 0x6bcee0:goto L6bcee0;
case 0x6bcee1:goto L6bcee1;
case 0x6bcee3:c.instructions+=3;goto B6bcee3;
case 0x6bcee4:c.instructions+=2;goto B6bcee4;
case 0x6bcee5:c.instructions+=1;goto B6bcee5;
case 0x6bcee8:goto L6bcee8;
case 0x6bceea:c.instructions+=3;goto B6bceea;
case 0x6bceeb:c.instructions+=2;goto B6bceeb;
case 0x6bceed:c.instructions+=1;goto B6bceed;
case 0x6bcef2:goto L6bcef2;
case 0x6bcef4:c.instructions+=1;goto B6bcef4;
case 0x6bcef6:goto L6bcef6;
case 0x6bcef7:c.instructions+=3;goto B6bcef7;
case 0x6bcef8:c.instructions+=2;goto B6bcef8;
case 0x6bcefa:c.instructions+=1;goto B6bcefa;
case 0x6bceff:goto L6bceff;
case 0x6bcf02:c.instructions+=3;goto B6bcf02;
case 0x6bcf04:c.instructions+=2;goto B6bcf04;
case 0x6bcf06:c.instructions+=1;goto B6bcf06;
case 0x6bcf08:goto L6bcf08;
case 0x6bcf0b:c.instructions+=5;goto B6bcf0b;
case 0x6bcf0e:c.instructions+=4;goto B6bcf0e;
case 0x6bcf14:c.instructions+=3;goto B6bcf14;
case 0x6bcf1a:c.instructions+=2;goto B6bcf1a;
case 0x6bcf20:c.instructions+=1;goto B6bcf20;
case 0x6bcf22:goto L6bcf22;
case 0x6bcf24:c.instructions+=1;goto B6bcf24;
case 0x6bcf29:goto L6bcf29;
case 0x6bcf2b:c.instructions+=1;goto B6bcf2b;
case 0x6bcf2d:goto L6bcf2d;
case 0x6bcf2e:c.instructions+=2;goto B6bcf2e;
case 0x6bcf30:c.instructions+=1;goto B6bcf30;
case 0x6bcf32:goto L6bcf32;
case 0x6bcf34:c.instructions+=1;goto B6bcf34;
case 0x6bcf39:goto L6bcf39;
case 0x6bcf3b:c.instructions+=1;goto B6bcf3b;
case 0x6bcf3d:goto L6bcf3d;
case 0x6bcf3f:c.instructions+=1;goto B6bcf3f;
case 0x6bcf44:goto L6bcf44;
case 0x6bcf46:c.instructions+=1;goto B6bcf46;
case 0x6bcf48:goto L6bcf48;
case 0x6bcf4a:c.instructions+=1;goto B6bcf4a;
case 0x6bcf4f:goto L6bcf4f;
case 0x6bcf51:c.instructions+=1;goto B6bcf51;
case 0x6bcf53:goto L6bcf53;
case 0x6bcf55:c.instructions+=1;goto B6bcf55;
case 0x6bcf5a:goto L6bcf5a;
case 0x6bcf5c:goto L6bcf5c;
case 0x6bcf5d:c.instructions+=1;goto B6bcf5d;
case 0x6bcf5e:goto L6bcf5e;
case 0x6bcf5f:c.instructions+=1;goto B6bcf5f;
case 0x6bcf60:goto L6bcf60;
case 0x6bcf62:c.instructions+=9;goto B6bcf62;
case 0x6bcf63:c.instructions+=8;goto B6bcf63;
case 0x6bcf65:c.instructions+=7;goto B6bcf65;
case 0x6bcf68:c.instructions+=6;goto B6bcf68;
case 0x6bcf6b:c.instructions+=5;goto B6bcf6b;
case 0x6bcf6c:c.instructions+=4;goto B6bcf6c;
case 0x6bcf6e:c.instructions+=3;goto B6bcf6e;
case 0x6bcf74:c.instructions+=2;goto B6bcf74;
case 0x6bcf77:c.instructions+=1;goto B6bcf77;
case 0x6bcf79:goto L6bcf79;
case 0x6bcf7b:c.instructions+=2;goto B6bcf7b;
case 0x6bcf7c:c.instructions+=1;goto B6bcf7c;
case 0x6bcf81:goto L6bcf81;
case 0x6bcf84:c.instructions+=8;goto B6bcf84;
case 0x6bcf86:c.instructions+=7;goto B6bcf86;
case 0x6bcf88:c.instructions+=6;goto B6bcf88;
case 0x6bcf8c:c.instructions+=5;goto B6bcf8c;
case 0x6bcf8d:c.instructions+=4;goto B6bcf8d;
case 0x6bcf8e:c.instructions+=3;goto B6bcf8e;
case 0x6bcf90:c.instructions+=2;goto B6bcf90;
case 0x6bcf93:c.instructions+=1;goto B6bcf93;
case 0x6bcf99:goto L6bcf99;
case 0x6bcf9c:c.instructions+=12;goto B6bcf9c;
case 0x6bcf9f:c.instructions+=11;goto B6bcf9f;
case 0x6bcfa2:c.instructions+=10;goto B6bcfa2;
case 0x6bcfa6:c.instructions+=9;goto B6bcfa6;
case 0x6bcfa9:c.instructions+=8;goto B6bcfa9;
case 0x6bcfac:c.instructions+=7;goto B6bcfac;
case 0x6bcfad:c.instructions+=6;goto B6bcfad;
case 0x6bcfae:c.instructions+=5;goto B6bcfae;
case 0x6bcfaf:c.instructions+=4;goto B6bcfaf;
case 0x6bcfb1:c.instructions+=3;goto B6bcfb1;
case 0x6bcfb3:c.instructions+=2;goto B6bcfb3;
case 0x6bcfb4:c.instructions+=1;goto B6bcfb4;
case 0x6bcfb6:goto L6bcfb6;
case 0x6bcfb9:c.instructions+=4;goto B6bcfb9;
case 0x6bcfbc:c.instructions+=3;goto B6bcfbc;
case 0x6bcfbf:c.instructions+=2;goto B6bcfbf;
case 0x6bcfc2:c.instructions+=1;goto B6bcfc2;
case 0x6bcfc5:goto L6bcfc5;
case 0x6bcfc7:c.instructions+=7;goto B6bcfc7;
case 0x6bcfca:c.instructions+=6;goto B6bcfca;
case 0x6bcfcd:c.instructions+=5;goto B6bcfcd;
case 0x6bcfd1:c.instructions+=4;goto B6bcfd1;
case 0x6bcfd2:c.instructions+=3;goto B6bcfd2;
case 0x6bcfd5:c.instructions+=2;goto B6bcfd5;
case 0x6bcfd7:c.instructions+=1;goto B6bcfd7;
case 0x6bcfd9:goto L6bcfd9;
case 0x6bcfdb:c.instructions+=1;goto B6bcfdb;
case 0x6bcfdd:goto L6bcfdd;
case 0x6bcfdf:c.instructions+=6;goto B6bcfdf;
case 0x6bcfe6:c.instructions+=5;goto B6bcfe6;
case 0x6bcfe9:c.instructions+=4;goto B6bcfe9;
case 0x6bcfec:c.instructions+=3;goto B6bcfec;
case 0x6bcfef:c.instructions+=2;goto B6bcfef;
case 0x6bcff0:c.instructions+=1;goto B6bcff0;
case 0x6bcff5:goto L6bcff5;
case 0x6bcff7:c.instructions+=1;goto B6bcff7;
case 0x6bcff9:goto L6bcff9;
case 0x6bcffd:c.instructions+=2;goto B6bcffd;
case 0x6bcffe:c.instructions+=1;goto B6bcffe;
default:missing_instruction(c.pc);}
B6bc000:L6bc000:{c.instructions+=4;NFSU2_TR(0x6bc000);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6bc002:{NFSU2_TR(0x6bc002);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bc004:{NFSU2_TR(0x6bc004);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bc005:{NFSU2_TR(0x6bc005);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bc029;}}
}
B6bc007:L6bc007:{c.instructions+=3;NFSU2_TR(0x6bc007);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bc00d:{NFSU2_TR(0x6bc00d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bc010:{NFSU2_TR(0x6bc010);
__builtin_memmove((R+28),(R+0),4);
}
B6bc012:L6bc012:{c.instructions+=3;NFSU2_TR(0x6bc012);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6bc014:{NFSU2_TR(0x6bc014);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bc017:{NFSU2_TR(0x6bc017);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bc023;}}
}
B6bc019:L6bc019:{c.instructions+=3;NFSU2_TR(0x6bc019);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bc01c:{NFSU2_TR(0x6bc01c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B6bc01e:{NFSU2_TR(0x6bc01e);
if(r1(R+512)){{goto L6bc023;}}
}
B6bc020:L6bc020:{c.instructions+=1;NFSU2_TR(0x6bc020);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6bc023:L6bc023:{c.instructions+=3;NFSU2_TR(0x6bc023);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6bc026:{NFSU2_TR(0x6bc026);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B6bc027:{NFSU2_TR(0x6bc027);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bc012u);}goto L6bc012;}}
}
B6bc029:L6bc029:{c.instructions+=1;NFSU2_TR(0x6bc029);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6bc02b:L6bc02b:{c.instructions+=9;NFSU2_TR(0x6bc02b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bc02c:{NFSU2_TR(0x6bc02c);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6bc02e:{NFSU2_TR(0x6bc02e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bc02f:{NFSU2_TR(0x6bc02f);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6bc032:{NFSU2_TR(0x6bc032);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bc033:{NFSU2_TR(0x6bc033);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bc034:{NFSU2_TR(0x6bc034);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bc03a:{NFSU2_TR(0x6bc03a);
__builtin_memmove((R+4),(R+24),4);
}
B6bc03c:{NFSU2_TR(0x6bc03c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bc041ull));
TAIL_STATIC(0x699c39u,699);
}
B6bc041:L6bc041:{c.instructions+=3;NFSU2_TR(0x6bc041);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xffffffffull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6bc044:{NFSU2_TR(0x6bc044);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffff0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6bc048:{NFSU2_TR(0x6bc048);
if(r1(R+518)){{goto L6bc06f;}}
}
B6bc04a:L6bc04a:{c.instructions+=3;NFSU2_TR(0x6bc04a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6bc04b:{NFSU2_TR(0x6bc04b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B6bc04e:{NFSU2_TR(0x6bc04e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bc02bu);}goto L6bc02b;}}
}
B6bc050:L6bc050:{c.instructions+=2;NFSU2_TR(0x6bc050);
u8 U[4];
w4(U+0,u32(0x74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bc052:{NFSU2_TR(0x6bc052);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bc057ull));
TAIL_STATIC(0x699317u,699);
}
B6bc057:L6bc057:{c.instructions+=2;NFSU2_TR(0x6bc057);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bc059:{NFSU2_TR(0x6bc059);
if(r1(R+518)){{goto L6bc064;}}
}
B6bc05b:L6bc05b:{c.instructions+=2;NFSU2_TR(0x6bc05b);
__builtin_memmove((R+4),(R+0),4);
}
B6bc05d:{NFSU2_TR(0x6bc05d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bc062ull));
TAIL_STATIC(0x698e7du,698);
}
B6bc062:L6bc062:{c.instructions+=1;NFSU2_TR(0x6bc062);
{goto L6bc066;}
}
B6bc064:L6bc064:{c.instructions+=1;NFSU2_TR(0x6bc064);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6bc066:L6bc066:{c.instructions+=4;NFSU2_TR(0x6bc066);
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
B6bc068:{NFSU2_TR(0x6bc068);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6bc06b:{NFSU2_TR(0x6bc06b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B6bc06d:{NFSU2_TR(0x6bc06d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bc079;}}
}
B6bc06f:L6bc06f:{c.instructions+=2;NFSU2_TR(0x6bc06f);
w4(R+0,u32(0x8007000eull));
}
B6bc074:{NFSU2_TR(0x6bc074);
{goto L6bc109;}
}
B6bc079:L6bc079:{c.instructions+=10;NFSU2_TR(0x6bc079);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6bc07c:{NFSU2_TR(0x6bc07c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bc07e:{NFSU2_TR(0x6bc07e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bc07f:{NFSU2_TR(0x6bc07f);
__builtin_memmove((R+4),(R+12),4);
}
B6bc081:{NFSU2_TR(0x6bc081);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffull))));
}
B6bc087:{NFSU2_TR(0x6bc087);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x10000000ull))));
}
B6bc08d:{NFSU2_TR(0x6bc08d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bc08e:{NFSU2_TR(0x6bc08e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bc08f:{NFSU2_TR(0x6bc08f);
__builtin_memmove((R+4),(R+0),4);
}
B6bc091:{NFSU2_TR(0x6bc091);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bc096ull));
TAIL_STATIC(0x699362u,699);
}
B6bc096:L6bc096:{c.instructions+=4;NFSU2_TR(0x6bc096);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6bc098:{NFSU2_TR(0x6bc098);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6bc09a:{NFSU2_TR(0x6bc09a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bc09d:{NFSU2_TR(0x6bc09d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bc0b3;}}
}
B6bc09f:L6bc09f:{c.instructions+=2;NFSU2_TR(0x6bc09f);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bc0a5:{NFSU2_TR(0x6bc0a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bc0aaull));
TAIL_STATIC(0x698eb3u,698);
}
B6bc0aa:L6bc0aa:{c.instructions+=3;NFSU2_TR(0x6bc0aa);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6bc0ac:{NFSU2_TR(0x6bc0ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bc0af:{NFSU2_TR(0x6bc0af);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6bc0c3;}}
}
B6bc0b1:L6bc0b1:{c.instructions+=1;NFSU2_TR(0x6bc0b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6bc0b3:L6bc0b3:{c.instructions+=2;NFSU2_TR(0x6bc0b3);
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
B6bc0b5:{NFSU2_TR(0x6bc0b5);
if(r1(R+518)){{goto L6bc0be;}}
}
B6bc0b7:L6bc0b7:{c.instructions+=2;NFSU2_TR(0x6bc0b7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bc0b9:{NFSU2_TR(0x6bc0b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bc0beull));
TAIL_STATIC(0x6739efu,673);
}
B6bc0be:L6bc0be:{c.instructions+=2;NFSU2_TR(0x6bc0be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bc0c1:{NFSU2_TR(0x6bc0c1);
{goto L6bc109;}
}
B6bc0c3:L6bc0c3:{c.instructions+=4;NFSU2_TR(0x6bc0c3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6bc0c5:{NFSU2_TR(0x6bc0c5);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bc0c7:{NFSU2_TR(0x6bc0c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bc0ca:{NFSU2_TR(0x6bc0ca);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bc107;}}
}
B6bc0cc:L6bc0cc:{c.instructions+=19;NFSU2_TR(0x6bc0cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6bc0ce:{NFSU2_TR(0x6bc0ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bc0d1:{NFSU2_TR(0x6bc0d1);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6bc0d4:{NFSU2_TR(0x6bc0d4);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffff0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6bc0d8:{NFSU2_TR(0x6bc0d8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6bc0db:{NFSU2_TR(0x6bc0db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bc0e1:{NFSU2_TR(0x6bc0e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bc0e4:{NFSU2_TR(0x6bc0e4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6bc0e7:{NFSU2_TR(0x6bc0e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6bc0e9:{NFSU2_TR(0x6bc0e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6bc0ec:{NFSU2_TR(0x6bc0ec);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6bc0ef:{NFSU2_TR(0x6bc0ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bc0f5:{NFSU2_TR(0x6bc0f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bc0f8:{NFSU2_TR(0x6bc0f8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6bc0fb:{NFSU2_TR(0x6bc0fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bc0fe:{NFSU2_TR(0x6bc0fe);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6bc0ff:{NFSU2_TR(0x6bc0ff);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6bc102:{NFSU2_TR(0x6bc102);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bc105:{NFSU2_TR(0x6bc105);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bc0ccu);}goto L6bc0cc;}}
}
B6bc107:L6bc107:{c.instructions+=1;NFSU2_TR(0x6bc107);
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
B6bc109:L6bc109:{c.instructions+=5;NFSU2_TR(0x6bc109);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6bc10a:{NFSU2_TR(0x6bc10a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6bc10b:{NFSU2_TR(0x6bc10b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6bc10c:{NFSU2_TR(0x6bc10c);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6bc10d:{NFSU2_TR(0x6bc10d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6bc110:L6bc110:{c.instructions+=15;NFSU2_TR(0x6bc110);
__builtin_memmove((R+28),(R+28),4);
}
B6bc112:{NFSU2_TR(0x6bc112);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bc113:{NFSU2_TR(0x6bc113);
__builtin_memmove((R+20),(R+16),4);
}
B6bc115:{NFSU2_TR(0x6bc115);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xd0ull))));
}
B6bc11b:{NFSU2_TR(0x6bc11b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bc11f:{NFSU2_TR(0x6bc11f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bc123:{NFSU2_TR(0x6bc123);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bc124:{NFSU2_TR(0x6bc124);
__builtin_memmove((R+12),(R+4),4);
}
B6bc126:{NFSU2_TR(0x6bc126);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bc12c:{NFSU2_TR(0x6bc12c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6bc12e:{NFSU2_TR(0x6bc12e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bc12f:{NFSU2_TR(0x6bc12f);
w4(R+28,u32(0xfff00000ull));
}
B6bc134:{NFSU2_TR(0x6bc134);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+28))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6bc136:{NFSU2_TR(0x6bc136);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bc139:{NFSU2_TR(0x6bc139);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bc142;}}
}
B6bc13b:L6bc13b:{c.instructions+=2;NFSU2_TR(0x6bc13b);
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
B6bc13d:{NFSU2_TR(0x6bc13d);
{goto L6bcd35;}
}
B6bc142:L6bc142:{c.instructions+=17;NFSU2_TR(0x6bc142);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bc148:{NFSU2_TR(0x6bc148);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6bc14a:{NFSU2_TR(0x6bc14a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bc14d:{NFSU2_TR(0x6bc14d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bc14e:{NFSU2_TR(0x6bc14e);
__builtin_memmove((R+24),(R+4),4);
}
B6bc150:{NFSU2_TR(0x6bc150);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffull))));
}
B6bc156:{NFSU2_TR(0x6bc156);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6bc158:{NFSU2_TR(0x6bc158);
u8 U[56];
w8(U+0,u64(r4(R+24)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6bc158);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6bc158);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B6bc15a:{NFSU2_TR(0x6bc15a);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+28))));
}
B6bc15c:{NFSU2_TR(0x6bc15c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x50000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bc162:{NFSU2_TR(0x6bc162);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bc165:{NFSU2_TR(0x6bc165);
w4(R+28,u32(0x70800000ull));
}
B6bc16a:{NFSU2_TR(0x6bc16a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bc16d:{NFSU2_TR(0x6bc16d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bc170:{NFSU2_TR(0x6bc170);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bc173:{NFSU2_TR(0x6bc173);
w4(R+8,u32(0x50200000ull));
}
B6bc178:{NFSU2_TR(0x6bc178);
if(r1(R+518)){{goto L6bc186;}}
}
B6bc17a:L6bc17a:{c.instructions+=2;NFSU2_TR(0x6bc17a);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bc17c:{NFSU2_TR(0x6bc17c);
if(r1(R+518)){{goto L6bc186;}}
}
B6bc17e:L6bc17e:{c.instructions+=2;NFSU2_TR(0x6bc17e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bc180:{NFSU2_TR(0x6bc180);
if(r1(R+518)){{goto L6bc186;}}
}
B6bc182:L6bc182:{c.instructions+=2;NFSU2_TR(0x6bc182);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6bc184:{NFSU2_TR(0x6bc184);
{goto L6bc189;}
}
B6bc186:L6bc186:{c.instructions+=2;NFSU2_TR(0x6bc186);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6bc188:{NFSU2_TR(0x6bc188);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6bc189:L6bc189:{c.instructions+=3;NFSU2_TR(0x6bc189);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bc18d:{NFSU2_TR(0x6bc18d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x60500000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bc192:{NFSU2_TR(0x6bc192);
if(r1(R+518)){{goto L6bccf8;}}
}
B6bc198:L6bc198:{c.instructions+=2;NFSU2_TR(0x6bc198);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x60a00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bc19d:{NFSU2_TR(0x6bc19d);
if(r1(R+518)){{goto L6bccf8;}}
}
B6bc1a3:L6bc1a3:{c.instructions+=2;NFSU2_TR(0x6bc1a3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x60f00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bc1a8:{NFSU2_TR(0x6bc1a8);
if(r1(R+518)){{goto L6bccf8;}}
}
B6bc1ae:L6bc1ae:{c.instructions+=2;NFSU2_TR(0x6bc1ae);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x11000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bc1b3:{NFSU2_TR(0x6bc1b3);
if(r1(R+518)){{goto L6bccf8;}}
}
B6bc1b9:L6bc1b9:{c.instructions+=2;NFSU2_TR(0x6bc1b9);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bc1bb:{NFSU2_TR(0x6bc1bb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bc98d;}}
}
B6bc1c1:L6bc1c1:{c.instructions+=3;NFSU2_TR(0x6bc1c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bc1c4:{NFSU2_TR(0x6bc1c4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bc1c7:{NFSU2_TR(0x6bc1c7);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bc246;}}
}
B6bc1c9:L6bc1c9:{c.instructions+=3;NFSU2_TR(0x6bc1c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bc1cc:{NFSU2_TR(0x6bc1cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff30ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6bc1d2:{NFSU2_TR(0x6bc1d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bc1d5:L6bc1d5:{c.instructions+=8;NFSU2_TR(0x6bc1d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6bc1d8:{NFSU2_TR(0x6bc1d8);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6bc1db:{NFSU2_TR(0x6bc1db);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bc1df:{NFSU2_TR(0x6bc1df);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6bc1e0:{NFSU2_TR(0x6bc1e0);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6bc1e1:{NFSU2_TR(0x6bc1e1);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6bc1e2:{NFSU2_TR(0x6bc1e2);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6bc1e3:{NFSU2_TR(0x6bc1e3);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bc22e;}}
}
B6bc1e5:L6bc1e5:{c.instructions+=10;NFSU2_TR(0x6bc1e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bc1eb:{NFSU2_TR(0x6bc1eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6bc1ee:{NFSU2_TR(0x6bc1ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bc1f1:{NFSU2_TR(0x6bc1f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bc1f4:{NFSU2_TR(0x6bc1f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bc1f7:{NFSU2_TR(0x6bc1f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bc1fa:{NFSU2_TR(0x6bc1fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6bc1fd:{NFSU2_TR(0x6bc1fd);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6bc200:{NFSU2_TR(0x6bc200);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B6bc203:{NFSU2_TR(0x6bc203);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bc206:L6bc206:{c.instructions+=13;NFSU2_TR(0x6bc206);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6bc209:{NFSU2_TR(0x6bc209);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6bc20b:{NFSU2_TR(0x6bc20b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6bc20d:{NFSU2_TR(0x6bc20d);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6bc210:{NFSU2_TR(0x6bc210);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6bc213:{NFSU2_TR(0x6bc213);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6bc216:{NFSU2_TR(0x6bc216);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6bc219:{NFSU2_TR(0x6bc219);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bc21d:{NFSU2_TR(0x6bc21d);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B6bc21f:{NFSU2_TR(0x6bc21f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6bc222:{NFSU2_TR(0x6bc222);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bc225:{NFSU2_TR(0x6bc225);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff30ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+24),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6bc22c:{NFSU2_TR(0x6bc22c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bc206u);}goto L6bc206;}}
}
B6bc22e:L6bc22e:{c.instructions+=8;NFSU2_TR(0x6bc22e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bc231:{NFSU2_TR(0x6bc231);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bc234:{NFSU2_TR(0x6bc234);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bc238:{NFSU2_TR(0x6bc238);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6bc23b:{NFSU2_TR(0x6bc23b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bc23e:{NFSU2_TR(0x6bc23e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bc241:{NFSU2_TR(0x6bc241);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6bc244:{NFSU2_TR(0x6bc244);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bc1d5u);}goto L6bc1d5;}}
}
B6bc246:L6bc246:{c.instructions+=10;NFSU2_TR(0x6bc246);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bc24c:{NFSU2_TR(0x6bc24c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bc24f:{NFSU2_TR(0x6bc24f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6bc251:{NFSU2_TR(0x6bc251);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bc254:{NFSU2_TR(0x6bc254);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6bc257:{NFSU2_TR(0x6bc257);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bc25a:{NFSU2_TR(0x6bc25a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bc25d:{NFSU2_TR(0x6bc25d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6bc260:{NFSU2_TR(0x6bc260);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x20ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B6bc264:{NFSU2_TR(0x6bc264);
if(r1(R+518)){{goto L6bc3a0;}}
}
B6bc26a:L6bc26a:{c.instructions+=13;NFSU2_TR(0x6bc26a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bc270:{NFSU2_TR(0x6bc270);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bc273:{NFSU2_TR(0x6bc273);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bc276:{NFSU2_TR(0x6bc276);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bc279:{NFSU2_TR(0x6bc279);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6bc27b:{NFSU2_TR(0x6bc27b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6bc27d:{NFSU2_TR(0x6bc27d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6bc280:{NFSU2_TR(0x6bc280);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6bc283:{NFSU2_TR(0x6bc283);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bc286:{NFSU2_TR(0x6bc286);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bc289:{NFSU2_TR(0x6bc289);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6bc28b:{NFSU2_TR(0x6bc28b);
__builtin_memmove((R+4),(R+12),4);
}
B6bc28d:{NFSU2_TR(0x6bc28d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bc290ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6bc290:L6bc290:{c.instructions+=3;NFSU2_TR(0x6bc290);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bc295:{NFSU2_TR(0x6bc295);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bc298:{NFSU2_TR(0x6bc298);
if(r1(R+518)){{goto L6bc3e2;}}
}
B6bc29e:L6bc29e:{c.instructions+=2;NFSU2_TR(0x6bc29e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xbull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bc2a1:{NFSU2_TR(0x6bc2a1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bc2c0;}}
}
B6bc2a3:L6bc2a3:{c.instructions+=5;NFSU2_TR(0x6bc2a3);
u8 U[4];
w4(U+0,u32(0x80b820ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bc2a8:{NFSU2_TR(0x6bc2a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff30ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6bc2ae:{NFSU2_TR(0x6bc2ae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bc2af:{NFSU2_TR(0x6bc2af);
__builtin_memmove((R+4),(R+12),4);
}
B6bc2b1:{NFSU2_TR(0x6bc2b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bc2b6ull));
TAIL_STATIC(0x6bbdc2u,6bb);
}
B6bc2b6:L6bc2b6:{c.instructions+=5;NFSU2_TR(0x6bc2b6);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B6bc2b8:{NFSU2_TR(0x6bc2b8);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6bc2ba:{NFSU2_TR(0x6bc2ba);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6bc2bb:{NFSU2_TR(0x6bc2bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bc2be:{NFSU2_TR(0x6bc2be);
{goto L6bc301;}
}
B6bc2c0:L6bc2c0:{c.instructions+=2;NFSU2_TR(0x6bc2c0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bc2c3:{NFSU2_TR(0x6bc2c3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bc305;}}
}
B6bc2c5:L6bc2c5:{c.instructions+=3;NFSU2_TR(0x6bc2c5);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6bc2c7:{NFSU2_TR(0x6bc2c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bc2ca:{NFSU2_TR(0x6bc2ca);
w4(R+28,u32(0x80b7e0ull));
}
B6bc2cf:L6bc2cf:{c.instructions+=5;NFSU2_TR(0x6bc2cf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bc2d0:{NFSU2_TR(0x6bc2d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff30ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6bc2d6:{NFSU2_TR(0x6bc2d6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bc2d7:{NFSU2_TR(0x6bc2d7);
__builtin_memmove((R+4),(R+12),4);
}
B6bc2d9:{NFSU2_TR(0x6bc2d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bc2deull));
TAIL_STATIC(0x6bbdc2u,6bb);
}
B6bc2de:L6bc2de:{c.instructions+=2;NFSU2_TR(0x6bc2de);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bc2e0:{NFSU2_TR(0x6bc2e0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bc2ef;}}
}
B6bc2e2:L6bc2e2:{c.instructions+=4;NFSU2_TR(0x6bc2e2);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B6bc2e5:{NFSU2_TR(0x6bc2e5);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B6bc2e8:{NFSU2_TR(0x6bc2e8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0x40ull))));
}
B6bc2eb:{NFSU2_TR(0x6bc2eb);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bc2cfu);}goto L6bc2cf;}}
}
B6bc2ed:L6bc2ed:{c.instructions+=1;NFSU2_TR(0x6bc2ed);
{goto L6bc2f6;}
}
B6bc2ef:L6bc2ef:{c.instructions+=1;NFSU2_TR(0x6bc2ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6bc2f6:L6bc2f6:{c.instructions+=4;NFSU2_TR(0x6bc2f6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6bc2f8:{NFSU2_TR(0x6bc2f8);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bc2fb:{NFSU2_TR(0x6bc2fb);
__builtin_memmove((R+0),(R+518),1);
}
B6bc2fe:{NFSU2_TR(0x6bc2fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bc301:L6bc301:{c.instructions+=2;NFSU2_TR(0x6bc301);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bc303:{NFSU2_TR(0x6bc303);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bc30e;}}
}
B6bc305:L6bc305:{c.instructions+=3;NFSU2_TR(0x6bc305);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bc308:{NFSU2_TR(0x6bc308);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1full))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6bc30c:{NFSU2_TR(0x6bc30c);
if(r1(R+518)){{goto L6bc326;}}
}
B6bc30e:L6bc30e:{c.instructions+=5;NFSU2_TR(0x6bc30e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bc311:{NFSU2_TR(0x6bc311);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6bc314:{NFSU2_TR(0x6bc314);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bc315:{NFSU2_TR(0x6bc315);
__builtin_memmove((R+4),(R+12),4);
}
B6bc317:{NFSU2_TR(0x6bc317);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bc31cull));
TAIL_STATIC(0x6bbff1u,6bb);
}
B6bc31c:L6bc31c:{c.instructions+=3;NFSU2_TR(0x6bc31c);
__builtin_memmove((R+28),(R+0),4);
}
B6bc31e:{NFSU2_TR(0x6bc31e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6bc320:{NFSU2_TR(0x6bc320);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bcd14;}}
}
B6bc326:L6bc326:{c.instructions+=11;NFSU2_TR(0x6bc326);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6bc328:{NFSU2_TR(0x6bc328);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6bc32b:{NFSU2_TR(0x6bc32b);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6bc32c:{NFSU2_TR(0x6bc32c);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6bc32d:{NFSU2_TR(0x6bc32d);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6bc32e:{NFSU2_TR(0x6bc32e);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6bc32f:{NFSU2_TR(0x6bc32f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6bc332:{NFSU2_TR(0x6bc332);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bc333:{NFSU2_TR(0x6bc333);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff30ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6bc339:{NFSU2_TR(0x6bc339);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bc33a:{NFSU2_TR(0x6bc33a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bc33full));
TAIL_STATIC(0x6bbdf3u,6bb);
}
B6bc33f:L6bc33f:{c.instructions+=2;NFSU2_TR(0x6bc33f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bc341:{NFSU2_TR(0x6bc341);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bc359;}}
}
B6bc343:L6bc343:{c.instructions+=2;NFSU2_TR(0x6bc343);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bc347:{NFSU2_TR(0x6bc347);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bc3e2;}}
}
B6bc34d:L6bc34d:{c.instructions+=2;NFSU2_TR(0x6bc34d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bc353:{NFSU2_TR(0x6bc353);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bc3e2;}}
}
B6bc359:L6bc359:{c.instructions+=6;NFSU2_TR(0x6bc359);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bc35c:{NFSU2_TR(0x6bc35c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6bc35f:{NFSU2_TR(0x6bc35f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bc362:{NFSU2_TR(0x6bc362);
__builtin_memmove((R+4),(R+12),4);
}
B6bc364:{NFSU2_TR(0x6bc364);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bc365:{NFSU2_TR(0x6bc365);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bc36aull));
TAIL_STATIC(0x6cbc7au,6cb);
}
B6bc36a:L6bc36a:{c.instructions+=3;NFSU2_TR(0x6bc36a);
__builtin_memmove((R+28),(R+0),4);
}
B6bc36c:{NFSU2_TR(0x6bc36c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6bc36e:{NFSU2_TR(0x6bc36e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bcd14;}}
}
B6bc374:L6bc374:{c.instructions+=4;NFSU2_TR(0x6bc374);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bc37a:{NFSU2_TR(0x6bc37a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6bc37d:{NFSU2_TR(0x6bc37d);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
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
B6bc381:{NFSU2_TR(0x6bc381);
if(r1(R+518)){{goto L6bcd32;}}
}
B6bc387:L6bc387:{c.instructions+=3;NFSU2_TR(0x6bc387);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bc38a:{NFSU2_TR(0x6bc38a);
__builtin_memmove((R+4),(R+12),4);
}
B6bc38c:{NFSU2_TR(0x6bc38c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bc391ull));
TAIL_STATIC(0x699b26u,699);
}
B6bc391:L6bc391:{c.instructions+=3;NFSU2_TR(0x6bc391);
__builtin_memmove((R+28),(R+0),4);
}
B6bc393:{NFSU2_TR(0x6bc393);
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
B6bc395:{NFSU2_TR(0x6bc395);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bcd14;}}
}
B6bc39b:L6bc39b:{c.instructions+=1;NFSU2_TR(0x6bc39b);
{goto L6bcd32;}
}
B6bc3a0:L6bc3a0:{c.instructions+=3;NFSU2_TR(0x6bc3a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bc3a4:{NFSU2_TR(0x6bc3a4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bc3a8:{NFSU2_TR(0x6bc3a8);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bc3e2;}}
}
B6bc3aa:L6bc3aa:{c.instructions+=2;NFSU2_TR(0x6bc3aa);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff30ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6bc3b0:{NFSU2_TR(0x6bc3b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bc3b3:L6bc3b3:{c.instructions+=2;NFSU2_TR(0x6bc3b3);
w4(R+28,u32(0x80b7e0ull));
}
B6bc3b8:{NFSU2_TR(0x6bc3b8);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6bc3ba:L6bc3ba:{c.instructions+=4;NFSU2_TR(0x6bc3ba);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bc3bb:{NFSU2_TR(0x6bc3bb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bc3be:{NFSU2_TR(0x6bc3be);
__builtin_memmove((R+4),(R+12),4);
}
B6bc3c0:{NFSU2_TR(0x6bc3c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bc3c5ull));
TAIL_STATIC(0x6bbdc2u,6bb);
}
B6bc3c5:L6bc3c5:{c.instructions+=2;NFSU2_TR(0x6bc3c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bc3c7:{NFSU2_TR(0x6bc3c7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bc49e;}}
}
B6bc3cd:L6bc3cd:{c.instructions+=4;NFSU2_TR(0x6bc3cd);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B6bc3d0:{NFSU2_TR(0x6bc3d0);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B6bc3d3:{NFSU2_TR(0x6bc3d3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0x80ull))));
}
B6bc3d9:{NFSU2_TR(0x6bc3d9);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bc3bau);}goto L6bc3ba;}}
}
B6bc3db:L6bc3db:{c.instructions+=1;NFSU2_TR(0x6bc3db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6bc3e2:L6bc3e2:{c.instructions+=5;NFSU2_TR(0x6bc3e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bc3e8:{NFSU2_TR(0x6bc3e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6bc3ea:{NFSU2_TR(0x6bc3ea);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfff00000ull))));
}
B6bc3f0:{NFSU2_TR(0x6bc3f0);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10d00000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bc3f6:{NFSU2_TR(0x6bc3f6);
if(r1(R+518)){{goto L6bc404;}}
}
B6bc3f8:L6bc3f8:{c.instructions+=2;NFSU2_TR(0x6bc3f8);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10e00000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bc3fe:{NFSU2_TR(0x6bc3fe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bc58a;}}
}
B6bc404:L6bc404:{c.instructions+=4;NFSU2_TR(0x6bc404);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bc407:{NFSU2_TR(0x6bc407);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6bc409:{NFSU2_TR(0x6bc409);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bc40b:{NFSU2_TR(0x6bc40b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bc58a;}}
}
B6bc411:L6bc411:{c.instructions+=2;NFSU2_TR(0x6bc411);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bc414:{NFSU2_TR(0x6bc414);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bc417:L6bc417:{c.instructions+=4;NFSU2_TR(0x6bc417);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6bc419:{NFSU2_TR(0x6bc419);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6bc41c:{NFSU2_TR(0x6bc41c);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1full))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6bc420:{NFSU2_TR(0x6bc420);
if(r1(R+518)){{goto L6bc425;}}
}
B6bc422:L6bc422:{c.instructions+=2;NFSU2_TR(0x6bc422);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6bc424:{NFSU2_TR(0x6bc424);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6bc425:L6bc425:{c.instructions+=3;NFSU2_TR(0x6bc425);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6bc428:{NFSU2_TR(0x6bc428);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B6bc429:{NFSU2_TR(0x6bc429);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bc417u);}goto L6bc417;}}
}
B6bc42b:L6bc42b:{c.instructions+=2;NFSU2_TR(0x6bc42b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bc42d:{NFSU2_TR(0x6bc42d);
if(r1(R+518)){{goto L6bc58a;}}
}
B6bc433:L6bc433:{c.instructions+=4;NFSU2_TR(0x6bc433);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bc436:{NFSU2_TR(0x6bc436);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6bc438:{NFSU2_TR(0x6bc438);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bc43a:{NFSU2_TR(0x6bc43a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bc45b;}}
}
B6bc43c:L6bc43c:{c.instructions+=2;NFSU2_TR(0x6bc43c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bc442:{NFSU2_TR(0x6bc442);
__builtin_memmove((R+28),(R+0),4);
}
B6bc444:L6bc444:{c.instructions+=3;NFSU2_TR(0x6bc444);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6bc446:{NFSU2_TR(0x6bc446);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bc449:{NFSU2_TR(0x6bc449);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bc455;}}
}
B6bc44b:L6bc44b:{c.instructions+=3;NFSU2_TR(0x6bc44b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bc44e:{NFSU2_TR(0x6bc44e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B6bc450:{NFSU2_TR(0x6bc450);
if(r1(R+512)){{goto L6bc455;}}
}
B6bc452:L6bc452:{c.instructions+=1;NFSU2_TR(0x6bc452);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6bc455:L6bc455:{c.instructions+=3;NFSU2_TR(0x6bc455);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6bc458:{NFSU2_TR(0x6bc458);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B6bc459:{NFSU2_TR(0x6bc459);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bc444u);}goto L6bc444;}}
}
B6bc45b:L6bc45b:{c.instructions+=1;NFSU2_TR(0x6bc45b);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6bc45d:L6bc45d:{c.instructions+=9;NFSU2_TR(0x6bc45d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bc45e:{NFSU2_TR(0x6bc45e);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6bc460:{NFSU2_TR(0x6bc460);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bc461:{NFSU2_TR(0x6bc461);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6bc464:{NFSU2_TR(0x6bc464);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bc465:{NFSU2_TR(0x6bc465);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bc466:{NFSU2_TR(0x6bc466);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bc46c:{NFSU2_TR(0x6bc46c);
__builtin_memmove((R+4),(R+12),4);
}
B6bc46e:{NFSU2_TR(0x6bc46e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bc473ull));
TAIL_STATIC(0x699c39u,699);
}
B6bc473:L6bc473:{c.instructions+=3;NFSU2_TR(0x6bc473);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bc476:{NFSU2_TR(0x6bc476);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff70ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6bc47d:{NFSU2_TR(0x6bc47d);
if(r1(R+518)){{goto L6bc4b6;}}
}
B6bc47f:L6bc47f:{c.instructions+=3;NFSU2_TR(0x6bc47f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6bc480:{NFSU2_TR(0x6bc480);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B6bc483:{NFSU2_TR(0x6bc483);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bc45du);}goto L6bc45d;}}
}
B6bc485:L6bc485:{c.instructions+=2;NFSU2_TR(0x6bc485);
u8 U[4];
w4(U+0,u32(0x74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bc487:{NFSU2_TR(0x6bc487);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bc48cull));
TAIL_STATIC(0x699317u,699);
}
B6bc48c:L6bc48c:{c.instructions+=3;NFSU2_TR(0x6bc48c);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6bc48e:{NFSU2_TR(0x6bc48e);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bc490:{NFSU2_TR(0x6bc490);
if(r1(R+518)){{goto L6bc4c0;}}
}
B6bc492:L6bc492:{c.instructions+=2;NFSU2_TR(0x6bc492);
__builtin_memmove((R+4),(R+0),4);
}
B6bc494:{NFSU2_TR(0x6bc494);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bc499ull));
TAIL_STATIC(0x698e7du,698);
}
B6bc499:L6bc499:{c.instructions+=2;NFSU2_TR(0x6bc499);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bc49c:{NFSU2_TR(0x6bc49c);
{goto L6bc4c3;}
}
B6bc49e:L6bc49e:{c.instructions+=5;NFSU2_TR(0x6bc49e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bc4a1:{NFSU2_TR(0x6bc4a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bc4a4:{NFSU2_TR(0x6bc4a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bc4a8:{NFSU2_TR(0x6bc4a8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6bc4ab:{NFSU2_TR(0x6bc4ab);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bc3b3u);}goto L6bc3b3;}}
}
B6bc4b1:L6bc4b1:{c.instructions+=1;NFSU2_TR(0x6bc4b1);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bc3e2u);}goto L6bc3e2;}
}
B6bc4b6:L6bc4b6:{c.instructions+=2;NFSU2_TR(0x6bc4b6);
w4(R+28,u32(0x8007000eull));
}
B6bc4bb:{NFSU2_TR(0x6bc4bb);
{goto L6bcd14;}
}
B6bc4c0:L6bc4c0:{c.instructions+=1;NFSU2_TR(0x6bc4c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bc4c3:L6bc4c3:{c.instructions+=2;NFSU2_TR(0x6bc4c3);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bc4c6:{NFSU2_TR(0x6bc4c6);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bc4b6u);}goto L6bc4b6;}}
}
B6bc4c8:L6bc4c8:{c.instructions+=10;NFSU2_TR(0x6bc4c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bc4ce:{NFSU2_TR(0x6bc4ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bc4d1:{NFSU2_TR(0x6bc4d1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bc4d2:{NFSU2_TR(0x6bc4d2);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bc4d5:{NFSU2_TR(0x6bc4d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bc4d8:{NFSU2_TR(0x6bc4d8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bc4d9:{NFSU2_TR(0x6bc4d9);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6bc4de:{NFSU2_TR(0x6bc4de);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10000000ull))));
}
B6bc4e3:{NFSU2_TR(0x6bc4e3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bc4e4:{NFSU2_TR(0x6bc4e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bc4e9ull));
TAIL_STATIC(0x699362u,699);
}
B6bc4e9:L6bc4e9:{c.instructions+=3;NFSU2_TR(0x6bc4e9);
__builtin_memmove((R+28),(R+0),4);
}
B6bc4eb:{NFSU2_TR(0x6bc4eb);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6bc4ed:{NFSU2_TR(0x6bc4ed);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bcd14;}}
}
B6bc4f3:L6bc4f3:{c.instructions+=3;NFSU2_TR(0x6bc4f3);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bc4f9:{NFSU2_TR(0x6bc4f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bc4fc:{NFSU2_TR(0x6bc4fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bc501ull));
TAIL_STATIC(0x698eb3u,698);
}
B6bc501:L6bc501:{c.instructions+=3;NFSU2_TR(0x6bc501);
__builtin_memmove((R+28),(R+0),4);
}
B6bc503:{NFSU2_TR(0x6bc503);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6bc505:{NFSU2_TR(0x6bc505);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bcd14;}}
}
B6bc50b:L6bc50b:{c.instructions+=8;NFSU2_TR(0x6bc50b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bc511:{NFSU2_TR(0x6bc511);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bc514:{NFSU2_TR(0x6bc514);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bc517:{NFSU2_TR(0x6bc517);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6bc51a:{NFSU2_TR(0x6bc51a);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6bc51d:{NFSU2_TR(0x6bc51d);
__builtin_memmove((R+0),(R+4),4);
}
B6bc51f:{NFSU2_TR(0x6bc51f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6bc522:{NFSU2_TR(0x6bc522);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6bc528:L6bc528:{c.instructions+=1;NFSU2_TR(0x6bc528);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6bc52a;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bc528u);}goto L6bc528;}
}
B6bc52a:L6bc52a:{c.instructions+=2;NFSU2_TR(0x6bc52a);
__builtin_memmove((R+4),(R+0),4);
}
B6bc52c:{NFSU2_TR(0x6bc52c);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6bc52f:L6bc52f:{c.instructions+=1;NFSU2_TR(0x6bc52f);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6bc531;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bc52fu);}goto L6bc52f;}
}
B6bc531:L6bc531:{c.instructions+=7;NFSU2_TR(0x6bc531);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bc537:{NFSU2_TR(0x6bc537);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bc53a:{NFSU2_TR(0x6bc53a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6bc53d:{NFSU2_TR(0x6bc53d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6bc540:{NFSU2_TR(0x6bc540);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6bc543:{NFSU2_TR(0x6bc543);
__builtin_memmove((R+0),(R+4),4);
}
B6bc545:{NFSU2_TR(0x6bc545);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6bc548:L6bc548:{c.instructions+=1;NFSU2_TR(0x6bc548);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6bc54a;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bc548u);}goto L6bc548;}
}
B6bc54a:L6bc54a:{c.instructions+=2;NFSU2_TR(0x6bc54a);
__builtin_memmove((R+4),(R+0),4);
}
B6bc54c:{NFSU2_TR(0x6bc54c);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6bc54f:L6bc54f:{c.instructions+=1;NFSU2_TR(0x6bc54f);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6bc551;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bc54fu);}goto L6bc54f;}
}
B6bc551:L6bc551:{c.instructions+=7;NFSU2_TR(0x6bc551);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bc557:{NFSU2_TR(0x6bc557);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bc55a:{NFSU2_TR(0x6bc55a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6bc55d:{NFSU2_TR(0x6bc55d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6bc560:{NFSU2_TR(0x6bc560);
__builtin_memmove((R+0),(R+4),4);
}
B6bc562:{NFSU2_TR(0x6bc562);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6bc565:{NFSU2_TR(0x6bc565);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6bc56b:L6bc56b:{c.instructions+=1;NFSU2_TR(0x6bc56b);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6bc56d;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bc56bu);}goto L6bc56b;}
}
B6bc56d:L6bc56d:{c.instructions+=2;NFSU2_TR(0x6bc56d);
__builtin_memmove((R+4),(R+0),4);
}
B6bc56f:{NFSU2_TR(0x6bc56f);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6bc572:L6bc572:{c.instructions+=1;NFSU2_TR(0x6bc572);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6bc574;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bc572u);}goto L6bc572;}
}
B6bc574:L6bc574:{c.instructions+=3;NFSU2_TR(0x6bc574);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bc575:{NFSU2_TR(0x6bc575);
__builtin_memmove((R+4),(R+12),4);
}
B6bc577:{NFSU2_TR(0x6bc577);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bc57cull));
TAIL_STATIC(0x699b26u,699);
}
B6bc57c:L6bc57c:{c.instructions+=3;NFSU2_TR(0x6bc57c);
__builtin_memmove((R+28),(R+0),4);
}
B6bc57e:{NFSU2_TR(0x6bc57e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6bc580:{NFSU2_TR(0x6bc580);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bcd14;}}
}
B6bc586:L6bc586:{c.instructions+=1;NFSU2_TR(0x6bc586);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bc58a:L6bc58a:{c.instructions+=3;NFSU2_TR(0x6bc58a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6bc58c:{NFSU2_TR(0x6bc58c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bc58f:{NFSU2_TR(0x6bc58f);
if(r1(R+518)){{goto L6bc971;}}
}
B6bc595:L6bc595:{c.instructions+=2;NFSU2_TR(0x6bc595);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6bc599:{NFSU2_TR(0x6bc599);
if(r1(R+518)){{goto L6bc971;}}
}
B6bc59f:L6bc59f:{c.instructions+=4;NFSU2_TR(0x6bc59f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bc5a3:{NFSU2_TR(0x6bc5a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bc5a6:{NFSU2_TR(0x6bc5a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bc5a9:{NFSU2_TR(0x6bc5a9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bc7df;}}
}
B6bc5af:L6bc5af:{c.instructions+=2;NFSU2_TR(0x6bc5af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6bc5b6:{NFSU2_TR(0x6bc5b6);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6bc5b8:L6bc5b8:{c.instructions+=3;NFSU2_TR(0x6bc5b8);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6bc5ba:{NFSU2_TR(0x6bc5ba);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bc5bd:{NFSU2_TR(0x6bc5bd);
if(r1(R+518)){{goto L6bc625;}}
}
B6bc5bf:L6bc5bf:{c.instructions+=18;NFSU2_TR(0x6bc5bf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6bc5c1:{NFSU2_TR(0x6bc5c1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6bc5c4:{NFSU2_TR(0x6bc5c4);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6bc5c5:{NFSU2_TR(0x6bc5c5);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6bc5c6:{NFSU2_TR(0x6bc5c6);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6bc5c7:{NFSU2_TR(0x6bc5c7);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6bc5c8:{NFSU2_TR(0x6bc5c8);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6bc5cb:{NFSU2_TR(0x6bc5cb);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6bc5ce:{NFSU2_TR(0x6bc5ce);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6bc5cf:{NFSU2_TR(0x6bc5cf);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6bc5d0:{NFSU2_TR(0x6bc5d0);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6bc5d1:{NFSU2_TR(0x6bc5d1);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6bc5d2:{NFSU2_TR(0x6bc5d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bc5d5:{NFSU2_TR(0x6bc5d5);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff80ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(U+12,u32(u32(r4(U+12))|u32(u32(0xffffffffull))));
s4(u32(r4(U+8)),r4(U+12));
}
B6bc5da:{NFSU2_TR(0x6bc5da);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bc5dc:{NFSU2_TR(0x6bc5dc);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff90ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6bc5e0:{NFSU2_TR(0x6bc5e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bc5e3:{NFSU2_TR(0x6bc5e3);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bc643;}}
}
B6bc5e5:L6bc5e5:{c.instructions+=2;NFSU2_TR(0x6bc5e5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff30ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6bc5eb:{NFSU2_TR(0x6bc5eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bc5ee:L6bc5ee:{c.instructions+=4;NFSU2_TR(0x6bc5ee);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6bc5f1:{NFSU2_TR(0x6bc5f1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bc5f2:{NFSU2_TR(0x6bc5f2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bc5f3:{NFSU2_TR(0x6bc5f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bc5f8ull));
TAIL_STATIC(0x6bbdf3u,6bb);
}
B6bc5f8:L6bc5f8:{c.instructions+=2;NFSU2_TR(0x6bc5f8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bc5fa:{NFSU2_TR(0x6bc5fa);
if(r1(R+518)){{goto L6bc60a;}}
}
B6bc5fc:L6bc5fc:{c.instructions+=4;NFSU2_TR(0x6bc5fc);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6bc5ff:{NFSU2_TR(0x6bc5ff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bc600:{NFSU2_TR(0x6bc600);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bc601:{NFSU2_TR(0x6bc601);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bc606ull));
TAIL_STATIC(0x6bbdf3u,6bb);
}
B6bc606:L6bc606:{c.instructions+=2;NFSU2_TR(0x6bc606);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bc608:{NFSU2_TR(0x6bc608);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bc611;}}
}
B6bc60a:L6bc60a:{c.instructions+=1;NFSU2_TR(0x6bc60a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6bc611:L6bc611:{c.instructions+=3;NFSU2_TR(0x6bc611);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B6bc614:{NFSU2_TR(0x6bc614);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bc617:{NFSU2_TR(0x6bc617);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bc5eeu);}goto L6bc5ee;}}
}
B6bc619:L6bc619:{c.instructions+=2;NFSU2_TR(0x6bc619);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bc61d:{NFSU2_TR(0x6bc61d);
if(r1(R+518)){{goto L6bc643;}}
}
B6bc61f:L6bc61f:{c.instructions+=3;NFSU2_TR(0x6bc61f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6bc620:{NFSU2_TR(0x6bc620);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B6bc623:{NFSU2_TR(0x6bc623);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bc5b8u);}goto L6bc5b8;}}
}
B6bc625:L6bc625:{c.instructions+=2;NFSU2_TR(0x6bc625);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bc629:{NFSU2_TR(0x6bc629);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6bc630:L6bc630:{c.instructions+=2;NFSU2_TR(0x6bc630);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bc634:{NFSU2_TR(0x6bc634);
if(r1(R+518)){{goto L6bc769;}}
}
B6bc63a:L6bc63a:{c.instructions+=4;NFSU2_TR(0x6bc63a);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6bc63c:{NFSU2_TR(0x6bc63c);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6bc63e:{NFSU2_TR(0x6bc63e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bc641:{NFSU2_TR(0x6bc641);
{goto L6bc67e;}
}
B6bc643:L6bc643:{c.instructions+=6;NFSU2_TR(0x6bc643);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bc645:{NFSU2_TR(0x6bc645);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bc648:{NFSU2_TR(0x6bc648);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6bc64b:{NFSU2_TR(0x6bc64b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bc64c:{NFSU2_TR(0x6bc64c);
__builtin_memmove((R+4),(R+12),4);
}
B6bc64e:{NFSU2_TR(0x6bc64e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bc653ull));
TAIL_STATIC(0x6cbc7au,6cb);
}
B6bc653:L6bc653:{c.instructions+=3;NFSU2_TR(0x6bc653);
__builtin_memmove((R+28),(R+0),4);
}
B6bc655:{NFSU2_TR(0x6bc655);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6bc657:{NFSU2_TR(0x6bc657);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bcd14;}}
}
B6bc65d:L6bc65d:{c.instructions+=6;NFSU2_TR(0x6bc65d);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bc65f:{NFSU2_TR(0x6bc65f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bc662:{NFSU2_TR(0x6bc662);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6bc665:{NFSU2_TR(0x6bc665);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bc666:{NFSU2_TR(0x6bc666);
__builtin_memmove((R+4),(R+12),4);
}
B6bc668:{NFSU2_TR(0x6bc668);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bc66dull));
TAIL_STATIC(0x6cbc7au,6cb);
}
B6bc66d:L6bc66d:{c.instructions+=3;NFSU2_TR(0x6bc66d);
__builtin_memmove((R+28),(R+0),4);
}
B6bc66f:{NFSU2_TR(0x6bc66f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6bc671:{NFSU2_TR(0x6bc671);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bcd14;}}
}
B6bc677:L6bc677:{c.instructions+=1;NFSU2_TR(0x6bc677);
{goto L6bc94a;}
}
B6bc67c:L6bc67c:{c.instructions+=1;NFSU2_TR(0x6bc67c);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6bc67e:L6bc67e:{c.instructions+=3;NFSU2_TR(0x6bc67e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bc681:{NFSU2_TR(0x6bc681);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bc683:{NFSU2_TR(0x6bc683);
if(r1(R+518)){{goto L6bc746;}}
}
B6bc689:L6bc689:{c.instructions+=21;NFSU2_TR(0x6bc689);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6bc68b:{NFSU2_TR(0x6bc68b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6bc68e:{NFSU2_TR(0x6bc68e);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6bc68f:{NFSU2_TR(0x6bc68f);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6bc690:{NFSU2_TR(0x6bc690);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6bc691:{NFSU2_TR(0x6bc691);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6bc692:{NFSU2_TR(0x6bc692);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6bc695:{NFSU2_TR(0x6bc695);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6bc698:{NFSU2_TR(0x6bc698);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6bc699:{NFSU2_TR(0x6bc699);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6bc69a:{NFSU2_TR(0x6bc69a);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6bc69b:{NFSU2_TR(0x6bc69b);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6bc69c:{NFSU2_TR(0x6bc69c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6bc69f:{NFSU2_TR(0x6bc69f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+8,u32(u32(r4(U+8))|u32(u32(0xffffffffull))));
s4(u32(r4(U+4)),r4(U+8));
}
B6bc6a3:{NFSU2_TR(0x6bc6a3);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+8,u32(u32(r4(U+8))|u32(u32(0xffffffffull))));
s4(u32(r4(U+4)),r4(U+8));
}
B6bc6a7:{NFSU2_TR(0x6bc6a7);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bc6aa:{NFSU2_TR(0x6bc6aa);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff90ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6bc6ae:{NFSU2_TR(0x6bc6ae);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff90ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6bc6b2:{NFSU2_TR(0x6bc6b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bc6b5:{NFSU2_TR(0x6bc6b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bc6b8:{NFSU2_TR(0x6bc6b8);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bc755;}}
}
B6bc6be:L6bc6be:{c.instructions+=3;NFSU2_TR(0x6bc6be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bc6c1:{NFSU2_TR(0x6bc6c1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff30ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6bc6c7:{NFSU2_TR(0x6bc6c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bc6ca:L6bc6ca:{c.instructions+=4;NFSU2_TR(0x6bc6ca);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6bc6cd:{NFSU2_TR(0x6bc6cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bc6ce:{NFSU2_TR(0x6bc6ce);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bc6cf:{NFSU2_TR(0x6bc6cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bc6d4ull));
TAIL_STATIC(0x6bbdf3u,6bb);
}
B6bc6d4:L6bc6d4:{c.instructions+=5;NFSU2_TR(0x6bc6d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bc6d7:{NFSU2_TR(0x6bc6d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6bc6da:{NFSU2_TR(0x6bc6da);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bc6db:{NFSU2_TR(0x6bc6db);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bc6dc:{NFSU2_TR(0x6bc6dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bc6e1ull));
TAIL_STATIC(0x6bbdf3u,6bb);
}
B6bc6e1:L6bc6e1:{c.instructions+=2;NFSU2_TR(0x6bc6e1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bc6e5:{NFSU2_TR(0x6bc6e5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bc6f0;}}
}
B6bc6e7:L6bc6e7:{c.instructions+=2;NFSU2_TR(0x6bc6e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6bc6ee:{NFSU2_TR(0x6bc6ee);
{goto L6bc6f4;}
}
B6bc6f0:L6bc6f0:{c.instructions+=2;NFSU2_TR(0x6bc6f0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bc6f2:{NFSU2_TR(0x6bc6f2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bc6fb;}}
}
B6bc6f4:L6bc6f4:{c.instructions+=1;NFSU2_TR(0x6bc6f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6bc6fb:L6bc6fb:{c.instructions+=3;NFSU2_TR(0x6bc6fb);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B6bc6fe:{NFSU2_TR(0x6bc6fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bc701:{NFSU2_TR(0x6bc701);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bc6cau);}goto L6bc6ca;}}
}
B6bc703:L6bc703:{c.instructions+=2;NFSU2_TR(0x6bc703);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bc707:{NFSU2_TR(0x6bc707);
if(r1(R+518)){{goto L6bc755;}}
}
B6bc709:L6bc709:{c.instructions+=2;NFSU2_TR(0x6bc709);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bc70d:{NFSU2_TR(0x6bc70d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bc746;}}
}
B6bc70f:L6bc70f:{c.instructions+=24;NFSU2_TR(0x6bc70f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6bc712:{NFSU2_TR(0x6bc712);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6bc715:{NFSU2_TR(0x6bc715);
u8 U[40];
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
}
B6bc716:{NFSU2_TR(0x6bc716);
u8 U[40];
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
}
B6bc717:{NFSU2_TR(0x6bc717);
u8 U[40];
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
}
B6bc718:{NFSU2_TR(0x6bc718);
u8 U[40];
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
}
B6bc719:{NFSU2_TR(0x6bc719);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6bc71c:{NFSU2_TR(0x6bc71c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6bc71f:{NFSU2_TR(0x6bc71f);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6bc720:{NFSU2_TR(0x6bc720);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6bc721:{NFSU2_TR(0x6bc721);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6bc722:{NFSU2_TR(0x6bc722);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6bc723:{NFSU2_TR(0x6bc723);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6bc726:{NFSU2_TR(0x6bc726);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6bc729:{NFSU2_TR(0x6bc729);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6bc72a:{NFSU2_TR(0x6bc72a);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6bc72b:{NFSU2_TR(0x6bc72b);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6bc72c:{NFSU2_TR(0x6bc72c);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6bc72d:{NFSU2_TR(0x6bc72d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bc730:{NFSU2_TR(0x6bc730);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffb0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(U+12,u32(u32(r4(U+12))&u32(u32(0x0ull))));
s4(u32(r4(U+8)),r4(U+12));
}
B6bc735:{NFSU2_TR(0x6bc735);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bc738:{NFSU2_TR(0x6bc738);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffc0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(U+12,u32(u32(r4(U+12))&u32(u32(0x0ull))));
s4(u32(r4(U+8)),r4(U+12));
}
B6bc73d:{NFSU2_TR(0x6bc73d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6bc744:{NFSU2_TR(0x6bc744);
__builtin_memmove((R+24),(R+0),4);
}
B6bc746:L6bc746:{c.instructions+=4;NFSU2_TR(0x6bc746);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6bc747:{NFSU2_TR(0x6bc747);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B6bc74a:{NFSU2_TR(0x6bc74a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bc74d:{NFSU2_TR(0x6bc74d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bc67cu);}goto L6bc67c;}}
}
B6bc753:L6bc753:{c.instructions+=1;NFSU2_TR(0x6bc753);
{goto L6bc75c;}
}
B6bc755:L6bc755:{c.instructions+=1;NFSU2_TR(0x6bc755);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6bc75c:L6bc75c:{c.instructions+=3;NFSU2_TR(0x6bc75c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bc75f:{NFSU2_TR(0x6bc75f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x4ull))));
}
B6bc763:{NFSU2_TR(0x6bc763);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bc630u);}goto L6bc630;}}
}
B6bc769:L6bc769:{c.instructions+=2;NFSU2_TR(0x6bc769);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bc76d:{NFSU2_TR(0x6bc76d);
if(r1(R+518)){{goto L6bc790;}}
}
B6bc76f:L6bc76f:{c.instructions+=6;NFSU2_TR(0x6bc76f);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bc771:{NFSU2_TR(0x6bc771);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bc774:{NFSU2_TR(0x6bc774);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6bc777:{NFSU2_TR(0x6bc777);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bc778:{NFSU2_TR(0x6bc778);
__builtin_memmove((R+4),(R+12),4);
}
B6bc77a:{NFSU2_TR(0x6bc77a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bc77full));
TAIL_STATIC(0x6cbc7au,6cb);
}
B6bc77f:L6bc77f:{c.instructions+=3;NFSU2_TR(0x6bc77f);
__builtin_memmove((R+28),(R+0),4);
}
B6bc781:{NFSU2_TR(0x6bc781);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6bc783:{NFSU2_TR(0x6bc783);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bcd14;}}
}
B6bc789:L6bc789:{c.instructions+=2;NFSU2_TR(0x6bc789);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bc78b:{NFSU2_TR(0x6bc78b);
{goto L6bc8e0;}
}
B6bc790:L6bc790:{c.instructions+=2;NFSU2_TR(0x6bc790);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bc794:{NFSU2_TR(0x6bc794);
if(r1(R+518)){{goto L6bc8fe;}}
}
B6bc79a:L6bc79a:{c.instructions+=7;NFSU2_TR(0x6bc79a);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bc79c:{NFSU2_TR(0x6bc79c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bc79f:{NFSU2_TR(0x6bc79f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6bc7a2:{NFSU2_TR(0x6bc7a2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bc7a3:{NFSU2_TR(0x6bc7a3);
__builtin_memmove((R+4),(R+12),4);
}
B6bc7a5:{NFSU2_TR(0x6bc7a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6bc7ac:{NFSU2_TR(0x6bc7ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bc7b1ull));
TAIL_STATIC(0x6cbc7au,6cb);
}
B6bc7b1:L6bc7b1:{c.instructions+=3;NFSU2_TR(0x6bc7b1);
__builtin_memmove((R+28),(R+0),4);
}
B6bc7b3:{NFSU2_TR(0x6bc7b3);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6bc7b5:{NFSU2_TR(0x6bc7b5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bcd14;}}
}
B6bc7bb:L6bc7bb:{c.instructions+=6;NFSU2_TR(0x6bc7bb);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bc7bd:{NFSU2_TR(0x6bc7bd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bc7c0:{NFSU2_TR(0x6bc7c0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6bc7c3:{NFSU2_TR(0x6bc7c3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bc7c4:{NFSU2_TR(0x6bc7c4);
__builtin_memmove((R+4),(R+12),4);
}
B6bc7c6:{NFSU2_TR(0x6bc7c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bc7cbull));
TAIL_STATIC(0x6cbc7au,6cb);
}
B6bc7cb:L6bc7cb:{c.instructions+=3;NFSU2_TR(0x6bc7cb);
__builtin_memmove((R+28),(R+0),4);
}
B6bc7cd:{NFSU2_TR(0x6bc7cd);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6bc7cf:{NFSU2_TR(0x6bc7cf);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bcd14;}}
}
B6bc7d5:L6bc7d5:{c.instructions+=3;NFSU2_TR(0x6bc7d5);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bc7d7:{NFSU2_TR(0x6bc7d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6bc7da:{NFSU2_TR(0x6bc7da);
{goto L6bc8e3;}
}
B6bc7df:L6bc7df:{c.instructions+=2;NFSU2_TR(0x6bc7df);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bc7e3:{NFSU2_TR(0x6bc7e3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bc8fe;}}
}
B6bc7e9:L6bc7e9:{c.instructions+=2;NFSU2_TR(0x6bc7e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bc7ed:{NFSU2_TR(0x6bc7ed);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6bc7ef:L6bc7ef:{c.instructions+=2;NFSU2_TR(0x6bc7ef);
u8 U[24];
w4(U+0,u32(u32(u32(0xffffff30ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B6bc7f7:{NFSU2_TR(0x6bc7f7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bc7fc;}}
}
B6bc7f9:L6bc7f9:{c.instructions+=1;NFSU2_TR(0x6bc7f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bc7fc:L6bc7fc:{c.instructions+=3;NFSU2_TR(0x6bc7fc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6bc7fd:{NFSU2_TR(0x6bc7fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B6bc800:{NFSU2_TR(0x6bc800);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bc7efu);}goto L6bc7ef;}}
}
B6bc802:L6bc802:{c.instructions+=1;NFSU2_TR(0x6bc802);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bc806:L6bc806:{c.instructions+=2;NFSU2_TR(0x6bc806);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bc80a:{NFSU2_TR(0x6bc80a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bc8c4;}}
}
B6bc810:L6bc810:{c.instructions+=1;NFSU2_TR(0x6bc810);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6bc812:L6bc812:{c.instructions+=2;NFSU2_TR(0x6bc812);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bc816:{NFSU2_TR(0x6bc816);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bc8b1;}}
}
B6bc81c:L6bc81c:{c.instructions+=3;NFSU2_TR(0x6bc81c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bc81f:{NFSU2_TR(0x6bc81f);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bc821:{NFSU2_TR(0x6bc821);
if(r1(R+518)){{goto L6bc8a7;}}
}
B6bc827:L6bc827:{c.instructions+=3;NFSU2_TR(0x6bc827);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bc82a:{NFSU2_TR(0x6bc82a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bc82c:{NFSU2_TR(0x6bc82c);
if(r1(R+518)){{goto L6bc8a7;}}
}
B6bc82e:L6bc82e:{c.instructions+=2;NFSU2_TR(0x6bc82e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bc830:{NFSU2_TR(0x6bc830);
if(r1(R+518)){{goto L6bc8a7;}}
}
B6bc832:L6bc832:{c.instructions+=23;NFSU2_TR(0x6bc832);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6bc835:{NFSU2_TR(0x6bc835);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6bc838:{NFSU2_TR(0x6bc838);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6bc839:{NFSU2_TR(0x6bc839);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6bc83a:{NFSU2_TR(0x6bc83a);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6bc83b:{NFSU2_TR(0x6bc83b);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6bc83c:{NFSU2_TR(0x6bc83c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6bc83e:{NFSU2_TR(0x6bc83e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6bc841:{NFSU2_TR(0x6bc841);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6bc842:{NFSU2_TR(0x6bc842);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6bc843:{NFSU2_TR(0x6bc843);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6bc844:{NFSU2_TR(0x6bc844);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6bc845:{NFSU2_TR(0x6bc845);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6bc847:{NFSU2_TR(0x6bc847);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6bc84a:{NFSU2_TR(0x6bc84a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6bc84d:{NFSU2_TR(0x6bc84d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6bc850:{NFSU2_TR(0x6bc850);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6bc853:{NFSU2_TR(0x6bc853);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff90ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(U+12,u32(u32(r4(U+12))|u32(u32(0xffffffffull))));
s4(u32(r4(U+8)),r4(U+12));
}
B6bc858:{NFSU2_TR(0x6bc858);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff90ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(U+12,u32(u32(r4(U+12))|u32(u32(0xffffffffull))));
s4(u32(r4(U+8)),r4(U+12));
}
B6bc85d:{NFSU2_TR(0x6bc85d);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff90ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(U+12,u32(u32(r4(U+12))|u32(u32(0xffffffffull))));
s4(u32(r4(U+8)),r4(U+12));
}
B6bc862:{NFSU2_TR(0x6bc862);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bc865:{NFSU2_TR(0x6bc865);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bc868:{NFSU2_TR(0x6bc868);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bc8a0;}}
}
B6bc86a:L6bc86a:{c.instructions+=2;NFSU2_TR(0x6bc86a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff30ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6bc870:{NFSU2_TR(0x6bc870);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bc873:L6bc873:{c.instructions+=2;NFSU2_TR(0x6bc873);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bc877:{NFSU2_TR(0x6bc877);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bc8a7;}}
}
B6bc879:L6bc879:{c.instructions+=4;NFSU2_TR(0x6bc879);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6bc87c:{NFSU2_TR(0x6bc87c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bc87d:{NFSU2_TR(0x6bc87d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bc880:{NFSU2_TR(0x6bc880);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bc885ull));
TAIL_STATIC(0x6bbdf3u,6bb);
}
B6bc885:L6bc885:{c.instructions+=2;NFSU2_TR(0x6bc885);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bc887:{NFSU2_TR(0x6bc887);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bc890;}}
}
B6bc889:L6bc889:{c.instructions+=1;NFSU2_TR(0x6bc889);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6bc890:L6bc890:{c.instructions+=4;NFSU2_TR(0x6bc890);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bc894:{NFSU2_TR(0x6bc894);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6bc895:{NFSU2_TR(0x6bc895);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6bc898:{NFSU2_TR(0x6bc898);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bc873u);}goto L6bc873;}}
}
B6bc89a:L6bc89a:{c.instructions+=2;NFSU2_TR(0x6bc89a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bc89e:{NFSU2_TR(0x6bc89e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bc8a7;}}
}
B6bc8a0:L6bc8a0:{c.instructions+=1;NFSU2_TR(0x6bc8a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6bc8a7:L6bc8a7:{c.instructions+=3;NFSU2_TR(0x6bc8a7);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6bc8a8:{NFSU2_TR(0x6bc8a8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B6bc8ab:{NFSU2_TR(0x6bc8ab);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bc812u);}goto L6bc812;}}
}
B6bc8b1:L6bc8b1:{c.instructions+=3;NFSU2_TR(0x6bc8b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bc8b4:{NFSU2_TR(0x6bc8b4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x4ull))));
}
B6bc8b8:{NFSU2_TR(0x6bc8b8);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bc806u);}goto L6bc806;}}
}
B6bc8be:L6bc8be:{c.instructions+=2;NFSU2_TR(0x6bc8be);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bc8c2:{NFSU2_TR(0x6bc8c2);
if(r1(R+518)){{goto L6bc8fe;}}
}
B6bc8c4:L6bc8c4:{c.instructions+=6;NFSU2_TR(0x6bc8c4);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bc8c6:{NFSU2_TR(0x6bc8c6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bc8c9:{NFSU2_TR(0x6bc8c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6bc8cc:{NFSU2_TR(0x6bc8cc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bc8cd:{NFSU2_TR(0x6bc8cd);
__builtin_memmove((R+4),(R+12),4);
}
B6bc8cf:{NFSU2_TR(0x6bc8cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bc8d4ull));
TAIL_STATIC(0x6cbc7au,6cb);
}
B6bc8d4:L6bc8d4:{c.instructions+=3;NFSU2_TR(0x6bc8d4);
__builtin_memmove((R+28),(R+0),4);
}
B6bc8d6:{NFSU2_TR(0x6bc8d6);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6bc8d8:{NFSU2_TR(0x6bc8d8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bcd14;}}
}
B6bc8de:L6bc8de:{c.instructions+=1;NFSU2_TR(0x6bc8de);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bc8e0:L6bc8e0:{c.instructions+=1;NFSU2_TR(0x6bc8e0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6bc8e3:L6bc8e3:{c.instructions+=4;NFSU2_TR(0x6bc8e3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bc8e6:{NFSU2_TR(0x6bc8e6);
__builtin_memmove((R+4),(R+12),4);
}
B6bc8e8:{NFSU2_TR(0x6bc8e8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bc8e9:{NFSU2_TR(0x6bc8e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bc8eeull));
TAIL_STATIC(0x6cbc7au,6cb);
}
B6bc8ee:L6bc8ee:{c.instructions+=3;NFSU2_TR(0x6bc8ee);
__builtin_memmove((R+28),(R+0),4);
}
B6bc8f0:{NFSU2_TR(0x6bc8f0);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6bc8f2:{NFSU2_TR(0x6bc8f2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bcd14;}}
}
B6bc8f8:L6bc8f8:{c.instructions+=2;NFSU2_TR(0x6bc8f8);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bc8fc:{NFSU2_TR(0x6bc8fc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bc94a;}}
}
B6bc8fe:L6bc8fe:{c.instructions+=3;NFSU2_TR(0x6bc8fe);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6bc900:{NFSU2_TR(0x6bc900);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bc903:{NFSU2_TR(0x6bc903);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bc94a;}}
}
B6bc905:L6bc905:{c.instructions+=19;NFSU2_TR(0x6bc905);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bc908:{NFSU2_TR(0x6bc908);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bc90b:{NFSU2_TR(0x6bc90b);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6bc90e:{NFSU2_TR(0x6bc90e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bc911:{NFSU2_TR(0x6bc911);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6bc914:{NFSU2_TR(0x6bc914);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6bc915:{NFSU2_TR(0x6bc915);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6bc916:{NFSU2_TR(0x6bc916);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6bc917:{NFSU2_TR(0x6bc917);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6bc918:{NFSU2_TR(0x6bc918);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bc91e:{NFSU2_TR(0x6bc91e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bc921:{NFSU2_TR(0x6bc921);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6bc924:{NFSU2_TR(0x6bc924);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6bc927:{NFSU2_TR(0x6bc927);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bc92a:{NFSU2_TR(0x6bc92a);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff80ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(U+12,u32(u32(r4(U+12))&u32(u32(0x0ull))));
s4(u32(r4(U+8)),r4(U+12));
}
B6bc92f:{NFSU2_TR(0x6bc92f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6bc932:{NFSU2_TR(0x6bc932);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bc933:{NFSU2_TR(0x6bc933);
__builtin_memmove((R+4),(R+12),4);
}
B6bc935:{NFSU2_TR(0x6bc935);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bc93aull));
TAIL_STATIC(0x6cbc7au,6cb);
}
B6bc93a:L6bc93a:{c.instructions+=3;NFSU2_TR(0x6bc93a);
__builtin_memmove((R+28),(R+0),4);
}
B6bc93c:{NFSU2_TR(0x6bc93c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6bc93e:{NFSU2_TR(0x6bc93e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bcd14;}}
}
B6bc944:L6bc944:{c.instructions+=3;NFSU2_TR(0x6bc944);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6bc945:{NFSU2_TR(0x6bc945);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B6bc948:{NFSU2_TR(0x6bc948);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bc905u);}goto L6bc905;}}
}
B6bc94a:L6bc94a:{c.instructions+=2;NFSU2_TR(0x6bc94a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bc94e:{NFSU2_TR(0x6bc94e);
if(r1(R+518)){{goto L6bcae3;}}
}
B6bc954:L6bc954:{c.instructions+=3;NFSU2_TR(0x6bc954);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bc957:{NFSU2_TR(0x6bc957);
__builtin_memmove((R+4),(R+12),4);
}
B6bc959:{NFSU2_TR(0x6bc959);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bc95eull));
TAIL_STATIC(0x699b26u,699);
}
B6bc95e:L6bc95e:{c.instructions+=3;NFSU2_TR(0x6bc95e);
__builtin_memmove((R+28),(R+0),4);
}
B6bc960:{NFSU2_TR(0x6bc960);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6bc962:{NFSU2_TR(0x6bc962);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bcd14;}}
}
B6bc968:L6bc968:{c.instructions+=2;NFSU2_TR(0x6bc968);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bc96c:{NFSU2_TR(0x6bc96c);
{goto L6bcae3;}
}
B6bc971:L6bc971:{c.instructions+=3;NFSU2_TR(0x6bc971);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bc977:{NFSU2_TR(0x6bc977);
__builtin_memmove((R+4),(R+12),4);
}
B6bc979:{NFSU2_TR(0x6bc979);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bc97eull));
TAIL_STATIC(0x699d92u,699);
}
B6bc97e:L6bc97e:{c.instructions+=3;NFSU2_TR(0x6bc97e);
__builtin_memmove((R+28),(R+0),4);
}
B6bc980:{NFSU2_TR(0x6bc980);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6bc982:{NFSU2_TR(0x6bc982);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bcd14;}}
}
B6bc988:L6bc988:{c.instructions+=1;NFSU2_TR(0x6bc988);
{goto L6bcae3;}
}
B6bc98d:L6bc98d:{c.instructions+=2;NFSU2_TR(0x6bc98d);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bc98f:{NFSU2_TR(0x6bc98f);
if(r1(R+518)){{goto L6bccda;}}
}
B6bc995:L6bc995:{c.instructions+=2;NFSU2_TR(0x6bc995);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bc997:{NFSU2_TR(0x6bc997);
if(r1(R+518)){{goto L6bccda;}}
}
B6bc99d:L6bc99d:{c.instructions+=8;NFSU2_TR(0x6bc99d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bc9a3:{NFSU2_TR(0x6bc9a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bc9a6:{NFSU2_TR(0x6bc9a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bc9a9:{NFSU2_TR(0x6bc9a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6bc9ab:{NFSU2_TR(0x6bc9ab);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6bc9ae:{NFSU2_TR(0x6bc9ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bc9b1:{NFSU2_TR(0x6bc9b1);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bc9b7:{NFSU2_TR(0x6bc9b7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bc9df;}}
}
B6bc9b9:L6bc9b9:{c.instructions+=6;NFSU2_TR(0x6bc9b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bc9bf:{NFSU2_TR(0x6bc9bf);
u8 U[4];
w4(U+0,u32(0x7bd108ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bc9c4:{NFSU2_TR(0x6bc9c4);
u8 U[4];
w4(U+0,u32(0x12d1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bc9c9:{NFSU2_TR(0x6bc9c9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bc9cc:{NFSU2_TR(0x6bc9cc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bc9cd:{NFSU2_TR(0x6bc9cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bc9d2ull));
TAIL_STATIC(0x69e936u,69e);
}
B6bc9d2:L6bc9d2:{c.instructions+=3;NFSU2_TR(0x6bc9d2);
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
B6bc9d5:{NFSU2_TR(0x6bc9d5);
w4(R+28,u32(0x80004005ull));
}
B6bc9da:{NFSU2_TR(0x6bc9da);
{goto L6bcd32;}
}
B6bc9df:L6bc9df:{c.instructions+=4;NFSU2_TR(0x6bc9df);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6bc9e1:{NFSU2_TR(0x6bc9e1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bc9e4:{NFSU2_TR(0x6bc9e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bc9e7:{NFSU2_TR(0x6bc9e7);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bcacc;}}
}
B6bc9ed:L6bc9ed:{c.instructions+=6;NFSU2_TR(0x6bc9ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bc9f0:{NFSU2_TR(0x6bc9f0);
__builtin_memmove((R+0),(R+24),4);
}
B6bc9f2:{NFSU2_TR(0x6bc9f2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff30ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6bc9f8:{NFSU2_TR(0x6bc9f8);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6bc9fb:{NFSU2_TR(0x6bc9fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bc9fe:{NFSU2_TR(0x6bc9fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bca01:L6bca01:{c.instructions+=9;NFSU2_TR(0x6bca01);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bca04:{NFSU2_TR(0x6bca04);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6bca07:{NFSU2_TR(0x6bca07);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bca09:{NFSU2_TR(0x6bca09);
__builtin_memmove((R+28),(R+8),4);
}
B6bca0b:{NFSU2_TR(0x6bca0b);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6bca0c:{NFSU2_TR(0x6bca0c);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6bca0d:{NFSU2_TR(0x6bca0d);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6bca0e:{NFSU2_TR(0x6bca0e);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6bca0f:{NFSU2_TR(0x6bca0f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bca38;}}
}
B6bca11:L6bca11:{c.instructions+=4;NFSU2_TR(0x6bca11);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bca17:{NFSU2_TR(0x6bca17);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bca1a:{NFSU2_TR(0x6bca1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B6bca1d:{NFSU2_TR(0x6bca1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bca20:L6bca20:{c.instructions+=9;NFSU2_TR(0x6bca20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6bca22:{NFSU2_TR(0x6bca22);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bca25:{NFSU2_TR(0x6bca25);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6bca28:{NFSU2_TR(0x6bca28);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bca2b:{NFSU2_TR(0x6bca2b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6bca2d:{NFSU2_TR(0x6bca2d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6bca30:{NFSU2_TR(0x6bca30);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6bca33:{NFSU2_TR(0x6bca33);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bca36:{NFSU2_TR(0x6bca36);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bca20u);}goto L6bca20;}}
}
B6bca38:L6bca38:{c.instructions+=2;NFSU2_TR(0x6bca38);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bca3c:{NFSU2_TR(0x6bca3c);
w4(R+28,u32(0x80b7e0ull));
}
B6bca41:L6bca41:{c.instructions+=4;NFSU2_TR(0x6bca41);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bca42:{NFSU2_TR(0x6bca42);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bca45:{NFSU2_TR(0x6bca45);
__builtin_memmove((R+4),(R+12),4);
}
B6bca47:{NFSU2_TR(0x6bca47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bca4cull));
TAIL_STATIC(0x6bbdc2u,6bb);
}
B6bca4c:L6bca4c:{c.instructions+=2;NFSU2_TR(0x6bca4c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bca4e:{NFSU2_TR(0x6bca4e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bcab3;}}
}
B6bca50:L6bca50:{c.instructions+=4;NFSU2_TR(0x6bca50);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bca54:{NFSU2_TR(0x6bca54);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B6bca57:{NFSU2_TR(0x6bca57);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x80ull))));
}
B6bca5e:{NFSU2_TR(0x6bca5e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bca41u);}goto L6bca41;}}
}
B6bca60:L6bca60:{c.instructions+=2;NFSU2_TR(0x6bca60);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6bca64:{NFSU2_TR(0x6bca64);
if(r1(R+518)){{goto L6bcacc;}}
}
B6bca66:L6bca66:{c.instructions+=6;NFSU2_TR(0x6bca66);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bca69:{NFSU2_TR(0x6bca69);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6bca6c:{NFSU2_TR(0x6bca6c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bca6d:{NFSU2_TR(0x6bca6d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bca6e:{NFSU2_TR(0x6bca6e);
__builtin_memmove((R+4),(R+12),4);
}
B6bca70:{NFSU2_TR(0x6bca70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bca75ull));
TAIL_STATIC(0x6bbe49u,6bb);
}
B6bca75:L6bca75:{c.instructions+=3;NFSU2_TR(0x6bca75);
__builtin_memmove((R+28),(R+0),4);
}
B6bca77:{NFSU2_TR(0x6bca77);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6bca79:{NFSU2_TR(0x6bca79);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bcd24;}}
}
B6bca7f:L6bca7f:{c.instructions+=2;NFSU2_TR(0x6bca7f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bca83:{NFSU2_TR(0x6bca83);
if(r1(R+518)){{goto L6bca9d;}}
}
B6bca85:L6bca85:{c.instructions+=3;NFSU2_TR(0x6bca85);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bca88:{NFSU2_TR(0x6bca88);
__builtin_memmove((R+4),(R+12),4);
}
B6bca8a:{NFSU2_TR(0x6bca8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bca8full));
TAIL_STATIC(0x699b26u,699);
}
B6bca8f:L6bca8f:{c.instructions+=3;NFSU2_TR(0x6bca8f);
__builtin_memmove((R+28),(R+0),4);
}
B6bca91:{NFSU2_TR(0x6bca91);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6bca93:{NFSU2_TR(0x6bca93);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bcd24;}}
}
B6bca99:L6bca99:{c.instructions+=1;NFSU2_TR(0x6bca99);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bca9d:L6bca9d:{c.instructions+=2;NFSU2_TR(0x6bca9d);
u8 U[4];
w4(U+0,u32(0x74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bca9f:{NFSU2_TR(0x6bca9f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bcaa4ull));
TAIL_STATIC(0x699317u,699);
}
B6bcaa4:L6bcaa4:{c.instructions+=2;NFSU2_TR(0x6bcaa4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bcaa6:{NFSU2_TR(0x6bcaa6);
if(r1(R+518)){{goto L6bcaf3;}}
}
B6bcaa8:L6bcaa8:{c.instructions+=2;NFSU2_TR(0x6bcaa8);
__builtin_memmove((R+4),(R+0),4);
}
B6bcaaa:{NFSU2_TR(0x6bcaaa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bcaafull));
TAIL_STATIC(0x698e7du,698);
}
B6bcaaf:L6bcaaf:{c.instructions+=2;NFSU2_TR(0x6bcaaf);
__builtin_memmove((R+24),(R+0),4);
}
B6bcab1:{NFSU2_TR(0x6bcab1);
{goto L6bcaf5;}
}
B6bcab3:L6bcab3:{c.instructions+=7;NFSU2_TR(0x6bcab3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bcab6:{NFSU2_TR(0x6bcab6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bcab9:{NFSU2_TR(0x6bcab9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bcabc:{NFSU2_TR(0x6bcabc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bcabf:{NFSU2_TR(0x6bcabf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bcac3:{NFSU2_TR(0x6bcac3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6bcac6:{NFSU2_TR(0x6bcac6);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bca01u);}goto L6bca01;}}
}
B6bcacc:L6bcacc:{c.instructions+=3;NFSU2_TR(0x6bcacc);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bcad2:{NFSU2_TR(0x6bcad2);
__builtin_memmove((R+4),(R+12),4);
}
B6bcad4:{NFSU2_TR(0x6bcad4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bcad9ull));
TAIL_STATIC(0x699d92u,699);
}
B6bcad9:L6bcad9:{c.instructions+=3;NFSU2_TR(0x6bcad9);
__builtin_memmove((R+28),(R+0),4);
}
B6bcadb:{NFSU2_TR(0x6bcadb);
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
B6bcadd:{NFSU2_TR(0x6bcadd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bcd32;}}
}
B6bcae3:L6bcae3:{c.instructions+=4;NFSU2_TR(0x6bcae3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bcae9:{NFSU2_TR(0x6bcae9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6bcaec:{NFSU2_TR(0x6bcaec);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6bcaee:{NFSU2_TR(0x6bcaee);
{goto L6bcd14;}
}
B6bcaf3:L6bcaf3:{c.instructions+=1;NFSU2_TR(0x6bcaf3);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6bcaf5:L6bcaf5:{c.instructions+=2;NFSU2_TR(0x6bcaf5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bcaf7:{NFSU2_TR(0x6bcaf7);
if(r1(R+518)){{goto L6bcc9a;}}
}
B6bcafd:L6bcafd:{c.instructions+=4;NFSU2_TR(0x6bcafd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bcb00:{NFSU2_TR(0x6bcb00);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bcb04:{NFSU2_TR(0x6bcb04);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bcb06:{NFSU2_TR(0x6bcb06);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bcb3a;}}
}
B6bcb08:L6bcb08:{c.instructions+=2;NFSU2_TR(0x6bcb08);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bcb0b:{NFSU2_TR(0x6bcb0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bcb0e:L6bcb0e:{c.instructions+=7;NFSU2_TR(0x6bcb0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6bcb10:{NFSU2_TR(0x6bcb10);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bcb13:{NFSU2_TR(0x6bcb13);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6bcb16:{NFSU2_TR(0x6bcb16);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6bcb19:{NFSU2_TR(0x6bcb19);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bcb1c:{NFSU2_TR(0x6bcb1c);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6bcb1f:{NFSU2_TR(0x6bcb1f);
if(r1(R+518)){{goto L6bcb32;}}
}
B6bcb21:L6bcb21:{c.instructions+=2;NFSU2_TR(0x6bcb21);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6bcb24:{NFSU2_TR(0x6bcb24);
if(r1(R+518)){{goto L6bcb32;}}
}
B6bcb26:L6bcb26:{c.instructions+=4;NFSU2_TR(0x6bcb26);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bcb29:{NFSU2_TR(0x6bcb29);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6bcb2a:{NFSU2_TR(0x6bcb2a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B6bcb2d:{NFSU2_TR(0x6bcb2d);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6bcb32;}}
}
B6bcb2f:L6bcb2f:{c.instructions+=1;NFSU2_TR(0x6bcb2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bcb32:L6bcb32:{c.instructions+=3;NFSU2_TR(0x6bcb32);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6bcb35:{NFSU2_TR(0x6bcb35);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bcb38:{NFSU2_TR(0x6bcb38);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bcb0eu);}goto L6bcb0e;}}
}
B6bcb3a:L6bcb3a:{c.instructions+=6;NFSU2_TR(0x6bcb3a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bcb3c:{NFSU2_TR(0x6bcb3c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bcb3e:{NFSU2_TR(0x6bcb3e);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bcb40:{NFSU2_TR(0x6bcb40);
u8 U[4];
w4(U+0,u32(0x20500001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bcb45:{NFSU2_TR(0x6bcb45);
__builtin_memmove((R+4),(R+24),4);
}
B6bcb47:{NFSU2_TR(0x6bcb47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bcb4cull));
TAIL_STATIC(0x699362u,699);
}
B6bcb4c:L6bcb4c:{c.instructions+=3;NFSU2_TR(0x6bcb4c);
__builtin_memmove((R+28),(R+0),4);
}
B6bcb4e:{NFSU2_TR(0x6bcb4e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6bcb50:{NFSU2_TR(0x6bcb50);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bcd24;}}
}
B6bcb56:L6bcb56:{c.instructions+=3;NFSU2_TR(0x6bcb56);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bcb5c:{NFSU2_TR(0x6bcb5c);
__builtin_memmove((R+4),(R+24),4);
}
B6bcb5e:{NFSU2_TR(0x6bcb5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bcb63ull));
TAIL_STATIC(0x698eb3u,698);
}
B6bcb63:L6bcb63:{c.instructions+=3;NFSU2_TR(0x6bcb63);
__builtin_memmove((R+28),(R+0),4);
}
B6bcb65:{NFSU2_TR(0x6bcb65);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6bcb67:{NFSU2_TR(0x6bcb67);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bcd24;}}
}
B6bcb6d:L6bcb6d:{c.instructions+=9;NFSU2_TR(0x6bcb6d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bcb6e:{NFSU2_TR(0x6bcb6e);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6bcb70:{NFSU2_TR(0x6bcb70);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bcb71:{NFSU2_TR(0x6bcb71);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6bcb74:{NFSU2_TR(0x6bcb74);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bcb76:{NFSU2_TR(0x6bcb76);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bcb79:{NFSU2_TR(0x6bcb79);
__builtin_memmove((R+4),(R+12),4);
}
B6bcb7b:{NFSU2_TR(0x6bcb7b);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bcb81:{NFSU2_TR(0x6bcb81);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bcb86ull));
TAIL_STATIC(0x699c39u,699);
}
B6bcb86:L6bcb86:{c.instructions+=4;NFSU2_TR(0x6bcb86);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bcb89:{NFSU2_TR(0x6bcb89);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bcb8c:{NFSU2_TR(0x6bcb8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bcb8f:{NFSU2_TR(0x6bcb8f);
if(r1(R+518)){{goto L6bcc9a;}}
}
B6bcb95:L6bcb95:{c.instructions+=16;NFSU2_TR(0x6bcb95);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bcb98:{NFSU2_TR(0x6bcb98);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bcb9b:{NFSU2_TR(0x6bcb9b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6bcb9d:{NFSU2_TR(0x6bcb9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bcba3:{NFSU2_TR(0x6bcba3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bcba6:{NFSU2_TR(0x6bcba6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6bcba8:{NFSU2_TR(0x6bcba8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bcbab:{NFSU2_TR(0x6bcbab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6bcbad:{NFSU2_TR(0x6bcbad);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bcbb3:{NFSU2_TR(0x6bcbb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bcbb6:{NFSU2_TR(0x6bcbb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bcbb9:{NFSU2_TR(0x6bcbb9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6bcbbc:{NFSU2_TR(0x6bcbbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bcbbf:{NFSU2_TR(0x6bcbbf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bcbc0:{NFSU2_TR(0x6bcbc0);
__builtin_memmove((R+4),(R+12),4);
}
B6bcbc2:{NFSU2_TR(0x6bcbc2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bcbc7ull));
TAIL_STATIC(0x699b26u,699);
}
B6bcbc7:L6bcbc7:{c.instructions+=3;NFSU2_TR(0x6bcbc7);
__builtin_memmove((R+28),(R+0),4);
}
B6bcbc9:{NFSU2_TR(0x6bcbc9);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6bcbcb:{NFSU2_TR(0x6bcbcb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bcd24;}}
}
B6bcbd1:L6bcbd1:{c.instructions+=5;NFSU2_TR(0x6bcbd1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6bcbd3:{NFSU2_TR(0x6bcbd3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6bcbd4:{NFSU2_TR(0x6bcbd4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bcbd7:{NFSU2_TR(0x6bcbd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bcbda:{NFSU2_TR(0x6bcbda);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bcae3u);}goto L6bcae3;}}
}
B6bcbe0:L6bcbe0:{c.instructions+=3;NFSU2_TR(0x6bcbe0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bcbe3:{NFSU2_TR(0x6bcbe3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6bcbe6:{NFSU2_TR(0x6bcbe6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bcbe9:L6bcbe9:{c.instructions+=2;NFSU2_TR(0x6bcbe9);
u8 U[4];
w4(U+0,u32(0x74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bcbeb:{NFSU2_TR(0x6bcbeb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bcbf0ull));
TAIL_STATIC(0x699317u,699);
}
B6bcbf0:L6bcbf0:{c.instructions+=2;NFSU2_TR(0x6bcbf0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bcbf2:{NFSU2_TR(0x6bcbf2);
if(r1(R+518)){{goto L6bcbff;}}
}
B6bcbf4:L6bcbf4:{c.instructions+=2;NFSU2_TR(0x6bcbf4);
__builtin_memmove((R+4),(R+0),4);
}
B6bcbf6:{NFSU2_TR(0x6bcbf6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bcbfbull));
TAIL_STATIC(0x698e7du,698);
}
B6bcbfb:L6bcbfb:{c.instructions+=2;NFSU2_TR(0x6bcbfb);
__builtin_memmove((R+24),(R+0),4);
}
B6bcbfd:{NFSU2_TR(0x6bcbfd);
{goto L6bcc01;}
}
B6bcbff:L6bcbff:{c.instructions+=1;NFSU2_TR(0x6bcbff);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6bcc01:L6bcc01:{c.instructions+=2;NFSU2_TR(0x6bcc01);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bcc03:{NFSU2_TR(0x6bcc03);
if(r1(R+518)){{goto L6bcc9a;}}
}
B6bcc09:L6bcc09:{c.instructions+=6;NFSU2_TR(0x6bcc09);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bcc0b:{NFSU2_TR(0x6bcc0b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bcc0d:{NFSU2_TR(0x6bcc0d);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bcc0f:{NFSU2_TR(0x6bcc0f);
u8 U[4];
w4(U+0,u32(0x70300001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bcc14:{NFSU2_TR(0x6bcc14);
__builtin_memmove((R+4),(R+24),4);
}
B6bcc16:{NFSU2_TR(0x6bcc16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bcc1bull));
TAIL_STATIC(0x699362u,699);
}
B6bcc1b:L6bcc1b:{c.instructions+=3;NFSU2_TR(0x6bcc1b);
__builtin_memmove((R+28),(R+0),4);
}
B6bcc1d:{NFSU2_TR(0x6bcc1d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6bcc1f:{NFSU2_TR(0x6bcc1f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bcd24;}}
}
B6bcc25:L6bcc25:{c.instructions+=3;NFSU2_TR(0x6bcc25);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bcc2b:{NFSU2_TR(0x6bcc2b);
__builtin_memmove((R+4),(R+24),4);
}
B6bcc2d:{NFSU2_TR(0x6bcc2d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bcc32ull));
TAIL_STATIC(0x698eb3u,698);
}
B6bcc32:L6bcc32:{c.instructions+=3;NFSU2_TR(0x6bcc32);
__builtin_memmove((R+28),(R+0),4);
}
B6bcc34:{NFSU2_TR(0x6bcc34);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6bcc36:{NFSU2_TR(0x6bcc36);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bcd24;}}
}
B6bcc3c:L6bcc3c:{c.instructions+=19;NFSU2_TR(0x6bcc3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bcc42:{NFSU2_TR(0x6bcc42);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bcc45:{NFSU2_TR(0x6bcc45);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bcc48:{NFSU2_TR(0x6bcc48);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bcc4b:{NFSU2_TR(0x6bcc4b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6bcc4e:{NFSU2_TR(0x6bcc4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6bcc51:{NFSU2_TR(0x6bcc51);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6bcc53:{NFSU2_TR(0x6bcc53);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bcc59:{NFSU2_TR(0x6bcc59);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bcc5c:{NFSU2_TR(0x6bcc5c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6bcc5f:{NFSU2_TR(0x6bcc5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bcc62:{NFSU2_TR(0x6bcc62);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bcc65:{NFSU2_TR(0x6bcc65);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bcc68:{NFSU2_TR(0x6bcc68);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bcc6b:{NFSU2_TR(0x6bcc6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bcc6e:{NFSU2_TR(0x6bcc6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bcc71:{NFSU2_TR(0x6bcc71);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B6bcc72:{NFSU2_TR(0x6bcc72);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bcc74:{NFSU2_TR(0x6bcc74);
if(r1(R+518)){{goto L6bcca4;}}
}
B6bcc76:L6bcc76:{c.instructions+=9;NFSU2_TR(0x6bcc76);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bcc77:{NFSU2_TR(0x6bcc77);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6bcc79:{NFSU2_TR(0x6bcc79);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bcc7a:{NFSU2_TR(0x6bcc7a);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6bcc7d:{NFSU2_TR(0x6bcc7d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bcc7f:{NFSU2_TR(0x6bcc7f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bcc82:{NFSU2_TR(0x6bcc82);
__builtin_memmove((R+4),(R+12),4);
}
B6bcc84:{NFSU2_TR(0x6bcc84);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bcc8a:{NFSU2_TR(0x6bcc8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bcc8full));
TAIL_STATIC(0x699c39u,699);
}
B6bcc8f:L6bcc8f:{c.instructions+=4;NFSU2_TR(0x6bcc8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bcc92:{NFSU2_TR(0x6bcc92);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bcc95:{NFSU2_TR(0x6bcc95);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bcc98:{NFSU2_TR(0x6bcc98);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bccaf;}}
}
B6bcc9a:L6bcc9a:{c.instructions+=2;NFSU2_TR(0x6bcc9a);
w4(R+28,u32(0x8007000eull));
}
B6bcc9f:{NFSU2_TR(0x6bcc9f);
{goto L6bcd24;}
}
B6bcca4:L6bcca4:{c.instructions+=3;NFSU2_TR(0x6bcca4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bccaa:{NFSU2_TR(0x6bccaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bccad:{NFSU2_TR(0x6bccad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6bccaf:L6bccaf:{c.instructions+=5;NFSU2_TR(0x6bccaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bccb2:{NFSU2_TR(0x6bccb2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6bccb4:{NFSU2_TR(0x6bccb4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bccb5:{NFSU2_TR(0x6bccb5);
__builtin_memmove((R+4),(R+12),4);
}
B6bccb7:{NFSU2_TR(0x6bccb7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bccbcull));
TAIL_STATIC(0x699b26u,699);
}
B6bccbc:L6bccbc:{c.instructions+=3;NFSU2_TR(0x6bccbc);
__builtin_memmove((R+28),(R+0),4);
}
B6bccbe:{NFSU2_TR(0x6bccbe);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6bccc0:{NFSU2_TR(0x6bccc0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bcd24;}}
}
B6bccc2:L6bccc2:{c.instructions+=5;NFSU2_TR(0x6bccc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bccc5:{NFSU2_TR(0x6bccc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bccc8:{NFSU2_TR(0x6bccc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bcccc:{NFSU2_TR(0x6bcccc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6bcccf:{NFSU2_TR(0x6bcccf);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bcbe9u);}goto L6bcbe9;}}
}
B6bccd5:L6bccd5:{c.instructions+=1;NFSU2_TR(0x6bccd5);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bcae3u);}goto L6bcae3;}
}
B6bccda:L6bccda:{c.instructions+=3;NFSU2_TR(0x6bccda);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bcce0:{NFSU2_TR(0x6bcce0);
__builtin_memmove((R+4),(R+12),4);
}
B6bcce2:{NFSU2_TR(0x6bcce2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bcce7ull));
TAIL_STATIC(0x699d92u,699);
}
B6bcce7:L6bcce7:{c.instructions+=3;NFSU2_TR(0x6bcce7);
__builtin_memmove((R+28),(R+0),4);
}
B6bcce9:{NFSU2_TR(0x6bcce9);
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
B6bcceb:{NFSU2_TR(0x6bcceb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bcd32;}}
}
B6bcced:L6bcced:{c.instructions+=3;NFSU2_TR(0x6bcced);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bccf3:{NFSU2_TR(0x6bccf3);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+0)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B6bccf6:{NFSU2_TR(0x6bccf6);
{goto L6bcd32;}
}
B6bccf8:L6bccf8:{c.instructions+=3;NFSU2_TR(0x6bccf8);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bccfe:{NFSU2_TR(0x6bccfe);
__builtin_memmove((R+4),(R+12),4);
}
B6bcd00:{NFSU2_TR(0x6bcd00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bcd05ull));
TAIL_STATIC(0x699d92u,699);
}
B6bcd05:L6bcd05:{c.instructions+=3;NFSU2_TR(0x6bcd05);
__builtin_memmove((R+28),(R+0),4);
}
B6bcd07:{NFSU2_TR(0x6bcd07);
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
B6bcd09:{NFSU2_TR(0x6bcd09);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bcd32;}}
}
B6bcd0b:L6bcd0b:{c.instructions+=2;NFSU2_TR(0x6bcd0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bcd11:{NFSU2_TR(0x6bcd11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6bcd14:L6bcd14:{c.instructions+=2;NFSU2_TR(0x6bcd14);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
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
B6bcd18:{NFSU2_TR(0x6bcd18);
if(r1(R+518)){{goto L6bcd24;}}
}
B6bcd1a:L6bcd1a:{c.instructions+=3;NFSU2_TR(0x6bcd1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bcd1d:{NFSU2_TR(0x6bcd1d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bcd1f:{NFSU2_TR(0x6bcd1f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bcd24ull));
TAIL_STATIC(0x6739efu,673);
}
B6bcd24:L6bcd24:{c.instructions+=3;NFSU2_TR(0x6bcd24);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bcd27:{NFSU2_TR(0x6bcd27);
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
B6bcd29:{NFSU2_TR(0x6bcd29);
if(r1(R+518)){{goto L6bcd32;}}
}
B6bcd2b:L6bcd2b:{c.instructions+=2;NFSU2_TR(0x6bcd2b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bcd2d:{NFSU2_TR(0x6bcd2d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bcd32ull));
TAIL_STATIC(0x6739efu,673);
}
B6bcd32:L6bcd32:{c.instructions+=2;NFSU2_TR(0x6bcd32);
__builtin_memmove((R+0),(R+28),4);
}
B6bcd34:{NFSU2_TR(0x6bcd34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6bcd35:L6bcd35:{c.instructions+=4;NFSU2_TR(0x6bcd35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6bcd36:{NFSU2_TR(0x6bcd36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6bcd37:{NFSU2_TR(0x6bcd37);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6bcd38:{NFSU2_TR(0x6bcd38);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6bcd39:L6bcd39:{c.instructions+=20;NFSU2_TR(0x6bcd39);
__builtin_memmove((R+28),(R+28),4);
}
B6bcd3b:{NFSU2_TR(0x6bcd3b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bcd3c:{NFSU2_TR(0x6bcd3c);
__builtin_memmove((R+20),(R+16),4);
}
B6bcd3e:{NFSU2_TR(0x6bcd3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B6bcd41:{NFSU2_TR(0x6bcd41);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bcd44:{NFSU2_TR(0x6bcd44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6bcd46:{NFSU2_TR(0x6bcd46);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bcd47:{NFSU2_TR(0x6bcd47);
__builtin_memmove((R+12),(R+4),4);
}
B6bcd49:{NFSU2_TR(0x6bcd49);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bcd4a:{NFSU2_TR(0x6bcd4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6bcd4d:{NFSU2_TR(0x6bcd4d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6bcd50:{NFSU2_TR(0x6bcd50);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6bcd53:{NFSU2_TR(0x6bcd53);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bcd56:{NFSU2_TR(0x6bcd56);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bcd59:{NFSU2_TR(0x6bcd59);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bcd5a:{NFSU2_TR(0x6bcd5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6bcd5d:{NFSU2_TR(0x6bcd5d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6bcd60:{NFSU2_TR(0x6bcd60);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6bcd62:{NFSU2_TR(0x6bcd62);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x80ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6bcd66:{NFSU2_TR(0x6bcd66);
if(r1(R+518)){{goto L6bcd76;}}
}
B6bcd68:L6bcd68:{c.instructions+=3;NFSU2_TR(0x6bcd68);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bcd6b:{NFSU2_TR(0x6bcd6b);
u8 U[4];
w4(U+0,u32(0xe40000ull));
s4(u32(r4(R+0)),r4(U+0));
}
B6bcd71:{NFSU2_TR(0x6bcd71);
{goto L6bceb8;}
}
B6bcd76:L6bcd76:{c.instructions+=5;NFSU2_TR(0x6bcd76);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6bcd79:{NFSU2_TR(0x6bcd79);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6bcd7b:{NFSU2_TR(0x6bcd7b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6bcd7c:{NFSU2_TR(0x6bcd7c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(u32(0x10000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bcd82:{NFSU2_TR(0x6bcd82);
if(r1(R+518)){{goto L6bcd8a;}}
}
B6bcd84:L6bcd84:{c.instructions+=2;NFSU2_TR(0x6bcd84);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bcd88:{NFSU2_TR(0x6bcd88);
__builtin_memmove((R+4),(R+8),4);
}
B6bcd8a:L6bcd8a:{c.instructions+=2;NFSU2_TR(0x6bcd8a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(u32(0x20000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bcd90:{NFSU2_TR(0x6bcd90);
if(r1(R+518)){{goto L6bcd97;}}
}
B6bcd92:L6bcd92:{c.instructions+=2;NFSU2_TR(0x6bcd92);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffecull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6bcd96:{NFSU2_TR(0x6bcd96);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6bcd97:L6bcd97:{c.instructions+=2;NFSU2_TR(0x6bcd97);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(u32(0x40000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bcd9d:{NFSU2_TR(0x6bcd9d);
if(r1(R+518)){{goto L6bcda8;}}
}
B6bcd9f:L6bcd9f:{c.instructions+=2;NFSU2_TR(0x6bcd9f);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffecull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w4(U+12,u32(0x2ull));
s4(u32(r4(U+8)),r4(U+12));
}
B6bcda7:{NFSU2_TR(0x6bcda7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6bcda8:L6bcda8:{c.instructions+=2;NFSU2_TR(0x6bcda8);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(u32(0x80000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bcdae:{NFSU2_TR(0x6bcdae);
if(r1(R+518)){{goto L6bcdb9;}}
}
B6bcdb0:L6bcdb0:{c.instructions+=2;NFSU2_TR(0x6bcdb0);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffecull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w4(U+12,u32(0x3ull));
s4(u32(r4(U+8)),r4(U+12));
}
B6bcdb8:{NFSU2_TR(0x6bcdb8);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6bcdb9:L6bcdb9:{c.instructions+=2;NFSU2_TR(0x6bcdb9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bcdbc:{NFSU2_TR(0x6bcdbc);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bcdc1;}}
}
B6bcdbe:L6bcdbe:{c.instructions+=1;NFSU2_TR(0x6bcdbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bcdc1:L6bcdc1:{c.instructions+=5;NFSU2_TR(0x6bcdc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bcdc4:{NFSU2_TR(0x6bcdc4);
u8 U[9];
w4(U+5,u32(u32(u32(0x1eull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+5))));
w1(U+0,u8((r4(U+5))!=(u32(0x0ull))));
w1(U+1,u8((r4(R+4))==(u32(0x0ull))));
w1(U+2,u8(!(r1(U+0))));
w1(U+3,u8(u32(r1(U+2))&u32(r1(R+518))));
w1(U+4,u8(u32(r1(U+0))&u32(r1(U+1))));
w1(R+518,u8(u32(r1(U+3))|u32(r1(U+4))));
}
B6bcdc7:{NFSU2_TR(0x6bcdc7);
u8 U[9];
w4(U+5,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+5))));
w1(U+0,u8((r4(U+5))!=(u32(0x0ull))));
w1(U+1,u8((r4(R+4))==(u32(0x0ull))));
w1(U+2,u8(!(r1(U+0))));
w1(U+3,u8(u32(r1(U+2))&u32(r1(R+518))));
w1(U+4,u8(u32(r1(U+0))&u32(r1(U+1))));
w1(R+518,u8(u32(r1(U+3))|u32(r1(U+4))));
}
B6bcdca:{NFSU2_TR(0x6bcdca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bcdcd:{NFSU2_TR(0x6bcdcd);
if(r1(R+518)){{goto L6bcdd4;}}
}
B6bcdcf:L6bcdcf:{c.instructions+=2;NFSU2_TR(0x6bcdcf);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6bcdd2:{NFSU2_TR(0x6bcdd2);
{goto L6bce11;}
}
B6bcdd4:L6bcdd4:{c.instructions+=3;NFSU2_TR(0x6bcdd4);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6bcdd6:{NFSU2_TR(0x6bcdd6);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bcdd9:{NFSU2_TR(0x6bcdd9);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bce0b;}}
}
B6bcddb:L6bcddb:{c.instructions+=3;NFSU2_TR(0x6bcddb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bcdde:{NFSU2_TR(0x6bcdde);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6bcde1:{NFSU2_TR(0x6bcde1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bcde4:L6bcde4:{c.instructions+=5;NFSU2_TR(0x6bcde4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6bcde7:{NFSU2_TR(0x6bcde7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6bcdea:{NFSU2_TR(0x6bcdea);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6bcded:{NFSU2_TR(0x6bcded);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bcdf0:{NFSU2_TR(0x6bcdf0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bcdf8;}}
}
B6bcdf2:L6bcdf2:{c.instructions+=3;NFSU2_TR(0x6bcdf2);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6bcdf3:{NFSU2_TR(0x6bcdf3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6bcdf6:{NFSU2_TR(0x6bcdf6);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bcde4u);}goto L6bcde4;}}
}
B6bcdf8:L6bcdf8:{c.instructions+=2;NFSU2_TR(0x6bcdf8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6bcdfb:{NFSU2_TR(0x6bcdfb);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6bce0b;}}
}
B6bcdfd:L6bcdfd:{c.instructions+=1;NFSU2_TR(0x6bcdfd);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6bcdff:L6bcdff:{c.instructions+=4;NFSU2_TR(0x6bcdff);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffdcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6bce03:{NFSU2_TR(0x6bce03);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6bce04:{NFSU2_TR(0x6bce04);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B6bce07:{NFSU2_TR(0x6bce07);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bcdffu);}goto L6bcdff;}}
}
B6bce09:L6bce09:{c.instructions+=1;NFSU2_TR(0x6bce09);
{goto L6bce18;}
}
B6bce0b:L6bce0b:{c.instructions+=2;NFSU2_TR(0x6bce0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bce0e:{NFSU2_TR(0x6bce0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bce11:L6bce11:{c.instructions+=5;NFSU2_TR(0x6bce11);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+28),(U+0),4);
}
B6bce14:{NFSU2_TR(0x6bce14);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6bce15:{NFSU2_TR(0x6bce15);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6bce16:{NFSU2_TR(0x6bce16);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6bce17:{NFSU2_TR(0x6bce17);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6bce18:L6bce18:{c.instructions+=3;NFSU2_TR(0x6bce18);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6bce1a:{NFSU2_TR(0x6bce1a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bce1d:{NFSU2_TR(0x6bce1d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bce42;}}
}
B6bce1f:L6bce1f:{c.instructions+=3;NFSU2_TR(0x6bce1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bce22:{NFSU2_TR(0x6bce22);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+8),(U+0),4);
}
B6bce25:{NFSU2_TR(0x6bce25);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B6bce27:L6bce27:{c.instructions+=9;NFSU2_TR(0x6bce27);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffecull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B6bce2b:{NFSU2_TR(0x6bce2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6bce2e:{NFSU2_TR(0x6bce2e);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffecull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B6bce32:{NFSU2_TR(0x6bce32);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6bce35:{NFSU2_TR(0x6bce35);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bce38:{NFSU2_TR(0x6bce38);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6bce39:{NFSU2_TR(0x6bce39);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6bce3c:{NFSU2_TR(0x6bce3c);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffdcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6bce40:{NFSU2_TR(0x6bce40);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bce27u);}goto L6bce27;}}
}
B6bce42:L6bce42:{c.instructions+=3;NFSU2_TR(0x6bce42);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6bce44:{NFSU2_TR(0x6bce44);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bce47:{NFSU2_TR(0x6bce47);
if(r1(R+518)){{goto L6bce9b;}}
}
B6bce49:L6bce49:{c.instructions+=2;NFSU2_TR(0x6bce49);
w4(R+28,u32(0x80b7e0ull));
}
B6bce4e:{NFSU2_TR(0x6bce4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bce51:L6bce51:{c.instructions+=5;NFSU2_TR(0x6bce51);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bce54:{NFSU2_TR(0x6bce54);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6bce57:{NFSU2_TR(0x6bce57);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bce58:{NFSU2_TR(0x6bce58);
__builtin_memmove((R+4),(R+12),4);
}
B6bce5a:{NFSU2_TR(0x6bce5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bce5full));
TAIL_STATIC(0x6bbdc2u,6bb);
}
B6bce5f:L6bce5f:{c.instructions+=2;NFSU2_TR(0x6bce5f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bce61:{NFSU2_TR(0x6bce61);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bce6f;}}
}
B6bce63:L6bce63:{c.instructions+=4;NFSU2_TR(0x6bce63);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bce67:{NFSU2_TR(0x6bce67);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6bce68:{NFSU2_TR(0x6bce68);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0x8ull))));
}
B6bce6b:{NFSU2_TR(0x6bce6b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bce51u);}goto L6bce51;}}
}
B6bce6d:L6bce6d:{c.instructions+=1;NFSU2_TR(0x6bce6d);
{goto L6bce78;}
}
B6bce6f:L6bce6f:{c.instructions+=4;NFSU2_TR(0x6bce6f);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B6bce72:{NFSU2_TR(0x6bce72);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B6bce74:{NFSU2_TR(0x6bce74);
__builtin_memmove((R+0),(R+24),4);
}
B6bce76:{NFSU2_TR(0x6bce76);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bce9e;}}
}
B6bce78:L6bce78:{c.instructions+=6;NFSU2_TR(0x6bce78);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bce7e:{NFSU2_TR(0x6bce7e);
u8 U[4];
w4(U+0,u32(0x7bd148ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bce83:{NFSU2_TR(0x6bce83);
u8 U[4];
w4(U+0,u32(0x12d2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bce88:{NFSU2_TR(0x6bce88);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bce8b:{NFSU2_TR(0x6bce8b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bce8c:{NFSU2_TR(0x6bce8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bce91ull));
TAIL_STATIC(0x69e936u,69e);
}
B6bce91:L6bce91:{c.instructions+=3;NFSU2_TR(0x6bce91);
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
B6bce94:{NFSU2_TR(0x6bce94);
w4(R+0,u32(0x80004005ull));
}
B6bce99:{NFSU2_TR(0x6bce99);
{goto L6bceba;}
}
B6bce9b:L6bce9b:{c.instructions+=1;NFSU2_TR(0x6bce9b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6bce9e:L6bce9e:{c.instructions+=3;NFSU2_TR(0x6bce9e);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bcea0:{NFSU2_TR(0x6bcea0);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6bcea2:{NFSU2_TR(0x6bcea2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6bcea3:L6bcea3:{c.instructions+=8;NFSU2_TR(0x6bcea3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6bcea5:{NFSU2_TR(0x6bcea5);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r1(U+0))));
}
B6bcea7:{NFSU2_TR(0x6bcea7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6bceaa:{NFSU2_TR(0x6bceaa);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+24))));
}
B6bceac:{NFSU2_TR(0x6bceac);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6bcead:{NFSU2_TR(0x6bcead);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6bceae:{NFSU2_TR(0x6bceae);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x18ull))));
}
B6bceb1:{NFSU2_TR(0x6bceb1);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bcea3u);}goto L6bcea3;}}
}
B6bceb3:L6bceb3:{c.instructions+=2;NFSU2_TR(0x6bceb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bceb6:{NFSU2_TR(0x6bceb6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6bceb8:L6bceb8:{c.instructions+=1;NFSU2_TR(0x6bceb8);
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
B6bceba:L6bceba:{c.instructions+=5;NFSU2_TR(0x6bceba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6bcebb:{NFSU2_TR(0x6bcebb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6bcebc:{NFSU2_TR(0x6bcebc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6bcebd:{NFSU2_TR(0x6bcebd);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6bcebe:{NFSU2_TR(0x6bcebe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6bcec1:L6bcec1:{c.instructions+=7;NFSU2_TR(0x6bcec1);
__builtin_memmove((R+28),(R+28),4);
}
B6bcec3:{NFSU2_TR(0x6bcec3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bcec4:{NFSU2_TR(0x6bcec4);
__builtin_memmove((R+20),(R+16),4);
}
B6bcec6:{NFSU2_TR(0x6bcec6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bcec7:{NFSU2_TR(0x6bcec7);
__builtin_memmove((R+24),(R+4),4);
}
B6bcec9:{NFSU2_TR(0x6bcec9);
u8 U[4];
w4(U+0,u32(0x7bd020ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6bcecf:{NFSU2_TR(0x6bcecf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bced4ull));
TAIL_STATIC(0x6cd245u,6cd);
}
B6bced4:L6bced4:{c.instructions+=2;NFSU2_TR(0x6bced4);
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
B6bced8:{NFSU2_TR(0x6bced8);
if(r1(R+518)){{goto L6bcee1;}}
}
B6bceda:L6bceda:{c.instructions+=2;NFSU2_TR(0x6bceda);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bcedb:{NFSU2_TR(0x6bcedb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bcee0ull));
TAIL_STATIC(0x575630u,575);
}
B6bcee0:L6bcee0:{c.instructions+=1;NFSU2_TR(0x6bcee0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6bcee1:L6bcee1:{c.instructions+=4;NFSU2_TR(0x6bcee1);
__builtin_memmove((R+0),(R+24),4);
}
B6bcee3:{NFSU2_TR(0x6bcee3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6bcee4:{NFSU2_TR(0x6bcee4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6bcee5:{NFSU2_TR(0x6bcee5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6bcee8:L6bcee8:{c.instructions+=4;NFSU2_TR(0x6bcee8);
__builtin_memmove((R+28),(R+28),4);
}
B6bceea:{NFSU2_TR(0x6bceea);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bceeb:{NFSU2_TR(0x6bceeb);
__builtin_memmove((R+24),(R+4),4);
}
B6bceed:{NFSU2_TR(0x6bceed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bcef2ull));
TAIL_STATIC(0x6cd4d1u,6cd);
}
B6bcef2:L6bcef2:{c.instructions+=2;NFSU2_TR(0x6bcef2);
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
B6bcef4:{NFSU2_TR(0x6bcef4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bcf5e;}}
}
B6bcef6:L6bcef6:{c.instructions+=4;NFSU2_TR(0x6bcef6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bcef7:{NFSU2_TR(0x6bcef7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bcef8:{NFSU2_TR(0x6bcef8);
__builtin_memmove((R+4),(R+24),4);
}
B6bcefa:{NFSU2_TR(0x6bcefa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bceffull));
TAIL_STATIC(0x6c29d2u,6c2);
}
B6bceff:L6bceff:{c.instructions+=4;NFSU2_TR(0x6bceff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6bcf02:{NFSU2_TR(0x6bcf02);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6bcf04:{NFSU2_TR(0x6bcf04);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bcf06:{NFSU2_TR(0x6bcf06);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bcf32;}}
}
B6bcf08:L6bcf08:{c.instructions+=6;NFSU2_TR(0x6bcf08);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bcf0b:{NFSU2_TR(0x6bcf0b);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6bcf0e:{NFSU2_TR(0x6bcf0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bcf14:{NFSU2_TR(0x6bcf14);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bcf1a:{NFSU2_TR(0x6bcf1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+6,u16(u32(r2(U+4))&u32(u16(0xfff0ull))));
w1(R+518,u8((r2(U+6))==(u16(0x0ull))));
}
B6bcf20:{NFSU2_TR(0x6bcf20);
if(r1(R+518)){{goto L6bcf2d;}}
}
B6bcf22:L6bcf22:{c.instructions+=2;NFSU2_TR(0x6bcf22);
__builtin_memmove((R+4),(R+24),4);
}
B6bcf24:{NFSU2_TR(0x6bcf24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bcf29ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bc110u);}goto L6bc110;}
}
B6bcf29:L6bcf29:{c.instructions+=2;NFSU2_TR(0x6bcf29);
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
B6bcf2b:{NFSU2_TR(0x6bcf2b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bcf5c;}}
}
B6bcf2d:L6bcf2d:{c.instructions+=3;NFSU2_TR(0x6bcf2d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6bcf2e:{NFSU2_TR(0x6bcf2e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B6bcf30:{NFSU2_TR(0x6bcf30);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bcf08u);}goto L6bcf08;}}
}
B6bcf32:L6bcf32:{c.instructions+=2;NFSU2_TR(0x6bcf32);
__builtin_memmove((R+4),(R+24),4);
}
B6bcf34:{NFSU2_TR(0x6bcf34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bcf39ull));
TAIL_STATIC(0x69f745u,69f);
}
B6bcf39:L6bcf39:{c.instructions+=2;NFSU2_TR(0x6bcf39);
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
B6bcf3b:{NFSU2_TR(0x6bcf3b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bcf5c;}}
}
B6bcf3d:L6bcf3d:{c.instructions+=2;NFSU2_TR(0x6bcf3d);
__builtin_memmove((R+4),(R+24),4);
}
B6bcf3f:{NFSU2_TR(0x6bcf3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bcf44ull));
TAIL_STATIC(0x6a0d84u,6a0);
}
B6bcf44:L6bcf44:{c.instructions+=2;NFSU2_TR(0x6bcf44);
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
B6bcf46:{NFSU2_TR(0x6bcf46);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bcf5c;}}
}
B6bcf48:L6bcf48:{c.instructions+=2;NFSU2_TR(0x6bcf48);
__builtin_memmove((R+4),(R+24),4);
}
B6bcf4a:{NFSU2_TR(0x6bcf4a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bcf4full));
TAIL_STATIC(0x69a74eu,69a);
}
B6bcf4f:L6bcf4f:{c.instructions+=2;NFSU2_TR(0x6bcf4f);
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
B6bcf51:{NFSU2_TR(0x6bcf51);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bcf5c;}}
}
B6bcf53:L6bcf53:{c.instructions+=2;NFSU2_TR(0x6bcf53);
__builtin_memmove((R+4),(R+24),4);
}
B6bcf55:{NFSU2_TR(0x6bcf55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bcf5aull));
TAIL_STATIC(0x6c29d2u,6c2);
}
B6bcf5a:L6bcf5a:{c.instructions+=1;NFSU2_TR(0x6bcf5a);
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
B6bcf5c:L6bcf5c:{c.instructions+=2;NFSU2_TR(0x6bcf5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6bcf5d:{NFSU2_TR(0x6bcf5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6bcf5e:L6bcf5e:{c.instructions+=2;NFSU2_TR(0x6bcf5e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6bcf5f:{NFSU2_TR(0x6bcf5f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6bcf60:L6bcf60:{c.instructions+=10;NFSU2_TR(0x6bcf60);
__builtin_memmove((R+28),(R+28),4);
}
B6bcf62:{NFSU2_TR(0x6bcf62);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bcf63:{NFSU2_TR(0x6bcf63);
__builtin_memmove((R+20),(R+16),4);
}
B6bcf65:{NFSU2_TR(0x6bcf65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B6bcf68:{NFSU2_TR(0x6bcf68);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bcf6b:{NFSU2_TR(0x6bcf6b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bcf6c:{NFSU2_TR(0x6bcf6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6bcf6e:{NFSU2_TR(0x6bcf6e);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xfffffull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B6bcf74:{NFSU2_TR(0x6bcf74);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bcf77:{NFSU2_TR(0x6bcf77);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bcf81;}}
}
B6bcf79:L6bcf79:{c.instructions+=3;NFSU2_TR(0x6bcf79);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6bcf7b:{NFSU2_TR(0x6bcf7b);
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
B6bcf7c:{NFSU2_TR(0x6bcf7c);
TAIL_STATIC(0x6bd01fu,6bd);
}
B6bcf81:L6bcf81:{c.instructions+=9;NFSU2_TR(0x6bcf81);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bcf84:{NFSU2_TR(0x6bcf84);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6bcf86:{NFSU2_TR(0x6bcf86);
u8 U[56];
w8(U+0,u64(r4(R+12)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6bcf86);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6bcf86);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B6bcf88:{NFSU2_TR(0x6bcf88);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bcf8c:{NFSU2_TR(0x6bcf8c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bcf8d:{NFSU2_TR(0x6bcf8d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bcf8e:{NFSU2_TR(0x6bcf8e);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bcf90:{NFSU2_TR(0x6bcf90);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bcf93:{NFSU2_TR(0x6bcf93);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6bd01bu,6bd);}
}
B6bcf99:L6bcf99:{c.instructions+=13;NFSU2_TR(0x6bcf99);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6bcf9c:{NFSU2_TR(0x6bcf9c);
u8 U[4];
w4(U+0,u32(u32(u32(0x1eull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B6bcf9f:{NFSU2_TR(0x6bcf9f);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+24,sar<u32>(r4(R+24),u64(r4(U+0))));
}
B6bcfa2:{NFSU2_TR(0x6bcfa2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bcfa6:{NFSU2_TR(0x6bcfa6);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6bcfa9:{NFSU2_TR(0x6bcfa9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+28),(U+0),4);
}
B6bcfac:{NFSU2_TR(0x6bcfac);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6bcfad:{NFSU2_TR(0x6bcfad);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6bcfae:{NFSU2_TR(0x6bcfae);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6bcfaf:{NFSU2_TR(0x6bcfaf);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6bcfb1:{NFSU2_TR(0x6bcfb1);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bcfb3:{NFSU2_TR(0x6bcfb3);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6bcfb4:{NFSU2_TR(0x6bcfb4);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bcfd9;}}
}
B6bcfb6:L6bcfb6:{c.instructions+=5;NFSU2_TR(0x6bcfb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bcfb9:{NFSU2_TR(0x6bcfb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bcfbc:{NFSU2_TR(0x6bcfbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bcfbf:{NFSU2_TR(0x6bcfbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bcfc2:{NFSU2_TR(0x6bcfc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B6bcfc5:L6bcfc5:{c.instructions+=8;NFSU2_TR(0x6bcfc5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6bcfc7:{NFSU2_TR(0x6bcfc7);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6bcfca:{NFSU2_TR(0x6bcfca);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6bcfcd:{NFSU2_TR(0x6bcfcd);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffdcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6bcfd1:{NFSU2_TR(0x6bcfd1);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6bcfd2:{NFSU2_TR(0x6bcfd2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6bcfd5:{NFSU2_TR(0x6bcfd5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B6bcfd7:{NFSU2_TR(0x6bcfd7);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bcfc5u);}goto L6bcfc5;}}
}
B6bcfd9:L6bcfd9:{c.instructions+=2;NFSU2_TR(0x6bcfd9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bcfdb:{NFSU2_TR(0x6bcfdb);
if(r1(R+518)){TAIL_STATIC(0x6bd008u,6bd);}
}
B6bcfdd:L6bcfdd:{c.instructions+=7;NFSU2_TR(0x6bcfdd);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6bcfdf:{NFSU2_TR(0x6bcfdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x80b7e0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6bcfe6:{NFSU2_TR(0x6bcfe6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bcfe9:{NFSU2_TR(0x6bcfe9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bcfec:{NFSU2_TR(0x6bcfec);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6bcfef:{NFSU2_TR(0x6bcfef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bcff0:{NFSU2_TR(0x6bcff0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bcff5ull));
TAIL_STATIC(0x6bbdc2u,6bb);
}
B6bcff5:L6bcff5:{c.instructions+=2;NFSU2_TR(0x6bcff5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bcff7:{NFSU2_TR(0x6bcff7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6bd003u,6bd);}
}
B6bcff9:L6bcff9:{c.instructions+=3;NFSU2_TR(0x6bcff9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bcffd:{NFSU2_TR(0x6bcffd);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6bcffe:{NFSU2_TR(0x6bcffe);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x8ull))));
TAIL_STATIC(0x6bd001u,6bd);
}
XIT:NFSU2_TR_EXIT(0x6bc,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
