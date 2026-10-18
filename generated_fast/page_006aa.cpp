#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_698(u8* __restrict R,Cpu& c);
u32 body_699(u8* __restrict R,Cpu& c);
u32 body_69a(u8* __restrict R,Cpu& c);
u32 body_69e(u8* __restrict R,Cpu& c);
u32 body_69f(u8* __restrict R,Cpu& c);
u32 body_6a0(u8* __restrict R,Cpu& c);
u32 body_6a1(u8* __restrict R,Cpu& c);
u32 body_6a4(u8* __restrict R,Cpu& c);
u32 body_6a8(u8* __restrict R,Cpu& c);
u32 body_6a9(u8* __restrict R,Cpu& c);
u32 body_6ab(u8* __restrict R,Cpu& c);
u32 body_6d4(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6aa,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6aa,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6aa(u8* __restrict R,Cpu& c);
u32 page_6aa(Cpu& c){return body_6aa(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6aa(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6aa002:goto L6aa002;
case 0x6aa005:c.instructions+=4;goto B6aa005;
case 0x6aa007:c.instructions+=3;goto B6aa007;
case 0x6aa00a:c.instructions+=2;goto B6aa00a;
case 0x6aa00d:c.instructions+=1;goto B6aa00d;
case 0x6aa010:goto L6aa010;
case 0x6aa013:c.instructions+=13;goto B6aa013;
case 0x6aa016:c.instructions+=12;goto B6aa016;
case 0x6aa019:c.instructions+=11;goto B6aa019;
case 0x6aa01c:c.instructions+=10;goto B6aa01c;
case 0x6aa020:c.instructions+=9;goto B6aa020;
case 0x6aa023:c.instructions+=8;goto B6aa023;
case 0x6aa026:c.instructions+=7;goto B6aa026;
case 0x6aa029:c.instructions+=6;goto B6aa029;
case 0x6aa02c:c.instructions+=5;goto B6aa02c;
case 0x6aa02f:c.instructions+=4;goto B6aa02f;
case 0x6aa033:c.instructions+=3;goto B6aa033;
case 0x6aa036:c.instructions+=2;goto B6aa036;
case 0x6aa039:c.instructions+=1;goto B6aa039;
case 0x6aa03b:goto L6aa03b;
case 0x6aa03d:goto L6aa03d;
case 0x6aa03f:c.instructions+=1;goto B6aa03f;
case 0x6aa041:goto L6aa041;
case 0x6aa043:c.instructions+=6;goto B6aa043;
case 0x6aa046:c.instructions+=5;goto B6aa046;
case 0x6aa049:c.instructions+=4;goto B6aa049;
case 0x6aa04b:c.instructions+=3;goto B6aa04b;
case 0x6aa04e:c.instructions+=2;goto B6aa04e;
case 0x6aa051:c.instructions+=1;goto B6aa051;
case 0x6aa054:goto L6aa054;
case 0x6aa057:c.instructions+=13;goto B6aa057;
case 0x6aa05a:c.instructions+=12;goto B6aa05a;
case 0x6aa05d:c.instructions+=11;goto B6aa05d;
case 0x6aa060:c.instructions+=10;goto B6aa060;
case 0x6aa064:c.instructions+=9;goto B6aa064;
case 0x6aa067:c.instructions+=8;goto B6aa067;
case 0x6aa06a:c.instructions+=7;goto B6aa06a;
case 0x6aa06d:c.instructions+=6;goto B6aa06d;
case 0x6aa070:c.instructions+=5;goto B6aa070;
case 0x6aa073:c.instructions+=4;goto B6aa073;
case 0x6aa077:c.instructions+=3;goto B6aa077;
case 0x6aa07a:c.instructions+=2;goto B6aa07a;
case 0x6aa07d:c.instructions+=1;goto B6aa07d;
case 0x6aa07f:goto L6aa07f;
case 0x6aa083:c.instructions+=2;goto B6aa083;
case 0x6aa085:c.instructions+=1;goto B6aa085;
case 0x6aa08b:goto L6aa08b;
case 0x6aa08d:c.instructions+=2;goto B6aa08d;
case 0x6aa090:c.instructions+=1;goto B6aa090;
case 0x6aa093:goto L6aa093;
case 0x6aa096:c.instructions+=10;goto B6aa096;
case 0x6aa098:c.instructions+=9;goto B6aa098;
case 0x6aa099:c.instructions+=8;goto B6aa099;
case 0x6aa09a:c.instructions+=7;goto B6aa09a;
case 0x6aa09d:c.instructions+=6;goto B6aa09d;
case 0x6aa09f:c.instructions+=5;goto B6aa09f;
case 0x6aa0a1:c.instructions+=4;goto B6aa0a1;
case 0x6aa0a7:c.instructions+=3;goto B6aa0a7;
case 0x6aa0a9:c.instructions+=2;goto B6aa0a9;
case 0x6aa0ac:c.instructions+=1;goto B6aa0ac;
case 0x6aa0b1:goto L6aa0b1;
case 0x6aa0b3:c.instructions+=11;goto B6aa0b3;
case 0x6aa0b6:c.instructions+=10;goto B6aa0b6;
case 0x6aa0b9:c.instructions+=9;goto B6aa0b9;
case 0x6aa0ba:c.instructions+=8;goto B6aa0ba;
case 0x6aa0bb:c.instructions+=7;goto B6aa0bb;
case 0x6aa0be:c.instructions+=6;goto B6aa0be;
case 0x6aa0c0:c.instructions+=5;goto B6aa0c0;
case 0x6aa0c3:c.instructions+=4;goto B6aa0c3;
case 0x6aa0c5:c.instructions+=3;goto B6aa0c5;
case 0x6aa0cb:c.instructions+=2;goto B6aa0cb;
case 0x6aa0cd:c.instructions+=1;goto B6aa0cd;
case 0x6aa0d2:goto L6aa0d2;
case 0x6aa0d5:c.instructions+=12;goto B6aa0d5;
case 0x6aa0d8:c.instructions+=11;goto B6aa0d8;
case 0x6aa0db:c.instructions+=10;goto B6aa0db;
case 0x6aa0de:c.instructions+=9;goto B6aa0de;
case 0x6aa0e1:c.instructions+=8;goto B6aa0e1;
case 0x6aa0e4:c.instructions+=7;goto B6aa0e4;
case 0x6aa0e7:c.instructions+=6;goto B6aa0e7;
case 0x6aa0ea:c.instructions+=5;goto B6aa0ea;
case 0x6aa0ed:c.instructions+=4;goto B6aa0ed;
case 0x6aa0f0:c.instructions+=3;goto B6aa0f0;
case 0x6aa0f3:c.instructions+=2;goto B6aa0f3;
case 0x6aa0f6:c.instructions+=1;goto B6aa0f6;
case 0x6aa0fc:goto L6aa0fc;
case 0x6aa0ff:c.instructions+=3;goto B6aa0ff;
case 0x6aa102:c.instructions+=2;goto B6aa102;
case 0x6aa106:c.instructions+=1;goto B6aa106;
case 0x6aa10c:goto L6aa10c;
case 0x6aa10f:c.instructions+=14;goto B6aa10f;
case 0x6aa112:c.instructions+=13;goto B6aa112;
case 0x6aa115:c.instructions+=12;goto B6aa115;
case 0x6aa118:c.instructions+=11;goto B6aa118;
case 0x6aa11c:c.instructions+=10;goto B6aa11c;
case 0x6aa11f:c.instructions+=9;goto B6aa11f;
case 0x6aa122:c.instructions+=8;goto B6aa122;
case 0x6aa125:c.instructions+=7;goto B6aa125;
case 0x6aa128:c.instructions+=6;goto B6aa128;
case 0x6aa12b:c.instructions+=5;goto B6aa12b;
case 0x6aa12e:c.instructions+=4;goto B6aa12e;
case 0x6aa131:c.instructions+=3;goto B6aa131;
case 0x6aa134:c.instructions+=2;goto B6aa134;
case 0x6aa137:c.instructions+=1;goto B6aa137;
case 0x6aa13d:goto L6aa13d;
case 0x6aa140:c.instructions+=3;goto B6aa140;
case 0x6aa143:c.instructions+=2;goto B6aa143;
case 0x6aa146:c.instructions+=1;goto B6aa146;
case 0x6aa148:goto L6aa148;
case 0x6aa14b:c.instructions+=6;goto B6aa14b;
case 0x6aa14c:c.instructions+=5;goto B6aa14c;
case 0x6aa14f:c.instructions+=4;goto B6aa14f;
case 0x6aa152:c.instructions+=3;goto B6aa152;
case 0x6aa155:c.instructions+=2;goto B6aa155;
case 0x6aa159:c.instructions+=1;goto B6aa159;
case 0x6aa15c:goto L6aa15c;
case 0x6aa15e:c.instructions+=1;goto B6aa15e;
case 0x6aa160:goto L6aa160;
case 0x6aa163:c.instructions+=12;goto B6aa163;
case 0x6aa166:c.instructions+=11;goto B6aa166;
case 0x6aa16a:c.instructions+=10;goto B6aa16a;
case 0x6aa16d:c.instructions+=9;goto B6aa16d;
case 0x6aa170:c.instructions+=8;goto B6aa170;
case 0x6aa174:c.instructions+=7;goto B6aa174;
case 0x6aa177:c.instructions+=6;goto B6aa177;
case 0x6aa17a:c.instructions+=5;goto B6aa17a;
case 0x6aa17e:c.instructions+=4;goto B6aa17e;
case 0x6aa181:c.instructions+=3;goto B6aa181;
case 0x6aa188:c.instructions+=2;goto B6aa188;
case 0x6aa18c:c.instructions+=1;goto B6aa18c;
case 0x6aa192:goto L6aa192;
case 0x6aa196:c.instructions+=1;goto B6aa196;
case 0x6aa198:goto L6aa198;
case 0x6aa19a:c.instructions+=1;goto B6aa19a;
case 0x6aa19f:goto L6aa19f;
case 0x6aa1a1:c.instructions+=2;goto B6aa1a1;
case 0x6aa1a3:c.instructions+=1;goto B6aa1a3;
case 0x6aa1a5:goto L6aa1a5;
case 0x6aa1a7:c.instructions+=1;goto B6aa1a7;
case 0x6aa1ac:goto L6aa1ac;
case 0x6aa1ae:c.instructions+=2;goto B6aa1ae;
case 0x6aa1b0:c.instructions+=1;goto B6aa1b0;
case 0x6aa1b2:goto L6aa1b2;
case 0x6aa1b4:c.instructions+=1;goto B6aa1b4;
case 0x6aa1b9:goto L6aa1b9;
case 0x6aa1bb:c.instructions+=2;goto B6aa1bb;
case 0x6aa1bd:c.instructions+=1;goto B6aa1bd;
case 0x6aa1bf:goto L6aa1bf;
case 0x6aa1c1:c.instructions+=3;goto B6aa1c1;
case 0x6aa1c4:c.instructions+=2;goto B6aa1c4;
case 0x6aa1c7:c.instructions+=1;goto B6aa1c7;
case 0x6aa1c9:goto L6aa1c9;
case 0x6aa1cc:c.instructions+=1;goto B6aa1cc;
case 0x6aa1d1:goto L6aa1d1;
case 0x6aa1d4:c.instructions+=1;goto B6aa1d4;
case 0x6aa1d9:goto L6aa1d9;
case 0x6aa1da:c.instructions+=7;goto B6aa1da;
case 0x6aa1db:c.instructions+=6;goto B6aa1db;
case 0x6aa1dd:c.instructions+=5;goto B6aa1dd;
case 0x6aa1de:c.instructions+=4;goto B6aa1de;
case 0x6aa1df:c.instructions+=3;goto B6aa1df;
case 0x6aa1e0:c.instructions+=2;goto B6aa1e0;
case 0x6aa1e1:c.instructions+=1;goto B6aa1e1;
case 0x6aa1e2:goto L6aa1e2;
case 0x6aa1e7:c.instructions+=1;goto B6aa1e7;
case 0x6aa1e9:goto L6aa1e9;
case 0x6aa1eb:c.instructions+=12;goto B6aa1eb;
case 0x6aa1ec:c.instructions+=11;goto B6aa1ec;
case 0x6aa1ee:c.instructions+=10;goto B6aa1ee;
case 0x6aa1f4:c.instructions+=9;goto B6aa1f4;
case 0x6aa1f5:c.instructions+=8;goto B6aa1f5;
case 0x6aa1f6:c.instructions+=7;goto B6aa1f6;
case 0x6aa1f7:c.instructions+=6;goto B6aa1f7;
case 0x6aa1f9:c.instructions+=5;goto B6aa1f9;
case 0x6aa1fb:c.instructions+=4;goto B6aa1fb;
case 0x6aa1fd:c.instructions+=3;goto B6aa1fd;
case 0x6aa200:c.instructions+=2;goto B6aa200;
case 0x6aa203:c.instructions+=1;goto B6aa203;
case 0x6aa205:goto L6aa205;
case 0x6aa208:c.instructions+=11;goto B6aa208;
case 0x6aa20b:c.instructions+=10;goto B6aa20b;
case 0x6aa20e:c.instructions+=9;goto B6aa20e;
case 0x6aa211:c.instructions+=8;goto B6aa211;
case 0x6aa214:c.instructions+=7;goto B6aa214;
case 0x6aa217:c.instructions+=6;goto B6aa217;
case 0x6aa21a:c.instructions+=5;goto B6aa21a;
case 0x6aa21d:c.instructions+=4;goto B6aa21d;
case 0x6aa220:c.instructions+=3;goto B6aa220;
case 0x6aa223:c.instructions+=2;goto B6aa223;
case 0x6aa226:c.instructions+=1;goto B6aa226;
case 0x6aa228:goto L6aa228;
case 0x6aa22f:c.instructions+=1;goto B6aa22f;
case 0x6aa231:goto L6aa231;
case 0x6aa237:c.instructions+=1;goto B6aa237;
case 0x6aa239:goto L6aa239;
case 0x6aa23c:goto L6aa23c;
case 0x6aa240:goto L6aa240;
case 0x6aa241:c.instructions+=2;goto B6aa241;
case 0x6aa244:c.instructions+=1;goto B6aa244;
case 0x6aa246:goto L6aa246;
case 0x6aa249:c.instructions+=3;goto B6aa249;
case 0x6aa24b:c.instructions+=2;goto B6aa24b;
case 0x6aa24e:c.instructions+=1;goto B6aa24e;
case 0x6aa254:goto L6aa254;
case 0x6aa257:c.instructions+=5;goto B6aa257;
case 0x6aa25a:c.instructions+=4;goto B6aa25a;
case 0x6aa25d:c.instructions+=3;goto B6aa25d;
case 0x6aa260:c.instructions+=2;goto B6aa260;
case 0x6aa266:c.instructions+=1;goto B6aa266;
case 0x6aa26c:goto L6aa26c;
case 0x6aa26e:c.instructions+=3;goto B6aa26e;
case 0x6aa26f:c.instructions+=2;goto B6aa26f;
case 0x6aa272:c.instructions+=1;goto B6aa272;
case 0x6aa274:goto L6aa274;
case 0x6aa277:c.instructions+=7;goto B6aa277;
case 0x6aa27a:c.instructions+=6;goto B6aa27a;
case 0x6aa27d:c.instructions+=5;goto B6aa27d;
case 0x6aa280:c.instructions+=4;goto B6aa280;
case 0x6aa282:c.instructions+=3;goto B6aa282;
case 0x6aa285:c.instructions+=2;goto B6aa285;
case 0x6aa287:c.instructions+=1;goto B6aa287;
case 0x6aa28c:goto L6aa28c;
case 0x6aa28d:c.instructions+=2;goto B6aa28d;
case 0x6aa290:c.instructions+=1;goto B6aa290;
case 0x6aa292:goto L6aa292;
case 0x6aa294:c.instructions+=4;goto B6aa294;
case 0x6aa295:c.instructions+=3;goto B6aa295;
case 0x6aa298:c.instructions+=2;goto B6aa298;
case 0x6aa29b:c.instructions+=1;goto B6aa29b;
case 0x6aa29d:goto L6aa29d;
case 0x6aa2a0:c.instructions+=21;goto B6aa2a0;
case 0x6aa2a2:c.instructions+=20;goto B6aa2a2;
case 0x6aa2a5:c.instructions+=19;goto B6aa2a5;
case 0x6aa2a8:c.instructions+=18;goto B6aa2a8;
case 0x6aa2ab:c.instructions+=17;goto B6aa2ab;
case 0x6aa2ae:c.instructions+=16;goto B6aa2ae;
case 0x6aa2b1:c.instructions+=15;goto B6aa2b1;
case 0x6aa2b4:c.instructions+=14;goto B6aa2b4;
case 0x6aa2b7:c.instructions+=13;goto B6aa2b7;
case 0x6aa2ba:c.instructions+=12;goto B6aa2ba;
case 0x6aa2bd:c.instructions+=11;goto B6aa2bd;
case 0x6aa2c0:c.instructions+=10;goto B6aa2c0;
case 0x6aa2c2:c.instructions+=9;goto B6aa2c2;
case 0x6aa2c5:c.instructions+=8;goto B6aa2c5;
case 0x6aa2c8:c.instructions+=7;goto B6aa2c8;
case 0x6aa2cb:c.instructions+=6;goto B6aa2cb;
case 0x6aa2ce:c.instructions+=5;goto B6aa2ce;
case 0x6aa2d1:c.instructions+=4;goto B6aa2d1;
case 0x6aa2d4:c.instructions+=3;goto B6aa2d4;
case 0x6aa2d7:c.instructions+=2;goto B6aa2d7;
case 0x6aa2da:c.instructions+=1;goto B6aa2da;
case 0x6aa2dc:goto L6aa2dc;
case 0x6aa2de:c.instructions+=5;goto B6aa2de;
case 0x6aa2e0:c.instructions+=4;goto B6aa2e0;
case 0x6aa2e5:c.instructions+=3;goto B6aa2e5;
case 0x6aa2e7:c.instructions+=2;goto B6aa2e7;
case 0x6aa2ec:c.instructions+=1;goto B6aa2ec;
case 0x6aa2f2:goto L6aa2f2;
case 0x6aa2f7:c.instructions+=1;goto B6aa2f7;
case 0x6aa2fd:goto L6aa2fd;
case 0x6aa302:c.instructions+=1;goto B6aa302;
case 0x6aa308:goto L6aa308;
case 0x6aa30d:c.instructions+=1;goto B6aa30d;
case 0x6aa313:goto L6aa313;
case 0x6aa316:c.instructions+=7;goto B6aa316;
case 0x6aa31c:c.instructions+=6;goto B6aa31c;
case 0x6aa31e:c.instructions+=5;goto B6aa31e;
case 0x6aa320:c.instructions+=4;goto B6aa320;
case 0x6aa323:c.instructions+=3;goto B6aa323;
case 0x6aa326:c.instructions+=2;goto B6aa326;
case 0x6aa329:c.instructions+=1;goto B6aa329;
case 0x6aa32f:goto L6aa32f;
case 0x6aa333:c.instructions+=2;goto B6aa333;
case 0x6aa337:c.instructions+=1;goto B6aa337;
case 0x6aa339:goto L6aa339;
case 0x6aa33c:c.instructions+=5;goto B6aa33c;
case 0x6aa340:c.instructions+=4;goto B6aa340;
case 0x6aa343:c.instructions+=3;goto B6aa343;
case 0x6aa346:c.instructions+=2;goto B6aa346;
case 0x6aa349:c.instructions+=1;goto B6aa349;
case 0x6aa34b:goto L6aa34b;
case 0x6aa34e:c.instructions+=11;goto B6aa34e;
case 0x6aa351:c.instructions+=10;goto B6aa351;
case 0x6aa353:c.instructions+=9;goto B6aa353;
case 0x6aa356:c.instructions+=8;goto B6aa356;
case 0x6aa359:c.instructions+=7;goto B6aa359;
case 0x6aa35c:c.instructions+=6;goto B6aa35c;
case 0x6aa35f:c.instructions+=5;goto B6aa35f;
case 0x6aa362:c.instructions+=4;goto B6aa362;
case 0x6aa365:c.instructions+=3;goto B6aa365;
case 0x6aa368:c.instructions+=2;goto B6aa368;
case 0x6aa36a:c.instructions+=1;goto B6aa36a;
case 0x6aa36f:goto L6aa36f;
case 0x6aa372:c.instructions+=2;goto B6aa372;
case 0x6aa375:c.instructions+=1;goto B6aa375;
case 0x6aa378:goto L6aa378;
case 0x6aa37b:c.instructions+=1;goto B6aa37b;
case 0x6aa37d:goto L6aa37d;
case 0x6aa380:c.instructions+=3;goto B6aa380;
case 0x6aa383:c.instructions+=2;goto B6aa383;
case 0x6aa386:c.instructions+=1;goto B6aa386;
case 0x6aa388:goto L6aa388;
case 0x6aa38b:c.instructions+=3;goto B6aa38b;
case 0x6aa38e:c.instructions+=2;goto B6aa38e;
case 0x6aa391:c.instructions+=1;goto B6aa391;
case 0x6aa393:goto L6aa393;
case 0x6aa398:goto L6aa398;
case 0x6aa39a:c.instructions+=3;goto B6aa39a;
case 0x6aa39f:c.instructions+=2;goto B6aa39f;
case 0x6aa3a4:c.instructions+=1;goto B6aa3a4;
case 0x6aa3aa:goto L6aa3aa;
case 0x6aa3af:c.instructions+=1;goto B6aa3af;
case 0x6aa3b1:goto L6aa3b1;
case 0x6aa3b4:c.instructions+=7;goto B6aa3b4;
case 0x6aa3ba:c.instructions+=6;goto B6aa3ba;
case 0x6aa3bc:c.instructions+=5;goto B6aa3bc;
case 0x6aa3be:c.instructions+=4;goto B6aa3be;
case 0x6aa3c1:c.instructions+=3;goto B6aa3c1;
case 0x6aa3c4:c.instructions+=2;goto B6aa3c4;
case 0x6aa3c7:c.instructions+=1;goto B6aa3c7;
case 0x6aa3cd:goto L6aa3cd;
case 0x6aa3d1:c.instructions+=2;goto B6aa3d1;
case 0x6aa3d5:c.instructions+=1;goto B6aa3d5;
case 0x6aa3d7:goto L6aa3d7;
case 0x6aa3da:c.instructions+=5;goto B6aa3da;
case 0x6aa3de:c.instructions+=4;goto B6aa3de;
case 0x6aa3e1:c.instructions+=3;goto B6aa3e1;
case 0x6aa3e4:c.instructions+=2;goto B6aa3e4;
case 0x6aa3e7:c.instructions+=1;goto B6aa3e7;
case 0x6aa3e9:goto L6aa3e9;
case 0x6aa3ec:c.instructions+=9;goto B6aa3ec;
case 0x6aa3ef:c.instructions+=8;goto B6aa3ef;
case 0x6aa3f1:c.instructions+=7;goto B6aa3f1;
case 0x6aa3f4:c.instructions+=6;goto B6aa3f4;
case 0x6aa3f7:c.instructions+=5;goto B6aa3f7;
case 0x6aa3fa:c.instructions+=4;goto B6aa3fa;
case 0x6aa3fd:c.instructions+=3;goto B6aa3fd;
case 0x6aa400:c.instructions+=2;goto B6aa400;
case 0x6aa402:c.instructions+=1;goto B6aa402;
case 0x6aa407:goto L6aa407;
case 0x6aa40a:c.instructions+=2;goto B6aa40a;
case 0x6aa40d:c.instructions+=1;goto B6aa40d;
case 0x6aa410:goto L6aa410;
case 0x6aa413:c.instructions+=1;goto B6aa413;
case 0x6aa415:goto L6aa415;
case 0x6aa418:c.instructions+=3;goto B6aa418;
case 0x6aa41b:c.instructions+=2;goto B6aa41b;
case 0x6aa41e:c.instructions+=1;goto B6aa41e;
case 0x6aa420:goto L6aa420;
case 0x6aa423:c.instructions+=3;goto B6aa423;
case 0x6aa426:c.instructions+=2;goto B6aa426;
case 0x6aa429:c.instructions+=1;goto B6aa429;
case 0x6aa42b:goto L6aa42b;
case 0x6aa430:goto L6aa430;
case 0x6aa433:c.instructions+=1;goto B6aa433;
case 0x6aa435:goto L6aa435;
case 0x6aa438:c.instructions+=2;goto B6aa438;
case 0x6aa43b:c.instructions+=1;goto B6aa43b;
case 0x6aa441:goto L6aa441;
case 0x6aa444:c.instructions+=3;goto B6aa444;
case 0x6aa447:c.instructions+=2;goto B6aa447;
case 0x6aa44a:c.instructions+=1;goto B6aa44a;
case 0x6aa44c:goto L6aa44c;
case 0x6aa44f:c.instructions+=8;goto B6aa44f;
case 0x6aa451:c.instructions+=7;goto B6aa451;
case 0x6aa454:c.instructions+=6;goto B6aa454;
case 0x6aa456:c.instructions+=5;goto B6aa456;
case 0x6aa459:c.instructions+=4;goto B6aa459;
case 0x6aa45c:c.instructions+=3;goto B6aa45c;
case 0x6aa45f:c.instructions+=2;goto B6aa45f;
case 0x6aa461:c.instructions+=1;goto B6aa461;
case 0x6aa466:goto L6aa466;
case 0x6aa469:c.instructions+=2;goto B6aa469;
case 0x6aa46c:c.instructions+=1;goto B6aa46c;
case 0x6aa46f:goto L6aa46f;
case 0x6aa472:c.instructions+=1;goto B6aa472;
case 0x6aa474:goto L6aa474;
case 0x6aa477:c.instructions+=3;goto B6aa477;
case 0x6aa47a:c.instructions+=2;goto B6aa47a;
case 0x6aa47d:c.instructions+=1;goto B6aa47d;
case 0x6aa47f:goto L6aa47f;
case 0x6aa484:goto L6aa484;
case 0x6aa486:c.instructions+=2;goto B6aa486;
case 0x6aa489:c.instructions+=1;goto B6aa489;
case 0x6aa48f:goto L6aa48f;
case 0x6aa492:c.instructions+=12;goto B6aa492;
case 0x6aa495:c.instructions+=11;goto B6aa495;
case 0x6aa498:c.instructions+=10;goto B6aa498;
case 0x6aa49b:c.instructions+=9;goto B6aa49b;
case 0x6aa49f:c.instructions+=8;goto B6aa49f;
case 0x6aa4a2:c.instructions+=7;goto B6aa4a2;
case 0x6aa4a5:c.instructions+=6;goto B6aa4a5;
case 0x6aa4a8:c.instructions+=5;goto B6aa4a8;
case 0x6aa4ab:c.instructions+=4;goto B6aa4ab;
case 0x6aa4ac:c.instructions+=3;goto B6aa4ac;
case 0x6aa4b3:c.instructions+=2;goto B6aa4b3;
case 0x6aa4b6:c.instructions+=1;goto B6aa4b6;
case 0x6aa4b8:goto L6aa4b8;
case 0x6aa4ba:goto L6aa4ba;
case 0x6aa4bd:c.instructions+=2;goto B6aa4bd;
case 0x6aa4c0:c.instructions+=1;goto B6aa4c0;
case 0x6aa4c2:goto L6aa4c2;
case 0x6aa4c5:c.instructions+=27;goto B6aa4c5;
case 0x6aa4c8:c.instructions+=26;goto B6aa4c8;
case 0x6aa4cb:c.instructions+=25;goto B6aa4cb;
case 0x6aa4ce:c.instructions+=24;goto B6aa4ce;
case 0x6aa4d1:c.instructions+=23;goto B6aa4d1;
case 0x6aa4d4:c.instructions+=22;goto B6aa4d4;
case 0x6aa4d7:c.instructions+=21;goto B6aa4d7;
case 0x6aa4da:c.instructions+=20;goto B6aa4da;
case 0x6aa4dd:c.instructions+=19;goto B6aa4dd;
case 0x6aa4e0:c.instructions+=18;goto B6aa4e0;
case 0x6aa4e3:c.instructions+=17;goto B6aa4e3;
case 0x6aa4e6:c.instructions+=16;goto B6aa4e6;
case 0x6aa4e9:c.instructions+=15;goto B6aa4e9;
case 0x6aa4ec:c.instructions+=14;goto B6aa4ec;
case 0x6aa4ef:c.instructions+=13;goto B6aa4ef;
case 0x6aa4f2:c.instructions+=12;goto B6aa4f2;
case 0x6aa4f5:c.instructions+=11;goto B6aa4f5;
case 0x6aa4f8:c.instructions+=10;goto B6aa4f8;
case 0x6aa4fb:c.instructions+=9;goto B6aa4fb;
case 0x6aa4fe:c.instructions+=8;goto B6aa4fe;
case 0x6aa501:c.instructions+=7;goto B6aa501;
case 0x6aa504:c.instructions+=6;goto B6aa504;
case 0x6aa507:c.instructions+=5;goto B6aa507;
case 0x6aa50a:c.instructions+=4;goto B6aa50a;
case 0x6aa50d:c.instructions+=3;goto B6aa50d;
case 0x6aa510:c.instructions+=2;goto B6aa510;
case 0x6aa513:c.instructions+=1;goto B6aa513;
case 0x6aa515:goto L6aa515;
case 0x6aa519:c.instructions+=1;goto B6aa519;
case 0x6aa51f:goto L6aa51f;
case 0x6aa525:c.instructions+=1;goto B6aa525;
case 0x6aa52a:goto L6aa52a;
case 0x6aa52e:c.instructions+=2;goto B6aa52e;
case 0x6aa532:c.instructions+=1;goto B6aa532;
case 0x6aa538:goto L6aa538;
case 0x6aa53b:c.instructions+=5;goto B6aa53b;
case 0x6aa53e:c.instructions+=4;goto B6aa53e;
case 0x6aa541:c.instructions+=3;goto B6aa541;
case 0x6aa543:c.instructions+=2;goto B6aa543;
case 0x6aa548:c.instructions+=1;goto B6aa548;
case 0x6aa54e:goto L6aa54e;
case 0x6aa553:c.instructions+=1;goto B6aa553;
case 0x6aa559:goto L6aa559;
case 0x6aa55e:c.instructions+=1;goto B6aa55e;
case 0x6aa564:goto L6aa564;
case 0x6aa569:c.instructions+=1;goto B6aa569;
case 0x6aa56f:goto L6aa56f;
case 0x6aa574:c.instructions+=1;goto B6aa574;
case 0x6aa57a:goto L6aa57a;
case 0x6aa57f:c.instructions+=1;goto B6aa57f;
case 0x6aa585:goto L6aa585;
case 0x6aa58a:c.instructions+=1;goto B6aa58a;
case 0x6aa590:goto L6aa590;
case 0x6aa595:c.instructions+=1;goto B6aa595;
case 0x6aa59b:goto L6aa59b;
case 0x6aa5a0:c.instructions+=1;goto B6aa5a0;
case 0x6aa5a6:goto L6aa5a6;
case 0x6aa5ab:c.instructions+=1;goto B6aa5ab;
case 0x6aa5b1:goto L6aa5b1;
case 0x6aa5b4:c.instructions+=9;goto B6aa5b4;
case 0x6aa5b6:c.instructions+=8;goto B6aa5b6;
case 0x6aa5b9:c.instructions+=7;goto B6aa5b9;
case 0x6aa5bc:c.instructions+=6;goto B6aa5bc;
case 0x6aa5bf:c.instructions+=5;goto B6aa5bf;
case 0x6aa5c2:c.instructions+=4;goto B6aa5c2;
case 0x6aa5c5:c.instructions+=3;goto B6aa5c5;
case 0x6aa5c8:c.instructions+=2;goto B6aa5c8;
case 0x6aa5cc:c.instructions+=1;goto B6aa5cc;
case 0x6aa5d2:goto L6aa5d2;
case 0x6aa5d6:c.instructions+=6;goto B6aa5d6;
case 0x6aa5da:c.instructions+=5;goto B6aa5da;
case 0x6aa5dd:c.instructions+=4;goto B6aa5dd;
case 0x6aa5de:c.instructions+=3;goto B6aa5de;
case 0x6aa5df:c.instructions+=2;goto B6aa5df;
case 0x6aa5e1:c.instructions+=1;goto B6aa5e1;
case 0x6aa5e6:goto L6aa5e6;
case 0x6aa5e9:c.instructions+=1;goto B6aa5e9;
case 0x6aa5eb:goto L6aa5eb;
case 0x6aa5ee:c.instructions+=4;goto B6aa5ee;
case 0x6aa5ef:c.instructions+=3;goto B6aa5ef;
case 0x6aa5f0:c.instructions+=2;goto B6aa5f0;
case 0x6aa5f2:c.instructions+=1;goto B6aa5f2;
case 0x6aa5f7:goto L6aa5f7;
case 0x6aa5fa:c.instructions+=1;goto B6aa5fa;
case 0x6aa5fd:goto L6aa5fd;
case 0x6aa600:c.instructions+=2;goto B6aa600;
case 0x6aa603:c.instructions+=1;goto B6aa603;
case 0x6aa605:goto L6aa605;
case 0x6aa608:c.instructions+=2;goto B6aa608;
case 0x6aa60a:c.instructions+=1;goto B6aa60a;
case 0x6aa60c:goto L6aa60c;
case 0x6aa60f:c.instructions+=2;goto B6aa60f;
case 0x6aa612:c.instructions+=1;goto B6aa612;
case 0x6aa615:goto L6aa615;
case 0x6aa618:c.instructions+=2;goto B6aa618;
case 0x6aa61a:c.instructions+=1;goto B6aa61a;
case 0x6aa61c:goto L6aa61c;
case 0x6aa61f:c.instructions+=4;goto B6aa61f;
case 0x6aa620:c.instructions+=3;goto B6aa620;
case 0x6aa621:c.instructions+=2;goto B6aa621;
case 0x6aa623:c.instructions+=1;goto B6aa623;
case 0x6aa628:goto L6aa628;
case 0x6aa62b:c.instructions+=2;goto B6aa62b;
case 0x6aa62e:c.instructions+=1;goto B6aa62e;
case 0x6aa631:goto L6aa631;
case 0x6aa634:c.instructions+=1;goto B6aa634;
case 0x6aa636:goto L6aa636;
case 0x6aa63a:c.instructions+=2;goto B6aa63a;
case 0x6aa63d:c.instructions+=1;goto B6aa63d;
case 0x6aa63f:goto L6aa63f;
case 0x6aa642:c.instructions+=4;goto B6aa642;
case 0x6aa645:c.instructions+=3;goto B6aa645;
case 0x6aa648:c.instructions+=2;goto B6aa648;
case 0x6aa64b:c.instructions+=1;goto B6aa64b;
case 0x6aa64d:goto L6aa64d;
case 0x6aa650:c.instructions+=1;goto B6aa650;
case 0x6aa653:goto L6aa653;
case 0x6aa656:c.instructions+=7;goto B6aa656;
case 0x6aa659:c.instructions+=6;goto B6aa659;
case 0x6aa65c:c.instructions+=5;goto B6aa65c;
case 0x6aa65f:c.instructions+=4;goto B6aa65f;
case 0x6aa662:c.instructions+=3;goto B6aa662;
case 0x6aa665:c.instructions+=2;goto B6aa665;
case 0x6aa669:c.instructions+=1;goto B6aa669;
case 0x6aa66b:goto L6aa66b;
case 0x6aa66f:c.instructions+=2;goto B6aa66f;
case 0x6aa673:c.instructions+=1;goto B6aa673;
case 0x6aa675:goto L6aa675;
case 0x6aa678:c.instructions+=21;goto B6aa678;
case 0x6aa67b:c.instructions+=20;goto B6aa67b;
case 0x6aa67e:c.instructions+=19;goto B6aa67e;
case 0x6aa681:c.instructions+=18;goto B6aa681;
case 0x6aa684:c.instructions+=17;goto B6aa684;
case 0x6aa687:c.instructions+=16;goto B6aa687;
case 0x6aa68a:c.instructions+=15;goto B6aa68a;
case 0x6aa68d:c.instructions+=14;goto B6aa68d;
case 0x6aa690:c.instructions+=13;goto B6aa690;
case 0x6aa693:c.instructions+=12;goto B6aa693;
case 0x6aa696:c.instructions+=11;goto B6aa696;
case 0x6aa699:c.instructions+=10;goto B6aa699;
case 0x6aa69c:c.instructions+=9;goto B6aa69c;
case 0x6aa69f:c.instructions+=8;goto B6aa69f;
case 0x6aa6a2:c.instructions+=7;goto B6aa6a2;
case 0x6aa6a5:c.instructions+=6;goto B6aa6a5;
case 0x6aa6a8:c.instructions+=5;goto B6aa6a8;
case 0x6aa6ab:c.instructions+=4;goto B6aa6ab;
case 0x6aa6ae:c.instructions+=3;goto B6aa6ae;
case 0x6aa6b1:c.instructions+=2;goto B6aa6b1;
case 0x6aa6b4:c.instructions+=1;goto B6aa6b4;
case 0x6aa6b6:goto L6aa6b6;
case 0x6aa6b9:c.instructions+=4;goto B6aa6b9;
case 0x6aa6bc:c.instructions+=3;goto B6aa6bc;
case 0x6aa6bf:c.instructions+=2;goto B6aa6bf;
case 0x6aa6c2:c.instructions+=1;goto B6aa6c2;
case 0x6aa6c4:goto L6aa6c4;
case 0x6aa6c7:c.instructions+=3;goto B6aa6c7;
case 0x6aa6ca:c.instructions+=2;goto B6aa6ca;
case 0x6aa6cd:c.instructions+=1;goto B6aa6cd;
case 0x6aa6d3:goto L6aa6d3;
case 0x6aa6d6:c.instructions+=2;goto B6aa6d6;
case 0x6aa6d8:c.instructions+=1;goto B6aa6d8;
case 0x6aa6da:goto L6aa6da;
case 0x6aa6dd:c.instructions+=1;goto B6aa6dd;
case 0x6aa6df:goto L6aa6df;
case 0x6aa6e1:c.instructions+=3;goto B6aa6e1;
case 0x6aa6e4:c.instructions+=2;goto B6aa6e4;
case 0x6aa6e7:c.instructions+=1;goto B6aa6e7;
case 0x6aa6e9:goto L6aa6e9;
case 0x6aa6ec:c.instructions+=2;goto B6aa6ec;
case 0x6aa6ef:c.instructions+=1;goto B6aa6ef;
case 0x6aa6f1:goto L6aa6f1;
case 0x6aa6f8:goto L6aa6f8;
case 0x6aa6fb:c.instructions+=2;goto B6aa6fb;
case 0x6aa6fc:c.instructions+=1;goto B6aa6fc;
case 0x6aa6fe:goto L6aa6fe;
case 0x6aa702:c.instructions+=1;goto B6aa702;
case 0x6aa704:goto L6aa704;
case 0x6aa706:c.instructions+=2;goto B6aa706;
case 0x6aa707:c.instructions+=1;goto B6aa707;
case 0x6aa70c:goto L6aa70c;
case 0x6aa70e:c.instructions+=1;goto B6aa70e;
case 0x6aa713:goto L6aa713;
case 0x6aa716:c.instructions+=1;goto B6aa716;
case 0x6aa718:goto L6aa718;
case 0x6aa71b:c.instructions+=4;goto B6aa71b;
case 0x6aa71c:c.instructions+=3;goto B6aa71c;
case 0x6aa71f:c.instructions+=2;goto B6aa71f;
case 0x6aa725:c.instructions+=1;goto B6aa725;
case 0x6aa727:goto L6aa727;
case 0x6aa72a:c.instructions+=3;goto B6aa72a;
case 0x6aa72c:c.instructions+=2;goto B6aa72c;
case 0x6aa72f:c.instructions+=1;goto B6aa72f;
case 0x6aa731:goto L6aa731;
case 0x6aa734:c.instructions+=2;goto B6aa734;
case 0x6aa737:c.instructions+=1;goto B6aa737;
case 0x6aa73a:goto L6aa73a;
case 0x6aa73c:c.instructions+=4;goto B6aa73c;
case 0x6aa73f:c.instructions+=3;goto B6aa73f;
case 0x6aa742:c.instructions+=2;goto B6aa742;
case 0x6aa745:c.instructions+=1;goto B6aa745;
case 0x6aa747:goto L6aa747;
case 0x6aa74a:c.instructions+=3;goto B6aa74a;
case 0x6aa74d:c.instructions+=2;goto B6aa74d;
case 0x6aa750:c.instructions+=1;goto B6aa750;
case 0x6aa752:goto L6aa752;
case 0x6aa755:goto L6aa755;
case 0x6aa758:c.instructions+=2;goto B6aa758;
case 0x6aa75b:c.instructions+=1;goto B6aa75b;
case 0x6aa75d:goto L6aa75d;
case 0x6aa760:c.instructions+=1;goto B6aa760;
case 0x6aa762:goto L6aa762;
case 0x6aa764:c.instructions+=1;goto B6aa764;
case 0x6aa766:goto L6aa766;
case 0x6aa769:c.instructions+=6;goto B6aa769;
case 0x6aa76c:c.instructions+=5;goto B6aa76c;
case 0x6aa76f:c.instructions+=4;goto B6aa76f;
case 0x6aa770:c.instructions+=3;goto B6aa770;
case 0x6aa773:c.instructions+=2;goto B6aa773;
case 0x6aa775:c.instructions+=1;goto B6aa775;
case 0x6aa777:goto L6aa777;
case 0x6aa77a:c.instructions+=4;goto B6aa77a;
case 0x6aa77d:c.instructions+=3;goto B6aa77d;
case 0x6aa780:c.instructions+=2;goto B6aa780;
case 0x6aa782:c.instructions+=1;goto B6aa782;
case 0x6aa787:goto L6aa787;
case 0x6aa789:c.instructions+=1;goto B6aa789;
case 0x6aa78b:goto L6aa78b;
case 0x6aa78d:goto L6aa78d;
case 0x6aa793:c.instructions+=1;goto B6aa793;
case 0x6aa798:goto L6aa798;
case 0x6aa799:c.instructions+=5;goto B6aa799;
case 0x6aa79b:c.instructions+=4;goto B6aa79b;
case 0x6aa79c:c.instructions+=3;goto B6aa79c;
case 0x6aa79d:c.instructions+=2;goto B6aa79d;
case 0x6aa79e:c.instructions+=1;goto B6aa79e;
case 0x6aa79f:goto L6aa79f;
case 0x6aa7a1:c.instructions+=9;goto B6aa7a1;
case 0x6aa7a2:c.instructions+=8;goto B6aa7a2;
case 0x6aa7a4:c.instructions+=7;goto B6aa7a4;
case 0x6aa7a7:c.instructions+=6;goto B6aa7a7;
case 0x6aa7ab:c.instructions+=5;goto B6aa7ab;
case 0x6aa7ac:c.instructions+=4;goto B6aa7ac;
case 0x6aa7ad:c.instructions+=3;goto B6aa7ad;
case 0x6aa7ae:c.instructions+=2;goto B6aa7ae;
case 0x6aa7b0:c.instructions+=1;goto B6aa7b0;
case 0x6aa7b5:goto L6aa7b5;
case 0x6aa7b8:c.instructions+=4;goto B6aa7b8;
case 0x6aa7ba:c.instructions+=3;goto B6aa7ba;
case 0x6aa7bc:c.instructions+=2;goto B6aa7bc;
case 0x6aa7bf:c.instructions+=1;goto B6aa7bf;
case 0x6aa7c1:goto L6aa7c1;
case 0x6aa7c7:c.instructions+=1;goto B6aa7c7;
case 0x6aa7ca:goto L6aa7ca;
case 0x6aa7cc:c.instructions+=2;goto B6aa7cc;
case 0x6aa7cf:c.instructions+=1;goto B6aa7cf;
case 0x6aa7d1:goto L6aa7d1;
case 0x6aa7d4:c.instructions+=2;goto B6aa7d4;
case 0x6aa7d6:c.instructions+=1;goto B6aa7d6;
case 0x6aa7d8:goto L6aa7d8;
case 0x6aa7db:goto L6aa7db;
case 0x6aa7de:c.instructions+=2;goto B6aa7de;
case 0x6aa7df:c.instructions+=1;goto B6aa7df;
case 0x6aa7e1:goto L6aa7e1;
case 0x6aa7e4:goto L6aa7e4;
case 0x6aa7e7:c.instructions+=5;goto B6aa7e7;
case 0x6aa7ea:c.instructions+=4;goto B6aa7ea;
case 0x6aa7ec:c.instructions+=3;goto B6aa7ec;
case 0x6aa7ef:c.instructions+=2;goto B6aa7ef;
case 0x6aa7f0:c.instructions+=1;goto B6aa7f0;
case 0x6aa7f5:goto L6aa7f5;
case 0x6aa7f7:c.instructions+=4;goto B6aa7f7;
case 0x6aa7f9:c.instructions+=3;goto B6aa7f9;
case 0x6aa7fa:c.instructions+=2;goto B6aa7fa;
case 0x6aa7fd:c.instructions+=1;goto B6aa7fd;
case 0x6aa803:goto L6aa803;
case 0x6aa805:c.instructions+=3;goto B6aa805;
case 0x6aa808:c.instructions+=2;goto B6aa808;
case 0x6aa80a:c.instructions+=1;goto B6aa80a;
case 0x6aa80c:goto L6aa80c;
case 0x6aa80e:goto L6aa80e;
case 0x6aa810:c.instructions+=2;goto B6aa810;
case 0x6aa813:c.instructions+=1;goto B6aa813;
case 0x6aa815:goto L6aa815;
case 0x6aa817:goto L6aa817;
case 0x6aa81a:c.instructions+=1;goto B6aa81a;
case 0x6aa81c:goto L6aa81c;
case 0x6aa81f:c.instructions+=4;goto B6aa81f;
case 0x6aa822:c.instructions+=3;goto B6aa822;
case 0x6aa828:c.instructions+=2;goto B6aa828;
case 0x6aa82b:c.instructions+=1;goto B6aa82b;
case 0x6aa82d:goto L6aa82d;
case 0x6aa830:c.instructions+=4;goto B6aa830;
case 0x6aa833:c.instructions+=3;goto B6aa833;
case 0x6aa836:c.instructions+=2;goto B6aa836;
case 0x6aa838:c.instructions+=1;goto B6aa838;
case 0x6aa83a:goto L6aa83a;
case 0x6aa83b:c.instructions+=1;goto B6aa83b;
case 0x6aa83d:goto L6aa83d;
case 0x6aa83e:c.instructions+=2;goto B6aa83e;
case 0x6aa841:c.instructions+=1;goto B6aa841;
case 0x6aa843:goto L6aa843;
case 0x6aa846:c.instructions+=4;goto B6aa846;
case 0x6aa84a:c.instructions+=3;goto B6aa84a;
case 0x6aa84c:c.instructions+=2;goto B6aa84c;
case 0x6aa84f:c.instructions+=1;goto B6aa84f;
case 0x6aa855:goto L6aa855;
case 0x6aa858:c.instructions+=5;goto B6aa858;
case 0x6aa85b:c.instructions+=4;goto B6aa85b;
case 0x6aa85e:c.instructions+=3;goto B6aa85e;
case 0x6aa864:c.instructions+=2;goto B6aa864;
case 0x6aa867:c.instructions+=1;goto B6aa867;
case 0x6aa86d:goto L6aa86d;
case 0x6aa870:c.instructions+=7;goto B6aa870;
case 0x6aa873:c.instructions+=6;goto B6aa873;
case 0x6aa874:c.instructions+=5;goto B6aa874;
case 0x6aa876:c.instructions+=4;goto B6aa876;
case 0x6aa877:c.instructions+=3;goto B6aa877;
case 0x6aa879:c.instructions+=2;goto B6aa879;
case 0x6aa880:c.instructions+=1;goto B6aa880;
case 0x6aa885:goto L6aa885;
case 0x6aa887:c.instructions+=1;goto B6aa887;
case 0x6aa88d:goto L6aa88d;
case 0x6aa88f:c.instructions+=9;goto B6aa88f;
case 0x6aa892:c.instructions+=8;goto B6aa892;
case 0x6aa895:c.instructions+=7;goto B6aa895;
case 0x6aa896:c.instructions+=6;goto B6aa896;
case 0x6aa897:c.instructions+=5;goto B6aa897;
case 0x6aa89a:c.instructions+=4;goto B6aa89a;
case 0x6aa89c:c.instructions+=3;goto B6aa89c;
case 0x6aa89d:c.instructions+=2;goto B6aa89d;
case 0x6aa8a0:c.instructions+=1;goto B6aa8a0;
case 0x6aa8a5:goto L6aa8a5;
case 0x6aa8a7:c.instructions+=1;goto B6aa8a7;
case 0x6aa8a9:goto L6aa8a9;
case 0x6aa8ac:goto L6aa8ac;
case 0x6aa8af:c.instructions+=5;goto B6aa8af;
case 0x6aa8b0:c.instructions+=4;goto B6aa8b0;
case 0x6aa8b1:c.instructions+=3;goto B6aa8b1;
case 0x6aa8b2:c.instructions+=2;goto B6aa8b2;
case 0x6aa8b4:c.instructions+=1;goto B6aa8b4;
case 0x6aa8b9:goto L6aa8b9;
case 0x6aa8bb:c.instructions+=1;goto B6aa8bb;
case 0x6aa8bd:goto L6aa8bd;
case 0x6aa8c0:c.instructions+=1;goto B6aa8c0;
case 0x6aa8c6:goto L6aa8c6;
case 0x6aa8c8:c.instructions+=1;goto B6aa8c8;
case 0x6aa8cd:goto L6aa8cd;
case 0x6aa8cf:c.instructions+=1;goto B6aa8cf;
case 0x6aa8d5:goto L6aa8d5;
case 0x6aa8d7:c.instructions+=5;goto B6aa8d7;
case 0x6aa8d8:c.instructions+=4;goto B6aa8d8;
case 0x6aa8d9:c.instructions+=3;goto B6aa8d9;
case 0x6aa8db:c.instructions+=2;goto B6aa8db;
case 0x6aa8de:c.instructions+=1;goto B6aa8de;
case 0x6aa8e3:goto L6aa8e3;
case 0x6aa8e5:c.instructions+=3;goto B6aa8e5;
case 0x6aa8e7:c.instructions+=2;goto B6aa8e7;
case 0x6aa8ea:c.instructions+=1;goto B6aa8ea;
case 0x6aa8ec:goto L6aa8ec;
case 0x6aa8ef:c.instructions+=4;goto B6aa8ef;
case 0x6aa8f1:c.instructions+=3;goto B6aa8f1;
case 0x6aa8f3:c.instructions+=2;goto B6aa8f3;
case 0x6aa8f6:c.instructions+=1;goto B6aa8f6;
case 0x6aa8f8:goto L6aa8f8;
case 0x6aa8fb:goto L6aa8fb;
case 0x6aa8fd:c.instructions+=8;goto B6aa8fd;
case 0x6aa8ff:c.instructions+=7;goto B6aa8ff;
case 0x6aa902:c.instructions+=6;goto B6aa902;
case 0x6aa903:c.instructions+=5;goto B6aa903;
case 0x6aa904:c.instructions+=4;goto B6aa904;
case 0x6aa905:c.instructions+=3;goto B6aa905;
case 0x6aa906:c.instructions+=2;goto B6aa906;
case 0x6aa909:c.instructions+=1;goto B6aa909;
case 0x6aa90f:goto L6aa90f;
case 0x6aa913:c.instructions+=4;goto B6aa913;
case 0x6aa916:c.instructions+=3;goto B6aa916;
case 0x6aa919:c.instructions+=2;goto B6aa919;
case 0x6aa91c:c.instructions+=1;goto B6aa91c;
case 0x6aa91f:goto L6aa91f;
case 0x6aa922:c.instructions+=4;goto B6aa922;
case 0x6aa925:c.instructions+=3;goto B6aa925;
case 0x6aa928:c.instructions+=2;goto B6aa928;
case 0x6aa92c:c.instructions+=1;goto B6aa92c;
case 0x6aa932:goto L6aa932;
case 0x6aa935:c.instructions+=5;goto B6aa935;
case 0x6aa936:c.instructions+=4;goto B6aa936;
case 0x6aa939:c.instructions+=3;goto B6aa939;
case 0x6aa940:c.instructions+=2;goto B6aa940;
case 0x6aa943:c.instructions+=1;goto B6aa943;
case 0x6aa949:goto L6aa949;
case 0x6aa94b:c.instructions+=1;goto B6aa94b;
case 0x6aa94e:goto L6aa94e;
case 0x6aa950:c.instructions+=2;goto B6aa950;
case 0x6aa954:c.instructions+=1;goto B6aa954;
case 0x6aa956:goto L6aa956;
case 0x6aa959:c.instructions+=2;goto B6aa959;
case 0x6aa95c:c.instructions+=1;goto B6aa95c;
case 0x6aa95e:goto L6aa95e;
case 0x6aa961:c.instructions+=1;goto B6aa961;
case 0x6aa964:goto L6aa964;
case 0x6aa967:c.instructions+=11;goto B6aa967;
case 0x6aa96a:c.instructions+=10;goto B6aa96a;
case 0x6aa96c:c.instructions+=9;goto B6aa96c;
case 0x6aa96f:c.instructions+=8;goto B6aa96f;
case 0x6aa972:c.instructions+=7;goto B6aa972;
case 0x6aa975:c.instructions+=6;goto B6aa975;
case 0x6aa978:c.instructions+=5;goto B6aa978;
case 0x6aa97b:c.instructions+=4;goto B6aa97b;
case 0x6aa97e:c.instructions+=3;goto B6aa97e;
case 0x6aa981:c.instructions+=2;goto B6aa981;
case 0x6aa984:c.instructions+=1;goto B6aa984;
case 0x6aa986:goto L6aa986;
case 0x6aa989:c.instructions+=6;goto B6aa989;
case 0x6aa98c:c.instructions+=5;goto B6aa98c;
case 0x6aa98f:c.instructions+=4;goto B6aa98f;
case 0x6aa992:c.instructions+=3;goto B6aa992;
case 0x6aa995:c.instructions+=2;goto B6aa995;
case 0x6aa998:c.instructions+=1;goto B6aa998;
case 0x6aa99a:goto L6aa99a;
case 0x6aa99d:c.instructions+=6;goto B6aa99d;
case 0x6aa9a0:c.instructions+=5;goto B6aa9a0;
case 0x6aa9a3:c.instructions+=4;goto B6aa9a3;
case 0x6aa9a6:c.instructions+=3;goto B6aa9a6;
case 0x6aa9a9:c.instructions+=2;goto B6aa9a9;
case 0x6aa9ac:c.instructions+=1;goto B6aa9ac;
case 0x6aa9ae:goto L6aa9ae;
case 0x6aa9b1:c.instructions+=6;goto B6aa9b1;
case 0x6aa9b4:c.instructions+=5;goto B6aa9b4;
case 0x6aa9b7:c.instructions+=4;goto B6aa9b7;
case 0x6aa9b9:c.instructions+=3;goto B6aa9b9;
case 0x6aa9bc:c.instructions+=2;goto B6aa9bc;
case 0x6aa9bf:c.instructions+=1;goto B6aa9bf;
case 0x6aa9c1:goto L6aa9c1;
case 0x6aa9c4:c.instructions+=2;goto B6aa9c4;
case 0x6aa9c7:c.instructions+=1;goto B6aa9c7;
case 0x6aa9c9:goto L6aa9c9;
case 0x6aa9cc:goto L6aa9cc;
case 0x6aa9cf:c.instructions+=5;goto B6aa9cf;
case 0x6aa9d3:c.instructions+=4;goto B6aa9d3;
case 0x6aa9d4:c.instructions+=3;goto B6aa9d4;
case 0x6aa9d7:c.instructions+=2;goto B6aa9d7;
case 0x6aa9da:c.instructions+=1;goto B6aa9da;
case 0x6aa9e0:goto L6aa9e0;
case 0x6aa9e2:c.instructions+=8;goto B6aa9e2;
case 0x6aa9e5:c.instructions+=7;goto B6aa9e5;
case 0x6aa9e7:c.instructions+=6;goto B6aa9e7;
case 0x6aa9ec:c.instructions+=5;goto B6aa9ec;
case 0x6aa9ee:c.instructions+=4;goto B6aa9ee;
case 0x6aa9f0:c.instructions+=3;goto B6aa9f0;
case 0x6aa9f1:c.instructions+=2;goto B6aa9f1;
case 0x6aa9f3:c.instructions+=1;goto B6aa9f3;
case 0x6aa9f8:goto L6aa9f8;
case 0x6aa9fb:c.instructions+=2;goto B6aa9fb;
case 0x6aa9fe:c.instructions+=1;goto B6aa9fe;
case 0x6aaa04:goto L6aaa04;
case 0x6aaa07:c.instructions+=5;goto B6aaa07;
case 0x6aaa0a:c.instructions+=4;goto B6aaa0a;
case 0x6aaa0d:c.instructions+=3;goto B6aaa0d;
case 0x6aaa0e:c.instructions+=2;goto B6aaa0e;
case 0x6aaa10:c.instructions+=1;goto B6aaa10;
case 0x6aaa15:goto L6aaa15;
case 0x6aaa18:c.instructions+=3;goto B6aaa18;
case 0x6aaa1b:c.instructions+=2;goto B6aaa1b;
case 0x6aaa1d:c.instructions+=1;goto B6aaa1d;
case 0x6aaa23:goto L6aaa23;
case 0x6aaa26:c.instructions+=6;goto B6aaa26;
case 0x6aaa2d:c.instructions+=5;goto B6aaa2d;
case 0x6aaa30:c.instructions+=4;goto B6aaa30;
case 0x6aaa32:c.instructions+=3;goto B6aaa32;
case 0x6aaa35:c.instructions+=2;goto B6aaa35;
case 0x6aaa38:c.instructions+=1;goto B6aaa38;
case 0x6aaa3a:goto L6aaa3a;
case 0x6aaa3d:goto L6aaa3d;
case 0x6aaa40:c.instructions+=10;goto B6aaa40;
case 0x6aaa41:c.instructions+=9;goto B6aaa41;
case 0x6aaa44:c.instructions+=8;goto B6aaa44;
case 0x6aaa46:c.instructions+=7;goto B6aaa46;
case 0x6aaa49:c.instructions+=6;goto B6aaa49;
case 0x6aaa4c:c.instructions+=5;goto B6aaa4c;
case 0x6aaa50:c.instructions+=4;goto B6aaa50;
case 0x6aaa52:c.instructions+=3;goto B6aaa52;
case 0x6aaa54:c.instructions+=2;goto B6aaa54;
case 0x6aaa57:c.instructions+=1;goto B6aaa57;
case 0x6aaa5d:goto L6aaa5d;
case 0x6aaa60:c.instructions+=2;goto B6aaa60;
case 0x6aaa63:c.instructions+=1;goto B6aaa63;
case 0x6aaa69:goto L6aaa69;
case 0x6aaa6c:c.instructions+=2;goto B6aaa6c;
case 0x6aaa6f:c.instructions+=1;goto B6aaa6f;
case 0x6aaa72:goto L6aaa72;
case 0x6aaa75:c.instructions+=11;goto B6aaa75;
case 0x6aaa78:c.instructions+=10;goto B6aaa78;
case 0x6aaa7a:c.instructions+=9;goto B6aaa7a;
case 0x6aaa7d:c.instructions+=8;goto B6aaa7d;
case 0x6aaa80:c.instructions+=7;goto B6aaa80;
case 0x6aaa83:c.instructions+=6;goto B6aaa83;
case 0x6aaa86:c.instructions+=5;goto B6aaa86;
case 0x6aaa89:c.instructions+=4;goto B6aaa89;
case 0x6aaa8c:c.instructions+=3;goto B6aaa8c;
case 0x6aaa8f:c.instructions+=2;goto B6aaa8f;
case 0x6aaa92:c.instructions+=1;goto B6aaa92;
case 0x6aaa94:goto L6aaa94;
case 0x6aaa97:c.instructions+=6;goto B6aaa97;
case 0x6aaa9a:c.instructions+=5;goto B6aaa9a;
case 0x6aaa9d:c.instructions+=4;goto B6aaa9d;
case 0x6aaaa0:c.instructions+=3;goto B6aaaa0;
case 0x6aaaa3:c.instructions+=2;goto B6aaaa3;
case 0x6aaaa6:c.instructions+=1;goto B6aaaa6;
case 0x6aaaa8:goto L6aaaa8;
case 0x6aaaab:c.instructions+=6;goto B6aaaab;
case 0x6aaaae:c.instructions+=5;goto B6aaaae;
case 0x6aaab1:c.instructions+=4;goto B6aaab1;
case 0x6aaab4:c.instructions+=3;goto B6aaab4;
case 0x6aaab7:c.instructions+=2;goto B6aaab7;
case 0x6aaaba:c.instructions+=1;goto B6aaaba;
case 0x6aaabc:goto L6aaabc;
case 0x6aaabf:c.instructions+=8;goto B6aaabf;
case 0x6aaac2:c.instructions+=7;goto B6aaac2;
case 0x6aaac5:c.instructions+=6;goto B6aaac5;
case 0x6aaac8:c.instructions+=5;goto B6aaac8;
case 0x6aaaca:c.instructions+=4;goto B6aaaca;
case 0x6aaacd:c.instructions+=3;goto B6aaacd;
case 0x6aaad0:c.instructions+=2;goto B6aaad0;
case 0x6aaad3:c.instructions+=1;goto B6aaad3;
case 0x6aaad5:goto L6aaad5;
case 0x6aaad8:c.instructions+=2;goto B6aaad8;
case 0x6aaadb:c.instructions+=1;goto B6aaadb;
case 0x6aaadd:goto L6aaadd;
case 0x6aaae0:c.instructions+=5;goto B6aaae0;
case 0x6aaae3:c.instructions+=4;goto B6aaae3;
case 0x6aaae6:c.instructions+=3;goto B6aaae6;
case 0x6aaae9:c.instructions+=2;goto B6aaae9;
case 0x6aaaec:c.instructions+=1;goto B6aaaec;
case 0x6aaaef:goto L6aaaef;
case 0x6aaaf2:c.instructions+=13;goto B6aaaf2;
case 0x6aaaf5:c.instructions+=12;goto B6aaaf5;
case 0x6aaaf8:c.instructions+=11;goto B6aaaf8;
case 0x6aaafb:c.instructions+=10;goto B6aaafb;
case 0x6aaafe:c.instructions+=9;goto B6aaafe;
case 0x6aab01:c.instructions+=8;goto B6aab01;
case 0x6aab04:c.instructions+=7;goto B6aab04;
case 0x6aab07:c.instructions+=6;goto B6aab07;
case 0x6aab0a:c.instructions+=5;goto B6aab0a;
case 0x6aab0d:c.instructions+=4;goto B6aab0d;
case 0x6aab10:c.instructions+=3;goto B6aab10;
case 0x6aab13:c.instructions+=2;goto B6aab13;
case 0x6aab16:c.instructions+=1;goto B6aab16;
case 0x6aab18:goto L6aab18;
case 0x6aab1b:c.instructions+=1;goto B6aab1b;
case 0x6aab21:goto L6aab21;
case 0x6aab23:c.instructions+=3;goto B6aab23;
case 0x6aab28:c.instructions+=2;goto B6aab28;
case 0x6aab2d:c.instructions+=1;goto B6aab2d;
case 0x6aab2f:goto L6aab2f;
case 0x6aab32:c.instructions+=12;goto B6aab32;
case 0x6aab35:c.instructions+=11;goto B6aab35;
case 0x6aab38:c.instructions+=10;goto B6aab38;
case 0x6aab3b:c.instructions+=9;goto B6aab3b;
case 0x6aab3e:c.instructions+=8;goto B6aab3e;
case 0x6aab41:c.instructions+=7;goto B6aab41;
case 0x6aab44:c.instructions+=6;goto B6aab44;
case 0x6aab47:c.instructions+=5;goto B6aab47;
case 0x6aab4a:c.instructions+=4;goto B6aab4a;
case 0x6aab4d:c.instructions+=3;goto B6aab4d;
case 0x6aab50:c.instructions+=2;goto B6aab50;
case 0x6aab53:c.instructions+=1;goto B6aab53;
case 0x6aab56:goto L6aab56;
case 0x6aab5a:goto L6aab5a;
case 0x6aab5d:c.instructions+=2;goto B6aab5d;
case 0x6aab60:c.instructions+=1;goto B6aab60;
case 0x6aab66:goto L6aab66;
case 0x6aab68:c.instructions+=3;goto B6aab68;
case 0x6aab6d:c.instructions+=2;goto B6aab6d;
case 0x6aab72:c.instructions+=1;goto B6aab72;
case 0x6aab78:goto L6aab78;
case 0x6aab7b:c.instructions+=2;goto B6aab7b;
case 0x6aab7e:c.instructions+=1;goto B6aab7e;
case 0x6aab80:goto L6aab80;
case 0x6aab83:c.instructions+=4;goto B6aab83;
case 0x6aab86:c.instructions+=3;goto B6aab86;
case 0x6aab88:c.instructions+=2;goto B6aab88;
case 0x6aab8a:c.instructions+=1;goto B6aab8a;
case 0x6aab8c:goto L6aab8c;
case 0x6aab8d:c.instructions+=8;goto B6aab8d;
case 0x6aab8f:c.instructions+=7;goto B6aab8f;
case 0x6aab90:c.instructions+=6;goto B6aab90;
case 0x6aab93:c.instructions+=5;goto B6aab93;
case 0x6aab96:c.instructions+=4;goto B6aab96;
case 0x6aab98:c.instructions+=3;goto B6aab98;
case 0x6aab9b:c.instructions+=2;goto B6aab9b;
case 0x6aaba1:c.instructions+=1;goto B6aaba1;
case 0x6aaba6:goto L6aaba6;
case 0x6aaba9:c.instructions+=6;goto B6aaba9;
case 0x6aabad:c.instructions+=5;goto B6aabad;
case 0x6aabb0:c.instructions+=4;goto B6aabb0;
case 0x6aabb2:c.instructions+=3;goto B6aabb2;
case 0x6aabb5:c.instructions+=2;goto B6aabb5;
case 0x6aabb8:c.instructions+=1;goto B6aabb8;
case 0x6aabbe:goto L6aabbe;
case 0x6aabc1:c.instructions+=21;goto B6aabc1;
case 0x6aabc3:c.instructions+=20;goto B6aabc3;
case 0x6aabc6:c.instructions+=19;goto B6aabc6;
case 0x6aabc9:c.instructions+=18;goto B6aabc9;
case 0x6aabcc:c.instructions+=17;goto B6aabcc;
case 0x6aabce:c.instructions+=16;goto B6aabce;
case 0x6aabd1:c.instructions+=15;goto B6aabd1;
case 0x6aabd4:c.instructions+=14;goto B6aabd4;
case 0x6aabd7:c.instructions+=13;goto B6aabd7;
case 0x6aabda:c.instructions+=12;goto B6aabda;
case 0x6aabdc:c.instructions+=11;goto B6aabdc;
case 0x6aabdf:c.instructions+=10;goto B6aabdf;
case 0x6aabe2:c.instructions+=9;goto B6aabe2;
case 0x6aabe5:c.instructions+=8;goto B6aabe5;
case 0x6aabe7:c.instructions+=7;goto B6aabe7;
case 0x6aabea:c.instructions+=6;goto B6aabea;
case 0x6aabed:c.instructions+=5;goto B6aabed;
case 0x6aabef:c.instructions+=4;goto B6aabef;
case 0x6aabf2:c.instructions+=3;goto B6aabf2;
case 0x6aabf3:c.instructions+=2;goto B6aabf3;
case 0x6aabf5:c.instructions+=1;goto B6aabf5;
case 0x6aabfa:goto L6aabfa;
case 0x6aabfc:c.instructions+=1;goto B6aabfc;
case 0x6aac02:goto L6aac02;
case 0x6aac05:goto L6aac05;
case 0x6aac08:c.instructions+=5;goto B6aac08;
case 0x6aac0b:c.instructions+=4;goto B6aac0b;
case 0x6aac0d:c.instructions+=3;goto B6aac0d;
case 0x6aac10:c.instructions+=2;goto B6aac10;
case 0x6aac13:c.instructions+=1;goto B6aac13;
case 0x6aac16:goto L6aac16;
case 0x6aac19:c.instructions+=4;goto B6aac19;
case 0x6aac1c:c.instructions+=3;goto B6aac1c;
case 0x6aac20:c.instructions+=2;goto B6aac20;
case 0x6aac23:c.instructions+=1;goto B6aac23;
case 0x6aac29:goto L6aac29;
case 0x6aac2d:c.instructions+=1;goto B6aac2d;
case 0x6aac33:goto L6aac33;
case 0x6aac37:c.instructions+=4;goto B6aac37;
case 0x6aac39:c.instructions+=3;goto B6aac39;
case 0x6aac3b:c.instructions+=2;goto B6aac3b;
case 0x6aac3d:c.instructions+=1;goto B6aac3d;
case 0x6aac3f:goto L6aac3f;
case 0x6aac44:c.instructions+=1;goto B6aac44;
case 0x6aac49:goto L6aac49;
case 0x6aac4d:c.instructions+=1;goto B6aac4d;
case 0x6aac4f:goto L6aac4f;
case 0x6aac52:c.instructions+=12;goto B6aac52;
case 0x6aac55:c.instructions+=11;goto B6aac55;
case 0x6aac58:c.instructions+=10;goto B6aac58;
case 0x6aac5c:c.instructions+=9;goto B6aac5c;
case 0x6aac5e:c.instructions+=8;goto B6aac5e;
case 0x6aac61:c.instructions+=7;goto B6aac61;
case 0x6aac64:c.instructions+=6;goto B6aac64;
case 0x6aac67:c.instructions+=5;goto B6aac67;
case 0x6aac6a:c.instructions+=4;goto B6aac6a;
case 0x6aac6c:c.instructions+=3;goto B6aac6c;
case 0x6aac72:c.instructions+=2;goto B6aac72;
case 0x6aac78:c.instructions+=1;goto B6aac78;
case 0x6aac7a:goto L6aac7a;
case 0x6aac7d:c.instructions+=12;goto B6aac7d;
case 0x6aac80:c.instructions+=11;goto B6aac80;
case 0x6aac83:c.instructions+=10;goto B6aac83;
case 0x6aac86:c.instructions+=9;goto B6aac86;
case 0x6aac89:c.instructions+=8;goto B6aac89;
case 0x6aac8c:c.instructions+=7;goto B6aac8c;
case 0x6aac8f:c.instructions+=6;goto B6aac8f;
case 0x6aac92:c.instructions+=5;goto B6aac92;
case 0x6aac95:c.instructions+=4;goto B6aac95;
case 0x6aac98:c.instructions+=3;goto B6aac98;
case 0x6aac9b:c.instructions+=2;goto B6aac9b;
case 0x6aac9d:c.instructions+=1;goto B6aac9d;
case 0x6aac9f:goto L6aac9f;
case 0x6aaca2:c.instructions+=2;goto B6aaca2;
case 0x6aaca6:c.instructions+=1;goto B6aaca6;
case 0x6aaca8:goto L6aaca8;
case 0x6aacaa:goto L6aacaa;
case 0x6aacad:c.instructions+=4;goto B6aacad;
case 0x6aacb2:c.instructions+=3;goto B6aacb2;
case 0x6aacb7:c.instructions+=2;goto B6aacb7;
case 0x6aacb8:c.instructions+=1;goto B6aacb8;
case 0x6aacbd:goto L6aacbd;
case 0x6aacbf:goto L6aacbf;
case 0x6aacc2:c.instructions+=1;goto B6aacc2;
case 0x6aacc8:goto L6aacc8;
case 0x6aaccb:c.instructions+=5;goto B6aaccb;
case 0x6aacce:c.instructions+=4;goto B6aacce;
case 0x6aacd1:c.instructions+=3;goto B6aacd1;
case 0x6aacd3:c.instructions+=2;goto B6aacd3;
case 0x6aacd6:c.instructions+=1;goto B6aacd6;
case 0x6aacdb:goto L6aacdb;
case 0x6aacde:c.instructions+=15;goto B6aacde;
case 0x6aace1:c.instructions+=14;goto B6aace1;
case 0x6aace4:c.instructions+=13;goto B6aace4;
case 0x6aace6:c.instructions+=12;goto B6aace6;
case 0x6aace8:c.instructions+=11;goto B6aace8;
case 0x6aaceb:c.instructions+=10;goto B6aaceb;
case 0x6aaced:c.instructions+=9;goto B6aaced;
case 0x6aacf0:c.instructions+=8;goto B6aacf0;
case 0x6aacf3:c.instructions+=7;goto B6aacf3;
case 0x6aacf6:c.instructions+=6;goto B6aacf6;
case 0x6aacf9:c.instructions+=5;goto B6aacf9;
case 0x6aacfc:c.instructions+=4;goto B6aacfc;
case 0x6aacff:c.instructions+=3;goto B6aacff;
case 0x6aad01:c.instructions+=2;goto B6aad01;
case 0x6aad04:c.instructions+=1;goto B6aad04;
case 0x6aad07:goto L6aad07;
case 0x6aad09:goto L6aad09;
case 0x6aad0b:c.instructions+=2;goto B6aad0b;
case 0x6aad0e:c.instructions+=1;goto B6aad0e;
case 0x6aad12:goto L6aad12;
case 0x6aad14:goto L6aad14;
case 0x6aad16:goto L6aad16;
case 0x6aad1a:c.instructions+=1;goto B6aad1a;
case 0x6aad1c:goto L6aad1c;
case 0x6aad1d:c.instructions+=8;goto B6aad1d;
case 0x6aad1f:c.instructions+=7;goto B6aad1f;
case 0x6aad20:c.instructions+=6;goto B6aad20;
case 0x6aad23:c.instructions+=5;goto B6aad23;
case 0x6aad25:c.instructions+=4;goto B6aad25;
case 0x6aad27:c.instructions+=3;goto B6aad27;
case 0x6aad2a:c.instructions+=2;goto B6aad2a;
case 0x6aad2c:c.instructions+=1;goto B6aad2c;
case 0x6aad31:goto L6aad31;
case 0x6aad34:c.instructions+=2;goto B6aad34;
case 0x6aad37:c.instructions+=1;goto B6aad37;
case 0x6aad3d:goto L6aad3d;
case 0x6aad40:c.instructions+=2;goto B6aad40;
case 0x6aad42:c.instructions+=1;goto B6aad42;
case 0x6aad44:goto L6aad44;
case 0x6aad46:c.instructions+=1;goto B6aad46;
case 0x6aad49:goto L6aad49;
case 0x6aad4c:c.instructions+=6;goto B6aad4c;
case 0x6aad4f:c.instructions+=5;goto B6aad4f;
case 0x6aad52:c.instructions+=4;goto B6aad52;
case 0x6aad55:c.instructions+=3;goto B6aad55;
case 0x6aad58:c.instructions+=2;goto B6aad58;
case 0x6aad59:c.instructions+=1;goto B6aad59;
case 0x6aad5b:goto L6aad5b;
case 0x6aad5e:c.instructions+=1;goto B6aad5e;
case 0x6aad63:goto L6aad63;
case 0x6aad66:c.instructions+=4;goto B6aad66;
case 0x6aad68:c.instructions+=3;goto B6aad68;
case 0x6aad6b:c.instructions+=2;goto B6aad6b;
case 0x6aad6d:c.instructions+=1;goto B6aad6d;
case 0x6aad72:goto L6aad72;
case 0x6aad75:c.instructions+=2;goto B6aad75;
case 0x6aad78:c.instructions+=1;goto B6aad78;
case 0x6aad7e:goto L6aad7e;
case 0x6aad81:c.instructions+=7;goto B6aad81;
case 0x6aad84:c.instructions+=6;goto B6aad84;
case 0x6aad87:c.instructions+=5;goto B6aad87;
case 0x6aad8a:c.instructions+=4;goto B6aad8a;
case 0x6aad8b:c.instructions+=3;goto B6aad8b;
case 0x6aad8d:c.instructions+=2;goto B6aad8d;
case 0x6aad90:c.instructions+=1;goto B6aad90;
case 0x6aad95:goto L6aad95;
case 0x6aad98:c.instructions+=6;goto B6aad98;
case 0x6aad9b:c.instructions+=5;goto B6aad9b;
case 0x6aad9e:c.instructions+=4;goto B6aad9e;
case 0x6aada1:c.instructions+=3;goto B6aada1;
case 0x6aada3:c.instructions+=2;goto B6aada3;
case 0x6aada6:c.instructions+=1;goto B6aada6;
case 0x6aada9:goto L6aada9;
case 0x6aadab:goto L6aadab;
case 0x6aadad:c.instructions+=2;goto B6aadad;
case 0x6aadb0:c.instructions+=1;goto B6aadb0;
case 0x6aadb3:goto L6aadb3;
case 0x6aadb5:goto L6aadb5;
case 0x6aadb8:c.instructions+=5;goto B6aadb8;
case 0x6aadbb:c.instructions+=4;goto B6aadbb;
case 0x6aadbe:c.instructions+=3;goto B6aadbe;
case 0x6aadc1:c.instructions+=2;goto B6aadc1;
case 0x6aadc3:c.instructions+=1;goto B6aadc3;
case 0x6aadc6:goto L6aadc6;
case 0x6aadc8:goto L6aadc8;
case 0x6aadca:c.instructions+=1;goto B6aadca;
case 0x6aadcd:goto L6aadcd;
case 0x6aadcf:goto L6aadcf;
case 0x6aadd1:c.instructions+=2;goto B6aadd1;
case 0x6aadd4:c.instructions+=1;goto B6aadd4;
case 0x6aadd6:goto L6aadd6;
case 0x6aadd9:c.instructions+=10;goto B6aadd9;
case 0x6aaddc:c.instructions+=9;goto B6aaddc;
case 0x6aaddf:c.instructions+=8;goto B6aaddf;
case 0x6aade2:c.instructions+=7;goto B6aade2;
case 0x6aade5:c.instructions+=6;goto B6aade5;
case 0x6aade8:c.instructions+=5;goto B6aade8;
case 0x6aadeb:c.instructions+=4;goto B6aadeb;
case 0x6aadee:c.instructions+=3;goto B6aadee;
case 0x6aadef:c.instructions+=2;goto B6aadef;
case 0x6aadf2:c.instructions+=1;goto B6aadf2;
case 0x6aadf4:goto L6aadf4;
case 0x6aadf7:c.instructions+=3;goto B6aadf7;
case 0x6aadfa:c.instructions+=2;goto B6aadfa;
case 0x6aadfd:c.instructions+=1;goto B6aadfd;
case 0x6aae03:goto L6aae03;
case 0x6aae05:c.instructions+=2;goto B6aae05;
case 0x6aae08:c.instructions+=1;goto B6aae08;
case 0x6aae0a:goto L6aae0a;
case 0x6aae0d:c.instructions+=5;goto B6aae0d;
case 0x6aae10:c.instructions+=4;goto B6aae10;
case 0x6aae13:c.instructions+=3;goto B6aae13;
case 0x6aae14:c.instructions+=2;goto B6aae14;
case 0x6aae17:c.instructions+=1;goto B6aae17;
case 0x6aae19:goto L6aae19;
case 0x6aae1b:c.instructions+=1;goto B6aae1b;
case 0x6aae20:goto L6aae20;
case 0x6aae22:c.instructions+=1;goto B6aae22;
case 0x6aae24:goto L6aae24;
case 0x6aae26:c.instructions+=1;goto B6aae26;
case 0x6aae28:goto L6aae28;
case 0x6aae2a:c.instructions+=1;goto B6aae2a;
case 0x6aae2f:goto L6aae2f;
case 0x6aae31:c.instructions+=1;goto B6aae31;
case 0x6aae33:goto L6aae33;
case 0x6aae35:c.instructions+=1;goto B6aae35;
case 0x6aae37:goto L6aae37;
case 0x6aae39:c.instructions+=1;goto B6aae39;
case 0x6aae3e:goto L6aae3e;
case 0x6aae40:c.instructions+=1;goto B6aae40;
case 0x6aae42:goto L6aae42;
case 0x6aae44:c.instructions+=1;goto B6aae44;
case 0x6aae46:goto L6aae46;
case 0x6aae48:goto L6aae48;
case 0x6aae4b:c.instructions+=1;goto B6aae4b;
case 0x6aae50:goto L6aae50;
case 0x6aae51:c.instructions+=1;goto B6aae51;
case 0x6aae53:goto L6aae53;
case 0x6aae54:c.instructions+=4;goto B6aae54;
case 0x6aae55:c.instructions+=3;goto B6aae55;
case 0x6aae56:c.instructions+=2;goto B6aae56;
case 0x6aae57:c.instructions+=1;goto B6aae57;
case 0x6aae58:goto L6aae58;
case 0x6aae5d:c.instructions+=1;goto B6aae5d;
case 0x6aae5f:goto L6aae5f;
case 0x6aae64:c.instructions+=1;goto B6aae64;
case 0x6aae66:goto L6aae66;
case 0x6aae68:c.instructions+=8;goto B6aae68;
case 0x6aae69:c.instructions+=7;goto B6aae69;
case 0x6aae6b:c.instructions+=6;goto B6aae6b;
case 0x6aae71:c.instructions+=5;goto B6aae71;
case 0x6aae72:c.instructions+=4;goto B6aae72;
case 0x6aae74:c.instructions+=3;goto B6aae74;
case 0x6aae76:c.instructions+=2;goto B6aae76;
case 0x6aae7d:c.instructions+=1;goto B6aae7d;
case 0x6aae7f:goto L6aae7f;
case 0x6aae80:c.instructions+=1;goto B6aae80;
case 0x6aae85:goto L6aae85;
case 0x6aae86:c.instructions+=5;goto B6aae86;
case 0x6aae88:c.instructions+=4;goto B6aae88;
case 0x6aae8b:c.instructions+=3;goto B6aae8b;
case 0x6aae8c:c.instructions+=2;goto B6aae8c;
case 0x6aae8f:c.instructions+=1;goto B6aae8f;
case 0x6aae91:goto L6aae91;
case 0x6aae94:c.instructions+=5;goto B6aae94;
case 0x6aae97:c.instructions+=4;goto B6aae97;
case 0x6aae98:c.instructions+=3;goto B6aae98;
case 0x6aae9b:c.instructions+=2;goto B6aae9b;
case 0x6aae9e:c.instructions+=1;goto B6aae9e;
case 0x6aaea0:goto L6aaea0;
case 0x6aaea2:c.instructions+=2;goto B6aaea2;
case 0x6aaea5:c.instructions+=1;goto B6aaea5;
case 0x6aaea7:goto L6aaea7;
case 0x6aaeaa:c.instructions+=4;goto B6aaeaa;
case 0x6aaead:c.instructions+=3;goto B6aaead;
case 0x6aaeb0:c.instructions+=2;goto B6aaeb0;
case 0x6aaeb3:c.instructions+=1;goto B6aaeb3;
case 0x6aaeb5:goto L6aaeb5;
case 0x6aaeb8:c.instructions+=4;goto B6aaeb8;
case 0x6aaebb:c.instructions+=3;goto B6aaebb;
case 0x6aaebe:c.instructions+=2;goto B6aaebe;
case 0x6aaec1:c.instructions+=1;goto B6aaec1;
case 0x6aaec3:goto L6aaec3;
case 0x6aaec6:c.instructions+=1;goto B6aaec6;
case 0x6aaec8:goto L6aaec8;
case 0x6aaecb:c.instructions+=3;goto B6aaecb;
case 0x6aaece:c.instructions+=2;goto B6aaece;
case 0x6aaed1:c.instructions+=1;goto B6aaed1;
case 0x6aaed3:goto L6aaed3;
case 0x6aaed6:goto L6aaed6;
case 0x6aaed7:c.instructions+=2;goto B6aaed7;
case 0x6aaeda:c.instructions+=1;goto B6aaeda;
case 0x6aaedc:goto L6aaedc;
case 0x6aaede:c.instructions+=2;goto B6aaede;
case 0x6aaee1:c.instructions+=1;goto B6aaee1;
case 0x6aaee3:goto L6aaee3;
case 0x6aaee6:c.instructions+=1;goto B6aaee6;
case 0x6aaee9:goto L6aaee9;
case 0x6aaeeb:c.instructions+=4;goto B6aaeeb;
case 0x6aaeee:c.instructions+=3;goto B6aaeee;
case 0x6aaef1:c.instructions+=2;goto B6aaef1;
case 0x6aaef2:c.instructions+=1;goto B6aaef2;
case 0x6aaef4:goto L6aaef4;
case 0x6aaef6:c.instructions+=3;goto B6aaef6;
case 0x6aaef9:c.instructions+=2;goto B6aaef9;
case 0x6aaefa:c.instructions+=1;goto B6aaefa;
case 0x6aaeff:goto L6aaeff;
case 0x6aaf01:c.instructions+=3;goto B6aaf01;
case 0x6aaf02:c.instructions+=2;goto B6aaf02;
case 0x6aaf05:c.instructions+=1;goto B6aaf05;
case 0x6aaf0b:goto L6aaf0b;
case 0x6aaf0e:c.instructions+=4;goto B6aaf0e;
case 0x6aaf10:c.instructions+=3;goto B6aaf10;
case 0x6aaf12:c.instructions+=2;goto B6aaf12;
case 0x6aaf15:c.instructions+=1;goto B6aaf15;
case 0x6aaf17:goto L6aaf17;
case 0x6aaf19:goto L6aaf19;
case 0x6aaf1b:c.instructions+=1;goto B6aaf1b;
case 0x6aaf1e:goto L6aaf1e;
case 0x6aaf20:goto L6aaf20;
case 0x6aaf22:c.instructions+=3;goto B6aaf22;
case 0x6aaf24:c.instructions+=2;goto B6aaf24;
case 0x6aaf27:c.instructions+=1;goto B6aaf27;
case 0x6aaf29:goto L6aaf29;
case 0x6aaf2c:goto L6aaf2c;
case 0x6aaf2f:c.instructions+=13;goto B6aaf2f;
case 0x6aaf32:c.instructions+=12;goto B6aaf32;
case 0x6aaf35:c.instructions+=11;goto B6aaf35;
case 0x6aaf37:c.instructions+=10;goto B6aaf37;
case 0x6aaf39:c.instructions+=9;goto B6aaf39;
case 0x6aaf3c:c.instructions+=8;goto B6aaf3c;
case 0x6aaf3e:c.instructions+=7;goto B6aaf3e;
case 0x6aaf41:c.instructions+=6;goto B6aaf41;
case 0x6aaf44:c.instructions+=5;goto B6aaf44;
case 0x6aaf47:c.instructions+=4;goto B6aaf47;
case 0x6aaf4a:c.instructions+=3;goto B6aaf4a;
case 0x6aaf4b:c.instructions+=2;goto B6aaf4b;
case 0x6aaf4e:c.instructions+=1;goto B6aaf4e;
case 0x6aaf50:goto L6aaf50;
case 0x6aaf52:c.instructions+=3;goto B6aaf52;
case 0x6aaf54:c.instructions+=2;goto B6aaf54;
case 0x6aaf57:c.instructions+=1;goto B6aaf57;
case 0x6aaf59:goto L6aaf59;
case 0x6aaf5c:c.instructions+=4;goto B6aaf5c;
case 0x6aaf5f:c.instructions+=3;goto B6aaf5f;
case 0x6aaf62:c.instructions+=2;goto B6aaf62;
case 0x6aaf65:c.instructions+=1;goto B6aaf65;
case 0x6aaf67:goto L6aaf67;
case 0x6aaf6a:c.instructions+=4;goto B6aaf6a;
case 0x6aaf6d:c.instructions+=3;goto B6aaf6d;
case 0x6aaf70:c.instructions+=2;goto B6aaf70;
case 0x6aaf72:c.instructions+=1;goto B6aaf72;
case 0x6aaf74:goto L6aaf74;
case 0x6aaf77:c.instructions+=5;goto B6aaf77;
case 0x6aaf7a:c.instructions+=4;goto B6aaf7a;
case 0x6aaf7d:c.instructions+=3;goto B6aaf7d;
case 0x6aaf7e:c.instructions+=2;goto B6aaf7e;
case 0x6aaf80:c.instructions+=1;goto B6aaf80;
case 0x6aaf82:goto L6aaf82;
case 0x6aaf84:goto L6aaf84;
case 0x6aaf85:c.instructions+=2;goto B6aaf85;
case 0x6aaf88:c.instructions+=1;goto B6aaf88;
case 0x6aaf8a:goto L6aaf8a;
case 0x6aaf8d:c.instructions+=2;goto B6aaf8d;
case 0x6aaf90:c.instructions+=1;goto B6aaf90;
case 0x6aaf92:goto L6aaf92;
case 0x6aaf95:c.instructions+=7;goto B6aaf95;
case 0x6aaf98:c.instructions+=6;goto B6aaf98;
case 0x6aaf9b:c.instructions+=5;goto B6aaf9b;
case 0x6aaf9d:c.instructions+=4;goto B6aaf9d;
case 0x6aaf9f:c.instructions+=3;goto B6aaf9f;
case 0x6aafa5:c.instructions+=2;goto B6aafa5;
case 0x6aafab:c.instructions+=1;goto B6aafab;
case 0x6aafad:goto L6aafad;
case 0x6aafb3:c.instructions+=2;goto B6aafb3;
case 0x6aafb9:c.instructions+=1;goto B6aafb9;
case 0x6aafbb:goto L6aafbb;
case 0x6aafbd:c.instructions+=2;goto B6aafbd;
case 0x6aafc0:c.instructions+=1;goto B6aafc0;
case 0x6aafc2:goto L6aafc2;
case 0x6aafc5:c.instructions+=9;goto B6aafc5;
case 0x6aafc8:c.instructions+=8;goto B6aafc8;
case 0x6aafcb:c.instructions+=7;goto B6aafcb;
case 0x6aafce:c.instructions+=6;goto B6aafce;
case 0x6aafd1:c.instructions+=5;goto B6aafd1;
case 0x6aafd4:c.instructions+=4;goto B6aafd4;
case 0x6aafd7:c.instructions+=3;goto B6aafd7;
case 0x6aafda:c.instructions+=2;goto B6aafda;
case 0x6aafdc:c.instructions+=1;goto B6aafdc;
case 0x6aafde:goto L6aafde;
case 0x6aafe1:c.instructions+=1;goto B6aafe1;
case 0x6aafe8:goto L6aafe8;
case 0x6aafe9:c.instructions+=2;goto B6aafe9;
case 0x6aafec:c.instructions+=1;goto B6aafec;
case 0x6aafee:goto L6aafee;
case 0x6aaff1:c.instructions+=3;goto B6aaff1;
case 0x6aaff4:c.instructions+=2;goto B6aaff4;
case 0x6aaff7:c.instructions+=1;goto B6aaff7;
case 0x6aaff9:goto L6aaff9;
case 0x6aaffc:c.instructions+=2;goto B6aaffc;
case 0x6aaffe:c.instructions+=1;goto B6aaffe;
default:missing_instruction(c.pc);}
B6aa002:L6aa002:{c.instructions+=5;NFSU2_TR(0x6aa002);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aa005:{NFSU2_TR(0x6aa005);
__builtin_memmove((R+0),(R+4),4);
}
B6aa007:{NFSU2_TR(0x6aa007);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6aa00a:{NFSU2_TR(0x6aa00a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aa00d:{NFSU2_TR(0x6aa00d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aa010:L6aa010:{c.instructions+=14;NFSU2_TR(0x6aa010);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aa013:{NFSU2_TR(0x6aa013);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aa016:{NFSU2_TR(0x6aa016);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6aa019:{NFSU2_TR(0x6aa019);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6aa01c:{NFSU2_TR(0x6aa01c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6aa020:{NFSU2_TR(0x6aa020);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6aa023:{NFSU2_TR(0x6aa023);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aa026:{NFSU2_TR(0x6aa026);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6aa029:{NFSU2_TR(0x6aa029);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aa02c:{NFSU2_TR(0x6aa02c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6aa02f:{NFSU2_TR(0x6aa02f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6aa033:{NFSU2_TR(0x6aa033);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6aa036:{NFSU2_TR(0x6aa036);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6aa039:{NFSU2_TR(0x6aa039);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6aa010u);}goto L6aa010;}}
}
B6aa03b:L6aa03b:{c.instructions+=1;NFSU2_TR(0x6aa03b);
{goto L6aa07f;}
}
B6aa03d:L6aa03d:{c.instructions+=2;NFSU2_TR(0x6aa03d);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aa03f:{NFSU2_TR(0x6aa03f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6aa07f;}}
}
B6aa041:L6aa041:{c.instructions+=7;NFSU2_TR(0x6aa041);
__builtin_memmove((R+0),(R+4),4);
}
B6aa043:{NFSU2_TR(0x6aa043);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6aa046:{NFSU2_TR(0x6aa046);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aa049:{NFSU2_TR(0x6aa049);
__builtin_memmove((R+0),(R+4),4);
}
B6aa04b:{NFSU2_TR(0x6aa04b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6aa04e:{NFSU2_TR(0x6aa04e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aa051:{NFSU2_TR(0x6aa051);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aa054:L6aa054:{c.instructions+=14;NFSU2_TR(0x6aa054);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aa057:{NFSU2_TR(0x6aa057);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aa05a:{NFSU2_TR(0x6aa05a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6aa05d:{NFSU2_TR(0x6aa05d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6aa060:{NFSU2_TR(0x6aa060);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6aa064:{NFSU2_TR(0x6aa064);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6aa067:{NFSU2_TR(0x6aa067);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aa06a:{NFSU2_TR(0x6aa06a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6aa06d:{NFSU2_TR(0x6aa06d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aa070:{NFSU2_TR(0x6aa070);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6aa073:{NFSU2_TR(0x6aa073);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6aa077:{NFSU2_TR(0x6aa077);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6aa07a:{NFSU2_TR(0x6aa07a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6aa07d:{NFSU2_TR(0x6aa07d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6aa054u);}goto L6aa054;}}
}
B6aa07f:L6aa07f:{c.instructions+=3;NFSU2_TR(0x6aa07f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6aa083:{NFSU2_TR(0x6aa083);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aa085:{NFSU2_TR(0x6aa085);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6aa13d;}}
}
B6aa08b:L6aa08b:{c.instructions+=3;NFSU2_TR(0x6aa08b);
__builtin_memmove((R+0),(R+4),4);
}
B6aa08d:{NFSU2_TR(0x6aa08d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6aa090:{NFSU2_TR(0x6aa090);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aa093:L6aa093:{c.instructions+=11;NFSU2_TR(0x6aa093);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6aa096:{NFSU2_TR(0x6aa096);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6aa098:{NFSU2_TR(0x6aa098);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6aa099:{NFSU2_TR(0x6aa099);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6aa09a:{NFSU2_TR(0x6aa09a);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6aa09d:{NFSU2_TR(0x6aa09d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6aa09f:{NFSU2_TR(0x6aa09f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6aa0a1:{NFSU2_TR(0x6aa0a1);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6aa0a7:{NFSU2_TR(0x6aa0a7);
__builtin_memmove((R+4),(R+24),4);
}
B6aa0a9:{NFSU2_TR(0x6aa0a9);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6aa0ac:{NFSU2_TR(0x6aa0ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aa0b1ull));
TAIL_STATIC(0x699c39u,699);
}
B6aa0b1:L6aa0b1:{c.instructions+=12;NFSU2_TR(0x6aa0b1);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6aa0b3:{NFSU2_TR(0x6aa0b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aa0b6:{NFSU2_TR(0x6aa0b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aa0b9:{NFSU2_TR(0x6aa0b9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6aa0ba:{NFSU2_TR(0x6aa0ba);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6aa0bb:{NFSU2_TR(0x6aa0bb);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6aa0be:{NFSU2_TR(0x6aa0be);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6aa0c0:{NFSU2_TR(0x6aa0c0);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6aa0c3:{NFSU2_TR(0x6aa0c3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6aa0c5:{NFSU2_TR(0x6aa0c5);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6aa0cb:{NFSU2_TR(0x6aa0cb);
__builtin_memmove((R+4),(R+24),4);
}
B6aa0cd:{NFSU2_TR(0x6aa0cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aa0d2ull));
TAIL_STATIC(0x699c39u,699);
}
B6aa0d2:L6aa0d2:{c.instructions+=13;NFSU2_TR(0x6aa0d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aa0d5:{NFSU2_TR(0x6aa0d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aa0d8:{NFSU2_TR(0x6aa0d8);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6aa0db:{NFSU2_TR(0x6aa0db);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aa0de:{NFSU2_TR(0x6aa0de);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6aa0e1:{NFSU2_TR(0x6aa0e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aa0e4:{NFSU2_TR(0x6aa0e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aa0e7:{NFSU2_TR(0x6aa0e7);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6aa0ea:{NFSU2_TR(0x6aa0ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aa0ed:{NFSU2_TR(0x6aa0ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aa0f0:{NFSU2_TR(0x6aa0f0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6aa0f3:{NFSU2_TR(0x6aa0f3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6aa0f6:{NFSU2_TR(0x6aa0f6);
if(r1(R+518)){{goto L6aa1e2;}}
}
B6aa0fc:L6aa0fc:{c.instructions+=4;NFSU2_TR(0x6aa0fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aa0ff:{NFSU2_TR(0x6aa0ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aa102:{NFSU2_TR(0x6aa102);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6aa106:{NFSU2_TR(0x6aa106);
if(r1(R+518)){{goto L6aa1e2;}}
}
B6aa10c:L6aa10c:{c.instructions+=15;NFSU2_TR(0x6aa10c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aa10f:{NFSU2_TR(0x6aa10f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aa112:{NFSU2_TR(0x6aa112);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6aa115:{NFSU2_TR(0x6aa115);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6aa118:{NFSU2_TR(0x6aa118);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6aa11c:{NFSU2_TR(0x6aa11c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6aa11f:{NFSU2_TR(0x6aa11f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aa122:{NFSU2_TR(0x6aa122);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aa125:{NFSU2_TR(0x6aa125);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aa128:{NFSU2_TR(0x6aa128);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6aa12b:{NFSU2_TR(0x6aa12b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aa12e:{NFSU2_TR(0x6aa12e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6aa131:{NFSU2_TR(0x6aa131);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aa134:{NFSU2_TR(0x6aa134);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6aa137:{NFSU2_TR(0x6aa137);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6aa093u);}goto L6aa093;}}
}
B6aa13d:L6aa13d:{c.instructions+=4;NFSU2_TR(0x6aa13d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aa140:{NFSU2_TR(0x6aa140);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aa143:{NFSU2_TR(0x6aa143);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x3ull))));
}
B6aa146:{NFSU2_TR(0x6aa146);
{goto L6aa15c;}
}
B6aa148:L6aa148:{c.instructions+=7;NFSU2_TR(0x6aa148);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6aa14b:{NFSU2_TR(0x6aa14b);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B6aa14c:{NFSU2_TR(0x6aa14c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aa14f:{NFSU2_TR(0x6aa14f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6aa152:{NFSU2_TR(0x6aa152);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6aa155:{NFSU2_TR(0x6aa155);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6aa159:{NFSU2_TR(0x6aa159);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aa15c:L6aa15c:{c.instructions+=2;NFSU2_TR(0x6aa15c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6aa15e:{NFSU2_TR(0x6aa15e);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6aa148u);}goto L6aa148;}}
}
B6aa160:L6aa160:{c.instructions+=13;NFSU2_TR(0x6aa160);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aa163:{NFSU2_TR(0x6aa163);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6aa166:{NFSU2_TR(0x6aa166);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6aa16a:{NFSU2_TR(0x6aa16a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aa16d:{NFSU2_TR(0x6aa16d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6aa170:{NFSU2_TR(0x6aa170);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6aa174:{NFSU2_TR(0x6aa174);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aa177:{NFSU2_TR(0x6aa177);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6aa17a:{NFSU2_TR(0x6aa17a);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6aa17e:{NFSU2_TR(0x6aa17e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+12)),r4(U+0));
}
B6aa181:{NFSU2_TR(0x6aa181);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6aa188:{NFSU2_TR(0x6aa188);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6aa18c:{NFSU2_TR(0x6aa18c);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x6a97f3u,6a9);}
}
B6aa192:L6aa192:{c.instructions+=2;NFSU2_TR(0x6aa192);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6aa196:{NFSU2_TR(0x6aa196);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6aa1bf;}}
}
B6aa198:L6aa198:{c.instructions+=2;NFSU2_TR(0x6aa198);
__builtin_memmove((R+4),(R+24),4);
}
B6aa19a:{NFSU2_TR(0x6aa19a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aa19full));
TAIL_STATIC(0x69f745u,69f);
}
B6aa19f:L6aa19f:{c.instructions+=3;NFSU2_TR(0x6aa19f);
__builtin_memmove((R+28),(R+0),4);
}
B6aa1a1:{NFSU2_TR(0x6aa1a1);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6aa1a3:{NFSU2_TR(0x6aa1a3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6aa1c9;}}
}
B6aa1a5:L6aa1a5:{c.instructions+=2;NFSU2_TR(0x6aa1a5);
__builtin_memmove((R+4),(R+24),4);
}
B6aa1a7:{NFSU2_TR(0x6aa1a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aa1acull));
TAIL_STATIC(0x69a74eu,69a);
}
B6aa1ac:L6aa1ac:{c.instructions+=3;NFSU2_TR(0x6aa1ac);
__builtin_memmove((R+28),(R+0),4);
}
B6aa1ae:{NFSU2_TR(0x6aa1ae);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6aa1b0:{NFSU2_TR(0x6aa1b0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6aa1c9;}}
}
B6aa1b2:L6aa1b2:{c.instructions+=2;NFSU2_TR(0x6aa1b2);
__builtin_memmove((R+4),(R+24),4);
}
B6aa1b4:{NFSU2_TR(0x6aa1b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aa1b9ull));
TAIL_STATIC(0x6a0d84u,6a0);
}
B6aa1b9:L6aa1b9:{c.instructions+=3;NFSU2_TR(0x6aa1b9);
__builtin_memmove((R+28),(R+0),4);
}
B6aa1bb:{NFSU2_TR(0x6aa1bb);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6aa1bd:{NFSU2_TR(0x6aa1bd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6aa1c9;}}
}
B6aa1bf:L6aa1bf:{c.instructions+=4;NFSU2_TR(0x6aa1bf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6aa1c1:{NFSU2_TR(0x6aa1c1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6aa1c4:{NFSU2_TR(0x6aa1c4);
__builtin_memmove((R+0),(R+518),1);
}
B6aa1c7:{NFSU2_TR(0x6aa1c7);
__builtin_memmove((R+28),(R+0),4);
}
B6aa1c9:L6aa1c9:{c.instructions+=2;NFSU2_TR(0x6aa1c9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6aa1cc:{NFSU2_TR(0x6aa1cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aa1d1ull));
TAIL_STATIC(0x575630u,575);
}
B6aa1d1:L6aa1d1:{c.instructions+=2;NFSU2_TR(0x6aa1d1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6aa1d4:{NFSU2_TR(0x6aa1d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aa1d9ull));
TAIL_STATIC(0x575630u,575);
}
B6aa1d9:L6aa1d9:{c.instructions+=8;NFSU2_TR(0x6aa1d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6aa1da:{NFSU2_TR(0x6aa1da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6aa1db:{NFSU2_TR(0x6aa1db);
__builtin_memmove((R+0),(R+28),4);
}
B6aa1dd:{NFSU2_TR(0x6aa1dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6aa1de:{NFSU2_TR(0x6aa1de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6aa1df:{NFSU2_TR(0x6aa1df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6aa1e0:{NFSU2_TR(0x6aa1e0);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6aa1e1:{NFSU2_TR(0x6aa1e1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6aa1e2:L6aa1e2:{c.instructions+=2;NFSU2_TR(0x6aa1e2);
w4(R+28,u32(0x8007000eull));
}
B6aa1e7:{NFSU2_TR(0x6aa1e7);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6aa1c9u);}goto L6aa1c9;}
}
B6aa1e9:L6aa1e9:{c.instructions+=13;NFSU2_TR(0x6aa1e9);
__builtin_memmove((R+28),(R+28),4);
}
B6aa1eb:{NFSU2_TR(0x6aa1eb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6aa1ec:{NFSU2_TR(0x6aa1ec);
__builtin_memmove((R+20),(R+16),4);
}
B6aa1ee:{NFSU2_TR(0x6aa1ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x9cull))));
}
B6aa1f4:{NFSU2_TR(0x6aa1f4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6aa1f5:{NFSU2_TR(0x6aa1f5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6aa1f6:{NFSU2_TR(0x6aa1f6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6aa1f7:{NFSU2_TR(0x6aa1f7);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6aa1f9:{NFSU2_TR(0x6aa1f9);
__builtin_memmove((R+28),(R+4),4);
}
B6aa1fb:{NFSU2_TR(0x6aa1fb);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6aa1fd:{NFSU2_TR(0x6aa1fd);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6aa200:{NFSU2_TR(0x6aa200);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aa203:{NFSU2_TR(0x6aa203);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6aa246;}}
}
B6aa205:L6aa205:{c.instructions+=12;NFSU2_TR(0x6aa205);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aa208:{NFSU2_TR(0x6aa208);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6aa20b:{NFSU2_TR(0x6aa20b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6aa20e:{NFSU2_TR(0x6aa20e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aa211:{NFSU2_TR(0x6aa211);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6aa214:{NFSU2_TR(0x6aa214);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6aa217:{NFSU2_TR(0x6aa217);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aa21a:{NFSU2_TR(0x6aa21a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6aa21d:{NFSU2_TR(0x6aa21d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aa220:{NFSU2_TR(0x6aa220);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aa223:{NFSU2_TR(0x6aa223);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6aa226:{NFSU2_TR(0x6aa226);
if(r1(R+518)){{goto L6aa231;}}
}
B6aa228:L6aa228:{c.instructions+=2;NFSU2_TR(0x6aa228);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6aa22f:{NFSU2_TR(0x6aa22f);
{goto L6aa23c;}
}
B6aa231:L6aa231:{c.instructions+=2;NFSU2_TR(0x6aa231);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(u32(0x11028ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aa237:{NFSU2_TR(0x6aa237);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6aa240;}}
}
B6aa239:L6aa239:{c.instructions+=1;NFSU2_TR(0x6aa239);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aa23c:L6aa23c:{c.instructions+=1;NFSU2_TR(0x6aa23c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6aa240:L6aa240:{c.instructions+=3;NFSU2_TR(0x6aa240);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6aa241:{NFSU2_TR(0x6aa241);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6aa244:{NFSU2_TR(0x6aa244);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6aa205u);}goto L6aa205;}}
}
B6aa246:L6aa246:{c.instructions+=4;NFSU2_TR(0x6aa246);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aa249:{NFSU2_TR(0x6aa249);
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
B6aa24b:{NFSU2_TR(0x6aa24b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aa24e:{NFSU2_TR(0x6aa24e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6aa51f;}}
}
B6aa254:L6aa254:{c.instructions+=6;NFSU2_TR(0x6aa254);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6aa257:{NFSU2_TR(0x6aa257);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aa25a:{NFSU2_TR(0x6aa25a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aa25d:{NFSU2_TR(0x6aa25d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6aa260:{NFSU2_TR(0x6aa260);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+6,u16(u32(r2(U+4))&u32(u16(0xfff0ull))));
w1(R+518,u8((r2(U+6))==(u16(0x0ull))));
}
B6aa266:{NFSU2_TR(0x6aa266);
if(r1(R+518)){{goto L6aa515;}}
}
B6aa26c:L6aa26c:{c.instructions+=4;NFSU2_TR(0x6aa26c);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6aa26e:{NFSU2_TR(0x6aa26e);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6aa26f:{NFSU2_TR(0x6aa26f);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6aa272:{NFSU2_TR(0x6aa272);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6aa292;}}
}
B6aa274:L6aa274:{c.instructions+=8;NFSU2_TR(0x6aa274);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aa277:{NFSU2_TR(0x6aa277);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aa27a:{NFSU2_TR(0x6aa27a);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6aa27d:{NFSU2_TR(0x6aa27d);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6aa280:{NFSU2_TR(0x6aa280);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6aa282:{NFSU2_TR(0x6aa282);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6aa285:{NFSU2_TR(0x6aa285);
__builtin_memmove((R+4),(R+28),4);
}
B6aa287:{NFSU2_TR(0x6aa287);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aa28cull));
TAIL_STATIC(0x6a10e3u,6a1);
}
B6aa28c:L6aa28c:{c.instructions+=3;NFSU2_TR(0x6aa28c);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6aa28d:{NFSU2_TR(0x6aa28d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B6aa290:{NFSU2_TR(0x6aa290);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6aa274u);}goto L6aa274;}}
}
B6aa292:L6aa292:{c.instructions+=5;NFSU2_TR(0x6aa292);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6aa294:{NFSU2_TR(0x6aa294);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6aa295:{NFSU2_TR(0x6aa295);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6aa298:{NFSU2_TR(0x6aa298);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aa29b:{NFSU2_TR(0x6aa29b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6aa2dc;}}
}
B6aa29d:L6aa29d:{c.instructions+=22;NFSU2_TR(0x6aa29d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aa2a0:{NFSU2_TR(0x6aa2a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6aa2a2:{NFSU2_TR(0x6aa2a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aa2a5:{NFSU2_TR(0x6aa2a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6aa2a8:{NFSU2_TR(0x6aa2a8);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6aa2ab:{NFSU2_TR(0x6aa2ab);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6aa2ae:{NFSU2_TR(0x6aa2ae);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6aa2b1:{NFSU2_TR(0x6aa2b1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6aa2b4:{NFSU2_TR(0x6aa2b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aa2b7:{NFSU2_TR(0x6aa2b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6aa2ba:{NFSU2_TR(0x6aa2ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aa2bd:{NFSU2_TR(0x6aa2bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aa2c0:{NFSU2_TR(0x6aa2c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6aa2c2:{NFSU2_TR(0x6aa2c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aa2c5:{NFSU2_TR(0x6aa2c5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6aa2c8:{NFSU2_TR(0x6aa2c8);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6aa2cb:{NFSU2_TR(0x6aa2cb);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6aa2ce:{NFSU2_TR(0x6aa2ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aa2d1:{NFSU2_TR(0x6aa2d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aa2d4:{NFSU2_TR(0x6aa2d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aa2d7:{NFSU2_TR(0x6aa2d7);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6aa2da:{NFSU2_TR(0x6aa2da);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6aa29du);}goto L6aa29d;}}
}
B6aa2dc:L6aa2dc:{c.instructions+=6;NFSU2_TR(0x6aa2dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6aa2de:{NFSU2_TR(0x6aa2de);
__builtin_memmove((R+0),(R+4),4);
}
B6aa2e0:{NFSU2_TR(0x6aa2e0);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6aa2e5:{NFSU2_TR(0x6aa2e5);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6aa2e7:{NFSU2_TR(0x6aa2e7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20700000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aa2ec:{NFSU2_TR(0x6aa2ec);
if(r1(R+518)){{goto L6aa4ba;}}
}
B6aa2f2:L6aa2f2:{c.instructions+=2;NFSU2_TR(0x6aa2f2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20800000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aa2f7:{NFSU2_TR(0x6aa2f7);
if(r1(R+518)){{goto L6aa4ba;}}
}
B6aa2fd:L6aa2fd:{c.instructions+=2;NFSU2_TR(0x6aa2fd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x11500000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aa302:{NFSU2_TR(0x6aa302);
if(r1(R+518)){{goto L6aa4ba;}}
}
B6aa308:L6aa308:{c.instructions+=2;NFSU2_TR(0x6aa308);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x11200000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aa30d:{NFSU2_TR(0x6aa30d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6aa398;}}
}
B6aa313:L6aa313:{c.instructions+=8;NFSU2_TR(0x6aa313);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aa316:{NFSU2_TR(0x6aa316);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffull))));
}
B6aa31c:{NFSU2_TR(0x6aa31c);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6aa31e:{NFSU2_TR(0x6aa31e);
u8 U[56];
w8(U+0,u64(r4(R+4)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6aa31e);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6aa31e);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B6aa320:{NFSU2_TR(0x6aa320);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6aa323:{NFSU2_TR(0x6aa323);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aa326:{NFSU2_TR(0x6aa326);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aa329:{NFSU2_TR(0x6aa329);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6aa515;}}
}
B6aa32f:L6aa32f:{c.instructions+=3;NFSU2_TR(0x6aa32f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6aa333:{NFSU2_TR(0x6aa333);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6aa337:{NFSU2_TR(0x6aa337);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6aa388;}}
}
B6aa339:L6aa339:{c.instructions+=6;NFSU2_TR(0x6aa339);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aa33c:{NFSU2_TR(0x6aa33c);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B6aa340:{NFSU2_TR(0x6aa340);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B6aa343:{NFSU2_TR(0x6aa343);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aa346:{NFSU2_TR(0x6aa346);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6aa349:{NFSU2_TR(0x6aa349);
{goto L6aa378;}
}
B6aa34b:L6aa34b:{c.instructions+=12;NFSU2_TR(0x6aa34b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aa34e:{NFSU2_TR(0x6aa34e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6aa351:{NFSU2_TR(0x6aa351);
__builtin_memmove((R+12),(R+4),4);
}
B6aa353:{NFSU2_TR(0x6aa353);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aa356:{NFSU2_TR(0x6aa356);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6aa359:{NFSU2_TR(0x6aa359);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6aa35c:{NFSU2_TR(0x6aa35c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aa35f:{NFSU2_TR(0x6aa35f);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6aa362:{NFSU2_TR(0x6aa362);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B6aa365:{NFSU2_TR(0x6aa365);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6aa368:{NFSU2_TR(0x6aa368);
__builtin_memmove((R+4),(R+28),4);
}
B6aa36a:{NFSU2_TR(0x6aa36a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aa36full));
TAIL_STATIC(0x6a10e3u,6a1);
}
B6aa36f:L6aa36f:{c.instructions+=3;NFSU2_TR(0x6aa36f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aa372:{NFSU2_TR(0x6aa372);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6aa375:{NFSU2_TR(0x6aa375);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aa378:L6aa378:{c.instructions+=2;NFSU2_TR(0x6aa378);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6aa37b:{NFSU2_TR(0x6aa37b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6aa34bu);}goto L6aa34b;}}
}
B6aa37d:L6aa37d:{c.instructions+=4;NFSU2_TR(0x6aa37d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6aa380:{NFSU2_TR(0x6aa380);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aa383:{NFSU2_TR(0x6aa383);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6aa386:{NFSU2_TR(0x6aa386);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6aa339u);}goto L6aa339;}}
}
B6aa388:L6aa388:{c.instructions+=4;NFSU2_TR(0x6aa388);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6aa38b:{NFSU2_TR(0x6aa38b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aa38e:{NFSU2_TR(0x6aa38e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6aa391:{NFSU2_TR(0x6aa391);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6aa32fu);}goto L6aa32f;}}
}
B6aa393:L6aa393:{c.instructions+=1;NFSU2_TR(0x6aa393);
{goto L6aa515;}
}
B6aa398:L6aa398:{c.instructions+=4;NFSU2_TR(0x6aa398);
__builtin_memmove((R+0),(R+4),4);
}
B6aa39a:{NFSU2_TR(0x6aa39a);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xf0000000ull))));
}
B6aa39f:{NFSU2_TR(0x6aa39f);
w1(R+512,u8((r4(R+0))<(u32(0x10000000ull))));
}
B6aa3a4:{NFSU2_TR(0x6aa3a4);
if(r1(R+512)){{goto L6aa430;}}
}
B6aa3aa:L6aa3aa:{c.instructions+=2;NFSU2_TR(0x6aa3aa);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x40000000ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x40000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aa3af:{NFSU2_TR(0x6aa3af);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6aa430;}}
}
B6aa3b1:L6aa3b1:{c.instructions+=8;NFSU2_TR(0x6aa3b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aa3b4:{NFSU2_TR(0x6aa3b4);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffull))));
}
B6aa3ba:{NFSU2_TR(0x6aa3ba);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6aa3bc:{NFSU2_TR(0x6aa3bc);
u8 U[56];
w8(U+0,u64(r4(R+4)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6aa3bc);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6aa3bc);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B6aa3be:{NFSU2_TR(0x6aa3be);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6aa3c1:{NFSU2_TR(0x6aa3c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aa3c4:{NFSU2_TR(0x6aa3c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aa3c7:{NFSU2_TR(0x6aa3c7);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6aa515;}}
}
B6aa3cd:L6aa3cd:{c.instructions+=3;NFSU2_TR(0x6aa3cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6aa3d1:{NFSU2_TR(0x6aa3d1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6aa3d5:{NFSU2_TR(0x6aa3d5);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6aa420;}}
}
B6aa3d7:L6aa3d7:{c.instructions+=6;NFSU2_TR(0x6aa3d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aa3da:{NFSU2_TR(0x6aa3da);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B6aa3de:{NFSU2_TR(0x6aa3de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B6aa3e1:{NFSU2_TR(0x6aa3e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aa3e4:{NFSU2_TR(0x6aa3e4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6aa3e7:{NFSU2_TR(0x6aa3e7);
{goto L6aa410;}
}
B6aa3e9:L6aa3e9:{c.instructions+=10;NFSU2_TR(0x6aa3e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aa3ec:{NFSU2_TR(0x6aa3ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6aa3ef:{NFSU2_TR(0x6aa3ef);
__builtin_memmove((R+12),(R+0),4);
}
B6aa3f1:{NFSU2_TR(0x6aa3f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aa3f4:{NFSU2_TR(0x6aa3f4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6aa3f7:{NFSU2_TR(0x6aa3f7);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6aa3fa:{NFSU2_TR(0x6aa3fa);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B6aa3fd:{NFSU2_TR(0x6aa3fd);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6aa400:{NFSU2_TR(0x6aa400);
__builtin_memmove((R+4),(R+28),4);
}
B6aa402:{NFSU2_TR(0x6aa402);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aa407ull));
TAIL_STATIC(0x6a10e3u,6a1);
}
B6aa407:L6aa407:{c.instructions+=3;NFSU2_TR(0x6aa407);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aa40a:{NFSU2_TR(0x6aa40a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6aa40d:{NFSU2_TR(0x6aa40d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aa410:L6aa410:{c.instructions+=2;NFSU2_TR(0x6aa410);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6aa413:{NFSU2_TR(0x6aa413);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6aa3e9u);}goto L6aa3e9;}}
}
B6aa415:L6aa415:{c.instructions+=4;NFSU2_TR(0x6aa415);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6aa418:{NFSU2_TR(0x6aa418);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aa41b:{NFSU2_TR(0x6aa41b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6aa41e:{NFSU2_TR(0x6aa41e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6aa3d7u);}goto L6aa3d7;}}
}
B6aa420:L6aa420:{c.instructions+=4;NFSU2_TR(0x6aa420);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6aa423:{NFSU2_TR(0x6aa423);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aa426:{NFSU2_TR(0x6aa426);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6aa429:{NFSU2_TR(0x6aa429);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6aa3cdu);}goto L6aa3cd;}}
}
B6aa42b:L6aa42b:{c.instructions+=1;NFSU2_TR(0x6aa42b);
{goto L6aa515;}
}
B6aa430:L6aa430:{c.instructions+=2;NFSU2_TR(0x6aa430);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6aa433:{NFSU2_TR(0x6aa433);
if(r1(R+518)){{goto L6aa484;}}
}
B6aa435:L6aa435:{c.instructions+=3;NFSU2_TR(0x6aa435);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6aa438:{NFSU2_TR(0x6aa438);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aa43b:{NFSU2_TR(0x6aa43b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6aa515;}}
}
B6aa441:L6aa441:{c.instructions+=4;NFSU2_TR(0x6aa441);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aa444:{NFSU2_TR(0x6aa444);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aa447:{NFSU2_TR(0x6aa447);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6aa44a:{NFSU2_TR(0x6aa44a);
{goto L6aa46f;}
}
B6aa44c:L6aa44c:{c.instructions+=9;NFSU2_TR(0x6aa44c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aa44f:{NFSU2_TR(0x6aa44f);
__builtin_memmove((R+12),(R+0),4);
}
B6aa451:{NFSU2_TR(0x6aa451);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aa454:{NFSU2_TR(0x6aa454);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6aa456:{NFSU2_TR(0x6aa456);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6aa459:{NFSU2_TR(0x6aa459);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B6aa45c:{NFSU2_TR(0x6aa45c);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6aa45f:{NFSU2_TR(0x6aa45f);
__builtin_memmove((R+4),(R+28),4);
}
B6aa461:{NFSU2_TR(0x6aa461);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aa466ull));
TAIL_STATIC(0x6a10e3u,6a1);
}
B6aa466:L6aa466:{c.instructions+=3;NFSU2_TR(0x6aa466);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aa469:{NFSU2_TR(0x6aa469);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6aa46c:{NFSU2_TR(0x6aa46c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aa46f:L6aa46f:{c.instructions+=2;NFSU2_TR(0x6aa46f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6aa472:{NFSU2_TR(0x6aa472);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6aa44cu);}goto L6aa44c;}}
}
B6aa474:L6aa474:{c.instructions+=4;NFSU2_TR(0x6aa474);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6aa477:{NFSU2_TR(0x6aa477);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aa47a:{NFSU2_TR(0x6aa47a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6aa47d:{NFSU2_TR(0x6aa47d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6aa441u);}goto L6aa441;}}
}
B6aa47f:L6aa47f:{c.instructions+=1;NFSU2_TR(0x6aa47f);
{goto L6aa515;}
}
B6aa484:L6aa484:{c.instructions+=3;NFSU2_TR(0x6aa484);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6aa486:{NFSU2_TR(0x6aa486);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6aa489:{NFSU2_TR(0x6aa489);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6aa515;}}
}
B6aa48f:L6aa48f:{c.instructions+=13;NFSU2_TR(0x6aa48f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aa492:{NFSU2_TR(0x6aa492);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6aa495:{NFSU2_TR(0x6aa495);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6aa498:{NFSU2_TR(0x6aa498);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6aa49b:{NFSU2_TR(0x6aa49b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6aa49f:{NFSU2_TR(0x6aa49f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aa4a2:{NFSU2_TR(0x6aa4a2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6aa4a5:{NFSU2_TR(0x6aa4a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6aa4a8:{NFSU2_TR(0x6aa4a8);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6aa4ab:{NFSU2_TR(0x6aa4ab);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6aa4ac:{NFSU2_TR(0x6aa4ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6aa4b3:{NFSU2_TR(0x6aa4b3);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6aa4b6:{NFSU2_TR(0x6aa4b6);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6aa48fu);}goto L6aa48f;}}
}
B6aa4b8:L6aa4b8:{c.instructions+=1;NFSU2_TR(0x6aa4b8);
{goto L6aa515;}
}
B6aa4ba:L6aa4ba:{c.instructions+=3;NFSU2_TR(0x6aa4ba);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6aa4bd:{NFSU2_TR(0x6aa4bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aa4c0:{NFSU2_TR(0x6aa4c0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6aa515;}}
}
B6aa4c2:L6aa4c2:{c.instructions+=28;NFSU2_TR(0x6aa4c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aa4c5:{NFSU2_TR(0x6aa4c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aa4c8:{NFSU2_TR(0x6aa4c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6aa4cb:{NFSU2_TR(0x6aa4cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6aa4ce:{NFSU2_TR(0x6aa4ce);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6aa4d1:{NFSU2_TR(0x6aa4d1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6aa4d4:{NFSU2_TR(0x6aa4d4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6aa4d7:{NFSU2_TR(0x6aa4d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6aa4da:{NFSU2_TR(0x6aa4da);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6aa4dd:{NFSU2_TR(0x6aa4dd);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6aa4e0:{NFSU2_TR(0x6aa4e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6aa4e3:{NFSU2_TR(0x6aa4e3);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6aa4e6:{NFSU2_TR(0x6aa4e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6aa4e9:{NFSU2_TR(0x6aa4e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aa4ec:{NFSU2_TR(0x6aa4ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aa4ef:{NFSU2_TR(0x6aa4ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6aa4f2:{NFSU2_TR(0x6aa4f2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6aa4f5:{NFSU2_TR(0x6aa4f5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6aa4f8:{NFSU2_TR(0x6aa4f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6aa4fb:{NFSU2_TR(0x6aa4fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6aa4fe:{NFSU2_TR(0x6aa4fe);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6aa501:{NFSU2_TR(0x6aa501);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6aa504:{NFSU2_TR(0x6aa504);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6aa507:{NFSU2_TR(0x6aa507);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aa50a:{NFSU2_TR(0x6aa50a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aa50d:{NFSU2_TR(0x6aa50d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aa510:{NFSU2_TR(0x6aa510);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6aa513:{NFSU2_TR(0x6aa513);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6aa4c2u);}goto L6aa4c2;}}
}
B6aa515:L6aa515:{c.instructions+=2;NFSU2_TR(0x6aa515);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
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
B6aa519:{NFSU2_TR(0x6aa519);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6aa254u);}goto L6aa254;}}
}
B6aa51f:L6aa51f:{c.instructions+=2;NFSU2_TR(0x6aa51f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff64ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6aa525:{NFSU2_TR(0x6aa525);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aa52aull));
TAIL_STATIC(0x6d4918u,6d4);
}
B6aa52a:L6aa52a:{c.instructions+=3;NFSU2_TR(0x6aa52a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6aa52e:{NFSU2_TR(0x6aa52e);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6aa532:{NFSU2_TR(0x6aa532);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6aa6d3;}}
}
B6aa538:L6aa538:{c.instructions+=6;NFSU2_TR(0x6aa538);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aa53b:{NFSU2_TR(0x6aa53b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aa53e:{NFSU2_TR(0x6aa53e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6aa541:{NFSU2_TR(0x6aa541);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6aa543:{NFSU2_TR(0x6aa543);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6aa548:{NFSU2_TR(0x6aa548);
if(r1(R+518)){{goto L6aa6c4;}}
}
B6aa54e:L6aa54e:{c.instructions+=2;NFSU2_TR(0x6aa54e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10f00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aa553:{NFSU2_TR(0x6aa553);
if(r1(R+518)){{goto L6aa6c4;}}
}
B6aa559:L6aa559:{c.instructions+=2;NFSU2_TR(0x6aa559);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20700000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aa55e:{NFSU2_TR(0x6aa55e);
if(r1(R+518)){{goto L6aa6c4;}}
}
B6aa564:L6aa564:{c.instructions+=2;NFSU2_TR(0x6aa564);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x11100000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aa569:{NFSU2_TR(0x6aa569);
if(r1(R+518)){{goto L6aa6c4;}}
}
B6aa56f:L6aa56f:{c.instructions+=2;NFSU2_TR(0x6aa56f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x11200000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aa574:{NFSU2_TR(0x6aa574);
if(r1(R+518)){{goto L6aa6c4;}}
}
B6aa57a:L6aa57a:{c.instructions+=2;NFSU2_TR(0x6aa57a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x11300000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aa57f:{NFSU2_TR(0x6aa57f);
if(r1(R+518)){{goto L6aa6c4;}}
}
B6aa585:L6aa585:{c.instructions+=2;NFSU2_TR(0x6aa585);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x11400000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aa58a:{NFSU2_TR(0x6aa58a);
if(r1(R+518)){{goto L6aa6c4;}}
}
B6aa590:L6aa590:{c.instructions+=2;NFSU2_TR(0x6aa590);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20800000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aa595:{NFSU2_TR(0x6aa595);
if(r1(R+518)){{goto L6aa6c4;}}
}
B6aa59b:L6aa59b:{c.instructions+=2;NFSU2_TR(0x6aa59b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20900000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aa5a0:{NFSU2_TR(0x6aa5a0);
if(r1(R+518)){{goto L6aa6c4;}}
}
B6aa5a6:L6aa5a6:{c.instructions+=2;NFSU2_TR(0x6aa5a6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x11500000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aa5ab:{NFSU2_TR(0x6aa5ab);
if(r1(R+518)){{goto L6aa6c4;}}
}
B6aa5b1:L6aa5b1:{c.instructions+=10;NFSU2_TR(0x6aa5b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aa5b4:{NFSU2_TR(0x6aa5b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6aa5b6:{NFSU2_TR(0x6aa5b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aa5b9:{NFSU2_TR(0x6aa5b9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6aa5bc:{NFSU2_TR(0x6aa5bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6aa5bf:{NFSU2_TR(0x6aa5bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aa5c2:{NFSU2_TR(0x6aa5c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aa5c5:{NFSU2_TR(0x6aa5c5);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6aa5c8:{NFSU2_TR(0x6aa5c8);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6aa5cc:{NFSU2_TR(0x6aa5cc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6aa6c4;}}
}
B6aa5d2:L6aa5d2:{c.instructions+=7;NFSU2_TR(0x6aa5d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6aa5d6:{NFSU2_TR(0x6aa5d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6aa5da:{NFSU2_TR(0x6aa5da);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+4),(U+0),4);
}
B6aa5dd:{NFSU2_TR(0x6aa5dd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6aa5de:{NFSU2_TR(0x6aa5de);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6aa5df:{NFSU2_TR(0x6aa5df);
__builtin_memmove((R+4),(R+28),4);
}
B6aa5e1:{NFSU2_TR(0x6aa5e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aa5e6ull));
TAIL_STATIC(0x69a71du,69a);
}
B6aa5e6:L6aa5e6:{c.instructions+=2;NFSU2_TR(0x6aa5e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aa5e9:{NFSU2_TR(0x6aa5e9);
{goto L6aa5fd;}
}
B6aa5eb:L6aa5eb:{c.instructions+=5;NFSU2_TR(0x6aa5eb);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6aa5ee:{NFSU2_TR(0x6aa5ee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6aa5ef:{NFSU2_TR(0x6aa5ef);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6aa5f0:{NFSU2_TR(0x6aa5f0);
__builtin_memmove((R+4),(R+28),4);
}
B6aa5f2:{NFSU2_TR(0x6aa5f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aa5f7ull));
TAIL_STATIC(0x69a71du,69a);
}
B6aa5f7:L6aa5f7:{c.instructions+=2;NFSU2_TR(0x6aa5f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aa5fa:{NFSU2_TR(0x6aa5fa);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6aa5fd:L6aa5fd:{c.instructions+=3;NFSU2_TR(0x6aa5fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6aa600:{NFSU2_TR(0x6aa600);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6aa603:{NFSU2_TR(0x6aa603);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6aa5ebu);}goto L6aa5eb;}}
}
B6aa605:L6aa605:{c.instructions+=3;NFSU2_TR(0x6aa605);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aa608:{NFSU2_TR(0x6aa608);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aa60a:{NFSU2_TR(0x6aa60a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6aa63f;}}
}
B6aa60c:L6aa60c:{c.instructions+=3;NFSU2_TR(0x6aa60c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aa60f:{NFSU2_TR(0x6aa60f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aa612:{NFSU2_TR(0x6aa612);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aa615:L6aa615:{c.instructions+=3;NFSU2_TR(0x6aa615);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aa618:{NFSU2_TR(0x6aa618);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6aa61a:{NFSU2_TR(0x6aa61a);
{goto L6aa631;}
}
B6aa61c:L6aa61c:{c.instructions+=5;NFSU2_TR(0x6aa61c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6aa61f:{NFSU2_TR(0x6aa61f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6aa620:{NFSU2_TR(0x6aa620);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6aa621:{NFSU2_TR(0x6aa621);
__builtin_memmove((R+4),(R+28),4);
}
B6aa623:{NFSU2_TR(0x6aa623);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aa628ull));
TAIL_STATIC(0x69a71du,69a);
}
B6aa628:L6aa628:{c.instructions+=3;NFSU2_TR(0x6aa628);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aa62b:{NFSU2_TR(0x6aa62b);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6aa62e:{NFSU2_TR(0x6aa62e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6aa631:L6aa631:{c.instructions+=2;NFSU2_TR(0x6aa631);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6aa634:{NFSU2_TR(0x6aa634);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6aa61cu);}goto L6aa61c;}}
}
B6aa636:L6aa636:{c.instructions+=3;NFSU2_TR(0x6aa636);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6aa63a:{NFSU2_TR(0x6aa63a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6aa63d:{NFSU2_TR(0x6aa63d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6aa615u);}goto L6aa615;}}
}
B6aa63f:L6aa63f:{c.instructions+=5;NFSU2_TR(0x6aa63f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aa642:{NFSU2_TR(0x6aa642);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6aa645:{NFSU2_TR(0x6aa645);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aa648:{NFSU2_TR(0x6aa648);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aa64b:{NFSU2_TR(0x6aa64b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6aa6c4;}}
}
B6aa64d:L6aa64d:{c.instructions+=2;NFSU2_TR(0x6aa64d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B6aa650:{NFSU2_TR(0x6aa650);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aa653:L6aa653:{c.instructions+=8;NFSU2_TR(0x6aa653);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aa656:{NFSU2_TR(0x6aa656);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6aa659:{NFSU2_TR(0x6aa659);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6aa65c:{NFSU2_TR(0x6aa65c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6aa65f:{NFSU2_TR(0x6aa65f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aa662:{NFSU2_TR(0x6aa662);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6aa665:{NFSU2_TR(0x6aa665);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x80ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6aa669:{NFSU2_TR(0x6aa669);
if(r1(R+518)){{goto L6aa6b6;}}
}
B6aa66b:L6aa66b:{c.instructions+=3;NFSU2_TR(0x6aa66b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6aa66f:{NFSU2_TR(0x6aa66f);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6aa673:{NFSU2_TR(0x6aa673);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6aa6b6;}}
}
B6aa675:L6aa675:{c.instructions+=22;NFSU2_TR(0x6aa675);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aa678:{NFSU2_TR(0x6aa678);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6aa67b:{NFSU2_TR(0x6aa67b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aa67e:{NFSU2_TR(0x6aa67e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6aa681:{NFSU2_TR(0x6aa681);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6aa684:{NFSU2_TR(0x6aa684);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aa687:{NFSU2_TR(0x6aa687);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6aa68a:{NFSU2_TR(0x6aa68a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6aa68d:{NFSU2_TR(0x6aa68d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6aa690:{NFSU2_TR(0x6aa690);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6aa693:{NFSU2_TR(0x6aa693);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aa696:{NFSU2_TR(0x6aa696);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aa699:{NFSU2_TR(0x6aa699);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6aa69c:{NFSU2_TR(0x6aa69c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aa69f:{NFSU2_TR(0x6aa69f);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6aa6a2:{NFSU2_TR(0x6aa6a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aa6a5:{NFSU2_TR(0x6aa6a5);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6aa6a8:{NFSU2_TR(0x6aa6a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6aa6ab:{NFSU2_TR(0x6aa6ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aa6ae:{NFSU2_TR(0x6aa6ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aa6b1:{NFSU2_TR(0x6aa6b1);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6aa6b4:{NFSU2_TR(0x6aa6b4);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6aa675u);}goto L6aa675;}}
}
B6aa6b6:L6aa6b6:{c.instructions+=5;NFSU2_TR(0x6aa6b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6aa6b9:{NFSU2_TR(0x6aa6b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aa6bc:{NFSU2_TR(0x6aa6bc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6aa6bf:{NFSU2_TR(0x6aa6bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aa6c2:{NFSU2_TR(0x6aa6c2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6aa653u);}goto L6aa653;}}
}
B6aa6c4:L6aa6c4:{c.instructions+=4;NFSU2_TR(0x6aa6c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6aa6c7:{NFSU2_TR(0x6aa6c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aa6ca:{NFSU2_TR(0x6aa6ca);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6aa6cd:{NFSU2_TR(0x6aa6cd);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6aa538u);}goto L6aa538;}}
}
B6aa6d3:L6aa6d3:{c.instructions+=3;NFSU2_TR(0x6aa6d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aa6d6:{NFSU2_TR(0x6aa6d6);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aa6d8:{NFSU2_TR(0x6aa6d8);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6aa704;}}
}
B6aa6da:L6aa6da:{c.instructions+=2;NFSU2_TR(0x6aa6da);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aa6dd:{NFSU2_TR(0x6aa6dd);
__builtin_memmove((R+8),(R+0),4);
}
B6aa6df:L6aa6df:{c.instructions+=4;NFSU2_TR(0x6aa6df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6aa6e1:{NFSU2_TR(0x6aa6e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6aa6e4:{NFSU2_TR(0x6aa6e4);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6aa6e7:{NFSU2_TR(0x6aa6e7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6aa6f1;}}
}
B6aa6e9:L6aa6e9:{c.instructions+=3;NFSU2_TR(0x6aa6e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6aa6ec:{NFSU2_TR(0x6aa6ec);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6aa6ef:{NFSU2_TR(0x6aa6ef);
if(r1(R+518)){{goto L6aa6f8;}}
}
B6aa6f1:L6aa6f1:{c.instructions+=1;NFSU2_TR(0x6aa6f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6aa6f8:L6aa6f8:{c.instructions+=3;NFSU2_TR(0x6aa6f8);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6aa6fb:{NFSU2_TR(0x6aa6fb);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B6aa6fc:{NFSU2_TR(0x6aa6fc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6aa6dfu);}goto L6aa6df;}}
}
B6aa6fe:L6aa6fe:{c.instructions+=2;NFSU2_TR(0x6aa6fe);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6aa702:{NFSU2_TR(0x6aa702);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6aa70c;}}
}
B6aa704:L6aa704:{c.instructions+=3;NFSU2_TR(0x6aa704);
w1(R+512,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6aa706:{NFSU2_TR(0x6aa706);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6aa707:{NFSU2_TR(0x6aa707);
{goto L6aa78d;}
}
B6aa70c:L6aa70c:{c.instructions+=2;NFSU2_TR(0x6aa70c);
__builtin_memmove((R+4),(R+28),4);
}
B6aa70e:{NFSU2_TR(0x6aa70e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aa713ull));
TAIL_STATIC(0x69e219u,69e);
}
B6aa713:L6aa713:{c.instructions+=2;NFSU2_TR(0x6aa713);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6aa716:{NFSU2_TR(0x6aa716);
{goto L6aa787;}
}
B6aa718:L6aa718:{c.instructions+=5;NFSU2_TR(0x6aa718);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aa71b:{NFSU2_TR(0x6aa71b);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
}
B6aa71c:{NFSU2_TR(0x6aa71c);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6aa71f:{NFSU2_TR(0x6aa71f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+6,u16(u32(r2(U+4))&u32(u16(0xfff0ull))));
w1(R+518,u8((r2(U+6))==(u16(0x0ull))));
}
B6aa725:{NFSU2_TR(0x6aa725);
if(r1(R+518)){{goto L6aa787;}}
}
B6aa727:L6aa727:{c.instructions+=4;NFSU2_TR(0x6aa727);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6aa72a:{NFSU2_TR(0x6aa72a);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aa72c:{NFSU2_TR(0x6aa72c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aa72f:{NFSU2_TR(0x6aa72f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6aa787;}}
}
B6aa731:L6aa731:{c.instructions+=3;NFSU2_TR(0x6aa731);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aa734:{NFSU2_TR(0x6aa734);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6aa737:{NFSU2_TR(0x6aa737);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aa73a:L6aa73a:{c.instructions+=5;NFSU2_TR(0x6aa73a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6aa73c:{NFSU2_TR(0x6aa73c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6aa73f:{NFSU2_TR(0x6aa73f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6aa742:{NFSU2_TR(0x6aa742);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6aa745:{NFSU2_TR(0x6aa745);
if(r1(R+518)){{goto L6aa755;}}
}
B6aa747:L6aa747:{c.instructions+=4;NFSU2_TR(0x6aa747);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6aa74a:{NFSU2_TR(0x6aa74a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6aa74d:{NFSU2_TR(0x6aa74d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
}
B6aa750:{NFSU2_TR(0x6aa750);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6aa755;}}
}
B6aa752:L6aa752:{c.instructions+=1;NFSU2_TR(0x6aa752);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aa755:L6aa755:{c.instructions+=3;NFSU2_TR(0x6aa755);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B6aa758:{NFSU2_TR(0x6aa758);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6aa75b:{NFSU2_TR(0x6aa75b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6aa73au);}goto L6aa73a;}}
}
B6aa75d:L6aa75d:{c.instructions+=2;NFSU2_TR(0x6aa75d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6aa760:{NFSU2_TR(0x6aa760);
if(r1(R+518)){{goto L6aa787;}}
}
B6aa762:L6aa762:{c.instructions+=2;NFSU2_TR(0x6aa762);
__builtin_memmove((R+8),(R+12),4);
}
B6aa764:{NFSU2_TR(0x6aa764);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6aa777;}}
}
B6aa766:L6aa766:{c.instructions+=7;NFSU2_TR(0x6aa766);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aa769:{NFSU2_TR(0x6aa769);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6aa76c:{NFSU2_TR(0x6aa76c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6aa76f:{NFSU2_TR(0x6aa76f);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6aa770:{NFSU2_TR(0x6aa770);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6aa773:{NFSU2_TR(0x6aa773);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6aa775:{NFSU2_TR(0x6aa775);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6aa766u);}goto L6aa766;}}
}
B6aa777:L6aa777:{c.instructions+=5;NFSU2_TR(0x6aa777);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aa77a:{NFSU2_TR(0x6aa77a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6aa77d:{NFSU2_TR(0x6aa77d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6aa780:{NFSU2_TR(0x6aa780);
__builtin_memmove((R+4),(R+28),4);
}
B6aa782:{NFSU2_TR(0x6aa782);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aa787ull));
TAIL_STATIC(0x69e219u,69e);
}
B6aa787:L6aa787:{c.instructions+=2;NFSU2_TR(0x6aa787);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aa789:{NFSU2_TR(0x6aa789);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6aa718u);}goto L6aa718;}}
}
B6aa78b:L6aa78b:{c.instructions+=1;NFSU2_TR(0x6aa78b);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6aa78d:L6aa78d:{c.instructions+=2;NFSU2_TR(0x6aa78d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff64ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6aa793:{NFSU2_TR(0x6aa793);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aa798ull));
TAIL_STATIC(0x6996f4u,699);
}
B6aa798:L6aa798:{c.instructions+=6;NFSU2_TR(0x6aa798);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6aa799:{NFSU2_TR(0x6aa799);
__builtin_memmove((R+0),(R+24),4);
}
B6aa79b:{NFSU2_TR(0x6aa79b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6aa79c:{NFSU2_TR(0x6aa79c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6aa79d:{NFSU2_TR(0x6aa79d);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6aa79e:{NFSU2_TR(0x6aa79e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6aa79f:L6aa79f:{c.instructions+=10;NFSU2_TR(0x6aa79f);
__builtin_memmove((R+28),(R+28),4);
}
B6aa7a1:{NFSU2_TR(0x6aa7a1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6aa7a2:{NFSU2_TR(0x6aa7a2);
__builtin_memmove((R+20),(R+16),4);
}
B6aa7a4:{NFSU2_TR(0x6aa7a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x78ull))));
}
B6aa7a7:{NFSU2_TR(0x6aa7a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6aa7ab:{NFSU2_TR(0x6aa7ab);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6aa7ac:{NFSU2_TR(0x6aa7ac);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6aa7ad:{NFSU2_TR(0x6aa7ad);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6aa7ae:{NFSU2_TR(0x6aa7ae);
__builtin_memmove((R+12),(R+4),4);
}
B6aa7b0:{NFSU2_TR(0x6aa7b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aa7b5ull));
TAIL_STATIC(0x69e219u,69e);
}
B6aa7b5:L6aa7b5:{c.instructions+=5;NFSU2_TR(0x6aa7b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aa7b8:{NFSU2_TR(0x6aa7b8);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6aa7ba:{NFSU2_TR(0x6aa7ba);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aa7bc:{NFSU2_TR(0x6aa7bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aa7bf:{NFSU2_TR(0x6aa7bf);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6aa7e4;}}
}
B6aa7c1:L6aa7c1:{c.instructions+=2;NFSU2_TR(0x6aa7c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6aa7c7:{NFSU2_TR(0x6aa7c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6aa7ca:L6aa7ca:{c.instructions+=3;NFSU2_TR(0x6aa7ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6aa7cc:{NFSU2_TR(0x6aa7cc);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6aa7cf:{NFSU2_TR(0x6aa7cf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6aa7db;}}
}
B6aa7d1:L6aa7d1:{c.instructions+=3;NFSU2_TR(0x6aa7d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aa7d4:{NFSU2_TR(0x6aa7d4);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6aa7d6:{NFSU2_TR(0x6aa7d6);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6aa7db;}}
}
B6aa7d8:L6aa7d8:{c.instructions+=1;NFSU2_TR(0x6aa7d8);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6aa7db:L6aa7db:{c.instructions+=3;NFSU2_TR(0x6aa7db);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B6aa7de:{NFSU2_TR(0x6aa7de);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6aa7df:{NFSU2_TR(0x6aa7df);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6aa7cau);}goto L6aa7ca;}}
}
B6aa7e1:L6aa7e1:{c.instructions+=1;NFSU2_TR(0x6aa7e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aa7e4:L6aa7e4:{c.instructions+=6;NFSU2_TR(0x6aa7e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aa7e7:{NFSU2_TR(0x6aa7e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6aa7ea:{NFSU2_TR(0x6aa7ea);
__builtin_memmove((R+24),(R+0),4);
}
B6aa7ec:{NFSU2_TR(0x6aa7ec);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B6aa7ef:{NFSU2_TR(0x6aa7ef);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6aa7f0:{NFSU2_TR(0x6aa7f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aa7f5ull));
TAIL_STATIC(0x575620u,575);
}
B6aa7f5:L6aa7f5:{c.instructions+=5;NFSU2_TR(0x6aa7f5);
__builtin_memmove((R+8),(R+0),4);
}
B6aa7f7:{NFSU2_TR(0x6aa7f7);
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
B6aa7f9:{NFSU2_TR(0x6aa7f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6aa7fa:{NFSU2_TR(0x6aa7fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aa7fd:{NFSU2_TR(0x6aa7fd);
if(r1(R+518)){{goto L6aae58;}}
}
B6aa803:L6aa803:{c.instructions+=4;NFSU2_TR(0x6aa803);
__builtin_memmove((R+4),(R+24),4);
}
B6aa805:{NFSU2_TR(0x6aa805);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6aa808:{NFSU2_TR(0x6aa808);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6aa80a:{NFSU2_TR(0x6aa80a);
__builtin_memmove((R+28),(R+8),4);
}
B6aa80c:L6aa80c:{c.instructions+=1;NFSU2_TR(0x6aa80c);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6aa80e;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6aa80cu);}goto L6aa80c;}
}
B6aa80e:L6aa80e:{c.instructions+=3;NFSU2_TR(0x6aa80e);
__builtin_memmove((R+4),(R+24),4);
}
B6aa810:{NFSU2_TR(0x6aa810);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6aa813:{NFSU2_TR(0x6aa813);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6aa815:L6aa815:{c.instructions+=1;NFSU2_TR(0x6aa815);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L6aa817;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6aa815u);}goto L6aa815;}
}
B6aa817:L6aa817:{c.instructions+=2;NFSU2_TR(0x6aa817);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6aa81a:{NFSU2_TR(0x6aa81a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6aa843;}}
}
B6aa81c:L6aa81c:{c.instructions+=5;NFSU2_TR(0x6aa81c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aa81f:{NFSU2_TR(0x6aa81f);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6aa822:{NFSU2_TR(0x6aa822);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aa828:{NFSU2_TR(0x6aa828);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6aa82b:{NFSU2_TR(0x6aa82b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6aa83d;}}
}
B6aa82d:L6aa82d:{c.instructions+=5;NFSU2_TR(0x6aa82d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aa830:{NFSU2_TR(0x6aa830);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aa833:{NFSU2_TR(0x6aa833);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6aa836:{NFSU2_TR(0x6aa836);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+512,u8((r4(U+4))<(r4(R+0))));
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+0))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6aa838:{NFSU2_TR(0x6aa838);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6aa83d;}}
}
B6aa83a:L6aa83a:{c.instructions+=2;NFSU2_TR(0x6aa83a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6aa83b:{NFSU2_TR(0x6aa83b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6aa83d:L6aa83d:{c.instructions+=3;NFSU2_TR(0x6aa83d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6aa83e:{NFSU2_TR(0x6aa83e);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B6aa841:{NFSU2_TR(0x6aa841);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6aa81cu);}goto L6aa81c;}}
}
B6aa843:L6aa843:{c.instructions+=5;NFSU2_TR(0x6aa843);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aa846:{NFSU2_TR(0x6aa846);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6aa84a:{NFSU2_TR(0x6aa84a);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aa84c:{NFSU2_TR(0x6aa84c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aa84f:{NFSU2_TR(0x6aa84f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6aae03;}}
}
B6aa855:L6aa855:{c.instructions+=6;NFSU2_TR(0x6aa855);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aa858:{NFSU2_TR(0x6aa858);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aa85b:{NFSU2_TR(0x6aa85b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6aa85e:{NFSU2_TR(0x6aa85e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+6,u16(u32(r2(U+4))&u32(u16(0xfff0ull))));
w1(R+518,u8((r2(U+6))==(u16(0x0ull))));
}
B6aa864:{NFSU2_TR(0x6aa864);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aa867:{NFSU2_TR(0x6aa867);
if(r1(R+518)){{goto L6aadf4;}}
}
B6aa86d:L6aa86d:{c.instructions+=8;NFSU2_TR(0x6aa86d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6aa870:{NFSU2_TR(0x6aa870);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6aa873:{NFSU2_TR(0x6aa873);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6aa874:{NFSU2_TR(0x6aa874);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6aa876:{NFSU2_TR(0x6aa876);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6aa877:{NFSU2_TR(0x6aa877);
__builtin_memmove((R+4),(R+28),4);
}
B6aa879:{NFSU2_TR(0x6aa879);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6aa880:{NFSU2_TR(0x6aa880);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aa885ull));
TAIL_STATIC(0x698ed2u,698);
}
B6aa885:L6aa885:{c.instructions+=2;NFSU2_TR(0x6aa885);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aa887:{NFSU2_TR(0x6aa887);
if(r1(R+518)){{goto L6aad63;}}
}
B6aa88d:L6aa88d:{c.instructions+=10;NFSU2_TR(0x6aa88d);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6aa88f:{NFSU2_TR(0x6aa88f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6aa892:{NFSU2_TR(0x6aa892);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6aa895:{NFSU2_TR(0x6aa895);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6aa896:{NFSU2_TR(0x6aa896);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6aa897:{NFSU2_TR(0x6aa897);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6aa89a:{NFSU2_TR(0x6aa89a);
__builtin_memmove((R+4),(R+12),4);
}
B6aa89c:{NFSU2_TR(0x6aa89c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6aa89d:{NFSU2_TR(0x6aa89d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6aa8a0:{NFSU2_TR(0x6aa8a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aa8a5ull));
TAIL_STATIC(0x6a4e92u,6a4);
}
B6aa8a5:L6aa8a5:{c.instructions+=2;NFSU2_TR(0x6aa8a5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aa8a7:{NFSU2_TR(0x6aa8a7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6aa8ac;}}
}
B6aa8a9:L6aa8a9:{c.instructions+=1;NFSU2_TR(0x6aa8a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6aa8ac:L6aa8ac:{c.instructions+=6;NFSU2_TR(0x6aa8ac);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6aa8af:{NFSU2_TR(0x6aa8af);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6aa8b0:{NFSU2_TR(0x6aa8b0);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6aa8b1:{NFSU2_TR(0x6aa8b1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6aa8b2:{NFSU2_TR(0x6aa8b2);
__builtin_memmove((R+4),(R+28),4);
}
B6aa8b4:{NFSU2_TR(0x6aa8b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aa8b9ull));
TAIL_STATIC(0x698ed2u,698);
}
B6aa8b9:L6aa8b9:{c.instructions+=2;NFSU2_TR(0x6aa8b9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aa8bb:{NFSU2_TR(0x6aa8bb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6aa88du);}goto L6aa88d;}}
}
B6aa8bd:L6aa8bd:{c.instructions+=2;NFSU2_TR(0x6aa8bd);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6aa8c0:{NFSU2_TR(0x6aa8c0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6aad63;}}
}
B6aa8c6:L6aa8c6:{c.instructions+=2;NFSU2_TR(0x6aa8c6);
__builtin_memmove((R+4),(R+28),4);
}
B6aa8c8:{NFSU2_TR(0x6aa8c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aa8cdull));
TAIL_STATIC(0x698f0fu,698);
}
B6aa8cd:L6aa8cd:{c.instructions+=2;NFSU2_TR(0x6aa8cd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aa8cf:{NFSU2_TR(0x6aa8cf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6aad63;}}
}
B6aa8d5:L6aa8d5:{c.instructions+=6;NFSU2_TR(0x6aa8d5);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6aa8d7:{NFSU2_TR(0x6aa8d7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6aa8d8:{NFSU2_TR(0x6aa8d8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6aa8d9:{NFSU2_TR(0x6aa8d9);
__builtin_memmove((R+4),(R+28),4);
}
B6aa8db:{NFSU2_TR(0x6aa8db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aa8de:{NFSU2_TR(0x6aa8de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aa8e3ull));
TAIL_STATIC(0x698ed2u,698);
}
B6aa8e3:L6aa8e3:{c.instructions+=4;NFSU2_TR(0x6aa8e3);
__builtin_memmove((R+4),(R+0),4);
}
B6aa8e5:{NFSU2_TR(0x6aa8e5);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6aa8e7:{NFSU2_TR(0x6aa8e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aa8ea:{NFSU2_TR(0x6aa8ea);
if(r1(R+518)){{goto L6aa8f8;}}
}
B6aa8ec:L6aa8ec:{c.instructions+=5;NFSU2_TR(0x6aa8ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aa8ef:{NFSU2_TR(0x6aa8ef);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6aa8f1:{NFSU2_TR(0x6aa8f1);
u8 U[56];
w8(U+0,u64(r4(R+4)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6aa8f1);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6aa8f1);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B6aa8f3:{NFSU2_TR(0x6aa8f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aa8f6:{NFSU2_TR(0x6aa8f6);
{goto L6aa8fb;}
}
B6aa8f8:L6aa8f8:{c.instructions+=1;NFSU2_TR(0x6aa8f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aa8fb:L6aa8fb:{c.instructions+=9;NFSU2_TR(0x6aa8fb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6aa8fd:{NFSU2_TR(0x6aa8fd);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6aa8ff:{NFSU2_TR(0x6aa8ff);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6aa902:{NFSU2_TR(0x6aa902);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6aa903:{NFSU2_TR(0x6aa903);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6aa904:{NFSU2_TR(0x6aa904);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6aa905:{NFSU2_TR(0x6aa905);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6aa906:{NFSU2_TR(0x6aa906);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aa909:{NFSU2_TR(0x6aa909);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6aadf4;}}
}
B6aa90f:L6aa90f:{c.instructions+=5;NFSU2_TR(0x6aa90f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6aa913:{NFSU2_TR(0x6aa913);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6aa916:{NFSU2_TR(0x6aa916);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6aa919:{NFSU2_TR(0x6aa919);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x4ull))));
}
B6aa91c:{NFSU2_TR(0x6aa91c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aa91f:L6aa91f:{c.instructions+=5;NFSU2_TR(0x6aa91f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6aa922:{NFSU2_TR(0x6aa922);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aa925:{NFSU2_TR(0x6aa925);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6aa928:{NFSU2_TR(0x6aa928);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6aa92c:{NFSU2_TR(0x6aa92c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6aac16;}}
}
B6aa932:L6aa932:{c.instructions+=6;NFSU2_TR(0x6aa932);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aa935:{NFSU2_TR(0x6aa935);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6aa936:{NFSU2_TR(0x6aa936);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6aa939:{NFSU2_TR(0x6aa939);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6aa940:{NFSU2_TR(0x6aa940);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aa943:{NFSU2_TR(0x6aa943);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6aa9e0;}}
}
B6aa949:L6aa949:{c.instructions+=2;NFSU2_TR(0x6aa949);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B6aa94b:{NFSU2_TR(0x6aa94b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aa94e:L6aa94e:{c.instructions+=3;NFSU2_TR(0x6aa94e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6aa950:{NFSU2_TR(0x6aa950);
u8 U[24];
w4(U+0,u32(u32(u32(0xffffff98ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(r4(R+0))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B6aa954:{NFSU2_TR(0x6aa954);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6aa9cc;}}
}
B6aa956:L6aa956:{c.instructions+=3;NFSU2_TR(0x6aa956);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6aa959:{NFSU2_TR(0x6aa959);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aa95c:{NFSU2_TR(0x6aa95c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6aa9c1;}}
}
B6aa95e:L6aa95e:{c.instructions+=2;NFSU2_TR(0x6aa95e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aa961:{NFSU2_TR(0x6aa961);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B6aa964:L6aa964:{c.instructions+=12;NFSU2_TR(0x6aa964);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aa967:{NFSU2_TR(0x6aa967);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6aa96a:{NFSU2_TR(0x6aa96a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6aa96c:{NFSU2_TR(0x6aa96c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6aa96f:{NFSU2_TR(0x6aa96f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6aa972:{NFSU2_TR(0x6aa972);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6aa975:{NFSU2_TR(0x6aa975);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aa978:{NFSU2_TR(0x6aa978);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6aa97b:{NFSU2_TR(0x6aa97b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6aa97e:{NFSU2_TR(0x6aa97e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6aa981:{NFSU2_TR(0x6aa981);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6aa984:{NFSU2_TR(0x6aa984);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6aa9c1;}}
}
B6aa986:L6aa986:{c.instructions+=7;NFSU2_TR(0x6aa986);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6aa989:{NFSU2_TR(0x6aa989);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6aa98c:{NFSU2_TR(0x6aa98c);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6aa98f:{NFSU2_TR(0x6aa98f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6aa992:{NFSU2_TR(0x6aa992);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6aa995:{NFSU2_TR(0x6aa995);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6aa998:{NFSU2_TR(0x6aa998);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6aa9c1;}}
}
B6aa99a:L6aa99a:{c.instructions+=7;NFSU2_TR(0x6aa99a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6aa99d:{NFSU2_TR(0x6aa99d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6aa9a0:{NFSU2_TR(0x6aa9a0);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6aa9a3:{NFSU2_TR(0x6aa9a3);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6aa9a6:{NFSU2_TR(0x6aa9a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aa9a9:{NFSU2_TR(0x6aa9a9);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6aa9ac:{NFSU2_TR(0x6aa9ac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6aa9c1;}}
}
B6aa9ae:L6aa9ae:{c.instructions+=7;NFSU2_TR(0x6aa9ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aa9b1:{NFSU2_TR(0x6aa9b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6aa9b4:{NFSU2_TR(0x6aa9b4);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6aa9b7:{NFSU2_TR(0x6aa9b7);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B6aa9b9:{NFSU2_TR(0x6aa9b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aa9bc:{NFSU2_TR(0x6aa9bc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6aa9bf:{NFSU2_TR(0x6aa9bf);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6aa964u);}goto L6aa964;}}
}
B6aa9c1:L6aa9c1:{c.instructions+=3;NFSU2_TR(0x6aa9c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aa9c4:{NFSU2_TR(0x6aa9c4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6aa9c7:{NFSU2_TR(0x6aa9c7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6aa9cc;}}
}
B6aa9c9:L6aa9c9:{c.instructions+=1;NFSU2_TR(0x6aa9c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6aa9cc:L6aa9cc:{c.instructions+=6;NFSU2_TR(0x6aa9cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aa9cf:{NFSU2_TR(0x6aa9cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6aa9d3:{NFSU2_TR(0x6aa9d3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6aa9d4:{NFSU2_TR(0x6aa9d4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6aa9d7:{NFSU2_TR(0x6aa9d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aa9da:{NFSU2_TR(0x6aa9da);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6aa94eu);}goto L6aa94e;}}
}
B6aa9e0:L6aa9e0:{c.instructions+=9;NFSU2_TR(0x6aa9e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6aa9e2:{NFSU2_TR(0x6aa9e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(U+4))));
}
B6aa9e5:{NFSU2_TR(0x6aa9e5);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6aa9e7:{NFSU2_TR(0x6aa9e7);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6aa9ec:{NFSU2_TR(0x6aa9ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(U+0))));
}
B6aa9ee:{NFSU2_TR(0x6aa9ee);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6aa9f0:{NFSU2_TR(0x6aa9f0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6aa9f1:{NFSU2_TR(0x6aa9f1);
__builtin_memmove((R+4),(R+12),4);
}
B6aa9f3:{NFSU2_TR(0x6aa9f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aa9f8ull));
TAIL_STATIC(0x699c99u,699);
}
B6aa9f8:L6aa9f8:{c.instructions+=3;NFSU2_TR(0x6aa9f8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6aa9fb:{NFSU2_TR(0x6aa9fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aa9fe:{NFSU2_TR(0x6aa9fe);
if(r1(R+518)){{goto L6aae5f;}}
}
B6aaa04:L6aaa04:{c.instructions+=6;NFSU2_TR(0x6aaa04);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aaa07:{NFSU2_TR(0x6aaa07);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aaa0a:{NFSU2_TR(0x6aaa0a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6aaa0d:{NFSU2_TR(0x6aaa0d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6aaa0e:{NFSU2_TR(0x6aaa0e);
__builtin_memmove((R+4),(R+28),4);
}
B6aaa10:{NFSU2_TR(0x6aaa10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aaa15ull));
TAIL_STATIC(0x698eb3u,698);
}
B6aaa15:L6aaa15:{c.instructions+=4;NFSU2_TR(0x6aaa15);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aaa18:{NFSU2_TR(0x6aaa18);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6aaa1b:{NFSU2_TR(0x6aaa1b);
__builtin_memmove((R+4),(R+0),4);
}
B6aaa1d:{NFSU2_TR(0x6aaa1d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6aab66;}}
}
B6aaa23:L6aaa23:{c.instructions+=7;NFSU2_TR(0x6aaa23);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aaa26:{NFSU2_TR(0x6aaa26);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0xfffffffcull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6aaa2d:{NFSU2_TR(0x6aaa2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aaa30:{NFSU2_TR(0x6aaa30);
__builtin_memmove((R+0),(R+4),4);
}
B6aaa32:{NFSU2_TR(0x6aaa32);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6aaa35:{NFSU2_TR(0x6aaa35);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B6aaa38:{NFSU2_TR(0x6aaa38);
{goto L6aaa3d;}
}
B6aaa3a:L6aaa3a:{c.instructions+=1;NFSU2_TR(0x6aaa3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aaa3d:L6aaa3d:{c.instructions+=11;NFSU2_TR(0x6aaa3d);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x4ull))));
}
B6aaa40:{NFSU2_TR(0x6aaa40);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B6aaa41:{NFSU2_TR(0x6aaa41);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aaa44:{NFSU2_TR(0x6aaa44);
__builtin_memmove((R+0),(R+4),4);
}
B6aaa46:{NFSU2_TR(0x6aaa46);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6aaa49:{NFSU2_TR(0x6aaa49);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aaa4c:{NFSU2_TR(0x6aaa4c);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffff98ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6aaa50:{NFSU2_TR(0x6aaa50);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6aaa52:{NFSU2_TR(0x6aaa52);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6aaa54:{NFSU2_TR(0x6aaa54);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aaa57:{NFSU2_TR(0x6aaa57);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6aab5a;}}
}
B6aaa5d:L6aaa5d:{c.instructions+=3;NFSU2_TR(0x6aaa5d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6aaa60:{NFSU2_TR(0x6aaa60);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aaa63:{NFSU2_TR(0x6aaa63);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6aab21;}}
}
B6aaa69:L6aaa69:{c.instructions+=3;NFSU2_TR(0x6aaa69);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aaa6c:{NFSU2_TR(0x6aaa6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B6aaa6f:{NFSU2_TR(0x6aaa6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aaa72:L6aaa72:{c.instructions+=12;NFSU2_TR(0x6aaa72);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aaa75:{NFSU2_TR(0x6aaa75);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6aaa78:{NFSU2_TR(0x6aaa78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6aaa7a:{NFSU2_TR(0x6aaa7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6aaa7d:{NFSU2_TR(0x6aaa7d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6aaa80:{NFSU2_TR(0x6aaa80);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aaa83:{NFSU2_TR(0x6aaa83);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6aaa86:{NFSU2_TR(0x6aaa86);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aaa89:{NFSU2_TR(0x6aaa89);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6aaa8c:{NFSU2_TR(0x6aaa8c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6aaa8f:{NFSU2_TR(0x6aaa8f);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6aaa92:{NFSU2_TR(0x6aaa92);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6aaad5;}}
}
B6aaa94:L6aaa94:{c.instructions+=7;NFSU2_TR(0x6aaa94);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aaa97:{NFSU2_TR(0x6aaa97);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6aaa9a:{NFSU2_TR(0x6aaa9a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6aaa9d:{NFSU2_TR(0x6aaa9d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6aaaa0:{NFSU2_TR(0x6aaaa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6aaaa3:{NFSU2_TR(0x6aaaa3);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6aaaa6:{NFSU2_TR(0x6aaaa6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6aaad5;}}
}
B6aaaa8:L6aaaa8:{c.instructions+=7;NFSU2_TR(0x6aaaa8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aaaab:{NFSU2_TR(0x6aaaab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6aaaae:{NFSU2_TR(0x6aaaae);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6aaab1:{NFSU2_TR(0x6aaab1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6aaab4:{NFSU2_TR(0x6aaab4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aaab7:{NFSU2_TR(0x6aaab7);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6aaaba:{NFSU2_TR(0x6aaaba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6aaad5;}}
}
B6aaabc:L6aaabc:{c.instructions+=9;NFSU2_TR(0x6aaabc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aaabf:{NFSU2_TR(0x6aaabf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aaac2:{NFSU2_TR(0x6aaac2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6aaac5:{NFSU2_TR(0x6aaac5);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6aaac8:{NFSU2_TR(0x6aaac8);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B6aaaca:{NFSU2_TR(0x6aaaca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aaacd:{NFSU2_TR(0x6aaacd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6aaad0:{NFSU2_TR(0x6aaad0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aaad3:{NFSU2_TR(0x6aaad3);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6aaa72u);}goto L6aaa72;}}
}
B6aaad5:L6aaad5:{c.instructions+=3;NFSU2_TR(0x6aaad5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aaad8:{NFSU2_TR(0x6aaad8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
}
B6aaadb:{NFSU2_TR(0x6aaadb);
if(r1(R+512)){{goto L6aab5a;}}
}
B6aaadd:L6aaadd:{c.instructions+=6;NFSU2_TR(0x6aaadd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aaae0:{NFSU2_TR(0x6aaae0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aaae3:{NFSU2_TR(0x6aaae3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aaae6:{NFSU2_TR(0x6aaae6);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6aaae9:{NFSU2_TR(0x6aaae9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aaaec:{NFSU2_TR(0x6aaaec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aaaef:L6aaaef:{c.instructions+=14;NFSU2_TR(0x6aaaef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6aaaf2:{NFSU2_TR(0x6aaaf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aaaf5:{NFSU2_TR(0x6aaaf5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6aaaf8:{NFSU2_TR(0x6aaaf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6aaafb:{NFSU2_TR(0x6aaafb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aaafe:{NFSU2_TR(0x6aaafe);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6aab01:{NFSU2_TR(0x6aab01);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aab04:{NFSU2_TR(0x6aab04);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6aab07:{NFSU2_TR(0x6aab07);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6aab0a:{NFSU2_TR(0x6aab0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aab0d:{NFSU2_TR(0x6aab0d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6aab10:{NFSU2_TR(0x6aab10);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6aab13:{NFSU2_TR(0x6aab13);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6aab16:{NFSU2_TR(0x6aab16);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6aaaefu);}goto L6aaaef;}}
}
B6aab18:L6aab18:{c.instructions+=2;NFSU2_TR(0x6aab18);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aab1b:{NFSU2_TR(0x6aab1b);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+0)),r4(U+0));
}
B6aab21:L6aab21:{c.instructions+=4;NFSU2_TR(0x6aab21);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6aab23:{NFSU2_TR(0x6aab23);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6aab28:{NFSU2_TR(0x6aab28);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x50000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aab2d:{NFSU2_TR(0x6aab2d);
if(r1(R+518)){{goto L6aab56;}}
}
B6aab2f:L6aab2f:{c.instructions+=13;NFSU2_TR(0x6aab2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aab32:{NFSU2_TR(0x6aab32);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aab35:{NFSU2_TR(0x6aab35);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6aab38:{NFSU2_TR(0x6aab38);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6aab3b:{NFSU2_TR(0x6aab3b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6aab3e:{NFSU2_TR(0x6aab3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aab41:{NFSU2_TR(0x6aab41);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6aab44:{NFSU2_TR(0x6aab44);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aab47:{NFSU2_TR(0x6aab47);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6aab4a:{NFSU2_TR(0x6aab4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aab4d:{NFSU2_TR(0x6aab4d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6aab50:{NFSU2_TR(0x6aab50);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aab53:{NFSU2_TR(0x6aab53);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aab56:L6aab56:{c.instructions+=1;NFSU2_TR(0x6aab56);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6aab5a:L6aab5a:{c.instructions+=3;NFSU2_TR(0x6aab5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aab5d:{NFSU2_TR(0x6aab5d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6aab60:{NFSU2_TR(0x6aab60);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6aaa3au);}goto L6aaa3a;}}
}
B6aab66:L6aab66:{c.instructions+=4;NFSU2_TR(0x6aab66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6aab68:{NFSU2_TR(0x6aab68);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6aab6d:{NFSU2_TR(0x6aab6d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x50000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aab72:{NFSU2_TR(0x6aab72);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6aac16;}}
}
B6aab78:L6aab78:{c.instructions+=3;NFSU2_TR(0x6aab78);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aab7b:{NFSU2_TR(0x6aab7b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6aab7e:{NFSU2_TR(0x6aab7e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6aab8c;}}
}
B6aab80:L6aab80:{c.instructions+=5;NFSU2_TR(0x6aab80);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aab83:{NFSU2_TR(0x6aab83);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aab86:{NFSU2_TR(0x6aab86);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6aab88:{NFSU2_TR(0x6aab88);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6aab8a:{NFSU2_TR(0x6aab8a);
{goto L6aac05;}
}
B6aab8c:L6aab8c:{c.instructions+=9;NFSU2_TR(0x6aab8c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6aab8d:{NFSU2_TR(0x6aab8d);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6aab8f:{NFSU2_TR(0x6aab8f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6aab90:{NFSU2_TR(0x6aab90);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6aab93:{NFSU2_TR(0x6aab93);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6aab96:{NFSU2_TR(0x6aab96);
__builtin_memmove((R+4),(R+12),4);
}
B6aab98:{NFSU2_TR(0x6aab98);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6aab9b:{NFSU2_TR(0x6aab9b);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6aaba1:{NFSU2_TR(0x6aaba1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aaba6ull));
TAIL_STATIC(0x699c39u,699);
}
B6aaba6:L6aaba6:{c.instructions+=7;NFSU2_TR(0x6aaba6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aaba9:{NFSU2_TR(0x6aaba9);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff88ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6aabad:{NFSU2_TR(0x6aabad);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aabb0:{NFSU2_TR(0x6aabb0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6aabb2:{NFSU2_TR(0x6aabb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aabb5:{NFSU2_TR(0x6aabb5);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6aabb8:{NFSU2_TR(0x6aabb8);
if(r1(R+518)){{goto L6aae5f;}}
}
B6aabbe:L6aabbe:{c.instructions+=22;NFSU2_TR(0x6aabbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aabc1:{NFSU2_TR(0x6aabc1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6aabc3:{NFSU2_TR(0x6aabc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aabc6:{NFSU2_TR(0x6aabc6);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6aabc9:{NFSU2_TR(0x6aabc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6aabcc:{NFSU2_TR(0x6aabcc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6aabce:{NFSU2_TR(0x6aabce);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aabd1:{NFSU2_TR(0x6aabd1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6aabd4:{NFSU2_TR(0x6aabd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aabd7:{NFSU2_TR(0x6aabd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aabda:{NFSU2_TR(0x6aabda);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6aabdc:{NFSU2_TR(0x6aabdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aabdf:{NFSU2_TR(0x6aabdf);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6aabe2:{NFSU2_TR(0x6aabe2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6aabe5:{NFSU2_TR(0x6aabe5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6aabe7:{NFSU2_TR(0x6aabe7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aabea:{NFSU2_TR(0x6aabea);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6aabed:{NFSU2_TR(0x6aabed);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6aabef:{NFSU2_TR(0x6aabef);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aabf2:{NFSU2_TR(0x6aabf2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6aabf3:{NFSU2_TR(0x6aabf3);
__builtin_memmove((R+4),(R+12),4);
}
B6aabf5:{NFSU2_TR(0x6aabf5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aabfaull));
TAIL_STATIC(0x69ac93u,69a);
}
B6aabfa:L6aabfa:{c.instructions+=2;NFSU2_TR(0x6aabfa);
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
B6aabfc:{NFSU2_TR(0x6aabfc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6aae53;}}
}
B6aac02:L6aac02:{c.instructions+=1;NFSU2_TR(0x6aac02);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6aac05:L6aac05:{c.instructions+=6;NFSU2_TR(0x6aac05);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aac08:{NFSU2_TR(0x6aac08);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aac0b:{NFSU2_TR(0x6aac0b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6aac0d:{NFSU2_TR(0x6aac0d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6aac10:{NFSU2_TR(0x6aac10);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aac13:{NFSU2_TR(0x6aac13);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aac16:L6aac16:{c.instructions+=5;NFSU2_TR(0x6aac16);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6aac19:{NFSU2_TR(0x6aac19);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aac1c:{NFSU2_TR(0x6aac1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6aac20:{NFSU2_TR(0x6aac20);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6aac23:{NFSU2_TR(0x6aac23);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6aa91fu);}goto L6aa91f;}}
}
B6aac29:L6aac29:{c.instructions+=2;NFSU2_TR(0x6aac29);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6aac2d:{NFSU2_TR(0x6aac2d);
if(r1(R+518)){{goto L6aadf4;}}
}
B6aac33:L6aac33:{c.instructions+=5;NFSU2_TR(0x6aac33);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6aac37:{NFSU2_TR(0x6aac37);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6aac39:{NFSU2_TR(0x6aac39);
__builtin_memmove((R+4),(R+12),4);
}
B6aac3b:{NFSU2_TR(0x6aac3b);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6aac3d:{NFSU2_TR(0x6aac3d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6aacaa;}}
}
B6aac3f:L6aac3f:{c.instructions+=2;NFSU2_TR(0x6aac3f);
u8 U[4];
w4(U+0,u32(0x20400001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6aac44:{NFSU2_TR(0x6aac44);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aac49ull));
TAIL_STATIC(0x699c99u,699);
}
B6aac49:L6aac49:{c.instructions+=2;NFSU2_TR(0x6aac49);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6aac4d:{NFSU2_TR(0x6aac4d);
__builtin_memmove((R+24),(R+0),4);
}
B6aac4f:L6aac4f:{c.instructions+=13;NFSU2_TR(0x6aac4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aac52:{NFSU2_TR(0x6aac52);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6aac55:{NFSU2_TR(0x6aac55);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6aac58:{NFSU2_TR(0x6aac58);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffff88ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B6aac5c:{NFSU2_TR(0x6aac5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6aac5e:{NFSU2_TR(0x6aac5e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6aac61:{NFSU2_TR(0x6aac61);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6aac64:{NFSU2_TR(0x6aac64);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6aac67:{NFSU2_TR(0x6aac67);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6aac6a:{NFSU2_TR(0x6aac6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6aac6c:{NFSU2_TR(0x6aac6c);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfff00000ull))));
}
B6aac72:{NFSU2_TR(0x6aac72);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6aac78:{NFSU2_TR(0x6aac78);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6aac9f;}}
}
B6aac7a:L6aac7a:{c.instructions+=13;NFSU2_TR(0x6aac7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6aac7d:{NFSU2_TR(0x6aac7d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6aac80:{NFSU2_TR(0x6aac80);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6aac83:{NFSU2_TR(0x6aac83);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6aac86:{NFSU2_TR(0x6aac86);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+8)),r4(U+0));
}
B6aac89:{NFSU2_TR(0x6aac89);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6aac8c:{NFSU2_TR(0x6aac8c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6aac8f:{NFSU2_TR(0x6aac8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aac92:{NFSU2_TR(0x6aac92);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6aac95:{NFSU2_TR(0x6aac95);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6aac98:{NFSU2_TR(0x6aac98);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aac9b:{NFSU2_TR(0x6aac9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6aac9d:{NFSU2_TR(0x6aac9d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6aac9f:L6aac9f:{c.instructions+=3;NFSU2_TR(0x6aac9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6aaca2:{NFSU2_TR(0x6aaca2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x2ull))));
}
B6aaca6:{NFSU2_TR(0x6aaca6);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6aac4fu);}goto L6aac4f;}}
}
B6aaca8:L6aaca8:{c.instructions+=1;NFSU2_TR(0x6aaca8);
{goto L6aacbf;}
}
B6aacaa:L6aacaa:{c.instructions+=5;NFSU2_TR(0x6aacaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aacad:{NFSU2_TR(0x6aacad);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6aacb2:{NFSU2_TR(0x6aacb2);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x50000000ull))));
}
B6aacb7:{NFSU2_TR(0x6aacb7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6aacb8:{NFSU2_TR(0x6aacb8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aacbdull));
TAIL_STATIC(0x699c99u,699);
}
B6aacbd:L6aacbd:{c.instructions+=1;NFSU2_TR(0x6aacbd);
__builtin_memmove((R+24),(R+0),4);
}
B6aacbf:L6aacbf:{c.instructions+=2;NFSU2_TR(0x6aacbf);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B6aacc2:{NFSU2_TR(0x6aacc2);
if(r1(R+518)){{goto L6aae58;}}
}
B6aacc8:L6aacc8:{c.instructions+=6;NFSU2_TR(0x6aacc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aaccb:{NFSU2_TR(0x6aaccb);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6aacce:{NFSU2_TR(0x6aacce);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6aacd1:{NFSU2_TR(0x6aacd1);
__builtin_memmove((R+4),(R+28),4);
}
B6aacd3:{NFSU2_TR(0x6aacd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aacd6:{NFSU2_TR(0x6aacd6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aacdbull));
TAIL_STATIC(0x698eb3u,698);
}
B6aacdb:L6aacdb:{c.instructions+=16;NFSU2_TR(0x6aacdb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aacde:{NFSU2_TR(0x6aacde);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aace1:{NFSU2_TR(0x6aace1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aace4:{NFSU2_TR(0x6aace4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6aace6:{NFSU2_TR(0x6aace6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6aace8:{NFSU2_TR(0x6aace8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aaceb:{NFSU2_TR(0x6aaceb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6aaced:{NFSU2_TR(0x6aaced);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aacf0:{NFSU2_TR(0x6aacf0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6aacf3:{NFSU2_TR(0x6aacf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aacf6:{NFSU2_TR(0x6aacf6);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6aacf9:{NFSU2_TR(0x6aacf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aacfc:{NFSU2_TR(0x6aacfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6aacff:{NFSU2_TR(0x6aacff);
__builtin_memmove((R+0),(R+4),4);
}
B6aad01:{NFSU2_TR(0x6aad01);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6aad04:{NFSU2_TR(0x6aad04);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6aad07:L6aad07:{c.instructions+=1;NFSU2_TR(0x6aad07);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6aad09;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6aad07u);}goto L6aad07;}
}
B6aad09:L6aad09:{c.instructions+=3;NFSU2_TR(0x6aad09);
__builtin_memmove((R+4),(R+0),4);
}
B6aad0b:{NFSU2_TR(0x6aad0b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6aad0e:{NFSU2_TR(0x6aad0e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6aad12:L6aad12:{c.instructions+=1;NFSU2_TR(0x6aad12);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6aad14;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6aad12u);}goto L6aad12;}
}
B6aad14:L6aad14:{c.instructions+=1;NFSU2_TR(0x6aad14);
if(r1(R+518)){{goto L6aad5b;}}
}
B6aad16:L6aad16:{c.instructions+=2;NFSU2_TR(0x6aad16);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6aad1a:{NFSU2_TR(0x6aad1a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6aad3d;}}
}
B6aad1c:L6aad1c:{c.instructions+=9;NFSU2_TR(0x6aad1c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6aad1d:{NFSU2_TR(0x6aad1d);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B6aad1f:{NFSU2_TR(0x6aad1f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6aad20:{NFSU2_TR(0x6aad20);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6aad23:{NFSU2_TR(0x6aad23);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6aad25:{NFSU2_TR(0x6aad25);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6aad27:{NFSU2_TR(0x6aad27);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6aad2a:{NFSU2_TR(0x6aad2a);
__builtin_memmove((R+4),(R+12),4);
}
B6aad2c:{NFSU2_TR(0x6aad2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aad31ull));
TAIL_STATIC(0x699c39u,699);
}
B6aad31:L6aad31:{c.instructions+=3;NFSU2_TR(0x6aad31);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6aad34:{NFSU2_TR(0x6aad34);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aad37:{NFSU2_TR(0x6aad37);
if(r1(R+518)){{goto L6aae5f;}}
}
B6aad3d:L6aad3d:{c.instructions+=3;NFSU2_TR(0x6aad3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aad40:{NFSU2_TR(0x6aad40);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aad42:{NFSU2_TR(0x6aad42);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6aad5b;}}
}
B6aad44:L6aad44:{c.instructions+=2;NFSU2_TR(0x6aad44);
__builtin_memmove((R+0),(R+4),4);
}
B6aad46:{NFSU2_TR(0x6aad46);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6aad49:L6aad49:{c.instructions+=7;NFSU2_TR(0x6aad49);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6aad4c:{NFSU2_TR(0x6aad4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6aad4f:{NFSU2_TR(0x6aad4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6aad52:{NFSU2_TR(0x6aad52);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+24),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6aad55:{NFSU2_TR(0x6aad55);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6aad58:{NFSU2_TR(0x6aad58);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6aad59:{NFSU2_TR(0x6aad59);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6aad49u);}goto L6aad49;}}
}
B6aad5b:L6aad5b:{c.instructions+=2;NFSU2_TR(0x6aad5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6aad5e:{NFSU2_TR(0x6aad5e);
{goto L6aadf4;}
}
B6aad63:L6aad63:{c.instructions+=5;NFSU2_TR(0x6aad63);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6aad66:{NFSU2_TR(0x6aad66);
__builtin_memmove((R+4),(R+12),4);
}
B6aad68:{NFSU2_TR(0x6aad68);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6aad6b:{NFSU2_TR(0x6aad6b);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6aad6d:{NFSU2_TR(0x6aad6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aad72ull));
TAIL_STATIC(0x699c99u,699);
}
B6aad72:L6aad72:{c.instructions+=3;NFSU2_TR(0x6aad72);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6aad75:{NFSU2_TR(0x6aad75);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aad78:{NFSU2_TR(0x6aad78);
if(r1(R+518)){{goto L6aae5f;}}
}
B6aad7e:L6aad7e:{c.instructions+=8;NFSU2_TR(0x6aad7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aad81:{NFSU2_TR(0x6aad81);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aad84:{NFSU2_TR(0x6aad84);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6aad87:{NFSU2_TR(0x6aad87);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6aad8a:{NFSU2_TR(0x6aad8a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6aad8b:{NFSU2_TR(0x6aad8b);
__builtin_memmove((R+4),(R+28),4);
}
B6aad8d:{NFSU2_TR(0x6aad8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aad90:{NFSU2_TR(0x6aad90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aad95ull));
TAIL_STATIC(0x698eb3u,698);
}
B6aad95:L6aad95:{c.instructions+=7;NFSU2_TR(0x6aad95);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aad98:{NFSU2_TR(0x6aad98);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6aad9b:{NFSU2_TR(0x6aad9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6aad9e:{NFSU2_TR(0x6aad9e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6aada1:{NFSU2_TR(0x6aada1);
__builtin_memmove((R+0),(R+4),4);
}
B6aada3:{NFSU2_TR(0x6aada3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6aada6:{NFSU2_TR(0x6aada6);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6aada9:L6aada9:{c.instructions+=1;NFSU2_TR(0x6aada9);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6aadab;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6aada9u);}goto L6aada9;}
}
B6aadab:L6aadab:{c.instructions+=3;NFSU2_TR(0x6aadab);
__builtin_memmove((R+4),(R+0),4);
}
B6aadad:{NFSU2_TR(0x6aadad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aadb0:{NFSU2_TR(0x6aadb0);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6aadb3:L6aadb3:{c.instructions+=1;NFSU2_TR(0x6aadb3);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6aadb5;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6aadb3u);}goto L6aadb3;}
}
B6aadb5:L6aadb5:{c.instructions+=6;NFSU2_TR(0x6aadb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aadb8:{NFSU2_TR(0x6aadb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6aadbb:{NFSU2_TR(0x6aadbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6aadbe:{NFSU2_TR(0x6aadbe);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6aadc1:{NFSU2_TR(0x6aadc1);
__builtin_memmove((R+8),(R+4),4);
}
B6aadc3:{NFSU2_TR(0x6aadc3);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6aadc6:L6aadc6:{c.instructions+=1;NFSU2_TR(0x6aadc6);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6aadc8;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6aadc6u);}goto L6aadc6;}
}
B6aadc8:L6aadc8:{c.instructions+=2;NFSU2_TR(0x6aadc8);
__builtin_memmove((R+4),(R+8),4);
}
B6aadca:{NFSU2_TR(0x6aadca);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6aadcd:L6aadcd:{c.instructions+=1;NFSU2_TR(0x6aadcd);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6aadcf;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6aadcdu);}goto L6aadcd;}
}
B6aadcf:L6aadcf:{c.instructions+=3;NFSU2_TR(0x6aadcf);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6aadd1:{NFSU2_TR(0x6aadd1);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6aadd4:{NFSU2_TR(0x6aadd4);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6aadf4;}}
}
B6aadd6:L6aadd6:{c.instructions+=11;NFSU2_TR(0x6aadd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aadd9:{NFSU2_TR(0x6aadd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aaddc:{NFSU2_TR(0x6aaddc);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6aaddf:{NFSU2_TR(0x6aaddf);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6aade2:{NFSU2_TR(0x6aade2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6aade5:{NFSU2_TR(0x6aade5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6aade8:{NFSU2_TR(0x6aade8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aadeb:{NFSU2_TR(0x6aadeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aadee:{NFSU2_TR(0x6aadee);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6aadef:{NFSU2_TR(0x6aadef);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6aadf2:{NFSU2_TR(0x6aadf2);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6aadd6u);}goto L6aadd6;}}
}
B6aadf4:L6aadf4:{c.instructions+=4;NFSU2_TR(0x6aadf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6aadf7:{NFSU2_TR(0x6aadf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aadfa:{NFSU2_TR(0x6aadfa);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6aadfd:{NFSU2_TR(0x6aadfd);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6aa855u);}goto L6aa855;}}
}
B6aae03:L6aae03:{c.instructions+=3;NFSU2_TR(0x6aae03);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6aae05:{NFSU2_TR(0x6aae05);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6aae08:{NFSU2_TR(0x6aae08);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6aae19;}}
}
B6aae0a:L6aae0a:{c.instructions+=6;NFSU2_TR(0x6aae0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aae0d:{NFSU2_TR(0x6aae0d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6aae10:{NFSU2_TR(0x6aae10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+4)),r4(U+0));
}
B6aae13:{NFSU2_TR(0x6aae13);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6aae14:{NFSU2_TR(0x6aae14);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6aae17:{NFSU2_TR(0x6aae17);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6aae0au);}goto L6aae0a;}}
}
B6aae19:L6aae19:{c.instructions+=2;NFSU2_TR(0x6aae19);
__builtin_memmove((R+4),(R+12),4);
}
B6aae1b:{NFSU2_TR(0x6aae1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aae20ull));
TAIL_STATIC(0x69f745u,69f);
}
B6aae20:L6aae20:{c.instructions+=2;NFSU2_TR(0x6aae20);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aae22:{NFSU2_TR(0x6aae22);
if(r1(R+518)){{goto L6aae28;}}
}
B6aae24:L6aae24:{c.instructions+=2;NFSU2_TR(0x6aae24);
__builtin_memmove((R+24),(R+0),4);
}
B6aae26:{NFSU2_TR(0x6aae26);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6aae48;}}
}
B6aae28:L6aae28:{c.instructions+=2;NFSU2_TR(0x6aae28);
__builtin_memmove((R+4),(R+12),4);
}
B6aae2a:{NFSU2_TR(0x6aae2a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aae2full));
TAIL_STATIC(0x69a74eu,69a);
}
B6aae2f:L6aae2f:{c.instructions+=2;NFSU2_TR(0x6aae2f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aae31:{NFSU2_TR(0x6aae31);
if(r1(R+518)){{goto L6aae37;}}
}
B6aae33:L6aae33:{c.instructions+=2;NFSU2_TR(0x6aae33);
__builtin_memmove((R+24),(R+0),4);
}
B6aae35:{NFSU2_TR(0x6aae35);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6aae48;}}
}
B6aae37:L6aae37:{c.instructions+=2;NFSU2_TR(0x6aae37);
__builtin_memmove((R+4),(R+12),4);
}
B6aae39:{NFSU2_TR(0x6aae39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aae3eull));
TAIL_STATIC(0x6a806fu,6a8);
}
B6aae3e:L6aae3e:{c.instructions+=2;NFSU2_TR(0x6aae3e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aae40:{NFSU2_TR(0x6aae40);
if(r1(R+518)){{goto L6aae46;}}
}
B6aae42:L6aae42:{c.instructions+=2;NFSU2_TR(0x6aae42);
__builtin_memmove((R+24),(R+0),4);
}
B6aae44:{NFSU2_TR(0x6aae44);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6aae48;}}
}
B6aae46:L6aae46:{c.instructions+=1;NFSU2_TR(0x6aae46);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6aae48:L6aae48:{c.instructions+=2;NFSU2_TR(0x6aae48);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6aae4b:{NFSU2_TR(0x6aae4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aae50ull));
TAIL_STATIC(0x575630u,575);
}
B6aae50:L6aae50:{c.instructions+=2;NFSU2_TR(0x6aae50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6aae51:{NFSU2_TR(0x6aae51);
__builtin_memmove((R+0),(R+24),4);
}
B6aae53:L6aae53:{c.instructions+=5;NFSU2_TR(0x6aae53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6aae54:{NFSU2_TR(0x6aae54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6aae55:{NFSU2_TR(0x6aae55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6aae56:{NFSU2_TR(0x6aae56);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6aae57:{NFSU2_TR(0x6aae57);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6aae58:L6aae58:{c.instructions+=2;NFSU2_TR(0x6aae58);
w4(R+0,u32(0x8007000eull));
}
B6aae5d:{NFSU2_TR(0x6aae5d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6aae53u);}goto L6aae53;}
}
B6aae5f:L6aae5f:{c.instructions+=2;NFSU2_TR(0x6aae5f);
w4(R+24,u32(0x8007000eull));
}
B6aae64:{NFSU2_TR(0x6aae64);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6aae48u);}goto L6aae48;}
}
B6aae66:L6aae66:{c.instructions+=9;NFSU2_TR(0x6aae66);
__builtin_memmove((R+28),(R+28),4);
}
B6aae68:{NFSU2_TR(0x6aae68);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6aae69:{NFSU2_TR(0x6aae69);
__builtin_memmove((R+20),(R+16),4);
}
B6aae6b:{NFSU2_TR(0x6aae6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xb8ull))));
}
B6aae71:{NFSU2_TR(0x6aae71);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6aae72:{NFSU2_TR(0x6aae72);
__builtin_memmove((R+12),(R+4),4);
}
B6aae74:{NFSU2_TR(0x6aae74);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6aae76:{NFSU2_TR(0x6aae76);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xccull))));
w1(R+512,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6aae7d:{NFSU2_TR(0x6aae7d);
if(r1(R+518)){{goto L6aae85;}}
}
B6aae7f:L6aae7f:{c.instructions+=2;NFSU2_TR(0x6aae7f);
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
B6aae80:{NFSU2_TR(0x6aae80);
TAIL_STATIC(0x6abcf8u,6ab);
}
B6aae85:L6aae85:{c.instructions+=6;NFSU2_TR(0x6aae85);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6aae86:{NFSU2_TR(0x6aae86);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6aae88:{NFSU2_TR(0x6aae88);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6aae8b:{NFSU2_TR(0x6aae8b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6aae8c:{NFSU2_TR(0x6aae8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aae8f:{NFSU2_TR(0x6aae8f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6aaea0;}}
}
B6aae91:L6aae91:{c.instructions+=6;NFSU2_TR(0x6aae91);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aae94:{NFSU2_TR(0x6aae94);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6aae97:{NFSU2_TR(0x6aae97);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6aae98:{NFSU2_TR(0x6aae98);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aae9b:{NFSU2_TR(0x6aae9b);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6aae9e:{NFSU2_TR(0x6aae9e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6aae91u);}goto L6aae91;}}
}
B6aaea0:L6aaea0:{c.instructions+=3;NFSU2_TR(0x6aaea0);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6aaea2:{NFSU2_TR(0x6aaea2);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6aaea5:{NFSU2_TR(0x6aaea5);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6aaedc;}}
}
B6aaea7:L6aaea7:{c.instructions+=5;NFSU2_TR(0x6aaea7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aaeaa:{NFSU2_TR(0x6aaeaa);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6aaead:{NFSU2_TR(0x6aaead);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aaeb0:{NFSU2_TR(0x6aaeb0);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6aaeb3:{NFSU2_TR(0x6aaeb3);
if(r1(R+518)){{goto L6aaed6;}}
}
B6aaeb5:L6aaeb5:{c.instructions+=5;NFSU2_TR(0x6aaeb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aaeb8:{NFSU2_TR(0x6aaeb8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6aaebb:{NFSU2_TR(0x6aaebb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aaebe:{NFSU2_TR(0x6aaebe);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6aaec1:{NFSU2_TR(0x6aaec1);
if(r1(R+518)){{goto L6aaed6;}}
}
B6aaec3:L6aaec3:{c.instructions+=2;NFSU2_TR(0x6aaec3);
u8 U[1];
w1(U+0,u8(u32(r1(R+5))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6aaec6:{NFSU2_TR(0x6aaec6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6aaed6;}}
}
B6aaec8:L6aaec8:{c.instructions+=4;NFSU2_TR(0x6aaec8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6aaecb:{NFSU2_TR(0x6aaecb);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6aaece:{NFSU2_TR(0x6aaece);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
}
B6aaed1:{NFSU2_TR(0x6aaed1);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6aaed6;}}
}
B6aaed3:L6aaed3:{c.instructions+=1;NFSU2_TR(0x6aaed3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aaed6:L6aaed6:{c.instructions+=3;NFSU2_TR(0x6aaed6);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6aaed7:{NFSU2_TR(0x6aaed7);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6aaeda:{NFSU2_TR(0x6aaeda);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6aaea7u);}goto L6aaea7;}}
}
B6aaedc:L6aaedc:{c.instructions+=3;NFSU2_TR(0x6aaedc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6aaede:{NFSU2_TR(0x6aaede);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6aaee1:{NFSU2_TR(0x6aaee1);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6aaef4;}}
}
B6aaee3:L6aaee3:{c.instructions+=2;NFSU2_TR(0x6aaee3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aaee6:{NFSU2_TR(0x6aaee6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6aaee9:L6aaee9:{c.instructions+=5;NFSU2_TR(0x6aaee9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6aaeeb:{NFSU2_TR(0x6aaeeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B6aaeee:{NFSU2_TR(0x6aaeee);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6aaef1:{NFSU2_TR(0x6aaef1);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B6aaef2:{NFSU2_TR(0x6aaef2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6aaee9u);}goto L6aaee9;}}
}
B6aaef4:L6aaef4:{c.instructions+=4;NFSU2_TR(0x6aaef4);
__builtin_memmove((R+24),(R+0),4);
}
B6aaef6:{NFSU2_TR(0x6aaef6);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B6aaef9:{NFSU2_TR(0x6aaef9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6aaefa:{NFSU2_TR(0x6aaefa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aaeffull));
TAIL_STATIC(0x575620u,575);
}
B6aaeff:L6aaeff:{c.instructions+=4;NFSU2_TR(0x6aaeff);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aaf01:{NFSU2_TR(0x6aaf01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6aaf02:{NFSU2_TR(0x6aaf02);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aaf05:{NFSU2_TR(0x6aaf05);
if(r1(R+518)){TAIL_STATIC(0x6abcfbu,6ab);}
}
B6aaf0b:L6aaf0b:{c.instructions+=5;NFSU2_TR(0x6aaf0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6aaf0e:{NFSU2_TR(0x6aaf0e);
__builtin_memmove((R+4),(R+24),4);
}
B6aaf10:{NFSU2_TR(0x6aaf10);
__builtin_memmove((R+8),(R+4),4);
}
B6aaf12:{NFSU2_TR(0x6aaf12);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6aaf15:{NFSU2_TR(0x6aaf15);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6aaf17:L6aaf17:{c.instructions+=1;NFSU2_TR(0x6aaf17);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6aaf19;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6aaf17u);}goto L6aaf17;}
}
B6aaf19:L6aaf19:{c.instructions+=2;NFSU2_TR(0x6aaf19);
__builtin_memmove((R+4),(R+8),4);
}
B6aaf1b:{NFSU2_TR(0x6aaf1b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6aaf1e:L6aaf1e:{c.instructions+=1;NFSU2_TR(0x6aaf1e);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L6aaf20;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6aaf1eu);}goto L6aaf1e;}
}
B6aaf20:L6aaf20:{c.instructions+=4;NFSU2_TR(0x6aaf20);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6aaf22:{NFSU2_TR(0x6aaf22);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6aaf24:{NFSU2_TR(0x6aaf24);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6aaf27:{NFSU2_TR(0x6aaf27);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6aaf50;}}
}
B6aaf29:L6aaf29:{c.instructions+=1;NFSU2_TR(0x6aaf29);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aaf2c:L6aaf2c:{c.instructions+=14;NFSU2_TR(0x6aaf2c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6aaf2f:{NFSU2_TR(0x6aaf2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6aaf32:{NFSU2_TR(0x6aaf32);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6aaf35:{NFSU2_TR(0x6aaf35);
w1(R+512,u8((r4(R+24))!=(u32(0x0ull))));
w4(R+24,u32(0-u32(r4(R+24))));
}
B6aaf37:{NFSU2_TR(0x6aaf37);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(R+24))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6aaf39:{NFSU2_TR(0x6aaf39);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B6aaf3c:{NFSU2_TR(0x6aaf3c);
w4(R+24,u32(u32(r4(R+24))&u32(r4(R+28))));
}
B6aaf3e:{NFSU2_TR(0x6aaf3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aaf41:{NFSU2_TR(0x6aaf41);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aaf44:{NFSU2_TR(0x6aaf44);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6aaf47:{NFSU2_TR(0x6aaf47);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B6aaf4a:{NFSU2_TR(0x6aaf4a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6aaf4b:{NFSU2_TR(0x6aaf4b);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6aaf4e:{NFSU2_TR(0x6aaf4e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6aaf2cu);}goto L6aaf2c;}}
}
B6aaf50:L6aaf50:{c.instructions+=4;NFSU2_TR(0x6aaf50);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6aaf52:{NFSU2_TR(0x6aaf52);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6aaf54:{NFSU2_TR(0x6aaf54);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6aaf57:{NFSU2_TR(0x6aaf57);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6aaf8a;}}
}
B6aaf59:L6aaf59:{c.instructions+=5;NFSU2_TR(0x6aaf59);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aaf5c:{NFSU2_TR(0x6aaf5c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6aaf5f:{NFSU2_TR(0x6aaf5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aaf62:{NFSU2_TR(0x6aaf62);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6aaf65:{NFSU2_TR(0x6aaf65);
if(r1(R+518)){{goto L6aaf84;}}
}
B6aaf67:L6aaf67:{c.instructions+=5;NFSU2_TR(0x6aaf67);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6aaf6a:{NFSU2_TR(0x6aaf6a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6aaf6d:{NFSU2_TR(0x6aaf6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aaf70:{NFSU2_TR(0x6aaf70);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6aaf72:{NFSU2_TR(0x6aaf72);
if(r1(R+518)){{goto L6aaf84;}}
}
B6aaf74:L6aaf74:{c.instructions+=6;NFSU2_TR(0x6aaf74);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6aaf77:{NFSU2_TR(0x6aaf77);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aaf7a:{NFSU2_TR(0x6aaf7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6aaf7d:{NFSU2_TR(0x6aaf7d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6aaf7e:{NFSU2_TR(0x6aaf7e);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+512,u8((r4(U+4))<(r4(R+0))));
}
B6aaf80:{NFSU2_TR(0x6aaf80);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6aaf84;}}
}
B6aaf82:L6aaf82:{c.instructions+=1;NFSU2_TR(0x6aaf82);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6aaf84:L6aaf84:{c.instructions+=3;NFSU2_TR(0x6aaf84);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6aaf85:{NFSU2_TR(0x6aaf85);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6aaf88:{NFSU2_TR(0x6aaf88);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6aaf59u);}goto L6aaf59;}}
}
B6aaf8a:L6aaf8a:{c.instructions+=3;NFSU2_TR(0x6aaf8a);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6aaf8d:{NFSU2_TR(0x6aaf8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aaf90:{NFSU2_TR(0x6aaf90);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6aaff9;}}
}
B6aaf92:L6aaf92:{c.instructions+=8;NFSU2_TR(0x6aaf92);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aaf95:{NFSU2_TR(0x6aaf95);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aaf98:{NFSU2_TR(0x6aaf98);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6aaf9b:{NFSU2_TR(0x6aaf9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6aaf9d:{NFSU2_TR(0x6aaf9d);
__builtin_memmove((R+8),(R+4),4);
}
B6aaf9f:{NFSU2_TR(0x6aaf9f);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xf0000000ull))));
}
B6aafa5:{NFSU2_TR(0x6aafa5);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6aafab:{NFSU2_TR(0x6aafab);
if(r1(R+518)){{goto L6aafbb;}}
}
B6aafad:L6aafad:{c.instructions+=3;NFSU2_TR(0x6aafad);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfff00000ull))));
}
B6aafb3:{NFSU2_TR(0x6aafb3);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x11000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6aafb9:{NFSU2_TR(0x6aafb9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6aafee;}}
}
B6aafbb:L6aafbb:{c.instructions+=3;NFSU2_TR(0x6aafbb);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6aafbd:{NFSU2_TR(0x6aafbd);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6aafc0:{NFSU2_TR(0x6aafc0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6aafee;}}
}
B6aafc2:L6aafc2:{c.instructions+=10;NFSU2_TR(0x6aafc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aafc5:{NFSU2_TR(0x6aafc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6aafc8:{NFSU2_TR(0x6aafc8);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6aafcb:{NFSU2_TR(0x6aafcb);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6aafce:{NFSU2_TR(0x6aafce);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6aafd1:{NFSU2_TR(0x6aafd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6aafd4:{NFSU2_TR(0x6aafd4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6aafd7:{NFSU2_TR(0x6aafd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6aafda:{NFSU2_TR(0x6aafda);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aafdc:{NFSU2_TR(0x6aafdc);
if(r1(R+518)){{goto L6aafe8;}}
}
B6aafde:L6aafde:{c.instructions+=2;NFSU2_TR(0x6aafde);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aafe1:{NFSU2_TR(0x6aafe1);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
w4(U+8,u32(0x4ull));
s4(u32(r4(U+4)),r4(U+8));
}
B6aafe8:L6aafe8:{c.instructions+=3;NFSU2_TR(0x6aafe8);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6aafe9:{NFSU2_TR(0x6aafe9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6aafec:{NFSU2_TR(0x6aafec);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6aafc2u);}goto L6aafc2;}}
}
B6aafee:L6aafee:{c.instructions+=4;NFSU2_TR(0x6aafee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6aaff1:{NFSU2_TR(0x6aaff1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aaff4:{NFSU2_TR(0x6aaff4);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6aaff7:{NFSU2_TR(0x6aaff7);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6aaf92u);}goto L6aaf92;}}
}
B6aaff9:L6aaff9:{c.instructions+=3;NFSU2_TR(0x6aaff9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aaffc:{NFSU2_TR(0x6aaffc);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x6ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6aaffe:{NFSU2_TR(0x6aaffe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6ab390u,6ab);}
TAIL_STATIC(0x6ab004u,6ab);
}
XIT:NFSU2_TR_EXIT(0x6aa,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
