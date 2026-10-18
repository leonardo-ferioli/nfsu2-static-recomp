#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_445(u8* __restrict R,Cpu& c);
u32 body_44c(u8* __restrict R,Cpu& c);
u32 body_479(u8* __restrict R,Cpu& c);
u32 body_48a(u8* __restrict R,Cpu& c);
u32 body_493(u8* __restrict R,Cpu& c);
u32 body_4a3(u8* __restrict R,Cpu& c);
u32 body_4a4(u8* __restrict R,Cpu& c);
u32 body_4a5(u8* __restrict R,Cpu& c);
u32 body_4bf(u8* __restrict R,Cpu& c);
u32 body_4c0(u8* __restrict R,Cpu& c);
u32 body_4c1(u8* __restrict R,Cpu& c);
u32 body_4d7(u8* __restrict R,Cpu& c);
u32 body_4d8(u8* __restrict R,Cpu& c);
u32 body_4de(u8* __restrict R,Cpu& c);
u32 body_4e9(u8* __restrict R,Cpu& c);
u32 body_4eb(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_503(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_510(u8* __restrict R,Cpu& c);
u32 body_51b(u8* __restrict R,Cpu& c);
u32 body_51c(u8* __restrict R,Cpu& c);
u32 body_51e(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_540(u8* __restrict R,Cpu& c);
u32 body_542(u8* __restrict R,Cpu& c);
u32 body_54e(u8* __restrict R,Cpu& c);
u32 body_54f(u8* __restrict R,Cpu& c);
u32 body_551(u8* __restrict R,Cpu& c);
u32 body_552(u8* __restrict R,Cpu& c);
u32 body_555(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_57e(u8* __restrict R,Cpu& c);
u32 body_582(u8* __restrict R,Cpu& c);
u32 body_58f(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_5f4(u8* __restrict R,Cpu& c);
u32 body_5fe(u8* __restrict R,Cpu& c);
u32 body_63a(u8* __restrict R,Cpu& c);
u32 body_63b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4ea,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4ea,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4ea(u8* __restrict R,Cpu& c);
u32 page_4ea(Cpu& c){return body_4ea(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4ea(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4ea004:goto L4ea004;
case 0x4ea005:c.instructions+=8;goto B4ea005;
case 0x4ea00b:c.instructions+=7;goto B4ea00b;
case 0x4ea00c:c.instructions+=6;goto B4ea00c;
case 0x4ea012:c.instructions+=5;goto B4ea012;
case 0x4ea013:c.instructions+=4;goto B4ea013;
case 0x4ea019:c.instructions+=3;goto B4ea019;
case 0x4ea01a:c.instructions+=2;goto B4ea01a;
case 0x4ea01c:c.instructions+=1;goto B4ea01c;
case 0x4ea021:goto L4ea021;
case 0x4ea027:c.instructions+=2;goto B4ea027;
case 0x4ea02a:c.instructions+=1;goto B4ea02a;
case 0x4ea02c:goto L4ea02c;
case 0x4ea02e:goto L4ea02e;
case 0x4ea02f:c.instructions+=3;goto B4ea02f;
case 0x4ea031:c.instructions+=2;goto B4ea031;
case 0x4ea035:c.instructions+=1;goto B4ea035;
case 0x4ea03a:goto L4ea03a;
case 0x4ea03c:c.instructions+=1;goto B4ea03c;
case 0x4ea041:goto L4ea041;
case 0x4ea043:c.instructions+=5;goto B4ea043;
case 0x4ea046:c.instructions+=4;goto B4ea046;
case 0x4ea04a:c.instructions+=3;goto B4ea04a;
case 0x4ea04c:c.instructions+=2;goto B4ea04c;
case 0x4ea054:c.instructions+=1;goto B4ea054;
case 0x4ea056:goto L4ea056;
case 0x4ea05c:c.instructions+=11;goto B4ea05c;
case 0x4ea05e:c.instructions+=10;goto B4ea05e;
case 0x4ea064:c.instructions+=9;goto B4ea064;
case 0x4ea065:c.instructions+=8;goto B4ea065;
case 0x4ea06b:c.instructions+=7;goto B4ea06b;
case 0x4ea06c:c.instructions+=6;goto B4ea06c;
case 0x4ea072:c.instructions+=5;goto B4ea072;
case 0x4ea073:c.instructions+=4;goto B4ea073;
case 0x4ea079:c.instructions+=3;goto B4ea079;
case 0x4ea07a:c.instructions+=2;goto B4ea07a;
case 0x4ea07c:c.instructions+=1;goto B4ea07c;
case 0x4ea081:goto L4ea081;
case 0x4ea087:c.instructions+=2;goto B4ea087;
case 0x4ea08a:c.instructions+=1;goto B4ea08a;
case 0x4ea08c:goto L4ea08c;
case 0x4ea08e:goto L4ea08e;
case 0x4ea08f:c.instructions+=3;goto B4ea08f;
case 0x4ea091:c.instructions+=2;goto B4ea091;
case 0x4ea095:c.instructions+=1;goto B4ea095;
case 0x4ea09a:goto L4ea09a;
case 0x4ea09f:c.instructions+=2;goto B4ea09f;
case 0x4ea0a1:c.instructions+=1;goto B4ea0a1;
case 0x4ea0a3:goto L4ea0a3;
case 0x4ea0a8:c.instructions+=2;goto B4ea0a8;
case 0x4ea0aa:c.instructions+=1;goto B4ea0aa;
case 0x4ea0ac:goto L4ea0ac;
case 0x4ea0ae:c.instructions+=1;goto B4ea0ae;
case 0x4ea0b3:goto L4ea0b3;
case 0x4ea0b5:c.instructions+=5;goto B4ea0b5;
case 0x4ea0b8:c.instructions+=4;goto B4ea0b8;
case 0x4ea0bc:c.instructions+=3;goto B4ea0bc;
case 0x4ea0be:c.instructions+=2;goto B4ea0be;
case 0x4ea0c6:c.instructions+=1;goto B4ea0c6;
case 0x4ea0c8:goto L4ea0c8;
case 0x4ea0ce:c.instructions+=11;goto B4ea0ce;
case 0x4ea0d0:c.instructions+=10;goto B4ea0d0;
case 0x4ea0d6:c.instructions+=9;goto B4ea0d6;
case 0x4ea0d7:c.instructions+=8;goto B4ea0d7;
case 0x4ea0dd:c.instructions+=7;goto B4ea0dd;
case 0x4ea0de:c.instructions+=6;goto B4ea0de;
case 0x4ea0e4:c.instructions+=5;goto B4ea0e4;
case 0x4ea0e5:c.instructions+=4;goto B4ea0e5;
case 0x4ea0eb:c.instructions+=3;goto B4ea0eb;
case 0x4ea0ec:c.instructions+=2;goto B4ea0ec;
case 0x4ea0ee:c.instructions+=1;goto B4ea0ee;
case 0x4ea0f3:goto L4ea0f3;
case 0x4ea0f9:c.instructions+=2;goto B4ea0f9;
case 0x4ea0fc:c.instructions+=1;goto B4ea0fc;
case 0x4ea0fe:goto L4ea0fe;
case 0x4ea100:goto L4ea100;
case 0x4ea101:c.instructions+=3;goto B4ea101;
case 0x4ea103:c.instructions+=2;goto B4ea103;
case 0x4ea107:c.instructions+=1;goto B4ea107;
case 0x4ea10c:goto L4ea10c;
case 0x4ea111:c.instructions+=2;goto B4ea111;
case 0x4ea113:c.instructions+=1;goto B4ea113;
case 0x4ea119:goto L4ea119;
case 0x4ea11e:c.instructions+=2;goto B4ea11e;
case 0x4ea120:c.instructions+=1;goto B4ea120;
case 0x4ea126:goto L4ea126;
case 0x4ea12b:c.instructions+=2;goto B4ea12b;
case 0x4ea12d:c.instructions+=1;goto B4ea12d;
case 0x4ea133:goto L4ea133;
case 0x4ea135:c.instructions+=1;goto B4ea135;
case 0x4ea13a:goto L4ea13a;
case 0x4ea13d:c.instructions+=4;goto B4ea13d;
case 0x4ea141:c.instructions+=3;goto B4ea141;
case 0x4ea143:c.instructions+=2;goto B4ea143;
case 0x4ea14b:c.instructions+=1;goto B4ea14b;
case 0x4ea14d:goto L4ea14d;
case 0x4ea14f:c.instructions+=12;goto B4ea14f;
case 0x4ea155:c.instructions+=11;goto B4ea155;
case 0x4ea156:c.instructions+=10;goto B4ea156;
case 0x4ea15c:c.instructions+=9;goto B4ea15c;
case 0x4ea15d:c.instructions+=8;goto B4ea15d;
case 0x4ea163:c.instructions+=7;goto B4ea163;
case 0x4ea164:c.instructions+=6;goto B4ea164;
case 0x4ea16a:c.instructions+=5;goto B4ea16a;
case 0x4ea170:c.instructions+=4;goto B4ea170;
case 0x4ea171:c.instructions+=3;goto B4ea171;
case 0x4ea172:c.instructions+=2;goto B4ea172;
case 0x4ea174:c.instructions+=1;goto B4ea174;
case 0x4ea179:goto L4ea179;
case 0x4ea17b:goto L4ea17b;
case 0x4ea17d:goto L4ea17d;
case 0x4ea17e:c.instructions+=3;goto B4ea17e;
case 0x4ea180:c.instructions+=2;goto B4ea180;
case 0x4ea184:c.instructions+=1;goto B4ea184;
case 0x4ea189:goto L4ea189;
case 0x4ea18b:c.instructions+=1;goto B4ea18b;
case 0x4ea190:goto L4ea190;
case 0x4ea193:c.instructions+=4;goto B4ea193;
case 0x4ea197:c.instructions+=3;goto B4ea197;
case 0x4ea199:c.instructions+=2;goto B4ea199;
case 0x4ea1a1:c.instructions+=1;goto B4ea1a1;
case 0x4ea1a3:goto L4ea1a3;
case 0x4ea1a5:c.instructions+=12;goto B4ea1a5;
case 0x4ea1ab:c.instructions+=11;goto B4ea1ab;
case 0x4ea1ac:c.instructions+=10;goto B4ea1ac;
case 0x4ea1b2:c.instructions+=9;goto B4ea1b2;
case 0x4ea1b3:c.instructions+=8;goto B4ea1b3;
case 0x4ea1b9:c.instructions+=7;goto B4ea1b9;
case 0x4ea1ba:c.instructions+=6;goto B4ea1ba;
case 0x4ea1c0:c.instructions+=5;goto B4ea1c0;
case 0x4ea1c6:c.instructions+=4;goto B4ea1c6;
case 0x4ea1c7:c.instructions+=3;goto B4ea1c7;
case 0x4ea1c8:c.instructions+=2;goto B4ea1c8;
case 0x4ea1ca:c.instructions+=1;goto B4ea1ca;
case 0x4ea1cf:goto L4ea1cf;
case 0x4ea1d1:goto L4ea1d1;
case 0x4ea1d3:goto L4ea1d3;
case 0x4ea1d4:c.instructions+=3;goto B4ea1d4;
case 0x4ea1d6:c.instructions+=2;goto B4ea1d6;
case 0x4ea1da:c.instructions+=1;goto B4ea1da;
case 0x4ea1df:goto L4ea1df;
case 0x4ea1e4:goto L4ea1e4;
case 0x4ea1e5:c.instructions+=1;goto B4ea1e5;
case 0x4ea1ea:goto L4ea1ea;
case 0x4ea1ed:c.instructions+=2;goto B4ea1ed;
case 0x4ea1ef:c.instructions+=1;goto B4ea1ef;
case 0x4ea1f1:goto L4ea1f1;
case 0x4ea1f4:c.instructions+=4;goto B4ea1f4;
case 0x4ea1f6:c.instructions+=3;goto B4ea1f6;
case 0x4ea1fb:c.instructions+=2;goto B4ea1fb;
case 0x4ea1fc:c.instructions+=1;goto B4ea1fc;
case 0x4ea201:goto L4ea201;
case 0x4ea202:c.instructions+=1;goto B4ea202;
case 0x4ea207:goto L4ea207;
case 0x4ea20a:goto L4ea20a;
case 0x4ea210:c.instructions+=1;goto B4ea210;
case 0x4ea215:goto L4ea215;
case 0x4ea218:c.instructions+=5;goto B4ea218;
case 0x4ea21b:c.instructions+=4;goto B4ea21b;
case 0x4ea21c:c.instructions+=3;goto B4ea21c;
case 0x4ea21d:c.instructions+=2;goto B4ea21d;
case 0x4ea223:c.instructions+=1;goto B4ea223;
case 0x4ea228:goto L4ea228;
case 0x4ea22c:c.instructions+=7;goto B4ea22c;
case 0x4ea22d:c.instructions+=6;goto B4ea22d;
case 0x4ea22e:c.instructions+=5;goto B4ea22e;
case 0x4ea22f:c.instructions+=4;goto B4ea22f;
case 0x4ea236:c.instructions+=3;goto B4ea236;
case 0x4ea237:c.instructions+=2;goto B4ea237;
case 0x4ea23a:c.instructions+=1;goto B4ea23a;
case 0x4ea240:goto L4ea240;
case 0x4ea243:c.instructions+=4;goto B4ea243;
case 0x4ea244:c.instructions+=3;goto B4ea244;
case 0x4ea247:c.instructions+=2;goto B4ea247;
case 0x4ea249:c.instructions+=1;goto B4ea249;
case 0x4ea24b:goto L4ea24b;
case 0x4ea24c:c.instructions+=2;goto B4ea24c;
case 0x4ea24d:c.instructions+=1;goto B4ea24d;
case 0x4ea250:goto L4ea250;
case 0x4ea253:c.instructions+=4;goto B4ea253;
case 0x4ea259:c.instructions+=3;goto B4ea259;
case 0x4ea25b:c.instructions+=2;goto B4ea25b;
case 0x4ea25e:c.instructions+=1;goto B4ea25e;
case 0x4ea260:goto L4ea260;
case 0x4ea266:c.instructions+=1;goto B4ea266;
case 0x4ea268:goto L4ea268;
case 0x4ea26a:c.instructions+=3;goto B4ea26a;
case 0x4ea26b:c.instructions+=2;goto B4ea26b;
case 0x4ea26e:c.instructions+=1;goto B4ea26e;
case 0x4ea273:goto L4ea273;
case 0x4ea276:c.instructions+=4;goto B4ea276;
case 0x4ea279:c.instructions+=3;goto B4ea279;
case 0x4ea27a:c.instructions+=2;goto B4ea27a;
case 0x4ea27c:c.instructions+=1;goto B4ea27c;
case 0x4ea281:goto L4ea281;
case 0x4ea283:c.instructions+=2;goto B4ea283;
case 0x4ea285:c.instructions+=1;goto B4ea285;
case 0x4ea287:goto L4ea287;
case 0x4ea288:c.instructions+=1;goto B4ea288;
case 0x4ea289:goto L4ea289;
case 0x4ea28a:c.instructions+=1;goto B4ea28a;
case 0x4ea290:goto L4ea290;
case 0x4ea292:c.instructions+=16;goto B4ea292;
case 0x4ea297:c.instructions+=15;goto B4ea297;
case 0x4ea29d:c.instructions+=14;goto B4ea29d;
case 0x4ea29e:c.instructions+=13;goto B4ea29e;
case 0x4ea2a5:c.instructions+=12;goto B4ea2a5;
case 0x4ea2a6:c.instructions+=11;goto B4ea2a6;
case 0x4ea2a7:c.instructions+=10;goto B4ea2a7;
case 0x4ea2a9:c.instructions+=9;goto B4ea2a9;
case 0x4ea2aa:c.instructions+=8;goto B4ea2aa;
case 0x4ea2ab:c.instructions+=7;goto B4ea2ab;
case 0x4ea2af:c.instructions+=6;goto B4ea2af;
case 0x4ea2b6:c.instructions+=5;goto B4ea2b6;
case 0x4ea2b9:c.instructions+=4;goto B4ea2b9;
case 0x4ea2bc:c.instructions+=3;goto B4ea2bc;
case 0x4ea2be:c.instructions+=2;goto B4ea2be;
case 0x4ea2c6:c.instructions+=1;goto B4ea2c6;
case 0x4ea2c8:goto L4ea2c8;
case 0x4ea2c9:c.instructions+=1;goto B4ea2c9;
case 0x4ea2d0:goto L4ea2d0;
case 0x4ea2d3:c.instructions+=3;goto B4ea2d3;
case 0x4ea2d5:c.instructions+=2;goto B4ea2d5;
case 0x4ea2d6:c.instructions+=1;goto B4ea2d6;
case 0x4ea2db:goto L4ea2db;
case 0x4ea2dc:c.instructions+=1;goto B4ea2dc;
case 0x4ea2e1:goto L4ea2e1;
case 0x4ea2e3:c.instructions+=3;goto B4ea2e3;
case 0x4ea2e6:c.instructions+=2;goto B4ea2e6;
case 0x4ea2e8:c.instructions+=1;goto B4ea2e8;
case 0x4ea2ea:goto L4ea2ea;
case 0x4ea2eb:goto L4ea2eb;
case 0x4ea2f0:goto L4ea2f0;
case 0x4ea2f1:c.instructions+=1;goto B4ea2f1;
case 0x4ea2f6:goto L4ea2f6;
case 0x4ea2f9:c.instructions+=2;goto B4ea2f9;
case 0x4ea2fb:c.instructions+=1;goto B4ea2fb;
case 0x4ea2fd:goto L4ea2fd;
case 0x4ea302:goto L4ea302;
case 0x4ea303:c.instructions+=1;goto B4ea303;
case 0x4ea308:goto L4ea308;
case 0x4ea30b:goto L4ea30b;
case 0x4ea30d:c.instructions+=3;goto B4ea30d;
case 0x4ea30f:c.instructions+=2;goto B4ea30f;
case 0x4ea314:c.instructions+=1;goto B4ea314;
case 0x4ea316:goto L4ea316;
case 0x4ea318:c.instructions+=5;goto B4ea318;
case 0x4ea31b:c.instructions+=4;goto B4ea31b;
case 0x4ea31d:c.instructions+=3;goto B4ea31d;
case 0x4ea31e:c.instructions+=2;goto B4ea31e;
case 0x4ea321:c.instructions+=1;goto B4ea321;
case 0x4ea326:goto L4ea326;
case 0x4ea328:c.instructions+=3;goto B4ea328;
case 0x4ea32b:c.instructions+=2;goto B4ea32b;
case 0x4ea32d:c.instructions+=1;goto B4ea32d;
case 0x4ea32f:goto L4ea32f;
case 0x4ea332:c.instructions+=2;goto B4ea332;
case 0x4ea33a:c.instructions+=1;goto B4ea33a;
case 0x4ea33f:goto L4ea33f;
case 0x4ea343:c.instructions+=6;goto B4ea343;
case 0x4ea344:c.instructions+=5;goto B4ea344;
case 0x4ea345:c.instructions+=4;goto B4ea345;
case 0x4ea346:c.instructions+=3;goto B4ea346;
case 0x4ea34d:c.instructions+=2;goto B4ea34d;
case 0x4ea350:c.instructions+=1;goto B4ea350;
case 0x4ea360:goto L4ea360;
case 0x4ea362:c.instructions+=16;goto B4ea362;
case 0x4ea367:c.instructions+=15;goto B4ea367;
case 0x4ea36d:c.instructions+=14;goto B4ea36d;
case 0x4ea36e:c.instructions+=13;goto B4ea36e;
case 0x4ea375:c.instructions+=12;goto B4ea375;
case 0x4ea376:c.instructions+=11;goto B4ea376;
case 0x4ea377:c.instructions+=10;goto B4ea377;
case 0x4ea378:c.instructions+=9;goto B4ea378;
case 0x4ea37a:c.instructions+=8;goto B4ea37a;
case 0x4ea37b:c.instructions+=7;goto B4ea37b;
case 0x4ea37f:c.instructions+=6;goto B4ea37f;
case 0x4ea385:c.instructions+=5;goto B4ea385;
case 0x4ea38a:c.instructions+=4;goto B4ea38a;
case 0x4ea38c:c.instructions+=3;goto B4ea38c;
case 0x4ea38f:c.instructions+=2;goto B4ea38f;
case 0x4ea397:c.instructions+=1;goto B4ea397;
case 0x4ea399:goto L4ea399;
case 0x4ea39b:c.instructions+=1;goto B4ea39b;
case 0x4ea39d:goto L4ea39d;
case 0x4ea39f:c.instructions+=2;goto B4ea39f;
case 0x4ea3a4:c.instructions+=1;goto B4ea3a4;
case 0x4ea3a9:goto L4ea3a9;
case 0x4ea3ab:c.instructions+=1;goto B4ea3ab;
case 0x4ea3b0:goto L4ea3b0;
case 0x4ea3b3:goto L4ea3b3;
case 0x4ea3b8:c.instructions+=1;goto B4ea3b8;
case 0x4ea3bd:goto L4ea3bd;
case 0x4ea3bf:c.instructions+=1;goto B4ea3bf;
case 0x4ea3c1:goto L4ea3c1;
case 0x4ea3c8:c.instructions+=1;goto B4ea3c8;
case 0x4ea3ca:goto L4ea3ca;
case 0x4ea3cb:c.instructions+=3;goto B4ea3cb;
case 0x4ea3cc:c.instructions+=2;goto B4ea3cc;
case 0x4ea3cd:c.instructions+=1;goto B4ea3cd;
case 0x4ea3d2:goto L4ea3d2;
case 0x4ea3d5:c.instructions+=2;goto B4ea3d5;
case 0x4ea3d7:c.instructions+=1;goto B4ea3d7;
case 0x4ea3dc:goto L4ea3dc;
case 0x4ea3df:c.instructions+=2;goto B4ea3df;
case 0x4ea3e1:c.instructions+=1;goto B4ea3e1;
case 0x4ea3e3:goto L4ea3e3;
case 0x4ea3e4:c.instructions+=1;goto B4ea3e4;
case 0x4ea3e9:goto L4ea3e9;
case 0x4ea3ec:c.instructions+=1;goto B4ea3ec;
case 0x4ea3ef:goto L4ea3ef;
case 0x4ea3f2:c.instructions+=2;goto B4ea3f2;
case 0x4ea3f4:c.instructions+=1;goto B4ea3f4;
case 0x4ea3f6:goto L4ea3f6;
case 0x4ea3f7:c.instructions+=1;goto B4ea3f7;
case 0x4ea3fc:goto L4ea3fc;
case 0x4ea3ff:c.instructions+=1;goto B4ea3ff;
case 0x4ea402:goto L4ea402;
case 0x4ea408:c.instructions+=5;goto B4ea408;
case 0x4ea40b:c.instructions+=4;goto B4ea40b;
case 0x4ea40e:c.instructions+=3;goto B4ea40e;
case 0x4ea411:c.instructions+=2;goto B4ea411;
case 0x4ea413:c.instructions+=1;goto B4ea413;
case 0x4ea415:goto L4ea415;
case 0x4ea416:c.instructions+=2;goto B4ea416;
case 0x4ea417:c.instructions+=1;goto B4ea417;
case 0x4ea41c:goto L4ea41c;
case 0x4ea41f:c.instructions+=2;goto B4ea41f;
case 0x4ea421:c.instructions+=1;goto B4ea421;
case 0x4ea423:goto L4ea423;
case 0x4ea425:goto L4ea425;
case 0x4ea428:c.instructions+=3;goto B4ea428;
case 0x4ea42a:c.instructions+=2;goto B4ea42a;
case 0x4ea42f:c.instructions+=1;goto B4ea42f;
case 0x4ea431:goto L4ea431;
case 0x4ea432:c.instructions+=1;goto B4ea432;
case 0x4ea437:goto L4ea437;
case 0x4ea43a:c.instructions+=1;goto B4ea43a;
case 0x4ea43d:goto L4ea43d;
case 0x4ea440:c.instructions+=4;goto B4ea440;
case 0x4ea443:c.instructions+=3;goto B4ea443;
case 0x4ea445:c.instructions+=2;goto B4ea445;
case 0x4ea449:c.instructions+=1;goto B4ea449;
case 0x4ea44b:goto L4ea44b;
case 0x4ea450:goto L4ea450;
case 0x4ea452:c.instructions+=5;goto B4ea452;
case 0x4ea455:c.instructions+=4;goto B4ea455;
case 0x4ea457:c.instructions+=3;goto B4ea457;
case 0x4ea458:c.instructions+=2;goto B4ea458;
case 0x4ea45b:c.instructions+=1;goto B4ea45b;
case 0x4ea460:goto L4ea460;
case 0x4ea462:c.instructions+=3;goto B4ea462;
case 0x4ea465:c.instructions+=2;goto B4ea465;
case 0x4ea467:c.instructions+=1;goto B4ea467;
case 0x4ea469:goto L4ea469;
case 0x4ea46b:c.instructions+=2;goto B4ea46b;
case 0x4ea473:c.instructions+=1;goto B4ea473;
case 0x4ea478:goto L4ea478;
case 0x4ea47c:c.instructions+=6;goto B4ea47c;
case 0x4ea47d:c.instructions+=5;goto B4ea47d;
case 0x4ea47e:c.instructions+=4;goto B4ea47e;
case 0x4ea47f:c.instructions+=3;goto B4ea47f;
case 0x4ea486:c.instructions+=2;goto B4ea486;
case 0x4ea489:c.instructions+=1;goto B4ea489;
case 0x4ea490:goto L4ea490;
case 0x4ea491:c.instructions+=2;goto B4ea491;
case 0x4ea493:c.instructions+=1;goto B4ea493;
case 0x4ea498:goto L4ea498;
case 0x4ea49a:c.instructions+=1;goto B4ea49a;
case 0x4ea49f:goto L4ea49f;
case 0x4ea4a1:c.instructions+=1;goto B4ea4a1;
case 0x4ea4a6:goto L4ea4a6;
case 0x4ea4ab:c.instructions+=2;goto B4ea4ab;
case 0x4ea4ae:c.instructions+=1;goto B4ea4ae;
case 0x4ea4b0:goto L4ea4b0;
case 0x4ea4b7:c.instructions+=1;goto B4ea4b7;
case 0x4ea4bd:goto L4ea4bd;
case 0x4ea4bf:c.instructions+=3;goto B4ea4bf;
case 0x4ea4c1:c.instructions+=2;goto B4ea4c1;
case 0x4ea4c3:c.instructions+=1;goto B4ea4c3;
case 0x4ea4c8:goto L4ea4c8;
case 0x4ea4cd:c.instructions+=1;goto B4ea4cd;
case 0x4ea4d2:goto L4ea4d2;
case 0x4ea4d4:c.instructions+=1;goto B4ea4d4;
case 0x4ea4da:goto L4ea4da;
case 0x4ea4e1:c.instructions+=1;goto B4ea4e1;
case 0x4ea4e7:goto L4ea4e7;
case 0x4ea4ea:c.instructions+=3;goto B4ea4ea;
case 0x4ea4ef:c.instructions+=2;goto B4ea4ef;
case 0x4ea4f4:c.instructions+=1;goto B4ea4f4;
case 0x4ea4f9:goto L4ea4f9;
case 0x4ea4fa:c.instructions+=2;goto B4ea4fa;
case 0x4ea4fb:c.instructions+=1;goto B4ea4fb;
case 0x4ea500:goto L4ea500;
case 0x4ea503:c.instructions+=2;goto B4ea503;
case 0x4ea504:c.instructions+=1;goto B4ea504;
case 0x4ea509:goto L4ea509;
case 0x4ea50c:c.instructions+=2;goto B4ea50c;
case 0x4ea50d:c.instructions+=1;goto B4ea50d;
case 0x4ea50e:goto L4ea50e;
case 0x4ea513:c.instructions+=1;goto B4ea513;
case 0x4ea515:goto L4ea515;
case 0x4ea518:c.instructions+=1;goto B4ea518;
case 0x4ea51a:goto L4ea51a;
case 0x4ea521:c.instructions+=1;goto B4ea521;
case 0x4ea523:goto L4ea523;
case 0x4ea528:c.instructions+=1;goto B4ea528;
case 0x4ea52d:goto L4ea52d;
case 0x4ea52e:c.instructions+=3;goto B4ea52e;
case 0x4ea530:c.instructions+=2;goto B4ea530;
case 0x4ea532:c.instructions+=1;goto B4ea532;
case 0x4ea537:goto L4ea537;
case 0x4ea53a:c.instructions+=3;goto B4ea53a;
case 0x4ea53f:c.instructions+=2;goto B4ea53f;
case 0x4ea544:c.instructions+=1;goto B4ea544;
case 0x4ea549:goto L4ea549;
case 0x4ea54a:c.instructions+=2;goto B4ea54a;
case 0x4ea54b:c.instructions+=1;goto B4ea54b;
case 0x4ea550:goto L4ea550;
case 0x4ea553:c.instructions+=2;goto B4ea553;
case 0x4ea554:c.instructions+=1;goto B4ea554;
case 0x4ea559:goto L4ea559;
case 0x4ea55c:c.instructions+=2;goto B4ea55c;
case 0x4ea55d:c.instructions+=1;goto B4ea55d;
case 0x4ea55e:goto L4ea55e;
case 0x4ea563:c.instructions+=4;goto B4ea563;
case 0x4ea564:c.instructions+=3;goto B4ea564;
case 0x4ea566:c.instructions+=2;goto B4ea566;
case 0x4ea568:c.instructions+=1;goto B4ea568;
case 0x4ea56d:goto L4ea56d;
case 0x4ea56e:c.instructions+=1;goto B4ea56e;
case 0x4ea570:goto L4ea570;
case 0x4ea571:c.instructions+=3;goto B4ea571;
case 0x4ea572:c.instructions+=2;goto B4ea572;
case 0x4ea574:c.instructions+=1;goto B4ea574;
case 0x4ea579:goto L4ea579;
case 0x4ea57b:c.instructions+=1;goto B4ea57b;
case 0x4ea580:goto L4ea580;
case 0x4ea585:c.instructions+=3;goto B4ea585;
case 0x4ea58a:c.instructions+=2;goto B4ea58a;
case 0x4ea58f:c.instructions+=1;goto B4ea58f;
case 0x4ea591:goto L4ea591;
case 0x4ea593:c.instructions+=1;goto B4ea593;
case 0x4ea595:goto L4ea595;
case 0x4ea59b:c.instructions+=1;goto B4ea59b;
case 0x4ea59d:goto L4ea59d;
case 0x4ea5a0:c.instructions+=1;goto B4ea5a0;
case 0x4ea5a2:goto L4ea5a2;
case 0x4ea5a8:c.instructions+=1;goto B4ea5a8;
case 0x4ea5aa:goto L4ea5aa;
case 0x4ea5af:c.instructions+=1;goto B4ea5af;
case 0x4ea5b4:goto L4ea5b4;
case 0x4ea5b6:c.instructions+=1;goto B4ea5b6;
case 0x4ea5b8:goto L4ea5b8;
case 0x4ea5bb:c.instructions+=5;goto B4ea5bb;
case 0x4ea5bd:c.instructions+=4;goto B4ea5bd;
case 0x4ea5c2:c.instructions+=3;goto B4ea5c2;
case 0x4ea5c7:c.instructions+=2;goto B4ea5c7;
case 0x4ea5c8:c.instructions+=1;goto B4ea5c8;
case 0x4ea5cd:goto L4ea5cd;
case 0x4ea5d0:goto L4ea5d0;
case 0x4ea5d3:c.instructions+=5;goto B4ea5d3;
case 0x4ea5d9:c.instructions+=4;goto B4ea5d9;
case 0x4ea5dc:c.instructions+=3;goto B4ea5dc;
case 0x4ea5e1:c.instructions+=2;goto B4ea5e1;
case 0x4ea5e4:c.instructions+=1;goto B4ea5e4;
case 0x4ea5e6:goto L4ea5e6;
case 0x4ea5ec:c.instructions+=1;goto B4ea5ec;
case 0x4ea5ee:goto L4ea5ee;
case 0x4ea5f0:c.instructions+=1;goto B4ea5f0;
case 0x4ea5f2:goto L4ea5f2;
case 0x4ea5f7:c.instructions+=1;goto B4ea5f7;
case 0x4ea5f9:goto L4ea5f9;
case 0x4ea5fb:c.instructions+=1;goto B4ea5fb;
case 0x4ea5fd:goto L4ea5fd;
case 0x4ea603:c.instructions+=1;goto B4ea603;
case 0x4ea605:goto L4ea605;
case 0x4ea60a:c.instructions+=1;goto B4ea60a;
case 0x4ea60f:goto L4ea60f;
case 0x4ea610:c.instructions+=1;goto B4ea610;
case 0x4ea612:goto L4ea612;
case 0x4ea617:c.instructions+=2;goto B4ea617;
case 0x4ea61a:c.instructions+=1;goto B4ea61a;
case 0x4ea61b:goto L4ea61b;
case 0x4ea61d:c.instructions+=2;goto B4ea61d;
case 0x4ea61f:c.instructions+=1;goto B4ea61f;
case 0x4ea624:goto L4ea624;
case 0x4ea629:c.instructions+=2;goto B4ea629;
case 0x4ea62e:c.instructions+=1;goto B4ea62e;
case 0x4ea630:goto L4ea630;
case 0x4ea632:c.instructions+=1;goto B4ea632;
case 0x4ea634:goto L4ea634;
case 0x4ea63a:c.instructions+=1;goto B4ea63a;
case 0x4ea63c:goto L4ea63c;
case 0x4ea641:c.instructions+=1;goto B4ea641;
case 0x4ea646:goto L4ea646;
case 0x4ea648:c.instructions+=2;goto B4ea648;
case 0x4ea64b:c.instructions+=1;goto B4ea64b;
case 0x4ea64d:goto L4ea64d;
case 0x4ea652:c.instructions+=1;goto B4ea652;
case 0x4ea654:goto L4ea654;
case 0x4ea659:c.instructions+=1;goto B4ea659;
case 0x4ea65e:goto L4ea65e;
case 0x4ea660:c.instructions+=1;goto B4ea660;
case 0x4ea662:goto L4ea662;
case 0x4ea665:c.instructions+=2;goto B4ea665;
case 0x4ea66a:c.instructions+=1;goto B4ea66a;
case 0x4ea66c:goto L4ea66c;
case 0x4ea671:c.instructions+=1;goto B4ea671;
case 0x4ea676:goto L4ea676;
case 0x4ea678:c.instructions+=1;goto B4ea678;
case 0x4ea67a:goto L4ea67a;
case 0x4ea67d:goto L4ea67d;
case 0x4ea682:goto L4ea682;
case 0x4ea687:goto L4ea687;
case 0x4ea688:c.instructions+=3;goto B4ea688;
case 0x4ea68d:c.instructions+=2;goto B4ea68d;
case 0x4ea68e:c.instructions+=1;goto B4ea68e;
case 0x4ea693:goto L4ea693;
case 0x4ea696:goto L4ea696;
case 0x4ea697:c.instructions+=2;goto B4ea697;
case 0x4ea698:c.instructions+=1;goto B4ea698;
case 0x4ea6a0:goto L4ea6a0;
case 0x4ea6a4:c.instructions+=4;goto B4ea6a4;
case 0x4ea6a9:c.instructions+=3;goto B4ea6a9;
case 0x4ea6aa:c.instructions+=2;goto B4ea6aa;
case 0x4ea6ac:c.instructions+=1;goto B4ea6ac;
case 0x4ea6b2:goto L4ea6b2;
case 0x4ea6b4:goto L4ea6b4;
case 0x4ea6b9:c.instructions+=1;goto B4ea6b9;
case 0x4ea6bf:goto L4ea6bf;
case 0x4ea6c4:c.instructions+=1;goto B4ea6c4;
case 0x4ea6ca:goto L4ea6ca;
case 0x4ea6d0:c.instructions+=1;goto B4ea6d0;
case 0x4ea6d5:goto L4ea6d5;
case 0x4ea6d6:c.instructions+=1;goto B4ea6d6;
case 0x4ea6d9:goto L4ea6d9;
case 0x4ea6de:c.instructions+=1;goto B4ea6de;
case 0x4ea6e3:goto L4ea6e3;
case 0x4ea6e5:c.instructions+=1;goto B4ea6e5;
case 0x4ea6e7:goto L4ea6e7;
case 0x4ea6ea:c.instructions+=2;goto B4ea6ea;
case 0x4ea6ec:c.instructions+=1;goto B4ea6ec;
case 0x4ea6ee:goto L4ea6ee;
case 0x4ea6f4:c.instructions+=2;goto B4ea6f4;
case 0x4ea6f7:c.instructions+=1;goto B4ea6f7;
case 0x4ea6fc:goto L4ea6fc;
case 0x4ea6fd:c.instructions+=1;goto B4ea6fd;
case 0x4ea700:goto L4ea700;
case 0x4ea705:c.instructions+=4;goto B4ea705;
case 0x4ea70b:c.instructions+=3;goto B4ea70b;
case 0x4ea70c:c.instructions+=2;goto B4ea70c;
case 0x4ea70f:c.instructions+=1;goto B4ea70f;
case 0x4ea714:goto L4ea714;
case 0x4ea719:c.instructions+=2;goto B4ea719;
case 0x4ea71e:c.instructions+=1;goto B4ea71e;
case 0x4ea720:goto L4ea720;
case 0x4ea723:c.instructions+=1;goto B4ea723;
case 0x4ea725:goto L4ea725;
case 0x4ea72c:c.instructions+=1;goto B4ea72c;
case 0x4ea72e:goto L4ea72e;
case 0x4ea733:c.instructions+=1;goto B4ea733;
case 0x4ea738:goto L4ea738;
case 0x4ea73a:c.instructions+=1;goto B4ea73a;
case 0x4ea73c:goto L4ea73c;
case 0x4ea741:c.instructions+=2;goto B4ea741;
case 0x4ea747:c.instructions+=1;goto B4ea747;
case 0x4ea749:goto L4ea749;
case 0x4ea74f:c.instructions+=1;goto B4ea74f;
case 0x4ea754:goto L4ea754;
case 0x4ea755:c.instructions+=1;goto B4ea755;
case 0x4ea758:goto L4ea758;
case 0x4ea75d:c.instructions+=1;goto B4ea75d;
case 0x4ea75f:goto L4ea75f;
case 0x4ea761:c.instructions+=2;goto B4ea761;
case 0x4ea766:c.instructions+=1;goto B4ea766;
case 0x4ea76b:goto L4ea76b;
case 0x4ea76c:c.instructions+=1;goto B4ea76c;
case 0x4ea771:goto L4ea771;
case 0x4ea777:c.instructions+=4;goto B4ea777;
case 0x4ea77a:c.instructions+=3;goto B4ea77a;
case 0x4ea77c:c.instructions+=2;goto B4ea77c;
case 0x4ea77e:c.instructions+=1;goto B4ea77e;
case 0x4ea783:goto L4ea783;
case 0x4ea784:c.instructions+=1;goto B4ea784;
case 0x4ea790:goto L4ea790;
case 0x4ea792:c.instructions+=14;goto B4ea792;
case 0x4ea797:c.instructions+=13;goto B4ea797;
case 0x4ea79d:c.instructions+=12;goto B4ea79d;
case 0x4ea79e:c.instructions+=11;goto B4ea79e;
case 0x4ea7a5:c.instructions+=10;goto B4ea7a5;
case 0x4ea7a6:c.instructions+=9;goto B4ea7a6;
case 0x4ea7a7:c.instructions+=8;goto B4ea7a7;
case 0x4ea7a8:c.instructions+=7;goto B4ea7a8;
case 0x4ea7ac:c.instructions+=6;goto B4ea7ac;
case 0x4ea7ad:c.instructions+=5;goto B4ea7ad;
case 0x4ea7ae:c.instructions+=4;goto B4ea7ae;
case 0x4ea7b0:c.instructions+=3;goto B4ea7b0;
case 0x4ea7b1:c.instructions+=2;goto B4ea7b1;
case 0x4ea7b5:c.instructions+=1;goto B4ea7b5;
case 0x4ea7ba:goto L4ea7ba;
case 0x4ea7bc:c.instructions+=7;goto B4ea7bc;
case 0x4ea7c2:c.instructions+=6;goto B4ea7c2;
case 0x4ea7c4:c.instructions+=5;goto B4ea7c4;
case 0x4ea7c8:c.instructions+=4;goto B4ea7c8;
case 0x4ea7ce:c.instructions+=3;goto B4ea7ce;
case 0x4ea7d4:c.instructions+=2;goto B4ea7d4;
case 0x4ea7da:c.instructions+=1;goto B4ea7da;
case 0x4ea7df:goto L4ea7df;
case 0x4ea7e2:c.instructions+=9;goto B4ea7e2;
case 0x4ea7e4:c.instructions+=8;goto B4ea7e4;
case 0x4ea7e6:c.instructions+=7;goto B4ea7e6;
case 0x4ea7e8:c.instructions+=6;goto B4ea7e8;
case 0x4ea7ed:c.instructions+=5;goto B4ea7ed;
case 0x4ea7f3:c.instructions+=4;goto B4ea7f3;
case 0x4ea7f4:c.instructions+=3;goto B4ea7f4;
case 0x4ea7f6:c.instructions+=2;goto B4ea7f6;
case 0x4ea7fb:c.instructions+=1;goto B4ea7fb;
case 0x4ea800:goto L4ea800;
case 0x4ea80a:c.instructions+=5;goto B4ea80a;
case 0x4ea80d:c.instructions+=4;goto B4ea80d;
case 0x4ea810:c.instructions+=3;goto B4ea810;
case 0x4ea815:c.instructions+=2;goto B4ea815;
case 0x4ea81b:c.instructions+=1;goto B4ea81b;
case 0x4ea820:goto L4ea820;
case 0x4ea821:c.instructions+=2;goto B4ea821;
case 0x4ea822:c.instructions+=1;goto B4ea822;
case 0x4ea827:goto L4ea827;
case 0x4ea82a:c.instructions+=4;goto B4ea82a;
case 0x4ea82f:c.instructions+=3;goto B4ea82f;
case 0x4ea831:c.instructions+=2;goto B4ea831;
case 0x4ea833:c.instructions+=1;goto B4ea833;
case 0x4ea838:goto L4ea838;
case 0x4ea83b:c.instructions+=2;goto B4ea83b;
case 0x4ea83c:c.instructions+=1;goto B4ea83c;
case 0x4ea841:goto L4ea841;
case 0x4ea844:c.instructions+=8;goto B4ea844;
case 0x4ea845:c.instructions+=7;goto B4ea845;
case 0x4ea848:c.instructions+=6;goto B4ea848;
case 0x4ea84d:c.instructions+=5;goto B4ea84d;
case 0x4ea84f:c.instructions+=4;goto B4ea84f;
case 0x4ea850:c.instructions+=3;goto B4ea850;
case 0x4ea851:c.instructions+=2;goto B4ea851;
case 0x4ea853:c.instructions+=1;goto B4ea853;
case 0x4ea858:goto L4ea858;
case 0x4ea85a:c.instructions+=2;goto B4ea85a;
case 0x4ea860:c.instructions+=1;goto B4ea860;
case 0x4ea865:goto L4ea865;
case 0x4ea869:c.instructions+=8;goto B4ea869;
case 0x4ea86a:c.instructions+=7;goto B4ea86a;
case 0x4ea86c:c.instructions+=6;goto B4ea86c;
case 0x4ea86d:c.instructions+=5;goto B4ea86d;
case 0x4ea86e:c.instructions+=4;goto B4ea86e;
case 0x4ea86f:c.instructions+=3;goto B4ea86f;
case 0x4ea876:c.instructions+=2;goto B4ea876;
case 0x4ea879:c.instructions+=1;goto B4ea879;
case 0x4ea880:goto L4ea880;
case 0x4ea881:c.instructions+=2;goto B4ea881;
case 0x4ea883:c.instructions+=1;goto B4ea883;
case 0x4ea888:goto L4ea888;
case 0x4ea88d:c.instructions+=1;goto B4ea88d;
case 0x4ea88f:goto L4ea88f;
case 0x4ea890:c.instructions+=1;goto B4ea890;
case 0x4ea895:goto L4ea895;
case 0x4ea898:goto L4ea898;
case 0x4ea89a:c.instructions+=2;goto B4ea89a;
case 0x4ea89b:c.instructions+=1;goto B4ea89b;
case 0x4ea8a0:goto L4ea8a0;
case 0x4ea8a2:c.instructions+=12;goto B4ea8a2;
case 0x4ea8a7:c.instructions+=11;goto B4ea8a7;
case 0x4ea8ad:c.instructions+=10;goto B4ea8ad;
case 0x4ea8ae:c.instructions+=9;goto B4ea8ae;
case 0x4ea8b5:c.instructions+=8;goto B4ea8b5;
case 0x4ea8b6:c.instructions+=7;goto B4ea8b6;
case 0x4ea8b7:c.instructions+=6;goto B4ea8b7;
case 0x4ea8b9:c.instructions+=5;goto B4ea8b9;
case 0x4ea8bd:c.instructions+=4;goto B4ea8bd;
case 0x4ea8c3:c.instructions+=3;goto B4ea8c3;
case 0x4ea8c9:c.instructions+=2;goto B4ea8c9;
case 0x4ea8d1:c.instructions+=1;goto B4ea8d1;
case 0x4ea8d6:goto L4ea8d6;
case 0x4ea8d8:c.instructions+=2;goto B4ea8d8;
case 0x4ea8e0:c.instructions+=1;goto B4ea8e0;
case 0x4ea8e5:goto L4ea8e5;
case 0x4ea8e9:c.instructions+=4;goto B4ea8e9;
case 0x4ea8ea:c.instructions+=3;goto B4ea8ea;
case 0x4ea8f1:c.instructions+=2;goto B4ea8f1;
case 0x4ea8f4:c.instructions+=1;goto B4ea8f4;
case 0x4ea900:goto L4ea900;
case 0x4ea901:c.instructions+=15;goto B4ea901;
case 0x4ea903:c.instructions+=14;goto B4ea903;
case 0x4ea905:c.instructions+=13;goto B4ea905;
case 0x4ea90a:c.instructions+=12;goto B4ea90a;
case 0x4ea910:c.instructions+=11;goto B4ea910;
case 0x4ea911:c.instructions+=10;goto B4ea911;
case 0x4ea918:c.instructions+=9;goto B4ea918;
case 0x4ea91b:c.instructions+=8;goto B4ea91b;
case 0x4ea91e:c.instructions+=7;goto B4ea91e;
case 0x4ea91f:c.instructions+=6;goto B4ea91f;
case 0x4ea920:c.instructions+=5;goto B4ea920;
case 0x4ea921:c.instructions+=4;goto B4ea921;
case 0x4ea923:c.instructions+=3;goto B4ea923;
case 0x4ea924:c.instructions+=2;goto B4ea924;
case 0x4ea927:c.instructions+=1;goto B4ea927;
case 0x4ea92c:goto L4ea92c;
case 0x4ea92e:c.instructions+=4;goto B4ea92e;
case 0x4ea931:c.instructions+=3;goto B4ea931;
case 0x4ea934:c.instructions+=2;goto B4ea934;
case 0x4ea93a:c.instructions+=1;goto B4ea93a;
case 0x4ea93f:goto L4ea93f;
case 0x4ea942:c.instructions+=35;goto B4ea942;
case 0x4ea945:c.instructions+=34;goto B4ea945;
case 0x4ea94b:c.instructions+=33;goto B4ea94b;
case 0x4ea951:c.instructions+=32;goto B4ea951;
case 0x4ea957:c.instructions+=31;goto B4ea957;
case 0x4ea95c:c.instructions+=30;goto B4ea95c;
case 0x4ea962:c.instructions+=29;goto B4ea962;
case 0x4ea968:c.instructions+=28;goto B4ea968;
case 0x4ea96e:c.instructions+=27;goto B4ea96e;
case 0x4ea974:c.instructions+=26;goto B4ea974;
case 0x4ea97a:c.instructions+=25;goto B4ea97a;
case 0x4ea980:c.instructions+=24;goto B4ea980;
case 0x4ea986:c.instructions+=23;goto B4ea986;
case 0x4ea98c:c.instructions+=22;goto B4ea98c;
case 0x4ea992:c.instructions+=21;goto B4ea992;
case 0x4ea998:c.instructions+=20;goto B4ea998;
case 0x4ea99e:c.instructions+=19;goto B4ea99e;
case 0x4ea9a4:c.instructions+=18;goto B4ea9a4;
case 0x4ea9aa:c.instructions+=17;goto B4ea9aa;
case 0x4ea9b0:c.instructions+=16;goto B4ea9b0;
case 0x4ea9b6:c.instructions+=15;goto B4ea9b6;
case 0x4ea9bc:c.instructions+=14;goto B4ea9bc;
case 0x4ea9c2:c.instructions+=13;goto B4ea9c2;
case 0x4ea9c8:c.instructions+=12;goto B4ea9c8;
case 0x4ea9ce:c.instructions+=11;goto B4ea9ce;
case 0x4ea9d4:c.instructions+=10;goto B4ea9d4;
case 0x4ea9da:c.instructions+=9;goto B4ea9da;
case 0x4ea9e0:c.instructions+=8;goto B4ea9e0;
case 0x4ea9e6:c.instructions+=7;goto B4ea9e6;
case 0x4ea9e9:c.instructions+=6;goto B4ea9e9;
case 0x4ea9ef:c.instructions+=5;goto B4ea9ef;
case 0x4ea9f0:c.instructions+=4;goto B4ea9f0;
case 0x4ea9f4:c.instructions+=3;goto B4ea9f4;
case 0x4ea9fa:c.instructions+=2;goto B4ea9fa;
case 0x4eaa00:c.instructions+=1;goto B4eaa00;
case 0x4eaa05:goto L4eaa05;
case 0x4eaa08:c.instructions+=6;goto B4eaa08;
case 0x4eaa0a:c.instructions+=5;goto B4eaa0a;
case 0x4eaa0e:c.instructions+=4;goto B4eaa0e;
case 0x4eaa18:c.instructions+=3;goto B4eaa18;
case 0x4eaa22:c.instructions+=2;goto B4eaa22;
case 0x4eaa2c:c.instructions+=1;goto B4eaa2c;
case 0x4eaa32:goto L4eaa32;
case 0x4eaa35:c.instructions+=3;goto B4eaa35;
case 0x4eaa3a:c.instructions+=2;goto B4eaa3a;
case 0x4eaa3d:c.instructions+=1;goto B4eaa3d;
case 0x4eaa42:goto L4eaa42;
case 0x4eaa45:c.instructions+=3;goto B4eaa45;
case 0x4eaa46:c.instructions+=2;goto B4eaa46;
case 0x4eaa47:c.instructions+=1;goto B4eaa47;
case 0x4eaa4c:goto L4eaa4c;
case 0x4eaa52:c.instructions+=4;goto B4eaa52;
case 0x4eaa55:c.instructions+=3;goto B4eaa55;
case 0x4eaa5a:c.instructions+=2;goto B4eaa5a;
case 0x4eaa5d:c.instructions+=1;goto B4eaa5d;
case 0x4eaa62:goto L4eaa62;
case 0x4eaa65:c.instructions+=3;goto B4eaa65;
case 0x4eaa66:c.instructions+=2;goto B4eaa66;
case 0x4eaa67:c.instructions+=1;goto B4eaa67;
case 0x4eaa6c:goto L4eaa6c;
case 0x4eaa6f:c.instructions+=4;goto B4eaa6f;
case 0x4eaa74:c.instructions+=3;goto B4eaa74;
case 0x4eaa7a:c.instructions+=2;goto B4eaa7a;
case 0x4eaa7d:c.instructions+=1;goto B4eaa7d;
case 0x4eaa82:goto L4eaa82;
case 0x4eaa83:c.instructions+=3;goto B4eaa83;
case 0x4eaa86:c.instructions+=2;goto B4eaa86;
case 0x4eaa87:c.instructions+=1;goto B4eaa87;
case 0x4eaa8c:goto L4eaa8c;
case 0x4eaa8f:c.instructions+=3;goto B4eaa8f;
case 0x4eaa94:c.instructions+=2;goto B4eaa94;
case 0x4eaa9a:c.instructions+=1;goto B4eaa9a;
case 0x4eaa9f:goto L4eaa9f;
case 0x4eaaa5:c.instructions+=4;goto B4eaaa5;
case 0x4eaaa6:c.instructions+=3;goto B4eaaa6;
case 0x4eaaab:c.instructions+=2;goto B4eaaab;
case 0x4eaaac:c.instructions+=1;goto B4eaaac;
case 0x4eaab1:goto L4eaab1;
case 0x4eaab7:c.instructions+=4;goto B4eaab7;
case 0x4eaaba:c.instructions+=3;goto B4eaaba;
case 0x4eaabb:c.instructions+=2;goto B4eaabb;
case 0x4eaabc:c.instructions+=1;goto B4eaabc;
case 0x4eaac1:goto L4eaac1;
case 0x4eaac4:c.instructions+=5;goto B4eaac4;
case 0x4eaac5:c.instructions+=4;goto B4eaac5;
case 0x4eaacb:c.instructions+=3;goto B4eaacb;
case 0x4eaad0:c.instructions+=2;goto B4eaad0;
case 0x4eaad1:c.instructions+=1;goto B4eaad1;
case 0x4eaad6:goto L4eaad6;
case 0x4eaad9:c.instructions+=4;goto B4eaad9;
case 0x4eaade:c.instructions+=3;goto B4eaade;
case 0x4eaadf:c.instructions+=2;goto B4eaadf;
case 0x4eaae2:c.instructions+=1;goto B4eaae2;
case 0x4eaae7:goto L4eaae7;
case 0x4eaaea:c.instructions+=5;goto B4eaaea;
case 0x4eaaed:c.instructions+=4;goto B4eaaed;
case 0x4eaaee:c.instructions+=3;goto B4eaaee;
case 0x4eaaf3:c.instructions+=2;goto B4eaaf3;
case 0x4eaaf4:c.instructions+=1;goto B4eaaf4;
case 0x4eaaf9:goto L4eaaf9;
case 0x4eaafc:c.instructions+=3;goto B4eaafc;
case 0x4eaafd:c.instructions+=2;goto B4eaafd;
case 0x4eaaff:c.instructions+=1;goto B4eaaff;
case 0x4eab04:goto L4eab04;
case 0x4eab07:c.instructions+=3;goto B4eab07;
case 0x4eab0c:c.instructions+=2;goto B4eab0c;
case 0x4eab0d:c.instructions+=1;goto B4eab0d;
case 0x4eab12:goto L4eab12;
case 0x4eab15:c.instructions+=4;goto B4eab15;
case 0x4eab16:c.instructions+=3;goto B4eab16;
case 0x4eab1b:c.instructions+=2;goto B4eab1b;
case 0x4eab1c:c.instructions+=1;goto B4eab1c;
case 0x4eab21:goto L4eab21;
case 0x4eab24:c.instructions+=3;goto B4eab24;
case 0x4eab25:c.instructions+=2;goto B4eab25;
case 0x4eab2b:c.instructions+=1;goto B4eab2b;
case 0x4eab30:goto L4eab30;
case 0x4eab33:c.instructions+=3;goto B4eab33;
case 0x4eab38:c.instructions+=2;goto B4eab38;
case 0x4eab39:c.instructions+=1;goto B4eab39;
case 0x4eab3e:goto L4eab3e;
case 0x4eab41:c.instructions+=3;goto B4eab41;
case 0x4eab42:c.instructions+=2;goto B4eab42;
case 0x4eab47:c.instructions+=1;goto B4eab47;
case 0x4eab4c:goto L4eab4c;
case 0x4eab4f:c.instructions+=1;goto B4eab4f;
case 0x4eab55:goto L4eab55;
case 0x4eab58:c.instructions+=3;goto B4eab58;
case 0x4eab5d:c.instructions+=2;goto B4eab5d;
case 0x4eab60:c.instructions+=1;goto B4eab60;
case 0x4eab65:goto L4eab65;
case 0x4eab66:c.instructions+=3;goto B4eab66;
case 0x4eab69:c.instructions+=2;goto B4eab69;
case 0x4eab6a:c.instructions+=1;goto B4eab6a;
case 0x4eab6f:goto L4eab6f;
case 0x4eab72:c.instructions+=4;goto B4eab72;
case 0x4eab77:c.instructions+=3;goto B4eab77;
case 0x4eab7d:c.instructions+=2;goto B4eab7d;
case 0x4eab80:c.instructions+=1;goto B4eab80;
case 0x4eab85:goto L4eab85;
case 0x4eab88:c.instructions+=3;goto B4eab88;
case 0x4eab89:c.instructions+=2;goto B4eab89;
case 0x4eab8a:c.instructions+=1;goto B4eab8a;
case 0x4eab8f:goto L4eab8f;
case 0x4eab95:c.instructions+=4;goto B4eab95;
case 0x4eab98:c.instructions+=3;goto B4eab98;
case 0x4eab9d:c.instructions+=2;goto B4eab9d;
case 0x4eaba0:c.instructions+=1;goto B4eaba0;
case 0x4eaba5:goto L4eaba5;
case 0x4eaba8:c.instructions+=3;goto B4eaba8;
case 0x4eaba9:c.instructions+=2;goto B4eaba9;
case 0x4eabaa:c.instructions+=1;goto B4eabaa;
case 0x4eabaf:goto L4eabaf;
case 0x4eabb2:c.instructions+=3;goto B4eabb2;
case 0x4eabb7:c.instructions+=2;goto B4eabb7;
case 0x4eabbd:c.instructions+=1;goto B4eabbd;
case 0x4eabc2:goto L4eabc2;
case 0x4eabc8:c.instructions+=4;goto B4eabc8;
case 0x4eabc9:c.instructions+=3;goto B4eabc9;
case 0x4eabce:c.instructions+=2;goto B4eabce;
case 0x4eabcf:c.instructions+=1;goto B4eabcf;
case 0x4eabd4:goto L4eabd4;
case 0x4eabd9:c.instructions+=4;goto B4eabd9;
case 0x4eabdc:c.instructions+=3;goto B4eabdc;
case 0x4eabdd:c.instructions+=2;goto B4eabdd;
case 0x4eabde:c.instructions+=1;goto B4eabde;
case 0x4eabe3:goto L4eabe3;
case 0x4eabe9:c.instructions+=5;goto B4eabe9;
case 0x4eabec:c.instructions+=4;goto B4eabec;
case 0x4eabed:c.instructions+=3;goto B4eabed;
case 0x4eabf2:c.instructions+=2;goto B4eabf2;
case 0x4eabf3:c.instructions+=1;goto B4eabf3;
case 0x4eabf8:goto L4eabf8;
case 0x4eabfb:c.instructions+=4;goto B4eabfb;
case 0x4eac00:c.instructions+=3;goto B4eac00;
case 0x4eac01:c.instructions+=2;goto B4eac01;
case 0x4eac04:c.instructions+=1;goto B4eac04;
case 0x4eac09:goto L4eac09;
case 0x4eac0c:c.instructions+=5;goto B4eac0c;
case 0x4eac0f:c.instructions+=4;goto B4eac0f;
case 0x4eac10:c.instructions+=3;goto B4eac10;
case 0x4eac15:c.instructions+=2;goto B4eac15;
case 0x4eac16:c.instructions+=1;goto B4eac16;
case 0x4eac1b:goto L4eac1b;
case 0x4eac1e:c.instructions+=3;goto B4eac1e;
case 0x4eac1f:c.instructions+=2;goto B4eac1f;
case 0x4eac21:c.instructions+=1;goto B4eac21;
case 0x4eac26:goto L4eac26;
case 0x4eac29:c.instructions+=3;goto B4eac29;
case 0x4eac2e:c.instructions+=2;goto B4eac2e;
case 0x4eac2f:c.instructions+=1;goto B4eac2f;
case 0x4eac34:goto L4eac34;
case 0x4eac37:c.instructions+=4;goto B4eac37;
case 0x4eac38:c.instructions+=3;goto B4eac38;
case 0x4eac3d:c.instructions+=2;goto B4eac3d;
case 0x4eac3e:c.instructions+=1;goto B4eac3e;
case 0x4eac43:goto L4eac43;
case 0x4eac46:c.instructions+=3;goto B4eac46;
case 0x4eac47:c.instructions+=2;goto B4eac47;
case 0x4eac4d:c.instructions+=1;goto B4eac4d;
case 0x4eac52:goto L4eac52;
case 0x4eac55:c.instructions+=3;goto B4eac55;
case 0x4eac5a:c.instructions+=2;goto B4eac5a;
case 0x4eac5b:c.instructions+=1;goto B4eac5b;
case 0x4eac60:goto L4eac60;
case 0x4eac63:c.instructions+=2;goto B4eac63;
case 0x4eac64:c.instructions+=1;goto B4eac64;
case 0x4eac69:goto L4eac69;
case 0x4eac6a:c.instructions+=1;goto B4eac6a;
case 0x4eac6f:goto L4eac6f;
case 0x4eac72:c.instructions+=3;goto B4eac72;
case 0x4eac78:c.instructions+=2;goto B4eac78;
case 0x4eac79:c.instructions+=1;goto B4eac79;
case 0x4eac7e:goto L4eac7e;
case 0x4eac83:c.instructions+=1;goto B4eac83;
case 0x4eac88:goto L4eac88;
case 0x4eac8b:c.instructions+=4;goto B4eac8b;
case 0x4eac8e:c.instructions+=3;goto B4eac8e;
case 0x4eac90:c.instructions+=2;goto B4eac90;
case 0x4eac94:c.instructions+=1;goto B4eac94;
case 0x4eac96:goto L4eac96;
case 0x4eac9c:c.instructions+=3;goto B4eac9c;
case 0x4eac9d:c.instructions+=2;goto B4eac9d;
case 0x4eac9f:c.instructions+=1;goto B4eac9f;
case 0x4eaca4:goto L4eaca4;
case 0x4eaca6:goto L4eaca6;
case 0x4eaca8:goto L4eaca8;
case 0x4eacae:c.instructions+=7;goto B4eacae;
case 0x4eacb4:c.instructions+=6;goto B4eacb4;
case 0x4eacb7:c.instructions+=5;goto B4eacb7;
case 0x4eacb8:c.instructions+=4;goto B4eacb8;
case 0x4eacb9:c.instructions+=3;goto B4eacb9;
case 0x4eacbb:c.instructions+=2;goto B4eacbb;
case 0x4eacbf:c.instructions+=1;goto B4eacbf;
case 0x4eacc4:goto L4eacc4;
case 0x4eacc9:c.instructions+=15;goto B4eacc9;
case 0x4eaccf:c.instructions+=14;goto B4eaccf;
case 0x4eacd5:c.instructions+=13;goto B4eacd5;
case 0x4eacdf:c.instructions+=12;goto B4eacdf;
case 0x4eace4:c.instructions+=11;goto B4eace4;
case 0x4eace7:c.instructions+=10;goto B4eace7;
case 0x4eaced:c.instructions+=9;goto B4eaced;
case 0x4eacf3:c.instructions+=8;goto B4eacf3;
case 0x4eacf9:c.instructions+=7;goto B4eacf9;
case 0x4eacff:c.instructions+=6;goto B4eacff;
case 0x4ead05:c.instructions+=5;goto B4ead05;
case 0x4ead0b:c.instructions+=4;goto B4ead0b;
case 0x4ead11:c.instructions+=3;goto B4ead11;
case 0x4ead1b:c.instructions+=2;goto B4ead1b;
case 0x4ead21:c.instructions+=1;goto B4ead21;
case 0x4ead26:goto L4ead26;
case 0x4ead29:c.instructions+=5;goto B4ead29;
case 0x4ead2b:c.instructions+=4;goto B4ead2b;
case 0x4ead2e:c.instructions+=3;goto B4ead2e;
case 0x4ead31:c.instructions+=2;goto B4ead31;
case 0x4ead32:c.instructions+=1;goto B4ead32;
case 0x4ead34:goto L4ead34;
case 0x4ead39:c.instructions+=1;goto B4ead39;
case 0x4ead3e:goto L4ead3e;
case 0x4ead41:c.instructions+=4;goto B4ead41;
case 0x4ead44:c.instructions+=3;goto B4ead44;
case 0x4ead46:c.instructions+=2;goto B4ead46;
case 0x4ead4a:c.instructions+=1;goto B4ead4a;
case 0x4ead4c:goto L4ead4c;
case 0x4ead52:c.instructions+=4;goto B4ead52;
case 0x4ead53:c.instructions+=3;goto B4ead53;
case 0x4ead54:c.instructions+=2;goto B4ead54;
case 0x4ead56:c.instructions+=1;goto B4ead56;
case 0x4ead5b:goto L4ead5b;
case 0x4ead5d:goto L4ead5d;
case 0x4ead5f:goto L4ead5f;
case 0x4ead62:c.instructions+=4;goto B4ead62;
case 0x4ead67:c.instructions+=3;goto B4ead67;
case 0x4ead6b:c.instructions+=2;goto B4ead6b;
case 0x4ead71:c.instructions+=1;goto B4ead71;
case 0x4ead76:goto L4ead76;
case 0x4ead79:c.instructions+=4;goto B4ead79;
case 0x4ead7c:c.instructions+=3;goto B4ead7c;
case 0x4ead7e:c.instructions+=2;goto B4ead7e;
case 0x4ead82:c.instructions+=1;goto B4ead82;
case 0x4ead84:goto L4ead84;
case 0x4ead8a:c.instructions+=4;goto B4ead8a;
case 0x4ead8b:c.instructions+=3;goto B4ead8b;
case 0x4ead8c:c.instructions+=2;goto B4ead8c;
case 0x4ead8e:c.instructions+=1;goto B4ead8e;
case 0x4ead93:goto L4ead93;
case 0x4ead95:goto L4ead95;
case 0x4ead97:goto L4ead97;
case 0x4ead9a:c.instructions+=4;goto B4ead9a;
case 0x4ead9f:c.instructions+=3;goto B4ead9f;
case 0x4eada3:c.instructions+=2;goto B4eada3;
case 0x4eada9:c.instructions+=1;goto B4eada9;
case 0x4eadae:goto L4eadae;
case 0x4eadb0:c.instructions+=1;goto B4eadb0;
case 0x4eadb2:goto L4eadb2;
case 0x4eadb8:c.instructions+=2;goto B4eadb8;
case 0x4eadbe:c.instructions+=1;goto B4eadbe;
case 0x4eadc0:goto L4eadc0;
case 0x4eadc5:goto L4eadc5;
case 0x4eadcb:c.instructions+=1;goto B4eadcb;
case 0x4eadd0:goto L4eadd0;
case 0x4eadd6:c.instructions+=2;goto B4eadd6;
case 0x4eaddc:c.instructions+=1;goto B4eaddc;
case 0x4eadde:goto L4eadde;
case 0x4eade4:c.instructions+=1;goto B4eade4;
case 0x4eade9:goto L4eade9;
case 0x4eadef:c.instructions+=2;goto B4eadef;
case 0x4eadf5:c.instructions+=1;goto B4eadf5;
case 0x4eadf7:goto L4eadf7;
case 0x4eadfa:c.instructions+=1;goto B4eadfa;
case 0x4eadfc:goto L4eadfc;
case 0x4eadfe:goto L4eadfe;
case 0x4eae01:c.instructions+=3;goto B4eae01;
case 0x4eae05:c.instructions+=2;goto B4eae05;
case 0x4eae06:c.instructions+=1;goto B4eae06;
case 0x4eae0b:goto L4eae0b;
case 0x4eae0e:c.instructions+=3;goto B4eae0e;
case 0x4eae12:c.instructions+=2;goto B4eae12;
case 0x4eae18:c.instructions+=1;goto B4eae18;
case 0x4eae1e:goto L4eae1e;
case 0x4eae24:c.instructions+=1;goto B4eae24;
case 0x4eae26:goto L4eae26;
case 0x4eae2c:c.instructions+=1;goto B4eae2c;
case 0x4eae2e:goto L4eae2e;
case 0x4eae33:c.instructions+=2;goto B4eae33;
case 0x4eae35:c.instructions+=1;goto B4eae35;
case 0x4eae37:goto L4eae37;
case 0x4eae3a:c.instructions+=5;goto B4eae3a;
case 0x4eae3d:c.instructions+=4;goto B4eae3d;
case 0x4eae40:c.instructions+=3;goto B4eae40;
case 0x4eae43:c.instructions+=2;goto B4eae43;
case 0x4eae45:c.instructions+=1;goto B4eae45;
case 0x4eae47:goto L4eae47;
case 0x4eae49:c.instructions+=1;goto B4eae49;
case 0x4eae4b:goto L4eae4b;
case 0x4eae4c:c.instructions+=1;goto B4eae4c;
case 0x4eae51:goto L4eae51;
case 0x4eae54:c.instructions+=9;goto B4eae54;
case 0x4eae57:c.instructions+=8;goto B4eae57;
case 0x4eae59:c.instructions+=7;goto B4eae59;
case 0x4eae5c:c.instructions+=6;goto B4eae5c;
case 0x4eae5f:c.instructions+=5;goto B4eae5f;
case 0x4eae60:c.instructions+=4;goto B4eae60;
case 0x4eae63:c.instructions+=3;goto B4eae63;
case 0x4eae65:c.instructions+=2;goto B4eae65;
case 0x4eae67:c.instructions+=1;goto B4eae67;
case 0x4eae69:goto L4eae69;
case 0x4eae6b:goto L4eae6b;
case 0x4eae70:c.instructions+=1;goto B4eae70;
case 0x4eae72:goto L4eae72;
case 0x4eae77:goto L4eae77;
case 0x4eae7c:goto L4eae7c;
case 0x4eae7f:c.instructions+=1;goto B4eae7f;
case 0x4eae81:goto L4eae81;
case 0x4eae82:c.instructions+=1;goto B4eae82;
case 0x4eae87:goto L4eae87;
case 0x4eae8a:c.instructions+=3;goto B4eae8a;
case 0x4eae8d:c.instructions+=2;goto B4eae8d;
case 0x4eae8f:c.instructions+=1;goto B4eae8f;
case 0x4eae91:goto L4eae91;
case 0x4eae97:goto L4eae97;
case 0x4eae9a:c.instructions+=2;goto B4eae9a;
case 0x4eae9c:c.instructions+=1;goto B4eae9c;
case 0x4eae9e:goto L4eae9e;
case 0x4eaea4:goto L4eaea4;
case 0x4eaea9:c.instructions+=2;goto B4eaea9;
case 0x4eaeac:c.instructions+=1;goto B4eaeac;
case 0x4eaeb1:goto L4eaeb1;
case 0x4eaeb4:c.instructions+=4;goto B4eaeb4;
case 0x4eaeb7:c.instructions+=3;goto B4eaeb7;
case 0x4eaeb9:c.instructions+=2;goto B4eaeb9;
case 0x4eaebd:c.instructions+=1;goto B4eaebd;
case 0x4eaebf:goto L4eaebf;
case 0x4eaec5:c.instructions+=3;goto B4eaec5;
case 0x4eaec6:c.instructions+=2;goto B4eaec6;
case 0x4eaec8:c.instructions+=1;goto B4eaec8;
case 0x4eaecd:goto L4eaecd;
case 0x4eaecf:goto L4eaecf;
case 0x4eaed1:goto L4eaed1;
case 0x4eaed7:c.instructions+=25;goto B4eaed7;
case 0x4eaedd:c.instructions+=24;goto B4eaedd;
case 0x4eaee0:c.instructions+=23;goto B4eaee0;
case 0x4eaee3:c.instructions+=22;goto B4eaee3;
case 0x4eaee9:c.instructions+=21;goto B4eaee9;
case 0x4eaeec:c.instructions+=20;goto B4eaeec;
case 0x4eaeef:c.instructions+=19;goto B4eaeef;
case 0x4eaef0:c.instructions+=18;goto B4eaef0;
case 0x4eaef3:c.instructions+=17;goto B4eaef3;
case 0x4eaef4:c.instructions+=16;goto B4eaef4;
case 0x4eaef7:c.instructions+=15;goto B4eaef7;
case 0x4eaef8:c.instructions+=14;goto B4eaef8;
case 0x4eaefb:c.instructions+=13;goto B4eaefb;
case 0x4eaefc:c.instructions+=12;goto B4eaefc;
case 0x4eaeff:c.instructions+=11;goto B4eaeff;
case 0x4eaf00:c.instructions+=10;goto B4eaf00;
case 0x4eaf03:c.instructions+=9;goto B4eaf03;
case 0x4eaf04:c.instructions+=8;goto B4eaf04;
case 0x4eaf07:c.instructions+=7;goto B4eaf07;
case 0x4eaf08:c.instructions+=6;goto B4eaf08;
case 0x4eaf0b:c.instructions+=5;goto B4eaf0b;
case 0x4eaf0c:c.instructions+=4;goto B4eaf0c;
case 0x4eaf0d:c.instructions+=3;goto B4eaf0d;
case 0x4eaf0f:c.instructions+=2;goto B4eaf0f;
case 0x4eaf13:c.instructions+=1;goto B4eaf13;
case 0x4eaf18:goto L4eaf18;
case 0x4eaf1b:c.instructions+=9;goto B4eaf1b;
case 0x4eaf21:c.instructions+=8;goto B4eaf21;
case 0x4eaf24:c.instructions+=7;goto B4eaf24;
case 0x4eaf2a:c.instructions+=6;goto B4eaf2a;
case 0x4eaf30:c.instructions+=5;goto B4eaf30;
case 0x4eaf35:c.instructions+=4;goto B4eaf35;
case 0x4eaf3a:c.instructions+=3;goto B4eaf3a;
case 0x4eaf40:c.instructions+=2;goto B4eaf40;
case 0x4eaf46:c.instructions+=1;goto B4eaf46;
case 0x4eaf4b:goto L4eaf4b;
case 0x4eaf4e:c.instructions+=3;goto B4eaf4e;
case 0x4eaf4f:c.instructions+=2;goto B4eaf4f;
case 0x4eaf52:c.instructions+=1;goto B4eaf52;
case 0x4eaf57:goto L4eaf57;
case 0x4eaf5c:c.instructions+=1;goto B4eaf5c;
case 0x4eaf61:goto L4eaf61;
case 0x4eaf64:c.instructions+=3;goto B4eaf64;
case 0x4eaf65:c.instructions+=2;goto B4eaf65;
case 0x4eaf6b:c.instructions+=1;goto B4eaf6b;
case 0x4eaf70:goto L4eaf70;
case 0x4eaf75:c.instructions+=1;goto B4eaf75;
case 0x4eaf7a:goto L4eaf7a;
case 0x4eaf7d:c.instructions+=3;goto B4eaf7d;
case 0x4eaf7e:c.instructions+=2;goto B4eaf7e;
case 0x4eaf84:c.instructions+=1;goto B4eaf84;
case 0x4eaf89:goto L4eaf89;
case 0x4eaf8e:c.instructions+=1;goto B4eaf8e;
case 0x4eaf93:goto L4eaf93;
case 0x4eaf96:c.instructions+=3;goto B4eaf96;
case 0x4eaf97:c.instructions+=2;goto B4eaf97;
case 0x4eaf9d:c.instructions+=1;goto B4eaf9d;
case 0x4eafa2:goto L4eafa2;
case 0x4eafa7:c.instructions+=1;goto B4eafa7;
case 0x4eafac:goto L4eafac;
case 0x4eafaf:c.instructions+=3;goto B4eafaf;
case 0x4eafb0:c.instructions+=2;goto B4eafb0;
case 0x4eafb6:c.instructions+=1;goto B4eafb6;
case 0x4eafbb:goto L4eafbb;
case 0x4eafc0:c.instructions+=1;goto B4eafc0;
case 0x4eafc5:goto L4eafc5;
case 0x4eafc8:c.instructions+=3;goto B4eafc8;
case 0x4eafc9:c.instructions+=2;goto B4eafc9;
case 0x4eafcf:c.instructions+=1;goto B4eafcf;
case 0x4eafd4:goto L4eafd4;
case 0x4eafd9:c.instructions+=1;goto B4eafd9;
case 0x4eafde:goto L4eafde;
case 0x4eafe1:c.instructions+=3;goto B4eafe1;
case 0x4eafe2:c.instructions+=2;goto B4eafe2;
case 0x4eafe8:c.instructions+=1;goto B4eafe8;
case 0x4eafed:goto L4eafed;
case 0x4eaff4:c.instructions+=4;goto B4eaff4;
case 0x4eaff7:c.instructions+=3;goto B4eaff7;
case 0x4eaffa:c.instructions+=2;goto B4eaffa;
case 0x4eaffd:c.instructions+=1;goto B4eaffd;
default:missing_instruction(c.pc);}
B4ea004:L4ea004:{c.instructions+=9;NFSU2_TR(0x4ea004);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea005:{NFSU2_TR(0x4ea005);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4ea00b:{NFSU2_TR(0x4ea00b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea00c:{NFSU2_TR(0x4ea00c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4ea012:{NFSU2_TR(0x4ea012);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea013:{NFSU2_TR(0x4ea013);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4ea019:{NFSU2_TR(0x4ea019);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea01a:{NFSU2_TR(0x4ea01a);
__builtin_memmove((R+4),(R+28),4);
}
B4ea01c:{NFSU2_TR(0x4ea01c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea021ull));
TAIL_STATIC(0x51e1b0u,51e);
}
B4ea021:L4ea021:{c.instructions+=3;NFSU2_TR(0x4ea021);
u8 U[4];
w4(U+0,u32(0x7951b0ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4ea027:{NFSU2_TR(0x4ea027);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ea02a:{NFSU2_TR(0x4ea02a);
{goto L4ea02e;}
}
B4ea02c:L4ea02c:{c.instructions+=1;NFSU2_TR(0x4ea02c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4ea02e:L4ea02e:{c.instructions+=4;NFSU2_TR(0x4ea02e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea02f:{NFSU2_TR(0x4ea02f);
__builtin_memmove((R+4),(R+24),4);
}
B4ea031:{NFSU2_TR(0x4ea031);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ea035:{NFSU2_TR(0x4ea035);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea03aull));
TAIL_STATIC(0x54f820u,54f);
}
B4ea03a:L4ea03a:{c.instructions+=2;NFSU2_TR(0x4ea03a);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea03c:{NFSU2_TR(0x4ea03c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea041ull));
TAIL_STATIC(0x575620u,575);
}
B4ea041:L4ea041:{c.instructions+=6;NFSU2_TR(0x4ea041);
__builtin_memmove((R+28),(R+0),4);
}
B4ea043:{NFSU2_TR(0x4ea043);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ea046:{NFSU2_TR(0x4ea046);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ea04a:{NFSU2_TR(0x4ea04a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ea04c:{NFSU2_TR(0x4ea04c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ea054:{NFSU2_TR(0x4ea054);
if(r1(R+518)){{goto L4ea08c;}}
}
B4ea056:L4ea056:{c.instructions+=12;NFSU2_TR(0x4ea056);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4ea05c:{NFSU2_TR(0x4ea05c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea05e:{NFSU2_TR(0x4ea05e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4ea064:{NFSU2_TR(0x4ea064);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea065:{NFSU2_TR(0x4ea065);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4ea06b:{NFSU2_TR(0x4ea06b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea06c:{NFSU2_TR(0x4ea06c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4ea072:{NFSU2_TR(0x4ea072);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea073:{NFSU2_TR(0x4ea073);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4ea079:{NFSU2_TR(0x4ea079);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea07a:{NFSU2_TR(0x4ea07a);
__builtin_memmove((R+4),(R+28),4);
}
B4ea07c:{NFSU2_TR(0x4ea07c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea081ull));
TAIL_STATIC(0x51e1b0u,51e);
}
B4ea081:L4ea081:{c.instructions+=3;NFSU2_TR(0x4ea081);
u8 U[4];
w4(U+0,u32(0x795200ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4ea087:{NFSU2_TR(0x4ea087);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ea08a:{NFSU2_TR(0x4ea08a);
{goto L4ea08e;}
}
B4ea08c:L4ea08c:{c.instructions+=1;NFSU2_TR(0x4ea08c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4ea08e:L4ea08e:{c.instructions+=4;NFSU2_TR(0x4ea08e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea08f:{NFSU2_TR(0x4ea08f);
__builtin_memmove((R+4),(R+24),4);
}
B4ea091:{NFSU2_TR(0x4ea091);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ea095:{NFSU2_TR(0x4ea095);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea09aull));
TAIL_STATIC(0x54f820u,54f);
}
B4ea09a:L4ea09a:{c.instructions+=3;NFSU2_TR(0x4ea09a);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B4ea09f:{NFSU2_TR(0x4ea09f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ea0a1:{NFSU2_TR(0x4ea0a1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ea0ac;}}
}
B4ea0a3:L4ea0a3:{c.instructions+=3;NFSU2_TR(0x4ea0a3);
__builtin_memmove((R+0),gp(0x890108),4);
}
B4ea0a8:{NFSU2_TR(0x4ea0a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ea0aa:{NFSU2_TR(0x4ea0aa);
if(r1(R+518)){{goto L4ea126;}}
}
B4ea0ac:L4ea0ac:{c.instructions+=2;NFSU2_TR(0x4ea0ac);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea0ae:{NFSU2_TR(0x4ea0ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea0b3ull));
TAIL_STATIC(0x575620u,575);
}
B4ea0b3:L4ea0b3:{c.instructions+=6;NFSU2_TR(0x4ea0b3);
__builtin_memmove((R+28),(R+0),4);
}
B4ea0b5:{NFSU2_TR(0x4ea0b5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ea0b8:{NFSU2_TR(0x4ea0b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ea0bc:{NFSU2_TR(0x4ea0bc);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ea0be:{NFSU2_TR(0x4ea0be);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x9ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ea0c6:{NFSU2_TR(0x4ea0c6);
if(r1(R+518)){{goto L4ea0fe;}}
}
B4ea0c8:L4ea0c8:{c.instructions+=12;NFSU2_TR(0x4ea0c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4ea0ce:{NFSU2_TR(0x4ea0ce);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea0d0:{NFSU2_TR(0x4ea0d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4ea0d6:{NFSU2_TR(0x4ea0d6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea0d7:{NFSU2_TR(0x4ea0d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4ea0dd:{NFSU2_TR(0x4ea0dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea0de:{NFSU2_TR(0x4ea0de);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4ea0e4:{NFSU2_TR(0x4ea0e4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea0e5:{NFSU2_TR(0x4ea0e5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+8),(U+0),4);
}
B4ea0eb:{NFSU2_TR(0x4ea0eb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea0ec:{NFSU2_TR(0x4ea0ec);
__builtin_memmove((R+4),(R+28),4);
}
B4ea0ee:{NFSU2_TR(0x4ea0ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea0f3ull));
TAIL_STATIC(0x51e1b0u,51e);
}
B4ea0f3:L4ea0f3:{c.instructions+=3;NFSU2_TR(0x4ea0f3);
u8 U[4];
w4(U+0,u32(0x795240ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4ea0f9:{NFSU2_TR(0x4ea0f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ea0fc:{NFSU2_TR(0x4ea0fc);
{goto L4ea100;}
}
B4ea0fe:L4ea0fe:{c.instructions+=1;NFSU2_TR(0x4ea0fe);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4ea100:L4ea100:{c.instructions+=4;NFSU2_TR(0x4ea100);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea101:{NFSU2_TR(0x4ea101);
__builtin_memmove((R+4),(R+24),4);
}
B4ea103:{NFSU2_TR(0x4ea103);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ea107:{NFSU2_TR(0x4ea107);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea10cull));
TAIL_STATIC(0x54f820u,54f);
}
B4ea10c:L4ea10c:{c.instructions+=3;NFSU2_TR(0x4ea10c);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B4ea111:{NFSU2_TR(0x4ea111);
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
B4ea113:{NFSU2_TR(0x4ea113);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ea1df;}}
}
B4ea119:L4ea119:{c.instructions+=3;NFSU2_TR(0x4ea119);
__builtin_memmove((R+0),gp(0x890108),4);
}
B4ea11e:{NFSU2_TR(0x4ea11e);
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
B4ea120:{NFSU2_TR(0x4ea120);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ea1df;}}
}
B4ea126:L4ea126:{c.instructions+=3;NFSU2_TR(0x4ea126);
__builtin_memmove((R+0),gp(0x89e7b4),4);
}
B4ea12b:{NFSU2_TR(0x4ea12b);
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
B4ea12d:{NFSU2_TR(0x4ea12d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ea1df;}}
}
B4ea133:L4ea133:{c.instructions+=2;NFSU2_TR(0x4ea133);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea135:{NFSU2_TR(0x4ea135);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea13aull));
TAIL_STATIC(0x575620u,575);
}
B4ea13a:L4ea13a:{c.instructions+=5;NFSU2_TR(0x4ea13a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ea13d:{NFSU2_TR(0x4ea13d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ea141:{NFSU2_TR(0x4ea141);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ea143:{NFSU2_TR(0x4ea143);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0xaull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ea14b:{NFSU2_TR(0x4ea14b);
if(r1(R+518)){{goto L4ea17b;}}
}
B4ea14d:L4ea14d:{c.instructions+=13;NFSU2_TR(0x4ea14d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea14f:{NFSU2_TR(0x4ea14f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4ea155:{NFSU2_TR(0x4ea155);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea156:{NFSU2_TR(0x4ea156);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4ea15c:{NFSU2_TR(0x4ea15c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea15d:{NFSU2_TR(0x4ea15d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4ea163:{NFSU2_TR(0x4ea163);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea164:{NFSU2_TR(0x4ea164);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ea16a:{NFSU2_TR(0x4ea16a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+8),(U+0),4);
}
B4ea170:{NFSU2_TR(0x4ea170);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea171:{NFSU2_TR(0x4ea171);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea172:{NFSU2_TR(0x4ea172);
__builtin_memmove((R+4),(R+0),4);
}
B4ea174:{NFSU2_TR(0x4ea174);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea179ull));
TAIL_STATIC(0x4bfb50u,4bf);
}
B4ea179:L4ea179:{c.instructions+=1;NFSU2_TR(0x4ea179);
{goto L4ea17d;}
}
B4ea17b:L4ea17b:{c.instructions+=1;NFSU2_TR(0x4ea17b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4ea17d:L4ea17d:{c.instructions+=4;NFSU2_TR(0x4ea17d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea17e:{NFSU2_TR(0x4ea17e);
__builtin_memmove((R+4),(R+24),4);
}
B4ea180:{NFSU2_TR(0x4ea180);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ea184:{NFSU2_TR(0x4ea184);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea189ull));
TAIL_STATIC(0x54f820u,54f);
}
B4ea189:L4ea189:{c.instructions+=2;NFSU2_TR(0x4ea189);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea18b:{NFSU2_TR(0x4ea18b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea190ull));
TAIL_STATIC(0x575620u,575);
}
B4ea190:L4ea190:{c.instructions+=5;NFSU2_TR(0x4ea190);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ea193:{NFSU2_TR(0x4ea193);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ea197:{NFSU2_TR(0x4ea197);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ea199:{NFSU2_TR(0x4ea199);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0xbull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ea1a1:{NFSU2_TR(0x4ea1a1);
if(r1(R+518)){{goto L4ea1d1;}}
}
B4ea1a3:L4ea1a3:{c.instructions+=13;NFSU2_TR(0x4ea1a3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea1a5:{NFSU2_TR(0x4ea1a5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4ea1ab:{NFSU2_TR(0x4ea1ab);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea1ac:{NFSU2_TR(0x4ea1ac);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4ea1b2:{NFSU2_TR(0x4ea1b2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea1b3:{NFSU2_TR(0x4ea1b3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4ea1b9:{NFSU2_TR(0x4ea1b9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea1ba:{NFSU2_TR(0x4ea1ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ea1c0:{NFSU2_TR(0x4ea1c0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4ea1c6:{NFSU2_TR(0x4ea1c6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea1c7:{NFSU2_TR(0x4ea1c7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea1c8:{NFSU2_TR(0x4ea1c8);
__builtin_memmove((R+4),(R+0),4);
}
B4ea1ca:{NFSU2_TR(0x4ea1ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea1cfull));
TAIL_STATIC(0x4bfbe0u,4bf);
}
B4ea1cf:L4ea1cf:{c.instructions+=1;NFSU2_TR(0x4ea1cf);
{goto L4ea1d3;}
}
B4ea1d1:L4ea1d1:{c.instructions+=1;NFSU2_TR(0x4ea1d1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4ea1d3:L4ea1d3:{c.instructions+=4;NFSU2_TR(0x4ea1d3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea1d4:{NFSU2_TR(0x4ea1d4);
__builtin_memmove((R+4),(R+24),4);
}
B4ea1d6:{NFSU2_TR(0x4ea1d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ea1da:{NFSU2_TR(0x4ea1da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea1dfull));
TAIL_STATIC(0x54f820u,54f);
}
B4ea1df:L4ea1df:{c.instructions+=1;NFSU2_TR(0x4ea1df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea1e4ull));
TAIL_STATIC(0x50cea0u,50c);
}
B4ea1e4:L4ea1e4:{c.instructions+=2;NFSU2_TR(0x4ea1e4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea1e5:{NFSU2_TR(0x4ea1e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea1eaull));
TAIL_STATIC(0x52cf60u,52c);
}
B4ea1ea:L4ea1ea:{c.instructions+=3;NFSU2_TR(0x4ea1ea);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ea1ed:{NFSU2_TR(0x4ea1ed);
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
B4ea1ef:{NFSU2_TR(0x4ea1ef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ea20a;}}
}
B4ea1f1:L4ea1f1:{c.instructions+=5;NFSU2_TR(0x4ea1f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ea1f4:{NFSU2_TR(0x4ea1f4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea1f6:{NFSU2_TR(0x4ea1f6);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea1fb:{NFSU2_TR(0x4ea1fb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea1fc:{NFSU2_TR(0x4ea1fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea201ull));
TAIL_STATIC(0x50cea0u,50c);
}
B4ea201:L4ea201:{c.instructions+=2;NFSU2_TR(0x4ea201);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea202:{NFSU2_TR(0x4ea202);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea207ull));
TAIL_STATIC(0x555f10u,555);
}
B4ea207:L4ea207:{c.instructions+=1;NFSU2_TR(0x4ea207);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4ea20a:L4ea20a:{c.instructions+=2;NFSU2_TR(0x4ea20a);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B4ea210:{NFSU2_TR(0x4ea210);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea215ull));
TAIL_STATIC(0x54e6a0u,54e);
}
B4ea215:L4ea215:{c.instructions+=6;NFSU2_TR(0x4ea215);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ea218:{NFSU2_TR(0x4ea218);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ea21b:{NFSU2_TR(0x4ea21b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea21c:{NFSU2_TR(0x4ea21c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea21d:{NFSU2_TR(0x4ea21d);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B4ea223:{NFSU2_TR(0x4ea223);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea228ull));
TAIL_STATIC(0x54e6e0u,54e);
}
B4ea228:L4ea228:{c.instructions+=8;NFSU2_TR(0x4ea228);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ea22c:{NFSU2_TR(0x4ea22c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ea22d:{NFSU2_TR(0x4ea22d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ea22e:{NFSU2_TR(0x4ea22e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4ea22f:{NFSU2_TR(0x4ea22f);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ea236:{NFSU2_TR(0x4ea236);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4ea237:{NFSU2_TR(0x4ea237);
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
B4ea23a:{NFSU2_TR(0x4ea23a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ea240:L4ea240:{c.instructions+=5;NFSU2_TR(0x4ea240);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ea243:{NFSU2_TR(0x4ea243);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea244:{NFSU2_TR(0x4ea244);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4ea247:{NFSU2_TR(0x4ea247);
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
B4ea249:{NFSU2_TR(0x4ea249);
if(r1(R+518)){{goto L4ea289;}}
}
B4ea24b:L4ea24b:{c.instructions+=3;NFSU2_TR(0x4ea24b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea24c:{NFSU2_TR(0x4ea24c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea24d:{NFSU2_TR(0x4ea24d);
__builtin_memmove((R+4),(R+4),4);
}
B4ea250:L4ea250:{c.instructions+=5;NFSU2_TR(0x4ea250);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ea253:{NFSU2_TR(0x4ea253);
u8 U[8];
__builtin_memmove((U+0),gp(0x7f4584),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ea259:{NFSU2_TR(0x4ea259);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B4ea25b:{NFSU2_TR(0x4ea25b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4ea25e:{NFSU2_TR(0x4ea25e);
if(r1(R+518)){{goto L4ea268;}}
}
B4ea260:L4ea260:{c.instructions+=2;NFSU2_TR(0x4ea260);
u8 U[8];
__builtin_memmove((U+0),gp(0x7f4588),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ea266:{NFSU2_TR(0x4ea266);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ea281;}}
}
B4ea268:L4ea268:{c.instructions+=4;NFSU2_TR(0x4ea268);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+28)),r4(U+0));
}
B4ea26a:{NFSU2_TR(0x4ea26a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea26b:{NFSU2_TR(0x4ea26b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ea26e:{NFSU2_TR(0x4ea26e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea273ull));
TAIL_STATIC(0x440ef0u,440);
}
B4ea273:L4ea273:{c.instructions+=5;NFSU2_TR(0x4ea273);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ea276:{NFSU2_TR(0x4ea276);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ea279:{NFSU2_TR(0x4ea279);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea27a:{NFSU2_TR(0x4ea27a);
__builtin_memmove((R+4),(R+12),4);
}
B4ea27c:{NFSU2_TR(0x4ea27c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea281ull));
TAIL_STATIC(0x479130u,479);
}
B4ea281:L4ea281:{c.instructions+=3;NFSU2_TR(0x4ea281);
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
B4ea283:{NFSU2_TR(0x4ea283);
__builtin_memmove((R+0),(R+28),4);
}
B4ea285:{NFSU2_TR(0x4ea285);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ea250u);}goto L4ea250;}}
}
B4ea287:L4ea287:{c.instructions+=2;NFSU2_TR(0x4ea287);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ea288:{NFSU2_TR(0x4ea288);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ea289:L4ea289:{c.instructions+=2;NFSU2_TR(0x4ea289);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4ea28a:{NFSU2_TR(0x4ea28a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ea290:L4ea290:{c.instructions+=17;NFSU2_TR(0x4ea290);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea292:{NFSU2_TR(0x4ea292);
u8 U[4];
w4(U+0,u32(0x7767e6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea297:{NFSU2_TR(0x4ea297);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ea29d:{NFSU2_TR(0x4ea29d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea29e:{NFSU2_TR(0x4ea29e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ea2a5:{NFSU2_TR(0x4ea2a5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea2a6:{NFSU2_TR(0x4ea2a6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea2a7:{NFSU2_TR(0x4ea2a7);
__builtin_memmove((R+20),(R+4),4);
}
B4ea2a9:{NFSU2_TR(0x4ea2a9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea2aa:{NFSU2_TR(0x4ea2aa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea2ab:{NFSU2_TR(0x4ea2ab);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ea2af:{NFSU2_TR(0x4ea2af);
u8 U[4];
w4(U+0,u32(0x797b7cull));
s4(u32(r4(R+20)),r4(U+0));
}
B4ea2b6:{NFSU2_TR(0x4ea2b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4ea2b9:{NFSU2_TR(0x4ea2b9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x30ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ea2bc:{NFSU2_TR(0x4ea2bc);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B4ea2be:{NFSU2_TR(0x4ea2be);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ea2c6:{NFSU2_TR(0x4ea2c6);
if(r1(R+518)){{goto L4ea2eb;}}
}
B4ea2c8:L4ea2c8:{c.instructions+=2;NFSU2_TR(0x4ea2c8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea2c9:{NFSU2_TR(0x4ea2c9);
__builtin_memmove((R+16),(R+16),4);
}
B4ea2d0:L4ea2d0:{c.instructions+=4;NFSU2_TR(0x4ea2d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4ea2d3:{NFSU2_TR(0x4ea2d3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea2d5:{NFSU2_TR(0x4ea2d5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea2d6:{NFSU2_TR(0x4ea2d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea2dbull));
TAIL_STATIC(0x51cd10u,51c);
}
B4ea2db:L4ea2db:{c.instructions+=2;NFSU2_TR(0x4ea2db);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea2dc:{NFSU2_TR(0x4ea2dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea2e1ull));
TAIL_STATIC(0x5379a0u,537);
}
B4ea2e1:L4ea2e1:{c.instructions+=4;NFSU2_TR(0x4ea2e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B4ea2e3:{NFSU2_TR(0x4ea2e3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4ea2e6:{NFSU2_TR(0x4ea2e6);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B4ea2e8:{NFSU2_TR(0x4ea2e8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ea2d0u);}goto L4ea2d0;}}
}
B4ea2ea:L4ea2ea:{c.instructions+=1;NFSU2_TR(0x4ea2ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4ea2eb:L4ea2eb:{c.instructions+=1;NFSU2_TR(0x4ea2eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea2f0ull));
TAIL_STATIC(0x50cea0u,50c);
}
B4ea2f0:L4ea2f0:{c.instructions+=2;NFSU2_TR(0x4ea2f0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea2f1:{NFSU2_TR(0x4ea2f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea2f6ull));
TAIL_STATIC(0x52cf60u,52c);
}
B4ea2f6:L4ea2f6:{c.instructions+=3;NFSU2_TR(0x4ea2f6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ea2f9:{NFSU2_TR(0x4ea2f9);
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
B4ea2fb:{NFSU2_TR(0x4ea2fb);
if(r1(R+518)){{goto L4ea30b;}}
}
B4ea2fd:L4ea2fd:{c.instructions+=1;NFSU2_TR(0x4ea2fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea302ull));
TAIL_STATIC(0x50cea0u,50c);
}
B4ea302:L4ea302:{c.instructions+=2;NFSU2_TR(0x4ea302);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea303:{NFSU2_TR(0x4ea303);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea308ull));
TAIL_STATIC(0x5379a0u,537);
}
B4ea308:L4ea308:{c.instructions+=1;NFSU2_TR(0x4ea308);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ea30b:L4ea30b:{c.instructions+=4;NFSU2_TR(0x4ea30b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ea30d:{NFSU2_TR(0x4ea30d);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ea30f:{NFSU2_TR(0x4ea30f);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4ea314:{NFSU2_TR(0x4ea314);
if(r1(R+518)){{goto L4ea32f;}}
}
B4ea316:L4ea316:{c.instructions+=6;NFSU2_TR(0x4ea316);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4ea318:{NFSU2_TR(0x4ea318);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ea31b:{NFSU2_TR(0x4ea31b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4ea31d:{NFSU2_TR(0x4ea31d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea31e:{NFSU2_TR(0x4ea31e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ea321:{NFSU2_TR(0x4ea321);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea326ull));
TAIL_STATIC(0x440ef0u,440);
}
B4ea326:L4ea326:{c.instructions+=4;NFSU2_TR(0x4ea326);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ea328:{NFSU2_TR(0x4ea328);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ea32b:{NFSU2_TR(0x4ea32b);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ea32d:{NFSU2_TR(0x4ea32d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ea316u);}goto L4ea316;}}
}
B4ea32f:L4ea32f:{c.instructions+=3;NFSU2_TR(0x4ea32f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4ea332:{NFSU2_TR(0x4ea332);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ea33a:{NFSU2_TR(0x4ea33a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea33full));
TAIL_STATIC(0x4e9180u,4e9);
}
B4ea33f:L4ea33f:{c.instructions+=7;NFSU2_TR(0x4ea33f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ea343:{NFSU2_TR(0x4ea343);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ea344:{NFSU2_TR(0x4ea344);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ea345:{NFSU2_TR(0x4ea345);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4ea346:{NFSU2_TR(0x4ea346);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ea34d:{NFSU2_TR(0x4ea34d);
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
B4ea350:{NFSU2_TR(0x4ea350);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ea360:L4ea360:{c.instructions+=17;NFSU2_TR(0x4ea360);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea362:{NFSU2_TR(0x4ea362);
u8 U[4];
w4(U+0,u32(0x77605eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea367:{NFSU2_TR(0x4ea367);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ea36d:{NFSU2_TR(0x4ea36d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea36e:{NFSU2_TR(0x4ea36e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ea375:{NFSU2_TR(0x4ea375);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea376:{NFSU2_TR(0x4ea376);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea377:{NFSU2_TR(0x4ea377);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea378:{NFSU2_TR(0x4ea378);
__builtin_memmove((R+24),(R+4),4);
}
B4ea37a:{NFSU2_TR(0x4ea37a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea37b:{NFSU2_TR(0x4ea37b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ea37f:{NFSU2_TR(0x4ea37f);
u8 U[4];
w4(U+0,u32(0x797b80ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4ea385:{NFSU2_TR(0x4ea385);
__builtin_memmove((R+0),gp(0x8500d0),4);
}
B4ea38a:{NFSU2_TR(0x4ea38a);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4ea38c:{NFSU2_TR(0x4ea38c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ea38f:{NFSU2_TR(0x4ea38f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ea397:{NFSU2_TR(0x4ea397);
if(r1(R+518)){{goto L4ea3b3;}}
}
B4ea399:L4ea399:{c.instructions+=2;NFSU2_TR(0x4ea399);
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
B4ea39b:{NFSU2_TR(0x4ea39b);
if(r1(R+518)){{goto L4ea3b3;}}
}
B4ea39d:L4ea39d:{c.instructions+=3;NFSU2_TR(0x4ea39d);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea39f:{NFSU2_TR(0x4ea39f);
w4(R+4,u32(0x850080ull));
}
B4ea3a4:{NFSU2_TR(0x4ea3a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea3a9ull));
TAIL_STATIC(0x5031b0u,503);
}
B4ea3a9:L4ea3a9:{c.instructions+=2;NFSU2_TR(0x4ea3a9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea3ab:{NFSU2_TR(0x4ea3ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea3b0ull));
TAIL_STATIC(0x58fd50u,58f);
}
B4ea3b0:L4ea3b0:{c.instructions+=1;NFSU2_TR(0x4ea3b0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ea3b3:L4ea3b3:{c.instructions+=2;NFSU2_TR(0x4ea3b3);
w4(R+4,u32(0x89cf48ull));
}
B4ea3b8:{NFSU2_TR(0x4ea3b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea3bdull));
TAIL_STATIC(0x5f00f0u,5f0);
}
B4ea3bd:L4ea3bd:{c.instructions+=2;NFSU2_TR(0x4ea3bd);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ea3bf:{NFSU2_TR(0x4ea3bf);
if(r1(R+518)){{goto L4ea402;}}
}
B4ea3c1:L4ea3c1:{c.instructions+=2;NFSU2_TR(0x4ea3c1);
u8 U[2];
__builtin_memmove((U+0),gp(0x850098),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4ea3c8:{NFSU2_TR(0x4ea3c8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ea402;}}
}
B4ea3ca:L4ea3ca:{c.instructions+=4;NFSU2_TR(0x4ea3ca);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea3cb:{NFSU2_TR(0x4ea3cb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea3cc:{NFSU2_TR(0x4ea3cc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea3cd:{NFSU2_TR(0x4ea3cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea3d2ull));
TAIL_STATIC(0x58f740u,58f);
}
B4ea3d2:L4ea3d2:{c.instructions+=3;NFSU2_TR(0x4ea3d2);
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
B4ea3d5:{NFSU2_TR(0x4ea3d5);
__builtin_memmove((R+4),(R+0),4);
}
B4ea3d7:{NFSU2_TR(0x4ea3d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea3dcull));
TAIL_STATIC(0x582910u,582);
}
B4ea3dc:L4ea3dc:{c.instructions+=3;NFSU2_TR(0x4ea3dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ea3df:{NFSU2_TR(0x4ea3df);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ea3e1:{NFSU2_TR(0x4ea3e1);
if(r1(R+518)){{goto L4ea3ef;}}
}
B4ea3e3:L4ea3e3:{c.instructions+=2;NFSU2_TR(0x4ea3e3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea3e4:{NFSU2_TR(0x4ea3e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea3e9ull));
TAIL_STATIC(0x540a60u,540);
}
B4ea3e9:L4ea3e9:{c.instructions+=2;NFSU2_TR(0x4ea3e9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ea3ec:{NFSU2_TR(0x4ea3ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ea3ef:L4ea3ef:{c.instructions+=3;NFSU2_TR(0x4ea3ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ea3f2:{NFSU2_TR(0x4ea3f2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ea3f4:{NFSU2_TR(0x4ea3f4);
if(r1(R+518)){{goto L4ea402;}}
}
B4ea3f6:L4ea3f6:{c.instructions+=2;NFSU2_TR(0x4ea3f6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea3f7:{NFSU2_TR(0x4ea3f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea3fcull));
TAIL_STATIC(0x540a60u,540);
}
B4ea3fc:L4ea3fc:{c.instructions+=2;NFSU2_TR(0x4ea3fc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ea3ff:{NFSU2_TR(0x4ea3ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ea402:L4ea402:{c.instructions+=6;NFSU2_TR(0x4ea402);
__builtin_memmove((R+28),gp(0x8363dc),4);
}
B4ea408:{NFSU2_TR(0x4ea408);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ea40b:{NFSU2_TR(0x4ea40b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ea40e:{NFSU2_TR(0x4ea40e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1cull))));
}
B4ea411:{NFSU2_TR(0x4ea411);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ea413:{NFSU2_TR(0x4ea413);
if(r1(R+518)){{goto L4ea425;}}
}
B4ea415:L4ea415:{c.instructions+=3;NFSU2_TR(0x4ea415);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea416:{NFSU2_TR(0x4ea416);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea417:{NFSU2_TR(0x4ea417);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea41cull));
TAIL_STATIC(0x43dc30u,43d);
}
B4ea41c:L4ea41c:{c.instructions+=3;NFSU2_TR(0x4ea41c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4ea41f:{NFSU2_TR(0x4ea41f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ea421:{NFSU2_TR(0x4ea421);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ea425;}}
}
B4ea423:L4ea423:{c.instructions+=1;NFSU2_TR(0x4ea423);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+28)),r4(U+0));
}
B4ea425:L4ea425:{c.instructions+=4;NFSU2_TR(0x4ea425);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ea428:{NFSU2_TR(0x4ea428);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ea42a:{NFSU2_TR(0x4ea42a);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4ea42f:{NFSU2_TR(0x4ea42f);
if(r1(R+518)){{goto L4ea43d;}}
}
B4ea431:L4ea431:{c.instructions+=2;NFSU2_TR(0x4ea431);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea432:{NFSU2_TR(0x4ea432);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea437ull));
TAIL_STATIC(0x540a60u,540);
}
B4ea437:L4ea437:{c.instructions+=2;NFSU2_TR(0x4ea437);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ea43a:{NFSU2_TR(0x4ea43a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ea43d:L4ea43d:{c.instructions+=5;NFSU2_TR(0x4ea43d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ea440:{NFSU2_TR(0x4ea440);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ea443:{NFSU2_TR(0x4ea443);
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
B4ea445:{NFSU2_TR(0x4ea445);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4ea449:{NFSU2_TR(0x4ea449);
if(r1(R+518)){{goto L4ea469;}}
}
B4ea44b:L4ea44b:{c.instructions+=1;NFSU2_TR(0x4ea44b);
{goto L4ea450;}
}
B4ea450:L4ea450:{c.instructions+=6;NFSU2_TR(0x4ea450);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4ea452:{NFSU2_TR(0x4ea452);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ea455:{NFSU2_TR(0x4ea455);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4ea457:{NFSU2_TR(0x4ea457);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea458:{NFSU2_TR(0x4ea458);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ea45b:{NFSU2_TR(0x4ea45b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea460ull));
TAIL_STATIC(0x575630u,575);
}
B4ea460:L4ea460:{c.instructions+=4;NFSU2_TR(0x4ea460);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ea462:{NFSU2_TR(0x4ea462);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ea465:{NFSU2_TR(0x4ea465);
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
B4ea467:{NFSU2_TR(0x4ea467);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ea450u);}goto L4ea450;}}
}
B4ea469:L4ea469:{c.instructions+=3;NFSU2_TR(0x4ea469);
__builtin_memmove((R+4),(R+24),4);
}
B4ea46b:{NFSU2_TR(0x4ea46b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ea473:{NFSU2_TR(0x4ea473);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea478ull));
TAIL_STATIC(0x510d40u,510);
}
B4ea478:L4ea478:{c.instructions+=7;NFSU2_TR(0x4ea478);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ea47c:{NFSU2_TR(0x4ea47c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ea47d:{NFSU2_TR(0x4ea47d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ea47e:{NFSU2_TR(0x4ea47e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4ea47f:{NFSU2_TR(0x4ea47f);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ea486:{NFSU2_TR(0x4ea486);
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
B4ea489:{NFSU2_TR(0x4ea489);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ea490:L4ea490:{c.instructions+=3;NFSU2_TR(0x4ea490);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea491:{NFSU2_TR(0x4ea491);
__builtin_memmove((R+24),(R+4),4);
}
B4ea493:{NFSU2_TR(0x4ea493);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea498ull));
TAIL_STATIC(0x4c0270u,4c0);
}
B4ea498:L4ea498:{c.instructions+=2;NFSU2_TR(0x4ea498);
__builtin_memmove((R+4),(R+24),4);
}
B4ea49a:{NFSU2_TR(0x4ea49a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea49full));
TAIL_STATIC(0x4c0110u,4c0);
}
B4ea49f:L4ea49f:{c.instructions+=2;NFSU2_TR(0x4ea49f);
__builtin_memmove((R+4),(R+24),4);
}
B4ea4a1:{NFSU2_TR(0x4ea4a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea4a6ull));
TAIL_STATIC(0x4d7400u,4d7);
}
B4ea4a6:L4ea4a6:{c.instructions+=3;NFSU2_TR(0x4ea4a6);
__builtin_memmove((R+0),gp(0x850078),4);
}
B4ea4ab:{NFSU2_TR(0x4ea4ab);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ea4ae:{NFSU2_TR(0x4ea4ae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ea50e;}}
}
B4ea4b0:L4ea4b0:{c.instructions+=2;NFSU2_TR(0x4ea4b0);
u8 U[8];
__builtin_memmove((U+0),gp(0x83aab4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ea4b7:{NFSU2_TR(0x4ea4b7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ea55e;}}
}
B4ea4bd:L4ea4bd:{c.instructions+=4;NFSU2_TR(0x4ea4bd);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea4bf:{NFSU2_TR(0x4ea4bf);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea4c1:{NFSU2_TR(0x4ea4c1);
__builtin_memmove((R+4),(R+24),4);
}
B4ea4c3:{NFSU2_TR(0x4ea4c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea4c8ull));
TAIL_STATIC(0x4a4770u,4a4);
}
B4ea4c8:L4ea4c8:{c.instructions+=2;NFSU2_TR(0x4ea4c8);
w4(R+4,u32(0x83aab4ull));
}
B4ea4cd:{NFSU2_TR(0x4ea4cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea4d2ull));
TAIL_STATIC(0x502780u,502);
}
B4ea4d2:L4ea4d2:{c.instructions+=2;NFSU2_TR(0x4ea4d2);
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
B4ea4d4:{NFSU2_TR(0x4ea4d4);
if(r1(R+518)){{goto L4ea56d;}}
}
B4ea4da:L4ea4da:{c.instructions+=2;NFSU2_TR(0x4ea4da);
u8 U[14];
__builtin_memmove((U+6),gp(0x83abc4),4);
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
B4ea4e1:{NFSU2_TR(0x4ea4e1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ea56d;}}
}
B4ea4e7:L4ea4e7:{c.instructions+=4;NFSU2_TR(0x4ea4e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4ea4ea:{NFSU2_TR(0x4ea4ea);
u8 U[4];
w4(U+0,u32(0xa40518e9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea4ef:{NFSU2_TR(0x4ea4ef);
u8 U[4];
w4(U+0,u32(0x797b90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea4f4:{NFSU2_TR(0x4ea4f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea4f9ull));
TAIL_STATIC(0x505450u,505);
}
B4ea4f9:L4ea4f9:{c.instructions+=3;NFSU2_TR(0x4ea4f9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea4fa:{NFSU2_TR(0x4ea4fa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea4fb:{NFSU2_TR(0x4ea4fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea500ull));
TAIL_STATIC(0x537a10u,537);
}
B4ea500:L4ea500:{c.instructions+=3;NFSU2_TR(0x4ea500);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4ea503:{NFSU2_TR(0x4ea503);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea504:{NFSU2_TR(0x4ea504);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea509ull));
TAIL_STATIC(0x50c900u,50c);
}
B4ea509:L4ea509:{c.instructions+=3;NFSU2_TR(0x4ea509);
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
B4ea50c:{NFSU2_TR(0x4ea50c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ea50d:{NFSU2_TR(0x4ea50d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ea50e:L4ea50e:{c.instructions+=2;NFSU2_TR(0x4ea50e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ea513:{NFSU2_TR(0x4ea513);
if(r1(R+518)){{goto L4ea51a;}}
}
B4ea515:L4ea515:{c.instructions+=2;NFSU2_TR(0x4ea515);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ea518:{NFSU2_TR(0x4ea518);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ea55e;}}
}
B4ea51a:L4ea51a:{c.instructions+=2;NFSU2_TR(0x4ea51a);
u8 U[8];
__builtin_memmove((U+0),gp(0x850088),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ea521:{NFSU2_TR(0x4ea521);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ea55e;}}
}
B4ea523:L4ea523:{c.instructions+=2;NFSU2_TR(0x4ea523);
w4(R+4,u32(0x89cf48ull));
}
B4ea528:{NFSU2_TR(0x4ea528);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea52dull));
TAIL_STATIC(0x5f01e0u,5f0);
}
B4ea52d:L4ea52d:{c.instructions+=4;NFSU2_TR(0x4ea52d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea52e:{NFSU2_TR(0x4ea52e);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea530:{NFSU2_TR(0x4ea530);
__builtin_memmove((R+4),(R+24),4);
}
B4ea532:{NFSU2_TR(0x4ea532);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea537ull));
TAIL_STATIC(0x4a4770u,4a4);
}
B4ea537:L4ea537:{c.instructions+=4;NFSU2_TR(0x4ea537);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4ea53a:{NFSU2_TR(0x4ea53a);
u8 U[4];
w4(U+0,u32(0xa40518e9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea53f:{NFSU2_TR(0x4ea53f);
u8 U[4];
w4(U+0,u32(0x797b90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea544:{NFSU2_TR(0x4ea544);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea549ull));
TAIL_STATIC(0x505450u,505);
}
B4ea549:L4ea549:{c.instructions+=3;NFSU2_TR(0x4ea549);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea54a:{NFSU2_TR(0x4ea54a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea54b:{NFSU2_TR(0x4ea54b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea550ull));
TAIL_STATIC(0x537a10u,537);
}
B4ea550:L4ea550:{c.instructions+=3;NFSU2_TR(0x4ea550);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4ea553:{NFSU2_TR(0x4ea553);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea554:{NFSU2_TR(0x4ea554);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea559ull));
TAIL_STATIC(0x50c900u,50c);
}
B4ea559:L4ea559:{c.instructions+=3;NFSU2_TR(0x4ea559);
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
B4ea55c:{NFSU2_TR(0x4ea55c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ea55d:{NFSU2_TR(0x4ea55d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ea55e:L4ea55e:{c.instructions+=5;NFSU2_TR(0x4ea55e);
__builtin_memmove((R+0),gp(0x85bab4),4);
}
B4ea563:{NFSU2_TR(0x4ea563);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea564:{NFSU2_TR(0x4ea564);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea566:{NFSU2_TR(0x4ea566);
__builtin_memmove((R+4),(R+24),4);
}
B4ea568:{NFSU2_TR(0x4ea568);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea56dull));
TAIL_STATIC(0x4a4770u,4a4);
}
B4ea56d:L4ea56d:{c.instructions+=2;NFSU2_TR(0x4ea56d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ea56e:{NFSU2_TR(0x4ea56e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ea570:L4ea570:{c.instructions+=4;NFSU2_TR(0x4ea570);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea571:{NFSU2_TR(0x4ea571);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea572:{NFSU2_TR(0x4ea572);
__builtin_memmove((R+24),(R+4),4);
}
B4ea574:{NFSU2_TR(0x4ea574);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea579ull));
TAIL_STATIC(0x4c07a0u,4c0);
}
B4ea579:L4ea579:{c.instructions+=2;NFSU2_TR(0x4ea579);
__builtin_memmove((R+4),(R+24),4);
}
B4ea57b:{NFSU2_TR(0x4ea57b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea580ull));
TAIL_STATIC(0x4d77a0u,4d7);
}
B4ea580:L4ea580:{c.instructions+=4;NFSU2_TR(0x4ea580);
__builtin_memmove((R+0),gp(0x850078),4);
}
B4ea585:{NFSU2_TR(0x4ea585);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ea58a:{NFSU2_TR(0x4ea58a);
w4(R+28,u32(0x8ull));
}
B4ea58f:{NFSU2_TR(0x4ea58f);
if(r1(R+518)){{goto L4ea595;}}
}
B4ea591:L4ea591:{c.instructions+=2;NFSU2_TR(0x4ea591);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ea593:{NFSU2_TR(0x4ea593);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ea59d;}}
}
B4ea595:L4ea595:{c.instructions+=2;NFSU2_TR(0x4ea595);
u8 U[8];
__builtin_memmove((U+0),gp(0x850088),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ea59b:{NFSU2_TR(0x4ea59b);
if(r1(R+518)){{goto L4ea5aa;}}
}
B4ea59d:L4ea59d:{c.instructions+=2;NFSU2_TR(0x4ea59d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ea5a0:{NFSU2_TR(0x4ea5a0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ea5d0;}}
}
B4ea5a2:L4ea5a2:{c.instructions+=2;NFSU2_TR(0x4ea5a2);
u8 U[8];
__builtin_memmove((U+0),gp(0x83aab4),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ea5a8:{NFSU2_TR(0x4ea5a8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ea5d0;}}
}
B4ea5aa:L4ea5aa:{c.instructions+=2;NFSU2_TR(0x4ea5aa);
w4(R+4,u32(0x83aab4ull));
}
B4ea5af:{NFSU2_TR(0x4ea5af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea5b4ull));
TAIL_STATIC(0x502840u,502);
}
B4ea5b4:L4ea5b4:{c.instructions+=2;NFSU2_TR(0x4ea5b4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ea5b6:{NFSU2_TR(0x4ea5b6);
if(r1(R+518)){{goto L4ea5d0;}}
}
B4ea5b8:L4ea5b8:{c.instructions+=6;NFSU2_TR(0x4ea5b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ea5bb:{NFSU2_TR(0x4ea5bb);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea5bd:{NFSU2_TR(0x4ea5bd);
u8 U[4];
w4(U+0,u32(0x78ffd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea5c2:{NFSU2_TR(0x4ea5c2);
u8 U[4];
w4(U+0,u32(0x797ba8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea5c7:{NFSU2_TR(0x4ea5c7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea5c8:{NFSU2_TR(0x4ea5c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea5cdull));
TAIL_STATIC(0x5426c0u,542);
}
B4ea5cd:L4ea5cd:{c.instructions+=1;NFSU2_TR(0x4ea5cd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4ea5d0:L4ea5d0:{c.instructions+=6;NFSU2_TR(0x4ea5d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ea5d3:{NFSU2_TR(0x4ea5d3);
__builtin_memmove((R+8),gp(0x8363dc),4);
}
B4ea5d9:{NFSU2_TR(0x4ea5d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ea5dc:{NFSU2_TR(0x4ea5dc);
__builtin_memmove((R+0),gp(0x850078),4);
}
B4ea5e1:{NFSU2_TR(0x4ea5e1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ea5e4:{NFSU2_TR(0x4ea5e4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ea5f2;}}
}
B4ea5e6:L4ea5e6:{c.instructions+=2;NFSU2_TR(0x4ea5e6);
u8 U[8];
__builtin_memmove((U+0),gp(0x83aab4),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ea5ec:{NFSU2_TR(0x4ea5ec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ea612;}}
}
B4ea5ee:L4ea5ee:{c.instructions+=2;NFSU2_TR(0x4ea5ee);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea5f0:{NFSU2_TR(0x4ea5f0);
{goto L4ea61b;}
}
B4ea5f2:L4ea5f2:{c.instructions+=2;NFSU2_TR(0x4ea5f2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ea5f7:{NFSU2_TR(0x4ea5f7);
if(r1(R+518)){{goto L4ea5fd;}}
}
B4ea5f9:L4ea5f9:{c.instructions+=2;NFSU2_TR(0x4ea5f9);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ea5fb:{NFSU2_TR(0x4ea5fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ea612;}}
}
B4ea5fd:L4ea5fd:{c.instructions+=2;NFSU2_TR(0x4ea5fd);
u8 U[8];
__builtin_memmove((U+0),gp(0x850088),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ea603:{NFSU2_TR(0x4ea603);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ea612;}}
}
B4ea605:L4ea605:{c.instructions+=2;NFSU2_TR(0x4ea605);
w4(R+4,u32(0x89cf48ull));
}
B4ea60a:{NFSU2_TR(0x4ea60a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea60full));
TAIL_STATIC(0x5f01e0u,5f0);
}
B4ea60f:L4ea60f:{c.instructions+=2;NFSU2_TR(0x4ea60f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea610:{NFSU2_TR(0x4ea610);
{goto L4ea61b;}
}
B4ea612:L4ea612:{c.instructions+=3;NFSU2_TR(0x4ea612);
__builtin_memmove((R+0),gp(0x890118),4);
}
B4ea617:{NFSU2_TR(0x4ea617);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ea61a:{NFSU2_TR(0x4ea61a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea61b:L4ea61b:{c.instructions+=3;NFSU2_TR(0x4ea61b);
__builtin_memmove((R+4),(R+24),4);
}
B4ea61d:{NFSU2_TR(0x4ea61d);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea61f:{NFSU2_TR(0x4ea61f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea624ull));
TAIL_STATIC(0x4a4770u,4a4);
}
B4ea624:L4ea624:{c.instructions+=3;NFSU2_TR(0x4ea624);
__builtin_memmove((R+0),gp(0x850078),4);
}
B4ea629:{NFSU2_TR(0x4ea629);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ea62e:{NFSU2_TR(0x4ea62e);
if(r1(R+518)){{goto L4ea634;}}
}
B4ea630:L4ea630:{c.instructions+=2;NFSU2_TR(0x4ea630);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ea632:{NFSU2_TR(0x4ea632);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ea654;}}
}
B4ea634:L4ea634:{c.instructions+=2;NFSU2_TR(0x4ea634);
u8 U[8];
__builtin_memmove((U+0),gp(0x850088),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ea63a:{NFSU2_TR(0x4ea63a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ea654;}}
}
B4ea63c:L4ea63c:{c.instructions+=2;NFSU2_TR(0x4ea63c);
w4(R+4,u32(0x89cf48ull));
}
B4ea641:{NFSU2_TR(0x4ea641);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea646ull));
TAIL_STATIC(0x5fe4c0u,5fe);
}
B4ea646:L4ea646:{c.instructions+=3;NFSU2_TR(0x4ea646);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ea648:{NFSU2_TR(0x4ea648);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4ea64b:{NFSU2_TR(0x4ea64b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ea67d;}}
}
B4ea64d:L4ea64d:{c.instructions+=2;NFSU2_TR(0x4ea64d);
u8 U[4];
w4(U+0,u32(0x224936f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea652:{NFSU2_TR(0x4ea652);
{goto L4ea682;}
}
B4ea654:L4ea654:{c.instructions+=2;NFSU2_TR(0x4ea654);
w4(R+4,u32(0x83aab4ull));
}
B4ea659:{NFSU2_TR(0x4ea659);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea65eull));
TAIL_STATIC(0x5027b0u,502);
}
B4ea65e:L4ea65e:{c.instructions+=2;NFSU2_TR(0x4ea65e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ea660:{NFSU2_TR(0x4ea660);
if(r1(R+518)){{goto L4ea66c;}}
}
B4ea662:L4ea662:{c.instructions+=3;NFSU2_TR(0x4ea662);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4ea665:{NFSU2_TR(0x4ea665);
u8 U[4];
w4(U+0,u32(0x224936f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea66a:{NFSU2_TR(0x4ea66a);
{goto L4ea682;}
}
B4ea66c:L4ea66c:{c.instructions+=2;NFSU2_TR(0x4ea66c);
w4(R+4,u32(0x83a9d0ull));
}
B4ea671:{NFSU2_TR(0x4ea671);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea676ull));
TAIL_STATIC(0x503080u,503);
}
B4ea676:L4ea676:{c.instructions+=2;NFSU2_TR(0x4ea676);
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
B4ea678:{NFSU2_TR(0x4ea678);
if(r1(R+518)){{goto L4ea696;}}
}
B4ea67a:L4ea67a:{c.instructions+=1;NFSU2_TR(0x4ea67a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4ea67d:L4ea67d:{c.instructions+=1;NFSU2_TR(0x4ea67d);
u8 U[4];
w4(U+0,u32(0x23f359b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea682:L4ea682:{c.instructions+=1;NFSU2_TR(0x4ea682);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea687ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4ea687:L4ea687:{c.instructions+=4;NFSU2_TR(0x4ea687);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea688:{NFSU2_TR(0x4ea688);
u8 U[4];
w4(U+0,u32(0x797ba0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea68d:{NFSU2_TR(0x4ea68d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea68e:{NFSU2_TR(0x4ea68e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea693ull));
TAIL_STATIC(0x542600u,542);
}
B4ea693:L4ea693:{c.instructions+=1;NFSU2_TR(0x4ea693);
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
B4ea696:L4ea696:{c.instructions+=3;NFSU2_TR(0x4ea696);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ea697:{NFSU2_TR(0x4ea697);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ea698:{NFSU2_TR(0x4ea698);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ea6a0:L4ea6a0:{c.instructions+=5;NFSU2_TR(0x4ea6a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ea6a4:{NFSU2_TR(0x4ea6a4);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0xc98356baull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc98356baull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ea6a9:{NFSU2_TR(0x4ea6a9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea6aa:{NFSU2_TR(0x4ea6aa);
__builtin_memmove((R+24),(R+4),4);
}
B4ea6ac:{NFSU2_TR(0x4ea6ac);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4ea758;}}
}
B4ea6b2:L4ea6b2:{c.instructions+=1;NFSU2_TR(0x4ea6b2);
if(r1(R+518)){{goto L4ea6d9;}}
}
B4ea6b4:L4ea6b4:{c.instructions+=2;NFSU2_TR(0x4ea6b4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x406415e3ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ea6b9:{NFSU2_TR(0x4ea6b9);
if(r1(R+518)){{goto L4ea749;}}
}
B4ea6bf:L4ea6bf:{c.instructions+=2;NFSU2_TR(0x4ea6bf);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x911ab364ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x911ab364ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x911ab364ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4ea6c4:{NFSU2_TR(0x4ea6c4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ea783;}}
}
B4ea6ca:L4ea6ca:{c.instructions+=2;NFSU2_TR(0x4ea6ca);
__builtin_memmove((R+4),gp(0x8363dc),4);
}
B4ea6d0:{NFSU2_TR(0x4ea6d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea6d5ull));
TAIL_STATIC(0x4c0020u,4c0);
}
B4ea6d5:L4ea6d5:{c.instructions+=2;NFSU2_TR(0x4ea6d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ea6d6:{NFSU2_TR(0x4ea6d6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ea6d9:L4ea6d9:{c.instructions+=2;NFSU2_TR(0x4ea6d9);
w4(R+4,u32(0x89cf48ull));
}
B4ea6de:{NFSU2_TR(0x4ea6de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea6e3ull));
TAIL_STATIC(0x5f00f0u,5f0);
}
B4ea6e3:L4ea6e3:{c.instructions+=2;NFSU2_TR(0x4ea6e3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ea6e5:{NFSU2_TR(0x4ea6e5);
if(r1(R+518)){{goto L4ea700;}}
}
B4ea6e7:L4ea6e7:{c.instructions+=3;NFSU2_TR(0x4ea6e7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4ea6ea:{NFSU2_TR(0x4ea6ea);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ea6ec:{NFSU2_TR(0x4ea6ec);
if(r1(R+518)){{goto L4ea700;}}
}
B4ea6ee:L4ea6ee:{c.instructions+=3;NFSU2_TR(0x4ea6ee);
__builtin_memmove((R+4),gp(0x8363dc),4);
}
B4ea6f4:{NFSU2_TR(0x4ea6f4);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B4ea6f7:{NFSU2_TR(0x4ea6f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea6fcull));
TAIL_STATIC(0x4a3da0u,4a3);
}
B4ea6fc:L4ea6fc:{c.instructions+=2;NFSU2_TR(0x4ea6fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ea6fd:{NFSU2_TR(0x4ea6fd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ea700:L4ea700:{c.instructions+=5;NFSU2_TR(0x4ea700);
__builtin_memmove((R+0),gp(0x865198),4);
}
B4ea705:{NFSU2_TR(0x4ea705);
__builtin_memmove((R+4),gp(0x8363dc),4);
}
B4ea70b:{NFSU2_TR(0x4ea70b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea70c:{NFSU2_TR(0x4ea70c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B4ea70f:{NFSU2_TR(0x4ea70f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea714ull));
TAIL_STATIC(0x4e9210u,4e9);
}
B4ea714:L4ea714:{c.instructions+=3;NFSU2_TR(0x4ea714);
__builtin_memmove((R+0),gp(0x850078),4);
}
B4ea719:{NFSU2_TR(0x4ea719);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ea71e:{NFSU2_TR(0x4ea71e);
if(r1(R+518)){{goto L4ea725;}}
}
B4ea720:L4ea720:{c.instructions+=2;NFSU2_TR(0x4ea720);
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
B4ea723:{NFSU2_TR(0x4ea723);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ea783;}}
}
B4ea725:L4ea725:{c.instructions+=2;NFSU2_TR(0x4ea725);
u8 U[14];
__builtin_memmove((U+6),gp(0x850088),4);
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
B4ea72c:{NFSU2_TR(0x4ea72c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ea783;}}
}
B4ea72e:L4ea72e:{c.instructions+=2;NFSU2_TR(0x4ea72e);
w4(R+4,u32(0x89cf48ull));
}
B4ea733:{NFSU2_TR(0x4ea733);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea738ull));
TAIL_STATIC(0x5fe4c0u,5fe);
}
B4ea738:L4ea738:{c.instructions+=2;NFSU2_TR(0x4ea738);
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
B4ea73a:{NFSU2_TR(0x4ea73a);
if(r1(R+518)){{goto L4ea783;}}
}
B4ea73c:L4ea73c:{c.instructions+=3;NFSU2_TR(0x4ea73c);
__builtin_memmove((R+0),gp(0x89d05c),4);
}
B4ea741:{NFSU2_TR(0x4ea741);
u8 U[14];
__builtin_memmove((U+6),gp(0x8651ac),4);
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
B4ea747:{NFSU2_TR(0x4ea747);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4ea783;}}
}
B4ea749:L4ea749:{c.instructions+=2;NFSU2_TR(0x4ea749);
__builtin_memmove((R+4),gp(0x8363dc),4);
}
B4ea74f:{NFSU2_TR(0x4ea74f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea754ull));
TAIL_STATIC(0x4bff80u,4bf);
}
B4ea754:L4ea754:{c.instructions+=2;NFSU2_TR(0x4ea754);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ea755:{NFSU2_TR(0x4ea755);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ea758:L4ea758:{c.instructions+=2;NFSU2_TR(0x4ea758);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xeaacfeedull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xeaacfeedull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xeaacfeedull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4ea75d:{NFSU2_TR(0x4ea75d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ea783;}}
}
B4ea75f:L4ea75f:{c.instructions+=3;NFSU2_TR(0x4ea75f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea761:{NFSU2_TR(0x4ea761);
w4(R+4,u32(0x83a9d0ull));
}
B4ea766:{NFSU2_TR(0x4ea766);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea76bull));
TAIL_STATIC(0x502ff0u,502);
}
B4ea76b:L4ea76b:{c.instructions+=2;NFSU2_TR(0x4ea76b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea76c:{NFSU2_TR(0x4ea76c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea771ull));
TAIL_STATIC(0x50c8d0u,50c);
}
B4ea771:L4ea771:{c.instructions+=5;NFSU2_TR(0x4ea771);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B4ea777:{NFSU2_TR(0x4ea777);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ea77a:{NFSU2_TR(0x4ea77a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea77c:{NFSU2_TR(0x4ea77c);
u8 U[4];
w4(U+0,u32(0x15ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea77e:{NFSU2_TR(0x4ea77e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea783ull));
TAIL_STATIC(0x5f41e0u,5f4);
}
B4ea783:L4ea783:{c.instructions+=2;NFSU2_TR(0x4ea783);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ea784:{NFSU2_TR(0x4ea784);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ea790:L4ea790:{c.instructions+=15;NFSU2_TR(0x4ea790);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea792:{NFSU2_TR(0x4ea792);
u8 U[4];
w4(U+0,u32(0x776086ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea797:{NFSU2_TR(0x4ea797);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ea79d:{NFSU2_TR(0x4ea79d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea79e:{NFSU2_TR(0x4ea79e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ea7a5:{NFSU2_TR(0x4ea7a5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea7a6:{NFSU2_TR(0x4ea7a6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea7a7:{NFSU2_TR(0x4ea7a7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea7a8:{NFSU2_TR(0x4ea7a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4ea7ac:{NFSU2_TR(0x4ea7ac);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea7ad:{NFSU2_TR(0x4ea7ad);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea7ae:{NFSU2_TR(0x4ea7ae);
__builtin_memmove((R+24),(R+4),4);
}
B4ea7b0:{NFSU2_TR(0x4ea7b0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea7b1:{NFSU2_TR(0x4ea7b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ea7b5:{NFSU2_TR(0x4ea7b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea7baull));
TAIL_STATIC(0x552330u,552);
}
B4ea7ba:L4ea7ba:{c.instructions+=8;NFSU2_TR(0x4ea7ba);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4ea7bc:{NFSU2_TR(0x4ea7bc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ea7c2:{NFSU2_TR(0x4ea7c2);
__builtin_memmove((R+4),(R+28),4);
}
B4ea7c4:{NFSU2_TR(0x4ea7c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ea7c8:{NFSU2_TR(0x4ea7c8);
u8 U[4];
w4(U+0,u32(0x797bb4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4ea7ce:{NFSU2_TR(0x4ea7ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ea7d4:{NFSU2_TR(0x4ea7d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ea7da:{NFSU2_TR(0x4ea7da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea7dfull));
TAIL_STATIC(0x50db40u,50d);
}
B4ea7df:L4ea7df:{c.instructions+=10;NFSU2_TR(0x4ea7df);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ea7e2:{NFSU2_TR(0x4ea7e2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea7e4:{NFSU2_TR(0x4ea7e4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea7e6:{NFSU2_TR(0x4ea7e6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea7e8:{NFSU2_TR(0x4ea7e8);
u8 U[4];
w4(U+0,u32(0x7975a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea7ed:{NFSU2_TR(0x4ea7ed);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4ea7f3:{NFSU2_TR(0x4ea7f3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea7f4:{NFSU2_TR(0x4ea7f4);
__builtin_memmove((R+4),(R+12),4);
}
B4ea7f6:{NFSU2_TR(0x4ea7f6);
u8 U[5];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4ea7fb:{NFSU2_TR(0x4ea7fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea800ull));
TAIL_STATIC(0x542ac0u,542);
}
B4ea800:L4ea800:{c.instructions+=6;NFSU2_TR(0x4ea800);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x210ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ea80a:{NFSU2_TR(0x4ea80a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ea80d:{NFSU2_TR(0x4ea80d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4ea810:{NFSU2_TR(0x4ea810);
u8 U[4];
w4(U+0,u32(0x797598ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea815:{NFSU2_TR(0x4ea815);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ea81b:{NFSU2_TR(0x4ea81b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea820ull));
TAIL_STATIC(0x505450u,505);
}
B4ea820:L4ea820:{c.instructions+=3;NFSU2_TR(0x4ea820);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea821:{NFSU2_TR(0x4ea821);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea822:{NFSU2_TR(0x4ea822);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea827ull));
TAIL_STATIC(0x537a10u,537);
}
B4ea827:L4ea827:{c.instructions+=5;NFSU2_TR(0x4ea827);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4ea82a:{NFSU2_TR(0x4ea82a);
u8 U[4];
w4(U+0,u32(0xc00ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea82f:{NFSU2_TR(0x4ea82f);
__builtin_memmove((R+4),(R+28),4);
}
B4ea831:{NFSU2_TR(0x4ea831);
__builtin_memmove((R+20),(R+0),4);
}
B4ea833:{NFSU2_TR(0x4ea833);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea838ull));
TAIL_STATIC(0x50db80u,50d);
}
B4ea838:L4ea838:{c.instructions+=3;NFSU2_TR(0x4ea838);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ea83b:{NFSU2_TR(0x4ea83b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea83c:{NFSU2_TR(0x4ea83c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea841ull));
TAIL_STATIC(0x51bd70u,51b);
}
B4ea841:L4ea841:{c.instructions+=9;NFSU2_TR(0x4ea841);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ea844:{NFSU2_TR(0x4ea844);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea845:{NFSU2_TR(0x4ea845);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ea848:{NFSU2_TR(0x4ea848);
u8 U[4];
w4(U+0,u32(0x79758cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea84d:{NFSU2_TR(0x4ea84d);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea84f:{NFSU2_TR(0x4ea84f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea850:{NFSU2_TR(0x4ea850);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea851:{NFSU2_TR(0x4ea851);
__builtin_memmove((R+4),(R+28),4);
}
B4ea853:{NFSU2_TR(0x4ea853);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea858ull));
TAIL_STATIC(0x50dbb0u,50d);
}
B4ea858:L4ea858:{c.instructions+=3;NFSU2_TR(0x4ea858);
__builtin_memmove((R+4),(R+24),4);
}
B4ea85a:{NFSU2_TR(0x4ea85a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ea860:{NFSU2_TR(0x4ea860);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea865ull));
TAIL_STATIC(0x4c1530u,4c1);
}
B4ea865:L4ea865:{c.instructions+=9;NFSU2_TR(0x4ea865);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ea869:{NFSU2_TR(0x4ea869);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ea86a:{NFSU2_TR(0x4ea86a);
__builtin_memmove((R+0),(R+24),4);
}
B4ea86c:{NFSU2_TR(0x4ea86c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ea86d:{NFSU2_TR(0x4ea86d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4ea86e:{NFSU2_TR(0x4ea86e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4ea86f:{NFSU2_TR(0x4ea86f);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ea876:{NFSU2_TR(0x4ea876);
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
B4ea879:{NFSU2_TR(0x4ea879);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ea880:L4ea880:{c.instructions+=3;NFSU2_TR(0x4ea880);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea881:{NFSU2_TR(0x4ea881);
__builtin_memmove((R+24),(R+4),4);
}
B4ea883:{NFSU2_TR(0x4ea883);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea888ull));
{goto L4ea8a0;}
}
B4ea888:L4ea888:{c.instructions+=2;NFSU2_TR(0x4ea888);
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
B4ea88d:{NFSU2_TR(0x4ea88d);
if(r1(R+518)){{goto L4ea898;}}
}
B4ea88f:L4ea88f:{c.instructions+=2;NFSU2_TR(0x4ea88f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea890:{NFSU2_TR(0x4ea890);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea895ull));
TAIL_STATIC(0x575630u,575);
}
B4ea895:L4ea895:{c.instructions+=1;NFSU2_TR(0x4ea895);
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
B4ea898:L4ea898:{c.instructions+=3;NFSU2_TR(0x4ea898);
__builtin_memmove((R+0),(R+24),4);
}
B4ea89a:{NFSU2_TR(0x4ea89a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ea89b:{NFSU2_TR(0x4ea89b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ea8a0:L4ea8a0:{c.instructions+=13;NFSU2_TR(0x4ea8a0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea8a2:{NFSU2_TR(0x4ea8a2);
u8 U[4];
w4(U+0,u32(0x776178ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea8a7:{NFSU2_TR(0x4ea8a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ea8ad:{NFSU2_TR(0x4ea8ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea8ae:{NFSU2_TR(0x4ea8ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ea8b5:{NFSU2_TR(0x4ea8b5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea8b6:{NFSU2_TR(0x4ea8b6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea8b7:{NFSU2_TR(0x4ea8b7);
__builtin_memmove((R+24),(R+4),4);
}
B4ea8b9:{NFSU2_TR(0x4ea8b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ea8bd:{NFSU2_TR(0x4ea8bd);
u8 U[4];
w4(U+0,u32(0x797bb4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4ea8c3:{NFSU2_TR(0x4ea8c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4ea8c9:{NFSU2_TR(0x4ea8c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ea8d1:{NFSU2_TR(0x4ea8d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea8d6ull));
TAIL_STATIC(0x50db70u,50d);
}
B4ea8d6:L4ea8d6:{c.instructions+=3;NFSU2_TR(0x4ea8d6);
__builtin_memmove((R+4),(R+24),4);
}
B4ea8d8:{NFSU2_TR(0x4ea8d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ea8e0:{NFSU2_TR(0x4ea8e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea8e5ull));
TAIL_STATIC(0x4defb0u,4de);
}
B4ea8e5:L4ea8e5:{c.instructions+=5;NFSU2_TR(0x4ea8e5);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ea8e9:{NFSU2_TR(0x4ea8e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ea8ea:{NFSU2_TR(0x4ea8ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ea8f1:{NFSU2_TR(0x4ea8f1);
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
B4ea8f4:{NFSU2_TR(0x4ea8f4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ea900:L4ea900:{c.instructions+=16;NFSU2_TR(0x4ea900);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea901:{NFSU2_TR(0x4ea901);
__builtin_memmove((R+20),(R+16),4);
}
B4ea903:{NFSU2_TR(0x4ea903);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea905:{NFSU2_TR(0x4ea905);
u8 U[4];
w4(U+0,u32(0x776101ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea90a:{NFSU2_TR(0x4ea90a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ea910:{NFSU2_TR(0x4ea910);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea911:{NFSU2_TR(0x4ea911);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ea918:{NFSU2_TR(0x4ea918);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B4ea91b:{NFSU2_TR(0x4ea91b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ea91e:{NFSU2_TR(0x4ea91e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea91f:{NFSU2_TR(0x4ea91f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea920:{NFSU2_TR(0x4ea920);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea921:{NFSU2_TR(0x4ea921);
__builtin_memmove((R+24),(R+4),4);
}
B4ea923:{NFSU2_TR(0x4ea923);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea924:{NFSU2_TR(0x4ea924);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ea927:{NFSU2_TR(0x4ea927);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea92cull));
TAIL_STATIC(0x551de0u,551);
}
B4ea92c:L4ea92c:{c.instructions+=5;NFSU2_TR(0x4ea92c);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4ea92e:{NFSU2_TR(0x4ea92e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4ea931:{NFSU2_TR(0x4ea931);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ea934:{NFSU2_TR(0x4ea934);
u8 U[4];
w4(U+0,u32(0x7954c0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4ea93a:{NFSU2_TR(0x4ea93a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ea93full));
TAIL_STATIC(0x4c1960u,4c1);
}
B4ea93f:L4ea93f:{c.instructions+=36;NFSU2_TR(0x4ea93f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ea942:{NFSU2_TR(0x4ea942);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ea945:{NFSU2_TR(0x4ea945);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ea94b:{NFSU2_TR(0x4ea94b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x138ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4ea951:{NFSU2_TR(0x4ea951);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ea957:{NFSU2_TR(0x4ea957);
w4(R+0,u32(0x1ull));
}
B4ea95c:{NFSU2_TR(0x4ea95c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ea962:{NFSU2_TR(0x4ea962);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ea968:{NFSU2_TR(0x4ea968);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ea96e:{NFSU2_TR(0x4ea96e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ea974:{NFSU2_TR(0x4ea974);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ea97a:{NFSU2_TR(0x4ea97a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d8ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4ea980:{NFSU2_TR(0x4ea980);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ea986:{NFSU2_TR(0x4ea986);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ea98c:{NFSU2_TR(0x4ea98c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ecull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ea992:{NFSU2_TR(0x4ea992);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ea998:{NFSU2_TR(0x4ea998);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1fcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ea99e:{NFSU2_TR(0x4ea99e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f0ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4ea9a4:{NFSU2_TR(0x4ea9a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x200ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ea9aa:{NFSU2_TR(0x4ea9aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ea9b0:{NFSU2_TR(0x4ea9b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x204ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ea9b6:{NFSU2_TR(0x4ea9b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ea9bc:{NFSU2_TR(0x4ea9bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x210ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ea9c2:{NFSU2_TR(0x4ea9c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x214ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ea9c8:{NFSU2_TR(0x4ea9c8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x208ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4ea9ce:{NFSU2_TR(0x4ea9ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x218ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ea9d4:{NFSU2_TR(0x4ea9d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ea9da:{NFSU2_TR(0x4ea9da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x21cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ea9e0:{NFSU2_TR(0x4ea9e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x238ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ea9e6:{NFSU2_TR(0x4ea9e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ea9e9:{NFSU2_TR(0x4ea9e9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4ea9ef:{NFSU2_TR(0x4ea9ef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ea9f0:{NFSU2_TR(0x4ea9f0);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4ea9f4:{NFSU2_TR(0x4ea9f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ea9fa:{NFSU2_TR(0x4ea9fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eaa00:{NFSU2_TR(0x4eaa00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eaa05ull));
TAIL_STATIC(0x4c16c0u,4c1);
}
B4eaa05:L4eaa05:{c.instructions+=7;NFSU2_TR(0x4eaa05);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4eaa08:{NFSU2_TR(0x4eaa08);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4eaa0a:{NFSU2_TR(0x4eaa0a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4eaa0e:{NFSU2_TR(0x4eaa0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
w4(U+4,u32(0x18ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4eaa18:{NFSU2_TR(0x4eaa18);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x228ull))));
w4(U+4,u32(0x19ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4eaa22:{NFSU2_TR(0x4eaa22);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22cull))));
w4(U+4,u32(0x1aull));
s4(u32(r4(U+0)),r4(U+4));
}
B4eaa2c:{NFSU2_TR(0x4eaa2c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4eab4c;}}
}
B4eaa32:L4eaa32:{c.instructions+=4;NFSU2_TR(0x4eaa32);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4eaa35:{NFSU2_TR(0x4eaa35);
u8 U[4];
w4(U+0,u32(0x797c5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eaa3a:{NFSU2_TR(0x4eaa3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eaa3d:{NFSU2_TR(0x4eaa3d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eaa42ull));
TAIL_STATIC(0x505450u,505);
}
B4eaa42:L4eaa42:{c.instructions+=4;NFSU2_TR(0x4eaa42);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4eaa45:{NFSU2_TR(0x4eaa45);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eaa46:{NFSU2_TR(0x4eaa46);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eaa47:{NFSU2_TR(0x4eaa47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eaa4cull));
TAIL_STATIC(0x537a10u,537);
}
B4eaa4c:L4eaa4c:{c.instructions+=5;NFSU2_TR(0x4eaa4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eaa52:{NFSU2_TR(0x4eaa52);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4eaa55:{NFSU2_TR(0x4eaa55);
u8 U[4];
w4(U+0,u32(0x797c4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eaa5a:{NFSU2_TR(0x4eaa5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eaa5d:{NFSU2_TR(0x4eaa5d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eaa62ull));
TAIL_STATIC(0x505450u,505);
}
B4eaa62:L4eaa62:{c.instructions+=4;NFSU2_TR(0x4eaa62);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4eaa65:{NFSU2_TR(0x4eaa65);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eaa66:{NFSU2_TR(0x4eaa66);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eaa67:{NFSU2_TR(0x4eaa67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eaa6cull));
TAIL_STATIC(0x537a10u,537);
}
B4eaa6c:L4eaa6c:{c.instructions+=5;NFSU2_TR(0x4eaa6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4eaa6f:{NFSU2_TR(0x4eaa6f);
u8 U[4];
w4(U+0,u32(0x797c40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eaa74:{NFSU2_TR(0x4eaa74);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eaa7a:{NFSU2_TR(0x4eaa7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eaa7d:{NFSU2_TR(0x4eaa7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eaa82ull));
TAIL_STATIC(0x505450u,505);
}
B4eaa82:L4eaa82:{c.instructions+=4;NFSU2_TR(0x4eaa82);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eaa83:{NFSU2_TR(0x4eaa83);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4eaa86:{NFSU2_TR(0x4eaa86);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eaa87:{NFSU2_TR(0x4eaa87);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eaa8cull));
TAIL_STATIC(0x537a10u,537);
}
B4eaa8c:L4eaa8c:{c.instructions+=4;NFSU2_TR(0x4eaa8c);
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
B4eaa8f:{NFSU2_TR(0x4eaa8f);
w4(R+4,u32(0x83a9e0ull));
}
B4eaa94:{NFSU2_TR(0x4eaa94);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eaa9a:{NFSU2_TR(0x4eaa9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eaa9full));
TAIL_STATIC(0x502fd0u,502);
}
B4eaa9f:L4eaa9f:{c.instructions+=5;NFSU2_TR(0x4eaa9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4eaaa5:{NFSU2_TR(0x4eaaa5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eaaa6:{NFSU2_TR(0x4eaaa6);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eaaab:{NFSU2_TR(0x4eaaab);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eaaac:{NFSU2_TR(0x4eaaac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eaab1ull));
TAIL_STATIC(0x537be0u,537);
}
B4eaab1:L4eaab1:{c.instructions+=5;NFSU2_TR(0x4eaab1);
__builtin_memmove((R+8),gp(0x83ac34),4);
}
B4eaab7:{NFSU2_TR(0x4eaab7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4eaaba:{NFSU2_TR(0x4eaaba);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eaabb:{NFSU2_TR(0x4eaabb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eaabc:{NFSU2_TR(0x4eaabc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eaac1ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4eaac1:L4eaac1:{c.instructions+=6;NFSU2_TR(0x4eaac1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4eaac4:{NFSU2_TR(0x4eaac4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eaac5:{NFSU2_TR(0x4eaac5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4eaacb:{NFSU2_TR(0x4eaacb);
u8 U[4];
w4(U+0,u32(0x790980ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eaad0:{NFSU2_TR(0x4eaad0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eaad1:{NFSU2_TR(0x4eaad1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eaad6ull));
TAIL_STATIC(0x537be0u,537);
}
B4eaad6:L4eaad6:{c.instructions+=5;NFSU2_TR(0x4eaad6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4eaad9:{NFSU2_TR(0x4eaad9);
u8 U[4];
w4(U+0,u32(0x19598ef7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eaade:{NFSU2_TR(0x4eaade);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eaadf:{NFSU2_TR(0x4eaadf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eaae2:{NFSU2_TR(0x4eaae2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eaae7ull));
TAIL_STATIC(0x5379c0u,537);
}
B4eaae7:L4eaae7:{c.instructions+=6;NFSU2_TR(0x4eaae7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4eaaea:{NFSU2_TR(0x4eaaea);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4eaaed:{NFSU2_TR(0x4eaaed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eaaee:{NFSU2_TR(0x4eaaee);
u8 U[4];
w4(U+0,u32(0xcd20936bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eaaf3:{NFSU2_TR(0x4eaaf3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eaaf4:{NFSU2_TR(0x4eaaf4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eaaf9ull));
TAIL_STATIC(0x5379c0u,537);
}
B4eaaf9:L4eaaf9:{c.instructions+=4;NFSU2_TR(0x4eaaf9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4eaafc:{NFSU2_TR(0x4eaafc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eaafd:{NFSU2_TR(0x4eaafd);
__builtin_memmove((R+4),(R+28),4);
}
B4eaaff:{NFSU2_TR(0x4eaaff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eab04ull));
TAIL_STATIC(0x4a58c0u,4a5);
}
B4eab04:L4eab04:{c.instructions+=4;NFSU2_TR(0x4eab04);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4eab07:{NFSU2_TR(0x4eab07);
u8 U[4];
w4(U+0,u32(0xe3507743ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eab0c:{NFSU2_TR(0x4eab0c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eab0d:{NFSU2_TR(0x4eab0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eab12ull));
TAIL_STATIC(0x5379c0u,537);
}
B4eab12:L4eab12:{c.instructions+=5;NFSU2_TR(0x4eab12);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4eab15:{NFSU2_TR(0x4eab15);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eab16:{NFSU2_TR(0x4eab16);
u8 U[4];
w4(U+0,u32(0xc34fd0d6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eab1b:{NFSU2_TR(0x4eab1b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eab1c:{NFSU2_TR(0x4eab1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eab21ull));
TAIL_STATIC(0x5379c0u,537);
}
B4eab21:L4eab21:{c.instructions+=4;NFSU2_TR(0x4eab21);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4eab24:{NFSU2_TR(0x4eab24);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eab25:{NFSU2_TR(0x4eab25);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4eab2b:{NFSU2_TR(0x4eab2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eab30ull));
TAIL_STATIC(0x4a58c0u,4a5);
}
B4eab30:L4eab30:{c.instructions+=4;NFSU2_TR(0x4eab30);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4eab33:{NFSU2_TR(0x4eab33);
u8 U[4];
w4(U+0,u32(0x595086e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eab38:{NFSU2_TR(0x4eab38);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eab39:{NFSU2_TR(0x4eab39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eab3eull));
TAIL_STATIC(0x5379c0u,537);
}
B4eab3e:L4eab3e:{c.instructions+=4;NFSU2_TR(0x4eab3e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4eab41:{NFSU2_TR(0x4eab41);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eab42:{NFSU2_TR(0x4eab42);
u8 U[4];
w4(U+0,u32(0xd178b58ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eab47:{NFSU2_TR(0x4eab47);
{goto L4eac69;}
}
B4eab4c:L4eab4c:{c.instructions+=2;NFSU2_TR(0x4eab4c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4eab4f:{NFSU2_TR(0x4eab4f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4eac7e;}}
}
B4eab55:L4eab55:{c.instructions+=4;NFSU2_TR(0x4eab55);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4eab58:{NFSU2_TR(0x4eab58);
u8 U[4];
w4(U+0,u32(0x797c34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eab5d:{NFSU2_TR(0x4eab5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eab60:{NFSU2_TR(0x4eab60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eab65ull));
TAIL_STATIC(0x505450u,505);
}
B4eab65:L4eab65:{c.instructions+=4;NFSU2_TR(0x4eab65);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eab66:{NFSU2_TR(0x4eab66);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4eab69:{NFSU2_TR(0x4eab69);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eab6a:{NFSU2_TR(0x4eab6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eab6full));
TAIL_STATIC(0x537a10u,537);
}
B4eab6f:L4eab6f:{c.instructions+=5;NFSU2_TR(0x4eab6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4eab72:{NFSU2_TR(0x4eab72);
u8 U[4];
w4(U+0,u32(0x797c24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eab77:{NFSU2_TR(0x4eab77);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eab7d:{NFSU2_TR(0x4eab7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eab80:{NFSU2_TR(0x4eab80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eab85ull));
TAIL_STATIC(0x505450u,505);
}
B4eab85:L4eab85:{c.instructions+=4;NFSU2_TR(0x4eab85);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4eab88:{NFSU2_TR(0x4eab88);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eab89:{NFSU2_TR(0x4eab89);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eab8a:{NFSU2_TR(0x4eab8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eab8full));
TAIL_STATIC(0x537a10u,537);
}
B4eab8f:L4eab8f:{c.instructions+=5;NFSU2_TR(0x4eab8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eab95:{NFSU2_TR(0x4eab95);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4eab98:{NFSU2_TR(0x4eab98);
u8 U[4];
w4(U+0,u32(0x797c18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eab9d:{NFSU2_TR(0x4eab9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eaba0:{NFSU2_TR(0x4eaba0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eaba5ull));
TAIL_STATIC(0x505450u,505);
}
B4eaba5:L4eaba5:{c.instructions+=4;NFSU2_TR(0x4eaba5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4eaba8:{NFSU2_TR(0x4eaba8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eaba9:{NFSU2_TR(0x4eaba9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eabaa:{NFSU2_TR(0x4eabaa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eabafull));
TAIL_STATIC(0x537a10u,537);
}
B4eabaf:L4eabaf:{c.instructions+=4;NFSU2_TR(0x4eabaf);
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
B4eabb2:{NFSU2_TR(0x4eabb2);
w4(R+4,u32(0x84552cull));
}
B4eabb7:{NFSU2_TR(0x4eabb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eabbd:{NFSU2_TR(0x4eabbd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eabc2ull));
TAIL_STATIC(0x502fd0u,502);
}
B4eabc2:L4eabc2:{c.instructions+=5;NFSU2_TR(0x4eabc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4eabc8:{NFSU2_TR(0x4eabc8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eabc9:{NFSU2_TR(0x4eabc9);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eabce:{NFSU2_TR(0x4eabce);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eabcf:{NFSU2_TR(0x4eabcf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eabd4ull));
TAIL_STATIC(0x537be0u,537);
}
B4eabd4:L4eabd4:{c.instructions+=5;NFSU2_TR(0x4eabd4);
__builtin_memmove((R+0),gp(0x845780),4);
}
B4eabd9:{NFSU2_TR(0x4eabd9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4eabdc:{NFSU2_TR(0x4eabdc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eabdd:{NFSU2_TR(0x4eabdd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eabde:{NFSU2_TR(0x4eabde);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eabe3ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4eabe3:L4eabe3:{c.instructions+=6;NFSU2_TR(0x4eabe3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4eabe9:{NFSU2_TR(0x4eabe9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4eabec:{NFSU2_TR(0x4eabec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eabed:{NFSU2_TR(0x4eabed);
u8 U[4];
w4(U+0,u32(0x790980ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eabf2:{NFSU2_TR(0x4eabf2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eabf3:{NFSU2_TR(0x4eabf3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eabf8ull));
TAIL_STATIC(0x537be0u,537);
}
B4eabf8:L4eabf8:{c.instructions+=5;NFSU2_TR(0x4eabf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4eabfb:{NFSU2_TR(0x4eabfb);
u8 U[4];
w4(U+0,u32(0x19598ef8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eac00:{NFSU2_TR(0x4eac00);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eac01:{NFSU2_TR(0x4eac01);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eac04:{NFSU2_TR(0x4eac04);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eac09ull));
TAIL_STATIC(0x5379c0u,537);
}
B4eac09:L4eac09:{c.instructions+=6;NFSU2_TR(0x4eac09);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4eac0c:{NFSU2_TR(0x4eac0c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4eac0f:{NFSU2_TR(0x4eac0f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eac10:{NFSU2_TR(0x4eac10);
u8 U[4];
w4(U+0,u32(0xcd20936cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eac15:{NFSU2_TR(0x4eac15);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eac16:{NFSU2_TR(0x4eac16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eac1bull));
TAIL_STATIC(0x5379c0u,537);
}
B4eac1b:L4eac1b:{c.instructions+=4;NFSU2_TR(0x4eac1b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4eac1e:{NFSU2_TR(0x4eac1e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eac1f:{NFSU2_TR(0x4eac1f);
__builtin_memmove((R+4),(R+28),4);
}
B4eac21:{NFSU2_TR(0x4eac21);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eac26ull));
TAIL_STATIC(0x4a58c0u,4a5);
}
B4eac26:L4eac26:{c.instructions+=4;NFSU2_TR(0x4eac26);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4eac29:{NFSU2_TR(0x4eac29);
u8 U[4];
w4(U+0,u32(0xe3507744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eac2e:{NFSU2_TR(0x4eac2e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eac2f:{NFSU2_TR(0x4eac2f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eac34ull));
TAIL_STATIC(0x5379c0u,537);
}
B4eac34:L4eac34:{c.instructions+=5;NFSU2_TR(0x4eac34);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4eac37:{NFSU2_TR(0x4eac37);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eac38:{NFSU2_TR(0x4eac38);
u8 U[4];
w4(U+0,u32(0xc34fd0d7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eac3d:{NFSU2_TR(0x4eac3d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eac3e:{NFSU2_TR(0x4eac3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eac43ull));
TAIL_STATIC(0x5379c0u,537);
}
B4eac43:L4eac43:{c.instructions+=4;NFSU2_TR(0x4eac43);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4eac46:{NFSU2_TR(0x4eac46);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eac47:{NFSU2_TR(0x4eac47);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4eac4d:{NFSU2_TR(0x4eac4d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eac52ull));
TAIL_STATIC(0x4a58c0u,4a5);
}
B4eac52:L4eac52:{c.instructions+=4;NFSU2_TR(0x4eac52);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4eac55:{NFSU2_TR(0x4eac55);
u8 U[4];
w4(U+0,u32(0x595086e5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eac5a:{NFSU2_TR(0x4eac5a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eac5b:{NFSU2_TR(0x4eac5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eac60ull));
TAIL_STATIC(0x5379c0u,537);
}
B4eac60:L4eac60:{c.instructions+=3;NFSU2_TR(0x4eac60);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4eac63:{NFSU2_TR(0x4eac63);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eac64:{NFSU2_TR(0x4eac64);
u8 U[4];
w4(U+0,u32(0xd178b59ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eac69:L4eac69:{c.instructions+=2;NFSU2_TR(0x4eac69);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eac6a:{NFSU2_TR(0x4eac6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eac6full));
TAIL_STATIC(0x5379c0u,537);
}
B4eac6f:L4eac6f:{c.instructions+=4;NFSU2_TR(0x4eac6f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4eac72:{NFSU2_TR(0x4eac72);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x208ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4eac78:{NFSU2_TR(0x4eac78);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eac79:{NFSU2_TR(0x4eac79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eac7eull));
TAIL_STATIC(0x4a58c0u,4a5);
}
B4eac7e:L4eac7e:{c.instructions+=2;NFSU2_TR(0x4eac7e);
u8 U[4];
w4(U+0,u32(0x2cf0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eac83:{NFSU2_TR(0x4eac83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eac88ull));
TAIL_STATIC(0x575620u,575);
}
B4eac88:L4eac88:{c.instructions+=5;NFSU2_TR(0x4eac88);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4eac8b:{NFSU2_TR(0x4eac8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eac8e:{NFSU2_TR(0x4eac8e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4eac90:{NFSU2_TR(0x4eac90);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(U+4,u8(0x3ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4eac94:{NFSU2_TR(0x4eac94);
if(r1(R+518)){{goto L4eaca6;}}
}
B4eac96:L4eac96:{c.instructions+=4;NFSU2_TR(0x4eac96);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4eac9c:{NFSU2_TR(0x4eac9c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eac9d:{NFSU2_TR(0x4eac9d);
__builtin_memmove((R+4),(R+0),4);
}
B4eac9f:{NFSU2_TR(0x4eac9f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eaca4ull));
TAIL_STATIC(0x4c1730u,4c1);
}
B4eaca4:L4eaca4:{c.instructions+=1;NFSU2_TR(0x4eaca4);
{goto L4eaca8;}
}
B4eaca6:L4eaca6:{c.instructions+=1;NFSU2_TR(0x4eaca6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4eaca8:L4eaca8:{c.instructions+=8;NFSU2_TR(0x4eaca8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4eacae:{NFSU2_TR(0x4eacae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x234ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eacb4:{NFSU2_TR(0x4eacb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4eacb7:{NFSU2_TR(0x4eacb7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eacb8:{NFSU2_TR(0x4eacb8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eacb9:{NFSU2_TR(0x4eacb9);
__builtin_memmove((R+4),(R+24),4);
}
B4eacbb:{NFSU2_TR(0x4eacbb);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4eacbf:{NFSU2_TR(0x4eacbf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eacc4ull));
TAIL_STATIC(0x4d8c70u,4d8);
}
B4eacc4:L4eacc4:{c.instructions+=16;NFSU2_TR(0x4eacc4);
w4(R+0,u32(0x1ull));
}
B4eacc9:{NFSU2_TR(0x4eacc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eaccf:{NFSU2_TR(0x4eaccf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eacd5:{NFSU2_TR(0x4eacd5);
s4(0x8363f0,u32(0x0ull));
}
B4eacdf:{NFSU2_TR(0x4eacdf);
w4(R+28,u32(0x2ull));
}
B4eace4:{NFSU2_TR(0x4eace4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eace7:{NFSU2_TR(0x4eace7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x140ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eaced:{NFSU2_TR(0x4eaced);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x144ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eacf3:{NFSU2_TR(0x4eacf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x148ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eacf9:{NFSU2_TR(0x4eacf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eacff:{NFSU2_TR(0x4eacff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ead05:{NFSU2_TR(0x4ead05);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x174ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ead0b:{NFSU2_TR(0x4ead0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ead11:{NFSU2_TR(0x4ead11);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x178ull))));
w4(U+4,u32(0x41200000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ead1b:{NFSU2_TR(0x4ead1b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x194ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4ead21:{NFSU2_TR(0x4ead21);
w4(R+4,u32(0x4ull));
}
B4ead26:L4ead26:{c.instructions+=6;NFSU2_TR(0x4ead26);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ead29:{NFSU2_TR(0x4ead29);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4ead2b:{NFSU2_TR(0x4ead2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ead2e:{NFSU2_TR(0x4ead2e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B4ead31:{NFSU2_TR(0x4ead31);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B4ead32:{NFSU2_TR(0x4ead32);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ead26u);}goto L4ead26;}}
}
B4ead34:L4ead34:{c.instructions+=2;NFSU2_TR(0x4ead34);
u8 U[4];
w4(U+0,u32(0xb80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ead39:{NFSU2_TR(0x4ead39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ead3eull));
TAIL_STATIC(0x575620u,575);
}
B4ead3e:L4ead3e:{c.instructions+=5;NFSU2_TR(0x4ead3e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ead41:{NFSU2_TR(0x4ead41);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ead44:{NFSU2_TR(0x4ead44);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ead46:{NFSU2_TR(0x4ead46);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(U+4,u8(0x4ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4ead4a:{NFSU2_TR(0x4ead4a);
if(r1(R+518)){{goto L4ead5d;}}
}
B4ead4c:L4ead4c:{c.instructions+=5;NFSU2_TR(0x4ead4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ead52:{NFSU2_TR(0x4ead52);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ead53:{NFSU2_TR(0x4ead53);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ead54:{NFSU2_TR(0x4ead54);
__builtin_memmove((R+4),(R+0),4);
}
B4ead56:{NFSU2_TR(0x4ead56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ead5bull));
TAIL_STATIC(0x63b850u,63b);
}
B4ead5b:L4ead5b:{c.instructions+=1;NFSU2_TR(0x4ead5b);
{goto L4ead5f;}
}
B4ead5d:L4ead5d:{c.instructions+=1;NFSU2_TR(0x4ead5d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4ead5f:L4ead5f:{c.instructions+=5;NFSU2_TR(0x4ead5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ead62:{NFSU2_TR(0x4ead62);
u8 U[4];
w4(U+0,u32(0xb80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ead67:{NFSU2_TR(0x4ead67);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4ead6b:{NFSU2_TR(0x4ead6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb78ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ead71:{NFSU2_TR(0x4ead71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ead76ull));
TAIL_STATIC(0x575620u,575);
}
B4ead76:L4ead76:{c.instructions+=5;NFSU2_TR(0x4ead76);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ead79:{NFSU2_TR(0x4ead79);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ead7c:{NFSU2_TR(0x4ead7c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ead7e:{NFSU2_TR(0x4ead7e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(U+4,u8(0x5ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4ead82:{NFSU2_TR(0x4ead82);
if(r1(R+518)){{goto L4ead95;}}
}
B4ead84:L4ead84:{c.instructions+=5;NFSU2_TR(0x4ead84);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ead8a:{NFSU2_TR(0x4ead8a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ead8b:{NFSU2_TR(0x4ead8b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ead8c:{NFSU2_TR(0x4ead8c);
__builtin_memmove((R+4),(R+0),4);
}
B4ead8e:{NFSU2_TR(0x4ead8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ead93ull));
TAIL_STATIC(0x63b850u,63b);
}
B4ead93:L4ead93:{c.instructions+=1;NFSU2_TR(0x4ead93);
{goto L4ead97;}
}
B4ead95:L4ead95:{c.instructions+=1;NFSU2_TR(0x4ead95);
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
B4ead97:L4ead97:{c.instructions+=5;NFSU2_TR(0x4ead97);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ead9a:{NFSU2_TR(0x4ead9a);
w4(R+28,u32(0x1ull));
}
B4ead9f:{NFSU2_TR(0x4ead9f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4eada3:{NFSU2_TR(0x4eada3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb78ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eada9:{NFSU2_TR(0x4eada9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eadaeull));
TAIL_STATIC(0x510c30u,510);
}
B4eadae:L4eadae:{c.instructions+=2;NFSU2_TR(0x4eadae);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4eadb0:{NFSU2_TR(0x4eadb0);
if(r1(R+518)){{goto L4eae1e;}}
}
B4eadb2:L4eadb2:{c.instructions+=3;NFSU2_TR(0x4eadb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x234ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4eadb8:{NFSU2_TR(0x4eadb8);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4eadbe:{NFSU2_TR(0x4eadbe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4eadde;}}
}
B4eadc0:L4eadc0:{c.instructions+=1;NFSU2_TR(0x4eadc0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eadc5ull));
TAIL_STATIC(0x57ef60u,57e);
}
B4eadc5:L4eadc5:{c.instructions+=2;NFSU2_TR(0x4eadc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x234ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4eadcb:{NFSU2_TR(0x4eadcb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eadd0ull));
TAIL_STATIC(0x4d8180u,4d8);
}
B4eadd0:L4eadd0:{c.instructions+=3;NFSU2_TR(0x4eadd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x234ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4eadd6:{NFSU2_TR(0x4eadd6);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4eaddc:{NFSU2_TR(0x4eaddc);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4eadc0u);}goto L4eadc0;}}
}
B4eadde:L4eadde:{c.instructions+=2;NFSU2_TR(0x4eadde);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x234ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4eade4:{NFSU2_TR(0x4eade4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eade9ull));
TAIL_STATIC(0x4d8220u,4d8);
}
B4eade9:L4eade9:{c.instructions+=3;NFSU2_TR(0x4eade9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x234ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4eadef:{NFSU2_TR(0x4eadef);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4eadf5:{NFSU2_TR(0x4eadf5);
if(r1(R+518)){{goto L4eadfc;}}
}
B4eadf7:L4eadf7:{c.instructions+=2;NFSU2_TR(0x4eadf7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B4eadfa:{NFSU2_TR(0x4eadfa);
{goto L4eadfe;}
}
B4eadfc:L4eadfc:{c.instructions+=1;NFSU2_TR(0x4eadfc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4eadfe:L4eadfe:{c.instructions+=4;NFSU2_TR(0x4eadfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4eae01:{NFSU2_TR(0x4eae01);
u8 U[16];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B4eae05:{NFSU2_TR(0x4eae05);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eae06:{NFSU2_TR(0x4eae06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eae0bull));
TAIL_STATIC(0x63a650u,63a);
}
B4eae0b:L4eae0b:{c.instructions+=4;NFSU2_TR(0x4eae0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4eae0e:{NFSU2_TR(0x4eae0e);
u8 U[16];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B4eae12:{NFSU2_TR(0x4eae12);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x144ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4eae18:{NFSU2_TR(0x4eae18);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb78ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eae1e:L4eae1e:{c.instructions+=2;NFSU2_TR(0x4eae1e);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4eae24:{NFSU2_TR(0x4eae24);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4eae72;}}
}
B4eae26:L4eae26:{c.instructions+=2;NFSU2_TR(0x4eae26);
u8 U[8];
__builtin_memmove((U+0),gp(0x863444),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4eae2c:{NFSU2_TR(0x4eae2c);
if(r1(R+518)){{goto L4eae6b;}}
}
B4eae2e:L4eae2e:{c.instructions+=3;NFSU2_TR(0x4eae2e);
__builtin_memmove((R+0),gp(0x86344c),4);
}
B4eae33:{NFSU2_TR(0x4eae33);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4eae35:{NFSU2_TR(0x4eae35);
if(r1(R+518)){{goto L4eae6b;}}
}
B4eae37:L4eae37:{c.instructions+=6;NFSU2_TR(0x4eae37);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
}
B4eae3a:{NFSU2_TR(0x4eae3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eae3d:{NFSU2_TR(0x4eae3d);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B4eae40:{NFSU2_TR(0x4eae40);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0xffffffffull))));
}
B4eae43:{NFSU2_TR(0x4eae43);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4eae45:{NFSU2_TR(0x4eae45);
if(r1(R+518)){{goto L4eae81;}}
}
B4eae47:L4eae47:{c.instructions+=2;NFSU2_TR(0x4eae47);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x2eull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4eae49:{NFSU2_TR(0x4eae49);
if(r1(R+518)){{goto L4eae81;}}
}
B4eae4b:L4eae4b:{c.instructions+=2;NFSU2_TR(0x4eae4b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eae4c:{NFSU2_TR(0x4eae4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eae51ull));
TAIL_STATIC(0x505300u,505);
}
B4eae51:L4eae51:{c.instructions+=10;NFSU2_TR(0x4eae51);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0x21ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B4eae54:{NFSU2_TR(0x4eae54);
w4(R+0,u32(r1(R+0)));
}
B4eae57:{NFSU2_TR(0x4eae57);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B4eae59:{NFSU2_TR(0x4eae59);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4eae5c:{NFSU2_TR(0x4eae5c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4eae5f:{NFSU2_TR(0x4eae5f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4eae60:{NFSU2_TR(0x4eae60);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eae63:{NFSU2_TR(0x4eae63);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+0),(U+0),1);
}
B4eae65:{NFSU2_TR(0x4eae65);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4eae67:{NFSU2_TR(0x4eae67);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4eae47u);}goto L4eae47;}}
}
B4eae69:L4eae69:{c.instructions+=1;NFSU2_TR(0x4eae69);
{goto L4eae81;}
}
B4eae6b:L4eae6b:{c.instructions+=2;NFSU2_TR(0x4eae6b);
u8 U[4];
w4(U+0,u32(0x789de8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eae70:{NFSU2_TR(0x4eae70);
{goto L4eae77;}
}
B4eae72:L4eae72:{c.instructions+=1;NFSU2_TR(0x4eae72);
u8 U[4];
w4(U+0,u32(0x78eafcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eae77:L4eae77:{c.instructions+=1;NFSU2_TR(0x4eae77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eae7cull));
TAIL_STATIC(0x43db50u,43d);
}
B4eae7c:L4eae7c:{c.instructions+=2;NFSU2_TR(0x4eae7c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4eae7f:{NFSU2_TR(0x4eae7f);
__builtin_memmove((R+28),(R+0),4);
}
B4eae81:L4eae81:{c.instructions+=2;NFSU2_TR(0x4eae81);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eae82:{NFSU2_TR(0x4eae82);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eae87ull));
TAIL_STATIC(0x48a2d0u,48a);
}
B4eae87:L4eae87:{c.instructions+=4;NFSU2_TR(0x4eae87);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4eae8a:{NFSU2_TR(0x4eae8a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4eae8d:{NFSU2_TR(0x4eae8d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4eae8f:{NFSU2_TR(0x4eae8f);
if(r1(R+518)){{goto L4eae97;}}
}
B4eae91:L4eae91:{c.instructions+=1;NFSU2_TR(0x4eae91);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x904ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eae97:L4eae97:{c.instructions+=3;NFSU2_TR(0x4eae97);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4eae9a:{NFSU2_TR(0x4eae9a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4eae9c:{NFSU2_TR(0x4eae9c);
if(r1(R+518)){{goto L4eaea4;}}
}
B4eae9e:L4eae9e:{c.instructions+=1;NFSU2_TR(0x4eae9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x904ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eaea4:L4eaea4:{c.instructions+=3;NFSU2_TR(0x4eaea4);
u8 U[4];
w4(U+0,u32(0x160ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eaea9:{NFSU2_TR(0x4eaea9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eaeac:{NFSU2_TR(0x4eaeac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eaeb1ull));
TAIL_STATIC(0x575620u,575);
}
B4eaeb1:L4eaeb1:{c.instructions+=5;NFSU2_TR(0x4eaeb1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4eaeb4:{NFSU2_TR(0x4eaeb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eaeb7:{NFSU2_TR(0x4eaeb7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4eaeb9:{NFSU2_TR(0x4eaeb9);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(U+4,u8(0x6ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4eaebd:{NFSU2_TR(0x4eaebd);
if(r1(R+518)){{goto L4eaecf;}}
}
B4eaebf:L4eaebf:{c.instructions+=4;NFSU2_TR(0x4eaebf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4eaec5:{NFSU2_TR(0x4eaec5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eaec6:{NFSU2_TR(0x4eaec6);
__builtin_memmove((R+4),(R+0),4);
}
B4eaec8:{NFSU2_TR(0x4eaec8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eaecdull));
TAIL_STATIC(0x44cc30u,44c);
}
B4eaecd:L4eaecd:{c.instructions+=1;NFSU2_TR(0x4eaecd);
{goto L4eaed1;}
}
B4eaecf:L4eaecf:{c.instructions+=1;NFSU2_TR(0x4eaecf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4eaed1:L4eaed1:{c.instructions+=26;NFSU2_TR(0x4eaed1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4eaed7:{NFSU2_TR(0x4eaed7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eaedd:{NFSU2_TR(0x4eaedd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B4eaee0:{NFSU2_TR(0x4eaee0);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B4eaee3:{NFSU2_TR(0x4eaee3);
u8 U[6];
w1(R+512,carry<u32>(r4(R+28),u32(0x7f6088ull)));
w1(R+523,scarry<u32>(r4(R+28),u32(0x7f6088ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x7f6088ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4eaee9:{NFSU2_TR(0x4eaee9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4eaeec:{NFSU2_TR(0x4eaeec);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4eaeef:{NFSU2_TR(0x4eaeef);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eaef0:{NFSU2_TR(0x4eaef0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4eaef3:{NFSU2_TR(0x4eaef3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eaef4:{NFSU2_TR(0x4eaef4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4eaef7:{NFSU2_TR(0x4eaef7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eaef8:{NFSU2_TR(0x4eaef8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4eaefb:{NFSU2_TR(0x4eaefb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eaefc:{NFSU2_TR(0x4eaefc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4eaeff:{NFSU2_TR(0x4eaeff);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eaf00:{NFSU2_TR(0x4eaf00);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4eaf03:{NFSU2_TR(0x4eaf03);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eaf04:{NFSU2_TR(0x4eaf04);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4eaf07:{NFSU2_TR(0x4eaf07);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eaf08:{NFSU2_TR(0x4eaf08);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4eaf0b:{NFSU2_TR(0x4eaf0b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eaf0c:{NFSU2_TR(0x4eaf0c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eaf0d:{NFSU2_TR(0x4eaf0d);
__builtin_memmove((R+4),(R+0),4);
}
B4eaf0f:{NFSU2_TR(0x4eaf0f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4eaf13:{NFSU2_TR(0x4eaf13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eaf18ull));
TAIL_STATIC(0x445500u,445);
}
B4eaf18:L4eaf18:{c.instructions+=10;NFSU2_TR(0x4eaf18);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4eaf1b:{NFSU2_TR(0x4eaf1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x274ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eaf21:{NFSU2_TR(0x4eaf21);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4eaf24:{NFSU2_TR(0x4eaf24);
__builtin_memmove(gp(0x7f45a4),(R+4),4);
}
B4eaf2a:{NFSU2_TR(0x4eaf2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4eaf30:{NFSU2_TR(0x4eaf30);
w4(R+28,u32(0x1ull));
}
B4eaf35:{NFSU2_TR(0x4eaf35);
u8 U[4];
w4(U+0,u32(0x7906b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eaf3a:{NFSU2_TR(0x4eaf3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eaf40:{NFSU2_TR(0x4eaf40);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x240ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eaf46:{NFSU2_TR(0x4eaf46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eaf4bull));
TAIL_STATIC(0x43db50u,43d);
}
B4eaf4b:L4eaf4b:{c.instructions+=4;NFSU2_TR(0x4eaf4b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4eaf4e:{NFSU2_TR(0x4eaf4e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eaf4f:{NFSU2_TR(0x4eaf4f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4eaf52:{NFSU2_TR(0x4eaf52);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eaf57ull));
TAIL_STATIC(0x493600u,493);
}
B4eaf57:L4eaf57:{c.instructions+=2;NFSU2_TR(0x4eaf57);
u8 U[4];
w4(U+0,u32(0x7906a4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eaf5c:{NFSU2_TR(0x4eaf5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eaf61ull));
TAIL_STATIC(0x43db50u,43d);
}
B4eaf61:L4eaf61:{c.instructions+=4;NFSU2_TR(0x4eaf61);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4eaf64:{NFSU2_TR(0x4eaf64);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eaf65:{NFSU2_TR(0x4eaf65);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4eaf6b:{NFSU2_TR(0x4eaf6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eaf70ull));
TAIL_STATIC(0x493600u,493);
}
B4eaf70:L4eaf70:{c.instructions+=2;NFSU2_TR(0x4eaf70);
u8 U[4];
w4(U+0,u32(0x79069cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eaf75:{NFSU2_TR(0x4eaf75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eaf7aull));
TAIL_STATIC(0x43db50u,43d);
}
B4eaf7a:L4eaf7a:{c.instructions+=4;NFSU2_TR(0x4eaf7a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4eaf7d:{NFSU2_TR(0x4eaf7d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eaf7e:{NFSU2_TR(0x4eaf7e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4eaf84:{NFSU2_TR(0x4eaf84);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eaf89ull));
TAIL_STATIC(0x493600u,493);
}
B4eaf89:L4eaf89:{c.instructions+=2;NFSU2_TR(0x4eaf89);
u8 U[4];
w4(U+0,u32(0x790694ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eaf8e:{NFSU2_TR(0x4eaf8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eaf93ull));
TAIL_STATIC(0x43db50u,43d);
}
B4eaf93:L4eaf93:{c.instructions+=4;NFSU2_TR(0x4eaf93);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4eaf96:{NFSU2_TR(0x4eaf96);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eaf97:{NFSU2_TR(0x4eaf97);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4eaf9d:{NFSU2_TR(0x4eaf9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eafa2ull));
TAIL_STATIC(0x493600u,493);
}
B4eafa2:L4eafa2:{c.instructions+=2;NFSU2_TR(0x4eafa2);
u8 U[4];
w4(U+0,u32(0x79068cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eafa7:{NFSU2_TR(0x4eafa7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eafacull));
TAIL_STATIC(0x43db50u,43d);
}
B4eafac:L4eafac:{c.instructions+=4;NFSU2_TR(0x4eafac);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4eafaf:{NFSU2_TR(0x4eafaf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eafb0:{NFSU2_TR(0x4eafb0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4eafb6:{NFSU2_TR(0x4eafb6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eafbbull));
TAIL_STATIC(0x493600u,493);
}
B4eafbb:L4eafbb:{c.instructions+=2;NFSU2_TR(0x4eafbb);
u8 U[4];
w4(U+0,u32(0x797c10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eafc0:{NFSU2_TR(0x4eafc0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eafc5ull));
TAIL_STATIC(0x43db50u,43d);
}
B4eafc5:L4eafc5:{c.instructions+=4;NFSU2_TR(0x4eafc5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4eafc8:{NFSU2_TR(0x4eafc8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eafc9:{NFSU2_TR(0x4eafc9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4eafcf:{NFSU2_TR(0x4eafcf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eafd4ull));
TAIL_STATIC(0x493600u,493);
}
B4eafd4:L4eafd4:{c.instructions+=2;NFSU2_TR(0x4eafd4);
u8 U[4];
w4(U+0,u32(0x79067cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eafd9:{NFSU2_TR(0x4eafd9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eafdeull));
TAIL_STATIC(0x43db50u,43d);
}
B4eafde:L4eafde:{c.instructions+=4;NFSU2_TR(0x4eafde);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4eafe1:{NFSU2_TR(0x4eafe1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eafe2:{NFSU2_TR(0x4eafe2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4eafe8:{NFSU2_TR(0x4eafe8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eafedull));
TAIL_STATIC(0x493600u,493);
}
B4eafed:L4eafed:{c.instructions+=5;NFSU2_TR(0x4eafed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4eaff4:{NFSU2_TR(0x4eaff4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eaff7:{NFSU2_TR(0x4eaff7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eaffa:{NFSU2_TR(0x4eaffa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eaffd:{NFSU2_TR(0x4eaffd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
TAIL_STATIC(0x4eb000u,4eb);
}
XIT:NFSU2_TR_EXIT(0x4ea,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
