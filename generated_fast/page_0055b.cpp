#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_458(u8* __restrict R,Cpu& c);
u32 body_488(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_49f(u8* __restrict R,Cpu& c);
u32 body_4a0(u8* __restrict R,Cpu& c);
u32 body_4a3(u8* __restrict R,Cpu& c);
u32 body_4a8(u8* __restrict R,Cpu& c);
u32 body_4a9(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_511(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_520(u8* __restrict R,Cpu& c);
u32 body_521(u8* __restrict R,Cpu& c);
u32 body_523(u8* __restrict R,Cpu& c);
u32 body_52a(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_52d(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_53d(u8* __restrict R,Cpu& c);
u32 body_542(u8* __restrict R,Cpu& c);
u32 body_54a(u8* __restrict R,Cpu& c);
u32 body_54b(u8* __restrict R,Cpu& c);
u32 body_54e(u8* __restrict R,Cpu& c);
u32 body_54f(u8* __restrict R,Cpu& c);
u32 body_555(u8* __restrict R,Cpu& c);
u32 body_557(u8* __restrict R,Cpu& c);
u32 body_558(u8* __restrict R,Cpu& c);
u32 body_55c(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_57d(u8* __restrict R,Cpu& c);
u32 body_584(u8* __restrict R,Cpu& c);
u32 body_58d(u8* __restrict R,Cpu& c);
u32 body_58f(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_610(u8* __restrict R,Cpu& c);
u32 body_741(u8* __restrict R,Cpu& c);
u32 body_742(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x55b,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x55b,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_55b(u8* __restrict R,Cpu& c);
u32 page_55b(Cpu& c){return body_55b(c.regs.data(),c);}
__attribute__((noinline)) u32 body_55b(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x55b004:goto L55b004;
case 0x55b00a:goto L55b00a;
case 0x55b00d:c.instructions+=4;goto B55b00d;
case 0x55b013:c.instructions+=3;goto B55b013;
case 0x55b015:c.instructions+=2;goto B55b015;
case 0x55b018:c.instructions+=1;goto B55b018;
case 0x55b01e:goto L55b01e;
case 0x55b021:c.instructions+=2;goto B55b021;
case 0x55b023:c.instructions+=1;goto B55b023;
case 0x55b028:goto L55b028;
case 0x55b02d:c.instructions+=7;goto B55b02d;
case 0x55b02e:c.instructions+=6;goto B55b02e;
case 0x55b033:c.instructions+=5;goto B55b033;
case 0x55b036:c.instructions+=4;goto B55b036;
case 0x55b03b:c.instructions+=3;goto B55b03b;
case 0x55b03d:c.instructions+=2;goto B55b03d;
case 0x55b040:c.instructions+=1;goto B55b040;
case 0x55b042:goto L55b042;
case 0x55b047:goto L55b047;
case 0x55b04a:c.instructions+=4;goto B55b04a;
case 0x55b04b:c.instructions+=3;goto B55b04b;
case 0x55b050:c.instructions+=2;goto B55b050;
case 0x55b051:c.instructions+=1;goto B55b051;
case 0x55b056:goto L55b056;
case 0x55b057:c.instructions+=1;goto B55b057;
case 0x55b05c:goto L55b05c;
case 0x55b05f:c.instructions+=2;goto B55b05f;
case 0x55b061:c.instructions+=1;goto B55b061;
case 0x55b063:goto L55b063;
case 0x55b066:c.instructions+=4;goto B55b066;
case 0x55b067:c.instructions+=3;goto B55b067;
case 0x55b068:c.instructions+=2;goto B55b068;
case 0x55b06a:c.instructions+=1;goto B55b06a;
case 0x55b06f:goto L55b06f;
case 0x55b072:c.instructions+=2;goto B55b072;
case 0x55b073:c.instructions+=1;goto B55b073;
case 0x55b078:goto L55b078;
case 0x55b07b:c.instructions+=5;goto B55b07b;
case 0x55b07c:c.instructions+=4;goto B55b07c;
case 0x55b07d:c.instructions+=3;goto B55b07d;
case 0x55b07e:c.instructions+=2;goto B55b07e;
case 0x55b07f:c.instructions+=1;goto B55b07f;
case 0x55b082:goto L55b082;
case 0x55b087:c.instructions+=7;goto B55b087;
case 0x55b088:c.instructions+=6;goto B55b088;
case 0x55b08d:c.instructions+=5;goto B55b08d;
case 0x55b090:c.instructions+=4;goto B55b090;
case 0x55b091:c.instructions+=3;goto B55b091;
case 0x55b092:c.instructions+=2;goto B55b092;
case 0x55b093:c.instructions+=1;goto B55b093;
case 0x55b096:goto L55b096;
case 0x55b09b:c.instructions+=1;goto B55b09b;
case 0x55b0a1:goto L55b0a1;
case 0x55b0a7:c.instructions+=5;goto B55b0a7;
case 0x55b0aa:c.instructions+=4;goto B55b0aa;
case 0x55b0ad:c.instructions+=3;goto B55b0ad;
case 0x55b0b2:c.instructions+=2;goto B55b0b2;
case 0x55b0b4:c.instructions+=1;goto B55b0b4;
case 0x55b0b6:goto L55b0b6;
case 0x55b0bb:c.instructions+=1;goto B55b0bb;
case 0x55b0bd:goto L55b0bd;
case 0x55b0c0:c.instructions+=1;goto B55b0c0;
case 0x55b0c2:goto L55b0c2;
case 0x55b0c7:c.instructions+=1;goto B55b0c7;
case 0x55b0c9:goto L55b0c9;
case 0x55b0cc:c.instructions+=1;goto B55b0cc;
case 0x55b0ce:goto L55b0ce;
case 0x55b0d3:c.instructions+=1;goto B55b0d3;
case 0x55b0d5:goto L55b0d5;
case 0x55b0d7:c.instructions+=5;goto B55b0d7;
case 0x55b0da:c.instructions+=4;goto B55b0da;
case 0x55b0dd:c.instructions+=3;goto B55b0dd;
case 0x55b0de:c.instructions+=2;goto B55b0de;
case 0x55b0e1:c.instructions+=1;goto B55b0e1;
case 0x55b0e3:goto L55b0e3;
case 0x55b0e6:c.instructions+=2;goto B55b0e6;
case 0x55b0e7:c.instructions+=1;goto B55b0e7;
case 0x55b0ec:goto L55b0ec;
case 0x55b0ef:c.instructions+=2;goto B55b0ef;
case 0x55b0f1:c.instructions+=1;goto B55b0f1;
case 0x55b0f3:goto L55b0f3;
case 0x55b0f6:c.instructions+=3;goto B55b0f6;
case 0x55b0f9:c.instructions+=2;goto B55b0f9;
case 0x55b0fc:c.instructions+=1;goto B55b0fc;
case 0x55b0ff:goto L55b0ff;
case 0x55b102:c.instructions+=1;goto B55b102;
case 0x55b107:goto L55b107;
case 0x55b10d:c.instructions+=1;goto B55b10d;
case 0x55b112:goto L55b112;
case 0x55b115:c.instructions+=2;goto B55b115;
case 0x55b117:c.instructions+=1;goto B55b117;
case 0x55b119:goto L55b119;
case 0x55b11e:goto L55b11e;
case 0x55b125:c.instructions+=1;goto B55b125;
case 0x55b127:goto L55b127;
case 0x55b12c:goto L55b12c;
case 0x55b12e:c.instructions+=1;goto B55b12e;
case 0x55b130:goto L55b130;
case 0x55b133:c.instructions+=2;goto B55b133;
case 0x55b134:c.instructions+=1;goto B55b134;
case 0x55b139:goto L55b139;
case 0x55b13c:c.instructions+=2;goto B55b13c;
case 0x55b13e:c.instructions+=1;goto B55b13e;
case 0x55b143:goto L55b143;
case 0x55b144:c.instructions+=4;goto B55b144;
case 0x55b145:c.instructions+=3;goto B55b145;
case 0x55b146:c.instructions+=2;goto B55b146;
case 0x55b147:c.instructions+=1;goto B55b147;
case 0x55b14a:goto L55b14a;
case 0x55b14d:c.instructions+=4;goto B55b14d;
case 0x55b14f:c.instructions+=3;goto B55b14f;
case 0x55b154:c.instructions+=2;goto B55b154;
case 0x55b155:c.instructions+=1;goto B55b155;
case 0x55b157:goto L55b157;
case 0x55b15e:c.instructions+=1;goto B55b15e;
case 0x55b160:goto L55b160;
case 0x55b163:c.instructions+=2;goto B55b163;
case 0x55b164:c.instructions+=1;goto B55b164;
case 0x55b169:goto L55b169;
case 0x55b16c:c.instructions+=2;goto B55b16c;
case 0x55b16e:c.instructions+=1;goto B55b16e;
case 0x55b173:goto L55b173;
case 0x55b174:c.instructions+=4;goto B55b174;
case 0x55b175:c.instructions+=3;goto B55b175;
case 0x55b176:c.instructions+=2;goto B55b176;
case 0x55b177:c.instructions+=1;goto B55b177;
case 0x55b17a:goto L55b17a;
case 0x55b17d:c.instructions+=3;goto B55b17d;
case 0x55b17f:c.instructions+=2;goto B55b17f;
case 0x55b184:c.instructions+=1;goto B55b184;
case 0x55b185:goto L55b185;
case 0x55b18a:goto L55b18a;
case 0x55b18d:c.instructions+=2;goto B55b18d;
case 0x55b18f:c.instructions+=1;goto B55b18f;
case 0x55b194:goto L55b194;
case 0x55b195:c.instructions+=4;goto B55b195;
case 0x55b196:c.instructions+=3;goto B55b196;
case 0x55b197:c.instructions+=2;goto B55b197;
case 0x55b198:c.instructions+=1;goto B55b198;
case 0x55b1a0:goto L55b1a0;
case 0x55b1a1:c.instructions+=3;goto B55b1a1;
case 0x55b1a6:c.instructions+=2;goto B55b1a6;
case 0x55b1a8:c.instructions+=1;goto B55b1a8;
case 0x55b1ad:goto L55b1ad;
case 0x55b1b0:c.instructions+=2;goto B55b1b0;
case 0x55b1b2:c.instructions+=1;goto B55b1b2;
case 0x55b1b4:goto L55b1b4;
case 0x55b1b6:c.instructions+=1;goto B55b1b6;
case 0x55b1bb:goto L55b1bb;
case 0x55b1c1:c.instructions+=4;goto B55b1c1;
case 0x55b1c5:c.instructions+=3;goto B55b1c5;
case 0x55b1c9:c.instructions+=2;goto B55b1c9;
case 0x55b1cb:c.instructions+=1;goto B55b1cb;
case 0x55b1cd:goto L55b1cd;
case 0x55b1ce:c.instructions+=2;goto B55b1ce;
case 0x55b1d0:c.instructions+=1;goto B55b1d0;
case 0x55b1d5:goto L55b1d5;
case 0x55b1db:c.instructions+=5;goto B55b1db;
case 0x55b1de:c.instructions+=4;goto B55b1de;
case 0x55b1e4:c.instructions+=3;goto B55b1e4;
case 0x55b1e6:c.instructions+=2;goto B55b1e6;
case 0x55b1e8:c.instructions+=1;goto B55b1e8;
case 0x55b1eb:goto L55b1eb;
case 0x55b1ef:c.instructions+=2;goto B55b1ef;
case 0x55b1f1:c.instructions+=1;goto B55b1f1;
case 0x55b1f3:goto L55b1f3;
case 0x55b1f9:c.instructions+=4;goto B55b1f9;
case 0x55b1fd:c.instructions+=3;goto B55b1fd;
case 0x55b1fe:c.instructions+=2;goto B55b1fe;
case 0x55b200:c.instructions+=1;goto B55b200;
case 0x55b205:goto L55b205;
case 0x55b20b:c.instructions+=5;goto B55b20b;
case 0x55b20e:c.instructions+=4;goto B55b20e;
case 0x55b214:c.instructions+=3;goto B55b214;
case 0x55b216:c.instructions+=2;goto B55b216;
case 0x55b218:c.instructions+=1;goto B55b218;
case 0x55b21b:goto L55b21b;
case 0x55b21c:c.instructions+=1;goto B55b21c;
case 0x55b220:goto L55b220;
case 0x55b225:c.instructions+=16;goto B55b225;
case 0x55b226:c.instructions+=15;goto B55b226;
case 0x55b228:c.instructions+=14;goto B55b228;
case 0x55b22a:c.instructions+=13;goto B55b22a;
case 0x55b22f:c.instructions+=12;goto B55b22f;
case 0x55b234:c.instructions+=11;goto B55b234;
case 0x55b235:c.instructions+=10;goto B55b235;
case 0x55b238:c.instructions+=9;goto B55b238;
case 0x55b23a:c.instructions+=8;goto B55b23a;
case 0x55b23c:c.instructions+=7;goto B55b23c;
case 0x55b241:c.instructions+=6;goto B55b241;
case 0x55b246:c.instructions+=5;goto B55b246;
case 0x55b24b:c.instructions+=4;goto B55b24b;
case 0x55b250:c.instructions+=3;goto B55b250;
case 0x55b255:c.instructions+=2;goto B55b255;
case 0x55b256:c.instructions+=1;goto B55b256;
case 0x55b25b:goto L55b25b;
case 0x55b25e:c.instructions+=1;goto B55b25e;
case 0x55b260:goto L55b260;
case 0x55b261:c.instructions+=5;goto B55b261;
case 0x55b265:c.instructions+=4;goto B55b265;
case 0x55b26a:c.instructions+=3;goto B55b26a;
case 0x55b26b:c.instructions+=2;goto B55b26b;
case 0x55b26d:c.instructions+=1;goto B55b26d;
case 0x55b273:goto L55b273;
case 0x55b279:goto L55b279;
case 0x55b27e:c.instructions+=1;goto B55b27e;
case 0x55b280:goto L55b280;
case 0x55b282:goto L55b282;
case 0x55b287:c.instructions+=1;goto B55b287;
case 0x55b289:goto L55b289;
case 0x55b28e:c.instructions+=1;goto B55b28e;
case 0x55b290:goto L55b290;
case 0x55b291:c.instructions+=1;goto B55b291;
case 0x55b297:goto L55b297;
case 0x55b29c:goto L55b29c;
case 0x55b29d:c.instructions+=2;goto B55b29d;
case 0x55b29e:c.instructions+=1;goto B55b29e;
case 0x55b2a1:goto L55b2a1;
case 0x55b2a8:c.instructions+=4;goto B55b2a8;
case 0x55b2af:c.instructions+=3;goto B55b2af;
case 0x55b2b0:c.instructions+=2;goto B55b2b0;
case 0x55b2b1:c.instructions+=1;goto B55b2b1;
case 0x55b2b4:goto L55b2b4;
case 0x55b2b7:c.instructions+=2;goto B55b2b7;
case 0x55b2b9:c.instructions+=1;goto B55b2b9;
case 0x55b2bb:goto L55b2bb;
case 0x55b2be:c.instructions+=1;goto B55b2be;
case 0x55b2bf:goto L55b2bf;
case 0x55b2c4:c.instructions+=1;goto B55b2c4;
case 0x55b2c9:goto L55b2c9;
case 0x55b2cd:goto L55b2cd;
case 0x55b2d0:c.instructions+=2;goto B55b2d0;
case 0x55b2d2:c.instructions+=1;goto B55b2d2;
case 0x55b2d8:goto L55b2d8;
case 0x55b2da:c.instructions+=1;goto B55b2da;
case 0x55b2df:goto L55b2df;
case 0x55b2e0:c.instructions+=2;goto B55b2e0;
case 0x55b2e1:c.instructions+=1;goto B55b2e1;
case 0x55b2e4:goto L55b2e4;
case 0x55b2e7:c.instructions+=2;goto B55b2e7;
case 0x55b2e9:c.instructions+=1;goto B55b2e9;
case 0x55b2eb:goto L55b2eb;
case 0x55b2ee:c.instructions+=2;goto B55b2ee;
case 0x55b2ef:c.instructions+=1;goto B55b2ef;
case 0x55b2f1:goto L55b2f1;
case 0x55b2f6:c.instructions+=1;goto B55b2f6;
case 0x55b2fc:goto L55b2fc;
case 0x55b2fe:c.instructions+=1;goto B55b2fe;
case 0x55b303:goto L55b303;
case 0x55b304:c.instructions+=2;goto B55b304;
case 0x55b305:c.instructions+=1;goto B55b305;
case 0x55b308:goto L55b308;
case 0x55b30d:c.instructions+=1;goto B55b30d;
case 0x55b313:goto L55b313;
case 0x55b319:goto L55b319;
case 0x55b31e:c.instructions+=1;goto B55b31e;
case 0x55b324:goto L55b324;
case 0x55b329:c.instructions+=1;goto B55b329;
case 0x55b32f:goto L55b32f;
case 0x55b333:c.instructions+=4;goto B55b333;
case 0x55b337:c.instructions+=3;goto B55b337;
case 0x55b338:c.instructions+=2;goto B55b338;
case 0x55b339:c.instructions+=1;goto B55b339;
case 0x55b33e:goto L55b33e;
case 0x55b343:c.instructions+=4;goto B55b343;
case 0x55b346:c.instructions+=3;goto B55b346;
case 0x55b348:c.instructions+=2;goto B55b348;
case 0x55b34f:c.instructions+=1;goto B55b34f;
case 0x55b351:goto L55b351;
case 0x55b358:goto L55b358;
case 0x55b35b:c.instructions+=7;goto B55b35b;
case 0x55b35f:c.instructions+=6;goto B55b35f;
case 0x55b360:c.instructions+=5;goto B55b360;
case 0x55b362:c.instructions+=4;goto B55b362;
case 0x55b366:c.instructions+=3;goto B55b366;
case 0x55b367:c.instructions+=2;goto B55b367;
case 0x55b368:c.instructions+=1;goto B55b368;
case 0x55b36a:goto L55b36a;
case 0x55b36f:goto L55b36f;
case 0x55b372:c.instructions+=2;goto B55b372;
case 0x55b374:c.instructions+=1;goto B55b374;
case 0x55b376:goto L55b376;
case 0x55b378:c.instructions+=1;goto B55b378;
case 0x55b37d:goto L55b37d;
case 0x55b37f:goto L55b37f;
case 0x55b384:goto L55b384;
case 0x55b387:c.instructions+=3;goto B55b387;
case 0x55b389:c.instructions+=2;goto B55b389;
case 0x55b38c:c.instructions+=1;goto B55b38c;
case 0x55b38e:goto L55b38e;
case 0x55b390:c.instructions+=1;goto B55b390;
case 0x55b392:goto L55b392;
case 0x55b395:c.instructions+=5;goto B55b395;
case 0x55b397:c.instructions+=4;goto B55b397;
case 0x55b39c:c.instructions+=3;goto B55b39c;
case 0x55b3a1:c.instructions+=2;goto B55b3a1;
case 0x55b3a2:c.instructions+=1;goto B55b3a2;
case 0x55b3a7:goto L55b3a7;
case 0x55b3aa:c.instructions+=2;goto B55b3aa;
case 0x55b3ae:c.instructions+=1;goto B55b3ae;
case 0x55b3b0:goto L55b3b0;
case 0x55b3b2:c.instructions+=1;goto B55b3b2;
case 0x55b3b4:goto L55b3b4;
case 0x55b3b7:c.instructions+=5;goto B55b3b7;
case 0x55b3b9:c.instructions+=4;goto B55b3b9;
case 0x55b3be:c.instructions+=3;goto B55b3be;
case 0x55b3c3:c.instructions+=2;goto B55b3c3;
case 0x55b3c4:c.instructions+=1;goto B55b3c4;
case 0x55b3c9:goto L55b3c9;
case 0x55b3cc:c.instructions+=2;goto B55b3cc;
case 0x55b3d0:c.instructions+=1;goto B55b3d0;
case 0x55b3d2:goto L55b3d2;
case 0x55b3d7:c.instructions+=1;goto B55b3d7;
case 0x55b3dd:goto L55b3dd;
case 0x55b3e2:c.instructions+=4;goto B55b3e2;
case 0x55b3e4:c.instructions+=3;goto B55b3e4;
case 0x55b3e5:c.instructions+=2;goto B55b3e5;
case 0x55b3e8:c.instructions+=1;goto B55b3e8;
case 0x55b3ea:goto L55b3ea;
case 0x55b3f0:c.instructions+=2;goto B55b3f0;
case 0x55b3f2:c.instructions+=1;goto B55b3f2;
case 0x55b3f4:goto L55b3f4;
case 0x55b3f5:c.instructions+=3;goto B55b3f5;
case 0x55b3fa:c.instructions+=2;goto B55b3fa;
case 0x55b3fb:c.instructions+=1;goto B55b3fb;
case 0x55b400:goto L55b400;
case 0x55b405:c.instructions+=2;goto B55b405;
case 0x55b406:c.instructions+=1;goto B55b406;
case 0x55b40b:goto L55b40b;
case 0x55b40e:c.instructions+=1;goto B55b40e;
case 0x55b410:goto L55b410;
case 0x55b415:c.instructions+=2;goto B55b415;
case 0x55b416:c.instructions+=1;goto B55b416;
case 0x55b41b:goto L55b41b;
case 0x55b41e:goto L55b41e;
case 0x55b423:c.instructions+=2;goto B55b423;
case 0x55b425:c.instructions+=1;goto B55b425;
case 0x55b427:goto L55b427;
case 0x55b42d:c.instructions+=2;goto B55b42d;
case 0x55b42f:c.instructions+=1;goto B55b42f;
case 0x55b431:goto L55b431;
case 0x55b432:c.instructions+=3;goto B55b432;
case 0x55b437:c.instructions+=2;goto B55b437;
case 0x55b438:c.instructions+=1;goto B55b438;
case 0x55b43d:goto L55b43d;
case 0x55b442:c.instructions+=2;goto B55b442;
case 0x55b443:c.instructions+=1;goto B55b443;
case 0x55b448:goto L55b448;
case 0x55b44b:c.instructions+=1;goto B55b44b;
case 0x55b44d:goto L55b44d;
case 0x55b452:c.instructions+=2;goto B55b452;
case 0x55b453:c.instructions+=1;goto B55b453;
case 0x55b458:goto L55b458;
case 0x55b45b:goto L55b45b;
case 0x55b460:c.instructions+=2;goto B55b460;
case 0x55b462:c.instructions+=1;goto B55b462;
case 0x55b464:goto L55b464;
case 0x55b46a:c.instructions+=2;goto B55b46a;
case 0x55b46c:c.instructions+=1;goto B55b46c;
case 0x55b46e:goto L55b46e;
case 0x55b46f:c.instructions+=3;goto B55b46f;
case 0x55b474:c.instructions+=2;goto B55b474;
case 0x55b475:c.instructions+=1;goto B55b475;
case 0x55b47a:goto L55b47a;
case 0x55b47f:c.instructions+=2;goto B55b47f;
case 0x55b480:c.instructions+=1;goto B55b480;
case 0x55b485:goto L55b485;
case 0x55b488:c.instructions+=1;goto B55b488;
case 0x55b48a:goto L55b48a;
case 0x55b48f:c.instructions+=2;goto B55b48f;
case 0x55b490:c.instructions+=1;goto B55b490;
case 0x55b495:goto L55b495;
case 0x55b498:goto L55b498;
case 0x55b49b:c.instructions+=3;goto B55b49b;
case 0x55b49d:c.instructions+=2;goto B55b49d;
case 0x55b49e:c.instructions+=1;goto B55b49e;
case 0x55b4a0:goto L55b4a0;
case 0x55b4a5:c.instructions+=1;goto B55b4a5;
case 0x55b4aa:goto L55b4aa;
case 0x55b4ad:c.instructions+=2;goto B55b4ad;
case 0x55b4af:c.instructions+=1;goto B55b4af;
case 0x55b4b1:goto L55b4b1;
case 0x55b4b4:c.instructions+=2;goto B55b4b4;
case 0x55b4b7:c.instructions+=1;goto B55b4b7;
case 0x55b4b9:goto L55b4b9;
case 0x55b4bc:c.instructions+=2;goto B55b4bc;
case 0x55b4be:c.instructions+=1;goto B55b4be;
case 0x55b4c0:goto L55b4c0;
case 0x55b4c3:c.instructions+=6;goto B55b4c3;
case 0x55b4c8:c.instructions+=5;goto B55b4c8;
case 0x55b4c9:c.instructions+=4;goto B55b4c9;
case 0x55b4ce:c.instructions+=3;goto B55b4ce;
case 0x55b4d3:c.instructions+=2;goto B55b4d3;
case 0x55b4d8:c.instructions+=1;goto B55b4d8;
case 0x55b4dd:goto L55b4dd;
case 0x55b4df:c.instructions+=1;goto B55b4df;
case 0x55b4e1:goto L55b4e1;
case 0x55b4e6:c.instructions+=2;goto B55b4e6;
case 0x55b4ea:c.instructions+=1;goto B55b4ea;
case 0x55b4ef:goto L55b4ef;
case 0x55b4f1:c.instructions+=4;goto B55b4f1;
case 0x55b4f5:c.instructions+=3;goto B55b4f5;
case 0x55b4f9:c.instructions+=2;goto B55b4f9;
case 0x55b500:c.instructions+=1;goto B55b500;
case 0x55b505:goto L55b505;
case 0x55b506:c.instructions+=2;goto B55b506;
case 0x55b507:c.instructions+=1;goto B55b507;
case 0x55b50a:goto L55b50a;
case 0x55b50b:c.instructions+=1;goto B55b50b;
case 0x55b50e:goto L55b50e;
case 0x55b510:c.instructions+=1;goto B55b510;
case 0x55b515:goto L55b515;
case 0x55b516:c.instructions+=2;goto B55b516;
case 0x55b517:c.instructions+=1;goto B55b517;
case 0x55b520:goto L55b520;
case 0x55b522:c.instructions+=7;goto B55b522;
case 0x55b527:c.instructions+=6;goto B55b527;
case 0x55b52d:c.instructions+=5;goto B55b52d;
case 0x55b52e:c.instructions+=4;goto B55b52e;
case 0x55b535:c.instructions+=3;goto B55b535;
case 0x55b536:c.instructions+=2;goto B55b536;
case 0x55b53b:c.instructions+=1;goto B55b53b;
case 0x55b540:goto L55b540;
case 0x55b543:c.instructions+=4;goto B55b543;
case 0x55b547:c.instructions+=3;goto B55b547;
case 0x55b549:c.instructions+=2;goto B55b549;
case 0x55b551:c.instructions+=1;goto B55b551;
case 0x55b553:goto L55b553;
case 0x55b557:c.instructions+=3;goto B55b557;
case 0x55b558:c.instructions+=2;goto B55b558;
case 0x55b55a:c.instructions+=1;goto B55b55a;
case 0x55b55f:goto L55b55f;
case 0x55b563:c.instructions+=3;goto B55b563;
case 0x55b56a:c.instructions+=2;goto B55b56a;
case 0x55b56d:c.instructions+=1;goto B55b56d;
case 0x55b56e:goto L55b56e;
case 0x55b572:c.instructions+=4;goto B55b572;
case 0x55b574:c.instructions+=3;goto B55b574;
case 0x55b57b:c.instructions+=2;goto B55b57b;
case 0x55b57e:c.instructions+=1;goto B55b57e;
case 0x55b580:goto L55b580;
case 0x55b585:c.instructions+=2;goto B55b585;
case 0x55b587:c.instructions+=1;goto B55b587;
case 0x55b589:goto L55b589;
case 0x55b58c:c.instructions+=3;goto B55b58c;
case 0x55b58e:c.instructions+=2;goto B55b58e;
case 0x55b590:c.instructions+=1;goto B55b590;
case 0x55b595:goto L55b595;
case 0x55b59a:c.instructions+=2;goto B55b59a;
case 0x55b59c:c.instructions+=1;goto B55b59c;
case 0x55b59e:goto L55b59e;
case 0x55b5a0:c.instructions+=2;goto B55b5a0;
case 0x55b5a5:c.instructions+=1;goto B55b5a5;
case 0x55b5aa:goto L55b5aa;
case 0x55b5b0:c.instructions+=1;goto B55b5b0;
case 0x55b5b5:goto L55b5b5;
case 0x55b5c0:goto L55b5c0;
case 0x55b5c5:c.instructions+=6;goto B55b5c5;
case 0x55b5c8:c.instructions+=5;goto B55b5c8;
case 0x55b5ca:c.instructions+=4;goto B55b5ca;
case 0x55b5cb:c.instructions+=3;goto B55b5cb;
case 0x55b5cc:c.instructions+=2;goto B55b5cc;
case 0x55b5ce:c.instructions+=1;goto B55b5ce;
case 0x55b5d0:goto L55b5d0;
case 0x55b5d3:c.instructions+=2;goto B55b5d3;
case 0x55b5d4:c.instructions+=1;goto B55b5d4;
case 0x55b5d9:goto L55b5d9;
case 0x55b5db:c.instructions+=3;goto B55b5db;
case 0x55b5de:c.instructions+=2;goto B55b5de;
case 0x55b5e0:c.instructions+=1;goto B55b5e0;
case 0x55b5e2:goto L55b5e2;
case 0x55b5e5:c.instructions+=3;goto B55b5e5;
case 0x55b5e8:c.instructions+=2;goto B55b5e8;
case 0x55b5eb:c.instructions+=1;goto B55b5eb;
case 0x55b5ee:goto L55b5ee;
case 0x55b5f2:c.instructions+=3;goto B55b5f2;
case 0x55b5f3:c.instructions+=2;goto B55b5f3;
case 0x55b5f5:c.instructions+=1;goto B55b5f5;
case 0x55b5fa:goto L55b5fa;
case 0x55b5fc:c.instructions+=1;goto B55b5fc;
case 0x55b602:goto L55b602;
case 0x55b605:c.instructions+=2;goto B55b605;
case 0x55b606:c.instructions+=1;goto B55b606;
case 0x55b60b:goto L55b60b;
case 0x55b60e:c.instructions+=3;goto B55b60e;
case 0x55b611:c.instructions+=2;goto B55b611;
case 0x55b613:c.instructions+=1;goto B55b613;
case 0x55b615:goto L55b615;
case 0x55b617:c.instructions+=1;goto B55b617;
case 0x55b619:goto L55b619;
case 0x55b61c:c.instructions+=2;goto B55b61c;
case 0x55b61e:c.instructions+=1;goto B55b61e;
case 0x55b620:goto L55b620;
case 0x55b621:c.instructions+=1;goto B55b621;
case 0x55b626:goto L55b626;
case 0x55b629:c.instructions+=2;goto B55b629;
case 0x55b62b:c.instructions+=1;goto B55b62b;
case 0x55b62d:goto L55b62d;
case 0x55b630:c.instructions+=3;goto B55b630;
case 0x55b631:c.instructions+=2;goto B55b631;
case 0x55b636:c.instructions+=1;goto B55b636;
case 0x55b63b:goto L55b63b;
case 0x55b63e:c.instructions+=4;goto B55b63e;
case 0x55b63f:c.instructions+=3;goto B55b63f;
case 0x55b640:c.instructions+=2;goto B55b640;
case 0x55b643:c.instructions+=1;goto B55b643;
case 0x55b646:goto L55b646;
case 0x55b64c:c.instructions+=2;goto B55b64c;
case 0x55b64d:c.instructions+=1;goto B55b64d;
case 0x55b653:goto L55b653;
case 0x55b659:goto L55b659;
case 0x55b65f:c.instructions+=1;goto B55b65f;
case 0x55b665:goto L55b665;
case 0x55b66b:goto L55b66b;
case 0x55b671:c.instructions+=1;goto B55b671;
case 0x55b673:goto L55b673;
case 0x55b679:c.instructions+=1;goto B55b679;
case 0x55b67f:goto L55b67f;
case 0x55b685:c.instructions+=1;goto B55b685;
case 0x55b68b:goto L55b68b;
case 0x55b691:goto L55b691;
case 0x55b697:c.instructions+=1;goto B55b697;
case 0x55b69d:goto L55b69d;
case 0x55b6a3:c.instructions+=1;goto B55b6a3;
case 0x55b6a9:goto L55b6a9;
case 0x55b6ae:goto L55b6ae;
case 0x55b6b3:c.instructions+=2;goto B55b6b3;
case 0x55b6ba:c.instructions+=1;goto B55b6ba;
case 0x55b6bf:goto L55b6bf;
case 0x55b6c1:c.instructions+=1;goto B55b6c1;
case 0x55b6c7:goto L55b6c7;
case 0x55b6c9:c.instructions+=1;goto B55b6c9;
case 0x55b6ce:goto L55b6ce;
case 0x55b6d4:c.instructions+=5;goto B55b6d4;
case 0x55b6d7:c.instructions+=4;goto B55b6d7;
case 0x55b6dd:c.instructions+=3;goto B55b6dd;
case 0x55b6e0:c.instructions+=2;goto B55b6e0;
case 0x55b6e2:c.instructions+=1;goto B55b6e2;
case 0x55b6e4:goto L55b6e4;
case 0x55b6e7:c.instructions+=3;goto B55b6e7;
case 0x55b6ea:c.instructions+=2;goto B55b6ea;
case 0x55b6eb:c.instructions+=1;goto B55b6eb;
case 0x55b6f0:goto L55b6f0;
case 0x55b6f3:c.instructions+=2;goto B55b6f3;
case 0x55b6f5:c.instructions+=1;goto B55b6f5;
case 0x55b6f7:goto L55b6f7;
case 0x55b6fa:c.instructions+=2;goto B55b6fa;
case 0x55b6fb:c.instructions+=1;goto B55b6fb;
case 0x55b700:goto L55b700;
case 0x55b703:goto L55b703;
case 0x55b705:c.instructions+=2;goto B55b705;
case 0x55b707:c.instructions+=1;goto B55b707;
case 0x55b709:goto L55b709;
case 0x55b70b:c.instructions+=4;goto B55b70b;
case 0x55b710:c.instructions+=3;goto B55b710;
case 0x55b715:c.instructions+=2;goto B55b715;
case 0x55b71a:c.instructions+=1;goto B55b71a;
case 0x55b71f:goto L55b71f;
case 0x55b722:c.instructions+=5;goto B55b722;
case 0x55b723:c.instructions+=4;goto B55b723;
case 0x55b724:c.instructions+=3;goto B55b724;
case 0x55b725:c.instructions+=2;goto B55b725;
case 0x55b728:c.instructions+=1;goto B55b728;
case 0x55b72b:goto L55b72b;
case 0x55b72d:c.instructions+=1;goto B55b72d;
case 0x55b732:goto L55b732;
case 0x55b737:goto L55b737;
case 0x55b73d:c.instructions+=1;goto B55b73d;
case 0x55b743:goto L55b743;
case 0x55b746:c.instructions+=3;goto B55b746;
case 0x55b749:c.instructions+=2;goto B55b749;
case 0x55b74b:c.instructions+=1;goto B55b74b;
case 0x55b751:goto L55b751;
case 0x55b756:goto L55b756;
case 0x55b75b:c.instructions+=1;goto B55b75b;
case 0x55b760:goto L55b760;
case 0x55b763:c.instructions+=2;goto B55b763;
case 0x55b765:c.instructions+=1;goto B55b765;
case 0x55b76b:goto L55b76b;
case 0x55b770:c.instructions+=9;goto B55b770;
case 0x55b776:c.instructions+=8;goto B55b776;
case 0x55b778:c.instructions+=7;goto B55b778;
case 0x55b77c:c.instructions+=6;goto B55b77c;
case 0x55b780:c.instructions+=5;goto B55b780;
case 0x55b786:c.instructions+=4;goto B55b786;
case 0x55b78c:c.instructions+=3;goto B55b78c;
case 0x55b78e:c.instructions+=2;goto B55b78e;
case 0x55b791:c.instructions+=1;goto B55b791;
case 0x55b797:goto L55b797;
case 0x55b79c:c.instructions+=1;goto B55b79c;
case 0x55b7a1:goto L55b7a1;
case 0x55b7a4:c.instructions+=2;goto B55b7a4;
case 0x55b7a5:c.instructions+=1;goto B55b7a5;
case 0x55b7aa:goto L55b7aa;
case 0x55b7ad:c.instructions+=3;goto B55b7ad;
case 0x55b7b0:c.instructions+=2;goto B55b7b0;
case 0x55b7b2:c.instructions+=1;goto B55b7b2;
case 0x55b7b8:goto L55b7b8;
case 0x55b7bf:c.instructions+=1;goto B55b7bf;
case 0x55b7c5:goto L55b7c5;
case 0x55b7ca:c.instructions+=1;goto B55b7ca;
case 0x55b7cf:goto L55b7cf;
case 0x55b7d6:c.instructions+=7;goto B55b7d6;
case 0x55b7dd:c.instructions+=6;goto B55b7dd;
case 0x55b7e1:c.instructions+=5;goto B55b7e1;
case 0x55b7e2:c.instructions+=4;goto B55b7e2;
case 0x55b7e3:c.instructions+=3;goto B55b7e3;
case 0x55b7e4:c.instructions+=2;goto B55b7e4;
case 0x55b7e9:c.instructions+=1;goto B55b7e9;
case 0x55b7ee:goto L55b7ee;
case 0x55b7f1:c.instructions+=3;goto B55b7f1;
case 0x55b7f4:c.instructions+=2;goto B55b7f4;
case 0x55b7f6:c.instructions+=1;goto B55b7f6;
case 0x55b7fc:goto L55b7fc;
case 0x55b801:c.instructions+=2;goto B55b801;
case 0x55b803:c.instructions+=1;goto B55b803;
case 0x55b809:goto L55b809;
case 0x55b80e:c.instructions+=1;goto B55b80e;
case 0x55b813:goto L55b813;
case 0x55b816:c.instructions+=2;goto B55b816;
case 0x55b818:c.instructions+=1;goto B55b818;
case 0x55b81e:goto L55b81e;
case 0x55b823:c.instructions+=1;goto B55b823;
case 0x55b828:goto L55b828;
case 0x55b82b:c.instructions+=2;goto B55b82b;
case 0x55b82d:c.instructions+=1;goto B55b82d;
case 0x55b833:goto L55b833;
case 0x55b838:c.instructions+=1;goto B55b838;
case 0x55b83d:goto L55b83d;
case 0x55b840:c.instructions+=2;goto B55b840;
case 0x55b842:c.instructions+=1;goto B55b842;
case 0x55b848:goto L55b848;
case 0x55b84d:c.instructions+=1;goto B55b84d;
case 0x55b852:goto L55b852;
case 0x55b855:c.instructions+=2;goto B55b855;
case 0x55b857:c.instructions+=1;goto B55b857;
case 0x55b85d:goto L55b85d;
case 0x55b862:c.instructions+=1;goto B55b862;
case 0x55b867:goto L55b867;
case 0x55b86a:c.instructions+=2;goto B55b86a;
case 0x55b86c:c.instructions+=1;goto B55b86c;
case 0x55b872:goto L55b872;
case 0x55b877:c.instructions+=1;goto B55b877;
case 0x55b87c:goto L55b87c;
case 0x55b87f:c.instructions+=2;goto B55b87f;
case 0x55b881:c.instructions+=1;goto B55b881;
case 0x55b887:goto L55b887;
case 0x55b88c:c.instructions+=1;goto B55b88c;
case 0x55b891:goto L55b891;
case 0x55b894:c.instructions+=2;goto B55b894;
case 0x55b896:c.instructions+=1;goto B55b896;
case 0x55b89c:goto L55b89c;
case 0x55b8a1:c.instructions+=1;goto B55b8a1;
case 0x55b8a6:goto L55b8a6;
case 0x55b8a9:c.instructions+=2;goto B55b8a9;
case 0x55b8ab:c.instructions+=1;goto B55b8ab;
case 0x55b8b1:goto L55b8b1;
case 0x55b8b6:c.instructions+=1;goto B55b8b6;
case 0x55b8bb:goto L55b8bb;
case 0x55b8be:c.instructions+=2;goto B55b8be;
case 0x55b8c0:c.instructions+=1;goto B55b8c0;
case 0x55b8c6:goto L55b8c6;
case 0x55b8cb:c.instructions+=1;goto B55b8cb;
case 0x55b8d0:goto L55b8d0;
case 0x55b8d3:c.instructions+=2;goto B55b8d3;
case 0x55b8d5:c.instructions+=1;goto B55b8d5;
case 0x55b8db:goto L55b8db;
case 0x55b8e0:c.instructions+=1;goto B55b8e0;
case 0x55b8e5:goto L55b8e5;
case 0x55b8e8:c.instructions+=2;goto B55b8e8;
case 0x55b8ea:c.instructions+=1;goto B55b8ea;
case 0x55b8f0:goto L55b8f0;
case 0x55b8f5:c.instructions+=2;goto B55b8f5;
case 0x55b8f7:c.instructions+=1;goto B55b8f7;
case 0x55b8f9:goto L55b8f9;
case 0x55b8ff:c.instructions+=2;goto B55b8ff;
case 0x55b901:c.instructions+=1;goto B55b901;
case 0x55b906:goto L55b906;
case 0x55b909:c.instructions+=3;goto B55b909;
case 0x55b90a:c.instructions+=2;goto B55b90a;
case 0x55b90f:c.instructions+=1;goto B55b90f;
case 0x55b914:goto L55b914;
case 0x55b917:c.instructions+=5;goto B55b917;
case 0x55b919:c.instructions+=4;goto B55b919;
case 0x55b91e:c.instructions+=3;goto B55b91e;
case 0x55b91f:c.instructions+=2;goto B55b91f;
case 0x55b924:c.instructions+=1;goto B55b924;
case 0x55b929:goto L55b929;
case 0x55b92c:c.instructions+=1;goto B55b92c;
case 0x55b933:goto L55b933;
case 0x55b938:c.instructions+=1;goto B55b938;
case 0x55b93d:goto L55b93d;
case 0x55b940:c.instructions+=1;goto B55b940;
case 0x55b945:goto L55b945;
case 0x55b94b:c.instructions+=1;goto B55b94b;
case 0x55b951:goto L55b951;
case 0x55b957:c.instructions+=1;goto B55b957;
case 0x55b95d:goto L55b95d;
case 0x55b963:c.instructions+=1;goto B55b963;
case 0x55b969:goto L55b969;
case 0x55b970:c.instructions+=1;goto B55b970;
case 0x55b976:goto L55b976;
case 0x55b978:c.instructions+=3;goto B55b978;
case 0x55b97d:c.instructions+=2;goto B55b97d;
case 0x55b982:c.instructions+=1;goto B55b982;
case 0x55b986:goto L55b986;
case 0x55b988:goto L55b988;
case 0x55b98a:c.instructions+=10;goto B55b98a;
case 0x55b98c:c.instructions+=9;goto B55b98c;
case 0x55b990:c.instructions+=8;goto B55b990;
case 0x55b991:c.instructions+=7;goto B55b991;
case 0x55b995:c.instructions+=6;goto B55b995;
case 0x55b996:c.instructions+=5;goto B55b996;
case 0x55b998:c.instructions+=4;goto B55b998;
case 0x55b99d:c.instructions+=3;goto B55b99d;
case 0x55b9a2:c.instructions+=2;goto B55b9a2;
case 0x55b9a6:c.instructions+=1;goto B55b9a6;
case 0x55b9a8:goto L55b9a8;
case 0x55b9a9:c.instructions+=1;goto B55b9a9;
case 0x55b9ae:goto L55b9ae;
case 0x55b9b0:c.instructions+=1;goto B55b9b0;
case 0x55b9b5:goto L55b9b5;
case 0x55b9b7:c.instructions+=2;goto B55b9b7;
case 0x55b9b9:c.instructions+=1;goto B55b9b9;
case 0x55b9bb:goto L55b9bb;
case 0x55b9be:c.instructions+=3;goto B55b9be;
case 0x55b9c3:c.instructions+=2;goto B55b9c3;
case 0x55b9c4:c.instructions+=1;goto B55b9c4;
case 0x55b9c9:goto L55b9c9;
case 0x55b9cc:c.instructions+=2;goto B55b9cc;
case 0x55b9ce:c.instructions+=1;goto B55b9ce;
case 0x55b9d0:goto L55b9d0;
case 0x55b9d3:c.instructions+=1;goto B55b9d3;
case 0x55b9d8:goto L55b9d8;
case 0x55b9d9:c.instructions+=2;goto B55b9d9;
case 0x55b9dc:c.instructions+=1;goto B55b9dc;
case 0x55b9de:goto L55b9de;
case 0x55b9e2:c.instructions+=2;goto B55b9e2;
case 0x55b9e4:c.instructions+=1;goto B55b9e4;
case 0x55b9ea:goto L55b9ea;
case 0x55b9eb:c.instructions+=2;goto B55b9eb;
case 0x55b9f0:c.instructions+=1;goto B55b9f0;
case 0x55b9f5:goto L55b9f5;
case 0x55b9f7:c.instructions+=1;goto B55b9f7;
case 0x55b9fc:goto L55b9fc;
case 0x55ba01:c.instructions+=8;goto B55ba01;
case 0x55ba03:c.instructions+=7;goto B55ba03;
case 0x55ba07:c.instructions+=6;goto B55ba07;
case 0x55ba08:c.instructions+=5;goto B55ba08;
case 0x55ba0a:c.instructions+=4;goto B55ba0a;
case 0x55ba0d:c.instructions+=3;goto B55ba0d;
case 0x55ba12:c.instructions+=2;goto B55ba12;
case 0x55ba13:c.instructions+=1;goto B55ba13;
case 0x55ba18:goto L55ba18;
case 0x55ba1b:c.instructions+=2;goto B55ba1b;
case 0x55ba1c:c.instructions+=1;goto B55ba1c;
case 0x55ba21:goto L55ba21;
case 0x55ba24:c.instructions+=8;goto B55ba24;
case 0x55ba27:c.instructions+=7;goto B55ba27;
case 0x55ba2c:c.instructions+=6;goto B55ba2c;
case 0x55ba2e:c.instructions+=5;goto B55ba2e;
case 0x55ba32:c.instructions+=4;goto B55ba32;
case 0x55ba33:c.instructions+=3;goto B55ba33;
case 0x55ba38:c.instructions+=2;goto B55ba38;
case 0x55ba39:c.instructions+=1;goto B55ba39;
case 0x55ba3e:goto L55ba3e;
case 0x55ba41:c.instructions+=2;goto B55ba41;
case 0x55ba42:c.instructions+=1;goto B55ba42;
case 0x55ba47:goto L55ba47;
case 0x55ba4a:c.instructions+=6;goto B55ba4a;
case 0x55ba4d:c.instructions+=5;goto B55ba4d;
case 0x55ba4f:c.instructions+=4;goto B55ba4f;
case 0x55ba50:c.instructions+=3;goto B55ba50;
case 0x55ba53:c.instructions+=2;goto B55ba53;
case 0x55ba54:c.instructions+=1;goto B55ba54;
case 0x55ba59:goto L55ba59;
case 0x55ba5b:c.instructions+=1;goto B55ba5b;
case 0x55ba60:goto L55ba60;
case 0x55ba64:c.instructions+=3;goto B55ba64;
case 0x55ba66:c.instructions+=2;goto B55ba66;
case 0x55ba6b:c.instructions+=1;goto B55ba6b;
case 0x55ba6d:goto L55ba6d;
case 0x55ba71:goto L55ba71;
case 0x55ba72:c.instructions+=2;goto B55ba72;
case 0x55ba77:c.instructions+=1;goto B55ba77;
case 0x55ba7c:goto L55ba7c;
case 0x55ba80:c.instructions+=4;goto B55ba80;
case 0x55ba83:c.instructions+=3;goto B55ba83;
case 0x55ba85:c.instructions+=2;goto B55ba85;
case 0x55ba8a:c.instructions+=1;goto B55ba8a;
case 0x55ba8c:goto L55ba8c;
case 0x55ba90:goto L55ba90;
case 0x55ba91:c.instructions+=2;goto B55ba91;
case 0x55ba96:c.instructions+=1;goto B55ba96;
case 0x55ba9b:goto L55ba9b;
case 0x55ba9f:c.instructions+=12;goto B55ba9f;
case 0x55baa2:c.instructions+=11;goto B55baa2;
case 0x55baa3:c.instructions+=10;goto B55baa3;
case 0x55baa8:c.instructions+=9;goto B55baa8;
case 0x55baac:c.instructions+=8;goto B55baac;
case 0x55baad:c.instructions+=7;goto B55baad;
case 0x55bab1:c.instructions+=6;goto B55bab1;
case 0x55bab3:c.instructions+=5;goto B55bab3;
case 0x55bab4:c.instructions+=4;goto B55bab4;
case 0x55bab7:c.instructions+=3;goto B55bab7;
case 0x55bab9:c.instructions+=2;goto B55bab9;
case 0x55babe:c.instructions+=1;goto B55babe;
case 0x55bac3:goto L55bac3;
case 0x55bac6:c.instructions+=2;goto B55bac6;
case 0x55bac8:c.instructions+=1;goto B55bac8;
case 0x55bacd:goto L55bacd;
case 0x55bacf:c.instructions+=3;goto B55bacf;
case 0x55bad0:c.instructions+=2;goto B55bad0;
case 0x55bad5:c.instructions+=1;goto B55bad5;
case 0x55bada:goto L55bada;
case 0x55badd:c.instructions+=2;goto B55badd;
case 0x55badf:c.instructions+=1;goto B55badf;
case 0x55bae1:goto L55bae1;
case 0x55bae4:c.instructions+=5;goto B55bae4;
case 0x55bae9:c.instructions+=4;goto B55bae9;
case 0x55baee:c.instructions+=3;goto B55baee;
case 0x55baf3:c.instructions+=2;goto B55baf3;
case 0x55baf4:c.instructions+=1;goto B55baf4;
case 0x55baf9:goto L55baf9;
case 0x55bafc:c.instructions+=2;goto B55bafc;
case 0x55bb01:c.instructions+=1;goto B55bb01;
case 0x55bb06:goto L55bb06;
case 0x55bb0b:c.instructions+=2;goto B55bb0b;
case 0x55bb10:c.instructions+=1;goto B55bb10;
case 0x55bb15:goto L55bb15;
case 0x55bb17:c.instructions+=4;goto B55bb17;
case 0x55bb1c:c.instructions+=3;goto B55bb1c;
case 0x55bb21:c.instructions+=2;goto B55bb21;
case 0x55bb26:c.instructions+=1;goto B55bb26;
case 0x55bb2b:goto L55bb2b;
case 0x55bb30:c.instructions+=1;goto B55bb30;
case 0x55bb35:goto L55bb35;
case 0x55bb36:c.instructions+=7;goto B55bb36;
case 0x55bb39:c.instructions+=6;goto B55bb39;
case 0x55bb3b:c.instructions+=5;goto B55bb3b;
case 0x55bb3d:c.instructions+=4;goto B55bb3d;
case 0x55bb42:c.instructions+=3;goto B55bb42;
case 0x55bb47:c.instructions+=2;goto B55bb47;
case 0x55bb48:c.instructions+=1;goto B55bb48;
case 0x55bb4a:goto L55bb4a;
case 0x55bb4f:c.instructions+=2;goto B55bb4f;
case 0x55bb54:c.instructions+=1;goto B55bb54;
case 0x55bb59:goto L55bb59;
case 0x55bb5b:c.instructions+=4;goto B55bb5b;
case 0x55bb60:c.instructions+=3;goto B55bb60;
case 0x55bb65:c.instructions+=2;goto B55bb65;
case 0x55bb6a:c.instructions+=1;goto B55bb6a;
case 0x55bb6f:goto L55bb6f;
case 0x55bb74:c.instructions+=1;goto B55bb74;
case 0x55bb79:goto L55bb79;
case 0x55bb7c:c.instructions+=6;goto B55bb7c;
case 0x55bb7d:c.instructions+=5;goto B55bb7d;
case 0x55bb7f:c.instructions+=4;goto B55bb7f;
case 0x55bb81:c.instructions+=3;goto B55bb81;
case 0x55bb86:c.instructions+=2;goto B55bb86;
case 0x55bb8b:c.instructions+=1;goto B55bb8b;
case 0x55bb8c:goto L55bb8c;
case 0x55bb91:goto L55bb91;
case 0x55bb94:goto L55bb94;
case 0x55bb98:c.instructions+=1;goto B55bb98;
case 0x55bb99:goto L55bb99;
case 0x55bb9e:c.instructions+=2;goto B55bb9e;
case 0x55bba5:c.instructions+=1;goto B55bba5;
case 0x55bbaa:goto L55bbaa;
case 0x55bbad:c.instructions+=2;goto B55bbad;
case 0x55bbaf:c.instructions+=1;goto B55bbaf;
case 0x55bbb5:goto L55bbb5;
case 0x55bbba:c.instructions+=5;goto B55bbba;
case 0x55bbbd:c.instructions+=4;goto B55bbbd;
case 0x55bbc0:c.instructions+=3;goto B55bbc0;
case 0x55bbc3:c.instructions+=2;goto B55bbc3;
case 0x55bbc6:c.instructions+=1;goto B55bbc6;
case 0x55bbcb:goto L55bbcb;
case 0x55bbcd:c.instructions+=1;goto B55bbcd;
case 0x55bbd2:goto L55bbd2;
case 0x55bbd7:goto L55bbd7;
case 0x55bbdc:c.instructions+=1;goto B55bbdc;
case 0x55bbe1:goto L55bbe1;
case 0x55bbe4:c.instructions+=2;goto B55bbe4;
case 0x55bbe5:c.instructions+=1;goto B55bbe5;
case 0x55bbea:goto L55bbea;
case 0x55bbee:c.instructions+=4;goto B55bbee;
case 0x55bbf1:c.instructions+=3;goto B55bbf1;
case 0x55bbf4:c.instructions+=2;goto B55bbf4;
case 0x55bbf6:c.instructions+=1;goto B55bbf6;
case 0x55bbf8:goto L55bbf8;
case 0x55bbfd:c.instructions+=1;goto B55bbfd;
case 0x55bc02:goto L55bc02;
case 0x55bc05:c.instructions+=3;goto B55bc05;
case 0x55bc08:c.instructions+=2;goto B55bc08;
case 0x55bc0a:c.instructions+=1;goto B55bc0a;
case 0x55bc0c:goto L55bc0c;
case 0x55bc11:c.instructions+=1;goto B55bc11;
case 0x55bc16:goto L55bc16;
case 0x55bc19:c.instructions+=3;goto B55bc19;
case 0x55bc1b:c.instructions+=2;goto B55bc1b;
case 0x55bc1c:c.instructions+=1;goto B55bc1c;
case 0x55bc21:goto L55bc21;
case 0x55bc24:c.instructions+=5;goto B55bc24;
case 0x55bc27:c.instructions+=4;goto B55bc27;
case 0x55bc28:c.instructions+=3;goto B55bc28;
case 0x55bc2d:c.instructions+=2;goto B55bc2d;
case 0x55bc2e:c.instructions+=1;goto B55bc2e;
case 0x55bc33:goto L55bc33;
case 0x55bc36:goto L55bc36;
case 0x55bc3b:c.instructions+=1;goto B55bc3b;
case 0x55bc40:goto L55bc40;
case 0x55bc43:c.instructions+=1;goto B55bc43;
case 0x55bc45:goto L55bc45;
case 0x55bc4b:c.instructions+=1;goto B55bc4b;
case 0x55bc4d:goto L55bc4d;
case 0x55bc52:c.instructions+=1;goto B55bc52;
case 0x55bc54:goto L55bc54;
case 0x55bc5a:c.instructions+=1;goto B55bc5a;
case 0x55bc5f:goto L55bc5f;
case 0x55bc61:c.instructions+=1;goto B55bc61;
case 0x55bc63:goto L55bc63;
case 0x55bc67:c.instructions+=8;goto B55bc67;
case 0x55bc6b:c.instructions+=7;goto B55bc6b;
case 0x55bc6e:c.instructions+=6;goto B55bc6e;
case 0x55bc6f:c.instructions+=5;goto B55bc6f;
case 0x55bc71:c.instructions+=4;goto B55bc71;
case 0x55bc72:c.instructions+=3;goto B55bc72;
case 0x55bc73:c.instructions+=2;goto B55bc73;
case 0x55bc75:c.instructions+=1;goto B55bc75;
case 0x55bc78:goto L55bc78;
case 0x55bc79:goto L55bc79;
case 0x55bc7a:c.instructions+=3;goto B55bc7a;
case 0x55bc7b:c.instructions+=2;goto B55bc7b;
case 0x55bc7e:c.instructions+=1;goto B55bc7e;
case 0x55bc90:goto L55bc90;
case 0x55bc91:c.instructions+=7;goto B55bc91;
case 0x55bc93:c.instructions+=6;goto B55bc93;
case 0x55bc98:c.instructions+=5;goto B55bc98;
case 0x55bc99:c.instructions+=4;goto B55bc99;
case 0x55bc9c:c.instructions+=3;goto B55bc9c;
case 0x55bc9d:c.instructions+=2;goto B55bc9d;
case 0x55bc9e:c.instructions+=1;goto B55bc9e;
case 0x55bca3:goto L55bca3;
case 0x55bca6:c.instructions+=2;goto B55bca6;
case 0x55bca8:c.instructions+=1;goto B55bca8;
case 0x55bcae:goto L55bcae;
case 0x55bcb4:c.instructions+=3;goto B55bcb4;
case 0x55bcb5:c.instructions+=2;goto B55bcb5;
case 0x55bcb6:c.instructions+=1;goto B55bcb6;
case 0x55bcbb:goto L55bcbb;
case 0x55bcbe:c.instructions+=2;goto B55bcbe;
case 0x55bcc0:c.instructions+=1;goto B55bcc0;
case 0x55bcc2:goto L55bcc2;
case 0x55bcc8:c.instructions+=3;goto B55bcc8;
case 0x55bcc9:c.instructions+=2;goto B55bcc9;
case 0x55bcca:c.instructions+=1;goto B55bcca;
case 0x55bccf:goto L55bccf;
case 0x55bcd2:c.instructions+=2;goto B55bcd2;
case 0x55bcd4:c.instructions+=1;goto B55bcd4;
case 0x55bcd6:goto L55bcd6;
case 0x55bcdb:c.instructions+=3;goto B55bcdb;
case 0x55bcdc:c.instructions+=2;goto B55bcdc;
case 0x55bcdd:c.instructions+=1;goto B55bcdd;
case 0x55bce2:goto L55bce2;
case 0x55bce5:c.instructions+=2;goto B55bce5;
case 0x55bce7:c.instructions+=1;goto B55bce7;
case 0x55bce9:goto L55bce9;
case 0x55bcef:c.instructions+=3;goto B55bcef;
case 0x55bcf0:c.instructions+=2;goto B55bcf0;
case 0x55bcf1:c.instructions+=1;goto B55bcf1;
case 0x55bcf6:goto L55bcf6;
case 0x55bcf9:c.instructions+=2;goto B55bcf9;
case 0x55bcfb:c.instructions+=1;goto B55bcfb;
case 0x55bcfd:goto L55bcfd;
case 0x55bd03:c.instructions+=3;goto B55bd03;
case 0x55bd04:c.instructions+=2;goto B55bd04;
case 0x55bd05:c.instructions+=1;goto B55bd05;
case 0x55bd0a:goto L55bd0a;
case 0x55bd0d:c.instructions+=2;goto B55bd0d;
case 0x55bd0f:c.instructions+=1;goto B55bd0f;
case 0x55bd11:goto L55bd11;
case 0x55bd16:c.instructions+=3;goto B55bd16;
case 0x55bd17:c.instructions+=2;goto B55bd17;
case 0x55bd18:c.instructions+=1;goto B55bd18;
case 0x55bd1d:goto L55bd1d;
case 0x55bd20:c.instructions+=2;goto B55bd20;
case 0x55bd22:c.instructions+=1;goto B55bd22;
case 0x55bd24:goto L55bd24;
case 0x55bd29:c.instructions+=1;goto B55bd29;
case 0x55bd2e:goto L55bd2e;
case 0x55bd2f:c.instructions+=2;goto B55bd2f;
case 0x55bd30:c.instructions+=1;goto B55bd30;
case 0x55bd33:goto L55bd33;
case 0x55bd38:c.instructions+=1;goto B55bd38;
case 0x55bd3d:goto L55bd3d;
case 0x55bd42:c.instructions+=3;goto B55bd42;
case 0x55bd47:c.instructions+=2;goto B55bd47;
case 0x55bd4c:c.instructions+=1;goto B55bd4c;
case 0x55bd51:goto L55bd51;
case 0x55bd52:c.instructions+=2;goto B55bd52;
case 0x55bd53:c.instructions+=1;goto B55bd53;
case 0x55bd60:goto L55bd60;
case 0x55bd63:c.instructions+=10;goto B55bd63;
case 0x55bd64:c.instructions+=9;goto B55bd64;
case 0x55bd65:c.instructions+=8;goto B55bd65;
case 0x55bd66:c.instructions+=7;goto B55bd66;
case 0x55bd67:c.instructions+=6;goto B55bd67;
case 0x55bd69:c.instructions+=5;goto B55bd69;
case 0x55bd6c:c.instructions+=4;goto B55bd6c;
case 0x55bd6f:c.instructions+=3;goto B55bd6f;
case 0x55bd73:c.instructions+=2;goto B55bd73;
case 0x55bd75:c.instructions+=1;goto B55bd75;
case 0x55bd7a:goto L55bd7a;
case 0x55bd7d:c.instructions+=5;goto B55bd7d;
case 0x55bd80:c.instructions+=4;goto B55bd80;
case 0x55bd82:c.instructions+=3;goto B55bd82;
case 0x55bd84:c.instructions+=2;goto B55bd84;
case 0x55bd88:c.instructions+=1;goto B55bd88;
case 0x55bd8a:goto L55bd8a;
case 0x55bd90:goto L55bd90;
case 0x55bd94:c.instructions+=4;goto B55bd94;
case 0x55bd97:c.instructions+=3;goto B55bd97;
case 0x55bd98:c.instructions+=2;goto B55bd98;
case 0x55bd99:c.instructions+=1;goto B55bd99;
case 0x55bd9e:goto L55bd9e;
case 0x55bda1:c.instructions+=2;goto B55bda1;
case 0x55bda3:c.instructions+=1;goto B55bda3;
case 0x55bda5:goto L55bda5;
case 0x55bda7:goto L55bda7;
case 0x55bda9:c.instructions+=2;goto B55bda9;
case 0x55bdab:c.instructions+=1;goto B55bdab;
case 0x55bdad:goto L55bdad;
case 0x55bdaf:c.instructions+=1;goto B55bdaf;
case 0x55bdb1:goto L55bdb1;
case 0x55bdb4:c.instructions+=3;goto B55bdb4;
case 0x55bdba:c.instructions+=2;goto B55bdba;
case 0x55bdbc:c.instructions+=1;goto B55bdbc;
case 0x55bdbe:goto L55bdbe;
case 0x55bdc1:c.instructions+=5;goto B55bdc1;
case 0x55bdc5:c.instructions+=4;goto B55bdc5;
case 0x55bdc7:c.instructions+=3;goto B55bdc7;
case 0x55bdc8:c.instructions+=2;goto B55bdc8;
case 0x55bdc9:c.instructions+=1;goto B55bdc9;
case 0x55bdce:goto L55bdce;
case 0x55bdd1:c.instructions+=4;goto B55bdd1;
case 0x55bdd4:c.instructions+=3;goto B55bdd4;
case 0x55bdd5:c.instructions+=2;goto B55bdd5;
case 0x55bdd7:c.instructions+=1;goto B55bdd7;
case 0x55bddc:goto L55bddc;
case 0x55bddd:c.instructions+=5;goto B55bddd;
case 0x55bdde:c.instructions+=4;goto B55bdde;
case 0x55bddf:c.instructions+=3;goto B55bddf;
case 0x55bde0:c.instructions+=2;goto B55bde0;
case 0x55bde3:c.instructions+=1;goto B55bde3;
case 0x55bdf0:goto L55bdf0;
case 0x55bdf3:c.instructions+=9;goto B55bdf3;
case 0x55bdf4:c.instructions+=8;goto B55bdf4;
case 0x55bdf6:c.instructions+=7;goto B55bdf6;
case 0x55bdf9:c.instructions+=6;goto B55bdf9;
case 0x55bdfc:c.instructions+=5;goto B55bdfc;
case 0x55be00:c.instructions+=4;goto B55be00;
case 0x55be01:c.instructions+=3;goto B55be01;
case 0x55be03:c.instructions+=2;goto B55be03;
case 0x55be07:c.instructions+=1;goto B55be07;
case 0x55be0c:goto L55be0c;
case 0x55be0e:c.instructions+=4;goto B55be0e;
case 0x55be13:c.instructions+=3;goto B55be13;
case 0x55be14:c.instructions+=2;goto B55be14;
case 0x55be18:c.instructions+=1;goto B55be18;
case 0x55be1d:goto L55be1d;
case 0x55be20:c.instructions+=2;goto B55be20;
case 0x55be22:c.instructions+=1;goto B55be22;
case 0x55be24:goto L55be24;
case 0x55be2a:c.instructions+=2;goto B55be2a;
case 0x55be2c:c.instructions+=1;goto B55be2c;
case 0x55be2e:goto L55be2e;
case 0x55be31:c.instructions+=5;goto B55be31;
case 0x55be32:c.instructions+=4;goto B55be32;
case 0x55be35:c.instructions+=3;goto B55be35;
case 0x55be36:c.instructions+=2;goto B55be36;
case 0x55be37:c.instructions+=1;goto B55be37;
case 0x55be3c:goto L55be3c;
case 0x55be3d:c.instructions+=4;goto B55be3d;
case 0x55be42:c.instructions+=3;goto B55be42;
case 0x55be43:c.instructions+=2;goto B55be43;
case 0x55be46:c.instructions+=1;goto B55be46;
case 0x55be4b:goto L55be4b;
case 0x55be4c:c.instructions+=3;goto B55be4c;
case 0x55be51:c.instructions+=2;goto B55be51;
case 0x55be52:c.instructions+=1;goto B55be52;
case 0x55be57:goto L55be57;
case 0x55be5a:c.instructions+=2;goto B55be5a;
case 0x55be5c:c.instructions+=1;goto B55be5c;
case 0x55be5e:goto L55be5e;
case 0x55be63:c.instructions+=2;goto B55be63;
case 0x55be64:c.instructions+=1;goto B55be64;
case 0x55be69:goto L55be69;
case 0x55be6c:c.instructions+=2;goto B55be6c;
case 0x55be6e:c.instructions+=1;goto B55be6e;
case 0x55be70:goto L55be70;
case 0x55be73:c.instructions+=4;goto B55be73;
case 0x55be75:c.instructions+=3;goto B55be75;
case 0x55be77:c.instructions+=2;goto B55be77;
case 0x55be79:c.instructions+=1;goto B55be79;
case 0x55be7b:goto L55be7b;
case 0x55be80:goto L55be80;
case 0x55be84:c.instructions+=4;goto B55be84;
case 0x55be87:c.instructions+=3;goto B55be87;
case 0x55be88:c.instructions+=2;goto B55be88;
case 0x55be89:c.instructions+=1;goto B55be89;
case 0x55be8e:goto L55be8e;
case 0x55be91:c.instructions+=2;goto B55be91;
case 0x55be93:c.instructions+=1;goto B55be93;
case 0x55be95:goto L55be95;
case 0x55be97:goto L55be97;
case 0x55be99:c.instructions+=2;goto B55be99;
case 0x55be9b:c.instructions+=1;goto B55be9b;
case 0x55be9d:goto L55be9d;
case 0x55be9f:c.instructions+=1;goto B55be9f;
case 0x55bea1:goto L55bea1;
case 0x55bea5:c.instructions+=4;goto B55bea5;
case 0x55bea8:c.instructions+=3;goto B55bea8;
case 0x55beae:c.instructions+=2;goto B55beae;
case 0x55beb0:c.instructions+=1;goto B55beb0;
case 0x55beb2:goto L55beb2;
case 0x55beb5:c.instructions+=5;goto B55beb5;
case 0x55beb9:c.instructions+=4;goto B55beb9;
case 0x55bebb:c.instructions+=3;goto B55bebb;
case 0x55bebc:c.instructions+=2;goto B55bebc;
case 0x55bebd:c.instructions+=1;goto B55bebd;
case 0x55bec2:goto L55bec2;
case 0x55bec5:c.instructions+=4;goto B55bec5;
case 0x55bec8:c.instructions+=3;goto B55bec8;
case 0x55bec9:c.instructions+=2;goto B55bec9;
case 0x55becb:c.instructions+=1;goto B55becb;
case 0x55bed0:goto L55bed0;
case 0x55bed1:c.instructions+=4;goto B55bed1;
case 0x55bed2:c.instructions+=3;goto B55bed2;
case 0x55bed3:c.instructions+=2;goto B55bed3;
case 0x55bed6:c.instructions+=1;goto B55bed6;
case 0x55bed7:goto L55bed7;
case 0x55bedc:c.instructions+=2;goto B55bedc;
case 0x55bedf:c.instructions+=1;goto B55bedf;
case 0x55bee1:goto L55bee1;
case 0x55bee4:c.instructions+=1;goto B55bee4;
case 0x55bee6:goto L55bee6;
case 0x55bee8:c.instructions+=1;goto B55bee8;
case 0x55beea:goto L55beea;
case 0x55beec:goto L55beec;
case 0x55bef1:c.instructions+=1;goto B55bef1;
case 0x55bef6:goto L55bef6;
case 0x55befb:c.instructions+=1;goto B55befb;
case 0x55bf00:goto L55bf00;
case 0x55bf06:c.instructions+=2;goto B55bf06;
case 0x55bf08:c.instructions+=1;goto B55bf08;
case 0x55bf0a:goto L55bf0a;
case 0x55bf0f:goto L55bf0f;
case 0x55bf11:c.instructions+=1;goto B55bf11;
case 0x55bf13:goto L55bf13;
case 0x55bf15:c.instructions+=1;goto B55bf15;
case 0x55bf17:goto L55bf17;
case 0x55bf1a:c.instructions+=9;goto B55bf1a;
case 0x55bf1d:c.instructions+=8;goto B55bf1d;
case 0x55bf1f:c.instructions+=7;goto B55bf1f;
case 0x55bf21:c.instructions+=6;goto B55bf21;
case 0x55bf23:c.instructions+=5;goto B55bf23;
case 0x55bf25:c.instructions+=4;goto B55bf25;
case 0x55bf2a:c.instructions+=3;goto B55bf2a;
case 0x55bf2b:c.instructions+=2;goto B55bf2b;
case 0x55bf2c:c.instructions+=1;goto B55bf2c;
case 0x55bf31:goto L55bf31;
case 0x55bf34:c.instructions+=6;goto B55bf34;
case 0x55bf35:c.instructions+=5;goto B55bf35;
case 0x55bf36:c.instructions+=4;goto B55bf36;
case 0x55bf3b:c.instructions+=3;goto B55bf3b;
case 0x55bf3c:c.instructions+=2;goto B55bf3c;
case 0x55bf3f:c.instructions+=1;goto B55bf3f;
case 0x55bf44:goto L55bf44;
case 0x55bf4a:c.instructions+=2;goto B55bf4a;
case 0x55bf4c:c.instructions+=1;goto B55bf4c;
case 0x55bf4e:goto L55bf4e;
case 0x55bf51:c.instructions+=5;goto B55bf51;
case 0x55bf54:c.instructions+=4;goto B55bf54;
case 0x55bf56:c.instructions+=3;goto B55bf56;
case 0x55bf57:c.instructions+=2;goto B55bf57;
case 0x55bf58:c.instructions+=1;goto B55bf58;
case 0x55bf5d:goto L55bf5d;
case 0x55bf60:c.instructions+=4;goto B55bf60;
case 0x55bf63:c.instructions+=3;goto B55bf63;
case 0x55bf64:c.instructions+=2;goto B55bf64;
case 0x55bf66:c.instructions+=1;goto B55bf66;
case 0x55bf6b:goto L55bf6b;
case 0x55bf6c:c.instructions+=5;goto B55bf6c;
case 0x55bf6d:c.instructions+=4;goto B55bf6d;
case 0x55bf72:c.instructions+=3;goto B55bf72;
case 0x55bf73:c.instructions+=2;goto B55bf73;
case 0x55bf76:c.instructions+=1;goto B55bf76;
case 0x55bf80:goto L55bf80;
case 0x55bf81:c.instructions+=3;goto B55bf81;
case 0x55bf83:c.instructions+=2;goto B55bf83;
case 0x55bf8a:c.instructions+=1;goto B55bf8a;
case 0x55bf8c:goto L55bf8c;
case 0x55bf8f:c.instructions+=2;goto B55bf8f;
case 0x55bf94:c.instructions+=1;goto B55bf94;
case 0x55bf99:goto L55bf99;
case 0x55bf9b:c.instructions+=1;goto B55bf9b;
case 0x55bfa0:goto L55bfa0;
case 0x55bfa1:c.instructions+=1;goto B55bfa1;
case 0x55bfb0:goto L55bfb0;
case 0x55bfb1:c.instructions+=3;goto B55bfb1;
case 0x55bfb3:c.instructions+=2;goto B55bfb3;
case 0x55bfba:c.instructions+=1;goto B55bfba;
case 0x55bfbc:goto L55bfbc;
case 0x55bfbe:c.instructions+=2;goto B55bfbe;
case 0x55bfc3:c.instructions+=1;goto B55bfc3;
case 0x55bfc8:goto L55bfc8;
case 0x55bfca:c.instructions+=1;goto B55bfca;
case 0x55bfcc:goto L55bfcc;
case 0x55bfcf:c.instructions+=6;goto B55bfcf;
case 0x55bfd1:c.instructions+=5;goto B55bfd1;
case 0x55bfd3:c.instructions+=4;goto B55bfd3;
case 0x55bfd5:c.instructions+=3;goto B55bfd5;
case 0x55bfd6:c.instructions+=2;goto B55bfd6;
case 0x55bfd8:c.instructions+=1;goto B55bfd8;
case 0x55bfda:goto L55bfda;
case 0x55bfe4:c.instructions+=1;goto B55bfe4;
case 0x55bfe9:goto L55bfe9;
case 0x55bfeb:c.instructions+=1;goto B55bfeb;
case 0x55bff0:goto L55bff0;
case 0x55bff1:c.instructions+=1;goto B55bff1;
case 0x55bff4:goto L55bff4;
case 0x55bffe:c.instructions+=1;goto B55bffe;
default:missing_instruction(c.pc);}
B55b004:L55b004:{c.instructions+=1;NFSU2_TR(0x55b004);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55b194;}}
}
B55b00a:L55b00a:{c.instructions+=5;NFSU2_TR(0x55b00a);
{u32 ea_=u32(r4(R+24)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B55b00d:{NFSU2_TR(0x55b00d);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B55b013:{NFSU2_TR(0x55b013);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B55b015:{NFSU2_TR(0x55b015);
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
B55b018:{NFSU2_TR(0x55b018);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55b194;}}
}
B55b01e:L55b01e:{c.instructions+=3;NFSU2_TR(0x55b01e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+12),(U+0),4);
}
B55b021:{NFSU2_TR(0x55b021);
__builtin_memmove((R+4),(R+12),4);
}
B55b023:{NFSU2_TR(0x55b023);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b028ull));
TAIL_STATIC(0x576410u,576);
}
B55b028:L55b028:{c.instructions+=8;NFSU2_TR(0x55b028);
__builtin_memmove((R+0),gp(0x83856c),4);
}
B55b02d:{NFSU2_TR(0x55b02d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B55b02e:{NFSU2_TR(0x55b02e);
__builtin_memmove(gp(0x83856c),(R+0),4);
}
B55b033:{NFSU2_TR(0x55b033);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B55b036:{NFSU2_TR(0x55b036);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8382a0ull))));
}
B55b03b:{NFSU2_TR(0x55b03b);
__builtin_memmove((R+28),(R+0),4);
}
B55b03d:{NFSU2_TR(0x55b03d);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((U+4),(U+0),1);
w1(R+512,u8((r1(U+4))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+4),u8(0x0ull)));
w1(U+5,u8(u32(r1(U+4))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+5))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+5))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B55b040:{NFSU2_TR(0x55b040);
if(r1(R+518)){{goto L55b082;}}
}
B55b042:L55b042:{c.instructions+=1;NFSU2_TR(0x55b042);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b047ull));
TAIL_STATIC(0x511bc0u,511);
}
B55b047:L55b047:{c.instructions+=5;NFSU2_TR(0x55b047);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55b04a:{NFSU2_TR(0x55b04a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b04b:{NFSU2_TR(0x55b04b);
u8 U[4];
w4(U+0,u32(0x6c6554eeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b050:{NFSU2_TR(0x55b050);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b051:{NFSU2_TR(0x55b051);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b056ull));
TAIL_STATIC(0x4955c0u,495);
}
B55b056:L55b056:{c.instructions+=2;NFSU2_TR(0x55b056);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b057:{NFSU2_TR(0x55b057);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b05cull));
TAIL_STATIC(0x50d350u,50d);
}
B55b05c:L55b05c:{c.instructions+=3;NFSU2_TR(0x55b05c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B55b05f:{NFSU2_TR(0x55b05f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55b061:{NFSU2_TR(0x55b061);
if(r1(R+518)){{goto L55b06f;}}
}
B55b063:L55b063:{c.instructions+=5;NFSU2_TR(0x55b063);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55b066:{NFSU2_TR(0x55b066);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b067:{NFSU2_TR(0x55b067);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b068:{NFSU2_TR(0x55b068);
__builtin_memmove((R+4),(R+12),4);
}
B55b06a:{NFSU2_TR(0x55b06a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b06full));
TAIL_STATIC(0x57daa0u,57d);
}
B55b06f:L55b06f:{c.instructions+=3;NFSU2_TR(0x55b06f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55b072:{NFSU2_TR(0x55b072);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b073:{NFSU2_TR(0x55b073);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b078ull));
TAIL_STATIC(0x537490u,537);
}
B55b078:L55b078:{c.instructions+=6;NFSU2_TR(0x55b078);
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
B55b07b:{NFSU2_TR(0x55b07b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55b07c:{NFSU2_TR(0x55b07c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55b07d:{NFSU2_TR(0x55b07d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B55b07e:{NFSU2_TR(0x55b07e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55b07f:{NFSU2_TR(0x55b07f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55b082:L55b082:{c.instructions+=8;NFSU2_TR(0x55b082);
w4(R+0,u32(0x1ull));
}
B55b087:{NFSU2_TR(0x55b087);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55b088:{NFSU2_TR(0x55b088);
__builtin_memmove(gp(0x8383a8),(R+0),4);
}
B55b08d:{NFSU2_TR(0x55b08d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B55b090:{NFSU2_TR(0x55b090);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55b091:{NFSU2_TR(0x55b091);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B55b092:{NFSU2_TR(0x55b092);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55b093:{NFSU2_TR(0x55b093);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55b096:L55b096:{c.instructions+=2;NFSU2_TR(0x55b096);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xc98356baull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xc98356baull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xc98356baull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B55b09b:{NFSU2_TR(0x55b09b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55b194;}}
}
B55b0a1:L55b0a1:{c.instructions+=6;NFSU2_TR(0x55b0a1);
{u32 ea_=u32(u32(8802712u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B55b0a7:{NFSU2_TR(0x55b0a7);
{u32 ea_=u32(r4(R+24)+u32(76u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B55b0aa:{NFSU2_TR(0x55b0aa);
{u32 ea_=u32(r4(R+24)+u32(76u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B55b0ad:{NFSU2_TR(0x55b0ad);
__builtin_memmove((R+0),gp(0x83a9d8),4);
}
B55b0b2:{NFSU2_TR(0x55b0b2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55b0b4:{NFSU2_TR(0x55b0b4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55b0bd;}}
}
B55b0b6:L55b0b6:{c.instructions+=2;NFSU2_TR(0x55b0b6);
w4(R+28,u32(0x1ull));
}
B55b0bb:{NFSU2_TR(0x55b0bb);
{goto L55b0e3;}
}
B55b0bd:L55b0bd:{c.instructions+=2;NFSU2_TR(0x55b0bd);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55b0c0:{NFSU2_TR(0x55b0c0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55b0c9;}}
}
B55b0c2:L55b0c2:{c.instructions+=2;NFSU2_TR(0x55b0c2);
w4(R+28,u32(0x2ull));
}
B55b0c7:{NFSU2_TR(0x55b0c7);
{goto L55b0e3;}
}
B55b0c9:L55b0c9:{c.instructions+=2;NFSU2_TR(0x55b0c9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55b0cc:{NFSU2_TR(0x55b0cc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55b0d5;}}
}
B55b0ce:L55b0ce:{c.instructions+=2;NFSU2_TR(0x55b0ce);
w4(R+28,u32(0x4ull));
}
B55b0d3:{NFSU2_TR(0x55b0d3);
{goto L55b0e3;}
}
B55b0d5:L55b0d5:{c.instructions+=6;NFSU2_TR(0x55b0d5);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B55b0d7:{NFSU2_TR(0x55b0d7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55b0da:{NFSU2_TR(0x55b0da);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B55b0dd:{NFSU2_TR(0x55b0dd);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B55b0de:{NFSU2_TR(0x55b0de);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x8ull))));
}
B55b0e1:{NFSU2_TR(0x55b0e1);
__builtin_memmove((R+28),(R+4),4);
}
B55b0e3:L55b0e3:{c.instructions+=3;NFSU2_TR(0x55b0e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55b0e6:{NFSU2_TR(0x55b0e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b0e7:{NFSU2_TR(0x55b0e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b0ecull));
TAIL_STATIC(0x52cef0u,52c);
}
B55b0ec:L55b0ec:{c.instructions+=3;NFSU2_TR(0x55b0ec);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55b0ef:{NFSU2_TR(0x55b0ef);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55b0f1:{NFSU2_TR(0x55b0f1);
if(r1(R+518)){{goto L55b0ff;}}
}
B55b0f3:L55b0f3:{c.instructions+=4;NFSU2_TR(0x55b0f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55b0f6:{NFSU2_TR(0x55b0f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55b0f9:{NFSU2_TR(0x55b0f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55b0fc:{NFSU2_TR(0x55b0fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55b0ff:L55b0ff:{c.instructions+=2;NFSU2_TR(0x55b0ff);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+4),(U+0),4);
}
B55b102:{NFSU2_TR(0x55b102);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b107ull));
TAIL_STATIC(0x576460u,576);
}
B55b107:L55b107:{c.instructions+=2;NFSU2_TR(0x55b107);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B55b10d:{NFSU2_TR(0x55b10d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b112ull));
TAIL_STATIC(0x52cdd0u,52c);
}
B55b112:L55b112:{c.instructions+=3;NFSU2_TR(0x55b112);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B55b115:{NFSU2_TR(0x55b115);
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
B55b117:{NFSU2_TR(0x55b117);
if(r1(R+518)){{goto L55b194;}}
}
B55b119:L55b119:{c.instructions+=1;NFSU2_TR(0x55b119);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b11eull));
TAIL_STATIC(0x511bc0u,511);
}
B55b11e:L55b11e:{c.instructions+=2;NFSU2_TR(0x55b11e);
u8 U[8];
__builtin_memmove((U+0),gp(0x838568),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55b125:{NFSU2_TR(0x55b125);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55b157;}}
}
B55b127:L55b127:{c.instructions+=1;NFSU2_TR(0x55b127);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b12cull));
TAIL_STATIC(0x4a9330u,4a9);
}
B55b12c:L55b12c:{c.instructions+=2;NFSU2_TR(0x55b12c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55b12e:{NFSU2_TR(0x55b12e);
if(r1(R+518)){{goto L55b14a;}}
}
B55b130:L55b130:{c.instructions+=3;NFSU2_TR(0x55b130);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55b133:{NFSU2_TR(0x55b133);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b134:{NFSU2_TR(0x55b134);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b139ull));
TAIL_STATIC(0x558f00u,558);
}
B55b139:L55b139:{c.instructions+=3;NFSU2_TR(0x55b139);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55b13c:{NFSU2_TR(0x55b13c);
__builtin_memmove((R+4),(R+24),4);
}
B55b13e:{NFSU2_TR(0x55b13e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b143ull));
TAIL_STATIC(0x54af80u,54a);
}
B55b143:L55b143:{c.instructions+=5;NFSU2_TR(0x55b143);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55b144:{NFSU2_TR(0x55b144);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55b145:{NFSU2_TR(0x55b145);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B55b146:{NFSU2_TR(0x55b146);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55b147:{NFSU2_TR(0x55b147);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55b14a:L55b14a:{c.instructions+=5;NFSU2_TR(0x55b14a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55b14d:{NFSU2_TR(0x55b14d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b14f:{NFSU2_TR(0x55b14f);
u8 U[4];
w4(U+0,u32(0x790734ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b154:{NFSU2_TR(0x55b154);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b155:{NFSU2_TR(0x55b155);
{goto L55b185;}
}
B55b157:L55b157:{c.instructions+=2;NFSU2_TR(0x55b157);
u8 U[8];
__builtin_memmove((U+0),gp(0x8654a4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55b15e:{NFSU2_TR(0x55b15e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55b17a;}}
}
B55b160:L55b160:{c.instructions+=3;NFSU2_TR(0x55b160);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55b163:{NFSU2_TR(0x55b163);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b164:{NFSU2_TR(0x55b164);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b169ull));
TAIL_STATIC(0x558f00u,558);
}
B55b169:L55b169:{c.instructions+=3;NFSU2_TR(0x55b169);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55b16c:{NFSU2_TR(0x55b16c);
__builtin_memmove((R+4),(R+24),4);
}
B55b16e:{NFSU2_TR(0x55b16e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b173ull));
TAIL_STATIC(0x54af80u,54a);
}
B55b173:L55b173:{c.instructions+=5;NFSU2_TR(0x55b173);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55b174:{NFSU2_TR(0x55b174);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55b175:{NFSU2_TR(0x55b175);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B55b176:{NFSU2_TR(0x55b176);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55b177:{NFSU2_TR(0x55b177);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55b17a:L55b17a:{c.instructions+=4;NFSU2_TR(0x55b17a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55b17d:{NFSU2_TR(0x55b17d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b17f:{NFSU2_TR(0x55b17f);
u8 U[4];
w4(U+0,u32(0x790734ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b184:{NFSU2_TR(0x55b184);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b185:L55b185:{c.instructions+=1;NFSU2_TR(0x55b185);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b18aull));
TAIL_STATIC(0x537980u,537);
}
B55b18a:L55b18a:{c.instructions+=3;NFSU2_TR(0x55b18a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B55b18d:{NFSU2_TR(0x55b18d);
__builtin_memmove((R+4),(R+24),4);
}
B55b18f:{NFSU2_TR(0x55b18f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b194ull));
TAIL_STATIC(0x54af80u,54a);
}
B55b194:L55b194:{c.instructions+=5;NFSU2_TR(0x55b194);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55b195:{NFSU2_TR(0x55b195);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55b196:{NFSU2_TR(0x55b196);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B55b197:{NFSU2_TR(0x55b197);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55b198:{NFSU2_TR(0x55b198);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55b1a0:L55b1a0:{c.instructions+=4;NFSU2_TR(0x55b1a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b1a1:{NFSU2_TR(0x55b1a1);
u8 U[4];
w4(U+0,u32(0x799f48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b1a6:{NFSU2_TR(0x55b1a6);
__builtin_memmove((R+24),(R+4),4);
}
B55b1a8:{NFSU2_TR(0x55b1a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b1adull));
TAIL_STATIC(0x52cf60u,52c);
}
B55b1ad:L55b1ad:{c.instructions+=3;NFSU2_TR(0x55b1ad);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55b1b0:{NFSU2_TR(0x55b1b0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55b1b2:{NFSU2_TR(0x55b1b2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55b1bb;}}
}
B55b1b4:L55b1b4:{c.instructions+=2;NFSU2_TR(0x55b1b4);
__builtin_memmove((R+4),(R+24),4);
}
B55b1b6:{NFSU2_TR(0x55b1b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b1bbull));
TAIL_STATIC(0x557ec0u,557);
}
B55b1bb:L55b1bb:{c.instructions+=5;NFSU2_TR(0x55b1bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55b1c1:{NFSU2_TR(0x55b1c1);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B55b1c5:{NFSU2_TR(0x55b1c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55b1c9:{NFSU2_TR(0x55b1c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55b1cb:{NFSU2_TR(0x55b1cb);
if(r1(R+518)){{goto L55b1eb;}}
}
B55b1cd:L55b1cd:{c.instructions+=3;NFSU2_TR(0x55b1cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b1ce:{NFSU2_TR(0x55b1ce);
__builtin_memmove((R+4),(R+24),4);
}
B55b1d0:{NFSU2_TR(0x55b1d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b1d5ull));
TAIL_STATIC(0x5234c0u,523);
}
B55b1d5:L55b1d5:{c.instructions+=6;NFSU2_TR(0x55b1d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55b1db:{NFSU2_TR(0x55b1db);
{u32 ea_=u32(r4(R+4)+u32(76u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B55b1de:{NFSU2_TR(0x55b1de);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55b1e4:{NFSU2_TR(0x55b1e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B55b1e6:{NFSU2_TR(0x55b1e6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b1e8:{NFSU2_TR(0x55b1e8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b1ebull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B55b1eb:L55b1eb:{c.instructions+=3;NFSU2_TR(0x55b1eb);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55b1ef:{NFSU2_TR(0x55b1ef);
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
B55b1f1:{NFSU2_TR(0x55b1f1);
if(r1(R+518)){{goto L55b21b;}}
}
B55b1f3:L55b1f3:{c.instructions+=5;NFSU2_TR(0x55b1f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55b1f9:{NFSU2_TR(0x55b1f9);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B55b1fd:{NFSU2_TR(0x55b1fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b1fe:{NFSU2_TR(0x55b1fe);
__builtin_memmove((R+4),(R+24),4);
}
B55b200:{NFSU2_TR(0x55b200);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b205ull));
TAIL_STATIC(0x5234c0u,523);
}
B55b205:L55b205:{c.instructions+=6;NFSU2_TR(0x55b205);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55b20b:{NFSU2_TR(0x55b20b);
{u32 ea_=u32(r4(R+8)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B55b20e:{NFSU2_TR(0x55b20e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55b214:{NFSU2_TR(0x55b214);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B55b216:{NFSU2_TR(0x55b216);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b218:{NFSU2_TR(0x55b218);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b21bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B55b21b:L55b21b:{c.instructions+=2;NFSU2_TR(0x55b21b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55b21c:{NFSU2_TR(0x55b21c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55b220:L55b220:{c.instructions+=17;NFSU2_TR(0x55b220);
__builtin_memmove((R+0),gp(0x838578),4);
}
B55b225:{NFSU2_TR(0x55b225);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B55b226:{NFSU2_TR(0x55b226);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B55b228:{NFSU2_TR(0x55b228);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B55b22a:{NFSU2_TR(0x55b22a);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xe632eb32ull))));
}
B55b22f:{NFSU2_TR(0x55b22f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x3312f33ull))));
}
B55b234:{NFSU2_TR(0x55b234);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b235:{NFSU2_TR(0x55b235);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55b238:{NFSU2_TR(0x55b238);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b23a:{NFSU2_TR(0x55b23a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b23c:{NFSU2_TR(0x55b23c);
u8 U[4];
w4(U+0,u32(0x11223345ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b241:{NFSU2_TR(0x55b241);
u8 U[4];
w4(U+0,u32(0x11223344ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b246:{NFSU2_TR(0x55b246);
u8 U[4];
w4(U+0,u32(0xbe503981ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b24b:{NFSU2_TR(0x55b24b);
u8 U[4];
w4(U+0,u32(0x88579775ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b250:{NFSU2_TR(0x55b250);
u8 U[4];
w4(U+0,u32(0x78fa24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b255:{NFSU2_TR(0x55b255);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b256:{NFSU2_TR(0x55b256);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b25bull));
TAIL_STATIC(0x558790u,558);
}
B55b25b:L55b25b:{c.instructions+=2;NFSU2_TR(0x55b25b);
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
B55b25e:{NFSU2_TR(0x55b25e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55b260:L55b260:{c.instructions+=6;NFSU2_TR(0x55b260);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b261:{NFSU2_TR(0x55b261);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55b265:{NFSU2_TR(0x55b265);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x911c0a4bull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x911c0a4bull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x911c0a4bull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B55b26a:{NFSU2_TR(0x55b26a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b26b:{NFSU2_TR(0x55b26b);
__builtin_memmove((R+24),(R+4),4);
}
B55b26d:{NFSU2_TR(0x55b26d);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L55b308;}}
}
B55b273:L55b273:{c.instructions+=1;NFSU2_TR(0x55b273);
if(r1(R+518)){{goto L55b515;}}
}
B55b279:L55b279:{c.instructions+=2;NFSU2_TR(0x55b279);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x172176e8ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x172176e8ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55b27e:{NFSU2_TR(0x55b27e);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L55b2f1;}}
}
B55b280:L55b280:{c.instructions+=1;NFSU2_TR(0x55b280);
if(r1(R+518)){{goto L55b2e4;}}
}
B55b282:L55b282:{c.instructions+=2;NFSU2_TR(0x55b282);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x36fad7ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B55b287:{NFSU2_TR(0x55b287);
if(r1(R+518)){{goto L55b2b4;}}
}
B55b289:L55b289:{c.instructions+=2;NFSU2_TR(0x55b289);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x10eb386dull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x10eb386dull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x10eb386dull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B55b28e:{NFSU2_TR(0x55b28e);
if(r1(R+518)){{goto L55b2a1;}}
}
B55b290:L55b290:{c.instructions+=2;NFSU2_TR(0x55b290);
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
B55b291:{NFSU2_TR(0x55b291);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55b515;}}
}
B55b297:L55b297:{c.instructions+=1;NFSU2_TR(0x55b297);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b29cull));
TAIL_STATIC(0x54b090u,54b);
}
B55b29c:L55b29c:{c.instructions+=3;NFSU2_TR(0x55b29c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55b29d:{NFSU2_TR(0x55b29d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B55b29e:{NFSU2_TR(0x55b29e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55b2a1:L55b2a1:{c.instructions+=5;NFSU2_TR(0x55b2a1);
s1(0x7fa29c,u8(0x0ull));
}
B55b2a8:{NFSU2_TR(0x55b2a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B55b2af:{NFSU2_TR(0x55b2af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55b2b0:{NFSU2_TR(0x55b2b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B55b2b1:{NFSU2_TR(0x55b2b1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55b2b4:L55b2b4:{c.instructions+=3;NFSU2_TR(0x55b2b4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B55b2b7:{NFSU2_TR(0x55b2b7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55b2b9:{NFSU2_TR(0x55b2b9);
if(r1(R+518)){{goto L55b2cd;}}
}
B55b2bb:L55b2bb:{c.instructions+=2;NFSU2_TR(0x55b2bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55b2be:{NFSU2_TR(0x55b2be);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b2bf:L55b2bf:{c.instructions+=2;NFSU2_TR(0x55b2bf);
w4(R+4,u32(0x832dacull));
}
B55b2c4:{NFSU2_TR(0x55b2c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b2c9ull));
TAIL_STATIC(0x488aa0u,488);
}
B55b2c9:L55b2c9:{c.instructions+=1;NFSU2_TR(0x55b2c9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B55b2cd:L55b2cd:{c.instructions+=3;NFSU2_TR(0x55b2cd);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x72ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B55b2d0:{NFSU2_TR(0x55b2d0);
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
B55b2d2:{NFSU2_TR(0x55b2d2);
if(r1(R+518)){{goto L55b515;}}
}
B55b2d8:L55b2d8:{c.instructions+=2;NFSU2_TR(0x55b2d8);
__builtin_memmove((R+4),(R+24),4);
}
B55b2da:{NFSU2_TR(0x55b2da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b2dfull));
TAIL_STATIC(0x54b090u,54b);
}
B55b2df:L55b2df:{c.instructions+=3;NFSU2_TR(0x55b2df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55b2e0:{NFSU2_TR(0x55b2e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B55b2e1:{NFSU2_TR(0x55b2e1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55b2e4:L55b2e4:{c.instructions+=3;NFSU2_TR(0x55b2e4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B55b2e7:{NFSU2_TR(0x55b2e7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55b2e9:{NFSU2_TR(0x55b2e9);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x55b2cdu);}goto L55b2cd;}}
}
B55b2eb:L55b2eb:{c.instructions+=3;NFSU2_TR(0x55b2eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55b2ee:{NFSU2_TR(0x55b2ee);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b2ef:{NFSU2_TR(0x55b2ef);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x55b2bfu);}goto L55b2bf;}
}
B55b2f1:L55b2f1:{c.instructions+=2;NFSU2_TR(0x55b2f1);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x406415e3ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x406415e3ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x406415e3ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B55b2f6:{NFSU2_TR(0x55b2f6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55b515;}}
}
B55b2fc:L55b2fc:{c.instructions+=2;NFSU2_TR(0x55b2fc);
__builtin_memmove((R+4),(R+24),4);
}
B55b2fe:{NFSU2_TR(0x55b2fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b303ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x55b220u);}goto L55b220;}
}
B55b303:L55b303:{c.instructions+=3;NFSU2_TR(0x55b303);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55b304:{NFSU2_TR(0x55b304);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B55b305:{NFSU2_TR(0x55b305);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55b308:L55b308:{c.instructions+=2;NFSU2_TR(0x55b308);
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
B55b30d:{NFSU2_TR(0x55b30d);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L55b3d2;}}
}
B55b313:L55b313:{c.instructions+=1;NFSU2_TR(0x55b313);
if(r1(R+518)){{goto L55b515;}}
}
B55b319:L55b319:{c.instructions+=2;NFSU2_TR(0x55b319);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x9120409eull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x9120409eull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x9120409eull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B55b31e:{NFSU2_TR(0x55b31e);
if(r1(R+518)){{goto L55b515;}}
}
B55b324:L55b324:{c.instructions+=2;NFSU2_TR(0x55b324);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x9803f6e2ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x9803f6e2ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x9803f6e2ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B55b329:{NFSU2_TR(0x55b329);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55b515;}}
}
B55b32f:L55b32f:{c.instructions+=5;NFSU2_TR(0x55b32f);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B55b333:{NFSU2_TR(0x55b333);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B55b337:{NFSU2_TR(0x55b337);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b338:{NFSU2_TR(0x55b338);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b339:{NFSU2_TR(0x55b339);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b33eull));
TAIL_STATIC(0x50cd70u,50c);
}
B55b33e:L55b33e:{c.instructions+=5;NFSU2_TR(0x55b33e);
__builtin_memmove((R+0),gp(0x8763f0),1);
}
B55b343:{NFSU2_TR(0x55b343);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B55b346:{NFSU2_TR(0x55b346);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55b348:{NFSU2_TR(0x55b348);
w4(R+0,u32(m1(0x8763f2)));
}
B55b34f:{NFSU2_TR(0x55b34f);
if(r1(R+518)){{goto L55b358;}}
}
B55b351:L55b351:{c.instructions+=1;NFSU2_TR(0x55b351);
w4(R+0,u32(m1(0x8763f5)));
}
B55b358:L55b358:{c.instructions+=8;NFSU2_TR(0x55b358);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55b35b:{NFSU2_TR(0x55b35b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55b35f:{NFSU2_TR(0x55b35f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b360:{NFSU2_TR(0x55b360);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55b362:{NFSU2_TR(0x55b362);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55b366:{NFSU2_TR(0x55b366);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b367:{NFSU2_TR(0x55b367);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b368:{NFSU2_TR(0x55b368);
if(r1(R+518)){{goto L55b37f;}}
}
B55b36a:L55b36a:{c.instructions+=1;NFSU2_TR(0x55b36a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b36full));
TAIL_STATIC(0x52d020u,52d);
}
B55b36f:L55b36f:{c.instructions+=3;NFSU2_TR(0x55b36f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B55b372:{NFSU2_TR(0x55b372);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55b374:{NFSU2_TR(0x55b374);
if(r1(R+518)){{goto L55b3dd;}}
}
B55b376:L55b376:{c.instructions+=2;NFSU2_TR(0x55b376);
__builtin_memmove((R+4),(R+24),4);
}
B55b378:{NFSU2_TR(0x55b378);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b37dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x55b220u);}goto L55b220;}
}
B55b37d:L55b37d:{c.instructions+=1;NFSU2_TR(0x55b37d);
{goto L55b3dd;}
}
B55b37f:L55b37f:{c.instructions+=1;NFSU2_TR(0x55b37f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b384ull));
TAIL_STATIC(0x52d020u,52d);
}
B55b384:L55b384:{c.instructions+=4;NFSU2_TR(0x55b384);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B55b387:{NFSU2_TR(0x55b387);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55b389:{NFSU2_TR(0x55b389);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B55b38c:{NFSU2_TR(0x55b38c);
if(r1(R+518)){{goto L55b3b0;}}
}
B55b38e:L55b38e:{c.instructions+=2;NFSU2_TR(0x55b38e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55b390:{NFSU2_TR(0x55b390);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55b3dd;}}
}
B55b392:L55b392:{c.instructions+=6;NFSU2_TR(0x55b392);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55b395:{NFSU2_TR(0x55b395);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b397:{NFSU2_TR(0x55b397);
u8 U[4];
w4(U+0,u32(0x78f9c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b39c:{NFSU2_TR(0x55b39c);
u8 U[4];
w4(U+0,u32(0x69ba0838ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b3a1:{NFSU2_TR(0x55b3a1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b3a2:{NFSU2_TR(0x55b3a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b3a7ull));
TAIL_STATIC(0x537c00u,537);
}
B55b3a7:L55b3a7:{c.instructions+=3;NFSU2_TR(0x55b3a7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B55b3aa:{NFSU2_TR(0x55b3aa);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B55b3ae:{NFSU2_TR(0x55b3ae);
{goto L55b3dd;}
}
B55b3b0:L55b3b0:{c.instructions+=2;NFSU2_TR(0x55b3b0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55b3b2:{NFSU2_TR(0x55b3b2);
if(r1(R+518)){{goto L55b3dd;}}
}
B55b3b4:L55b3b4:{c.instructions+=6;NFSU2_TR(0x55b3b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55b3b7:{NFSU2_TR(0x55b3b7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b3b9:{NFSU2_TR(0x55b3b9);
u8 U[4];
w4(U+0,u32(0x78f9d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b3be:{NFSU2_TR(0x55b3be);
u8 U[4];
w4(U+0,u32(0x69ba0838ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b3c3:{NFSU2_TR(0x55b3c3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b3c4:{NFSU2_TR(0x55b3c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b3c9ull));
TAIL_STATIC(0x537c00u,537);
}
B55b3c9:L55b3c9:{c.instructions+=3;NFSU2_TR(0x55b3c9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B55b3cc:{NFSU2_TR(0x55b3cc);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B55b3d0:{NFSU2_TR(0x55b3d0);
{goto L55b3dd;}
}
B55b3d2:L55b3d2:{c.instructions+=2;NFSU2_TR(0x55b3d2);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xc98356baull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xc98356baull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xc98356baull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B55b3d7:{NFSU2_TR(0x55b3d7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55b515;}}
}
B55b3dd:L55b3dd:{c.instructions+=5;NFSU2_TR(0x55b3dd);
__builtin_memmove((R+0),gp(0x863794),4);
}
B55b3e2:{NFSU2_TR(0x55b3e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55b3e4:{NFSU2_TR(0x55b3e4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b3e5:{NFSU2_TR(0x55b3e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B55b3e8:{NFSU2_TR(0x55b3e8);
if(r1(R+518)){{goto L55b410;}}
}
B55b3ea:L55b3ea:{c.instructions+=3;NFSU2_TR(0x55b3ea);
__builtin_memmove((R+4),gp(0x86378c),4);
}
B55b3f0:{NFSU2_TR(0x55b3f0);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55b3f2:{NFSU2_TR(0x55b3f2);
if(r1(R+518)){{goto L55b410;}}
}
B55b3f4:L55b3f4:{c.instructions+=4;NFSU2_TR(0x55b3f4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b3f5:{NFSU2_TR(0x55b3f5);
u8 U[4];
w4(U+0,u32(0x791898ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b3fa:{NFSU2_TR(0x55b3fa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b3fb:{NFSU2_TR(0x55b3fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b400ull));
TAIL_STATIC(0x495400u,495);
}
B55b400:L55b400:{c.instructions+=3;NFSU2_TR(0x55b400);
u8 U[4];
w4(U+0,u32(0x791898ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b405:{NFSU2_TR(0x55b405);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b406:{NFSU2_TR(0x55b406);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b40bull));
TAIL_STATIC(0x495500u,495);
}
B55b40b:L55b40b:{c.instructions+=2;NFSU2_TR(0x55b40b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B55b40e:{NFSU2_TR(0x55b40e);
{goto L55b41e;}
}
B55b410:L55b410:{c.instructions+=3;NFSU2_TR(0x55b410);
u8 U[4];
w4(U+0,u32(0x791898ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b415:{NFSU2_TR(0x55b415);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b416:{NFSU2_TR(0x55b416);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b41bull));
TAIL_STATIC(0x4954c0u,495);
}
B55b41b:L55b41b:{c.instructions+=1;NFSU2_TR(0x55b41b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B55b41e:L55b41e:{c.instructions+=3;NFSU2_TR(0x55b41e);
__builtin_memmove((R+0),gp(0x863798),4);
}
B55b423:{NFSU2_TR(0x55b423);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55b425:{NFSU2_TR(0x55b425);
if(r1(R+518)){{goto L55b44d;}}
}
B55b427:L55b427:{c.instructions+=3;NFSU2_TR(0x55b427);
__builtin_memmove((R+4),gp(0x86378c),4);
}
B55b42d:{NFSU2_TR(0x55b42d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55b42f:{NFSU2_TR(0x55b42f);
if(r1(R+518)){{goto L55b44d;}}
}
B55b431:L55b431:{c.instructions+=4;NFSU2_TR(0x55b431);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b432:{NFSU2_TR(0x55b432);
u8 U[4];
w4(U+0,u32(0x79d3bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b437:{NFSU2_TR(0x55b437);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b438:{NFSU2_TR(0x55b438);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b43dull));
TAIL_STATIC(0x495400u,495);
}
B55b43d:L55b43d:{c.instructions+=3;NFSU2_TR(0x55b43d);
u8 U[4];
w4(U+0,u32(0x79d3bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b442:{NFSU2_TR(0x55b442);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b443:{NFSU2_TR(0x55b443);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b448ull));
TAIL_STATIC(0x495500u,495);
}
B55b448:L55b448:{c.instructions+=2;NFSU2_TR(0x55b448);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B55b44b:{NFSU2_TR(0x55b44b);
{goto L55b45b;}
}
B55b44d:L55b44d:{c.instructions+=3;NFSU2_TR(0x55b44d);
u8 U[4];
w4(U+0,u32(0x79d3bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b452:{NFSU2_TR(0x55b452);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b453:{NFSU2_TR(0x55b453);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b458ull));
TAIL_STATIC(0x4954c0u,495);
}
B55b458:L55b458:{c.instructions+=1;NFSU2_TR(0x55b458);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B55b45b:L55b45b:{c.instructions+=3;NFSU2_TR(0x55b45b);
__builtin_memmove((R+0),gp(0x86379c),4);
}
B55b460:{NFSU2_TR(0x55b460);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55b462:{NFSU2_TR(0x55b462);
if(r1(R+518)){{goto L55b48a;}}
}
B55b464:L55b464:{c.instructions+=3;NFSU2_TR(0x55b464);
__builtin_memmove((R+4),gp(0x86378c),4);
}
B55b46a:{NFSU2_TR(0x55b46a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55b46c:{NFSU2_TR(0x55b46c);
if(r1(R+518)){{goto L55b48a;}}
}
B55b46e:L55b46e:{c.instructions+=4;NFSU2_TR(0x55b46e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b46f:{NFSU2_TR(0x55b46f);
u8 U[4];
w4(U+0,u32(0x791888ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b474:{NFSU2_TR(0x55b474);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b475:{NFSU2_TR(0x55b475);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b47aull));
TAIL_STATIC(0x495400u,495);
}
B55b47a:L55b47a:{c.instructions+=3;NFSU2_TR(0x55b47a);
u8 U[4];
w4(U+0,u32(0x791888ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b47f:{NFSU2_TR(0x55b47f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b480:{NFSU2_TR(0x55b480);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b485ull));
TAIL_STATIC(0x495500u,495);
}
B55b485:L55b485:{c.instructions+=2;NFSU2_TR(0x55b485);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B55b488:{NFSU2_TR(0x55b488);
{goto L55b498;}
}
B55b48a:L55b48a:{c.instructions+=3;NFSU2_TR(0x55b48a);
u8 U[4];
w4(U+0,u32(0x791888ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b48f:{NFSU2_TR(0x55b48f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b490:{NFSU2_TR(0x55b490);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b495ull));
TAIL_STATIC(0x4954c0u,495);
}
B55b495:L55b495:{c.instructions+=1;NFSU2_TR(0x55b495);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B55b498:L55b498:{c.instructions+=4;NFSU2_TR(0x55b498);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55b49b:{NFSU2_TR(0x55b49b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55b49d:{NFSU2_TR(0x55b49d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55b49e:{NFSU2_TR(0x55b49e);
if(r1(R+518)){{goto L55b50e;}}
}
B55b4a0:L55b4a0:{c.instructions+=2;NFSU2_TR(0x55b4a0);
u8 U[4];
w4(U+0,u32(0x78fa24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b4a5:{NFSU2_TR(0x55b4a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b4aaull));
TAIL_STATIC(0x52cf60u,52c);
}
B55b4aa:L55b4aa:{c.instructions+=3;NFSU2_TR(0x55b4aa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55b4ad:{NFSU2_TR(0x55b4ad);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55b4af:{NFSU2_TR(0x55b4af);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55b50e;}}
}
B55b4b1:L55b4b1:{c.instructions+=3;NFSU2_TR(0x55b4b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55b4b4:{NFSU2_TR(0x55b4b4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55b4b7:{NFSU2_TR(0x55b4b7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L55b50a;}}
}
B55b4b9:L55b4b9:{c.instructions+=3;NFSU2_TR(0x55b4b9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B55b4bc:{NFSU2_TR(0x55b4bc);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55b4be:{NFSU2_TR(0x55b4be);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55b50e;}}
}
B55b4c0:L55b4c0:{c.instructions+=7;NFSU2_TR(0x55b4c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55b4c3:{NFSU2_TR(0x55b4c3);
u8 U[4];
w4(U+0,u32(0x79d3b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b4c8:{NFSU2_TR(0x55b4c8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b4c9:{NFSU2_TR(0x55b4c9);
u8 U[4];
w4(U+0,u32(0x1b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b4ce:{NFSU2_TR(0x55b4ce);
u8 U[4];
w4(U+0,u32(0x140ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b4d3:{NFSU2_TR(0x55b4d3);
w4(R+4,u32(0x832dacull));
}
B55b4d8:{NFSU2_TR(0x55b4d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b4ddull));
TAIL_STATIC(0x4889f0u,488);
}
B55b4dd:L55b4dd:{c.instructions+=2;NFSU2_TR(0x55b4dd);
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
B55b4df:{NFSU2_TR(0x55b4df);
if(r1(R+518)){{goto L55b50e;}}
}
B55b4e1:L55b4e1:{c.instructions+=3;NFSU2_TR(0x55b4e1);
w4(R+4,u32(0x832dacull));
}
B55b4e6:{NFSU2_TR(0x55b4e6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B55b4ea:{NFSU2_TR(0x55b4ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b4efull));
TAIL_STATIC(0x488b50u,488);
}
B55b4ef:L55b4ef:{c.instructions+=5;NFSU2_TR(0x55b4ef);
__builtin_memmove((R+4),(R+24),4);
}
B55b4f1:{NFSU2_TR(0x55b4f1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x71ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B55b4f5:{NFSU2_TR(0x55b4f5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x72ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B55b4f9:{NFSU2_TR(0x55b4f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B55b500:{NFSU2_TR(0x55b500);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b505ull));
TAIL_STATIC(0x523ef0u,523);
}
B55b505:L55b505:{c.instructions+=3;NFSU2_TR(0x55b505);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55b506:{NFSU2_TR(0x55b506);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B55b507:{NFSU2_TR(0x55b507);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55b50a:L55b50a:{c.instructions+=2;NFSU2_TR(0x55b50a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B55b50b:{NFSU2_TR(0x55b50b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55b50e:L55b50e:{c.instructions+=2;NFSU2_TR(0x55b50e);
__builtin_memmove((R+4),(R+24),4);
}
B55b510:{NFSU2_TR(0x55b510);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b515ull));
TAIL_STATIC(0x523ef0u,523);
}
B55b515:L55b515:{c.instructions+=3;NFSU2_TR(0x55b515);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55b516:{NFSU2_TR(0x55b516);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B55b517:{NFSU2_TR(0x55b517);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55b520:L55b520:{c.instructions+=8;NFSU2_TR(0x55b520);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b522:{NFSU2_TR(0x55b522);
u8 U[4];
w4(U+0,u32(0x778374ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b527:{NFSU2_TR(0x55b527);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55b52d:{NFSU2_TR(0x55b52d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b52e:{NFSU2_TR(0x55b52e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55b535:{NFSU2_TR(0x55b535);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b536:{NFSU2_TR(0x55b536);
u8 U[4];
w4(U+0,u32(0x158ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b53b:{NFSU2_TR(0x55b53b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b540ull));
TAIL_STATIC(0x575620u,575);
}
B55b540:L55b540:{c.instructions+=5;NFSU2_TR(0x55b540);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55b543:{NFSU2_TR(0x55b543);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B55b547:{NFSU2_TR(0x55b547);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55b549:{NFSU2_TR(0x55b549);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B55b551:{NFSU2_TR(0x55b551);
if(r1(R+518)){{goto L55b56e;}}
}
B55b553:L55b553:{c.instructions+=4;NFSU2_TR(0x55b553);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55b557:{NFSU2_TR(0x55b557);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b558:{NFSU2_TR(0x55b558);
__builtin_memmove((R+4),(R+0),4);
}
B55b55a:{NFSU2_TR(0x55b55a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b55full));
TAIL_STATIC(0x557f20u,557);
}
B55b55f:L55b55f:{c.instructions+=4;NFSU2_TR(0x55b55f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55b563:{NFSU2_TR(0x55b563);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55b56a:{NFSU2_TR(0x55b56a);
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
B55b56d:{NFSU2_TR(0x55b56d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55b56e:L55b56e:{c.instructions+=5;NFSU2_TR(0x55b56e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55b572:{NFSU2_TR(0x55b572);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B55b574:{NFSU2_TR(0x55b574);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55b57b:{NFSU2_TR(0x55b57b);
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
B55b57e:{NFSU2_TR(0x55b57e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55b580:L55b580:{c.instructions+=3;NFSU2_TR(0x55b580);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B55b585:{NFSU2_TR(0x55b585);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55b587:{NFSU2_TR(0x55b587);
if(r1(R+518)){{goto L55b5b5;}}
}
B55b589:L55b589:{c.instructions+=4;NFSU2_TR(0x55b589);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55b58c:{NFSU2_TR(0x55b58c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b58e:{NFSU2_TR(0x55b58e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b590:{NFSU2_TR(0x55b590);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b595ull));
TAIL_STATIC(0x558c00u,558);
}
B55b595:L55b595:{c.instructions+=3;NFSU2_TR(0x55b595);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B55b59a:{NFSU2_TR(0x55b59a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55b59c:{NFSU2_TR(0x55b59c);
if(r1(R+518)){{goto L55b5b5;}}
}
B55b59e:L55b59e:{c.instructions+=3;NFSU2_TR(0x55b59e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b5a0:{NFSU2_TR(0x55b5a0);
w4(R+4,u32(0x8637b0ull));
}
B55b5a5:{NFSU2_TR(0x55b5a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b5aaull));
TAIL_STATIC(0x542390u,542);
}
B55b5aa:L55b5aa:{c.instructions+=2;NFSU2_TR(0x55b5aa);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B55b5b0:{NFSU2_TR(0x55b5b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b5b5ull));
TAIL_STATIC(0x50c680u,50c);
}
B55b5b5:L55b5b5:{c.instructions+=1;NFSU2_TR(0x55b5b5);
TAIL_STATIC(0x4a8630u,4a8);
}
B55b5c0:L55b5c0:{c.instructions+=7;NFSU2_TR(0x55b5c0);
__builtin_memmove((R+0),gp(0x838521),1);
}
B55b5c5:{NFSU2_TR(0x55b5c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x34ull))));
}
B55b5c8:{NFSU2_TR(0x55b5c8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55b5ca:{NFSU2_TR(0x55b5ca);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b5cb:{NFSU2_TR(0x55b5cb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b5cc:{NFSU2_TR(0x55b5cc);
__builtin_memmove((R+20),(R+4),4);
}
B55b5ce:{NFSU2_TR(0x55b5ce);
if(r1(R+518)){{goto L55b5ee;}}
}
B55b5d0:L55b5d0:{c.instructions+=3;NFSU2_TR(0x55b5d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55b5d3:{NFSU2_TR(0x55b5d3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b5d4:{NFSU2_TR(0x55b5d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b5d9ull));
TAIL_STATIC(0x52cef0u,52c);
}
B55b5d9:L55b5d9:{c.instructions+=4;NFSU2_TR(0x55b5d9);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B55b5db:{NFSU2_TR(0x55b5db);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55b5de:{NFSU2_TR(0x55b5de);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55b5e0:{NFSU2_TR(0x55b5e0);
if(r1(R+518)){{goto L55b5ee;}}
}
B55b5e2:L55b5e2:{c.instructions+=4;NFSU2_TR(0x55b5e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55b5e5:{NFSU2_TR(0x55b5e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55b5e8:{NFSU2_TR(0x55b5e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55b5eb:{NFSU2_TR(0x55b5eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55b5ee:L55b5ee:{c.instructions+=4;NFSU2_TR(0x55b5ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B55b5f2:{NFSU2_TR(0x55b5f2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b5f3:{NFSU2_TR(0x55b5f3);
__builtin_memmove((R+4),(R+20),4);
}
B55b5f5:{NFSU2_TR(0x55b5f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b5faull));
TAIL_STATIC(0x54e5b0u,54e);
}
B55b5fa:L55b5fa:{c.instructions+=2;NFSU2_TR(0x55b5fa);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55b5fc:{NFSU2_TR(0x55b5fc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55bc79;}}
}
B55b602:L55b602:{c.instructions+=3;NFSU2_TR(0x55b602);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55b605:{NFSU2_TR(0x55b605);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b606:{NFSU2_TR(0x55b606);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b60bull));
TAIL_STATIC(0x52cef0u,52c);
}
B55b60b:L55b60b:{c.instructions+=4;NFSU2_TR(0x55b60b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B55b60e:{NFSU2_TR(0x55b60e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55b611:{NFSU2_TR(0x55b611);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55b613:{NFSU2_TR(0x55b613);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55b620;}}
}
B55b615:L55b615:{c.instructions+=2;NFSU2_TR(0x55b615);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55b617:{NFSU2_TR(0x55b617);
if(r1(R+518)){{goto L55b620;}}
}
B55b619:L55b619:{c.instructions+=3;NFSU2_TR(0x55b619);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55b61c:{NFSU2_TR(0x55b61c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55b61e:{NFSU2_TR(0x55b61e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55b646;}}
}
B55b620:L55b620:{c.instructions+=2;NFSU2_TR(0x55b620);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b621:{NFSU2_TR(0x55b621);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b626ull));
TAIL_STATIC(0x50b2a0u,50b);
}
B55b626:L55b626:{c.instructions+=3;NFSU2_TR(0x55b626);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55b629:{NFSU2_TR(0x55b629);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55b62b:{NFSU2_TR(0x55b62b);
if(r1(R+518)){{goto L55b646;}}
}
B55b62d:L55b62d:{c.instructions+=4;NFSU2_TR(0x55b62d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55b630:{NFSU2_TR(0x55b630);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b631:{NFSU2_TR(0x55b631);
u8 U[4];
w4(U+0,u32(0x79d618ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b636:{NFSU2_TR(0x55b636);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b63bull));
TAIL_STATIC(0x50d510u,50d);
}
B55b63b:L55b63b:{c.instructions+=5;NFSU2_TR(0x55b63b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B55b63e:{NFSU2_TR(0x55b63e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55b63f:{NFSU2_TR(0x55b63f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55b640:{NFSU2_TR(0x55b640);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x34ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x34ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x34ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B55b643:{NFSU2_TR(0x55b643);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55b646:L55b646:{c.instructions+=3;NFSU2_TR(0x55b646);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0xc519bfc0ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc519bfc0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55b64c:{NFSU2_TR(0x55b64c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b64d:{NFSU2_TR(0x55b64d);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L55b945;}}
}
B55b653:L55b653:{c.instructions+=1;NFSU2_TR(0x55b653);
if(r1(R+518)){{goto L55b756;}}
}
B55b659:L55b659:{c.instructions+=2;NFSU2_TR(0x55b659);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0x9757a0c0ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9757a0c0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55b65f:{NFSU2_TR(0x55b65f);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L55b737;}}
}
B55b665:L55b665:{c.instructions+=1;NFSU2_TR(0x55b665);
if(r1(R+518)){{goto L55b72b;}}
}
B55b66b:L55b66b:{c.instructions+=2;NFSU2_TR(0x55b66b);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2c0e485aull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55b671:{NFSU2_TR(0x55b671);
if(r1(R+518)){{goto L55b6ae;}}
}
B55b673:L55b673:{c.instructions+=2;NFSU2_TR(0x55b673);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x35f8620bull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55b679:{NFSU2_TR(0x55b679);
if(r1(R+518)){{goto L55b72b;}}
}
B55b67f:L55b67f:{c.instructions+=2;NFSU2_TR(0x55b67f);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0x911ab364ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55b685:{NFSU2_TR(0x55b685);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L55bc45;}}
}
B55b68b:L55b68b:{c.instructions+=1;NFSU2_TR(0x55b68b);
if(r1(R+518)){{goto L55bc4d;}}
}
B55b691:L55b691:{c.instructions+=2;NFSU2_TR(0x55b691);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc407210ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55b697:{NFSU2_TR(0x55b697);
if(r1(R+518)){{goto L55bc4d;}}
}
B55b69d:L55b69d:{c.instructions+=2;NFSU2_TR(0x55b69d);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x406415e3ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x406415e3ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x406415e3ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B55b6a3:{NFSU2_TR(0x55b6a3);
if(r1(R+518)){{goto L55bc4d;}}
}
B55b6a9:L55b6a9:{c.instructions+=1;NFSU2_TR(0x55b6a9);
{goto L55bc63;}
}
B55b6ae:L55b6ae:{c.instructions+=3;NFSU2_TR(0x55b6ae);
w4(R+4,u32(0x89cf48ull));
}
B55b6b3:{NFSU2_TR(0x55b6b3);
s1(0x838521,u8(0x0ull));
}
B55b6ba:{NFSU2_TR(0x55b6ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b6bfull));
TAIL_STATIC(0x5f00f0u,5f0);
}
B55b6bf:L55b6bf:{c.instructions+=2;NFSU2_TR(0x55b6bf);
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
B55b6c1:{NFSU2_TR(0x55b6c1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55bc63;}}
}
B55b6c7:L55b6c7:{c.instructions+=2;NFSU2_TR(0x55b6c7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b6c9:{NFSU2_TR(0x55b6c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b6ceull));
TAIL_STATIC(0x4a0140u,4a0);
}
B55b6ce:L55b6ce:{c.instructions+=6;NFSU2_TR(0x55b6ce);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B55b6d4:{NFSU2_TR(0x55b6d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55b6d7:{NFSU2_TR(0x55b6d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B55b6dd:{NFSU2_TR(0x55b6dd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55b6e0:{NFSU2_TR(0x55b6e0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55b6e2:{NFSU2_TR(0x55b6e2);
if(r1(R+518)){{goto L55b709;}}
}
B55b6e4:L55b6e4:{c.instructions+=4;NFSU2_TR(0x55b6e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55b6e7:{NFSU2_TR(0x55b6e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B55b6ea:{NFSU2_TR(0x55b6ea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b6eb:{NFSU2_TR(0x55b6eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b6f0ull));
TAIL_STATIC(0x49ffa0u,49f);
}
B55b6f0:L55b6f0:{c.instructions+=3;NFSU2_TR(0x55b6f0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55b6f3:{NFSU2_TR(0x55b6f3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55b6f5:{NFSU2_TR(0x55b6f5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55b703;}}
}
B55b6f7:L55b6f7:{c.instructions+=3;NFSU2_TR(0x55b6f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55b6fa:{NFSU2_TR(0x55b6fa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b6fb:{NFSU2_TR(0x55b6fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b700ull));
TAIL_STATIC(0x5379a0u,537);
}
B55b700:L55b700:{c.instructions+=1;NFSU2_TR(0x55b700);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55b703:L55b703:{c.instructions+=3;NFSU2_TR(0x55b703);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55b705:{NFSU2_TR(0x55b705);
__builtin_memmove((R+24),(R+28),4);
}
B55b707:{NFSU2_TR(0x55b707);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x55b6e4u);}goto L55b6e4;}}
}
B55b709:L55b709:{c.instructions+=5;NFSU2_TR(0x55b709);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b70b:{NFSU2_TR(0x55b70b);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b710:{NFSU2_TR(0x55b710);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b715:{NFSU2_TR(0x55b715);
u8 U[4];
w4(U+0,u32(0x78f530ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b71a:{NFSU2_TR(0x55b71a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b71full));
TAIL_STATIC(0x555f10u,555);
}
B55b71f:L55b71f:{c.instructions+=6;NFSU2_TR(0x55b71f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B55b722:{NFSU2_TR(0x55b722);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55b723:{NFSU2_TR(0x55b723);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55b724:{NFSU2_TR(0x55b724);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55b725:{NFSU2_TR(0x55b725);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x34ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x34ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x34ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B55b728:{NFSU2_TR(0x55b728);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55b72b:L55b72b:{c.instructions+=2;NFSU2_TR(0x55b72b);
__builtin_memmove((R+4),(R+20),4);
}
B55b72d:{NFSU2_TR(0x55b72d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b732ull));
TAIL_STATIC(0x542720u,542);
}
B55b732:L55b732:{c.instructions+=1;NFSU2_TR(0x55b732);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x55b67fu);}goto L55b67f;}
}
B55b737:L55b737:{c.instructions+=2;NFSU2_TR(0x55b737);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9803f6e2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55b73d:{NFSU2_TR(0x55b73d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x55b67fu);}goto L55b67f;}}
}
B55b743:L55b743:{c.instructions+=4;NFSU2_TR(0x55b743);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55b746:{NFSU2_TR(0x55b746);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55b749:{NFSU2_TR(0x55b749);
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
B55b74b:{NFSU2_TR(0x55b74b);
if(r1(R+518)){{goto L55bc78;}}
}
B55b751:L55b751:{c.instructions+=1;NFSU2_TR(0x55b751);
{goto L55bc63;}
}
B55b756:L55b756:{c.instructions+=2;NFSU2_TR(0x55b756);
u8 U[4];
w4(U+0,u32(0x78f2f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b75b:{NFSU2_TR(0x55b75b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b760ull));
TAIL_STATIC(0x52cf60u,52c);
}
B55b760:L55b760:{c.instructions+=3;NFSU2_TR(0x55b760);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55b763:{NFSU2_TR(0x55b763);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55b765:{NFSU2_TR(0x55b765);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55bc4d;}}
}
B55b76b:L55b76b:{c.instructions+=10;NFSU2_TR(0x55b76b);
__builtin_memmove((R+0),gp(0x8637c8),4);
}
B55b770:{NFSU2_TR(0x55b770);
__builtin_memmove((R+8),gp(0x8651ac),4);
}
B55b776:{NFSU2_TR(0x55b776);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B55b778:{NFSU2_TR(0x55b778);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55b77c:{NFSU2_TR(0x55b77c);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B55b780:{NFSU2_TR(0x55b780);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B55b786:{NFSU2_TR(0x55b786);
{u32 ea_=u32(u32(8361004u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B55b78c:{NFSU2_TR(0x55b78c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B55b78e:{NFSU2_TR(0x55b78e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55b791:{NFSU2_TR(0x55b791);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55bc4d;}}
}
B55b797:L55b797:{c.instructions+=2;NFSU2_TR(0x55b797);
u8 U[4];
w4(U+0,u32(0x79d5e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b79c:{NFSU2_TR(0x55b79c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b7a1ull));
TAIL_STATIC(0x50d510u,50d);
}
B55b7a1:L55b7a1:{c.instructions+=3;NFSU2_TR(0x55b7a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55b7a4:{NFSU2_TR(0x55b7a4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b7a5:{NFSU2_TR(0x55b7a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b7aaull));
TAIL_STATIC(0x52cef0u,52c);
}
B55b7aa:L55b7aa:{c.instructions+=4;NFSU2_TR(0x55b7aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55b7ad:{NFSU2_TR(0x55b7ad);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B55b7b0:{NFSU2_TR(0x55b7b0);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55b7b2:{NFSU2_TR(0x55b7b2);
if(r1(R+518)){{goto L55b933;}}
}
B55b7b8:L55b7b8:{c.instructions+=2;NFSU2_TR(0x55b7b8);
u8 U[8];
__builtin_memmove((U+0),gp(0x8500d0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xcull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B55b7bf:{NFSU2_TR(0x55b7bf);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L55b933;}}
}
B55b7c5:L55b7c5:{c.instructions+=2;NFSU2_TR(0x55b7c5);
u8 U[4];
w4(U+0,u32(0x79d5c4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b7ca:{NFSU2_TR(0x55b7ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b7cfull));
TAIL_STATIC(0x50d510u,50d);
}
B55b7cf:L55b7cf:{c.instructions+=8;NFSU2_TR(0x55b7cf);
w4(R+0,u32(m1(0x838520)));
}
B55b7d6:{NFSU2_TR(0x55b7d6);
w4(R+4,u32(m1(0x838528)));
}
B55b7dd:{NFSU2_TR(0x55b7dd);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B55b7e1:{NFSU2_TR(0x55b7e1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b7e2:{NFSU2_TR(0x55b7e2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b7e3:{NFSU2_TR(0x55b7e3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b7e4:{NFSU2_TR(0x55b7e4);
u8 U[4];
w4(U+0,u32(0x79d588ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b7e9:{NFSU2_TR(0x55b7e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b7eeull));
TAIL_STATIC(0x50d510u,50d);
}
B55b7ee:L55b7ee:{c.instructions+=4;NFSU2_TR(0x55b7ee);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B55b7f1:{NFSU2_TR(0x55b7f1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B55b7f4:{NFSU2_TR(0x55b7f4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55b7f6:{NFSU2_TR(0x55b7f6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55bc4d;}}
}
B55b7fc:L55b7fc:{c.instructions+=3;NFSU2_TR(0x55b7fc);
__builtin_memmove((R+0),gp(0x838528),1);
}
B55b801:{NFSU2_TR(0x55b801);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55b803:{NFSU2_TR(0x55b803);
if(r1(R+518)){{goto L55bc4d;}}
}
B55b809:L55b809:{c.instructions+=2;NFSU2_TR(0x55b809);
u8 U[4];
w4(U+0,u32(0x78fd7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b80e:{NFSU2_TR(0x55b80e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b813ull));
TAIL_STATIC(0x52cf60u,52c);
}
B55b813:L55b813:{c.instructions+=3;NFSU2_TR(0x55b813);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55b816:{NFSU2_TR(0x55b816);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55b818:{NFSU2_TR(0x55b818);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55bc4d;}}
}
B55b81e:L55b81e:{c.instructions+=2;NFSU2_TR(0x55b81e);
u8 U[4];
w4(U+0,u32(0x790038ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b823:{NFSU2_TR(0x55b823);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b828ull));
TAIL_STATIC(0x52cf60u,52c);
}
B55b828:L55b828:{c.instructions+=3;NFSU2_TR(0x55b828);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55b82b:{NFSU2_TR(0x55b82b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55b82d:{NFSU2_TR(0x55b82d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55bc4d;}}
}
B55b833:L55b833:{c.instructions+=2;NFSU2_TR(0x55b833);
u8 U[4];
w4(U+0,u32(0x78f2f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b838:{NFSU2_TR(0x55b838);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b83dull));
TAIL_STATIC(0x52cf60u,52c);
}
B55b83d:L55b83d:{c.instructions+=3;NFSU2_TR(0x55b83d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55b840:{NFSU2_TR(0x55b840);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55b842:{NFSU2_TR(0x55b842);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55bc4d;}}
}
B55b848:L55b848:{c.instructions+=2;NFSU2_TR(0x55b848);
u8 U[4];
w4(U+0,u32(0x78fa24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b84d:{NFSU2_TR(0x55b84d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b852ull));
TAIL_STATIC(0x52cf60u,52c);
}
B55b852:L55b852:{c.instructions+=3;NFSU2_TR(0x55b852);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55b855:{NFSU2_TR(0x55b855);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55b857:{NFSU2_TR(0x55b857);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55bc4d;}}
}
B55b85d:L55b85d:{c.instructions+=2;NFSU2_TR(0x55b85d);
u8 U[4];
w4(U+0,u32(0x799e74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b862:{NFSU2_TR(0x55b862);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b867ull));
TAIL_STATIC(0x52cf60u,52c);
}
B55b867:L55b867:{c.instructions+=3;NFSU2_TR(0x55b867);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55b86a:{NFSU2_TR(0x55b86a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55b86c:{NFSU2_TR(0x55b86c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55bc4d;}}
}
B55b872:L55b872:{c.instructions+=2;NFSU2_TR(0x55b872);
u8 U[4];
w4(U+0,u32(0x799e54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b877:{NFSU2_TR(0x55b877);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b87cull));
TAIL_STATIC(0x52cf60u,52c);
}
B55b87c:L55b87c:{c.instructions+=3;NFSU2_TR(0x55b87c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55b87f:{NFSU2_TR(0x55b87f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55b881:{NFSU2_TR(0x55b881);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55bc4d;}}
}
B55b887:L55b887:{c.instructions+=2;NFSU2_TR(0x55b887);
u8 U[4];
w4(U+0,u32(0x799e34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b88c:{NFSU2_TR(0x55b88c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b891ull));
TAIL_STATIC(0x52cf60u,52c);
}
B55b891:L55b891:{c.instructions+=3;NFSU2_TR(0x55b891);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55b894:{NFSU2_TR(0x55b894);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55b896:{NFSU2_TR(0x55b896);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55bc4d;}}
}
B55b89c:L55b89c:{c.instructions+=2;NFSU2_TR(0x55b89c);
u8 U[4];
w4(U+0,u32(0x799e14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b8a1:{NFSU2_TR(0x55b8a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b8a6ull));
TAIL_STATIC(0x52cf60u,52c);
}
B55b8a6:L55b8a6:{c.instructions+=3;NFSU2_TR(0x55b8a6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55b8a9:{NFSU2_TR(0x55b8a9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55b8ab:{NFSU2_TR(0x55b8ab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55bc4d;}}
}
B55b8b1:L55b8b1:{c.instructions+=2;NFSU2_TR(0x55b8b1);
u8 U[4];
w4(U+0,u32(0x799dc4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b8b6:{NFSU2_TR(0x55b8b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b8bbull));
TAIL_STATIC(0x52cf60u,52c);
}
B55b8bb:L55b8bb:{c.instructions+=3;NFSU2_TR(0x55b8bb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55b8be:{NFSU2_TR(0x55b8be);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55b8c0:{NFSU2_TR(0x55b8c0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55bc4d;}}
}
B55b8c6:L55b8c6:{c.instructions+=2;NFSU2_TR(0x55b8c6);
u8 U[4];
w4(U+0,u32(0x790444ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b8cb:{NFSU2_TR(0x55b8cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b8d0ull));
TAIL_STATIC(0x52cf60u,52c);
}
B55b8d0:L55b8d0:{c.instructions+=3;NFSU2_TR(0x55b8d0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55b8d3:{NFSU2_TR(0x55b8d3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55b8d5:{NFSU2_TR(0x55b8d5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55bc4d;}}
}
B55b8db:L55b8db:{c.instructions+=2;NFSU2_TR(0x55b8db);
u8 U[4];
w4(U+0,u32(0x790458ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b8e0:{NFSU2_TR(0x55b8e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b8e5ull));
TAIL_STATIC(0x52cf60u,52c);
}
B55b8e5:L55b8e5:{c.instructions+=3;NFSU2_TR(0x55b8e5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55b8e8:{NFSU2_TR(0x55b8e8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55b8ea:{NFSU2_TR(0x55b8ea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55bc4d;}}
}
B55b8f0:L55b8f0:{c.instructions+=3;NFSU2_TR(0x55b8f0);
__builtin_memmove((R+0),gp(0x838520),1);
}
B55b8f5:{NFSU2_TR(0x55b8f5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55b8f7:{NFSU2_TR(0x55b8f7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55b933;}}
}
B55b8f9:L55b8f9:{c.instructions+=3;NFSU2_TR(0x55b8f9);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B55b8ff:{NFSU2_TR(0x55b8ff);
u8 U[4];
w4(U+0,u32(0x4aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b901:{NFSU2_TR(0x55b901);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b906ull));
TAIL_STATIC(0x458520u,458);
}
B55b906:L55b906:{c.instructions+=4;NFSU2_TR(0x55b906);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55b909:{NFSU2_TR(0x55b909);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b90a:{NFSU2_TR(0x55b90a);
u8 U[4];
w4(U+0,u32(0x8384e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b90f:{NFSU2_TR(0x55b90f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b914ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B55b914:L55b914:{c.instructions+=6;NFSU2_TR(0x55b914);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55b917:{NFSU2_TR(0x55b917);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b919:{NFSU2_TR(0x55b919);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b91e:{NFSU2_TR(0x55b91e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b91f:{NFSU2_TR(0x55b91f);
u8 U[4];
w4(U+0,u32(0x7902a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b924:{NFSU2_TR(0x55b924);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b929ull));
TAIL_STATIC(0x555eb0u,555);
}
B55b929:L55b929:{c.instructions+=2;NFSU2_TR(0x55b929);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B55b92c:{NFSU2_TR(0x55b92c);
s1(0x838520,u8(0x1ull));
}
B55b933:L55b933:{c.instructions+=2;NFSU2_TR(0x55b933);
u8 U[4];
w4(U+0,u32(0x79d558ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b938:{NFSU2_TR(0x55b938);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b93dull));
TAIL_STATIC(0x50d510u,50d);
}
B55b93d:L55b93d:{c.instructions+=2;NFSU2_TR(0x55b93d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55b940:{NFSU2_TR(0x55b940);
{goto L55bc4d;}
}
B55b945:L55b945:{c.instructions+=2;NFSU2_TR(0x55b945);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc519bfc3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55b94b:{NFSU2_TR(0x55b94b);
if(r1(R+518)){{goto L55bbd7;}}
}
B55b951:L55b951:{c.instructions+=2;NFSU2_TR(0x55b951);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc98356baull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55b957:{NFSU2_TR(0x55b957);
if(r1(R+518)){{goto L55bbcb;}}
}
B55b95d:L55b95d:{c.instructions+=2;NFSU2_TR(0x55b95d);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xf764cbe7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55b963:{NFSU2_TR(0x55b963);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x55b67fu);}goto L55b67f;}}
}
B55b969:L55b969:{c.instructions+=2;NFSU2_TR(0x55b969);
u8 U[8];
__builtin_memmove((U+0),gp(0x8500d0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xcull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B55b970:{NFSU2_TR(0x55b970);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L55bb99;}}
}
B55b976:L55b976:{c.instructions+=4;NFSU2_TR(0x55b976);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B55b978:{NFSU2_TR(0x55b978);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B55b97d:{NFSU2_TR(0x55b97d);
w4(R+4,u32(0x8ull));
}
B55b982:{NFSU2_TR(0x55b982);
u8 U[4];
w4(U+0,u32(u32(u32(0x1dull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B55b986:L55b986:{c.instructions+=1;NFSU2_TR(0x55b986);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L55b988;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x55b986u);}goto L55b986;}
}
B55b988:L55b988:{c.instructions+=11;NFSU2_TR(0x55b988);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B55b98a:{NFSU2_TR(0x55b98a);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B55b98c:{NFSU2_TR(0x55b98c);
u8 U[8];
w4(U+0,u32(u32(u32(0xdull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55b990:{NFSU2_TR(0x55b990);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b991:{NFSU2_TR(0x55b991);
u8 U[8];
w4(U+0,u32(u32(u32(0x15ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55b995:{NFSU2_TR(0x55b995);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B55b996:{NFSU2_TR(0x55b996);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B55b998:{NFSU2_TR(0x55b998);
u8 U[5];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B55b99d:{NFSU2_TR(0x55b99d);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B55b9a2:{NFSU2_TR(0x55b9a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x19ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55b9a6:{NFSU2_TR(0x55b9a6);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B55b9a8:L55b9a8:{c.instructions+=2;NFSU2_TR(0x55b9a8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b9a9:{NFSU2_TR(0x55b9a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b9aeull));
TAIL_STATIC(0x58f6d0u,58f);
}
B55b9ae:L55b9ae:{c.instructions+=2;NFSU2_TR(0x55b9ae);
__builtin_memmove((R+4),(R+0),4);
}
B55b9b0:{NFSU2_TR(0x55b9b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b9b5ull));
TAIL_STATIC(0x5847f0u,584);
}
B55b9b5:L55b9b5:{c.instructions+=3;NFSU2_TR(0x55b9b5);
__builtin_memmove((R+24),(R+0),4);
}
B55b9b7:{NFSU2_TR(0x55b9b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55b9b9:{NFSU2_TR(0x55b9b9);
if(r1(R+518)){{goto L55b9de;}}
}
B55b9bb:L55b9bb:{c.instructions+=4;NFSU2_TR(0x55b9bb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B55b9be:{NFSU2_TR(0x55b9be);
u8 U[4];
w4(U+0,u32(0x836014ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b9c3:{NFSU2_TR(0x55b9c3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b9c4:{NFSU2_TR(0x55b9c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b9c9ull));
TAIL_STATIC(0x43dc30u,43d);
}
B55b9c9:L55b9c9:{c.instructions+=3;NFSU2_TR(0x55b9c9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B55b9cc:{NFSU2_TR(0x55b9cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55b9ce:{NFSU2_TR(0x55b9ce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55b9d8;}}
}
B55b9d0:L55b9d0:{c.instructions+=2;NFSU2_TR(0x55b9d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B55b9d3:{NFSU2_TR(0x55b9d3);
u8 U[5];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B55b9d8:L55b9d8:{c.instructions+=3;NFSU2_TR(0x55b9d8);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B55b9d9:{NFSU2_TR(0x55b9d9);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x5ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B55b9dc:{NFSU2_TR(0x55b9dc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x55b9a8u);}goto L55b9a8;}}
}
B55b9de:L55b9de:{c.instructions+=3;NFSU2_TR(0x55b9de);
u8 U[5];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B55b9e2:{NFSU2_TR(0x55b9e2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55b9e4:{NFSU2_TR(0x55b9e4);
if(r1(R+518)){{goto L55bb4a;}}
}
B55b9ea:L55b9ea:{c.instructions+=3;NFSU2_TR(0x55b9ea);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b9eb:{NFSU2_TR(0x55b9eb);
u8 U[4];
w4(U+0,u32(0x836014ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55b9f0:{NFSU2_TR(0x55b9f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b9f5ull));
TAIL_STATIC(0x58f6d0u,58f);
}
B55b9f5:L55b9f5:{c.instructions+=2;NFSU2_TR(0x55b9f5);
__builtin_memmove((R+4),(R+0),4);
}
B55b9f7:{NFSU2_TR(0x55b9f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55b9fcull));
TAIL_STATIC(0x5847a0u,584);
}
B55b9fc:L55b9fc:{c.instructions+=9;NFSU2_TR(0x55b9fc);
u8 U[4];
w4(U+0,u32(0x79d548ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ba01:{NFSU2_TR(0x55ba01);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ba03:{NFSU2_TR(0x55ba03);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B55ba07:{NFSU2_TR(0x55ba07);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ba08:{NFSU2_TR(0x55ba08);
__builtin_memmove((R+24),(R+0),4);
}
B55ba0a:{NFSU2_TR(0x55ba0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55ba0d:{NFSU2_TR(0x55ba0d);
u8 U[4];
w4(U+0,u32(0x79d53cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ba12:{NFSU2_TR(0x55ba12);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ba13:{NFSU2_TR(0x55ba13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ba18ull));
TAIL_STATIC(0x7414a0u,741);
}
B55ba18:L55ba18:{c.instructions+=3;NFSU2_TR(0x55ba18);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B55ba1b:{NFSU2_TR(0x55ba1b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ba1c:{NFSU2_TR(0x55ba1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ba21ull));
TAIL_STATIC(0x742360u,742);
}
B55ba21:L55ba21:{c.instructions+=9;NFSU2_TR(0x55ba21);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55ba24:{NFSU2_TR(0x55ba24);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B55ba27:{NFSU2_TR(0x55ba27);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ba2c:{NFSU2_TR(0x55ba2c);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ba2e:{NFSU2_TR(0x55ba2e);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B55ba32:{NFSU2_TR(0x55ba32);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ba33:{NFSU2_TR(0x55ba33);
u8 U[4];
w4(U+0,u32(0x790380ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ba38:{NFSU2_TR(0x55ba38);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ba39:{NFSU2_TR(0x55ba39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ba3eull));
TAIL_STATIC(0x7414a0u,741);
}
B55ba3e:L55ba3e:{c.instructions+=3;NFSU2_TR(0x55ba3e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B55ba41:{NFSU2_TR(0x55ba41);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ba42:{NFSU2_TR(0x55ba42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ba47ull));
TAIL_STATIC(0x742360u,742);
}
B55ba47:L55ba47:{c.instructions+=7;NFSU2_TR(0x55ba47);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55ba4a:{NFSU2_TR(0x55ba4a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B55ba4d:{NFSU2_TR(0x55ba4d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ba4f:{NFSU2_TR(0x55ba4f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ba50:{NFSU2_TR(0x55ba50);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
}
B55ba53:{NFSU2_TR(0x55ba53);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ba54:{NFSU2_TR(0x55ba54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ba59ull));
TAIL_STATIC(0x58f6d0u,58f);
}
B55ba59:L55ba59:{c.instructions+=2;NFSU2_TR(0x55ba59);
__builtin_memmove((R+4),(R+0),4);
}
B55ba5b:{NFSU2_TR(0x55ba5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ba60ull));
TAIL_STATIC(0x58d150u,58d);
}
B55ba60:L55ba60:{c.instructions+=4;NFSU2_TR(0x55ba60);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B55ba64:{NFSU2_TR(0x55ba64);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55ba66:{NFSU2_TR(0x55ba66);
w4(R+0,u32(0x783fe5ull));
}
B55ba6b:{NFSU2_TR(0x55ba6b);
if(r1(R+518)){{goto L55ba71;}}
}
B55ba6d:L55ba6d:{c.instructions+=1;NFSU2_TR(0x55ba6d);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B55ba71:L55ba71:{c.instructions+=3;NFSU2_TR(0x55ba71);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ba72:{NFSU2_TR(0x55ba72);
u8 U[4];
w4(U+0,u32(0x85009cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ba77:{NFSU2_TR(0x55ba77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ba7cull));
TAIL_STATIC(0x43dbd0u,43d);
}
B55ba7c:L55ba7c:{c.instructions+=5;NFSU2_TR(0x55ba7c);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B55ba80:{NFSU2_TR(0x55ba80);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B55ba83:{NFSU2_TR(0x55ba83);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55ba85:{NFSU2_TR(0x55ba85);
w4(R+0,u32(0x783fe5ull));
}
B55ba8a:{NFSU2_TR(0x55ba8a);
if(r1(R+518)){{goto L55ba90;}}
}
B55ba8c:L55ba8c:{c.instructions+=1;NFSU2_TR(0x55ba8c);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B55ba90:L55ba90:{c.instructions+=3;NFSU2_TR(0x55ba90);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ba91:{NFSU2_TR(0x55ba91);
u8 U[4];
w4(U+0,u32(0x8500a9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ba96:{NFSU2_TR(0x55ba96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ba9bull));
TAIL_STATIC(0x43dbd0u,43d);
}
B55ba9b:L55ba9b:{c.instructions+=13;NFSU2_TR(0x55ba9b);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B55ba9f:{NFSU2_TR(0x55ba9f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B55baa2:{NFSU2_TR(0x55baa2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55baa3:{NFSU2_TR(0x55baa3);
u8 U[4];
w4(U+0,u32(0x558f50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55baa8:{NFSU2_TR(0x55baa8);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B55baac:{NFSU2_TR(0x55baac);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55baad:{NFSU2_TR(0x55baad);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B55bab1:{NFSU2_TR(0x55bab1);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55bab3:{NFSU2_TR(0x55bab3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bab4:{NFSU2_TR(0x55bab4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B55bab7:{NFSU2_TR(0x55bab7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bab9:{NFSU2_TR(0x55bab9);
__builtin_memmove(gp(0x85009b),(R+0),1);
}
B55babe:{NFSU2_TR(0x55babe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55bac3ull));
TAIL_STATIC(0x58f740u,58f);
}
B55bac3:L55bac3:{c.instructions+=3;NFSU2_TR(0x55bac3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55bac6:{NFSU2_TR(0x55bac6);
__builtin_memmove((R+4),(R+0),4);
}
B55bac8:{NFSU2_TR(0x55bac8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55bacdull));
TAIL_STATIC(0x58d6b0u,58d);
}
B55bacd:L55bacd:{c.instructions+=4;NFSU2_TR(0x55bacd);
__builtin_memmove((R+4),(R+0),4);
}
B55bacf:{NFSU2_TR(0x55bacf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bad0:{NFSU2_TR(0x55bad0);
u8 U[4];
w4(U+0,u32(0x79d4f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bad5:{NFSU2_TR(0x55bad5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55badaull));
TAIL_STATIC(0x50d510u,50d);
}
B55bada:L55bada:{c.instructions+=3;NFSU2_TR(0x55bada);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B55badd:{NFSU2_TR(0x55badd);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B55badf:{NFSU2_TR(0x55badf);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L55bb06;}}
}
B55bae1:L55bae1:{c.instructions+=6;NFSU2_TR(0x55bae1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55bae4:{NFSU2_TR(0x55bae4);
u8 U[4];
w4(U+0,u32(0x836014ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bae9:{NFSU2_TR(0x55bae9);
u8 U[4];
w4(U+0,u32(0x91070ff2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55baee:{NFSU2_TR(0x55baee);
u8 U[4];
w4(U+0,u32(0x7902c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55baf3:{NFSU2_TR(0x55baf3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55baf4:{NFSU2_TR(0x55baf4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55baf9ull));
TAIL_STATIC(0x558330u,558);
}
B55baf9:L55baf9:{c.instructions+=3;NFSU2_TR(0x55baf9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B55bafc:{NFSU2_TR(0x55bafc);
__builtin_memmove(gp(0x83852c),(R+0),4);
}
B55bb01:{NFSU2_TR(0x55bb01);
{goto L55bb94;}
}
B55bb06:L55bb06:{c.instructions+=3;NFSU2_TR(0x55bb06);
u8 U[4];
w4(U+0,u32(0x8384e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bb0b:{NFSU2_TR(0x55bb0b);
u8 U[4];
w4(U+0,u32(0x79d488ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bb10:{NFSU2_TR(0x55bb10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55bb15ull));
TAIL_STATIC(0x50d510u,50d);
}
B55bb15:L55bb15:{c.instructions+=5;NFSU2_TR(0x55bb15);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bb17:{NFSU2_TR(0x55bb17);
u8 U[4];
w4(U+0,u32(0x79031cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bb1c:{NFSU2_TR(0x55bb1c);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bb21:{NFSU2_TR(0x55bb21);
u8 U[4];
w4(U+0,u32(0x8384e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bb26:{NFSU2_TR(0x55bb26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55bb2bull));
TAIL_STATIC(0x537c00u,537);
}
B55bb2b:L55bb2b:{c.instructions+=2;NFSU2_TR(0x55bb2b);
u8 U[4];
w4(U+0,u32(0x331f4f58ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bb30:{NFSU2_TR(0x55bb30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55bb35ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B55bb35:L55bb35:{c.instructions+=8;NFSU2_TR(0x55bb35);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bb36:{NFSU2_TR(0x55bb36);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55bb39:{NFSU2_TR(0x55bb39);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bb3b:{NFSU2_TR(0x55bb3b);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bb3d:{NFSU2_TR(0x55bb3d);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bb42:{NFSU2_TR(0x55bb42);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bb47:{NFSU2_TR(0x55bb47);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bb48:{NFSU2_TR(0x55bb48);
{goto L55bb8c;}
}
B55bb4a:L55bb4a:{c.instructions+=3;NFSU2_TR(0x55bb4a);
u8 U[4];
w4(U+0,u32(0x8384e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bb4f:{NFSU2_TR(0x55bb4f);
u8 U[4];
w4(U+0,u32(0x79d488ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bb54:{NFSU2_TR(0x55bb54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55bb59ull));
TAIL_STATIC(0x50d510u,50d);
}
B55bb59:L55bb59:{c.instructions+=5;NFSU2_TR(0x55bb59);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bb5b:{NFSU2_TR(0x55bb5b);
u8 U[4];
w4(U+0,u32(0x79031cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bb60:{NFSU2_TR(0x55bb60);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bb65:{NFSU2_TR(0x55bb65);
u8 U[4];
w4(U+0,u32(0x8384e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bb6a:{NFSU2_TR(0x55bb6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55bb6full));
TAIL_STATIC(0x537c00u,537);
}
B55bb6f:L55bb6f:{c.instructions+=2;NFSU2_TR(0x55bb6f);
u8 U[4];
w4(U+0,u32(0x331f4f58ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bb74:{NFSU2_TR(0x55bb74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55bb79ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B55bb79:L55bb79:{c.instructions+=7;NFSU2_TR(0x55bb79);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55bb7c:{NFSU2_TR(0x55bb7c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bb7d:{NFSU2_TR(0x55bb7d);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bb7f:{NFSU2_TR(0x55bb7f);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bb81:{NFSU2_TR(0x55bb81);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bb86:{NFSU2_TR(0x55bb86);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bb8b:{NFSU2_TR(0x55bb8b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bb8c:L55bb8c:{c.instructions+=1;NFSU2_TR(0x55bb8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55bb91ull));
TAIL_STATIC(0x558540u,558);
}
B55bb91:L55bb91:{c.instructions+=1;NFSU2_TR(0x55bb91);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x34ull))));
}
B55bb94:L55bb94:{c.instructions+=2;NFSU2_TR(0x55bb94);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B55bb98:{NFSU2_TR(0x55bb98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B55bb99:L55bb99:{c.instructions+=3;NFSU2_TR(0x55bb99);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bb9e:{NFSU2_TR(0x55bb9e);
s1(0x838521,u8(0x0ull));
}
B55bba5:{NFSU2_TR(0x55bba5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55bbaaull));
TAIL_STATIC(0x52cef0u,52c);
}
B55bbaa:L55bbaa:{c.instructions+=3;NFSU2_TR(0x55bbaa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55bbad:{NFSU2_TR(0x55bbad);
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
B55bbaf:{NFSU2_TR(0x55bbaf);
if(r1(R+518)){{goto L55bc63;}}
}
B55bbb5:L55bbb5:{c.instructions+=6;NFSU2_TR(0x55bbb5);
w4(R+4,u32(0xffull));
}
B55bbba:{NFSU2_TR(0x55bbba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55bbbd:{NFSU2_TR(0x55bbbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55bbc0:{NFSU2_TR(0x55bbc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55bbc3:{NFSU2_TR(0x55bbc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55bbc6:{NFSU2_TR(0x55bbc6);
{goto L55bc63;}
}
B55bbcb:L55bbcb:{c.instructions+=2;NFSU2_TR(0x55bbcb);
__builtin_memmove((R+4),(R+20),4);
}
B55bbcd:{NFSU2_TR(0x55bbcd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55bbd2ull));
TAIL_STATIC(0x537f50u,537);
}
B55bbd2:L55bbd2:{c.instructions+=1;NFSU2_TR(0x55bbd2);
{goto L55bc63;}
}
B55bbd7:L55bbd7:{c.instructions+=2;NFSU2_TR(0x55bbd7);
u8 U[4];
w4(U+0,u32(0x79d454ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bbdc:{NFSU2_TR(0x55bbdc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55bbe1ull));
TAIL_STATIC(0x50d510u,50d);
}
B55bbe1:L55bbe1:{c.instructions+=3;NFSU2_TR(0x55bbe1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55bbe4:{NFSU2_TR(0x55bbe4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bbe5:{NFSU2_TR(0x55bbe5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55bbeaull));
TAIL_STATIC(0x52cef0u,52c);
}
B55bbea:L55bbea:{c.instructions+=5;NFSU2_TR(0x55bbea);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55bbee:{NFSU2_TR(0x55bbee);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55bbf1:{NFSU2_TR(0x55bbf1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B55bbf4:{NFSU2_TR(0x55bbf4);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55bbf6:{NFSU2_TR(0x55bbf6);
if(r1(R+518)){{goto L55bc36;}}
}
B55bbf8:L55bbf8:{c.instructions+=2;NFSU2_TR(0x55bbf8);
u8 U[4];
w4(U+0,u32(0x79d430ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bbfd:{NFSU2_TR(0x55bbfd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55bc02ull));
TAIL_STATIC(0x50d510u,50d);
}
B55bc02:L55bc02:{c.instructions+=4;NFSU2_TR(0x55bc02);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55bc05:{NFSU2_TR(0x55bc05);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55bc08:{NFSU2_TR(0x55bc08);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55bc0a:{NFSU2_TR(0x55bc0a);
if(r1(R+518)){{goto L55bc36;}}
}
B55bc0c:L55bc0c:{c.instructions+=2;NFSU2_TR(0x55bc0c);
u8 U[4];
w4(U+0,u32(0x79d410ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bc11:{NFSU2_TR(0x55bc11);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55bc16ull));
TAIL_STATIC(0x50d510u,50d);
}
B55bc16:L55bc16:{c.instructions+=4;NFSU2_TR(0x55bc16);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55bc19:{NFSU2_TR(0x55bc19);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bc1b:{NFSU2_TR(0x55bc1b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bc1c:{NFSU2_TR(0x55bc1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55bc21ull));
TAIL_STATIC(0x51de60u,51d);
}
B55bc21:L55bc21:{c.instructions+=6;NFSU2_TR(0x55bc21);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55bc24:{NFSU2_TR(0x55bc24);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55bc27:{NFSU2_TR(0x55bc27);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bc28:{NFSU2_TR(0x55bc28);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bc2d:{NFSU2_TR(0x55bc2d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bc2e:{NFSU2_TR(0x55bc2e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55bc33ull));
TAIL_STATIC(0x558ac0u,558);
}
B55bc33:L55bc33:{c.instructions+=1;NFSU2_TR(0x55bc33);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B55bc36:L55bc36:{c.instructions+=2;NFSU2_TR(0x55bc36);
u8 U[4];
w4(U+0,u32(0x79d3e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bc3b:{NFSU2_TR(0x55bc3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55bc40ull));
TAIL_STATIC(0x50d510u,50d);
}
B55bc40:L55bc40:{c.instructions+=2;NFSU2_TR(0x55bc40);
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
B55bc43:{NFSU2_TR(0x55bc43);
{goto L55bc63;}
}
B55bc45:L55bc45:{c.instructions+=2;NFSU2_TR(0x55bc45);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0xc519bfc0ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xc519bfc0ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xc519bfc0ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B55bc4b:{NFSU2_TR(0x55bc4b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55bc63;}}
}
B55bc4d:L55bc4d:{c.instructions+=2;NFSU2_TR(0x55bc4d);
u8 U[22];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x3ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B55bc52:{NFSU2_TR(0x55bc52);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55bc63;}}
}
B55bc54:L55bc54:{c.instructions+=2;NFSU2_TR(0x55bc54);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B55bc5a:{NFSU2_TR(0x55bc5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55bc5full));
TAIL_STATIC(0x50cf10u,50c);
}
B55bc5f:L55bc5f:{c.instructions+=2;NFSU2_TR(0x55bc5f);
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
B55bc61:{NFSU2_TR(0x55bc61);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55bc78;}}
}
B55bc63:L55bc63:{c.instructions+=9;NFSU2_TR(0x55bc63);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55bc67:{NFSU2_TR(0x55bc67);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55bc6b:{NFSU2_TR(0x55bc6b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B55bc6e:{NFSU2_TR(0x55bc6e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bc6f:{NFSU2_TR(0x55bc6f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bc71:{NFSU2_TR(0x55bc71);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bc72:{NFSU2_TR(0x55bc72);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bc73:{NFSU2_TR(0x55bc73);
__builtin_memmove((R+4),(R+20),4);
}
B55bc75:{NFSU2_TR(0x55bc75);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55bc78ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B55bc78:L55bc78:{c.instructions+=1;NFSU2_TR(0x55bc78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55bc79:L55bc79:{c.instructions+=4;NFSU2_TR(0x55bc79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55bc7a:{NFSU2_TR(0x55bc7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55bc7b:{NFSU2_TR(0x55bc7b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x34ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x34ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x34ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B55bc7e:{NFSU2_TR(0x55bc7e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55bc90:L55bc90:{c.instructions+=8;NFSU2_TR(0x55bc90);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bc91:{NFSU2_TR(0x55bc91);
__builtin_memmove((R+20),(R+16),4);
}
B55bc93:{NFSU2_TR(0x55bc93);
__builtin_memmove((R+0),gp(0x7fa1b8),4);
}
B55bc98:{NFSU2_TR(0x55bc98);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bc99:{NFSU2_TR(0x55bc99);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B55bc9c:{NFSU2_TR(0x55bc9c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bc9d:{NFSU2_TR(0x55bc9d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bc9e:{NFSU2_TR(0x55bc9e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55bca3ull));
TAIL_STATIC(0x43dcc0u,43d);
}
B55bca3:L55bca3:{c.instructions+=3;NFSU2_TR(0x55bca3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B55bca6:{NFSU2_TR(0x55bca6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55bca8:{NFSU2_TR(0x55bca8);
if(r1(R+518)){{goto L55bd33;}}
}
B55bcae:L55bcae:{c.instructions+=4;NFSU2_TR(0x55bcae);
__builtin_memmove((R+4),gp(0x7fa1bc),4);
}
B55bcb4:{NFSU2_TR(0x55bcb4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bcb5:{NFSU2_TR(0x55bcb5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bcb6:{NFSU2_TR(0x55bcb6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55bcbbull));
TAIL_STATIC(0x43dcc0u,43d);
}
B55bcbb:L55bcbb:{c.instructions+=3;NFSU2_TR(0x55bcbb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B55bcbe:{NFSU2_TR(0x55bcbe);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55bcc0:{NFSU2_TR(0x55bcc0);
if(r1(R+518)){{goto L55bd33;}}
}
B55bcc2:L55bcc2:{c.instructions+=4;NFSU2_TR(0x55bcc2);
__builtin_memmove((R+8),gp(0x7fa1d8),4);
}
B55bcc8:{NFSU2_TR(0x55bcc8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bcc9:{NFSU2_TR(0x55bcc9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bcca:{NFSU2_TR(0x55bcca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55bccfull));
TAIL_STATIC(0x43dcc0u,43d);
}
B55bccf:L55bccf:{c.instructions+=3;NFSU2_TR(0x55bccf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B55bcd2:{NFSU2_TR(0x55bcd2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55bcd4:{NFSU2_TR(0x55bcd4);
if(r1(R+518)){{goto L55bd33;}}
}
B55bcd6:L55bcd6:{c.instructions+=4;NFSU2_TR(0x55bcd6);
__builtin_memmove((R+0),gp(0x7fa1e0),4);
}
B55bcdb:{NFSU2_TR(0x55bcdb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bcdc:{NFSU2_TR(0x55bcdc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bcdd:{NFSU2_TR(0x55bcdd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55bce2ull));
TAIL_STATIC(0x43dcc0u,43d);
}
B55bce2:L55bce2:{c.instructions+=3;NFSU2_TR(0x55bce2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B55bce5:{NFSU2_TR(0x55bce5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55bce7:{NFSU2_TR(0x55bce7);
if(r1(R+518)){{goto L55bd33;}}
}
B55bce9:L55bce9:{c.instructions+=4;NFSU2_TR(0x55bce9);
__builtin_memmove((R+4),gp(0x7fa1f8),4);
}
B55bcef:{NFSU2_TR(0x55bcef);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bcf0:{NFSU2_TR(0x55bcf0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bcf1:{NFSU2_TR(0x55bcf1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55bcf6ull));
TAIL_STATIC(0x43dcc0u,43d);
}
B55bcf6:L55bcf6:{c.instructions+=3;NFSU2_TR(0x55bcf6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B55bcf9:{NFSU2_TR(0x55bcf9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55bcfb:{NFSU2_TR(0x55bcfb);
if(r1(R+518)){{goto L55bd33;}}
}
B55bcfd:L55bcfd:{c.instructions+=4;NFSU2_TR(0x55bcfd);
__builtin_memmove((R+8),gp(0x7fa1f4),4);
}
B55bd03:{NFSU2_TR(0x55bd03);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bd04:{NFSU2_TR(0x55bd04);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bd05:{NFSU2_TR(0x55bd05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55bd0aull));
TAIL_STATIC(0x43dcc0u,43d);
}
B55bd0a:L55bd0a:{c.instructions+=3;NFSU2_TR(0x55bd0a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B55bd0d:{NFSU2_TR(0x55bd0d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55bd0f:{NFSU2_TR(0x55bd0f);
if(r1(R+518)){{goto L55bd33;}}
}
B55bd11:L55bd11:{c.instructions+=4;NFSU2_TR(0x55bd11);
__builtin_memmove((R+0),gp(0x7fa1e4),4);
}
B55bd16:{NFSU2_TR(0x55bd16);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bd17:{NFSU2_TR(0x55bd17);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bd18:{NFSU2_TR(0x55bd18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55bd1dull));
TAIL_STATIC(0x43dcc0u,43d);
}
B55bd1d:L55bd1d:{c.instructions+=3;NFSU2_TR(0x55bd1d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B55bd20:{NFSU2_TR(0x55bd20);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55bd22:{NFSU2_TR(0x55bd22);
if(r1(R+518)){{goto L55bd33;}}
}
B55bd24:L55bd24:{c.instructions+=2;NFSU2_TR(0x55bd24);
w4(R+4,u32(0x8637d0ull));
}
B55bd29:{NFSU2_TR(0x55bd29);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55bd2eull));
TAIL_STATIC(0x53d8c0u,53d);
}
B55bd2e:L55bd2e:{c.instructions+=3;NFSU2_TR(0x55bd2e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55bd2f:{NFSU2_TR(0x55bd2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55bd30:{NFSU2_TR(0x55bd30);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55bd33:L55bd33:{c.instructions+=2;NFSU2_TR(0x55bd33);
w4(R+4,u32(0x8637d0ull));
}
B55bd38:{NFSU2_TR(0x55bd38);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55bd3dull));
TAIL_STATIC(0x557ec0u,557);
}
B55bd3d:L55bd3d:{c.instructions+=4;NFSU2_TR(0x55bd3d);
u8 U[4];
w4(U+0,u32(0x8389d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bd42:{NFSU2_TR(0x55bd42);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bd47:{NFSU2_TR(0x55bd47);
w4(R+4,u32(0x8637d0ull));
}
B55bd4c:{NFSU2_TR(0x55bd4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55bd51ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x55b1a0u);}goto L55b1a0;}
}
B55bd51:L55bd51:{c.instructions+=3;NFSU2_TR(0x55bd51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55bd52:{NFSU2_TR(0x55bd52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55bd53:{NFSU2_TR(0x55bd53);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55bd60:L55bd60:{c.instructions+=11;NFSU2_TR(0x55bd60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B55bd63:{NFSU2_TR(0x55bd63);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bd64:{NFSU2_TR(0x55bd64);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bd65:{NFSU2_TR(0x55bd65);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bd66:{NFSU2_TR(0x55bd66);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bd67:{NFSU2_TR(0x55bd67);
__builtin_memmove((R+28),(R+4),4);
}
B55bd69:{NFSU2_TR(0x55bd69);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55bd6c:{NFSU2_TR(0x55bd6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55bd6f:{NFSU2_TR(0x55bd6f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55bd73:{NFSU2_TR(0x55bd73);
__builtin_memmove((R+4),(R+28),4);
}
B55bd75:{NFSU2_TR(0x55bd75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55bd7aull));
TAIL_STATIC(0x520920u,520);
}
B55bd7a:L55bd7a:{c.instructions+=6;NFSU2_TR(0x55bd7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B55bd7d:{NFSU2_TR(0x55bd7d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B55bd80:{NFSU2_TR(0x55bd80);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B55bd82:{NFSU2_TR(0x55bd82);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55bd84:{NFSU2_TR(0x55bd84);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55bd88:{NFSU2_TR(0x55bd88);
if(r1(R+518)){{goto L55bddc;}}
}
B55bd8a:L55bd8a:{c.instructions+=1;NFSU2_TR(0x55bd8a);
__builtin_memmove((R+12),(R+12),4);
}
B55bd90:L55bd90:{c.instructions+=5;NFSU2_TR(0x55bd90);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55bd94:{NFSU2_TR(0x55bd94);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55bd97:{NFSU2_TR(0x55bd97);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bd98:{NFSU2_TR(0x55bd98);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bd99:{NFSU2_TR(0x55bd99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55bd9eull));
TAIL_STATIC(0x43dcc0u,43d);
}
B55bd9e:L55bd9e:{c.instructions+=3;NFSU2_TR(0x55bd9e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B55bda1:{NFSU2_TR(0x55bda1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55bda3:{NFSU2_TR(0x55bda3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55bda7;}}
}
B55bda5:L55bda5:{c.instructions+=1;NFSU2_TR(0x55bda5);
__builtin_memmove((R+20),(R+24),4);
}
B55bda7:L55bda7:{c.instructions+=3;NFSU2_TR(0x55bda7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B55bda9:{NFSU2_TR(0x55bda9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55bdab:{NFSU2_TR(0x55bdab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x55bd90u);}goto L55bd90;}}
}
B55bdad:L55bdad:{c.instructions+=2;NFSU2_TR(0x55bdad);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55bdaf:{NFSU2_TR(0x55bdaf);
if(r1(R+518)){{goto L55bddc;}}
}
B55bdb1:L55bdb1:{c.instructions+=4;NFSU2_TR(0x55bdb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55bdb4:{NFSU2_TR(0x55bdb4);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B55bdba:{NFSU2_TR(0x55bdba);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55bdbc:{NFSU2_TR(0x55bdbc);
if(r1(R+518)){{goto L55bdce;}}
}
B55bdbe:L55bdbe:{c.instructions+=6;NFSU2_TR(0x55bdbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55bdc1:{NFSU2_TR(0x55bdc1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55bdc5:{NFSU2_TR(0x55bdc5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bdc7:{NFSU2_TR(0x55bdc7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bdc8:{NFSU2_TR(0x55bdc8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bdc9:{NFSU2_TR(0x55bdc9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55bdceull));
TAIL_STATIC(0x5377a0u,537);
}
B55bdce:L55bdce:{c.instructions+=5;NFSU2_TR(0x55bdce);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55bdd1:{NFSU2_TR(0x55bdd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55bdd4:{NFSU2_TR(0x55bdd4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bdd5:{NFSU2_TR(0x55bdd5);
__builtin_memmove((R+4),(R+28),4);
}
B55bdd7:{NFSU2_TR(0x55bdd7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55bddcull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x55bc90u);}goto L55bc90;}
}
B55bddc:L55bddc:{c.instructions+=6;NFSU2_TR(0x55bddc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55bddd:{NFSU2_TR(0x55bddd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55bdde:{NFSU2_TR(0x55bdde);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55bddf:{NFSU2_TR(0x55bddf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B55bde0:{NFSU2_TR(0x55bde0);
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
B55bde3:{NFSU2_TR(0x55bde3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55bdf0:L55bdf0:{c.instructions+=10;NFSU2_TR(0x55bdf0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B55bdf3:{NFSU2_TR(0x55bdf3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bdf4:{NFSU2_TR(0x55bdf4);
__builtin_memmove((R+24),(R+4),4);
}
B55bdf6:{NFSU2_TR(0x55bdf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55bdf9:{NFSU2_TR(0x55bdf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55bdfc:{NFSU2_TR(0x55bdfc);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55be00:{NFSU2_TR(0x55be00);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55be01:{NFSU2_TR(0x55be01);
__builtin_memmove((R+4),(R+24),4);
}
B55be03:{NFSU2_TR(0x55be03);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55be07:{NFSU2_TR(0x55be07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55be0cull));
TAIL_STATIC(0x520a80u,520);
}
B55be0c:L55be0c:{c.instructions+=5;NFSU2_TR(0x55be0c);
__builtin_memmove((R+28),(R+0),4);
}
B55be0e:{NFSU2_TR(0x55be0e);
u8 U[4];
w4(U+0,u32(0x78f5a4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55be13:{NFSU2_TR(0x55be13);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55be14:{NFSU2_TR(0x55be14);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55be18:{NFSU2_TR(0x55be18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55be1dull));
TAIL_STATIC(0x43dcc0u,43d);
}
B55be1d:L55be1d:{c.instructions+=3;NFSU2_TR(0x55be1d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B55be20:{NFSU2_TR(0x55be20);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55be22:{NFSU2_TR(0x55be22);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55be4b;}}
}
B55be24:L55be24:{c.instructions+=3;NFSU2_TR(0x55be24);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B55be2a:{NFSU2_TR(0x55be2a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55be2c:{NFSU2_TR(0x55be2c);
if(r1(R+518)){{goto L55be3c;}}
}
B55be2e:L55be2e:{c.instructions+=6;NFSU2_TR(0x55be2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55be31:{NFSU2_TR(0x55be31);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55be32:{NFSU2_TR(0x55be32);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55be35:{NFSU2_TR(0x55be35);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55be36:{NFSU2_TR(0x55be36);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55be37:{NFSU2_TR(0x55be37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55be3cull));
TAIL_STATIC(0x5377a0u,537);
}
B55be3c:L55be3c:{c.instructions+=5;NFSU2_TR(0x55be3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55be3d:{NFSU2_TR(0x55be3d);
w4(R+4,u32(0x838980ull));
}
B55be42:{NFSU2_TR(0x55be42);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55be43:{NFSU2_TR(0x55be43);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B55be46:{NFSU2_TR(0x55be46);
TAIL_STATIC(0x54fd40u,54f);
}
B55be4b:L55be4b:{c.instructions+=4;NFSU2_TR(0x55be4b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55be4c:{NFSU2_TR(0x55be4c);
u8 U[4];
w4(U+0,u32(0x794df0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55be51:{NFSU2_TR(0x55be51);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55be52:{NFSU2_TR(0x55be52);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55be57ull));
TAIL_STATIC(0x43dcc0u,43d);
}
B55be57:L55be57:{c.instructions+=3;NFSU2_TR(0x55be57);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B55be5a:{NFSU2_TR(0x55be5a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55be5c:{NFSU2_TR(0x55be5c);
if(r1(R+518)){{goto L55bed7;}}
}
B55be5e:L55be5e:{c.instructions+=3;NFSU2_TR(0x55be5e);
u8 U[4];
w4(U+0,u32(0x78f354ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55be63:{NFSU2_TR(0x55be63);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55be64:{NFSU2_TR(0x55be64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55be69ull));
TAIL_STATIC(0x43dcc0u,43d);
}
B55be69:L55be69:{c.instructions+=3;NFSU2_TR(0x55be69);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B55be6c:{NFSU2_TR(0x55be6c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55be6e:{NFSU2_TR(0x55be6e);
if(r1(R+518)){{goto L55bed7;}}
}
B55be70:L55be70:{c.instructions+=5;NFSU2_TR(0x55be70);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B55be73:{NFSU2_TR(0x55be73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+24),(U+0),4);
}
B55be75:{NFSU2_TR(0x55be75);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B55be77:{NFSU2_TR(0x55be77);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55be79:{NFSU2_TR(0x55be79);
if(r1(R+518)){{goto L55bed0;}}
}
B55be7b:L55be7b:{c.instructions+=1;NFSU2_TR(0x55be7b);
{goto L55be80;}
}
B55be80:L55be80:{c.instructions+=5;NFSU2_TR(0x55be80);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55be84:{NFSU2_TR(0x55be84);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55be87:{NFSU2_TR(0x55be87);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55be88:{NFSU2_TR(0x55be88);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55be89:{NFSU2_TR(0x55be89);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55be8eull));
TAIL_STATIC(0x43dcc0u,43d);
}
B55be8e:L55be8e:{c.instructions+=3;NFSU2_TR(0x55be8e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B55be91:{NFSU2_TR(0x55be91);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55be93:{NFSU2_TR(0x55be93);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55be97;}}
}
B55be95:L55be95:{c.instructions+=1;NFSU2_TR(0x55be95);
__builtin_memmove((R+28),(R+24),4);
}
B55be97:L55be97:{c.instructions+=3;NFSU2_TR(0x55be97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B55be99:{NFSU2_TR(0x55be99);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55be9b:{NFSU2_TR(0x55be9b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x55be80u);}goto L55be80;}}
}
B55be9d:L55be9d:{c.instructions+=2;NFSU2_TR(0x55be9d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55be9f:{NFSU2_TR(0x55be9f);
if(r1(R+518)){{goto L55bed0;}}
}
B55bea1:L55bea1:{c.instructions+=5;NFSU2_TR(0x55bea1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B55bea5:{NFSU2_TR(0x55bea5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55bea8:{NFSU2_TR(0x55bea8);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B55beae:{NFSU2_TR(0x55beae);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55beb0:{NFSU2_TR(0x55beb0);
if(r1(R+518)){{goto L55bec2;}}
}
B55beb2:L55beb2:{c.instructions+=6;NFSU2_TR(0x55beb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55beb5:{NFSU2_TR(0x55beb5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55beb9:{NFSU2_TR(0x55beb9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bebb:{NFSU2_TR(0x55bebb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bebc:{NFSU2_TR(0x55bebc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bebd:{NFSU2_TR(0x55bebd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55bec2ull));
TAIL_STATIC(0x5377a0u,537);
}
B55bec2:L55bec2:{c.instructions+=5;NFSU2_TR(0x55bec2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55bec5:{NFSU2_TR(0x55bec5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55bec8:{NFSU2_TR(0x55bec8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bec9:{NFSU2_TR(0x55bec9);
__builtin_memmove((R+4),(R+24),4);
}
B55becb:{NFSU2_TR(0x55becb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55bed0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x55bc90u);}goto L55bc90;}
}
B55bed0:L55bed0:{c.instructions+=5;NFSU2_TR(0x55bed0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B55bed1:{NFSU2_TR(0x55bed1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55bed2:{NFSU2_TR(0x55bed2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55bed3:{NFSU2_TR(0x55bed3);
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
B55bed6:{NFSU2_TR(0x55bed6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55bed7:L55bed7:{c.instructions+=3;NFSU2_TR(0x55bed7);
__builtin_memmove((R+0),gp(0x83898c),4);
}
B55bedc:{NFSU2_TR(0x55bedc);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55bedf:{NFSU2_TR(0x55bedf);
if(r1(R+518)){{goto L55beea;}}
}
B55bee1:L55bee1:{c.instructions+=2;NFSU2_TR(0x55bee1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55bee4:{NFSU2_TR(0x55bee4);
if(r1(R+518)){{goto L55beea;}}
}
B55bee6:L55bee6:{c.instructions+=2;NFSU2_TR(0x55bee6);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B55bee8:{NFSU2_TR(0x55bee8);
{goto L55beec;}
}
B55beea:L55beea:{c.instructions+=1;NFSU2_TR(0x55beea);
w1(R+12,u8(0x1ull));
}
B55beec:L55beec:{c.instructions+=2;NFSU2_TR(0x55beec);
w4(R+4,u32(0x838980ull));
}
B55bef1:{NFSU2_TR(0x55bef1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55bef6ull));
TAIL_STATIC(0x521100u,521);
}
B55bef6:L55bef6:{c.instructions+=2;NFSU2_TR(0x55bef6);
w4(R+4,u32(0x83a9d0ull));
}
B55befb:{NFSU2_TR(0x55befb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55bf00ull));
TAIL_STATIC(0x52a4c0u,52a);
}
B55bf00:L55bf00:{c.instructions+=3;NFSU2_TR(0x55bf00);
__builtin_memmove((R+4),gp(0x838540),1);
}
B55bf06:{NFSU2_TR(0x55bf06);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55bf08:{NFSU2_TR(0x55bf08);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55bf0f;}}
}
B55bf0a:L55bf0a:{c.instructions+=1;NFSU2_TR(0x55bf0a);
__builtin_memmove(gp(0x838540),(R+0),1);
}
B55bf0f:L55bf0f:{c.instructions+=2;NFSU2_TR(0x55bf0f);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55bf11:{NFSU2_TR(0x55bf11);
if(r1(R+518)){{goto L55bf44;}}
}
B55bf13:L55bf13:{c.instructions+=2;NFSU2_TR(0x55bf13);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55bf15:{NFSU2_TR(0x55bf15);
if(r1(R+518)){{goto L55bf44;}}
}
B55bf17:L55bf17:{c.instructions+=10;NFSU2_TR(0x55bf17);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55bf1a:{NFSU2_TR(0x55bf1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55bf1d:{NFSU2_TR(0x55bf1d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bf1f:{NFSU2_TR(0x55bf1f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bf21:{NFSU2_TR(0x55bf21);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bf23:{NFSU2_TR(0x55bf23);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bf25:{NFSU2_TR(0x55bf25);
u8 U[4];
w4(U+0,u32(0x2042ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bf2a:{NFSU2_TR(0x55bf2a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bf2b:{NFSU2_TR(0x55bf2b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bf2c:{NFSU2_TR(0x55bf2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55bf31ull));
TAIL_STATIC(0x4a3100u,4a3);
}
B55bf31:L55bf31:{c.instructions+=7;NFSU2_TR(0x55bf31);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B55bf34:{NFSU2_TR(0x55bf34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B55bf35:{NFSU2_TR(0x55bf35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55bf36:{NFSU2_TR(0x55bf36);
w4(R+4,u32(0x838980ull));
}
B55bf3b:{NFSU2_TR(0x55bf3b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55bf3c:{NFSU2_TR(0x55bf3c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B55bf3f:{NFSU2_TR(0x55bf3f);
TAIL_STATIC(0x54fd40u,54f);
}
B55bf44:L55bf44:{c.instructions+=3;NFSU2_TR(0x55bf44);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B55bf4a:{NFSU2_TR(0x55bf4a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55bf4c:{NFSU2_TR(0x55bf4c);
if(r1(R+518)){{goto L55bf5d;}}
}
B55bf4e:L55bf4e:{c.instructions+=6;NFSU2_TR(0x55bf4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55bf51:{NFSU2_TR(0x55bf51);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55bf54:{NFSU2_TR(0x55bf54);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bf56:{NFSU2_TR(0x55bf56);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bf57:{NFSU2_TR(0x55bf57);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bf58:{NFSU2_TR(0x55bf58);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55bf5dull));
TAIL_STATIC(0x5377a0u,537);
}
B55bf5d:L55bf5d:{c.instructions+=5;NFSU2_TR(0x55bf5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55bf60:{NFSU2_TR(0x55bf60);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55bf63:{NFSU2_TR(0x55bf63);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bf64:{NFSU2_TR(0x55bf64);
__builtin_memmove((R+4),(R+24),4);
}
B55bf66:{NFSU2_TR(0x55bf66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55bf6bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x55bc90u);}goto L55bc90;}
}
B55bf6b:L55bf6b:{c.instructions+=6;NFSU2_TR(0x55bf6b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B55bf6c:{NFSU2_TR(0x55bf6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55bf6d:{NFSU2_TR(0x55bf6d);
w4(R+4,u32(0x838980ull));
}
B55bf72:{NFSU2_TR(0x55bf72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55bf73:{NFSU2_TR(0x55bf73);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B55bf76:{NFSU2_TR(0x55bf76);
TAIL_STATIC(0x54fd40u,54f);
}
B55bf80:L55bf80:{c.instructions+=4;NFSU2_TR(0x55bf80);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bf81:{NFSU2_TR(0x55bf81);
__builtin_memmove((R+20),(R+16),4);
}
B55bf83:{NFSU2_TR(0x55bf83);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xc407210ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B55bf8a:{NFSU2_TR(0x55bf8a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55bfa0;}}
}
B55bf8c:L55bf8c:{c.instructions+=3;NFSU2_TR(0x55bf8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55bf8f:{NFSU2_TR(0x55bf8f);
__builtin_memmove(gp(0x838998),(R+0),4);
}
B55bf94:{NFSU2_TR(0x55bf94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55bf99ull));
TAIL_STATIC(0x54f980u,54f);
}
B55bf99:L55bf99:{c.instructions+=2;NFSU2_TR(0x55bf99);
__builtin_memmove((R+4),(R+0),4);
}
B55bf9b:{NFSU2_TR(0x55bf9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55bfa0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x55bd60u);}goto L55bd60;}
}
B55bfa0:L55bfa0:{c.instructions+=2;NFSU2_TR(0x55bfa0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55bfa1:{NFSU2_TR(0x55bfa1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55bfb0:L55bfb0:{c.instructions+=4;NFSU2_TR(0x55bfb0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bfb1:{NFSU2_TR(0x55bfb1);
__builtin_memmove((R+20),(R+16),4);
}
B55bfb3:{NFSU2_TR(0x55bfb3);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xc407210ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B55bfba:{NFSU2_TR(0x55bfba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x55c00au,55c);}
}
B55bfbc:L55bfbc:{c.instructions+=3;NFSU2_TR(0x55bfbc);
u8 U[4];
w4(U+0,u32(0x22ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55bfbe:{NFSU2_TR(0x55bfbe);
w4(R+4,u32(0x8392c0ull));
}
B55bfc3:{NFSU2_TR(0x55bfc3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55bfc8ull));
TAIL_STATIC(0x6102f0u,610);
}
B55bfc8:L55bfc8:{c.instructions+=2;NFSU2_TR(0x55bfc8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55bfca:{NFSU2_TR(0x55bfca);
if(r1(R+518)){{goto L55bfda;}}
}
B55bfcc:L55bfcc:{c.instructions+=7;NFSU2_TR(0x55bfcc);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B55bfcf:{NFSU2_TR(0x55bfcf);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0xe0ull))));
}
B55bfd1:{NFSU2_TR(0x55bfd1);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B55bfd3:{NFSU2_TR(0x55bfd3);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B55bfd5:{NFSU2_TR(0x55bfd5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B55bfd6:{NFSU2_TR(0x55bfd6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55bfd8:{NFSU2_TR(0x55bfd8);
if(r1(R+518)){{goto L55bff4;}}
}
B55bfda:L55bfda:{c.instructions+=2;NFSU2_TR(0x55bfda);
s4(0x838998,u32(0x2ull));
}
B55bfe4:{NFSU2_TR(0x55bfe4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55bfe9ull));
TAIL_STATIC(0x54f980u,54f);
}
B55bfe9:L55bfe9:{c.instructions+=2;NFSU2_TR(0x55bfe9);
__builtin_memmove((R+4),(R+0),4);
}
B55bfeb:{NFSU2_TR(0x55bfeb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55bff0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x55bd60u);}goto L55bd60;}
}
B55bff0:L55bff0:{c.instructions+=2;NFSU2_TR(0x55bff0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55bff1:{NFSU2_TR(0x55bff1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55bff4:L55bff4:{c.instructions+=2;NFSU2_TR(0x55bff4);
s4(0x838998,u32(0x3ull));
}
B55bffe:{NFSU2_TR(0x55bffe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c003ull));
TAIL_STATIC(0x54f980u,54f);
}
XIT:NFSU2_TR_EXIT(0x55b,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
