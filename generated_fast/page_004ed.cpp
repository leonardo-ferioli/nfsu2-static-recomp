#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_435(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_479(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_496(u8* __restrict R,Cpu& c);
u32 body_4a3(u8* __restrict R,Cpu& c);
u32 body_4ac(u8* __restrict R,Cpu& c);
u32 body_4af(u8* __restrict R,Cpu& c);
u32 body_4cb(u8* __restrict R,Cpu& c);
u32 body_4de(u8* __restrict R,Cpu& c);
u32 body_4df(u8* __restrict R,Cpu& c);
u32 body_4e8(u8* __restrict R,Cpu& c);
u32 body_4ee(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_503(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_510(u8* __restrict R,Cpu& c);
u32 body_512(u8* __restrict R,Cpu& c);
u32 body_513(u8* __restrict R,Cpu& c);
u32 body_51c(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_524(u8* __restrict R,Cpu& c);
u32 body_52a(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_52d(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_538(u8* __restrict R,Cpu& c);
u32 body_540(u8* __restrict R,Cpu& c);
u32 body_54e(u8* __restrict R,Cpu& c);
u32 body_552(u8* __restrict R,Cpu& c);
u32 body_558(u8* __restrict R,Cpu& c);
u32 body_55d(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4ed,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4ed,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4ed(u8* __restrict R,Cpu& c);
u32 page_4ed(Cpu& c){return body_4ed(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4ed(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4ed000:goto L4ed000;
case 0x4ed002:c.instructions+=1;goto B4ed002;
case 0x4ed007:goto L4ed007;
case 0x4ed009:c.instructions+=1;goto B4ed009;
case 0x4ed00e:goto L4ed00e;
case 0x4ed010:c.instructions+=2;goto B4ed010;
case 0x4ed012:c.instructions+=1;goto B4ed012;
case 0x4ed014:goto L4ed014;
case 0x4ed017:c.instructions+=1;goto B4ed017;
case 0x4ed019:goto L4ed019;
case 0x4ed01b:goto L4ed01b;
case 0x4ed01e:c.instructions+=5;goto B4ed01e;
case 0x4ed021:c.instructions+=4;goto B4ed021;
case 0x4ed024:c.instructions+=3;goto B4ed024;
case 0x4ed026:c.instructions+=2;goto B4ed026;
case 0x4ed027:c.instructions+=1;goto B4ed027;
case 0x4ed02a:goto L4ed02a;
case 0x4ed02d:c.instructions+=3;goto B4ed02d;
case 0x4ed02e:c.instructions+=2;goto B4ed02e;
case 0x4ed030:c.instructions+=1;goto B4ed030;
case 0x4ed035:goto L4ed035;
case 0x4ed037:c.instructions+=3;goto B4ed037;
case 0x4ed038:c.instructions+=2;goto B4ed038;
case 0x4ed03a:c.instructions+=1;goto B4ed03a;
case 0x4ed03f:goto L4ed03f;
case 0x4ed041:c.instructions+=1;goto B4ed041;
case 0x4ed043:goto L4ed043;
case 0x4ed046:c.instructions+=4;goto B4ed046;
case 0x4ed048:c.instructions+=3;goto B4ed048;
case 0x4ed049:c.instructions+=2;goto B4ed049;
case 0x4ed04b:c.instructions+=1;goto B4ed04b;
case 0x4ed04e:goto L4ed04e;
case 0x4ed051:c.instructions+=3;goto B4ed051;
case 0x4ed052:c.instructions+=2;goto B4ed052;
case 0x4ed057:c.instructions+=1;goto B4ed057;
case 0x4ed05c:goto L4ed05c;
case 0x4ed061:c.instructions+=3;goto B4ed061;
case 0x4ed064:c.instructions+=2;goto B4ed064;
case 0x4ed067:c.instructions+=1;goto B4ed067;
case 0x4ed069:goto L4ed069;
case 0x4ed06c:c.instructions+=5;goto B4ed06c;
case 0x4ed06f:c.instructions+=4;goto B4ed06f;
case 0x4ed070:c.instructions+=3;goto B4ed070;
case 0x4ed071:c.instructions+=2;goto B4ed071;
case 0x4ed077:c.instructions+=1;goto B4ed077;
case 0x4ed07c:goto L4ed07c;
case 0x4ed082:c.instructions+=6;goto B4ed082;
case 0x4ed083:c.instructions+=5;goto B4ed083;
case 0x4ed084:c.instructions+=4;goto B4ed084;
case 0x4ed085:c.instructions+=3;goto B4ed085;
case 0x4ed087:c.instructions+=2;goto B4ed087;
case 0x4ed089:c.instructions+=1;goto B4ed089;
case 0x4ed08e:goto L4ed08e;
case 0x4ed094:c.instructions+=9;goto B4ed094;
case 0x4ed098:c.instructions+=8;goto B4ed098;
case 0x4ed099:c.instructions+=7;goto B4ed099;
case 0x4ed09b:c.instructions+=6;goto B4ed09b;
case 0x4ed09c:c.instructions+=5;goto B4ed09c;
case 0x4ed09d:c.instructions+=4;goto B4ed09d;
case 0x4ed09e:c.instructions+=3;goto B4ed09e;
case 0x4ed0a5:c.instructions+=2;goto B4ed0a5;
case 0x4ed0a8:c.instructions+=1;goto B4ed0a8;
case 0x4ed0b0:goto L4ed0b0;
case 0x4ed0b1:c.instructions+=2;goto B4ed0b1;
case 0x4ed0b3:c.instructions+=1;goto B4ed0b3;
case 0x4ed0b8:goto L4ed0b8;
case 0x4ed0bd:c.instructions+=1;goto B4ed0bd;
case 0x4ed0bf:goto L4ed0bf;
case 0x4ed0c0:c.instructions+=1;goto B4ed0c0;
case 0x4ed0c5:goto L4ed0c5;
case 0x4ed0c8:goto L4ed0c8;
case 0x4ed0ca:c.instructions+=2;goto B4ed0ca;
case 0x4ed0cb:c.instructions+=1;goto B4ed0cb;
case 0x4ed0d0:goto L4ed0d0;
case 0x4ed0d2:c.instructions+=12;goto B4ed0d2;
case 0x4ed0d7:c.instructions+=11;goto B4ed0d7;
case 0x4ed0dd:c.instructions+=10;goto B4ed0dd;
case 0x4ed0de:c.instructions+=9;goto B4ed0de;
case 0x4ed0e5:c.instructions+=8;goto B4ed0e5;
case 0x4ed0e6:c.instructions+=7;goto B4ed0e6;
case 0x4ed0e7:c.instructions+=6;goto B4ed0e7;
case 0x4ed0e9:c.instructions+=5;goto B4ed0e9;
case 0x4ed0ed:c.instructions+=4;goto B4ed0ed;
case 0x4ed0f3:c.instructions+=3;goto B4ed0f3;
case 0x4ed0f6:c.instructions+=2;goto B4ed0f6;
case 0x4ed0fe:c.instructions+=1;goto B4ed0fe;
case 0x4ed103:goto L4ed103;
case 0x4ed106:c.instructions+=2;goto B4ed106;
case 0x4ed10b:c.instructions+=1;goto B4ed10b;
case 0x4ed110:goto L4ed110;
case 0x4ed113:c.instructions+=2;goto B4ed113;
case 0x4ed118:c.instructions+=1;goto B4ed118;
case 0x4ed11d:goto L4ed11d;
case 0x4ed11f:c.instructions+=2;goto B4ed11f;
case 0x4ed127:c.instructions+=1;goto B4ed127;
case 0x4ed12c:goto L4ed12c;
case 0x4ed130:c.instructions+=4;goto B4ed130;
case 0x4ed131:c.instructions+=3;goto B4ed131;
case 0x4ed138:c.instructions+=2;goto B4ed138;
case 0x4ed13b:c.instructions+=1;goto B4ed13b;
case 0x4ed140:goto L4ed140;
case 0x4ed143:c.instructions+=7;goto B4ed143;
case 0x4ed144:c.instructions+=6;goto B4ed144;
case 0x4ed148:c.instructions+=5;goto B4ed148;
case 0x4ed14a:c.instructions+=4;goto B4ed14a;
case 0x4ed14b:c.instructions+=3;goto B4ed14b;
case 0x4ed14f:c.instructions+=2;goto B4ed14f;
case 0x4ed150:c.instructions+=1;goto B4ed150;
case 0x4ed155:goto L4ed155;
case 0x4ed15a:c.instructions+=4;goto B4ed15a;
case 0x4ed15d:c.instructions+=3;goto B4ed15d;
case 0x4ed15f:c.instructions+=2;goto B4ed15f;
case 0x4ed166:c.instructions+=1;goto B4ed166;
case 0x4ed168:goto L4ed168;
case 0x4ed16f:goto L4ed16f;
case 0x4ed171:c.instructions+=1;goto B4ed171;
case 0x4ed177:goto L4ed177;
case 0x4ed17a:c.instructions+=2;goto B4ed17a;
case 0x4ed17c:c.instructions+=1;goto B4ed17c;
case 0x4ed182:goto L4ed182;
case 0x4ed185:c.instructions+=2;goto B4ed185;
case 0x4ed187:c.instructions+=1;goto B4ed187;
case 0x4ed18d:goto L4ed18d;
case 0x4ed190:c.instructions+=16;goto B4ed190;
case 0x4ed194:c.instructions+=15;goto B4ed194;
case 0x4ed197:c.instructions+=14;goto B4ed197;
case 0x4ed19b:c.instructions+=13;goto B4ed19b;
case 0x4ed19e:c.instructions+=12;goto B4ed19e;
case 0x4ed1a2:c.instructions+=11;goto B4ed1a2;
case 0x4ed1a5:c.instructions+=10;goto B4ed1a5;
case 0x4ed1a9:c.instructions+=9;goto B4ed1a9;
case 0x4ed1aa:c.instructions+=8;goto B4ed1aa;
case 0x4ed1ae:c.instructions+=7;goto B4ed1ae;
case 0x4ed1b2:c.instructions+=6;goto B4ed1b2;
case 0x4ed1b6:c.instructions+=5;goto B4ed1b6;
case 0x4ed1ba:c.instructions+=4;goto B4ed1ba;
case 0x4ed1bb:c.instructions+=3;goto B4ed1bb;
case 0x4ed1bc:c.instructions+=2;goto B4ed1bc;
case 0x4ed1bd:c.instructions+=1;goto B4ed1bd;
case 0x4ed1c2:goto L4ed1c2;
case 0x4ed1c5:c.instructions+=2;goto B4ed1c5;
case 0x4ed1c7:c.instructions+=1;goto B4ed1c7;
case 0x4ed1c9:goto L4ed1c9;
case 0x4ed1cc:c.instructions+=6;goto B4ed1cc;
case 0x4ed1cf:c.instructions+=5;goto B4ed1cf;
case 0x4ed1d4:c.instructions+=4;goto B4ed1d4;
case 0x4ed1db:c.instructions+=3;goto B4ed1db;
case 0x4ed1dd:c.instructions+=2;goto B4ed1dd;
case 0x4ed1de:c.instructions+=1;goto B4ed1de;
case 0x4ed1e1:goto L4ed1e1;
case 0x4ed1e4:c.instructions+=3;goto B4ed1e4;
case 0x4ed1e6:c.instructions+=2;goto B4ed1e6;
case 0x4ed1e7:c.instructions+=1;goto B4ed1e7;
case 0x4ed1ec:goto L4ed1ec;
case 0x4ed1ef:c.instructions+=2;goto B4ed1ef;
case 0x4ed1f1:c.instructions+=1;goto B4ed1f1;
case 0x4ed1f6:goto L4ed1f6;
case 0x4ed1f7:c.instructions+=1;goto B4ed1f7;
case 0x4ed1fc:goto L4ed1fc;
case 0x4ed202:c.instructions+=3;goto B4ed202;
case 0x4ed207:c.instructions+=2;goto B4ed207;
case 0x4ed208:c.instructions+=1;goto B4ed208;
case 0x4ed20d:goto L4ed20d;
case 0x4ed210:goto L4ed210;
case 0x4ed216:c.instructions+=6;goto B4ed216;
case 0x4ed21a:c.instructions+=5;goto B4ed21a;
case 0x4ed21e:c.instructions+=4;goto B4ed21e;
case 0x4ed21f:c.instructions+=3;goto B4ed21f;
case 0x4ed220:c.instructions+=2;goto B4ed220;
case 0x4ed221:c.instructions+=1;goto B4ed221;
case 0x4ed226:goto L4ed226;
case 0x4ed229:c.instructions+=2;goto B4ed229;
case 0x4ed22b:c.instructions+=1;goto B4ed22b;
case 0x4ed22d:goto L4ed22d;
case 0x4ed232:c.instructions+=2;goto B4ed232;
case 0x4ed234:c.instructions+=1;goto B4ed234;
case 0x4ed239:goto L4ed239;
case 0x4ed23a:c.instructions+=2;goto B4ed23a;
case 0x4ed23d:c.instructions+=1;goto B4ed23d;
case 0x4ed23e:goto L4ed23e;
case 0x4ed244:c.instructions+=6;goto B4ed244;
case 0x4ed248:c.instructions+=5;goto B4ed248;
case 0x4ed24c:c.instructions+=4;goto B4ed24c;
case 0x4ed24d:c.instructions+=3;goto B4ed24d;
case 0x4ed24e:c.instructions+=2;goto B4ed24e;
case 0x4ed24f:c.instructions+=1;goto B4ed24f;
case 0x4ed254:goto L4ed254;
case 0x4ed257:c.instructions+=2;goto B4ed257;
case 0x4ed259:c.instructions+=1;goto B4ed259;
case 0x4ed25f:goto L4ed25f;
case 0x4ed264:c.instructions+=2;goto B4ed264;
case 0x4ed266:c.instructions+=1;goto B4ed266;
case 0x4ed26b:goto L4ed26b;
case 0x4ed26c:c.instructions+=2;goto B4ed26c;
case 0x4ed26f:c.instructions+=1;goto B4ed26f;
case 0x4ed270:goto L4ed270;
case 0x4ed275:c.instructions+=2;goto B4ed275;
case 0x4ed277:c.instructions+=1;goto B4ed277;
case 0x4ed279:goto L4ed279;
case 0x4ed27e:c.instructions+=2;goto B4ed27e;
case 0x4ed280:c.instructions+=1;goto B4ed280;
case 0x4ed286:goto L4ed286;
case 0x4ed28a:c.instructions+=5;goto B4ed28a;
case 0x4ed28e:c.instructions+=4;goto B4ed28e;
case 0x4ed28f:c.instructions+=3;goto B4ed28f;
case 0x4ed290:c.instructions+=2;goto B4ed290;
case 0x4ed292:c.instructions+=1;goto B4ed292;
case 0x4ed297:goto L4ed297;
case 0x4ed299:c.instructions+=1;goto B4ed299;
case 0x4ed29b:goto L4ed29b;
case 0x4ed29e:c.instructions+=1;goto B4ed29e;
case 0x4ed2a4:goto L4ed2a4;
case 0x4ed2a7:c.instructions+=2;goto B4ed2a7;
case 0x4ed2a9:c.instructions+=1;goto B4ed2a9;
case 0x4ed2af:goto L4ed2af;
case 0x4ed2b0:c.instructions+=2;goto B4ed2b0;
case 0x4ed2b2:c.instructions+=1;goto B4ed2b2;
case 0x4ed2b7:goto L4ed2b7;
case 0x4ed2b8:c.instructions+=2;goto B4ed2b8;
case 0x4ed2bb:c.instructions+=1;goto B4ed2bb;
case 0x4ed2bc:goto L4ed2bc;
case 0x4ed2bf:c.instructions+=6;goto B4ed2bf;
case 0x4ed2c3:c.instructions+=5;goto B4ed2c3;
case 0x4ed2c7:c.instructions+=4;goto B4ed2c7;
case 0x4ed2c8:c.instructions+=3;goto B4ed2c8;
case 0x4ed2c9:c.instructions+=2;goto B4ed2c9;
case 0x4ed2ca:c.instructions+=1;goto B4ed2ca;
case 0x4ed2cf:goto L4ed2cf;
case 0x4ed2d2:c.instructions+=2;goto B4ed2d2;
case 0x4ed2d4:c.instructions+=1;goto B4ed2d4;
case 0x4ed2d6:goto L4ed2d6;
case 0x4ed2d9:c.instructions+=2;goto B4ed2d9;
case 0x4ed2db:c.instructions+=1;goto B4ed2db;
case 0x4ed2dd:goto L4ed2dd;
case 0x4ed2df:c.instructions+=1;goto B4ed2df;
case 0x4ed2e2:goto L4ed2e2;
case 0x4ed2e9:goto L4ed2e9;
case 0x4ed2ec:c.instructions+=4;goto B4ed2ec;
case 0x4ed2ef:c.instructions+=3;goto B4ed2ef;
case 0x4ed2f0:c.instructions+=2;goto B4ed2f0;
case 0x4ed2f1:c.instructions+=1;goto B4ed2f1;
case 0x4ed2f6:goto L4ed2f6;
case 0x4ed2f9:c.instructions+=3;goto B4ed2f9;
case 0x4ed2fa:c.instructions+=2;goto B4ed2fa;
case 0x4ed2fd:c.instructions+=1;goto B4ed2fd;
case 0x4ed2fe:goto L4ed2fe;
case 0x4ed304:c.instructions+=6;goto B4ed304;
case 0x4ed308:c.instructions+=5;goto B4ed308;
case 0x4ed30c:c.instructions+=4;goto B4ed30c;
case 0x4ed30d:c.instructions+=3;goto B4ed30d;
case 0x4ed30e:c.instructions+=2;goto B4ed30e;
case 0x4ed30f:c.instructions+=1;goto B4ed30f;
case 0x4ed314:goto L4ed314;
case 0x4ed317:c.instructions+=2;goto B4ed317;
case 0x4ed319:c.instructions+=1;goto B4ed319;
case 0x4ed31b:goto L4ed31b;
case 0x4ed31e:c.instructions+=2;goto B4ed31e;
case 0x4ed320:c.instructions+=1;goto B4ed320;
case 0x4ed322:goto L4ed322;
case 0x4ed324:c.instructions+=1;goto B4ed324;
case 0x4ed327:goto L4ed327;
case 0x4ed32a:c.instructions+=3;goto B4ed32a;
case 0x4ed32b:c.instructions+=2;goto B4ed32b;
case 0x4ed32d:c.instructions+=1;goto B4ed32d;
case 0x4ed332:goto L4ed332;
case 0x4ed333:c.instructions+=2;goto B4ed333;
case 0x4ed335:c.instructions+=1;goto B4ed335;
case 0x4ed33a:goto L4ed33a;
case 0x4ed33c:c.instructions+=1;goto B4ed33c;
case 0x4ed33e:goto L4ed33e;
case 0x4ed340:c.instructions+=2;goto B4ed340;
case 0x4ed342:c.instructions+=1;goto B4ed342;
case 0x4ed345:goto L4ed345;
case 0x4ed34c:goto L4ed34c;
case 0x4ed352:c.instructions+=3;goto B4ed352;
case 0x4ed357:c.instructions+=2;goto B4ed357;
case 0x4ed358:c.instructions+=1;goto B4ed358;
case 0x4ed35d:goto L4ed35d;
case 0x4ed360:c.instructions+=2;goto B4ed360;
case 0x4ed362:c.instructions+=1;goto B4ed362;
case 0x4ed364:goto L4ed364;
case 0x4ed36a:c.instructions+=4;goto B4ed36a;
case 0x4ed36c:c.instructions+=3;goto B4ed36c;
case 0x4ed371:c.instructions+=2;goto B4ed371;
case 0x4ed372:c.instructions+=1;goto B4ed372;
case 0x4ed377:goto L4ed377;
case 0x4ed37a:goto L4ed37a;
case 0x4ed37b:c.instructions+=2;goto B4ed37b;
case 0x4ed37e:c.instructions+=1;goto B4ed37e;
case 0x4ed380:goto L4ed380;
case 0x4ed381:c.instructions+=7;goto B4ed381;
case 0x4ed382:c.instructions+=6;goto B4ed382;
case 0x4ed383:c.instructions+=5;goto B4ed383;
case 0x4ed385:c.instructions+=4;goto B4ed385;
case 0x4ed388:c.instructions+=3;goto B4ed388;
case 0x4ed38b:c.instructions+=2;goto B4ed38b;
case 0x4ed38d:c.instructions+=1;goto B4ed38d;
case 0x4ed393:goto L4ed393;
case 0x4ed399:c.instructions+=2;goto B4ed399;
case 0x4ed39b:c.instructions+=1;goto B4ed39b;
case 0x4ed39d:goto L4ed39d;
case 0x4ed3a2:goto L4ed3a2;
case 0x4ed3a3:c.instructions+=3;goto B4ed3a3;
case 0x4ed3a4:c.instructions+=2;goto B4ed3a4;
case 0x4ed3a5:c.instructions+=1;goto B4ed3a5;
case 0x4ed3a8:goto L4ed3a8;
case 0x4ed3ab:c.instructions+=7;goto B4ed3ab;
case 0x4ed3ac:c.instructions+=6;goto B4ed3ac;
case 0x4ed3b0:c.instructions+=5;goto B4ed3b0;
case 0x4ed3b5:c.instructions+=4;goto B4ed3b5;
case 0x4ed3b6:c.instructions+=3;goto B4ed3b6;
case 0x4ed3b9:c.instructions+=2;goto B4ed3b9;
case 0x4ed3bb:c.instructions+=1;goto B4ed3bb;
case 0x4ed3c1:goto L4ed3c1;
case 0x4ed3c3:c.instructions+=1;goto B4ed3c3;
case 0x4ed3c5:goto L4ed3c5;
case 0x4ed3c8:c.instructions+=2;goto B4ed3c8;
case 0x4ed3ca:c.instructions+=1;goto B4ed3ca;
case 0x4ed3cc:goto L4ed3cc;
case 0x4ed3cf:c.instructions+=1;goto B4ed3cf;
case 0x4ed3d1:goto L4ed3d1;
case 0x4ed3d3:goto L4ed3d3;
case 0x4ed3d5:c.instructions+=1;goto B4ed3d5;
case 0x4ed3d7:goto L4ed3d7;
case 0x4ed3da:c.instructions+=2;goto B4ed3da;
case 0x4ed3dc:c.instructions+=1;goto B4ed3dc;
case 0x4ed3de:goto L4ed3de;
case 0x4ed3e1:c.instructions+=4;goto B4ed3e1;
case 0x4ed3e2:c.instructions+=3;goto B4ed3e2;
case 0x4ed3e3:c.instructions+=2;goto B4ed3e3;
case 0x4ed3e5:c.instructions+=1;goto B4ed3e5;
case 0x4ed3ea:goto L4ed3ea;
case 0x4ed3ed:c.instructions+=1;goto B4ed3ed;
case 0x4ed3f2:goto L4ed3f2;
case 0x4ed3f5:c.instructions+=2;goto B4ed3f5;
case 0x4ed3f7:c.instructions+=1;goto B4ed3f7;
case 0x4ed3f9:goto L4ed3f9;
case 0x4ed3fc:c.instructions+=1;goto B4ed3fc;
case 0x4ed3fe:goto L4ed3fe;
case 0x4ed400:goto L4ed400;
case 0x4ed402:c.instructions+=1;goto B4ed402;
case 0x4ed404:goto L4ed404;
case 0x4ed407:c.instructions+=2;goto B4ed407;
case 0x4ed409:c.instructions+=1;goto B4ed409;
case 0x4ed40b:goto L4ed40b;
case 0x4ed40e:c.instructions+=1;goto B4ed40e;
case 0x4ed410:goto L4ed410;
case 0x4ed412:goto L4ed412;
case 0x4ed414:c.instructions+=1;goto B4ed414;
case 0x4ed416:goto L4ed416;
case 0x4ed41c:c.instructions+=2;goto B4ed41c;
case 0x4ed41d:c.instructions+=1;goto B4ed41d;
case 0x4ed420:goto L4ed420;
case 0x4ed423:c.instructions+=2;goto B4ed423;
case 0x4ed425:c.instructions+=1;goto B4ed425;
case 0x4ed427:goto L4ed427;
case 0x4ed42a:c.instructions+=1;goto B4ed42a;
case 0x4ed42c:goto L4ed42c;
case 0x4ed42e:goto L4ed42e;
case 0x4ed434:c.instructions+=3;goto B4ed434;
case 0x4ed435:c.instructions+=2;goto B4ed435;
case 0x4ed437:c.instructions+=1;goto B4ed437;
case 0x4ed439:goto L4ed439;
case 0x4ed43b:goto L4ed43b;
case 0x4ed43d:c.instructions+=2;goto B4ed43d;
case 0x4ed443:c.instructions+=1;goto B4ed443;
case 0x4ed445:goto L4ed445;
case 0x4ed448:c.instructions+=2;goto B4ed448;
case 0x4ed44a:c.instructions+=1;goto B4ed44a;
case 0x4ed44c:goto L4ed44c;
case 0x4ed44e:c.instructions+=1;goto B4ed44e;
case 0x4ed450:goto L4ed450;
case 0x4ed453:c.instructions+=1;goto B4ed453;
case 0x4ed455:goto L4ed455;
case 0x4ed457:goto L4ed457;
case 0x4ed459:c.instructions+=1;goto B4ed459;
case 0x4ed45b:goto L4ed45b;
case 0x4ed45d:c.instructions+=1;goto B4ed45d;
case 0x4ed45f:goto L4ed45f;
case 0x4ed462:c.instructions+=1;goto B4ed462;
case 0x4ed464:goto L4ed464;
case 0x4ed466:goto L4ed466;
case 0x4ed468:c.instructions+=1;goto B4ed468;
case 0x4ed46a:goto L4ed46a;
case 0x4ed46d:c.instructions+=2;goto B4ed46d;
case 0x4ed46f:c.instructions+=1;goto B4ed46f;
case 0x4ed471:goto L4ed471;
case 0x4ed474:c.instructions+=2;goto B4ed474;
case 0x4ed476:c.instructions+=1;goto B4ed476;
case 0x4ed478:goto L4ed478;
case 0x4ed47b:c.instructions+=1;goto B4ed47b;
case 0x4ed47d:goto L4ed47d;
case 0x4ed47f:goto L4ed47f;
case 0x4ed481:c.instructions+=1;goto B4ed481;
case 0x4ed483:goto L4ed483;
case 0x4ed486:c.instructions+=2;goto B4ed486;
case 0x4ed488:c.instructions+=1;goto B4ed488;
case 0x4ed48a:goto L4ed48a;
case 0x4ed48d:c.instructions+=1;goto B4ed48d;
case 0x4ed48f:goto L4ed48f;
case 0x4ed491:goto L4ed491;
case 0x4ed493:c.instructions+=1;goto B4ed493;
case 0x4ed495:goto L4ed495;
case 0x4ed498:c.instructions+=2;goto B4ed498;
case 0x4ed49a:c.instructions+=1;goto B4ed49a;
case 0x4ed49c:goto L4ed49c;
case 0x4ed49f:c.instructions+=1;goto B4ed49f;
case 0x4ed4a1:goto L4ed4a1;
case 0x4ed4a3:goto L4ed4a3;
case 0x4ed4a7:c.instructions+=3;goto B4ed4a7;
case 0x4ed4a8:c.instructions+=2;goto B4ed4a8;
case 0x4ed4aa:c.instructions+=1;goto B4ed4aa;
case 0x4ed4af:goto L4ed4af;
case 0x4ed4b5:c.instructions+=5;goto B4ed4b5;
case 0x4ed4b7:c.instructions+=4;goto B4ed4b7;
case 0x4ed4b8:c.instructions+=3;goto B4ed4b8;
case 0x4ed4ba:c.instructions+=2;goto B4ed4ba;
case 0x4ed4bc:c.instructions+=1;goto B4ed4bc;
case 0x4ed4c1:goto L4ed4c1;
case 0x4ed4c3:c.instructions+=1;goto B4ed4c3;
case 0x4ed4c9:goto L4ed4c9;
case 0x4ed4cd:c.instructions+=3;goto B4ed4cd;
case 0x4ed4d0:c.instructions+=2;goto B4ed4d0;
case 0x4ed4d2:c.instructions+=1;goto B4ed4d2;
case 0x4ed4d8:goto L4ed4d8;
case 0x4ed4db:c.instructions+=1;goto B4ed4db;
case 0x4ed4e0:goto L4ed4e0;
case 0x4ed4e2:c.instructions+=1;goto B4ed4e2;
case 0x4ed4e4:goto L4ed4e4;
case 0x4ed4e7:c.instructions+=2;goto B4ed4e7;
case 0x4ed4e9:c.instructions+=1;goto B4ed4e9;
case 0x4ed4eb:goto L4ed4eb;
case 0x4ed4ee:c.instructions+=1;goto B4ed4ee;
case 0x4ed4f3:goto L4ed4f3;
case 0x4ed4f5:c.instructions+=1;goto B4ed4f5;
case 0x4ed4fa:goto L4ed4fa;
case 0x4ed4fd:c.instructions+=2;goto B4ed4fd;
case 0x4ed4ff:c.instructions+=1;goto B4ed4ff;
case 0x4ed501:goto L4ed501;
case 0x4ed504:c.instructions+=1;goto B4ed504;
case 0x4ed506:goto L4ed506;
case 0x4ed508:goto L4ed508;
case 0x4ed50a:c.instructions+=1;goto B4ed50a;
case 0x4ed50c:goto L4ed50c;
case 0x4ed50f:c.instructions+=2;goto B4ed50f;
case 0x4ed511:c.instructions+=1;goto B4ed511;
case 0x4ed513:goto L4ed513;
case 0x4ed516:c.instructions+=1;goto B4ed516;
case 0x4ed518:goto L4ed518;
case 0x4ed51a:goto L4ed51a;
case 0x4ed51c:c.instructions+=1;goto B4ed51c;
case 0x4ed51e:goto L4ed51e;
case 0x4ed520:goto L4ed520;
case 0x4ed523:c.instructions+=2;goto B4ed523;
case 0x4ed525:c.instructions+=1;goto B4ed525;
case 0x4ed527:goto L4ed527;
case 0x4ed52a:c.instructions+=1;goto B4ed52a;
case 0x4ed52c:goto L4ed52c;
case 0x4ed52e:goto L4ed52e;
case 0x4ed534:c.instructions+=3;goto B4ed534;
case 0x4ed535:c.instructions+=2;goto B4ed535;
case 0x4ed538:c.instructions+=1;goto B4ed538;
case 0x4ed53a:goto L4ed53a;
case 0x4ed53f:goto L4ed53f;
case 0x4ed541:c.instructions+=2;goto B4ed541;
case 0x4ed547:c.instructions+=1;goto B4ed547;
case 0x4ed549:goto L4ed549;
case 0x4ed54c:c.instructions+=2;goto B4ed54c;
case 0x4ed54e:c.instructions+=1;goto B4ed54e;
case 0x4ed550:goto L4ed550;
case 0x4ed552:c.instructions+=1;goto B4ed552;
case 0x4ed554:goto L4ed554;
case 0x4ed557:c.instructions+=1;goto B4ed557;
case 0x4ed559:goto L4ed559;
case 0x4ed55b:goto L4ed55b;
case 0x4ed55d:c.instructions+=1;goto B4ed55d;
case 0x4ed55f:goto L4ed55f;
case 0x4ed561:c.instructions+=1;goto B4ed561;
case 0x4ed563:goto L4ed563;
case 0x4ed566:c.instructions+=1;goto B4ed566;
case 0x4ed568:goto L4ed568;
case 0x4ed56a:goto L4ed56a;
case 0x4ed56c:c.instructions+=1;goto B4ed56c;
case 0x4ed56e:goto L4ed56e;
case 0x4ed571:c.instructions+=2;goto B4ed571;
case 0x4ed573:c.instructions+=1;goto B4ed573;
case 0x4ed575:goto L4ed575;
case 0x4ed578:c.instructions+=2;goto B4ed578;
case 0x4ed57a:c.instructions+=1;goto B4ed57a;
case 0x4ed57c:goto L4ed57c;
case 0x4ed57f:c.instructions+=1;goto B4ed57f;
case 0x4ed581:goto L4ed581;
case 0x4ed583:goto L4ed583;
case 0x4ed585:c.instructions+=1;goto B4ed585;
case 0x4ed587:goto L4ed587;
case 0x4ed58a:c.instructions+=2;goto B4ed58a;
case 0x4ed58c:c.instructions+=1;goto B4ed58c;
case 0x4ed58e:goto L4ed58e;
case 0x4ed591:c.instructions+=1;goto B4ed591;
case 0x4ed593:goto L4ed593;
case 0x4ed595:goto L4ed595;
case 0x4ed597:c.instructions+=1;goto B4ed597;
case 0x4ed599:goto L4ed599;
case 0x4ed59c:c.instructions+=2;goto B4ed59c;
case 0x4ed59e:c.instructions+=1;goto B4ed59e;
case 0x4ed5a0:goto L4ed5a0;
case 0x4ed5a3:c.instructions+=1;goto B4ed5a3;
case 0x4ed5a5:goto L4ed5a5;
case 0x4ed5a7:goto L4ed5a7;
case 0x4ed5ab:c.instructions+=3;goto B4ed5ab;
case 0x4ed5ae:c.instructions+=2;goto B4ed5ae;
case 0x4ed5b0:c.instructions+=1;goto B4ed5b0;
case 0x4ed5b2:goto L4ed5b2;
case 0x4ed5b5:c.instructions+=1;goto B4ed5b5;
case 0x4ed5b7:goto L4ed5b7;
case 0x4ed5b9:goto L4ed5b9;
case 0x4ed5ba:c.instructions+=2;goto B4ed5ba;
case 0x4ed5bc:c.instructions+=1;goto B4ed5bc;
case 0x4ed5c1:goto L4ed5c1;
case 0x4ed5c2:c.instructions+=3;goto B4ed5c2;
case 0x4ed5c4:c.instructions+=2;goto B4ed5c4;
case 0x4ed5c6:c.instructions+=1;goto B4ed5c6;
case 0x4ed5cb:goto L4ed5cb;
case 0x4ed5cd:c.instructions+=1;goto B4ed5cd;
case 0x4ed5cf:goto L4ed5cf;
case 0x4ed5d1:c.instructions+=1;goto B4ed5d1;
case 0x4ed5d3:goto L4ed5d3;
case 0x4ed5d6:c.instructions+=1;goto B4ed5d6;
case 0x4ed5d8:goto L4ed5d8;
case 0x4ed5da:goto L4ed5da;
case 0x4ed5dd:goto L4ed5dd;
case 0x4ed5e1:c.instructions+=2;goto B4ed5e1;
case 0x4ed5e4:c.instructions+=1;goto B4ed5e4;
case 0x4ed5e6:goto L4ed5e6;
case 0x4ed5e8:c.instructions+=1;goto B4ed5e8;
case 0x4ed5ed:goto L4ed5ed;
case 0x4ed5f0:c.instructions+=2;goto B4ed5f0;
case 0x4ed5f2:c.instructions+=1;goto B4ed5f2;
case 0x4ed5f4:goto L4ed5f4;
case 0x4ed5f6:c.instructions+=1;goto B4ed5f6;
case 0x4ed5f8:goto L4ed5f8;
case 0x4ed5fa:c.instructions+=1;goto B4ed5fa;
case 0x4ed5fd:goto L4ed5fd;
case 0x4ed600:c.instructions+=3;goto B4ed600;
case 0x4ed601:c.instructions+=2;goto B4ed601;
case 0x4ed603:c.instructions+=1;goto B4ed603;
case 0x4ed608:goto L4ed608;
case 0x4ed609:c.instructions+=2;goto B4ed609;
case 0x4ed60b:c.instructions+=1;goto B4ed60b;
case 0x4ed610:goto L4ed610;
case 0x4ed612:c.instructions+=1;goto B4ed612;
case 0x4ed614:goto L4ed614;
case 0x4ed616:c.instructions+=2;goto B4ed616;
case 0x4ed618:c.instructions+=1;goto B4ed618;
case 0x4ed61b:goto L4ed61b;
case 0x4ed61d:c.instructions+=1;goto B4ed61d;
case 0x4ed61f:goto L4ed61f;
case 0x4ed622:c.instructions+=4;goto B4ed622;
case 0x4ed624:c.instructions+=3;goto B4ed624;
case 0x4ed625:c.instructions+=2;goto B4ed625;
case 0x4ed627:c.instructions+=1;goto B4ed627;
case 0x4ed62a:goto L4ed62a;
case 0x4ed62b:c.instructions+=2;goto B4ed62b;
case 0x4ed62d:c.instructions+=1;goto B4ed62d;
case 0x4ed632:goto L4ed632;
case 0x4ed633:c.instructions+=2;goto B4ed633;
case 0x4ed635:c.instructions+=1;goto B4ed635;
case 0x4ed63a:goto L4ed63a;
case 0x4ed63c:c.instructions+=1;goto B4ed63c;
case 0x4ed63e:goto L4ed63e;
case 0x4ed641:c.instructions+=4;goto B4ed641;
case 0x4ed643:c.instructions+=3;goto B4ed643;
case 0x4ed644:c.instructions+=2;goto B4ed644;
case 0x4ed646:c.instructions+=1;goto B4ed646;
case 0x4ed649:goto L4ed649;
case 0x4ed64b:c.instructions+=2;goto B4ed64b;
case 0x4ed64e:c.instructions+=1;goto B4ed64e;
case 0x4ed650:goto L4ed650;
case 0x4ed651:c.instructions+=2;goto B4ed651;
case 0x4ed653:c.instructions+=1;goto B4ed653;
case 0x4ed658:goto L4ed658;
case 0x4ed65e:c.instructions+=6;goto B4ed65e;
case 0x4ed65f:c.instructions+=5;goto B4ed65f;
case 0x4ed660:c.instructions+=4;goto B4ed660;
case 0x4ed661:c.instructions+=3;goto B4ed661;
case 0x4ed663:c.instructions+=2;goto B4ed663;
case 0x4ed669:c.instructions+=1;goto B4ed669;
case 0x4ed66e:goto L4ed66e;
case 0x4ed66f:c.instructions+=1;goto B4ed66f;
case 0x4ed670:goto L4ed670;
case 0x4ed671:c.instructions+=3;goto B4ed671;
case 0x4ed672:c.instructions+=2;goto B4ed672;
case 0x4ed673:c.instructions+=1;goto B4ed673;
case 0x4ed680:goto L4ed680;
case 0x4ed681:c.instructions+=2;goto B4ed681;
case 0x4ed683:c.instructions+=1;goto B4ed683;
case 0x4ed688:goto L4ed688;
case 0x4ed68d:c.instructions+=1;goto B4ed68d;
case 0x4ed68f:goto L4ed68f;
case 0x4ed690:c.instructions+=1;goto B4ed690;
case 0x4ed695:goto L4ed695;
case 0x4ed698:goto L4ed698;
case 0x4ed69a:c.instructions+=2;goto B4ed69a;
case 0x4ed69b:c.instructions+=1;goto B4ed69b;
case 0x4ed6a0:goto L4ed6a0;
case 0x4ed6a6:c.instructions+=1;goto B4ed6a6;
case 0x4ed6b0:goto L4ed6b0;
case 0x4ed6b2:c.instructions+=7;goto B4ed6b2;
case 0x4ed6b7:c.instructions+=6;goto B4ed6b7;
case 0x4ed6bd:c.instructions+=5;goto B4ed6bd;
case 0x4ed6be:c.instructions+=4;goto B4ed6be;
case 0x4ed6c5:c.instructions+=3;goto B4ed6c5;
case 0x4ed6c6:c.instructions+=2;goto B4ed6c6;
case 0x4ed6cb:c.instructions+=1;goto B4ed6cb;
case 0x4ed6d0:goto L4ed6d0;
case 0x4ed6d3:c.instructions+=4;goto B4ed6d3;
case 0x4ed6d7:c.instructions+=3;goto B4ed6d7;
case 0x4ed6d9:c.instructions+=2;goto B4ed6d9;
case 0x4ed6e1:c.instructions+=1;goto B4ed6e1;
case 0x4ed6e3:goto L4ed6e3;
case 0x4ed6e7:c.instructions+=3;goto B4ed6e7;
case 0x4ed6e8:c.instructions+=2;goto B4ed6e8;
case 0x4ed6ea:c.instructions+=1;goto B4ed6ea;
case 0x4ed6ef:goto L4ed6ef;
case 0x4ed6f3:c.instructions+=3;goto B4ed6f3;
case 0x4ed6fa:c.instructions+=2;goto B4ed6fa;
case 0x4ed6fd:c.instructions+=1;goto B4ed6fd;
case 0x4ed6fe:goto L4ed6fe;
case 0x4ed702:c.instructions+=4;goto B4ed702;
case 0x4ed704:c.instructions+=3;goto B4ed704;
case 0x4ed70b:c.instructions+=2;goto B4ed70b;
case 0x4ed70e:c.instructions+=1;goto B4ed70e;
case 0x4ed710:goto L4ed710;
case 0x4ed712:c.instructions+=8;goto B4ed712;
case 0x4ed717:c.instructions+=7;goto B4ed717;
case 0x4ed71d:c.instructions+=6;goto B4ed71d;
case 0x4ed71e:c.instructions+=5;goto B4ed71e;
case 0x4ed725:c.instructions+=4;goto B4ed725;
case 0x4ed726:c.instructions+=3;goto B4ed726;
case 0x4ed727:c.instructions+=2;goto B4ed727;
case 0x4ed72c:c.instructions+=1;goto B4ed72c;
case 0x4ed731:goto L4ed731;
case 0x4ed733:c.instructions+=5;goto B4ed733;
case 0x4ed736:c.instructions+=4;goto B4ed736;
case 0x4ed73a:c.instructions+=3;goto B4ed73a;
case 0x4ed73c:c.instructions+=2;goto B4ed73c;
case 0x4ed744:c.instructions+=1;goto B4ed744;
case 0x4ed746:goto L4ed746;
case 0x4ed74a:c.instructions+=3;goto B4ed74a;
case 0x4ed74b:c.instructions+=2;goto B4ed74b;
case 0x4ed74d:c.instructions+=1;goto B4ed74d;
case 0x4ed752:goto L4ed752;
case 0x4ed758:c.instructions+=1;goto B4ed758;
case 0x4ed75a:goto L4ed75a;
case 0x4ed75c:goto L4ed75c;
case 0x4ed75e:c.instructions+=3;goto B4ed75e;
case 0x4ed760:c.instructions+=2;goto B4ed760;
case 0x4ed768:c.instructions+=1;goto B4ed768;
case 0x4ed76b:goto L4ed76b;
case 0x4ed76f:c.instructions+=5;goto B4ed76f;
case 0x4ed771:c.instructions+=4;goto B4ed771;
case 0x4ed772:c.instructions+=3;goto B4ed772;
case 0x4ed779:c.instructions+=2;goto B4ed779;
case 0x4ed77c:c.instructions+=1;goto B4ed77c;
case 0x4ed780:goto L4ed780;
case 0x4ed782:c.instructions+=7;goto B4ed782;
case 0x4ed787:c.instructions+=6;goto B4ed787;
case 0x4ed78d:c.instructions+=5;goto B4ed78d;
case 0x4ed78e:c.instructions+=4;goto B4ed78e;
case 0x4ed795:c.instructions+=3;goto B4ed795;
case 0x4ed796:c.instructions+=2;goto B4ed796;
case 0x4ed79b:c.instructions+=1;goto B4ed79b;
case 0x4ed7a0:goto L4ed7a0;
case 0x4ed7a3:c.instructions+=4;goto B4ed7a3;
case 0x4ed7a7:c.instructions+=3;goto B4ed7a7;
case 0x4ed7a9:c.instructions+=2;goto B4ed7a9;
case 0x4ed7b1:c.instructions+=1;goto B4ed7b1;
case 0x4ed7b3:goto L4ed7b3;
case 0x4ed7b7:c.instructions+=3;goto B4ed7b7;
case 0x4ed7b8:c.instructions+=2;goto B4ed7b8;
case 0x4ed7ba:c.instructions+=1;goto B4ed7ba;
case 0x4ed7bf:goto L4ed7bf;
case 0x4ed7c3:c.instructions+=3;goto B4ed7c3;
case 0x4ed7ca:c.instructions+=2;goto B4ed7ca;
case 0x4ed7cd:c.instructions+=1;goto B4ed7cd;
case 0x4ed7ce:goto L4ed7ce;
case 0x4ed7d2:c.instructions+=4;goto B4ed7d2;
case 0x4ed7d4:c.instructions+=3;goto B4ed7d4;
case 0x4ed7db:c.instructions+=2;goto B4ed7db;
case 0x4ed7de:c.instructions+=1;goto B4ed7de;
case 0x4ed7e0:goto L4ed7e0;
case 0x4ed7e2:c.instructions+=7;goto B4ed7e2;
case 0x4ed7e7:c.instructions+=6;goto B4ed7e7;
case 0x4ed7ed:c.instructions+=5;goto B4ed7ed;
case 0x4ed7ee:c.instructions+=4;goto B4ed7ee;
case 0x4ed7f5:c.instructions+=3;goto B4ed7f5;
case 0x4ed7f6:c.instructions+=2;goto B4ed7f6;
case 0x4ed7fb:c.instructions+=1;goto B4ed7fb;
case 0x4ed800:goto L4ed800;
case 0x4ed803:c.instructions+=4;goto B4ed803;
case 0x4ed807:c.instructions+=3;goto B4ed807;
case 0x4ed809:c.instructions+=2;goto B4ed809;
case 0x4ed811:c.instructions+=1;goto B4ed811;
case 0x4ed813:goto L4ed813;
case 0x4ed817:c.instructions+=3;goto B4ed817;
case 0x4ed818:c.instructions+=2;goto B4ed818;
case 0x4ed81a:c.instructions+=1;goto B4ed81a;
case 0x4ed81f:goto L4ed81f;
case 0x4ed823:c.instructions+=3;goto B4ed823;
case 0x4ed82a:c.instructions+=2;goto B4ed82a;
case 0x4ed82d:c.instructions+=1;goto B4ed82d;
case 0x4ed82e:goto L4ed82e;
case 0x4ed832:c.instructions+=4;goto B4ed832;
case 0x4ed834:c.instructions+=3;goto B4ed834;
case 0x4ed83b:c.instructions+=2;goto B4ed83b;
case 0x4ed83e:c.instructions+=1;goto B4ed83e;
case 0x4ed840:goto L4ed840;
case 0x4ed842:c.instructions+=7;goto B4ed842;
case 0x4ed847:c.instructions+=6;goto B4ed847;
case 0x4ed84d:c.instructions+=5;goto B4ed84d;
case 0x4ed84e:c.instructions+=4;goto B4ed84e;
case 0x4ed855:c.instructions+=3;goto B4ed855;
case 0x4ed856:c.instructions+=2;goto B4ed856;
case 0x4ed85b:c.instructions+=1;goto B4ed85b;
case 0x4ed860:goto L4ed860;
case 0x4ed863:c.instructions+=4;goto B4ed863;
case 0x4ed867:c.instructions+=3;goto B4ed867;
case 0x4ed869:c.instructions+=2;goto B4ed869;
case 0x4ed871:c.instructions+=1;goto B4ed871;
case 0x4ed873:goto L4ed873;
case 0x4ed877:c.instructions+=3;goto B4ed877;
case 0x4ed878:c.instructions+=2;goto B4ed878;
case 0x4ed87a:c.instructions+=1;goto B4ed87a;
case 0x4ed87f:goto L4ed87f;
case 0x4ed883:c.instructions+=3;goto B4ed883;
case 0x4ed88a:c.instructions+=2;goto B4ed88a;
case 0x4ed88d:c.instructions+=1;goto B4ed88d;
case 0x4ed88e:goto L4ed88e;
case 0x4ed892:c.instructions+=4;goto B4ed892;
case 0x4ed894:c.instructions+=3;goto B4ed894;
case 0x4ed89b:c.instructions+=2;goto B4ed89b;
case 0x4ed89e:c.instructions+=1;goto B4ed89e;
case 0x4ed8a0:goto L4ed8a0;
case 0x4ed8a4:c.instructions+=6;goto B4ed8a4;
case 0x4ed8a5:c.instructions+=5;goto B4ed8a5;
case 0x4ed8a7:c.instructions+=4;goto B4ed8a7;
case 0x4ed8aa:c.instructions+=3;goto B4ed8aa;
case 0x4ed8ab:c.instructions+=2;goto B4ed8ab;
case 0x4ed8ae:c.instructions+=1;goto B4ed8ae;
case 0x4ed8b4:goto L4ed8b4;
case 0x4ed8bb:goto L4ed8bb;
case 0x4ed8be:c.instructions+=2;goto B4ed8be;
case 0x4ed8c3:c.instructions+=1;goto B4ed8c3;
case 0x4ed8c8:goto L4ed8c8;
case 0x4ed8c9:c.instructions+=2;goto B4ed8c9;
case 0x4ed8ca:c.instructions+=1;goto B4ed8ca;
case 0x4ed8cf:goto L4ed8cf;
case 0x4ed8d0:c.instructions+=1;goto B4ed8d0;
case 0x4ed8d5:goto L4ed8d5;
case 0x4ed8d8:c.instructions+=2;goto B4ed8d8;
case 0x4ed8d9:c.instructions+=1;goto B4ed8d9;
case 0x4ed8dc:goto L4ed8dc;
case 0x4ed8dd:c.instructions+=3;goto B4ed8dd;
case 0x4ed8e0:c.instructions+=2;goto B4ed8e0;
case 0x4ed8e5:c.instructions+=1;goto B4ed8e5;
case 0x4ed8ea:goto L4ed8ea;
case 0x4ed8eb:c.instructions+=2;goto B4ed8eb;
case 0x4ed8ec:c.instructions+=1;goto B4ed8ec;
case 0x4ed8f1:goto L4ed8f1;
case 0x4ed8f2:c.instructions+=1;goto B4ed8f2;
case 0x4ed8f7:goto L4ed8f7;
case 0x4ed8fa:c.instructions+=2;goto B4ed8fa;
case 0x4ed8ff:c.instructions+=1;goto B4ed8ff;
case 0x4ed904:goto L4ed904;
case 0x4ed907:c.instructions+=4;goto B4ed907;
case 0x4ed908:c.instructions+=3;goto B4ed908;
case 0x4ed90d:c.instructions+=2;goto B4ed90d;
case 0x4ed912:c.instructions+=1;goto B4ed912;
case 0x4ed917:goto L4ed917;
case 0x4ed91a:c.instructions+=3;goto B4ed91a;
case 0x4ed91b:c.instructions+=2;goto B4ed91b;
case 0x4ed91c:c.instructions+=1;goto B4ed91c;
case 0x4ed921:goto L4ed921;
case 0x4ed924:c.instructions+=3;goto B4ed924;
case 0x4ed925:c.instructions+=2;goto B4ed925;
case 0x4ed926:c.instructions+=1;goto B4ed926;
case 0x4ed929:goto L4ed929;
case 0x4ed92c:c.instructions+=1;goto B4ed92c;
case 0x4ed931:goto L4ed931;
case 0x4ed933:c.instructions+=2;goto B4ed933;
case 0x4ed935:c.instructions+=1;goto B4ed935;
case 0x4ed93a:goto L4ed93a;
case 0x4ed93c:c.instructions+=1;goto B4ed93c;
case 0x4ed941:goto L4ed941;
case 0x4ed942:c.instructions+=1;goto B4ed942;
case 0x4ed945:goto L4ed945;
case 0x4ed94a:c.instructions+=1;goto B4ed94a;
case 0x4ed94f:goto L4ed94f;
case 0x4ed951:c.instructions+=1;goto B4ed951;
case 0x4ed953:goto L4ed953;
case 0x4ed956:c.instructions+=8;goto B4ed956;
case 0x4ed958:c.instructions+=7;goto B4ed958;
case 0x4ed95a:c.instructions+=6;goto B4ed95a;
case 0x4ed95c:c.instructions+=5;goto B4ed95c;
case 0x4ed95e:c.instructions+=4;goto B4ed95e;
case 0x4ed963:c.instructions+=3;goto B4ed963;
case 0x4ed964:c.instructions+=2;goto B4ed964;
case 0x4ed965:c.instructions+=1;goto B4ed965;
case 0x4ed96a:goto L4ed96a;
case 0x4ed96d:c.instructions+=2;goto B4ed96d;
case 0x4ed96e:c.instructions+=1;goto B4ed96e;
case 0x4ed971:goto L4ed971;
case 0x4ed974:c.instructions+=3;goto B4ed974;
case 0x4ed975:c.instructions+=2;goto B4ed975;
case 0x4ed97a:c.instructions+=1;goto B4ed97a;
case 0x4ed97f:goto L4ed97f;
case 0x4ed982:goto L4ed982;
case 0x4ed983:c.instructions+=1;goto B4ed983;
case 0x4ed9a0:goto L4ed9a0;
case 0x4ed9a1:c.instructions+=3;goto B4ed9a1;
case 0x4ed9a3:c.instructions+=2;goto B4ed9a3;
case 0x4ed9a7:c.instructions+=1;goto B4ed9a7;
case 0x4ed9a9:goto L4ed9a9;
case 0x4ed9aa:c.instructions+=3;goto B4ed9aa;
case 0x4ed9ad:c.instructions+=2;goto B4ed9ad;
case 0x4ed9b2:c.instructions+=1;goto B4ed9b2;
case 0x4ed9b7:goto L4ed9b7;
case 0x4ed9b8:c.instructions+=2;goto B4ed9b8;
case 0x4ed9b9:c.instructions+=1;goto B4ed9b9;
case 0x4ed9be:goto L4ed9be;
case 0x4ed9bf:c.instructions+=1;goto B4ed9bf;
case 0x4ed9c4:goto L4ed9c4;
case 0x4ed9c7:c.instructions+=4;goto B4ed9c7;
case 0x4ed9ca:c.instructions+=3;goto B4ed9ca;
case 0x4ed9cb:c.instructions+=2;goto B4ed9cb;
case 0x4ed9cd:c.instructions+=1;goto B4ed9cd;
case 0x4ed9d2:goto L4ed9d2;
case 0x4ed9d3:c.instructions+=2;goto B4ed9d3;
case 0x4ed9d5:c.instructions+=1;goto B4ed9d5;
case 0x4ed9da:goto L4ed9da;
case 0x4ed9db:goto L4ed9db;
case 0x4ed9dc:c.instructions+=1;goto B4ed9dc;
case 0x4ed9e0:goto L4ed9e0;
case 0x4ed9e1:c.instructions+=7;goto B4ed9e1;
case 0x4ed9e3:c.instructions+=6;goto B4ed9e3;
case 0x4ed9e6:c.instructions+=5;goto B4ed9e6;
case 0x4ed9eb:c.instructions+=4;goto B4ed9eb;
case 0x4ed9ec:c.instructions+=3;goto B4ed9ec;
case 0x4ed9ed:c.instructions+=2;goto B4ed9ed;
case 0x4ed9ef:c.instructions+=1;goto B4ed9ef;
case 0x4ed9f5:goto L4ed9f5;
case 0x4ed9fb:goto L4ed9fb;
case 0x4eda00:c.instructions+=1;goto B4eda00;
case 0x4eda06:goto L4eda06;
case 0x4eda0c:goto L4eda0c;
case 0x4eda11:c.instructions+=1;goto B4eda11;
case 0x4eda17:goto L4eda17;
case 0x4eda19:goto L4eda19;
case 0x4eda1e:c.instructions+=1;goto B4eda1e;
case 0x4eda24:goto L4eda24;
case 0x4eda29:c.instructions+=1;goto B4eda29;
case 0x4eda2f:goto L4eda2f;
case 0x4eda32:c.instructions+=3;goto B4eda32;
case 0x4eda37:c.instructions+=2;goto B4eda37;
case 0x4eda38:c.instructions+=1;goto B4eda38;
case 0x4eda3d:goto L4eda3d;
case 0x4eda40:c.instructions+=3;goto B4eda40;
case 0x4eda45:c.instructions+=2;goto B4eda45;
case 0x4eda46:c.instructions+=1;goto B4eda46;
case 0x4eda4b:goto L4eda4b;
case 0x4eda4e:c.instructions+=5;goto B4eda4e;
case 0x4eda50:c.instructions+=4;goto B4eda50;
case 0x4eda55:c.instructions+=3;goto B4eda55;
case 0x4eda5a:c.instructions+=2;goto B4eda5a;
case 0x4eda5b:c.instructions+=1;goto B4eda5b;
case 0x4eda60:goto L4eda60;
case 0x4eda63:c.instructions+=5;goto B4eda63;
case 0x4eda65:c.instructions+=4;goto B4eda65;
case 0x4eda6a:c.instructions+=3;goto B4eda6a;
case 0x4eda6f:c.instructions+=2;goto B4eda6f;
case 0x4eda70:c.instructions+=1;goto B4eda70;
case 0x4eda75:goto L4eda75;
case 0x4eda78:c.instructions+=5;goto B4eda78;
case 0x4eda7a:c.instructions+=4;goto B4eda7a;
case 0x4eda7f:c.instructions+=3;goto B4eda7f;
case 0x4eda84:c.instructions+=2;goto B4eda84;
case 0x4eda85:c.instructions+=1;goto B4eda85;
case 0x4eda8a:goto L4eda8a;
case 0x4eda8d:c.instructions+=4;goto B4eda8d;
case 0x4eda8e:c.instructions+=3;goto B4eda8e;
case 0x4eda8f:c.instructions+=2;goto B4eda8f;
case 0x4eda90:c.instructions+=1;goto B4eda90;
case 0x4eda93:goto L4eda93;
case 0x4eda96:c.instructions+=5;goto B4eda96;
case 0x4eda98:c.instructions+=4;goto B4eda98;
case 0x4eda9d:c.instructions+=3;goto B4eda9d;
case 0x4edaa2:c.instructions+=2;goto B4edaa2;
case 0x4edaa3:c.instructions+=1;goto B4edaa3;
case 0x4edaa8:goto L4edaa8;
case 0x4edaab:c.instructions+=4;goto B4edaab;
case 0x4edaac:c.instructions+=3;goto B4edaac;
case 0x4edaad:c.instructions+=2;goto B4edaad;
case 0x4edaae:c.instructions+=1;goto B4edaae;
case 0x4edab1:goto L4edab1;
case 0x4edab6:c.instructions+=1;goto B4edab6;
case 0x4edabc:goto L4edabc;
case 0x4edabf:c.instructions+=1;goto B4edabf;
case 0x4edac5:goto L4edac5;
case 0x4edac6:c.instructions+=3;goto B4edac6;
case 0x4edac7:c.instructions+=2;goto B4edac7;
case 0x4edac8:c.instructions+=1;goto B4edac8;
case 0x4edacb:goto L4edacb;
case 0x4edacd:c.instructions+=2;goto B4edacd;
case 0x4edad2:c.instructions+=1;goto B4edad2;
case 0x4edad7:goto L4edad7;
case 0x4edad9:c.instructions+=2;goto B4edad9;
case 0x4edade:c.instructions+=1;goto B4edade;
case 0x4edae3:goto L4edae3;
case 0x4edae4:c.instructions+=3;goto B4edae4;
case 0x4edae5:c.instructions+=2;goto B4edae5;
case 0x4edae6:c.instructions+=1;goto B4edae6;
case 0x4edae9:goto L4edae9;
case 0x4edaee:c.instructions+=1;goto B4edaee;
case 0x4edaf4:goto L4edaf4;
case 0x4edafa:goto L4edafa;
case 0x4edaff:c.instructions+=1;goto B4edaff;
case 0x4edb01:goto L4edb01;
case 0x4edb06:c.instructions+=1;goto B4edb06;
case 0x4edb0c:goto L4edb0c;
case 0x4edb12:c.instructions+=2;goto B4edb12;
case 0x4edb13:c.instructions+=1;goto B4edb13;
case 0x4edb18:goto L4edb18;
case 0x4edb1b:c.instructions+=1;goto B4edb1b;
case 0x4edb20:goto L4edb20;
case 0x4edb25:goto L4edb25;
case 0x4edb26:c.instructions+=3;goto B4edb26;
case 0x4edb27:c.instructions+=2;goto B4edb27;
case 0x4edb28:c.instructions+=1;goto B4edb28;
case 0x4edb2b:goto L4edb2b;
case 0x4edb31:c.instructions+=2;goto B4edb31;
case 0x4edb33:c.instructions+=1;goto B4edb33;
case 0x4edb39:goto L4edb39;
case 0x4edb3c:c.instructions+=2;goto B4edb3c;
case 0x4edb3d:c.instructions+=1;goto B4edb3d;
case 0x4edb42:goto L4edb42;
case 0x4edb48:c.instructions+=6;goto B4edb48;
case 0x4edb4f:c.instructions+=5;goto B4edb4f;
case 0x4edb52:c.instructions+=4;goto B4edb52;
case 0x4edb55:c.instructions+=3;goto B4edb55;
case 0x4edb58:c.instructions+=2;goto B4edb58;
case 0x4edb5b:c.instructions+=1;goto B4edb5b;
case 0x4edb61:goto L4edb61;
case 0x4edb62:c.instructions+=1;goto B4edb62;
case 0x4edb69:goto L4edb69;
case 0x4edb6c:c.instructions+=5;goto B4edb6c;
case 0x4edb72:c.instructions+=4;goto B4edb72;
case 0x4edb78:c.instructions+=3;goto B4edb78;
case 0x4edb7b:c.instructions+=2;goto B4edb7b;
case 0x4edb7c:c.instructions+=1;goto B4edb7c;
case 0x4edb81:goto L4edb81;
case 0x4edb82:c.instructions+=10;goto B4edb82;
case 0x4edb87:c.instructions+=9;goto B4edb87;
case 0x4edb89:c.instructions+=8;goto B4edb89;
case 0x4edb8e:c.instructions+=7;goto B4edb8e;
case 0x4edb93:c.instructions+=6;goto B4edb93;
case 0x4edb98:c.instructions+=5;goto B4edb98;
case 0x4edb9d:c.instructions+=4;goto B4edb9d;
case 0x4edba2:c.instructions+=3;goto B4edba2;
case 0x4edba7:c.instructions+=2;goto B4edba7;
case 0x4edba8:c.instructions+=1;goto B4edba8;
case 0x4edbad:goto L4edbad;
case 0x4edbb2:c.instructions+=1;goto B4edbb2;
case 0x4edbb7:goto L4edbb7;
case 0x4edbba:c.instructions+=6;goto B4edbba;
case 0x4edbc0:c.instructions+=5;goto B4edbc0;
case 0x4edbc3:c.instructions+=4;goto B4edbc3;
case 0x4edbc5:c.instructions+=3;goto B4edbc5;
case 0x4edbcb:c.instructions+=2;goto B4edbcb;
case 0x4edbcc:c.instructions+=1;goto B4edbcc;
case 0x4edbd1:goto L4edbd1;
case 0x4edbd4:c.instructions+=4;goto B4edbd4;
case 0x4edbd5:c.instructions+=3;goto B4edbd5;
case 0x4edbd7:c.instructions+=2;goto B4edbd7;
case 0x4edbd9:c.instructions+=1;goto B4edbd9;
case 0x4edbdc:goto L4edbdc;
case 0x4edbdd:c.instructions+=1;goto B4edbdd;
case 0x4edbe2:goto L4edbe2;
case 0x4edbe7:c.instructions+=1;goto B4edbe7;
case 0x4edbec:goto L4edbec;
case 0x4edbef:c.instructions+=6;goto B4edbef;
case 0x4edbf5:c.instructions+=5;goto B4edbf5;
case 0x4edbf8:c.instructions+=4;goto B4edbf8;
case 0x4edbfa:c.instructions+=3;goto B4edbfa;
case 0x4edc00:c.instructions+=2;goto B4edc00;
case 0x4edc01:c.instructions+=1;goto B4edc01;
case 0x4edc06:goto L4edc06;
case 0x4edc09:c.instructions+=4;goto B4edc09;
case 0x4edc0a:c.instructions+=3;goto B4edc0a;
case 0x4edc0c:c.instructions+=2;goto B4edc0c;
case 0x4edc0e:c.instructions+=1;goto B4edc0e;
case 0x4edc11:goto L4edc11;
case 0x4edc12:c.instructions+=1;goto B4edc12;
case 0x4edc17:goto L4edc17;
case 0x4edc1a:c.instructions+=9;goto B4edc1a;
case 0x4edc1b:c.instructions+=8;goto B4edc1b;
case 0x4edc20:c.instructions+=7;goto B4edc20;
case 0x4edc22:c.instructions+=6;goto B4edc22;
case 0x4edc27:c.instructions+=5;goto B4edc27;
case 0x4edc2c:c.instructions+=4;goto B4edc2c;
case 0x4edc31:c.instructions+=3;goto B4edc31;
case 0x4edc36:c.instructions+=2;goto B4edc36;
case 0x4edc3b:c.instructions+=1;goto B4edc3b;
case 0x4edc3d:goto L4edc3d;
case 0x4edc40:c.instructions+=5;goto B4edc40;
case 0x4edc46:c.instructions+=4;goto B4edc46;
case 0x4edc47:c.instructions+=3;goto B4edc47;
case 0x4edc48:c.instructions+=2;goto B4edc48;
case 0x4edc4d:c.instructions+=1;goto B4edc4d;
case 0x4edc52:goto L4edc52;
case 0x4edc54:c.instructions+=1;goto B4edc54;
case 0x4edc59:goto L4edc59;
case 0x4edc5c:c.instructions+=6;goto B4edc5c;
case 0x4edc62:c.instructions+=5;goto B4edc62;
case 0x4edc68:c.instructions+=4;goto B4edc68;
case 0x4edc6a:c.instructions+=3;goto B4edc6a;
case 0x4edc6d:c.instructions+=2;goto B4edc6d;
case 0x4edc6f:c.instructions+=1;goto B4edc6f;
case 0x4edc72:goto L4edc72;
case 0x4edc73:c.instructions+=1;goto B4edc73;
case 0x4edc78:goto L4edc78;
case 0x4edc7b:c.instructions+=2;goto B4edc7b;
case 0x4edc7c:c.instructions+=1;goto B4edc7c;
case 0x4edc7d:goto L4edc7d;
case 0x4edc82:goto L4edc82;
case 0x4edc85:c.instructions+=8;goto B4edc85;
case 0x4edc86:c.instructions+=7;goto B4edc86;
case 0x4edc8b:c.instructions+=6;goto B4edc8b;
case 0x4edc8d:c.instructions+=5;goto B4edc8d;
case 0x4edc92:c.instructions+=4;goto B4edc92;
case 0x4edc97:c.instructions+=3;goto B4edc97;
case 0x4edc9c:c.instructions+=2;goto B4edc9c;
case 0x4edca1:c.instructions+=1;goto B4edca1;
case 0x4edca6:goto L4edca6;
case 0x4edcab:c.instructions+=1;goto B4edcab;
case 0x4edcac:goto L4edcac;
case 0x4edcb1:goto L4edcb1;
case 0x4edcb4:c.instructions+=2;goto B4edcb4;
case 0x4edcbb:c.instructions+=1;goto B4edcbb;
case 0x4edcbc:goto L4edcbc;
case 0x4edcbf:c.instructions+=5;goto B4edcbf;
case 0x4edcc1:c.instructions+=4;goto B4edcc1;
case 0x4edcc6:c.instructions+=3;goto B4edcc6;
case 0x4edccb:c.instructions+=2;goto B4edccb;
case 0x4edccc:c.instructions+=1;goto B4edccc;
case 0x4edcd1:goto L4edcd1;
case 0x4edcd4:c.instructions+=5;goto B4edcd4;
case 0x4edcd7:c.instructions+=4;goto B4edcd7;
case 0x4edcd8:c.instructions+=3;goto B4edcd8;
case 0x4edcda:c.instructions+=2;goto B4edcda;
case 0x4edcdb:c.instructions+=1;goto B4edcdb;
case 0x4edce0:goto L4edce0;
case 0x4edce3:c.instructions+=4;goto B4edce3;
case 0x4edce4:c.instructions+=3;goto B4edce4;
case 0x4edce5:c.instructions+=2;goto B4edce5;
case 0x4edce6:c.instructions+=1;goto B4edce6;
case 0x4edce9:goto L4edce9;
case 0x4edcee:c.instructions+=1;goto B4edcee;
case 0x4edcf3:goto L4edcf3;
case 0x4edcf6:c.instructions+=2;goto B4edcf6;
case 0x4edcf7:c.instructions+=1;goto B4edcf7;
case 0x4edcfc:goto L4edcfc;
case 0x4edd02:c.instructions+=2;goto B4edd02;
case 0x4edd09:c.instructions+=1;goto B4edd09;
case 0x4edd0e:goto L4edd0e;
case 0x4edd11:c.instructions+=5;goto B4edd11;
case 0x4edd14:c.instructions+=4;goto B4edd14;
case 0x4edd15:c.instructions+=3;goto B4edd15;
case 0x4edd17:c.instructions+=2;goto B4edd17;
case 0x4edd18:c.instructions+=1;goto B4edd18;
case 0x4edd1d:goto L4edd1d;
case 0x4edd20:c.instructions+=4;goto B4edd20;
case 0x4edd21:c.instructions+=3;goto B4edd21;
case 0x4edd22:c.instructions+=2;goto B4edd22;
case 0x4edd23:c.instructions+=1;goto B4edd23;
case 0x4edd26:goto L4edd26;
case 0x4edd2b:c.instructions+=1;goto B4edd2b;
case 0x4edd31:goto L4edd31;
case 0x4edd34:c.instructions+=5;goto B4edd34;
case 0x4edd36:c.instructions+=4;goto B4edd36;
case 0x4edd3b:c.instructions+=3;goto B4edd3b;
case 0x4edd40:c.instructions+=2;goto B4edd40;
case 0x4edd41:c.instructions+=1;goto B4edd41;
case 0x4edd46:goto L4edd46;
case 0x4edd49:c.instructions+=2;goto B4edd49;
case 0x4edd4e:c.instructions+=1;goto B4edd4e;
case 0x4edd53:goto L4edd53;
case 0x4edd56:c.instructions+=9;goto B4edd56;
case 0x4edd59:c.instructions+=8;goto B4edd59;
case 0x4edd5c:c.instructions+=7;goto B4edd5c;
case 0x4edd62:c.instructions+=6;goto B4edd62;
case 0x4edd64:c.instructions+=5;goto B4edd64;
case 0x4edd65:c.instructions+=4;goto B4edd65;
case 0x4edd66:c.instructions+=3;goto B4edd66;
case 0x4edd68:c.instructions+=2;goto B4edd68;
case 0x4edd6b:c.instructions+=1;goto B4edd6b;
case 0x4edd70:goto L4edd70;
case 0x4edd75:c.instructions+=2;goto B4edd75;
case 0x4edd7c:c.instructions+=1;goto B4edd7c;
case 0x4edd81:goto L4edd81;
case 0x4edd83:c.instructions+=1;goto B4edd83;
case 0x4edd85:goto L4edd85;
case 0x4edd88:c.instructions+=8;goto B4edd88;
case 0x4edd8a:c.instructions+=7;goto B4edd8a;
case 0x4edd8c:c.instructions+=6;goto B4edd8c;
case 0x4edd8e:c.instructions+=5;goto B4edd8e;
case 0x4edd90:c.instructions+=4;goto B4edd90;
case 0x4edd95:c.instructions+=3;goto B4edd95;
case 0x4edd96:c.instructions+=2;goto B4edd96;
case 0x4edd97:c.instructions+=1;goto B4edd97;
case 0x4edd9c:goto L4edd9c;
case 0x4edd9f:c.instructions+=4;goto B4edd9f;
case 0x4edda0:c.instructions+=3;goto B4edda0;
case 0x4edda1:c.instructions+=2;goto B4edda1;
case 0x4edda2:c.instructions+=1;goto B4edda2;
case 0x4edda5:goto L4edda5;
case 0x4edda8:c.instructions+=3;goto B4edda8;
case 0x4edda9:c.instructions+=2;goto B4edda9;
case 0x4eddae:c.instructions+=1;goto B4eddae;
case 0x4eddb3:goto L4eddb3;
case 0x4eddb6:c.instructions+=4;goto B4eddb6;
case 0x4eddb7:c.instructions+=3;goto B4eddb7;
case 0x4eddb8:c.instructions+=2;goto B4eddb8;
case 0x4eddb9:c.instructions+=1;goto B4eddb9;
case 0x4eddbc:goto L4eddbc;
case 0x4eddbf:c.instructions+=6;goto B4eddbf;
case 0x4eddc1:c.instructions+=5;goto B4eddc1;
case 0x4eddc6:c.instructions+=4;goto B4eddc6;
case 0x4eddcb:c.instructions+=3;goto B4eddcb;
case 0x4eddcc:c.instructions+=2;goto B4eddcc;
case 0x4eddd3:c.instructions+=1;goto B4eddd3;
case 0x4eddd8:goto L4eddd8;
case 0x4edddb:c.instructions+=7;goto B4edddb;
case 0x4edde1:c.instructions+=6;goto B4edde1;
case 0x4edde4:c.instructions+=5;goto B4edde4;
case 0x4edde7:c.instructions+=4;goto B4edde7;
case 0x4edde8:c.instructions+=3;goto B4edde8;
case 0x4eddea:c.instructions+=2;goto B4eddea;
case 0x4edded:c.instructions+=1;goto B4edded;
case 0x4eddf2:goto L4eddf2;
case 0x4eddf3:c.instructions+=2;goto B4eddf3;
case 0x4eddf5:c.instructions+=1;goto B4eddf5;
case 0x4eddfa:goto L4eddfa;
case 0x4eddfb:c.instructions+=3;goto B4eddfb;
case 0x4eddfc:c.instructions+=2;goto B4eddfc;
case 0x4eddfd:c.instructions+=1;goto B4eddfd;
case 0x4ede00:goto L4ede00;
case 0x4ede05:c.instructions+=1;goto B4ede05;
case 0x4ede0b:goto L4ede0b;
case 0x4ede11:goto L4ede11;
case 0x4ede16:c.instructions+=1;goto B4ede16;
case 0x4ede1c:goto L4ede1c;
case 0x4ede22:goto L4ede22;
case 0x4ede27:c.instructions+=1;goto B4ede27;
case 0x4ede2d:goto L4ede2d;
case 0x4ede32:c.instructions+=1;goto B4ede32;
case 0x4ede38:goto L4ede38;
case 0x4ede3e:c.instructions+=2;goto B4ede3e;
case 0x4ede40:c.instructions+=1;goto B4ede40;
case 0x4ede46:goto L4ede46;
case 0x4ede4c:c.instructions+=2;goto B4ede4c;
case 0x4ede4e:c.instructions+=1;goto B4ede4e;
case 0x4ede54:goto L4ede54;
case 0x4ede5a:c.instructions+=3;goto B4ede5a;
case 0x4ede5b:c.instructions+=2;goto B4ede5b;
case 0x4ede60:c.instructions+=1;goto B4ede60;
case 0x4ede65:goto L4ede65;
case 0x4ede67:c.instructions+=3;goto B4ede67;
case 0x4ede6c:c.instructions+=2;goto B4ede6c;
case 0x4ede6e:c.instructions+=1;goto B4ede6e;
case 0x4ede73:goto L4ede73;
case 0x4ede76:c.instructions+=3;goto B4ede76;
case 0x4ede77:c.instructions+=2;goto B4ede77;
case 0x4ede79:c.instructions+=1;goto B4ede79;
case 0x4ede7e:goto L4ede7e;
case 0x4ede84:c.instructions+=2;goto B4ede84;
case 0x4ede86:c.instructions+=1;goto B4ede86;
case 0x4ede88:goto L4ede88;
case 0x4ede8b:c.instructions+=10;goto B4ede8b;
case 0x4ede90:c.instructions+=9;goto B4ede90;
case 0x4ede92:c.instructions+=8;goto B4ede92;
case 0x4ede97:c.instructions+=7;goto B4ede97;
case 0x4ede9c:c.instructions+=6;goto B4ede9c;
case 0x4edea1:c.instructions+=5;goto B4edea1;
case 0x4edea6:c.instructions+=4;goto B4edea6;
case 0x4edeab:c.instructions+=3;goto B4edeab;
case 0x4edeb0:c.instructions+=2;goto B4edeb0;
case 0x4edeb1:c.instructions+=1;goto B4edeb1;
case 0x4edeb6:goto L4edeb6;
case 0x4edeb9:c.instructions+=4;goto B4edeb9;
case 0x4edeba:c.instructions+=3;goto B4edeba;
case 0x4edebb:c.instructions+=2;goto B4edebb;
case 0x4edebc:c.instructions+=1;goto B4edebc;
case 0x4edebf:goto L4edebf;
case 0x4edec2:c.instructions+=5;goto B4edec2;
case 0x4edec8:c.instructions+=4;goto B4edec8;
case 0x4edece:c.instructions+=3;goto B4edece;
case 0x4eded1:c.instructions+=2;goto B4eded1;
case 0x4eded2:c.instructions+=1;goto B4eded2;
case 0x4eded7:goto L4eded7;
case 0x4eded8:c.instructions+=7;goto B4eded8;
case 0x4ededd:c.instructions+=6;goto B4ededd;
case 0x4edee2:c.instructions+=5;goto B4edee2;
case 0x4edee7:c.instructions+=4;goto B4edee7;
case 0x4edeec:c.instructions+=3;goto B4edeec;
case 0x4edef1:c.instructions+=2;goto B4edef1;
case 0x4edef2:c.instructions+=1;goto B4edef2;
case 0x4edef7:goto L4edef7;
case 0x4edefa:c.instructions+=4;goto B4edefa;
case 0x4edefb:c.instructions+=3;goto B4edefb;
case 0x4edefc:c.instructions+=2;goto B4edefc;
case 0x4edefd:c.instructions+=1;goto B4edefd;
case 0x4edf00:goto L4edf00;
case 0x4edf05:c.instructions+=1;goto B4edf05;
case 0x4edf0b:goto L4edf0b;
case 0x4edf0e:c.instructions+=5;goto B4edf0e;
case 0x4edf10:c.instructions+=4;goto B4edf10;
case 0x4edf15:c.instructions+=3;goto B4edf15;
case 0x4edf1a:c.instructions+=2;goto B4edf1a;
case 0x4edf1b:c.instructions+=1;goto B4edf1b;
case 0x4edf20:goto L4edf20;
case 0x4edf23:c.instructions+=4;goto B4edf23;
case 0x4edf24:c.instructions+=3;goto B4edf24;
case 0x4edf25:c.instructions+=2;goto B4edf25;
case 0x4edf26:c.instructions+=1;goto B4edf26;
case 0x4edf29:goto L4edf29;
case 0x4edf2f:c.instructions+=1;goto B4edf2f;
case 0x4edf34:goto L4edf34;
case 0x4edf3a:c.instructions+=3;goto B4edf3a;
case 0x4edf3d:c.instructions+=2;goto B4edf3d;
case 0x4edf40:c.instructions+=1;goto B4edf40;
case 0x4edf46:goto L4edf46;
case 0x4edf4d:c.instructions+=1;goto B4edf4d;
case 0x4edf54:goto L4edf54;
case 0x4edf59:c.instructions+=2;goto B4edf59;
case 0x4edf5b:c.instructions+=1;goto B4edf5b;
case 0x4edf60:goto L4edf60;
case 0x4edf61:c.instructions+=3;goto B4edf61;
case 0x4edf62:c.instructions+=2;goto B4edf62;
case 0x4edf63:c.instructions+=1;goto B4edf63;
case 0x4edf66:goto L4edf66;
case 0x4edf6b:c.instructions+=2;goto B4edf6b;
case 0x4edf6d:c.instructions+=1;goto B4edf6d;
case 0x4edf72:goto L4edf72;
case 0x4edf73:c.instructions+=3;goto B4edf73;
case 0x4edf74:c.instructions+=2;goto B4edf74;
case 0x4edf75:c.instructions+=1;goto B4edf75;
case 0x4edf78:goto L4edf78;
case 0x4edf7d:c.instructions+=3;goto B4edf7d;
case 0x4edf7f:c.instructions+=2;goto B4edf7f;
case 0x4edf81:c.instructions+=1;goto B4edf81;
case 0x4edf87:goto L4edf87;
case 0x4edf90:goto L4edf90;
case 0x4edf95:c.instructions+=2;goto B4edf95;
case 0x4edf97:c.instructions+=1;goto B4edf97;
case 0x4edf9c:goto L4edf9c;
case 0x4edfa1:c.instructions+=3;goto B4edfa1;
case 0x4edfa2:c.instructions+=2;goto B4edfa2;
case 0x4edfa4:c.instructions+=1;goto B4edfa4;
case 0x4edfa6:goto L4edfa6;
case 0x4edfa7:c.instructions+=3;goto B4edfa7;
case 0x4edfa8:c.instructions+=2;goto B4edfa8;
case 0x4edfa9:c.instructions+=1;goto B4edfa9;
case 0x4edfac:goto L4edfac;
case 0x4edfb1:c.instructions+=3;goto B4edfb1;
case 0x4edfb3:c.instructions+=2;goto B4edfb3;
case 0x4edfb5:c.instructions+=1;goto B4edfb5;
case 0x4edfbb:goto L4edfbb;
case 0x4edfc0:goto L4edfc0;
case 0x4edfc5:c.instructions+=2;goto B4edfc5;
case 0x4edfc7:c.instructions+=1;goto B4edfc7;
case 0x4edfcc:goto L4edfcc;
case 0x4edfd1:c.instructions+=3;goto B4edfd1;
case 0x4edfd2:c.instructions+=2;goto B4edfd2;
case 0x4edfd4:c.instructions+=1;goto B4edfd4;
case 0x4edfd6:goto L4edfd6;
case 0x4edfd7:c.instructions+=3;goto B4edfd7;
case 0x4edfd8:c.instructions+=2;goto B4edfd8;
case 0x4edfd9:c.instructions+=1;goto B4edfd9;
case 0x4edfdc:goto L4edfdc;
case 0x4edfe1:c.instructions+=1;goto B4edfe1;
case 0x4edfe7:goto L4edfe7;
case 0x4edfe9:goto L4edfe9;
case 0x4edfee:c.instructions+=1;goto B4edfee;
case 0x4edff4:goto L4edff4;
case 0x4edff9:c.instructions+=1;goto B4edff9;
case 0x4edfff:goto L4edfff;
default:missing_instruction(c.pc);}
B4ed000:L4ed000:{c.instructions+=2;NFSU2_TR(0x4ed000);
__builtin_memmove((R+4),(R+24),4);
}
B4ed002:{NFSU2_TR(0x4ed002);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed007ull));
TAIL_STATIC(0x4dee90u,4de);
}
B4ed007:L4ed007:{c.instructions+=2;NFSU2_TR(0x4ed007);
__builtin_memmove((R+4),(R+24),4);
}
B4ed009:{NFSU2_TR(0x4ed009);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed00eull));
TAIL_STATIC(0x4cb910u,4cb);
}
B4ed00e:L4ed00e:{c.instructions+=3;NFSU2_TR(0x4ed00e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B4ed010:{NFSU2_TR(0x4ed010);
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
B4ed012:{NFSU2_TR(0x4ed012);
if(r1(R+518)){{goto L4ed019;}}
}
B4ed014:L4ed014:{c.instructions+=2;NFSU2_TR(0x4ed014);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4ed017:{NFSU2_TR(0x4ed017);
{goto L4ed01b;}
}
B4ed019:L4ed019:{c.instructions+=1;NFSU2_TR(0x4ed019);
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
B4ed01b:L4ed01b:{c.instructions+=6;NFSU2_TR(0x4ed01b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ed01e:{NFSU2_TR(0x4ed01e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ed021:{NFSU2_TR(0x4ed021);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ed024:{NFSU2_TR(0x4ed024);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ed026:{NFSU2_TR(0x4ed026);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed027:{NFSU2_TR(0x4ed027);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed02aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ed02a:L4ed02a:{c.instructions+=4;NFSU2_TR(0x4ed02a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ed02d:{NFSU2_TR(0x4ed02d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed02e:{NFSU2_TR(0x4ed02e);
__builtin_memmove((R+4),(R+24),4);
}
B4ed030:{NFSU2_TR(0x4ed030);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed035ull));
TAIL_STATIC(0x4cb970u,4cb);
}
B4ed035:L4ed035:{c.instructions+=4;NFSU2_TR(0x4ed035);
__builtin_memmove((R+28),(R+0),4);
}
B4ed037:{NFSU2_TR(0x4ed037);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed038:{NFSU2_TR(0x4ed038);
__builtin_memmove((R+4),(R+24),4);
}
B4ed03a:{NFSU2_TR(0x4ed03a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed03full));
TAIL_STATIC(0x4cb660u,4cb);
}
B4ed03f:L4ed03f:{c.instructions+=2;NFSU2_TR(0x4ed03f);
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
B4ed041:{NFSU2_TR(0x4ed041);
if(r1(R+518)){{goto L4ed04e;}}
}
B4ed043:L4ed043:{c.instructions+=5;NFSU2_TR(0x4ed043);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ed046:{NFSU2_TR(0x4ed046);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4ed048:{NFSU2_TR(0x4ed048);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed049:{NFSU2_TR(0x4ed049);
__builtin_memmove((R+4),(R+0),4);
}
B4ed04b:{NFSU2_TR(0x4ed04b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed04eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ed04e:L4ed04e:{c.instructions+=4;NFSU2_TR(0x4ed04e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ed051:{NFSU2_TR(0x4ed051);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed052:{NFSU2_TR(0x4ed052);
u8 U[4];
w4(U+0,u32(0x92b703b5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed057:{NFSU2_TR(0x4ed057);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed05cull));
TAIL_STATIC(0x55dda0u,55d);
}
B4ed05c:L4ed05c:{c.instructions+=4;NFSU2_TR(0x4ed05c);
__builtin_memmove((R+0),gp(0x850078),4);
}
B4ed061:{NFSU2_TR(0x4ed061);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4ed064:{NFSU2_TR(0x4ed064);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ed067:{NFSU2_TR(0x4ed067);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ed07c;}}
}
B4ed069:L4ed069:{c.instructions+=6;NFSU2_TR(0x4ed069);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ed06c:{NFSU2_TR(0x4ed06c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ed06f:{NFSU2_TR(0x4ed06f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed070:{NFSU2_TR(0x4ed070);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed071:{NFSU2_TR(0x4ed071);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B4ed077:{NFSU2_TR(0x4ed077);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed07cull));
TAIL_STATIC(0x54e6e0u,54e);
}
B4ed07c:L4ed07c:{c.instructions+=7;NFSU2_TR(0x4ed07c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ed082:{NFSU2_TR(0x4ed082);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed083:{NFSU2_TR(0x4ed083);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B4ed084:{NFSU2_TR(0x4ed084);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed085:{NFSU2_TR(0x4ed085);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed087:{NFSU2_TR(0x4ed087);
__builtin_memmove((R+4),(R+20),4);
}
B4ed089:{NFSU2_TR(0x4ed089);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed08eull));
TAIL_STATIC(0x538080u,538);
}
B4ed08e:L4ed08e:{c.instructions+=10;NFSU2_TR(0x4ed08e);
__builtin_memmove(gp(0x838528),(R+12),1);
}
B4ed094:{NFSU2_TR(0x4ed094);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ed098:{NFSU2_TR(0x4ed098);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ed099:{NFSU2_TR(0x4ed099);
__builtin_memmove((R+0),(R+24),4);
}
B4ed09b:{NFSU2_TR(0x4ed09b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ed09c:{NFSU2_TR(0x4ed09c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4ed09d:{NFSU2_TR(0x4ed09d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4ed09e:{NFSU2_TR(0x4ed09e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ed0a5:{NFSU2_TR(0x4ed0a5);
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
B4ed0a8:{NFSU2_TR(0x4ed0a8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ed0b0:L4ed0b0:{c.instructions+=3;NFSU2_TR(0x4ed0b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed0b1:{NFSU2_TR(0x4ed0b1);
__builtin_memmove((R+24),(R+4),4);
}
B4ed0b3:{NFSU2_TR(0x4ed0b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed0b8ull));
{goto L4ed0d0;}
}
B4ed0b8:L4ed0b8:{c.instructions+=2;NFSU2_TR(0x4ed0b8);
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
B4ed0bd:{NFSU2_TR(0x4ed0bd);
if(r1(R+518)){{goto L4ed0c8;}}
}
B4ed0bf:L4ed0bf:{c.instructions+=2;NFSU2_TR(0x4ed0bf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed0c0:{NFSU2_TR(0x4ed0c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed0c5ull));
TAIL_STATIC(0x575630u,575);
}
B4ed0c5:L4ed0c5:{c.instructions+=1;NFSU2_TR(0x4ed0c5);
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
B4ed0c8:L4ed0c8:{c.instructions+=3;NFSU2_TR(0x4ed0c8);
__builtin_memmove((R+0),(R+24),4);
}
B4ed0ca:{NFSU2_TR(0x4ed0ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ed0cb:{NFSU2_TR(0x4ed0cb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ed0d0:L4ed0d0:{c.instructions+=13;NFSU2_TR(0x4ed0d0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed0d2:{NFSU2_TR(0x4ed0d2);
u8 U[4];
w4(U+0,u32(0x77626eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed0d7:{NFSU2_TR(0x4ed0d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ed0dd:{NFSU2_TR(0x4ed0dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed0de:{NFSU2_TR(0x4ed0de);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ed0e5:{NFSU2_TR(0x4ed0e5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed0e6:{NFSU2_TR(0x4ed0e6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed0e7:{NFSU2_TR(0x4ed0e7);
__builtin_memmove((R+24),(R+4),4);
}
B4ed0e9:{NFSU2_TR(0x4ed0e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ed0ed:{NFSU2_TR(0x4ed0ed);
u8 U[4];
w4(U+0,u32(0x797de4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4ed0f3:{NFSU2_TR(0x4ed0f3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4ed0f6:{NFSU2_TR(0x4ed0f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ed0fe:{NFSU2_TR(0x4ed0fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed103ull));
TAIL_STATIC(0x4358e0u,435);
}
B4ed103:L4ed103:{c.instructions+=3;NFSU2_TR(0x4ed103);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4ed106:{NFSU2_TR(0x4ed106);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4ed10b:{NFSU2_TR(0x4ed10b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed110ull));
TAIL_STATIC(0x4358e0u,435);
}
B4ed110:L4ed110:{c.instructions+=3;NFSU2_TR(0x4ed110);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4ed113:{NFSU2_TR(0x4ed113);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4ed118:{NFSU2_TR(0x4ed118);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed11dull));
TAIL_STATIC(0x4358e0u,435);
}
B4ed11d:L4ed11d:{c.instructions+=3;NFSU2_TR(0x4ed11d);
__builtin_memmove((R+4),(R+24),4);
}
B4ed11f:{NFSU2_TR(0x4ed11f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ed127:{NFSU2_TR(0x4ed127);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed12cull));
TAIL_STATIC(0x510d40u,510);
}
B4ed12c:L4ed12c:{c.instructions+=5;NFSU2_TR(0x4ed12c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ed130:{NFSU2_TR(0x4ed130);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ed131:{NFSU2_TR(0x4ed131);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ed138:{NFSU2_TR(0x4ed138);
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
B4ed13b:{NFSU2_TR(0x4ed13b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ed140:L4ed140:{c.instructions+=8;NFSU2_TR(0x4ed140);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x18ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x18ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4ed143:{NFSU2_TR(0x4ed143);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed144:{NFSU2_TR(0x4ed144);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4ed148:{NFSU2_TR(0x4ed148);
__builtin_memmove((R+24),(R+4),4);
}
B4ed14a:{NFSU2_TR(0x4ed14a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed14b:{NFSU2_TR(0x4ed14b);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4ed14f:{NFSU2_TR(0x4ed14f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed150:{NFSU2_TR(0x4ed150);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed155ull));
TAIL_STATIC(0x50cd70u,50c);
}
B4ed155:L4ed155:{c.instructions+=5;NFSU2_TR(0x4ed155);
__builtin_memmove((R+0),gp(0x8763f0),1);
}
B4ed15a:{NFSU2_TR(0x4ed15a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4ed15d:{NFSU2_TR(0x4ed15d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ed15f:{NFSU2_TR(0x4ed15f);
w4(R+0,u32(m1(0x8763f2)));
}
B4ed166:{NFSU2_TR(0x4ed166);
if(r1(R+518)){{goto L4ed16f;}}
}
B4ed168:L4ed168:{c.instructions+=1;NFSU2_TR(0x4ed168);
w4(R+0,u32(m1(0x8763f5)));
}
B4ed16f:L4ed16f:{c.instructions+=2;NFSU2_TR(0x4ed16f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ed171:{NFSU2_TR(0x4ed171);
if(r1(R+518)){{goto L4ed270;}}
}
B4ed177:L4ed177:{c.instructions+=3;NFSU2_TR(0x4ed177);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ed17a:{NFSU2_TR(0x4ed17a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ed17c:{NFSU2_TR(0x4ed17c);
if(r1(R+518)){{goto L4ed210;}}
}
B4ed182:L4ed182:{c.instructions+=3;NFSU2_TR(0x4ed182);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4ed185:{NFSU2_TR(0x4ed185);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ed187:{NFSU2_TR(0x4ed187);
if(r1(R+518)){{goto L4ed210;}}
}
B4ed18d:L4ed18d:{c.instructions+=17;NFSU2_TR(0x4ed18d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ed190:{NFSU2_TR(0x4ed190);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ed194:{NFSU2_TR(0x4ed194);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ed197:{NFSU2_TR(0x4ed197);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ed19b:{NFSU2_TR(0x4ed19b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ed19e:{NFSU2_TR(0x4ed19e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ed1a2:{NFSU2_TR(0x4ed1a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ed1a5:{NFSU2_TR(0x4ed1a5);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4ed1a9:{NFSU2_TR(0x4ed1a9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed1aa:{NFSU2_TR(0x4ed1aa);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ed1ae:{NFSU2_TR(0x4ed1ae);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4ed1b2:{NFSU2_TR(0x4ed1b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ed1b6:{NFSU2_TR(0x4ed1b6);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ed1ba:{NFSU2_TR(0x4ed1ba);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed1bb:{NFSU2_TR(0x4ed1bb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed1bc:{NFSU2_TR(0x4ed1bc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed1bd:{NFSU2_TR(0x4ed1bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed1c2ull));
TAIL_STATIC(0x50cd00u,50c);
}
B4ed1c2:L4ed1c2:{c.instructions+=3;NFSU2_TR(0x4ed1c2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4ed1c5:{NFSU2_TR(0x4ed1c5);
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
B4ed1c7:{NFSU2_TR(0x4ed1c7);
if(r1(R+518)){{goto L4ed210;}}
}
B4ed1c9:L4ed1c9:{c.instructions+=7;NFSU2_TR(0x4ed1c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ed1cc:{NFSU2_TR(0x4ed1cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ed1cf:{NFSU2_TR(0x4ed1cf);
u8 U[4];
w4(U+0,u32(0xc407210ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed1d4:{NFSU2_TR(0x4ed1d4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4ed1db:{NFSU2_TR(0x4ed1db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4ed1dd:{NFSU2_TR(0x4ed1dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed1de:{NFSU2_TR(0x4ed1de);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed1e1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ed1e1:L4ed1e1:{c.instructions+=4;NFSU2_TR(0x4ed1e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ed1e4:{NFSU2_TR(0x4ed1e4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed1e6:{NFSU2_TR(0x4ed1e6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed1e7:{NFSU2_TR(0x4ed1e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed1ecull));
TAIL_STATIC(0x537950u,537);
}
B4ed1ec:L4ed1ec:{c.instructions+=3;NFSU2_TR(0x4ed1ec);
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
B4ed1ef:{NFSU2_TR(0x4ed1ef);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed1f1:{NFSU2_TR(0x4ed1f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed1f6ull));
TAIL_STATIC(0x50cea0u,50c);
}
B4ed1f6:L4ed1f6:{c.instructions+=2;NFSU2_TR(0x4ed1f6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed1f7:{NFSU2_TR(0x4ed1f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed1fcull));
TAIL_STATIC(0x537950u,537);
}
B4ed1fc:L4ed1fc:{c.instructions+=4;NFSU2_TR(0x4ed1fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ed202:{NFSU2_TR(0x4ed202);
u8 U[4];
w4(U+0,u32(0x23cf49aaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed207:{NFSU2_TR(0x4ed207);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed208:{NFSU2_TR(0x4ed208);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed20dull));
TAIL_STATIC(0x50c900u,50c);
}
B4ed20d:L4ed20d:{c.instructions+=1;NFSU2_TR(0x4ed20d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4ed210:L4ed210:{c.instructions+=7;NFSU2_TR(0x4ed210);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ed216:{NFSU2_TR(0x4ed216);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ed21a:{NFSU2_TR(0x4ed21a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ed21e:{NFSU2_TR(0x4ed21e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed21f:{NFSU2_TR(0x4ed21f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed220:{NFSU2_TR(0x4ed220);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed221:{NFSU2_TR(0x4ed221);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed226ull));
TAIL_STATIC(0x52d020u,52d);
}
B4ed226:L4ed226:{c.instructions+=3;NFSU2_TR(0x4ed226);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4ed229:{NFSU2_TR(0x4ed229);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ed22b:{NFSU2_TR(0x4ed22b);
if(r1(R+518)){{goto L4ed23e;}}
}
B4ed22d:L4ed22d:{c.instructions+=3;NFSU2_TR(0x4ed22d);
u8 U[4];
w4(U+0,u32(0x9120409eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed232:{NFSU2_TR(0x4ed232);
__builtin_memmove((R+4),(R+24),4);
}
B4ed234:{NFSU2_TR(0x4ed234);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed239ull));
TAIL_STATIC(0x4acaa0u,4ac);
}
B4ed239:L4ed239:{c.instructions+=3;NFSU2_TR(0x4ed239);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ed23a:{NFSU2_TR(0x4ed23a);
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
B4ed23d:{NFSU2_TR(0x4ed23d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ed23e:L4ed23e:{c.instructions+=7;NFSU2_TR(0x4ed23e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ed244:{NFSU2_TR(0x4ed244);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ed248:{NFSU2_TR(0x4ed248);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ed24c:{NFSU2_TR(0x4ed24c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed24d:{NFSU2_TR(0x4ed24d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed24e:{NFSU2_TR(0x4ed24e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed24f:{NFSU2_TR(0x4ed24f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed254ull));
TAIL_STATIC(0x52d020u,52d);
}
B4ed254:L4ed254:{c.instructions+=3;NFSU2_TR(0x4ed254);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4ed257:{NFSU2_TR(0x4ed257);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ed259:{NFSU2_TR(0x4ed259);
if(r1(R+518)){{goto L4ed37a;}}
}
B4ed25f:L4ed25f:{c.instructions+=3;NFSU2_TR(0x4ed25f);
u8 U[4];
w4(U+0,u32(0xb5971bf1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed264:{NFSU2_TR(0x4ed264);
__builtin_memmove((R+4),(R+24),4);
}
B4ed266:{NFSU2_TR(0x4ed266);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed26bull));
TAIL_STATIC(0x4acaa0u,4ac);
}
B4ed26b:L4ed26b:{c.instructions+=3;NFSU2_TR(0x4ed26b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ed26c:{NFSU2_TR(0x4ed26c);
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
B4ed26f:{NFSU2_TR(0x4ed26f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ed270:L4ed270:{c.instructions+=3;NFSU2_TR(0x4ed270);
__builtin_memmove((R+0),gp(0x8763e4),4);
}
B4ed275:{NFSU2_TR(0x4ed275);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ed277:{NFSU2_TR(0x4ed277);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ed286;}}
}
B4ed279:L4ed279:{c.instructions+=3;NFSU2_TR(0x4ed279);
__builtin_memmove((R+0),gp(0x8763e8),4);
}
B4ed27e:{NFSU2_TR(0x4ed27e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ed280:{NFSU2_TR(0x4ed280);
if(r1(R+518)){{goto L4ed37a;}}
}
B4ed286:L4ed286:{c.instructions+=6;NFSU2_TR(0x4ed286);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ed28a:{NFSU2_TR(0x4ed28a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ed28e:{NFSU2_TR(0x4ed28e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed28f:{NFSU2_TR(0x4ed28f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed290:{NFSU2_TR(0x4ed290);
__builtin_memmove((R+4),(R+24),4);
}
B4ed292:{NFSU2_TR(0x4ed292);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed297ull));
TAIL_STATIC(0x4cb6b0u,4cb);
}
B4ed297:L4ed297:{c.instructions+=2;NFSU2_TR(0x4ed297);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ed299:{NFSU2_TR(0x4ed299);
if(r1(R+518)){{goto L4ed2bc;}}
}
B4ed29b:L4ed29b:{c.instructions+=2;NFSU2_TR(0x4ed29b);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4ed29e:{NFSU2_TR(0x4ed29e);
if(r1(R+518)){{goto L4ed37a;}}
}
B4ed2a4:L4ed2a4:{c.instructions+=3;NFSU2_TR(0x4ed2a4);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4ed2a7:{NFSU2_TR(0x4ed2a7);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ed2a9:{NFSU2_TR(0x4ed2a9);
if(r1(R+518)){{goto L4ed37a;}}
}
B4ed2af:L4ed2af:{c.instructions+=3;NFSU2_TR(0x4ed2af);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed2b0:{NFSU2_TR(0x4ed2b0);
__builtin_memmove((R+4),(R+24),4);
}
B4ed2b2:{NFSU2_TR(0x4ed2b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed2b7ull));
TAIL_STATIC(0x4dec40u,4de);
}
B4ed2b7:L4ed2b7:{c.instructions+=3;NFSU2_TR(0x4ed2b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ed2b8:{NFSU2_TR(0x4ed2b8);
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
B4ed2bb:{NFSU2_TR(0x4ed2bb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ed2bc:L4ed2bc:{c.instructions+=7;NFSU2_TR(0x4ed2bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ed2bf:{NFSU2_TR(0x4ed2bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ed2c3:{NFSU2_TR(0x4ed2c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ed2c7:{NFSU2_TR(0x4ed2c7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed2c8:{NFSU2_TR(0x4ed2c8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed2c9:{NFSU2_TR(0x4ed2c9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed2ca:{NFSU2_TR(0x4ed2ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed2cfull));
TAIL_STATIC(0x52d020u,52d);
}
B4ed2cf:L4ed2cf:{c.instructions+=3;NFSU2_TR(0x4ed2cf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4ed2d2:{NFSU2_TR(0x4ed2d2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ed2d4:{NFSU2_TR(0x4ed2d4);
if(r1(R+518)){{goto L4ed2fe;}}
}
B4ed2d6:L4ed2d6:{c.instructions+=3;NFSU2_TR(0x4ed2d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ed2d9:{NFSU2_TR(0x4ed2d9);
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
B4ed2db:{NFSU2_TR(0x4ed2db);
if(r1(R+518)){{goto L4ed2e9;}}
}
B4ed2dd:L4ed2dd:{c.instructions+=2;NFSU2_TR(0x4ed2dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4ed2df:{NFSU2_TR(0x4ed2df);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed2e2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ed2e2:L4ed2e2:{c.instructions+=1;NFSU2_TR(0x4ed2e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ed2e9:L4ed2e9:{c.instructions+=5;NFSU2_TR(0x4ed2e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ed2ec:{NFSU2_TR(0x4ed2ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ed2ef:{NFSU2_TR(0x4ed2ef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed2f0:{NFSU2_TR(0x4ed2f0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed2f1:{NFSU2_TR(0x4ed2f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed2f6ull));
TAIL_STATIC(0x52cec0u,52c);
}
B4ed2f6:L4ed2f6:{c.instructions+=4;NFSU2_TR(0x4ed2f6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4ed2f9:{NFSU2_TR(0x4ed2f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ed2fa:{NFSU2_TR(0x4ed2fa);
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
B4ed2fd:{NFSU2_TR(0x4ed2fd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ed2fe:L4ed2fe:{c.instructions+=7;NFSU2_TR(0x4ed2fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ed304:{NFSU2_TR(0x4ed304);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ed308:{NFSU2_TR(0x4ed308);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ed30c:{NFSU2_TR(0x4ed30c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed30d:{NFSU2_TR(0x4ed30d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed30e:{NFSU2_TR(0x4ed30e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed30f:{NFSU2_TR(0x4ed30f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed314ull));
TAIL_STATIC(0x52d020u,52d);
}
B4ed314:L4ed314:{c.instructions+=3;NFSU2_TR(0x4ed314);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4ed317:{NFSU2_TR(0x4ed317);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ed319:{NFSU2_TR(0x4ed319);
if(r1(R+518)){{goto L4ed37a;}}
}
B4ed31b:L4ed31b:{c.instructions+=3;NFSU2_TR(0x4ed31b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ed31e:{NFSU2_TR(0x4ed31e);
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
B4ed320:{NFSU2_TR(0x4ed320);
if(r1(R+518)){{goto L4ed34c;}}
}
B4ed322:L4ed322:{c.instructions+=2;NFSU2_TR(0x4ed322);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4ed324:{NFSU2_TR(0x4ed324);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed327ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ed327:L4ed327:{c.instructions+=4;NFSU2_TR(0x4ed327);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ed32a:{NFSU2_TR(0x4ed32a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed32b:{NFSU2_TR(0x4ed32b);
__builtin_memmove((R+4),(R+24),4);
}
B4ed32d:{NFSU2_TR(0x4ed32d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed332ull));
TAIL_STATIC(0x4cb970u,4cb);
}
B4ed332:L4ed332:{c.instructions+=3;NFSU2_TR(0x4ed332);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed333:{NFSU2_TR(0x4ed333);
__builtin_memmove((R+4),(R+24),4);
}
B4ed335:{NFSU2_TR(0x4ed335);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed33aull));
TAIL_STATIC(0x4cb660u,4cb);
}
B4ed33a:L4ed33a:{c.instructions+=2;NFSU2_TR(0x4ed33a);
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
B4ed33c:{NFSU2_TR(0x4ed33c);
if(r1(R+518)){{goto L4ed345;}}
}
B4ed33e:L4ed33e:{c.instructions+=3;NFSU2_TR(0x4ed33e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4ed340:{NFSU2_TR(0x4ed340);
__builtin_memmove((R+4),(R+0),4);
}
B4ed342:{NFSU2_TR(0x4ed342);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed345ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ed345:L4ed345:{c.instructions+=1;NFSU2_TR(0x4ed345);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ed34c:L4ed34c:{c.instructions+=4;NFSU2_TR(0x4ed34c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ed352:{NFSU2_TR(0x4ed352);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed357:{NFSU2_TR(0x4ed357);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed358:{NFSU2_TR(0x4ed358);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed35dull));
TAIL_STATIC(0x51d040u,51d);
}
B4ed35d:L4ed35d:{c.instructions+=3;NFSU2_TR(0x4ed35d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4ed360:{NFSU2_TR(0x4ed360);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ed362:{NFSU2_TR(0x4ed362);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ed37a;}}
}
B4ed364:L4ed364:{c.instructions+=5;NFSU2_TR(0x4ed364);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ed36a:{NFSU2_TR(0x4ed36a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed36c:{NFSU2_TR(0x4ed36c);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed371:{NFSU2_TR(0x4ed371);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed372:{NFSU2_TR(0x4ed372);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed377ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4ed377:L4ed377:{c.instructions+=1;NFSU2_TR(0x4ed377);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4ed37a:L4ed37a:{c.instructions+=3;NFSU2_TR(0x4ed37a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ed37b:{NFSU2_TR(0x4ed37b);
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
B4ed37e:{NFSU2_TR(0x4ed37e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ed380:L4ed380:{c.instructions+=8;NFSU2_TR(0x4ed380);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed381:{NFSU2_TR(0x4ed381);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed382:{NFSU2_TR(0x4ed382);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed383:{NFSU2_TR(0x4ed383);
__builtin_memmove((R+28),(R+4),4);
}
B4ed385:{NFSU2_TR(0x4ed385);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ed388:{NFSU2_TR(0x4ed388);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4ed38b:{NFSU2_TR(0x4ed38b);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B4ed38d:{NFSU2_TR(0x4ed38d);
if(r1(R+518)){{goto L4ed670;}}
}
B4ed393:L4ed393:{c.instructions+=3;NFSU2_TR(0x4ed393);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4ed399:{NFSU2_TR(0x4ed399);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ed39b:{NFSU2_TR(0x4ed39b);
if(r1(R+518)){{goto L4ed3a8;}}
}
B4ed39d:L4ed39d:{c.instructions+=1;NFSU2_TR(0x4ed39d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed3a2ull));
TAIL_STATIC(0x4dee90u,4de);
}
B4ed3a2:L4ed3a2:{c.instructions+=4;NFSU2_TR(0x4ed3a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ed3a3:{NFSU2_TR(0x4ed3a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4ed3a4:{NFSU2_TR(0x4ed3a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4ed3a5:{NFSU2_TR(0x4ed3a5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ed3a8:L4ed3a8:{c.instructions+=8;NFSU2_TR(0x4ed3a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ed3ab:{NFSU2_TR(0x4ed3ab);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed3ac:{NFSU2_TR(0x4ed3ac);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ed3b0:{NFSU2_TR(0x4ed3b0);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4ed3b5:{NFSU2_TR(0x4ed3b5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed3b6:{NFSU2_TR(0x4ed3b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4ed3b9:{NFSU2_TR(0x4ed3b9);
__builtin_memmove((R+4),(R+24),4);
}
B4ed3bb:{NFSU2_TR(0x4ed3bb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ed4e0;}}
}
B4ed3c1:L4ed3c1:{c.instructions+=2;NFSU2_TR(0x4ed3c1);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ed3c3:{NFSU2_TR(0x4ed3c3);
if(r1(R+518)){{goto L4ed3f2;}}
}
B4ed3c5:L4ed3c5:{c.instructions+=3;NFSU2_TR(0x4ed3c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ed3c8:{NFSU2_TR(0x4ed3c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ed3ca:{NFSU2_TR(0x4ed3ca);
if(r1(R+518)){{goto L4ed3d1;}}
}
B4ed3cc:L4ed3cc:{c.instructions+=2;NFSU2_TR(0x4ed3cc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B4ed3cf:{NFSU2_TR(0x4ed3cf);
{goto L4ed3d3;}
}
B4ed3d1:L4ed3d1:{c.instructions+=1;NFSU2_TR(0x4ed3d1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4ed3d3:L4ed3d3:{c.instructions+=2;NFSU2_TR(0x4ed3d3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ed3d5:{NFSU2_TR(0x4ed3d5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ed3f2;}}
}
B4ed3d7:L4ed3d7:{c.instructions+=3;NFSU2_TR(0x4ed3d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ed3da:{NFSU2_TR(0x4ed3da);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ed3dc:{NFSU2_TR(0x4ed3dc);
if(r1(R+518)){{goto L4ed3f2;}}
}
B4ed3de:L4ed3de:{c.instructions+=5;NFSU2_TR(0x4ed3de);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ed3e1:{NFSU2_TR(0x4ed3e1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed3e2:{NFSU2_TR(0x4ed3e2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed3e3:{NFSU2_TR(0x4ed3e3);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4ed3e5:{NFSU2_TR(0x4ed3e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed3eaull));
TAIL_STATIC(0x52cec0u,52c);
}
B4ed3ea:L4ed3ea:{c.instructions+=2;NFSU2_TR(0x4ed3ea);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4ed3ed:{NFSU2_TR(0x4ed3ed);
{goto L4ed5dd;}
}
B4ed3f2:L4ed3f2:{c.instructions+=3;NFSU2_TR(0x4ed3f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4ed3f5:{NFSU2_TR(0x4ed3f5);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ed3f7:{NFSU2_TR(0x4ed3f7);
if(r1(R+518)){{goto L4ed3fe;}}
}
B4ed3f9:L4ed3f9:{c.instructions+=2;NFSU2_TR(0x4ed3f9);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4ed3fc:{NFSU2_TR(0x4ed3fc);
{goto L4ed400;}
}
B4ed3fe:L4ed3fe:{c.instructions+=1;NFSU2_TR(0x4ed3fe);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4ed400:L4ed400:{c.instructions+=2;NFSU2_TR(0x4ed400);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ed402:{NFSU2_TR(0x4ed402);
if(r1(R+518)){{goto L4ed46a;}}
}
B4ed404:L4ed404:{c.instructions+=3;NFSU2_TR(0x4ed404);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ed407:{NFSU2_TR(0x4ed407);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ed409:{NFSU2_TR(0x4ed409);
if(r1(R+518)){{goto L4ed410;}}
}
B4ed40b:L4ed40b:{c.instructions+=2;NFSU2_TR(0x4ed40b);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4ed40e:{NFSU2_TR(0x4ed40e);
{goto L4ed412;}
}
B4ed410:L4ed410:{c.instructions+=1;NFSU2_TR(0x4ed410);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4ed412:L4ed412:{c.instructions+=2;NFSU2_TR(0x4ed412);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ed414:{NFSU2_TR(0x4ed414);
if(r1(R+518)){{goto L4ed46a;}}
}
B4ed416:L4ed416:{c.instructions+=3;NFSU2_TR(0x4ed416);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x134ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ed41c:{NFSU2_TR(0x4ed41c);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B4ed41d:{NFSU2_TR(0x4ed41d);
__builtin_memmove((R+4),(R+4),4);
}
B4ed420:L4ed420:{c.instructions+=3;NFSU2_TR(0x4ed420);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4ed423:{NFSU2_TR(0x4ed423);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ed425:{NFSU2_TR(0x4ed425);
if(r1(R+518)){{goto L4ed42c;}}
}
B4ed427:L4ed427:{c.instructions+=2;NFSU2_TR(0x4ed427);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
}
B4ed42a:{NFSU2_TR(0x4ed42a);
{goto L4ed42e;}
}
B4ed42c:L4ed42c:{c.instructions+=1;NFSU2_TR(0x4ed42c);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4ed42e:L4ed42e:{c.instructions+=4;NFSU2_TR(0x4ed42e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x138ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ed434:{NFSU2_TR(0x4ed434);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4ed435:{NFSU2_TR(0x4ed435);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4ed437:{NFSU2_TR(0x4ed437);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4ed43b;}}
}
B4ed439:L4ed439:{c.instructions+=1;NFSU2_TR(0x4ed439);
__builtin_memmove((R+0),(R+4),4);
}
B4ed43b:L4ed43b:{c.instructions+=3;NFSU2_TR(0x4ed43b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ed43d:{NFSU2_TR(0x4ed43d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x138ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ed443:{NFSU2_TR(0x4ed443);
if(r1(R+518)){{goto L4ed46a;}}
}
B4ed445:L4ed445:{c.instructions+=3;NFSU2_TR(0x4ed445);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4ed448:{NFSU2_TR(0x4ed448);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ed44a:{NFSU2_TR(0x4ed44a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ed4a3;}}
}
B4ed44c:L4ed44c:{c.instructions+=2;NFSU2_TR(0x4ed44c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ed44e:{NFSU2_TR(0x4ed44e);
if(r1(R+518)){{goto L4ed455;}}
}
B4ed450:L4ed450:{c.instructions+=2;NFSU2_TR(0x4ed450);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4ed453:{NFSU2_TR(0x4ed453);
{goto L4ed457;}
}
B4ed455:L4ed455:{c.instructions+=1;NFSU2_TR(0x4ed455);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4ed457:L4ed457:{c.instructions+=2;NFSU2_TR(0x4ed457);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ed459:{NFSU2_TR(0x4ed459);
if(r1(R+518)){{goto L4ed46a;}}
}
B4ed45b:L4ed45b:{c.instructions+=2;NFSU2_TR(0x4ed45b);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ed45d:{NFSU2_TR(0x4ed45d);
if(r1(R+518)){{goto L4ed464;}}
}
B4ed45f:L4ed45f:{c.instructions+=2;NFSU2_TR(0x4ed45f);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4ed462:{NFSU2_TR(0x4ed462);
{goto L4ed466;}
}
B4ed464:L4ed464:{c.instructions+=1;NFSU2_TR(0x4ed464);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4ed466:L4ed466:{c.instructions+=2;NFSU2_TR(0x4ed466);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ed468:{NFSU2_TR(0x4ed468);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ed420u);}goto L4ed420;}}
}
B4ed46a:L4ed46a:{c.instructions+=3;NFSU2_TR(0x4ed46a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4ed46d:{NFSU2_TR(0x4ed46d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ed46f:{NFSU2_TR(0x4ed46f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ed4a3;}}
}
B4ed471:L4ed471:{c.instructions+=3;NFSU2_TR(0x4ed471);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ed474:{NFSU2_TR(0x4ed474);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ed476:{NFSU2_TR(0x4ed476);
if(r1(R+518)){{goto L4ed47d;}}
}
B4ed478:L4ed478:{c.instructions+=2;NFSU2_TR(0x4ed478);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B4ed47b:{NFSU2_TR(0x4ed47b);
{goto L4ed47f;}
}
B4ed47d:L4ed47d:{c.instructions+=1;NFSU2_TR(0x4ed47d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4ed47f:L4ed47f:{c.instructions+=2;NFSU2_TR(0x4ed47f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ed481:{NFSU2_TR(0x4ed481);
if(r1(R+518)){{goto L4ed4a3;}}
}
B4ed483:L4ed483:{c.instructions+=3;NFSU2_TR(0x4ed483);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ed486:{NFSU2_TR(0x4ed486);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ed488:{NFSU2_TR(0x4ed488);
if(r1(R+518)){{goto L4ed48f;}}
}
B4ed48a:L4ed48a:{c.instructions+=2;NFSU2_TR(0x4ed48a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B4ed48d:{NFSU2_TR(0x4ed48d);
{goto L4ed491;}
}
B4ed48f:L4ed48f:{c.instructions+=1;NFSU2_TR(0x4ed48f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4ed491:L4ed491:{c.instructions+=2;NFSU2_TR(0x4ed491);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ed493:{NFSU2_TR(0x4ed493);
if(r1(R+518)){{goto L4ed4a3;}}
}
B4ed495:L4ed495:{c.instructions+=3;NFSU2_TR(0x4ed495);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4ed498:{NFSU2_TR(0x4ed498);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ed49a:{NFSU2_TR(0x4ed49a);
if(r1(R+518)){{goto L4ed4a1;}}
}
B4ed49c:L4ed49c:{c.instructions+=2;NFSU2_TR(0x4ed49c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
}
B4ed49f:{NFSU2_TR(0x4ed49f);
{goto L4ed4a3;}
}
B4ed4a1:L4ed4a1:{c.instructions+=1;NFSU2_TR(0x4ed4a1);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4ed4a3:L4ed4a3:{c.instructions+=4;NFSU2_TR(0x4ed4a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ed4a7:{NFSU2_TR(0x4ed4a7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed4a8:{NFSU2_TR(0x4ed4a8);
__builtin_memmove((R+4),(R+28),4);
}
B4ed4aa:{NFSU2_TR(0x4ed4aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed4afull));
TAIL_STATIC(0x4cb970u,4cb);
}
B4ed4af:L4ed4af:{c.instructions+=6;NFSU2_TR(0x4ed4af);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x13cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4ed4b5:{NFSU2_TR(0x4ed4b5);
__builtin_memmove((R+12),(R+0),4);
}
B4ed4b7:{NFSU2_TR(0x4ed4b7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed4b8:{NFSU2_TR(0x4ed4b8);
__builtin_memmove((R+4),(R+28),4);
}
B4ed4ba:{NFSU2_TR(0x4ed4ba);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+20))));
}
B4ed4bc:{NFSU2_TR(0x4ed4bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed4c1ull));
TAIL_STATIC(0x4cb970u,4cb);
}
B4ed4c1:L4ed4c1:{c.instructions+=2;NFSU2_TR(0x4ed4c1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B4ed4c3:{NFSU2_TR(0x4ed4c3);
if(r1(R+512)){{goto L4ed5dd;}}
}
B4ed4c9:L4ed4c9:{c.instructions+=4;NFSU2_TR(0x4ed4c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ed4cd:{NFSU2_TR(0x4ed4cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ed4d0:{NFSU2_TR(0x4ed4d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ed4d2:{NFSU2_TR(0x4ed4d2);
if(r1(R+518)){{goto L4ed5d8;}}
}
B4ed4d8:L4ed4d8:{c.instructions+=2;NFSU2_TR(0x4ed4d8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B4ed4db:{NFSU2_TR(0x4ed4db);
{goto L4ed5da;}
}
B4ed4e0:L4ed4e0:{c.instructions+=2;NFSU2_TR(0x4ed4e0);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ed4e2:{NFSU2_TR(0x4ed4e2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ed4fa;}}
}
B4ed4e4:L4ed4e4:{c.instructions+=3;NFSU2_TR(0x4ed4e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4ed4e7:{NFSU2_TR(0x4ed4e7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ed4e9:{NFSU2_TR(0x4ed4e9);
if(r1(R+518)){{goto L4ed4f3;}}
}
B4ed4eb:L4ed4eb:{c.instructions+=2;NFSU2_TR(0x4ed4eb);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
}
B4ed4ee:{NFSU2_TR(0x4ed4ee);
{goto L4ed5dd;}
}
B4ed4f3:L4ed4f3:{c.instructions+=2;NFSU2_TR(0x4ed4f3);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4ed4f5:{NFSU2_TR(0x4ed4f5);
{goto L4ed5dd;}
}
B4ed4fa:L4ed4fa:{c.instructions+=3;NFSU2_TR(0x4ed4fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+12),(U+0),4);
}
B4ed4fd:{NFSU2_TR(0x4ed4fd);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ed4ff:{NFSU2_TR(0x4ed4ff);
if(r1(R+518)){{goto L4ed506;}}
}
B4ed501:L4ed501:{c.instructions+=2;NFSU2_TR(0x4ed501);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4ed504:{NFSU2_TR(0x4ed504);
{goto L4ed508;}
}
B4ed506:L4ed506:{c.instructions+=1;NFSU2_TR(0x4ed506);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4ed508:L4ed508:{c.instructions+=2;NFSU2_TR(0x4ed508);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ed50a:{NFSU2_TR(0x4ed50a);
if(r1(R+518)){{goto L4ed56e;}}
}
B4ed50c:L4ed50c:{c.instructions+=3;NFSU2_TR(0x4ed50c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ed50f:{NFSU2_TR(0x4ed50f);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ed511:{NFSU2_TR(0x4ed511);
if(r1(R+518)){{goto L4ed518;}}
}
B4ed513:L4ed513:{c.instructions+=2;NFSU2_TR(0x4ed513);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4ed516:{NFSU2_TR(0x4ed516);
{goto L4ed51a;}
}
B4ed518:L4ed518:{c.instructions+=1;NFSU2_TR(0x4ed518);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4ed51a:L4ed51a:{c.instructions+=2;NFSU2_TR(0x4ed51a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ed51c:{NFSU2_TR(0x4ed51c);
if(r1(R+518)){{goto L4ed56e;}}
}
B4ed51e:L4ed51e:{c.instructions+=1;NFSU2_TR(0x4ed51e);
__builtin_memmove((R+28),(R+28),4);
}
B4ed520:L4ed520:{c.instructions+=3;NFSU2_TR(0x4ed520);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4ed523:{NFSU2_TR(0x4ed523);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ed525:{NFSU2_TR(0x4ed525);
if(r1(R+518)){{goto L4ed52c;}}
}
B4ed527:L4ed527:{c.instructions+=2;NFSU2_TR(0x4ed527);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
}
B4ed52a:{NFSU2_TR(0x4ed52a);
{goto L4ed52e;}
}
B4ed52c:L4ed52c:{c.instructions+=1;NFSU2_TR(0x4ed52c);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4ed52e:L4ed52e:{c.instructions+=4;NFSU2_TR(0x4ed52e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x138ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ed534:{NFSU2_TR(0x4ed534);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B4ed535:{NFSU2_TR(0x4ed535);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4ed538:{NFSU2_TR(0x4ed538);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4ed53f;}}
}
B4ed53a:L4ed53a:{c.instructions+=1;NFSU2_TR(0x4ed53a);
w4(R+0,u32(0x1ull));
}
B4ed53f:L4ed53f:{c.instructions+=3;NFSU2_TR(0x4ed53f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ed541:{NFSU2_TR(0x4ed541);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x138ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ed547:{NFSU2_TR(0x4ed547);
if(r1(R+518)){{goto L4ed56e;}}
}
B4ed549:L4ed549:{c.instructions+=3;NFSU2_TR(0x4ed549);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4ed54c:{NFSU2_TR(0x4ed54c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ed54e:{NFSU2_TR(0x4ed54e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ed5a7;}}
}
B4ed550:L4ed550:{c.instructions+=2;NFSU2_TR(0x4ed550);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ed552:{NFSU2_TR(0x4ed552);
if(r1(R+518)){{goto L4ed559;}}
}
B4ed554:L4ed554:{c.instructions+=2;NFSU2_TR(0x4ed554);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4ed557:{NFSU2_TR(0x4ed557);
{goto L4ed55b;}
}
B4ed559:L4ed559:{c.instructions+=1;NFSU2_TR(0x4ed559);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4ed55b:L4ed55b:{c.instructions+=2;NFSU2_TR(0x4ed55b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ed55d:{NFSU2_TR(0x4ed55d);
if(r1(R+518)){{goto L4ed56e;}}
}
B4ed55f:L4ed55f:{c.instructions+=2;NFSU2_TR(0x4ed55f);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ed561:{NFSU2_TR(0x4ed561);
if(r1(R+518)){{goto L4ed568;}}
}
B4ed563:L4ed563:{c.instructions+=2;NFSU2_TR(0x4ed563);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4ed566:{NFSU2_TR(0x4ed566);
{goto L4ed56a;}
}
B4ed568:L4ed568:{c.instructions+=1;NFSU2_TR(0x4ed568);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4ed56a:L4ed56a:{c.instructions+=2;NFSU2_TR(0x4ed56a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ed56c:{NFSU2_TR(0x4ed56c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ed520u);}goto L4ed520;}}
}
B4ed56e:L4ed56e:{c.instructions+=3;NFSU2_TR(0x4ed56e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4ed571:{NFSU2_TR(0x4ed571);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ed573:{NFSU2_TR(0x4ed573);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ed5a7;}}
}
B4ed575:L4ed575:{c.instructions+=3;NFSU2_TR(0x4ed575);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ed578:{NFSU2_TR(0x4ed578);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ed57a:{NFSU2_TR(0x4ed57a);
if(r1(R+518)){{goto L4ed581;}}
}
B4ed57c:L4ed57c:{c.instructions+=2;NFSU2_TR(0x4ed57c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B4ed57f:{NFSU2_TR(0x4ed57f);
{goto L4ed583;}
}
B4ed581:L4ed581:{c.instructions+=1;NFSU2_TR(0x4ed581);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4ed583:L4ed583:{c.instructions+=2;NFSU2_TR(0x4ed583);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ed585:{NFSU2_TR(0x4ed585);
if(r1(R+518)){{goto L4ed5a7;}}
}
B4ed587:L4ed587:{c.instructions+=3;NFSU2_TR(0x4ed587);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ed58a:{NFSU2_TR(0x4ed58a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ed58c:{NFSU2_TR(0x4ed58c);
if(r1(R+518)){{goto L4ed593;}}
}
B4ed58e:L4ed58e:{c.instructions+=2;NFSU2_TR(0x4ed58e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B4ed591:{NFSU2_TR(0x4ed591);
{goto L4ed595;}
}
B4ed593:L4ed593:{c.instructions+=1;NFSU2_TR(0x4ed593);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4ed595:L4ed595:{c.instructions+=2;NFSU2_TR(0x4ed595);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ed597:{NFSU2_TR(0x4ed597);
if(r1(R+518)){{goto L4ed5a7;}}
}
B4ed599:L4ed599:{c.instructions+=3;NFSU2_TR(0x4ed599);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4ed59c:{NFSU2_TR(0x4ed59c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ed59e:{NFSU2_TR(0x4ed59e);
if(r1(R+518)){{goto L4ed5a5;}}
}
B4ed5a0:L4ed5a0:{c.instructions+=2;NFSU2_TR(0x4ed5a0);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
}
B4ed5a3:{NFSU2_TR(0x4ed5a3);
{goto L4ed5a7;}
}
B4ed5a5:L4ed5a5:{c.instructions+=1;NFSU2_TR(0x4ed5a5);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4ed5a7:L4ed5a7:{c.instructions+=4;NFSU2_TR(0x4ed5a7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ed5ab:{NFSU2_TR(0x4ed5ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4ed5ae:{NFSU2_TR(0x4ed5ae);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ed5b0:{NFSU2_TR(0x4ed5b0);
if(r1(R+518)){{goto L4ed5b7;}}
}
B4ed5b2:L4ed5b2:{c.instructions+=2;NFSU2_TR(0x4ed5b2);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4ed5b5:{NFSU2_TR(0x4ed5b5);
{goto L4ed5b9;}
}
B4ed5b7:L4ed5b7:{c.instructions+=1;NFSU2_TR(0x4ed5b7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4ed5b9:L4ed5b9:{c.instructions+=3;NFSU2_TR(0x4ed5b9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed5ba:{NFSU2_TR(0x4ed5ba);
__builtin_memmove((R+4),(R+28),4);
}
B4ed5bc:{NFSU2_TR(0x4ed5bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed5c1ull));
TAIL_STATIC(0x4cb970u,4cb);
}
B4ed5c1:L4ed5c1:{c.instructions+=4;NFSU2_TR(0x4ed5c1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed5c2:{NFSU2_TR(0x4ed5c2);
__builtin_memmove((R+4),(R+28),4);
}
B4ed5c4:{NFSU2_TR(0x4ed5c4);
__builtin_memmove((R+20),(R+0),4);
}
B4ed5c6:{NFSU2_TR(0x4ed5c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed5cbull));
TAIL_STATIC(0x4cb970u,4cb);
}
B4ed5cb:L4ed5cb:{c.instructions+=2;NFSU2_TR(0x4ed5cb);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ed5cd:{NFSU2_TR(0x4ed5cd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ed5dd;}}
}
B4ed5cf:L4ed5cf:{c.instructions+=2;NFSU2_TR(0x4ed5cf);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ed5d1:{NFSU2_TR(0x4ed5d1);
if(r1(R+518)){{goto L4ed5d8;}}
}
B4ed5d3:L4ed5d3:{c.instructions+=2;NFSU2_TR(0x4ed5d3);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4ed5d6:{NFSU2_TR(0x4ed5d6);
{goto L4ed5da;}
}
B4ed5d8:L4ed5d8:{c.instructions+=1;NFSU2_TR(0x4ed5d8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4ed5da:L4ed5da:{c.instructions+=1;NFSU2_TR(0x4ed5da);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ed5dd:L4ed5dd:{c.instructions+=3;NFSU2_TR(0x4ed5dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ed5e1:{NFSU2_TR(0x4ed5e1);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4ed5e4:{NFSU2_TR(0x4ed5e4);
if(r1(R+518)){{goto L4ed5ed;}}
}
B4ed5e6:L4ed5e6:{c.instructions+=2;NFSU2_TR(0x4ed5e6);
__builtin_memmove((R+4),(R+28),4);
}
B4ed5e8:{NFSU2_TR(0x4ed5e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed5edull));
TAIL_STATIC(0x4decd0u,4de);
}
B4ed5ed:L4ed5ed:{c.instructions+=3;NFSU2_TR(0x4ed5ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ed5f0:{NFSU2_TR(0x4ed5f0);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B4ed5f2:{NFSU2_TR(0x4ed5f2);
if(r1(R+518)){{goto L4ed66e;}}
}
B4ed5f4:L4ed5f4:{c.instructions+=2;NFSU2_TR(0x4ed5f4);
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
B4ed5f6:{NFSU2_TR(0x4ed5f6);
if(r1(R+518)){{goto L4ed61b;}}
}
B4ed5f8:L4ed5f8:{c.instructions+=2;NFSU2_TR(0x4ed5f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ed5fa:{NFSU2_TR(0x4ed5fa);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed5fdull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ed5fd:L4ed5fd:{c.instructions+=4;NFSU2_TR(0x4ed5fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ed600:{NFSU2_TR(0x4ed600);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed601:{NFSU2_TR(0x4ed601);
__builtin_memmove((R+4),(R+28),4);
}
B4ed603:{NFSU2_TR(0x4ed603);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed608ull));
TAIL_STATIC(0x4cb970u,4cb);
}
B4ed608:L4ed608:{c.instructions+=3;NFSU2_TR(0x4ed608);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed609:{NFSU2_TR(0x4ed609);
__builtin_memmove((R+4),(R+28),4);
}
B4ed60b:{NFSU2_TR(0x4ed60b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed610ull));
TAIL_STATIC(0x4cb660u,4cb);
}
B4ed610:L4ed610:{c.instructions+=2;NFSU2_TR(0x4ed610);
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
B4ed612:{NFSU2_TR(0x4ed612);
if(r1(R+518)){{goto L4ed61b;}}
}
B4ed614:L4ed614:{c.instructions+=3;NFSU2_TR(0x4ed614);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4ed616:{NFSU2_TR(0x4ed616);
__builtin_memmove((R+4),(R+0),4);
}
B4ed618:{NFSU2_TR(0x4ed618);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed61bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ed61b:L4ed61b:{c.instructions+=2;NFSU2_TR(0x4ed61b);
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
B4ed61d:{NFSU2_TR(0x4ed61d);
if(r1(R+518)){{goto L4ed649;}}
}
B4ed61f:L4ed61f:{c.instructions+=5;NFSU2_TR(0x4ed61f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ed622:{NFSU2_TR(0x4ed622);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ed624:{NFSU2_TR(0x4ed624);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed625:{NFSU2_TR(0x4ed625);
__builtin_memmove((R+4),(R+24),4);
}
B4ed627:{NFSU2_TR(0x4ed627);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed62aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ed62a:L4ed62a:{c.instructions+=3;NFSU2_TR(0x4ed62a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed62b:{NFSU2_TR(0x4ed62b);
__builtin_memmove((R+4),(R+28),4);
}
B4ed62d:{NFSU2_TR(0x4ed62d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed632ull));
TAIL_STATIC(0x4cb970u,4cb);
}
B4ed632:L4ed632:{c.instructions+=3;NFSU2_TR(0x4ed632);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed633:{NFSU2_TR(0x4ed633);
__builtin_memmove((R+4),(R+28),4);
}
B4ed635:{NFSU2_TR(0x4ed635);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed63aull));
TAIL_STATIC(0x4cb660u,4cb);
}
B4ed63a:L4ed63a:{c.instructions+=2;NFSU2_TR(0x4ed63a);
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
B4ed63c:{NFSU2_TR(0x4ed63c);
if(r1(R+518)){{goto L4ed649;}}
}
B4ed63e:L4ed63e:{c.instructions+=5;NFSU2_TR(0x4ed63e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ed641:{NFSU2_TR(0x4ed641);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4ed643:{NFSU2_TR(0x4ed643);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed644:{NFSU2_TR(0x4ed644);
__builtin_memmove((R+4),(R+0),4);
}
B4ed646:{NFSU2_TR(0x4ed646);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed649ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ed649:L4ed649:{c.instructions+=3;NFSU2_TR(0x4ed649);
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
B4ed64b:{NFSU2_TR(0x4ed64b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ed64e:{NFSU2_TR(0x4ed64e);
if(r1(R+518)){{goto L4ed66e;}}
}
B4ed650:L4ed650:{c.instructions+=3;NFSU2_TR(0x4ed650);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed651:{NFSU2_TR(0x4ed651);
__builtin_memmove((R+4),(R+28),4);
}
B4ed653:{NFSU2_TR(0x4ed653);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed658ull));
TAIL_STATIC(0x4cb970u,4cb);
}
B4ed658:L4ed658:{c.instructions+=7;NFSU2_TR(0x4ed658);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x134ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ed65e:{NFSU2_TR(0x4ed65e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed65f:{NFSU2_TR(0x4ed65f);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B4ed660:{NFSU2_TR(0x4ed660);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed661:{NFSU2_TR(0x4ed661);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed663:{NFSU2_TR(0x4ed663);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4ed669:{NFSU2_TR(0x4ed669);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed66eull));
TAIL_STATIC(0x538080u,538);
}
B4ed66e:L4ed66e:{c.instructions+=2;NFSU2_TR(0x4ed66e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ed66f:{NFSU2_TR(0x4ed66f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4ed670:L4ed670:{c.instructions+=4;NFSU2_TR(0x4ed670);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ed671:{NFSU2_TR(0x4ed671);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4ed672:{NFSU2_TR(0x4ed672);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4ed673:{NFSU2_TR(0x4ed673);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ed680:L4ed680:{c.instructions+=3;NFSU2_TR(0x4ed680);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed681:{NFSU2_TR(0x4ed681);
__builtin_memmove((R+24),(R+4),4);
}
B4ed683:{NFSU2_TR(0x4ed683);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed688ull));
{goto L4ed6a0;}
}
B4ed688:L4ed688:{c.instructions+=2;NFSU2_TR(0x4ed688);
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
B4ed68d:{NFSU2_TR(0x4ed68d);
if(r1(R+518)){{goto L4ed698;}}
}
B4ed68f:L4ed68f:{c.instructions+=2;NFSU2_TR(0x4ed68f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed690:{NFSU2_TR(0x4ed690);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed695ull));
TAIL_STATIC(0x575630u,575);
}
B4ed695:L4ed695:{c.instructions+=1;NFSU2_TR(0x4ed695);
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
B4ed698:L4ed698:{c.instructions+=3;NFSU2_TR(0x4ed698);
__builtin_memmove((R+0),(R+24),4);
}
B4ed69a:{NFSU2_TR(0x4ed69a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ed69b:{NFSU2_TR(0x4ed69b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ed6a0:L4ed6a0:{c.instructions+=2;NFSU2_TR(0x4ed6a0);
u8 U[4];
w4(U+0,u32(0x797df4ull));
s4(u32(r4(R+4)),r4(U+0));
}
B4ed6a6:{NFSU2_TR(0x4ed6a6);
TAIL_STATIC(0x4e8bf0u,4e8);
}
B4ed6b0:L4ed6b0:{c.instructions+=8;NFSU2_TR(0x4ed6b0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed6b2:{NFSU2_TR(0x4ed6b2);
u8 U[4];
w4(U+0,u32(0x776294ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed6b7:{NFSU2_TR(0x4ed6b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ed6bd:{NFSU2_TR(0x4ed6bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed6be:{NFSU2_TR(0x4ed6be);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ed6c5:{NFSU2_TR(0x4ed6c5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed6c6:{NFSU2_TR(0x4ed6c6);
u8 U[4];
w4(U+0,u32(0x150ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed6cb:{NFSU2_TR(0x4ed6cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed6d0ull));
TAIL_STATIC(0x575620u,575);
}
B4ed6d0:L4ed6d0:{c.instructions+=5;NFSU2_TR(0x4ed6d0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ed6d3:{NFSU2_TR(0x4ed6d3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4ed6d7:{NFSU2_TR(0x4ed6d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ed6d9:{NFSU2_TR(0x4ed6d9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ed6e1:{NFSU2_TR(0x4ed6e1);
if(r1(R+518)){{goto L4ed6fe;}}
}
B4ed6e3:L4ed6e3:{c.instructions+=4;NFSU2_TR(0x4ed6e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ed6e7:{NFSU2_TR(0x4ed6e7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed6e8:{NFSU2_TR(0x4ed6e8);
__builtin_memmove((R+4),(R+0),4);
}
B4ed6ea:{NFSU2_TR(0x4ed6ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed6efull));
TAIL_STATIC(0x4df140u,4df);
}
B4ed6ef:L4ed6ef:{c.instructions+=4;NFSU2_TR(0x4ed6ef);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ed6f3:{NFSU2_TR(0x4ed6f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ed6fa:{NFSU2_TR(0x4ed6fa);
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
B4ed6fd:{NFSU2_TR(0x4ed6fd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ed6fe:L4ed6fe:{c.instructions+=5;NFSU2_TR(0x4ed6fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ed702:{NFSU2_TR(0x4ed702);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4ed704:{NFSU2_TR(0x4ed704);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ed70b:{NFSU2_TR(0x4ed70b);
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
B4ed70e:{NFSU2_TR(0x4ed70e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ed710:L4ed710:{c.instructions+=9;NFSU2_TR(0x4ed710);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed712:{NFSU2_TR(0x4ed712);
u8 U[4];
w4(U+0,u32(0x7762b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed717:{NFSU2_TR(0x4ed717);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ed71d:{NFSU2_TR(0x4ed71d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed71e:{NFSU2_TR(0x4ed71e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ed725:{NFSU2_TR(0x4ed725);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed726:{NFSU2_TR(0x4ed726);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed727:{NFSU2_TR(0x4ed727);
u8 U[4];
w4(U+0,u32(0x154ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed72c:{NFSU2_TR(0x4ed72c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed731ull));
TAIL_STATIC(0x575620u,575);
}
B4ed731:L4ed731:{c.instructions+=6;NFSU2_TR(0x4ed731);
__builtin_memmove((R+24),(R+0),4);
}
B4ed733:{NFSU2_TR(0x4ed733);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ed736:{NFSU2_TR(0x4ed736);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ed73a:{NFSU2_TR(0x4ed73a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ed73c:{NFSU2_TR(0x4ed73c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ed744:{NFSU2_TR(0x4ed744);
if(r1(R+518)){{goto L4ed75a;}}
}
B4ed746:L4ed746:{c.instructions+=4;NFSU2_TR(0x4ed746);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ed74a:{NFSU2_TR(0x4ed74a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed74b:{NFSU2_TR(0x4ed74b);
__builtin_memmove((R+4),(R+24),4);
}
B4ed74d:{NFSU2_TR(0x4ed74d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed752ull));
TAIL_STATIC(0x552330u,552);
}
B4ed752:L4ed752:{c.instructions+=2;NFSU2_TR(0x4ed752);
u8 U[4];
w4(U+0,u32(0x79752cull));
s4(u32(r4(R+24)),r4(U+0));
}
B4ed758:{NFSU2_TR(0x4ed758);
{goto L4ed75c;}
}
B4ed75a:L4ed75a:{c.instructions+=1;NFSU2_TR(0x4ed75a);
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
B4ed75c:L4ed75c:{c.instructions+=4;NFSU2_TR(0x4ed75c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4ed75e:{NFSU2_TR(0x4ed75e);
__builtin_memmove((R+4),(R+24),4);
}
B4ed760:{NFSU2_TR(0x4ed760);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ed768:{NFSU2_TR(0x4ed768);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed76bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ed76b:L4ed76b:{c.instructions+=6;NFSU2_TR(0x4ed76b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ed76f:{NFSU2_TR(0x4ed76f);
__builtin_memmove((R+0),(R+24),4);
}
B4ed771:{NFSU2_TR(0x4ed771);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ed772:{NFSU2_TR(0x4ed772);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ed779:{NFSU2_TR(0x4ed779);
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
B4ed77c:{NFSU2_TR(0x4ed77c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ed780:L4ed780:{c.instructions+=8;NFSU2_TR(0x4ed780);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed782:{NFSU2_TR(0x4ed782);
u8 U[4];
w4(U+0,u32(0x7762d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed787:{NFSU2_TR(0x4ed787);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ed78d:{NFSU2_TR(0x4ed78d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed78e:{NFSU2_TR(0x4ed78e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ed795:{NFSU2_TR(0x4ed795);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed796:{NFSU2_TR(0x4ed796);
u8 U[4];
w4(U+0,u32(0x150ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed79b:{NFSU2_TR(0x4ed79b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed7a0ull));
TAIL_STATIC(0x575620u,575);
}
B4ed7a0:L4ed7a0:{c.instructions+=5;NFSU2_TR(0x4ed7a0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ed7a3:{NFSU2_TR(0x4ed7a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4ed7a7:{NFSU2_TR(0x4ed7a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ed7a9:{NFSU2_TR(0x4ed7a9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ed7b1:{NFSU2_TR(0x4ed7b1);
if(r1(R+518)){{goto L4ed7ce;}}
}
B4ed7b3:L4ed7b3:{c.instructions+=4;NFSU2_TR(0x4ed7b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ed7b7:{NFSU2_TR(0x4ed7b7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed7b8:{NFSU2_TR(0x4ed7b8);
__builtin_memmove((R+4),(R+0),4);
}
B4ed7ba:{NFSU2_TR(0x4ed7ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed7bfull));
TAIL_STATIC(0x4df3a0u,4df);
}
B4ed7bf:L4ed7bf:{c.instructions+=4;NFSU2_TR(0x4ed7bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ed7c3:{NFSU2_TR(0x4ed7c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ed7ca:{NFSU2_TR(0x4ed7ca);
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
B4ed7cd:{NFSU2_TR(0x4ed7cd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ed7ce:L4ed7ce:{c.instructions+=5;NFSU2_TR(0x4ed7ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ed7d2:{NFSU2_TR(0x4ed7d2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4ed7d4:{NFSU2_TR(0x4ed7d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ed7db:{NFSU2_TR(0x4ed7db);
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
B4ed7de:{NFSU2_TR(0x4ed7de);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ed7e0:L4ed7e0:{c.instructions+=8;NFSU2_TR(0x4ed7e0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed7e2:{NFSU2_TR(0x4ed7e2);
u8 U[4];
w4(U+0,u32(0x7762f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed7e7:{NFSU2_TR(0x4ed7e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ed7ed:{NFSU2_TR(0x4ed7ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed7ee:{NFSU2_TR(0x4ed7ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ed7f5:{NFSU2_TR(0x4ed7f5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed7f6:{NFSU2_TR(0x4ed7f6);
u8 U[4];
w4(U+0,u32(0x150ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed7fb:{NFSU2_TR(0x4ed7fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed800ull));
TAIL_STATIC(0x575620u,575);
}
B4ed800:L4ed800:{c.instructions+=5;NFSU2_TR(0x4ed800);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ed803:{NFSU2_TR(0x4ed803);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4ed807:{NFSU2_TR(0x4ed807);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ed809:{NFSU2_TR(0x4ed809);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ed811:{NFSU2_TR(0x4ed811);
if(r1(R+518)){{goto L4ed82e;}}
}
B4ed813:L4ed813:{c.instructions+=4;NFSU2_TR(0x4ed813);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ed817:{NFSU2_TR(0x4ed817);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed818:{NFSU2_TR(0x4ed818);
__builtin_memmove((R+4),(R+0),4);
}
B4ed81a:{NFSU2_TR(0x4ed81a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed81full));
TAIL_STATIC(0x4df570u,4df);
}
B4ed81f:L4ed81f:{c.instructions+=4;NFSU2_TR(0x4ed81f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ed823:{NFSU2_TR(0x4ed823);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ed82a:{NFSU2_TR(0x4ed82a);
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
B4ed82d:{NFSU2_TR(0x4ed82d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ed82e:L4ed82e:{c.instructions+=5;NFSU2_TR(0x4ed82e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ed832:{NFSU2_TR(0x4ed832);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4ed834:{NFSU2_TR(0x4ed834);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ed83b:{NFSU2_TR(0x4ed83b);
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
B4ed83e:{NFSU2_TR(0x4ed83e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ed840:L4ed840:{c.instructions+=8;NFSU2_TR(0x4ed840);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed842:{NFSU2_TR(0x4ed842);
u8 U[4];
w4(U+0,u32(0x776314ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed847:{NFSU2_TR(0x4ed847);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ed84d:{NFSU2_TR(0x4ed84d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed84e:{NFSU2_TR(0x4ed84e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ed855:{NFSU2_TR(0x4ed855);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed856:{NFSU2_TR(0x4ed856);
u8 U[4];
w4(U+0,u32(0x204ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed85b:{NFSU2_TR(0x4ed85b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed860ull));
TAIL_STATIC(0x575620u,575);
}
B4ed860:L4ed860:{c.instructions+=5;NFSU2_TR(0x4ed860);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ed863:{NFSU2_TR(0x4ed863);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4ed867:{NFSU2_TR(0x4ed867);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ed869:{NFSU2_TR(0x4ed869);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ed871:{NFSU2_TR(0x4ed871);
if(r1(R+518)){{goto L4ed88e;}}
}
B4ed873:L4ed873:{c.instructions+=4;NFSU2_TR(0x4ed873);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ed877:{NFSU2_TR(0x4ed877);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed878:{NFSU2_TR(0x4ed878);
__builtin_memmove((R+4),(R+0),4);
}
B4ed87a:{NFSU2_TR(0x4ed87a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed87full));
TAIL_STATIC(0x4df6f0u,4df);
}
B4ed87f:L4ed87f:{c.instructions+=4;NFSU2_TR(0x4ed87f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ed883:{NFSU2_TR(0x4ed883);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ed88a:{NFSU2_TR(0x4ed88a);
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
B4ed88d:{NFSU2_TR(0x4ed88d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ed88e:L4ed88e:{c.instructions+=5;NFSU2_TR(0x4ed88e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ed892:{NFSU2_TR(0x4ed892);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4ed894:{NFSU2_TR(0x4ed894);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ed89b:{NFSU2_TR(0x4ed89b);
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
B4ed89e:{NFSU2_TR(0x4ed89e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ed8a0:L4ed8a0:{c.instructions+=7;NFSU2_TR(0x4ed8a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ed8a4:{NFSU2_TR(0x4ed8a4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed8a5:{NFSU2_TR(0x4ed8a5);
__builtin_memmove((R+24),(R+4),4);
}
B4ed8a7:{NFSU2_TR(0x4ed8a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ed8aa:{NFSU2_TR(0x4ed8aa);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B4ed8ab:{NFSU2_TR(0x4ed8ab);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x5ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x5ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4ed8ae:{NFSU2_TR(0x4ed8ae);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4ed982;}}
}
B4ed8b4:L4ed8b4:{c.instructions+=1;NFSU2_TR(0x4ed8b4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4ed988ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ed8bb:L4ed8bb:{c.instructions+=3;NFSU2_TR(0x4ed8bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4ed8be:{NFSU2_TR(0x4ed8be);
u8 U[4];
w4(U+0,u32(0x797e68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed8c3:{NFSU2_TR(0x4ed8c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed8c8ull));
TAIL_STATIC(0x43db50u,43d);
}
B4ed8c8:L4ed8c8:{c.instructions+=3;NFSU2_TR(0x4ed8c8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed8c9:{NFSU2_TR(0x4ed8c9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed8ca:{NFSU2_TR(0x4ed8ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed8cfull));
TAIL_STATIC(0x5379c0u,537);
}
B4ed8cf:L4ed8cf:{c.instructions+=2;NFSU2_TR(0x4ed8cf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed8d0:{NFSU2_TR(0x4ed8d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed8d5ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4ed8d5:L4ed8d5:{c.instructions+=3;NFSU2_TR(0x4ed8d5);
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
B4ed8d8:{NFSU2_TR(0x4ed8d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ed8d9:{NFSU2_TR(0x4ed8d9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ed8dc:L4ed8dc:{c.instructions+=4;NFSU2_TR(0x4ed8dc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed8dd:{NFSU2_TR(0x4ed8dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4ed8e0:{NFSU2_TR(0x4ed8e0);
u8 U[4];
w4(U+0,u32(0x797e68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed8e5:{NFSU2_TR(0x4ed8e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed8eaull));
TAIL_STATIC(0x43db50u,43d);
}
B4ed8ea:L4ed8ea:{c.instructions+=3;NFSU2_TR(0x4ed8ea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed8eb:{NFSU2_TR(0x4ed8eb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed8ec:{NFSU2_TR(0x4ed8ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed8f1ull));
TAIL_STATIC(0x5379c0u,537);
}
B4ed8f1:L4ed8f1:{c.instructions+=2;NFSU2_TR(0x4ed8f1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed8f2:{NFSU2_TR(0x4ed8f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed8f7ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4ed8f7:L4ed8f7:{c.instructions+=3;NFSU2_TR(0x4ed8f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4ed8fa:{NFSU2_TR(0x4ed8fa);
u8 U[4];
w4(U+0,u32(0x8d0dafecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed8ff:{NFSU2_TR(0x4ed8ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed904ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4ed904:L4ed904:{c.instructions+=5;NFSU2_TR(0x4ed904);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4ed907:{NFSU2_TR(0x4ed907);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed908:{NFSU2_TR(0x4ed908);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed90d:{NFSU2_TR(0x4ed90d);
u8 U[4];
w4(U+0,u32(0x797e68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed912:{NFSU2_TR(0x4ed912);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed917ull));
TAIL_STATIC(0x43db50u,43d);
}
B4ed917:L4ed917:{c.instructions+=4;NFSU2_TR(0x4ed917);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ed91a:{NFSU2_TR(0x4ed91a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed91b:{NFSU2_TR(0x4ed91b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed91c:{NFSU2_TR(0x4ed91c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed921ull));
TAIL_STATIC(0x537b80u,537);
}
B4ed921:L4ed921:{c.instructions+=4;NFSU2_TR(0x4ed921);
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
B4ed924:{NFSU2_TR(0x4ed924);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ed925:{NFSU2_TR(0x4ed925);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ed926:{NFSU2_TR(0x4ed926);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ed929:L4ed929:{c.instructions+=2;NFSU2_TR(0x4ed929);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4ed92c:{NFSU2_TR(0x4ed92c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed931ull));
TAIL_STATIC(0x479100u,479);
}
B4ed931:L4ed931:{c.instructions+=3;NFSU2_TR(0x4ed931);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed933:{NFSU2_TR(0x4ed933);
__builtin_memmove((R+4),(R+24),4);
}
B4ed935:{NFSU2_TR(0x4ed935);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed93aull));
TAIL_STATIC(0x4df9c0u,4df);
}
B4ed93a:L4ed93a:{c.instructions+=2;NFSU2_TR(0x4ed93a);
__builtin_memmove((R+4),(R+24),4);
}
B4ed93c:{NFSU2_TR(0x4ed93c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed941ull));
TAIL_STATIC(0x4afe00u,4af);
}
B4ed941:L4ed941:{c.instructions+=2;NFSU2_TR(0x4ed941);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ed942:{NFSU2_TR(0x4ed942);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ed945:L4ed945:{c.instructions+=2;NFSU2_TR(0x4ed945);
w4(R+4,u32(0x83a9d0ull));
}
B4ed94a:{NFSU2_TR(0x4ed94a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed94full));
TAIL_STATIC(0x52a4c0u,52a);
}
B4ed94f:L4ed94f:{c.instructions+=2;NFSU2_TR(0x4ed94f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ed951:{NFSU2_TR(0x4ed951);
if(r1(R+518)){{goto L4ed971;}}
}
B4ed953:L4ed953:{c.instructions+=9;NFSU2_TR(0x4ed953);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4ed956:{NFSU2_TR(0x4ed956);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed958:{NFSU2_TR(0x4ed958);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed95a:{NFSU2_TR(0x4ed95a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed95c:{NFSU2_TR(0x4ed95c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed95e:{NFSU2_TR(0x4ed95e);
u8 U[4];
w4(U+0,u32(0x141ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed963:{NFSU2_TR(0x4ed963);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed964:{NFSU2_TR(0x4ed964);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed965:{NFSU2_TR(0x4ed965);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed96aull));
TAIL_STATIC(0x4a3100u,4a3);
}
B4ed96a:L4ed96a:{c.instructions+=3;NFSU2_TR(0x4ed96a);
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
B4ed96d:{NFSU2_TR(0x4ed96d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ed96e:{NFSU2_TR(0x4ed96e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ed971:L4ed971:{c.instructions+=4;NFSU2_TR(0x4ed971);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ed974:{NFSU2_TR(0x4ed974);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed975:{NFSU2_TR(0x4ed975);
u8 U[4];
w4(U+0,u32(0x9a3b571dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed97a:{NFSU2_TR(0x4ed97a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed97full));
TAIL_STATIC(0x55dda0u,55d);
}
B4ed97f:L4ed97f:{c.instructions+=1;NFSU2_TR(0x4ed97f);
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
B4ed982:L4ed982:{c.instructions+=2;NFSU2_TR(0x4ed982);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ed983:{NFSU2_TR(0x4ed983);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ed9a0:L4ed9a0:{c.instructions+=4;NFSU2_TR(0x4ed9a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed9a1:{NFSU2_TR(0x4ed9a1);
__builtin_memmove((R+24),(R+4),4);
}
B4ed9a3:{NFSU2_TR(0x4ed9a3);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
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
B4ed9a7:{NFSU2_TR(0x4ed9a7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ed9db;}}
}
B4ed9a9:L4ed9a9:{c.instructions+=4;NFSU2_TR(0x4ed9a9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed9aa:{NFSU2_TR(0x4ed9aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4ed9ad:{NFSU2_TR(0x4ed9ad);
u8 U[4];
w4(U+0,u32(0x797e68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed9b2:{NFSU2_TR(0x4ed9b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed9b7ull));
TAIL_STATIC(0x43db50u,43d);
}
B4ed9b7:L4ed9b7:{c.instructions+=3;NFSU2_TR(0x4ed9b7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed9b8:{NFSU2_TR(0x4ed9b8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed9b9:{NFSU2_TR(0x4ed9b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed9beull));
TAIL_STATIC(0x5379c0u,537);
}
B4ed9be:L4ed9be:{c.instructions+=2;NFSU2_TR(0x4ed9be);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed9bf:{NFSU2_TR(0x4ed9bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed9c4ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4ed9c4:L4ed9c4:{c.instructions+=5;NFSU2_TR(0x4ed9c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ed9c7:{NFSU2_TR(0x4ed9c7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4ed9ca:{NFSU2_TR(0x4ed9ca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed9cb:{NFSU2_TR(0x4ed9cb);
__builtin_memmove((R+4),(R+24),4);
}
B4ed9cd:{NFSU2_TR(0x4ed9cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed9d2ull));
TAIL_STATIC(0x495f00u,495);
}
B4ed9d2:L4ed9d2:{c.instructions+=3;NFSU2_TR(0x4ed9d2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed9d3:{NFSU2_TR(0x4ed9d3);
__builtin_memmove((R+4),(R+24),4);
}
B4ed9d5:{NFSU2_TR(0x4ed9d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed9daull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ed8a0u);}goto L4ed8a0;}
}
B4ed9da:L4ed9da:{c.instructions+=1;NFSU2_TR(0x4ed9da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ed9db:L4ed9db:{c.instructions+=2;NFSU2_TR(0x4ed9db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ed9dc:{NFSU2_TR(0x4ed9dc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ed9e0:L4ed9e0:{c.instructions+=8;NFSU2_TR(0x4ed9e0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed9e1:{NFSU2_TR(0x4ed9e1);
__builtin_memmove((R+20),(R+16),4);
}
B4ed9e3:{NFSU2_TR(0x4ed9e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ed9e6:{NFSU2_TR(0x4ed9e6);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x75d1e35eull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x75d1e35eull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ed9eb:{NFSU2_TR(0x4ed9eb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed9ec:{NFSU2_TR(0x4ed9ec);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ed9ed:{NFSU2_TR(0x4ed9ed);
__builtin_memmove((R+24),(R+4),4);
}
B4ed9ef:{NFSU2_TR(0x4ed9ef);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4ede00;}}
}
B4ed9f5:L4ed9f5:{c.instructions+=1;NFSU2_TR(0x4ed9f5);
if(r1(R+518)){{goto L4eddbc;}}
}
B4ed9fb:L4ed9fb:{c.instructions+=2;NFSU2_TR(0x4ed9fb);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x35f8620bull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x35f8620bull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4eda00:{NFSU2_TR(0x4eda00);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4edae9;}}
}
B4eda06:L4eda06:{c.instructions+=1;NFSU2_TR(0x4eda06);
if(r1(R+518)){{goto L4edacb;}}
}
B4eda0c:L4eda0c:{c.instructions+=2;NFSU2_TR(0x4eda0c);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x251bf83eull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x251bf83eull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4eda11:{NFSU2_TR(0x4eda11);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4edab1;}}
}
B4eda17:L4eda17:{c.instructions+=1;NFSU2_TR(0x4eda17);
if(r1(R+518)){{goto L4eda93;}}
}
B4eda19:L4eda19:{c.instructions+=2;NFSU2_TR(0x4eda19);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc407210ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4eda1e:{NFSU2_TR(0x4eda1e);
if(r1(R+518)){{goto L4edb2b;}}
}
B4eda24:L4eda24:{c.instructions+=2;NFSU2_TR(0x4eda24);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x2101dcc5ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x2101dcc5ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x2101dcc5ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4eda29:{NFSU2_TR(0x4eda29);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x4ee155u,4ee);}
}
B4eda2f:L4eda2f:{c.instructions+=4;NFSU2_TR(0x4eda2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4eda32:{NFSU2_TR(0x4eda32);
u8 U[4];
w4(U+0,u32(0x26f1f64cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eda37:{NFSU2_TR(0x4eda37);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eda38:{NFSU2_TR(0x4eda38);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eda3dull));
TAIL_STATIC(0x495520u,495);
}
B4eda3d:L4eda3d:{c.instructions+=4;NFSU2_TR(0x4eda3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4eda40:{NFSU2_TR(0x4eda40);
u8 U[4];
w4(U+0,u32(0xdf422345ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eda45:{NFSU2_TR(0x4eda45);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eda46:{NFSU2_TR(0x4eda46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eda4bull));
TAIL_STATIC(0x495520u,495);
}
B4eda4b:L4eda4b:{c.instructions+=6;NFSU2_TR(0x4eda4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4eda4e:{NFSU2_TR(0x4eda4e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eda50:{NFSU2_TR(0x4eda50);
u8 U[4];
w4(U+0,u32(0x78f758ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eda55:{NFSU2_TR(0x4eda55);
u8 U[4];
w4(U+0,u32(0x26f1f64cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eda5a:{NFSU2_TR(0x4eda5a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eda5b:{NFSU2_TR(0x4eda5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eda60ull));
TAIL_STATIC(0x537c00u,537);
}
B4eda60:L4eda60:{c.instructions+=6;NFSU2_TR(0x4eda60);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4eda63:{NFSU2_TR(0x4eda63);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eda65:{NFSU2_TR(0x4eda65);
u8 U[4];
w4(U+0,u32(0x790eb0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eda6a:{NFSU2_TR(0x4eda6a);
u8 U[4];
w4(U+0,u32(0xdf422345ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eda6f:{NFSU2_TR(0x4eda6f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eda70:{NFSU2_TR(0x4eda70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eda75ull));
TAIL_STATIC(0x537c00u,537);
}
B4eda75:L4eda75:{c.instructions+=6;NFSU2_TR(0x4eda75);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4eda78:{NFSU2_TR(0x4eda78);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eda7a:{NFSU2_TR(0x4eda7a);
u8 U[4];
w4(U+0,u32(0x79031cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eda7f:{NFSU2_TR(0x4eda7f);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eda84:{NFSU2_TR(0x4eda84);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eda85:{NFSU2_TR(0x4eda85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eda8aull));
TAIL_STATIC(0x537c00u,537);
}
B4eda8a:L4eda8a:{c.instructions+=5;NFSU2_TR(0x4eda8a);
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
B4eda8d:{NFSU2_TR(0x4eda8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4eda8e:{NFSU2_TR(0x4eda8e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4eda8f:{NFSU2_TR(0x4eda8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4eda90:{NFSU2_TR(0x4eda90);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4eda93:L4eda93:{c.instructions+=6;NFSU2_TR(0x4eda93);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4eda96:{NFSU2_TR(0x4eda96);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eda98:{NFSU2_TR(0x4eda98);
u8 U[4];
w4(U+0,u32(0x79031cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eda9d:{NFSU2_TR(0x4eda9d);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edaa2:{NFSU2_TR(0x4edaa2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edaa3:{NFSU2_TR(0x4edaa3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4edaa8ull));
TAIL_STATIC(0x537c00u,537);
}
B4edaa8:L4edaa8:{c.instructions+=5;NFSU2_TR(0x4edaa8);
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
B4edaab:{NFSU2_TR(0x4edaab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4edaac:{NFSU2_TR(0x4edaac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4edaad:{NFSU2_TR(0x4edaad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4edaae:{NFSU2_TR(0x4edaae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4edab1:L4edab1:{c.instructions+=2;NFSU2_TR(0x4edab1);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x34dc1bcfull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4edab6:{NFSU2_TR(0x4edab6);
if(r1(R+518)){TAIL_STATIC(0x4ee130u,4ee);}
}
B4edabc:L4edabc:{c.instructions+=2;NFSU2_TR(0x4edabc);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x1dull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1dull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1dull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4edabf:{NFSU2_TR(0x4edabf);
if(r1(R+518)){TAIL_STATIC(0x4ee130u,4ee);}
}
B4edac5:L4edac5:{c.instructions+=4;NFSU2_TR(0x4edac5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4edac6:{NFSU2_TR(0x4edac6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4edac7:{NFSU2_TR(0x4edac7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4edac8:{NFSU2_TR(0x4edac8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4edacb:L4edacb:{c.instructions+=3;NFSU2_TR(0x4edacb);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edacd:{NFSU2_TR(0x4edacd);
w4(R+4,u32(0x8635bcull));
}
B4edad2:{NFSU2_TR(0x4edad2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4edad7ull));
TAIL_STATIC(0x5243d0u,524);
}
B4edad7:L4edad7:{c.instructions+=3;NFSU2_TR(0x4edad7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edad9:{NFSU2_TR(0x4edad9);
w4(R+4,u32(0x83a9d0ull));
}
B4edade:{NFSU2_TR(0x4edade);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4edae3ull));
TAIL_STATIC(0x52a460u,52a);
}
B4edae3:L4edae3:{c.instructions+=4;NFSU2_TR(0x4edae3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4edae4:{NFSU2_TR(0x4edae4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4edae5:{NFSU2_TR(0x4edae5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4edae6:{NFSU2_TR(0x4edae6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4edae9:L4edae9:{c.instructions+=2;NFSU2_TR(0x4edae9);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x51123592ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x51123592ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4edaee:{NFSU2_TR(0x4edaee);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4edd26;}}
}
B4edaf4:L4edaf4:{c.instructions+=1;NFSU2_TR(0x4edaf4);
if(r1(R+518)){{goto L4edce9;}}
}
B4edafa:L4edafa:{c.instructions+=2;NFSU2_TR(0x4edafa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x406415e3ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4edaff:{NFSU2_TR(0x4edaff);
if(r1(R+518)){{goto L4edb2b;}}
}
B4edb01:L4edb01:{c.instructions+=2;NFSU2_TR(0x4edb01);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x461a18eeull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x461a18eeull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x461a18eeull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4edb06:{NFSU2_TR(0x4edb06);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x4ee155u,4ee);}
}
B4edb0c:L4edb0c:{c.instructions+=3;NFSU2_TR(0x4edb0c);
__builtin_memmove((R+8),gp(0x836538),4);
}
B4edb12:{NFSU2_TR(0x4edb12);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edb13:{NFSU2_TR(0x4edb13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4edb18ull));
TAIL_STATIC(0x50d2a0u,50d);
}
B4edb18:L4edb18:{c.instructions+=2;NFSU2_TR(0x4edb18);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4edb1b:{NFSU2_TR(0x4edb1b);
__builtin_memmove(gp(0x83a9d8),(R+0),4);
}
B4edb20:L4edb20:{c.instructions+=1;NFSU2_TR(0x4edb20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4edb25ull));
TAIL_STATIC(0x5404a0u,540);
}
B4edb25:L4edb25:{c.instructions+=4;NFSU2_TR(0x4edb25);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4edb26:{NFSU2_TR(0x4edb26);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4edb27:{NFSU2_TR(0x4edb27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4edb28:{NFSU2_TR(0x4edb28);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4edb2b:L4edb2b:{c.instructions+=3;NFSU2_TR(0x4edb2b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4edb31:{NFSU2_TR(0x4edb31);
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
B4edb33:{NFSU2_TR(0x4edb33);
if(r1(R+518)){TAIL_STATIC(0x4ee155u,4ee);}
}
B4edb39:L4edb39:{c.instructions+=3;NFSU2_TR(0x4edb39);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4edb3c:{NFSU2_TR(0x4edb3c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edb3d:{NFSU2_TR(0x4edb3d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4edb42ull));
TAIL_STATIC(0x50d2a0u,50d);
}
B4edb42:L4edb42:{c.instructions+=7;NFSU2_TR(0x4edb42);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4edb48:{NFSU2_TR(0x4edb48);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x83a9d8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B4edb4f:{NFSU2_TR(0x4edb4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4edb52:{NFSU2_TR(0x4edb52);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffeull))));
}
B4edb55:{NFSU2_TR(0x4edb55);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4edb58:{NFSU2_TR(0x4edb58);
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
B4edb5b:{NFSU2_TR(0x4edb5b);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4edcbc;}}
}
B4edb61:L4edb61:{c.instructions+=2;NFSU2_TR(0x4edb61);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edb62:{NFSU2_TR(0x4edb62);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4ee15cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4edb69:L4edb69:{c.instructions+=6;NFSU2_TR(0x4edb69);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4edb6c:{NFSU2_TR(0x4edb6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x918ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4edb72:{NFSU2_TR(0x4edb72);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x840ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4edb78:{NFSU2_TR(0x4edb78);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4edb7b:{NFSU2_TR(0x4edb7b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edb7c:{NFSU2_TR(0x4edb7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4edb81ull));
TAIL_STATIC(0x5120b0u,512);
}
B4edb81:L4edb81:{c.instructions+=11;NFSU2_TR(0x4edb81);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edb82:{NFSU2_TR(0x4edb82);
u8 U[4];
w4(U+0,u32(0xda8f3e96ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edb87:{NFSU2_TR(0x4edb87);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edb89:{NFSU2_TR(0x4edb89);
u8 U[4];
w4(U+0,u32(0x34dc1bcfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edb8e:{NFSU2_TR(0x4edb8e);
u8 U[4];
w4(U+0,u32(0x34dc1bcfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edb93:{NFSU2_TR(0x4edb93);
u8 U[4];
w4(U+0,u32(0xd05fc3a3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edb98:{NFSU2_TR(0x4edb98);
u8 U[4];
w4(U+0,u32(0x61cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edb9d:{NFSU2_TR(0x4edb9d);
u8 U[4];
w4(U+0,u32(0xf770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edba2:{NFSU2_TR(0x4edba2);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edba7:{NFSU2_TR(0x4edba7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edba8:{NFSU2_TR(0x4edba8);
{goto L4edcac;}
}
B4edbad:L4edbad:{c.instructions+=2;NFSU2_TR(0x4edbad);
w4(R+4,u32(0x85ad40ull));
}
B4edbb2:{NFSU2_TR(0x4edbb2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4edbb7ull));
TAIL_STATIC(0x513c30u,513);
}
B4edbb7:L4edbb7:{c.instructions+=7;NFSU2_TR(0x4edbb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4edbba:{NFSU2_TR(0x4edbba);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x918ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4edbc0:{NFSU2_TR(0x4edbc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4edbc3:{NFSU2_TR(0x4edbc3);
__builtin_memmove((R+28),(R+0),4);
}
B4edbc5:{NFSU2_TR(0x4edbc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x840ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4edbcb:{NFSU2_TR(0x4edbcb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edbcc:{NFSU2_TR(0x4edbcc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4edbd1ull));
TAIL_STATIC(0x5120b0u,512);
}
B4edbd1:L4edbd1:{c.instructions+=5;NFSU2_TR(0x4edbd1);
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
B4edbd4:{NFSU2_TR(0x4edbd4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edbd5:{NFSU2_TR(0x4edbd5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4edbd7:{NFSU2_TR(0x4edbd7);
__builtin_memmove((R+4),(R+28),4);
}
B4edbd9:{NFSU2_TR(0x4edbd9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4edbdcull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4edbdc:L4edbdc:{c.instructions+=2;NFSU2_TR(0x4edbdc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edbdd:{NFSU2_TR(0x4edbdd);
{goto L4edc7d;}
}
B4edbe2:L4edbe2:{c.instructions+=2;NFSU2_TR(0x4edbe2);
w4(R+4,u32(0x85ad40ull));
}
B4edbe7:{NFSU2_TR(0x4edbe7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4edbecull));
TAIL_STATIC(0x513c30u,513);
}
B4edbec:L4edbec:{c.instructions+=7;NFSU2_TR(0x4edbec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4edbef:{NFSU2_TR(0x4edbef);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x918ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4edbf5:{NFSU2_TR(0x4edbf5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4edbf8:{NFSU2_TR(0x4edbf8);
__builtin_memmove((R+28),(R+0),4);
}
B4edbfa:{NFSU2_TR(0x4edbfa);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x840ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4edc00:{NFSU2_TR(0x4edc00);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edc01:{NFSU2_TR(0x4edc01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4edc06ull));
TAIL_STATIC(0x5120b0u,512);
}
B4edc06:L4edc06:{c.instructions+=5;NFSU2_TR(0x4edc06);
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
B4edc09:{NFSU2_TR(0x4edc09);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edc0a:{NFSU2_TR(0x4edc0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4edc0c:{NFSU2_TR(0x4edc0c);
__builtin_memmove((R+4),(R+28),4);
}
B4edc0e:{NFSU2_TR(0x4edc0e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4edc11ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4edc11:L4edc11:{c.instructions+=2;NFSU2_TR(0x4edc11);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edc12:{NFSU2_TR(0x4edc12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4edc17ull));
TAIL_STATIC(0x5120b0u,512);
}
B4edc17:L4edc17:{c.instructions+=10;NFSU2_TR(0x4edc17);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4edc1a:{NFSU2_TR(0x4edc1a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edc1b:{NFSU2_TR(0x4edc1b);
u8 U[4];
w4(U+0,u32(0x3192f5d1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edc20:{NFSU2_TR(0x4edc20);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edc22:{NFSU2_TR(0x4edc22);
u8 U[4];
w4(U+0,u32(0x75d1e35eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edc27:{NFSU2_TR(0x4edc27);
u8 U[4];
w4(U+0,u32(0x75d1e35eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edc2c:{NFSU2_TR(0x4edc2c);
u8 U[4];
w4(U+0,u32(0x526adefcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edc31:{NFSU2_TR(0x4edc31);
u8 U[4];
w4(U+0,u32(0x2699cf8eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edc36:{NFSU2_TR(0x4edc36);
u8 U[4];
w4(U+0,u32(0xfb75e78full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edc3b:{NFSU2_TR(0x4edc3b);
{goto L4edca6;}
}
B4edc3d:L4edc3d:{c.instructions+=6;NFSU2_TR(0x4edc3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4edc40:{NFSU2_TR(0x4edc40);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4edc46:{NFSU2_TR(0x4edc46);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edc47:{NFSU2_TR(0x4edc47);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edc48:{NFSU2_TR(0x4edc48);
w4(R+4,u32(0x83a9d0ull));
}
B4edc4d:{NFSU2_TR(0x4edc4d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4edc52ull));
TAIL_STATIC(0x495240u,495);
}
B4edc52:L4edc52:{c.instructions+=2;NFSU2_TR(0x4edc52);
__builtin_memmove((R+4),(R+0),4);
}
B4edc54:{NFSU2_TR(0x4edc54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4edc59ull));
TAIL_STATIC(0x503510u,503);
}
B4edc59:L4edc59:{c.instructions+=7;NFSU2_TR(0x4edc59);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4edc5c:{NFSU2_TR(0x4edc5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x918ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4edc62:{NFSU2_TR(0x4edc62);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x840ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4edc68:{NFSU2_TR(0x4edc68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4edc6a:{NFSU2_TR(0x4edc6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4edc6d:{NFSU2_TR(0x4edc6d);
__builtin_memmove((R+4),(R+0),4);
}
B4edc6f:{NFSU2_TR(0x4edc6f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4edc72ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4edc72:L4edc72:{c.instructions+=2;NFSU2_TR(0x4edc72);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edc73:{NFSU2_TR(0x4edc73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4edc78ull));
TAIL_STATIC(0x5120b0u,512);
}
B4edc78:L4edc78:{c.instructions+=3;NFSU2_TR(0x4edc78);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4edc7b:{NFSU2_TR(0x4edc7b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edc7c:{NFSU2_TR(0x4edc7c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edc7d:L4edc7d:{c.instructions+=1;NFSU2_TR(0x4edc7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4edc82ull));
TAIL_STATIC(0x5120b0u,512);
}
B4edc82:L4edc82:{c.instructions+=9;NFSU2_TR(0x4edc82);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4edc85:{NFSU2_TR(0x4edc85);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edc86:{NFSU2_TR(0x4edc86);
u8 U[4];
w4(U+0,u32(0x85215bc6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edc8b:{NFSU2_TR(0x4edc8b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edc8d:{NFSU2_TR(0x4edc8d);
u8 U[4];
w4(U+0,u32(0x34dc1bcfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edc92:{NFSU2_TR(0x4edc92);
u8 U[4];
w4(U+0,u32(0x34dc1bcfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edc97:{NFSU2_TR(0x4edc97);
u8 U[4];
w4(U+0,u32(0xd05fc3a3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edc9c:{NFSU2_TR(0x4edc9c);
u8 U[4];
w4(U+0,u32(0x61cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edca1:{NFSU2_TR(0x4edca1);
u8 U[4];
w4(U+0,u32(0xf770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edca6:L4edca6:{c.instructions+=2;NFSU2_TR(0x4edca6);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edcab:{NFSU2_TR(0x4edcab);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edcac:L4edcac:{c.instructions+=1;NFSU2_TR(0x4edcac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4edcb1ull));
TAIL_STATIC(0x558790u,558);
}
B4edcb1:L4edcb1:{c.instructions+=3;NFSU2_TR(0x4edcb1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2cull))));
}
B4edcb4:{NFSU2_TR(0x4edcb4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1bfull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4edcbb:{NFSU2_TR(0x4edcbb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4edcbc:L4edcbc:{c.instructions+=6;NFSU2_TR(0x4edcbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4edcbf:{NFSU2_TR(0x4edcbf);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edcc1:{NFSU2_TR(0x4edcc1);
u8 U[4];
w4(U+0,u32(0x78fef4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edcc6:{NFSU2_TR(0x4edcc6);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edccb:{NFSU2_TR(0x4edccb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edccc:{NFSU2_TR(0x4edccc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4edcd1ull));
TAIL_STATIC(0x537c00u,537);
}
B4edcd1:L4edcd1:{c.instructions+=6;NFSU2_TR(0x4edcd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4edcd4:{NFSU2_TR(0x4edcd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4edcd7:{NFSU2_TR(0x4edcd7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edcd8:{NFSU2_TR(0x4edcd8);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edcda:{NFSU2_TR(0x4edcda);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edcdb:{NFSU2_TR(0x4edcdb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4edce0ull));
TAIL_STATIC(0x50d150u,50d);
}
B4edce0:L4edce0:{c.instructions+=5;NFSU2_TR(0x4edce0);
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
B4edce3:{NFSU2_TR(0x4edce3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4edce4:{NFSU2_TR(0x4edce4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4edce5:{NFSU2_TR(0x4edce5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4edce6:{NFSU2_TR(0x4edce6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4edce9:L4edce9:{c.instructions+=2;NFSU2_TR(0x4edce9);
w4(R+4,u32(0x83a9d0ull));
}
B4edcee:{NFSU2_TR(0x4edcee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4edcf3ull));
TAIL_STATIC(0x5032c0u,503);
}
B4edcf3:L4edcf3:{c.instructions+=3;NFSU2_TR(0x4edcf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4edcf6:{NFSU2_TR(0x4edcf6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edcf7:{NFSU2_TR(0x4edcf7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4edcfcull));
TAIL_STATIC(0x50d2a0u,50d);
}
B4edcfc:L4edcfc:{c.instructions+=3;NFSU2_TR(0x4edcfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4edd02:{NFSU2_TR(0x4edd02);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x83a9d8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B4edd09:{NFSU2_TR(0x4edd09);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4edd0eull));
TAIL_STATIC(0x5404a0u,540);
}
B4edd0e:L4edd0e:{c.instructions+=6;NFSU2_TR(0x4edd0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4edd11:{NFSU2_TR(0x4edd11);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4edd14:{NFSU2_TR(0x4edd14);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edd15:{NFSU2_TR(0x4edd15);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edd17:{NFSU2_TR(0x4edd17);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edd18:{NFSU2_TR(0x4edd18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4edd1dull));
TAIL_STATIC(0x50d150u,50d);
}
B4edd1d:L4edd1d:{c.instructions+=5;NFSU2_TR(0x4edd1d);
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
B4edd20:{NFSU2_TR(0x4edd20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4edd21:{NFSU2_TR(0x4edd21);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4edd22:{NFSU2_TR(0x4edd22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4edd23:{NFSU2_TR(0x4edd23);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4edd26:L4edd26:{c.instructions+=2;NFSU2_TR(0x4edd26);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x526adefcull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x526adefcull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x526adefcull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4edd2b:{NFSU2_TR(0x4edd2b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x4ee155u,4ee);}
}
B4edd31:L4edd31:{c.instructions+=6;NFSU2_TR(0x4edd31);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4edd34:{NFSU2_TR(0x4edd34);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edd36:{NFSU2_TR(0x4edd36);
u8 U[4];
w4(U+0,u32(0x79031cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edd3b:{NFSU2_TR(0x4edd3b);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edd40:{NFSU2_TR(0x4edd40);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edd41:{NFSU2_TR(0x4edd41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4edd46ull));
TAIL_STATIC(0x537c00u,537);
}
B4edd46:L4edd46:{c.instructions+=3;NFSU2_TR(0x4edd46);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4edd49:{NFSU2_TR(0x4edd49);
w4(R+4,u32(0x85ad40ull));
}
B4edd4e:{NFSU2_TR(0x4edd4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4edd53ull));
TAIL_STATIC(0x513c30u,513);
}
B4edd53:L4edd53:{c.instructions+=10;NFSU2_TR(0x4edd53);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4edd56:{NFSU2_TR(0x4edd56);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4edd59:{NFSU2_TR(0x4edd59);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4edd5c:{NFSU2_TR(0x4edd5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x920ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4edd62:{NFSU2_TR(0x4edd62);
__builtin_memmove((R+4),(R+8),4);
}
B4edd64:{NFSU2_TR(0x4edd64);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edd65:{NFSU2_TR(0x4edd65);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edd66:{NFSU2_TR(0x4edd66);
__builtin_memmove((R+4),(R+24),4);
}
B4edd68:{NFSU2_TR(0x4edd68);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4edd6b:{NFSU2_TR(0x4edd6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4edd70ull));
TAIL_STATIC(0x496050u,496);
}
B4edd70:L4edd70:{c.instructions+=3;NFSU2_TR(0x4edd70);
w4(R+4,u32(0x83a9d0ull));
}
B4edd75:{NFSU2_TR(0x4edd75);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4edd7c:{NFSU2_TR(0x4edd7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4edd81ull));
TAIL_STATIC(0x52a4c0u,52a);
}
B4edd81:L4edd81:{c.instructions+=2;NFSU2_TR(0x4edd81);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4edd83:{NFSU2_TR(0x4edd83);
if(r1(R+518)){{goto L4edda5;}}
}
B4edd85:L4edd85:{c.instructions+=9;NFSU2_TR(0x4edd85);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4edd88:{NFSU2_TR(0x4edd88);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edd8a:{NFSU2_TR(0x4edd8a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edd8c:{NFSU2_TR(0x4edd8c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edd8e:{NFSU2_TR(0x4edd8e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edd90:{NFSU2_TR(0x4edd90);
u8 U[4];
w4(U+0,u32(0x141ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edd95:{NFSU2_TR(0x4edd95);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edd96:{NFSU2_TR(0x4edd96);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edd97:{NFSU2_TR(0x4edd97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4edd9cull));
TAIL_STATIC(0x4a3100u,4a3);
}
B4edd9c:L4edd9c:{c.instructions+=5;NFSU2_TR(0x4edd9c);
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
B4edd9f:{NFSU2_TR(0x4edd9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4edda0:{NFSU2_TR(0x4edda0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4edda1:{NFSU2_TR(0x4edda1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4edda2:{NFSU2_TR(0x4edda2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4edda5:L4edda5:{c.instructions+=4;NFSU2_TR(0x4edda5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4edda8:{NFSU2_TR(0x4edda8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edda9:{NFSU2_TR(0x4edda9);
u8 U[4];
w4(U+0,u32(0x9a3b571dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eddae:{NFSU2_TR(0x4eddae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eddb3ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4eddb3:L4eddb3:{c.instructions+=5;NFSU2_TR(0x4eddb3);
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
B4eddb6:{NFSU2_TR(0x4eddb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4eddb7:{NFSU2_TR(0x4eddb7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4eddb8:{NFSU2_TR(0x4eddb8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4eddb9:{NFSU2_TR(0x4eddb9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4eddbc:L4eddbc:{c.instructions+=7;NFSU2_TR(0x4eddbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4eddbf:{NFSU2_TR(0x4eddbf);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eddc1:{NFSU2_TR(0x4eddc1);
u8 U[4];
w4(U+0,u32(0x79031cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eddc6:{NFSU2_TR(0x4eddc6);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eddcb:{NFSU2_TR(0x4eddcb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eddcc:{NFSU2_TR(0x4eddcc);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1bfull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4eddd3:{NFSU2_TR(0x4eddd3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eddd8ull));
TAIL_STATIC(0x537c00u,537);
}
B4eddd8:L4eddd8:{c.instructions+=8;NFSU2_TR(0x4eddd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4edddb:{NFSU2_TR(0x4edddb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x920ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4edde1:{NFSU2_TR(0x4edde1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4edde4:{NFSU2_TR(0x4edde4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4edde7:{NFSU2_TR(0x4edde7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edde8:{NFSU2_TR(0x4edde8);
__builtin_memmove((R+4),(R+24),4);
}
B4eddea:{NFSU2_TR(0x4eddea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4edded:{NFSU2_TR(0x4edded);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eddf2ull));
TAIL_STATIC(0x495f00u,495);
}
B4eddf2:L4eddf2:{c.instructions+=3;NFSU2_TR(0x4eddf2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eddf3:{NFSU2_TR(0x4eddf3);
__builtin_memmove((R+4),(R+24),4);
}
B4eddf5:{NFSU2_TR(0x4eddf5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eddfaull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ed8a0u);}goto L4ed8a0;}
}
B4eddfa:L4eddfa:{c.instructions+=4;NFSU2_TR(0x4eddfa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4eddfb:{NFSU2_TR(0x4eddfb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4eddfc:{NFSU2_TR(0x4eddfc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4eddfd:{NFSU2_TR(0x4eddfd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ede00:L4ede00:{c.instructions+=2;NFSU2_TR(0x4ede00);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x9803f6e2ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9803f6e2ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ede05:{NFSU2_TR(0x4ede05);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4edfdc;}}
}
B4ede0b:L4ede0b:{c.instructions+=1;NFSU2_TR(0x4ede0b);
if(r1(R+518)){{goto L4edf29;}}
}
B4ede11:L4ede11:{c.instructions+=2;NFSU2_TR(0x4ede11);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x9120409eull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ede16:{NFSU2_TR(0x4ede16);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4edf00;}}
}
B4ede1c:L4ede1c:{c.instructions+=1;NFSU2_TR(0x4ede1c);
if(r1(R+518)){{goto L4edfff;}}
}
B4ede22:L4ede22:{c.instructions+=2;NFSU2_TR(0x4ede22);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x8867412dull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ede27:{NFSU2_TR(0x4ede27);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4edb0cu);}goto L4edb0c;}}
}
B4ede2d:L4ede2d:{c.instructions+=2;NFSU2_TR(0x4ede2d);
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
B4ede32:{NFSU2_TR(0x4ede32);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x4ee155u,4ee);}
}
B4ede38:L4ede38:{c.instructions+=3;NFSU2_TR(0x4ede38);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1bfull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4ede3e:{NFSU2_TR(0x4ede3e);
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
B4ede40:{NFSU2_TR(0x4ede40);
if(r1(R+518)){TAIL_STATIC(0x4ee155u,4ee);}
}
B4ede46:L4ede46:{c.instructions+=3;NFSU2_TR(0x4ede46);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4ede4c:{NFSU2_TR(0x4ede4c);
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
B4ede4e:{NFSU2_TR(0x4ede4e);
if(r1(R+518)){TAIL_STATIC(0x4ee155u,4ee);}
}
B4ede54:L4ede54:{c.instructions+=4;NFSU2_TR(0x4ede54);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ede5a:{NFSU2_TR(0x4ede5a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ede5b:{NFSU2_TR(0x4ede5b);
w4(R+4,u32(0x83a9d0ull));
}
B4ede60:{NFSU2_TR(0x4ede60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ede65ull));
TAIL_STATIC(0x495240u,495);
}
B4ede65:L4ede65:{c.instructions+=4;NFSU2_TR(0x4ede65);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ede67:{NFSU2_TR(0x4ede67);
u8 U[4];
w4(U+0,u32(0x797e74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ede6c:{NFSU2_TR(0x4ede6c);
__builtin_memmove((R+28),(R+0),4);
}
B4ede6e:{NFSU2_TR(0x4ede6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ede73ull));
TAIL_STATIC(0x50b990u,50b);
}
B4ede73:L4ede73:{c.instructions+=4;NFSU2_TR(0x4ede73);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4ede76:{NFSU2_TR(0x4ede76);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ede77:{NFSU2_TR(0x4ede77);
__builtin_memmove((R+4),(R+28),4);
}
B4ede79:{NFSU2_TR(0x4ede79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ede7eull));
TAIL_STATIC(0x503680u,503);
}
B4ede7e:L4ede7e:{c.instructions+=3;NFSU2_TR(0x4ede7e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7f5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4ede84:{NFSU2_TR(0x4ede84);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ede86:{NFSU2_TR(0x4ede86);
if(r1(R+518)){{goto L4edebf;}}
}
B4ede88:L4ede88:{c.instructions+=11;NFSU2_TR(0x4ede88);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ede8b:{NFSU2_TR(0x4ede8b);
u8 U[4];
w4(U+0,u32(0xd76e0b5aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ede90:{NFSU2_TR(0x4ede90);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ede92:{NFSU2_TR(0x4ede92);
u8 U[4];
w4(U+0,u32(0x1fab5998ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ede97:{NFSU2_TR(0x4ede97);
u8 U[4];
w4(U+0,u32(0x1fab5998ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ede9c:{NFSU2_TR(0x4ede9c);
u8 U[4];
w4(U+0,u32(0x51123592ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edea1:{NFSU2_TR(0x4edea1);
u8 U[4];
w4(U+0,u32(0x61cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edea6:{NFSU2_TR(0x4edea6);
u8 U[4];
w4(U+0,u32(0xf770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edeab:{NFSU2_TR(0x4edeab);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edeb0:{NFSU2_TR(0x4edeb0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edeb1:{NFSU2_TR(0x4edeb1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4edeb6ull));
TAIL_STATIC(0x558790u,558);
}
B4edeb6:L4edeb6:{c.instructions+=5;NFSU2_TR(0x4edeb6);
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
B4edeb9:{NFSU2_TR(0x4edeb9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4edeba:{NFSU2_TR(0x4edeba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4edebb:{NFSU2_TR(0x4edebb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4edebc:{NFSU2_TR(0x4edebc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4edebf:L4edebf:{c.instructions+=6;NFSU2_TR(0x4edebf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4edec2:{NFSU2_TR(0x4edec2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x918ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4edec8:{NFSU2_TR(0x4edec8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x840ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4edece:{NFSU2_TR(0x4edece);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4eded1:{NFSU2_TR(0x4eded1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eded2:{NFSU2_TR(0x4eded2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eded7ull));
TAIL_STATIC(0x5120b0u,512);
}
B4eded7:L4eded7:{c.instructions+=8;NFSU2_TR(0x4eded7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eded8:{NFSU2_TR(0x4eded8);
u8 U[4];
w4(U+0,u32(0x272ebebaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ededd:{NFSU2_TR(0x4ededd);
u8 U[4];
w4(U+0,u32(0x34dc1becull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edee2:{NFSU2_TR(0x4edee2);
u8 U[4];
w4(U+0,u32(0x34dc1becull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edee7:{NFSU2_TR(0x4edee7);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edeec:{NFSU2_TR(0x4edeec);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edef1:{NFSU2_TR(0x4edef1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edef2:{NFSU2_TR(0x4edef2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4edef7ull));
TAIL_STATIC(0x558570u,558);
}
B4edef7:L4edef7:{c.instructions+=5;NFSU2_TR(0x4edef7);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x20ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4edefa:{NFSU2_TR(0x4edefa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4edefb:{NFSU2_TR(0x4edefb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4edefc:{NFSU2_TR(0x4edefc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4edefd:{NFSU2_TR(0x4edefd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4edf00:L4edf00:{c.instructions+=2;NFSU2_TR(0x4edf00);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x96dda9e6ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x96dda9e6ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x96dda9e6ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4edf05:{NFSU2_TR(0x4edf05);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x4ee155u,4ee);}
}
B4edf0b:L4edf0b:{c.instructions+=6;NFSU2_TR(0x4edf0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4edf0e:{NFSU2_TR(0x4edf0e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edf10:{NFSU2_TR(0x4edf10);
u8 U[4];
w4(U+0,u32(0x78fef4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edf15:{NFSU2_TR(0x4edf15);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edf1a:{NFSU2_TR(0x4edf1a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edf1b:{NFSU2_TR(0x4edf1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4edf20ull));
TAIL_STATIC(0x537c00u,537);
}
B4edf20:L4edf20:{c.instructions+=5;NFSU2_TR(0x4edf20);
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
B4edf23:{NFSU2_TR(0x4edf23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4edf24:{NFSU2_TR(0x4edf24);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4edf25:{NFSU2_TR(0x4edf25);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4edf26:{NFSU2_TR(0x4edf26);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4edf29:L4edf29:{c.instructions+=2;NFSU2_TR(0x4edf29);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4edf2f:{NFSU2_TR(0x4edf2f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4edf34ull));
TAIL_STATIC(0x538130u,538);
}
B4edf34:L4edf34:{c.instructions+=4;NFSU2_TR(0x4edf34);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4edf3a:{NFSU2_TR(0x4edf3a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
}
B4edf3d:{NFSU2_TR(0x4edf3d);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x14ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x14ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4edf40:{NFSU2_TR(0x4edf40);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x4ee155u,4ee);}
}
B4edf46:L4edf46:{c.instructions+=2;NFSU2_TR(0x4edf46);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ee180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B4edf4d:{NFSU2_TR(0x4edf4d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4ee16cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4edf54:L4edf54:{c.instructions+=3;NFSU2_TR(0x4edf54);
u8 U[4];
w4(U+0,u32(0xb5971bf1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edf59:{NFSU2_TR(0x4edf59);
__builtin_memmove((R+4),(R+24),4);
}
B4edf5b:{NFSU2_TR(0x4edf5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4edf60ull));
TAIL_STATIC(0x4affa0u,4af);
}
B4edf60:L4edf60:{c.instructions+=4;NFSU2_TR(0x4edf60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4edf61:{NFSU2_TR(0x4edf61);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4edf62:{NFSU2_TR(0x4edf62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4edf63:{NFSU2_TR(0x4edf63);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4edf66:L4edf66:{c.instructions+=3;NFSU2_TR(0x4edf66);
u8 U[4];
w4(U+0,u32(0x9120409eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edf6b:{NFSU2_TR(0x4edf6b);
__builtin_memmove((R+4),(R+24),4);
}
B4edf6d:{NFSU2_TR(0x4edf6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4edf72ull));
TAIL_STATIC(0x4affa0u,4af);
}
B4edf72:L4edf72:{c.instructions+=4;NFSU2_TR(0x4edf72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4edf73:{NFSU2_TR(0x4edf73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4edf74:{NFSU2_TR(0x4edf74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4edf75:{NFSU2_TR(0x4edf75);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4edf78:L4edf78:{c.instructions+=4;NFSU2_TR(0x4edf78);
__builtin_memmove((R+0),gp(0x7fa1a8),4);
}
B4edf7d:{NFSU2_TR(0x4edf7d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4edf7f:{NFSU2_TR(0x4edf7f);
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
B4edf81:{NFSU2_TR(0x4edf81);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x4ee155u,4ee);}
}
B4edf87:L4edf87:{c.instructions+=1;NFSU2_TR(0x4edf87);
{goto L4edf90;}
}
B4edf90:L4edf90:{c.instructions+=3;NFSU2_TR(0x4edf90);
u8 U[4];
w4(U+0,u32(0xb5971bf1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edf95:{NFSU2_TR(0x4edf95);
__builtin_memmove((R+4),(R+24),4);
}
B4edf97:{NFSU2_TR(0x4edf97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4edf9cull));
TAIL_STATIC(0x4affa0u,4af);
}
B4edf9c:L4edf9c:{c.instructions+=4;NFSU2_TR(0x4edf9c);
__builtin_memmove((R+0),gp(0x7fa1a8),4);
}
B4edfa1:{NFSU2_TR(0x4edfa1);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B4edfa2:{NFSU2_TR(0x4edfa2);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B4edfa4:{NFSU2_TR(0x4edfa4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4edf90u);}goto L4edf90;}}
}
B4edfa6:L4edfa6:{c.instructions+=4;NFSU2_TR(0x4edfa6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4edfa7:{NFSU2_TR(0x4edfa7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4edfa8:{NFSU2_TR(0x4edfa8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4edfa9:{NFSU2_TR(0x4edfa9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4edfac:L4edfac:{c.instructions+=4;NFSU2_TR(0x4edfac);
__builtin_memmove((R+0),gp(0x7fa1a8),4);
}
B4edfb1:{NFSU2_TR(0x4edfb1);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4edfb3:{NFSU2_TR(0x4edfb3);
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
B4edfb5:{NFSU2_TR(0x4edfb5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x4ee155u,4ee);}
}
B4edfbb:L4edfbb:{c.instructions+=1;NFSU2_TR(0x4edfbb);
{goto L4edfc0;}
}
B4edfc0:L4edfc0:{c.instructions+=3;NFSU2_TR(0x4edfc0);
u8 U[4];
w4(U+0,u32(0x9120409eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4edfc5:{NFSU2_TR(0x4edfc5);
__builtin_memmove((R+4),(R+24),4);
}
B4edfc7:{NFSU2_TR(0x4edfc7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4edfccull));
TAIL_STATIC(0x4affa0u,4af);
}
B4edfcc:L4edfcc:{c.instructions+=4;NFSU2_TR(0x4edfcc);
__builtin_memmove((R+0),gp(0x7fa1a8),4);
}
B4edfd1:{NFSU2_TR(0x4edfd1);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B4edfd2:{NFSU2_TR(0x4edfd2);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B4edfd4:{NFSU2_TR(0x4edfd4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4edfc0u);}goto L4edfc0;}}
}
B4edfd6:L4edfd6:{c.instructions+=4;NFSU2_TR(0x4edfd6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4edfd7:{NFSU2_TR(0x4edfd7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4edfd8:{NFSU2_TR(0x4edfd8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4edfd9:{NFSU2_TR(0x4edfd9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4edfdc:L4edfdc:{c.instructions+=2;NFSU2_TR(0x4edfdc);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0xc98356baull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc98356baull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4edfe1:{NFSU2_TR(0x4edfe1);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x4ee070u,4ee);}
}
B4edfe7:L4edfe7:{c.instructions+=1;NFSU2_TR(0x4edfe7);
if(r1(R+518)){TAIL_STATIC(0x4ee00du,4ee);}
}
B4edfe9:L4edfe9:{c.instructions+=2;NFSU2_TR(0x4edfe9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9a3b571dull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4edfee:{NFSU2_TR(0x4edfee);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4edb20u);}goto L4edb20;}}
}
B4edff4:L4edff4:{c.instructions+=2;NFSU2_TR(0x4edff4);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xb5971bf1ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xb5971bf1ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xb5971bf1ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4edff9:{NFSU2_TR(0x4edff9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x4ee155u,4ee);}
}
B4edfff:L4edfff:{c.instructions+=1;NFSU2_TR(0x4edfff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
TAIL_STATIC(0x4ee000u,4ee);
}
XIT:NFSU2_TR_EXIT(0x4ed,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
