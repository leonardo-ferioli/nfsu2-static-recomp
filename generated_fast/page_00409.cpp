#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_408(u8* __restrict R,Cpu& c);
u32 body_40a(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_578(u8* __restrict R,Cpu& c);
u32 body_579(u8* __restrict R,Cpu& c);
u32 body_57b(u8* __restrict R,Cpu& c);
u32 body_593(u8* __restrict R,Cpu& c);
u32 body_5d4(u8* __restrict R,Cpu& c);
u32 body_5d5(u8* __restrict R,Cpu& c);
u32 body_5d8(u8* __restrict R,Cpu& c);
u32 body_5e2(u8* __restrict R,Cpu& c);
u32 body_5ea(u8* __restrict R,Cpu& c);
u32 body_5ed(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_5f1(u8* __restrict R,Cpu& c);
u32 body_5f4(u8* __restrict R,Cpu& c);
u32 body_5fb(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x409,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x409,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_409(u8* __restrict R,Cpu& c);
u32 page_409(Cpu& c){return body_409(c.regs.data(),c);}
__attribute__((noinline)) u32 body_409(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x409000:goto L409000;
case 0x409002:c.instructions+=2;goto B409002;
case 0x409005:c.instructions+=1;goto B409005;
case 0x409007:goto L409007;
case 0x409009:c.instructions+=4;goto B409009;
case 0x40900b:c.instructions+=3;goto B40900b;
case 0x40900e:c.instructions+=2;goto B40900e;
case 0x409012:c.instructions+=1;goto B409012;
case 0x409015:goto L409015;
case 0x409018:c.instructions+=2;goto B409018;
case 0x40901a:c.instructions+=1;goto B40901a;
case 0x40901c:goto L40901c;
case 0x40901f:c.instructions+=1;goto B40901f;
case 0x409021:goto L409021;
case 0x409024:c.instructions+=3;goto B409024;
case 0x409026:c.instructions+=2;goto B409026;
case 0x409029:c.instructions+=1;goto B409029;
case 0x40902b:goto L40902b;
case 0x40902d:c.instructions+=4;goto B40902d;
case 0x40902f:c.instructions+=3;goto B40902f;
case 0x409031:c.instructions+=2;goto B409031;
case 0x409035:c.instructions+=1;goto B409035;
case 0x409038:goto L409038;
case 0x40903b:c.instructions+=2;goto B40903b;
case 0x40903d:c.instructions+=1;goto B40903d;
case 0x40903f:goto L40903f;
case 0x409042:c.instructions+=1;goto B409042;
case 0x409044:goto L409044;
case 0x409047:c.instructions+=3;goto B409047;
case 0x409049:c.instructions+=2;goto B409049;
case 0x40904c:c.instructions+=1;goto B40904c;
case 0x40904e:goto L40904e;
case 0x409050:c.instructions+=4;goto B409050;
case 0x409052:c.instructions+=3;goto B409052;
case 0x409055:c.instructions+=2;goto B409055;
case 0x409059:c.instructions+=1;goto B409059;
case 0x40905c:goto L40905c;
case 0x40905f:c.instructions+=2;goto B40905f;
case 0x409061:c.instructions+=1;goto B409061;
case 0x409063:goto L409063;
case 0x409066:c.instructions+=1;goto B409066;
case 0x409068:goto L409068;
case 0x40906b:c.instructions+=3;goto B40906b;
case 0x40906d:c.instructions+=2;goto B40906d;
case 0x409070:c.instructions+=1;goto B409070;
case 0x409072:goto L409072;
case 0x409074:c.instructions+=4;goto B409074;
case 0x409076:c.instructions+=3;goto B409076;
case 0x409078:c.instructions+=2;goto B409078;
case 0x40907c:c.instructions+=1;goto B40907c;
case 0x40907f:goto L40907f;
case 0x409082:c.instructions+=2;goto B409082;
case 0x409084:c.instructions+=1;goto B409084;
case 0x409086:goto L409086;
case 0x409089:c.instructions+=1;goto B409089;
case 0x40908b:goto L40908b;
case 0x40908e:c.instructions+=3;goto B40908e;
case 0x409090:c.instructions+=2;goto B409090;
case 0x409093:c.instructions+=1;goto B409093;
case 0x409095:goto L409095;
case 0x409097:c.instructions+=4;goto B409097;
case 0x409099:c.instructions+=3;goto B409099;
case 0x40909c:c.instructions+=2;goto B40909c;
case 0x4090a0:c.instructions+=1;goto B4090a0;
case 0x4090a3:goto L4090a3;
case 0x4090a6:c.instructions+=2;goto B4090a6;
case 0x4090a8:c.instructions+=1;goto B4090a8;
case 0x4090aa:goto L4090aa;
case 0x4090ad:c.instructions+=1;goto B4090ad;
case 0x4090af:goto L4090af;
case 0x4090b2:c.instructions+=3;goto B4090b2;
case 0x4090b4:c.instructions+=2;goto B4090b4;
case 0x4090b7:c.instructions+=1;goto B4090b7;
case 0x4090b9:goto L4090b9;
case 0x4090bb:c.instructions+=4;goto B4090bb;
case 0x4090bd:c.instructions+=3;goto B4090bd;
case 0x4090bf:c.instructions+=2;goto B4090bf;
case 0x4090c3:c.instructions+=1;goto B4090c3;
case 0x4090c6:goto L4090c6;
case 0x4090c9:c.instructions+=2;goto B4090c9;
case 0x4090cb:c.instructions+=1;goto B4090cb;
case 0x4090cd:goto L4090cd;
case 0x4090d0:c.instructions+=1;goto B4090d0;
case 0x4090d2:goto L4090d2;
case 0x4090d5:c.instructions+=3;goto B4090d5;
case 0x4090d7:c.instructions+=2;goto B4090d7;
case 0x4090da:c.instructions+=1;goto B4090da;
case 0x4090dc:goto L4090dc;
case 0x4090de:c.instructions+=4;goto B4090de;
case 0x4090e0:c.instructions+=3;goto B4090e0;
case 0x4090e3:c.instructions+=2;goto B4090e3;
case 0x4090e7:c.instructions+=1;goto B4090e7;
case 0x4090ea:goto L4090ea;
case 0x4090ed:c.instructions+=3;goto B4090ed;
case 0x4090f3:c.instructions+=2;goto B4090f3;
case 0x4090f6:c.instructions+=1;goto B4090f6;
case 0x4090fc:goto L4090fc;
case 0x4090fd:c.instructions+=4;goto B4090fd;
case 0x4090ff:c.instructions+=3;goto B4090ff;
case 0x409100:c.instructions+=2;goto B409100;
case 0x409101:c.instructions+=1;goto B409101;
case 0x409110:goto L409110;
case 0x409111:c.instructions+=6;goto B409111;
case 0x409112:c.instructions+=5;goto B409112;
case 0x409113:c.instructions+=4;goto B409113;
case 0x409115:c.instructions+=3;goto B409115;
case 0x409118:c.instructions+=2;goto B409118;
case 0x40911b:c.instructions+=1;goto B40911b;
case 0x409121:goto L409121;
case 0x409122:c.instructions+=7;goto B409122;
case 0x409124:c.instructions+=6;goto B409124;
case 0x409125:c.instructions+=5;goto B409125;
case 0x409129:c.instructions+=4;goto B409129;
case 0x40912d:c.instructions+=3;goto B40912d;
case 0x409130:c.instructions+=2;goto B409130;
case 0x409135:c.instructions+=1;goto B409135;
case 0x409137:goto L409137;
case 0x40913a:c.instructions+=1;goto B40913a;
case 0x40913c:goto L40913c;
case 0x40913e:c.instructions+=4;goto B40913e;
case 0x409144:c.instructions+=3;goto B409144;
case 0x409146:c.instructions+=2;goto B409146;
case 0x409149:c.instructions+=1;goto B409149;
case 0x40914b:goto L40914b;
case 0x40914e:c.instructions+=1;goto B40914e;
case 0x409152:goto L409152;
case 0x409155:c.instructions+=1;goto B409155;
case 0x409157:goto L409157;
case 0x40915a:c.instructions+=4;goto B40915a;
case 0x409160:c.instructions+=3;goto B409160;
case 0x409162:c.instructions+=2;goto B409162;
case 0x409165:c.instructions+=1;goto B409165;
case 0x409167:goto L409167;
case 0x40916a:c.instructions+=1;goto B40916a;
case 0x40916e:goto L40916e;
case 0x409171:c.instructions+=1;goto B409171;
case 0x409173:goto L409173;
case 0x409176:c.instructions+=4;goto B409176;
case 0x40917c:c.instructions+=3;goto B40917c;
case 0x40917e:c.instructions+=2;goto B40917e;
case 0x409181:c.instructions+=1;goto B409181;
case 0x409183:goto L409183;
case 0x409186:c.instructions+=1;goto B409186;
case 0x40918a:goto L40918a;
case 0x40918d:c.instructions+=1;goto B40918d;
case 0x40918f:goto L40918f;
case 0x409192:c.instructions+=4;goto B409192;
case 0x409198:c.instructions+=3;goto B409198;
case 0x40919a:c.instructions+=2;goto B40919a;
case 0x40919d:c.instructions+=1;goto B40919d;
case 0x40919f:goto L40919f;
case 0x4091a2:c.instructions+=1;goto B4091a2;
case 0x4091a6:goto L4091a6;
case 0x4091a9:c.instructions+=1;goto B4091a9;
case 0x4091ab:goto L4091ab;
case 0x4091ae:c.instructions+=4;goto B4091ae;
case 0x4091b4:c.instructions+=3;goto B4091b4;
case 0x4091b6:c.instructions+=2;goto B4091b6;
case 0x4091b9:c.instructions+=1;goto B4091b9;
case 0x4091bb:goto L4091bb;
case 0x4091be:c.instructions+=1;goto B4091be;
case 0x4091c2:goto L4091c2;
case 0x4091c5:c.instructions+=1;goto B4091c5;
case 0x4091c7:goto L4091c7;
case 0x4091ca:c.instructions+=4;goto B4091ca;
case 0x4091d0:c.instructions+=3;goto B4091d0;
case 0x4091d2:c.instructions+=2;goto B4091d2;
case 0x4091d5:c.instructions+=1;goto B4091d5;
case 0x4091d7:goto L4091d7;
case 0x4091da:c.instructions+=1;goto B4091da;
case 0x4091de:goto L4091de;
case 0x4091e1:c.instructions+=1;goto B4091e1;
case 0x4091e3:goto L4091e3;
case 0x4091e6:c.instructions+=4;goto B4091e6;
case 0x4091ec:c.instructions+=3;goto B4091ec;
case 0x4091ee:c.instructions+=2;goto B4091ee;
case 0x4091f1:c.instructions+=1;goto B4091f1;
case 0x4091f3:goto L4091f3;
case 0x4091f6:c.instructions+=1;goto B4091f6;
case 0x4091fa:goto L4091fa;
case 0x4091fd:c.instructions+=1;goto B4091fd;
case 0x4091ff:goto L4091ff;
case 0x409202:c.instructions+=4;goto B409202;
case 0x409208:c.instructions+=3;goto B409208;
case 0x40920a:c.instructions+=2;goto B40920a;
case 0x40920d:c.instructions+=1;goto B40920d;
case 0x40920f:goto L40920f;
case 0x409212:c.instructions+=1;goto B409212;
case 0x409216:goto L409216;
case 0x40921c:c.instructions+=2;goto B40921c;
case 0x40921d:c.instructions+=1;goto B40921d;
case 0x409223:goto L409223;
case 0x409227:c.instructions+=3;goto B409227;
case 0x409228:c.instructions+=2;goto B409228;
case 0x409229:c.instructions+=1;goto B409229;
case 0x40922b:goto L40922b;
case 0x409232:goto L409232;
case 0x409233:c.instructions+=3;goto B409233;
case 0x409234:c.instructions+=2;goto B409234;
case 0x409235:c.instructions+=1;goto B409235;
case 0x409240:goto L409240;
case 0x409241:c.instructions+=9;goto B409241;
case 0x409245:c.instructions+=8;goto B409245;
case 0x409246:c.instructions+=7;goto B409246;
case 0x40924a:c.instructions+=6;goto B40924a;
case 0x40924d:c.instructions+=5;goto B40924d;
case 0x40924f:c.instructions+=4;goto B40924f;
case 0x409250:c.instructions+=3;goto B409250;
case 0x409252:c.instructions+=2;goto B409252;
case 0x40925a:c.instructions+=1;goto B40925a;
case 0x40925c:goto L40925c;
case 0x40925e:c.instructions+=1;goto B40925e;
case 0x409260:goto L409260;
case 0x409262:c.instructions+=1;goto B409262;
case 0x409266:goto L409266;
case 0x409268:c.instructions+=6;goto B409268;
case 0x40926a:c.instructions+=5;goto B40926a;
case 0x40926c:c.instructions+=4;goto B40926c;
case 0x409270:c.instructions+=3;goto B409270;
case 0x409271:c.instructions+=2;goto B409271;
case 0x409273:c.instructions+=1;goto B409273;
case 0x409278:goto L409278;
case 0x40927b:c.instructions+=2;goto B40927b;
case 0x40927d:c.instructions+=1;goto B40927d;
case 0x40927f:goto L40927f;
case 0x409283:c.instructions+=3;goto B409283;
case 0x409285:c.instructions+=2;goto B409285;
case 0x409288:c.instructions+=1;goto B409288;
case 0x40928a:goto L40928a;
case 0x409290:c.instructions+=3;goto B409290;
case 0x409292:c.instructions+=2;goto B409292;
case 0x409294:c.instructions+=1;goto B409294;
case 0x409296:goto L409296;
case 0x40929c:c.instructions+=1;goto B40929c;
case 0x4092a0:goto L4092a0;
case 0x4092a2:c.instructions+=1;goto B4092a2;
case 0x4092a4:goto L4092a4;
case 0x4092a5:c.instructions+=3;goto B4092a5;
case 0x4092ab:c.instructions+=2;goto B4092ab;
case 0x4092ad:c.instructions+=1;goto B4092ad;
case 0x4092af:goto L4092af;
case 0x4092b0:c.instructions+=4;goto B4092b0;
case 0x4092b2:c.instructions+=3;goto B4092b2;
case 0x4092b3:c.instructions+=2;goto B4092b3;
case 0x4092b4:c.instructions+=1;goto B4092b4;
case 0x4092b5:goto L4092b5;
case 0x4092b6:c.instructions+=4;goto B4092b6;
case 0x4092b7:c.instructions+=3;goto B4092b7;
case 0x4092b9:c.instructions+=2;goto B4092b9;
case 0x4092ba:c.instructions+=1;goto B4092ba;
case 0x4092bb:goto L4092bb;
case 0x4092bd:c.instructions+=4;goto B4092bd;
case 0x4092be:c.instructions+=3;goto B4092be;
case 0x4092bf:c.instructions+=2;goto B4092bf;
case 0x4092c0:c.instructions+=1;goto B4092c0;
case 0x4092d0:goto L4092d0;
case 0x4092d1:c.instructions+=6;goto B4092d1;
case 0x4092d2:c.instructions+=5;goto B4092d2;
case 0x4092d3:c.instructions+=4;goto B4092d3;
case 0x4092d4:c.instructions+=3;goto B4092d4;
case 0x4092d7:c.instructions+=2;goto B4092d7;
case 0x4092dc:c.instructions+=1;goto B4092dc;
case 0x4092e0:goto L4092e0;
case 0x4092e5:goto L4092e5;
case 0x4092e8:c.instructions+=7;goto B4092e8;
case 0x4092ec:c.instructions+=6;goto B4092ec;
case 0x4092f0:c.instructions+=5;goto B4092f0;
case 0x4092f1:c.instructions+=4;goto B4092f1;
case 0x4092f7:c.instructions+=3;goto B4092f7;
case 0x4092f9:c.instructions+=2;goto B4092f9;
case 0x4092fc:c.instructions+=1;goto B4092fc;
case 0x409301:goto L409301;
case 0x409305:c.instructions+=5;goto B409305;
case 0x409308:c.instructions+=4;goto B409308;
case 0x409309:c.instructions+=3;goto B409309;
case 0x40930c:c.instructions+=2;goto B40930c;
case 0x409312:c.instructions+=1;goto B409312;
case 0x409314:goto L409314;
case 0x409315:c.instructions+=1;goto B409315;
case 0x409317:goto L409317;
case 0x409318:c.instructions+=4;goto B409318;
case 0x409319:c.instructions+=3;goto B409319;
case 0x40931a:c.instructions+=2;goto B40931a;
case 0x40931b:c.instructions+=1;goto B40931b;
case 0x409320:goto L409320;
case 0x409322:c.instructions+=2;goto B409322;
case 0x409324:c.instructions+=1;goto B409324;
case 0x409326:goto L409326;
case 0x40932d:c.instructions+=2;goto B40932d;
case 0x40932f:c.instructions+=1;goto B40932f;
case 0x409331:goto L409331;
case 0x409333:c.instructions+=1;goto B409333;
case 0x409335:goto L409335;
case 0x409337:goto L409337;
case 0x409339:goto L409339;
case 0x40933d:c.instructions+=6;goto B40933d;
case 0x40933e:c.instructions+=5;goto B40933e;
case 0x409340:c.instructions+=4;goto B409340;
case 0x409342:c.instructions+=3;goto B409342;
case 0x409345:c.instructions+=2;goto B409345;
case 0x40934c:c.instructions+=1;goto B40934c;
case 0x40934d:goto L40934d;
case 0x409353:c.instructions+=1;goto B409353;
case 0x409360:goto L409360;
case 0x409361:c.instructions+=3;goto B409361;
case 0x409363:c.instructions+=2;goto B409363;
case 0x409365:c.instructions+=1;goto B409365;
case 0x409367:goto L409367;
case 0x40936e:c.instructions+=2;goto B40936e;
case 0x409370:c.instructions+=1;goto B409370;
case 0x409372:goto L409372;
case 0x409374:c.instructions+=1;goto B409374;
case 0x409376:goto L409376;
case 0x409378:goto L409378;
case 0x40937a:goto L40937a;
case 0x40937e:c.instructions+=20;goto B40937e;
case 0x40937f:c.instructions+=19;goto B40937f;
case 0x409381:c.instructions+=18;goto B409381;
case 0x409383:c.instructions+=17;goto B409383;
case 0x409386:c.instructions+=16;goto B409386;
case 0x40938e:c.instructions+=15;goto B40938e;
case 0x409395:c.instructions+=14;goto B409395;
case 0x409399:c.instructions+=13;goto B409399;
case 0x40939c:c.instructions+=12;goto B40939c;
case 0x4093a0:c.instructions+=11;goto B4093a0;
case 0x4093a3:c.instructions+=10;goto B4093a3;
case 0x4093a7:c.instructions+=9;goto B4093a7;
case 0x4093ab:c.instructions+=8;goto B4093ab;
case 0x4093b1:c.instructions+=7;goto B4093b1;
case 0x4093b5:c.instructions+=6;goto B4093b5;
case 0x4093bb:c.instructions+=5;goto B4093bb;
case 0x4093bf:c.instructions+=4;goto B4093bf;
case 0x4093c1:c.instructions+=3;goto B4093c1;
case 0x4093c3:c.instructions+=2;goto B4093c3;
case 0x4093c6:c.instructions+=1;goto B4093c6;
case 0x4093c8:goto L4093c8;
case 0x4093ca:c.instructions+=3;goto B4093ca;
case 0x4093ce:c.instructions+=2;goto B4093ce;
case 0x4093cf:c.instructions+=1;goto B4093cf;
case 0x4093d0:goto L4093d0;
case 0x4093d6:goto L4093d6;
case 0x4093d7:c.instructions+=1;goto B4093d7;
case 0x4093e0:goto L4093e0;
case 0x4093e4:c.instructions+=4;goto B4093e4;
case 0x4093e9:c.instructions+=3;goto B4093e9;
case 0x4093ed:c.instructions+=2;goto B4093ed;
case 0x4093ee:c.instructions+=1;goto B4093ee;
case 0x4093f4:goto L4093f4;
case 0x4093f5:c.instructions+=9;goto B4093f5;
case 0x4093f9:c.instructions+=8;goto B4093f9;
case 0x4093fa:c.instructions+=7;goto B4093fa;
case 0x4093fe:c.instructions+=6;goto B4093fe;
case 0x409402:c.instructions+=5;goto B409402;
case 0x409405:c.instructions+=4;goto B409405;
case 0x409409:c.instructions+=3;goto B409409;
case 0x40940a:c.instructions+=2;goto B40940a;
case 0x40940b:c.instructions+=1;goto B40940b;
case 0x409411:goto L409411;
case 0x409415:c.instructions+=3;goto B409415;
case 0x409417:c.instructions+=2;goto B409417;
case 0x409419:c.instructions+=1;goto B409419;
case 0x40941b:goto L40941b;
case 0x40941d:c.instructions+=1;goto B40941d;
case 0x40941f:goto L40941f;
case 0x409426:c.instructions+=5;goto B409426;
case 0x409429:c.instructions+=4;goto B409429;
case 0x40942c:c.instructions+=3;goto B40942c;
case 0x409433:c.instructions+=2;goto B409433;
case 0x409434:c.instructions+=1;goto B409434;
case 0x409437:goto L409437;
case 0x40943a:c.instructions+=5;goto B40943a;
case 0x40943c:c.instructions+=4;goto B40943c;
case 0x40943f:c.instructions+=3;goto B40943f;
case 0x409446:c.instructions+=2;goto B409446;
case 0x409447:c.instructions+=1;goto B409447;
case 0x40944a:goto L40944a;
case 0x40944c:c.instructions+=1;goto B40944c;
case 0x40944e:goto L40944e;
case 0x409450:c.instructions+=1;goto B409450;
case 0x409452:goto L409452;
case 0x409459:c.instructions+=3;goto B409459;
case 0x40945f:c.instructions+=2;goto B40945f;
case 0x409460:c.instructions+=1;goto B409460;
case 0x409463:goto L409463;
case 0x409465:c.instructions+=3;goto B409465;
case 0x40946b:c.instructions+=2;goto B40946b;
case 0x40946c:c.instructions+=1;goto B40946c;
case 0x40946f:goto L40946f;
case 0x409471:c.instructions+=1;goto B409471;
case 0x409473:goto L409473;
case 0x40947a:c.instructions+=5;goto B40947a;
case 0x40947e:c.instructions+=4;goto B40947e;
case 0x409481:c.instructions+=3;goto B409481;
case 0x409485:c.instructions+=2;goto B409485;
case 0x409486:c.instructions+=1;goto B409486;
case 0x409489:goto L409489;
case 0x40948b:c.instructions+=5;goto B40948b;
case 0x40948f:c.instructions+=4;goto B40948f;
case 0x409492:c.instructions+=3;goto B409492;
case 0x409496:c.instructions+=2;goto B409496;
case 0x409497:c.instructions+=1;goto B409497;
case 0x40949a:goto L40949a;
case 0x40949c:c.instructions+=2;goto B40949c;
case 0x40949d:c.instructions+=1;goto B40949d;
case 0x4094a0:goto L4094a0;
case 0x4094a1:c.instructions+=6;goto B4094a1;
case 0x4094a6:c.instructions+=5;goto B4094a6;
case 0x4094a7:c.instructions+=4;goto B4094a7;
case 0x4094a9:c.instructions+=3;goto B4094a9;
case 0x4094ab:c.instructions+=2;goto B4094ab;
case 0x4094ac:c.instructions+=1;goto B4094ac;
case 0x4094ae:goto L4094ae;
case 0x4094b2:c.instructions+=1;goto B4094b2;
case 0x4094c0:goto L4094c0;
case 0x4094c7:c.instructions+=6;goto B4094c7;
case 0x4094ca:c.instructions+=5;goto B4094ca;
case 0x4094d0:c.instructions+=4;goto B4094d0;
case 0x4094d6:c.instructions+=3;goto B4094d6;
case 0x4094d8:c.instructions+=2;goto B4094d8;
case 0x4094db:c.instructions+=1;goto B4094db;
case 0x4094dd:goto L4094dd;
case 0x4094e3:c.instructions+=6;goto B4094e3;
case 0x4094e5:c.instructions+=5;goto B4094e5;
case 0x4094e6:c.instructions+=4;goto B4094e6;
case 0x4094ea:c.instructions+=3;goto B4094ea;
case 0x4094eb:c.instructions+=2;goto B4094eb;
case 0x4094f0:c.instructions+=1;goto B4094f0;
case 0x4094f5:goto L4094f5;
case 0x4094f7:c.instructions+=4;goto B4094f7;
case 0x4094fd:c.instructions+=3;goto B4094fd;
case 0x4094ff:c.instructions+=2;goto B4094ff;
case 0x409502:c.instructions+=1;goto B409502;
case 0x409504:goto L409504;
case 0x409509:c.instructions+=3;goto B409509;
case 0x40950a:c.instructions+=2;goto B40950a;
case 0x40950c:c.instructions+=1;goto B40950c;
case 0x40950e:goto L40950e;
case 0x40950f:c.instructions+=4;goto B40950f;
case 0x409511:c.instructions+=3;goto B409511;
case 0x409512:c.instructions+=2;goto B409512;
case 0x409513:c.instructions+=1;goto B409513;
case 0x409514:goto L409514;
case 0x409515:c.instructions+=4;goto B409515;
case 0x409517:c.instructions+=3;goto B409517;
case 0x409518:c.instructions+=2;goto B409518;
case 0x409519:c.instructions+=1;goto B409519;
case 0x409520:goto L409520;
case 0x409524:c.instructions+=14;goto B409524;
case 0x409525:c.instructions+=13;goto B409525;
case 0x409529:c.instructions+=12;goto B409529;
case 0x40952b:c.instructions+=11;goto B40952b;
case 0x409531:c.instructions+=10;goto B409531;
case 0x409536:c.instructions+=9;goto B409536;
case 0x409538:c.instructions+=8;goto B409538;
case 0x40953a:c.instructions+=7;goto B40953a;
case 0x40953d:c.instructions+=6;goto B40953d;
case 0x40953f:c.instructions+=5;goto B40953f;
case 0x409542:c.instructions+=4;goto B409542;
case 0x409544:c.instructions+=3;goto B409544;
case 0x409548:c.instructions+=2;goto B409548;
case 0x40954a:c.instructions+=1;goto B40954a;
case 0x40954c:goto L40954c;
case 0x409550:c.instructions+=6;goto B409550;
case 0x409551:c.instructions+=5;goto B409551;
case 0x409553:c.instructions+=4;goto B409553;
case 0x409555:c.instructions+=3;goto B409555;
case 0x409558:c.instructions+=2;goto B409558;
case 0x409559:c.instructions+=1;goto B409559;
case 0x40955a:goto L40955a;
case 0x40955c:c.instructions+=4;goto B40955c;
case 0x40955f:c.instructions+=3;goto B40955f;
case 0x409562:c.instructions+=2;goto B409562;
case 0x409563:c.instructions+=1;goto B409563;
case 0x409570:goto L409570;
case 0x409573:c.instructions+=10;goto B409573;
case 0x409574:c.instructions+=9;goto B409574;
case 0x40957a:c.instructions+=8;goto B40957a;
case 0x40957b:c.instructions+=7;goto B40957b;
case 0x40957c:c.instructions+=6;goto B40957c;
case 0x409582:c.instructions+=5;goto B409582;
case 0x409589:c.instructions+=4;goto B409589;
case 0x40958a:c.instructions+=3;goto B40958a;
case 0x40958b:c.instructions+=2;goto B40958b;
case 0x40958f:c.instructions+=1;goto B40958f;
case 0x409594:goto L409594;
case 0x409596:c.instructions+=7;goto B409596;
case 0x40959b:c.instructions+=6;goto B40959b;
case 0x40959d:c.instructions+=5;goto B40959d;
case 0x4095a0:c.instructions+=4;goto B4095a0;
case 0x4095a2:c.instructions+=3;goto B4095a2;
case 0x4095a6:c.instructions+=2;goto B4095a6;
case 0x4095aa:c.instructions+=1;goto B4095aa;
case 0x4095b0:goto L4095b0;
case 0x4095b4:c.instructions+=2;goto B4095b4;
case 0x4095b8:c.instructions+=1;goto B4095b8;
case 0x4095ba:goto L4095ba;
case 0x4095be:c.instructions+=1;goto B4095be;
case 0x4095c0:goto L4095c0;
case 0x4095c2:c.instructions+=1;goto B4095c2;
case 0x4095c8:goto L4095c8;
case 0x4095ce:c.instructions+=5;goto B4095ce;
case 0x4095d2:c.instructions+=4;goto B4095d2;
case 0x4095d9:c.instructions+=3;goto B4095d9;
case 0x4095db:c.instructions+=2;goto B4095db;
case 0x4095de:c.instructions+=1;goto B4095de;
case 0x4095e4:goto L4095e4;
case 0x4095e8:c.instructions+=2;goto B4095e8;
case 0x4095ee:c.instructions+=1;goto B4095ee;
case 0x4095f4:goto L4095f4;
case 0x4095f8:c.instructions+=3;goto B4095f8;
case 0x4095fb:c.instructions+=2;goto B4095fb;
case 0x4095ff:c.instructions+=1;goto B4095ff;
case 0x409605:goto L409605;
case 0x409609:c.instructions+=4;goto B409609;
case 0x40960b:c.instructions+=3;goto B40960b;
case 0x409613:c.instructions+=2;goto B409613;
case 0x40961b:c.instructions+=1;goto B40961b;
case 0x40961d:goto L40961d;
case 0x409621:c.instructions+=6;goto B409621;
case 0x409624:c.instructions+=5;goto B409624;
case 0x409628:c.instructions+=4;goto B409628;
case 0x40962e:c.instructions+=3;goto B40962e;
case 0x409630:c.instructions+=2;goto B409630;
case 0x409633:c.instructions+=1;goto B409633;
case 0x409635:goto L409635;
case 0x409639:c.instructions+=1;goto B409639;
case 0x40963b:goto L40963b;
case 0x409640:c.instructions+=2;goto B409640;
case 0x409642:c.instructions+=1;goto B409642;
case 0x409646:goto L409646;
case 0x40964a:c.instructions+=6;goto B40964a;
case 0x40964d:c.instructions+=5;goto B40964d;
case 0x409651:c.instructions+=4;goto B409651;
case 0x409657:c.instructions+=3;goto B409657;
case 0x409659:c.instructions+=2;goto B409659;
case 0x40965c:c.instructions+=1;goto B40965c;
case 0x40965e:goto L40965e;
case 0x409662:c.instructions+=1;goto B409662;
case 0x409664:goto L409664;
case 0x40966a:c.instructions+=2;goto B40966a;
case 0x40966c:c.instructions+=1;goto B40966c;
case 0x409670:goto L409670;
case 0x409672:c.instructions+=2;goto B409672;
case 0x409674:c.instructions+=1;goto B409674;
case 0x409676:goto L409676;
case 0x40967d:c.instructions+=2;goto B40967d;
case 0x40967f:c.instructions+=1;goto B40967f;
case 0x409681:goto L409681;
case 0x409683:c.instructions+=1;goto B409683;
case 0x409685:goto L409685;
case 0x409687:goto L409687;
case 0x409689:goto L409689;
case 0x40968d:c.instructions+=7;goto B40968d;
case 0x40968e:c.instructions+=6;goto B40968e;
case 0x409690:c.instructions+=5;goto B409690;
case 0x409692:c.instructions+=4;goto B409692;
case 0x409695:c.instructions+=3;goto B409695;
case 0x40969c:c.instructions+=2;goto B40969c;
case 0x4096a0:c.instructions+=1;goto B4096a0;
case 0x4096a2:goto L4096a2;
case 0x4096aa:goto L4096aa;
case 0x4096ae:c.instructions+=5;goto B4096ae;
case 0x4096b2:c.instructions+=4;goto B4096b2;
case 0x4096b3:c.instructions+=3;goto B4096b3;
case 0x4096b4:c.instructions+=2;goto B4096b4;
case 0x4096b9:c.instructions+=1;goto B4096b9;
case 0x4096be:goto L4096be;
case 0x4096c4:c.instructions+=1;goto B4096c4;
case 0x4096c6:goto L4096c6;
case 0x4096c8:c.instructions+=5;goto B4096c8;
case 0x4096cc:c.instructions+=4;goto B4096cc;
case 0x4096d0:c.instructions+=3;goto B4096d0;
case 0x4096d4:c.instructions+=2;goto B4096d4;
case 0x4096d8:c.instructions+=1;goto B4096d8;
case 0x4096da:goto L4096da;
case 0x4096de:c.instructions+=3;goto B4096de;
case 0x4096e2:c.instructions+=2;goto B4096e2;
case 0x4096e6:c.instructions+=1;goto B4096e6;
case 0x4096ea:goto L4096ea;
case 0x4096ec:c.instructions+=4;goto B4096ec;
case 0x4096f2:c.instructions+=3;goto B4096f2;
case 0x4096f4:c.instructions+=2;goto B4096f4;
case 0x4096f7:c.instructions+=1;goto B4096f7;
case 0x4096f9:goto L4096f9;
case 0x4096fb:c.instructions+=7;goto B4096fb;
case 0x4096fd:c.instructions+=6;goto B4096fd;
case 0x4096ff:c.instructions+=5;goto B4096ff;
case 0x409701:c.instructions+=4;goto B409701;
case 0x409703:c.instructions+=3;goto B409703;
case 0x409705:c.instructions+=2;goto B409705;
case 0x409708:c.instructions+=1;goto B409708;
case 0x40970a:goto L40970a;
case 0x40970e:c.instructions+=3;goto B40970e;
case 0x409711:c.instructions+=2;goto B409711;
case 0x409712:c.instructions+=1;goto B409712;
case 0x409714:goto L409714;
case 0x409716:c.instructions+=2;goto B409716;
case 0x409718:c.instructions+=1;goto B409718;
case 0x40971a:goto L40971a;
case 0x40971e:c.instructions+=8;goto B40971e;
case 0x409722:c.instructions+=7;goto B409722;
case 0x409728:c.instructions+=6;goto B409728;
case 0x409729:c.instructions+=5;goto B409729;
case 0x40972f:c.instructions+=4;goto B40972f;
case 0x409731:c.instructions+=3;goto B409731;
case 0x409735:c.instructions+=2;goto B409735;
case 0x409739:c.instructions+=1;goto B409739;
case 0x40973f:goto L40973f;
case 0x409743:goto L409743;
case 0x409745:c.instructions+=2;goto B409745;
case 0x409747:c.instructions+=1;goto B409747;
case 0x409749:goto L409749;
case 0x40974f:c.instructions+=2;goto B40974f;
case 0x409750:c.instructions+=1;goto B409750;
case 0x409755:goto L409755;
case 0x409758:goto L409758;
case 0x409759:c.instructions+=1;goto B409759;
case 0x40975e:goto L40975e;
case 0x409761:c.instructions+=7;goto B409761;
case 0x409762:c.instructions+=6;goto B409762;
case 0x409764:c.instructions+=5;goto B409764;
case 0x409765:c.instructions+=4;goto B409765;
case 0x409766:c.instructions+=3;goto B409766;
case 0x409767:c.instructions+=2;goto B409767;
case 0x40976a:c.instructions+=1;goto B40976a;
case 0x409770:goto L409770;
case 0x409774:c.instructions+=7;goto B409774;
case 0x409777:c.instructions+=6;goto B409777;
case 0x409778:c.instructions+=5;goto B409778;
case 0x40977b:c.instructions+=4;goto B40977b;
case 0x40977c:c.instructions+=3;goto B40977c;
case 0x40977f:c.instructions+=2;goto B40977f;
case 0x409781:c.instructions+=1;goto B409781;
case 0x409783:goto L409783;
case 0x409785:c.instructions+=4;goto B409785;
case 0x409786:c.instructions+=3;goto B409786;
case 0x409787:c.instructions+=2;goto B409787;
case 0x409789:c.instructions+=1;goto B409789;
case 0x40978c:goto L40978c;
case 0x40978f:c.instructions+=3;goto B40978f;
case 0x409791:c.instructions+=2;goto B409791;
case 0x409793:c.instructions+=1;goto B409793;
case 0x409798:goto L409798;
case 0x40979c:c.instructions+=3;goto B40979c;
case 0x40979e:c.instructions+=2;goto B40979e;
case 0x4097a0:c.instructions+=1;goto B4097a0;
case 0x4097a3:goto L4097a3;
case 0x4097a7:c.instructions+=3;goto B4097a7;
case 0x4097a8:c.instructions+=2;goto B4097a8;
case 0x4097aa:c.instructions+=1;goto B4097aa;
case 0x4097af:goto L4097af;
case 0x4097b3:c.instructions+=5;goto B4097b3;
case 0x4097b4:c.instructions+=4;goto B4097b4;
case 0x4097b6:c.instructions+=3;goto B4097b6;
case 0x4097b7:c.instructions+=2;goto B4097b7;
case 0x4097bf:c.instructions+=1;goto B4097bf;
case 0x4097c1:goto L4097c1;
case 0x4097c9:goto L4097c9;
case 0x4097cd:c.instructions+=14;goto B4097cd;
case 0x4097d1:c.instructions+=13;goto B4097d1;
case 0x4097d5:c.instructions+=12;goto B4097d5;
case 0x4097d9:c.instructions+=11;goto B4097d9;
case 0x4097db:c.instructions+=10;goto B4097db;
case 0x4097dc:c.instructions+=9;goto B4097dc;
case 0x4097e0:c.instructions+=8;goto B4097e0;
case 0x4097e2:c.instructions+=7;goto B4097e2;
case 0x4097e3:c.instructions+=6;goto B4097e3;
case 0x4097e5:c.instructions+=5;goto B4097e5;
case 0x4097e6:c.instructions+=4;goto B4097e6;
case 0x4097e7:c.instructions+=3;goto B4097e7;
case 0x4097e8:c.instructions+=2;goto B4097e8;
case 0x4097ea:c.instructions+=1;goto B4097ea;
case 0x4097ef:goto L4097ef;
case 0x4097f1:c.instructions+=2;goto B4097f1;
case 0x4097f3:c.instructions+=1;goto B4097f3;
case 0x4097f8:goto L4097f8;
case 0x4097f9:c.instructions+=3;goto B4097f9;
case 0x4097fa:c.instructions+=2;goto B4097fa;
case 0x4097fd:c.instructions+=1;goto B4097fd;
case 0x409800:goto L409800;
case 0x409804:c.instructions+=6;goto B409804;
case 0x40980a:c.instructions+=5;goto B40980a;
case 0x40980c:c.instructions+=4;goto B40980c;
case 0x409810:c.instructions+=3;goto B409810;
case 0x409816:c.instructions+=2;goto B409816;
case 0x409817:c.instructions+=1;goto B409817;
case 0x40981c:goto L40981c;
case 0x409822:c.instructions+=3;goto B409822;
case 0x409824:c.instructions+=2;goto B409824;
case 0x409827:c.instructions+=1;goto B409827;
case 0x409829:goto L409829;
case 0x40982e:c.instructions+=1;goto B40982e;
case 0x409831:goto L409831;
case 0x409833:c.instructions+=1;goto B409833;
case 0x409840:goto L409840;
case 0x409845:c.instructions+=2;goto B409845;
case 0x409848:c.instructions+=1;goto B409848;
case 0x40984a:goto L40984a;
case 0x40984e:c.instructions+=3;goto B40984e;
case 0x40984f:c.instructions+=2;goto B40984f;
case 0x409855:c.instructions+=1;goto B409855;
case 0x40985a:goto L40985a;
case 0x409860:c.instructions+=3;goto B409860;
case 0x409862:c.instructions+=2;goto B409862;
case 0x409865:c.instructions+=1;goto B409865;
case 0x409867:goto L409867;
case 0x40986c:c.instructions+=3;goto B40986c;
case 0x40986e:c.instructions+=2;goto B40986e;
case 0x409871:c.instructions+=1;goto B409871;
case 0x409874:goto L409874;
case 0x409876:c.instructions+=3;goto B409876;
case 0x409878:c.instructions+=2;goto B409878;
case 0x40987b:c.instructions+=1;goto B40987b;
case 0x40987e:goto L40987e;
case 0x409880:c.instructions+=1;goto B409880;
case 0x409890:goto L409890;
case 0x409895:c.instructions+=2;goto B409895;
case 0x409898:c.instructions+=1;goto B409898;
case 0x40989a:goto L40989a;
case 0x40989e:c.instructions+=3;goto B40989e;
case 0x40989f:c.instructions+=2;goto B40989f;
case 0x4098a5:c.instructions+=1;goto B4098a5;
case 0x4098aa:goto L4098aa;
case 0x4098ac:c.instructions+=4;goto B4098ac;
case 0x4098b2:c.instructions+=3;goto B4098b2;
case 0x4098b4:c.instructions+=2;goto B4098b4;
case 0x4098b7:c.instructions+=1;goto B4098b7;
case 0x4098b9:goto L4098b9;
case 0x4098be:c.instructions+=1;goto B4098be;
case 0x4098c1:goto L4098c1;
case 0x4098c3:c.instructions+=1;goto B4098c3;
case 0x4098c6:goto L4098c6;
case 0x4098c8:c.instructions+=1;goto B4098c8;
case 0x4098d0:goto L4098d0;
case 0x4098d5:c.instructions+=2;goto B4098d5;
case 0x4098d7:c.instructions+=1;goto B4098d7;
case 0x4098d9:goto L4098d9;
case 0x4098de:c.instructions+=2;goto B4098de;
case 0x4098e0:c.instructions+=1;goto B4098e0;
case 0x4098e2:goto L4098e2;
case 0x4098e7:c.instructions+=2;goto B4098e7;
case 0x4098e9:c.instructions+=1;goto B4098e9;
case 0x4098ea:goto L4098ea;
case 0x4098f0:c.instructions+=2;goto B4098f0;
case 0x4098f2:c.instructions+=1;goto B4098f2;
case 0x409900:goto L409900;
case 0x409901:c.instructions+=6;goto B409901;
case 0x409902:c.instructions+=5;goto B409902;
case 0x409904:c.instructions+=4;goto B409904;
case 0x409906:c.instructions+=3;goto B409906;
case 0x409909:c.instructions+=2;goto B409909;
case 0x40990f:c.instructions+=1;goto B40990f;
case 0x409911:goto L409911;
case 0x409912:c.instructions+=6;goto B409912;
case 0x409913:c.instructions+=5;goto B409913;
case 0x409917:c.instructions+=4;goto B409917;
case 0x40991c:c.instructions+=3;goto B40991c;
case 0x40991e:c.instructions+=2;goto B40991e;
case 0x409922:c.instructions+=1;goto B409922;
case 0x409924:goto L409924;
case 0x409928:goto L409928;
case 0x40992b:c.instructions+=2;goto B40992b;
case 0x40992d:c.instructions+=1;goto B40992d;
case 0x40992f:goto L40992f;
case 0x409933:c.instructions+=3;goto B409933;
case 0x409934:c.instructions+=2;goto B409934;
case 0x409936:c.instructions+=1;goto B409936;
case 0x40993b:goto L40993b;
case 0x40993d:c.instructions+=1;goto B40993d;
case 0x40993f:goto L40993f;
case 0x409943:c.instructions+=1;goto B409943;
case 0x409946:goto L409946;
case 0x409949:c.instructions+=6;goto B409949;
case 0x40994b:c.instructions+=5;goto B40994b;
case 0x409950:c.instructions+=4;goto B409950;
case 0x409951:c.instructions+=3;goto B409951;
case 0x409954:c.instructions+=2;goto B409954;
case 0x409956:c.instructions+=1;goto B409956;
case 0x409958:goto L409958;
case 0x409959:c.instructions+=1;goto B409959;
case 0x40995a:goto L40995a;
case 0x40995b:c.instructions+=2;goto B40995b;
case 0x40995c:c.instructions+=1;goto B40995c;
case 0x409960:goto L409960;
case 0x409964:c.instructions+=5;goto B409964;
case 0x409965:c.instructions+=4;goto B409965;
case 0x409968:c.instructions+=3;goto B409968;
case 0x40996e:c.instructions+=2;goto B40996e;
case 0x409970:c.instructions+=1;goto B409970;
case 0x409972:goto L409972;
case 0x409975:c.instructions+=2;goto B409975;
case 0x409978:c.instructions+=1;goto B409978;
case 0x40997d:goto L40997d;
case 0x409980:c.instructions+=2;goto B409980;
case 0x409982:c.instructions+=1;goto B409982;
case 0x409987:goto L409987;
case 0x40998a:c.instructions+=2;goto B40998a;
case 0x40998c:c.instructions+=1;goto B40998c;
case 0x409991:goto L409991;
case 0x409993:c.instructions+=4;goto B409993;
case 0x409999:c.instructions+=3;goto B409999;
case 0x40999f:c.instructions+=2;goto B40999f;
case 0x4099a0:c.instructions+=1;goto B4099a0;
case 0x4099a3:goto L4099a3;
case 0x4099aa:c.instructions+=2;goto B4099aa;
case 0x4099ab:c.instructions+=1;goto B4099ab;
case 0x4099b0:goto L4099b0;
case 0x4099b5:c.instructions+=4;goto B4099b5;
case 0x4099b7:c.instructions+=3;goto B4099b7;
case 0x4099b8:c.instructions+=2;goto B4099b8;
case 0x4099ba:c.instructions+=1;goto B4099ba;
case 0x4099bc:goto L4099bc;
case 0x4099bf:c.instructions+=6;goto B4099bf;
case 0x4099c2:c.instructions+=5;goto B4099c2;
case 0x4099c3:c.instructions+=4;goto B4099c3;
case 0x4099c5:c.instructions+=3;goto B4099c5;
case 0x4099c7:c.instructions+=2;goto B4099c7;
case 0x4099c9:c.instructions+=1;goto B4099c9;
case 0x4099cb:goto L4099cb;
case 0x4099cc:c.instructions+=1;goto B4099cc;
case 0x4099d0:goto L4099d0;
case 0x4099d2:c.instructions+=5;goto B4099d2;
case 0x4099d6:c.instructions+=4;goto B4099d6;
case 0x4099d9:c.instructions+=3;goto B4099d9;
case 0x4099df:c.instructions+=2;goto B4099df;
case 0x4099e1:c.instructions+=1;goto B4099e1;
case 0x4099e3:goto L4099e3;
case 0x4099e6:c.instructions+=2;goto B4099e6;
case 0x4099e9:c.instructions+=1;goto B4099e9;
case 0x4099ee:goto L4099ee;
case 0x4099f1:c.instructions+=2;goto B4099f1;
case 0x4099f3:c.instructions+=1;goto B4099f3;
case 0x4099f8:goto L4099f8;
case 0x4099fb:c.instructions+=2;goto B4099fb;
case 0x4099fd:c.instructions+=1;goto B4099fd;
case 0x409a02:goto L409a02;
case 0x409a09:c.instructions+=1;goto B409a09;
case 0x409a0e:goto L409a0e;
case 0x409a11:c.instructions+=5;goto B409a11;
case 0x409a14:c.instructions+=4;goto B409a14;
case 0x409a15:c.instructions+=3;goto B409a15;
case 0x409a17:c.instructions+=2;goto B409a17;
case 0x409a19:c.instructions+=1;goto B409a19;
case 0x409a1b:goto L409a1b;
case 0x409a1c:goto L409a1c;
case 0x409a20:c.instructions+=1;goto B409a20;
case 0x409a21:goto L409a21;
case 0x409a22:c.instructions+=1;goto B409a22;
case 0x409a30:goto L409a30;
case 0x409a31:c.instructions+=4;goto B409a31;
case 0x409a36:c.instructions+=3;goto B409a36;
case 0x409a38:c.instructions+=2;goto B409a38;
case 0x409a3c:c.instructions+=1;goto B409a3c;
case 0x409a42:goto L409a42;
case 0x409a45:c.instructions+=6;goto B409a45;
case 0x409a48:c.instructions+=5;goto B409a48;
case 0x409a49:c.instructions+=4;goto B409a49;
case 0x409a4b:c.instructions+=3;goto B409a4b;
case 0x409a4d:c.instructions+=2;goto B409a4d;
case 0x409a4f:c.instructions+=1;goto B409a4f;
case 0x409a51:goto L409a51;
case 0x409a52:c.instructions+=1;goto B409a52;
case 0x409a53:goto L409a53;
case 0x409a55:c.instructions+=5;goto B409a55;
case 0x409a59:c.instructions+=4;goto B409a59;
case 0x409a5c:c.instructions+=3;goto B409a5c;
case 0x409a62:c.instructions+=2;goto B409a62;
case 0x409a64:c.instructions+=1;goto B409a64;
case 0x409a66:goto L409a66;
case 0x409a69:c.instructions+=4;goto B409a69;
case 0x409a6c:c.instructions+=3;goto B409a6c;
case 0x409a6e:c.instructions+=2;goto B409a6e;
case 0x409a70:c.instructions+=1;goto B409a70;
case 0x409a75:goto L409a75;
case 0x409a77:c.instructions+=3;goto B409a77;
case 0x409a79:c.instructions+=2;goto B409a79;
case 0x409a7b:c.instructions+=1;goto B409a7b;
case 0x409a7e:goto L409a7e;
case 0x409a80:c.instructions+=1;goto B409a80;
case 0x409a82:goto L409a82;
case 0x409a85:c.instructions+=2;goto B409a85;
case 0x409a86:c.instructions+=1;goto B409a86;
case 0x409a8b:goto L409a8b;
case 0x409a8e:c.instructions+=3;goto B409a8e;
case 0x409a91:c.instructions+=2;goto B409a91;
case 0x409a92:c.instructions+=1;goto B409a92;
case 0x409a97:goto L409a97;
case 0x409a9a:c.instructions+=2;goto B409a9a;
case 0x409a9c:c.instructions+=1;goto B409a9c;
case 0x409aa1:goto L409aa1;
case 0x409aa8:c.instructions+=1;goto B409aa8;
case 0x409aad:goto L409aad;
case 0x409ab0:c.instructions+=5;goto B409ab0;
case 0x409ab3:c.instructions+=4;goto B409ab3;
case 0x409ab4:c.instructions+=3;goto B409ab4;
case 0x409ab6:c.instructions+=2;goto B409ab6;
case 0x409ab8:c.instructions+=1;goto B409ab8;
case 0x409aba:goto L409aba;
case 0x409abb:c.instructions+=1;goto B409abb;
case 0x409abc:goto L409abc;
case 0x409ac0:c.instructions+=2;goto B409ac0;
case 0x409ac4:c.instructions+=1;goto B409ac4;
case 0x409ac5:goto L409ac5;
case 0x409ac6:c.instructions+=1;goto B409ac6;
case 0x409ad0:goto L409ad0;
case 0x409ad1:c.instructions+=7;goto B409ad1;
case 0x409ad2:c.instructions+=6;goto B409ad2;
case 0x409ad3:c.instructions+=5;goto B409ad3;
case 0x409ad7:c.instructions+=4;goto B409ad7;
case 0x409ad9:c.instructions+=3;goto B409ad9;
case 0x409adb:c.instructions+=2;goto B409adb;
case 0x409ae3:c.instructions+=1;goto B409ae3;
case 0x409ae5:goto L409ae5;
case 0x409ae7:c.instructions+=1;goto B409ae7;
case 0x409aeb:goto L409aeb;
case 0x409aef:c.instructions+=7;goto B409aef;
case 0x409af1:c.instructions+=6;goto B409af1;
case 0x409af3:c.instructions+=5;goto B409af3;
case 0x409af5:c.instructions+=4;goto B409af5;
case 0x409af9:c.instructions+=3;goto B409af9;
case 0x409afa:c.instructions+=2;goto B409afa;
case 0x409afc:c.instructions+=1;goto B409afc;
case 0x409b01:goto L409b01;
case 0x409b04:c.instructions+=2;goto B409b04;
case 0x409b06:c.instructions+=1;goto B409b06;
case 0x409b08:goto L409b08;
case 0x409b0c:c.instructions+=3;goto B409b0c;
case 0x409b0e:c.instructions+=2;goto B409b0e;
case 0x409b14:c.instructions+=1;goto B409b14;
case 0x409b16:goto L409b16;
case 0x409b1b:c.instructions+=3;goto B409b1b;
case 0x409b1d:c.instructions+=2;goto B409b1d;
case 0x409b1f:c.instructions+=1;goto B409b1f;
case 0x409b21:goto L409b21;
case 0x409b23:c.instructions+=1;goto B409b23;
case 0x409b24:goto L409b24;
case 0x409b29:c.instructions+=4;goto B409b29;
case 0x409b2c:c.instructions+=3;goto B409b2c;
case 0x409b2e:c.instructions+=2;goto B409b2e;
case 0x409b30:c.instructions+=1;goto B409b30;
case 0x409b32:goto L409b32;
case 0x409b34:goto L409b34;
case 0x409b39:c.instructions+=4;goto B409b39;
case 0x409b3a:c.instructions+=3;goto B409b3a;
case 0x409b40:c.instructions+=2;goto B409b40;
case 0x409b42:c.instructions+=1;goto B409b42;
case 0x409b44:goto L409b44;
case 0x409b45:goto L409b45;
case 0x409b46:c.instructions+=3;goto B409b46;
case 0x409b47:c.instructions+=2;goto B409b47;
case 0x409b48:c.instructions+=1;goto B409b48;
case 0x409b50:goto L409b50;
case 0x409b52:c.instructions+=17;goto B409b52;
case 0x409b57:c.instructions+=16;goto B409b57;
case 0x409b5d:c.instructions+=15;goto B409b5d;
case 0x409b5e:c.instructions+=14;goto B409b5e;
case 0x409b65:c.instructions+=13;goto B409b65;
case 0x409b68:c.instructions+=12;goto B409b68;
case 0x409b6c:c.instructions+=11;goto B409b6c;
case 0x409b6d:c.instructions+=10;goto B409b6d;
case 0x409b6e:c.instructions+=9;goto B409b6e;
case 0x409b6f:c.instructions+=8;goto B409b6f;
case 0x409b70:c.instructions+=7;goto B409b70;
case 0x409b72:c.instructions+=6;goto B409b72;
case 0x409b77:c.instructions+=5;goto B409b77;
case 0x409b78:c.instructions+=4;goto B409b78;
case 0x409b7b:c.instructions+=3;goto B409b7b;
case 0x409b7f:c.instructions+=2;goto B409b7f;
case 0x409b86:c.instructions+=1;goto B409b86;
case 0x409b8b:goto L409b8b;
case 0x409b8f:c.instructions+=10;goto B409b8f;
case 0x409b95:c.instructions+=9;goto B409b95;
case 0x409b9a:c.instructions+=8;goto B409b9a;
case 0x409b9c:c.instructions+=7;goto B409b9c;
case 0x409ba0:c.instructions+=6;goto B409ba0;
case 0x409ba3:c.instructions+=5;goto B409ba3;
case 0x409ba6:c.instructions+=4;goto B409ba6;
case 0x409ba9:c.instructions+=3;goto B409ba9;
case 0x409bac:c.instructions+=2;goto B409bac;
case 0x409baf:c.instructions+=1;goto B409baf;
case 0x409bb7:goto L409bb7;
case 0x409bb9:c.instructions+=1;goto B409bb9;
case 0x409bbe:goto L409bbe;
case 0x409bc1:c.instructions+=4;goto B409bc1;
case 0x409bc5:c.instructions+=3;goto B409bc5;
case 0x409bc7:c.instructions+=2;goto B409bc7;
case 0x409bcc:c.instructions+=1;goto B409bcc;
case 0x409bce:goto L409bce;
case 0x409bd2:c.instructions+=4;goto B409bd2;
case 0x409bd7:c.instructions+=3;goto B409bd7;
case 0x409bd8:c.instructions+=2;goto B409bd8;
case 0x409bda:c.instructions+=1;goto B409bda;
case 0x409bdf:goto L409bdf;
case 0x409be1:goto L409be1;
case 0x409be3:goto L409be3;
case 0x409be9:c.instructions+=20;goto B409be9;
case 0x409bef:c.instructions+=19;goto B409bef;
case 0x409bf2:c.instructions+=18;goto B409bf2;
case 0x409bf7:c.instructions+=17;goto B409bf7;
case 0x409bf9:c.instructions+=16;goto B409bf9;
case 0x409bfe:c.instructions+=15;goto B409bfe;
case 0x409c01:c.instructions+=14;goto B409c01;
case 0x409c07:c.instructions+=13;goto B409c07;
case 0x409c0a:c.instructions+=12;goto B409c0a;
case 0x409c10:c.instructions+=11;goto B409c10;
case 0x409c12:c.instructions+=10;goto B409c12;
case 0x409c16:c.instructions+=9;goto B409c16;
case 0x409c19:c.instructions+=8;goto B409c19;
case 0x409c1c:c.instructions+=7;goto B409c1c;
case 0x409c1f:c.instructions+=6;goto B409c1f;
case 0x409c22:c.instructions+=5;goto B409c22;
case 0x409c25:c.instructions+=4;goto B409c25;
case 0x409c26:c.instructions+=3;goto B409c26;
case 0x409c2a:c.instructions+=2;goto B409c2a;
case 0x409c2e:c.instructions+=1;goto B409c2e;
case 0x409c30:goto L409c30;
case 0x409c34:c.instructions+=9;goto B409c34;
case 0x409c35:c.instructions+=8;goto B409c35;
case 0x409c38:c.instructions+=7;goto B409c38;
case 0x409c39:c.instructions+=6;goto B409c39;
case 0x409c3b:c.instructions+=5;goto B409c3b;
case 0x409c3c:c.instructions+=4;goto B409c3c;
case 0x409c3d:c.instructions+=3;goto B409c3d;
case 0x409c44:c.instructions+=2;goto B409c44;
case 0x409c47:c.instructions+=1;goto B409c47;
case 0x409c50:goto L409c50;
case 0x409c52:c.instructions+=14;goto B409c52;
case 0x409c57:c.instructions+=13;goto B409c57;
case 0x409c5d:c.instructions+=12;goto B409c5d;
case 0x409c5e:c.instructions+=11;goto B409c5e;
case 0x409c65:c.instructions+=10;goto B409c65;
case 0x409c66:c.instructions+=9;goto B409c66;
case 0x409c67:c.instructions+=8;goto B409c67;
case 0x409c69:c.instructions+=7;goto B409c69;
case 0x409c6a:c.instructions+=6;goto B409c6a;
case 0x409c6b:c.instructions+=5;goto B409c6b;
case 0x409c6f:c.instructions+=4;goto B409c6f;
case 0x409c75:c.instructions+=3;goto B409c75;
case 0x409c7d:c.instructions+=2;goto B409c7d;
case 0x409c80:c.instructions+=1;goto B409c80;
case 0x409c85:goto L409c85;
case 0x409c87:c.instructions+=2;goto B409c87;
case 0x409c89:c.instructions+=1;goto B409c89;
case 0x409c8b:goto L409c8b;
case 0x409c8d:c.instructions+=2;goto B409c8d;
case 0x409c8f:c.instructions+=1;goto B409c8f;
case 0x409c91:goto L409c91;
case 0x409c94:c.instructions+=2;goto B409c94;
case 0x409c95:c.instructions+=1;goto B409c95;
case 0x409c97:goto L409c97;
case 0x409c9a:c.instructions+=2;goto B409c9a;
case 0x409ca2:c.instructions+=1;goto B409ca2;
case 0x409ca7:goto L409ca7;
case 0x409cab:c.instructions+=6;goto B409cab;
case 0x409cac:c.instructions+=5;goto B409cac;
case 0x409cad:c.instructions+=4;goto B409cad;
case 0x409cae:c.instructions+=3;goto B409cae;
case 0x409cb5:c.instructions+=2;goto B409cb5;
case 0x409cb8:c.instructions+=1;goto B409cb8;
case 0x409cc0:goto L409cc0;
case 0x409cc1:c.instructions+=10;goto B409cc1;
case 0x409cc2:c.instructions+=9;goto B409cc2;
case 0x409cc3:c.instructions+=8;goto B409cc3;
case 0x409cc4:c.instructions+=7;goto B409cc4;
case 0x409cc8:c.instructions+=6;goto B409cc8;
case 0x409cc9:c.instructions+=5;goto B409cc9;
case 0x409cce:c.instructions+=4;goto B409cce;
case 0x409cd0:c.instructions+=3;goto B409cd0;
case 0x409cd2:c.instructions+=2;goto B409cd2;
case 0x409cd4:c.instructions+=1;goto B409cd4;
case 0x409cd9:goto L409cd9;
case 0x409cdb:c.instructions+=6;goto B409cdb;
case 0x409cdd:c.instructions+=5;goto B409cdd;
case 0x409cdf:c.instructions+=4;goto B409cdf;
case 0x409ce2:c.instructions+=3;goto B409ce2;
case 0x409ce3:c.instructions+=2;goto B409ce3;
case 0x409ce5:c.instructions+=1;goto B409ce5;
case 0x409cea:goto L409cea;
case 0x409ced:c.instructions+=3;goto B409ced;
case 0x409cee:c.instructions+=2;goto B409cee;
case 0x409cf0:c.instructions+=1;goto B409cf0;
case 0x409cf5:goto L409cf5;
case 0x409cf8:c.instructions+=3;goto B409cf8;
case 0x409cf9:c.instructions+=2;goto B409cf9;
case 0x409cfb:c.instructions+=1;goto B409cfb;
case 0x409d00:goto L409d00;
case 0x409d03:c.instructions+=3;goto B409d03;
case 0x409d06:c.instructions+=2;goto B409d06;
case 0x409d0e:c.instructions+=1;goto B409d0e;
case 0x409d10:goto L409d10;
case 0x409d18:goto L409d18;
case 0x409d19:c.instructions+=2;goto B409d19;
case 0x409d1b:c.instructions+=1;goto B409d1b;
case 0x409d20:goto L409d20;
case 0x409d23:c.instructions+=3;goto B409d23;
case 0x409d24:c.instructions+=2;goto B409d24;
case 0x409d26:c.instructions+=1;goto B409d26;
case 0x409d2b:goto L409d2b;
case 0x409d2f:c.instructions+=4;goto B409d2f;
case 0x409d32:c.instructions+=3;goto B409d32;
case 0x409d33:c.instructions+=2;goto B409d33;
case 0x409d37:c.instructions+=1;goto B409d37;
case 0x409d39:goto L409d39;
case 0x409d3c:c.instructions+=3;goto B409d3c;
case 0x409d3d:c.instructions+=2;goto B409d3d;
case 0x409d3f:c.instructions+=1;goto B409d3f;
case 0x409d44:goto L409d44;
case 0x409d45:c.instructions+=2;goto B409d45;
case 0x409d47:c.instructions+=1;goto B409d47;
case 0x409d4c:goto L409d4c;
case 0x409d4f:c.instructions+=3;goto B409d4f;
case 0x409d50:c.instructions+=2;goto B409d50;
case 0x409d52:c.instructions+=1;goto B409d52;
case 0x409d57:goto L409d57;
case 0x409d5a:c.instructions+=2;goto B409d5a;
case 0x409d5b:c.instructions+=1;goto B409d5b;
case 0x409d60:goto L409d60;
case 0x409d64:c.instructions+=4;goto B409d64;
case 0x409d67:c.instructions+=3;goto B409d67;
case 0x409d68:c.instructions+=2;goto B409d68;
case 0x409d6c:c.instructions+=1;goto B409d6c;
case 0x409d6e:goto L409d6e;
case 0x409d71:c.instructions+=3;goto B409d71;
case 0x409d72:c.instructions+=2;goto B409d72;
case 0x409d74:c.instructions+=1;goto B409d74;
case 0x409d79:goto L409d79;
case 0x409d7a:c.instructions+=2;goto B409d7a;
case 0x409d7d:c.instructions+=1;goto B409d7d;
case 0x409d82:goto L409d82;
case 0x409d84:c.instructions+=1;goto B409d84;
case 0x409d89:goto L409d89;
case 0x409d8a:c.instructions+=5;goto B409d8a;
case 0x409d8b:c.instructions+=4;goto B409d8b;
case 0x409d8c:c.instructions+=3;goto B409d8c;
case 0x409d8d:c.instructions+=2;goto B409d8d;
case 0x409d8e:c.instructions+=1;goto B409d8e;
case 0x409da0:goto L409da0;
case 0x409da3:c.instructions+=12;goto B409da3;
case 0x409da4:c.instructions+=11;goto B409da4;
case 0x409da6:c.instructions+=10;goto B409da6;
case 0x409da9:c.instructions+=9;goto B409da9;
case 0x409dac:c.instructions+=8;goto B409dac;
case 0x409daf:c.instructions+=7;goto B409daf;
case 0x409db3:c.instructions+=6;goto B409db3;
case 0x409db5:c.instructions+=5;goto B409db5;
case 0x409db9:c.instructions+=4;goto B409db9;
case 0x409dbb:c.instructions+=3;goto B409dbb;
case 0x409dbd:c.instructions+=2;goto B409dbd;
case 0x409dc1:c.instructions+=1;goto B409dc1;
case 0x409dc4:goto L409dc4;
case 0x409dc8:c.instructions+=3;goto B409dc8;
case 0x409dca:c.instructions+=2;goto B409dca;
case 0x409dcd:c.instructions+=1;goto B409dcd;
case 0x409dcf:goto L409dcf;
case 0x409dd1:c.instructions+=1;goto B409dd1;
case 0x409dd5:goto L409dd5;
case 0x409dd9:c.instructions+=4;goto B409dd9;
case 0x409ddb:c.instructions+=3;goto B409ddb;
case 0x409ddd:c.instructions+=2;goto B409ddd;
case 0x409de0:c.instructions+=1;goto B409de0;
case 0x409de2:goto L409de2;
case 0x409de6:c.instructions+=3;goto B409de6;
case 0x409de8:c.instructions+=2;goto B409de8;
case 0x409dec:c.instructions+=1;goto B409dec;
case 0x409dee:goto L409dee;
case 0x409df2:goto L409df2;
case 0x409df5:c.instructions+=9;goto B409df5;
case 0x409df8:c.instructions+=8;goto B409df8;
case 0x409dfb:c.instructions+=7;goto B409dfb;
case 0x409dff:c.instructions+=6;goto B409dff;
case 0x409e01:c.instructions+=5;goto B409e01;
case 0x409e05:c.instructions+=4;goto B409e05;
case 0x409e07:c.instructions+=3;goto B409e07;
case 0x409e09:c.instructions+=2;goto B409e09;
case 0x409e0d:c.instructions+=1;goto B409e0d;
case 0x409e10:goto L409e10;
case 0x409e14:c.instructions+=3;goto B409e14;
case 0x409e16:c.instructions+=2;goto B409e16;
case 0x409e19:c.instructions+=1;goto B409e19;
case 0x409e1b:goto L409e1b;
case 0x409e1d:c.instructions+=1;goto B409e1d;
case 0x409e21:goto L409e21;
case 0x409e25:c.instructions+=4;goto B409e25;
case 0x409e27:c.instructions+=3;goto B409e27;
case 0x409e29:c.instructions+=2;goto B409e29;
case 0x409e2c:c.instructions+=1;goto B409e2c;
case 0x409e2e:goto L409e2e;
case 0x409e32:c.instructions+=3;goto B409e32;
case 0x409e34:c.instructions+=2;goto B409e34;
case 0x409e38:c.instructions+=1;goto B409e38;
case 0x409e3a:goto L409e3a;
case 0x409e3e:goto L409e3e;
case 0x409e41:c.instructions+=9;goto B409e41;
case 0x409e44:c.instructions+=8;goto B409e44;
case 0x409e47:c.instructions+=7;goto B409e47;
case 0x409e4b:c.instructions+=6;goto B409e4b;
case 0x409e4f:c.instructions+=5;goto B409e4f;
case 0x409e51:c.instructions+=4;goto B409e51;
case 0x409e53:c.instructions+=3;goto B409e53;
case 0x409e55:c.instructions+=2;goto B409e55;
case 0x409e59:c.instructions+=1;goto B409e59;
case 0x409e5c:goto L409e5c;
case 0x409e60:c.instructions+=4;goto B409e60;
case 0x409e61:c.instructions+=3;goto B409e61;
case 0x409e63:c.instructions+=2;goto B409e63;
case 0x409e66:c.instructions+=1;goto B409e66;
case 0x409e68:goto L409e68;
case 0x409e6a:c.instructions+=1;goto B409e6a;
case 0x409e6e:goto L409e6e;
case 0x409e72:c.instructions+=4;goto B409e72;
case 0x409e74:c.instructions+=3;goto B409e74;
case 0x409e76:c.instructions+=2;goto B409e76;
case 0x409e79:c.instructions+=1;goto B409e79;
case 0x409e7b:goto L409e7b;
case 0x409e7d:c.instructions+=1;goto B409e7d;
case 0x409e81:goto L409e81;
case 0x409e85:c.instructions+=8;goto B409e85;
case 0x409e89:c.instructions+=7;goto B409e89;
case 0x409e8d:c.instructions+=6;goto B409e8d;
case 0x409e8f:c.instructions+=5;goto B409e8f;
case 0x409e93:c.instructions+=4;goto B409e93;
case 0x409e97:c.instructions+=3;goto B409e97;
case 0x409e99:c.instructions+=2;goto B409e99;
case 0x409e9c:c.instructions+=1;goto B409e9c;
case 0x409ea0:goto L409ea0;
case 0x409ea1:c.instructions+=8;goto B409ea1;
case 0x409ea7:c.instructions+=7;goto B409ea7;
case 0x409eab:c.instructions+=6;goto B409eab;
case 0x409eaf:c.instructions+=5;goto B409eaf;
case 0x409eb1:c.instructions+=4;goto B409eb1;
case 0x409eb7:c.instructions+=3;goto B409eb7;
case 0x409eb9:c.instructions+=2;goto B409eb9;
case 0x409ebc:c.instructions+=1;goto B409ebc;
case 0x409ebe:goto L409ebe;
case 0x409ec4:c.instructions+=8;goto B409ec4;
case 0x409ec6:c.instructions+=7;goto B409ec6;
case 0x409eca:c.instructions+=6;goto B409eca;
case 0x409ece:c.instructions+=5;goto B409ece;
case 0x409ed2:c.instructions+=4;goto B409ed2;
case 0x409ed4:c.instructions+=3;goto B409ed4;
case 0x409ed6:c.instructions+=2;goto B409ed6;
case 0x409ed9:c.instructions+=1;goto B409ed9;
case 0x409edb:goto L409edb;
case 0x409edd:c.instructions+=1;goto B409edd;
case 0x409ee1:goto L409ee1;
case 0x409ee7:c.instructions+=4;goto B409ee7;
case 0x409ee9:c.instructions+=3;goto B409ee9;
case 0x409eeb:c.instructions+=2;goto B409eeb;
case 0x409eee:c.instructions+=1;goto B409eee;
case 0x409ef0:goto L409ef0;
case 0x409ef2:c.instructions+=3;goto B409ef2;
case 0x409ef8:c.instructions+=2;goto B409ef8;
case 0x409ef9:c.instructions+=1;goto B409ef9;
case 0x409efc:goto L409efc;
case 0x409f00:c.instructions+=5;goto B409f00;
case 0x409f02:c.instructions+=4;goto B409f02;
case 0x409f08:c.instructions+=3;goto B409f08;
case 0x409f0a:c.instructions+=2;goto B409f0a;
case 0x409f0d:c.instructions+=1;goto B409f0d;
case 0x409f0f:goto L409f0f;
case 0x409f15:c.instructions+=2;goto B409f15;
case 0x409f16:c.instructions+=1;goto B409f16;
case 0x409f19:goto L409f19;
case 0x409f1d:c.instructions+=4;goto B409f1d;
case 0x409f23:c.instructions+=3;goto B409f23;
case 0x409f25:c.instructions+=2;goto B409f25;
case 0x409f28:c.instructions+=1;goto B409f28;
case 0x409f2a:goto L409f2a;
case 0x409f30:c.instructions+=2;goto B409f30;
case 0x409f31:c.instructions+=1;goto B409f31;
case 0x409f34:goto L409f34;
case 0x409f3a:goto L409f3a;
case 0x409f3b:c.instructions+=1;goto B409f3b;
case 0x409f40:goto L409f40;
case 0x409f44:c.instructions+=4;goto B409f44;
case 0x409f4a:c.instructions+=3;goto B409f4a;
case 0x409f4c:c.instructions+=2;goto B409f4c;
case 0x409f4f:c.instructions+=1;goto B409f4f;
case 0x409f51:goto L409f51;
case 0x409f57:c.instructions+=1;goto B409f57;
case 0x409f5a:goto L409f5a;
case 0x409f5e:c.instructions+=4;goto B409f5e;
case 0x409f64:c.instructions+=3;goto B409f64;
case 0x409f66:c.instructions+=2;goto B409f66;
case 0x409f69:c.instructions+=1;goto B409f69;
case 0x409f6b:goto L409f6b;
case 0x409f71:c.instructions+=1;goto B409f71;
case 0x409f74:goto L409f74;
case 0x409f7a:c.instructions+=1;goto B409f7a;
case 0x409f80:goto L409f80;
case 0x409f82:c.instructions+=14;goto B409f82;
case 0x409f87:c.instructions+=13;goto B409f87;
case 0x409f8d:c.instructions+=12;goto B409f8d;
case 0x409f8e:c.instructions+=11;goto B409f8e;
case 0x409f95:c.instructions+=10;goto B409f95;
case 0x409f96:c.instructions+=9;goto B409f96;
case 0x409f9a:c.instructions+=8;goto B409f9a;
case 0x409f9b:c.instructions+=7;goto B409f9b;
case 0x409f9d:c.instructions+=6;goto B409f9d;
case 0x409fa1:c.instructions+=5;goto B409fa1;
case 0x409fa2:c.instructions+=4;goto B409fa2;
case 0x409fa3:c.instructions+=3;goto B409fa3;
case 0x409fa5:c.instructions+=2;goto B409fa5;
case 0x409fa9:c.instructions+=1;goto B409fa9;
case 0x409fae:goto L409fae;
case 0x409fb2:c.instructions+=8;goto B409fb2;
case 0x409fb6:c.instructions+=7;goto B409fb6;
case 0x409fbb:c.instructions+=6;goto B409fbb;
case 0x409fbc:c.instructions+=5;goto B409fbc;
case 0x409fbd:c.instructions+=4;goto B409fbd;
case 0x409fc3:c.instructions+=3;goto B409fc3;
case 0x409fcb:c.instructions+=2;goto B409fcb;
case 0x409fd1:c.instructions+=1;goto B409fd1;
case 0x409fd6:goto L409fd6;
case 0x409fda:c.instructions+=5;goto B409fda;
case 0x409fdc:c.instructions+=4;goto B409fdc;
case 0x409fdd:c.instructions+=3;goto B409fdd;
case 0x409fe4:c.instructions+=2;goto B409fe4;
case 0x409fe7:c.instructions+=1;goto B409fe7;
case 0x409ff0:goto L409ff0;
case 0x409ff1:c.instructions+=6;goto B409ff1;
case 0x409ff5:c.instructions+=5;goto B409ff5;
case 0x409ff6:c.instructions+=4;goto B409ff6;
case 0x409ffb:c.instructions+=3;goto B409ffb;
case 0x409ffd:c.instructions+=2;goto B409ffd;
case 0x409fff:c.instructions+=1;goto B409fff;
default:missing_instruction(c.pc);}
B409000:L409000:{c.instructions+=3;NFSU2_TR(0x409000);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B409002:{NFSU2_TR(0x409002);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B409005:{NFSU2_TR(0x409005);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L409015;}}
}
B409007:L409007:{c.instructions+=5;NFSU2_TR(0x409007);
__builtin_memmove((R+4),(R+12),1);
}
B409009:{NFSU2_TR(0x409009);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40900b:{NFSU2_TR(0x40900b);
w1(R+4,u8(u32(r1(R+4))+u32(u8(0x33ull))));
}
B40900e:{NFSU2_TR(0x40900e);
u8 U[13];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),1);
s1(u32(r4(U+8)),r1(U+12));
}
B409012:{NFSU2_TR(0x409012);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B409015:L409015:{c.instructions+=3;NFSU2_TR(0x409015);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B409018:{NFSU2_TR(0x409018);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40901a:{NFSU2_TR(0x40901a);
if(r1(R+518)){{goto L409038;}}
}
B40901c:L40901c:{c.instructions+=2;NFSU2_TR(0x40901c);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B40901f:{NFSU2_TR(0x40901f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L409038;}}
}
B409021:L409021:{c.instructions+=4;NFSU2_TR(0x409021);
{u32 ea_=u32(r4(R+8)+u32(32u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B409024:{NFSU2_TR(0x409024);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B409026:{NFSU2_TR(0x409026);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B409029:{NFSU2_TR(0x409029);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L409038;}}
}
B40902b:L40902b:{c.instructions+=5;NFSU2_TR(0x40902b);
__builtin_memmove((R+0),(R+12),1);
}
B40902d:{NFSU2_TR(0x40902d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40902f:{NFSU2_TR(0x40902f);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x34ull))));
}
B409031:{NFSU2_TR(0x409031);
u8 U[13];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),1);
s1(u32(r4(U+8)),r1(U+12));
}
B409035:{NFSU2_TR(0x409035);
{u32 ea_=u32(r4(R+8)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B409038:L409038:{c.instructions+=3;NFSU2_TR(0x409038);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B40903b:{NFSU2_TR(0x40903b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40903d:{NFSU2_TR(0x40903d);
if(r1(R+518)){{goto L40905c;}}
}
B40903f:L40903f:{c.instructions+=2;NFSU2_TR(0x40903f);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B409042:{NFSU2_TR(0x409042);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40905c;}}
}
B409044:L409044:{c.instructions+=4;NFSU2_TR(0x409044);
{u32 ea_=u32(r4(R+8)+u32(48u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B409047:{NFSU2_TR(0x409047);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B409049:{NFSU2_TR(0x409049);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40904c:{NFSU2_TR(0x40904c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40905c;}}
}
B40904e:L40904e:{c.instructions+=5;NFSU2_TR(0x40904e);
__builtin_memmove((R+4),(R+12),1);
}
B409050:{NFSU2_TR(0x409050);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B409052:{NFSU2_TR(0x409052);
w1(R+4,u8(u32(r1(R+4))+u32(u8(0x35ull))));
}
B409055:{NFSU2_TR(0x409055);
u8 U[13];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),1);
s1(u32(r4(U+8)),r1(U+12));
}
B409059:{NFSU2_TR(0x409059);
{u32 ea_=u32(r4(R+8)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40905c:L40905c:{c.instructions+=3;NFSU2_TR(0x40905c);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B40905f:{NFSU2_TR(0x40905f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B409061:{NFSU2_TR(0x409061);
if(r1(R+518)){{goto L40907f;}}
}
B409063:L409063:{c.instructions+=2;NFSU2_TR(0x409063);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B409066:{NFSU2_TR(0x409066);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40907f;}}
}
B409068:L409068:{c.instructions+=4;NFSU2_TR(0x409068);
{u32 ea_=u32(r4(R+8)+u32(64u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B40906b:{NFSU2_TR(0x40906b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40906d:{NFSU2_TR(0x40906d);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B409070:{NFSU2_TR(0x409070);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40907f;}}
}
B409072:L409072:{c.instructions+=5;NFSU2_TR(0x409072);
__builtin_memmove((R+0),(R+12),1);
}
B409074:{NFSU2_TR(0x409074);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B409076:{NFSU2_TR(0x409076);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x36ull))));
}
B409078:{NFSU2_TR(0x409078);
u8 U[13];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),1);
s1(u32(r4(U+8)),r1(U+12));
}
B40907c:{NFSU2_TR(0x40907c);
{u32 ea_=u32(r4(R+8)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40907f:L40907f:{c.instructions+=3;NFSU2_TR(0x40907f);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B409082:{NFSU2_TR(0x409082);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B409084:{NFSU2_TR(0x409084);
if(r1(R+518)){{goto L4090a3;}}
}
B409086:L409086:{c.instructions+=2;NFSU2_TR(0x409086);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B409089:{NFSU2_TR(0x409089);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4090a3;}}
}
B40908b:L40908b:{c.instructions+=4;NFSU2_TR(0x40908b);
{u32 ea_=u32(r4(R+8)+u32(80u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B40908e:{NFSU2_TR(0x40908e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B409090:{NFSU2_TR(0x409090);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B409093:{NFSU2_TR(0x409093);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4090a3;}}
}
B409095:L409095:{c.instructions+=5;NFSU2_TR(0x409095);
__builtin_memmove((R+4),(R+12),1);
}
B409097:{NFSU2_TR(0x409097);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B409099:{NFSU2_TR(0x409099);
w1(R+4,u8(u32(r1(R+4))+u32(u8(0x37ull))));
}
B40909c:{NFSU2_TR(0x40909c);
u8 U[13];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),1);
s1(u32(r4(U+8)),r1(U+12));
}
B4090a0:{NFSU2_TR(0x4090a0);
{u32 ea_=u32(r4(R+8)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4090a3:L4090a3:{c.instructions+=3;NFSU2_TR(0x4090a3);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4090a6:{NFSU2_TR(0x4090a6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4090a8:{NFSU2_TR(0x4090a8);
if(r1(R+518)){{goto L4090c6;}}
}
B4090aa:L4090aa:{c.instructions+=2;NFSU2_TR(0x4090aa);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4090ad:{NFSU2_TR(0x4090ad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4090c6;}}
}
B4090af:L4090af:{c.instructions+=4;NFSU2_TR(0x4090af);
{u32 ea_=u32(r4(R+8)+u32(96u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4090b2:{NFSU2_TR(0x4090b2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4090b4:{NFSU2_TR(0x4090b4);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4090b7:{NFSU2_TR(0x4090b7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4090c6;}}
}
B4090b9:L4090b9:{c.instructions+=5;NFSU2_TR(0x4090b9);
__builtin_memmove((R+0),(R+12),1);
}
B4090bb:{NFSU2_TR(0x4090bb);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4090bd:{NFSU2_TR(0x4090bd);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x38ull))));
}
B4090bf:{NFSU2_TR(0x4090bf);
u8 U[13];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),1);
s1(u32(r4(U+8)),r1(U+12));
}
B4090c3:{NFSU2_TR(0x4090c3);
{u32 ea_=u32(r4(R+8)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4090c6:L4090c6:{c.instructions+=3;NFSU2_TR(0x4090c6);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4090c9:{NFSU2_TR(0x4090c9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4090cb:{NFSU2_TR(0x4090cb);
if(r1(R+518)){{goto L4090ea;}}
}
B4090cd:L4090cd:{c.instructions+=2;NFSU2_TR(0x4090cd);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4090d0:{NFSU2_TR(0x4090d0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4090ea;}}
}
B4090d2:L4090d2:{c.instructions+=4;NFSU2_TR(0x4090d2);
{u32 ea_=u32(r4(R+8)+u32(112u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4090d5:{NFSU2_TR(0x4090d5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4090d7:{NFSU2_TR(0x4090d7);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4090da:{NFSU2_TR(0x4090da);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4090ea;}}
}
B4090dc:L4090dc:{c.instructions+=5;NFSU2_TR(0x4090dc);
__builtin_memmove((R+4),(R+12),1);
}
B4090de:{NFSU2_TR(0x4090de);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4090e0:{NFSU2_TR(0x4090e0);
w1(R+4,u8(u32(r1(R+4))+u32(u8(0x39ull))));
}
B4090e3:{NFSU2_TR(0x4090e3);
u8 U[13];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),1);
s1(u32(r4(U+8)),r1(U+12));
}
B4090e7:{NFSU2_TR(0x4090e7);
{u32 ea_=u32(r4(R+8)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4090ea:L4090ea:{c.instructions+=4;NFSU2_TR(0x4090ea);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x8ull))));
}
B4090ed:{NFSU2_TR(0x4090ed);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x80ull))));
}
B4090f3:{NFSU2_TR(0x4090f3);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(R+512,u8((r4(U+6))<(u32(0x10ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x10ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4090f6:{NFSU2_TR(0x4090f6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x408fd0u,408);}
}
B4090fc:L4090fc:{c.instructions+=5;NFSU2_TR(0x4090fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4090fd:{NFSU2_TR(0x4090fd);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4090ff:{NFSU2_TR(0x4090ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B409100:{NFSU2_TR(0x409100);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B409101:{NFSU2_TR(0x409101);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B409110:L409110:{c.instructions+=7;NFSU2_TR(0x409110);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409111:{NFSU2_TR(0x409111);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409112:{NFSU2_TR(0x409112);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409113:{NFSU2_TR(0x409113);
__builtin_memmove((R+28),(R+4),4);
}
B409115:{NFSU2_TR(0x409115);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B409118:{NFSU2_TR(0x409118);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B40911b:{NFSU2_TR(0x40911b);
if(r1(R+518)){{goto L409232;}}
}
B409121:L409121:{c.instructions+=8;NFSU2_TR(0x409121);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409122:{NFSU2_TR(0x409122);
w1(R+4,u8(u32(r1(R+4))^u32(r1(R+4))));
}
B409124:{NFSU2_TR(0x409124);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409125:{NFSU2_TR(0x409125);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B409129:{NFSU2_TR(0x409129);
u8 U[5];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B40912d:{NFSU2_TR(0x40912d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((R+8),(U+0),4);
}
B409130:{NFSU2_TR(0x409130);
w4(R+24,u32(0x2ull));
}
B409135:{NFSU2_TR(0x409135);
w1(R+12,u8(0x1ull));
}
B409137:L409137:{c.instructions+=2;NFSU2_TR(0x409137);
u8 U[7];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+4))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B40913a:{NFSU2_TR(0x40913a);
if(r1(R+518)){{goto L409152;}}
}
B40913c:L40913c:{c.instructions+=5;NFSU2_TR(0x40913c);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40913e:{NFSU2_TR(0x40913e);
{u32 ea_=u32(u32(7879572u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B409144:{NFSU2_TR(0x409144);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B409146:{NFSU2_TR(0x409146);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B409149:{NFSU2_TR(0x409149);
if(r1(R+514)){{goto L409152;}}
}
B40914b:L40914b:{c.instructions+=2;NFSU2_TR(0x40914b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40914e:{NFSU2_TR(0x40914e);
u8 U[13];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),1);
s1(u32(r4(U+8)),r1(U+12));
}
B409152:L409152:{c.instructions+=2;NFSU2_TR(0x409152);
u8 U[7];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+4))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B409155:{NFSU2_TR(0x409155);
if(r1(R+518)){{goto L40916e;}}
}
B409157:L409157:{c.instructions+=5;NFSU2_TR(0x409157);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40915a:{NFSU2_TR(0x40915a);
{u32 ea_=u32(u32(7879572u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B409160:{NFSU2_TR(0x409160);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B409162:{NFSU2_TR(0x409162);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B409165:{NFSU2_TR(0x409165);
if(r1(R+514)){{goto L40916e;}}
}
B409167:L409167:{c.instructions+=2;NFSU2_TR(0x409167);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40916a:{NFSU2_TR(0x40916a);
u8 U[13];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),1);
s1(u32(r4(U+8)),r1(U+12));
}
B40916e:L40916e:{c.instructions+=2;NFSU2_TR(0x40916e);
u8 U[7];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+4))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B409171:{NFSU2_TR(0x409171);
if(r1(R+518)){{goto L40918a;}}
}
B409173:L409173:{c.instructions+=5;NFSU2_TR(0x409173);
{u32 ea_=u32(r4(R+8)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B409176:{NFSU2_TR(0x409176);
{u32 ea_=u32(u32(7879572u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40917c:{NFSU2_TR(0x40917c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40917e:{NFSU2_TR(0x40917e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B409181:{NFSU2_TR(0x409181);
if(r1(R+514)){{goto L40918a;}}
}
B409183:L409183:{c.instructions+=2;NFSU2_TR(0x409183);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B409186:{NFSU2_TR(0x409186);
u8 U[13];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),1);
s1(u32(r4(U+8)),r1(U+12));
}
B40918a:L40918a:{c.instructions+=2;NFSU2_TR(0x40918a);
u8 U[7];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+4))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B40918d:{NFSU2_TR(0x40918d);
if(r1(R+518)){{goto L4091a6;}}
}
B40918f:L40918f:{c.instructions+=5;NFSU2_TR(0x40918f);
{u32 ea_=u32(r4(R+8)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B409192:{NFSU2_TR(0x409192);
{u32 ea_=u32(u32(7879572u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B409198:{NFSU2_TR(0x409198);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40919a:{NFSU2_TR(0x40919a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40919d:{NFSU2_TR(0x40919d);
if(r1(R+514)){{goto L4091a6;}}
}
B40919f:L40919f:{c.instructions+=2;NFSU2_TR(0x40919f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4091a2:{NFSU2_TR(0x4091a2);
u8 U[13];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),1);
s1(u32(r4(U+8)),r1(U+12));
}
B4091a6:L4091a6:{c.instructions+=2;NFSU2_TR(0x4091a6);
u8 U[7];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+4))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4091a9:{NFSU2_TR(0x4091a9);
if(r1(R+518)){{goto L4091c2;}}
}
B4091ab:L4091ab:{c.instructions+=5;NFSU2_TR(0x4091ab);
{u32 ea_=u32(r4(R+8)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4091ae:{NFSU2_TR(0x4091ae);
{u32 ea_=u32(u32(7879572u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4091b4:{NFSU2_TR(0x4091b4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4091b6:{NFSU2_TR(0x4091b6);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4091b9:{NFSU2_TR(0x4091b9);
if(r1(R+514)){{goto L4091c2;}}
}
B4091bb:L4091bb:{c.instructions+=2;NFSU2_TR(0x4091bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4091be:{NFSU2_TR(0x4091be);
u8 U[13];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),1);
s1(u32(r4(U+8)),r1(U+12));
}
B4091c2:L4091c2:{c.instructions+=2;NFSU2_TR(0x4091c2);
u8 U[7];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+4))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4091c5:{NFSU2_TR(0x4091c5);
if(r1(R+518)){{goto L4091de;}}
}
B4091c7:L4091c7:{c.instructions+=5;NFSU2_TR(0x4091c7);
{u32 ea_=u32(r4(R+8)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4091ca:{NFSU2_TR(0x4091ca);
{u32 ea_=u32(u32(7879572u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4091d0:{NFSU2_TR(0x4091d0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4091d2:{NFSU2_TR(0x4091d2);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4091d5:{NFSU2_TR(0x4091d5);
if(r1(R+514)){{goto L4091de;}}
}
B4091d7:L4091d7:{c.instructions+=2;NFSU2_TR(0x4091d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4091da:{NFSU2_TR(0x4091da);
u8 U[13];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),1);
s1(u32(r4(U+8)),r1(U+12));
}
B4091de:L4091de:{c.instructions+=2;NFSU2_TR(0x4091de);
u8 U[7];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+4))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4091e1:{NFSU2_TR(0x4091e1);
if(r1(R+518)){{goto L4091fa;}}
}
B4091e3:L4091e3:{c.instructions+=5;NFSU2_TR(0x4091e3);
{u32 ea_=u32(r4(R+8)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4091e6:{NFSU2_TR(0x4091e6);
{u32 ea_=u32(u32(7879572u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4091ec:{NFSU2_TR(0x4091ec);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4091ee:{NFSU2_TR(0x4091ee);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4091f1:{NFSU2_TR(0x4091f1);
if(r1(R+514)){{goto L4091fa;}}
}
B4091f3:L4091f3:{c.instructions+=2;NFSU2_TR(0x4091f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4091f6:{NFSU2_TR(0x4091f6);
u8 U[13];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),1);
s1(u32(r4(U+8)),r1(U+12));
}
B4091fa:L4091fa:{c.instructions+=2;NFSU2_TR(0x4091fa);
u8 U[7];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+4))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4091fd:{NFSU2_TR(0x4091fd);
if(r1(R+518)){{goto L409216;}}
}
B4091ff:L4091ff:{c.instructions+=5;NFSU2_TR(0x4091ff);
{u32 ea_=u32(r4(R+8)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B409202:{NFSU2_TR(0x409202);
{u32 ea_=u32(u32(7879572u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B409208:{NFSU2_TR(0x409208);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40920a:{NFSU2_TR(0x40920a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40920d:{NFSU2_TR(0x40920d);
if(r1(R+514)){{goto L409216;}}
}
B40920f:L40920f:{c.instructions+=2;NFSU2_TR(0x40920f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B409212:{NFSU2_TR(0x409212);
u8 U[13];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),1);
s1(u32(r4(U+8)),r1(U+12));
}
B409216:L409216:{c.instructions+=3;NFSU2_TR(0x409216);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x80ull))));
}
B40921c:{NFSU2_TR(0x40921c);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B40921d:{NFSU2_TR(0x40921d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x409137u);}goto L409137;}}
}
B409223:L409223:{c.instructions+=4;NFSU2_TR(0x409223);
u8 U[18];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((U+16),(U+12),1);
w1(R+512,u8((r1(U+16))<(r1(R+4))));
w1(R+523,sborrow<u8>(r1(U+16),r1(R+4)));
w1(U+17,u8(u32(r1(U+16))-u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+17))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+17))==(u8(0x0ull))));
w1(U+13,u8(u32(r1(U+17))&u32(u8(0xffull))));
w1(U+14,u8(__builtin_popcountll(u64(r1(U+13)))));
w1(U+15,u8(u32(r1(U+14))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+15))==(u8(0x0ull))));
}
B409227:{NFSU2_TR(0x409227);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B409228:{NFSU2_TR(0x409228);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B409229:{NFSU2_TR(0x409229);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L409232;}}
}
B40922b:L40922b:{c.instructions+=1;NFSU2_TR(0x40922b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B409232:L409232:{c.instructions+=4;NFSU2_TR(0x409232);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B409233:{NFSU2_TR(0x409233);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B409234:{NFSU2_TR(0x409234);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B409235:{NFSU2_TR(0x409235);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B409240:L409240:{c.instructions+=10;NFSU2_TR(0x409240);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409241:{NFSU2_TR(0x409241);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B409245:{NFSU2_TR(0x409245);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409246:{NFSU2_TR(0x409246);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B40924a:{NFSU2_TR(0x40924a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B40924d:{NFSU2_TR(0x40924d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40924f:{NFSU2_TR(0x40924f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409250:{NFSU2_TR(0x409250);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+28),(U+0),4);
}
B409252:{NFSU2_TR(0x409252);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B40925a:{NFSU2_TR(0x40925a);
if(r1(R+518)){{goto L409266;}}
}
B40925c:L40925c:{c.instructions+=2;NFSU2_TR(0x40925c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40925e:{NFSU2_TR(0x40925e);
if(r1(R+518)){{goto L409266;}}
}
B409260:L409260:{c.instructions+=2;NFSU2_TR(0x409260);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B409262:{NFSU2_TR(0x409262);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B409266:L409266:{c.instructions+=7;NFSU2_TR(0x409266);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409268:{NFSU2_TR(0x409268);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40926a:{NFSU2_TR(0x40926a);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40926c:{NFSU2_TR(0x40926c);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B409270:{NFSU2_TR(0x409270);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409271:{NFSU2_TR(0x409271);
__builtin_memmove((R+4),(R+24),4);
}
B409273:{NFSU2_TR(0x409273);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x409278ull));
TAIL_STATIC(0x571640u,571);
}
B409278:L409278:{c.instructions+=3;NFSU2_TR(0x409278);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B40927b:{NFSU2_TR(0x40927b);
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
B40927d:{NFSU2_TR(0x40927d);
if(r1(R+518)){{goto L4092bb;}}
}
B40927f:L40927f:{c.instructions+=4;NFSU2_TR(0x40927f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B409283:{NFSU2_TR(0x409283);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B409285:{NFSU2_TR(0x409285);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B409288:{NFSU2_TR(0x409288);
if(r1(R+518)){{goto L4092af;}}
}
B40928a:L40928a:{c.instructions+=4;NFSU2_TR(0x40928a);
__builtin_memmove((R+8),gp(0x883dc8),4);
}
B409290:{NFSU2_TR(0x409290);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B409292:{NFSU2_TR(0x409292);
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
B409294:{NFSU2_TR(0x409294);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4092af;}}
}
B409296:L409296:{c.instructions+=2;NFSU2_TR(0x409296);
__builtin_memmove((R+4),gp(0x883dc4),4);
}
B40929c:{NFSU2_TR(0x40929c);
__builtin_memmove((R+16),(R+16),4);
}
B4092a0:L4092a0:{c.instructions+=2;NFSU2_TR(0x4092a0);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
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
B4092a2:{NFSU2_TR(0x4092a2);
if(r1(R+518)){{goto L4092b5;}}
}
B4092a4:L4092a4:{c.instructions+=4;NFSU2_TR(0x4092a4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4092a5:{NFSU2_TR(0x4092a5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x108ull))));
}
B4092ab:{NFSU2_TR(0x4092ab);
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
B4092ad:{NFSU2_TR(0x4092ad);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4092a0u);}goto L4092a0;}}
}
B4092af:L4092af:{c.instructions+=5;NFSU2_TR(0x4092af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4092b0:{NFSU2_TR(0x4092b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+12)),r4(U+0));
}
B4092b2:{NFSU2_TR(0x4092b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4092b3:{NFSU2_TR(0x4092b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4092b4:{NFSU2_TR(0x4092b4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4092b5:L4092b5:{c.instructions+=5;NFSU2_TR(0x4092b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4092b6:{NFSU2_TR(0x4092b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4092b7:{NFSU2_TR(0x4092b7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+12)),r4(U+0));
}
B4092b9:{NFSU2_TR(0x4092b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4092ba:{NFSU2_TR(0x4092ba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4092bb:L4092bb:{c.instructions+=5;NFSU2_TR(0x4092bb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+12)),r4(U+0));
}
B4092bd:{NFSU2_TR(0x4092bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4092be:{NFSU2_TR(0x4092be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4092bf:{NFSU2_TR(0x4092bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4092c0:{NFSU2_TR(0x4092c0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4092d0:L4092d0:{c.instructions+=7;NFSU2_TR(0x4092d0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4092d1:{NFSU2_TR(0x4092d1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4092d2:{NFSU2_TR(0x4092d2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4092d3:{NFSU2_TR(0x4092d3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4092d4:{NFSU2_TR(0x4092d4);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4092d7:{NFSU2_TR(0x4092d7);
w4(R+12,u32(0x4ull));
}
B4092dc:{NFSU2_TR(0x4092dc);
__builtin_memmove((R+16),(R+16),4);
}
B4092e0:L4092e0:{c.instructions+=1;NFSU2_TR(0x4092e0);
w4(R+28,u32(0x2ull));
}
B4092e5:L4092e5:{c.instructions+=8;NFSU2_TR(0x4092e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4092e8:{NFSU2_TR(0x4092e8);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4092ec:{NFSU2_TR(0x4092ec);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4092f0:{NFSU2_TR(0x4092f0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4092f1:{NFSU2_TR(0x4092f1);
__builtin_memmove((R+4),gp(0x890080),4);
}
B4092f7:{NFSU2_TR(0x4092f7);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B4092f9:{NFSU2_TR(0x4092f9);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4092fc:{NFSU2_TR(0x4092fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x409301ull));
TAIL_STATIC(0x5ea500u,5ea);
}
B409301:L409301:{c.instructions+=6;NFSU2_TR(0x409301);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B409305:{NFSU2_TR(0x409305);
w1(R+512,carry<u32>(r4(R+24),u32(0x4ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B409308:{NFSU2_TR(0x409308);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B409309:{NFSU2_TR(0x409309);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B40930c:{NFSU2_TR(0x40930c);
{u32 ea_=u32(r4(R+24)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B409312:{NFSU2_TR(0x409312);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4092e5u);}goto L4092e5;}}
}
B409314:L409314:{c.instructions+=2;NFSU2_TR(0x409314);
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
B409315:{NFSU2_TR(0x409315);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4092e0u);}goto L4092e0;}}
}
B409317:L409317:{c.instructions+=5;NFSU2_TR(0x409317);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B409318:{NFSU2_TR(0x409318);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B409319:{NFSU2_TR(0x409319);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B40931a:{NFSU2_TR(0x40931a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40931b:{NFSU2_TR(0x40931b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B409320:L409320:{c.instructions+=3;NFSU2_TR(0x409320);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B409322:{NFSU2_TR(0x409322);
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
B409324:{NFSU2_TR(0x409324);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L40934d;}}
}
B409326:L409326:{c.instructions+=3;NFSU2_TR(0x409326);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B40932d:{NFSU2_TR(0x40932d);
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
B40932f:{NFSU2_TR(0x40932f);
if(r1(R+518)){{goto L40934d;}}
}
B409331:L409331:{c.instructions+=2;NFSU2_TR(0x409331);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B409333:{NFSU2_TR(0x409333);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L409337;}}
}
B409335:L409335:{c.instructions+=1;NFSU2_TR(0x409335);
{goto L409339;}
}
B409337:L409337:{c.instructions+=1;NFSU2_TR(0x409337);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B409339:L409339:{c.instructions+=7;NFSU2_TR(0x409339);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B40933d:{NFSU2_TR(0x40933d);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B40933e:{NFSU2_TR(0x40933e);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B409340:{NFSU2_TR(0x409340);
u8 U[6];
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B409342:{NFSU2_TR(0x409342);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(s64(s32(u32(0x38ull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B409345:{NFSU2_TR(0x409345);
{u32 ea_=u32(r4(R+4)+r4(R+0)+u32(148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40934c:{NFSU2_TR(0x40934c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40934d:L40934d:{c.instructions+=2;NFSU2_TR(0x40934d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B409353:{NFSU2_TR(0x409353);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B409360:L409360:{c.instructions+=4;NFSU2_TR(0x409360);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409361:{NFSU2_TR(0x409361);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B409363:{NFSU2_TR(0x409363);
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
B409365:{NFSU2_TR(0x409365);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4093d0;}}
}
B409367:L409367:{c.instructions+=3;NFSU2_TR(0x409367);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B40936e:{NFSU2_TR(0x40936e);
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
B409370:{NFSU2_TR(0x409370);
if(r1(R+518)){{goto L4093d0;}}
}
B409372:L409372:{c.instructions+=2;NFSU2_TR(0x409372);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B409374:{NFSU2_TR(0x409374);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L409378;}}
}
B409376:L409376:{c.instructions+=1;NFSU2_TR(0x409376);
{goto L40937a;}
}
B409378:L409378:{c.instructions+=1;NFSU2_TR(0x409378);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B40937a:L40937a:{c.instructions+=21;NFSU2_TR(0x40937a);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B40937e:{NFSU2_TR(0x40937e);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B40937f:{NFSU2_TR(0x40937f);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B409381:{NFSU2_TR(0x409381);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B409383:{NFSU2_TR(0x409383);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B409386:{NFSU2_TR(0x409386);
u8 U[14];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+8,u32(r2(U+12)));
}
B40938e:{NFSU2_TR(0x40938e);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B409395:{NFSU2_TR(0x409395);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B409399:{NFSU2_TR(0x409399);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B40939c:{NFSU2_TR(0x40939c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4093a0:{NFSU2_TR(0x4093a0);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B4093a3:{NFSU2_TR(0x4093a3);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4093a7:{NFSU2_TR(0x4093a7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4093ab:{NFSU2_TR(0x4093ab);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4093b1:{NFSU2_TR(0x4093b1);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4093b5:{NFSU2_TR(0x4093b5);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4093bb:{NFSU2_TR(0x4093bb);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4093bf:{NFSU2_TR(0x4093bf);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B4093c1:{NFSU2_TR(0x4093c1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4093c3:{NFSU2_TR(0x4093c3);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4093c6:{NFSU2_TR(0x4093c6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4093d6;}}
}
B4093c8:L4093c8:{c.instructions+=4;NFSU2_TR(0x4093c8);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4093ca:{NFSU2_TR(0x4093ca);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4093ce:{NFSU2_TR(0x4093ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4093cf:{NFSU2_TR(0x4093cf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4093d0:L4093d0:{c.instructions+=1;NFSU2_TR(0x4093d0);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4093d6:L4093d6:{c.instructions+=2;NFSU2_TR(0x4093d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4093d7:{NFSU2_TR(0x4093d7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4093e0:L4093e0:{c.instructions+=5;NFSU2_TR(0x4093e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4093e4:{NFSU2_TR(0x4093e4);
u8 U[14];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((R+8),(U+12),2);
}
B4093e9:{NFSU2_TR(0x4093e9);
u8 U[4];
__builtin_memmove((U+0),(R+8),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B4093ed:{NFSU2_TR(0x4093ed);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4093ee:{NFSU2_TR(0x4093ee);
if(r1(R+518)){{goto L40949a;}}
}
B4093f4:L4093f4:{c.instructions+=10;NFSU2_TR(0x4093f4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4093f5:{NFSU2_TR(0x4093f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4093f9:{NFSU2_TR(0x4093f9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4093fa:{NFSU2_TR(0x4093fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4093fe:{NFSU2_TR(0x4093fe);
u8 U[12];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B409402:{NFSU2_TR(0x409402);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B409405:{NFSU2_TR(0x409405);
u8 U[11];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((U+9),(U+8),1);
w1(U+10,u8(u32(r1(U+9))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+10))==(u8(0x0ull))));
}
B409409:{NFSU2_TR(0x409409);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40940a:{NFSU2_TR(0x40940a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40940b:{NFSU2_TR(0x40940b);
if(r1(R+518)){{goto L40949a;}}
}
B409411:L409411:{c.instructions+=4;NFSU2_TR(0x409411);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B409415:{NFSU2_TR(0x409415);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B409417:{NFSU2_TR(0x409417);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B409419:{NFSU2_TR(0x409419);
if(r1(R+518)){{goto L40944a;}}
}
B40941b:L40941b:{c.instructions+=2;NFSU2_TR(0x40941b);
u8 U[10];
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B40941d:{NFSU2_TR(0x40941d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L409437;}}
}
B40941f:L40941f:{c.instructions+=6;NFSU2_TR(0x40941f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B409426:{NFSU2_TR(0x409426);
w4(R+0,u32(s32(s16(r2(R+8)))));
}
B409429:{NFSU2_TR(0x409429);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(s64(s32(u32(0x38ull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B40942c:{NFSU2_TR(0x40942c);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B409433:{NFSU2_TR(0x409433);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B409434:{NFSU2_TR(0x409434);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B409437:L409437:{c.instructions+=6;NFSU2_TR(0x409437);
w4(R+0,u32(s32(s16(r2(R+8)))));
}
B40943a:{NFSU2_TR(0x40943a);
u8 U[6];
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B40943c:{NFSU2_TR(0x40943c);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(s64(s32(u32(0x38ull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B40943f:{NFSU2_TR(0x40943f);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B409446:{NFSU2_TR(0x409446);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B409447:{NFSU2_TR(0x409447);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40944a:L40944a:{c.instructions+=2;NFSU2_TR(0x40944a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40944c:{NFSU2_TR(0x40944c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40946f;}}
}
B40944e:L40944e:{c.instructions+=2;NFSU2_TR(0x40944e);
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
B409450:{NFSU2_TR(0x409450);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L409463;}}
}
B409452:L409452:{c.instructions+=4;NFSU2_TR(0x409452);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B409459:{NFSU2_TR(0x409459);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8cull))));
__builtin_memmove((R+0),(U+0),4);
}
B40945f:{NFSU2_TR(0x40945f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B409460:{NFSU2_TR(0x409460);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B409463:L409463:{c.instructions+=4;NFSU2_TR(0x409463);
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
B409465:{NFSU2_TR(0x409465);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8cull))));
__builtin_memmove((R+0),(U+0),4);
}
B40946b:{NFSU2_TR(0x40946b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B40946c:{NFSU2_TR(0x40946c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40946f:L40946f:{c.instructions+=2;NFSU2_TR(0x40946f);
u8 U[10];
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B409471:{NFSU2_TR(0x409471);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L409489;}}
}
B409473:L409473:{c.instructions+=6;NFSU2_TR(0x409473);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B40947a:{NFSU2_TR(0x40947a);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B40947e:{NFSU2_TR(0x40947e);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(s64(s32(u32(0x38ull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+8)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B409481:{NFSU2_TR(0x409481);
u8 U[12];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B409485:{NFSU2_TR(0x409485);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B409486:{NFSU2_TR(0x409486);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B409489:L409489:{c.instructions+=6;NFSU2_TR(0x409489);
u8 U[6];
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B40948b:{NFSU2_TR(0x40948b);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B40948f:{NFSU2_TR(0x40948f);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(s64(s32(u32(0x38ull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+8)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B409492:{NFSU2_TR(0x409492);
u8 U[12];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B409496:{NFSU2_TR(0x409496);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B409497:{NFSU2_TR(0x409497);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40949a:L40949a:{c.instructions+=3;NFSU2_TR(0x40949a);
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
B40949c:{NFSU2_TR(0x40949c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B40949d:{NFSU2_TR(0x40949d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4094a0:L4094a0:{c.instructions+=7;NFSU2_TR(0x4094a0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4094a1:{NFSU2_TR(0x4094a1);
__builtin_memmove((R+0),gp(0x8900bc),4);
}
B4094a6:{NFSU2_TR(0x4094a6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4094a7:{NFSU2_TR(0x4094a7);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4094a9:{NFSU2_TR(0x4094a9);
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
B4094ab:{NFSU2_TR(0x4094ab);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4094ac:{NFSU2_TR(0x4094ac);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L40950e;}}
}
B4094ae:L4094ae:{c.instructions+=2;NFSU2_TR(0x4094ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4094b2:{NFSU2_TR(0x4094b2);
{goto L4094c0;}
}
B4094c0:L4094c0:{c.instructions+=7;NFSU2_TR(0x4094c0);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8900b4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B4094c7:{NFSU2_TR(0x4094c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4094ca:{NFSU2_TR(0x4094ca);
{u32 ea_=u32(r4(R+4)+u32(1068u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4094d0:{NFSU2_TR(0x4094d0);
{u32 ea_=u32(u32(7879616u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4094d6:{NFSU2_TR(0x4094d6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4094d8:{NFSU2_TR(0x4094d8);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4094db:{NFSU2_TR(0x4094db);
if(r1(R+514)){{goto L409504;}}
}
B4094dd:L4094dd:{c.instructions+=7;NFSU2_TR(0x4094dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4094e3:{NFSU2_TR(0x4094e3);
__builtin_memmove((R+8),(R+4),4);
}
B4094e5:{NFSU2_TR(0x4094e5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4094e6:{NFSU2_TR(0x4094e6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4094ea:{NFSU2_TR(0x4094ea);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4094eb:{NFSU2_TR(0x4094eb);
w4(R+4,u32(0x88f298ull));
}
B4094f0:{NFSU2_TR(0x4094f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4094f5ull));
TAIL_STATIC(0x5d5cd0u,5d5);
}
B4094f5:L4094f5:{c.instructions+=5;NFSU2_TR(0x4094f5);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B4094f7:{NFSU2_TR(0x4094f7);
{u32 ea_=u32(u32(7879620u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4094fd:{NFSU2_TR(0x4094fd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4094ff:{NFSU2_TR(0x4094ff);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B409502:{NFSU2_TR(0x409502);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L409514;}}
}
B409504:L409504:{c.instructions+=4;NFSU2_TR(0x409504);
__builtin_memmove((R+0),gp(0x8900bc),4);
}
B409509:{NFSU2_TR(0x409509);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B40950a:{NFSU2_TR(0x40950a);
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
B40950c:{NFSU2_TR(0x40950c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4094c0u);}goto L4094c0;}}
}
B40950e:L40950e:{c.instructions+=5;NFSU2_TR(0x40950e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40950f:{NFSU2_TR(0x40950f);
w1(R+0,u8(0x1ull));
}
B409511:{NFSU2_TR(0x409511);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B409512:{NFSU2_TR(0x409512);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B409513:{NFSU2_TR(0x409513);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B409514:L409514:{c.instructions+=5;NFSU2_TR(0x409514);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B409515:{NFSU2_TR(0x409515);
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
B409517:{NFSU2_TR(0x409517);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B409518:{NFSU2_TR(0x409518);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B409519:{NFSU2_TR(0x409519);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B409520:L409520:{c.instructions+=15;NFSU2_TR(0x409520);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B409524:{NFSU2_TR(0x409524);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409525:{NFSU2_TR(0x409525);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B409529:{NFSU2_TR(0x409529);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+24))));
}
B40952b:{NFSU2_TR(0x40952b);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x8cull))));
}
B409531:{NFSU2_TR(0x409531);
w4(R+0,u32(0x92492493ull));
}
B409536:{NFSU2_TR(0x409536);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B409538:{NFSU2_TR(0x409538);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B40953a:{NFSU2_TR(0x40953a);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B40953d:{NFSU2_TR(0x40953d);
__builtin_memmove((R+0),(R+8),4);
}
B40953f:{NFSU2_TR(0x40953f);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B409542:{NFSU2_TR(0x409542);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B409544:{NFSU2_TR(0x409544);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B409548:{NFSU2_TR(0x409548);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40954a:{NFSU2_TR(0x40954a);
if(r1(R+518)){{goto L40955a;}}
}
B40954c:L40954c:{c.instructions+=7;NFSU2_TR(0x40954c);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B409550:{NFSU2_TR(0x409550);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B409551:{NFSU2_TR(0x409551);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B409553:{NFSU2_TR(0x409553);
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
B409555:{NFSU2_TR(0x409555);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
__builtin_memmove((R+0),(U+0),1);
}
B409558:{NFSU2_TR(0x409558);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B409559:{NFSU2_TR(0x409559);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40955a:L40955a:{c.instructions+=5;NFSU2_TR(0x40955a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B40955c:{NFSU2_TR(0x40955c);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B40955f:{NFSU2_TR(0x40955f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
__builtin_memmove((R+0),(U+0),1);
}
B409562:{NFSU2_TR(0x409562);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B409563:{NFSU2_TR(0x409563);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B409570:L409570:{c.instructions+=11;NFSU2_TR(0x409570);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B409573:{NFSU2_TR(0x409573);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409574:{NFSU2_TR(0x409574);
__builtin_memmove((R+12),gp(0x89e7a8),4);
}
B40957a:{NFSU2_TR(0x40957a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40957b:{NFSU2_TR(0x40957b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40957c:{NFSU2_TR(0x40957c);
__builtin_memmove((R+24),gp(0x88e66c),4);
}
B409582:{NFSU2_TR(0x409582);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B409589:{NFSU2_TR(0x409589);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40958a:{NFSU2_TR(0x40958a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40958b:{NFSU2_TR(0x40958b);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40958f:{NFSU2_TR(0x40958f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x409594ull));
TAIL_STATIC(0x575620u,575);
}
B409594:L409594:{c.instructions+=8;NFSU2_TR(0x409594);
__builtin_memmove((R+28),(R+0),4);
}
B409596:{NFSU2_TR(0x409596);
__builtin_memmove((R+0),gp(0x883dc8),4);
}
B40959b:{NFSU2_TR(0x40959b);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B40959d:{NFSU2_TR(0x40959d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4095a0:{NFSU2_TR(0x4095a0);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4095a2:{NFSU2_TR(0x4095a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4095a6:{NFSU2_TR(0x4095a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4095aa:{NFSU2_TR(0x4095aa);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L409743;}}
}
B4095b0:L4095b0:{c.instructions+=3;NFSU2_TR(0x4095b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4095b4:{NFSU2_TR(0x4095b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4095b8:{NFSU2_TR(0x4095b8);
{goto L4095c0;}
}
B4095ba:L4095ba:{c.instructions+=2;NFSU2_TR(0x4095ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4095be:{NFSU2_TR(0x4095be);
__builtin_memmove((R+28),(R+28),4);
}
B4095c0:L4095c0:{c.instructions+=2;NFSU2_TR(0x4095c0);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4095c2:{NFSU2_TR(0x4095c2);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L40973f;}}
}
B4095c8:L4095c8:{c.instructions+=6;NFSU2_TR(0x4095c8);
__builtin_memmove((R+4),gp(0x883dc4),4);
}
B4095ce:{NFSU2_TR(0x4095ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4095d2:{NFSU2_TR(0x4095d2);
u8 U[13];
w4(U+0,u32(u32(u32(0x100ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+0),(U+12),1);
}
B4095d9:{NFSU2_TR(0x4095d9);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x6ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x6ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B4095db:{NFSU2_TR(0x4095db);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B4095de:{NFSU2_TR(0x4095de);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L40971a;}}
}
B4095e4:L4095e4:{c.instructions+=3;NFSU2_TR(0x4095e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4095e8:{NFSU2_TR(0x4095e8);
u8 U[18];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((U+14),(U+12),2);
w2(U+16,u16(u32(r2(U+14))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+16))==(u16(0x0ull))));
}
B4095ee:{NFSU2_TR(0x4095ee);
if(r1(R+518)){{goto L40971a;}}
}
B4095f4:L4095f4:{c.instructions+=4;NFSU2_TR(0x4095f4);
u8 U[12];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B4095f8:{NFSU2_TR(0x4095f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B4095fb:{NFSU2_TR(0x4095fb);
u8 U[11];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((U+9),(U+8),1);
w1(U+10,u8(u32(r1(U+9))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+10))==(u8(0x0ull))));
}
B4095ff:{NFSU2_TR(0x4095ff);
if(r1(R+518)){{goto L40971a;}}
}
B409605:L409605:{c.instructions+=5;NFSU2_TR(0x409605);
u8 U[5];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B409609:{NFSU2_TR(0x409609);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40960b:{NFSU2_TR(0x40960b);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B409613:{NFSU2_TR(0x409613);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B40961b:{NFSU2_TR(0x40961b);
if(r1(R+518)){{goto L409670;}}
}
B40961d:L40961d:{c.instructions+=7;NFSU2_TR(0x40961d);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B409621:{NFSU2_TR(0x409621);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B409624:{NFSU2_TR(0x409624);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B409628:{NFSU2_TR(0x409628);
{u32 ea_=u32(u32(7879608u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B40962e:{NFSU2_TR(0x40962e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B409630:{NFSU2_TR(0x409630);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B409633:{NFSU2_TR(0x409633);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40963b;}}
}
B409635:L409635:{c.instructions+=2;NFSU2_TR(0x409635);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B409639:{NFSU2_TR(0x409639);
{goto L409646;}
}
B40963b:L40963b:{c.instructions+=3;NFSU2_TR(0x40963b);
__builtin_memmove((R+0),gp(0x783bb8),4);
}
B409640:{NFSU2_TR(0x409640);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B409642:{NFSU2_TR(0x409642);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B409646:L409646:{c.instructions+=7;NFSU2_TR(0x409646);
u8 U[12];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B40964a:{NFSU2_TR(0x40964a);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40964d:{NFSU2_TR(0x40964d);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B409651:{NFSU2_TR(0x409651);
{u32 ea_=u32(u32(7879604u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B409657:{NFSU2_TR(0x409657);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B409659:{NFSU2_TR(0x409659);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40965c:{NFSU2_TR(0x40965c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L409664;}}
}
B40965e:L40965e:{c.instructions+=2;NFSU2_TR(0x40965e);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B409662:{NFSU2_TR(0x409662);
{goto L409670;}
}
B409664:L409664:{c.instructions+=3;NFSU2_TR(0x409664);
__builtin_memmove((R+8),gp(0x783bb4),4);
}
B40966a:{NFSU2_TR(0x40966a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40966c:{NFSU2_TR(0x40966c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B409670:L409670:{c.instructions+=3;NFSU2_TR(0x409670);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B409672:{NFSU2_TR(0x409672);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B409674:{NFSU2_TR(0x409674);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4096a2;}}
}
B409676:L409676:{c.instructions+=3;NFSU2_TR(0x409676);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B40967d:{NFSU2_TR(0x40967d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40967f:{NFSU2_TR(0x40967f);
if(r1(R+518)){{goto L4096a2;}}
}
B409681:L409681:{c.instructions+=2;NFSU2_TR(0x409681);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B409683:{NFSU2_TR(0x409683);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L409687;}}
}
B409685:L409685:{c.instructions+=1;NFSU2_TR(0x409685);
{goto L409689;}
}
B409687:L409687:{c.instructions+=1;NFSU2_TR(0x409687);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B409689:L409689:{c.instructions+=8;NFSU2_TR(0x409689);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B40968d:{NFSU2_TR(0x40968d);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B40968e:{NFSU2_TR(0x40968e);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B409690:{NFSU2_TR(0x409690);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B409692:{NFSU2_TR(0x409692);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B409695:{NFSU2_TR(0x409695);
{u32 ea_=u32(r4(R+4)+r4(R+0)+u32(148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40969c:{NFSU2_TR(0x40969c);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4096a0:{NFSU2_TR(0x4096a0);
{goto L4096aa;}
}
B4096a2:L4096a2:{c.instructions+=1;NFSU2_TR(0x4096a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4096aa:L4096aa:{c.instructions+=6;NFSU2_TR(0x4096aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4096ae:{NFSU2_TR(0x4096ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4096b2:{NFSU2_TR(0x4096b2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4096b3:{NFSU2_TR(0x4096b3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4096b4:{NFSU2_TR(0x4096b4);
w4(R+4,u32(0x88f298ull));
}
B4096b9:{NFSU2_TR(0x4096b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4096beull));
TAIL_STATIC(0x5d5cd0u,5d5);
}
B4096be:L4096be:{c.instructions+=2;NFSU2_TR(0x4096be);
u8 U[8];
__builtin_memmove((U+0),gp(0x89e7a4),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4096c4:{NFSU2_TR(0x4096c4);
if(r1(R+518)){{goto L4096da;}}
}
B4096c6:L4096c6:{c.instructions+=6;NFSU2_TR(0x4096c6);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B4096c8:{NFSU2_TR(0x4096c8);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4096cc:{NFSU2_TR(0x4096cc);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4096d0:{NFSU2_TR(0x4096d0);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4096d4:{NFSU2_TR(0x4096d4);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4096d8:{NFSU2_TR(0x4096d8);
{goto L4096ea;}
}
B4096da:L4096da:{c.instructions+=4;NFSU2_TR(0x4096da);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4096de:{NFSU2_TR(0x4096de);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4096e2:{NFSU2_TR(0x4096e2);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4096e6:{NFSU2_TR(0x4096e6);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4096ea:L4096ea:{c.instructions+=5;NFSU2_TR(0x4096ea);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B4096ec:{NFSU2_TR(0x4096ec);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4096f2:{NFSU2_TR(0x4096f2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4096f4:{NFSU2_TR(0x4096f4);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4096f7:{NFSU2_TR(0x4096f7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L409714;}}
}
B4096f9:L4096f9:{c.instructions+=8;NFSU2_TR(0x4096f9);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B4096fb:{NFSU2_TR(0x4096fb);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4096fd:{NFSU2_TR(0x4096fd);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B4096ff:{NFSU2_TR(0x4096ff);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B409701:{NFSU2_TR(0x409701);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B409703:{NFSU2_TR(0x409703);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B409705:{NFSU2_TR(0x409705);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B409708:{NFSU2_TR(0x409708);
if(r1(R+514)){{goto L40971a;}}
}
B40970a:L40970a:{c.instructions+=4;NFSU2_TR(0x40970a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40970e:{NFSU2_TR(0x40970e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+24),4);
s4(u32(r4(U+4)),r4(U+8));
}
B409711:{NFSU2_TR(0x409711);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B409712:{NFSU2_TR(0x409712);
{goto L40971a;}
}
B409714:L409714:{c.instructions+=3;NFSU2_TR(0x409714);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B409716:{NFSU2_TR(0x409716);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B409718:{NFSU2_TR(0x409718);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40971a:L40971a:{c.instructions+=9;NFSU2_TR(0x40971a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40971e:{NFSU2_TR(0x40971e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B409722:{NFSU2_TR(0x409722);
__builtin_memmove((R+4),gp(0x883dc8),4);
}
B409728:{NFSU2_TR(0x409728);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B409729:{NFSU2_TR(0x409729);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x108ull))));
}
B40972f:{NFSU2_TR(0x40972f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B409731:{NFSU2_TR(0x409731);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B409735:{NFSU2_TR(0x409735);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B409739:{NFSU2_TR(0x409739);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4095bau);}goto L4095ba;}}
}
B40973f:L40973f:{c.instructions+=1;NFSU2_TR(0x40973f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B409743:L409743:{c.instructions+=3;NFSU2_TR(0x409743);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B409745:{NFSU2_TR(0x409745);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B409747:{NFSU2_TR(0x409747);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L409758;}}
}
B409749:L409749:{c.instructions+=3;NFSU2_TR(0x409749);
__builtin_memmove((R+4),gp(0x890080),4);
}
B40974f:{NFSU2_TR(0x40974f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409750:{NFSU2_TR(0x409750);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x409755ull));
TAIL_STATIC(0x5ea4e0u,5ea);
}
B409755:L409755:{c.instructions+=1;NFSU2_TR(0x409755);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B409758:L409758:{c.instructions+=2;NFSU2_TR(0x409758);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409759:{NFSU2_TR(0x409759);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40975eull));
TAIL_STATIC(0x575630u,575);
}
B40975e:L40975e:{c.instructions+=8;NFSU2_TR(0x40975e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B409761:{NFSU2_TR(0x409761);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B409762:{NFSU2_TR(0x409762);
__builtin_memmove((R+0),(R+24),4);
}
B409764:{NFSU2_TR(0x409764);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B409765:{NFSU2_TR(0x409765);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B409766:{NFSU2_TR(0x409766);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B409767:{NFSU2_TR(0x409767);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x18ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x18ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B40976a:{NFSU2_TR(0x40976a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B409770:L409770:{c.instructions+=8;NFSU2_TR(0x409770);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B409774:{NFSU2_TR(0x409774);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B409777:{NFSU2_TR(0x409777);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409778:{NFSU2_TR(0x409778);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B40977b:{NFSU2_TR(0x40977b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40977c:{NFSU2_TR(0x40977c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B40977f:{NFSU2_TR(0x40977f);
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
B409781:{NFSU2_TR(0x409781);
if(r1(R+518)){{goto L4097f8;}}
}
B409783:L409783:{c.instructions+=5;NFSU2_TR(0x409783);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B409785:{NFSU2_TR(0x409785);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409786:{NFSU2_TR(0x409786);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409787:{NFSU2_TR(0x409787);
__builtin_memmove((R+4),(R+24),4);
}
B409789:{NFSU2_TR(0x409789);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40978cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B40978c:L40978c:{c.instructions+=4;NFSU2_TR(0x40978c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B40978f:{NFSU2_TR(0x40978f);
__builtin_memmove((R+4),(R+28),4);
}
B409791:{NFSU2_TR(0x409791);
__builtin_memmove((R+20),(R+0),4);
}
B409793:{NFSU2_TR(0x409793);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x409798ull));
TAIL_STATIC(0x5d8990u,5d8);
}
B409798:L409798:{c.instructions+=4;NFSU2_TR(0x409798);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40979c:{NFSU2_TR(0x40979c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B40979e:{NFSU2_TR(0x40979e);
__builtin_memmove((R+4),(R+24),4);
}
B4097a0:{NFSU2_TR(0x4097a0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4097a3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4097a3:L4097a3:{c.instructions+=4;NFSU2_TR(0x4097a3);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4097a7:{NFSU2_TR(0x4097a7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4097a8:{NFSU2_TR(0x4097a8);
__builtin_memmove((R+4),(R+28),4);
}
B4097aa:{NFSU2_TR(0x4097aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4097afull));
TAIL_STATIC(0x5e2da0u,5e2);
}
B4097af:L4097af:{c.instructions+=6;NFSU2_TR(0x4097af);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4097b3:{NFSU2_TR(0x4097b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4097b4:{NFSU2_TR(0x4097b4);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4097b6:{NFSU2_TR(0x4097b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4097b7:{NFSU2_TR(0x4097b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4097bf:{NFSU2_TR(0x4097bf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4097c9;}}
}
B4097c1:L4097c1:{c.instructions+=1;NFSU2_TR(0x4097c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0xbf800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4097c9:L4097c9:{c.instructions+=15;NFSU2_TR(0x4097c9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4097cd:{NFSU2_TR(0x4097cd);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4097d1:{NFSU2_TR(0x4097d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4097d5:{NFSU2_TR(0x4097d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4097d9:{NFSU2_TR(0x4097d9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4097db:{NFSU2_TR(0x4097db);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4097dc:{NFSU2_TR(0x4097dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4097e0:{NFSU2_TR(0x4097e0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4097e2:{NFSU2_TR(0x4097e2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4097e3:{NFSU2_TR(0x4097e3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4097e5:{NFSU2_TR(0x4097e5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4097e6:{NFSU2_TR(0x4097e6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4097e7:{NFSU2_TR(0x4097e7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4097e8:{NFSU2_TR(0x4097e8);
__builtin_memmove((R+4),(R+24),4);
}
B4097ea:{NFSU2_TR(0x4097ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4097efull));
TAIL_STATIC(0x5fbed0u,5fb);
}
B4097ef:L4097ef:{c.instructions+=3;NFSU2_TR(0x4097ef);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4097f1:{NFSU2_TR(0x4097f1);
__builtin_memmove((R+4),(R+24),4);
}
B4097f3:{NFSU2_TR(0x4097f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4097f8ull));
TAIL_STATIC(0x5f46a0u,5f4);
}
B4097f8:L4097f8:{c.instructions+=4;NFSU2_TR(0x4097f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4097f9:{NFSU2_TR(0x4097f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4097fa:{NFSU2_TR(0x4097fa);
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
B4097fd:{NFSU2_TR(0x4097fd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B409800:L409800:{c.instructions+=7;NFSU2_TR(0x409800);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B409804:{NFSU2_TR(0x409804);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40980a:{NFSU2_TR(0x40980a);
__builtin_memmove((R+8),(R+4),4);
}
B40980c:{NFSU2_TR(0x40980c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B409810:{NFSU2_TR(0x409810);
__builtin_memmove((R+4),gp(0x890080),4);
}
B409816:{NFSU2_TR(0x409816);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409817:{NFSU2_TR(0x409817);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40981cull));
TAIL_STATIC(0x5f12a0u,5f1);
}
B40981c:L40981c:{c.instructions+=4;NFSU2_TR(0x40981c);
{u32 ea_=u32(u32(7881372u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B409822:{NFSU2_TR(0x409822);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B409824:{NFSU2_TR(0x409824);
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
B409827:{NFSU2_TR(0x409827);
if(r1(R+514)){{goto L409831;}}
}
B409829:L409829:{c.instructions+=2;NFSU2_TR(0x409829);
w4(R+0,u32(0x1ull));
}
B40982e:{NFSU2_TR(0x40982e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B409831:L409831:{c.instructions+=2;NFSU2_TR(0x409831);
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
B409833:{NFSU2_TR(0x409833);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B409840:L409840:{c.instructions+=3;NFSU2_TR(0x409840);
__builtin_memmove((R+0),gp(0x890118),4);
}
B409845:{NFSU2_TR(0x409845);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B409848:{NFSU2_TR(0x409848);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40987e;}}
}
B40984a:L40984a:{c.instructions+=4;NFSU2_TR(0x40984a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40984e:{NFSU2_TR(0x40984e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40984f:{NFSU2_TR(0x40984f);
__builtin_memmove((R+4),gp(0x890080),4);
}
B409855:{NFSU2_TR(0x409855);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40985aull));
TAIL_STATIC(0x5f0fb0u,5f0);
}
B40985a:L40985a:{c.instructions+=4;NFSU2_TR(0x40985a);
{u32 ea_=u32(u32(7881372u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B409860:{NFSU2_TR(0x409860);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B409862:{NFSU2_TR(0x409862);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B409865:{NFSU2_TR(0x409865);
if(r1(R+514)){{goto L409874;}}
}
B409867:L409867:{c.instructions+=4;NFSU2_TR(0x409867);
w4(R+0,u32(0x1ull));
}
B40986c:{NFSU2_TR(0x40986c);
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
B40986e:{NFSU2_TR(0x40986e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B409871:{NFSU2_TR(0x409871);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B409874:L409874:{c.instructions+=4;NFSU2_TR(0x409874);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B409876:{NFSU2_TR(0x409876);
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
B409878:{NFSU2_TR(0x409878);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B40987b:{NFSU2_TR(0x40987b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40987e:L40987e:{c.instructions+=2;NFSU2_TR(0x40987e);
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
B409880:{NFSU2_TR(0x409880);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B409890:L409890:{c.instructions+=3;NFSU2_TR(0x409890);
__builtin_memmove((R+0),gp(0x890118),4);
}
B409895:{NFSU2_TR(0x409895);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B409898:{NFSU2_TR(0x409898);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4098c6;}}
}
B40989a:L40989a:{c.instructions+=4;NFSU2_TR(0x40989a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40989e:{NFSU2_TR(0x40989e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40989f:{NFSU2_TR(0x40989f);
__builtin_memmove((R+4),gp(0x890080),4);
}
B4098a5:{NFSU2_TR(0x4098a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4098aaull));
TAIL_STATIC(0x5f12a0u,5f1);
}
B4098aa:L4098aa:{c.instructions+=5;NFSU2_TR(0x4098aa);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B4098ac:{NFSU2_TR(0x4098ac);
{u32 ea_=u32(u32(8296224u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4098b2:{NFSU2_TR(0x4098b2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4098b4:{NFSU2_TR(0x4098b4);
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
B4098b7:{NFSU2_TR(0x4098b7);
if(r1(R+514)){{goto L4098c1;}}
}
B4098b9:L4098b9:{c.instructions+=2;NFSU2_TR(0x4098b9);
w4(R+0,u32(0x1ull));
}
B4098be:{NFSU2_TR(0x4098be);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4098c1:L4098c1:{c.instructions+=2;NFSU2_TR(0x4098c1);
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
B4098c3:{NFSU2_TR(0x4098c3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4098c6:L4098c6:{c.instructions+=2;NFSU2_TR(0x4098c6);
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
B4098c8:{NFSU2_TR(0x4098c8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4098d0:L4098d0:{c.instructions+=3;NFSU2_TR(0x4098d0);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B4098d5:{NFSU2_TR(0x4098d5);
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
B4098d7:{NFSU2_TR(0x4098d7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4098e2;}}
}
B4098d9:L4098d9:{c.instructions+=3;NFSU2_TR(0x4098d9);
__builtin_memmove((R+0),gp(0x890108),4);
}
B4098de:{NFSU2_TR(0x4098de);
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
B4098e0:{NFSU2_TR(0x4098e0);
if(r1(R+518)){{goto L4098ea;}}
}
B4098e2:L4098e2:{c.instructions+=3;NFSU2_TR(0x4098e2);
__builtin_memmove((R+0),gp(0x783ba4),4);
}
B4098e7:{NFSU2_TR(0x4098e7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4098e9:{NFSU2_TR(0x4098e9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4098ea:L4098ea:{c.instructions+=3;NFSU2_TR(0x4098ea);
__builtin_memmove((R+8),gp(0x783ba0),4);
}
B4098f0:{NFSU2_TR(0x4098f0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4098f2:{NFSU2_TR(0x4098f2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B409900:L409900:{c.instructions+=7;NFSU2_TR(0x409900);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409901:{NFSU2_TR(0x409901);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409902:{NFSU2_TR(0x409902);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B409904:{NFSU2_TR(0x409904);
__builtin_memmove((R+12),(R+4),4);
}
B409906:{NFSU2_TR(0x409906);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B409909:{NFSU2_TR(0x409909);
u8 U[14];
__builtin_memmove((U+6),gp(0x88d218),4);
w1(R+512,u8((r4(U+6))<(r4(R+20))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+20)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B40990f:{NFSU2_TR(0x40990f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L40995a;}}
}
B409911:L409911:{c.instructions+=7;NFSU2_TR(0x409911);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409912:{NFSU2_TR(0x409912);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409913:{NFSU2_TR(0x409913);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B409917:{NFSU2_TR(0x409917);
w4(R+0,u32(0x88d21cull));
}
B40991c:{NFSU2_TR(0x40991c);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B40991e:{NFSU2_TR(0x40991e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B409922:{NFSU2_TR(0x409922);
{goto L409928;}
}
B409924:L409924:{c.instructions+=1;NFSU2_TR(0x409924);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B409928:L409928:{c.instructions+=3;NFSU2_TR(0x409928);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B40992b:{NFSU2_TR(0x40992b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40992d:{NFSU2_TR(0x40992d);
if(r1(R+518)){{goto L409946;}}
}
B40992f:L40992f:{c.instructions+=4;NFSU2_TR(0x40992f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B409933:{NFSU2_TR(0x409933);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409934:{NFSU2_TR(0x409934);
__builtin_memmove((R+4),(R+24),4);
}
B409936:{NFSU2_TR(0x409936);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40993bull));
TAIL_STATIC(0x5d4480u,5d4);
}
B40993b:L40993b:{c.instructions+=2;NFSU2_TR(0x40993b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40993d:{NFSU2_TR(0x40993d);
if(r1(R+518)){{goto L409946;}}
}
B40993f:L40993f:{c.instructions+=2;NFSU2_TR(0x40993f);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B409943:{NFSU2_TR(0x409943);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B409946:L409946:{c.instructions+=7;NFSU2_TR(0x409946);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B409949:{NFSU2_TR(0x409949);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+28)),r4(U+0));
}
B40994b:{NFSU2_TR(0x40994b);
__builtin_memmove((R+0),gp(0x88d218),4);
}
B409950:{NFSU2_TR(0x409950);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B409951:{NFSU2_TR(0x409951);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B409954:{NFSU2_TR(0x409954);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(R+20))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+20),r4(U+6)));
w4(U+10,u32(u32(r4(R+20))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B409956:{NFSU2_TR(0x409956);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x409924u);}goto L409924;}}
}
B409958:L409958:{c.instructions+=2;NFSU2_TR(0x409958);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B409959:{NFSU2_TR(0x409959);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40995a:L40995a:{c.instructions+=3;NFSU2_TR(0x40995a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B40995b:{NFSU2_TR(0x40995b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B40995c:{NFSU2_TR(0x40995c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B409960:L409960:{c.instructions+=6;NFSU2_TR(0x409960);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B409964:{NFSU2_TR(0x409964);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409965:{NFSU2_TR(0x409965);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B409968:{NFSU2_TR(0x409968);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x77dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B40996e:{NFSU2_TR(0x40996e);
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
B409970:{NFSU2_TR(0x409970);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4099a3;}}
}
B409972:L409972:{c.instructions+=3;NFSU2_TR(0x409972);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B409975:{NFSU2_TR(0x409975);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B409978:{NFSU2_TR(0x409978);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40997dull));
TAIL_STATIC(0x5930f0u,593);
}
B40997d:L40997d:{c.instructions+=3;NFSU2_TR(0x40997d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B409980:{NFSU2_TR(0x409980);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409982:{NFSU2_TR(0x409982);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x409987ull));
TAIL_STATIC(0x5f46a0u,5f4);
}
B409987:L409987:{c.instructions+=3;NFSU2_TR(0x409987);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40998a:{NFSU2_TR(0x40998a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40998c:{NFSU2_TR(0x40998c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x409991ull));
TAIL_STATIC(0x5ed5c0u,5ed);
}
B409991:L409991:{c.instructions+=5;NFSU2_TR(0x409991);
w1(R+0,u8(0x1ull));
}
B409993:{NFSU2_TR(0x409993);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x77dull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B409999:{NFSU2_TR(0x409999);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x77cull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B40999f:{NFSU2_TR(0x40999f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4099a0:{NFSU2_TR(0x4099a0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4099a3:L4099a3:{c.instructions+=3;NFSU2_TR(0x4099a3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x77cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4099aa:{NFSU2_TR(0x4099aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4099ab:{NFSU2_TR(0x4099ab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4099b0:L4099b0:{c.instructions+=5;NFSU2_TR(0x4099b0);
__builtin_memmove((R+0),gp(0x890080),4);
}
B4099b5:{NFSU2_TR(0x4099b5);
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
B4099b7:{NFSU2_TR(0x4099b7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4099b8:{NFSU2_TR(0x4099b8);
__builtin_memmove((R+20),(R+4),4);
}
B4099ba:{NFSU2_TR(0x4099ba);
if(r1(R+518)){{goto L409a21;}}
}
B4099bc:L4099bc:{c.instructions+=7;NFSU2_TR(0x4099bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4099bf:{NFSU2_TR(0x4099bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4099c2:{NFSU2_TR(0x4099c2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4099c3:{NFSU2_TR(0x4099c3);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B4099c5:{NFSU2_TR(0x4099c5);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4099c7:{NFSU2_TR(0x4099c7);
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
B4099c9:{NFSU2_TR(0x4099c9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L409a1c;}}
}
B4099cb:L4099cb:{c.instructions+=2;NFSU2_TR(0x4099cb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4099cc:{NFSU2_TR(0x4099cc);
__builtin_memmove((R+16),(R+16),4);
}
B4099d0:L4099d0:{c.instructions+=6;NFSU2_TR(0x4099d0);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B4099d2:{NFSU2_TR(0x4099d2);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B4099d6:{NFSU2_TR(0x4099d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4099d9:{NFSU2_TR(0x4099d9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x77dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4099df:{NFSU2_TR(0x4099df);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4099e1:{NFSU2_TR(0x4099e1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L409a0e;}}
}
B4099e3:L4099e3:{c.instructions+=3;NFSU2_TR(0x4099e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4099e6:{NFSU2_TR(0x4099e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4099e9:{NFSU2_TR(0x4099e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4099eeull));
TAIL_STATIC(0x5930f0u,593);
}
B4099ee:L4099ee:{c.instructions+=3;NFSU2_TR(0x4099ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4099f1:{NFSU2_TR(0x4099f1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4099f3:{NFSU2_TR(0x4099f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4099f8ull));
TAIL_STATIC(0x5f46a0u,5f4);
}
B4099f8:L4099f8:{c.instructions+=3;NFSU2_TR(0x4099f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4099fb:{NFSU2_TR(0x4099fb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4099fd:{NFSU2_TR(0x4099fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x409a02ull));
TAIL_STATIC(0x5ed5c0u,5ed);
}
B409a02:L409a02:{c.instructions+=2;NFSU2_TR(0x409a02);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x77dull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B409a09:{NFSU2_TR(0x409a09);
__builtin_memmove((R+0),gp(0x890080),4);
}
B409a0e:L409a0e:{c.instructions+=6;NFSU2_TR(0x409a0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B409a11:{NFSU2_TR(0x409a11);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B409a14:{NFSU2_TR(0x409a14);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B409a15:{NFSU2_TR(0x409a15);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B409a17:{NFSU2_TR(0x409a17);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B409a19:{NFSU2_TR(0x409a19);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4099d0u);}goto L4099d0;}}
}
B409a1b:L409a1b:{c.instructions+=1;NFSU2_TR(0x409a1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B409a1c:L409a1c:{c.instructions+=2;NFSU2_TR(0x409a1c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B409a20:{NFSU2_TR(0x409a20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B409a21:L409a21:{c.instructions+=2;NFSU2_TR(0x409a21);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B409a22:{NFSU2_TR(0x409a22);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B409a30:L409a30:{c.instructions+=5;NFSU2_TR(0x409a30);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409a31:{NFSU2_TR(0x409a31);
__builtin_memmove((R+0),gp(0x890080),4);
}
B409a36:{NFSU2_TR(0x409a36);
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
B409a38:{NFSU2_TR(0x409a38);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+16)),r4(U+0));
}
B409a3c:{NFSU2_TR(0x409a3c);
if(r1(R+518)){{goto L409ac5;}}
}
B409a42:L409a42:{c.instructions+=7;NFSU2_TR(0x409a42);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B409a45:{NFSU2_TR(0x409a45);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B409a48:{NFSU2_TR(0x409a48);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409a49:{NFSU2_TR(0x409a49);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B409a4b:{NFSU2_TR(0x409a4b);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B409a4d:{NFSU2_TR(0x409a4d);
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
B409a4f:{NFSU2_TR(0x409a4f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L409abc;}}
}
B409a51:L409a51:{c.instructions+=2;NFSU2_TR(0x409a51);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409a52:{NFSU2_TR(0x409a52);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409a53:L409a53:{c.instructions+=6;NFSU2_TR(0x409a53);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+20))));
}
B409a55:{NFSU2_TR(0x409a55);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B409a59:{NFSU2_TR(0x409a59);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B409a5c:{NFSU2_TR(0x409a5c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x77dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B409a62:{NFSU2_TR(0x409a62);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B409a64:{NFSU2_TR(0x409a64);
if(r1(R+518)){{goto L409aad;}}
}
B409a66:L409a66:{c.instructions+=5;NFSU2_TR(0x409a66);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B409a69:{NFSU2_TR(0x409a69);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B409a6c:{NFSU2_TR(0x409a6c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409a6e:{NFSU2_TR(0x409a6e);
__builtin_memmove((R+4),(R+28),4);
}
B409a70:{NFSU2_TR(0x409a70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x409a75ull));
TAIL_STATIC(0x593100u,593);
}
B409a75:L409a75:{c.instructions+=4;NFSU2_TR(0x409a75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B409a77:{NFSU2_TR(0x409a77);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409a79:{NFSU2_TR(0x409a79);
__builtin_memmove((R+4),(R+28),4);
}
B409a7b:{NFSU2_TR(0x409a7b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x409a7eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B409a7e:L409a7e:{c.instructions+=2;NFSU2_TR(0x409a7e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B409a80:{NFSU2_TR(0x409a80);
if(r1(R+518)){{goto L409aa1;}}
}
B409a82:L409a82:{c.instructions+=3;NFSU2_TR(0x409a82);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B409a85:{NFSU2_TR(0x409a85);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409a86:{NFSU2_TR(0x409a86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x409a8bull));
TAIL_STATIC(0x5f4400u,5f4);
}
B409a8b:L409a8b:{c.instructions+=4;NFSU2_TR(0x409a8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B409a8e:{NFSU2_TR(0x409a8e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B409a91:{NFSU2_TR(0x409a91);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409a92:{NFSU2_TR(0x409a92);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x409a97ull));
TAIL_STATIC(0x5f46a0u,5f4);
}
B409a97:L409a97:{c.instructions+=3;NFSU2_TR(0x409a97);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B409a9a:{NFSU2_TR(0x409a9a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409a9c:{NFSU2_TR(0x409a9c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x409aa1ull));
TAIL_STATIC(0x5ed5c0u,5ed);
}
B409aa1:L409aa1:{c.instructions+=2;NFSU2_TR(0x409aa1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x77dull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B409aa8:{NFSU2_TR(0x409aa8);
__builtin_memmove((R+0),gp(0x890080),4);
}
B409aad:L409aad:{c.instructions+=6;NFSU2_TR(0x409aad);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B409ab0:{NFSU2_TR(0x409ab0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B409ab3:{NFSU2_TR(0x409ab3);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B409ab4:{NFSU2_TR(0x409ab4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B409ab6:{NFSU2_TR(0x409ab6);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(R+20))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+20),r4(U+6)));
w4(U+10,u32(u32(r4(R+20))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B409ab8:{NFSU2_TR(0x409ab8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x409a53u);}goto L409a53;}}
}
B409aba:L409aba:{c.instructions+=2;NFSU2_TR(0x409aba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B409abb:{NFSU2_TR(0x409abb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B409abc:L409abc:{c.instructions+=3;NFSU2_TR(0x409abc);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B409ac0:{NFSU2_TR(0x409ac0);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B409ac4:{NFSU2_TR(0x409ac4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B409ac5:L409ac5:{c.instructions+=2;NFSU2_TR(0x409ac5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B409ac6:{NFSU2_TR(0x409ac6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B409ad0:L409ad0:{c.instructions+=8;NFSU2_TR(0x409ad0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409ad1:{NFSU2_TR(0x409ad1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409ad2:{NFSU2_TR(0x409ad2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409ad3:{NFSU2_TR(0x409ad3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B409ad7:{NFSU2_TR(0x409ad7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B409ad9:{NFSU2_TR(0x409ad9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B409adb:{NFSU2_TR(0x409adb);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B409ae3:{NFSU2_TR(0x409ae3);
if(r1(R+518)){{goto L409aeb;}}
}
B409ae5:L409ae5:{c.instructions+=2;NFSU2_TR(0x409ae5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B409ae7:{NFSU2_TR(0x409ae7);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B409aeb:L409aeb:{c.instructions+=8;NFSU2_TR(0x409aeb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B409aef:{NFSU2_TR(0x409aef);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409af1:{NFSU2_TR(0x409af1);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409af3:{NFSU2_TR(0x409af3);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409af5:{NFSU2_TR(0x409af5);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B409af9:{NFSU2_TR(0x409af9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409afa:{NFSU2_TR(0x409afa);
__builtin_memmove((R+4),(R+24),4);
}
B409afc:{NFSU2_TR(0x409afc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x409b01ull));
TAIL_STATIC(0x571640u,571);
}
B409b01:L409b01:{c.instructions+=3;NFSU2_TR(0x409b01);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B409b04:{NFSU2_TR(0x409b04);
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
B409b06:{NFSU2_TR(0x409b06);
if(r1(R+518)){{goto L409b45;}}
}
B409b08:L409b08:{c.instructions+=4;NFSU2_TR(0x409b08);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B409b0c:{NFSU2_TR(0x409b0c);
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
B409b0e:{NFSU2_TR(0x409b0e);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+28)),r4(U+0));
}
B409b14:{NFSU2_TR(0x409b14);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L409b45;}}
}
B409b16:L409b16:{c.instructions+=4;NFSU2_TR(0x409b16);
__builtin_memmove((R+0),gp(0x883dc8),4);
}
B409b1b:{NFSU2_TR(0x409b1b);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B409b1d:{NFSU2_TR(0x409b1d);
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
B409b1f:{NFSU2_TR(0x409b1f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L409b45;}}
}
B409b21:L409b21:{c.instructions+=2;NFSU2_TR(0x409b21);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B409b23:{NFSU2_TR(0x409b23);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409b24:L409b24:{c.instructions+=5;NFSU2_TR(0x409b24);
__builtin_memmove((R+0),gp(0x883dc4),4);
}
B409b29:{NFSU2_TR(0x409b29);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B409b2c:{NFSU2_TR(0x409b2c);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B409b2e:{NFSU2_TR(0x409b2e);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B409b30:{NFSU2_TR(0x409b30);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L409b34;}}
}
B409b32:L409b32:{c.instructions+=1;NFSU2_TR(0x409b32);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B409b34:L409b34:{c.instructions+=5;NFSU2_TR(0x409b34);
__builtin_memmove((R+0),gp(0x883dc8),4);
}
B409b39:{NFSU2_TR(0x409b39);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B409b3a:{NFSU2_TR(0x409b3a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x108ull))));
}
B409b40:{NFSU2_TR(0x409b40);
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
B409b42:{NFSU2_TR(0x409b42);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x409b24u);}goto L409b24;}}
}
B409b44:L409b44:{c.instructions+=1;NFSU2_TR(0x409b44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B409b45:L409b45:{c.instructions+=4;NFSU2_TR(0x409b45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B409b46:{NFSU2_TR(0x409b46);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B409b47:{NFSU2_TR(0x409b47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B409b48:{NFSU2_TR(0x409b48);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B409b50:L409b50:{c.instructions+=18;NFSU2_TR(0x409b50);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409b52:{NFSU2_TR(0x409b52);
u8 U[4];
w4(U+0,u32(0x77136full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409b57:{NFSU2_TR(0x409b57);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B409b5d:{NFSU2_TR(0x409b5d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409b5e:{NFSU2_TR(0x409b5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B409b65:{NFSU2_TR(0x409b65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B409b68:{NFSU2_TR(0x409b68);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B409b6c:{NFSU2_TR(0x409b6c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409b6d:{NFSU2_TR(0x409b6d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409b6e:{NFSU2_TR(0x409b6e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409b6f:{NFSU2_TR(0x409b6f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409b70:{NFSU2_TR(0x409b70);
__builtin_memmove((R+20),(R+4),4);
}
B409b72:{NFSU2_TR(0x409b72);
u8 U[4];
w4(U+0,u32(0x42340000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409b77:{NFSU2_TR(0x409b77);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409b78:{NFSU2_TR(0x409b78);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x74ull))));
__builtin_memmove((R+4),(U+0),4);
}
B409b7b:{NFSU2_TR(0x409b7b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B409b7f:{NFSU2_TR(0x409b7f);
u8 U[4];
w4(U+0,u32(0x7845e8ull));
s4(u32(r4(R+20)),r4(U+0));
}
B409b86:{NFSU2_TR(0x409b86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x409b8bull));
TAIL_STATIC(0x579f80u,579);
}
B409b8b:L409b8b:{c.instructions+=11;NFSU2_TR(0x409b8b);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B409b8f:{NFSU2_TR(0x409b8f);
__builtin_memmove((R+8),gp(0x783bf8),4);
}
B409b95:{NFSU2_TR(0x409b95);
__builtin_memmove((R+0),gp(0x783c10),4);
}
B409b9a:{NFSU2_TR(0x409b9a);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B409b9c:{NFSU2_TR(0x409b9c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B409ba0:{NFSU2_TR(0x409ba0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B409ba3:{NFSU2_TR(0x409ba3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B409ba6:{NFSU2_TR(0x409ba6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B409ba9:{NFSU2_TR(0x409ba9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x3cull))));
__builtin_memmove((R+24),(U+0),4);
}
B409bac:{NFSU2_TR(0x409bac);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((R+28),(U+0),4);
}
B409baf:{NFSU2_TR(0x409baf);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B409bb7:L409bb7:{c.instructions+=2;NFSU2_TR(0x409bb7);
u8 U[4];
w4(U+0,u32(0x34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409bb9:{NFSU2_TR(0x409bb9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x409bbeull));
TAIL_STATIC(0x575620u,575);
}
B409bbe:L409bbe:{c.instructions+=5;NFSU2_TR(0x409bbe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B409bc1:{NFSU2_TR(0x409bc1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B409bc5:{NFSU2_TR(0x409bc5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B409bc7:{NFSU2_TR(0x409bc7);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B409bcc:{NFSU2_TR(0x409bcc);
if(r1(R+518)){{goto L409be1;}}
}
B409bce:L409bce:{c.instructions+=5;NFSU2_TR(0x409bce);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B409bd2:{NFSU2_TR(0x409bd2);
u8 U[4];
w4(U+0,u32(0x42340000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409bd7:{NFSU2_TR(0x409bd7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409bd8:{NFSU2_TR(0x409bd8);
__builtin_memmove((R+4),(R+0),4);
}
B409bda:{NFSU2_TR(0x409bda);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x409bdfull));
TAIL_STATIC(0x579f80u,579);
}
B409bdf:L409bdf:{c.instructions+=1;NFSU2_TR(0x409bdf);
{goto L409be3;}
}
B409be1:L409be1:{c.instructions+=1;NFSU2_TR(0x409be1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B409be3:L409be3:{c.instructions+=21;NFSU2_TR(0x409be3);
__builtin_memmove((R+8),gp(0x783c00),4);
}
B409be9:{NFSU2_TR(0x409be9);
__builtin_memmove((R+4),gp(0x783c08),4);
}
B409bef:{NFSU2_TR(0x409bef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B409bf2:{NFSU2_TR(0x409bf2);
__builtin_memmove((R+0),gp(0x783c04),4);
}
B409bf7:{NFSU2_TR(0x409bf7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B409bf9:{NFSU2_TR(0x409bf9);
__builtin_memmove((R+0),gp(0x783bfc),4);
}
B409bfe:{NFSU2_TR(0x409bfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B409c01:{NFSU2_TR(0x409c01);
__builtin_memmove((R+8),gp(0x783c0c),4);
}
B409c07:{NFSU2_TR(0x409c07);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B409c0a:{NFSU2_TR(0x409c0a);
__builtin_memmove((R+4),gp(0x783c14),4);
}
B409c10:{NFSU2_TR(0x409c10);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B409c12:{NFSU2_TR(0x409c12);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B409c16:{NFSU2_TR(0x409c16);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B409c19:{NFSU2_TR(0x409c19);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B409c1c:{NFSU2_TR(0x409c1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B409c1f:{NFSU2_TR(0x409c1f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B409c22:{NFSU2_TR(0x409c22);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
}
B409c25:{NFSU2_TR(0x409c25);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B409c26:{NFSU2_TR(0x409c26);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B409c2a:{NFSU2_TR(0x409c2a);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B409c2e:{NFSU2_TR(0x409c2e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x409bb7u);}goto L409bb7;}}
}
B409c30:L409c30:{c.instructions+=10;NFSU2_TR(0x409c30);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B409c34:{NFSU2_TR(0x409c34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B409c35:{NFSU2_TR(0x409c35);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B409c38:{NFSU2_TR(0x409c38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B409c39:{NFSU2_TR(0x409c39);
__builtin_memmove((R+0),(R+20),4);
}
B409c3b:{NFSU2_TR(0x409c3b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B409c3c:{NFSU2_TR(0x409c3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B409c3d:{NFSU2_TR(0x409c3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B409c44:{NFSU2_TR(0x409c44);
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
B409c47:{NFSU2_TR(0x409c47);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B409c50:L409c50:{c.instructions+=15;NFSU2_TR(0x409c50);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409c52:{NFSU2_TR(0x409c52);
u8 U[4];
w4(U+0,u32(0x77138bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409c57:{NFSU2_TR(0x409c57);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B409c5d:{NFSU2_TR(0x409c5d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409c5e:{NFSU2_TR(0x409c5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B409c65:{NFSU2_TR(0x409c65);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409c66:{NFSU2_TR(0x409c66);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409c67:{NFSU2_TR(0x409c67);
__builtin_memmove((R+12),(R+4),4);
}
B409c69:{NFSU2_TR(0x409c69);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409c6a:{NFSU2_TR(0x409c6a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409c6b:{NFSU2_TR(0x409c6b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B409c6f:{NFSU2_TR(0x409c6f);
u8 U[4];
w4(U+0,u32(0x7845e8ull));
s4(u32(r4(R+12)),r4(U+0));
}
B409c75:{NFSU2_TR(0x409c75);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B409c7d:{NFSU2_TR(0x409c7d);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((R+24),(U+0),4);
}
B409c80:{NFSU2_TR(0x409c80);
w4(R+28,u32(0x3ull));
}
B409c85:L409c85:{c.instructions+=3;NFSU2_TR(0x409c85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B409c87:{NFSU2_TR(0x409c87);
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
B409c89:{NFSU2_TR(0x409c89);
if(r1(R+518)){{goto L409c91;}}
}
B409c8b:L409c8b:{c.instructions+=3;NFSU2_TR(0x409c8b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B409c8d:{NFSU2_TR(0x409c8d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409c8f:{NFSU2_TR(0x409c8f);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x409c91ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B409c91:L409c91:{c.instructions+=3;NFSU2_TR(0x409c91);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B409c94:{NFSU2_TR(0x409c94);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B409c95:{NFSU2_TR(0x409c95);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x409c85u);}goto L409c85;}}
}
B409c97:L409c97:{c.instructions+=3;NFSU2_TR(0x409c97);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x74ull))));
__builtin_memmove((R+4),(U+0),4);
}
B409c9a:{NFSU2_TR(0x409c9a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B409ca2:{NFSU2_TR(0x409ca2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x409ca7ull));
TAIL_STATIC(0x576a60u,576);
}
B409ca7:L409ca7:{c.instructions+=7;NFSU2_TR(0x409ca7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B409cab:{NFSU2_TR(0x409cab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B409cac:{NFSU2_TR(0x409cac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B409cad:{NFSU2_TR(0x409cad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B409cae:{NFSU2_TR(0x409cae);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B409cb5:{NFSU2_TR(0x409cb5);
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
B409cb8:{NFSU2_TR(0x409cb8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B409cc0:L409cc0:{c.instructions+=11;NFSU2_TR(0x409cc0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409cc1:{NFSU2_TR(0x409cc1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409cc2:{NFSU2_TR(0x409cc2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409cc3:{NFSU2_TR(0x409cc3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409cc4:{NFSU2_TR(0x409cc4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B409cc8:{NFSU2_TR(0x409cc8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409cc9:{NFSU2_TR(0x409cc9);
u8 U[4];
w4(U+0,u32(0x7845f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409cce:{NFSU2_TR(0x409cce);
__builtin_memmove((R+20),(R+4),4);
}
B409cd0:{NFSU2_TR(0x409cd0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409cd2:{NFSU2_TR(0x409cd2);
__builtin_memmove((R+4),(R+24),4);
}
B409cd4:{NFSU2_TR(0x409cd4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x409cd9ull));
TAIL_STATIC(0x578ce0u,578);
}
B409cd9:L409cd9:{c.instructions+=7;NFSU2_TR(0x409cd9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409cdb:{NFSU2_TR(0x409cdb);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409cdd:{NFSU2_TR(0x409cdd);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409cdf:{NFSU2_TR(0x409cdf);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((R+0),(U+0),4);
}
B409ce2:{NFSU2_TR(0x409ce2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409ce3:{NFSU2_TR(0x409ce3);
__builtin_memmove((R+4),(R+24),4);
}
B409ce5:{NFSU2_TR(0x409ce5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x409ceaull));
TAIL_STATIC(0x571640u,571);
}
B409cea:L409cea:{c.instructions+=4;NFSU2_TR(0x409cea);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B409ced:{NFSU2_TR(0x409ced);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409cee:{NFSU2_TR(0x409cee);
__builtin_memmove((R+4),(R+24),4);
}
B409cf0:{NFSU2_TR(0x409cf0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x409cf5ull));
TAIL_STATIC(0x571770u,571);
}
B409cf5:L409cf5:{c.instructions+=4;NFSU2_TR(0x409cf5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x54ull))));
__builtin_memmove((R+8),(U+0),4);
}
B409cf8:{NFSU2_TR(0x409cf8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409cf9:{NFSU2_TR(0x409cf9);
__builtin_memmove((R+4),(R+24),4);
}
B409cfb:{NFSU2_TR(0x409cfb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x409d00ull));
TAIL_STATIC(0x571770u,571);
}
B409d00:L409d00:{c.instructions+=4;NFSU2_TR(0x409d00);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x48ull))));
__builtin_memmove((R+12),(U+0),4);
}
B409d03:{NFSU2_TR(0x409d03);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((R+28),(U+0),4);
}
B409d06:{NFSU2_TR(0x409d06);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B409d0e:{NFSU2_TR(0x409d0e);
__builtin_memmove((R+28),(R+28),4);
}
B409d10:L409d10:{c.instructions+=1;NFSU2_TR(0x409d10);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B409d18:L409d18:{c.instructions+=3;NFSU2_TR(0x409d18);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409d19:{NFSU2_TR(0x409d19);
__builtin_memmove((R+4),(R+24),4);
}
B409d1b:{NFSU2_TR(0x409d1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x409d20ull));
TAIL_STATIC(0x571770u,571);
}
B409d20:L409d20:{c.instructions+=4;NFSU2_TR(0x409d20);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B409d23:{NFSU2_TR(0x409d23);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409d24:{NFSU2_TR(0x409d24);
__builtin_memmove((R+4),(R+24),4);
}
B409d26:{NFSU2_TR(0x409d26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x409d2bull));
TAIL_STATIC(0x571770u,571);
}
B409d2b:L409d2b:{c.instructions+=5;NFSU2_TR(0x409d2b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B409d2f:{NFSU2_TR(0x409d2f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B409d32:{NFSU2_TR(0x409d32);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B409d33:{NFSU2_TR(0x409d33);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B409d37:{NFSU2_TR(0x409d37);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x409d18u);}goto L409d18;}}
}
B409d39:L409d39:{c.instructions+=4;NFSU2_TR(0x409d39);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B409d3c:{NFSU2_TR(0x409d3c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409d3d:{NFSU2_TR(0x409d3d);
__builtin_memmove((R+4),(R+24),4);
}
B409d3f:{NFSU2_TR(0x409d3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x409d44ull));
TAIL_STATIC(0x571770u,571);
}
B409d44:L409d44:{c.instructions+=3;NFSU2_TR(0x409d44);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409d45:{NFSU2_TR(0x409d45);
__builtin_memmove((R+4),(R+24),4);
}
B409d47:{NFSU2_TR(0x409d47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x409d4cull));
TAIL_STATIC(0x571770u,571);
}
B409d4c:L409d4c:{c.instructions+=4;NFSU2_TR(0x409d4c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((R+8),(U+0),4);
}
B409d4f:{NFSU2_TR(0x409d4f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409d50:{NFSU2_TR(0x409d50);
__builtin_memmove((R+4),(R+24),4);
}
B409d52:{NFSU2_TR(0x409d52);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x409d57ull));
TAIL_STATIC(0x571770u,571);
}
B409d57:L409d57:{c.instructions+=3;NFSU2_TR(0x409d57);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B409d5a:{NFSU2_TR(0x409d5a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409d5b:{NFSU2_TR(0x409d5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x409d60ull));
TAIL_STATIC(0x57ba60u,57b);
}
B409d60:L409d60:{c.instructions+=5;NFSU2_TR(0x409d60);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B409d64:{NFSU2_TR(0x409d64);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B409d67:{NFSU2_TR(0x409d67);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B409d68:{NFSU2_TR(0x409d68);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B409d6c:{NFSU2_TR(0x409d6c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x409d10u);}goto L409d10;}}
}
B409d6e:L409d6e:{c.instructions+=4;NFSU2_TR(0x409d6e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x70ull))));
__builtin_memmove((R+0),(U+0),4);
}
B409d71:{NFSU2_TR(0x409d71);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409d72:{NFSU2_TR(0x409d72);
__builtin_memmove((R+4),(R+24),4);
}
B409d74:{NFSU2_TR(0x409d74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x409d79ull));
TAIL_STATIC(0x571770u,571);
}
B409d79:L409d79:{c.instructions+=3;NFSU2_TR(0x409d79);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409d7a:{NFSU2_TR(0x409d7a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x74ull))));
__builtin_memmove((R+4),(U+0),4);
}
B409d7d:{NFSU2_TR(0x409d7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x409d82ull));
TAIL_STATIC(0x57ba60u,57b);
}
B409d82:L409d82:{c.instructions+=2;NFSU2_TR(0x409d82);
__builtin_memmove((R+4),(R+24),4);
}
B409d84:{NFSU2_TR(0x409d84);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x409d89ull));
TAIL_STATIC(0x578d90u,578);
}
B409d89:L409d89:{c.instructions+=6;NFSU2_TR(0x409d89);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B409d8a:{NFSU2_TR(0x409d8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B409d8b:{NFSU2_TR(0x409d8b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B409d8c:{NFSU2_TR(0x409d8c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B409d8d:{NFSU2_TR(0x409d8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B409d8e:{NFSU2_TR(0x409d8e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B409da0:L409da0:{c.instructions+=13;NFSU2_TR(0x409da0);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x1cull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x1cull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B409da3:{NFSU2_TR(0x409da3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409da4:{NFSU2_TR(0x409da4);
__builtin_memmove((R+24),(R+4),4);
}
B409da6:{NFSU2_TR(0x409da6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B409da9:{NFSU2_TR(0x409da9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B409dac:{NFSU2_TR(0x409dac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B409daf:{NFSU2_TR(0x409daf);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B409db3:{NFSU2_TR(0x409db3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B409db5:{NFSU2_TR(0x409db5);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B409db9:{NFSU2_TR(0x409db9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409dbb:{NFSU2_TR(0x409dbb);
__builtin_memmove((R+4),(R+24),4);
}
B409dbd:{NFSU2_TR(0x409dbd);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B409dc1:{NFSU2_TR(0x409dc1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x409dc4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B409dc4:L409dc4:{c.instructions+=4;NFSU2_TR(0x409dc4);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B409dc8:{NFSU2_TR(0x409dc8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B409dca:{NFSU2_TR(0x409dca);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B409dcd:{NFSU2_TR(0x409dcd);
if(r1(R+518)){{goto L409dd5;}}
}
B409dcf:L409dcf:{c.instructions+=2;NFSU2_TR(0x409dcf);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B409dd1:{NFSU2_TR(0x409dd1);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B409dd5:L409dd5:{c.instructions+=5;NFSU2_TR(0x409dd5);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B409dd9:{NFSU2_TR(0x409dd9);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B409ddb:{NFSU2_TR(0x409ddb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B409ddd:{NFSU2_TR(0x409ddd);
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
B409de0:{NFSU2_TR(0x409de0);
if(r1(R+514)){{goto L409dee;}}
}
B409de2:L409de2:{c.instructions+=4;NFSU2_TR(0x409de2);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B409de6:{NFSU2_TR(0x409de6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B409de8:{NFSU2_TR(0x409de8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B409dec:{NFSU2_TR(0x409dec);
{goto L409df2;}
}
B409dee:L409dee:{c.instructions+=1;NFSU2_TR(0x409dee);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B409df2:L409df2:{c.instructions+=10;NFSU2_TR(0x409df2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B409df5:{NFSU2_TR(0x409df5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B409df8:{NFSU2_TR(0x409df8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B409dfb:{NFSU2_TR(0x409dfb);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B409dff:{NFSU2_TR(0x409dff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B409e01:{NFSU2_TR(0x409e01);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B409e05:{NFSU2_TR(0x409e05);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409e07:{NFSU2_TR(0x409e07);
__builtin_memmove((R+4),(R+24),4);
}
B409e09:{NFSU2_TR(0x409e09);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B409e0d:{NFSU2_TR(0x409e0d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x409e10ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B409e10:L409e10:{c.instructions+=4;NFSU2_TR(0x409e10);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B409e14:{NFSU2_TR(0x409e14);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B409e16:{NFSU2_TR(0x409e16);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B409e19:{NFSU2_TR(0x409e19);
if(r1(R+518)){{goto L409e21;}}
}
B409e1b:L409e1b:{c.instructions+=2;NFSU2_TR(0x409e1b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B409e1d:{NFSU2_TR(0x409e1d);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B409e21:L409e21:{c.instructions+=5;NFSU2_TR(0x409e21);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B409e25:{NFSU2_TR(0x409e25);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B409e27:{NFSU2_TR(0x409e27);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B409e29:{NFSU2_TR(0x409e29);
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
B409e2c:{NFSU2_TR(0x409e2c);
if(r1(R+514)){{goto L409e3a;}}
}
B409e2e:L409e2e:{c.instructions+=4;NFSU2_TR(0x409e2e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B409e32:{NFSU2_TR(0x409e32);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B409e34:{NFSU2_TR(0x409e34);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B409e38:{NFSU2_TR(0x409e38);
{goto L409e3e;}
}
B409e3a:L409e3a:{c.instructions+=1;NFSU2_TR(0x409e3a);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B409e3e:L409e3e:{c.instructions+=10;NFSU2_TR(0x409e3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B409e41:{NFSU2_TR(0x409e41);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B409e44:{NFSU2_TR(0x409e44);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B409e47:{NFSU2_TR(0x409e47);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B409e4b:{NFSU2_TR(0x409e4b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B409e4f:{NFSU2_TR(0x409e4f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B409e51:{NFSU2_TR(0x409e51);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409e53:{NFSU2_TR(0x409e53);
__builtin_memmove((R+4),(R+24),4);
}
B409e55:{NFSU2_TR(0x409e55);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B409e59:{NFSU2_TR(0x409e59);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x409e5cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B409e5c:L409e5c:{c.instructions+=5;NFSU2_TR(0x409e5c);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B409e60:{NFSU2_TR(0x409e60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B409e61:{NFSU2_TR(0x409e61);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B409e63:{NFSU2_TR(0x409e63);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B409e66:{NFSU2_TR(0x409e66);
if(r1(R+518)){{goto L409e6e;}}
}
B409e68:L409e68:{c.instructions+=2;NFSU2_TR(0x409e68);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B409e6a:{NFSU2_TR(0x409e6a);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B409e6e:L409e6e:{c.instructions+=5;NFSU2_TR(0x409e6e);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B409e72:{NFSU2_TR(0x409e72);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B409e74:{NFSU2_TR(0x409e74);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B409e76:{NFSU2_TR(0x409e76);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B409e79:{NFSU2_TR(0x409e79);
if(r1(R+514)){{goto L409e81;}}
}
B409e7b:L409e7b:{c.instructions+=2;NFSU2_TR(0x409e7b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B409e7d:{NFSU2_TR(0x409e7d);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B409e81:L409e81:{c.instructions+=9;NFSU2_TR(0x409e81);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B409e85:{NFSU2_TR(0x409e85);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B409e89:{NFSU2_TR(0x409e89);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B409e8d:{NFSU2_TR(0x409e8d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B409e8f:{NFSU2_TR(0x409e8f);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B409e93:{NFSU2_TR(0x409e93);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B409e97:{NFSU2_TR(0x409e97);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B409e99:{NFSU2_TR(0x409e99);
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
B409e9c:{NFSU2_TR(0x409e9c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B409ea0:L409ea0:{c.instructions+=9;NFSU2_TR(0x409ea0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409ea1:{NFSU2_TR(0x409ea1);
{u32 ea_=u32(r4(R+4)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B409ea7:{NFSU2_TR(0x409ea7);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B409eab:{NFSU2_TR(0x409eab);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B409eaf:{NFSU2_TR(0x409eaf);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B409eb1:{NFSU2_TR(0x409eb1);
{u32 ea_=u32(u32(7882256u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B409eb7:{NFSU2_TR(0x409eb7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B409eb9:{NFSU2_TR(0x409eb9);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B409ebc:{NFSU2_TR(0x409ebc);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L409efc;}}
}
B409ebe:L409ebe:{c.instructions+=9;NFSU2_TR(0x409ebe);
{u32 ea_=u32(u32(7879704u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B409ec4:{NFSU2_TR(0x409ec4);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B409ec6:{NFSU2_TR(0x409ec6);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B409eca:{NFSU2_TR(0x409eca);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B409ece:{NFSU2_TR(0x409ece);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B409ed2:{NFSU2_TR(0x409ed2);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B409ed4:{NFSU2_TR(0x409ed4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B409ed6:{NFSU2_TR(0x409ed6);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B409ed9:{NFSU2_TR(0x409ed9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L409ee1;}}
}
B409edb:L409edb:{c.instructions+=2;NFSU2_TR(0x409edb);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B409edd:{NFSU2_TR(0x409edd);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B409ee1:L409ee1:{c.instructions+=5;NFSU2_TR(0x409ee1);
{u32 ea_=u32(u32(7879704u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B409ee7:{NFSU2_TR(0x409ee7);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B409ee9:{NFSU2_TR(0x409ee9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B409eeb:{NFSU2_TR(0x409eeb);
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
B409eee:{NFSU2_TR(0x409eee);
if(r1(R+514)){{goto L409f3a;}}
}
B409ef0:L409ef0:{c.instructions+=4;NFSU2_TR(0x409ef0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B409ef2:{NFSU2_TR(0x409ef2);
{u32 ea_=u32(u32(7879704u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B409ef8:{NFSU2_TR(0x409ef8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B409ef9:{NFSU2_TR(0x409ef9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B409efc:L409efc:{c.instructions+=6;NFSU2_TR(0x409efc);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B409f00:{NFSU2_TR(0x409f00);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B409f02:{NFSU2_TR(0x409f02);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B409f08:{NFSU2_TR(0x409f08);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B409f0a:{NFSU2_TR(0x409f0a);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B409f0d:{NFSU2_TR(0x409f0d);
if(r1(R+514)){{goto L409f19;}}
}
B409f0f:L409f0f:{c.instructions+=3;NFSU2_TR(0x409f0f);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B409f15:{NFSU2_TR(0x409f15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B409f16:{NFSU2_TR(0x409f16);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B409f19:L409f19:{c.instructions+=5;NFSU2_TR(0x409f19);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B409f1d:{NFSU2_TR(0x409f1d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B409f23:{NFSU2_TR(0x409f23);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B409f25:{NFSU2_TR(0x409f25);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B409f28:{NFSU2_TR(0x409f28);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L409f34;}}
}
B409f2a:L409f2a:{c.instructions+=3;NFSU2_TR(0x409f2a);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B409f30:{NFSU2_TR(0x409f30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B409f31:{NFSU2_TR(0x409f31);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B409f34:L409f34:{c.instructions+=1;NFSU2_TR(0x409f34);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B409f3a:L409f3a:{c.instructions+=2;NFSU2_TR(0x409f3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B409f3b:{NFSU2_TR(0x409f3b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B409f40:L409f40:{c.instructions+=5;NFSU2_TR(0x409f40);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B409f44:{NFSU2_TR(0x409f44);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B409f4a:{NFSU2_TR(0x409f4a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B409f4c:{NFSU2_TR(0x409f4c);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B409f4f:{NFSU2_TR(0x409f4f);
if(r1(R+514)){{goto L409f5a;}}
}
B409f51:L409f51:{c.instructions+=2;NFSU2_TR(0x409f51);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B409f57:{NFSU2_TR(0x409f57);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B409f5a:L409f5a:{c.instructions+=5;NFSU2_TR(0x409f5a);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B409f5e:{NFSU2_TR(0x409f5e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B409f64:{NFSU2_TR(0x409f64);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B409f66:{NFSU2_TR(0x409f66);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B409f69:{NFSU2_TR(0x409f69);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L409f74;}}
}
B409f6b:L409f6b:{c.instructions+=2;NFSU2_TR(0x409f6b);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B409f71:{NFSU2_TR(0x409f71);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B409f74:L409f74:{c.instructions+=2;NFSU2_TR(0x409f74);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B409f7a:{NFSU2_TR(0x409f7a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B409f80:L409f80:{c.instructions+=15;NFSU2_TR(0x409f80);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409f82:{NFSU2_TR(0x409f82);
u8 U[4];
w4(U+0,u32(0x7713a8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409f87:{NFSU2_TR(0x409f87);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B409f8d:{NFSU2_TR(0x409f8d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409f8e:{NFSU2_TR(0x409f8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B409f95:{NFSU2_TR(0x409f95);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409f96:{NFSU2_TR(0x409f96);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B409f9a:{NFSU2_TR(0x409f9a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409f9b:{NFSU2_TR(0x409f9b);
__builtin_memmove((R+24),(R+4),4);
}
B409f9d:{NFSU2_TR(0x409f9d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B409fa1:{NFSU2_TR(0x409fa1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409fa2:{NFSU2_TR(0x409fa2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409fa3:{NFSU2_TR(0x409fa3);
__builtin_memmove((R+4),(R+24),4);
}
B409fa5:{NFSU2_TR(0x409fa5);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B409fa9:{NFSU2_TR(0x409fa9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x409faeull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x409b50u);}goto L409b50;}
}
B409fae:L409fae:{c.instructions+=9;NFSU2_TR(0x409fae);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B409fb2:{NFSU2_TR(0x409fb2);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B409fb6:{NFSU2_TR(0x409fb6);
u8 U[4];
w4(U+0,u32(0x41f00000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409fbb:{NFSU2_TR(0x409fbb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409fbc:{NFSU2_TR(0x409fbc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409fbd:{NFSU2_TR(0x409fbd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B409fc3:{NFSU2_TR(0x409fc3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B409fcb:{NFSU2_TR(0x409fcb);
u8 U[4];
w4(U+0,u32(0x784614ull));
s4(u32(r4(R+24)),r4(U+0));
}
B409fd1:{NFSU2_TR(0x409fd1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x409fd6ull));
TAIL_STATIC(0x4016b0u,401);
}
B409fd6:L409fd6:{c.instructions+=6;NFSU2_TR(0x409fd6);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B409fda:{NFSU2_TR(0x409fda);
__builtin_memmove((R+0),(R+24),4);
}
B409fdc:{NFSU2_TR(0x409fdc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B409fdd:{NFSU2_TR(0x409fdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B409fe4:{NFSU2_TR(0x409fe4);
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
B409fe7:{NFSU2_TR(0x409fe7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B409ff0:L409ff0:{c.instructions+=7;NFSU2_TR(0x409ff0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409ff1:{NFSU2_TR(0x409ff1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B409ff5:{NFSU2_TR(0x409ff5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409ff6:{NFSU2_TR(0x409ff6);
u8 U[4];
w4(U+0,u32(0x784620ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409ffb:{NFSU2_TR(0x409ffb);
__builtin_memmove((R+28),(R+4),4);
}
B409ffd:{NFSU2_TR(0x409ffd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B409fff:{NFSU2_TR(0x409fff);
__builtin_memmove((R+4),(R+24),4);
TAIL_STATIC(0x40a001u,40a);
}
XIT:NFSU2_TR_EXIT(0x409,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
