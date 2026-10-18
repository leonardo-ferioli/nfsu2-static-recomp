#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_6e3(u8* __restrict R,Cpu& c);
u32 body_6e4(u8* __restrict R,Cpu& c);
u32 body_6eb(u8* __restrict R,Cpu& c);
u32 body_6ed(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6ec,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6ec,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6ec(u8* __restrict R,Cpu& c);
u32 page_6ec(Cpu& c){return body_6ec(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6ec(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6ec002:goto L6ec002;
case 0x6ec006:c.instructions+=7;goto B6ec006;
case 0x6ec007:c.instructions+=6;goto B6ec007;
case 0x6ec008:c.instructions+=5;goto B6ec008;
case 0x6ec00b:c.instructions+=4;goto B6ec00b;
case 0x6ec00c:c.instructions+=3;goto B6ec00c;
case 0x6ec00d:c.instructions+=2;goto B6ec00d;
case 0x6ec010:c.instructions+=1;goto B6ec010;
case 0x6ec020:goto L6ec020;
case 0x6ec021:c.instructions+=30;goto B6ec021;
case 0x6ec022:c.instructions+=29;goto B6ec022;
case 0x6ec024:c.instructions+=28;goto B6ec024;
case 0x6ec028:c.instructions+=27;goto B6ec028;
case 0x6ec02b:c.instructions+=26;goto B6ec02b;
case 0x6ec02d:c.instructions+=25;goto B6ec02d;
case 0x6ec031:c.instructions+=24;goto B6ec031;
case 0x6ec034:c.instructions+=23;goto B6ec034;
case 0x6ec036:c.instructions+=22;goto B6ec036;
case 0x6ec03a:c.instructions+=21;goto B6ec03a;
case 0x6ec03c:c.instructions+=20;goto B6ec03c;
case 0x6ec03f:c.instructions+=19;goto B6ec03f;
case 0x6ec043:c.instructions+=18;goto B6ec043;
case 0x6ec044:c.instructions+=17;goto B6ec044;
case 0x6ec048:c.instructions+=16;goto B6ec048;
case 0x6ec04d:c.instructions+=15;goto B6ec04d;
case 0x6ec04f:c.instructions+=14;goto B6ec04f;
case 0x6ec051:c.instructions+=13;goto B6ec051;
case 0x6ec053:c.instructions+=12;goto B6ec053;
case 0x6ec056:c.instructions+=11;goto B6ec056;
case 0x6ec059:c.instructions+=10;goto B6ec059;
case 0x6ec05d:c.instructions+=9;goto B6ec05d;
case 0x6ec060:c.instructions+=8;goto B6ec060;
case 0x6ec062:c.instructions+=7;goto B6ec062;
case 0x6ec065:c.instructions+=6;goto B6ec065;
case 0x6ec067:c.instructions+=5;goto B6ec067;
case 0x6ec06a:c.instructions+=4;goto B6ec06a;
case 0x6ec06c:c.instructions+=3;goto B6ec06c;
case 0x6ec06e:c.instructions+=2;goto B6ec06e;
case 0x6ec072:c.instructions+=1;goto B6ec072;
case 0x6ec074:goto L6ec074;
case 0x6ec077:c.instructions+=3;goto B6ec077;
case 0x6ec07a:c.instructions+=2;goto B6ec07a;
case 0x6ec07c:c.instructions+=1;goto B6ec07c;
case 0x6ec07f:goto L6ec07f;
case 0x6ec083:c.instructions+=3;goto B6ec083;
case 0x6ec085:c.instructions+=2;goto B6ec085;
case 0x6ec087:c.instructions+=1;goto B6ec087;
case 0x6ec08c:goto L6ec08c;
case 0x6ec090:c.instructions+=5;goto B6ec090;
case 0x6ec091:c.instructions+=4;goto B6ec091;
case 0x6ec092:c.instructions+=3;goto B6ec092;
case 0x6ec094:c.instructions+=2;goto B6ec094;
case 0x6ec095:c.instructions+=1;goto B6ec095;
case 0x6ec0a0:goto L6ec0a0;
case 0x6ec0a1:c.instructions+=5;goto B6ec0a1;
case 0x6ec0a3:c.instructions+=4;goto B6ec0a3;
case 0x6ec0a6:c.instructions+=3;goto B6ec0a6;
case 0x6ec0a8:c.instructions+=2;goto B6ec0a8;
case 0x6ec0ae:c.instructions+=1;goto B6ec0ae;
case 0x6ec0b0:goto L6ec0b0;
case 0x6ec0b6:c.instructions+=3;goto B6ec0b6;
case 0x6ec0b8:c.instructions+=2;goto B6ec0b8;
case 0x6ec0b9:c.instructions+=1;goto B6ec0b9;
case 0x6ec0bc:goto L6ec0bc;
case 0x6ec0be:c.instructions+=1;goto B6ec0be;
case 0x6ec0c3:goto L6ec0c3;
case 0x6ec0c8:c.instructions+=1;goto B6ec0c8;
case 0x6ec0ca:goto L6ec0ca;
case 0x6ec0cc:c.instructions+=2;goto B6ec0cc;
case 0x6ec0cd:c.instructions+=1;goto B6ec0cd;
case 0x6ec0d3:goto L6ec0d3;
case 0x6ec0d6:goto L6ec0d6;
case 0x6ec0d8:c.instructions+=2;goto B6ec0d8;
case 0x6ec0d9:c.instructions+=1;goto B6ec0d9;
case 0x6ec0e0:goto L6ec0e0;
case 0x6ec0e1:c.instructions+=14;goto B6ec0e1;
case 0x6ec0e2:c.instructions+=13;goto B6ec0e2;
case 0x6ec0e3:c.instructions+=12;goto B6ec0e3;
case 0x6ec0e5:c.instructions+=11;goto B6ec0e5;
case 0x6ec0e8:c.instructions+=10;goto B6ec0e8;
case 0x6ec0eb:c.instructions+=9;goto B6ec0eb;
case 0x6ec0ec:c.instructions+=8;goto B6ec0ec;
case 0x6ec0ef:c.instructions+=7;goto B6ec0ef;
case 0x6ec0f0:c.instructions+=6;goto B6ec0f0;
case 0x6ec0f3:c.instructions+=5;goto B6ec0f3;
case 0x6ec0f4:c.instructions+=4;goto B6ec0f4;
case 0x6ec0f8:c.instructions+=3;goto B6ec0f8;
case 0x6ec0f9:c.instructions+=2;goto B6ec0f9;
case 0x6ec0fb:c.instructions+=1;goto B6ec0fb;
case 0x6ec100:goto L6ec100;
case 0x6ec103:c.instructions+=11;goto B6ec103;
case 0x6ec108:c.instructions+=10;goto B6ec108;
case 0x6ec10a:c.instructions+=9;goto B6ec10a;
case 0x6ec10e:c.instructions+=8;goto B6ec10e;
case 0x6ec10f:c.instructions+=7;goto B6ec10f;
case 0x6ec112:c.instructions+=6;goto B6ec112;
case 0x6ec116:c.instructions+=5;goto B6ec116;
case 0x6ec119:c.instructions+=4;goto B6ec119;
case 0x6ec11c:c.instructions+=3;goto B6ec11c;
case 0x6ec11f:c.instructions+=2;goto B6ec11f;
case 0x6ec121:c.instructions+=1;goto B6ec121;
case 0x6ec123:goto L6ec123;
case 0x6ec129:c.instructions+=11;goto B6ec129;
case 0x6ec12c:c.instructions+=10;goto B6ec12c;
case 0x6ec12d:c.instructions+=9;goto B6ec12d;
case 0x6ec12e:c.instructions+=8;goto B6ec12e;
case 0x6ec130:c.instructions+=7;goto B6ec130;
case 0x6ec133:c.instructions+=6;goto B6ec133;
case 0x6ec135:c.instructions+=5;goto B6ec135;
case 0x6ec137:c.instructions+=4;goto B6ec137;
case 0x6ec13a:c.instructions+=3;goto B6ec13a;
case 0x6ec13e:c.instructions+=2;goto B6ec13e;
case 0x6ec13f:c.instructions+=1;goto B6ec13f;
case 0x6ec142:goto L6ec142;
case 0x6ec145:c.instructions+=10;goto B6ec145;
case 0x6ec147:c.instructions+=9;goto B6ec147;
case 0x6ec149:c.instructions+=8;goto B6ec149;
case 0x6ec14c:c.instructions+=7;goto B6ec14c;
case 0x6ec14f:c.instructions+=6;goto B6ec14f;
case 0x6ec152:c.instructions+=5;goto B6ec152;
case 0x6ec155:c.instructions+=4;goto B6ec155;
case 0x6ec158:c.instructions+=3;goto B6ec158;
case 0x6ec15a:c.instructions+=2;goto B6ec15a;
case 0x6ec15c:c.instructions+=1;goto B6ec15c;
case 0x6ec15e:goto L6ec15e;
case 0x6ec162:c.instructions+=2;goto B6ec162;
case 0x6ec164:c.instructions+=1;goto B6ec164;
case 0x6ec168:goto L6ec168;
case 0x6ec16b:c.instructions+=4;goto B6ec16b;
case 0x6ec16d:c.instructions+=3;goto B6ec16d;
case 0x6ec16e:c.instructions+=2;goto B6ec16e;
case 0x6ec172:c.instructions+=1;goto B6ec172;
case 0x6ec177:goto L6ec177;
case 0x6ec17b:c.instructions+=7;goto B6ec17b;
case 0x6ec17f:c.instructions+=6;goto B6ec17f;
case 0x6ec180:c.instructions+=5;goto B6ec180;
case 0x6ec183:c.instructions+=4;goto B6ec183;
case 0x6ec186:c.instructions+=3;goto B6ec186;
case 0x6ec188:c.instructions+=2;goto B6ec188;
case 0x6ec18c:c.instructions+=1;goto B6ec18c;
case 0x6ec18e:goto L6ec18e;
case 0x6ec18f:c.instructions+=1;goto B6ec18f;
case 0x6ec190:goto L6ec190;
case 0x6ec191:c.instructions+=3;goto B6ec191;
case 0x6ec192:c.instructions+=2;goto B6ec192;
case 0x6ec193:c.instructions+=1;goto B6ec193;
case 0x6ec1a0:goto L6ec1a0;
case 0x6ec1a4:c.instructions+=2;goto B6ec1a4;
case 0x6ec1a7:c.instructions+=1;goto B6ec1a7;
case 0x6ec1ac:goto L6ec1ac;
case 0x6ec1b0:goto L6ec1b0;
case 0x6ec1b3:c.instructions+=8;goto B6ec1b3;
case 0x6ec1b4:c.instructions+=7;goto B6ec1b4;
case 0x6ec1b5:c.instructions+=6;goto B6ec1b5;
case 0x6ec1b6:c.instructions+=5;goto B6ec1b6;
case 0x6ec1b8:c.instructions+=4;goto B6ec1b8;
case 0x6ec1bc:c.instructions+=3;goto B6ec1bc;
case 0x6ec1bf:c.instructions+=2;goto B6ec1bf;
case 0x6ec1c0:c.instructions+=1;goto B6ec1c0;
case 0x6ec1c2:goto L6ec1c2;
case 0x6ec1c5:c.instructions+=3;goto B6ec1c5;
case 0x6ec1c8:c.instructions+=2;goto B6ec1c8;
case 0x6ec1cb:c.instructions+=1;goto B6ec1cb;
case 0x6ec1ce:goto L6ec1ce;
case 0x6ec1d2:c.instructions+=8;goto B6ec1d2;
case 0x6ec1d5:c.instructions+=7;goto B6ec1d5;
case 0x6ec1d8:c.instructions+=6;goto B6ec1d8;
case 0x6ec1db:c.instructions+=5;goto B6ec1db;
case 0x6ec1df:c.instructions+=4;goto B6ec1df;
case 0x6ec1e2:c.instructions+=3;goto B6ec1e2;
case 0x6ec1e4:c.instructions+=2;goto B6ec1e4;
case 0x6ec1e8:c.instructions+=1;goto B6ec1e8;
case 0x6ec1ee:goto L6ec1ee;
case 0x6ec1f2:c.instructions+=2;goto B6ec1f2;
case 0x6ec1f3:c.instructions+=1;goto B6ec1f3;
case 0x6ec1f8:goto L6ec1f8;
case 0x6ec1fb:c.instructions+=4;goto B6ec1fb;
case 0x6ec1fe:c.instructions+=3;goto B6ec1fe;
case 0x6ec200:c.instructions+=2;goto B6ec200;
case 0x6ec204:c.instructions+=1;goto B6ec204;
case 0x6ec206:goto L6ec206;
case 0x6ec208:c.instructions+=1;goto B6ec208;
case 0x6ec20a:goto L6ec20a;
case 0x6ec20c:c.instructions+=1;goto B6ec20c;
case 0x6ec20e:goto L6ec20e;
case 0x6ec212:c.instructions+=2;goto B6ec212;
case 0x6ec214:c.instructions+=1;goto B6ec214;
case 0x6ec216:goto L6ec216;
case 0x6ec219:c.instructions+=1;goto B6ec219;
case 0x6ec21b:goto L6ec21b;
case 0x6ec21d:c.instructions+=1;goto B6ec21d;
case 0x6ec21f:goto L6ec21f;
case 0x6ec222:c.instructions+=2;goto B6ec222;
case 0x6ec224:c.instructions+=1;goto B6ec224;
case 0x6ec226:goto L6ec226;
case 0x6ec228:c.instructions+=1;goto B6ec228;
case 0x6ec22a:goto L6ec22a;
case 0x6ec22d:c.instructions+=2;goto B6ec22d;
case 0x6ec230:c.instructions+=1;goto B6ec230;
case 0x6ec232:goto L6ec232;
case 0x6ec234:c.instructions+=1;goto B6ec234;
case 0x6ec236:goto L6ec236;
case 0x6ec237:goto L6ec237;
case 0x6ec23b:c.instructions+=3;goto B6ec23b;
case 0x6ec23d:c.instructions+=2;goto B6ec23d;
case 0x6ec240:c.instructions+=1;goto B6ec240;
case 0x6ec242:goto L6ec242;
case 0x6ec246:c.instructions+=3;goto B6ec246;
case 0x6ec249:c.instructions+=2;goto B6ec249;
case 0x6ec24b:c.instructions+=1;goto B6ec24b;
case 0x6ec24d:goto L6ec24d;
case 0x6ec250:goto L6ec250;
case 0x6ec253:c.instructions+=2;goto B6ec253;
case 0x6ec255:c.instructions+=1;goto B6ec255;
case 0x6ec257:goto L6ec257;
case 0x6ec258:c.instructions+=3;goto B6ec258;
case 0x6ec25b:c.instructions+=2;goto B6ec25b;
case 0x6ec25d:c.instructions+=1;goto B6ec25d;
case 0x6ec25f:goto L6ec25f;
case 0x6ec261:goto L6ec261;
case 0x6ec263:c.instructions+=1;goto B6ec263;
case 0x6ec265:goto L6ec265;
case 0x6ec268:c.instructions+=2;goto B6ec268;
case 0x6ec26a:c.instructions+=1;goto B6ec26a;
case 0x6ec26c:goto L6ec26c;
case 0x6ec26d:c.instructions+=3;goto B6ec26d;
case 0x6ec270:c.instructions+=2;goto B6ec270;
case 0x6ec272:c.instructions+=1;goto B6ec272;
case 0x6ec274:goto L6ec274;
case 0x6ec277:goto L6ec277;
case 0x6ec27b:c.instructions+=21;goto B6ec27b;
case 0x6ec280:c.instructions+=20;goto B6ec280;
case 0x6ec282:c.instructions+=19;goto B6ec282;
case 0x6ec287:c.instructions+=18;goto B6ec287;
case 0x6ec289:c.instructions+=17;goto B6ec289;
case 0x6ec28b:c.instructions+=16;goto B6ec28b;
case 0x6ec28d:c.instructions+=15;goto B6ec28d;
case 0x6ec28f:c.instructions+=14;goto B6ec28f;
case 0x6ec293:c.instructions+=13;goto B6ec293;
case 0x6ec297:c.instructions+=12;goto B6ec297;
case 0x6ec299:c.instructions+=11;goto B6ec299;
case 0x6ec29b:c.instructions+=10;goto B6ec29b;
case 0x6ec29f:c.instructions+=9;goto B6ec29f;
case 0x6ec2a2:c.instructions+=8;goto B6ec2a2;
case 0x6ec2a4:c.instructions+=7;goto B6ec2a4;
case 0x6ec2a6:c.instructions+=6;goto B6ec2a6;
case 0x6ec2a9:c.instructions+=5;goto B6ec2a9;
case 0x6ec2ad:c.instructions+=4;goto B6ec2ad;
case 0x6ec2b1:c.instructions+=3;goto B6ec2b1;
case 0x6ec2b5:c.instructions+=2;goto B6ec2b5;
case 0x6ec2b8:c.instructions+=1;goto B6ec2b8;
case 0x6ec2ba:goto L6ec2ba;
case 0x6ec2bd:c.instructions+=6;goto B6ec2bd;
case 0x6ec2c0:c.instructions+=5;goto B6ec2c0;
case 0x6ec2c4:c.instructions+=4;goto B6ec2c4;
case 0x6ec2c7:c.instructions+=3;goto B6ec2c7;
case 0x6ec2ca:c.instructions+=2;goto B6ec2ca;
case 0x6ec2cd:c.instructions+=1;goto B6ec2cd;
case 0x6ec2d2:goto L6ec2d2;
case 0x6ec2d4:c.instructions+=1;goto B6ec2d4;
case 0x6ec2d6:goto L6ec2d6;
case 0x6ec2d9:c.instructions+=4;goto B6ec2d9;
case 0x6ec2db:c.instructions+=3;goto B6ec2db;
case 0x6ec2dd:c.instructions+=2;goto B6ec2dd;
case 0x6ec2e1:c.instructions+=1;goto B6ec2e1;
case 0x6ec2e3:goto L6ec2e3;
case 0x6ec2e6:c.instructions+=18;goto B6ec2e6;
case 0x6ec2e9:c.instructions+=17;goto B6ec2e9;
case 0x6ec2eb:c.instructions+=16;goto B6ec2eb;
case 0x6ec2ed:c.instructions+=15;goto B6ec2ed;
case 0x6ec2ef:c.instructions+=14;goto B6ec2ef;
case 0x6ec2f1:c.instructions+=13;goto B6ec2f1;
case 0x6ec2f4:c.instructions+=12;goto B6ec2f4;
case 0x6ec2f7:c.instructions+=11;goto B6ec2f7;
case 0x6ec2fa:c.instructions+=10;goto B6ec2fa;
case 0x6ec2fd:c.instructions+=9;goto B6ec2fd;
case 0x6ec300:c.instructions+=8;goto B6ec300;
case 0x6ec303:c.instructions+=7;goto B6ec303;
case 0x6ec307:c.instructions+=6;goto B6ec307;
case 0x6ec30b:c.instructions+=5;goto B6ec30b;
case 0x6ec30c:c.instructions+=4;goto B6ec30c;
case 0x6ec30f:c.instructions+=3;goto B6ec30f;
case 0x6ec311:c.instructions+=2;goto B6ec311;
case 0x6ec315:c.instructions+=1;goto B6ec315;
case 0x6ec317:goto L6ec317;
case 0x6ec31b:goto L6ec31b;
case 0x6ec31e:c.instructions+=1;goto B6ec31e;
case 0x6ec321:goto L6ec321;
case 0x6ec324:c.instructions+=6;goto B6ec324;
case 0x6ec328:c.instructions+=5;goto B6ec328;
case 0x6ec32b:c.instructions+=4;goto B6ec32b;
case 0x6ec32e:c.instructions+=3;goto B6ec32e;
case 0x6ec330:c.instructions+=2;goto B6ec330;
case 0x6ec334:c.instructions+=1;goto B6ec334;
case 0x6ec336:goto L6ec336;
case 0x6ec33d:c.instructions+=2;goto B6ec33d;
case 0x6ec342:c.instructions+=1;goto B6ec342;
case 0x6ec344:goto L6ec344;
case 0x6ec349:goto L6ec349;
case 0x6ec34c:c.instructions+=1;goto B6ec34c;
case 0x6ec34e:goto L6ec34e;
case 0x6ec352:c.instructions+=1;goto B6ec352;
case 0x6ec354:goto L6ec354;
case 0x6ec358:c.instructions+=2;goto B6ec358;
case 0x6ec35a:c.instructions+=1;goto B6ec35a;
case 0x6ec35c:goto L6ec35c;
case 0x6ec360:c.instructions+=2;goto B6ec360;
case 0x6ec362:c.instructions+=1;goto B6ec362;
case 0x6ec364:goto L6ec364;
case 0x6ec368:goto L6ec368;
case 0x6ec36b:c.instructions+=3;goto B6ec36b;
case 0x6ec36d:c.instructions+=2;goto B6ec36d;
case 0x6ec36f:c.instructions+=1;goto B6ec36f;
case 0x6ec371:goto L6ec371;
case 0x6ec375:c.instructions+=2;goto B6ec375;
case 0x6ec379:c.instructions+=1;goto B6ec379;
case 0x6ec380:goto L6ec380;
case 0x6ec384:c.instructions+=9;goto B6ec384;
case 0x6ec388:c.instructions+=8;goto B6ec388;
case 0x6ec38a:c.instructions+=7;goto B6ec38a;
case 0x6ec38d:c.instructions+=6;goto B6ec38d;
case 0x6ec392:c.instructions+=5;goto B6ec392;
case 0x6ec394:c.instructions+=4;goto B6ec394;
case 0x6ec398:c.instructions+=3;goto B6ec398;
case 0x6ec39b:c.instructions+=2;goto B6ec39b;
case 0x6ec39e:c.instructions+=1;goto B6ec39e;
case 0x6ec3a0:goto L6ec3a0;
case 0x6ec3a3:c.instructions+=4;goto B6ec3a3;
case 0x6ec3a7:c.instructions+=3;goto B6ec3a7;
case 0x6ec3ab:c.instructions+=2;goto B6ec3ab;
case 0x6ec3ac:c.instructions+=1;goto B6ec3ac;
case 0x6ec3b1:goto L6ec3b1;
case 0x6ec3b5:c.instructions+=9;goto B6ec3b5;
case 0x6ec3b9:c.instructions+=8;goto B6ec3b9;
case 0x6ec3bc:c.instructions+=7;goto B6ec3bc;
case 0x6ec3c0:c.instructions+=6;goto B6ec3c0;
case 0x6ec3c4:c.instructions+=5;goto B6ec3c4;
case 0x6ec3c5:c.instructions+=4;goto B6ec3c5;
case 0x6ec3c8:c.instructions+=3;goto B6ec3c8;
case 0x6ec3ca:c.instructions+=2;goto B6ec3ca;
case 0x6ec3ce:c.instructions+=1;goto B6ec3ce;
case 0x6ec3d0:goto L6ec3d0;
case 0x6ec3d4:goto L6ec3d4;
case 0x6ec3d6:goto L6ec3d6;
case 0x6ec3da:c.instructions+=2;goto B6ec3da;
case 0x6ec3dc:c.instructions+=1;goto B6ec3dc;
case 0x6ec3de:goto L6ec3de;
case 0x6ec3e2:c.instructions+=9;goto B6ec3e2;
case 0x6ec3e3:c.instructions+=8;goto B6ec3e3;
case 0x6ec3e6:c.instructions+=7;goto B6ec3e6;
case 0x6ec3e7:c.instructions+=6;goto B6ec3e7;
case 0x6ec3e8:c.instructions+=5;goto B6ec3e8;
case 0x6ec3e9:c.instructions+=4;goto B6ec3e9;
case 0x6ec3ea:c.instructions+=3;goto B6ec3ea;
case 0x6ec3eb:c.instructions+=2;goto B6ec3eb;
case 0x6ec3ed:c.instructions+=1;goto B6ec3ed;
case 0x6ec3f2:goto L6ec3f2;
case 0x6ec3f4:goto L6ec3f4;
case 0x6ec3f6:goto L6ec3f6;
case 0x6ec3fa:c.instructions+=9;goto B6ec3fa;
case 0x6ec3fb:c.instructions+=8;goto B6ec3fb;
case 0x6ec3fe:c.instructions+=7;goto B6ec3fe;
case 0x6ec3ff:c.instructions+=6;goto B6ec3ff;
case 0x6ec400:c.instructions+=5;goto B6ec400;
case 0x6ec401:c.instructions+=4;goto B6ec401;
case 0x6ec402:c.instructions+=3;goto B6ec402;
case 0x6ec403:c.instructions+=2;goto B6ec403;
case 0x6ec405:c.instructions+=1;goto B6ec405;
case 0x6ec40a:goto L6ec40a;
case 0x6ec40d:c.instructions+=4;goto B6ec40d;
case 0x6ec410:c.instructions+=3;goto B6ec410;
case 0x6ec412:c.instructions+=2;goto B6ec412;
case 0x6ec414:c.instructions+=1;goto B6ec414;
case 0x6ec416:goto L6ec416;
case 0x6ec41a:c.instructions+=5;goto B6ec41a;
case 0x6ec41e:c.instructions+=4;goto B6ec41e;
case 0x6ec420:c.instructions+=3;goto B6ec420;
case 0x6ec422:c.instructions+=2;goto B6ec422;
case 0x6ec425:c.instructions+=1;goto B6ec425;
case 0x6ec42b:goto L6ec42b;
case 0x6ec42f:c.instructions+=2;goto B6ec42f;
case 0x6ec431:c.instructions+=1;goto B6ec431;
case 0x6ec433:goto L6ec433;
case 0x6ec435:c.instructions+=1;goto B6ec435;
case 0x6ec437:goto L6ec437;
case 0x6ec43b:c.instructions+=4;goto B6ec43b;
case 0x6ec441:c.instructions+=3;goto B6ec441;
case 0x6ec443:c.instructions+=2;goto B6ec443;
case 0x6ec446:c.instructions+=1;goto B6ec446;
case 0x6ec44c:goto L6ec44c;
case 0x6ec44f:c.instructions+=5;goto B6ec44f;
case 0x6ec453:c.instructions+=4;goto B6ec453;
case 0x6ec457:c.instructions+=3;goto B6ec457;
case 0x6ec45b:c.instructions+=2;goto B6ec45b;
case 0x6ec45f:c.instructions+=1;goto B6ec45f;
case 0x6ec461:goto L6ec461;
case 0x6ec466:c.instructions+=7;goto B6ec466;
case 0x6ec46a:c.instructions+=6;goto B6ec46a;
case 0x6ec46e:c.instructions+=5;goto B6ec46e;
case 0x6ec472:c.instructions+=4;goto B6ec472;
case 0x6ec474:c.instructions+=3;goto B6ec474;
case 0x6ec476:c.instructions+=2;goto B6ec476;
case 0x6ec479:c.instructions+=1;goto B6ec479;
case 0x6ec47f:goto L6ec47f;
case 0x6ec483:c.instructions+=6;goto B6ec483;
case 0x6ec487:c.instructions+=5;goto B6ec487;
case 0x6ec489:c.instructions+=4;goto B6ec489;
case 0x6ec48d:c.instructions+=3;goto B6ec48d;
case 0x6ec491:c.instructions+=2;goto B6ec491;
case 0x6ec493:c.instructions+=1;goto B6ec493;
case 0x6ec495:goto L6ec495;
case 0x6ec499:c.instructions+=1;goto B6ec499;
case 0x6ec49b:goto L6ec49b;
case 0x6ec49f:c.instructions+=3;goto B6ec49f;
case 0x6ec4a0:c.instructions+=2;goto B6ec4a0;
case 0x6ec4a2:c.instructions+=1;goto B6ec4a2;
case 0x6ec4a8:goto L6ec4a8;
case 0x6ec4ac:c.instructions+=9;goto B6ec4ac;
case 0x6ec4b0:c.instructions+=8;goto B6ec4b0;
case 0x6ec4b4:c.instructions+=7;goto B6ec4b4;
case 0x6ec4b5:c.instructions+=6;goto B6ec4b5;
case 0x6ec4b6:c.instructions+=5;goto B6ec4b6;
case 0x6ec4b7:c.instructions+=4;goto B6ec4b7;
case 0x6ec4b8:c.instructions+=3;goto B6ec4b8;
case 0x6ec4b9:c.instructions+=2;goto B6ec4b9;
case 0x6ec4bb:c.instructions+=1;goto B6ec4bb;
case 0x6ec4c0:goto L6ec4c0;
case 0x6ec4c3:c.instructions+=4;goto B6ec4c3;
case 0x6ec4c5:c.instructions+=3;goto B6ec4c5;
case 0x6ec4c7:c.instructions+=2;goto B6ec4c7;
case 0x6ec4cb:c.instructions+=1;goto B6ec4cb;
case 0x6ec4d1:goto L6ec4d1;
case 0x6ec4d3:goto L6ec4d3;
case 0x6ec4d7:c.instructions+=10;goto B6ec4d7;
case 0x6ec4db:c.instructions+=9;goto B6ec4db;
case 0x6ec4df:c.instructions+=8;goto B6ec4df;
case 0x6ec4e1:c.instructions+=7;goto B6ec4e1;
case 0x6ec4e4:c.instructions+=6;goto B6ec4e4;
case 0x6ec4e9:c.instructions+=5;goto B6ec4e9;
case 0x6ec4eb:c.instructions+=4;goto B6ec4eb;
case 0x6ec4ed:c.instructions+=3;goto B6ec4ed;
case 0x6ec4f0:c.instructions+=2;goto B6ec4f0;
case 0x6ec4f4:c.instructions+=1;goto B6ec4f4;
case 0x6ec4f6:goto L6ec4f6;
case 0x6ec4fa:c.instructions+=27;goto B6ec4fa;
case 0x6ec4fd:c.instructions+=26;goto B6ec4fd;
case 0x6ec500:c.instructions+=25;goto B6ec500;
case 0x6ec503:c.instructions+=24;goto B6ec503;
case 0x6ec505:c.instructions+=23;goto B6ec505;
case 0x6ec508:c.instructions+=22;goto B6ec508;
case 0x6ec50b:c.instructions+=21;goto B6ec50b;
case 0x6ec50d:c.instructions+=20;goto B6ec50d;
case 0x6ec510:c.instructions+=19;goto B6ec510;
case 0x6ec512:c.instructions+=18;goto B6ec512;
case 0x6ec516:c.instructions+=17;goto B6ec516;
case 0x6ec518:c.instructions+=16;goto B6ec518;
case 0x6ec51a:c.instructions+=15;goto B6ec51a;
case 0x6ec51d:c.instructions+=14;goto B6ec51d;
case 0x6ec520:c.instructions+=13;goto B6ec520;
case 0x6ec524:c.instructions+=12;goto B6ec524;
case 0x6ec527:c.instructions+=11;goto B6ec527;
case 0x6ec52a:c.instructions+=10;goto B6ec52a;
case 0x6ec52d:c.instructions+=9;goto B6ec52d;
case 0x6ec530:c.instructions+=8;goto B6ec530;
case 0x6ec534:c.instructions+=7;goto B6ec534;
case 0x6ec537:c.instructions+=6;goto B6ec537;
case 0x6ec53a:c.instructions+=5;goto B6ec53a;
case 0x6ec53d:c.instructions+=4;goto B6ec53d;
case 0x6ec540:c.instructions+=3;goto B6ec540;
case 0x6ec544:c.instructions+=2;goto B6ec544;
case 0x6ec547:c.instructions+=1;goto B6ec547;
case 0x6ec54a:goto L6ec54a;
case 0x6ec54e:c.instructions+=6;goto B6ec54e;
case 0x6ec552:c.instructions+=5;goto B6ec552;
case 0x6ec553:c.instructions+=4;goto B6ec553;
case 0x6ec556:c.instructions+=3;goto B6ec556;
case 0x6ec558:c.instructions+=2;goto B6ec558;
case 0x6ec55c:c.instructions+=1;goto B6ec55c;
case 0x6ec562:goto L6ec562;
case 0x6ec564:goto L6ec564;
case 0x6ec566:goto L6ec566;
case 0x6ec569:c.instructions+=2;goto B6ec569;
case 0x6ec56b:c.instructions+=1;goto B6ec56b;
case 0x6ec56d:goto L6ec56d;
case 0x6ec571:goto L6ec571;
case 0x6ec575:c.instructions+=10;goto B6ec575;
case 0x6ec579:c.instructions+=9;goto B6ec579;
case 0x6ec57d:c.instructions+=8;goto B6ec57d;
case 0x6ec57f:c.instructions+=7;goto B6ec57f;
case 0x6ec582:c.instructions+=6;goto B6ec582;
case 0x6ec587:c.instructions+=5;goto B6ec587;
case 0x6ec589:c.instructions+=4;goto B6ec589;
case 0x6ec58b:c.instructions+=3;goto B6ec58b;
case 0x6ec58e:c.instructions+=2;goto B6ec58e;
case 0x6ec592:c.instructions+=1;goto B6ec592;
case 0x6ec594:goto L6ec594;
case 0x6ec597:c.instructions+=13;goto B6ec597;
case 0x6ec59b:c.instructions+=12;goto B6ec59b;
case 0x6ec59f:c.instructions+=11;goto B6ec59f;
case 0x6ec5a2:c.instructions+=10;goto B6ec5a2;
case 0x6ec5a5:c.instructions+=9;goto B6ec5a5;
case 0x6ec5a7:c.instructions+=8;goto B6ec5a7;
case 0x6ec5a9:c.instructions+=7;goto B6ec5a9;
case 0x6ec5ab:c.instructions+=6;goto B6ec5ab;
case 0x6ec5ae:c.instructions+=5;goto B6ec5ae;
case 0x6ec5b1:c.instructions+=4;goto B6ec5b1;
case 0x6ec5b4:c.instructions+=3;goto B6ec5b4;
case 0x6ec5b7:c.instructions+=2;goto B6ec5b7;
case 0x6ec5ba:c.instructions+=1;goto B6ec5ba;
case 0x6ec5bd:goto L6ec5bd;
case 0x6ec5c1:c.instructions+=6;goto B6ec5c1;
case 0x6ec5c5:c.instructions+=5;goto B6ec5c5;
case 0x6ec5c6:c.instructions+=4;goto B6ec5c6;
case 0x6ec5c9:c.instructions+=3;goto B6ec5c9;
case 0x6ec5cb:c.instructions+=2;goto B6ec5cb;
case 0x6ec5cf:c.instructions+=1;goto B6ec5cf;
case 0x6ec5d1:goto L6ec5d1;
case 0x6ec5d4:c.instructions+=2;goto B6ec5d4;
case 0x6ec5d6:c.instructions+=1;goto B6ec5d6;
case 0x6ec5d8:goto L6ec5d8;
case 0x6ec5da:c.instructions+=2;goto B6ec5da;
case 0x6ec5dc:c.instructions+=1;goto B6ec5dc;
case 0x6ec5de:goto L6ec5de;
case 0x6ec5e2:c.instructions+=1;goto B6ec5e2;
case 0x6ec5e6:goto L6ec5e6;
case 0x6ec5e9:c.instructions+=9;goto B6ec5e9;
case 0x6ec5ed:c.instructions+=8;goto B6ec5ed;
case 0x6ec5ef:c.instructions+=7;goto B6ec5ef;
case 0x6ec5f2:c.instructions+=6;goto B6ec5f2;
case 0x6ec5f7:c.instructions+=5;goto B6ec5f7;
case 0x6ec5f9:c.instructions+=4;goto B6ec5f9;
case 0x6ec5fb:c.instructions+=3;goto B6ec5fb;
case 0x6ec5fe:c.instructions+=2;goto B6ec5fe;
case 0x6ec602:c.instructions+=1;goto B6ec602;
case 0x6ec604:goto L6ec604;
case 0x6ec607:c.instructions+=8;goto B6ec607;
case 0x6ec60a:c.instructions+=7;goto B6ec60a;
case 0x6ec60e:c.instructions+=6;goto B6ec60e;
case 0x6ec611:c.instructions+=5;goto B6ec611;
case 0x6ec613:c.instructions+=4;goto B6ec613;
case 0x6ec617:c.instructions+=3;goto B6ec617;
case 0x6ec618:c.instructions+=2;goto B6ec618;
case 0x6ec61a:c.instructions+=1;goto B6ec61a;
case 0x6ec61f:goto L6ec61f;
case 0x6ec623:c.instructions+=6;goto B6ec623;
case 0x6ec627:c.instructions+=5;goto B6ec627;
case 0x6ec628:c.instructions+=4;goto B6ec628;
case 0x6ec62b:c.instructions+=3;goto B6ec62b;
case 0x6ec62d:c.instructions+=2;goto B6ec62d;
case 0x6ec631:c.instructions+=1;goto B6ec631;
case 0x6ec633:goto L6ec633;
case 0x6ec634:c.instructions+=6;goto B6ec634;
case 0x6ec635:c.instructions+=5;goto B6ec635;
case 0x6ec636:c.instructions+=4;goto B6ec636;
case 0x6ec638:c.instructions+=3;goto B6ec638;
case 0x6ec639:c.instructions+=2;goto B6ec639;
case 0x6ec63c:c.instructions+=1;goto B6ec63c;
case 0x6ec640:goto L6ec640;
case 0x6ec644:c.instructions+=7;goto B6ec644;
case 0x6ec647:c.instructions+=6;goto B6ec647;
case 0x6ec648:c.instructions+=5;goto B6ec648;
case 0x6ec64a:c.instructions+=4;goto B6ec64a;
case 0x6ec64c:c.instructions+=3;goto B6ec64c;
case 0x6ec64d:c.instructions+=2;goto B6ec64d;
case 0x6ec64f:c.instructions+=1;goto B6ec64f;
case 0x6ec655:goto L6ec655;
case 0x6ec658:c.instructions+=1;goto B6ec658;
case 0x6ec65a:goto L6ec65a;
case 0x6ec65d:c.instructions+=3;goto B6ec65d;
case 0x6ec660:c.instructions+=2;goto B6ec660;
case 0x6ec663:c.instructions+=1;goto B6ec663;
case 0x6ec666:goto L6ec666;
case 0x6ec66a:c.instructions+=10;goto B6ec66a;
case 0x6ec66b:c.instructions+=9;goto B6ec66b;
case 0x6ec66e:c.instructions+=8;goto B6ec66e;
case 0x6ec66f:c.instructions+=7;goto B6ec66f;
case 0x6ec672:c.instructions+=6;goto B6ec672;
case 0x6ec675:c.instructions+=5;goto B6ec675;
case 0x6ec679:c.instructions+=4;goto B6ec679;
case 0x6ec67c:c.instructions+=3;goto B6ec67c;
case 0x6ec67e:c.instructions+=2;goto B6ec67e;
case 0x6ec682:c.instructions+=1;goto B6ec682;
case 0x6ec688:goto L6ec688;
case 0x6ec68c:c.instructions+=2;goto B6ec68c;
case 0x6ec68d:c.instructions+=1;goto B6ec68d;
case 0x6ec692:goto L6ec692;
case 0x6ec695:c.instructions+=4;goto B6ec695;
case 0x6ec698:c.instructions+=3;goto B6ec698;
case 0x6ec69a:c.instructions+=2;goto B6ec69a;
case 0x6ec69e:c.instructions+=1;goto B6ec69e;
case 0x6ec6a0:goto L6ec6a0;
case 0x6ec6a2:c.instructions+=1;goto B6ec6a2;
case 0x6ec6a4:goto L6ec6a4;
case 0x6ec6a8:c.instructions+=2;goto B6ec6a8;
case 0x6ec6aa:c.instructions+=1;goto B6ec6aa;
case 0x6ec6ac:goto L6ec6ac;
case 0x6ec6ad:c.instructions+=1;goto B6ec6ad;
case 0x6ec6af:goto L6ec6af;
case 0x6ec6b1:c.instructions+=1;goto B6ec6b1;
case 0x6ec6b3:goto L6ec6b3;
case 0x6ec6b6:c.instructions+=2;goto B6ec6b6;
case 0x6ec6b8:c.instructions+=1;goto B6ec6b8;
case 0x6ec6ba:goto L6ec6ba;
case 0x6ec6bd:c.instructions+=2;goto B6ec6bd;
case 0x6ec6c0:c.instructions+=1;goto B6ec6c0;
case 0x6ec6c2:goto L6ec6c2;
case 0x6ec6c4:c.instructions+=1;goto B6ec6c4;
case 0x6ec6c6:goto L6ec6c6;
case 0x6ec6c7:goto L6ec6c7;
case 0x6ec6cb:c.instructions+=3;goto B6ec6cb;
case 0x6ec6cd:c.instructions+=2;goto B6ec6cd;
case 0x6ec6d0:c.instructions+=1;goto B6ec6d0;
case 0x6ec6d2:goto L6ec6d2;
case 0x6ec6d6:c.instructions+=3;goto B6ec6d6;
case 0x6ec6d9:c.instructions+=2;goto B6ec6d9;
case 0x6ec6db:c.instructions+=1;goto B6ec6db;
case 0x6ec6dd:goto L6ec6dd;
case 0x6ec6e0:goto L6ec6e0;
case 0x6ec6e3:c.instructions+=2;goto B6ec6e3;
case 0x6ec6e5:c.instructions+=1;goto B6ec6e5;
case 0x6ec6e7:goto L6ec6e7;
case 0x6ec6e8:c.instructions+=3;goto B6ec6e8;
case 0x6ec6eb:c.instructions+=2;goto B6ec6eb;
case 0x6ec6ed:c.instructions+=1;goto B6ec6ed;
case 0x6ec6ef:goto L6ec6ef;
case 0x6ec6f1:goto L6ec6f1;
case 0x6ec6f3:c.instructions+=1;goto B6ec6f3;
case 0x6ec6f5:goto L6ec6f5;
case 0x6ec6f8:c.instructions+=2;goto B6ec6f8;
case 0x6ec6fa:c.instructions+=1;goto B6ec6fa;
case 0x6ec6fc:goto L6ec6fc;
case 0x6ec6fd:c.instructions+=3;goto B6ec6fd;
case 0x6ec700:c.instructions+=2;goto B6ec700;
case 0x6ec702:c.instructions+=1;goto B6ec702;
case 0x6ec704:goto L6ec704;
case 0x6ec707:goto L6ec707;
case 0x6ec70b:c.instructions+=21;goto B6ec70b;
case 0x6ec710:c.instructions+=20;goto B6ec710;
case 0x6ec712:c.instructions+=19;goto B6ec712;
case 0x6ec717:c.instructions+=18;goto B6ec717;
case 0x6ec719:c.instructions+=17;goto B6ec719;
case 0x6ec71b:c.instructions+=16;goto B6ec71b;
case 0x6ec71d:c.instructions+=15;goto B6ec71d;
case 0x6ec71f:c.instructions+=14;goto B6ec71f;
case 0x6ec723:c.instructions+=13;goto B6ec723;
case 0x6ec727:c.instructions+=12;goto B6ec727;
case 0x6ec729:c.instructions+=11;goto B6ec729;
case 0x6ec72b:c.instructions+=10;goto B6ec72b;
case 0x6ec72f:c.instructions+=9;goto B6ec72f;
case 0x6ec732:c.instructions+=8;goto B6ec732;
case 0x6ec734:c.instructions+=7;goto B6ec734;
case 0x6ec736:c.instructions+=6;goto B6ec736;
case 0x6ec739:c.instructions+=5;goto B6ec739;
case 0x6ec73d:c.instructions+=4;goto B6ec73d;
case 0x6ec741:c.instructions+=3;goto B6ec741;
case 0x6ec745:c.instructions+=2;goto B6ec745;
case 0x6ec748:c.instructions+=1;goto B6ec748;
case 0x6ec74a:goto L6ec74a;
case 0x6ec74d:c.instructions+=5;goto B6ec74d;
case 0x6ec750:c.instructions+=4;goto B6ec750;
case 0x6ec753:c.instructions+=3;goto B6ec753;
case 0x6ec756:c.instructions+=2;goto B6ec756;
case 0x6ec759:c.instructions+=1;goto B6ec759;
case 0x6ec75e:goto L6ec75e;
case 0x6ec760:c.instructions+=1;goto B6ec760;
case 0x6ec762:goto L6ec762;
case 0x6ec765:c.instructions+=4;goto B6ec765;
case 0x6ec767:c.instructions+=3;goto B6ec767;
case 0x6ec769:c.instructions+=2;goto B6ec769;
case 0x6ec76d:c.instructions+=1;goto B6ec76d;
case 0x6ec76f:goto L6ec76f;
case 0x6ec770:goto L6ec770;
case 0x6ec773:c.instructions+=18;goto B6ec773;
case 0x6ec776:c.instructions+=17;goto B6ec776;
case 0x6ec778:c.instructions+=16;goto B6ec778;
case 0x6ec77a:c.instructions+=15;goto B6ec77a;
case 0x6ec77c:c.instructions+=14;goto B6ec77c;
case 0x6ec77e:c.instructions+=13;goto B6ec77e;
case 0x6ec781:c.instructions+=12;goto B6ec781;
case 0x6ec784:c.instructions+=11;goto B6ec784;
case 0x6ec787:c.instructions+=10;goto B6ec787;
case 0x6ec78a:c.instructions+=9;goto B6ec78a;
case 0x6ec78d:c.instructions+=8;goto B6ec78d;
case 0x6ec790:c.instructions+=7;goto B6ec790;
case 0x6ec794:c.instructions+=6;goto B6ec794;
case 0x6ec798:c.instructions+=5;goto B6ec798;
case 0x6ec799:c.instructions+=4;goto B6ec799;
case 0x6ec79c:c.instructions+=3;goto B6ec79c;
case 0x6ec79e:c.instructions+=2;goto B6ec79e;
case 0x6ec7a2:c.instructions+=1;goto B6ec7a2;
case 0x6ec7a4:goto L6ec7a4;
case 0x6ec7a8:goto L6ec7a8;
case 0x6ec7ab:c.instructions+=1;goto B6ec7ab;
case 0x6ec7ae:goto L6ec7ae;
case 0x6ec7b1:c.instructions+=6;goto B6ec7b1;
case 0x6ec7b5:c.instructions+=5;goto B6ec7b5;
case 0x6ec7b8:c.instructions+=4;goto B6ec7b8;
case 0x6ec7bb:c.instructions+=3;goto B6ec7bb;
case 0x6ec7bd:c.instructions+=2;goto B6ec7bd;
case 0x6ec7c1:c.instructions+=1;goto B6ec7c1;
case 0x6ec7c3:goto L6ec7c3;
case 0x6ec7ca:c.instructions+=2;goto B6ec7ca;
case 0x6ec7cf:c.instructions+=1;goto B6ec7cf;
case 0x6ec7d1:goto L6ec7d1;
case 0x6ec7d6:goto L6ec7d6;
case 0x6ec7d9:c.instructions+=1;goto B6ec7d9;
case 0x6ec7db:goto L6ec7db;
case 0x6ec7df:c.instructions+=1;goto B6ec7df;
case 0x6ec7e1:goto L6ec7e1;
case 0x6ec7e5:c.instructions+=2;goto B6ec7e5;
case 0x6ec7e7:c.instructions+=1;goto B6ec7e7;
case 0x6ec7e9:goto L6ec7e9;
case 0x6ec7ed:c.instructions+=2;goto B6ec7ed;
case 0x6ec7ef:c.instructions+=1;goto B6ec7ef;
case 0x6ec7f1:goto L6ec7f1;
case 0x6ec7f5:c.instructions+=2;goto B6ec7f5;
case 0x6ec7f7:c.instructions+=1;goto B6ec7f7;
case 0x6ec7f9:goto L6ec7f9;
case 0x6ec7fd:goto L6ec7fd;
case 0x6ec800:c.instructions+=4;goto B6ec800;
case 0x6ec802:c.instructions+=3;goto B6ec802;
case 0x6ec804:c.instructions+=2;goto B6ec804;
case 0x6ec808:c.instructions+=1;goto B6ec808;
case 0x6ec80a:goto L6ec80a;
case 0x6ec80e:c.instructions+=1;goto B6ec80e;
case 0x6ec810:goto L6ec810;
case 0x6ec813:c.instructions+=4;goto B6ec813;
case 0x6ec817:c.instructions+=3;goto B6ec817;
case 0x6ec819:c.instructions+=2;goto B6ec819;
case 0x6ec81a:c.instructions+=1;goto B6ec81a;
case 0x6ec81f:goto L6ec81f;
case 0x6ec823:c.instructions+=9;goto B6ec823;
case 0x6ec827:c.instructions+=8;goto B6ec827;
case 0x6ec82a:c.instructions+=7;goto B6ec82a;
case 0x6ec82e:c.instructions+=6;goto B6ec82e;
case 0x6ec832:c.instructions+=5;goto B6ec832;
case 0x6ec833:c.instructions+=4;goto B6ec833;
case 0x6ec836:c.instructions+=3;goto B6ec836;
case 0x6ec838:c.instructions+=2;goto B6ec838;
case 0x6ec83c:c.instructions+=1;goto B6ec83c;
case 0x6ec83e:goto L6ec83e;
case 0x6ec842:goto L6ec842;
case 0x6ec846:c.instructions+=1;goto B6ec846;
case 0x6ec848:goto L6ec848;
case 0x6ec84a:c.instructions+=1;goto B6ec84a;
case 0x6ec84c:goto L6ec84c;
case 0x6ec84f:c.instructions+=7;goto B6ec84f;
case 0x6ec850:c.instructions+=6;goto B6ec850;
case 0x6ec851:c.instructions+=5;goto B6ec851;
case 0x6ec852:c.instructions+=4;goto B6ec852;
case 0x6ec853:c.instructions+=3;goto B6ec853;
case 0x6ec854:c.instructions+=2;goto B6ec854;
case 0x6ec856:c.instructions+=1;goto B6ec856;
case 0x6ec85b:goto L6ec85b;
case 0x6ec85d:goto L6ec85d;
case 0x6ec85f:goto L6ec85f;
case 0x6ec862:c.instructions+=7;goto B6ec862;
case 0x6ec863:c.instructions+=6;goto B6ec863;
case 0x6ec864:c.instructions+=5;goto B6ec864;
case 0x6ec865:c.instructions+=4;goto B6ec865;
case 0x6ec866:c.instructions+=3;goto B6ec866;
case 0x6ec867:c.instructions+=2;goto B6ec867;
case 0x6ec869:c.instructions+=1;goto B6ec869;
case 0x6ec86e:goto L6ec86e;
case 0x6ec871:c.instructions+=3;goto B6ec871;
case 0x6ec874:c.instructions+=2;goto B6ec874;
case 0x6ec876:c.instructions+=1;goto B6ec876;
case 0x6ec878:goto L6ec878;
case 0x6ec87c:c.instructions+=5;goto B6ec87c;
case 0x6ec880:c.instructions+=4;goto B6ec880;
case 0x6ec882:c.instructions+=3;goto B6ec882;
case 0x6ec884:c.instructions+=2;goto B6ec884;
case 0x6ec887:c.instructions+=1;goto B6ec887;
case 0x6ec88d:goto L6ec88d;
case 0x6ec891:c.instructions+=2;goto B6ec891;
case 0x6ec893:c.instructions+=1;goto B6ec893;
case 0x6ec895:goto L6ec895;
case 0x6ec897:c.instructions+=1;goto B6ec897;
case 0x6ec899:goto L6ec899;
case 0x6ec89d:c.instructions+=4;goto B6ec89d;
case 0x6ec8a3:c.instructions+=3;goto B6ec8a3;
case 0x6ec8a5:c.instructions+=2;goto B6ec8a5;
case 0x6ec8a8:c.instructions+=1;goto B6ec8a8;
case 0x6ec8ae:goto L6ec8ae;
case 0x6ec8b1:c.instructions+=5;goto B6ec8b1;
case 0x6ec8b5:c.instructions+=4;goto B6ec8b5;
case 0x6ec8b9:c.instructions+=3;goto B6ec8b9;
case 0x6ec8bd:c.instructions+=2;goto B6ec8bd;
case 0x6ec8c1:c.instructions+=1;goto B6ec8c1;
case 0x6ec8c3:goto L6ec8c3;
case 0x6ec8c8:c.instructions+=7;goto B6ec8c8;
case 0x6ec8cc:c.instructions+=6;goto B6ec8cc;
case 0x6ec8d0:c.instructions+=5;goto B6ec8d0;
case 0x6ec8d4:c.instructions+=4;goto B6ec8d4;
case 0x6ec8d6:c.instructions+=3;goto B6ec8d6;
case 0x6ec8d8:c.instructions+=2;goto B6ec8d8;
case 0x6ec8db:c.instructions+=1;goto B6ec8db;
case 0x6ec8e1:goto L6ec8e1;
case 0x6ec8e5:c.instructions+=6;goto B6ec8e5;
case 0x6ec8e9:c.instructions+=5;goto B6ec8e9;
case 0x6ec8eb:c.instructions+=4;goto B6ec8eb;
case 0x6ec8ef:c.instructions+=3;goto B6ec8ef;
case 0x6ec8f3:c.instructions+=2;goto B6ec8f3;
case 0x6ec8f5:c.instructions+=1;goto B6ec8f5;
case 0x6ec8f7:goto L6ec8f7;
case 0x6ec8fb:c.instructions+=1;goto B6ec8fb;
case 0x6ec8fd:goto L6ec8fd;
case 0x6ec901:c.instructions+=3;goto B6ec901;
case 0x6ec902:c.instructions+=2;goto B6ec902;
case 0x6ec904:c.instructions+=1;goto B6ec904;
case 0x6ec90a:goto L6ec90a;
case 0x6ec90e:c.instructions+=8;goto B6ec90e;
case 0x6ec912:c.instructions+=7;goto B6ec912;
case 0x6ec916:c.instructions+=6;goto B6ec916;
case 0x6ec917:c.instructions+=5;goto B6ec917;
case 0x6ec918:c.instructions+=4;goto B6ec918;
case 0x6ec919:c.instructions+=3;goto B6ec919;
case 0x6ec91a:c.instructions+=2;goto B6ec91a;
case 0x6ec91c:c.instructions+=1;goto B6ec91c;
case 0x6ec921:goto L6ec921;
case 0x6ec924:c.instructions+=3;goto B6ec924;
case 0x6ec926:c.instructions+=2;goto B6ec926;
case 0x6ec928:c.instructions+=1;goto B6ec928;
case 0x6ec92e:goto L6ec92e;
case 0x6ec930:goto L6ec930;
case 0x6ec934:c.instructions+=34;goto B6ec934;
case 0x6ec938:c.instructions+=33;goto B6ec938;
case 0x6ec93c:c.instructions+=32;goto B6ec93c;
case 0x6ec93f:c.instructions+=31;goto B6ec93f;
case 0x6ec942:c.instructions+=30;goto B6ec942;
case 0x6ec945:c.instructions+=29;goto B6ec945;
case 0x6ec947:c.instructions+=28;goto B6ec947;
case 0x6ec94a:c.instructions+=27;goto B6ec94a;
case 0x6ec94c:c.instructions+=26;goto B6ec94c;
case 0x6ec94e:c.instructions+=25;goto B6ec94e;
case 0x6ec94f:c.instructions+=24;goto B6ec94f;
case 0x6ec952:c.instructions+=23;goto B6ec952;
case 0x6ec954:c.instructions+=22;goto B6ec954;
case 0x6ec956:c.instructions+=21;goto B6ec956;
case 0x6ec95a:c.instructions+=20;goto B6ec95a;
case 0x6ec95c:c.instructions+=19;goto B6ec95c;
case 0x6ec95e:c.instructions+=18;goto B6ec95e;
case 0x6ec961:c.instructions+=17;goto B6ec961;
case 0x6ec964:c.instructions+=16;goto B6ec964;
case 0x6ec968:c.instructions+=15;goto B6ec968;
case 0x6ec96b:c.instructions+=14;goto B6ec96b;
case 0x6ec96e:c.instructions+=13;goto B6ec96e;
case 0x6ec971:c.instructions+=12;goto B6ec971;
case 0x6ec974:c.instructions+=11;goto B6ec974;
case 0x6ec978:c.instructions+=10;goto B6ec978;
case 0x6ec97b:c.instructions+=9;goto B6ec97b;
case 0x6ec97e:c.instructions+=8;goto B6ec97e;
case 0x6ec981:c.instructions+=7;goto B6ec981;
case 0x6ec984:c.instructions+=6;goto B6ec984;
case 0x6ec988:c.instructions+=5;goto B6ec988;
case 0x6ec98b:c.instructions+=4;goto B6ec98b;
case 0x6ec98e:c.instructions+=3;goto B6ec98e;
case 0x6ec992:c.instructions+=2;goto B6ec992;
case 0x6ec994:c.instructions+=1;goto B6ec994;
case 0x6ec996:goto L6ec996;
case 0x6ec998:goto L6ec998;
case 0x6ec99a:goto L6ec99a;
case 0x6ec99d:c.instructions+=3;goto B6ec99d;
case 0x6ec99f:c.instructions+=2;goto B6ec99f;
case 0x6ec9a1:c.instructions+=1;goto B6ec9a1;
case 0x6ec9a3:goto L6ec9a3;
case 0x6ec9a5:goto L6ec9a5;
case 0x6ec9a9:c.instructions+=20;goto B6ec9a9;
case 0x6ec9ad:c.instructions+=19;goto B6ec9ad;
case 0x6ec9b0:c.instructions+=18;goto B6ec9b0;
case 0x6ec9b4:c.instructions+=17;goto B6ec9b4;
case 0x6ec9b7:c.instructions+=16;goto B6ec9b7;
case 0x6ec9ba:c.instructions+=15;goto B6ec9ba;
case 0x6ec9bc:c.instructions+=14;goto B6ec9bc;
case 0x6ec9be:c.instructions+=13;goto B6ec9be;
case 0x6ec9c0:c.instructions+=12;goto B6ec9c0;
case 0x6ec9c2:c.instructions+=11;goto B6ec9c2;
case 0x6ec9c5:c.instructions+=10;goto B6ec9c5;
case 0x6ec9c8:c.instructions+=9;goto B6ec9c8;
case 0x6ec9cb:c.instructions+=8;goto B6ec9cb;
case 0x6ec9ce:c.instructions+=7;goto B6ec9ce;
case 0x6ec9d1:c.instructions+=6;goto B6ec9d1;
case 0x6ec9d4:c.instructions+=5;goto B6ec9d4;
case 0x6ec9d8:c.instructions+=4;goto B6ec9d8;
case 0x6ec9d9:c.instructions+=3;goto B6ec9d9;
case 0x6ec9dc:c.instructions+=2;goto B6ec9dc;
case 0x6ec9de:c.instructions+=1;goto B6ec9de;
case 0x6ec9e0:goto L6ec9e0;
case 0x6ec9e3:c.instructions+=2;goto B6ec9e3;
case 0x6ec9e5:c.instructions+=1;goto B6ec9e5;
case 0x6ec9e7:goto L6ec9e7;
case 0x6ec9e9:c.instructions+=2;goto B6ec9e9;
case 0x6ec9eb:c.instructions+=1;goto B6ec9eb;
case 0x6ec9ed:goto L6ec9ed;
case 0x6ec9ef:c.instructions+=1;goto B6ec9ef;
case 0x6ec9f0:goto L6ec9f0;
case 0x6ec9f3:c.instructions+=9;goto B6ec9f3;
case 0x6ec9f7:c.instructions+=8;goto B6ec9f7;
case 0x6ec9fb:c.instructions+=7;goto B6ec9fb;
case 0x6ec9fe:c.instructions+=6;goto B6ec9fe;
case 0x6eca01:c.instructions+=5;goto B6eca01;
case 0x6eca04:c.instructions+=4;goto B6eca04;
case 0x6eca06:c.instructions+=3;goto B6eca06;
case 0x6eca07:c.instructions+=2;goto B6eca07;
case 0x6eca09:c.instructions+=1;goto B6eca09;
case 0x6eca0e:goto L6eca0e;
case 0x6eca12:c.instructions+=4;goto B6eca12;
case 0x6eca13:c.instructions+=3;goto B6eca13;
case 0x6eca16:c.instructions+=2;goto B6eca16;
case 0x6eca18:c.instructions+=1;goto B6eca18;
case 0x6eca1a:goto L6eca1a;
case 0x6eca1b:c.instructions+=6;goto B6eca1b;
case 0x6eca1c:c.instructions+=5;goto B6eca1c;
case 0x6eca1d:c.instructions+=4;goto B6eca1d;
case 0x6eca1f:c.instructions+=3;goto B6eca1f;
case 0x6eca20:c.instructions+=2;goto B6eca20;
case 0x6eca23:c.instructions+=1;goto B6eca23;
case 0x6eca26:goto L6eca26;
case 0x6eca2a:c.instructions+=6;goto B6eca2a;
case 0x6eca2b:c.instructions+=5;goto B6eca2b;
case 0x6eca2f:c.instructions+=4;goto B6eca2f;
case 0x6eca30:c.instructions+=3;goto B6eca30;
case 0x6eca31:c.instructions+=2;goto B6eca31;
case 0x6eca33:c.instructions+=1;goto B6eca33;
case 0x6eca38:goto L6eca38;
case 0x6eca39:c.instructions+=3;goto B6eca39;
case 0x6eca3a:c.instructions+=2;goto B6eca3a;
case 0x6eca3d:c.instructions+=1;goto B6eca3d;
case 0x6eca40:goto L6eca40;
case 0x6eca41:c.instructions+=39;goto B6eca41;
case 0x6eca44:c.instructions+=38;goto B6eca44;
case 0x6eca4a:c.instructions+=37;goto B6eca4a;
case 0x6eca4c:c.instructions+=36;goto B6eca4c;
case 0x6eca50:c.instructions+=35;goto B6eca50;
case 0x6eca54:c.instructions+=34;goto B6eca54;
case 0x6eca58:c.instructions+=33;goto B6eca58;
case 0x6eca5a:c.instructions+=32;goto B6eca5a;
case 0x6eca60:c.instructions+=31;goto B6eca60;
case 0x6eca62:c.instructions+=30;goto B6eca62;
case 0x6eca66:c.instructions+=29;goto B6eca66;
case 0x6eca6a:c.instructions+=28;goto B6eca6a;
case 0x6eca6e:c.instructions+=27;goto B6eca6e;
case 0x6eca70:c.instructions+=26;goto B6eca70;
case 0x6eca76:c.instructions+=25;goto B6eca76;
case 0x6eca79:c.instructions+=24;goto B6eca79;
case 0x6eca7d:c.instructions+=23;goto B6eca7d;
case 0x6eca81:c.instructions+=22;goto B6eca81;
case 0x6eca85:c.instructions+=21;goto B6eca85;
case 0x6eca87:c.instructions+=20;goto B6eca87;
case 0x6eca8d:c.instructions+=19;goto B6eca8d;
case 0x6eca90:c.instructions+=18;goto B6eca90;
case 0x6eca94:c.instructions+=17;goto B6eca94;
case 0x6eca98:c.instructions+=16;goto B6eca98;
case 0x6eca9c:c.instructions+=15;goto B6eca9c;
case 0x6eca9e:c.instructions+=14;goto B6eca9e;
case 0x6ecaa1:c.instructions+=13;goto B6ecaa1;
case 0x6ecaa5:c.instructions+=12;goto B6ecaa5;
case 0x6ecaa9:c.instructions+=11;goto B6ecaa9;
case 0x6ecaad:c.instructions+=10;goto B6ecaad;
case 0x6ecaaf:c.instructions+=9;goto B6ecaaf;
case 0x6ecab2:c.instructions+=8;goto B6ecab2;
case 0x6ecab6:c.instructions+=7;goto B6ecab6;
case 0x6ecaba:c.instructions+=6;goto B6ecaba;
case 0x6ecabe:c.instructions+=5;goto B6ecabe;
case 0x6ecac0:c.instructions+=4;goto B6ecac0;
case 0x6ecac3:c.instructions+=3;goto B6ecac3;
case 0x6ecac5:c.instructions+=2;goto B6ecac5;
case 0x6ecac6:c.instructions+=1;goto B6ecac6;
case 0x6ecad0:goto L6ecad0;
case 0x6ecad4:c.instructions+=18;goto B6ecad4;
case 0x6ecad7:c.instructions+=17;goto B6ecad7;
case 0x6ecada:c.instructions+=16;goto B6ecada;
case 0x6ecadc:c.instructions+=15;goto B6ecadc;
case 0x6ecade:c.instructions+=14;goto B6ecade;
case 0x6ecae0:c.instructions+=13;goto B6ecae0;
case 0x6ecae2:c.instructions+=12;goto B6ecae2;
case 0x6ecae4:c.instructions+=11;goto B6ecae4;
case 0x6ecae6:c.instructions+=10;goto B6ecae6;
case 0x6ecae8:c.instructions+=9;goto B6ecae8;
case 0x6ecaea:c.instructions+=8;goto B6ecaea;
case 0x6ecaec:c.instructions+=7;goto B6ecaec;
case 0x6ecaee:c.instructions+=6;goto B6ecaee;
case 0x6ecaf0:c.instructions+=5;goto B6ecaf0;
case 0x6ecaf2:c.instructions+=4;goto B6ecaf2;
case 0x6ecaf8:c.instructions+=3;goto B6ecaf8;
case 0x6ecafa:c.instructions+=2;goto B6ecafa;
case 0x6ecafd:c.instructions+=1;goto B6ecafd;
case 0x6ecaff:goto L6ecaff;
case 0x6ecb01:c.instructions+=11;goto B6ecb01;
case 0x6ecb08:c.instructions+=10;goto B6ecb08;
case 0x6ecb0e:c.instructions+=9;goto B6ecb0e;
case 0x6ecb10:c.instructions+=8;goto B6ecb10;
case 0x6ecb12:c.instructions+=7;goto B6ecb12;
case 0x6ecb14:c.instructions+=6;goto B6ecb14;
case 0x6ecb16:c.instructions+=5;goto B6ecb16;
case 0x6ecb19:c.instructions+=4;goto B6ecb19;
case 0x6ecb1c:c.instructions+=3;goto B6ecb1c;
case 0x6ecb1f:c.instructions+=2;goto B6ecb1f;
case 0x6ecb22:c.instructions+=1;goto B6ecb22;
case 0x6ecb23:goto L6ecb23;
case 0x6ecb29:c.instructions+=5;goto B6ecb29;
case 0x6ecb2d:c.instructions+=4;goto B6ecb2d;
case 0x6ecb2f:c.instructions+=3;goto B6ecb2f;
case 0x6ecb31:c.instructions+=2;goto B6ecb31;
case 0x6ecb34:c.instructions+=1;goto B6ecb34;
case 0x6ecb36:goto L6ecb36;
case 0x6ecb38:c.instructions+=2;goto B6ecb38;
case 0x6ecb3b:c.instructions+=1;goto B6ecb3b;
case 0x6ecb3c:goto L6ecb3c;
case 0x6ecb3e:c.instructions+=1;goto B6ecb3e;
case 0x6ecb40:goto L6ecb40;
case 0x6ecb41:c.instructions+=32;goto B6ecb41;
case 0x6ecb44:c.instructions+=31;goto B6ecb44;
case 0x6ecb4a:c.instructions+=30;goto B6ecb4a;
case 0x6ecb4c:c.instructions+=29;goto B6ecb4c;
case 0x6ecb4f:c.instructions+=28;goto B6ecb4f;
case 0x6ecb52:c.instructions+=27;goto B6ecb52;
case 0x6ecb56:c.instructions+=26;goto B6ecb56;
case 0x6ecb5a:c.instructions+=25;goto B6ecb5a;
case 0x6ecb5b:c.instructions+=24;goto B6ecb5b;
case 0x6ecb5f:c.instructions+=23;goto B6ecb5f;
case 0x6ecb65:c.instructions+=22;goto B6ecb65;
case 0x6ecb67:c.instructions+=21;goto B6ecb67;
case 0x6ecb69:c.instructions+=20;goto B6ecb69;
case 0x6ecb6f:c.instructions+=19;goto B6ecb6f;
case 0x6ecb71:c.instructions+=18;goto B6ecb71;
case 0x6ecb75:c.instructions+=17;goto B6ecb75;
case 0x6ecb79:c.instructions+=16;goto B6ecb79;
case 0x6ecb7d:c.instructions+=15;goto B6ecb7d;
case 0x6ecb7f:c.instructions+=14;goto B6ecb7f;
case 0x6ecb85:c.instructions+=13;goto B6ecb85;
case 0x6ecb88:c.instructions+=12;goto B6ecb88;
case 0x6ecb8c:c.instructions+=11;goto B6ecb8c;
case 0x6ecb90:c.instructions+=10;goto B6ecb90;
case 0x6ecb94:c.instructions+=9;goto B6ecb94;
case 0x6ecb96:c.instructions+=8;goto B6ecb96;
case 0x6ecb9c:c.instructions+=7;goto B6ecb9c;
case 0x6ecb9f:c.instructions+=6;goto B6ecb9f;
case 0x6ecba1:c.instructions+=5;goto B6ecba1;
case 0x6ecba3:c.instructions+=4;goto B6ecba3;
case 0x6ecba5:c.instructions+=3;goto B6ecba5;
case 0x6ecba8:c.instructions+=2;goto B6ecba8;
case 0x6ecba9:c.instructions+=1;goto B6ecba9;
case 0x6ecbae:goto L6ecbae;
case 0x6ecbb1:c.instructions+=1;goto B6ecbb1;
case 0x6ecbc0:goto L6ecbc0;
case 0x6ecbc1:c.instructions+=21;goto B6ecbc1;
case 0x6ecbc2:c.instructions+=20;goto B6ecbc2;
case 0x6ecbc4:c.instructions+=19;goto B6ecbc4;
case 0x6ecbc7:c.instructions+=18;goto B6ecbc7;
case 0x6ecbcb:c.instructions+=17;goto B6ecbcb;
case 0x6ecbcc:c.instructions+=16;goto B6ecbcc;
case 0x6ecbd0:c.instructions+=15;goto B6ecbd0;
case 0x6ecbd5:c.instructions+=14;goto B6ecbd5;
case 0x6ecbd7:c.instructions+=13;goto B6ecbd7;
case 0x6ecbd9:c.instructions+=12;goto B6ecbd9;
case 0x6ecbdb:c.instructions+=11;goto B6ecbdb;
case 0x6ecbde:c.instructions+=10;goto B6ecbde;
case 0x6ecbe1:c.instructions+=9;goto B6ecbe1;
case 0x6ecbe5:c.instructions+=8;goto B6ecbe5;
case 0x6ecbe8:c.instructions+=7;goto B6ecbe8;
case 0x6ecbea:c.instructions+=6;goto B6ecbea;
case 0x6ecbed:c.instructions+=5;goto B6ecbed;
case 0x6ecbef:c.instructions+=4;goto B6ecbef;
case 0x6ecbf1:c.instructions+=3;goto B6ecbf1;
case 0x6ecbf4:c.instructions+=2;goto B6ecbf4;
case 0x6ecbf8:c.instructions+=1;goto B6ecbf8;
case 0x6ecbfa:goto L6ecbfa;
case 0x6ecbfd:c.instructions+=3;goto B6ecbfd;
case 0x6ecc00:c.instructions+=2;goto B6ecc00;
case 0x6ecc02:c.instructions+=1;goto B6ecc02;
case 0x6ecc05:goto L6ecc05;
case 0x6ecc09:c.instructions+=6;goto B6ecc09;
case 0x6ecc0a:c.instructions+=5;goto B6ecc0a;
case 0x6ecc0e:c.instructions+=4;goto B6ecc0e;
case 0x6ecc0f:c.instructions+=3;goto B6ecc0f;
case 0x6ecc12:c.instructions+=2;goto B6ecc12;
case 0x6ecc13:c.instructions+=1;goto B6ecc13;
case 0x6ecc20:goto L6ecc20;
case 0x6ecc21:c.instructions+=2;goto B6ecc21;
case 0x6ecc23:c.instructions+=1;goto B6ecc23;
case 0x6ecc28:goto L6ecc28;
case 0x6ecc2a:c.instructions+=14;goto B6ecc2a;
case 0x6ecc2d:c.instructions+=13;goto B6ecc2d;
case 0x6ecc30:c.instructions+=12;goto B6ecc30;
case 0x6ecc33:c.instructions+=11;goto B6ecc33;
case 0x6ecc36:c.instructions+=10;goto B6ecc36;
case 0x6ecc39:c.instructions+=9;goto B6ecc39;
case 0x6ecc3c:c.instructions+=8;goto B6ecc3c;
case 0x6ecc3f:c.instructions+=7;goto B6ecc3f;
case 0x6ecc45:c.instructions+=6;goto B6ecc45;
case 0x6ecc48:c.instructions+=5;goto B6ecc48;
case 0x6ecc4b:c.instructions+=4;goto B6ecc4b;
case 0x6ecc52:c.instructions+=3;goto B6ecc52;
case 0x6ecc54:c.instructions+=2;goto B6ecc54;
case 0x6ecc55:c.instructions+=1;goto B6ecc55;
case 0x6ecc60:goto L6ecc60;
case 0x6ecc64:c.instructions+=6;goto B6ecc64;
case 0x6ecc66:c.instructions+=5;goto B6ecc66;
case 0x6ecc67:c.instructions+=4;goto B6ecc67;
case 0x6ecc6b:c.instructions+=3;goto B6ecc6b;
case 0x6ecc6d:c.instructions+=2;goto B6ecc6d;
case 0x6ecc6e:c.instructions+=1;goto B6ecc6e;
case 0x6ecc71:goto L6ecc71;
case 0x6ecc80:goto L6ecc80;
case 0x6ecc83:c.instructions+=54;goto B6ecc83;
case 0x6ecc85:c.instructions+=53;goto B6ecc85;
case 0x6ecc87:c.instructions+=52;goto B6ecc87;
case 0x6ecc8b:c.instructions+=51;goto B6ecc8b;
case 0x6ecc8d:c.instructions+=50;goto B6ecc8d;
case 0x6ecc90:c.instructions+=49;goto B6ecc90;
case 0x6ecc93:c.instructions+=48;goto B6ecc93;
case 0x6ecc97:c.instructions+=47;goto B6ecc97;
case 0x6ecc9a:c.instructions+=46;goto B6ecc9a;
case 0x6ecc9d:c.instructions+=45;goto B6ecc9d;
case 0x6ecca0:c.instructions+=44;goto B6ecca0;
case 0x6ecca4:c.instructions+=43;goto B6ecca4;
case 0x6ecca7:c.instructions+=42;goto B6ecca7;
case 0x6eccab:c.instructions+=41;goto B6eccab;
case 0x6eccae:c.instructions+=40;goto B6eccae;
case 0x6eccb1:c.instructions+=39;goto B6eccb1;
case 0x6eccb5:c.instructions+=38;goto B6eccb5;
case 0x6eccb8:c.instructions+=37;goto B6eccb8;
case 0x6eccbc:c.instructions+=36;goto B6eccbc;
case 0x6eccc0:c.instructions+=35;goto B6eccc0;
case 0x6eccc4:c.instructions+=34;goto B6eccc4;
case 0x6eccc8:c.instructions+=33;goto B6eccc8;
case 0x6eccca:c.instructions+=32;goto B6eccca;
case 0x6ecccc:c.instructions+=31;goto B6ecccc;
case 0x6eccce:c.instructions+=30;goto B6eccce;
case 0x6eccd0:c.instructions+=29;goto B6eccd0;
case 0x6eccd2:c.instructions+=28;goto B6eccd2;
case 0x6eccd4:c.instructions+=27;goto B6eccd4;
case 0x6eccd6:c.instructions+=26;goto B6eccd6;
case 0x6eccd8:c.instructions+=25;goto B6eccd8;
case 0x6eccde:c.instructions+=24;goto B6eccde;
case 0x6ecce2:c.instructions+=23;goto B6ecce2;
case 0x6ecce4:c.instructions+=22;goto B6ecce4;
case 0x6ecce8:c.instructions+=21;goto B6ecce8;
case 0x6eccec:c.instructions+=20;goto B6eccec;
case 0x6eccf0:c.instructions+=19;goto B6eccf0;
case 0x6eccf2:c.instructions+=18;goto B6eccf2;
case 0x6eccf4:c.instructions+=17;goto B6eccf4;
case 0x6eccf8:c.instructions+=16;goto B6eccf8;
case 0x6eccfc:c.instructions+=15;goto B6eccfc;
case 0x6eccff:c.instructions+=14;goto B6eccff;
case 0x6ecd01:c.instructions+=13;goto B6ecd01;
case 0x6ecd03:c.instructions+=12;goto B6ecd03;
case 0x6ecd07:c.instructions+=11;goto B6ecd07;
case 0x6ecd0b:c.instructions+=10;goto B6ecd0b;
case 0x6ecd0f:c.instructions+=9;goto B6ecd0f;
case 0x6ecd13:c.instructions+=8;goto B6ecd13;
case 0x6ecd17:c.instructions+=7;goto B6ecd17;
case 0x6ecd1a:c.instructions+=6;goto B6ecd1a;
case 0x6ecd1e:c.instructions+=5;goto B6ecd1e;
case 0x6ecd22:c.instructions+=4;goto B6ecd22;
case 0x6ecd26:c.instructions+=3;goto B6ecd26;
case 0x6ecd29:c.instructions+=2;goto B6ecd29;
case 0x6ecd2c:c.instructions+=1;goto B6ecd2c;
case 0x6ecd30:goto L6ecd30;
case 0x6ecd31:c.instructions+=29;goto B6ecd31;
case 0x6ecd32:c.instructions+=28;goto B6ecd32;
case 0x6ecd34:c.instructions+=27;goto B6ecd34;
case 0x6ecd38:c.instructions+=26;goto B6ecd38;
case 0x6ecd3b:c.instructions+=25;goto B6ecd3b;
case 0x6ecd3d:c.instructions+=24;goto B6ecd3d;
case 0x6ecd41:c.instructions+=23;goto B6ecd41;
case 0x6ecd44:c.instructions+=22;goto B6ecd44;
case 0x6ecd48:c.instructions+=21;goto B6ecd48;
case 0x6ecd4b:c.instructions+=20;goto B6ecd4b;
case 0x6ecd4d:c.instructions+=19;goto B6ecd4d;
case 0x6ecd50:c.instructions+=18;goto B6ecd50;
case 0x6ecd54:c.instructions+=17;goto B6ecd54;
case 0x6ecd55:c.instructions+=16;goto B6ecd55;
case 0x6ecd59:c.instructions+=15;goto B6ecd59;
case 0x6ecd5e:c.instructions+=14;goto B6ecd5e;
case 0x6ecd60:c.instructions+=13;goto B6ecd60;
case 0x6ecd62:c.instructions+=12;goto B6ecd62;
case 0x6ecd64:c.instructions+=11;goto B6ecd64;
case 0x6ecd67:c.instructions+=10;goto B6ecd67;
case 0x6ecd6a:c.instructions+=9;goto B6ecd6a;
case 0x6ecd6e:c.instructions+=8;goto B6ecd6e;
case 0x6ecd71:c.instructions+=7;goto B6ecd71;
case 0x6ecd73:c.instructions+=6;goto B6ecd73;
case 0x6ecd76:c.instructions+=5;goto B6ecd76;
case 0x6ecd78:c.instructions+=4;goto B6ecd78;
case 0x6ecd7a:c.instructions+=3;goto B6ecd7a;
case 0x6ecd7d:c.instructions+=2;goto B6ecd7d;
case 0x6ecd81:c.instructions+=1;goto B6ecd81;
case 0x6ecd83:goto L6ecd83;
case 0x6ecd86:c.instructions+=3;goto B6ecd86;
case 0x6ecd89:c.instructions+=2;goto B6ecd89;
case 0x6ecd8b:c.instructions+=1;goto B6ecd8b;
case 0x6ecd8e:goto L6ecd8e;
case 0x6ecd92:c.instructions+=3;goto B6ecd92;
case 0x6ecd94:c.instructions+=2;goto B6ecd94;
case 0x6ecd96:c.instructions+=1;goto B6ecd96;
case 0x6ecd9b:goto L6ecd9b;
case 0x6ecd9f:c.instructions+=5;goto B6ecd9f;
case 0x6ecda0:c.instructions+=4;goto B6ecda0;
case 0x6ecda1:c.instructions+=3;goto B6ecda1;
case 0x6ecda3:c.instructions+=2;goto B6ecda3;
case 0x6ecda4:c.instructions+=1;goto B6ecda4;
case 0x6ecdb0:goto L6ecdb0;
case 0x6ecdb1:c.instructions+=5;goto B6ecdb1;
case 0x6ecdb3:c.instructions+=4;goto B6ecdb3;
case 0x6ecdb6:c.instructions+=3;goto B6ecdb6;
case 0x6ecdb8:c.instructions+=2;goto B6ecdb8;
case 0x6ecdbe:c.instructions+=1;goto B6ecdbe;
case 0x6ecdc0:goto L6ecdc0;
case 0x6ecdc6:c.instructions+=3;goto B6ecdc6;
case 0x6ecdc8:c.instructions+=2;goto B6ecdc8;
case 0x6ecdc9:c.instructions+=1;goto B6ecdc9;
case 0x6ecdcc:goto L6ecdcc;
case 0x6ecdce:c.instructions+=1;goto B6ecdce;
case 0x6ecdd3:goto L6ecdd3;
case 0x6ecdd8:c.instructions+=1;goto B6ecdd8;
case 0x6ecdda:goto L6ecdda;
case 0x6ecddc:c.instructions+=2;goto B6ecddc;
case 0x6ecddd:c.instructions+=1;goto B6ecddd;
case 0x6ecde3:goto L6ecde3;
case 0x6ecde6:goto L6ecde6;
case 0x6ecde8:c.instructions+=2;goto B6ecde8;
case 0x6ecde9:c.instructions+=1;goto B6ecde9;
case 0x6ecdf0:goto L6ecdf0;
case 0x6ecdf1:c.instructions+=6;goto B6ecdf1;
case 0x6ecdf2:c.instructions+=5;goto B6ecdf2;
case 0x6ecdf4:c.instructions+=4;goto B6ecdf4;
case 0x6ecdf7:c.instructions+=3;goto B6ecdf7;
case 0x6ecdf9:c.instructions+=2;goto B6ecdf9;
case 0x6ecdfc:c.instructions+=1;goto B6ecdfc;
case 0x6ecdfe:goto L6ecdfe;
case 0x6ecdff:c.instructions+=10;goto B6ecdff;
case 0x6ece02:c.instructions+=9;goto B6ece02;
case 0x6ece05:c.instructions+=8;goto B6ece05;
case 0x6ece06:c.instructions+=7;goto B6ece06;
case 0x6ece09:c.instructions+=6;goto B6ece09;
case 0x6ece0a:c.instructions+=5;goto B6ece0a;
case 0x6ece0b:c.instructions+=4;goto B6ece0b;
case 0x6ece0f:c.instructions+=3;goto B6ece0f;
case 0x6ece10:c.instructions+=2;goto B6ece10;
case 0x6ece12:c.instructions+=1;goto B6ece12;
case 0x6ece17:goto L6ece17;
case 0x6ece1a:c.instructions+=12;goto B6ece1a;
case 0x6ece1f:c.instructions+=11;goto B6ece1f;
case 0x6ece21:c.instructions+=10;goto B6ece21;
case 0x6ece25:c.instructions+=9;goto B6ece25;
case 0x6ece26:c.instructions+=8;goto B6ece26;
case 0x6ece29:c.instructions+=7;goto B6ece29;
case 0x6ece2d:c.instructions+=6;goto B6ece2d;
case 0x6ece30:c.instructions+=5;goto B6ece30;
case 0x6ece33:c.instructions+=4;goto B6ece33;
case 0x6ece36:c.instructions+=3;goto B6ece36;
case 0x6ece38:c.instructions+=2;goto B6ece38;
case 0x6ece39:c.instructions+=1;goto B6ece39;
case 0x6ece3b:goto L6ece3b;
case 0x6ece41:c.instructions+=5;goto B6ece41;
case 0x6ece43:c.instructions+=4;goto B6ece43;
case 0x6ece46:c.instructions+=3;goto B6ece46;
case 0x6ece49:c.instructions+=2;goto B6ece49;
case 0x6ece4a:c.instructions+=1;goto B6ece4a;
case 0x6ece4d:goto L6ece4d;
case 0x6ece50:c.instructions+=3;goto B6ece50;
case 0x6ece53:c.instructions+=2;goto B6ece53;
case 0x6ece57:c.instructions+=1;goto B6ece57;
case 0x6ece5a:goto L6ece5a;
case 0x6ece5b:c.instructions+=2;goto B6ece5b;
case 0x6ece5c:c.instructions+=1;goto B6ece5c;
case 0x6ece60:goto L6ece60;
case 0x6ece64:c.instructions+=5;goto B6ece64;
case 0x6ece67:c.instructions+=4;goto B6ece67;
case 0x6ece69:c.instructions+=3;goto B6ece69;
case 0x6ece6a:c.instructions+=2;goto B6ece6a;
case 0x6ece6c:c.instructions+=1;goto B6ece6c;
case 0x6ece6e:goto L6ece6e;
case 0x6ece72:c.instructions+=7;goto B6ece72;
case 0x6ece74:c.instructions+=6;goto B6ece74;
case 0x6ece75:c.instructions+=5;goto B6ece75;
case 0x6ece76:c.instructions+=4;goto B6ece76;
case 0x6ece7a:c.instructions+=3;goto B6ece7a;
case 0x6ece7b:c.instructions+=2;goto B6ece7b;
case 0x6ece7d:c.instructions+=1;goto B6ece7d;
case 0x6ece80:goto L6ece80;
case 0x6ece81:c.instructions+=2;goto B6ece81;
case 0x6ece84:c.instructions+=1;goto B6ece84;
case 0x6ece87:goto L6ece87;
case 0x6ece88:c.instructions+=4;goto B6ece88;
case 0x6ece89:c.instructions+=3;goto B6ece89;
case 0x6ece8a:c.instructions+=2;goto B6ece8a;
case 0x6ece8c:c.instructions+=1;goto B6ece8c;
case 0x6ece91:goto L6ece91;
case 0x6ece94:c.instructions+=3;goto B6ece94;
case 0x6ece97:c.instructions+=2;goto B6ece97;
case 0x6ece99:c.instructions+=1;goto B6ece99;
case 0x6ece9f:goto L6ece9f;
case 0x6ecea3:c.instructions+=2;goto B6ecea3;
case 0x6ecea4:c.instructions+=1;goto B6ecea4;
case 0x6ecea9:goto L6ecea9;
case 0x6eceac:c.instructions+=5;goto B6eceac;
case 0x6eceae:c.instructions+=4;goto B6eceae;
case 0x6eceb1:c.instructions+=3;goto B6eceb1;
case 0x6eceb3:c.instructions+=2;goto B6eceb3;
case 0x6eceb7:c.instructions+=1;goto B6eceb7;
case 0x6eceb9:goto L6eceb9;
case 0x6ecebb:c.instructions+=1;goto B6ecebb;
case 0x6ecebd:goto L6ecebd;
case 0x6ecec1:c.instructions+=1;goto B6ecec1;
case 0x6ecec3:goto L6ecec3;
case 0x6ecec7:c.instructions+=2;goto B6ecec7;
case 0x6ecec9:c.instructions+=1;goto B6ecec9;
case 0x6ececb:goto L6ececb;
case 0x6ececc:c.instructions+=1;goto B6ececc;
case 0x6ecece:goto L6ecece;
case 0x6eced2:c.instructions+=1;goto B6eced2;
case 0x6eced4:goto L6eced4;
case 0x6eced7:c.instructions+=2;goto B6eced7;
case 0x6eced9:c.instructions+=1;goto B6eced9;
case 0x6ecedb:goto L6ecedb;
case 0x6ecedf:c.instructions+=1;goto B6ecedf;
case 0x6ecee1:goto L6ecee1;
case 0x6ecee4:c.instructions+=2;goto B6ecee4;
case 0x6ecee7:c.instructions+=1;goto B6ecee7;
case 0x6ecee9:goto L6ecee9;
case 0x6eceeb:c.instructions+=1;goto B6eceeb;
case 0x6eceed:goto L6eceed;
case 0x6eceee:goto L6eceee;
case 0x6ecef2:c.instructions+=3;goto B6ecef2;
case 0x6ecef4:c.instructions+=2;goto B6ecef4;
case 0x6ecef7:c.instructions+=1;goto B6ecef7;
case 0x6ecef9:goto L6ecef9;
case 0x6ecefd:c.instructions+=3;goto B6ecefd;
case 0x6ecf00:c.instructions+=2;goto B6ecf00;
case 0x6ecf02:c.instructions+=1;goto B6ecf02;
case 0x6ecf04:goto L6ecf04;
case 0x6ecf07:goto L6ecf07;
case 0x6ecf0a:c.instructions+=2;goto B6ecf0a;
case 0x6ecf0c:c.instructions+=1;goto B6ecf0c;
case 0x6ecf0e:goto L6ecf0e;
case 0x6ecf0f:c.instructions+=3;goto B6ecf0f;
case 0x6ecf12:c.instructions+=2;goto B6ecf12;
case 0x6ecf14:c.instructions+=1;goto B6ecf14;
case 0x6ecf16:goto L6ecf16;
case 0x6ecf18:goto L6ecf18;
case 0x6ecf1a:c.instructions+=1;goto B6ecf1a;
case 0x6ecf1c:goto L6ecf1c;
case 0x6ecf20:goto L6ecf20;
case 0x6ecf23:c.instructions+=2;goto B6ecf23;
case 0x6ecf25:c.instructions+=1;goto B6ecf25;
case 0x6ecf27:goto L6ecf27;
case 0x6ecf28:c.instructions+=3;goto B6ecf28;
case 0x6ecf2b:c.instructions+=2;goto B6ecf2b;
case 0x6ecf2d:c.instructions+=1;goto B6ecf2d;
case 0x6ecf2f:goto L6ecf2f;
case 0x6ecf30:goto L6ecf30;
case 0x6ecf34:goto L6ecf34;
case 0x6ecf38:c.instructions+=28;goto B6ecf38;
case 0x6ecf3c:c.instructions+=27;goto B6ecf3c;
case 0x6ecf41:c.instructions+=26;goto B6ecf41;
case 0x6ecf43:c.instructions+=25;goto B6ecf43;
case 0x6ecf48:c.instructions+=24;goto B6ecf48;
case 0x6ecf4a:c.instructions+=23;goto B6ecf4a;
case 0x6ecf4c:c.instructions+=22;goto B6ecf4c;
case 0x6ecf4e:c.instructions+=21;goto B6ecf4e;
case 0x6ecf50:c.instructions+=20;goto B6ecf50;
case 0x6ecf52:c.instructions+=19;goto B6ecf52;
case 0x6ecf54:c.instructions+=18;goto B6ecf54;
case 0x6ecf57:c.instructions+=17;goto B6ecf57;
case 0x6ecf5b:c.instructions+=16;goto B6ecf5b;
case 0x6ecf5f:c.instructions+=15;goto B6ecf5f;
case 0x6ecf61:c.instructions+=14;goto B6ecf61;
case 0x6ecf63:c.instructions+=13;goto B6ecf63;
case 0x6ecf65:c.instructions+=12;goto B6ecf65;
case 0x6ecf69:c.instructions+=11;goto B6ecf69;
case 0x6ecf6d:c.instructions+=10;goto B6ecf6d;
case 0x6ecf71:c.instructions+=9;goto B6ecf71;
case 0x6ecf75:c.instructions+=8;goto B6ecf75;
case 0x6ecf78:c.instructions+=7;goto B6ecf78;
case 0x6ecf7b:c.instructions+=6;goto B6ecf7b;
case 0x6ecf7e:c.instructions+=5;goto B6ecf7e;
case 0x6ecf80:c.instructions+=4;goto B6ecf80;
case 0x6ecf83:c.instructions+=3;goto B6ecf83;
case 0x6ecf87:c.instructions+=2;goto B6ecf87;
case 0x6ecf8b:c.instructions+=1;goto B6ecf8b;
case 0x6ecf8d:goto L6ecf8d;
case 0x6ecf93:c.instructions+=2;goto B6ecf93;
case 0x6ecf95:c.instructions+=1;goto B6ecf95;
case 0x6ecf97:goto L6ecf97;
case 0x6ecf99:c.instructions+=1;goto B6ecf99;
case 0x6ecf9b:goto L6ecf9b;
case 0x6ecf9d:goto L6ecf9d;
case 0x6ecfa0:c.instructions+=1;goto B6ecfa0;
case 0x6ecfa2:goto L6ecfa2;
case 0x6ecfa6:c.instructions+=2;goto B6ecfa6;
case 0x6ecfaa:c.instructions+=1;goto B6ecfaa;
case 0x6ecfac:goto L6ecfac;
case 0x6ecfb0:c.instructions+=2;goto B6ecfb0;
case 0x6ecfb2:c.instructions+=1;goto B6ecfb2;
case 0x6ecfb4:goto L6ecfb4;
case 0x6ecfb6:c.instructions+=1;goto B6ecfb6;
case 0x6ecfb8:goto L6ecfb8;
case 0x6ecfbc:c.instructions+=3;goto B6ecfbc;
case 0x6ecfbe:c.instructions+=2;goto B6ecfbe;
case 0x6ecfc0:c.instructions+=1;goto B6ecfc0;
case 0x6ecfc2:goto L6ecfc2;
case 0x6ecfc5:c.instructions+=3;goto B6ecfc5;
case 0x6ecfc7:c.instructions+=2;goto B6ecfc7;
case 0x6ecfcf:c.instructions+=1;goto B6ecfcf;
case 0x6ecfd1:goto L6ecfd1;
case 0x6ecfd3:c.instructions+=6;goto B6ecfd3;
case 0x6ecfd7:c.instructions+=5;goto B6ecfd7;
case 0x6ecfda:c.instructions+=4;goto B6ecfda;
case 0x6ecfde:c.instructions+=3;goto B6ecfde;
case 0x6ecfe0:c.instructions+=2;goto B6ecfe0;
case 0x6ecfe1:c.instructions+=1;goto B6ecfe1;
case 0x6ecfe6:goto L6ecfe6;
case 0x6ecfea:c.instructions+=8;goto B6ecfea;
case 0x6ecfee:c.instructions+=7;goto B6ecfee;
case 0x6ecff1:c.instructions+=6;goto B6ecff1;
case 0x6ecff5:c.instructions+=5;goto B6ecff5;
case 0x6ecff9:c.instructions+=4;goto B6ecff9;
case 0x6ecffa:c.instructions+=3;goto B6ecffa;
case 0x6ecffd:c.instructions+=2;goto B6ecffd;
case 0x6ecfff:c.instructions+=1;goto B6ecfff;
default:missing_instruction(c.pc);}
B6ec002:L6ec002:{c.instructions+=8;NFSU2_TR(0x6ec002);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ec006:{NFSU2_TR(0x6ec006);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ec007:{NFSU2_TR(0x6ec007);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6ec008:{NFSU2_TR(0x6ec008);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ec00b:{NFSU2_TR(0x6ec00b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6ec00c:{NFSU2_TR(0x6ec00c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ec00d:{NFSU2_TR(0x6ec00d);
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
B6ec010:{NFSU2_TR(0x6ec010);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ec020:L6ec020:{c.instructions+=31;NFSU2_TR(0x6ec020);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ec021:{NFSU2_TR(0x6ec021);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ec022:{NFSU2_TR(0x6ec022);
__builtin_memmove((R+24),(R+4),4);
}
B6ec024:{NFSU2_TR(0x6ec024);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ec028:{NFSU2_TR(0x6ec028);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ec02b:{NFSU2_TR(0x6ec02b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6ec02d:{NFSU2_TR(0x6ec02d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B6ec031:{NFSU2_TR(0x6ec031);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6ec034:{NFSU2_TR(0x6ec034);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B6ec036:{NFSU2_TR(0x6ec036);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ec03a:{NFSU2_TR(0x6ec03a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6ec03c:{NFSU2_TR(0x6ec03c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6ec03f:{NFSU2_TR(0x6ec03f);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6ec043:{NFSU2_TR(0x6ec043);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ec044:{NFSU2_TR(0x6ec044);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B6ec048:{NFSU2_TR(0x6ec048);
w4(R+28,u32(0x1ull));
}
B6ec04d:{NFSU2_TR(0x6ec04d);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r1(U+0))));
}
B6ec04f:{NFSU2_TR(0x6ec04f);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6ec051:{NFSU2_TR(0x6ec051);
u8 U[56];
w8(U+0,u64(r4(R+28)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6ec051);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6ec051);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B6ec053:{NFSU2_TR(0x6ec053);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ec056:{NFSU2_TR(0x6ec056);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B6ec059:{NFSU2_TR(0x6ec059);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B6ec05d:{NFSU2_TR(0x6ec05d);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffffeull))));
}
B6ec060:{NFSU2_TR(0x6ec060);
__builtin_memmove((R+28),(R+24),4);
}
B6ec062:{NFSU2_TR(0x6ec062);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B6ec065:{NFSU2_TR(0x6ec065);
__builtin_memmove((R+0),(R+12),4);
}
B6ec067:{NFSU2_TR(0x6ec067);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6ec06a:{NFSU2_TR(0x6ec06a);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B6ec06c:{NFSU2_TR(0x6ec06c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ec06e:{NFSU2_TR(0x6ec06e);
u8 U[12];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B6ec072:{NFSU2_TR(0x6ec072);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6ec07f;}}
}
B6ec074:L6ec074:{c.instructions+=4;NFSU2_TR(0x6ec074);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ec077:{NFSU2_TR(0x6ec077);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6ec07a:{NFSU2_TR(0x6ec07a);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B6ec07c:{NFSU2_TR(0x6ec07c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6ec07f:L6ec07f:{c.instructions+=4;NFSU2_TR(0x6ec07f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ec083:{NFSU2_TR(0x6ec083);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6ec085:{NFSU2_TR(0x6ec085);
__builtin_memmove((R+4),(R+24),4);
}
B6ec087:{NFSU2_TR(0x6ec087);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ec08cull));
TAIL_STATIC(0x6eb960u,6eb);
}
B6ec08c:L6ec08c:{c.instructions+=6;NFSU2_TR(0x6ec08c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ec090:{NFSU2_TR(0x6ec090);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ec091:{NFSU2_TR(0x6ec091);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ec092:{NFSU2_TR(0x6ec092);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6ec094:{NFSU2_TR(0x6ec094);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6ec095:{NFSU2_TR(0x6ec095);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ec0a0:L6ec0a0:{c.instructions+=6;NFSU2_TR(0x6ec0a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ec0a1:{NFSU2_TR(0x6ec0a1);
__builtin_memmove((R+24),(R+4),4);
}
B6ec0a3:{NFSU2_TR(0x6ec0a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ec0a6:{NFSU2_TR(0x6ec0a6);
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
B6ec0a8:{NFSU2_TR(0x6ec0a8);
u8 U[4];
w4(U+0,u32(0x7c1ed0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6ec0ae:{NFSU2_TR(0x6ec0ae);
if(r1(R+518)){{goto L6ec0bc;}}
}
B6ec0b0:L6ec0b0:{c.instructions+=4;NFSU2_TR(0x6ec0b0);
__builtin_memmove((R+4),gp(0x8ab294),4);
}
B6ec0b6:{NFSU2_TR(0x6ec0b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6ec0b8:{NFSU2_TR(0x6ec0b8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ec0b9:{NFSU2_TR(0x6ec0b9);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ec0bcull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6ec0bc:L6ec0bc:{c.instructions+=2;NFSU2_TR(0x6ec0bc);
__builtin_memmove((R+4),(R+24),4);
}
B6ec0be:{NFSU2_TR(0x6ec0be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ec0c3ull));
TAIL_STATIC(0x6e3ef0u,6e3);
}
B6ec0c3:L6ec0c3:{c.instructions+=2;NFSU2_TR(0x6ec0c3);
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
B6ec0c8:{NFSU2_TR(0x6ec0c8);
if(r1(R+518)){{goto L6ec0d6;}}
}
B6ec0ca:L6ec0ca:{c.instructions+=3;NFSU2_TR(0x6ec0ca);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ec0cc:{NFSU2_TR(0x6ec0cc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ec0cd:{NFSU2_TR(0x6ec0cd);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ec0d3ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6ec0d3:L6ec0d3:{c.instructions+=1;NFSU2_TR(0x6ec0d3);
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
B6ec0d6:L6ec0d6:{c.instructions+=3;NFSU2_TR(0x6ec0d6);
__builtin_memmove((R+0),(R+24),4);
}
B6ec0d8:{NFSU2_TR(0x6ec0d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ec0d9:{NFSU2_TR(0x6ec0d9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ec0e0:L6ec0e0:{c.instructions+=15;NFSU2_TR(0x6ec0e0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ec0e1:{NFSU2_TR(0x6ec0e1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ec0e2:{NFSU2_TR(0x6ec0e2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ec0e3:{NFSU2_TR(0x6ec0e3);
__builtin_memmove((R+24),(R+4),4);
}
B6ec0e5:{NFSU2_TR(0x6ec0e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6ec0e8:{NFSU2_TR(0x6ec0e8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ec0eb:{NFSU2_TR(0x6ec0eb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ec0ec:{NFSU2_TR(0x6ec0ec);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ec0ef:{NFSU2_TR(0x6ec0ef);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ec0f0:{NFSU2_TR(0x6ec0f0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6ec0f3:{NFSU2_TR(0x6ec0f3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ec0f4:{NFSU2_TR(0x6ec0f4);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6ec0f8:{NFSU2_TR(0x6ec0f8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ec0f9:{NFSU2_TR(0x6ec0f9);
__builtin_memmove((R+4),(R+12),4);
}
B6ec0fb:{NFSU2_TR(0x6ec0fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ec100ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ec020u);}goto L6ec020;}
}
B6ec100:L6ec100:{c.instructions+=12;NFSU2_TR(0x6ec100);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6ec103:{NFSU2_TR(0x6ec103);
w4(R+0,u32(0x1ull));
}
B6ec108:{NFSU2_TR(0x6ec108);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B6ec10a:{NFSU2_TR(0x6ec10a);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B6ec10e:{NFSU2_TR(0x6ec10e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6ec10f:{NFSU2_TR(0x6ec10f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6ec112:{NFSU2_TR(0x6ec112);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B6ec116:{NFSU2_TR(0x6ec116);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffffeull))));
}
B6ec119:{NFSU2_TR(0x6ec119);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ec11c:{NFSU2_TR(0x6ec11c);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6ec11f:{NFSU2_TR(0x6ec11f);
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
B6ec121:{NFSU2_TR(0x6ec121);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ec190;}}
}
B6ec123:L6ec123:{c.instructions+=12;NFSU2_TR(0x6ec123);
__builtin_memmove((R+4),gp(0x8ab294),4);
}
B6ec129:{NFSU2_TR(0x6ec129);
w4(R+0,u32(r1(R+0)));
}
B6ec12c:{NFSU2_TR(0x6ec12c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ec12d:{NFSU2_TR(0x6ec12d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ec12e:{NFSU2_TR(0x6ec12e);
__builtin_memmove((R+28),(R+0),4);
}
B6ec130:{NFSU2_TR(0x6ec130);
u8 U[45];
w4(U+37,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+0),4);
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+37))));
w1(U+24,u8((r4(U+37))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+37))-u32(u32(0x1ull))));
w4(U+29,shl<u32>(r4(U+41),u64(r4(U+25))));
w1(U+33,u8(s32(r4(U+29))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+33))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+34,u8((r4(U+37))==(u32(0x1ull))));
w1(U+35,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+0))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B6ec133:{NFSU2_TR(0x6ec133);
__builtin_memmove((R+20),(R+0),4);
}
B6ec135:{NFSU2_TR(0x6ec135);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ec137:{NFSU2_TR(0x6ec137);
u8 U[45];
w4(U+37,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+28),4);
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+37))));
w1(U+24,u8((r4(U+37))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+37))-u32(u32(0x1ull))));
w4(U+29,shl<u32>(r4(U+41),u64(r4(U+25))));
w1(U+33,u8(s32(r4(U+29))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+33))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+34,u8((r4(U+37))==(u32(0x1ull))));
w1(U+35,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+28))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B6ec13a:{NFSU2_TR(0x6ec13a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6ec13e:{NFSU2_TR(0x6ec13e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ec13f:{NFSU2_TR(0x6ec13f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ec142ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6ec142:L6ec142:{c.instructions+=11;NFSU2_TR(0x6ec142);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ec145:{NFSU2_TR(0x6ec145);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+20))));
}
B6ec147:{NFSU2_TR(0x6ec147);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B6ec149:{NFSU2_TR(0x6ec149);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ec14c:{NFSU2_TR(0x6ec14c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ec14f:{NFSU2_TR(0x6ec14f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ec152:{NFSU2_TR(0x6ec152);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ec155:{NFSU2_TR(0x6ec155);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6ec158:{NFSU2_TR(0x6ec158);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6ec15a:{NFSU2_TR(0x6ec15a);
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
B6ec15c:{NFSU2_TR(0x6ec15c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ec18e;}}
}
B6ec15e:L6ec15e:{c.instructions+=3;NFSU2_TR(0x6ec15e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ec162:{NFSU2_TR(0x6ec162);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B6ec164:{NFSU2_TR(0x6ec164);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ec168:L6ec168:{c.instructions+=5;NFSU2_TR(0x6ec168);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ec16b:{NFSU2_TR(0x6ec16b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),r4(R+20)));
w1(R+523,scarry<u32>(r4(R+4),r4(R+20)));
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+20))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6ec16d:{NFSU2_TR(0x6ec16d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ec16e:{NFSU2_TR(0x6ec16e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ec172:{NFSU2_TR(0x6ec172);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ec177ull));
TAIL_STATIC(0x6eb730u,6eb);
}
B6ec177:L6ec177:{c.instructions+=8;NFSU2_TR(0x6ec177);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ec17b:{NFSU2_TR(0x6ec17b);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B6ec17f:{NFSU2_TR(0x6ec17f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6ec180:{NFSU2_TR(0x6ec180);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B6ec183:{NFSU2_TR(0x6ec183);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x20ull))));
}
B6ec186:{NFSU2_TR(0x6ec186);
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
B6ec188:{NFSU2_TR(0x6ec188);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ec18c:{NFSU2_TR(0x6ec18c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ec168u);}goto L6ec168;}}
}
B6ec18e:L6ec18e:{c.instructions+=2;NFSU2_TR(0x6ec18e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ec18f:{NFSU2_TR(0x6ec18f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6ec190:L6ec190:{c.instructions+=4;NFSU2_TR(0x6ec190);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ec191:{NFSU2_TR(0x6ec191);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6ec192:{NFSU2_TR(0x6ec192);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ec193:{NFSU2_TR(0x6ec193);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ec1a0:L6ec1a0:{c.instructions+=3;NFSU2_TR(0x6ec1a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ec1a4:{NFSU2_TR(0x6ec1a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ec1a7:{NFSU2_TR(0x6ec1a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ec1acull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ec0e0u);}goto L6ec0e0;}
}
B6ec1ac:L6ec1ac:{c.instructions+=1;NFSU2_TR(0x6ec1ac);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ec1b0:L6ec1b0:{c.instructions+=9;NFSU2_TR(0x6ec1b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B6ec1b3:{NFSU2_TR(0x6ec1b3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ec1b4:{NFSU2_TR(0x6ec1b4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ec1b5:{NFSU2_TR(0x6ec1b5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ec1b6:{NFSU2_TR(0x6ec1b6);
__builtin_memmove((R+24),(R+4),4);
}
B6ec1b8:{NFSU2_TR(0x6ec1b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ec1bc:{NFSU2_TR(0x6ec1bc);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ec1bf:{NFSU2_TR(0x6ec1bf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ec1c0:{NFSU2_TR(0x6ec1c0);
if(r1(R+518)){{goto L6ec1ce;}}
}
B6ec1c2:L6ec1c2:{c.instructions+=4;NFSU2_TR(0x6ec1c2);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6ec1c5:{NFSU2_TR(0x6ec1c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ec1c8:{NFSU2_TR(0x6ec1c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ec1cb:{NFSU2_TR(0x6ec1cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ec1ce:L6ec1ce:{c.instructions+=9;NFSU2_TR(0x6ec1ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ec1d2:{NFSU2_TR(0x6ec1d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ec1d5:{NFSU2_TR(0x6ec1d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ec1d8:{NFSU2_TR(0x6ec1d8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B6ec1db:{NFSU2_TR(0x6ec1db);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ec1df:{NFSU2_TR(0x6ec1df);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6ec1e2:{NFSU2_TR(0x6ec1e2);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6ec1e4:{NFSU2_TR(0x6ec1e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ec1e8:{NFSU2_TR(0x6ec1e8);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ec5d1;}}
}
B6ec1ee:L6ec1ee:{c.instructions+=3;NFSU2_TR(0x6ec1ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ec1f2:{NFSU2_TR(0x6ec1f2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ec1f3:{NFSU2_TR(0x6ec1f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ec1f8ull));
TAIL_STATIC(0x6e4900u,6e4);
}
B6ec1f8:L6ec1f8:{c.instructions+=5;NFSU2_TR(0x6ec1f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ec1fb:{NFSU2_TR(0x6ec1fb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6ec1fe:{NFSU2_TR(0x6ec1fe);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ec200:{NFSU2_TR(0x6ec200);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ec204:{NFSU2_TR(0x6ec204);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ec21f;}}
}
B6ec206:L6ec206:{c.instructions+=2;NFSU2_TR(0x6ec206);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6ec208:{NFSU2_TR(0x6ec208);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6ec20e;}}
}
B6ec20a:L6ec20a:{c.instructions+=2;NFSU2_TR(0x6ec20a);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B6ec20c:{NFSU2_TR(0x6ec20c);
{goto L6ec277;}
}
B6ec20e:L6ec20e:{c.instructions+=3;NFSU2_TR(0x6ec20e);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6ec212:{NFSU2_TR(0x6ec212);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6ec214:{NFSU2_TR(0x6ec214);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6ec21b;}}
}
B6ec216:L6ec216:{c.instructions+=2;NFSU2_TR(0x6ec216);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((R+20),(U+0),4);
}
B6ec219:{NFSU2_TR(0x6ec219);
{goto L6ec277;}
}
B6ec21b:L6ec21b:{c.instructions+=2;NFSU2_TR(0x6ec21b);
__builtin_memmove((R+20),(R+0),4);
}
B6ec21d:{NFSU2_TR(0x6ec21d);
{goto L6ec277;}
}
B6ec21f:L6ec21f:{c.instructions+=3;NFSU2_TR(0x6ec21f);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
w4(R+4,u32(r2(U+0)));
}
B6ec222:{NFSU2_TR(0x6ec222);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6ec224:{NFSU2_TR(0x6ec224);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6ec22a;}}
}
B6ec226:L6ec226:{c.instructions+=2;NFSU2_TR(0x6ec226);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B6ec228:{NFSU2_TR(0x6ec228);
{goto L6ec277;}
}
B6ec22a:L6ec22a:{c.instructions+=3;NFSU2_TR(0x6ec22a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ec22d:{NFSU2_TR(0x6ec22d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6ec230:{NFSU2_TR(0x6ec230);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6ec236;}}
}
B6ec232:L6ec232:{c.instructions+=2;NFSU2_TR(0x6ec232);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6ec234:{NFSU2_TR(0x6ec234);
{goto L6ec237;}
}
B6ec236:L6ec236:{c.instructions+=1;NFSU2_TR(0x6ec236);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B6ec237:L6ec237:{c.instructions+=4;NFSU2_TR(0x6ec237);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+12,u32(r2(U+8)));
}
B6ec23b:{NFSU2_TR(0x6ec23b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ec23d:{NFSU2_TR(0x6ec23d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6ec240:{NFSU2_TR(0x6ec240);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6ec261;}}
}
B6ec242:L6ec242:{c.instructions+=4;NFSU2_TR(0x6ec242);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(r2(U+4)));
}
B6ec246:{NFSU2_TR(0x6ec246);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0xfffffffeull))));
}
B6ec249:{NFSU2_TR(0x6ec249);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6ec24b:{NFSU2_TR(0x6ec24b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6ec274;}}
}
B6ec24d:L6ec24d:{c.instructions+=1;NFSU2_TR(0x6ec24d);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2ull))));
}
B6ec250:L6ec250:{c.instructions+=3;NFSU2_TR(0x6ec250);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
w4(R+20,u32(r2(U+0)));
}
B6ec253:{NFSU2_TR(0x6ec253);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ec255:{NFSU2_TR(0x6ec255);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6ec274;}}
}
B6ec257:L6ec257:{c.instructions+=4;NFSU2_TR(0x6ec257);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6ec258:{NFSU2_TR(0x6ec258);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2ull))));
}
B6ec25b:{NFSU2_TR(0x6ec25b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6ec25d:{NFSU2_TR(0x6ec25d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ec250u);}goto L6ec250;}}
}
B6ec25f:L6ec25f:{c.instructions+=1;NFSU2_TR(0x6ec25f);
{goto L6ec274;}
}
B6ec261:L6ec261:{c.instructions+=2;NFSU2_TR(0x6ec261);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ec263:{NFSU2_TR(0x6ec263);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6ec274;}}
}
B6ec265:L6ec265:{c.instructions+=3;NFSU2_TR(0x6ec265);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
w4(R+12,u32(r2(U+0)));
}
B6ec268:{NFSU2_TR(0x6ec268);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ec26a:{NFSU2_TR(0x6ec26a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6ec274;}}
}
B6ec26c:L6ec26c:{c.instructions+=4;NFSU2_TR(0x6ec26c);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B6ec26d:{NFSU2_TR(0x6ec26d);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x2ull))));
}
B6ec270:{NFSU2_TR(0x6ec270);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ec272:{NFSU2_TR(0x6ec272);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ec265u);}goto L6ec265;}}
}
B6ec274:L6ec274:{c.instructions+=1;NFSU2_TR(0x6ec274);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6ec277:L6ec277:{c.instructions+=22;NFSU2_TR(0x6ec277);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B6ec27b:{NFSU2_TR(0x6ec27b);
w4(R+4,u32(0x1full));
}
B6ec280:{NFSU2_TR(0x6ec280);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B6ec282:{NFSU2_TR(0x6ec282);
w4(R+12,u32(0x7fffffffull));
}
B6ec287:{NFSU2_TR(0x6ec287);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r1(U+0))));
}
B6ec289:{NFSU2_TR(0x6ec289);
__builtin_memmove((R+4),(R+8),4);
}
B6ec28b:{NFSU2_TR(0x6ec28b);
__builtin_memmove((R+0),(R+20),4);
}
B6ec28d:{NFSU2_TR(0x6ec28d);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r1(U+0))));
}
B6ec28f:{NFSU2_TR(0x6ec28f);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ec293:{NFSU2_TR(0x6ec293);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ec297:{NFSU2_TR(0x6ec297);
__builtin_memmove((R+0),(R+12),4);
}
B6ec299:{NFSU2_TR(0x6ec299);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+20))));
}
B6ec29b:{NFSU2_TR(0x6ec29b);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ec29f:{NFSU2_TR(0x6ec29f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ec2a2:{NFSU2_TR(0x6ec2a2);
__builtin_memmove((R+8),(R+0),4);
}
B6ec2a4:{NFSU2_TR(0x6ec2a4);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r1(U+0))));
}
B6ec2a6:{NFSU2_TR(0x6ec2a6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ec2a9:{NFSU2_TR(0x6ec2a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ec2ad:{NFSU2_TR(0x6ec2ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ec2b1:{NFSU2_TR(0x6ec2b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ec2b5:{NFSU2_TR(0x6ec2b5);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+20))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ec2b8:{NFSU2_TR(0x6ec2b8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ec2d2;}}
}
B6ec2ba:L6ec2ba:{c.instructions+=7;NFSU2_TR(0x6ec2ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ec2bd:{NFSU2_TR(0x6ec2bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ec2c0:{NFSU2_TR(0x6ec2c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6ec2c4:{NFSU2_TR(0x6ec2c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ec2c7:{NFSU2_TR(0x6ec2c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ec2ca:{NFSU2_TR(0x6ec2ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ec2cd:{NFSU2_TR(0x6ec2cd);
{goto L6ec40a;}
}
B6ec2d2:L6ec2d2:{c.instructions+=2;NFSU2_TR(0x6ec2d2);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ec2d4:{NFSU2_TR(0x6ec2d4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ec321;}}
}
B6ec2d6:L6ec2d6:{c.instructions+=5;NFSU2_TR(0x6ec2d6);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6ec2d9:{NFSU2_TR(0x6ec2d9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ec2db:{NFSU2_TR(0x6ec2db);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6ec2dd:{NFSU2_TR(0x6ec2dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ec2e1:{NFSU2_TR(0x6ec2e1);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ec31b;}}
}
B6ec2e3:L6ec2e3:{c.instructions+=19;NFSU2_TR(0x6ec2e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ec2e6:{NFSU2_TR(0x6ec2e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ec2e9:{NFSU2_TR(0x6ec2e9);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B6ec2eb:{NFSU2_TR(0x6ec2eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+20),(U+0),4);
}
B6ec2ed:{NFSU2_TR(0x6ec2ed);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B6ec2ef:{NFSU2_TR(0x6ec2ef);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6ec2f1:{NFSU2_TR(0x6ec2f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6ec2f4:{NFSU2_TR(0x6ec2f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ec2f7:{NFSU2_TR(0x6ec2f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6ec2fa:{NFSU2_TR(0x6ec2fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ec2fd:{NFSU2_TR(0x6ec2fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ec300:{NFSU2_TR(0x6ec300);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ec303:{NFSU2_TR(0x6ec303);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ec307:{NFSU2_TR(0x6ec307);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B6ec30b:{NFSU2_TR(0x6ec30b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6ec30c:{NFSU2_TR(0x6ec30c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B6ec30f:{NFSU2_TR(0x6ec30f);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6ec311:{NFSU2_TR(0x6ec311);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ec315:{NFSU2_TR(0x6ec315);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ec2e3u);}goto L6ec2e3;}}
}
B6ec317:L6ec317:{c.instructions+=1;NFSU2_TR(0x6ec317);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6ec31b:L6ec31b:{c.instructions+=2;NFSU2_TR(0x6ec31b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ec31e:{NFSU2_TR(0x6ec31e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ec321:L6ec321:{c.instructions+=7;NFSU2_TR(0x6ec321);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ec324:{NFSU2_TR(0x6ec324);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ec328:{NFSU2_TR(0x6ec328);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B6ec32b:{NFSU2_TR(0x6ec32b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B6ec32e:{NFSU2_TR(0x6ec32e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6ec330:{NFSU2_TR(0x6ec330);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ec334:{NFSU2_TR(0x6ec334);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6ec344;}}
}
B6ec336:L6ec336:{c.instructions+=3;NFSU2_TR(0x6ec336);
u8 U[2];
__builtin_memmove((U+0),gp(0x811e32),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6ec33d:{NFSU2_TR(0x6ec33d);
u8 U[5];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6ec342:{NFSU2_TR(0x6ec342);
if(r1(R+518)){{goto L6ec349;}}
}
B6ec344:L6ec344:{c.instructions+=1;NFSU2_TR(0x6ec344);
u8 U[5];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6ec349:L6ec349:{c.instructions+=2;NFSU2_TR(0x6ec349);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ec34c:{NFSU2_TR(0x6ec34c);
if(r1(R+518)){{goto L6ec368;}}
}
B6ec34e:L6ec34e:{c.instructions+=2;NFSU2_TR(0x6ec34e);
u8 U[16];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ec352:{NFSU2_TR(0x6ec352);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ec364;}}
}
B6ec354:L6ec354:{c.instructions+=3;NFSU2_TR(0x6ec354);
u8 U[5];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6ec358:{NFSU2_TR(0x6ec358);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6ec35a:{NFSU2_TR(0x6ec35a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ec364;}}
}
B6ec35c:L6ec35c:{c.instructions+=3;NFSU2_TR(0x6ec35c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ec360:{NFSU2_TR(0x6ec360);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+12))));
}
B6ec362:{NFSU2_TR(0x6ec362);
{goto L6ec3d6;}
}
B6ec364:L6ec364:{c.instructions+=1;NFSU2_TR(0x6ec364);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ec368:L6ec368:{c.instructions+=4;NFSU2_TR(0x6ec368);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6ec36b:{NFSU2_TR(0x6ec36b);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6ec36d:{NFSU2_TR(0x6ec36d);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6ec36f:{NFSU2_TR(0x6ec36f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ec3d4;}}
}
B6ec371:L6ec371:{c.instructions+=3;NFSU2_TR(0x6ec371);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ec375:{NFSU2_TR(0x6ec375);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ec379:{NFSU2_TR(0x6ec379);
__builtin_memmove((R+16),(R+16),4);
}
B6ec380:L6ec380:{c.instructions+=10;NFSU2_TR(0x6ec380);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ec384:{NFSU2_TR(0x6ec384);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(r1(U+8)));
}
B6ec388:{NFSU2_TR(0x6ec388);
__builtin_memmove((R+4),(R+0),4);
}
B6ec38a:{NFSU2_TR(0x6ec38a);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6ec38d:{NFSU2_TR(0x6ec38d);
w4(R+8,u32(0x1ull));
}
B6ec392:{NFSU2_TR(0x6ec392);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B6ec394:{NFSU2_TR(0x6ec394);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ec398:{NFSU2_TR(0x6ec398);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B6ec39b:{NFSU2_TR(0x6ec39b);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ec39e:{NFSU2_TR(0x6ec39e);
if(r1(R+518)){{goto L6ec3b1;}}
}
B6ec3a0:L6ec3a0:{c.instructions+=5;NFSU2_TR(0x6ec3a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ec3a3:{NFSU2_TR(0x6ec3a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B6ec3a7:{NFSU2_TR(0x6ec3a7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ec3ab:{NFSU2_TR(0x6ec3ab);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ec3ac:{NFSU2_TR(0x6ec3ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ec3b1ull));
TAIL_STATIC(0x6eb800u,6eb);
}
B6ec3b1:L6ec3b1:{c.instructions+=10;NFSU2_TR(0x6ec3b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ec3b5:{NFSU2_TR(0x6ec3b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ec3b9:{NFSU2_TR(0x6ec3b9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B6ec3bc:{NFSU2_TR(0x6ec3bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ec3c0:{NFSU2_TR(0x6ec3c0);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B6ec3c4:{NFSU2_TR(0x6ec3c4);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6ec3c5:{NFSU2_TR(0x6ec3c5);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x6ull))));
}
B6ec3c8:{NFSU2_TR(0x6ec3c8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6ec3ca:{NFSU2_TR(0x6ec3ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ec3ce:{NFSU2_TR(0x6ec3ce);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ec380u);}goto L6ec380;}}
}
B6ec3d0:L6ec3d0:{c.instructions+=1;NFSU2_TR(0x6ec3d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ec3d4:L6ec3d4:{c.instructions+=1;NFSU2_TR(0x6ec3d4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ec3d6:L6ec3d6:{c.instructions+=3;NFSU2_TR(0x6ec3d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6ec3da:{NFSU2_TR(0x6ec3da);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ec3dc:{NFSU2_TR(0x6ec3dc);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6ec3f4;}}
}
B6ec3de:L6ec3de:{c.instructions+=10;NFSU2_TR(0x6ec3de);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ec3e2:{NFSU2_TR(0x6ec3e2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ec3e3:{NFSU2_TR(0x6ec3e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ec3e6:{NFSU2_TR(0x6ec3e6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ec3e7:{NFSU2_TR(0x6ec3e7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ec3e8:{NFSU2_TR(0x6ec3e8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ec3e9:{NFSU2_TR(0x6ec3e9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ec3ea:{NFSU2_TR(0x6ec3ea);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ec3eb:{NFSU2_TR(0x6ec3eb);
__builtin_memmove((R+4),(R+24),4);
}
B6ec3ed:{NFSU2_TR(0x6ec3ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ec3f2ull));
TAIL_STATIC(0x6ebcc0u,6eb);
}
B6ec3f2:L6ec3f2:{c.instructions+=1;NFSU2_TR(0x6ec3f2);
{goto L6ec40a;}
}
B6ec3f4:L6ec3f4:{c.instructions+=1;NFSU2_TR(0x6ec3f4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6ec40a;}}
}
B6ec3f6:L6ec3f6:{c.instructions+=10;NFSU2_TR(0x6ec3f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ec3fa:{NFSU2_TR(0x6ec3fa);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ec3fb:{NFSU2_TR(0x6ec3fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ec3fe:{NFSU2_TR(0x6ec3fe);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ec3ff:{NFSU2_TR(0x6ec3ff);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ec400:{NFSU2_TR(0x6ec400);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ec401:{NFSU2_TR(0x6ec401);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ec402:{NFSU2_TR(0x6ec402);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ec403:{NFSU2_TR(0x6ec403);
__builtin_memmove((R+4),(R+24),4);
}
B6ec405:{NFSU2_TR(0x6ec405);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ec40aull));
TAIL_STATIC(0x6ebda0u,6eb);
}
B6ec40a:L6ec40a:{c.instructions+=5;NFSU2_TR(0x6ec40a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ec40d:{NFSU2_TR(0x6ec40d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ec410:{NFSU2_TR(0x6ec410);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6ec412:{NFSU2_TR(0x6ec412);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ec414:{NFSU2_TR(0x6ec414);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ec433;}}
}
B6ec416:L6ec416:{c.instructions+=6;NFSU2_TR(0x6ec416);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6ec41a:{NFSU2_TR(0x6ec41a);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ec41e:{NFSU2_TR(0x6ec41e);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B6ec420:{NFSU2_TR(0x6ec420);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6ec422:{NFSU2_TR(0x6ec422);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6ec425:{NFSU2_TR(0x6ec425);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6ec564;}}
}
B6ec42b:L6ec42b:{c.instructions+=3;NFSU2_TR(0x6ec42b);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ec42f:{NFSU2_TR(0x6ec42f);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B6ec431:{NFSU2_TR(0x6ec431);
{goto L6ec495;}
}
B6ec433:L6ec433:{c.instructions+=2;NFSU2_TR(0x6ec433);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ec435:{NFSU2_TR(0x6ec435);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ec461;}}
}
B6ec437:L6ec437:{c.instructions+=5;NFSU2_TR(0x6ec437);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ec43b:{NFSU2_TR(0x6ec43b);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6ec441:{NFSU2_TR(0x6ec441);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6ec443:{NFSU2_TR(0x6ec443);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6ec446:{NFSU2_TR(0x6ec446);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6ec566;}}
}
B6ec44c:L6ec44c:{c.instructions+=6;NFSU2_TR(0x6ec44c);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+0,u32(r2(U+0)));
}
B6ec44f:{NFSU2_TR(0x6ec44f);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ec453:{NFSU2_TR(0x6ec453);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6ec457:{NFSU2_TR(0x6ec457);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B6ec45b:{NFSU2_TR(0x6ec45b);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ec45f:{NFSU2_TR(0x6ec45f);
{goto L6ec49b;}
}
B6ec461:L6ec461:{c.instructions+=8;NFSU2_TR(0x6ec461);
u8 U[14];
w4(U+0,u32(u32(u32(0xfffffffeull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+0,u32(r2(U+12)));
}
B6ec466:{NFSU2_TR(0x6ec466);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ec46a:{NFSU2_TR(0x6ec46a);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6ec46e:{NFSU2_TR(0x6ec46e);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ec472:{NFSU2_TR(0x6ec472);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B6ec474:{NFSU2_TR(0x6ec474);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6ec476:{NFSU2_TR(0x6ec476);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6ec479:{NFSU2_TR(0x6ec479);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6ec564;}}
}
B6ec47f:L6ec47f:{c.instructions+=7;NFSU2_TR(0x6ec47f);
u8 U[10];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+4,u32(r2(U+8)));
}
B6ec483:{NFSU2_TR(0x6ec483);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ec487:{NFSU2_TR(0x6ec487);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B6ec489:{NFSU2_TR(0x6ec489);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ec48d:{NFSU2_TR(0x6ec48d);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6ec491:{NFSU2_TR(0x6ec491);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B6ec493:{NFSU2_TR(0x6ec493);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B6ec495:L6ec495:{c.instructions+=2;NFSU2_TR(0x6ec495);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ec499:{NFSU2_TR(0x6ec499);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6ec49b:L6ec49b:{c.instructions+=4;NFSU2_TR(0x6ec49b);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6ec49f:{NFSU2_TR(0x6ec49f);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6ec4a0:{NFSU2_TR(0x6ec4a0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6ec4a2:{NFSU2_TR(0x6ec4a2);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6ec566;}}
}
B6ec4a8:L6ec4a8:{c.instructions+=10;NFSU2_TR(0x6ec4a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ec4ac:{NFSU2_TR(0x6ec4ac);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ec4b0:{NFSU2_TR(0x6ec4b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ec4b4:{NFSU2_TR(0x6ec4b4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ec4b5:{NFSU2_TR(0x6ec4b5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ec4b6:{NFSU2_TR(0x6ec4b6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ec4b7:{NFSU2_TR(0x6ec4b7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ec4b8:{NFSU2_TR(0x6ec4b8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ec4b9:{NFSU2_TR(0x6ec4b9);
__builtin_memmove((R+4),(R+24),4);
}
B6ec4bb:{NFSU2_TR(0x6ec4bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ec4c0ull));
TAIL_STATIC(0x6ebe90u,6eb);
}
B6ec4c0:L6ec4c0:{c.instructions+=5;NFSU2_TR(0x6ec4c0);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6ec4c3:{NFSU2_TR(0x6ec4c3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ec4c5:{NFSU2_TR(0x6ec4c5);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6ec4c7:{NFSU2_TR(0x6ec4c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ec4cb:{NFSU2_TR(0x6ec4cb);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ec5d1;}}
}
B6ec4d1:L6ec4d1:{c.instructions+=1;NFSU2_TR(0x6ec4d1);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6ec4d3:L6ec4d3:{c.instructions+=11;NFSU2_TR(0x6ec4d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ec4d7:{NFSU2_TR(0x6ec4d7);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(r1(U+8)));
}
B6ec4db:{NFSU2_TR(0x6ec4db);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6ec4df:{NFSU2_TR(0x6ec4df);
__builtin_memmove((R+4),(R+0),4);
}
B6ec4e1:{NFSU2_TR(0x6ec4e1);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6ec4e4:{NFSU2_TR(0x6ec4e4);
w4(R+8,u32(0x1ull));
}
B6ec4e9:{NFSU2_TR(0x6ec4e9);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B6ec4eb:{NFSU2_TR(0x6ec4eb);
__builtin_memmove((R+4),(R+0),4);
}
B6ec4ed:{NFSU2_TR(0x6ec4ed);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B6ec4f0:{NFSU2_TR(0x6ec4f0);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ec4f4:{NFSU2_TR(0x6ec4f4);
if(r1(R+518)){{goto L6ec54a;}}
}
B6ec4f6:L6ec4f6:{c.instructions+=28;NFSU2_TR(0x6ec4f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ec4fa:{NFSU2_TR(0x6ec4fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6ec4fd:{NFSU2_TR(0x6ec4fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ec500:{NFSU2_TR(0x6ec500);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6ec503:{NFSU2_TR(0x6ec503);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B6ec505:{NFSU2_TR(0x6ec505);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ec508:{NFSU2_TR(0x6ec508);
{u32 ea_=u32(r4(R+12)+r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ec50b:{NFSU2_TR(0x6ec50b);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+12))));
}
B6ec50d:{NFSU2_TR(0x6ec50d);
{u32 ea_=u32(r4(R+12)+r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6ec510:{NFSU2_TR(0x6ec510);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B6ec512:{NFSU2_TR(0x6ec512);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ec516:{NFSU2_TR(0x6ec516);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ec518:{NFSU2_TR(0x6ec518);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ec51a:{NFSU2_TR(0x6ec51a);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ec51d:{NFSU2_TR(0x6ec51d);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6ec520:{NFSU2_TR(0x6ec520);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ec524:{NFSU2_TR(0x6ec524);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ec527:{NFSU2_TR(0x6ec527);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ec52a:{NFSU2_TR(0x6ec52a);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ec52d:{NFSU2_TR(0x6ec52d);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6ec530:{NFSU2_TR(0x6ec530);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ec534:{NFSU2_TR(0x6ec534);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ec537:{NFSU2_TR(0x6ec537);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ec53a:{NFSU2_TR(0x6ec53a);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ec53d:{NFSU2_TR(0x6ec53d);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6ec540:{NFSU2_TR(0x6ec540);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ec544:{NFSU2_TR(0x6ec544);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ec547:{NFSU2_TR(0x6ec547);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ec54a:L6ec54a:{c.instructions+=7;NFSU2_TR(0x6ec54a);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ec54e:{NFSU2_TR(0x6ec54e);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B6ec552:{NFSU2_TR(0x6ec552);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6ec553:{NFSU2_TR(0x6ec553);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B6ec556:{NFSU2_TR(0x6ec556);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6ec558:{NFSU2_TR(0x6ec558);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ec55c:{NFSU2_TR(0x6ec55c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ec4d3u);}goto L6ec4d3;}}
}
B6ec562:L6ec562:{c.instructions+=1;NFSU2_TR(0x6ec562);
{goto L6ec5d1;}
}
B6ec564:L6ec564:{c.instructions+=1;NFSU2_TR(0x6ec564);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6ec566:L6ec566:{c.instructions+=3;NFSU2_TR(0x6ec566);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6ec569:{NFSU2_TR(0x6ec569);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6ec56b:{NFSU2_TR(0x6ec56b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ec5d1;}}
}
B6ec56d:L6ec56d:{c.instructions+=1;NFSU2_TR(0x6ec56d);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ec571:L6ec571:{c.instructions+=11;NFSU2_TR(0x6ec571);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ec575:{NFSU2_TR(0x6ec575);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(r1(U+8)));
}
B6ec579:{NFSU2_TR(0x6ec579);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6ec57d:{NFSU2_TR(0x6ec57d);
__builtin_memmove((R+4),(R+0),4);
}
B6ec57f:{NFSU2_TR(0x6ec57f);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6ec582:{NFSU2_TR(0x6ec582);
w4(R+12,u32(0x1ull));
}
B6ec587:{NFSU2_TR(0x6ec587);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r1(U+0))));
}
B6ec589:{NFSU2_TR(0x6ec589);
__builtin_memmove((R+4),(R+0),4);
}
B6ec58b:{NFSU2_TR(0x6ec58b);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B6ec58e:{NFSU2_TR(0x6ec58e);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ec592:{NFSU2_TR(0x6ec592);
if(r1(R+518)){{goto L6ec5bd;}}
}
B6ec594:L6ec594:{c.instructions+=14;NFSU2_TR(0x6ec594);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ec597:{NFSU2_TR(0x6ec597);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B6ec59b:{NFSU2_TR(0x6ec59b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6ec59f:{NFSU2_TR(0x6ec59f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6ec5a2:{NFSU2_TR(0x6ec5a2);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6ec5a5:{NFSU2_TR(0x6ec5a5);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B6ec5a7:{NFSU2_TR(0x6ec5a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6ec5a9:{NFSU2_TR(0x6ec5a9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6ec5ab:{NFSU2_TR(0x6ec5ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6ec5ae:{NFSU2_TR(0x6ec5ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ec5b1:{NFSU2_TR(0x6ec5b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6ec5b4:{NFSU2_TR(0x6ec5b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ec5b7:{NFSU2_TR(0x6ec5b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ec5ba:{NFSU2_TR(0x6ec5ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ec5bd:L6ec5bd:{c.instructions+=7;NFSU2_TR(0x6ec5bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6ec5c1:{NFSU2_TR(0x6ec5c1);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B6ec5c5:{NFSU2_TR(0x6ec5c5);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6ec5c6:{NFSU2_TR(0x6ec5c6);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B6ec5c9:{NFSU2_TR(0x6ec5c9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6ec5cb:{NFSU2_TR(0x6ec5cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ec5cf:{NFSU2_TR(0x6ec5cf);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ec571u);}goto L6ec571;}}
}
B6ec5d1:L6ec5d1:{c.instructions+=3;NFSU2_TR(0x6ec5d1);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6ec5d4:{NFSU2_TR(0x6ec5d4);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6ec5d6:{NFSU2_TR(0x6ec5d6);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ec633;}}
}
B6ec5d8:L6ec5d8:{c.instructions+=3;NFSU2_TR(0x6ec5d8);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6ec5da:{NFSU2_TR(0x6ec5da);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6ec5dc:{NFSU2_TR(0x6ec5dc);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ec633;}}
}
B6ec5de:L6ec5de:{c.instructions+=2;NFSU2_TR(0x6ec5de);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6ec5e2:{NFSU2_TR(0x6ec5e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ec5e6:L6ec5e6:{c.instructions+=10;NFSU2_TR(0x6ec5e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ec5e9:{NFSU2_TR(0x6ec5e9);
u8 U[9];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(r1(U+8)));
}
B6ec5ed:{NFSU2_TR(0x6ec5ed);
__builtin_memmove((R+4),(R+0),4);
}
B6ec5ef:{NFSU2_TR(0x6ec5ef);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6ec5f2:{NFSU2_TR(0x6ec5f2);
w4(R+8,u32(0x1ull));
}
B6ec5f7:{NFSU2_TR(0x6ec5f7);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B6ec5f9:{NFSU2_TR(0x6ec5f9);
__builtin_memmove((R+4),(R+0),4);
}
B6ec5fb:{NFSU2_TR(0x6ec5fb);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B6ec5fe:{NFSU2_TR(0x6ec5fe);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ec602:{NFSU2_TR(0x6ec602);
if(r1(R+518)){{goto L6ec61f;}}
}
B6ec604:L6ec604:{c.instructions+=9;NFSU2_TR(0x6ec604);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ec607:{NFSU2_TR(0x6ec607);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6ec60a:{NFSU2_TR(0x6ec60a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ec60e:{NFSU2_TR(0x6ec60e);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6ec611:{NFSU2_TR(0x6ec611);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B6ec613:{NFSU2_TR(0x6ec613);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ec617:{NFSU2_TR(0x6ec617);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ec618:{NFSU2_TR(0x6ec618);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B6ec61a:{NFSU2_TR(0x6ec61a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ec61full));
TAIL_STATIC(0x6eb800u,6eb);
}
B6ec61f:L6ec61f:{c.instructions+=7;NFSU2_TR(0x6ec61f);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ec623:{NFSU2_TR(0x6ec623);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B6ec627:{NFSU2_TR(0x6ec627);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6ec628:{NFSU2_TR(0x6ec628);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x6ull))));
}
B6ec62b:{NFSU2_TR(0x6ec62b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6ec62d:{NFSU2_TR(0x6ec62d);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ec631:{NFSU2_TR(0x6ec631);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ec5e6u);}goto L6ec5e6;}}
}
B6ec633:L6ec633:{c.instructions+=7;NFSU2_TR(0x6ec633);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ec634:{NFSU2_TR(0x6ec634);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ec635:{NFSU2_TR(0x6ec635);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6ec636:{NFSU2_TR(0x6ec636);
w1(R+0,u8(0x1ull));
}
B6ec638:{NFSU2_TR(0x6ec638);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6ec639:{NFSU2_TR(0x6ec639);
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
B6ec63c:{NFSU2_TR(0x6ec63c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ec640:L6ec640:{c.instructions+=8;NFSU2_TR(0x6ec640);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ec644:{NFSU2_TR(0x6ec644);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B6ec647:{NFSU2_TR(0x6ec647);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ec648:{NFSU2_TR(0x6ec648);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6ec64a:{NFSU2_TR(0x6ec64a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ec64c:{NFSU2_TR(0x6ec64c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ec64d:{NFSU2_TR(0x6ec64d);
__builtin_memmove((R+24),(R+4),4);
}
B6ec64f:{NFSU2_TR(0x6ec64f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6eca26;}}
}
B6ec655:L6ec655:{c.instructions+=2;NFSU2_TR(0x6ec655);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ec658:{NFSU2_TR(0x6ec658);
if(r1(R+518)){{goto L6ec666;}}
}
B6ec65a:L6ec65a:{c.instructions+=4;NFSU2_TR(0x6ec65a);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6ec65d:{NFSU2_TR(0x6ec65d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ec660:{NFSU2_TR(0x6ec660);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ec663:{NFSU2_TR(0x6ec663);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ec666:L6ec666:{c.instructions+=11;NFSU2_TR(0x6ec666);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ec66a:{NFSU2_TR(0x6ec66a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ec66b:{NFSU2_TR(0x6ec66b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B6ec66e:{NFSU2_TR(0x6ec66e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ec66f:{NFSU2_TR(0x6ec66f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ec672:{NFSU2_TR(0x6ec672);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ec675:{NFSU2_TR(0x6ec675);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ec679:{NFSU2_TR(0x6ec679);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6ec67c:{NFSU2_TR(0x6ec67c);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6ec67e:{NFSU2_TR(0x6ec67e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ec682:{NFSU2_TR(0x6ec682);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ec9e0;}}
}
B6ec688:L6ec688:{c.instructions+=3;NFSU2_TR(0x6ec688);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ec68c:{NFSU2_TR(0x6ec68c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ec68d:{NFSU2_TR(0x6ec68d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ec692ull));
TAIL_STATIC(0x6e4900u,6e4);
}
B6ec692:L6ec692:{c.instructions+=5;NFSU2_TR(0x6ec692);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ec695:{NFSU2_TR(0x6ec695);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6ec698:{NFSU2_TR(0x6ec698);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ec69a:{NFSU2_TR(0x6ec69a);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ec69e:{NFSU2_TR(0x6ec69e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ec6b3;}}
}
B6ec6a0:L6ec6a0:{c.instructions+=2;NFSU2_TR(0x6ec6a0);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6ec6a2:{NFSU2_TR(0x6ec6a2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6ec707;}}
}
B6ec6a4:L6ec6a4:{c.instructions+=3;NFSU2_TR(0x6ec6a4);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(r2(U+4)));
}
B6ec6a8:{NFSU2_TR(0x6ec6a8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6ec6aa:{NFSU2_TR(0x6ec6aa);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6ec6af;}}
}
B6ec6ac:L6ec6ac:{c.instructions+=2;NFSU2_TR(0x6ec6ac);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
}
B6ec6ad:{NFSU2_TR(0x6ec6ad);
{goto L6ec707;}
}
B6ec6af:L6ec6af:{c.instructions+=2;NFSU2_TR(0x6ec6af);
__builtin_memmove((R+12),(R+0),4);
}
B6ec6b1:{NFSU2_TR(0x6ec6b1);
{goto L6ec707;}
}
B6ec6b3:L6ec6b3:{c.instructions+=3;NFSU2_TR(0x6ec6b3);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
w4(R+4,u32(r2(U+0)));
}
B6ec6b6:{NFSU2_TR(0x6ec6b6);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6ec6b8:{NFSU2_TR(0x6ec6b8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6ec707;}}
}
B6ec6ba:L6ec6ba:{c.instructions+=3;NFSU2_TR(0x6ec6ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ec6bd:{NFSU2_TR(0x6ec6bd);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6ec6c0:{NFSU2_TR(0x6ec6c0);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6ec6c6;}}
}
B6ec6c2:L6ec6c2:{c.instructions+=2;NFSU2_TR(0x6ec6c2);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6ec6c4:{NFSU2_TR(0x6ec6c4);
{goto L6ec6c7;}
}
B6ec6c6:L6ec6c6:{c.instructions+=1;NFSU2_TR(0x6ec6c6);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B6ec6c7:L6ec6c7:{c.instructions+=4;NFSU2_TR(0x6ec6c7);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+20,u32(r2(U+8)));
}
B6ec6cb:{NFSU2_TR(0x6ec6cb);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ec6cd:{NFSU2_TR(0x6ec6cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6ec6d0:{NFSU2_TR(0x6ec6d0);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6ec6f1;}}
}
B6ec6d2:L6ec6d2:{c.instructions+=4;NFSU2_TR(0x6ec6d2);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+20,u32(r2(U+4)));
}
B6ec6d6:{NFSU2_TR(0x6ec6d6);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0xfffffffeull))));
}
B6ec6d9:{NFSU2_TR(0x6ec6d9);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6ec6db:{NFSU2_TR(0x6ec6db);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6ec704;}}
}
B6ec6dd:L6ec6dd:{c.instructions+=1;NFSU2_TR(0x6ec6dd);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2ull))));
}
B6ec6e0:L6ec6e0:{c.instructions+=3;NFSU2_TR(0x6ec6e0);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
w4(R+12,u32(r2(U+0)));
}
B6ec6e3:{NFSU2_TR(0x6ec6e3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ec6e5:{NFSU2_TR(0x6ec6e5);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6ec704;}}
}
B6ec6e7:L6ec6e7:{c.instructions+=4;NFSU2_TR(0x6ec6e7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6ec6e8:{NFSU2_TR(0x6ec6e8);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2ull))));
}
B6ec6eb:{NFSU2_TR(0x6ec6eb);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6ec6ed:{NFSU2_TR(0x6ec6ed);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ec6e0u);}goto L6ec6e0;}}
}
B6ec6ef:L6ec6ef:{c.instructions+=1;NFSU2_TR(0x6ec6ef);
{goto L6ec704;}
}
B6ec6f1:L6ec6f1:{c.instructions+=2;NFSU2_TR(0x6ec6f1);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ec6f3:{NFSU2_TR(0x6ec6f3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6ec704;}}
}
B6ec6f5:L6ec6f5:{c.instructions+=3;NFSU2_TR(0x6ec6f5);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
w4(R+20,u32(r2(U+0)));
}
B6ec6f8:{NFSU2_TR(0x6ec6f8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ec6fa:{NFSU2_TR(0x6ec6fa);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6ec704;}}
}
B6ec6fc:L6ec6fc:{c.instructions+=4;NFSU2_TR(0x6ec6fc);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B6ec6fd:{NFSU2_TR(0x6ec6fd);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x2ull))));
}
B6ec700:{NFSU2_TR(0x6ec700);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ec702:{NFSU2_TR(0x6ec702);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ec6f5u);}goto L6ec6f5;}}
}
B6ec704:L6ec704:{c.instructions+=1;NFSU2_TR(0x6ec704);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6ec707:L6ec707:{c.instructions+=22;NFSU2_TR(0x6ec707);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B6ec70b:{NFSU2_TR(0x6ec70b);
w4(R+4,u32(0x1full));
}
B6ec710:{NFSU2_TR(0x6ec710);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B6ec712:{NFSU2_TR(0x6ec712);
w4(R+20,u32(0x7fffffffull));
}
B6ec717:{NFSU2_TR(0x6ec717);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+20,shr<u32>(r4(R+20),u64(r1(U+0))));
}
B6ec719:{NFSU2_TR(0x6ec719);
__builtin_memmove((R+4),(R+8),4);
}
B6ec71b:{NFSU2_TR(0x6ec71b);
__builtin_memmove((R+0),(R+12),4);
}
B6ec71d:{NFSU2_TR(0x6ec71d);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r1(U+0))));
}
B6ec71f:{NFSU2_TR(0x6ec71f);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ec723:{NFSU2_TR(0x6ec723);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ec727:{NFSU2_TR(0x6ec727);
__builtin_memmove((R+0),(R+20),4);
}
B6ec729:{NFSU2_TR(0x6ec729);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+12))));
}
B6ec72b:{NFSU2_TR(0x6ec72b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ec72f:{NFSU2_TR(0x6ec72f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ec732:{NFSU2_TR(0x6ec732);
__builtin_memmove((R+8),(R+0),4);
}
B6ec734:{NFSU2_TR(0x6ec734);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r1(U+0))));
}
B6ec736:{NFSU2_TR(0x6ec736);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ec739:{NFSU2_TR(0x6ec739);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ec73d:{NFSU2_TR(0x6ec73d);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ec741:{NFSU2_TR(0x6ec741);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ec745:{NFSU2_TR(0x6ec745);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ec748:{NFSU2_TR(0x6ec748);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ec75e;}}
}
B6ec74a:L6ec74a:{c.instructions+=6;NFSU2_TR(0x6ec74a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ec74d:{NFSU2_TR(0x6ec74d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ec750:{NFSU2_TR(0x6ec750);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ec753:{NFSU2_TR(0x6ec753);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ec756:{NFSU2_TR(0x6ec756);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ec759:{NFSU2_TR(0x6ec759);
{goto L6ec86e;}
}
B6ec75e:L6ec75e:{c.instructions+=2;NFSU2_TR(0x6ec75e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ec760:{NFSU2_TR(0x6ec760);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ec7ae;}}
}
B6ec762:L6ec762:{c.instructions+=5;NFSU2_TR(0x6ec762);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6ec765:{NFSU2_TR(0x6ec765);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ec767:{NFSU2_TR(0x6ec767);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6ec769:{NFSU2_TR(0x6ec769);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ec76d:{NFSU2_TR(0x6ec76d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ec7a8;}}
}
B6ec76f:L6ec76f:{c.instructions+=1;NFSU2_TR(0x6ec76f);
}
B6ec770:L6ec770:{c.instructions+=19;NFSU2_TR(0x6ec770);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ec773:{NFSU2_TR(0x6ec773);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ec776:{NFSU2_TR(0x6ec776);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B6ec778:{NFSU2_TR(0x6ec778);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+20),(U+0),4);
}
B6ec77a:{NFSU2_TR(0x6ec77a);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B6ec77c:{NFSU2_TR(0x6ec77c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6ec77e:{NFSU2_TR(0x6ec77e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6ec781:{NFSU2_TR(0x6ec781);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ec784:{NFSU2_TR(0x6ec784);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6ec787:{NFSU2_TR(0x6ec787);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ec78a:{NFSU2_TR(0x6ec78a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ec78d:{NFSU2_TR(0x6ec78d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ec790:{NFSU2_TR(0x6ec790);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ec794:{NFSU2_TR(0x6ec794);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B6ec798:{NFSU2_TR(0x6ec798);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6ec799:{NFSU2_TR(0x6ec799);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B6ec79c:{NFSU2_TR(0x6ec79c);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6ec79e:{NFSU2_TR(0x6ec79e);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ec7a2:{NFSU2_TR(0x6ec7a2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ec770u);}goto L6ec770;}}
}
B6ec7a4:L6ec7a4:{c.instructions+=1;NFSU2_TR(0x6ec7a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6ec7a8:L6ec7a8:{c.instructions+=2;NFSU2_TR(0x6ec7a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ec7ab:{NFSU2_TR(0x6ec7ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ec7ae:L6ec7ae:{c.instructions+=7;NFSU2_TR(0x6ec7ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ec7b1:{NFSU2_TR(0x6ec7b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ec7b5:{NFSU2_TR(0x6ec7b5);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B6ec7b8:{NFSU2_TR(0x6ec7b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B6ec7bb:{NFSU2_TR(0x6ec7bb);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6ec7bd:{NFSU2_TR(0x6ec7bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ec7c1:{NFSU2_TR(0x6ec7c1);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6ec7d1;}}
}
B6ec7c3:L6ec7c3:{c.instructions+=3;NFSU2_TR(0x6ec7c3);
u8 U[2];
__builtin_memmove((U+0),gp(0x811e32),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6ec7ca:{NFSU2_TR(0x6ec7ca);
u8 U[5];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6ec7cf:{NFSU2_TR(0x6ec7cf);
if(r1(R+518)){{goto L6ec7d6;}}
}
B6ec7d1:L6ec7d1:{c.instructions+=1;NFSU2_TR(0x6ec7d1);
u8 U[5];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6ec7d6:L6ec7d6:{c.instructions+=2;NFSU2_TR(0x6ec7d6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ec7d9:{NFSU2_TR(0x6ec7d9);
if(r1(R+518)){{goto L6ec7fd;}}
}
B6ec7db:L6ec7db:{c.instructions+=2;NFSU2_TR(0x6ec7db);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ec7df:{NFSU2_TR(0x6ec7df);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ec7f9;}}
}
B6ec7e1:L6ec7e1:{c.instructions+=3;NFSU2_TR(0x6ec7e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ec7e5:{NFSU2_TR(0x6ec7e5);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ec7e7:{NFSU2_TR(0x6ec7e7);
if(r1(R+518)){{goto L6ec7f9;}}
}
B6ec7e9:L6ec7e9:{c.instructions+=3;NFSU2_TR(0x6ec7e9);
u8 U[5];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6ec7ed:{NFSU2_TR(0x6ec7ed);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6ec7ef:{NFSU2_TR(0x6ec7ef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ec7f9;}}
}
B6ec7f1:L6ec7f1:{c.instructions+=3;NFSU2_TR(0x6ec7f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ec7f5:{NFSU2_TR(0x6ec7f5);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+20))));
}
B6ec7f7:{NFSU2_TR(0x6ec7f7);
{goto L6ec848;}
}
B6ec7f9:L6ec7f9:{c.instructions+=1;NFSU2_TR(0x6ec7f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ec7fd:L6ec7fd:{c.instructions+=5;NFSU2_TR(0x6ec7fd);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6ec800:{NFSU2_TR(0x6ec800);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B6ec802:{NFSU2_TR(0x6ec802);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6ec804:{NFSU2_TR(0x6ec804);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ec808:{NFSU2_TR(0x6ec808);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ec842;}}
}
B6ec80a:L6ec80a:{c.instructions+=2;NFSU2_TR(0x6ec80a);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ec80e:{NFSU2_TR(0x6ec80e);
__builtin_memmove((R+28),(R+28),4);
}
B6ec810:L6ec810:{c.instructions+=5;NFSU2_TR(0x6ec810);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ec813:{NFSU2_TR(0x6ec813);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ec817:{NFSU2_TR(0x6ec817);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+20))));
}
B6ec819:{NFSU2_TR(0x6ec819);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ec81a:{NFSU2_TR(0x6ec81a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ec81full));
TAIL_STATIC(0x6eb800u,6eb);
}
B6ec81f:L6ec81f:{c.instructions+=10;NFSU2_TR(0x6ec81f);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ec823:{NFSU2_TR(0x6ec823);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ec827:{NFSU2_TR(0x6ec827);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x6ull))));
}
B6ec82a:{NFSU2_TR(0x6ec82a);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ec82e:{NFSU2_TR(0x6ec82e);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B6ec832:{NFSU2_TR(0x6ec832);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6ec833:{NFSU2_TR(0x6ec833);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x10ull))));
}
B6ec836:{NFSU2_TR(0x6ec836);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6ec838:{NFSU2_TR(0x6ec838);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ec83c:{NFSU2_TR(0x6ec83c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ec810u);}goto L6ec810;}}
}
B6ec83e:L6ec83e:{c.instructions+=1;NFSU2_TR(0x6ec83e);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ec842:L6ec842:{c.instructions+=2;NFSU2_TR(0x6ec842);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ec846:{NFSU2_TR(0x6ec846);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ec848:L6ec848:{c.instructions+=2;NFSU2_TR(0x6ec848);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ec84a:{NFSU2_TR(0x6ec84a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6ec85d;}}
}
B6ec84c:L6ec84c:{c.instructions+=8;NFSU2_TR(0x6ec84c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6ec84f:{NFSU2_TR(0x6ec84f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ec850:{NFSU2_TR(0x6ec850);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ec851:{NFSU2_TR(0x6ec851);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ec852:{NFSU2_TR(0x6ec852);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ec853:{NFSU2_TR(0x6ec853);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ec854:{NFSU2_TR(0x6ec854);
__builtin_memmove((R+4),(R+24),4);
}
B6ec856:{NFSU2_TR(0x6ec856);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ec85bull));
TAIL_STATIC(0x6eba10u,6eb);
}
B6ec85b:L6ec85b:{c.instructions+=1;NFSU2_TR(0x6ec85b);
{goto L6ec86e;}
}
B6ec85d:L6ec85d:{c.instructions+=1;NFSU2_TR(0x6ec85d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6ec86e;}}
}
B6ec85f:L6ec85f:{c.instructions+=8;NFSU2_TR(0x6ec85f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6ec862:{NFSU2_TR(0x6ec862);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ec863:{NFSU2_TR(0x6ec863);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ec864:{NFSU2_TR(0x6ec864);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ec865:{NFSU2_TR(0x6ec865);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ec866:{NFSU2_TR(0x6ec866);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ec867:{NFSU2_TR(0x6ec867);
__builtin_memmove((R+4),(R+24),4);
}
B6ec869:{NFSU2_TR(0x6ec869);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ec86eull));
TAIL_STATIC(0x6ebac0u,6eb);
}
B6ec86e:L6ec86e:{c.instructions+=4;NFSU2_TR(0x6ec86e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ec871:{NFSU2_TR(0x6ec871);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ec874:{NFSU2_TR(0x6ec874);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ec876:{NFSU2_TR(0x6ec876);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ec895;}}
}
B6ec878:L6ec878:{c.instructions+=6;NFSU2_TR(0x6ec878);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6ec87c:{NFSU2_TR(0x6ec87c);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ec880:{NFSU2_TR(0x6ec880);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B6ec882:{NFSU2_TR(0x6ec882);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6ec884:{NFSU2_TR(0x6ec884);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6ec887:{NFSU2_TR(0x6ec887);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6ec998;}}
}
B6ec88d:L6ec88d:{c.instructions+=3;NFSU2_TR(0x6ec88d);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ec891:{NFSU2_TR(0x6ec891);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B6ec893:{NFSU2_TR(0x6ec893);
{goto L6ec8f7;}
}
B6ec895:L6ec895:{c.instructions+=2;NFSU2_TR(0x6ec895);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ec897:{NFSU2_TR(0x6ec897);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ec8c3;}}
}
B6ec899:L6ec899:{c.instructions+=5;NFSU2_TR(0x6ec899);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ec89d:{NFSU2_TR(0x6ec89d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6ec8a3:{NFSU2_TR(0x6ec8a3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6ec8a5:{NFSU2_TR(0x6ec8a5);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6ec8a8:{NFSU2_TR(0x6ec8a8);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6ec99a;}}
}
B6ec8ae:L6ec8ae:{c.instructions+=6;NFSU2_TR(0x6ec8ae);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+8,u32(r2(U+0)));
}
B6ec8b1:{NFSU2_TR(0x6ec8b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ec8b5:{NFSU2_TR(0x6ec8b5);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6ec8b9:{NFSU2_TR(0x6ec8b9);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B6ec8bd:{NFSU2_TR(0x6ec8bd);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ec8c1:{NFSU2_TR(0x6ec8c1);
{goto L6ec8fd;}
}
B6ec8c3:L6ec8c3:{c.instructions+=8;NFSU2_TR(0x6ec8c3);
u8 U[14];
w4(U+0,u32(u32(u32(0xfffffffeull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+0,u32(r2(U+12)));
}
B6ec8c8:{NFSU2_TR(0x6ec8c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ec8cc:{NFSU2_TR(0x6ec8cc);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6ec8d0:{NFSU2_TR(0x6ec8d0);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ec8d4:{NFSU2_TR(0x6ec8d4);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B6ec8d6:{NFSU2_TR(0x6ec8d6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6ec8d8:{NFSU2_TR(0x6ec8d8);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6ec8db:{NFSU2_TR(0x6ec8db);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6ec998;}}
}
B6ec8e1:L6ec8e1:{c.instructions+=7;NFSU2_TR(0x6ec8e1);
u8 U[10];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+4,u32(r2(U+8)));
}
B6ec8e5:{NFSU2_TR(0x6ec8e5);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ec8e9:{NFSU2_TR(0x6ec8e9);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B6ec8eb:{NFSU2_TR(0x6ec8eb);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ec8ef:{NFSU2_TR(0x6ec8ef);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6ec8f3:{NFSU2_TR(0x6ec8f3);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B6ec8f5:{NFSU2_TR(0x6ec8f5);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B6ec8f7:L6ec8f7:{c.instructions+=2;NFSU2_TR(0x6ec8f7);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ec8fb:{NFSU2_TR(0x6ec8fb);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6ec8fd:L6ec8fd:{c.instructions+=4;NFSU2_TR(0x6ec8fd);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6ec901:{NFSU2_TR(0x6ec901);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B6ec902:{NFSU2_TR(0x6ec902);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6ec904:{NFSU2_TR(0x6ec904);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6ec99a;}}
}
B6ec90a:L6ec90a:{c.instructions+=9;NFSU2_TR(0x6ec90a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ec90e:{NFSU2_TR(0x6ec90e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ec912:{NFSU2_TR(0x6ec912);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ec916:{NFSU2_TR(0x6ec916);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ec917:{NFSU2_TR(0x6ec917);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ec918:{NFSU2_TR(0x6ec918);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ec919:{NFSU2_TR(0x6ec919);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ec91a:{NFSU2_TR(0x6ec91a);
__builtin_memmove((R+4),(R+24),4);
}
B6ec91c:{NFSU2_TR(0x6ec91c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ec921ull));
TAIL_STATIC(0x6ebb80u,6eb);
}
B6ec921:L6ec921:{c.instructions+=4;NFSU2_TR(0x6ec921);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6ec924:{NFSU2_TR(0x6ec924);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6ec926:{NFSU2_TR(0x6ec926);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6ec928:{NFSU2_TR(0x6ec928);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ec9e0;}}
}
B6ec92e:L6ec92e:{c.instructions+=1;NFSU2_TR(0x6ec92e);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B6ec930:L6ec930:{c.instructions+=35;NFSU2_TR(0x6ec930);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ec934:{NFSU2_TR(0x6ec934);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+4,u32(r1(U+8)));
}
B6ec938:{NFSU2_TR(0x6ec938);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ec93c:{NFSU2_TR(0x6ec93c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ec93f:{NFSU2_TR(0x6ec93f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6ec942:{NFSU2_TR(0x6ec942);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6ec945:{NFSU2_TR(0x6ec945);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B6ec947:{NFSU2_TR(0x6ec947);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ec94a:{NFSU2_TR(0x6ec94a);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+20))));
}
B6ec94c:{NFSU2_TR(0x6ec94c);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+20))));
}
B6ec94e:{NFSU2_TR(0x6ec94e);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6ec94f:{NFSU2_TR(0x6ec94f);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x10ull))));
}
B6ec952:{NFSU2_TR(0x6ec952);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ec954:{NFSU2_TR(0x6ec954);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6ec956:{NFSU2_TR(0x6ec956);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ec95a:{NFSU2_TR(0x6ec95a);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ec95c:{NFSU2_TR(0x6ec95c);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ec95e:{NFSU2_TR(0x6ec95e);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ec961:{NFSU2_TR(0x6ec961);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6ec964:{NFSU2_TR(0x6ec964);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ec968:{NFSU2_TR(0x6ec968);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ec96b:{NFSU2_TR(0x6ec96b);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ec96e:{NFSU2_TR(0x6ec96e);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ec971:{NFSU2_TR(0x6ec971);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6ec974:{NFSU2_TR(0x6ec974);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ec978:{NFSU2_TR(0x6ec978);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ec97b:{NFSU2_TR(0x6ec97b);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ec97e:{NFSU2_TR(0x6ec97e);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ec981:{NFSU2_TR(0x6ec981);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6ec984:{NFSU2_TR(0x6ec984);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ec988:{NFSU2_TR(0x6ec988);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ec98b:{NFSU2_TR(0x6ec98b);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ec98e:{NFSU2_TR(0x6ec98e);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B6ec992:{NFSU2_TR(0x6ec992);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6ec994:{NFSU2_TR(0x6ec994);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ec930u);}goto L6ec930;}}
}
B6ec996:L6ec996:{c.instructions+=1;NFSU2_TR(0x6ec996);
{goto L6ec9e0;}
}
B6ec998:L6ec998:{c.instructions+=1;NFSU2_TR(0x6ec998);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6ec99a:L6ec99a:{c.instructions+=4;NFSU2_TR(0x6ec99a);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6ec99d:{NFSU2_TR(0x6ec99d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ec99f:{NFSU2_TR(0x6ec99f);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6ec9a1:{NFSU2_TR(0x6ec9a1);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ec9e0;}}
}
B6ec9a3:L6ec9a3:{c.instructions+=1;NFSU2_TR(0x6ec9a3);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6ec9a5:L6ec9a5:{c.instructions+=21;NFSU2_TR(0x6ec9a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ec9a9:{NFSU2_TR(0x6ec9a9);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+4,u32(r1(U+8)));
}
B6ec9ad:{NFSU2_TR(0x6ec9ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6ec9b0:{NFSU2_TR(0x6ec9b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6ec9b4:{NFSU2_TR(0x6ec9b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6ec9b7:{NFSU2_TR(0x6ec9b7);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6ec9ba:{NFSU2_TR(0x6ec9ba);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+20))));
}
B6ec9bc:{NFSU2_TR(0x6ec9bc);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+8))));
}
B6ec9be:{NFSU2_TR(0x6ec9be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+20),(U+0),4);
}
B6ec9c0:{NFSU2_TR(0x6ec9c0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6ec9c2:{NFSU2_TR(0x6ec9c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6ec9c5:{NFSU2_TR(0x6ec9c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ec9c8:{NFSU2_TR(0x6ec9c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6ec9cb:{NFSU2_TR(0x6ec9cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ec9ce:{NFSU2_TR(0x6ec9ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6ec9d1:{NFSU2_TR(0x6ec9d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ec9d4:{NFSU2_TR(0x6ec9d4);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B6ec9d8:{NFSU2_TR(0x6ec9d8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6ec9d9:{NFSU2_TR(0x6ec9d9);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x10ull))));
}
B6ec9dc:{NFSU2_TR(0x6ec9dc);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6ec9de:{NFSU2_TR(0x6ec9de);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ec9a5u);}goto L6ec9a5;}}
}
B6ec9e0:L6ec9e0:{c.instructions+=3;NFSU2_TR(0x6ec9e0);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6ec9e3:{NFSU2_TR(0x6ec9e3);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6ec9e5:{NFSU2_TR(0x6ec9e5);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6eca1a;}}
}
B6ec9e7:L6ec9e7:{c.instructions+=3;NFSU2_TR(0x6ec9e7);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6ec9e9:{NFSU2_TR(0x6ec9e9);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6ec9eb:{NFSU2_TR(0x6ec9eb);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6eca1a;}}
}
B6ec9ed:L6ec9ed:{c.instructions+=2;NFSU2_TR(0x6ec9ed);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B6ec9ef:{NFSU2_TR(0x6ec9ef);
}
B6ec9f0:L6ec9f0:{c.instructions+=10;NFSU2_TR(0x6ec9f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ec9f3:{NFSU2_TR(0x6ec9f3);
u8 U[9];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(r1(U+8)));
}
B6ec9f7:{NFSU2_TR(0x6ec9f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ec9fb:{NFSU2_TR(0x6ec9fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ec9fe:{NFSU2_TR(0x6ec9fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6eca01:{NFSU2_TR(0x6eca01);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6eca04:{NFSU2_TR(0x6eca04);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B6eca06:{NFSU2_TR(0x6eca06);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eca07:{NFSU2_TR(0x6eca07);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+20))));
}
B6eca09:{NFSU2_TR(0x6eca09);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6eca0eull));
TAIL_STATIC(0x6eb800u,6eb);
}
B6eca0e:L6eca0e:{c.instructions+=5;NFSU2_TR(0x6eca0e);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B6eca12:{NFSU2_TR(0x6eca12);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6eca13:{NFSU2_TR(0x6eca13);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x6ull))));
}
B6eca16:{NFSU2_TR(0x6eca16);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6eca18:{NFSU2_TR(0x6eca18);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ec9f0u);}goto L6ec9f0;}}
}
B6eca1a:L6eca1a:{c.instructions+=7;NFSU2_TR(0x6eca1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6eca1b:{NFSU2_TR(0x6eca1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6eca1c:{NFSU2_TR(0x6eca1c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6eca1d:{NFSU2_TR(0x6eca1d);
w1(R+0,u8(0x1ull));
}
B6eca1f:{NFSU2_TR(0x6eca1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6eca20:{NFSU2_TR(0x6eca20);
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
B6eca23:{NFSU2_TR(0x6eca23);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6eca26:L6eca26:{c.instructions+=7;NFSU2_TR(0x6eca26);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6eca2a:{NFSU2_TR(0x6eca2a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eca2b:{NFSU2_TR(0x6eca2b);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6eca2f:{NFSU2_TR(0x6eca2f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eca30:{NFSU2_TR(0x6eca30);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eca31:{NFSU2_TR(0x6eca31);
__builtin_memmove((R+4),(R+24),4);
}
B6eca33:{NFSU2_TR(0x6eca33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6eca38ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ec1b0u);}goto L6ec1b0;}
}
B6eca38:L6eca38:{c.instructions+=4;NFSU2_TR(0x6eca38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6eca39:{NFSU2_TR(0x6eca39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6eca3a:{NFSU2_TR(0x6eca3a);
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
B6eca3d:{NFSU2_TR(0x6eca3d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6eca40:L6eca40:{c.instructions+=40;NFSU2_TR(0x6eca40);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eca41:{NFSU2_TR(0x6eca41);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+0,u32(r2(U+0)));
}
B6eca44:{NFSU2_TR(0x6eca44);
{u32 ea_=u32(u32(8134472u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eca4a:{NFSU2_TR(0x6eca4a);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B6eca4c:{NFSU2_TR(0x6eca4c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B6eca50:{NFSU2_TR(0x6eca50);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6eca54:{NFSU2_TR(0x6eca54);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6eca58:{NFSU2_TR(0x6eca58);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B6eca5a:{NFSU2_TR(0x6eca5a);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6eca60:{NFSU2_TR(0x6eca60);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eca62:{NFSU2_TR(0x6eca62);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6eca66:{NFSU2_TR(0x6eca66);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eca6a:{NFSU2_TR(0x6eca6a);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6eca6e:{NFSU2_TR(0x6eca6e);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B6eca70:{NFSU2_TR(0x6eca70);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6eca76:{NFSU2_TR(0x6eca76);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eca79:{NFSU2_TR(0x6eca79);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6eca7d:{NFSU2_TR(0x6eca7d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eca81:{NFSU2_TR(0x6eca81);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6eca85:{NFSU2_TR(0x6eca85);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B6eca87:{NFSU2_TR(0x6eca87);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6eca8d:{NFSU2_TR(0x6eca8d);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eca90:{NFSU2_TR(0x6eca90);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6eca94:{NFSU2_TR(0x6eca94);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eca98:{NFSU2_TR(0x6eca98);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6eca9c:{NFSU2_TR(0x6eca9c);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B6eca9e:{NFSU2_TR(0x6eca9e);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ecaa1:{NFSU2_TR(0x6ecaa1);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6ecaa5:{NFSU2_TR(0x6ecaa5);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ecaa9:{NFSU2_TR(0x6ecaa9);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6ecaad:{NFSU2_TR(0x6ecaad);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B6ecaaf:{NFSU2_TR(0x6ecaaf);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ecab2:{NFSU2_TR(0x6ecab2);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6ecab6:{NFSU2_TR(0x6ecab6);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ecaba:{NFSU2_TR(0x6ecaba);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6ecabe:{NFSU2_TR(0x6ecabe);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B6ecac0:{NFSU2_TR(0x6ecac0);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ecac3:{NFSU2_TR(0x6ecac3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6ecac5:{NFSU2_TR(0x6ecac5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ecac6:{NFSU2_TR(0x6ecac6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ecad0:L6ecad0:{c.instructions+=19;NFSU2_TR(0x6ecad0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ecad4:{NFSU2_TR(0x6ecad4);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ecad7:{NFSU2_TR(0x6ecad7);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ecada:{NFSU2_TR(0x6ecada);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ecadc:{NFSU2_TR(0x6ecadc);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B6ecade:{NFSU2_TR(0x6ecade);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B6ecae0:{NFSU2_TR(0x6ecae0);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B6ecae2:{NFSU2_TR(0x6ecae2);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B6ecae4:{NFSU2_TR(0x6ecae4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6ecae6:{NFSU2_TR(0x6ecae6);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B6ecae8:{NFSU2_TR(0x6ecae8);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B6ecaea:{NFSU2_TR(0x6ecaea);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6ecaec:{NFSU2_TR(0x6ecaec);
__asm__ volatile(".byte 0xdd,0xdb":::"memory");
}
B6ecaee:{NFSU2_TR(0x6ecaee);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6ecaf0:{NFSU2_TR(0x6ecaf0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6ecaf2:{NFSU2_TR(0x6ecaf2);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B6ecaf8:{NFSU2_TR(0x6ecaf8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6ecafa:{NFSU2_TR(0x6ecafa);
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
B6ecafd:{NFSU2_TR(0x6ecafd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ecb23;}}
}
B6ecaff:L6ecaff:{c.instructions+=12;NFSU2_TR(0x6ecaff);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B6ecb01:{NFSU2_TR(0x6ecb01);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ecb08:{NFSU2_TR(0x6ecb08);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B6ecb0e:{NFSU2_TR(0x6ecb0e);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B6ecb10:{NFSU2_TR(0x6ecb10);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ecb12:{NFSU2_TR(0x6ecb12);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ecb14:{NFSU2_TR(0x6ecb14);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B6ecb16:{NFSU2_TR(0x6ecb16);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ecb19:{NFSU2_TR(0x6ecb19);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ecb1c:{NFSU2_TR(0x6ecb1c);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ecb1f:{NFSU2_TR(0x6ecb1f);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ecb22:{NFSU2_TR(0x6ecb22);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ecb23:L6ecb23:{c.instructions+=6;NFSU2_TR(0x6ecb23);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B6ecb29:{NFSU2_TR(0x6ecb29);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ecb2d:{NFSU2_TR(0x6ecb2d);
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
B6ecb2f:{NFSU2_TR(0x6ecb2f);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B6ecb31:{NFSU2_TR(0x6ecb31);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B6ecb34:{NFSU2_TR(0x6ecb34);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6ecb3c;}}
}
B6ecb36:L6ecb36:{c.instructions+=3;NFSU2_TR(0x6ecb36);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6ecb38:{NFSU2_TR(0x6ecb38);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ecb3b:{NFSU2_TR(0x6ecb3b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ecb3c:L6ecb3c:{c.instructions+=2;NFSU2_TR(0x6ecb3c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6ecb3e:{NFSU2_TR(0x6ecb3e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ecb40:L6ecb40:{c.instructions+=33;NFSU2_TR(0x6ecb40);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ecb41:{NFSU2_TR(0x6ecb41);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
__builtin_memmove((R+0),(U+0),2);
}
B6ecb44:{NFSU2_TR(0x6ecb44);
{u32 ea_=u32(u32(8134472u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ecb4a:{NFSU2_TR(0x6ecb4a);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B6ecb4c:{NFSU2_TR(0x6ecb4c);
w2(R+0,shr<u16>(r2(R+0),u64(u32(0x1ull))));
}
B6ecb4f:{NFSU2_TR(0x6ecb4f);
w4(R+8,u32(r2(R+0)));
}
B6ecb52:{NFSU2_TR(0x6ecb52);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ecb56:{NFSU2_TR(0x6ecb56);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+16)),r4(U+0));
}
B6ecb5a:{NFSU2_TR(0x6ecb5a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ecb5b:{NFSU2_TR(0x6ecb5b);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6ecb5f:{NFSU2_TR(0x6ecb5f);
{u32 ea_=u32(u32(8134468u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ecb65:{NFSU2_TR(0x6ecb65);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B6ecb67:{NFSU2_TR(0x6ecb67);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B6ecb69:{NFSU2_TR(0x6ecb69);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6ecb6f:{NFSU2_TR(0x6ecb6f);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ecb71:{NFSU2_TR(0x6ecb71);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6ecb75:{NFSU2_TR(0x6ecb75);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ecb79:{NFSU2_TR(0x6ecb79);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6ecb7d:{NFSU2_TR(0x6ecb7d);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B6ecb7f:{NFSU2_TR(0x6ecb7f);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6ecb85:{NFSU2_TR(0x6ecb85);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ecb88:{NFSU2_TR(0x6ecb88);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6ecb8c:{NFSU2_TR(0x6ecb8c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ecb90:{NFSU2_TR(0x6ecb90);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6ecb94:{NFSU2_TR(0x6ecb94);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B6ecb96:{NFSU2_TR(0x6ecb96);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6ecb9c:{NFSU2_TR(0x6ecb9c);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ecb9f:{NFSU2_TR(0x6ecb9f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ecba1:{NFSU2_TR(0x6ecba1);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+0),(U+0),1);
}
B6ecba3:{NFSU2_TR(0x6ecba3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6ecba5:{NFSU2_TR(0x6ecba5);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1ull))));
}
B6ecba8:{NFSU2_TR(0x6ecba8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ecba9:{NFSU2_TR(0x6ecba9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ecbaeull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ecad0u);}goto L6ecad0;}
}
B6ecbae:L6ecbae:{c.instructions+=2;NFSU2_TR(0x6ecbae);
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
B6ecbb1:{NFSU2_TR(0x6ecbb1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ecbc0:L6ecbc0:{c.instructions+=22;NFSU2_TR(0x6ecbc0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ecbc1:{NFSU2_TR(0x6ecbc1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ecbc2:{NFSU2_TR(0x6ecbc2);
__builtin_memmove((R+24),(R+4),4);
}
B6ecbc4:{NFSU2_TR(0x6ecbc4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6ecbc7:{NFSU2_TR(0x6ecbc7);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6ecbcb:{NFSU2_TR(0x6ecbcb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ecbcc:{NFSU2_TR(0x6ecbcc);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B6ecbd0:{NFSU2_TR(0x6ecbd0);
w4(R+28,u32(0x1ull));
}
B6ecbd5:{NFSU2_TR(0x6ecbd5);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r1(U+0))));
}
B6ecbd7:{NFSU2_TR(0x6ecbd7);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6ecbd9:{NFSU2_TR(0x6ecbd9);
u8 U[56];
w8(U+0,u64(r4(R+28)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6ecbd9);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6ecbd9);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B6ecbdb:{NFSU2_TR(0x6ecbdb);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ecbde:{NFSU2_TR(0x6ecbde);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B6ecbe1:{NFSU2_TR(0x6ecbe1);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B6ecbe5:{NFSU2_TR(0x6ecbe5);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffffeull))));
}
B6ecbe8:{NFSU2_TR(0x6ecbe8);
__builtin_memmove((R+28),(R+24),4);
}
B6ecbea:{NFSU2_TR(0x6ecbea);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B6ecbed:{NFSU2_TR(0x6ecbed);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B6ecbef:{NFSU2_TR(0x6ecbef);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ecbf1:{NFSU2_TR(0x6ecbf1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6ecbf4:{NFSU2_TR(0x6ecbf4);
u8 U[12];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B6ecbf8:{NFSU2_TR(0x6ecbf8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6ecc05;}}
}
B6ecbfa:L6ecbfa:{c.instructions+=4;NFSU2_TR(0x6ecbfa);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ecbfd:{NFSU2_TR(0x6ecbfd);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6ecc00:{NFSU2_TR(0x6ecc00);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B6ecc02:{NFSU2_TR(0x6ecc02);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6ecc05:L6ecc05:{c.instructions+=7;NFSU2_TR(0x6ecc05);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B6ecc09:{NFSU2_TR(0x6ecc09);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ecc0a:{NFSU2_TR(0x6ecc0a);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6ecc0e:{NFSU2_TR(0x6ecc0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ecc0f:{NFSU2_TR(0x6ecc0f);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffffeull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6ecc12:{NFSU2_TR(0x6ecc12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6ecc13:{NFSU2_TR(0x6ecc13);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ecc20:L6ecc20:{c.instructions+=3;NFSU2_TR(0x6ecc20);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ecc21:{NFSU2_TR(0x6ecc21);
__builtin_memmove((R+24),(R+4),4);
}
B6ecc23:{NFSU2_TR(0x6ecc23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ecc28ull));
TAIL_STATIC(0x6e3ed0u,6e3);
}
B6ecc28:L6ecc28:{c.instructions+=15;NFSU2_TR(0x6ecc28);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ecc2a:{NFSU2_TR(0x6ecc2a);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6ecc2d:{NFSU2_TR(0x6ecc2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ecc30:{NFSU2_TR(0x6ecc30);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ecc33:{NFSU2_TR(0x6ecc33);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ecc36:{NFSU2_TR(0x6ecc36);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ecc39:{NFSU2_TR(0x6ecc39);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ecc3c:{NFSU2_TR(0x6ecc3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ecc3f:{NFSU2_TR(0x6ecc3f);
u8 U[4];
w4(U+0,u32(0x7c1f50ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6ecc45:{NFSU2_TR(0x6ecc45);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ecc48:{NFSU2_TR(0x6ecc48);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ecc4b:{NFSU2_TR(0x6ecc4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x11ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ecc52:{NFSU2_TR(0x6ecc52);
__builtin_memmove((R+0),(R+24),4);
}
B6ecc54:{NFSU2_TR(0x6ecc54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ecc55:{NFSU2_TR(0x6ecc55);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ecc60:L6ecc60:{c.instructions+=7;NFSU2_TR(0x6ecc60);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ecc64:{NFSU2_TR(0x6ecc64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ecc66:{NFSU2_TR(0x6ecc66);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ecc67:{NFSU2_TR(0x6ecc67);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ecc6b:{NFSU2_TR(0x6ecc6b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ecc6d:{NFSU2_TR(0x6ecc6d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ecc6e:{NFSU2_TR(0x6ecc6e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ecc71ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6ecc71:L6ecc71:{c.instructions+=1;NFSU2_TR(0x6ecc71);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ecc80:L6ecc80:{c.instructions+=55;NFSU2_TR(0x6ecc80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B6ecc83:{NFSU2_TR(0x6ecc83);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ecc85:{NFSU2_TR(0x6ecc85);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6ecc87:{NFSU2_TR(0x6ecc87);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ecc8b:{NFSU2_TR(0x6ecc8b);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ecc8d:{NFSU2_TR(0x6ecc8d);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ecc90:{NFSU2_TR(0x6ecc90);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6ecc93:{NFSU2_TR(0x6ecc93);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ecc97:{NFSU2_TR(0x6ecc97);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ecc9a:{NFSU2_TR(0x6ecc9a);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ecc9d:{NFSU2_TR(0x6ecc9d);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6ecca0:{NFSU2_TR(0x6ecca0);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ecca4:{NFSU2_TR(0x6ecca4);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ecca7:{NFSU2_TR(0x6ecca7);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eccab:{NFSU2_TR(0x6eccab);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eccae:{NFSU2_TR(0x6eccae);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6eccb1:{NFSU2_TR(0x6eccb1);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eccb5:{NFSU2_TR(0x6eccb5);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6eccb8:{NFSU2_TR(0x6eccb8);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B6eccbc:{NFSU2_TR(0x6eccbc);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eccc0:{NFSU2_TR(0x6eccc0);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eccc4:{NFSU2_TR(0x6eccc4);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eccc8:{NFSU2_TR(0x6eccc8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6eccca:{NFSU2_TR(0x6eccca);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B6ecccc:{NFSU2_TR(0x6ecccc);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B6eccce:{NFSU2_TR(0x6eccce);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6eccd0:{NFSU2_TR(0x6eccd0);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B6eccd2:{NFSU2_TR(0x6eccd2);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B6eccd4:{NFSU2_TR(0x6eccd4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6eccd6:{NFSU2_TR(0x6eccd6);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B6eccd8:{NFSU2_TR(0x6eccd8);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B6eccde:{NFSU2_TR(0x6eccde);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B6ecce2:{NFSU2_TR(0x6ecce2);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B6ecce4:{NFSU2_TR(0x6ecce4);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ecce8:{NFSU2_TR(0x6ecce8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6eccec:{NFSU2_TR(0x6eccec);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eccf0:{NFSU2_TR(0x6eccf0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6eccf2:{NFSU2_TR(0x6eccf2);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B6eccf4:{NFSU2_TR(0x6eccf4);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eccf8:{NFSU2_TR(0x6eccf8);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6eccfc:{NFSU2_TR(0x6eccfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eccff:{NFSU2_TR(0x6eccff);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6ecd01:{NFSU2_TR(0x6ecd01);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6ecd03:{NFSU2_TR(0x6ecd03);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ecd07:{NFSU2_TR(0x6ecd07);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ecd0b:{NFSU2_TR(0x6ecd0b);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ecd0f:{NFSU2_TR(0x6ecd0f);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ecd13:{NFSU2_TR(0x6ecd13);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ecd17:{NFSU2_TR(0x6ecd17);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ecd1a:{NFSU2_TR(0x6ecd1a);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ecd1e:{NFSU2_TR(0x6ecd1e);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ecd22:{NFSU2_TR(0x6ecd22);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ecd26:{NFSU2_TR(0x6ecd26);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ecd29:{NFSU2_TR(0x6ecd29);
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
B6ecd2c:{NFSU2_TR(0x6ecd2c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ecd30:L6ecd30:{c.instructions+=30;NFSU2_TR(0x6ecd30);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ecd31:{NFSU2_TR(0x6ecd31);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ecd32:{NFSU2_TR(0x6ecd32);
__builtin_memmove((R+24),(R+4),4);
}
B6ecd34:{NFSU2_TR(0x6ecd34);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ecd38:{NFSU2_TR(0x6ecd38);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ecd3b:{NFSU2_TR(0x6ecd3b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6ecd3d:{NFSU2_TR(0x6ecd3d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B6ecd41:{NFSU2_TR(0x6ecd41);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6ecd44:{NFSU2_TR(0x6ecd44);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ecd48:{NFSU2_TR(0x6ecd48);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6ecd4b:{NFSU2_TR(0x6ecd4b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6ecd4d:{NFSU2_TR(0x6ecd4d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6ecd50:{NFSU2_TR(0x6ecd50);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6ecd54:{NFSU2_TR(0x6ecd54);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ecd55:{NFSU2_TR(0x6ecd55);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B6ecd59:{NFSU2_TR(0x6ecd59);
w4(R+28,u32(0x1ull));
}
B6ecd5e:{NFSU2_TR(0x6ecd5e);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r1(U+0))));
}
B6ecd60:{NFSU2_TR(0x6ecd60);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6ecd62:{NFSU2_TR(0x6ecd62);
u8 U[56];
w8(U+0,u64(r4(R+28)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6ecd62);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6ecd62);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B6ecd64:{NFSU2_TR(0x6ecd64);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ecd67:{NFSU2_TR(0x6ecd67);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B6ecd6a:{NFSU2_TR(0x6ecd6a);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B6ecd6e:{NFSU2_TR(0x6ecd6e);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffffeull))));
}
B6ecd71:{NFSU2_TR(0x6ecd71);
__builtin_memmove((R+28),(R+24),4);
}
B6ecd73:{NFSU2_TR(0x6ecd73);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B6ecd76:{NFSU2_TR(0x6ecd76);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B6ecd78:{NFSU2_TR(0x6ecd78);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ecd7a:{NFSU2_TR(0x6ecd7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6ecd7d:{NFSU2_TR(0x6ecd7d);
u8 U[12];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B6ecd81:{NFSU2_TR(0x6ecd81);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6ecd8e;}}
}
B6ecd83:L6ecd83:{c.instructions+=4;NFSU2_TR(0x6ecd83);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ecd86:{NFSU2_TR(0x6ecd86);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6ecd89:{NFSU2_TR(0x6ecd89);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B6ecd8b:{NFSU2_TR(0x6ecd8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6ecd8e:L6ecd8e:{c.instructions+=4;NFSU2_TR(0x6ecd8e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ecd92:{NFSU2_TR(0x6ecd92);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6ecd94:{NFSU2_TR(0x6ecd94);
__builtin_memmove((R+4),(R+24),4);
}
B6ecd96:{NFSU2_TR(0x6ecd96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ecd9bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ecbc0u);}goto L6ecbc0;}
}
B6ecd9b:L6ecd9b:{c.instructions+=6;NFSU2_TR(0x6ecd9b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ecd9f:{NFSU2_TR(0x6ecd9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ecda0:{NFSU2_TR(0x6ecda0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ecda1:{NFSU2_TR(0x6ecda1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6ecda3:{NFSU2_TR(0x6ecda3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6ecda4:{NFSU2_TR(0x6ecda4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ecdb0:L6ecdb0:{c.instructions+=6;NFSU2_TR(0x6ecdb0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ecdb1:{NFSU2_TR(0x6ecdb1);
__builtin_memmove((R+24),(R+4),4);
}
B6ecdb3:{NFSU2_TR(0x6ecdb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ecdb6:{NFSU2_TR(0x6ecdb6);
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
B6ecdb8:{NFSU2_TR(0x6ecdb8);
u8 U[4];
w4(U+0,u32(0x7c1f50ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6ecdbe:{NFSU2_TR(0x6ecdbe);
if(r1(R+518)){{goto L6ecdcc;}}
}
B6ecdc0:L6ecdc0:{c.instructions+=4;NFSU2_TR(0x6ecdc0);
__builtin_memmove((R+4),gp(0x8ab294),4);
}
B6ecdc6:{NFSU2_TR(0x6ecdc6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6ecdc8:{NFSU2_TR(0x6ecdc8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ecdc9:{NFSU2_TR(0x6ecdc9);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ecdccull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6ecdcc:L6ecdcc:{c.instructions+=2;NFSU2_TR(0x6ecdcc);
__builtin_memmove((R+4),(R+24),4);
}
B6ecdce:{NFSU2_TR(0x6ecdce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ecdd3ull));
TAIL_STATIC(0x6e3ef0u,6e3);
}
B6ecdd3:L6ecdd3:{c.instructions+=2;NFSU2_TR(0x6ecdd3);
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
B6ecdd8:{NFSU2_TR(0x6ecdd8);
if(r1(R+518)){{goto L6ecde6;}}
}
B6ecdda:L6ecdda:{c.instructions+=3;NFSU2_TR(0x6ecdda);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ecddc:{NFSU2_TR(0x6ecddc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ecddd:{NFSU2_TR(0x6ecddd);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ecde3ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6ecde3:L6ecde3:{c.instructions+=1;NFSU2_TR(0x6ecde3);
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
B6ecde6:L6ecde6:{c.instructions+=3;NFSU2_TR(0x6ecde6);
__builtin_memmove((R+0),(R+24),4);
}
B6ecde8:{NFSU2_TR(0x6ecde8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ecde9:{NFSU2_TR(0x6ecde9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ecdf0:L6ecdf0:{c.instructions+=7;NFSU2_TR(0x6ecdf0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ecdf1:{NFSU2_TR(0x6ecdf1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ecdf2:{NFSU2_TR(0x6ecdf2);
__builtin_memmove((R+24),(R+4),4);
}
B6ecdf4:{NFSU2_TR(0x6ecdf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ecdf7:{NFSU2_TR(0x6ecdf7);
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
B6ecdf9:{NFSU2_TR(0x6ecdf9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ecdfc:{NFSU2_TR(0x6ecdfc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ece5a;}}
}
B6ecdfe:L6ecdfe:{c.instructions+=11;NFSU2_TR(0x6ecdfe);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ecdff:{NFSU2_TR(0x6ecdff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ece02:{NFSU2_TR(0x6ece02);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ece05:{NFSU2_TR(0x6ece05);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ece06:{NFSU2_TR(0x6ece06);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6ece09:{NFSU2_TR(0x6ece09);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ece0a:{NFSU2_TR(0x6ece0a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ece0b:{NFSU2_TR(0x6ece0b);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6ece0f:{NFSU2_TR(0x6ece0f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ece10:{NFSU2_TR(0x6ece10);
__builtin_memmove((R+4),(R+28),4);
}
B6ece12:{NFSU2_TR(0x6ece12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ece17ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ecd30u);}goto L6ecd30;}
}
B6ece17:L6ece17:{c.instructions+=13;NFSU2_TR(0x6ece17);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6ece1a:{NFSU2_TR(0x6ece1a);
w4(R+0,u32(0x1ull));
}
B6ece1f:{NFSU2_TR(0x6ece1f);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B6ece21:{NFSU2_TR(0x6ece21);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B6ece25:{NFSU2_TR(0x6ece25);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6ece26:{NFSU2_TR(0x6ece26);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6ece29:{NFSU2_TR(0x6ece29);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B6ece2d:{NFSU2_TR(0x6ece2d);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffffeull))));
}
B6ece30:{NFSU2_TR(0x6ece30);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ece33:{NFSU2_TR(0x6ece33);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6ece36:{NFSU2_TR(0x6ece36);
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
B6ece38:{NFSU2_TR(0x6ece38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ece39:{NFSU2_TR(0x6ece39);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ece5a;}}
}
B6ece3b:L6ece3b:{c.instructions+=6;NFSU2_TR(0x6ece3b);
__builtin_memmove((R+4),gp(0x8ab294),4);
}
B6ece41:{NFSU2_TR(0x6ece41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6ece43:{NFSU2_TR(0x6ece43);
w4(R+0,u32(r1(R+0)));
}
B6ece46:{NFSU2_TR(0x6ece46);
u8 U[45];
w4(U+37,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+0),4);
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+37))));
w1(U+24,u8((r4(U+37))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+37))-u32(u32(0x1ull))));
w4(U+29,shl<u32>(r4(U+41),u64(r4(U+25))));
w1(U+33,u8(s32(r4(U+29))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+33))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+34,u8((r4(U+37))==(u32(0x1ull))));
w1(U+35,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+0))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B6ece49:{NFSU2_TR(0x6ece49);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ece4a:{NFSU2_TR(0x6ece4a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ece4dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6ece4d:L6ece4d:{c.instructions+=4;NFSU2_TR(0x6ece4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ece50:{NFSU2_TR(0x6ece50);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ece53:{NFSU2_TR(0x6ece53);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ece57:{NFSU2_TR(0x6ece57);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ece5a:L6ece5a:{c.instructions+=3;NFSU2_TR(0x6ece5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ece5b:{NFSU2_TR(0x6ece5b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ece5c:{NFSU2_TR(0x6ece5c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ece60:L6ece60:{c.instructions+=6;NFSU2_TR(0x6ece60);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ece64:{NFSU2_TR(0x6ece64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x50ull))));
}
B6ece67:{NFSU2_TR(0x6ece67);
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
B6ece69:{NFSU2_TR(0x6ece69);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ece6a:{NFSU2_TR(0x6ece6a);
__builtin_memmove((R+24),(R+4),4);
}
B6ece6c:{NFSU2_TR(0x6ece6c);
if(r1(R+518)){{goto L6ece87;}}
}
B6ece6e:L6ece6e:{c.instructions+=8;NFSU2_TR(0x6ece6e);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ece72:{NFSU2_TR(0x6ece72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6ece74:{NFSU2_TR(0x6ece74);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ece75:{NFSU2_TR(0x6ece75);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ece76:{NFSU2_TR(0x6ece76);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ece7a:{NFSU2_TR(0x6ece7a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ece7b:{NFSU2_TR(0x6ece7b);
__builtin_memmove((R+4),(R+24),4);
}
B6ece7d:{NFSU2_TR(0x6ece7d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ece80ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6ece80:L6ece80:{c.instructions+=3;NFSU2_TR(0x6ece80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ece81:{NFSU2_TR(0x6ece81);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x50ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x50ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x50ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6ece84:{NFSU2_TR(0x6ece84);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ece87:L6ece87:{c.instructions+=5;NFSU2_TR(0x6ece87);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ece88:{NFSU2_TR(0x6ece88);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ece89:{NFSU2_TR(0x6ece89);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ece8a:{NFSU2_TR(0x6ece8a);
__builtin_memmove((R+4),(R+24),4);
}
B6ece8c:{NFSU2_TR(0x6ece8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ece91ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ecdf0u);}goto L6ecdf0;}
}
B6ece91:L6ece91:{c.instructions+=4;NFSU2_TR(0x6ece91);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6ece94:{NFSU2_TR(0x6ece94);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6ece97:{NFSU2_TR(0x6ece97);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6ece99:{NFSU2_TR(0x6ece99);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6ed62du,6ed);}
}
B6ece9f:L6ece9f:{c.instructions+=3;NFSU2_TR(0x6ece9f);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ecea3:{NFSU2_TR(0x6ecea3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ecea4:{NFSU2_TR(0x6ecea4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ecea9ull));
TAIL_STATIC(0x6e4900u,6e4);
}
B6ecea9:L6ecea9:{c.instructions+=6;NFSU2_TR(0x6ecea9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6eceac:{NFSU2_TR(0x6eceac);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6eceae:{NFSU2_TR(0x6eceae);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6eceb1:{NFSU2_TR(0x6eceb1);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6eceb3:{NFSU2_TR(0x6eceb3);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eceb7:{NFSU2_TR(0x6eceb7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6eced4;}}
}
B6eceb9:L6eceb9:{c.instructions+=2;NFSU2_TR(0x6eceb9);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6ecebb:{NFSU2_TR(0x6ecebb);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6ecec3;}}
}
B6ecebd:L6ecebd:{c.instructions+=2;NFSU2_TR(0x6ecebd);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ecec1:{NFSU2_TR(0x6ecec1);
{goto L6ecf34;}
}
B6ecec3:L6ecec3:{c.instructions+=3;NFSU2_TR(0x6ecec3);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6ecec7:{NFSU2_TR(0x6ecec7);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6ecec9:{NFSU2_TR(0x6ecec9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6ecece;}}
}
B6ececb:L6ececb:{c.instructions+=2;NFSU2_TR(0x6ececb);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B6ececc:{NFSU2_TR(0x6ececc);
{goto L6ecf30;}
}
B6ecece:L6ecece:{c.instructions+=2;NFSU2_TR(0x6ecece);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eced2:{NFSU2_TR(0x6eced2);
{goto L6ecf34;}
}
B6eced4:L6eced4:{c.instructions+=3;NFSU2_TR(0x6eced4);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
w4(R+4,u32(r2(U+0)));
}
B6eced7:{NFSU2_TR(0x6eced7);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6eced9:{NFSU2_TR(0x6eced9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6ecee1;}}
}
B6ecedb:L6ecedb:{c.instructions+=2;NFSU2_TR(0x6ecedb);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ecedf:{NFSU2_TR(0x6ecedf);
{goto L6ecf34;}
}
B6ecee1:L6ecee1:{c.instructions+=3;NFSU2_TR(0x6ecee1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ecee4:{NFSU2_TR(0x6ecee4);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6ecee7:{NFSU2_TR(0x6ecee7);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6eceed;}}
}
B6ecee9:L6ecee9:{c.instructions+=2;NFSU2_TR(0x6ecee9);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6eceeb:{NFSU2_TR(0x6eceeb);
{goto L6eceee;}
}
B6eceed:L6eceed:{c.instructions+=1;NFSU2_TR(0x6eceed);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B6eceee:L6eceee:{c.instructions+=4;NFSU2_TR(0x6eceee);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+20,u32(r2(U+8)));
}
B6ecef2:{NFSU2_TR(0x6ecef2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ecef4:{NFSU2_TR(0x6ecef4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6ecef7:{NFSU2_TR(0x6ecef7);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6ecf18;}}
}
B6ecef9:L6ecef9:{c.instructions+=4;NFSU2_TR(0x6ecef9);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B6ecefd:{NFSU2_TR(0x6ecefd);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xfffffffeull))));
}
B6ecf00:{NFSU2_TR(0x6ecf00);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6ecf02:{NFSU2_TR(0x6ecf02);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6ecf2f;}}
}
B6ecf04:L6ecf04:{c.instructions+=1;NFSU2_TR(0x6ecf04);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2ull))));
}
B6ecf07:L6ecf07:{c.instructions+=3;NFSU2_TR(0x6ecf07);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
w4(R+20,u32(r2(U+0)));
}
B6ecf0a:{NFSU2_TR(0x6ecf0a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ecf0c:{NFSU2_TR(0x6ecf0c);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6ecf2f;}}
}
B6ecf0e:L6ecf0e:{c.instructions+=4;NFSU2_TR(0x6ecf0e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6ecf0f:{NFSU2_TR(0x6ecf0f);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2ull))));
}
B6ecf12:{NFSU2_TR(0x6ecf12);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6ecf14:{NFSU2_TR(0x6ecf14);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ecf07u);}goto L6ecf07;}}
}
B6ecf16:L6ecf16:{c.instructions+=1;NFSU2_TR(0x6ecf16);
{goto L6ecf2f;}
}
B6ecf18:L6ecf18:{c.instructions+=2;NFSU2_TR(0x6ecf18);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ecf1a:{NFSU2_TR(0x6ecf1a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6ecf2f;}}
}
B6ecf1c:L6ecf1c:{c.instructions+=1;NFSU2_TR(0x6ecf1c);
__builtin_memmove((R+16),(R+16),4);
}
B6ecf20:L6ecf20:{c.instructions+=3;NFSU2_TR(0x6ecf20);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
w4(R+20,u32(r2(U+0)));
}
B6ecf23:{NFSU2_TR(0x6ecf23);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ecf25:{NFSU2_TR(0x6ecf25);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6ecf2f;}}
}
B6ecf27:L6ecf27:{c.instructions+=4;NFSU2_TR(0x6ecf27);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B6ecf28:{NFSU2_TR(0x6ecf28);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x2ull))));
}
B6ecf2b:{NFSU2_TR(0x6ecf2b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ecf2d:{NFSU2_TR(0x6ecf2d);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ecf20u);}goto L6ecf20;}}
}
B6ecf2f:L6ecf2f:{c.instructions+=1;NFSU2_TR(0x6ecf2f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6ecf30:L6ecf30:{c.instructions+=1;NFSU2_TR(0x6ecf30);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ecf34:L6ecf34:{c.instructions+=29;NFSU2_TR(0x6ecf34);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B6ecf38:{NFSU2_TR(0x6ecf38);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ecf3c:{NFSU2_TR(0x6ecf3c);
w4(R+4,u32(0x1full));
}
B6ecf41:{NFSU2_TR(0x6ecf41);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+28))));
}
B6ecf43:{NFSU2_TR(0x6ecf43);
w4(R+20,u32(0x7fffffffull));
}
B6ecf48:{NFSU2_TR(0x6ecf48);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+20,shr<u32>(r4(R+20),u64(r1(U+0))));
}
B6ecf4a:{NFSU2_TR(0x6ecf4a);
__builtin_memmove((R+4),(R+28),4);
}
B6ecf4c:{NFSU2_TR(0x6ecf4c);
__builtin_memmove((R+8),(R+0),4);
}
B6ecf4e:{NFSU2_TR(0x6ecf4e);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r1(U+0))));
}
B6ecf50:{NFSU2_TR(0x6ecf50);
__builtin_memmove((R+4),(R+20),4);
}
B6ecf52:{NFSU2_TR(0x6ecf52);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+0))));
}
B6ecf54:{NFSU2_TR(0x6ecf54);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ecf57:{NFSU2_TR(0x6ecf57);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ecf5b:{NFSU2_TR(0x6ecf5b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ecf5f:{NFSU2_TR(0x6ecf5f);
__builtin_memmove((R+4),(R+28),4);
}
B6ecf61:{NFSU2_TR(0x6ecf61);
__builtin_memmove((R+28),(R+0),4);
}
B6ecf63:{NFSU2_TR(0x6ecf63);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+28,sar<u32>(r4(R+28),u64(r1(U+0))));
}
B6ecf65:{NFSU2_TR(0x6ecf65);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ecf69:{NFSU2_TR(0x6ecf69);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ecf6d:{NFSU2_TR(0x6ecf6d);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ecf71:{NFSU2_TR(0x6ecf71);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ecf75:{NFSU2_TR(0x6ecf75);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ecf78:{NFSU2_TR(0x6ecf78);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B6ecf7b:{NFSU2_TR(0x6ecf7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B6ecf7e:{NFSU2_TR(0x6ecf7e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6ecf80:{NFSU2_TR(0x6ecf80);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ecf83:{NFSU2_TR(0x6ecf83);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ecf87:{NFSU2_TR(0x6ecf87);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ecf8b:{NFSU2_TR(0x6ecf8b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6ecf9b;}}
}
B6ecf8d:L6ecf8d:{c.instructions+=3;NFSU2_TR(0x6ecf8d);
__builtin_memmove((R+4),gp(0x811e32),1);
}
B6ecf93:{NFSU2_TR(0x6ecf93);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6ecf95:{NFSU2_TR(0x6ecf95);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ecf9b;}}
}
B6ecf97:L6ecf97:{c.instructions+=2;NFSU2_TR(0x6ecf97);
w1(R+4,u8(0x1ull));
}
B6ecf99:{NFSU2_TR(0x6ecf99);
{goto L6ecf9d;}
}
B6ecf9b:L6ecf9b:{c.instructions+=1;NFSU2_TR(0x6ecf9b);
w1(R+4,u8(u32(r1(R+4))^u32(r1(R+4))));
}
B6ecf9d:L6ecf9d:{c.instructions+=2;NFSU2_TR(0x6ecf9d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ecfa0:{NFSU2_TR(0x6ecfa0);
if(r1(R+518)){{goto L6ecfc2;}}
}
B6ecfa2:L6ecfa2:{c.instructions+=3;NFSU2_TR(0x6ecfa2);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ecfa6:{NFSU2_TR(0x6ecfa6);
u8 U[16];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ecfaa:{NFSU2_TR(0x6ecfaa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ecfc2;}}
}
B6ecfac:L6ecfac:{c.instructions+=3;NFSU2_TR(0x6ecfac);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ecfb0:{NFSU2_TR(0x6ecfb0);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ecfb2:{NFSU2_TR(0x6ecfb2);
if(r1(R+518)){{goto L6ecfc2;}}
}
B6ecfb4:L6ecfb4:{c.instructions+=2;NFSU2_TR(0x6ecfb4);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6ecfb6:{NFSU2_TR(0x6ecfb6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ecfc2;}}
}
B6ecfb8:L6ecfb8:{c.instructions+=4;NFSU2_TR(0x6ecfb8);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ecfbc:{NFSU2_TR(0x6ecfbc);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+20))));
}
B6ecfbe:{NFSU2_TR(0x6ecfbe);
__builtin_memmove((R+4),(R+0),4);
}
B6ecfc0:{NFSU2_TR(0x6ecfc0);
TAIL_STATIC(0x6ed00bu,6ed);
}
B6ecfc2:L6ecfc2:{c.instructions+=4;NFSU2_TR(0x6ecfc2);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6ecfc5:{NFSU2_TR(0x6ecfc5);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6ecfc7:{NFSU2_TR(0x6ecfc7);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ecfcf:{NFSU2_TR(0x6ecfcf);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6ed005u,6ed);}
}
B6ecfd1:L6ecfd1:{c.instructions+=7;NFSU2_TR(0x6ecfd1);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B6ecfd3:{NFSU2_TR(0x6ecfd3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ecfd7:{NFSU2_TR(0x6ecfd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ecfda:{NFSU2_TR(0x6ecfda);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ecfde:{NFSU2_TR(0x6ecfde);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+20))));
}
B6ecfe0:{NFSU2_TR(0x6ecfe0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ecfe1:{NFSU2_TR(0x6ecfe1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ecfe6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ecb40u);}goto L6ecb40;}
}
B6ecfe6:L6ecfe6:{c.instructions+=9;NFSU2_TR(0x6ecfe6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ecfea:{NFSU2_TR(0x6ecfea);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ecfee:{NFSU2_TR(0x6ecfee);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x6ull))));
}
B6ecff1:{NFSU2_TR(0x6ecff1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ecff5:{NFSU2_TR(0x6ecff5);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B6ecff9:{NFSU2_TR(0x6ecff9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6ecffa:{NFSU2_TR(0x6ecffa);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x10ull))));
}
B6ecffd:{NFSU2_TR(0x6ecffd);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6ecfff:{NFSU2_TR(0x6ecfff);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
TAIL_STATIC(0x6ed003u,6ed);
}
XIT:NFSU2_TR_EXIT(0x6ec,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
