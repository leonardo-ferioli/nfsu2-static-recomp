#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_412(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_56c(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_578(u8* __restrict R,Cpu& c);
u32 body_5d5(u8* __restrict R,Cpu& c);
u32 body_5d8(u8* __restrict R,Cpu& c);
u32 body_5de(u8* __restrict R,Cpu& c);
u32 body_5ed(u8* __restrict R,Cpu& c);
u32 body_5ef(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5ee,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5ee,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5ee(u8* __restrict R,Cpu& c);
u32 page_5ee(Cpu& c){return body_5ee(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5ee(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5ee001:goto L5ee001;
case 0x5ee002:c.instructions+=2;goto B5ee002;
case 0x5ee004:c.instructions+=1;goto B5ee004;
case 0x5ee009:goto L5ee009;
case 0x5ee00c:c.instructions+=3;goto B5ee00c;
case 0x5ee00d:c.instructions+=2;goto B5ee00d;
case 0x5ee00f:c.instructions+=1;goto B5ee00f;
case 0x5ee014:goto L5ee014;
case 0x5ee017:c.instructions+=3;goto B5ee017;
case 0x5ee018:c.instructions+=2;goto B5ee018;
case 0x5ee01a:c.instructions+=1;goto B5ee01a;
case 0x5ee01f:goto L5ee01f;
case 0x5ee022:c.instructions+=3;goto B5ee022;
case 0x5ee023:c.instructions+=2;goto B5ee023;
case 0x5ee025:c.instructions+=1;goto B5ee025;
case 0x5ee02a:goto L5ee02a;
case 0x5ee02d:c.instructions+=3;goto B5ee02d;
case 0x5ee02e:c.instructions+=2;goto B5ee02e;
case 0x5ee030:c.instructions+=1;goto B5ee030;
case 0x5ee035:goto L5ee035;
case 0x5ee038:c.instructions+=3;goto B5ee038;
case 0x5ee039:c.instructions+=2;goto B5ee039;
case 0x5ee03b:c.instructions+=1;goto B5ee03b;
case 0x5ee040:goto L5ee040;
case 0x5ee043:c.instructions+=3;goto B5ee043;
case 0x5ee044:c.instructions+=2;goto B5ee044;
case 0x5ee046:c.instructions+=1;goto B5ee046;
case 0x5ee04b:goto L5ee04b;
case 0x5ee04e:c.instructions+=3;goto B5ee04e;
case 0x5ee04f:c.instructions+=2;goto B5ee04f;
case 0x5ee051:c.instructions+=1;goto B5ee051;
case 0x5ee056:goto L5ee056;
case 0x5ee05b:c.instructions+=2;goto B5ee05b;
case 0x5ee05d:c.instructions+=1;goto B5ee05d;
case 0x5ee05f:goto L5ee05f;
case 0x5ee064:c.instructions+=2;goto B5ee064;
case 0x5ee066:c.instructions+=1;goto B5ee066;
case 0x5ee068:goto L5ee068;
case 0x5ee06d:c.instructions+=2;goto B5ee06d;
case 0x5ee06f:c.instructions+=1;goto B5ee06f;
case 0x5ee071:goto L5ee071;
case 0x5ee076:c.instructions+=2;goto B5ee076;
case 0x5ee078:c.instructions+=1;goto B5ee078;
case 0x5ee07a:goto L5ee07a;
case 0x5ee080:c.instructions+=3;goto B5ee080;
case 0x5ee081:c.instructions+=2;goto B5ee081;
case 0x5ee083:c.instructions+=1;goto B5ee083;
case 0x5ee088:goto L5ee088;
case 0x5ee08f:c.instructions+=1;goto B5ee08f;
case 0x5ee091:goto L5ee091;
case 0x5ee094:c.instructions+=3;goto B5ee094;
case 0x5ee095:c.instructions+=2;goto B5ee095;
case 0x5ee097:c.instructions+=1;goto B5ee097;
case 0x5ee09c:goto L5ee09c;
case 0x5ee0a1:c.instructions+=5;goto B5ee0a1;
case 0x5ee0a8:c.instructions+=4;goto B5ee0a8;
case 0x5ee0ac:c.instructions+=3;goto B5ee0ac;
case 0x5ee0ad:c.instructions+=2;goto B5ee0ad;
case 0x5ee0af:c.instructions+=1;goto B5ee0af;
case 0x5ee0b4:goto L5ee0b4;
case 0x5ee0b9:c.instructions+=5;goto B5ee0b9;
case 0x5ee0c0:c.instructions+=4;goto B5ee0c0;
case 0x5ee0c4:c.instructions+=3;goto B5ee0c4;
case 0x5ee0c5:c.instructions+=2;goto B5ee0c5;
case 0x5ee0c7:c.instructions+=1;goto B5ee0c7;
case 0x5ee0cc:goto L5ee0cc;
case 0x5ee0cd:c.instructions+=2;goto B5ee0cd;
case 0x5ee0d3:c.instructions+=1;goto B5ee0d3;
case 0x5ee0d8:goto L5ee0d8;
case 0x5ee0de:c.instructions+=2;goto B5ee0de;
case 0x5ee0e0:c.instructions+=1;goto B5ee0e0;
case 0x5ee0e2:goto L5ee0e2;
case 0x5ee0e7:c.instructions+=2;goto B5ee0e7;
case 0x5ee0e9:c.instructions+=1;goto B5ee0e9;
case 0x5ee0eb:goto L5ee0eb;
case 0x5ee0f0:c.instructions+=2;goto B5ee0f0;
case 0x5ee0f2:c.instructions+=1;goto B5ee0f2;
case 0x5ee0f4:goto L5ee0f4;
case 0x5ee0f9:c.instructions+=2;goto B5ee0f9;
case 0x5ee0fb:c.instructions+=1;goto B5ee0fb;
case 0x5ee0fd:goto L5ee0fd;
case 0x5ee102:c.instructions+=2;goto B5ee102;
case 0x5ee104:c.instructions+=1;goto B5ee104;
case 0x5ee106:goto L5ee106;
case 0x5ee107:c.instructions+=1;goto B5ee107;
case 0x5ee10c:goto L5ee10c;
case 0x5ee112:c.instructions+=2;goto B5ee112;
case 0x5ee114:c.instructions+=1;goto B5ee114;
case 0x5ee116:goto L5ee116;
case 0x5ee11b:c.instructions+=2;goto B5ee11b;
case 0x5ee11d:c.instructions+=1;goto B5ee11d;
case 0x5ee11f:goto L5ee11f;
case 0x5ee124:c.instructions+=2;goto B5ee124;
case 0x5ee126:c.instructions+=1;goto B5ee126;
case 0x5ee128:goto L5ee128;
case 0x5ee12d:c.instructions+=2;goto B5ee12d;
case 0x5ee12f:c.instructions+=1;goto B5ee12f;
case 0x5ee131:goto L5ee131;
case 0x5ee136:c.instructions+=2;goto B5ee136;
case 0x5ee138:c.instructions+=1;goto B5ee138;
case 0x5ee13a:goto L5ee13a;
case 0x5ee13b:c.instructions+=1;goto B5ee13b;
case 0x5ee140:goto L5ee140;
case 0x5ee142:c.instructions+=1;goto B5ee142;
case 0x5ee147:goto L5ee147;
case 0x5ee148:c.instructions+=2;goto B5ee148;
case 0x5ee149:c.instructions+=1;goto B5ee149;
case 0x5ee150:goto L5ee150;
case 0x5ee154:c.instructions+=8;goto B5ee154;
case 0x5ee155:c.instructions+=7;goto B5ee155;
case 0x5ee159:c.instructions+=6;goto B5ee159;
case 0x5ee15a:c.instructions+=5;goto B5ee15a;
case 0x5ee15b:c.instructions+=4;goto B5ee15b;
case 0x5ee15d:c.instructions+=3;goto B5ee15d;
case 0x5ee15e:c.instructions+=2;goto B5ee15e;
case 0x5ee163:c.instructions+=1;goto B5ee163;
case 0x5ee168:goto L5ee168;
case 0x5ee16c:c.instructions+=5;goto B5ee16c;
case 0x5ee16f:c.instructions+=4;goto B5ee16f;
case 0x5ee170:c.instructions+=3;goto B5ee170;
case 0x5ee171:c.instructions+=2;goto B5ee171;
case 0x5ee176:c.instructions+=1;goto B5ee176;
case 0x5ee17b:goto L5ee17b;
case 0x5ee181:c.instructions+=14;goto B5ee181;
case 0x5ee185:c.instructions+=13;goto B5ee185;
case 0x5ee189:c.instructions+=12;goto B5ee189;
case 0x5ee18b:c.instructions+=11;goto B5ee18b;
case 0x5ee18d:c.instructions+=10;goto B5ee18d;
case 0x5ee193:c.instructions+=9;goto B5ee193;
case 0x5ee196:c.instructions+=8;goto B5ee196;
case 0x5ee199:c.instructions+=7;goto B5ee199;
case 0x5ee19d:c.instructions+=6;goto B5ee19d;
case 0x5ee1a1:c.instructions+=5;goto B5ee1a1;
case 0x5ee1a3:c.instructions+=4;goto B5ee1a3;
case 0x5ee1a9:c.instructions+=3;goto B5ee1a9;
case 0x5ee1ab:c.instructions+=2;goto B5ee1ab;
case 0x5ee1ae:c.instructions+=1;goto B5ee1ae;
case 0x5ee1b0:goto L5ee1b0;
case 0x5ee1b2:goto L5ee1b2;
case 0x5ee1b3:c.instructions+=3;goto B5ee1b3;
case 0x5ee1b5:c.instructions+=2;goto B5ee1b5;
case 0x5ee1b6:c.instructions+=1;goto B5ee1b6;
case 0x5ee1b9:goto L5ee1b9;
case 0x5ee1bf:c.instructions+=3;goto B5ee1bf;
case 0x5ee1c1:c.instructions+=2;goto B5ee1c1;
case 0x5ee1c4:c.instructions+=1;goto B5ee1c4;
case 0x5ee1c6:goto L5ee1c6;
case 0x5ee1ca:c.instructions+=4;goto B5ee1ca;
case 0x5ee1d0:c.instructions+=3;goto B5ee1d0;
case 0x5ee1d2:c.instructions+=2;goto B5ee1d2;
case 0x5ee1d5:c.instructions+=1;goto B5ee1d5;
case 0x5ee1d7:goto L5ee1d7;
case 0x5ee1d9:c.instructions+=3;goto B5ee1d9;
case 0x5ee1df:c.instructions+=2;goto B5ee1df;
case 0x5ee1e2:c.instructions+=1;goto B5ee1e2;
case 0x5ee1e4:goto L5ee1e4;
case 0x5ee1ea:c.instructions+=3;goto B5ee1ea;
case 0x5ee1ec:c.instructions+=2;goto B5ee1ec;
case 0x5ee1ef:c.instructions+=1;goto B5ee1ef;
case 0x5ee1f1:goto L5ee1f1;
case 0x5ee1f5:c.instructions+=4;goto B5ee1f5;
case 0x5ee1fb:c.instructions+=3;goto B5ee1fb;
case 0x5ee1fd:c.instructions+=2;goto B5ee1fd;
case 0x5ee200:c.instructions+=1;goto B5ee200;
case 0x5ee202:goto L5ee202;
case 0x5ee204:c.instructions+=1;goto B5ee204;
case 0x5ee20b:goto L5ee20b;
case 0x5ee20d:c.instructions+=6;goto B5ee20d;
case 0x5ee213:c.instructions+=5;goto B5ee213;
case 0x5ee219:c.instructions+=4;goto B5ee219;
case 0x5ee21f:c.instructions+=3;goto B5ee21f;
case 0x5ee221:c.instructions+=2;goto B5ee221;
case 0x5ee224:c.instructions+=1;goto B5ee224;
case 0x5ee226:goto L5ee226;
case 0x5ee228:c.instructions+=2;goto B5ee228;
case 0x5ee22c:c.instructions+=1;goto B5ee22c;
case 0x5ee232:goto L5ee232;
case 0x5ee238:c.instructions+=2;goto B5ee238;
case 0x5ee23e:c.instructions+=1;goto B5ee23e;
case 0x5ee243:goto L5ee243;
case 0x5ee246:c.instructions+=4;goto B5ee246;
case 0x5ee247:c.instructions+=3;goto B5ee247;
case 0x5ee24c:c.instructions+=2;goto B5ee24c;
case 0x5ee24d:c.instructions+=1;goto B5ee24d;
case 0x5ee250:goto L5ee250;
case 0x5ee255:c.instructions+=1;goto B5ee255;
case 0x5ee257:goto L5ee257;
case 0x5ee25c:c.instructions+=2;goto B5ee25c;
case 0x5ee25e:c.instructions+=1;goto B5ee25e;
case 0x5ee260:goto L5ee260;
case 0x5ee265:c.instructions+=1;goto B5ee265;
case 0x5ee266:goto L5ee266;
case 0x5ee268:c.instructions+=1;goto B5ee268;
case 0x5ee270:goto L5ee270;
case 0x5ee275:c.instructions+=3;goto B5ee275;
case 0x5ee27c:c.instructions+=2;goto B5ee27c;
case 0x5ee280:c.instructions+=1;goto B5ee280;
case 0x5ee290:goto L5ee290;
case 0x5ee295:c.instructions+=3;goto B5ee295;
case 0x5ee29c:c.instructions+=2;goto B5ee29c;
case 0x5ee2a0:c.instructions+=1;goto B5ee2a0;
case 0x5ee2b0:goto L5ee2b0;
case 0x5ee2b5:c.instructions+=3;goto B5ee2b5;
case 0x5ee2bc:c.instructions+=2;goto B5ee2bc;
case 0x5ee2c0:c.instructions+=1;goto B5ee2c0;
case 0x5ee2d0:goto L5ee2d0;
case 0x5ee2d1:c.instructions+=3;goto B5ee2d1;
case 0x5ee2d7:c.instructions+=2;goto B5ee2d7;
case 0x5ee2dd:c.instructions+=1;goto B5ee2dd;
case 0x5ee2e2:goto L5ee2e2;
case 0x5ee2e5:c.instructions+=5;goto B5ee2e5;
case 0x5ee2e9:c.instructions+=4;goto B5ee2e9;
case 0x5ee2ed:c.instructions+=3;goto B5ee2ed;
case 0x5ee2ef:c.instructions+=2;goto B5ee2ef;
case 0x5ee2f2:c.instructions+=1;goto B5ee2f2;
case 0x5ee2f4:goto L5ee2f4;
case 0x5ee2f6:c.instructions+=1;goto B5ee2f6;
case 0x5ee2fa:goto L5ee2fa;
case 0x5ee2fc:c.instructions+=5;goto B5ee2fc;
case 0x5ee300:c.instructions+=4;goto B5ee300;
case 0x5ee304:c.instructions+=3;goto B5ee304;
case 0x5ee306:c.instructions+=2;goto B5ee306;
case 0x5ee309:c.instructions+=1;goto B5ee309;
case 0x5ee30b:goto L5ee30b;
case 0x5ee30d:c.instructions+=1;goto B5ee30d;
case 0x5ee311:goto L5ee311;
case 0x5ee314:c.instructions+=5;goto B5ee314;
case 0x5ee318:c.instructions+=4;goto B5ee318;
case 0x5ee31c:c.instructions+=3;goto B5ee31c;
case 0x5ee31e:c.instructions+=2;goto B5ee31e;
case 0x5ee321:c.instructions+=1;goto B5ee321;
case 0x5ee323:goto L5ee323;
case 0x5ee325:c.instructions+=1;goto B5ee325;
case 0x5ee329:goto L5ee329;
case 0x5ee32c:c.instructions+=5;goto B5ee32c;
case 0x5ee330:c.instructions+=4;goto B5ee330;
case 0x5ee334:c.instructions+=3;goto B5ee334;
case 0x5ee336:c.instructions+=2;goto B5ee336;
case 0x5ee339:c.instructions+=1;goto B5ee339;
case 0x5ee33b:goto L5ee33b;
case 0x5ee33d:c.instructions+=1;goto B5ee33d;
case 0x5ee341:goto L5ee341;
case 0x5ee344:c.instructions+=5;goto B5ee344;
case 0x5ee348:c.instructions+=4;goto B5ee348;
case 0x5ee34c:c.instructions+=3;goto B5ee34c;
case 0x5ee34e:c.instructions+=2;goto B5ee34e;
case 0x5ee351:c.instructions+=1;goto B5ee351;
case 0x5ee353:goto L5ee353;
case 0x5ee355:c.instructions+=1;goto B5ee355;
case 0x5ee359:goto L5ee359;
case 0x5ee35c:c.instructions+=5;goto B5ee35c;
case 0x5ee360:c.instructions+=4;goto B5ee360;
case 0x5ee364:c.instructions+=3;goto B5ee364;
case 0x5ee366:c.instructions+=2;goto B5ee366;
case 0x5ee369:c.instructions+=1;goto B5ee369;
case 0x5ee36b:goto L5ee36b;
case 0x5ee36d:c.instructions+=1;goto B5ee36d;
case 0x5ee371:goto L5ee371;
case 0x5ee374:c.instructions+=5;goto B5ee374;
case 0x5ee378:c.instructions+=4;goto B5ee378;
case 0x5ee37c:c.instructions+=3;goto B5ee37c;
case 0x5ee37e:c.instructions+=2;goto B5ee37e;
case 0x5ee381:c.instructions+=1;goto B5ee381;
case 0x5ee383:goto L5ee383;
case 0x5ee385:c.instructions+=1;goto B5ee385;
case 0x5ee389:goto L5ee389;
case 0x5ee38c:c.instructions+=2;goto B5ee38c;
case 0x5ee38d:c.instructions+=1;goto B5ee38d;
case 0x5ee393:goto L5ee393;
case 0x5ee394:c.instructions+=1;goto B5ee394;
case 0x5ee3a0:goto L5ee3a0;
case 0x5ee3a2:c.instructions+=2;goto B5ee3a2;
case 0x5ee3a4:c.instructions+=1;goto B5ee3a4;
case 0x5ee3a6:goto L5ee3a6;
case 0x5ee3a9:c.instructions+=1;goto B5ee3a9;
case 0x5ee3aa:goto L5ee3aa;
case 0x5ee3ac:c.instructions+=1;goto B5ee3ac;
case 0x5ee3b0:goto L5ee3b0;
case 0x5ee3b1:c.instructions+=10;goto B5ee3b1;
case 0x5ee3b2:c.instructions+=9;goto B5ee3b2;
case 0x5ee3b3:c.instructions+=8;goto B5ee3b3;
case 0x5ee3b4:c.instructions+=7;goto B5ee3b4;
case 0x5ee3b5:c.instructions+=6;goto B5ee3b5;
case 0x5ee3b9:c.instructions+=5;goto B5ee3b9;
case 0x5ee3be:c.instructions+=4;goto B5ee3be;
case 0x5ee3c0:c.instructions+=3;goto B5ee3c0;
case 0x5ee3c2:c.instructions+=2;goto B5ee3c2;
case 0x5ee3c4:c.instructions+=1;goto B5ee3c4;
case 0x5ee3c9:goto L5ee3c9;
case 0x5ee3cb:c.instructions+=5;goto B5ee3cb;
case 0x5ee3cd:c.instructions+=4;goto B5ee3cd;
case 0x5ee3cf:c.instructions+=3;goto B5ee3cf;
case 0x5ee3d0:c.instructions+=2;goto B5ee3d0;
case 0x5ee3d2:c.instructions+=1;goto B5ee3d2;
case 0x5ee3d7:goto L5ee3d7;
case 0x5ee3da:c.instructions+=3;goto B5ee3da;
case 0x5ee3db:c.instructions+=2;goto B5ee3db;
case 0x5ee3dd:c.instructions+=1;goto B5ee3dd;
case 0x5ee3e2:goto L5ee3e2;
case 0x5ee3e5:c.instructions+=3;goto B5ee3e5;
case 0x5ee3e6:c.instructions+=2;goto B5ee3e6;
case 0x5ee3e8:c.instructions+=1;goto B5ee3e8;
case 0x5ee3ed:goto L5ee3ed;
case 0x5ee3f0:c.instructions+=3;goto B5ee3f0;
case 0x5ee3f1:c.instructions+=2;goto B5ee3f1;
case 0x5ee3f3:c.instructions+=1;goto B5ee3f3;
case 0x5ee3f8:goto L5ee3f8;
case 0x5ee3fb:c.instructions+=3;goto B5ee3fb;
case 0x5ee3fc:c.instructions+=2;goto B5ee3fc;
case 0x5ee3fe:c.instructions+=1;goto B5ee3fe;
case 0x5ee403:goto L5ee403;
case 0x5ee406:c.instructions+=3;goto B5ee406;
case 0x5ee407:c.instructions+=2;goto B5ee407;
case 0x5ee409:c.instructions+=1;goto B5ee409;
case 0x5ee40e:goto L5ee40e;
case 0x5ee411:c.instructions+=3;goto B5ee411;
case 0x5ee412:c.instructions+=2;goto B5ee412;
case 0x5ee414:c.instructions+=1;goto B5ee414;
case 0x5ee419:goto L5ee419;
case 0x5ee41b:c.instructions+=6;goto B5ee41b;
case 0x5ee41d:c.instructions+=5;goto B5ee41d;
case 0x5ee41f:c.instructions+=4;goto B5ee41f;
case 0x5ee422:c.instructions+=3;goto B5ee422;
case 0x5ee423:c.instructions+=2;goto B5ee423;
case 0x5ee425:c.instructions+=1;goto B5ee425;
case 0x5ee42a:goto L5ee42a;
case 0x5ee42c:c.instructions+=6;goto B5ee42c;
case 0x5ee42e:c.instructions+=5;goto B5ee42e;
case 0x5ee430:c.instructions+=4;goto B5ee430;
case 0x5ee433:c.instructions+=3;goto B5ee433;
case 0x5ee434:c.instructions+=2;goto B5ee434;
case 0x5ee436:c.instructions+=1;goto B5ee436;
case 0x5ee43b:goto L5ee43b;
case 0x5ee43d:c.instructions+=6;goto B5ee43d;
case 0x5ee43f:c.instructions+=5;goto B5ee43f;
case 0x5ee441:c.instructions+=4;goto B5ee441;
case 0x5ee444:c.instructions+=3;goto B5ee444;
case 0x5ee445:c.instructions+=2;goto B5ee445;
case 0x5ee447:c.instructions+=1;goto B5ee447;
case 0x5ee44c:goto L5ee44c;
case 0x5ee44e:c.instructions+=3;goto B5ee44e;
case 0x5ee450:c.instructions+=2;goto B5ee450;
case 0x5ee452:c.instructions+=1;goto B5ee452;
case 0x5ee454:goto L5ee454;
case 0x5ee457:c.instructions+=2;goto B5ee457;
case 0x5ee45d:c.instructions+=1;goto B5ee45d;
case 0x5ee461:goto L5ee461;
case 0x5ee465:c.instructions+=2;goto B5ee465;
case 0x5ee466:c.instructions+=1;goto B5ee466;
case 0x5ee46b:goto L5ee46b;
case 0x5ee46d:c.instructions+=14;goto B5ee46d;
case 0x5ee46f:c.instructions+=13;goto B5ee46f;
case 0x5ee472:c.instructions+=12;goto B5ee472;
case 0x5ee477:c.instructions+=11;goto B5ee477;
case 0x5ee479:c.instructions+=10;goto B5ee479;
case 0x5ee47b:c.instructions+=9;goto B5ee47b;
case 0x5ee47e:c.instructions+=8;goto B5ee47e;
case 0x5ee480:c.instructions+=7;goto B5ee480;
case 0x5ee483:c.instructions+=6;goto B5ee483;
case 0x5ee487:c.instructions+=5;goto B5ee487;
case 0x5ee489:c.instructions+=4;goto B5ee489;
case 0x5ee48a:c.instructions+=3;goto B5ee48a;
case 0x5ee48c:c.instructions+=2;goto B5ee48c;
case 0x5ee490:c.instructions+=1;goto B5ee490;
case 0x5ee495:goto L5ee495;
case 0x5ee49a:c.instructions+=11;goto B5ee49a;
case 0x5ee49e:c.instructions+=10;goto B5ee49e;
case 0x5ee4a4:c.instructions+=9;goto B5ee4a4;
case 0x5ee4a8:c.instructions+=8;goto B5ee4a8;
case 0x5ee4aa:c.instructions+=7;goto B5ee4aa;
case 0x5ee4ad:c.instructions+=6;goto B5ee4ad;
case 0x5ee4ae:c.instructions+=5;goto B5ee4ae;
case 0x5ee4b4:c.instructions+=4;goto B5ee4b4;
case 0x5ee4b7:c.instructions+=3;goto B5ee4b7;
case 0x5ee4b9:c.instructions+=2;goto B5ee4b9;
case 0x5ee4bd:c.instructions+=1;goto B5ee4bd;
case 0x5ee4bf:goto L5ee4bf;
case 0x5ee4c1:c.instructions+=6;goto B5ee4c1;
case 0x5ee4c3:c.instructions+=5;goto B5ee4c3;
case 0x5ee4c5:c.instructions+=4;goto B5ee4c5;
case 0x5ee4cb:c.instructions+=3;goto B5ee4cb;
case 0x5ee4cc:c.instructions+=2;goto B5ee4cc;
case 0x5ee4ce:c.instructions+=1;goto B5ee4ce;
case 0x5ee4d3:goto L5ee4d3;
case 0x5ee4d4:c.instructions+=2;goto B5ee4d4;
case 0x5ee4da:c.instructions+=1;goto B5ee4da;
case 0x5ee4df:goto L5ee4df;
case 0x5ee4e1:c.instructions+=1;goto B5ee4e1;
case 0x5ee4e6:goto L5ee4e6;
case 0x5ee4e7:c.instructions+=5;goto B5ee4e7;
case 0x5ee4e8:c.instructions+=4;goto B5ee4e8;
case 0x5ee4e9:c.instructions+=3;goto B5ee4e9;
case 0x5ee4ea:c.instructions+=2;goto B5ee4ea;
case 0x5ee4eb:c.instructions+=1;goto B5ee4eb;
case 0x5ee4f0:goto L5ee4f0;
case 0x5ee4f1:c.instructions+=17;goto B5ee4f1;
case 0x5ee4f3:c.instructions+=16;goto B5ee4f3;
case 0x5ee4f6:c.instructions+=15;goto B5ee4f6;
case 0x5ee4f9:c.instructions+=14;goto B5ee4f9;
case 0x5ee4fc:c.instructions+=13;goto B5ee4fc;
case 0x5ee4fd:c.instructions+=12;goto B5ee4fd;
case 0x5ee503:c.instructions+=11;goto B5ee503;
case 0x5ee506:c.instructions+=10;goto B5ee506;
case 0x5ee507:c.instructions+=9;goto B5ee507;
case 0x5ee508:c.instructions+=8;goto B5ee508;
case 0x5ee50a:c.instructions+=7;goto B5ee50a;
case 0x5ee50c:c.instructions+=6;goto B5ee50c;
case 0x5ee50e:c.instructions+=5;goto B5ee50e;
case 0x5ee510:c.instructions+=4;goto B5ee510;
case 0x5ee513:c.instructions+=3;goto B5ee513;
case 0x5ee516:c.instructions+=2;goto B5ee516;
case 0x5ee519:c.instructions+=1;goto B5ee519;
case 0x5ee51b:goto L5ee51b;
case 0x5ee51e:c.instructions+=2;goto B5ee51e;
case 0x5ee524:c.instructions+=1;goto B5ee524;
case 0x5ee527:goto L5ee527;
case 0x5ee52a:c.instructions+=3;goto B5ee52a;
case 0x5ee52b:c.instructions+=2;goto B5ee52b;
case 0x5ee52c:c.instructions+=1;goto B5ee52c;
case 0x5ee531:goto L5ee531;
case 0x5ee535:c.instructions+=4;goto B5ee535;
case 0x5ee538:c.instructions+=3;goto B5ee538;
case 0x5ee53b:c.instructions+=2;goto B5ee53b;
case 0x5ee53d:c.instructions+=1;goto B5ee53d;
case 0x5ee53f:goto L5ee53f;
case 0x5ee540:c.instructions+=1;goto B5ee540;
case 0x5ee545:goto L5ee545;
case 0x5ee548:c.instructions+=4;goto B5ee548;
case 0x5ee54a:c.instructions+=3;goto B5ee54a;
case 0x5ee54c:c.instructions+=2;goto B5ee54c;
case 0x5ee550:c.instructions+=1;goto B5ee550;
case 0x5ee552:goto L5ee552;
case 0x5ee555:c.instructions+=3;goto B5ee555;
case 0x5ee556:c.instructions+=2;goto B5ee556;
case 0x5ee557:c.instructions+=1;goto B5ee557;
case 0x5ee55c:goto L5ee55c;
case 0x5ee55f:c.instructions+=4;goto B5ee55f;
case 0x5ee562:c.instructions+=3;goto B5ee562;
case 0x5ee565:c.instructions+=2;goto B5ee565;
case 0x5ee567:c.instructions+=1;goto B5ee567;
case 0x5ee569:goto L5ee569;
case 0x5ee56d:goto L5ee56d;
case 0x5ee571:c.instructions+=3;goto B5ee571;
case 0x5ee572:c.instructions+=2;goto B5ee572;
case 0x5ee574:c.instructions+=1;goto B5ee574;
case 0x5ee576:goto L5ee576;
case 0x5ee57a:c.instructions+=2;goto B5ee57a;
case 0x5ee57c:c.instructions+=1;goto B5ee57c;
case 0x5ee57e:goto L5ee57e;
case 0x5ee581:c.instructions+=3;goto B5ee581;
case 0x5ee582:c.instructions+=2;goto B5ee582;
case 0x5ee586:c.instructions+=1;goto B5ee586;
case 0x5ee58b:goto L5ee58b;
case 0x5ee58e:c.instructions+=15;goto B5ee58e;
case 0x5ee591:c.instructions+=14;goto B5ee591;
case 0x5ee593:c.instructions+=13;goto B5ee593;
case 0x5ee595:c.instructions+=12;goto B5ee595;
case 0x5ee597:c.instructions+=11;goto B5ee597;
case 0x5ee59a:c.instructions+=10;goto B5ee59a;
case 0x5ee59e:c.instructions+=9;goto B5ee59e;
case 0x5ee5a1:c.instructions+=8;goto B5ee5a1;
case 0x5ee5a8:c.instructions+=7;goto B5ee5a8;
case 0x5ee5ac:c.instructions+=6;goto B5ee5ac;
case 0x5ee5b2:c.instructions+=5;goto B5ee5b2;
case 0x5ee5b9:c.instructions+=4;goto B5ee5b9;
case 0x5ee5c0:c.instructions+=3;goto B5ee5c0;
case 0x5ee5c7:c.instructions+=2;goto B5ee5c7;
case 0x5ee5c8:c.instructions+=1;goto B5ee5c8;
case 0x5ee5cd:goto L5ee5cd;
case 0x5ee5cf:c.instructions+=6;goto B5ee5cf;
case 0x5ee5d0:c.instructions+=5;goto B5ee5d0;
case 0x5ee5d1:c.instructions+=4;goto B5ee5d1;
case 0x5ee5d2:c.instructions+=3;goto B5ee5d2;
case 0x5ee5d4:c.instructions+=2;goto B5ee5d4;
case 0x5ee5d5:c.instructions+=1;goto B5ee5d5;
case 0x5ee5d8:goto L5ee5d8;
case 0x5ee5db:c.instructions+=4;goto B5ee5db;
case 0x5ee5e1:c.instructions+=3;goto B5ee5e1;
case 0x5ee5e3:c.instructions+=2;goto B5ee5e3;
case 0x5ee5e6:c.instructions+=1;goto B5ee5e6;
case 0x5ee5e8:goto L5ee5e8;
case 0x5ee5ef:c.instructions+=11;goto B5ee5ef;
case 0x5ee5f2:c.instructions+=10;goto B5ee5f2;
case 0x5ee5f9:c.instructions+=9;goto B5ee5f9;
case 0x5ee600:c.instructions+=8;goto B5ee600;
case 0x5ee607:c.instructions+=7;goto B5ee607;
case 0x5ee608:c.instructions+=6;goto B5ee608;
case 0x5ee609:c.instructions+=5;goto B5ee609;
case 0x5ee60a:c.instructions+=4;goto B5ee60a;
case 0x5ee60b:c.instructions+=3;goto B5ee60b;
case 0x5ee60d:c.instructions+=2;goto B5ee60d;
case 0x5ee60e:c.instructions+=1;goto B5ee60e;
case 0x5ee611:goto L5ee611;
case 0x5ee612:c.instructions+=6;goto B5ee612;
case 0x5ee613:c.instructions+=5;goto B5ee613;
case 0x5ee616:c.instructions+=4;goto B5ee616;
case 0x5ee617:c.instructions+=3;goto B5ee617;
case 0x5ee619:c.instructions+=2;goto B5ee619;
case 0x5ee61a:c.instructions+=1;goto B5ee61a;
case 0x5ee620:goto L5ee620;
case 0x5ee621:c.instructions+=11;goto B5ee621;
case 0x5ee623:c.instructions+=10;goto B5ee623;
case 0x5ee626:c.instructions+=9;goto B5ee626;
case 0x5ee629:c.instructions+=8;goto B5ee629;
case 0x5ee62a:c.instructions+=7;goto B5ee62a;
case 0x5ee62b:c.instructions+=6;goto B5ee62b;
case 0x5ee62d:c.instructions+=5;goto B5ee62d;
case 0x5ee636:c.instructions+=4;goto B5ee636;
case 0x5ee63b:c.instructions+=3;goto B5ee63b;
case 0x5ee63e:c.instructions+=2;goto B5ee63e;
case 0x5ee63f:c.instructions+=1;goto B5ee63f;
case 0x5ee645:goto L5ee645;
case 0x5ee648:c.instructions+=1;goto B5ee648;
case 0x5ee64e:goto L5ee64e;
case 0x5ee653:c.instructions+=3;goto B5ee653;
case 0x5ee655:c.instructions+=2;goto B5ee655;
case 0x5ee659:c.instructions+=1;goto B5ee659;
case 0x5ee65f:goto L5ee65f;
case 0x5ee661:c.instructions+=4;goto B5ee661;
case 0x5ee666:c.instructions+=3;goto B5ee666;
case 0x5ee667:c.instructions+=2;goto B5ee667;
case 0x5ee66c:c.instructions+=1;goto B5ee66c;
case 0x5ee671:goto L5ee671;
case 0x5ee675:c.instructions+=17;goto B5ee675;
case 0x5ee679:c.instructions+=16;goto B5ee679;
case 0x5ee67f:c.instructions+=15;goto B5ee67f;
case 0x5ee683:c.instructions+=14;goto B5ee683;
case 0x5ee689:c.instructions+=13;goto B5ee689;
case 0x5ee68f:c.instructions+=12;goto B5ee68f;
case 0x5ee695:c.instructions+=11;goto B5ee695;
case 0x5ee69c:c.instructions+=10;goto B5ee69c;
case 0x5ee69e:c.instructions+=9;goto B5ee69e;
case 0x5ee69f:c.instructions+=8;goto B5ee69f;
case 0x5ee6a6:c.instructions+=7;goto B5ee6a6;
case 0x5ee6aa:c.instructions+=6;goto B5ee6aa;
case 0x5ee6b0:c.instructions+=5;goto B5ee6b0;
case 0x5ee6b2:c.instructions+=4;goto B5ee6b2;
case 0x5ee6b5:c.instructions+=3;goto B5ee6b5;
case 0x5ee6b6:c.instructions+=2;goto B5ee6b6;
case 0x5ee6bb:c.instructions+=1;goto B5ee6bb;
case 0x5ee6c0:goto L5ee6c0;
case 0x5ee6c2:c.instructions+=11;goto B5ee6c2;
case 0x5ee6c9:c.instructions+=10;goto B5ee6c9;
case 0x5ee6cb:c.instructions+=9;goto B5ee6cb;
case 0x5ee6cc:c.instructions+=8;goto B5ee6cc;
case 0x5ee6d3:c.instructions+=7;goto B5ee6d3;
case 0x5ee6d7:c.instructions+=6;goto B5ee6d7;
case 0x5ee6dd:c.instructions+=5;goto B5ee6dd;
case 0x5ee6e0:c.instructions+=4;goto B5ee6e0;
case 0x5ee6e1:c.instructions+=3;goto B5ee6e1;
case 0x5ee6e6:c.instructions+=2;goto B5ee6e6;
case 0x5ee6e8:c.instructions+=1;goto B5ee6e8;
case 0x5ee6ed:goto L5ee6ed;
case 0x5ee6ef:c.instructions+=7;goto B5ee6ef;
case 0x5ee6f4:c.instructions+=6;goto B5ee6f4;
case 0x5ee6f8:c.instructions+=5;goto B5ee6f8;
case 0x5ee6f9:c.instructions+=4;goto B5ee6f9;
case 0x5ee6fe:c.instructions+=3;goto B5ee6fe;
case 0x5ee700:c.instructions+=2;goto B5ee700;
case 0x5ee702:c.instructions+=1;goto B5ee702;
case 0x5ee707:goto L5ee707;
case 0x5ee70c:c.instructions+=2;goto B5ee70c;
case 0x5ee70e:c.instructions+=1;goto B5ee70e;
case 0x5ee710:goto L5ee710;
case 0x5ee717:c.instructions+=11;goto B5ee717;
case 0x5ee71d:c.instructions+=10;goto B5ee71d;
case 0x5ee71e:c.instructions+=9;goto B5ee71e;
case 0x5ee725:c.instructions+=8;goto B5ee725;
case 0x5ee726:c.instructions+=7;goto B5ee726;
case 0x5ee72c:c.instructions+=6;goto B5ee72c;
case 0x5ee730:c.instructions+=5;goto B5ee730;
case 0x5ee732:c.instructions+=4;goto B5ee732;
case 0x5ee735:c.instructions+=3;goto B5ee735;
case 0x5ee736:c.instructions+=2;goto B5ee736;
case 0x5ee73b:c.instructions+=1;goto B5ee73b;
case 0x5ee740:goto L5ee740;
case 0x5ee744:c.instructions+=6;goto B5ee744;
case 0x5ee748:c.instructions+=5;goto B5ee748;
case 0x5ee74e:c.instructions+=4;goto B5ee74e;
case 0x5ee752:c.instructions+=3;goto B5ee752;
case 0x5ee758:c.instructions+=2;goto B5ee758;
case 0x5ee75e:c.instructions+=1;goto B5ee75e;
case 0x5ee763:goto L5ee763;
case 0x5ee769:c.instructions+=9;goto B5ee769;
case 0x5ee76f:c.instructions+=8;goto B5ee76f;
case 0x5ee775:c.instructions+=7;goto B5ee775;
case 0x5ee77b:c.instructions+=6;goto B5ee77b;
case 0x5ee781:c.instructions+=5;goto B5ee781;
case 0x5ee783:c.instructions+=4;goto B5ee783;
case 0x5ee789:c.instructions+=3;goto B5ee789;
case 0x5ee78f:c.instructions+=2;goto B5ee78f;
case 0x5ee795:c.instructions+=1;goto B5ee795;
case 0x5ee79a:goto L5ee79a;
case 0x5ee7a0:c.instructions+=5;goto B5ee7a0;
case 0x5ee7a1:c.instructions+=4;goto B5ee7a1;
case 0x5ee7a6:c.instructions+=3;goto B5ee7a6;
case 0x5ee7a7:c.instructions+=2;goto B5ee7a7;
case 0x5ee7ac:c.instructions+=1;goto B5ee7ac;
case 0x5ee7b1:goto L5ee7b1;
case 0x5ee7b5:c.instructions+=13;goto B5ee7b5;
case 0x5ee7b9:c.instructions+=12;goto B5ee7b9;
case 0x5ee7bf:c.instructions+=11;goto B5ee7bf;
case 0x5ee7c3:c.instructions+=10;goto B5ee7c3;
case 0x5ee7c5:c.instructions+=9;goto B5ee7c5;
case 0x5ee7cb:c.instructions+=8;goto B5ee7cb;
case 0x5ee7d0:c.instructions+=7;goto B5ee7d0;
case 0x5ee7d4:c.instructions+=6;goto B5ee7d4;
case 0x5ee7d5:c.instructions+=5;goto B5ee7d5;
case 0x5ee7da:c.instructions+=4;goto B5ee7da;
case 0x5ee7dc:c.instructions+=3;goto B5ee7dc;
case 0x5ee7e2:c.instructions+=2;goto B5ee7e2;
case 0x5ee7e8:c.instructions+=1;goto B5ee7e8;
case 0x5ee7ed:goto L5ee7ed;
case 0x5ee7f4:c.instructions+=10;goto B5ee7f4;
case 0x5ee7f6:c.instructions+=9;goto B5ee7f6;
case 0x5ee7f7:c.instructions+=8;goto B5ee7f7;
case 0x5ee7fe:c.instructions+=7;goto B5ee7fe;
case 0x5ee802:c.instructions+=6;goto B5ee802;
case 0x5ee808:c.instructions+=5;goto B5ee808;
case 0x5ee80a:c.instructions+=4;goto B5ee80a;
case 0x5ee80d:c.instructions+=3;goto B5ee80d;
case 0x5ee80e:c.instructions+=2;goto B5ee80e;
case 0x5ee813:c.instructions+=1;goto B5ee813;
case 0x5ee818:goto L5ee818;
case 0x5ee81f:c.instructions+=11;goto B5ee81f;
case 0x5ee821:c.instructions+=10;goto B5ee821;
case 0x5ee822:c.instructions+=9;goto B5ee822;
case 0x5ee829:c.instructions+=8;goto B5ee829;
case 0x5ee82d:c.instructions+=7;goto B5ee82d;
case 0x5ee833:c.instructions+=6;goto B5ee833;
case 0x5ee835:c.instructions+=5;goto B5ee835;
case 0x5ee837:c.instructions+=4;goto B5ee837;
case 0x5ee83a:c.instructions+=3;goto B5ee83a;
case 0x5ee83b:c.instructions+=2;goto B5ee83b;
case 0x5ee840:c.instructions+=1;goto B5ee840;
case 0x5ee845:goto L5ee845;
case 0x5ee847:c.instructions+=3;goto B5ee847;
case 0x5ee84c:c.instructions+=2;goto B5ee84c;
case 0x5ee84e:c.instructions+=1;goto B5ee84e;
case 0x5ee850:goto L5ee850;
case 0x5ee857:c.instructions+=10;goto B5ee857;
case 0x5ee859:c.instructions+=9;goto B5ee859;
case 0x5ee85a:c.instructions+=8;goto B5ee85a;
case 0x5ee861:c.instructions+=7;goto B5ee861;
case 0x5ee865:c.instructions+=6;goto B5ee865;
case 0x5ee86b:c.instructions+=5;goto B5ee86b;
case 0x5ee86e:c.instructions+=4;goto B5ee86e;
case 0x5ee86f:c.instructions+=3;goto B5ee86f;
case 0x5ee874:c.instructions+=2;goto B5ee874;
case 0x5ee876:c.instructions+=1;goto B5ee876;
case 0x5ee87b:goto L5ee87b;
case 0x5ee87f:c.instructions+=7;goto B5ee87f;
case 0x5ee883:c.instructions+=6;goto B5ee883;
case 0x5ee889:c.instructions+=5;goto B5ee889;
case 0x5ee88d:c.instructions+=4;goto B5ee88d;
case 0x5ee893:c.instructions+=3;goto B5ee893;
case 0x5ee899:c.instructions+=2;goto B5ee899;
case 0x5ee89f:c.instructions+=1;goto B5ee89f;
case 0x5ee8a1:goto L5ee8a1;
case 0x5ee8a7:c.instructions+=7;goto B5ee8a7;
case 0x5ee8ad:c.instructions+=6;goto B5ee8ad;
case 0x5ee8b3:c.instructions+=5;goto B5ee8b3;
case 0x5ee8b9:c.instructions+=4;goto B5ee8b9;
case 0x5ee8bf:c.instructions+=3;goto B5ee8bf;
case 0x5ee8c1:c.instructions+=2;goto B5ee8c1;
case 0x5ee8c7:c.instructions+=1;goto B5ee8c7;
case 0x5ee8cd:goto L5ee8cd;
case 0x5ee8d3:goto L5ee8d3;
case 0x5ee8d8:c.instructions+=2;goto B5ee8d8;
case 0x5ee8da:c.instructions+=1;goto B5ee8da;
case 0x5ee8e0:goto L5ee8e0;
case 0x5ee8e7:c.instructions+=11;goto B5ee8e7;
case 0x5ee8ee:c.instructions+=10;goto B5ee8ee;
case 0x5ee8f5:c.instructions+=9;goto B5ee8f5;
case 0x5ee8fb:c.instructions+=8;goto B5ee8fb;
case 0x5ee8ff:c.instructions+=7;goto B5ee8ff;
case 0x5ee901:c.instructions+=6;goto B5ee901;
case 0x5ee907:c.instructions+=5;goto B5ee907;
case 0x5ee90b:c.instructions+=4;goto B5ee90b;
case 0x5ee911:c.instructions+=3;goto B5ee911;
case 0x5ee913:c.instructions+=2;goto B5ee913;
case 0x5ee916:c.instructions+=1;goto B5ee916;
case 0x5ee918:goto L5ee918;
case 0x5ee91e:goto L5ee91e;
case 0x5ee920:c.instructions+=4;goto B5ee920;
case 0x5ee926:c.instructions+=3;goto B5ee926;
case 0x5ee928:c.instructions+=2;goto B5ee928;
case 0x5ee92b:c.instructions+=1;goto B5ee92b;
case 0x5ee92d:goto L5ee92d;
case 0x5ee92f:c.instructions+=2;goto B5ee92f;
case 0x5ee935:c.instructions+=1;goto B5ee935;
case 0x5ee937:goto L5ee937;
case 0x5ee93e:c.instructions+=3;goto B5ee93e;
case 0x5ee940:c.instructions+=2;goto B5ee940;
case 0x5ee943:c.instructions+=1;goto B5ee943;
case 0x5ee945:goto L5ee945;
case 0x5ee94c:c.instructions+=5;goto B5ee94c;
case 0x5ee953:c.instructions+=4;goto B5ee953;
case 0x5ee955:c.instructions+=3;goto B5ee955;
case 0x5ee95b:c.instructions+=2;goto B5ee95b;
case 0x5ee95d:c.instructions+=1;goto B5ee95d;
case 0x5ee964:goto L5ee964;
case 0x5ee96b:c.instructions+=3;goto B5ee96b;
case 0x5ee96d:c.instructions+=2;goto B5ee96d;
case 0x5ee970:c.instructions+=1;goto B5ee970;
case 0x5ee972:goto L5ee972;
case 0x5ee979:c.instructions+=7;goto B5ee979;
case 0x5ee980:c.instructions+=6;goto B5ee980;
case 0x5ee987:c.instructions+=5;goto B5ee987;
case 0x5ee98e:c.instructions+=4;goto B5ee98e;
case 0x5ee990:c.instructions+=3;goto B5ee990;
case 0x5ee996:c.instructions+=2;goto B5ee996;
case 0x5ee998:c.instructions+=1;goto B5ee998;
case 0x5ee99f:goto L5ee99f;
case 0x5ee9a0:c.instructions+=5;goto B5ee9a0;
case 0x5ee9a1:c.instructions+=4;goto B5ee9a1;
case 0x5ee9a2:c.instructions+=3;goto B5ee9a2;
case 0x5ee9a4:c.instructions+=2;goto B5ee9a4;
case 0x5ee9a5:c.instructions+=1;goto B5ee9a5;
case 0x5ee9b0:goto L5ee9b0;
case 0x5ee9b1:c.instructions+=9;goto B5ee9b1;
case 0x5ee9b8:c.instructions+=8;goto B5ee9b8;
case 0x5ee9bf:c.instructions+=7;goto B5ee9bf;
case 0x5ee9c6:c.instructions+=6;goto B5ee9c6;
case 0x5ee9cd:c.instructions+=5;goto B5ee9cd;
case 0x5ee9d4:c.instructions+=4;goto B5ee9d4;
case 0x5ee9db:c.instructions+=3;goto B5ee9db;
case 0x5ee9dd:c.instructions+=2;goto B5ee9dd;
case 0x5ee9e0:c.instructions+=1;goto B5ee9e0;
case 0x5ee9e2:goto L5ee9e2;
case 0x5ee9e6:c.instructions+=8;goto B5ee9e6;
case 0x5ee9e8:c.instructions+=7;goto B5ee9e8;
case 0x5ee9ea:c.instructions+=6;goto B5ee9ea;
case 0x5ee9ec:c.instructions+=5;goto B5ee9ec;
case 0x5ee9ee:c.instructions+=4;goto B5ee9ee;
case 0x5ee9f4:c.instructions+=3;goto B5ee9f4;
case 0x5ee9f6:c.instructions+=2;goto B5ee9f6;
case 0x5ee9f9:c.instructions+=1;goto B5ee9f9;
case 0x5ee9fb:goto L5ee9fb;
case 0x5eea01:c.instructions+=2;goto B5eea01;
case 0x5eea02:c.instructions+=1;goto B5eea02;
case 0x5eea05:goto L5eea05;
case 0x5eea07:c.instructions+=7;goto B5eea07;
case 0x5eea0b:c.instructions+=6;goto B5eea0b;
case 0x5eea0d:c.instructions+=5;goto B5eea0d;
case 0x5eea0e:c.instructions+=4;goto B5eea0e;
case 0x5eea12:c.instructions+=3;goto B5eea12;
case 0x5eea13:c.instructions+=2;goto B5eea13;
case 0x5eea18:c.instructions+=1;goto B5eea18;
case 0x5eea1d:goto L5eea1d;
case 0x5eea23:c.instructions+=3;goto B5eea23;
case 0x5eea25:c.instructions+=2;goto B5eea25;
case 0x5eea28:c.instructions+=1;goto B5eea28;
case 0x5eea2a:goto L5eea2a;
case 0x5eea30:goto L5eea30;
case 0x5eea36:goto L5eea36;
case 0x5eea37:c.instructions+=1;goto B5eea37;
case 0x5eea40:goto L5eea40;
case 0x5eea41:c.instructions+=4;goto B5eea41;
case 0x5eea44:c.instructions+=3;goto B5eea44;
case 0x5eea46:c.instructions+=2;goto B5eea46;
case 0x5eea48:c.instructions+=1;goto B5eea48;
case 0x5eea4a:goto L5eea4a;
case 0x5eea50:c.instructions+=1;goto B5eea50;
case 0x5eea52:goto L5eea52;
case 0x5eea57:c.instructions+=9;goto B5eea57;
case 0x5eea5a:c.instructions+=8;goto B5eea5a;
case 0x5eea5e:c.instructions+=7;goto B5eea5e;
case 0x5eea62:c.instructions+=6;goto B5eea62;
case 0x5eea67:c.instructions+=5;goto B5eea67;
case 0x5eea6d:c.instructions+=4;goto B5eea6d;
case 0x5eea70:c.instructions+=3;goto B5eea70;
case 0x5eea72:c.instructions+=2;goto B5eea72;
case 0x5eea75:c.instructions+=1;goto B5eea75;
case 0x5eea77:goto L5eea77;
case 0x5eea79:c.instructions+=2;goto B5eea79;
case 0x5eea7a:c.instructions+=1;goto B5eea7a;
case 0x5eea7b:goto L5eea7b;
case 0x5eea7e:c.instructions+=2;goto B5eea7e;
case 0x5eea80:c.instructions+=1;goto B5eea80;
case 0x5eea82:goto L5eea82;
case 0x5eea88:c.instructions+=1;goto B5eea88;
case 0x5eea8a:goto L5eea8a;
case 0x5eea8d:c.instructions+=9;goto B5eea8d;
case 0x5eea93:c.instructions+=8;goto B5eea93;
case 0x5eea95:c.instructions+=7;goto B5eea95;
case 0x5eea99:c.instructions+=6;goto B5eea99;
case 0x5eea9d:c.instructions+=5;goto B5eea9d;
case 0x5eeaa3:c.instructions+=4;goto B5eeaa3;
case 0x5eeaa6:c.instructions+=3;goto B5eeaa6;
case 0x5eeaa8:c.instructions+=2;goto B5eeaa8;
case 0x5eeaab:c.instructions+=1;goto B5eeaab;
case 0x5eeaad:goto L5eeaad;
case 0x5eeaaf:c.instructions+=3;goto B5eeaaf;
case 0x5eeab4:c.instructions+=2;goto B5eeab4;
case 0x5eeab5:c.instructions+=1;goto B5eeab5;
case 0x5eeab6:goto L5eeab6;
case 0x5eeab9:c.instructions+=6;goto B5eeab9;
case 0x5eeabb:c.instructions+=5;goto B5eeabb;
case 0x5eeabd:c.instructions+=4;goto B5eeabd;
case 0x5eeabf:c.instructions+=3;goto B5eeabf;
case 0x5eeac1:c.instructions+=2;goto B5eeac1;
case 0x5eeac4:c.instructions+=1;goto B5eeac4;
case 0x5eeac6:goto L5eeac6;
case 0x5eeac8:c.instructions+=3;goto B5eeac8;
case 0x5eeacd:c.instructions+=2;goto B5eeacd;
case 0x5eeace:c.instructions+=1;goto B5eeace;
case 0x5eeacf:goto L5eeacf;
case 0x5eead2:c.instructions+=6;goto B5eead2;
case 0x5eead8:c.instructions+=5;goto B5eead8;
case 0x5eeada:c.instructions+=4;goto B5eeada;
case 0x5eeadc:c.instructions+=3;goto B5eeadc;
case 0x5eeade:c.instructions+=2;goto B5eeade;
case 0x5eeae1:c.instructions+=1;goto B5eeae1;
case 0x5eeae3:goto L5eeae3;
case 0x5eeae8:c.instructions+=2;goto B5eeae8;
case 0x5eeae9:c.instructions+=1;goto B5eeae9;
case 0x5eeaea:goto L5eeaea;
case 0x5eeaef:c.instructions+=2;goto B5eeaef;
case 0x5eeaf0:c.instructions+=1;goto B5eeaf0;
case 0x5eeaf1:goto L5eeaf1;
case 0x5eeaf3:goto L5eeaf3;
case 0x5eeaf4:c.instructions+=1;goto B5eeaf4;
case 0x5eeb00:goto L5eeb00;
case 0x5eeb03:c.instructions+=5;goto B5eeb03;
case 0x5eeb06:c.instructions+=4;goto B5eeb06;
case 0x5eeb0c:c.instructions+=3;goto B5eeb0c;
case 0x5eeb0e:c.instructions+=2;goto B5eeb0e;
case 0x5eeb11:c.instructions+=1;goto B5eeb11;
case 0x5eeb13:goto L5eeb13;
case 0x5eeb19:c.instructions+=2;goto B5eeb19;
case 0x5eeb1c:c.instructions+=1;goto B5eeb1c;
case 0x5eeb1d:goto L5eeb1d;
case 0x5eeb20:c.instructions+=3;goto B5eeb20;
case 0x5eeb26:c.instructions+=2;goto B5eeb26;
case 0x5eeb28:c.instructions+=1;goto B5eeb28;
case 0x5eeb2a:goto L5eeb2a;
case 0x5eeb2f:c.instructions+=1;goto B5eeb2f;
case 0x5eeb31:goto L5eeb31;
case 0x5eeb36:c.instructions+=9;goto B5eeb36;
case 0x5eeb38:c.instructions+=8;goto B5eeb38;
case 0x5eeb3b:c.instructions+=7;goto B5eeb3b;
case 0x5eeb3f:c.instructions+=6;goto B5eeb3f;
case 0x5eeb43:c.instructions+=5;goto B5eeb43;
case 0x5eeb49:c.instructions+=4;goto B5eeb49;
case 0x5eeb4c:c.instructions+=3;goto B5eeb4c;
case 0x5eeb4e:c.instructions+=2;goto B5eeb4e;
case 0x5eeb51:c.instructions+=1;goto B5eeb51;
case 0x5eeb57:goto L5eeb57;
case 0x5eeb59:c.instructions+=3;goto B5eeb59;
case 0x5eeb5f:c.instructions+=2;goto B5eeb5f;
case 0x5eeb62:c.instructions+=1;goto B5eeb62;
case 0x5eeb63:goto L5eeb63;
case 0x5eeb66:c.instructions+=2;goto B5eeb66;
case 0x5eeb68:c.instructions+=1;goto B5eeb68;
case 0x5eeb6e:goto L5eeb6e;
case 0x5eeb73:c.instructions+=1;goto B5eeb73;
case 0x5eeb79:goto L5eeb79;
case 0x5eeb7f:c.instructions+=9;goto B5eeb7f;
case 0x5eeb81:c.instructions+=8;goto B5eeb81;
case 0x5eeb85:c.instructions+=7;goto B5eeb85;
case 0x5eeb89:c.instructions+=6;goto B5eeb89;
case 0x5eeb8f:c.instructions+=5;goto B5eeb8f;
case 0x5eeb93:c.instructions+=4;goto B5eeb93;
case 0x5eeb96:c.instructions+=3;goto B5eeb96;
case 0x5eeb98:c.instructions+=2;goto B5eeb98;
case 0x5eeb9b:c.instructions+=1;goto B5eeb9b;
case 0x5eeb9d:goto L5eeb9d;
case 0x5eeb9f:c.instructions+=6;goto B5eeb9f;
case 0x5eeba2:c.instructions+=5;goto B5eeba2;
case 0x5eeba8:c.instructions+=4;goto B5eeba8;
case 0x5eebac:c.instructions+=3;goto B5eebac;
case 0x5eebaf:c.instructions+=2;goto B5eebaf;
case 0x5eebb2:c.instructions+=1;goto B5eebb2;
case 0x5eebb3:goto L5eebb3;
case 0x5eebb6:c.instructions+=7;goto B5eebb6;
case 0x5eebb8:c.instructions+=6;goto B5eebb8;
case 0x5eebbc:c.instructions+=5;goto B5eebbc;
case 0x5eebc0:c.instructions+=4;goto B5eebc0;
case 0x5eebc4:c.instructions+=3;goto B5eebc4;
case 0x5eebc6:c.instructions+=2;goto B5eebc6;
case 0x5eebc9:c.instructions+=1;goto B5eebc9;
case 0x5eebcb:goto L5eebcb;
case 0x5eebcd:c.instructions+=5;goto B5eebcd;
case 0x5eebd1:c.instructions+=4;goto B5eebd1;
case 0x5eebd4:c.instructions+=3;goto B5eebd4;
case 0x5eebd7:c.instructions+=2;goto B5eebd7;
case 0x5eebda:c.instructions+=1;goto B5eebda;
case 0x5eebdb:goto L5eebdb;
case 0x5eebde:c.instructions+=5;goto B5eebde;
case 0x5eebe4:c.instructions+=4;goto B5eebe4;
case 0x5eebe8:c.instructions+=3;goto B5eebe8;
case 0x5eebea:c.instructions+=2;goto B5eebea;
case 0x5eebed:c.instructions+=1;goto B5eebed;
case 0x5eebef:goto L5eebef;
case 0x5eebf1:c.instructions+=2;goto B5eebf1;
case 0x5eebf5:c.instructions+=1;goto B5eebf5;
case 0x5eebf9:goto L5eebf9;
case 0x5eebfc:goto L5eebfc;
case 0x5eebff:c.instructions+=1;goto B5eebff;
case 0x5eec00:goto L5eec00;
case 0x5eec07:c.instructions+=1;goto B5eec07;
case 0x5eec09:goto L5eec09;
case 0x5eec0d:c.instructions+=4;goto B5eec0d;
case 0x5eec10:c.instructions+=3;goto B5eec10;
case 0x5eec12:c.instructions+=2;goto B5eec12;
case 0x5eec16:c.instructions+=1;goto B5eec16;
case 0x5eec18:goto L5eec18;
case 0x5eec19:c.instructions+=4;goto B5eec19;
case 0x5eec1c:c.instructions+=3;goto B5eec1c;
case 0x5eec1e:c.instructions+=2;goto B5eec1e;
case 0x5eec1f:c.instructions+=1;goto B5eec1f;
case 0x5eec21:goto L5eec21;
case 0x5eec24:c.instructions+=5;goto B5eec24;
case 0x5eec27:c.instructions+=4;goto B5eec27;
case 0x5eec29:c.instructions+=3;goto B5eec29;
case 0x5eec2b:c.instructions+=2;goto B5eec2b;
case 0x5eec2e:c.instructions+=1;goto B5eec2e;
case 0x5eec30:goto L5eec30;
case 0x5eec32:c.instructions+=1;goto B5eec32;
case 0x5eec35:goto L5eec35;
case 0x5eec37:c.instructions+=1;goto B5eec37;
case 0x5eec3a:goto L5eec3a;
case 0x5eec3d:c.instructions+=2;goto B5eec3d;
case 0x5eec40:c.instructions+=1;goto B5eec40;
case 0x5eec43:goto L5eec43;
case 0x5eec47:c.instructions+=5;goto B5eec47;
case 0x5eec48:c.instructions+=4;goto B5eec48;
case 0x5eec4c:c.instructions+=3;goto B5eec4c;
case 0x5eec4f:c.instructions+=2;goto B5eec4f;
case 0x5eec51:c.instructions+=1;goto B5eec51;
case 0x5eec53:goto L5eec53;
case 0x5eec56:c.instructions+=2;goto B5eec56;
case 0x5eec58:c.instructions+=1;goto B5eec58;
case 0x5eec5a:goto L5eec5a;
case 0x5eec5c:c.instructions+=3;goto B5eec5c;
case 0x5eec5f:c.instructions+=2;goto B5eec5f;
case 0x5eec60:c.instructions+=1;goto B5eec60;
case 0x5eec63:goto L5eec63;
case 0x5eec66:c.instructions+=5;goto B5eec66;
case 0x5eec69:c.instructions+=4;goto B5eec69;
case 0x5eec6b:c.instructions+=3;goto B5eec6b;
case 0x5eec6d:c.instructions+=2;goto B5eec6d;
case 0x5eec70:c.instructions+=1;goto B5eec70;
case 0x5eec72:goto L5eec72;
case 0x5eec74:c.instructions+=2;goto B5eec74;
case 0x5eec75:c.instructions+=1;goto B5eec75;
case 0x5eec78:goto L5eec78;
case 0x5eec7a:c.instructions+=2;goto B5eec7a;
case 0x5eec7b:c.instructions+=1;goto B5eec7b;
case 0x5eec80:goto L5eec80;
case 0x5eec83:c.instructions+=6;goto B5eec83;
case 0x5eec84:c.instructions+=5;goto B5eec84;
case 0x5eec85:c.instructions+=4;goto B5eec85;
case 0x5eec86:c.instructions+=3;goto B5eec86;
case 0x5eec87:c.instructions+=2;goto B5eec87;
case 0x5eec89:c.instructions+=1;goto B5eec89;
case 0x5eec90:goto L5eec90;
case 0x5eec93:c.instructions+=6;goto B5eec93;
case 0x5eec95:c.instructions+=5;goto B5eec95;
case 0x5eec96:c.instructions+=4;goto B5eec96;
case 0x5eec98:c.instructions+=3;goto B5eec98;
case 0x5eec9c:c.instructions+=2;goto B5eec9c;
case 0x5eeca0:c.instructions+=1;goto B5eeca0;
case 0x5eeca2:goto L5eeca2;
case 0x5eeca8:goto L5eeca8;
case 0x5eecaa:c.instructions+=5;goto B5eecaa;
case 0x5eecad:c.instructions+=4;goto B5eecad;
case 0x5eecae:c.instructions+=3;goto B5eecae;
case 0x5eecaf:c.instructions+=2;goto B5eecaf;
case 0x5eecb1:c.instructions+=1;goto B5eecb1;
case 0x5eecb6:goto L5eecb6;
case 0x5eecb8:c.instructions+=1;goto B5eecb8;
case 0x5eecba:goto L5eecba;
case 0x5eecbe:c.instructions+=4;goto B5eecbe;
case 0x5eecbf:c.instructions+=3;goto B5eecbf;
case 0x5eecc2:c.instructions+=2;goto B5eecc2;
case 0x5eecc4:c.instructions+=1;goto B5eecc4;
case 0x5eecc8:goto L5eecc8;
case 0x5eeccc:c.instructions+=7;goto B5eeccc;
case 0x5eeccf:c.instructions+=6;goto B5eeccf;
case 0x5eecd0:c.instructions+=5;goto B5eecd0;
case 0x5eecd3:c.instructions+=4;goto B5eecd3;
case 0x5eecd4:c.instructions+=3;goto B5eecd4;
case 0x5eecd6:c.instructions+=2;goto B5eecd6;
case 0x5eecda:c.instructions+=1;goto B5eecda;
case 0x5eecdc:goto L5eecdc;
case 0x5eece0:c.instructions+=2;goto B5eece0;
case 0x5eece2:c.instructions+=1;goto B5eece2;
case 0x5eece4:goto L5eece4;
case 0x5eece6:goto L5eece6;
case 0x5eece9:c.instructions+=1;goto B5eece9;
case 0x5eeceb:goto L5eeceb;
case 0x5eecf1:goto L5eecf1;
case 0x5eecf3:c.instructions+=8;goto B5eecf3;
case 0x5eecf6:c.instructions+=7;goto B5eecf6;
case 0x5eecf7:c.instructions+=6;goto B5eecf7;
case 0x5eecfa:c.instructions+=5;goto B5eecfa;
case 0x5eecfd:c.instructions+=4;goto B5eecfd;
case 0x5eed00:c.instructions+=3;goto B5eed00;
case 0x5eed03:c.instructions+=2;goto B5eed03;
case 0x5eed05:c.instructions+=1;goto B5eed05;
case 0x5eed07:goto L5eed07;
case 0x5eed08:c.instructions+=5;goto B5eed08;
case 0x5eed09:c.instructions+=4;goto B5eed09;
case 0x5eed0a:c.instructions+=3;goto B5eed0a;
case 0x5eed0b:c.instructions+=2;goto B5eed0b;
case 0x5eed0e:c.instructions+=1;goto B5eed0e;
case 0x5eed10:goto L5eed10;
case 0x5eed15:c.instructions+=7;goto B5eed15;
case 0x5eed18:c.instructions+=6;goto B5eed18;
case 0x5eed19:c.instructions+=5;goto B5eed19;
case 0x5eed1a:c.instructions+=4;goto B5eed1a;
case 0x5eed1c:c.instructions+=3;goto B5eed1c;
case 0x5eed1e:c.instructions+=2;goto B5eed1e;
case 0x5eed20:c.instructions+=1;goto B5eed20;
case 0x5eed26:goto L5eed26;
case 0x5eed27:c.instructions+=2;goto B5eed27;
case 0x5eed28:c.instructions+=1;goto B5eed28;
case 0x5eed30:goto L5eed30;
case 0x5eed37:c.instructions+=2;goto B5eed37;
case 0x5eed39:c.instructions+=1;goto B5eed39;
case 0x5eed3f:goto L5eed3f;
case 0x5eed42:c.instructions+=5;goto B5eed42;
case 0x5eed45:c.instructions+=4;goto B5eed45;
case 0x5eed49:c.instructions+=3;goto B5eed49;
case 0x5eed4d:c.instructions+=2;goto B5eed4d;
case 0x5eed4f:c.instructions+=1;goto B5eed4f;
case 0x5eed55:goto L5eed55;
case 0x5eed58:c.instructions+=3;goto B5eed58;
case 0x5eed5b:c.instructions+=2;goto B5eed5b;
case 0x5eed5d:c.instructions+=1;goto B5eed5d;
case 0x5eed5f:goto L5eed5f;
case 0x5eed64:goto L5eed64;
case 0x5eed66:c.instructions+=1;goto B5eed66;
case 0x5eed68:goto L5eed68;
case 0x5eed6a:goto L5eed6a;
case 0x5eed6c:c.instructions+=4;goto B5eed6c;
case 0x5eed6f:c.instructions+=3;goto B5eed6f;
case 0x5eed72:c.instructions+=2;goto B5eed72;
case 0x5eed74:c.instructions+=1;goto B5eed74;
case 0x5eed76:goto L5eed76;
case 0x5eed7b:goto L5eed7b;
case 0x5eed7d:c.instructions+=1;goto B5eed7d;
case 0x5eed7f:goto L5eed7f;
case 0x5eed81:goto L5eed81;
case 0x5eed83:c.instructions+=1;goto B5eed83;
case 0x5eed89:goto L5eed89;
case 0x5eed8b:c.instructions+=1;goto B5eed8b;
case 0x5eed91:goto L5eed91;
case 0x5eed93:c.instructions+=1;goto B5eed93;
case 0x5eed95:goto L5eed95;
case 0x5eed9c:c.instructions+=1;goto B5eed9c;
case 0x5eed9e:goto L5eed9e;
case 0x5eeda0:goto L5eeda0;
case 0x5eeda2:c.instructions+=9;goto B5eeda2;
case 0x5eeda8:c.instructions+=8;goto B5eeda8;
case 0x5eedaa:c.instructions+=7;goto B5eedaa;
case 0x5eedb0:c.instructions+=6;goto B5eedb0;
case 0x5eedb4:c.instructions+=5;goto B5eedb4;
case 0x5eedba:c.instructions+=4;goto B5eedba;
case 0x5eedbe:c.instructions+=3;goto B5eedbe;
case 0x5eedc0:c.instructions+=2;goto B5eedc0;
case 0x5eedc3:c.instructions+=1;goto B5eedc3;
case 0x5eedc9:goto L5eedc9;
case 0x5eedcc:c.instructions+=4;goto B5eedcc;
case 0x5eedcd:c.instructions+=3;goto B5eedcd;
case 0x5eedd0:c.instructions+=2;goto B5eedd0;
case 0x5eedd1:c.instructions+=1;goto B5eedd1;
case 0x5eedd6:goto L5eedd6;
case 0x5eeddc:c.instructions+=4;goto B5eeddc;
case 0x5eeddf:c.instructions+=3;goto B5eeddf;
case 0x5eede1:c.instructions+=2;goto B5eede1;
case 0x5eede4:c.instructions+=1;goto B5eede4;
case 0x5eede6:goto L5eede6;
case 0x5eede9:c.instructions+=3;goto B5eede9;
case 0x5eedec:c.instructions+=2;goto B5eedec;
case 0x5eedee:c.instructions+=1;goto B5eedee;
case 0x5eedf0:goto L5eedf0;
case 0x5eedf3:c.instructions+=6;goto B5eedf3;
case 0x5eedf7:c.instructions+=5;goto B5eedf7;
case 0x5eedfc:c.instructions+=4;goto B5eedfc;
case 0x5eee00:c.instructions+=3;goto B5eee00;
case 0x5eee06:c.instructions+=2;goto B5eee06;
case 0x5eee0c:c.instructions+=1;goto B5eee0c;
case 0x5eee0e:goto L5eee0e;
case 0x5eee11:c.instructions+=4;goto B5eee11;
case 0x5eee15:c.instructions+=3;goto B5eee15;
case 0x5eee1a:c.instructions+=2;goto B5eee1a;
case 0x5eee1e:c.instructions+=1;goto B5eee1e;
case 0x5eee24:goto L5eee24;
case 0x5eee25:c.instructions+=3;goto B5eee25;
case 0x5eee2b:c.instructions+=2;goto B5eee2b;
case 0x5eee2e:c.instructions+=1;goto B5eee2e;
case 0x5eee33:goto L5eee33;
case 0x5eee37:c.instructions+=6;goto B5eee37;
case 0x5eee3b:c.instructions+=5;goto B5eee3b;
case 0x5eee3d:c.instructions+=4;goto B5eee3d;
case 0x5eee43:c.instructions+=3;goto B5eee43;
case 0x5eee45:c.instructions+=2;goto B5eee45;
case 0x5eee48:c.instructions+=1;goto B5eee48;
case 0x5eee4a:goto L5eee4a;
case 0x5eee4f:c.instructions+=4;goto B5eee4f;
case 0x5eee55:c.instructions+=3;goto B5eee55;
case 0x5eee5a:c.instructions+=2;goto B5eee5a;
case 0x5eee5b:c.instructions+=1;goto B5eee5b;
case 0x5eee60:goto L5eee60;
case 0x5eee65:c.instructions+=3;goto B5eee65;
case 0x5eee66:c.instructions+=2;goto B5eee66;
case 0x5eee68:c.instructions+=1;goto B5eee68;
case 0x5eee6e:goto L5eee6e;
case 0x5eee6f:c.instructions+=1;goto B5eee6f;
case 0x5eee70:goto L5eee70;
case 0x5eee71:c.instructions+=3;goto B5eee71;
case 0x5eee72:c.instructions+=2;goto B5eee72;
case 0x5eee75:c.instructions+=1;goto B5eee75;
case 0x5eee80:goto L5eee80;
case 0x5eee83:c.instructions+=3;goto B5eee83;
case 0x5eee8a:c.instructions+=2;goto B5eee8a;
case 0x5eee90:c.instructions+=1;goto B5eee90;
case 0x5eeea0:goto L5eeea0;
case 0x5eeea7:c.instructions+=1;goto B5eeea7;
case 0x5eeea9:goto L5eeea9;
case 0x5eeeaf:c.instructions+=1;goto B5eeeaf;
case 0x5eeeb0:goto L5eeeb0;
case 0x5eeeb6:c.instructions+=2;goto B5eeeb6;
case 0x5eeebc:c.instructions+=1;goto B5eeebc;
case 0x5eeec0:goto L5eeec0;
case 0x5eeec4:c.instructions+=6;goto B5eeec4;
case 0x5eeec7:c.instructions+=5;goto B5eeec7;
case 0x5eeec8:c.instructions+=4;goto B5eeec8;
case 0x5eeecc:c.instructions+=3;goto B5eeecc;
case 0x5eeecf:c.instructions+=2;goto B5eeecf;
case 0x5eeed1:c.instructions+=1;goto B5eeed1;
case 0x5eeed3:goto L5eeed3;
case 0x5eeed5:goto L5eeed5;
case 0x5eeed8:c.instructions+=2;goto B5eeed8;
case 0x5eeedb:c.instructions+=1;goto B5eeedb;
case 0x5eeedd:goto L5eeedd;
case 0x5eeee2:c.instructions+=2;goto B5eeee2;
case 0x5eeee3:c.instructions+=1;goto B5eeee3;
case 0x5eeee4:goto L5eeee4;
case 0x5eeee6:c.instructions+=2;goto B5eeee6;
case 0x5eeee7:c.instructions+=1;goto B5eeee7;
case 0x5eeef0:goto L5eeef0;
case 0x5eeef6:c.instructions+=4;goto B5eeef6;
case 0x5eeefc:c.instructions+=3;goto B5eeefc;
case 0x5eeefe:c.instructions+=2;goto B5eeefe;
case 0x5eef01:c.instructions+=1;goto B5eef01;
case 0x5eef03:goto L5eef03;
case 0x5eef06:c.instructions+=1;goto B5eef06;
case 0x5eef08:goto L5eef08;
case 0x5eef0a:c.instructions+=1;goto B5eef0a;
case 0x5eef0b:goto L5eef0b;
case 0x5eef0e:c.instructions+=2;goto B5eef0e;
case 0x5eef11:c.instructions+=1;goto B5eef11;
case 0x5eef20:goto L5eef20;
case 0x5eef21:c.instructions+=8;goto B5eef21;
case 0x5eef27:c.instructions+=7;goto B5eef27;
case 0x5eef28:c.instructions+=6;goto B5eef28;
case 0x5eef29:c.instructions+=5;goto B5eef29;
case 0x5eef2b:c.instructions+=4;goto B5eef2b;
case 0x5eef2d:c.instructions+=3;goto B5eef2d;
case 0x5eef2f:c.instructions+=2;goto B5eef2f;
case 0x5eef31:c.instructions+=1;goto B5eef31;
case 0x5eef33:goto L5eef33;
case 0x5eef3a:c.instructions+=3;goto B5eef3a;
case 0x5eef3d:c.instructions+=2;goto B5eef3d;
case 0x5eef3f:c.instructions+=1;goto B5eef3f;
case 0x5eef41:goto L5eef41;
case 0x5eef43:c.instructions+=1;goto B5eef43;
case 0x5eef45:goto L5eef45;
case 0x5eef47:c.instructions+=1;goto B5eef47;
case 0x5eef49:goto L5eef49;
case 0x5eef4a:c.instructions+=2;goto B5eef4a;
case 0x5eef4c:c.instructions+=1;goto B5eef4c;
case 0x5eef4e:goto L5eef4e;
case 0x5eef4f:c.instructions+=3;goto B5eef4f;
case 0x5eef50:c.instructions+=2;goto B5eef50;
case 0x5eef51:c.instructions+=1;goto B5eef51;
case 0x5eef60:goto L5eef60;
case 0x5eef64:c.instructions+=2;goto B5eef64;
case 0x5eef67:c.instructions+=1;goto B5eef67;
case 0x5eef70:goto L5eef70;
case 0x5eef71:c.instructions+=5;goto B5eef71;
case 0x5eef74:c.instructions+=4;goto B5eef74;
case 0x5eef75:c.instructions+=3;goto B5eef75;
case 0x5eef76:c.instructions+=2;goto B5eef76;
case 0x5eef7b:c.instructions+=1;goto B5eef7b;
case 0x5eef80:goto L5eef80;
case 0x5eef82:c.instructions+=2;goto B5eef82;
case 0x5eef84:c.instructions+=1;goto B5eef84;
case 0x5eef86:goto L5eef86;
case 0x5eef8c:c.instructions+=1;goto B5eef8c;
case 0x5eef90:goto L5eef90;
case 0x5eef92:c.instructions+=3;goto B5eef92;
case 0x5eef96:c.instructions+=2;goto B5eef96;
case 0x5eef98:c.instructions+=1;goto B5eef98;
case 0x5eef9a:goto L5eef9a;
case 0x5eef9b:c.instructions+=3;goto B5eef9b;
case 0x5eef9e:c.instructions+=2;goto B5eef9e;
case 0x5eefa0:c.instructions+=1;goto B5eefa0;
case 0x5eefa2:goto L5eefa2;
case 0x5eefa3:c.instructions+=3;goto B5eefa3;
case 0x5eefa4:c.instructions+=2;goto B5eefa4;
case 0x5eefa5:c.instructions+=1;goto B5eefa5;
case 0x5eefa6:goto L5eefa6;
case 0x5eefa7:c.instructions+=1;goto B5eefa7;
case 0x5eefb0:goto L5eefb0;
case 0x5eefb1:c.instructions+=6;goto B5eefb1;
case 0x5eefb2:c.instructions+=5;goto B5eefb2;
case 0x5eefb3:c.instructions+=4;goto B5eefb3;
case 0x5eefb6:c.instructions+=3;goto B5eefb6;
case 0x5eefb8:c.instructions+=2;goto B5eefb8;
case 0x5eefba:c.instructions+=1;goto B5eefba;
case 0x5eefbc:goto L5eefbc;
case 0x5eefc3:goto L5eefc3;
case 0x5eefc5:c.instructions+=1;goto B5eefc5;
case 0x5eefc7:goto L5eefc7;
case 0x5eefc9:c.instructions+=1;goto B5eefc9;
case 0x5eefcb:goto L5eefcb;
case 0x5eefcd:goto L5eefcd;
case 0x5eefd0:c.instructions+=2;goto B5eefd0;
case 0x5eefd2:c.instructions+=1;goto B5eefd2;
case 0x5eefd4:goto L5eefd4;
case 0x5eefd5:c.instructions+=3;goto B5eefd5;
case 0x5eefd8:c.instructions+=2;goto B5eefd8;
case 0x5eefda:c.instructions+=1;goto B5eefda;
case 0x5eefdc:goto L5eefdc;
case 0x5eefdd:c.instructions+=3;goto B5eefdd;
case 0x5eefde:c.instructions+=2;goto B5eefde;
case 0x5eefdf:c.instructions+=1;goto B5eefdf;
case 0x5eefe4:goto L5eefe4;
case 0x5eefe5:c.instructions+=3;goto B5eefe5;
case 0x5eefe6:c.instructions+=2;goto B5eefe6;
case 0x5eefe7:c.instructions+=1;goto B5eefe7;
case 0x5eeff0:goto L5eeff0;
case 0x5eeff5:c.instructions+=2;goto B5eeff5;
case 0x5eeff7:c.instructions+=1;goto B5eeff7;
case 0x5eeffd:goto L5eeffd;
default:missing_instruction(c.pc);}
B5ee001:L5ee001:{c.instructions+=3;NFSU2_TR(0x5ee001);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee002:{NFSU2_TR(0x5ee002);
__builtin_memmove((R+4),(R+28),4);
}
B5ee004:{NFSU2_TR(0x5ee004);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ee009ull));
TAIL_STATIC(0x5716c0u,571);
}
B5ee009:L5ee009:{c.instructions+=4;NFSU2_TR(0x5ee009);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5ee00c:{NFSU2_TR(0x5ee00c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee00d:{NFSU2_TR(0x5ee00d);
__builtin_memmove((R+4),(R+28),4);
}
B5ee00f:{NFSU2_TR(0x5ee00f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ee014ull));
TAIL_STATIC(0x571710u,571);
}
B5ee014:L5ee014:{c.instructions+=4;NFSU2_TR(0x5ee014);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ee017:{NFSU2_TR(0x5ee017);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee018:{NFSU2_TR(0x5ee018);
__builtin_memmove((R+4),(R+28),4);
}
B5ee01a:{NFSU2_TR(0x5ee01a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ee01full));
TAIL_STATIC(0x571770u,571);
}
B5ee01f:L5ee01f:{c.instructions+=4;NFSU2_TR(0x5ee01f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5ee022:{NFSU2_TR(0x5ee022);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee023:{NFSU2_TR(0x5ee023);
__builtin_memmove((R+4),(R+28),4);
}
B5ee025:{NFSU2_TR(0x5ee025);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ee02aull));
TAIL_STATIC(0x571770u,571);
}
B5ee02a:L5ee02a:{c.instructions+=4;NFSU2_TR(0x5ee02a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((R+0),(U+0),4);
}
B5ee02d:{NFSU2_TR(0x5ee02d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee02e:{NFSU2_TR(0x5ee02e);
__builtin_memmove((R+4),(R+28),4);
}
B5ee030:{NFSU2_TR(0x5ee030);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ee035ull));
TAIL_STATIC(0x571770u,571);
}
B5ee035:L5ee035:{c.instructions+=4;NFSU2_TR(0x5ee035);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ee038:{NFSU2_TR(0x5ee038);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee039:{NFSU2_TR(0x5ee039);
__builtin_memmove((R+4),(R+28),4);
}
B5ee03b:{NFSU2_TR(0x5ee03b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ee040ull));
TAIL_STATIC(0x571770u,571);
}
B5ee040:L5ee040:{c.instructions+=4;NFSU2_TR(0x5ee040);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5ee043:{NFSU2_TR(0x5ee043);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee044:{NFSU2_TR(0x5ee044);
__builtin_memmove((R+4),(R+28),4);
}
B5ee046:{NFSU2_TR(0x5ee046);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ee04bull));
TAIL_STATIC(0x571770u,571);
}
B5ee04b:L5ee04b:{c.instructions+=4;NFSU2_TR(0x5ee04b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((R+0),(U+0),4);
}
B5ee04e:{NFSU2_TR(0x5ee04e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee04f:{NFSU2_TR(0x5ee04f);
__builtin_memmove((R+4),(R+28),4);
}
B5ee051:{NFSU2_TR(0x5ee051);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ee056ull));
TAIL_STATIC(0x571770u,571);
}
B5ee056:L5ee056:{c.instructions+=3;NFSU2_TR(0x5ee056);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B5ee05b:{NFSU2_TR(0x5ee05b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ee05d:{NFSU2_TR(0x5ee05d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ee088;}}
}
B5ee05f:L5ee05f:{c.instructions+=3;NFSU2_TR(0x5ee05f);
__builtin_memmove((R+0),gp(0x890104),4);
}
B5ee064:{NFSU2_TR(0x5ee064);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ee066:{NFSU2_TR(0x5ee066);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ee088;}}
}
B5ee068:L5ee068:{c.instructions+=3;NFSU2_TR(0x5ee068);
__builtin_memmove((R+0),gp(0x89e7e3),1);
}
B5ee06d:{NFSU2_TR(0x5ee06d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ee06f:{NFSU2_TR(0x5ee06f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ee088;}}
}
B5ee071:L5ee071:{c.instructions+=3;NFSU2_TR(0x5ee071);
__builtin_memmove((R+0),gp(0x89010c),4);
}
B5ee076:{NFSU2_TR(0x5ee076);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ee078:{NFSU2_TR(0x5ee078);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ee088;}}
}
B5ee07a:L5ee07a:{c.instructions+=4;NFSU2_TR(0x5ee07a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x194ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ee080:{NFSU2_TR(0x5ee080);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee081:{NFSU2_TR(0x5ee081);
__builtin_memmove((R+4),(R+28),4);
}
B5ee083:{NFSU2_TR(0x5ee083);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ee088ull));
TAIL_STATIC(0x571770u,571);
}
B5ee088:L5ee088:{c.instructions+=2;NFSU2_TR(0x5ee088);
u8 U[8];
__builtin_memmove((U+0),gp(0x89e7b0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ee08f:{NFSU2_TR(0x5ee08f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ee0cc;}}
}
B5ee091:L5ee091:{c.instructions+=4;NFSU2_TR(0x5ee091);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5ee094:{NFSU2_TR(0x5ee094);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee095:{NFSU2_TR(0x5ee095);
__builtin_memmove((R+4),(R+28),4);
}
B5ee097:{NFSU2_TR(0x5ee097);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ee09cull));
TAIL_STATIC(0x571770u,571);
}
B5ee09c:L5ee09c:{c.instructions+=6;NFSU2_TR(0x5ee09c);
__builtin_memmove((R+0),gp(0x890118),4);
}
B5ee0a1:{NFSU2_TR(0x5ee0a1);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xbf7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B5ee0a8:{NFSU2_TR(0x5ee0a8);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B5ee0ac:{NFSU2_TR(0x5ee0ac);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee0ad:{NFSU2_TR(0x5ee0ad);
__builtin_memmove((R+4),(R+28),4);
}
B5ee0af:{NFSU2_TR(0x5ee0af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ee0b4ull));
TAIL_STATIC(0x571770u,571);
}
B5ee0b4:L5ee0b4:{c.instructions+=6;NFSU2_TR(0x5ee0b4);
__builtin_memmove((R+0),gp(0x890118),4);
}
B5ee0b9:{NFSU2_TR(0x5ee0b9);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xbf7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B5ee0c0:{NFSU2_TR(0x5ee0c0);
u8 U[12];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B5ee0c4:{NFSU2_TR(0x5ee0c4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee0c5:{NFSU2_TR(0x5ee0c5);
__builtin_memmove((R+4),(R+28),4);
}
B5ee0c7:{NFSU2_TR(0x5ee0c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ee0ccull));
TAIL_STATIC(0x571770u,571);
}
B5ee0cc:L5ee0cc:{c.instructions+=3;NFSU2_TR(0x5ee0cc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee0cd:{NFSU2_TR(0x5ee0cd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ee0d3:{NFSU2_TR(0x5ee0d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ee0d8ull));
TAIL_STATIC(0x5edec0u,5ed);
}
B5ee0d8:L5ee0d8:{c.instructions+=3;NFSU2_TR(0x5ee0d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ee0de:{NFSU2_TR(0x5ee0de);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ee0e0:{NFSU2_TR(0x5ee0e0);
if(r1(R+518)){{goto L5ee10c;}}
}
B5ee0e2:L5ee0e2:{c.instructions+=3;NFSU2_TR(0x5ee0e2);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B5ee0e7:{NFSU2_TR(0x5ee0e7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ee0e9:{NFSU2_TR(0x5ee0e9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ee10c;}}
}
B5ee0eb:L5ee0eb:{c.instructions+=3;NFSU2_TR(0x5ee0eb);
__builtin_memmove((R+0),gp(0x890104),4);
}
B5ee0f0:{NFSU2_TR(0x5ee0f0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ee0f2:{NFSU2_TR(0x5ee0f2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ee10c;}}
}
B5ee0f4:L5ee0f4:{c.instructions+=3;NFSU2_TR(0x5ee0f4);
__builtin_memmove((R+0),gp(0x89e7e3),1);
}
B5ee0f9:{NFSU2_TR(0x5ee0f9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ee0fb:{NFSU2_TR(0x5ee0fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ee10c;}}
}
B5ee0fd:L5ee0fd:{c.instructions+=3;NFSU2_TR(0x5ee0fd);
__builtin_memmove((R+0),gp(0x89010c),4);
}
B5ee102:{NFSU2_TR(0x5ee102);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ee104:{NFSU2_TR(0x5ee104);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ee10c;}}
}
B5ee106:L5ee106:{c.instructions+=2;NFSU2_TR(0x5ee106);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee107:{NFSU2_TR(0x5ee107);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ee10cull));
TAIL_STATIC(0x56ce50u,56c);
}
B5ee10c:L5ee10c:{c.instructions+=3;NFSU2_TR(0x5ee10c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ee112:{NFSU2_TR(0x5ee112);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ee114:{NFSU2_TR(0x5ee114);
if(r1(R+518)){{goto L5ee140;}}
}
B5ee116:L5ee116:{c.instructions+=3;NFSU2_TR(0x5ee116);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B5ee11b:{NFSU2_TR(0x5ee11b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ee11d:{NFSU2_TR(0x5ee11d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ee140;}}
}
B5ee11f:L5ee11f:{c.instructions+=3;NFSU2_TR(0x5ee11f);
__builtin_memmove((R+0),gp(0x890104),4);
}
B5ee124:{NFSU2_TR(0x5ee124);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ee126:{NFSU2_TR(0x5ee126);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ee140;}}
}
B5ee128:L5ee128:{c.instructions+=3;NFSU2_TR(0x5ee128);
__builtin_memmove((R+0),gp(0x89e7e3),1);
}
B5ee12d:{NFSU2_TR(0x5ee12d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ee12f:{NFSU2_TR(0x5ee12f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ee140;}}
}
B5ee131:L5ee131:{c.instructions+=3;NFSU2_TR(0x5ee131);
__builtin_memmove((R+0),gp(0x89010c),4);
}
B5ee136:{NFSU2_TR(0x5ee136);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ee138:{NFSU2_TR(0x5ee138);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ee140;}}
}
B5ee13a:L5ee13a:{c.instructions+=2;NFSU2_TR(0x5ee13a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee13b:{NFSU2_TR(0x5ee13b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ee140ull));
TAIL_STATIC(0x56c8a0u,56c);
}
B5ee140:L5ee140:{c.instructions+=2;NFSU2_TR(0x5ee140);
__builtin_memmove((R+4),(R+28),4);
}
B5ee142:{NFSU2_TR(0x5ee142);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ee147ull));
TAIL_STATIC(0x578d90u,578);
}
B5ee147:L5ee147:{c.instructions+=3;NFSU2_TR(0x5ee147);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ee148:{NFSU2_TR(0x5ee148);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ee149:{NFSU2_TR(0x5ee149);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ee150:L5ee150:{c.instructions+=9;NFSU2_TR(0x5ee150);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ee154:{NFSU2_TR(0x5ee154);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee155:{NFSU2_TR(0x5ee155);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5ee159:{NFSU2_TR(0x5ee159);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee15a:{NFSU2_TR(0x5ee15a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee15b:{NFSU2_TR(0x5ee15b);
__builtin_memmove((R+28),(R+4),4);
}
B5ee15d:{NFSU2_TR(0x5ee15d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee15e:{NFSU2_TR(0x5ee15e);
w4(R+4,u32(0x88f298ull));
}
B5ee163:{NFSU2_TR(0x5ee163);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ee168ull));
TAIL_STATIC(0x5d5d10u,5d5);
}
B5ee168:L5ee168:{c.instructions+=6;NFSU2_TR(0x5ee168);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ee16c:{NFSU2_TR(0x5ee16c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ee16f:{NFSU2_TR(0x5ee16f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee170:{NFSU2_TR(0x5ee170);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee171:{NFSU2_TR(0x5ee171);
w4(R+4,u32(0x88f298ull));
}
B5ee176:{NFSU2_TR(0x5ee176);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ee17bull));
TAIL_STATIC(0x5d5d10u,5d5);
}
B5ee17b:L5ee17b:{c.instructions+=15;NFSU2_TR(0x5ee17b);
{u32 ea_=u32(u32(8975024u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ee181:{NFSU2_TR(0x5ee181);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ee185:{NFSU2_TR(0x5ee185);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5ee189:{NFSU2_TR(0x5ee189);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5ee18b:{NFSU2_TR(0x5ee18b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5ee18d:{NFSU2_TR(0x5ee18d);
{u32 ea_=u32(u32(7881308u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ee193:{NFSU2_TR(0x5ee193);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ee196:{NFSU2_TR(0x5ee196);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ee199:{NFSU2_TR(0x5ee199);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ee19d:{NFSU2_TR(0x5ee19d);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ee1a1:{NFSU2_TR(0x5ee1a1);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5ee1a3:{NFSU2_TR(0x5ee1a3);
{u32 ea_=u32(u32(7909400u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ee1a9:{NFSU2_TR(0x5ee1a9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ee1ab:{NFSU2_TR(0x5ee1ab);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ee1ae:{NFSU2_TR(0x5ee1ae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ee1b9;}}
}
B5ee1b0:L5ee1b0:{c.instructions+=1;NFSU2_TR(0x5ee1b0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ee1b2:L5ee1b2:{c.instructions+=4;NFSU2_TR(0x5ee1b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ee1b3:{NFSU2_TR(0x5ee1b3);
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
B5ee1b5:{NFSU2_TR(0x5ee1b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ee1b6:{NFSU2_TR(0x5ee1b6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ee1b9:L5ee1b9:{c.instructions+=4;NFSU2_TR(0x5ee1b9);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5ee1bf:{NFSU2_TR(0x5ee1bf);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ee1c1:{NFSU2_TR(0x5ee1c1);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5ee1c4:{NFSU2_TR(0x5ee1c4);
if(r1(R+514)){{goto L5ee1e4;}}
}
B5ee1c6:L5ee1c6:{c.instructions+=5;NFSU2_TR(0x5ee1c6);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ee1ca:{NFSU2_TR(0x5ee1ca);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ee1d0:{NFSU2_TR(0x5ee1d0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ee1d2:{NFSU2_TR(0x5ee1d2);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ee1d5:{NFSU2_TR(0x5ee1d5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ee1e4;}}
}
B5ee1d7:L5ee1d7:{c.instructions+=4;NFSU2_TR(0x5ee1d7);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ee1d9:{NFSU2_TR(0x5ee1d9);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5ee1df:{NFSU2_TR(0x5ee1df);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ee1e2:{NFSU2_TR(0x5ee1e2);
{goto L5ee20b;}
}
B5ee1e4:L5ee1e4:{c.instructions+=4;NFSU2_TR(0x5ee1e4);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ee1ea:{NFSU2_TR(0x5ee1ea);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ee1ec:{NFSU2_TR(0x5ee1ec);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ee1ef:{NFSU2_TR(0x5ee1ef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ee1b2u);}goto L5ee1b2;}}
}
B5ee1f1:L5ee1f1:{c.instructions+=5;NFSU2_TR(0x5ee1f1);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ee1f5:{NFSU2_TR(0x5ee1f5);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ee1fb:{NFSU2_TR(0x5ee1fb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ee1fd:{NFSU2_TR(0x5ee1fd);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5ee200:{NFSU2_TR(0x5ee200);
if(r1(R+514)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ee1b2u);}goto L5ee1b2;}}
}
B5ee202:L5ee202:{c.instructions+=2;NFSU2_TR(0x5ee202);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5ee204:{NFSU2_TR(0x5ee204);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ee20b:L5ee20b:{c.instructions+=7;NFSU2_TR(0x5ee20b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5ee20d:{NFSU2_TR(0x5ee20d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ee213:{NFSU2_TR(0x5ee213);
{u32 ea_=u32(r4(R+28)+u32(1068u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ee219:{NFSU2_TR(0x5ee219);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ee21f:{NFSU2_TR(0x5ee21f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ee221:{NFSU2_TR(0x5ee221);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ee224:{NFSU2_TR(0x5ee224);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ee232;}}
}
B5ee226:L5ee226:{c.instructions+=3;NFSU2_TR(0x5ee226);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ee228:{NFSU2_TR(0x5ee228);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ee22c:{NFSU2_TR(0x5ee22c);
{u32 ea_=u32(r4(R+28)+u32(1068u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5ee232:L5ee232:{c.instructions+=3;NFSU2_TR(0x5ee232);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ee238:{NFSU2_TR(0x5ee238);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ee23e:{NFSU2_TR(0x5ee23e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ee243ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5ee243:L5ee243:{c.instructions+=5;NFSU2_TR(0x5ee243);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ee246:{NFSU2_TR(0x5ee246);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ee247:{NFSU2_TR(0x5ee247);
w4(R+0,u32(0x1ull));
}
B5ee24c:{NFSU2_TR(0x5ee24c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ee24d:{NFSU2_TR(0x5ee24d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ee250:L5ee250:{c.instructions+=2;NFSU2_TR(0x5ee250);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B5ee255:{NFSU2_TR(0x5ee255);
if(r1(R+518)){{goto L5ee266;}}
}
B5ee257:L5ee257:{c.instructions+=3;NFSU2_TR(0x5ee257);
__builtin_memmove((R+0),gp(0x89e7b0),4);
}
B5ee25c:{NFSU2_TR(0x5ee25c);
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
B5ee25e:{NFSU2_TR(0x5ee25e);
if(r1(R+518)){{goto L5ee266;}}
}
B5ee260:L5ee260:{c.instructions+=2;NFSU2_TR(0x5ee260);
w4(R+0,u32(0x1ull));
}
B5ee265:{NFSU2_TR(0x5ee265);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ee266:L5ee266:{c.instructions+=2;NFSU2_TR(0x5ee266);
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
B5ee268:{NFSU2_TR(0x5ee268);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ee270:L5ee270:{c.instructions+=4;NFSU2_TR(0x5ee270);
__builtin_memmove((R+0),gp(0x890118),4);
}
B5ee275:{NFSU2_TR(0x5ee275);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xbf6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B5ee27c:{NFSU2_TR(0x5ee27c);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5ee280:{NFSU2_TR(0x5ee280);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ee290:L5ee290:{c.instructions+=4;NFSU2_TR(0x5ee290);
__builtin_memmove((R+0),gp(0x890118),4);
}
B5ee295:{NFSU2_TR(0x5ee295);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xbf7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B5ee29c:{NFSU2_TR(0x5ee29c);
u8 U[12];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5ee2a0:{NFSU2_TR(0x5ee2a0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ee2b0:L5ee2b0:{c.instructions+=4;NFSU2_TR(0x5ee2b0);
__builtin_memmove((R+0),gp(0x890118),4);
}
B5ee2b5:{NFSU2_TR(0x5ee2b5);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xbf7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B5ee2bc:{NFSU2_TR(0x5ee2bc);
u8 U[12];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5ee2c0:{NFSU2_TR(0x5ee2c0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ee2d0:L5ee2d0:{c.instructions+=4;NFSU2_TR(0x5ee2d0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee2d1:{NFSU2_TR(0x5ee2d1);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ee2d7:{NFSU2_TR(0x5ee2d7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x140ull))));
}
B5ee2dd:{NFSU2_TR(0x5ee2dd);
w4(R+8,u32(0x3ull));
}
B5ee2e2:L5ee2e2:{c.instructions+=6;NFSU2_TR(0x5ee2e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ee2e5:{NFSU2_TR(0x5ee2e5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B5ee2e9:{NFSU2_TR(0x5ee2e9);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5ee2ed:{NFSU2_TR(0x5ee2ed);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ee2ef:{NFSU2_TR(0x5ee2ef);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ee2f2:{NFSU2_TR(0x5ee2f2);
if(r1(R+518)){{goto L5ee2fa;}}
}
B5ee2f4:L5ee2f4:{c.instructions+=2;NFSU2_TR(0x5ee2f4);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ee2f6:{NFSU2_TR(0x5ee2f6);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ee2fa:L5ee2fa:{c.instructions+=6;NFSU2_TR(0x5ee2fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5ee2fc:{NFSU2_TR(0x5ee2fc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B5ee300:{NFSU2_TR(0x5ee300);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5ee304:{NFSU2_TR(0x5ee304);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ee306:{NFSU2_TR(0x5ee306);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ee309:{NFSU2_TR(0x5ee309);
if(r1(R+518)){{goto L5ee311;}}
}
B5ee30b:L5ee30b:{c.instructions+=2;NFSU2_TR(0x5ee30b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ee30d:{NFSU2_TR(0x5ee30d);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ee311:L5ee311:{c.instructions+=6;NFSU2_TR(0x5ee311);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ee314:{NFSU2_TR(0x5ee314);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B5ee318:{NFSU2_TR(0x5ee318);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5ee31c:{NFSU2_TR(0x5ee31c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ee31e:{NFSU2_TR(0x5ee31e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ee321:{NFSU2_TR(0x5ee321);
if(r1(R+518)){{goto L5ee329;}}
}
B5ee323:L5ee323:{c.instructions+=2;NFSU2_TR(0x5ee323);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ee325:{NFSU2_TR(0x5ee325);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ee329:L5ee329:{c.instructions+=6;NFSU2_TR(0x5ee329);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ee32c:{NFSU2_TR(0x5ee32c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B5ee330:{NFSU2_TR(0x5ee330);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5ee334:{NFSU2_TR(0x5ee334);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ee336:{NFSU2_TR(0x5ee336);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ee339:{NFSU2_TR(0x5ee339);
if(r1(R+518)){{goto L5ee341;}}
}
B5ee33b:L5ee33b:{c.instructions+=2;NFSU2_TR(0x5ee33b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ee33d:{NFSU2_TR(0x5ee33d);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ee341:L5ee341:{c.instructions+=6;NFSU2_TR(0x5ee341);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ee344:{NFSU2_TR(0x5ee344);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B5ee348:{NFSU2_TR(0x5ee348);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5ee34c:{NFSU2_TR(0x5ee34c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ee34e:{NFSU2_TR(0x5ee34e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ee351:{NFSU2_TR(0x5ee351);
if(r1(R+518)){{goto L5ee359;}}
}
B5ee353:L5ee353:{c.instructions+=2;NFSU2_TR(0x5ee353);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ee355:{NFSU2_TR(0x5ee355);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ee359:L5ee359:{c.instructions+=6;NFSU2_TR(0x5ee359);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ee35c:{NFSU2_TR(0x5ee35c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B5ee360:{NFSU2_TR(0x5ee360);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5ee364:{NFSU2_TR(0x5ee364);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ee366:{NFSU2_TR(0x5ee366);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ee369:{NFSU2_TR(0x5ee369);
if(r1(R+518)){{goto L5ee371;}}
}
B5ee36b:L5ee36b:{c.instructions+=2;NFSU2_TR(0x5ee36b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ee36d:{NFSU2_TR(0x5ee36d);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ee371:L5ee371:{c.instructions+=6;NFSU2_TR(0x5ee371);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ee374:{NFSU2_TR(0x5ee374);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B5ee378:{NFSU2_TR(0x5ee378);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5ee37c:{NFSU2_TR(0x5ee37c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ee37e:{NFSU2_TR(0x5ee37e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ee381:{NFSU2_TR(0x5ee381);
if(r1(R+518)){{goto L5ee389;}}
}
B5ee383:L5ee383:{c.instructions+=2;NFSU2_TR(0x5ee383);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ee385:{NFSU2_TR(0x5ee385);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ee389:L5ee389:{c.instructions+=3;NFSU2_TR(0x5ee389);
w1(R+512,carry<u32>(r4(R+4),u32(0x1cull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1cull))));
}
B5ee38c:{NFSU2_TR(0x5ee38c);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+8),u32(0x1ull)));
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5ee38d:{NFSU2_TR(0x5ee38d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ee2e2u);}goto L5ee2e2;}}
}
B5ee393:L5ee393:{c.instructions+=2;NFSU2_TR(0x5ee393);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ee394:{NFSU2_TR(0x5ee394);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ee3a0:L5ee3a0:{c.instructions+=3;NFSU2_TR(0x5ee3a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5ee3a2:{NFSU2_TR(0x5ee3a2);
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
B5ee3a4:{NFSU2_TR(0x5ee3a4);
if(r1(R+518)){{goto L5ee3aa;}}
}
B5ee3a6:L5ee3a6:{c.instructions+=2;NFSU2_TR(0x5ee3a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ee3a9:{NFSU2_TR(0x5ee3a9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ee3aa:L5ee3aa:{c.instructions+=2;NFSU2_TR(0x5ee3aa);
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
B5ee3ac:{NFSU2_TR(0x5ee3ac);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ee3b0:L5ee3b0:{c.instructions+=11;NFSU2_TR(0x5ee3b0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee3b1:{NFSU2_TR(0x5ee3b1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee3b2:{NFSU2_TR(0x5ee3b2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee3b3:{NFSU2_TR(0x5ee3b3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee3b4:{NFSU2_TR(0x5ee3b4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee3b5:{NFSU2_TR(0x5ee3b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5ee3b9:{NFSU2_TR(0x5ee3b9);
u8 U[4];
w4(U+0,u32(0x7a5ec8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee3be:{NFSU2_TR(0x5ee3be);
__builtin_memmove((R+24),(R+4),4);
}
B5ee3c0:{NFSU2_TR(0x5ee3c0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee3c2:{NFSU2_TR(0x5ee3c2);
__builtin_memmove((R+4),(R+28),4);
}
B5ee3c4:{NFSU2_TR(0x5ee3c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ee3c9ull));
TAIL_STATIC(0x578ce0u,578);
}
B5ee3c9:L5ee3c9:{c.instructions+=6;NFSU2_TR(0x5ee3c9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee3cb:{NFSU2_TR(0x5ee3cb);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee3cd:{NFSU2_TR(0x5ee3cd);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee3cf:{NFSU2_TR(0x5ee3cf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee3d0:{NFSU2_TR(0x5ee3d0);
__builtin_memmove((R+4),(R+28),4);
}
B5ee3d2:{NFSU2_TR(0x5ee3d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ee3d7ull));
TAIL_STATIC(0x571640u,571);
}
B5ee3d7:L5ee3d7:{c.instructions+=4;NFSU2_TR(0x5ee3d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5ee3da:{NFSU2_TR(0x5ee3da);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee3db:{NFSU2_TR(0x5ee3db);
__builtin_memmove((R+4),(R+28),4);
}
B5ee3dd:{NFSU2_TR(0x5ee3dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ee3e2ull));
TAIL_STATIC(0x571770u,571);
}
B5ee3e2:L5ee3e2:{c.instructions+=4;NFSU2_TR(0x5ee3e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ee3e5:{NFSU2_TR(0x5ee3e5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee3e6:{NFSU2_TR(0x5ee3e6);
__builtin_memmove((R+4),(R+28),4);
}
B5ee3e8:{NFSU2_TR(0x5ee3e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ee3edull));
TAIL_STATIC(0x571770u,571);
}
B5ee3ed:L5ee3ed:{c.instructions+=4;NFSU2_TR(0x5ee3ed);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5ee3f0:{NFSU2_TR(0x5ee3f0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee3f1:{NFSU2_TR(0x5ee3f1);
__builtin_memmove((R+4),(R+28),4);
}
B5ee3f3:{NFSU2_TR(0x5ee3f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ee3f8ull));
TAIL_STATIC(0x571770u,571);
}
B5ee3f8:L5ee3f8:{c.instructions+=4;NFSU2_TR(0x5ee3f8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5ee3fb:{NFSU2_TR(0x5ee3fb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee3fc:{NFSU2_TR(0x5ee3fc);
__builtin_memmove((R+4),(R+28),4);
}
B5ee3fe:{NFSU2_TR(0x5ee3fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ee403ull));
TAIL_STATIC(0x571770u,571);
}
B5ee403:L5ee403:{c.instructions+=4;NFSU2_TR(0x5ee403);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ee406:{NFSU2_TR(0x5ee406);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee407:{NFSU2_TR(0x5ee407);
__builtin_memmove((R+4),(R+28),4);
}
B5ee409:{NFSU2_TR(0x5ee409);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ee40eull));
TAIL_STATIC(0x571770u,571);
}
B5ee40e:L5ee40e:{c.instructions+=4;NFSU2_TR(0x5ee40e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5ee411:{NFSU2_TR(0x5ee411);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee412:{NFSU2_TR(0x5ee412);
__builtin_memmove((R+4),(R+28),4);
}
B5ee414:{NFSU2_TR(0x5ee414);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ee419ull));
TAIL_STATIC(0x571770u,571);
}
B5ee419:L5ee419:{c.instructions+=7;NFSU2_TR(0x5ee419);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee41b:{NFSU2_TR(0x5ee41b);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee41d:{NFSU2_TR(0x5ee41d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee41f:{NFSU2_TR(0x5ee41f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ee422:{NFSU2_TR(0x5ee422);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee423:{NFSU2_TR(0x5ee423);
__builtin_memmove((R+4),(R+28),4);
}
B5ee425:{NFSU2_TR(0x5ee425);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ee42aull));
TAIL_STATIC(0x571640u,571);
}
B5ee42a:L5ee42a:{c.instructions+=7;NFSU2_TR(0x5ee42a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee42c:{NFSU2_TR(0x5ee42c);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee42e:{NFSU2_TR(0x5ee42e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee430:{NFSU2_TR(0x5ee430);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5ee433:{NFSU2_TR(0x5ee433);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee434:{NFSU2_TR(0x5ee434);
__builtin_memmove((R+4),(R+28),4);
}
B5ee436:{NFSU2_TR(0x5ee436);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ee43bull));
TAIL_STATIC(0x571640u,571);
}
B5ee43b:L5ee43b:{c.instructions+=7;NFSU2_TR(0x5ee43b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee43d:{NFSU2_TR(0x5ee43d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee43f:{NFSU2_TR(0x5ee43f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee441:{NFSU2_TR(0x5ee441);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ee444:{NFSU2_TR(0x5ee444);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee445:{NFSU2_TR(0x5ee445);
__builtin_memmove((R+4),(R+28),4);
}
B5ee447:{NFSU2_TR(0x5ee447);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ee44cull));
TAIL_STATIC(0x571640u,571);
}
B5ee44c:L5ee44c:{c.instructions+=4;NFSU2_TR(0x5ee44c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5ee44e:{NFSU2_TR(0x5ee44e);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5ee450:{NFSU2_TR(0x5ee450);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ee452:{NFSU2_TR(0x5ee452);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5ee4bf;}}
}
B5ee454:L5ee454:{c.instructions+=3;NFSU2_TR(0x5ee454);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5ee457:{NFSU2_TR(0x5ee457);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbd0ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ee45d:{NFSU2_TR(0x5ee45d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ee461:L5ee461:{c.instructions+=3;NFSU2_TR(0x5ee461);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ee465:{NFSU2_TR(0x5ee465);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee466:{NFSU2_TR(0x5ee466);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ee46bull));
TAIL_STATIC(0x5edf90u,5ed);
}
B5ee46b:L5ee46b:{c.instructions+=15;NFSU2_TR(0x5ee46b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5ee46d:{NFSU2_TR(0x5ee46d);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+24))));
}
B5ee46f:{NFSU2_TR(0x5ee46f);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x30ull))));
}
B5ee472:{NFSU2_TR(0x5ee472);
w4(R+0,u32(0x84210843ull));
}
B5ee477:{NFSU2_TR(0x5ee477);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B5ee479:{NFSU2_TR(0x5ee479);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B5ee47b:{NFSU2_TR(0x5ee47b);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B5ee47e:{NFSU2_TR(0x5ee47e);
__builtin_memmove((R+0),(R+8),4);
}
B5ee480:{NFSU2_TR(0x5ee480);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5ee483:{NFSU2_TR(0x5ee483);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5ee487:{NFSU2_TR(0x5ee487);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B5ee489:{NFSU2_TR(0x5ee489);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee48a:{NFSU2_TR(0x5ee48a);
__builtin_memmove((R+4),(R+28),4);
}
B5ee48c:{NFSU2_TR(0x5ee48c);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5ee490:{NFSU2_TR(0x5ee490);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ee495ull));
TAIL_STATIC(0x5716c0u,571);
}
B5ee495:L5ee495:{c.instructions+=12;NFSU2_TR(0x5ee495);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B5ee49a:{NFSU2_TR(0x5ee49a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ee49e:{NFSU2_TR(0x5ee49e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x1f0ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B5ee4a4:{NFSU2_TR(0x5ee4a4);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5ee4a8:{NFSU2_TR(0x5ee4a8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B5ee4aa:{NFSU2_TR(0x5ee4aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ee4ad:{NFSU2_TR(0x5ee4ad);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B5ee4ae:{NFSU2_TR(0x5ee4ae);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1f0ull))));
}
B5ee4b4:{NFSU2_TR(0x5ee4b4);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B5ee4b7:{NFSU2_TR(0x5ee4b7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5ee4b9:{NFSU2_TR(0x5ee4b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ee4bd:{NFSU2_TR(0x5ee4bd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ee461u);}goto L5ee461;}}
}
B5ee4bf:L5ee4bf:{c.instructions+=7;NFSU2_TR(0x5ee4bf);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee4c1:{NFSU2_TR(0x5ee4c1);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee4c3:{NFSU2_TR(0x5ee4c3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee4c5:{NFSU2_TR(0x5ee4c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbe8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ee4cb:{NFSU2_TR(0x5ee4cb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee4cc:{NFSU2_TR(0x5ee4cc);
__builtin_memmove((R+4),(R+28),4);
}
B5ee4ce:{NFSU2_TR(0x5ee4ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ee4d3ull));
TAIL_STATIC(0x571640u,571);
}
B5ee4d3:L5ee4d3:{c.instructions+=3;NFSU2_TR(0x5ee4d3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee4d4:{NFSU2_TR(0x5ee4d4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ee4da:{NFSU2_TR(0x5ee4da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ee4dfull));
TAIL_STATIC(0x412e40u,412);
}
B5ee4df:L5ee4df:{c.instructions+=2;NFSU2_TR(0x5ee4df);
__builtin_memmove((R+4),(R+28),4);
}
B5ee4e1:{NFSU2_TR(0x5ee4e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ee4e6ull));
TAIL_STATIC(0x578d90u,578);
}
B5ee4e6:L5ee4e6:{c.instructions+=6;NFSU2_TR(0x5ee4e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ee4e7:{NFSU2_TR(0x5ee4e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ee4e8:{NFSU2_TR(0x5ee4e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5ee4e9:{NFSU2_TR(0x5ee4e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ee4ea:{NFSU2_TR(0x5ee4ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ee4eb:{NFSU2_TR(0x5ee4eb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ee4f0:L5ee4f0:{c.instructions+=18;NFSU2_TR(0x5ee4f0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee4f1:{NFSU2_TR(0x5ee4f1);
__builtin_memmove((R+20),(R+16),4);
}
B5ee4f3:{NFSU2_TR(0x5ee4f3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5ee4f6:{NFSU2_TR(0x5ee4f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x44ull))));
}
B5ee4f9:{NFSU2_TR(0x5ee4f9);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ee4fc:{NFSU2_TR(0x5ee4fc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee4fd:{NFSU2_TR(0x5ee4fd);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ee503:{NFSU2_TR(0x5ee503);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5ee506:{NFSU2_TR(0x5ee506);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee507:{NFSU2_TR(0x5ee507);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee508:{NFSU2_TR(0x5ee508);
__builtin_memmove((R+28),(R+4),4);
}
B5ee50a:{NFSU2_TR(0x5ee50a);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5ee50c:{NFSU2_TR(0x5ee50c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ee50e:{NFSU2_TR(0x5ee50e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+12)),r4(U+0));
}
B5ee510:{NFSU2_TR(0x5ee510);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ee513:{NFSU2_TR(0x5ee513);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ee516:{NFSU2_TR(0x5ee516);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ee519:{NFSU2_TR(0x5ee519);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ee527;}}
}
B5ee51b:L5ee51b:{c.instructions+=3;NFSU2_TR(0x5ee51b);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ee51e:{NFSU2_TR(0x5ee51e);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5ee524:{NFSU2_TR(0x5ee524);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ee527:L5ee527:{c.instructions+=4;NFSU2_TR(0x5ee527);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5ee52a:{NFSU2_TR(0x5ee52a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee52b:{NFSU2_TR(0x5ee52b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee52c:{NFSU2_TR(0x5ee52c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ee531ull));
TAIL_STATIC(0x5d8660u,5d8);
}
B5ee531:L5ee531:{c.instructions+=5;NFSU2_TR(0x5ee531);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ee535:{NFSU2_TR(0x5ee535);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ee538:{NFSU2_TR(0x5ee538);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5ee53b:{NFSU2_TR(0x5ee53b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ee53d:{NFSU2_TR(0x5ee53d);
if(r1(R+518)){{goto L5ee576;}}
}
B5ee53f:L5ee53f:{c.instructions+=2;NFSU2_TR(0x5ee53f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee540:{NFSU2_TR(0x5ee540);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ee545ull));
TAIL_STATIC(0x5d8590u,5d8);
}
B5ee545:L5ee545:{c.instructions+=5;NFSU2_TR(0x5ee545);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5ee548:{NFSU2_TR(0x5ee548);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5ee54a:{NFSU2_TR(0x5ee54a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ee54c:{NFSU2_TR(0x5ee54c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ee550:{NFSU2_TR(0x5ee550);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5ee576;}}
}
B5ee552:L5ee552:{c.instructions+=4;NFSU2_TR(0x5ee552);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ee555:{NFSU2_TR(0x5ee555);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee556:{NFSU2_TR(0x5ee556);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee557:{NFSU2_TR(0x5ee557);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ee55cull));
TAIL_STATIC(0x5d8660u,5d8);
}
B5ee55c:L5ee55c:{c.instructions+=5;NFSU2_TR(0x5ee55c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ee55f:{NFSU2_TR(0x5ee55f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ee562:{NFSU2_TR(0x5ee562);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5ee565:{NFSU2_TR(0x5ee565);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ee567:{NFSU2_TR(0x5ee567);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ee56d;}}
}
B5ee569:L5ee569:{c.instructions+=1;NFSU2_TR(0x5ee569);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ee56d:L5ee56d:{c.instructions+=4;NFSU2_TR(0x5ee56d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ee571:{NFSU2_TR(0x5ee571);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5ee572:{NFSU2_TR(0x5ee572);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5ee574:{NFSU2_TR(0x5ee574);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ee552u);}goto L5ee552;}}
}
B5ee576:L5ee576:{c.instructions+=3;NFSU2_TR(0x5ee576);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5ee57a:{NFSU2_TR(0x5ee57a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ee57c:{NFSU2_TR(0x5ee57c);
if(r1(R+518)){{goto L5ee5d8;}}
}
B5ee57e:L5ee57e:{c.instructions+=4;NFSU2_TR(0x5ee57e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B5ee581:{NFSU2_TR(0x5ee581);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee582:{NFSU2_TR(0x5ee582);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5ee586:{NFSU2_TR(0x5ee586);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ee58bull));
TAIL_STATIC(0x5ded90u,5de);
}
B5ee58b:L5ee58b:{c.instructions+=16;NFSU2_TR(0x5ee58b);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ee58e:{NFSU2_TR(0x5ee58e);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ee591:{NFSU2_TR(0x5ee591);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5ee593:{NFSU2_TR(0x5ee593);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5ee595:{NFSU2_TR(0x5ee595);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+12)),r4(U+0));
}
B5ee597:{NFSU2_TR(0x5ee597);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ee59a:{NFSU2_TR(0x5ee59a);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5ee59e:{NFSU2_TR(0x5ee59e);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ee5a1:{NFSU2_TR(0x5ee5a1);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xbf4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5ee5a8:{NFSU2_TR(0x5ee5a8);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ee5ac:{NFSU2_TR(0x5ee5ac);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ee5b2:{NFSU2_TR(0x5ee5b2);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+28)+u32(3064u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ee5b9:{NFSU2_TR(0x5ee5b9);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xbf4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))+u32(u16(0x1ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B5ee5c0:{NFSU2_TR(0x5ee5c0);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xbf4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B5ee5c7:{NFSU2_TR(0x5ee5c7);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5ee5c8:{NFSU2_TR(0x5ee5c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ee5cdull));
TAIL_STATIC(0x4022c0u,402);
}
B5ee5cd:L5ee5cd:{c.instructions+=7;NFSU2_TR(0x5ee5cd);
__builtin_memmove((R+0),(R+24),4);
}
B5ee5cf:{NFSU2_TR(0x5ee5cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ee5d0:{NFSU2_TR(0x5ee5d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ee5d1:{NFSU2_TR(0x5ee5d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ee5d2:{NFSU2_TR(0x5ee5d2);
__builtin_memmove((R+16),(R+20),4);
}
B5ee5d4:{NFSU2_TR(0x5ee5d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5ee5d5:{NFSU2_TR(0x5ee5d5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ee5d8:L5ee5d8:{c.instructions+=5;NFSU2_TR(0x5ee5d8);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ee5db:{NFSU2_TR(0x5ee5db);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ee5e1:{NFSU2_TR(0x5ee5e1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ee5e3:{NFSU2_TR(0x5ee5e3);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ee5e6:{NFSU2_TR(0x5ee5e6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ee611;}}
}
B5ee5e8:L5ee5e8:{c.instructions+=12;NFSU2_TR(0x5ee5e8);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xbf4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B5ee5ef:{NFSU2_TR(0x5ee5ef);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ee5f2:{NFSU2_TR(0x5ee5f2);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+28)+u32(3064u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ee5f9:{NFSU2_TR(0x5ee5f9);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xbf4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))+u32(u16(0x1ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B5ee600:{NFSU2_TR(0x5ee600);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xbf4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5ee607:{NFSU2_TR(0x5ee607);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5ee608:{NFSU2_TR(0x5ee608);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ee609:{NFSU2_TR(0x5ee609);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ee60a:{NFSU2_TR(0x5ee60a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ee60b:{NFSU2_TR(0x5ee60b);
__builtin_memmove((R+16),(R+20),4);
}
B5ee60d:{NFSU2_TR(0x5ee60d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5ee60e:{NFSU2_TR(0x5ee60e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ee611:L5ee611:{c.instructions+=7;NFSU2_TR(0x5ee611);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ee612:{NFSU2_TR(0x5ee612);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ee613:{NFSU2_TR(0x5ee613);
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
B5ee616:{NFSU2_TR(0x5ee616);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ee617:{NFSU2_TR(0x5ee617);
__builtin_memmove((R+16),(R+20),4);
}
B5ee619:{NFSU2_TR(0x5ee619);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5ee61a:{NFSU2_TR(0x5ee61a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ee620:L5ee620:{c.instructions+=12;NFSU2_TR(0x5ee620);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee621:{NFSU2_TR(0x5ee621);
__builtin_memmove((R+20),(R+16),4);
}
B5ee623:{NFSU2_TR(0x5ee623);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5ee626:{NFSU2_TR(0x5ee626);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B5ee629:{NFSU2_TR(0x5ee629);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee62a:{NFSU2_TR(0x5ee62a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee62b:{NFSU2_TR(0x5ee62b);
__builtin_memmove((R+24),(R+4),4);
}
B5ee62d:{NFSU2_TR(0x5ee62d);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbf4ull))));
w2(U+4,u16(0x0ull));
s2(u32(r4(U+0)),r2(U+4));
}
B5ee636:{NFSU2_TR(0x5ee636);
__builtin_memmove((R+0),gp(0x89e7b0),4);
}
B5ee63b:{NFSU2_TR(0x5ee63b);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x7ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x7ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x7ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5ee63e:{NFSU2_TR(0x5ee63e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee63f:{NFSU2_TR(0x5ee63f);
if(r1(R+518)){{goto L5ee99f;}}
}
B5ee645:L5ee645:{c.instructions+=2;NFSU2_TR(0x5ee645);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x8ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x8ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5ee648:{NFSU2_TR(0x5ee648);
if(r1(R+518)){{goto L5ee99f;}}
}
B5ee64e:L5ee64e:{c.instructions+=4;NFSU2_TR(0x5ee64e);
__builtin_memmove((R+0),gp(0x89e7a4),4);
}
B5ee653:{NFSU2_TR(0x5ee653);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ee655:{NFSU2_TR(0x5ee655);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5ee659:{NFSU2_TR(0x5ee659);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ee79a;}}
}
B5ee65f:L5ee65f:{c.instructions+=5;NFSU2_TR(0x5ee65f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee661:{NFSU2_TR(0x5ee661);
u8 U[4];
w4(U+0,u32(0x40a00000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee666:{NFSU2_TR(0x5ee666);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee667:{NFSU2_TR(0x5ee667);
u8 U[4];
w4(U+0,u32(0x785d18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee66c:{NFSU2_TR(0x5ee66c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ee671ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ee4f0u);}goto L5ee4f0;}
}
B5ee671:L5ee671:{c.instructions+=18;NFSU2_TR(0x5ee671);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ee675:{NFSU2_TR(0x5ee675);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ee679:{NFSU2_TR(0x5ee679);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbf6ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5ee67f:{NFSU2_TR(0x5ee67f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ee683:{NFSU2_TR(0x5ee683);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ee689:{NFSU2_TR(0x5ee689);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ee68f:{NFSU2_TR(0x5ee68f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ee695:{NFSU2_TR(0x5ee695);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbf6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B5ee69c:{NFSU2_TR(0x5ee69c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee69e:{NFSU2_TR(0x5ee69e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee69f:{NFSU2_TR(0x5ee69f);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+24)+u32(3064u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ee6a6:{NFSU2_TR(0x5ee6a6);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5ee6aa:{NFSU2_TR(0x5ee6aa);
{u32 ea_=u32(u32(8019736u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ee6b0:{NFSU2_TR(0x5ee6b0);
__builtin_memmove((R+4),(R+24),4);
}
B5ee6b2:{NFSU2_TR(0x5ee6b2);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ee6b5:{NFSU2_TR(0x5ee6b5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee6b6:{NFSU2_TR(0x5ee6b6);
u8 U[4];
w4(U+0,u32(0x7a5f04ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee6bb:{NFSU2_TR(0x5ee6bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ee6c0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ee4f0u);}goto L5ee4f0;}
}
B5ee6c0:L5ee6c0:{c.instructions+=12;NFSU2_TR(0x5ee6c0);
__builtin_memmove((R+28),(R+0),4);
}
B5ee6c2:{NFSU2_TR(0x5ee6c2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbf6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B5ee6c9:{NFSU2_TR(0x5ee6c9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee6cb:{NFSU2_TR(0x5ee6cb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee6cc:{NFSU2_TR(0x5ee6cc);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+24)+u32(3064u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ee6d3:{NFSU2_TR(0x5ee6d3);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5ee6d7:{NFSU2_TR(0x5ee6d7);
{u32 ea_=u32(u32(8019712u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ee6dd:{NFSU2_TR(0x5ee6dd);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ee6e0:{NFSU2_TR(0x5ee6e0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee6e1:{NFSU2_TR(0x5ee6e1);
u8 U[4];
w4(U+0,u32(0x7a5eecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee6e6:{NFSU2_TR(0x5ee6e6);
__builtin_memmove((R+4),(R+24),4);
}
B5ee6e8:{NFSU2_TR(0x5ee6e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ee6edull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ee4f0u);}goto L5ee4f0;}
}
B5ee6ed:L5ee6ed:{c.instructions+=8;NFSU2_TR(0x5ee6ed);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee6ef:{NFSU2_TR(0x5ee6ef);
u8 U[4];
w4(U+0,u32(0xbf800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee6f4:{NFSU2_TR(0x5ee6f4);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5ee6f8:{NFSU2_TR(0x5ee6f8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee6f9:{NFSU2_TR(0x5ee6f9);
u8 U[4];
w4(U+0,u32(0x7a5ed8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee6fe:{NFSU2_TR(0x5ee6fe);
__builtin_memmove((R+4),(R+24),4);
}
B5ee700:{NFSU2_TR(0x5ee700);
__builtin_memmove((R+12),(R+0),4);
}
B5ee702:{NFSU2_TR(0x5ee702);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ee707ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ee4f0u);}goto L5ee4f0;}
}
B5ee707:L5ee707:{c.instructions+=3;NFSU2_TR(0x5ee707);
__builtin_memmove((R+0),gp(0x89e7b4),4);
}
B5ee70c:{NFSU2_TR(0x5ee70c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ee70e:{NFSU2_TR(0x5ee70e);
if(r1(R+518)){{goto L5ee763;}}
}
B5ee710:L5ee710:{c.instructions+=12;NFSU2_TR(0x5ee710);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbf6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B5ee717:{NFSU2_TR(0x5ee717);
__builtin_memmove((R+4),gp(0x89e7d4),4);
}
B5ee71d:{NFSU2_TR(0x5ee71d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee71e:{NFSU2_TR(0x5ee71e);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+24)+u32(3064u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ee725:{NFSU2_TR(0x5ee725);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee726:{NFSU2_TR(0x5ee726);
{u32 ea_=u32(u32(8019668u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ee72c:{NFSU2_TR(0x5ee72c);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5ee730:{NFSU2_TR(0x5ee730);
__builtin_memmove((R+4),(R+24),4);
}
B5ee732:{NFSU2_TR(0x5ee732);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ee735:{NFSU2_TR(0x5ee735);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee736:{NFSU2_TR(0x5ee736);
u8 U[4];
w4(U+0,u32(0x785d04ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee73b:{NFSU2_TR(0x5ee73b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ee740ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ee4f0u);}goto L5ee4f0;}
}
B5ee740:L5ee740:{c.instructions+=7;NFSU2_TR(0x5ee740);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ee744:{NFSU2_TR(0x5ee744);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ee748:{NFSU2_TR(0x5ee748);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbf7ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5ee74e:{NFSU2_TR(0x5ee74e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ee752:{NFSU2_TR(0x5ee752);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ee758:{NFSU2_TR(0x5ee758);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ee75e:{NFSU2_TR(0x5ee75e);
{goto L5ee8cd;}
}
B5ee763:L5ee763:{c.instructions+=10;NFSU2_TR(0x5ee763);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbf6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5ee769:{NFSU2_TR(0x5ee769);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbf7ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5ee76f:{NFSU2_TR(0x5ee76f);
{u32 ea_=u32(r4(R+24)+u32(3092u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ee775:{NFSU2_TR(0x5ee775);
{u32 ea_=u32(r4(R+24)+u32(3096u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ee77b:{NFSU2_TR(0x5ee77b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ee781:{NFSU2_TR(0x5ee781);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5ee783:{NFSU2_TR(0x5ee783);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ee789:{NFSU2_TR(0x5ee789);
{u32 ea_=u32(r4(R+24)+u32(3108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ee78f:{NFSU2_TR(0x5ee78f);
{u32 ea_=u32(r4(R+24)+u32(3112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ee795:{NFSU2_TR(0x5ee795);
{goto L5ee8d3;}
}
B5ee79a:L5ee79a:{c.instructions+=6;NFSU2_TR(0x5ee79a);
__builtin_memmove((R+8),gp(0x89e7d4),4);
}
B5ee7a0:{NFSU2_TR(0x5ee7a0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee7a1:{NFSU2_TR(0x5ee7a1);
u8 U[4];
w4(U+0,u32(0x40a00000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee7a6:{NFSU2_TR(0x5ee7a6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee7a7:{NFSU2_TR(0x5ee7a7);
u8 U[4];
w4(U+0,u32(0x785cf0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee7ac:{NFSU2_TR(0x5ee7ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ee7b1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ee4f0u);}goto L5ee4f0;}
}
B5ee7b1:L5ee7b1:{c.instructions+=14;NFSU2_TR(0x5ee7b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ee7b5:{NFSU2_TR(0x5ee7b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ee7b9:{NFSU2_TR(0x5ee7b9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbf6ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5ee7bf:{NFSU2_TR(0x5ee7bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ee7c3:{NFSU2_TR(0x5ee7c3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee7c5:{NFSU2_TR(0x5ee7c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ee7cb:{NFSU2_TR(0x5ee7cb);
u8 U[4];
w4(U+0,u32(0xbf800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee7d0:{NFSU2_TR(0x5ee7d0);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5ee7d4:{NFSU2_TR(0x5ee7d4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee7d5:{NFSU2_TR(0x5ee7d5);
u8 U[4];
w4(U+0,u32(0x7a5ed8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee7da:{NFSU2_TR(0x5ee7da);
__builtin_memmove((R+4),(R+24),4);
}
B5ee7dc:{NFSU2_TR(0x5ee7dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ee7e2:{NFSU2_TR(0x5ee7e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ee7e8:{NFSU2_TR(0x5ee7e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ee7edull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ee4f0u);}goto L5ee4f0;}
}
B5ee7ed:L5ee7ed:{c.instructions+=11;NFSU2_TR(0x5ee7ed);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbf6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B5ee7f4:{NFSU2_TR(0x5ee7f4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee7f6:{NFSU2_TR(0x5ee7f6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee7f7:{NFSU2_TR(0x5ee7f7);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+24)+u32(3064u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ee7fe:{NFSU2_TR(0x5ee7fe);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5ee802:{NFSU2_TR(0x5ee802);
{u32 ea_=u32(u32(8019736u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ee808:{NFSU2_TR(0x5ee808);
__builtin_memmove((R+4),(R+24),4);
}
B5ee80a:{NFSU2_TR(0x5ee80a);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ee80d:{NFSU2_TR(0x5ee80d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee80e:{NFSU2_TR(0x5ee80e);
u8 U[4];
w4(U+0,u32(0x7a5eecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee813:{NFSU2_TR(0x5ee813);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ee818ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ee4f0u);}goto L5ee4f0;}
}
B5ee818:L5ee818:{c.instructions+=12;NFSU2_TR(0x5ee818);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbf6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B5ee81f:{NFSU2_TR(0x5ee81f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee821:{NFSU2_TR(0x5ee821);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee822:{NFSU2_TR(0x5ee822);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+24)+u32(3064u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ee829:{NFSU2_TR(0x5ee829);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5ee82d:{NFSU2_TR(0x5ee82d);
{u32 ea_=u32(u32(8019712u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ee833:{NFSU2_TR(0x5ee833);
__builtin_memmove((R+4),(R+24),4);
}
B5ee835:{NFSU2_TR(0x5ee835);
__builtin_memmove((R+28),(R+0),4);
}
B5ee837:{NFSU2_TR(0x5ee837);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ee83a:{NFSU2_TR(0x5ee83a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee83b:{NFSU2_TR(0x5ee83b);
u8 U[4];
w4(U+0,u32(0x7a5f04ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee840:{NFSU2_TR(0x5ee840);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ee845ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ee4f0u);}goto L5ee4f0;}
}
B5ee845:L5ee845:{c.instructions+=4;NFSU2_TR(0x5ee845);
__builtin_memmove((R+12),(R+0),4);
}
B5ee847:{NFSU2_TR(0x5ee847);
__builtin_memmove((R+0),gp(0x89e7b4),4);
}
B5ee84c:{NFSU2_TR(0x5ee84c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ee84e:{NFSU2_TR(0x5ee84e);
if(r1(R+518)){{goto L5ee8a1;}}
}
B5ee850:L5ee850:{c.instructions+=11;NFSU2_TR(0x5ee850);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbf6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B5ee857:{NFSU2_TR(0x5ee857);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee859:{NFSU2_TR(0x5ee859);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee85a:{NFSU2_TR(0x5ee85a);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+24)+u32(3064u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ee861:{NFSU2_TR(0x5ee861);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5ee865:{NFSU2_TR(0x5ee865);
{u32 ea_=u32(u32(8019668u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ee86b:{NFSU2_TR(0x5ee86b);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ee86e:{NFSU2_TR(0x5ee86e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee86f:{NFSU2_TR(0x5ee86f);
u8 U[4];
w4(U+0,u32(0x785cdcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee874:{NFSU2_TR(0x5ee874);
__builtin_memmove((R+4),(R+24),4);
}
B5ee876:{NFSU2_TR(0x5ee876);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ee87bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ee4f0u);}goto L5ee4f0;}
}
B5ee87b:L5ee87b:{c.instructions+=8;NFSU2_TR(0x5ee87b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ee87f:{NFSU2_TR(0x5ee87f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ee883:{NFSU2_TR(0x5ee883);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbf7ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5ee889:{NFSU2_TR(0x5ee889);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ee88d:{NFSU2_TR(0x5ee88d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ee893:{NFSU2_TR(0x5ee893);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ee899:{NFSU2_TR(0x5ee899);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ee89f:{NFSU2_TR(0x5ee89f);
{goto L5ee8d3;}
}
B5ee8a1:L5ee8a1:{c.instructions+=8;NFSU2_TR(0x5ee8a1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbf6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5ee8a7:{NFSU2_TR(0x5ee8a7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbf7ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5ee8ad:{NFSU2_TR(0x5ee8ad);
{u32 ea_=u32(r4(R+24)+u32(3092u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ee8b3:{NFSU2_TR(0x5ee8b3);
{u32 ea_=u32(r4(R+24)+u32(3096u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ee8b9:{NFSU2_TR(0x5ee8b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ee8bf:{NFSU2_TR(0x5ee8bf);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5ee8c1:{NFSU2_TR(0x5ee8c1);
{u32 ea_=u32(r4(R+24)+u32(3108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ee8c7:{NFSU2_TR(0x5ee8c7);
{u32 ea_=u32(r4(R+24)+u32(3112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ee8cd:L5ee8cd:{c.instructions+=1;NFSU2_TR(0x5ee8cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ee8d3:L5ee8d3:{c.instructions+=3;NFSU2_TR(0x5ee8d3);
__builtin_memmove((R+0),gp(0x89e7b4),4);
}
B5ee8d8:{NFSU2_TR(0x5ee8d8);
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
B5ee8da:{NFSU2_TR(0x5ee8da);
if(r1(R+518)){{goto L5ee99f;}}
}
B5ee8e0:L5ee8e0:{c.instructions+=12;NFSU2_TR(0x5ee8e0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbf6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B5ee8e7:{NFSU2_TR(0x5ee8e7);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+24)+u32(3064u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ee8ee:{NFSU2_TR(0x5ee8ee);
u8 U[12];
w4(U+0,u32(u32(u32(0xbf8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5ee8f5:{NFSU2_TR(0x5ee8f5);
{u32 ea_=u32(u32(8019736u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ee8fb:{NFSU2_TR(0x5ee8fb);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ee8ff:{NFSU2_TR(0x5ee8ff);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ee901:{NFSU2_TR(0x5ee901);
{u32 ea_=u32(u32(8019712u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ee907:{NFSU2_TR(0x5ee907);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ee90b:{NFSU2_TR(0x5ee90b);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5ee911:{NFSU2_TR(0x5ee911);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ee913:{NFSU2_TR(0x5ee913);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ee916:{NFSU2_TR(0x5ee916);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ee91e;}}
}
B5ee918:L5ee918:{c.instructions+=1;NFSU2_TR(0x5ee918);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5ee91e:L5ee91e:{c.instructions+=5;NFSU2_TR(0x5ee91e);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5ee920:{NFSU2_TR(0x5ee920);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ee926:{NFSU2_TR(0x5ee926);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ee928:{NFSU2_TR(0x5ee928);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ee92b:{NFSU2_TR(0x5ee92b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ee937;}}
}
B5ee92d:L5ee92d:{c.instructions+=3;NFSU2_TR(0x5ee92d);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5ee92f:{NFSU2_TR(0x5ee92f);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5ee935:{NFSU2_TR(0x5ee935);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5ee937:L5ee937:{c.instructions+=4;NFSU2_TR(0x5ee937);
{u32 ea_=u32((r4(R+28)*4u)+r4(R+24)+u32(3064u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ee93e:{NFSU2_TR(0x5ee93e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ee940:{NFSU2_TR(0x5ee940);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5ee943:{NFSU2_TR(0x5ee943);
if(r1(R+514)){{goto L5ee964;}}
}
B5ee945:L5ee945:{c.instructions+=6;NFSU2_TR(0x5ee945);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbf7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B5ee94c:{NFSU2_TR(0x5ee94c);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+24)+u32(3064u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ee953:{NFSU2_TR(0x5ee953);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5ee955:{NFSU2_TR(0x5ee955);
{u32 ea_=u32(u32(7881380u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ee95b:{NFSU2_TR(0x5ee95b);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ee95d:{NFSU2_TR(0x5ee95d);
{u32 ea_=u32((r4(R+28)*4u)+r4(R+24)+u32(3064u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ee964:L5ee964:{c.instructions+=4;NFSU2_TR(0x5ee964);
{u32 ea_=u32((r4(R+12)*4u)+r4(R+24)+u32(3064u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ee96b:{NFSU2_TR(0x5ee96b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ee96d:{NFSU2_TR(0x5ee96d);
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
B5ee970:{NFSU2_TR(0x5ee970);
if(r1(R+514)){{goto L5ee99f;}}
}
B5ee972:L5ee972:{c.instructions+=8;NFSU2_TR(0x5ee972);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbf7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B5ee979:{NFSU2_TR(0x5ee979);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbf6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B5ee980:{NFSU2_TR(0x5ee980);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+24)+u32(3064u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ee987:{NFSU2_TR(0x5ee987);
u8 U[12];
w4(U+0,u32(u32(u32(0xbf8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5ee98e:{NFSU2_TR(0x5ee98e);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5ee990:{NFSU2_TR(0x5ee990);
{u32 ea_=u32(u32(8019664u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ee996:{NFSU2_TR(0x5ee996);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ee998:{NFSU2_TR(0x5ee998);
{u32 ea_=u32((r4(R+12)*4u)+r4(R+24)+u32(3064u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ee99f:L5ee99f:{c.instructions+=6;NFSU2_TR(0x5ee99f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ee9a0:{NFSU2_TR(0x5ee9a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ee9a1:{NFSU2_TR(0x5ee9a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ee9a2:{NFSU2_TR(0x5ee9a2);
__builtin_memmove((R+16),(R+20),4);
}
B5ee9a4:{NFSU2_TR(0x5ee9a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5ee9a5:{NFSU2_TR(0x5ee9a5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ee9b0:L5ee9b0:{c.instructions+=10;NFSU2_TR(0x5ee9b0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ee9b1:{NFSU2_TR(0x5ee9b1);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xbf7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B5ee9b8:{NFSU2_TR(0x5ee9b8);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(3064u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ee9bf:{NFSU2_TR(0x5ee9bf);
u8 U[12];
w4(U+0,u32(u32(u32(0xbf8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B5ee9c6:{NFSU2_TR(0x5ee9c6);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xbf6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B5ee9cd:{NFSU2_TR(0x5ee9cd);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(3064u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ee9d4:{NFSU2_TR(0x5ee9d4);
u8 U[12];
w4(U+0,u32(u32(u32(0xbf8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5ee9db:{NFSU2_TR(0x5ee9db);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ee9dd:{NFSU2_TR(0x5ee9dd);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5ee9e0:{NFSU2_TR(0x5ee9e0);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5eea05;}}
}
B5ee9e2:L5ee9e2:{c.instructions+=9;NFSU2_TR(0x5ee9e2);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ee9e6:{NFSU2_TR(0x5ee9e6);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5ee9e8:{NFSU2_TR(0x5ee9e8);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ee9ea:{NFSU2_TR(0x5ee9ea);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5ee9ec:{NFSU2_TR(0x5ee9ec);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B5ee9ee:{NFSU2_TR(0x5ee9ee);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5ee9f4:{NFSU2_TR(0x5ee9f4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ee9f6:{NFSU2_TR(0x5ee9f6);
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
B5ee9f9:{NFSU2_TR(0x5ee9f9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5eea36;}}
}
B5ee9fb:L5ee9fb:{c.instructions+=3;NFSU2_TR(0x5ee9fb);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5eea01:{NFSU2_TR(0x5eea01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5eea02:{NFSU2_TR(0x5eea02);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5eea05:L5eea05:{c.instructions+=8;NFSU2_TR(0x5eea05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5eea07:{NFSU2_TR(0x5eea07);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5eea0b:{NFSU2_TR(0x5eea0b);
__builtin_memmove((R+8),(R+4),4);
}
B5eea0d:{NFSU2_TR(0x5eea0d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eea0e:{NFSU2_TR(0x5eea0e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eea12:{NFSU2_TR(0x5eea12);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eea13:{NFSU2_TR(0x5eea13);
w4(R+4,u32(0x88f298ull));
}
B5eea18:{NFSU2_TR(0x5eea18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eea1dull));
TAIL_STATIC(0x5d5d10u,5d5);
}
B5eea1d:L5eea1d:{c.instructions+=4;NFSU2_TR(0x5eea1d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5eea23:{NFSU2_TR(0x5eea23);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5eea25:{NFSU2_TR(0x5eea25);
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
B5eea28:{NFSU2_TR(0x5eea28);
if(r1(R+514)){{goto L5eea30;}}
}
B5eea2a:L5eea2a:{c.instructions+=1;NFSU2_TR(0x5eea2a);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5eea30:L5eea30:{c.instructions+=1;NFSU2_TR(0x5eea30);
{u32 ea_=u32(u32(7881308u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5eea36:L5eea36:{c.instructions+=2;NFSU2_TR(0x5eea36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5eea37:{NFSU2_TR(0x5eea37);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5eea40:L5eea40:{c.instructions+=5;NFSU2_TR(0x5eea40);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eea41:{NFSU2_TR(0x5eea41);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5eea44:{NFSU2_TR(0x5eea44);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5eea46:{NFSU2_TR(0x5eea46);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5eea48:{NFSU2_TR(0x5eea48);
if(r1(R+518)){{goto L5eea7b;}}
}
B5eea4a:L5eea4a:{c.instructions+=2;NFSU2_TR(0x5eea4a);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5eea50:{NFSU2_TR(0x5eea50);
if(r1(R+518)){{goto L5eea7b;}}
}
B5eea52:L5eea52:{c.instructions+=10;NFSU2_TR(0x5eea52);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B5eea57:{NFSU2_TR(0x5eea57);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B5eea5a:{NFSU2_TR(0x5eea5a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B5eea5e:{NFSU2_TR(0x5eea5e);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5eea62:{NFSU2_TR(0x5eea62);
w4(R+8,u32(0x4ull));
}
B5eea67:{NFSU2_TR(0x5eea67);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5eea6d:{NFSU2_TR(0x5eea6d);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5eea70:{NFSU2_TR(0x5eea70);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5eea72:{NFSU2_TR(0x5eea72);
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
B5eea75:{NFSU2_TR(0x5eea75);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5eeaf1;}}
}
B5eea77:L5eea77:{c.instructions+=3;NFSU2_TR(0x5eea77);
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
B5eea79:{NFSU2_TR(0x5eea79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5eea7a:{NFSU2_TR(0x5eea7a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5eea7b:L5eea7b:{c.instructions+=3;NFSU2_TR(0x5eea7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5eea7e:{NFSU2_TR(0x5eea7e);
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
B5eea80:{NFSU2_TR(0x5eea80);
if(r1(R+518)){{goto L5eeaf3;}}
}
B5eea82:L5eea82:{c.instructions+=2;NFSU2_TR(0x5eea82);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(U+6))<(u32(0x7fffffffull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x7fffffffull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x7fffffffull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5eea88:{NFSU2_TR(0x5eea88);
if(r1(R+518)){{goto L5eeaf3;}}
}
B5eea8a:L5eea8a:{c.instructions+=10;NFSU2_TR(0x5eea8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5eea8d:{NFSU2_TR(0x5eea8d);
__builtin_memmove((R+8),gp(0x86518c),4);
}
B5eea93:{NFSU2_TR(0x5eea93);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B5eea95:{NFSU2_TR(0x5eea95);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+16)),r4(U+0));
}
B5eea99:{NFSU2_TR(0x5eea99);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5eea9d:{NFSU2_TR(0x5eea9d);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5eeaa3:{NFSU2_TR(0x5eeaa3);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5eeaa6:{NFSU2_TR(0x5eeaa6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5eeaa8:{NFSU2_TR(0x5eeaa8);
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
B5eeaab:{NFSU2_TR(0x5eeaab);
if(r1(R+514)){{goto L5eeab6;}}
}
B5eeaad:L5eeaad:{c.instructions+=4;NFSU2_TR(0x5eeaad);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5eeaaf:{NFSU2_TR(0x5eeaaf);
w4(R+0,u32(0x3ull));
}
B5eeab4:{NFSU2_TR(0x5eeab4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5eeab5:{NFSU2_TR(0x5eeab5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5eeab6:L5eeab6:{c.instructions+=7;NFSU2_TR(0x5eeab6);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5eeab9:{NFSU2_TR(0x5eeab9);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B5eeabb:{NFSU2_TR(0x5eeabb);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5eeabd:{NFSU2_TR(0x5eeabd);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B5eeabf:{NFSU2_TR(0x5eeabf);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5eeac1:{NFSU2_TR(0x5eeac1);
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
B5eeac4:{NFSU2_TR(0x5eeac4);
if(r1(R+514)){{goto L5eeacf;}}
}
B5eeac6:L5eeac6:{c.instructions+=4;NFSU2_TR(0x5eeac6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5eeac8:{NFSU2_TR(0x5eeac8);
w4(R+0,u32(0x2ull));
}
B5eeacd:{NFSU2_TR(0x5eeacd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5eeace:{NFSU2_TR(0x5eeace);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5eeacf:L5eeacf:{c.instructions+=7;NFSU2_TR(0x5eeacf);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5eead2:{NFSU2_TR(0x5eead2);
{u32 ea_=u32(u32(7895772u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5eead8:{NFSU2_TR(0x5eead8);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5eeada:{NFSU2_TR(0x5eeada);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B5eeadc:{NFSU2_TR(0x5eeadc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5eeade:{NFSU2_TR(0x5eeade);
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
B5eeae1:{NFSU2_TR(0x5eeae1);
if(r1(R+514)){{goto L5eeaea;}}
}
B5eeae3:L5eeae3:{c.instructions+=3;NFSU2_TR(0x5eeae3);
w4(R+0,u32(0x1ull));
}
B5eeae8:{NFSU2_TR(0x5eeae8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5eeae9:{NFSU2_TR(0x5eeae9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5eeaea:L5eeaea:{c.instructions+=3;NFSU2_TR(0x5eeaea);
w4(R+0,u32(0x4ull));
}
B5eeaef:{NFSU2_TR(0x5eeaef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5eeaf0:{NFSU2_TR(0x5eeaf0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5eeaf1:L5eeaf1:{c.instructions+=1;NFSU2_TR(0x5eeaf1);
__builtin_memmove((R+0),(R+8),4);
}
B5eeaf3:L5eeaf3:{c.instructions+=2;NFSU2_TR(0x5eeaf3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5eeaf4:{NFSU2_TR(0x5eeaf4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5eeb00:L5eeb00:{c.instructions+=6;NFSU2_TR(0x5eeb00);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5eeb03:{NFSU2_TR(0x5eeb03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B5eeb06:{NFSU2_TR(0x5eeb06);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5eeb0c:{NFSU2_TR(0x5eeb0c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5eeb0e:{NFSU2_TR(0x5eeb0e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5eeb11:{NFSU2_TR(0x5eeb11);
if(r1(R+514)){{goto L5eeb1d;}}
}
B5eeb13:L5eeb13:{c.instructions+=3;NFSU2_TR(0x5eeb13);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5eeb19:{NFSU2_TR(0x5eeb19);
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
B5eeb1c:{NFSU2_TR(0x5eeb1c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5eeb1d:L5eeb1d:{c.instructions+=4;NFSU2_TR(0x5eeb1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5eeb20:{NFSU2_TR(0x5eeb20);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5eeb26:{NFSU2_TR(0x5eeb26);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5eeb28:{NFSU2_TR(0x5eeb28);
if(r1(R+518)){{goto L5eeb63;}}
}
B5eeb2a:L5eeb2a:{c.instructions+=2;NFSU2_TR(0x5eeb2a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5eeb2f:{NFSU2_TR(0x5eeb2f);
if(r1(R+518)){{goto L5eeb63;}}
}
B5eeb31:L5eeb31:{c.instructions+=10;NFSU2_TR(0x5eeb31);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B5eeb36:{NFSU2_TR(0x5eeb36);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5eeb38:{NFSU2_TR(0x5eeb38);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B5eeb3b:{NFSU2_TR(0x5eeb3b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eeb3f:{NFSU2_TR(0x5eeb3f);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5eeb43:{NFSU2_TR(0x5eeb43);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5eeb49:{NFSU2_TR(0x5eeb49);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5eeb4c:{NFSU2_TR(0x5eeb4c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5eeb4e:{NFSU2_TR(0x5eeb4e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5eeb51:{NFSU2_TR(0x5eeb51);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5eebf9;}}
}
B5eeb57:L5eeb57:{c.instructions+=4;NFSU2_TR(0x5eeb57);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5eeb59:{NFSU2_TR(0x5eeb59);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5eeb5f:{NFSU2_TR(0x5eeb5f);
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
B5eeb62:{NFSU2_TR(0x5eeb62);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5eeb63:L5eeb63:{c.instructions+=3;NFSU2_TR(0x5eeb63);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5eeb66:{NFSU2_TR(0x5eeb66);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5eeb68:{NFSU2_TR(0x5eeb68);
if(r1(R+518)){{goto L5eebfc;}}
}
B5eeb6e:L5eeb6e:{c.instructions+=2;NFSU2_TR(0x5eeb6e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5eeb73:{NFSU2_TR(0x5eeb73);
if(r1(R+518)){{goto L5eebfc;}}
}
B5eeb79:L5eeb79:{c.instructions+=10;NFSU2_TR(0x5eeb79);
__builtin_memmove((R+8),gp(0x86518c),4);
}
B5eeb7f:{NFSU2_TR(0x5eeb7f);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B5eeb81:{NFSU2_TR(0x5eeb81);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eeb85:{NFSU2_TR(0x5eeb85);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5eeb89:{NFSU2_TR(0x5eeb89);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5eeb8f:{NFSU2_TR(0x5eeb8f);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5eeb93:{NFSU2_TR(0x5eeb93);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5eeb96:{NFSU2_TR(0x5eeb96);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5eeb98:{NFSU2_TR(0x5eeb98);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5eeb9b:{NFSU2_TR(0x5eeb9b);
if(r1(R+514)){{goto L5eebb3;}}
}
B5eeb9d:L5eeb9d:{c.instructions+=7;NFSU2_TR(0x5eeb9d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5eeb9f:{NFSU2_TR(0x5eeb9f);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5eeba2:{NFSU2_TR(0x5eeba2);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5eeba8:{NFSU2_TR(0x5eeba8);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5eebac:{NFSU2_TR(0x5eebac);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5eebaf:{NFSU2_TR(0x5eebaf);
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
B5eebb2:{NFSU2_TR(0x5eebb2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5eebb3:L5eebb3:{c.instructions+=8;NFSU2_TR(0x5eebb3);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5eebb6:{NFSU2_TR(0x5eebb6);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B5eebb8:{NFSU2_TR(0x5eebb8);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5eebbc:{NFSU2_TR(0x5eebbc);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5eebc0:{NFSU2_TR(0x5eebc0);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5eebc4:{NFSU2_TR(0x5eebc4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5eebc6:{NFSU2_TR(0x5eebc6);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5eebc9:{NFSU2_TR(0x5eebc9);
if(r1(R+514)){{goto L5eebdb;}}
}
B5eebcb:L5eebcb:{c.instructions+=6;NFSU2_TR(0x5eebcb);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5eebcd:{NFSU2_TR(0x5eebcd);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5eebd1:{NFSU2_TR(0x5eebd1);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5eebd4:{NFSU2_TR(0x5eebd4);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5eebd7:{NFSU2_TR(0x5eebd7);
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
B5eebda:{NFSU2_TR(0x5eebda);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5eebdb:L5eebdb:{c.instructions+=6;NFSU2_TR(0x5eebdb);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5eebde:{NFSU2_TR(0x5eebde);
{u32 ea_=u32(u32(7895772u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5eebe4:{NFSU2_TR(0x5eebe4);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5eebe8:{NFSU2_TR(0x5eebe8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5eebea:{NFSU2_TR(0x5eebea);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5eebed:{NFSU2_TR(0x5eebed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5eebfc;}}
}
B5eebef:L5eebef:{c.instructions+=3;NFSU2_TR(0x5eebef);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5eebf1:{NFSU2_TR(0x5eebf1);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5eebf5:{NFSU2_TR(0x5eebf5);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5eebf9:L5eebf9:{c.instructions+=1;NFSU2_TR(0x5eebf9);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5eebfc:L5eebfc:{c.instructions+=2;NFSU2_TR(0x5eebfc);
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
B5eebff:{NFSU2_TR(0x5eebff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5eec00:L5eec00:{c.instructions+=2;NFSU2_TR(0x5eec00);
u8 U[8];
__builtin_memmove((U+0),gp(0x89e7b0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5eec07:{NFSU2_TR(0x5eec07);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5eec43;}}
}
B5eec09:L5eec09:{c.instructions+=5;NFSU2_TR(0x5eec09);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5eec0d:{NFSU2_TR(0x5eec0d);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5eec10:{NFSU2_TR(0x5eec10);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5eec12:{NFSU2_TR(0x5eec12);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5eec16:{NFSU2_TR(0x5eec16);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5eec3a;}}
}
B5eec18:L5eec18:{c.instructions+=5;NFSU2_TR(0x5eec18);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eec19:{NFSU2_TR(0x5eec19);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B5eec1c:{NFSU2_TR(0x5eec1c);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5eec1e:{NFSU2_TR(0x5eec1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5eec1f:{NFSU2_TR(0x5eec1f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5eec3a;}}
}
B5eec21:L5eec21:{c.instructions+=6;NFSU2_TR(0x5eec21);
{u32 ea_=u32(r4(R+8)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5eec24:{NFSU2_TR(0x5eec24);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5eec27:{NFSU2_TR(0x5eec27);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B5eec29:{NFSU2_TR(0x5eec29);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5eec2b:{NFSU2_TR(0x5eec2b);
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
B5eec2e:{NFSU2_TR(0x5eec2e);
if(r1(R+514)){{goto L5eec35;}}
}
B5eec30:L5eec30:{c.instructions+=2;NFSU2_TR(0x5eec30);
w1(R+0,u8(0x1ull));
}
B5eec32:{NFSU2_TR(0x5eec32);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5eec35:L5eec35:{c.instructions+=2;NFSU2_TR(0x5eec35);
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
B5eec37:{NFSU2_TR(0x5eec37);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5eec3a:L5eec3a:{c.instructions+=3;NFSU2_TR(0x5eec3a);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(R+0))<(r1(U+8))));
w1(R+523,sborrow<u8>(r1(R+0),r1(U+8)));
w1(U+9,u8(u32(r1(R+0))-u32(r1(U+8))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B5eec3d:{NFSU2_TR(0x5eec3d);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
__builtin_memmove((R+0),(U+2),1);
}
B5eec40:{NFSU2_TR(0x5eec40);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5eec43:L5eec43:{c.instructions+=6;NFSU2_TR(0x5eec43);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5eec47:{NFSU2_TR(0x5eec47);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eec48:{NFSU2_TR(0x5eec48);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5eec4c:{NFSU2_TR(0x5eec4c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5eec4f:{NFSU2_TR(0x5eec4f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5eec51:{NFSU2_TR(0x5eec51);
if(r1(R+518)){{goto L5eec63;}}
}
B5eec53:L5eec53:{c.instructions+=3;NFSU2_TR(0x5eec53);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5eec56:{NFSU2_TR(0x5eec56);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5eec58:{NFSU2_TR(0x5eec58);
if(r1(R+518)){{goto L5eec63;}}
}
B5eec5a:L5eec5a:{c.instructions+=4;NFSU2_TR(0x5eec5a);
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
B5eec5c:{NFSU2_TR(0x5eec5c);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
__builtin_memmove((R+0),(U+2),1);
}
B5eec5f:{NFSU2_TR(0x5eec5f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5eec60:{NFSU2_TR(0x5eec60);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5eec63:L5eec63:{c.instructions+=6;NFSU2_TR(0x5eec63);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5eec66:{NFSU2_TR(0x5eec66);
{u32 ea_=u32(r4(R+8)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5eec69:{NFSU2_TR(0x5eec69);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B5eec6b:{NFSU2_TR(0x5eec6b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5eec6d:{NFSU2_TR(0x5eec6d);
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
B5eec70:{NFSU2_TR(0x5eec70);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5eec78;}}
}
B5eec72:L5eec72:{c.instructions+=3;NFSU2_TR(0x5eec72);
w1(R+0,u8(0x1ull));
}
B5eec74:{NFSU2_TR(0x5eec74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5eec75:{NFSU2_TR(0x5eec75);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5eec78:L5eec78:{c.instructions+=3;NFSU2_TR(0x5eec78);
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
B5eec7a:{NFSU2_TR(0x5eec7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5eec7b:{NFSU2_TR(0x5eec7b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5eec80:L5eec80:{c.instructions+=7;NFSU2_TR(0x5eec80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B5eec83:{NFSU2_TR(0x5eec83);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eec84:{NFSU2_TR(0x5eec84);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eec85:{NFSU2_TR(0x5eec85);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eec86:{NFSU2_TR(0x5eec86);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eec87:{NFSU2_TR(0x5eec87);
__builtin_memmove((R+28),(R+4),4);
}
B5eec89:{NFSU2_TR(0x5eec89);
__builtin_memmove((R+16),(R+16),4);
}
B5eec90:L5eec90:{c.instructions+=7;NFSU2_TR(0x5eec90);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5eec93:{NFSU2_TR(0x5eec93);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5eec95:{NFSU2_TR(0x5eec95);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B5eec96:{NFSU2_TR(0x5eec96);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5eec98:{NFSU2_TR(0x5eec98);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eec9c:{NFSU2_TR(0x5eec9c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eeca0:{NFSU2_TR(0x5eeca0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5eece6;}}
}
B5eeca2:L5eeca2:{c.instructions+=1;NFSU2_TR(0x5eeca2);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xbd4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5eeca8:L5eeca8:{c.instructions+=6;NFSU2_TR(0x5eeca8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+20),(U+0),4);
}
B5eecaa:{NFSU2_TR(0x5eecaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5eecad:{NFSU2_TR(0x5eecad);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eecae:{NFSU2_TR(0x5eecae);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eecaf:{NFSU2_TR(0x5eecaf);
__builtin_memmove((R+4),(R+28),4);
}
B5eecb1:{NFSU2_TR(0x5eecb1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eecb6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5eec00u);}goto L5eec00;}
}
B5eecb6:L5eecb6:{c.instructions+=2;NFSU2_TR(0x5eecb6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5eecb8:{NFSU2_TR(0x5eecb8);
if(r1(R+518)){{goto L5eecc8;}}
}
B5eecba:L5eecba:{c.instructions+=5;NFSU2_TR(0x5eecba);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5eecbe:{NFSU2_TR(0x5eecbe);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5eecbf:{NFSU2_TR(0x5eecbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eecc2:{NFSU2_TR(0x5eecc2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5eecc4:{NFSU2_TR(0x5eecc4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eecc8:L5eecc8:{c.instructions+=8;NFSU2_TR(0x5eecc8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5eeccc:{NFSU2_TR(0x5eeccc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5eeccf:{NFSU2_TR(0x5eeccf);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5eecd0:{NFSU2_TR(0x5eecd0);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B5eecd3:{NFSU2_TR(0x5eecd3);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B5eecd4:{NFSU2_TR(0x5eecd4);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5eecd6:{NFSU2_TR(0x5eecd6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eecda:{NFSU2_TR(0x5eecda);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5eeca8u);}goto L5eeca8;}}
}
B5eecdc:L5eecdc:{c.instructions+=3;NFSU2_TR(0x5eecdc);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5eece0:{NFSU2_TR(0x5eece0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5eece2:{NFSU2_TR(0x5eece2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5eec90u);}goto L5eec90;}}
}
B5eece4:L5eece4:{c.instructions+=1;NFSU2_TR(0x5eece4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5eece6:L5eece6:{c.instructions+=2;NFSU2_TR(0x5eece6);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+4)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5eece9:{NFSU2_TR(0x5eece9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5eed07;}}
}
B5eeceb:L5eeceb:{c.instructions+=1;NFSU2_TR(0x5eeceb);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xbd0ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5eecf1:L5eecf1:{c.instructions+=9;NFSU2_TR(0x5eecf1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5eecf3:{NFSU2_TR(0x5eecf3);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5eecf6:{NFSU2_TR(0x5eecf6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5eecf7:{NFSU2_TR(0x5eecf7);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xbull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5eecfa:{NFSU2_TR(0x5eecfa);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5eecfd:{NFSU2_TR(0x5eecfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5eed00:{NFSU2_TR(0x5eed00);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B5eed03:{NFSU2_TR(0x5eed03);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5eed05:{NFSU2_TR(0x5eed05);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5eecf1u);}goto L5eecf1;}}
}
B5eed07:L5eed07:{c.instructions+=6;NFSU2_TR(0x5eed07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5eed08:{NFSU2_TR(0x5eed08);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5eed09:{NFSU2_TR(0x5eed09);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5eed0a:{NFSU2_TR(0x5eed0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5eed0b:{NFSU2_TR(0x5eed0b);
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
B5eed0e:{NFSU2_TR(0x5eed0e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5eed10:L5eed10:{c.instructions+=8;NFSU2_TR(0x5eed10);
__builtin_memmove((R+0),gp(0x8900bc),4);
}
B5eed15:{NFSU2_TR(0x5eed15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B5eed18:{NFSU2_TR(0x5eed18);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eed19:{NFSU2_TR(0x5eed19);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eed1a:{NFSU2_TR(0x5eed1a);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5eed1c:{NFSU2_TR(0x5eed1c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5eed1e:{NFSU2_TR(0x5eed1e);
__builtin_memmove((R+12),(R+4),4);
}
B5eed20:{NFSU2_TR(0x5eed20);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5eee70;}}
}
B5eed26:L5eed26:{c.instructions+=3;NFSU2_TR(0x5eed26);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eed27:{NFSU2_TR(0x5eed27);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eed28:{NFSU2_TR(0x5eed28);
{goto L5eed30;}
}
B5eed30:L5eed30:{c.instructions+=3;NFSU2_TR(0x5eed30);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8900b4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5eed37:{NFSU2_TR(0x5eed37);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5eed39:{NFSU2_TR(0x5eed39);
if(r1(R+518)){{goto L5eee60;}}
}
B5eed3f:L5eed3f:{c.instructions+=6;NFSU2_TR(0x5eed3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5eed42:{NFSU2_TR(0x5eed42);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5eed45:{NFSU2_TR(0x5eed45);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B5eed49:{NFSU2_TR(0x5eed49);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B5eed4d:{NFSU2_TR(0x5eed4d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5eed4f:{NFSU2_TR(0x5eed4f);
if(r1(R+518)){{goto L5eee60;}}
}
B5eed55:L5eed55:{c.instructions+=4;NFSU2_TR(0x5eed55);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5eed58:{NFSU2_TR(0x5eed58);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5eed5b:{NFSU2_TR(0x5eed5b);
__builtin_memmove((R+8),(R+0),4);
}
B5eed5d:{NFSU2_TR(0x5eed5d);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5eed64;}}
}
B5eed5f:L5eed5f:{c.instructions+=1;NFSU2_TR(0x5eed5f);
w4(R+8,u32(0x1ull));
}
B5eed64:L5eed64:{c.instructions+=2;NFSU2_TR(0x5eed64);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5eed66:{NFSU2_TR(0x5eed66);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5eed6a;}}
}
B5eed68:L5eed68:{c.instructions+=1;NFSU2_TR(0x5eed68);
__builtin_memmove((R+8),(R+24),4);
}
B5eed6a:L5eed6a:{c.instructions+=5;NFSU2_TR(0x5eed6a);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5eed6c:{NFSU2_TR(0x5eed6c);
__builtin_memmove((R+8),(R+518),1);
}
B5eed6f:{NFSU2_TR(0x5eed6f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5eed72:{NFSU2_TR(0x5eed72);
__builtin_memmove((R+0),(R+4),4);
}
B5eed74:{NFSU2_TR(0x5eed74);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5eed7b;}}
}
B5eed76:L5eed76:{c.instructions+=1;NFSU2_TR(0x5eed76);
w4(R+0,u32(0x1ull));
}
B5eed7b:L5eed7b:{c.instructions+=2;NFSU2_TR(0x5eed7b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5eed7d:{NFSU2_TR(0x5eed7d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5eed81;}}
}
B5eed7f:L5eed7f:{c.instructions+=1;NFSU2_TR(0x5eed7f);
__builtin_memmove((R+0),(R+24),4);
}
B5eed81:L5eed81:{c.instructions+=2;NFSU2_TR(0x5eed81);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5eed83:{NFSU2_TR(0x5eed83);
if(r1(R+518)){{goto L5eee60;}}
}
B5eed89:L5eed89:{c.instructions+=2;NFSU2_TR(0x5eed89);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5eed8b:{NFSU2_TR(0x5eed8b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5eee60;}}
}
B5eed91:L5eed91:{c.instructions+=2;NFSU2_TR(0x5eed91);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5eed93:{NFSU2_TR(0x5eed93);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5eed9e;}}
}
B5eed95:L5eed95:{c.instructions+=2;NFSU2_TR(0x5eed95);
u8 U[16];
w4(U+0,u32(u32(u32(0xbccull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B5eed9c:{NFSU2_TR(0x5eed9c);
{goto L5eeda0;}
}
B5eed9e:L5eed9e:{c.instructions+=1;NFSU2_TR(0x5eed9e);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5eeda0:L5eeda0:{c.instructions+=10;NFSU2_TR(0x5eeda0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5eeda2:{NFSU2_TR(0x5eeda2);
{u32 ea_=u32(r4(R+8)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5eeda8:{NFSU2_TR(0x5eeda8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5eedaa:{NFSU2_TR(0x5eedaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x430ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5eedb0:{NFSU2_TR(0x5eedb0);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5eedb4:{NFSU2_TR(0x5eedb4);
{u32 ea_=u32(u32(7890136u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5eedba:{NFSU2_TR(0x5eedba);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eedbe:{NFSU2_TR(0x5eedbe);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5eedc0:{NFSU2_TR(0x5eedc0);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5eedc3:{NFSU2_TR(0x5eedc3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5eee60;}}
}
B5eedc9:L5eedc9:{c.instructions+=5;NFSU2_TR(0x5eedc9);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x60ull))));
}
B5eedcc:{NFSU2_TR(0x5eedcc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eedcd:{NFSU2_TR(0x5eedcd);
u8 U[6];
w1(R+512,carry<u32>(r4(R+8),u32(0x60ull)));
w1(R+523,scarry<u32>(r4(R+8),u32(0x60ull)));
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x60ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5eedd0:{NFSU2_TR(0x5eedd0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eedd1:{NFSU2_TR(0x5eedd1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eedd6ull));
TAIL_STATIC(0x43ce10u,43c);
}
B5eedd6:L5eedd6:{c.instructions+=5;NFSU2_TR(0x5eedd6);
{u32 ea_=u32(u32(7909400u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5eeddc:{NFSU2_TR(0x5eeddc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5eeddf:{NFSU2_TR(0x5eeddf);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5eede1:{NFSU2_TR(0x5eede1);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5eede4:{NFSU2_TR(0x5eede4);
if(r1(R+514)){{goto L5eee60;}}
}
B5eede6:L5eede6:{c.instructions+=4;NFSU2_TR(0x5eede6);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5eede9:{NFSU2_TR(0x5eede9);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5eedec:{NFSU2_TR(0x5eedec);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(R+0),r1(U+0)));
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B5eedee:{NFSU2_TR(0x5eedee);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5eee0e;}}
}
B5eedf0:L5eedf0:{c.instructions+=7;NFSU2_TR(0x5eedf0);
w4(R+4,u32(s32(s8(r1(R+0)))));
}
B5eedf3:{NFSU2_TR(0x5eedf3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eedf7:{NFSU2_TR(0x5eedf7);
u8 U[4];
w4(U+0,u32(0x7a5f38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eedfc:{NFSU2_TR(0x5eedfc);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5eee00:{NFSU2_TR(0x5eee00);
{u32 ea_=u32(u32(8017532u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B5eee06:{NFSU2_TR(0x5eee06);
{u32 ea_=u32(u32(8017528u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5eee0c:{NFSU2_TR(0x5eee0c);
{goto L5eee24;}
}
B5eee0e:L5eee0e:{c.instructions+=5;NFSU2_TR(0x5eee0e);
w4(R+8,u32(s32(s8(r1(R+4)))));
}
B5eee11:{NFSU2_TR(0x5eee11);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eee15:{NFSU2_TR(0x5eee15);
u8 U[4];
w4(U+0,u32(0x7a5f28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eee1a:{NFSU2_TR(0x5eee1a);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5eee1e:{NFSU2_TR(0x5eee1e);
{u32 ea_=u32(u32(8017536u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B5eee24:L5eee24:{c.instructions+=4;NFSU2_TR(0x5eee24);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eee25:{NFSU2_TR(0x5eee25);
__builtin_memmove((R+4),gp(0x8650b8),4);
}
B5eee2b:{NFSU2_TR(0x5eee2b);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5eee2e:{NFSU2_TR(0x5eee2e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eee33ull));
TAIL_STATIC(0x578e90u,578);
}
B5eee33:L5eee33:{c.instructions+=7;NFSU2_TR(0x5eee33);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5eee37:{NFSU2_TR(0x5eee37);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5eee3b:{NFSU2_TR(0x5eee3b);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5eee3d:{NFSU2_TR(0x5eee3d);
{u32 ea_=u32(u32(7897632u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5eee43:{NFSU2_TR(0x5eee43);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5eee45:{NFSU2_TR(0x5eee45);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5eee48:{NFSU2_TR(0x5eee48);
if(r1(R+514)){{goto L5eee60;}}
}
B5eee4a:L5eee4a:{c.instructions+=5;NFSU2_TR(0x5eee4a);
__builtin_memmove((R+0),gp(0x7a5684),4);
}
B5eee4f:{NFSU2_TR(0x5eee4f);
__builtin_memmove((R+4),gp(0x8650b8),4);
}
B5eee55:{NFSU2_TR(0x5eee55);
u8 U[4];
w4(U+0,u32(0x7a5f1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eee5a:{NFSU2_TR(0x5eee5a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eee5b:{NFSU2_TR(0x5eee5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eee60ull));
TAIL_STATIC(0x578e90u,578);
}
B5eee60:L5eee60:{c.instructions+=4;NFSU2_TR(0x5eee60);
__builtin_memmove((R+0),gp(0x8900bc),4);
}
B5eee65:{NFSU2_TR(0x5eee65);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B5eee66:{NFSU2_TR(0x5eee66);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5eee68:{NFSU2_TR(0x5eee68);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5eed30u);}goto L5eed30;}}
}
B5eee6e:L5eee6e:{c.instructions+=2;NFSU2_TR(0x5eee6e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5eee6f:{NFSU2_TR(0x5eee6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5eee70:L5eee70:{c.instructions+=4;NFSU2_TR(0x5eee70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5eee71:{NFSU2_TR(0x5eee71);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5eee72:{NFSU2_TR(0x5eee72);
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
B5eee75:{NFSU2_TR(0x5eee75);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5eee80:L5eee80:{c.instructions+=4;NFSU2_TR(0x5eee80);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5eee83:{NFSU2_TR(0x5eee83);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5eee8a:{NFSU2_TR(0x5eee8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xbd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eee90:{NFSU2_TR(0x5eee90);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5eeea0:L5eeea0:{c.instructions+=2;NFSU2_TR(0x5eeea0);
u8 U[5];
__builtin_memmove((U+3),gp(0x83aa1a),1);
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
B5eeea7:{NFSU2_TR(0x5eeea7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5eeeb0;}}
}
B5eeea9:L5eeea9:{c.instructions+=2;NFSU2_TR(0x5eeea9);
{u32 ea_=u32(u32(8017580u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5eeeaf:{NFSU2_TR(0x5eeeaf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5eeeb0:L5eeeb0:{c.instructions+=3;NFSU2_TR(0x5eeeb0);
{u32 ea_=u32(u32(8017580u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5eeeb6:{NFSU2_TR(0x5eeeb6);
{u32 ea_=u32(u32(8019784u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5eeebc:{NFSU2_TR(0x5eeebc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5eeec0:L5eeec0:{c.instructions+=7;NFSU2_TR(0x5eeec0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5eeec4:{NFSU2_TR(0x5eeec4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5eeec7:{NFSU2_TR(0x5eeec7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eeec8:{NFSU2_TR(0x5eeec8);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5eeecc:{NFSU2_TR(0x5eeecc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5eeecf:{NFSU2_TR(0x5eeecf);
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
B5eeed1:{NFSU2_TR(0x5eeed1);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5eeedd;}}
}
B5eeed3:L5eeed3:{c.instructions+=1;NFSU2_TR(0x5eeed3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5eeee4;}}
}
B5eeed5:L5eeed5:{c.instructions+=3;NFSU2_TR(0x5eeed5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5eeed8:{NFSU2_TR(0x5eeed8);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
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
B5eeedb:{NFSU2_TR(0x5eeedb);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5eeee4;}}
}
B5eeedd:L5eeedd:{c.instructions+=3;NFSU2_TR(0x5eeedd);
w4(R+0,u32(0x1ull));
}
B5eeee2:{NFSU2_TR(0x5eeee2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5eeee3:{NFSU2_TR(0x5eeee3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5eeee4:L5eeee4:{c.instructions+=3;NFSU2_TR(0x5eeee4);
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
B5eeee6:{NFSU2_TR(0x5eeee6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5eeee7:{NFSU2_TR(0x5eeee7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5eeef0:L5eeef0:{c.instructions+=5;NFSU2_TR(0x5eeef0);
{u32 ea_=u32(u32(9037752u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5eeef6:{NFSU2_TR(0x5eeef6);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5eeefc:{NFSU2_TR(0x5eeefc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5eeefe:{NFSU2_TR(0x5eeefe);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5eef01:{NFSU2_TR(0x5eef01);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5eef0b;}}
}
B5eef03:L5eef03:{c.instructions+=2;NFSU2_TR(0x5eef03);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x3ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B5eef06:{NFSU2_TR(0x5eef06);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5eef0b;}}
}
B5eef08:L5eef08:{c.instructions+=2;NFSU2_TR(0x5eef08);
w1(R+0,u8(0x1ull));
}
B5eef0a:{NFSU2_TR(0x5eef0a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5eef0b:L5eef0b:{c.instructions+=3;NFSU2_TR(0x5eef0b);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
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
B5eef0e:{NFSU2_TR(0x5eef0e);
__builtin_memmove((R+0),(R+518),1);
}
B5eef11:{NFSU2_TR(0x5eef11);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5eef20:L5eef20:{c.instructions+=9;NFSU2_TR(0x5eef20);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eef21:{NFSU2_TR(0x5eef21);
__builtin_memmove((R+12),gp(0x8900bc),4);
}
B5eef27:{NFSU2_TR(0x5eef27);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eef28:{NFSU2_TR(0x5eef28);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eef29:{NFSU2_TR(0x5eef29);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5eef2b:{NFSU2_TR(0x5eef2b);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5eef2d:{NFSU2_TR(0x5eef2d);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5eef2f:{NFSU2_TR(0x5eef2f);
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
B5eef31:{NFSU2_TR(0x5eef31);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5eef4e;}}
}
B5eef33:L5eef33:{c.instructions+=4;NFSU2_TR(0x5eef33);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8900b4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B5eef3a:{NFSU2_TR(0x5eef3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5eef3d:{NFSU2_TR(0x5eef3d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5eef3f:{NFSU2_TR(0x5eef3f);
if(r1(R+518)){{goto L5eef49;}}
}
B5eef41:L5eef41:{c.instructions+=2;NFSU2_TR(0x5eef41);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5eef43:{NFSU2_TR(0x5eef43);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5eef49;}}
}
B5eef45:L5eef45:{c.instructions+=2;NFSU2_TR(0x5eef45);
__builtin_memmove((R+28),(R+4),4);
}
B5eef47:{NFSU2_TR(0x5eef47);
__builtin_memmove((R+0),(R+8),4);
}
B5eef49:L5eef49:{c.instructions+=3;NFSU2_TR(0x5eef49);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5eef4a:{NFSU2_TR(0x5eef4a);
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
B5eef4c:{NFSU2_TR(0x5eef4c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5eef33u);}goto L5eef33;}}
}
B5eef4e:L5eef4e:{c.instructions+=4;NFSU2_TR(0x5eef4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5eef4f:{NFSU2_TR(0x5eef4f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5eef50:{NFSU2_TR(0x5eef50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5eef51:{NFSU2_TR(0x5eef51);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5eef60:L5eef60:{c.instructions+=3;NFSU2_TR(0x5eef60);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5eef64:{NFSU2_TR(0x5eef64);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5eef67:{NFSU2_TR(0x5eef67);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5eef70:L5eef70:{c.instructions+=6;NFSU2_TR(0x5eef70);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eef71:{NFSU2_TR(0x5eef71);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5eef74:{NFSU2_TR(0x5eef74);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eef75:{NFSU2_TR(0x5eef75);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eef76:{NFSU2_TR(0x5eef76);
w4(R+0,u32(0x1ull));
}
B5eef7b:{NFSU2_TR(0x5eef7b);
{goto L5eef80;}
}
B5eef80:L5eef80:{c.instructions+=3;NFSU2_TR(0x5eef80);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5eef82:{NFSU2_TR(0x5eef82);
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
B5eef84:{NFSU2_TR(0x5eef84);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5eefa2;}}
}
B5eef86:L5eef86:{c.instructions+=2;NFSU2_TR(0x5eef86);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xbd0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5eef8c:{NFSU2_TR(0x5eef8c);
__builtin_memmove((R+16),(R+16),4);
}
B5eef90:L5eef90:{c.instructions+=4;NFSU2_TR(0x5eef90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5eef92:{NFSU2_TR(0x5eef92);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(s32(s8(r1(U+4)))));
}
B5eef96:{NFSU2_TR(0x5eef96);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5eef98:{NFSU2_TR(0x5eef98);
if(r1(R+518)){{goto L5eefa6;}}
}
B5eef9a:L5eef9a:{c.instructions+=4;NFSU2_TR(0x5eef9a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5eef9b:{NFSU2_TR(0x5eef9b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B5eef9e:{NFSU2_TR(0x5eef9e);
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
B5eefa0:{NFSU2_TR(0x5eefa0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5eef90u);}goto L5eef90;}}
}
B5eefa2:L5eefa2:{c.instructions+=4;NFSU2_TR(0x5eefa2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5eefa3:{NFSU2_TR(0x5eefa3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5eefa4:{NFSU2_TR(0x5eefa4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5eefa5:{NFSU2_TR(0x5eefa5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5eefa6:L5eefa6:{c.instructions+=2;NFSU2_TR(0x5eefa6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5eefa7:{NFSU2_TR(0x5eefa7);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5eef80u);}goto L5eef80;}
}
B5eefb0:L5eefb0:{c.instructions+=7;NFSU2_TR(0x5eefb0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eefb1:{NFSU2_TR(0x5eefb1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eefb2:{NFSU2_TR(0x5eefb2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eefb3:{NFSU2_TR(0x5eefb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5eefb6:{NFSU2_TR(0x5eefb6);
__builtin_memmove((R+0),(R+28),4);
}
B5eefb8:{NFSU2_TR(0x5eefb8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5eefba:{NFSU2_TR(0x5eefba);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5eefdc;}}
}
B5eefbc:L5eefbc:{c.instructions+=1;NFSU2_TR(0x5eefbc);
u8 U[12];
w4(U+0,u32(u32(u32(0xbccull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B5eefc3:L5eefc3:{c.instructions+=2;NFSU2_TR(0x5eefc3);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5eefc5:{NFSU2_TR(0x5eefc5);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5eefcb;}}
}
B5eefc7:L5eefc7:{c.instructions+=2;NFSU2_TR(0x5eefc7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5eefc9:{NFSU2_TR(0x5eefc9);
{goto L5eefcd;}
}
B5eefcb:L5eefcb:{c.instructions+=1;NFSU2_TR(0x5eefcb);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5eefcd:L5eefcd:{c.instructions+=3;NFSU2_TR(0x5eefcd);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B5eefd0:{NFSU2_TR(0x5eefd0);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5eefd2:{NFSU2_TR(0x5eefd2);
if(r1(R+518)){{goto L5eefe4;}}
}
B5eefd4:L5eefd4:{c.instructions+=4;NFSU2_TR(0x5eefd4);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B5eefd5:{NFSU2_TR(0x5eefd5);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x4ull))));
}
B5eefd8:{NFSU2_TR(0x5eefd8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5eefda:{NFSU2_TR(0x5eefda);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5eefc3u);}goto L5eefc3;}}
}
B5eefdc:L5eefdc:{c.instructions+=4;NFSU2_TR(0x5eefdc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5eefdd:{NFSU2_TR(0x5eefdd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5eefde:{NFSU2_TR(0x5eefde);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5eefdf:{NFSU2_TR(0x5eefdf);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5eef70u);}goto L5eef70;}
}
B5eefe4:L5eefe4:{c.instructions+=4;NFSU2_TR(0x5eefe4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5eefe5:{NFSU2_TR(0x5eefe5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5eefe6:{NFSU2_TR(0x5eefe6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5eefe7:{NFSU2_TR(0x5eefe7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5eeff0:L5eeff0:{c.instructions+=3;NFSU2_TR(0x5eeff0);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B5eeff5:{NFSU2_TR(0x5eeff5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5eeff7:{NFSU2_TR(0x5eeff7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x5ef07eu,5ef);}
}
B5eeffd:L5eeffd:{c.instructions+=1;NFSU2_TR(0x5eeffd);
__builtin_memmove((R+0),gp(0x890108),4);
TAIL_STATIC(0x5ef002u,5ef);
}
XIT:NFSU2_TR_EXIT(0x5ee,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
